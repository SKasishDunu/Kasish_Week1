#include<stdio.h>

int main(){
    float r, d, c, a;
    printf("Enter Radius of the Circle: ");
    scanf("%f", &r);
    d=r*2;
    c=2*3.14*r;
    a=3.14*r*r;
    printf("Diameter of the Cirlce is %f \nCircumference of the Circle is %f \nArea of the Circle is %f", d, c, a);
    return 0;
}