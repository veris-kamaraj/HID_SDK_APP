//
//  OrigoNAOBaseHandler.h
//  OrigoNAOSDK
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface OrigoNAOServiceHandle : NSObject

- (void)synchronizeData;

- (void)synchronizeDataWithAutoSync:(bool)autoSync;

- (void)synchronizeDataForSites:(NSArray*)siteIds;

/** Start Service
The service will start if not already running.

*/
- (BOOL)start;

/** Stop Service
If they are no more listeners, service will shut down.

*/
- (void)stop;

/** Restart Service
The service will restart if it has previously  run.

*/
- (BOOL)restart;

+ (void)enableOnSiteWakeUp;

@end

NS_ASSUME_NONNULL_END
