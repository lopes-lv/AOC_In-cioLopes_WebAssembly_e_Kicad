#include <stdio.h>

int soma(int a, int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int div(int a, int b){
    return a/b;
}
int mult(int a, int b){
    return a*b;
}


int main(){
    int num1=25,num2=5;

    printf("A soma de %d e %d : %d\n",num1,num2,soma(num1,num2));
    printf("A sub de %d e %d : %d\n",num1,num2,sub(num1,num2));
    printf("A mult de %d e %d : %d\n",num1,num2,mult(num1,num2));
    printf("A div de %d e %d : %d\n",num1,num2,div(num1,num2));
    return 0;
}