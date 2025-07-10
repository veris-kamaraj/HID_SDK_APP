Pod::Spec.new do |s|
  s.name             = "OrigoNAOSDK-Debug"
  s.version          = "4.11.17"
  s.license      = {
     :type => 'Copyright',
     :text => <<-LICENSE
        Copyright 2022 HID Global Corporation. All rights reserved.
        LICENSE
   }

  s.homepage     = 'https://www.hidglobal.com/product-display/cards-and-credentials'
  s.authors      = { 'HID Global Corporation' => 'customerservice@hidglobal.com' }
  s.summary      = 'Origo SDK Extension framework to support Identity Positioning'
  s.source       = {:path => '.'  }
  s.framework    = 'SystemConfiguration'
  s.platform     = :ios, '12.0'
  s.ios.deployment_target = '12.0'
  s.requires_arc = true
  s.xcconfig =   { 'OTHER_CFLAGS' => '$(inherited) -DCPU_LITTLE_ENDIAN -DCHIP_GCC -D__ECLIPSE__' }
  s.requires_arc = true

  s.ios.frameworks = 'Foundation', 'CoreTelephony', 'CoreLocation', 'CoreMotion', 'UIKit', 'SystemConfiguration', 'CoreBluetooth', 'CoreData'

  s.watchos.deployment_target = '4.0'
  s.watchos.frameworks = 'Foundation', 'Security', 'CoreLocation', 'CoreMotion', 'UIKit'
  s.module_name = 'OrigoNAOSDK'

  s.vendored_frameworks = 'OrigoNAOSDK.xcframework'
end
