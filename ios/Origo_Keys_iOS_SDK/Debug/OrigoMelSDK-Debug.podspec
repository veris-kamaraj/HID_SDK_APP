Pod::Spec.new do |s|
  s.name             = "OrigoMelSDK-Debug"
  s.version          = "1.0.1"
  s.license      = {
     :type => 'Copyright',
     :text => <<-LICENSE
        Copyright 2022 HID Global Corporation. All rights reserved.
        LICENSE
   }

  s.homepage     = 'https://www.hidglobal.com/product-display/cards-and-credentials'
  s.authors      = { 'HID Global Corporation' => 'customerservice@hidglobal.com' }
  s.summary      = 'Open readers with OrigoMelSDK'
  s.source       = { :path => '.'  }
  s.framework    = 'SystemConfiguration'
  s.platform     = :ios, '15.0'
  s.ios.deployment_target = '15.0'
  s.requires_arc = true
  s.xcconfig =   { 'OTHER_CFLAGS' => '$(inherited) -DCPU_LITTLE_ENDIAN -DCHIP_GCC -D__ECLIPSE__' }
  s.requires_arc = true

  s.ios.frameworks = 'Foundation', 'CoreTelephony', 'CoreData', 'SystemConfiguration', 'UIKit'

  s.watchos.deployment_target = '7.0'
  s.watchos.frameworks = 'Foundation', 'CoreTelephony', 'CoreData', 'SystemConfiguration', 'UIKit'
  s.module_name = 'OrigoMelSDK'

  s.vendored_frameworks = 'OrigoMelSDK.xcframework'
end
