//ic128 ih112 oc128 oh112 kh3 ph1
#include <stdio.h>
#include "ygjk.h"
#include "4.h"
#define OC 8
#define IC 32
#define IH 112
#define IW 112
#define OH 112
#define OW 112
#define KH 3
#define KW 3
#define ICB 4
#define OCB 4
#define STRIDEH 1
#define STRIDEW 1
#define PADDINGH 1
#define PADDINGW 1
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
//      printf("**************************************************\n");
        //Aaddr ic
        YGJK_INS_RRR( res1, a, IC/dataType, 8);
        //ih iw
        YGJK_INS_RRR( res1, IH, IW, 8);
        //strideH strideW
        YGJK_INS_RRR( res1, STRIDEH, STRIDEW, 8);
        //icb bAddr
        YGJK_INS_RRR( res1, ICB, e, 8);
        //oc kh
        YGJK_INS_RRR( res1, OC, KH, 8);
        //kw ohb
        YGJK_INS_RRR( res1, KW, OHB, 8);
        //paddingH paddingW
        YGJK_INS_RRR( res1, PADDINGH, PADDINGW, 8);
        //oh ow
        YGJK_INS_RRR( res1, OH, OW, 8);
        //cAddr
        YGJK_INS_RRR( res1, f, dataType, 8);
//      printf("**************************************************\n");
        //Aaddr ic
        YGJK_INS_RRR( res1, a, IC/dataType, 12);
        //ih iw
        YGJK_INS_RRR( res1, IH, IW, 12);
        //strideH strideW
        YGJK_INS_RRR( res1, STRIDEH, STRIDEW, 12);
        //icb bAddr
        YGJK_INS_RRR( res1, ICB, n, 12);
        //oc kh
        YGJK_INS_RRR( res1, OC, KH, 12);
        //kw ohb
        YGJK_INS_RRR( res1, KW, OHB, 12);
        //paddingH paddingW
        YGJK_INS_RRR( res1, PADDINGH, PADDINGW, 12);
        //oh ow
        YGJK_INS_RRR( res1, OH, OW, 12);
        //cAddr
        YGJK_INS_RRR( res1, k, dataType, 12);
	res1=1;
	while(res1){
		YGJK_INS_RRR(res1, 0, 0, 1);
	}
	YGJK_INS_RRR(res1, 0, 0, 2);
	printf("acc time: %dcycles\n", res1);
        YGJK_INS_RRR(res1, 0, 0, 5);
        printf("compute: %dcycles\n", res1);
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
