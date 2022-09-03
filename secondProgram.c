#include<stdio.h>
int main(){
    printf("Welcome to C programming");
    int age=20;
    char name[10]="Jaffar";
    printf("\nMy name is :%s",name);
    printf("\t My age is:%d",age);
    char c='a';
    char cc=100;
    const double pi=3.14;
    //pi=50
    printf("My pi value is:%lf",pi);
    printf("The size of pi variable is..:%d",sizeof(pi));
}
