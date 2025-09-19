#include <stdio.h>
#include <conio.h>

void main()
{
    int n, i;
    float marks[20], tot = 0, avg;

    clrscr();

    printf("Enter total number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter marks of student %d: ", i + 1);
        scanf("%f", &marks[i]);
        tot = tot + marks[i];
    }

    avg = tot / n;

    printf("\nThe total marks of %d students are: %.2f", n, tot);
    printf("\nThe average marks are: %.2f", avg);

    getch();
}
input :
Enter total number of students: 5
Enter marks of student 1: 70
Enter marks of student 2: 80
Enter marks of student 3: 90
Enter marks of student 4: 60
Enter marks of student 5: 100

output : 
The total marks of 5 students are: 400.00
The average marks are: 80.00
