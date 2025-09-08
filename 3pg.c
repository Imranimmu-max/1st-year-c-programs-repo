// pprogram to generate n prime number 

#include<stdio.h>
// #include<conio.h>

int main(){
    int i, j, n, flag;
    printf("Enter the limit: ");
    scanf("%d", &n);

    printf("Prime numbers from 2 to %d are: ", n);

    for(i = 2; i <= n; i++) {
        flag = 0;
        for(j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                flag = 1;
                break;
            }
        }
        if(flag == 0) {
            printf("%d \n",i);
        }
    }
    printf("\n");
    return 0;
    }