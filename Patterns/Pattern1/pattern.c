// Program of Pattern  		:)



#include<stdio.h>
#include<conio.h>


void main(){

	int num,i,j,m,n,p,q;

	clrscr();

	printf("Enter the Limit : ");
	scanf("%d",&num);

	if(num%2!=0){

	for(i=0;i<num/2;i++){
		for(j=0;j<num-1;j++){

			if(i==0)
			 printf("*");
			else
			 printf(" ");

			 if(j==num-2)
			  printf("*");
		}
		printf("\n");
	}


	for(m=num/2;m<=num/2;m++){
		for(n=0;n<num*2-1;n++){
			if(n<num-1)
			printf(" ");
			else
			printf("*");
		}
		printf("\n");
	}


	for((p=num/2)+1;p<num-1;p++){
		for(q=0;q<num-1;q++){
			if(p==num-2)
			 printf("*");
			else
			 printf(" ");
			if(q==num-2)
			 printf("*");
		}

		printf("\n");
	}

	}

	else
		printf("\n\nEntered limit cannot be recognized  \t\t:(");


	getch();


}
