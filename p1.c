#include<stdio.h>

main(){
	
	int *p,a,i;
	printf("Enter the array's size : ");
	scanf("%d",&a);
	
	int arr[a];	
	p =&arr;
	
	printf("Enter array's elements :\n");
	
	for(i=0;i < a;i++){
		printf("array[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	
	printf("\nSquare of each element:\n");
	for(i =0;i < a;i++){
		printf("%d, ",(*(p+i))*(*(p+i)));
	}
	
}
