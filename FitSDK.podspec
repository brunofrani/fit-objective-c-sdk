Pod::Spec.new do |s|
  s.name             = 'FIT'
  s.version          = '21.115.0'
  s.summary          = 'The FIT Objective-C SDK and Swift.'
  s.homepage         = 'https://developer.garmin.com/fit/overview'
  s.license          = { :type => 'MIT', :file => 'LICENSE.md' }
  s.author           = { 'Garmin' => 'https://github.com/garmin' }
  s.source           = { :git => 'https://github.com/brunofrani/fit-objective-c-sdk.git', :tag => s.version.to_s }
  s.ios.deployment_target = '13.0'
  s.swift_version = '5.0'
  s.source_files = 'Sources/**/*'
end