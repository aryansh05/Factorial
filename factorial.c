//Programme to get the factorial of  a number
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,num,fac_num = 1;
    printf("Enter the number: ");
    scanf("%d",&num);
// using for loop
    for(i = 1;i <= num;i++)
//here  i starts from 1 and goes + 1 till it is less than or equal to num given by user
    {
        fac_num = fac_num * i;
    }
//Terminating  the Programme with given number by user is negative
    if(num <= 0)
    {
        printf("Error the number is not postive or natural number so there can not be a facorial\n");
        exit(0);
    }

// printing the factorial of the number
    printf("The Factorial of number is: %d",fac_num);

    return 0;
}