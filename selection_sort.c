#include<stdio.h>
int main()
{
	int arr[50],n,i,temp,comparisions=0,swaps=0,j;
	printf("Enter the range:");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<=n-1;i++){
		for(j=i+1;j<=n-1;j++)
		{
			if(arr[i]>arr[j])
			{
				comparisions++;
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;	
				swaps++;
			}
		}
	}
	printf("Sorted array is:\n");
	for(i=0;i<=n-1;i++){
		printf("%d ",arr[i]);
	}
	printf("\nComparisions=%d\n",comparisions);
	printf("Swaps=%d",swaps);
	return 0;	
}
