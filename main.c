//
//  main.c
//  C Unit Testing Framework
//
//  Created by Khalil's on 9/22/14.
//  Copyright (c) 2014 Muhammad Khan. All rights reserved.
//

#include <stdio.h>
#include "CUnit.h"

int add (int a, int b) {
    return a+b;
}

int max(int a, int b) {
    return a > b ? a : b;
}

int main(int argc, const char * argv[]) {

    // start the NUIT Test class.
    // this allows you to create multiple NUIT test with different names and
    // not crowd up the workspace.
    struct NUit _this = init();
    
    assertNotEquals(&_this, add(1, 1), 1, "Test 1: If 1+1 != 1", "Does adding 1 plus 1 return 2 but does not equal 1.");
    
    assertEquals(&_this, 1, 1, "1 == 1", "Does one == one");
    
    assertFalse(&_this,add(1,2) == 2, "Checking if assert false works", "Assert false");
    
    assertTrue(&_this, max(1,2) == 2, "1 is greater than 2", "This test should return true because 2 > 1");
    
    assertFalse(&_this, max(add(1,2), 2) != 3, "3 is the max", "Add 1 and 2 this should be the max value");
    
    int a[] = {1,2,3};
    int b[] = {1,2,3};
    int c[] = {4,5,6};
    
    assertArrayEquals(&_this, a, b,"Testing if two arrays are equal", "This test should pass because both arrays are equal.");
    
    assertArrayNotEquals(&_this, a, c,"Testing if two arrays are not equal", "This test should pass because both arrays are not equal.");
    
    
    // AT THE END OF YOUR CODE YOU HAVE TO PRINT THE RESULT OUT TO THE WINDOW THIS FUNCTIONS HELPS WITH THAT.
    PrintResult(&_this);
    return 0;
}

