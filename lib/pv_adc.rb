require "pv_adc/version"
require "pv_adc/pv_adc"

module PvADC
  # Your code goes here...
  def self.sampling
    puts("***PvADC.sampling is called.")
    read_fpga
  end
end


