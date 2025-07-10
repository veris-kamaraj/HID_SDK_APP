//
//  OrigoMDMProvider.h
//  OrigoSDK
//


#import <Foundation/Foundation.h>

/**
 *
 * OrigoMDMProvider class methods helps in identifying work profile status and
 * save the work profile configuration details.
 *
 * @note since version 3.0.0
 */
@interface OrigoMDMProvider : NSObject
/**
 * This method can be used to verify the device is enable/disable with MDM work profile
 * @return - YES on enable, NO on disable
 */
- (BOOL)isMDMEnabled;

/**
 * Returns the key value dictionary for the specified MDM is stored in the key named: com.apple.configuration.managed.
 *
 */
- (NSDictionary*)getManagedAppConfiguration;


@end
