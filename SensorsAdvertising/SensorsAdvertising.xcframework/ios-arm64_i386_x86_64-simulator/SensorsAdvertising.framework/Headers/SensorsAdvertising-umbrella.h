#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "SADConfigOptions.h"
#import "SensorsAdvertising.h"
#import "SensorsAnalyticsSDK+SADAppInstall.h"
#import "SADConfigOptions+Tracking.h"
#import "SensorsAdvertising+Tracking.h"

FOUNDATION_EXPORT double SensorsAdvertisingVersionNumber;
FOUNDATION_EXPORT const unsigned char SensorsAdvertisingVersionString[];

