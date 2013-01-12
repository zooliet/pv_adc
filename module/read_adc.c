#include <stdio.h>

int main(void) {
	FILE	*fp;
	unsigned short buf[256];
	unsigned int i;

	memset(buf, 0, 512);	

	if((fp = fopen("/dev/pvdspb_adc1", "rb")) == NULL) {
		printf("File open failed.\n");
		exit(1);
	} else {
		printf("File open successfully.\n");
	}

	fread(buf, 2, 256, fp);

	for(i = 0; i < 256; i++)
		printf("%d: 0x%X\n", i, buf[i]);
	
	return 0;
}
