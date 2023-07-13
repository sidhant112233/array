#include<stdio.h>
main()
{
	int a[100],i,n,sum=0,eve;
	{
		printf("HOE MANY VALUE INPUT IN ARRAY=");
		scanf("%d",&n);
		printf("ENTER ARRAY ELEMENT=");
		for(i=0;i<n;i++)
		{
			printf("a[%d]=",i);
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++)
		{
		sum =sum+a[i];
		eve =sum/n;
		} 
		printf("eve=%d",eve);
	}
	
}

