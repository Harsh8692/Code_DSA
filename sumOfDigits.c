// Author :  Harsh
#include <stdio.h>
#include<stdlib.h>
int addDigits(int n){
	int r, q;
	q = n;
	r = n;
	if(n/10==0){			// Base Case
		return n;
	}
	else{
		q/=10;
		r%=10;
		return addDigits(q)+addDigits(r); // Recursive step
	}
	
}

int DecToBinary(int n){
	int r = n%2;
	int q = n;
	if(n==1){		// Base case
		return 1;
	}
	return DecToBinary(q/2)*10+r;// Recursive step
}
void printPermutations(int *arr, int*info,int len){
	printf("\n");
	for(int i =0; i<len;i++){
		if(info[i]==0){
//			printf("%d is i and %d is info[i]",i,info[i]);
			printf("%d",arr[i]);
		}
		else if(info[i]==1){
			if(i==len-1){
				printf("%d",arr[i]);
			}
			else{
				printf("%d ",arr[i]);
			}
		}
		
	}
}
void permutations(int* arr, int* info, int len, int step){
	if(step == len-1){
		printPermutations(arr,info,len);
		return;
	}
	// without space
	info[step]=0;
	permutations(arr,info,len,step+1);
	// with space
	info[step]=1;
	//printf("a\n");
	permutations(arr,info,len,step+1);
	info[step]=0;
	return;
}
int main(){
	//printf("The addition of digits of number is : %d\n",addDigits(3451));
	//int n =15%10;
	//printf("%d",n);
	int len;
	printf("Enter the size of the array : \n");
	scanf("%d",&len);
	int* arr = (int*)malloc(sizeof(int)*len);
	int *info = (int*)calloc(len,sizeof(int));
	for(int i =0; i<len;i++){
		printf("Enter the %d element of the array : ",i+1);
		scanf("%d",&arr[i]);
	}
	permutations(arr,info,len,0);
	//printf("The binary code for number is : %d\n",DecToBinary(9));
	return 0;
}
