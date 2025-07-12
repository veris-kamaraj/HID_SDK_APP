import Foundation
import React
import OrigoSDK

@objc(HidModule)
class HidModule: NSObject {
    private var origoKeysManager: OrigoKeysManager?
    private var resolveBlock: RCTPromiseResolveBlock?
    private var rejectBlock: RCTPromiseRejectBlock?

    private let APPLICATION_ID = "HID-VERIS-DEV" // Replace with real App ID
    private let VERSION = "HID-VERIS-DEV_1.0.0"
    private let BEACON_UUID = "F2A5E7D0-4C93-4B8F-9A69-31A1CE90223A"
    private let SUPPRESS_APPLE_PAY = true

    @objc
    static func requiresMainQueueSetup() -> Bool {
        return false
    }

    @objc
    func initializeSDK(_ resolve: @escaping RCTPromiseResolveBlock,
                       rejecter reject: @escaping RCTPromiseRejectBlock) {
        self.resolveBlock = resolve
        self.rejectBlock = reject

        let config: [String: Any] = [
            OrigoKeysOptionApplicationId: APPLICATION_ID,
            OrigoKeysOptionVersion: VERSION,
            OrigoKeysOptionBeaconUUID: BEACON_UUID,
            OrigoKeysOptionSuppressApplePay: SUPPRESS_APPLE_PAY
        ]

        origoKeysManager = OrigoKeysManager(delegate: self, options: config)
        origoKeysManager?.startup()
    }

    private func clearBlocks() {
        resolveBlock = nil
        rejectBlock = nil
    }
}

// MARK: - OrigoKeysManagerDelegate

extension HidModule: OrigoKeysManagerDelegate {
    func origoKeysDidStartup() {
        print("Origo SDK startup success")
        resolveBlock?([
            "status": "success",
            "initialized": true,
            "version": VERSION
        ])
        clearBlocks()
    }

    func origoKeysDidFail(toStartup error: Error) {
        print("Origo SDK startup failed: \(error.localizedDescription)")
        rejectBlock?("STARTUP_FAILED", "OrigoKeys startup failed", error)
        clearBlocks()
    }

    func origoKeysDidSetupEndpoint() {
        print("Origo endpoint setup successful")
        // Optional: React Native event or internal logic
    }

    func origoKeysDidFail(toSetupEndpoint error: Error) {
        print("Origo endpoint setup failed: \(error.localizedDescription)")
        // Optional: React Native event or internal logic
    }
}
