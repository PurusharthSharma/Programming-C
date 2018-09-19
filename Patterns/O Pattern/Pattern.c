//  Program of  O  Pattern		:)


#include<stdio.h>
#include<conio.h>

void main(){

	int num,i,j;

	clrscr();


	printf("Enter the Limit :");
	scanf("%d",&num);

	for(i=0;i<num;i++){
		for(j=0;j<num;j++){

			if(i==0 || i==num-1 || j==0 || j==num-1)
			 printf("*");

			else
			 printf(" ");

		}
		printf("\n");
	}


	getch();

}
