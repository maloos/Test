#include <stdio.h>      //input & output
#include <math.h>       //math
#include <conio.h>      //getch()
#include <windows.h>    //Sleep

int main(){
    
    /*
    
    if (shart){
        
    }
    else if (){
        
    }
    else if () {
        
    }
    ..
    ..
    ..
    ..
    else {
        
        
    }
    -----------------------------------------------------------
    
    shart:
    
    
    num1 > num2
    num1 < num2
    num1 == num2
    num1 >= num2
    num1 <= num2
    num1 != num2
    
    -------------------------------------------------------------------
    */
    
    // int num3 = 5;
    // int num4 = 50
    // int num5 = 500
    // num3 = num4 = num5
    //num3 = ????? , num4 =?????
    
//    -----------------------------------------------------------------------------------------
    
    /*  MAX - MIN - EQUAL
    int num1, num2;
    scanf("%d%d" , &num1 , &num2);
    
    if(num1 > num2){
        printf("Greater\n");   
    }
    else if(num1==num2){
        printf("OK");   
    }
    else {
        printf("Lower\n");   
    }
    */
  
  //-----------------------------------------------------------------------------------------------
    
    
    /*
    char alpha;
    
    scanf("%c" , &alpha);
    
    if (alpha == 'u'){
        printf("sedda");
    }
    else if (alpha == 'o'){
        printf("sedda");   
    }
    else if (alpha == 'a'){
        printf("sedda");   
    }
    else if (alpha == 'e'){
        printf("sedda");   
    }
    else if (alpha == 'i'){
        printf("sedda");   
    }
    else{
        printf("Noch!");   
    }
    */
    //********************************************************************************************************
    
    int num1 , num2 , num3;
    scanf("%d%d%d" , &num1, &num2 , &num3);
    
    if(num1 == num2){
        
            if(num1 == num3){
                
                    if(num2 == num3){
                            printf("OK\n");   
                    }
                    else{
                            printf("NO\n");   
                    }    
                    
            } 
            else{
                printf("NO\n");   
            }
            
    }
    else{
        
        printf("NO\n");   
        
    }
    
    
    
    getch();
    return 0;   
}
