#include <stdio.h>
#include <math.h>

int main(){
    
    /*
    int input;
    scanf("%d", &input);
    printf("You Entered This number: %d" , input);
    
    int num1;
    int num2;
    
    scanf("%d%d" ,&num1 , &num2);
    int num3=num1*num2;
    printf("first num is %d \nsecond num is %d \nmult. is %d",num1  , num2 , num3); //first num is 155 \nsecond num is 15949 \nmult. is xxxxxxxxx
    */
    
    int num1;
    scanf("%d",&num1);
    printf("the sin is : %f\n", sin(3.141592 * num1 / 180));
    printf("the cos is : %f\n", cos(3.141592 * num1 / 180));    
    
    int a;
    scanf("%d",&a);
    return 0;
}
