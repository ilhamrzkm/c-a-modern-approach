/*
* Write a program that computes the volume of a sphere 
* with 10-meter radius
* using the formula v = 4/3PIrcube
*/

#include <stdio.h>

int main(void) {
    float PI = 3.14;
    float volume = 4.0f/3.0f * PI * 10 * 10 * 10;

    printf("%.2f/n", volume);
    return 0;
}
