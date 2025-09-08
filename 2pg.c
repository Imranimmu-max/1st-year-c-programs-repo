//find the biggest of the three number 

#include <stdio.h>

int main(){
    int a,b,c;

    printf("enetr a  :\n");
    scanf("%d",&a);
    printf("enter b  :\n");
    scanf("%d",&b);
    printf("enter c  :\n");
    scanf("%d",&c);

    if(a>=b && a>=c){
        printf("%d id bigger ",a);
    }else if(b>=a && b>=c){
        printf("%d id bigger ",b);
    }else {
        printf("%d id bigger ",c);
    }

    return 0;
}