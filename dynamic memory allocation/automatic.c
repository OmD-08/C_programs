#include<stdio.h>

int main(){
  auto int a = 10,i;
  
  printf(" %d ",a++);
  printf(" %d ",i);
  
  {
  	int a = 20;
  	for(i=0;i<3;i++){
  		printf(" %d ",a);  // 20 will be printed 3 times since it is the local value of a
	  }
  }
 
 printf(" %d ",a);  // it will be printed since the scope of a = 20 is ended

return  0;

 printf(" %d ",a);
}

