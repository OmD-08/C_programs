#include<stdio.h>
int main(){
	int day;
	printf("Enter day number (1-7) : ");
	scanf("%d",&day);
	
	// Switch statements:
	switch(day){
	case 1:
		printf("Monday\n");
	  break;
	case 2:
		printf("Tuesday\n");
		break;
	case 3:
		printf("Wednesday\n");
		break;
	case 4:
		printf("Thursday\n");
		break;
	case 5:
	    printf("Friday\n");
		break;
	case 6:
	    printf("Saturday\n");		
		break;
	case 7:
        printf("Sunday\a");
		break;
									
	default:
	    printf("Invalid day ! Please enter 1-7.\n");
	}
	
		
	return 0;
}
