#include<stdio.h>
#include<conio.h>
int main()
{
	int a[6],i,j,n,temp;
	printf("Enter the no. of elements ");
	scanf("%d",&n);
	printf("Enter the elements of array");
	for(i=0;i<n;i++)
	scanf("\n%d",&a[i]);
	printf("Input array is:\n");
	for(i=0;i<n;i++)
	printf("\n%d",a[i]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1]);
			{
				temp=a[j];
			    a[j]=a[j+1];
			    a[j+1]=temp;
			}
		}
	}
	printf("Sorted array is:\n");
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
	getch();
}
