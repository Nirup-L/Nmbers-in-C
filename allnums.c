#include<stdio.h>
#include<math.h>
int perfect(a)
{ int i,sum=1;
 for(i=2;i<a;i++)
	{
		if(a%i==0)
			sum=sum+i;
	}
	if(a==sum)
	printf("%d\n",a);

}
int neon(a)
{
	int dig,sq,sum=0;
	sq=a*a;
	while(sq)
	{
		dig=sq%10;
		sum=sum+dig;
		sq=sq/10;
	}
	if(a==sum)
	printf("%d\n",a);
}
int disarium(a)
{
	int count,dig,num,temp,sum=0;
	num=a;
	temp=a;
	while(temp)
	{
		count=count+1;
		temp=temp/10;
	}
	while(num)
	{
		dig=num%10;
		sum=sum+pow(dig,count);
		count--;
		num=num/10;
	}
	if(a==sum)
	printf("%d\n",a);
}
int harshad(a)
{
	int num,dig,sum=0;
	num=a;
	while(num)
	{
		dig=num%10;
		sum=sum+dig;
		num=num/10;
	}
	if(a%sum==0)
	printf("%d\n",a);
}
int amstrong(a)
{
	int count=0,sum=0,dig,num,temp;
	num=a;
	temp=a;
	while(num)
	{
		count=count+1;
		num=num/10;
	}
	while(temp)
	{
		dig=temp%10;
		sum=sum+pow(dig,count);
		temp=temp/10;
	}
	if(a==sum)
	printf("%d\n",a);
}
int odd(a)
{
	if(a%2==1)
	printf("%d\n",a);
}
int even(a)
{
	if(a%2==0)
	printf("%d\n",a);
}
int prime(a)
{ int count=0,i;
  for(i=1;i<=a;i++)
  {
   if(a%i==0)
  count++;
  }
  if(count<=2)
  printf("%d\n",a);	
}
int main()
{
	int n,i,j,ch,count=0,e;
	printf("Enter the size of array :");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements in the array :\n");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("1-perfect number\n2-disarium number\n3-neon number\n4-harshad number\n5-amstrong number\n6-odd number\n7-even number\n8-prime numbers\n9-element search\n");
	printf("ENTER A CHOICE : ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("\nPERFECT NUMBERS\n");
			for(j=0;j<n;j++)
			perfect(arr[j]);
			break;
		case 2:
			printf("\nDISARIUM NUMBERS\n");
			for(j=0;j<n;j++)
			disarium(arr[j]);
			break;
			
		case 3:
			printf("\nNEON NUMBERS\n");
			for(j=0;j<n;j++)
			neon(arr[j]);
			break;
		case 4:
			printf("\nHARSHAD NUMBERS\n");
			for(j=0;j<n;j++)
			harshad(arr[j]);
			break;
		case 5:
			printf("\nAMSTRONG NUMBERS\n");
			for(j=0;j<n;j++)
			harshad(arr[j]);
			break;
		case 6:
			printf("\nODD NUMBERS\n");
			for(j=0;j<n;j++)
			odd(arr[j]);
			break;
		case 7:
			printf("\nEVEN NUMBERS\n");
			for(j=0;j<n;j++)
			even(arr[j]);
			break;
		case 8:	
		    printf("\nPRIME NUMBERS\n");
			for(j=0;j<n;j++)
			prime(arr[j]);
			break;
		case 9:
			printf("\nEnter the element to search :");
			scanf("%d",&e);
			for(i=0;i<n;i++)
			{
				if(arr[i]==e)
				{
					printf("Element found at %d\n",i);
					count++;
				}
			}
			if(count==0)
			printf("Element not found\n");
			break;	
		default:
			printf("Enter A valid choice\n");
    }   
    printf("\n- - - - - - - - - - - - - - - - - - \n\n");
    return 0;
}

