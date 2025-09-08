//program to read percentage of marks and appreaciate message;

#include<stdio.h>

void main(){
 int marks;

 printf("enter ur marks : ");
 scanf("%d",&marks);

 if(marks>=75 && marks<=100){
    printf("distinction\n");
 }else if(marks>=60 && marks<=75){
    printf("a class\n");
 }else if(marks>=35 && marks<=60){
    printf("pass\n");
 }else{
    printf("fail\n");
 }
}