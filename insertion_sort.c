#include<stdio.h>
int main()
{
	int arr[50],i,n,j,temp,comparisions=0,shifts=0;
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
		comparisions++;
	  	arr[j+1]=arr[j];
		shifts++;
	  	j--;
	  }
	  arr[j+1]=key;  
	  shifts++;
	}	
	printf("Sorted array is \n");
	for(i=0;i<=n-1;i++){
		printf("%d ",arr[i]);
	}
	printf("\nComparisions=%d\n",comparisions);
	printf("Shifts=%d",shifts);
	return 0;
}
