//
//  AppDelegate.m
//  SensorsAdvertisingDemo
//
//  Created by yuqiang on 2021/8/28.
//

#import "AppDelegate.h"
#import <SensorsAnalyticsSDK/SensorsAnalyticsSDK.h>
#import <SensorsAdvertising/SensorsAdvertising.h>

@interface AppDelegate ()

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    // Override point for customization after application launch.
    SAConfigOptions *saOptions = [[SAConfigOptions alloc] initWithServerURL:@"" launchOptions:launchOptions];
    saOptions.enableLog = YES;
    saOptions.autoTrackEventType = SensorsAnalyticsEventTypeAppStart | SensorsAnalyticsEventTypeAppEnd | SensorsAnalyticsEventTypeAppClick | SensorsAnalyticsEventTypeAppViewScreen;
    [SensorsAnalyticsSDK startWithConfigOptions:saOptions];

    SADConfigOptions *sadOptions = [[SADConfigOptions alloc] initWithLaunchOptions:launchOptions];
    [SensorsAdvertising startWithConfigOptions:sadOptions];

    return YES;
}

@end
