/* greatestCommonFactor
 *
 * jjhaag AT dreamincode.net
 * 24 October 2007
 *
 * Returns the greatest common factor of two numbers, by a sequential search
 * of all of the numbers up to the smaller of the two passed as arguments.
 *
 * No dependencies on external libraries; O(N) complexity.
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

long greatestCommonFactor(long num1, long num2);
void getInput();
void printAnswer(long answerOut);

long usrNum1;
long usrNum2;

int main(int argc, const char* argv[])
{
	getInput();
	long answer = greatestCommonFactor(usrNum1, usrNum2);
	printAnswer(answer);

	return 0;
}

void getInput(){
	printf("Enter First Number: \n");
	scanf("%ld\n", &usrNum1);
	printf("Enter Second Number: \n");
	scanf("%ld\n", &usrNum2);
}

void printAnswer(long answerOut){
	printf("The Answer is: %ld\n", answerOut);
}

long greatestCommonFactor(long num1, long num2) {

    //  determines the maximum range to search; chooses the smaller of the two
    //  arguments (since the highest GCF is the smaller of the two numbers)
    long maxrange=(num1>=num2 ? num2 : num1);

    //  sets initial GCF to 1
    long lastGCF=1;
    for (long factor=2; factor<=maxrange; ++factor) {
        if ( num1%factor==0 && num2%factor==0 ) {
            //  if both numbers are divisible by the current factor, it is a
            //  common factor, so store and go on to the next
            lastGCF=factor;
        }
    }
    return lastGCF;
}
