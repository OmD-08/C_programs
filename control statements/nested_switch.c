#include<stdio.h>
int main(){
	int dept,year;
	
	printf("Select Department :\n");
	printf("1. Computer Science\n");
	printf("2. Mechanical\n");
	printf("Enter department choice : ");
	scanf("%d",&dept);
	
	switch(dept){
		case 1: // Computer Science
		printf("\nSelect Year (1-3) : ");
		scanf("%d",&year);
		
		switch(year){
			case 1:
				printf("You are in Computer Science - 1st year\n");
			break;
			case 2:
				printf("You are in Computer Science - 2nd year\n");
			break;
			case 3:
				printf("You are in Computer Science - 3rd year\n");
			break;
			case 4:
					printf("You are in Computer Science - 4th Year\n");
				    break;
			
			default:
				printf("Invalid year for Computer Science.\n");
		}
			break;
			case 2:
				printf("\nSelect Year (1-4) : ");
				scanf("%d",&year);
				
			switch(year){
				case 1:
					printf("You are in Mechanical - 1st Year\n");
				    break;
				case 2:
					printf("You are in Mechanical - 2nd Year\n");
				    break;
				case 3:
					printf("You are in Mechanical - 3rd Year\n");
				    break;	
			 	case 4:
					printf("You are in Mechanical - 4th Year\n");
				    break;
				   
				    default:
				    printf("Invalid year for Mechanical.\n");
				    break;
			}
			break;
		default:
			printf("Invalid department choice.\n");
	}
	  
	
	
	return 0;
}
