Pod::Spec.new do |s|
  s.name = 'SensorsAdvertising'
  s.version = '0.1.5'
  s.summary = 'The official iOS SDK of Sensors Advertising.'
  s.homepage = 'http://www.sensorsdata.cn'
  s.license = { :type => 'Apache 2.0', :file => 'LICENSE' }
  s.source = { :git => 'https://github.com/sensorsdata/sad-sdk-ios.git', :tag => 'v' + s.version.to_s}
  s.author = 'Sensors Data'
  s.platform = :ios
  s.ios.deployment_target = '9.0'
  s.requires_arc = true
  s.cocoapods_version = '>= 1.5.0'
  s.ios.framework = 'UIKit', 'Foundation', "SystemConfiguration"
  s.weak_frameworks = 'AdServices'
  s.pod_target_xcconfig = { 'PRODUCT_BUNDLE_IDENTIFIER': 'com.sensorsdata.SensorsAdvertising'}
  s.dependency 'SensorsAnalyticsSDK', '>= 4.4.1'
  s.default_subspec = 'Core'

  s.subspec 'Core' do |c|
    c.framework = 'AdSupport'
    c.weak_frameworks = 'AppTrackingTransparency'
    base_dir = 'SensorsAdvertising/'
    c.vendored_frameworks = base_dir + 'SensorsAdvertising.xcframework'
  end

  s.subspec 'AdServices' do |a|
    base_dir = 'SensorsAdvertising_AdServices/'
    a.vendored_frameworks = base_dir + 'SensorsAdvertising.xcframework'
  end

end
