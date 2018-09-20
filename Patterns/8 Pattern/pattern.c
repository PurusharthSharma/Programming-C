// program to draw the pattern like 8		:)



#include<stdio.h>
#include<conio.h>


void main(){

	int num,i,j;

	clrscr();

	printf("Enter The Limit : ");
// limit must be greater than or equal to 5 and it should also be odd
	scanf("%d",&num);

	if(num>=5 && num%2!=0){

		for(i=0;i<num;i++){
			for(j=0;j<num;j++){
				if(i==0 || i==num/2 || i==num-1 || j==0 || j==num-1)
				 printf("*");
				else
				 printf(" ");
			}
			printf("\n");
		}


	}

	else
		printf("Enter THe Appropriate Limit\t\t:(");




	getch();

}
