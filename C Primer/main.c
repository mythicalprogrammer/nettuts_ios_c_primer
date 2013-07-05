//
//  main.c
//  C Primer
//
//  Created by Anthony Doan on 7/5/13.
//  Copyright (c) 2013 Mobile Tuts. All rights reserved.
//

#include <stdio.h>

int multiplyByFive(int a); // function prototype

int main(int argc, const char * argv[])
{

    // insert code here...
    printf("Hello, World!\n");
    // variables
    int a = 5;
    float b = 6.3;
    char c = 'r';
    printf("this is an int: %i\n", a);
    printf("this is a float: %f\n", b);
    printf("this is a char: %c\n", c);
    // Functions
    printf("Five multiplied by five is %i\n", multiplyByFive(5));
    // Pointers
    int d = 5;
    int *e = &d;
    printf("d has a value of %i\n", d);
    printf("e has a value of %p\n", e);
    printf("the object that e points to has a value of %i\n", *e);
    return 0;
}

int multiplyByFive(int a) {
    return a * 5;
}