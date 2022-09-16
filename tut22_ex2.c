#include <stdio.h>
/* Exercise of Units and Conversions
kms to miles 
Enter 1 to convert kms to miles 
Enter 2 to convert inches to foot 
Enter 3 to convert cms to inches 
Enter 4 to convert pound to kgs 
Enter 5 to convert inches to meters 
*/
void conversion(){
    float kmsToMiles=0.621371;
    float inchesToFoot=0.0833333;
    float cmsToInches = 0.393701;
    float poundsToKgs = 0.453592;
    float inchesToMetres = 0.0254;
    int counter=0;
    while (1)
    {
        char a,c;
        float value;
        // home:
        counter++;
        printf("Enter your choice for conversion\n \t 1. kms to miles \n\t 2. inches to foot \n\t 3. cms to inches \n\t 4. pound to kgs \n\t 5. inches to meters\n\t q to quit\n");
        if(counter>1){scanf("%c",&c);}
        scanf("%c",&a);
        switch (a)
        {
        case 'q':
            goto end;
            
        case '1':
            printf("Enter the value in kms ");
            scanf("%f",&value);
            printf("Value in miles = %f\n", value*kmsToMiles);
            // goto home;
            break;
        case '2':
            printf("Enter the value in inches ");
            scanf("%f",&value);
            printf("Value in feet = %f\n", value*inchesToFoot);
            // goto home;
            break;
        case '3':
            printf("Enter the value in cms ");
            scanf("%f",&value);
            printf("Value in inches = %f\n", value*cmsToInches);
            // goto home;
            break;
        case '4':
            printf("Enter the value in pound ");
            scanf("%f",&value);
            printf("Value in kgs = %f\n", value*poundsToKgs);
            // goto home;
            break;
        case '5':
            printf("Enter the value in inches ");
            scanf("%f",&value);
            printf("Value in metres = %f\n", value*inchesToMetres);
            // goto home;
            break;
        default:
        // goto home;
        break;
        }
    }
    end:

}
int main()
{   
    conversion();
    return 0;
}
