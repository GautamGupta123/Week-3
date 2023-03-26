#include<stdio.h>
int main()
{
	int arr[50],i,n,j,temp;
	printf("Enter the range:");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=1;i<n;i++){
	  int key=arr[i];
	  j=i-1;
	  while(key<arr[j] && j>=0)
	  {
	  	arr[j+1]=arr[j];
	  	j--;
	  }
	  arr[j+1]=key;   
	}	
	printf("Sorted array is \n");
	for(i=0;i<=n-1;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
