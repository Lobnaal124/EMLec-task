#include<stdio.h>
 
int main(){
	/*1. Read value of the 4th bit in 8 bit binary number given by user. */
	int num ,bit;
    printf("enter the number : ");
    scanf("%d", &num); 
    bit = (num >> 3) & 1;
    printf("The 4th bit is: %d\n", bit);
	
	/*2. Set value of the 5th bit (make it one) in 8 bit binary
	number given by user. */
	int n;
    printf("enter the number : ");
    scanf("%d", &n);
    int git=n|(1<<4);
	printf("After the 5th bit is: %d\n", git);
	
	
	/*3. Clear value of the 2nd bit (make it Zero) in 8 bit binary 
	number given by user.*/
	int a;
    printf("enter the number : ");
    scanf("%d", &a);
    int git2=a&(1<<1);
	printf("After the second bit is: %d\n", git2);
	
	/*4. Toggle value of the 6th bit (make it 0 if it is 1 and 1 if it is 0) in 8 bit
	binary number given by user. */
	int m ;
	printf("enter the number : ");
    scanf("%d", &m);
    int mask = m^(1 << 5);  
    printf("After the 6th bit is: %d\n", mask);
	
	/*5. Set last 2 bits of an 8 bit number given by user. */
	int n1;
    printf("enter the number : ");
    scanf("%d", &n1);
    int set=n1|3;
	printf("After the last 2 bits: %d\n", set);
	
	/*6. If you have 1 byte variable, write a code to swap bits #2 with #6 
	(swap mean put bit #2 in the location of bit #6 and bit #6 in location of bit #2) */
	int num2;
    int bit2, bit6;
    printf("enter the number: ");
    scanf("%d", &num2);
	//get the 2 bits 
    bit2 = (num2 >> 2) & 1;
    bit6 = (num2 >> 6) & 1;
    if (bit2 != bit6) {
    
        num2 ^= (1 << 2); 
        num2 ^= (1 << 6);  
    }

    printf("Number after swapping bit 2 and bit 6: %d\n", num2);
	
}