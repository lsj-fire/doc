#include <stdio.h>
#include <string.h>
#include "show/show.h"
#include "lib/seq/seq.h"
#include "lib/formula/formula.h"
void main(){
	int a[]={2,16,32,8,23,16,24,1,5,8,12,13};
	int *asc,*mx,*mn,*dec;
	float *aver;
	asc=ascend(a,sizeof(a)/4);
	for(int k=0;k<sizeof(a)/4;k++) {
         	printf("%d\t",*asc++);  
       }    
       printf("\n");  
       dec=descend(a,sizeof(a)/4);
       for(int i=0;i<sizeof(a)/4;i++) {     
         	printf("%d\t",*dec++);    
       }   
       printf("\n"); 
       printf("max number is:%d\n",*max(a,sizeof(a)/4));         
       printf("min number is:%d\n",*min(a,sizeof(a)/4)); 
       printf("average number is:%.2f\n",*average(a,sizeof(a)/4));           
       printf("median is:%d !!!\n",*median(a,sizeof(a)/4)); 
}           
 

