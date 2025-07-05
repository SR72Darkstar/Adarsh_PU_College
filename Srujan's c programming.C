Srujan's c programming


1. (year and leap year)
#include<stdio.h>
int main(){
int yr;
printf("Enter an year :");
scanf("%d", &yr);
if((yr%4==0) && ((yr%100!=0) || (yr%400==0)))
printf("It's a leap year.");
else
printf("It's not a leap year.");
return 0;
}

2.value checking
#include <stdio.h>
int n;
int main(){
    printf("Enter an integer: ");
    scanf("%d", &n);
    if ((n>0) && (n<100))
    printf("Enter is less than 100.");
    else if ((n>200) && (n<500))
    printf("Entered value is between 200 and 500.");
    else if (n>500)
    printf("Entered value is the highest value.");
    else 
    printf("Invalid");
    return 0;
}

3. vowel and consonants 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define str_size 100
int main() {
    char str[str_size]; 
    int i, len, vowel, cons; 
    printf("\n\nCounting total number of vowel or consonant :\n");
    printf("Input the string : ");
    fgets(str, sizeof str, stdin);
    vowel = 0; 
    cons = 0;
    len = strlen(str);
    for (i = 0; i < len; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            vowel++;
        }
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            cons++; 
        }
    }
    printf("\nThe total number of vowel in the string is : %d\n", vowel);
    printf("The total number of consonant in the string is : %d\n\n", cons);
	return 0;
}


4. products of entered values
#include <stdio.h>
int main() {
int number ;
int product ;
printf("Choose a number: ");
scanf("%d", &number);
printf("Choose a product: ");
scanf("%d", &product);
while (number <= 5) {
product *= number;
printf("Current number: %d, Current product: %d\n", number, product);
number++;
}
return 0;
}

5. equality checker (integers)
#include <stdio.h>
void main()
{
    int int1, int2;
    printf("Input the values for Number1: ");
    scanf("%d",&int1);
    printf( "Input the values for Number2: ");
    scanf("%d",&int2);
    if (int1 == int2)
        printf("Number1 and Number2 are equal\n");
    else
        printf("Number1 and Number2 are not equal\n");
}


6. age eligibility
#include <stdio.h>
int main(){
    int a;
    printf("Enter Age: ");
    scanf("%d", &a);
    if (a>=18)
    printf("You are an adult.");
    else {
        printf("You are a minor.");
    }
    return 0;
}

7. sum using function

#include <stdio.h>
void sum(int,int);
void main()
{
int c,d,result;
printf("\nGoing to calculate the sum of two numbers: ");
printf("\nEnter the first number: ");
scanf("%d",&c);
printf("Enter the second number: ");
scanf("%d",&d);
sum(c,d);
}
void sum(int a,int b)
{
printf("\nThe sum is %d",a+b);
}

8. sum using functions (with arguements)

#include <stdio.h>
int sum(int, int); 
int main() {
    int a, b, result;
    printf("\nGoing to calculate the sum of the given digits: ");
    printf("\nEnter the two digits: ");
    scanf("%d %d", &a, &b);
    result = sum(a, b);
    printf("\nThe sum is %d\n", result);
    return 0;
}
int sum(int a, int b) {
    return a + b;
}

9. calculate area using functions 

#include <stdio.h>
float square();
void main()
{
    printf("Going to calculate the area.\n");
    float area = square();
    printf("The area of square: %f\n",area);
}
float square()
{
    float side;
    printf("Enter the length of the side in meters: ");
    scanf("%f", &side);
    return side*side;
}


10. calculate average of x numbers

#include <stdio.h>
void average(int,int,int,int,int);
void main()
{
    int a,b,c,d,e;
    printf("\nGoing to calculate the average of five numbers: ");
    printf("\nEnter five numbers: ");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    average(a,b,c,d,e);
}
void average(int a, int b, int c, int d, int e)
{
float avg;
avg = (a+b+c+d+e) /5;
printf("The average of given five numbers: %f",avg);
}
11. array descending order
#include <stdio.h>
int main() {
    int i, j, temp, k;
    int a[10] = {101, 44, 8, 10, 34, 23, 1, 10, 9, 7};
    printf("Enter the value of k (1 to 10): ");
    scanf("%d", &k);
    for (i = 0; i < 9; i++) {
        for (j = i + 1; j < 10; j++) {
            if (a[j] > a[i]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    if (k >= 1 && k <= 10) {
        printf("The %d-th largest element is: %d\n", k, a[k - 1]);
    } else {
        printf("Invalid value of k.\n");
    }
    printf("Sorted array in descending order:\n");
    for (i = 0; i < 10; i++) {
        printf("%d\n", a[i]);
    }
    return 0;
}

12.array ascending order 
#include <stdio.h>
int main() {
    int i, j, temp, k;
    int a[10] = {101, 44, 8, 10, 34, 23, 1, 10, 9, 7};
    printf("Enter the value of k (1 to 10): ");
    scanf("%d", &k);
    for (i = 0; i < 9; i++) {
        for (j = i + 1; j < 10; j++) {
            if (a[j] < a[i]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    if (k >= 1 && k <= 10) {
        printf("The %d-th largest element is: %d\n", k, a[k - 1]);
    } else {
        printf("Invalid value of k.\n");
    }
    printf("Sorted array in descending order:\n");
    for (i = 0; i < 10; i++) {
        printf("%d\n", a[i]);
    }
    return 0;
}