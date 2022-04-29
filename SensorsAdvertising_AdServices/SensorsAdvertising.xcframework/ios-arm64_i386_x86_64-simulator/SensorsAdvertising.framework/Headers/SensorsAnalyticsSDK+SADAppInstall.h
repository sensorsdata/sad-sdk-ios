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

#define SAD_DISABLE_INSTALL __attribute__((unavailable(" ⚠️ 请先阅读神策广告 SDK 集成文档， 并在必要时联系我们的技术支持人员。\n https://manual.sensorsdata.cn/sa/latest/tech_sdk_client_ad_ios-35685041.html")))

NS_ASSUME_NONNULL_BEGIN

/// 该扩展用于禁用激活事件接口; 集成广告 SDK 后, 由广告 SDK 自动采集激活事件, 无需手动调用
@interface SensorsAnalyticsSDK (SADAppInstall)

#pragma mark - 通过 unavailable 标记, 禁止手动调用激活接口
- (void)trackAppInstall SAD_DISABLE_INSTALL;

- (void)trackAppInstallWithProperties:(nullable NSDictionary *)properties SAD_DISABLE_INSTALL;

- (void)trackAppInstallWithProperties:(nullable NSDictionary *)properties disableCallback:(BOOL)disableCallback SAD_DISABLE_INSTALL;

- (void)trackInstallation:(NSString *)event SAD_DISABLE_INSTALL;

- (void)trackInstallation:(NSString *)event withProperties:(nullable NSDictionary *)propertyDict SAD_DISABLE_INSTALL;

- (void)trackInstallation:(NSString *)event withProperties:(nullable NSDictionary *)propertyDict disableCallback:(BOOL)disableCallback SAD_DISABLE_INSTALL;

@end

NS_ASSUME_NONNULL_END
