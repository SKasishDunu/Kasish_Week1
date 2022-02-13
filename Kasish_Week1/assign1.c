#include<stdio.h>

int main(){
    int reg;
    char name[100], branch[30], hobbies[50];
    printf("Enter Your Reg. no.(Last three digits.:)\n");
    scanf("%d", &reg);
    printf("Now Enter your Name:");
    scanf("%10s", name);
    printf("Enter your branch:");
    scanf("%3s", branch);
    printf("Enter your hobbies:");
    scanf("%50s", hobbies);
    printf("--------------------------\n");
    printf("Hello %-10s\n", name);
    printf("Information you entered are\n Reg.No.: %d \n Branch: %3s \n Hobbies: %-50s", reg, branch, hobbies);
    return 0;
}