#include <stdio.h>
#include <string.h>

int *seq(int *temp,int num){
	int buf;
	static int out[10];
	memcpy(out,temp,sizeof(int)*num);
	for (int i=0; i<num-1; i++)  {
       	 for (int j=0; j<num-1-i; j++) {
          		  if (out[j] > out[j+1])  {
              		      buf = out[j];
                	      out[j] = out[j+1];
                	      out[j+1] = buf;
                         }
                 }        
        }
	return out;  
}
