//program to find roots of a quadratic equation ;

#include<stdio.h>
#include<math.h>

void main(){
    float a,b,c;
    float root1,root2,imag;
    float disc;

    printf("enter value for a,b,c : ");
    scanf("%f %f %f",&a,&b,&c);

    disc = (b*b)-(4*a*c);

    if(disc>0){
        root1=(-b+sqrt(disc)/(2*a));
        root2=(-b-sqrt(disc)/(2*a));

        printf("two distinct and real roots exists %f and %f \n",root1,root2);
    }
    
    if(disc<0){
        root1=root2=-b/(2*a);
        imag=sqrt(-disc)/(2*a);

        printf("two and real roots exists %f and %f \n",root1,root2);
    }else{
        root1=root2=-b/(2*a);
        printf("two and real roots exists %f and %f \n",root1,root2);
    }


}


//output
// gcc 7pg.c -lm
// imran@imran-Vostro-2520:~/Documents/"c" clg prohrams$ ./a.out
// enter value for a,b,c : 10 20 30 
// two and real roots exists -1.000000 and -1.000000 