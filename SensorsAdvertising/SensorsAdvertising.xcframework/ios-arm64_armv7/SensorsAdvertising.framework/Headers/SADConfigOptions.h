//
// SADConfigOptions.h
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

NS_ASSUME_NONNULL_BEGIN

@interface SADConfigOptions : NSObject <NSCopying>

/// 指定初始化方法
/// @param launchOptions App 启动时的 launchOptions
- (instancetype)initWithLaunchOptions:(nullable id)launchOptions NS_DESIGNATED_INITIALIZER;

/// 禁用 init 初始化
- (instancetype)init NS_UNAVAILABLE;

/// 禁用 new 初始化
+ (instancetype)new NS_UNAVAILABLE;

/// 激活事件自定义属性
@property (nonatomic, copy) NSDictionary *appInstallProperties;

/// 激活事件关闭渠道匹配的回调请求, 默认值为 NO
@property (nonatomic, assign) BOOL disableAppInstallCallback;

@end

NS_ASSUME_NONNULL_END
