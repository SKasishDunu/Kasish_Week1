#include<stdio.h>

int main(){
    int i;
    float a, b;
    printf("Enter two numbers:\n");
    scanf("%f %f", &a, &b);
    printf("Arithmetic Opertion:\n 1. Addition\n 2. Substraction\n 3. Multiplication\n 4. division\n");
    printf("Enter which Arithmetic Operation u want to perform:");
    scanf("%d", &i);
    
    switch(i){
        case 1:
            printf("Adding %f and %f we get %f", a, b, (a+b));
            break;
        case 2:
            printf("Subtracting %f from %f we get %f", a, b, (b-a));
            break;
        case 3:
            printf("Multipling %f and %f we get %f", a, b, (a*b));
            break;
        case 4:
            printf("Dividing %f from %f we get %f", a, b, (b/a));
            break;
        default:
            printf("option Entered is not valid.");
            break;
    }
    return 0;
}