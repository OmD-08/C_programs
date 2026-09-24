#include<stdio.h>
int print(int row,int columns){
	int i = 0;
	int j = 0;
	
	for(i=0;i<=row;i++){
		for(j=i+1;j<=columns;j++){
			printf(" * ");
		}
			printf("\n");
	}

}

int main(){
	int row;
	printf("Enter the number of rows : ");
	scanf("%d",&row);
	
	int columns;
	printf("Enter the number of columns : ");
	scanf("%d",&columns);
	
	print(row,columns);
}
