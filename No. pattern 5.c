#include<stdio.h>
 #include<conio.h>
 int main()
 {
 	int i,j,k,r;
 	printf("Enter no of rows");
 	scanf("%d",&r);
 	for(i=1;i<=r;i++)
 	{
 		k=1;
 		for(j=1;j<=r;j++)
 		 {
 		 	if(j<=i)
			{
			printf("%d",k);
			k=1-k;
		    }
 		 	else
 		 	printf(" ");
		  }
		  printf("\n");
	 }
 }
