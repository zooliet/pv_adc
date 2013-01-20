#include <ruby.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static VALUE read_fpga(int argc, VALUE *argv, VALUE serlf)
{
	VALUE val, result;
	FILE *fp;
	unsigned short buf[1024];
	int i;
	
	memset((char *)buf, 0, 2048);  // zero stuffing...
	
	if((fp = fopen("/dev/pvdspb_adc1", "rb")) == NULL) {
		printf("File open faild. You may check /dev/pvdspb_adc1 and pvdspb_adc.ko.\n");
	}
	else {
		fread(buf, 2, 1024, fp);			// when fixed later, it should be 256 -> 1024
		fclose(fp);
	}
	
	result = rb_ary_new();
	for(i = 0; i < 1024; i++) {		
    // printf("%d: 0x%04X", i, buf[i]);		
		rb_ary_push(result, INT2FIX(buf[i]));
	}

	return result;
}	

void Init_pv_adc() {
	VALUE mADC;
	mADC = rb_define_module("PvADC");
	rb_define_module_function(mADC, "read_fpga", read_fpga, -1);
}
