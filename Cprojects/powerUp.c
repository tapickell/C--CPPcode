//
//  powerUp.c
//
//
//  Takes in a number and a power then returns the answer
//
//  Created by Todd Pickell on 10/11/11.
//  Copyright 2011 Columbia College. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

long double myBase;
long double myExponent;
long double mySolution;

void GetNumbers(void);
void PowerUp(void);
void PrintNumbers(void);

int main (int argc, const char * argv[])
{
    GetNumbers();
    PowerUp();
    PrintNumbers();

    return 0;
}

void GetNumbers(){
    printf("enter number: ");
    scanf("%Lf", &myBase);
    printf("enter power: ");
    scanf("%Lf", &myExponent);
    printf("Calculating %Lg to the power of %Lg.\n", myBase, myExponent);
}

void PowerUp(){
    mySolution = myBase;
    printf("%Lg\n", mySolution);
    int i;
    for (i=1; i < myExponent; i++) {
        mySolution *= myBase;
        printf("%Lg\n", mySolution);
    }
}

void PrintNumbers(){
    printf("%Lg to the power of %Lg equals %Lg\n", myBase, myExponent, mySolution);
}