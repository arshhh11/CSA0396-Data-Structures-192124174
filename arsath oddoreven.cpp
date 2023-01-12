#include<stdio.h>
int main (){
int arr[10],i,n,c_even=0,c_odd=0;
printf("enter the size of your array:");
scanf("%d",&n);
printf("enter the elements of your array:");
for(i=0;i<n;i++)
{
	scanf("%d",&arr[i]);
	
}
for (i=0;i<n;i++)
{
if (arr[i]%2==0)
{
c_even++;
}
else
{
c_odd++;
}
}
printf("even numbers in array:%d\n",c_even);
printf("odd numbers in array:%d",c_odd);
return 0;
}
