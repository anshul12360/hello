#include<stdio.h>
#include<conio.h>
int main()
{
	int a=1,b=2,c=0,i;
	printf("%d\n",a);
	printf("%d\n",b);
	for(i=0;i<10;i++)
	{
		c=a+b;
	
		printf("%d\n",c);
		a=b;
		b=c;
	}
	return 0;
			

}
