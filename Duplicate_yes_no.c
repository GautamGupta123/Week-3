#include<stdio.h>
int main(){
	int arr[50],i,n,j,flag=0;
	printf("Enter the range:");
	scanf("%d",&n);
	printf("Enter the elements of the array:");
	for(i=0;i<=n-1;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<=n-1;i++){
		for(j=i+1;j<=n-1;j++){
			if(arr[i]==arr[j]){
				flag++;
			}
		}
	}
	if(flag!=0){
		printf("Yes\n");
	}
	else{
		printf("No\n");
	}
	return 0;
}
