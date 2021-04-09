#include <stdio.h>
#include <string.h>
int *max(int *addr,int num){
	static int value;
	for (int i=0; i<num; i++)  {
		if (value < *(addr+i))
              		value=*(addr+i);    
        }
	return &value; 
}
int *min(int *addr,int num){
	static int value=65536;
	for(int i=0;i<num;i++){    
		if(value>*(addr+i))
			value=*(addr+i);
	}
	return &value;
}
float *average(int *addr,int num){
	static float value;
	for(int i=0;i<num;i++) 
		value+=*(addr+i);
	value/=num;
	return &value;
}
int *median(int *addr,int num){
	int buf;
	static int value[]={0};
	memcpy(value,addr,sizeof(int)*num);
	for (int i=0; i<num-1; i++)  {
       	 for (int j=0; j<num-1-i; j++) {
          		  if (value[j] > value[j+1])  {
              		      buf = value[j];
                	      value[j] = value[j+1];
                	      value[j+1] = buf;
                         }
                 }        
        }
        if(num%2!=0)
		return &value[num/2]; 	 
	else
		return &value[num/2-1];
}
int *ascend(int *addr,int num){
	int buf;
	static int value[]={0};
	memcpy(value,addr,sizeof(int)*num);
	for (int i=0; i<num-1; i++)  {
       	 for (int j=0; j<num-1-i; j++) {
          		  if (value[j] > value[j+1])  {
              		      buf = value[j];
                	      value[j] = value[j+1];
                	      value[j+1] = buf;
                         }
                 }        
        }
	return value;  
}
int *descend(int *addr,int num){
	int buf;
	static int value[]={0};
	memcpy(value,addr,sizeof(int)*num);
	for (int i=0; i<num-1; i++)  {
       	 for (int j=0; j<num-1-i; j++) {
          		  if (value[j] < value[j+1])  {
              		      buf = value[j];
                	      value[j] = value[j+1];
                	      value[j+1] = buf;
                         }
                 }        
        }
	return value;  
}
