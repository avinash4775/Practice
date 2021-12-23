/*
In a college, class toppers need to be identified for awards. 
Find out the roll number of first three toppers in a class.

Format of the input is [roll no., marks]

Constraint: 
Number of students in a class is n; 4<= n <= 15
0 <= Marks <= 100
101 <= Rollno <= 115

*/


#include <stdio.h>

int main()
{
int marks[100],i,num,max=0,roll;
printf("Enter number of  students in class: ");
scanf("%d",&num);
printf("Enter marks of students in increasing order of their roll no: ");
for(i=1;i<=num;i++)
scanf("%d",&marks[i]);
max=marks[1];
for(i=1;i<=num;i++){
    if(max<marks[i])
   { max=marks[i];
    roll=i;}
}

    printf("Topper of the class is %d and marks is %d",roll,max);

    return 0;
}
