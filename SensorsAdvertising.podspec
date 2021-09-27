Pod::Spec.new do |s|
  s.name = 'SensorsAdvertising'
  s.version = '0.0.1'
  s.summary = 'The official iOS SDK of Sensors Advertising.'
  s.homepage = 'http://www.sensorsdata.cn'
  s.license = { :type => 'Apache 2.0', :file => 'LICENSE' }
  s.source = { :git => 'https://github.com/sensorsdata/sad-sdk-ios.git', :tag => 'v' + s.version.to_s}
  s.author = 'Sensors Data'
  s.platform = :ios
  s.ios.deployment_target = '8.0'
  s.requires_arc = true
  s.cocoapods_version = '>= 1.5.0'
  s.ios.framework = 'UIKit', 'Foundation', "SystemConfiguration", 'AdSupport', 'iAd'
  s.weak_frameworks = 'AppTrackingTransparency', 'AdServices'
  s.pod_target_xcconfig = { 'PRODUCT_BUNDLE_IDENTIFIER': 'com.sensorsdata.SensorsAdvertising', 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'}
  s.xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  s.static_framework = true

  base_dir = 'SensorsAdvertising/'
  s.vendored_frameworks = base_dir + 'SensorsAdvertising.framework'

  s.dependency 'SensorsAnalyticsSDK', '>= 2.6.3'
end
