// To find even  and odd
#include<stdio.h>
int main(){
	int i;
	int a[11] = { 0,10,5,3,1,6,4,7,2,9,8};
   
    printf("Numbers :");    // All numbers
	for(i = 0;i<=10;i++){
     	printf(" %d  ",a[i]);	
    } 
    
    printf("\nEven :");    	 			// Even
    for(i=0;i<=10;i++){
       if(a[i] % 2 == 0){
	   	printf(" %d ",a[i]);
       } 
 	}
 	
    printf("\nodd :"); 				 // Odd
    for(i=0;i<=10;i++){
       if(a[i] % 2 != 0){
	   	printf(" %d ",a[i]);
       } 
 	}
    
    return 0;
}
