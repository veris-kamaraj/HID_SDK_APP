//
//  OrigoLocationHandlerDelegate.h
//  OrigoSDK
//
//  Copyright © 2021 HID Global. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OrigoLocationErrorCode.h"
#import "OrigoIdentityPositioningTerminationStatus.h"

/**
 * OrigoLocationHandlerDelegate has set of callback methods for various event of HID Identity Positioning location services.
 */
@protocol OrigoLocationHandlerDelegate <NSObject>

/**
  
 Notifies errors that occurs during the location service with error code. Refer 'Error Codes ->Origo Location Error Code' section in the documentation for more details about "OrigoLocationErrorCode".
 
  @param errorCode  Error code
 */
- (void)origoLocationHandlerDidReceiveError:(OrigoLocationErrorCode)errorCode;

/**
 * Notifies when HID Identity Positioning Credential is revoked and no longer location service enabled in the device.
 * All running IP services will be stopped and IP services related data will be cleared from the Origo Secured Storage, before this callback.
 */
- (void)origoLocationHandlerDidRevokeIPCredential;

@optional
/**
 * Notifies when ever a patch of location details are synced with Origo Cloud.
 */
- (void)origoLocationHandlerDidFinishLocationSync;

/**
 * Notifies when the "-[OrigoLocationHandler syncSiteInfo]" method completes the site information synchronization successfully.
 */
- (void)origoLocationHandlerDidFinishSiteInfoSync;

/**
 * Notifies when the credential attributes are updated. like site id and the location sync attributes.
 */
- (void)origoLocationHandlerDidUpdateCredential;

/**
 Notifies whenever user enter into a zone.
 */
- (void)origoLocationHandlerDidEnterZone:(nonnull NSString *)zoneName;

/**
 This method triggers whenever a user exits a designated zone.  However, to prevent excessive notifications due to user location fluctuations at the zone boundary, a delay mechanism is implemented:

 Enterprise Approach: A 30-second delay exists between the time a user leaves the zone and the method trigger.
 Premium Approach: A more flexible delay of 30 seconds to 2 minutes is implemented.
 This delay helps to filter out transient zone entries/exits that might occur when a user lingers near the edge of the beacon's signal range.
 */
- (void)origoLocationHandlerDidExitZone:(nonnull NSString *)zoneName;

/**
 * When the [OrigoLocationHandler deregister] is invoked, OrigoSDK stops the location tracking and will sync the location data available in SDS to Origo Cloud before clearing the credential from the app. use this delegate method to update the status of deregistration, Refer OrigoIdentityPositioningTerminationStatus class for more details.
 */
- (void)origoLocationHandlerDidUpdateDeregistrationStatus:(OrigoIdentityPositioningTerminationStatus)status error:(NSError *_Nullable)error;
@end
