#include<stdio.h>
#include"add.h"
#include"multiply.h"
#include<math.h> 

int main(){
    float a=3.4;
    float b=4.5;
    float sum=0;
    float Multiplication = 0;
    sum = add(a,b);
    Multiplication = multiply(a,b);   
    printf("Addition is = %f\n", sum);
    printf("Multiplication is = %lf\n", Multiplication);
    return 0;
}
   
   

