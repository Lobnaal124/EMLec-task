#include<stdio.h>
 
int main(){
	/*1. Write a program that take two integers from 
	the user and print the results of this equation as float: 
      Result = ((num1 + num2) * 3) /2– 10. */
	  
    int num1=0;
	int num2=0;
	printf("enter first number:");
	scanf("%d",&num1);
	printf("enter second number:");
	scanf("%d",&num2);
	float res=(float)((num1+num2)*3)/2-10;
	printf("Result:%f\n",res);
	
	/*2. Write a program that print the biggest number 
	between two integer numbers and also print 
	which if those numbers are equal, not equal. */
     
   int a=0;
   int b=0;
    printf("enter first number:");
    scanf("%d",&a);
	printf("enter second number:");
	scanf("%d",&b);
	if (a>b){
		printf("The big number= %d\n",a);
	}
	else {
		printf("The big number= %d\n",b);
	}
	//cheeck that both number is equal or not 
	if (a == b) {
        printf("The numbers are equal\n");
    } else {
        printf("The numbers are not equal\n");
    }
	
	/*3. Write a program that take an integer from 
	user and print if this number is odd or even. */
	
	int num=0;
	printf("enter the number:");
	scanf("%d",&num);
	if(num%2==0){
		printf("%d even\n",num);
	}else{
	printf("%d odd \n",num);
	}
	/*4. Write a program that take an integer from
	user and print if this number is prime or not. */
	
    int n ,temp= 0;
    printf("enter the number: ");
    scanf("%d", &n);
  // 0 and 1 are not prime numbers
  if (n == 0 || n == 1)
    temp = 1;
  for (int i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      temp = 1;
    }
  }
  // temp is 0 for prime numbers
  // temp is 1 for a not prime numbers
  if (temp == 0)
    printf("%d is a prime number\n", n);
  else
    printf("%d is not a prime number\n", n);

	
	/*5. Write a program that take an integer from 
	user and print if this is a power of 2 or not*/
	 int m=0;
	 printf("enter the number:");
	 scanf("%d",&m);
	  if (m > 0 && (m & (m - 1)) == 0) {
        printf("%d is a power of 2\n", m);
    } else {
        printf("%d is NOT a power of 2\n", m);
    }
	
	/*6. Write a program that take an integer and computes the factorial.*/
	int x;
    int fact = 1; 
    printf("enter the number: ");
    scanf("%d",&x);
        for (int f = 1; f <= x; f++) {
            fact *= f;
        }
        printf("Factorial of %d = %d\n", x, fact);
}