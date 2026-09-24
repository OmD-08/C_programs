#include<stdio.h>
int main(){

 int age,vote;
 
  printf("-----------------Welcome---------------\n          Enter your age : ");
  scanf("%d",&age);
  if(age >= 18 && age <= 100){
  	vote = 1;
  }
	  if(age > 0 && age < 18 ){
  		vote = 2;	
	  } 
  
  
//  printf("\n%d\n",vote);

 switch(vote){
    case 1:
		printf("           You can vote\n");
 	break;

	case 2:
 	    printf("           You cannot vote\n");
 	break;
 
 	default:
 		printf("-----Invalid age please try again-----\n");
 }

  printf("-------------Thank You-----------------");


    return 0;
    
}
