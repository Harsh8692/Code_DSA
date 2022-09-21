# include <stdio.h>
# include <stdlib.h>
int main(){
	int col, row;
	printf("Enter the number of columns required in the matrix\n");
	scanf("%d",&col);
	printf("Enter the number of rows required in the matrix\n");
	scanf("%d",&row);
	int **ptr;
	int *q = *ptr;
	ptr = (int**)malloc(sizeof(int*)*row);
	for(int i = 0; i < row;i++){
		*(ptr+i)=(int*)malloc(sizeof(int)*col);
	}
	int a = 1;
	int b = 1;
	for(int i = 0; i < row; i++){
		for(int j=0; j < col; j++){
			printf("Enter the value of the element at %d row and %d column\n",i+1,j+1);
			scanf("%d",&ptr[i][j]);
		}
	}
	for(int i = 0; i < row; i++){
		for(int j=0; j < col; j++){
			printf("The value of the element at %d row and %d column is %d\n",row+1,col+1,ptr[i][j]);
			
		}
		
	}
	free(q);
	free(ptr);
	return 0;
}
