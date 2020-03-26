#include<stdio.h>
#include<conio.h>
int main()
{
 int a[4],i,s,l;
 printf("Enter the elments of array\n");
 for(i=0;i<4;i++)
 scanf("%d",&a[i]);
 for (i=0;i<4;i++)
 printf("%d\t",a[i]);
 for(i=0;i<4;i++)
 {
 	if(a[i]<s)
 	{
 	s=a[i];
    }
 	else if (a[i]>l)
	{
 	l=a[i];
    }   
 }
 printf("\nLargest element is %d and smallest element is %d",l,s);
 getch();
}
