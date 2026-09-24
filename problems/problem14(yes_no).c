#include<stdio.h>
#include<conio.h>

int main(){
	char ch;
	
	printf("Press Y or N :");
	ch = getche();
	
	if(ch == 'y'){
		printf("\nYou typed : Yes");
	}
	else if(ch  == 'Y'){
		printf("\nYou typed : Yes");
	}
	else if(ch == 'n'){
		printf("\nYou typed : No");
	}
	else if(ch == 'N'){
		printf("\nYou typed : No");
	}
	else{
		printf("\nInvalid Input ");
	}
	
	
	return 0;
}
