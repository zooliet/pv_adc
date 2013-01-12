# -*- encoding: utf-8 -*-
lib = File.expand_path('../lib', __FILE__)
$LOAD_PATH.unshift(lib) unless $LOAD_PATH.include?(lib)
require 'pv_adc/version'

Gem::Specification.new do |gem|
  gem.name          = "pv_adc"
  gem.version       = PvADC::VERSION
  gem.authors       = ["Junhyun Shin"]
  gem.email         = ["hl1sqi@gmail.com"]
  gem.description   = %q{Ultrasound card ADC sampling}
  gem.summary       = %q{PvADC.sampling, PvADC.fft}
  gem.homepage      = "zoolu.co.kr"

  gem.files         = `git ls-files`.split($/)
  gem.executables   = gem.files.grep(%r{^bin/}).map{ |f| File.basename(f) }
  gem.test_files    = gem.files.grep(%r{^(test|spec|features)/})
  gem.require_paths = ["lib", "ext"]
  gem.extensions    = ["ext/extconf.rb"]
end

