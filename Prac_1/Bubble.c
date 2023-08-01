#include <stdio.h>
#include <conio.h>
void main()
{
int a[20],temp, i, n, j;
printf("Enter the size of array:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	printf("Enter a[%d]:",i);
	scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
	
	for(j=0;j<n-1-i;j++)
	{
		if(a[j]>a[j+1])
		{
		temp=a[j];
	   a[j]=a[j+1];
	   a[j+1]=temp;
		
		}
	}

}
	
	
	
printf("The sorted array is: ");
for(i=0;i<n;i++)
{
	printf(" %d ",a[i]);
}

getch();
}

