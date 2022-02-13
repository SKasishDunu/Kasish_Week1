#include<stdio.h>

int main(){
    int a, res;
    printf("Enter a number:");
    scanf("%d", &a);
    res=a%2;
    printf("Number Entered is ");
    switch(res){
        case 0:{
            printf("Even");
            break;
        }
        case 1:{
            printf("Odd");
            break;
        }
    }
    return 0;
}