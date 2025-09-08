//program to read from keyboard continuesly till user presses 999 and find the sum only positive number,

#include<stdio.h>

void main(){
    int sum=0,n;
    printf("enter a number press 999 to stop");
    scanf("%d",&n);

    while(n!=999){
        if(n>0){
            sum=sum+n;
            scanf("%d",&n);
        }

    }
    printf("sum all positive number are %d\n",sum);
}
