//
//  OrigoNAOLocationHandleDelegate.h
//  OrigoNAOSDK
//
//
#import <CoreLocation/CoreLocation.h>
#import <OrigoNAOSDK/ORIGODBNAOERRORCODE.h>
#import <OrigoNAOSDK/ORIGODBTNAOFIXSTATUS.h>

@protocol OrigoNAOLocationHandleDelegate <NSObject>

- (void) didFailWithErrorCode:(ORIGODBNAOERRORCODE)errCode andMessage:(NSString*)message;

- (void) didLocationChange:(CLLocation *) location;

- (void) didLocationStatusChanged:(ORIGODBTNAOFIXSTATUS) status;

- (void) didEnterSite:(NSString *)name;

- (void) didExitSite:(NSString *)name;

- (void) didEnterGeofence:(int)regionId andName:(NSString*)regionName;

- (void) didExitGeofence:(int)regionId andName:(NSString*)regionName;

- (void) didSynchronizationSuccess;

- (void) didSynchronizationFailure:(ORIGODBNAOERRORCODE)errorCode msg:(NSString*) message;

- (void) uploadOrigoNAOLogInfo:(BOOL)success message:(NSString *)message;
/** Wifi Activation Request

 Notifies that the Wifi is off and required by the service. You should usually display a pop-up to the user asking to switch on its Wifi.
 */
- (void) requiresWifiOn;

/** BLE Activation Request

 Notifies that the BLE (Bluetooth 4.0) is off and required by the service. You should usually display a pop-up to the user asking to switch on its BLE.
 */
- (void) requiresBLEOn;

/** Location Activation Request
 
 Notifies that the Location services are off and required by the service. You should usually display a pop-up to the user asking to switch on its Location services.
 */
- (void) requiresLocationOn;

/** Compass Calibration Request
 
 Notifies that the compass need to be calibrated.
 */
- (void) requiresCompassCalibration;


/** Compass Calibrated (Optional)
 
 Notifies that the compass is now calibrated
 */
@optional
- (void) didCompassCalibrated;

@end
