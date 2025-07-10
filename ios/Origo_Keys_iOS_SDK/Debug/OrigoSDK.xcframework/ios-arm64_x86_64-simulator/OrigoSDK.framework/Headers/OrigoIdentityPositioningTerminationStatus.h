//
//  OrigoIdentityPositioningTerminationStatus.h
//  OrigoSDK
//
//  Copyright © 2024 HID Global Corporation. All rights reserved.
//

/**
 * Represents the status of deregistration
 */
typedef NS_ENUM(NSInteger, OrigoIdentityPositioningTerminationStatus) {
    /**
     * Process to deregister method trigger has started.
     */
    Initiated = 1,
    /**
     * Found location data awaiting synchronization with the cloud.
     */
    InProgress = 2,
    /**
     * Identity positioning terminated successfully.
     */
    Deregistered = 3,
    /**
     * Identity positioning termination failed.
     */
    Failed = 4
};
