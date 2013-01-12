#include <ruby.h>
#include <stdio.h>

static VALUE read_fpga(int argc, VALUE *argv, VALUE serlf)
{
	VALUE val, result;

	return result;
}	

void Init_pv_adc() {
	VALUE mADC;
	mADC = rb_define_module("PvADC");
	rb_define_module_function(mADC, "read_fpga", read_fpga, -1);
}
