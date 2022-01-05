//
// SensorsAdvertising+Tracking.h
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

#import "SensorsAdvertising.h"
#import <AppTrackingTransparency/AppTrackingTransparency.h>

NS_ASSUME_NONNULL_BEGIN

@interface SensorsAdvertising (Tracking)

/// 请求授权 IDFA 后的结果回调
/// @param status 授权状态
- (void)setTrackingAuthorizationStatus:(ATTrackingManagerAuthorizationStatus)status API_AVAILABLE(ios(14));

@end

NS_ASSUME_NONNULL_END
