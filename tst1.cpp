#include <stdio.h>
#include <math.h>
/*
--------------------------------------------->>>>>>>>>>>----- All These Functions MUST used with %f
sin( )  --- sin(23.3)
cos( )  --- cos(23.3)
tan( )  --- tan(30)

log( ) ----- logarithm dar mabnaye Neper (2.71) ---log(100)
log10( ) ---log10(100)

pow( )  ---pow(2, 8), pow(num1 , num2) = num1 ^(num2)
sqrt( ) ---sqrt(100)

*/
#include <conio.h>
#include <ctime>
#include <windows.h>

int main(){
    
    //int (%d)    
    // double (%lf) = float (%f)
    
    float num1;
    const float PI = 3.141556;
    scanf("%f", &num1);
    printf("Masahat: %f\n", num1*num1*PI); 
    Sleep(1000);
    printf("Mohit: %f\n", 2*PI* num1);
    
    
    //char (%c)
    /*
    char c;
    scanf("%c", &c);
    printf("%c\n", c);
    */
    
    
    int a;
    scanf("%d" , &a);
    getchar();
    return 0;
}
