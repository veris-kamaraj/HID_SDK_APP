Pod::Spec.new do |s|
  s.name             = "OrigoSDK-Debug"
  s.version          = "3.3.0"
  s.license      = {
     :type => 'Copyright',
     :text => <<-LICENSE
        Copyright 2024 HID Global Corporation. All rights reserved.
        LICENSE
   }

  s.homepage     = 'https://www.hidglobal.com/product-display/cards-and-credentials'
  s.authors      = { 'HID Global Corporation' => 'customerservice@hidglobal.com' }
  s.summary      = 'Open readers with Origo MobileKeys'
  s.source       = {:path => '.'  }
  s.framework    = 'SystemConfiguration'
  s.platform     = :ios, '15.0'
  s.ios.deployment_target = '15.0'
  s.requires_arc = true
  s.xcconfig =   { 'OTHER_CFLAGS' => '$(inherited) -DCPU_LITTLE_ENDIAN -DCHIP_GCC -D__ECLIPSE__' }
  s.requires_arc = true

  s.ios.frameworks = 'Foundation', 'CoreTelephony', 'Security', 'CoreLocation','CoreMotion', 'UIKit', 'SystemConfiguration', 'LocalAuthentication'

  s.watchos.deployment_target = '7.0'
  s.watchos.frameworks = 'Foundation', 'Security', 'CoreLocation','CoreMotion', 'UIKit'
  s.module_name = 'OrigoSDK'
  s.resource_bundles = {
    'OrigoSDK-Debug_Privacy' => ['OrigoSDK/PrivacyInfo.xcprivacy']
  }

  s.dependency 'JSONModel'
  s.dependency 'CocoaLumberjack'
  s.dependency 'Mixpanel'
  s.dependency 'BerTlv'
  s.vendored_frameworks = 'OrigoSDK.xcframework'
end
