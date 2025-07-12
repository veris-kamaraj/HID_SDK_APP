//
//  HidModule.m
//  HID
//
//  Created by veris on 11/07/25.
//

#import <React/RCTBridgeModule.h>

@interface RCT_EXTERN_MODULE(HidModule, NSObject)

RCT_EXTERN_METHOD(initializeSDK:(RCTPromiseResolveBlock)resolve
                  rejecter:(RCTPromiseRejectBlock)reject)

+ (BOOL)requiresMainQueueSetup
{
  return NO;
}

@end
