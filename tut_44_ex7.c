#include <stdio.h>
/*
You manage a travel agency and you want your n drivers to input their following details:
1. Name
2. Driving License No
3. Route 
4. Kms
Your program should be able to take n as input(or you can take n=3 for simplicity) and your drivers will start inputting their details one by one.

Your program should print details of the drivers in a beautiful fashion.
User structures.
*/

struct driver{
	char name[36];
	char driving_license_no[36];
	char route[36];
	int dist_driven;  // In kms
	
};	
int printDetails(struct driver* ptr){
	for(int i = 0; i < 3; i++){
		printf("**** Name of the driver %d is : %s ****\n",i+1,ptr[i].name);
		printf("**** Driving license number of the driver %d is : %s ****\n",i+1,ptr[i].driving_license_no);
		printf("**** Route of the driver %d is : %s ****\n",i+1,ptr[i].route);
		printf("**** Distance driven by the driver %d (in Kms) is : %d ****\n",i+1,ptr[i].dist_driven);
	}
	return 0;
}
int travel_agency() {
	struct driver d1, d2, d3;
	struct driver arr1[] = {d1, d2, d3};
	for (int i = 0; i < 3; i++){
		printf("Enter the details of the driver %d\n",i+1);
		printf("Enter the name of the driver %d\n",i+1);
		// gets(arr1[i].name);
		scanf("%s",&arr1[i].name);
		printf("Enter the driving license number of the driver %d\n",i+1);
		scanf("%s", &arr1[i].driving_license_no); 
		printf("Enter the route of the driver %d\n",i+1);
		scanf("%s",&arr1[i].route);
		printf("Enter the distance driven by the driver %d (in Kms)\n",i+1);
		scanf("%d",&arr1[i].dist_driven);
	}
	printDetails(arr1);
	return 0;
}

int main(){
	travel_agency();
	return 0;
}


