//
// SensorsAnalyticsSDK+SADAppInstall.h
// SensorsAdvertising
//
// Created by yuqiang on 2021/8/19.
// Copyright © 2021 Sensors Data Co., Ltd. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#if __has_include(<SensorsAnalyticsSDK/SensorsAnalyticsSDK.h>)
#import <SensorsAnalyticsSDK/SensorsAnalyticsSDK.h>
#elif __has_include("SensorsAnalyticsSDK.h")
#import "SensorsAnalyticsSDK.h"
#endif

NS_ASSUME_NONNULL_BEGIN

/// 该扩展用于禁用激活事件接口; 集成广告 SDK 后, 由广告 SDK 自动采集激活事件, 无需手动调用
@interface SensorsAnalyticsSDK (SADAppInstall)

- (void)trackAppInstall NS_UNAVAILABLE;

- (void)trackAppInstallWithProperties:(nullable NSDictionary *)properties NS_UNAVAILABLE;

- (void)trackAppInstallWithProperties:(nullable NSDictionary *)properties disableCallback:(BOOL)disableCallback NS_UNAVAILABLE;

- (void)trackInstallation:(NSString *)event NS_UNAVAILABLE;

- (void)trackInstallation:(NSString *)event withProperties:(nullable NSDictionary *)propertyDict NS_UNAVAILABLE;

- (void)trackInstallation:(NSString *)event withProperties:(nullable NSDictionary *)propertyDict disableCallback:(BOOL)disableCallback NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
