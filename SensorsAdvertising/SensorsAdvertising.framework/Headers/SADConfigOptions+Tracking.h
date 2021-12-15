//
// SADConfigOptions+Tracking.h
// SensorsAdvertising
//
// Created by yuqiang on 2021/11/22.
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

#import "SADConfigOptions.h"

NS_ASSUME_NONNULL_BEGIN

@interface SADConfigOptions (Tracking)

/// 是否自动请求授权 IDFA, 默认值为 YES
@property (nonatomic, assign) BOOL autoRequestTrackingAuthorization;

@end

NS_ASSUME_NONNULL_END
