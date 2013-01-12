#ifndef	_PVDSPB_ADC_H_
#define	_PVDSPB_ADC_H_

#define	PVDSPB_ADC_MAJOR	200	/* Temporally 200 */
#define	PVDSPB_ADC_NUM_DEVS	1	/* ADC1 only, at this moment */
#define SAMPLE_SIZE		2	/* 16 bit */
#define NUM_SAMPLES		256	/* 256 samples per set */
#define BUF_MAX_CNT		15	/* 16 sets per buffer */
#define BUF_MIN_CNT		0	
#define BUF_SIZE		8192	/* Buffer size : 256*16*2 */

#define ADC1_INTRT		171
#define ADC2_INTRT		172

#define ADC1_ADDR		0x28000400
#define ADC2_ADDR		0x28000600

#endif	/* _PVDSPB_ADC_H_ */
