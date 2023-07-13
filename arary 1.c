#include<stdio.h>
main()
{
	int a[100],i,n;
	{
		printf("HOE MANY VALUE INPUT IN ARRAY=");
		scanf("%d",&n);
		printf("ENTER ARRAY ELEMENT=");
		for(i=0;i<=n;i++)
		{
			printf("a[%d]=",i);
			scanf("%d",&a[i]);
		}
		for(i=0;i<=n;i++)
		{
			printf("%d ",a[i]);	
		} 
	}
	
}


