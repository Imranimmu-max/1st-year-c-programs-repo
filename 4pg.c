// program to read number,find the sum of digits,reverse thee number and checks it far palifdrome 

#include<stdio.h>

void  main(){
    int n,sum,rev,temp,dig;
    printf("enter a number : ");
    scanf("%d",&n);

    temp=n;
    sum=0;
    rev=0;

    while(n>0){
        dig=n%10;
        sum =  sum+dig;
        rev=rev*10+dig;
        n=n/10;
    }
    printf("the sum of digits of the given number is : %d\n",sum);

    printf("the reverse of the given number is %d \n",rev);

    if(temp==rev){
        printf("%d is palindrome\n",temp);
    }else {
        printf("%d is not palindrome\n",temp);
    }

    
}


// output:
// enter a number : 121
// the sum of digits of the given number is : 4
// the reverse of the given number is 121 
// 121 is palindrome