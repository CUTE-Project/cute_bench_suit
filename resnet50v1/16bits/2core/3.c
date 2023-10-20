//ic64 ih56 oc64 oh56 kh1 ph0n
#include <stdio.h>
#include "ygjk.h"
#include "3.h"
#define OC 8
#define IC 16
#define IH 56
#define IW 56
#define OH 56
#define OW 56
#define KH 1
#define KW 1
#define ICB 4
#define OCB 4
#define STRIDEH 1
#define STRIDEW 1
#define PADDINGH 0
#define PADDINGW 0
int main()
{
	long long res1=1;
        int i,j,k,p,q;
	printf("%p %p %p\n", a, b, c);
//	printf("**************************************************\n");
      	//Aaddr ic
   	YGJK_INS_RRR( res1, a, IC/dataType, 0);
	//ih iw	
	YGJK_INS_RRR( res1, IH, IW, 0);
    	//strideH strideW
   	YGJK_INS_RRR( res1, STRIDEH, STRIDEW, 0);
	//icb bAddr
	YGJK_INS_RRR( res1, ICB, b, 0);
	//oc kh
    	YGJK_INS_RRR( res1, OC, KH, 0);
   	//kw ohb
   	YGJK_INS_RRR( res1, KW, OHB, 0);
	//paddingH paddingW	
	YGJK_INS_RRR( res1, PADDINGH, PADDINGW, 0);
	//oh ow	
	YGJK_INS_RRR( res1, OH, OW, 0);
    	//cAddr
   	YGJK_INS_RRR( res1, c, dataType, 0);
//	printf("**************************************************\n");
        //Aaddr ic
        YGJK_INS_RRR( res1, a, IC/dataType, 4);
        //ih iw
        YGJK_INS_RRR( res1, IH, IW, 4);
        //strideH strideW
        YGJK_INS_RRR( res1, STRIDEH, STRIDEW, 4);
        //icb bAddr
        YGJK_INS_RRR( res1, ICB, y, 4);
        //oc kh
        YGJK_INS_RRR( res1, OC, KH, 4);
        //kw ohb
        YGJK_INS_RRR( res1, KW, OHB, 4);
        //paddingH paddingW
        YGJK_INS_RRR( res1, PADDINGH, PADDINGW, 4);
        //oh ow
        YGJK_INS_RRR( res1, OH, OW, 4);
        //cAddr
        YGJK_INS_RRR( res1, z, dataType, 4);
	res1=1;
	while(res1){
		YGJK_INS_RRR(res1, 0, 0, 1);
	}
	YGJK_INS_RRR(res1, 0, 0, 2);
	printf("acc time: %d cycles\n", res1);
//        YGJK_INS_RRR(res1, 0, 0, 5);
//        printf("compute: %d cycles\n", res1);
	YGJK_INS_RRR(res1, 0, 0, 3);
	printf("acc read req: %d\n", res1);
	YGJK_INS_RRR(res1, 0, 0, 4);
	printf("acc write req: %d\n", res1);
//	int u = 1.0*16*16*8*4*3*3*16;
//	printf("utilization rate %d \n", u);
//	printf("----------------------\n");
		
//	for(;i<1000;i++){
//		asm("nop");
//	}
/*
	for(i=0;i<8;i++){
		for(j=0;j<16;j++){
			for(k=0;k<16;k++){
				for(p=0;p<4;p++){
					printf("%d ", c[i*16*16*4+j*16*4+k*4+p]);
				}
				printf("\n");
			}
			printf("\n");
		}
		printf("\n");
	}
*/
    return 0;
}
