#include<stdio.h>

int main(){
	//Toggle bits (swap bits)
    int num = 29;
    int mask = 1 << 2; //git a mask 
    num ^= mask; //do xor with a mask to git a toggle 
    printf("result: %u\n", num);
	
	// git bits (Extract bits)
	int num1= 29;
    int mask1= 1 << 4;
    int git=(num1&mask1)>>4; //shift right bits number that we want to 
	//extract with result of num and mask 
    printf("result:%u\n", git);
	
	// swap using bitwise
   int a,b;
   printf("enter the values for a ");
   scanf("%d",&a);
   printf("enter the values for b ");
   scanf("%d",&b);
   a= a^b; //make xor to swap
   b= a^b; //store the result of a in b
   a= a^b; //store the result of b in a
   printf("result a=%d and b=%d",a,b);
}