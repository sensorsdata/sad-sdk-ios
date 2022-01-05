//
// SensorsAdvertising.h
// SensorsAdvertising
//
// Created by yuqiang on 2021/8/16.
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

#import <Foundation/Foundation.h>
#import "SADConfigOptions.h"
#import "SensorsAnalyticsSDK+SADAppInstall.h"

NS_ASSUME_NONNULL_BEGIN

@interface SensorsAdvertising : NSObject

@property (class, nonatomic, readonly) SensorsAdvertising *sharedInstance NS_SWIFT_NAME(shared);

/// 初始化 SDK
/// @param configOptions 配置项
+ (void)startWithConfigOptions:(SADConfigOptions *)configOptions NS_SWIFT_NAME(start(configOptions:));

/// SDK 版本
- (NSString *)SDKVersion;

@end

NS_ASSUME_NONNULL_END

#if __has_include("SensorsAdvertising+Tracking.h")
#import "SensorsAdvertising+Tracking.h"
#import "SADConfigOptions+Tracking.h"
#endif
