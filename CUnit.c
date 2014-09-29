//
//  CUnit.c
//  Homework2
//
//  Created by Khalil's on 9/22/14.
//  Copyright (c) 2014 Muhammad Khan. All rights reserved.
//
#include "CUnit.h"

NUnit init() {
    struct NUit _this;
    _this.tst_num = 0;
    _this.npassed = 0;
    _this.nfailed = 0;
    
    return _this;
}

int assertFalse(struct NUit * _this, int value, char * name, char * message) {
/**/
    if ( !value ) {
        printStatement(1, &((*_this).tst_num),
                       &((*_this).npassed), &((*_this).nfailed),
                       0, value, name, message);
        return 1;
    }
    
    printStatement( 0, &((*_this).tst_num),
                   &((*_this).npassed), &((*_this).nfailed),
                   0, value, name, message);
    /**/
    return 0;
}

int assertTrue(struct NUit * _this, int value, char * name, char * message) {
    
    
    if ( value ) {
        printStatement(1, &((*_this).tst_num),
                       &((*_this).npassed), &((*_this).nfailed),
                       1, value, name, message);
        
        return 1;
    }
    
    printStatement( 0, &((*_this).tst_num),
                   &((*_this).npassed), &((*_this).nfailed),
                   1, value, name, message
                   );
    
    return 0;
}

int assertNotEquals(struct NUit * _this,
                    int value, int expected,
                    char * testName, char * message) {

    
    if ( value != expected ) {
        printStatement(1, &((*_this).tst_num),
                       &((*_this).npassed), &((*_this).nfailed),
                       expected, value, testName, message);
        return 1;
    }
    
    printStatement(0, &((*_this).tst_num),
                   &((*_this).npassed), &((*_this).nfailed),
                   expected, value, testName, message);
    /**/
    return 0;
    
}

// testing ints
int assertEquals(struct NUit * _this, int value, int expected, char * testName, char * message) {
    
    /**/
    if ( value == expected ) {
        printStatement(1, &((*_this).tst_num),
                       &((*_this).npassed), &((*_this).nfailed),
                       expected, value, testName, message);
        return 1;
    }
    
    printStatement(0, &((*_this).tst_num),
                   &((*_this).npassed), &((*_this).nfailed),
                   expected, value, testName,message);
    /**/
    
    return 0;
    
    
}


void printStatement(int score, int * testNumber,
                    int * nPassed, int * nFailed,
                    int expected, int actual,
                    char * testname, char * message) {

    
    if ( !score ) {
        
        printf("============/\tTest Name: %s\t\t/============\n", testname);
        printf("Message: %s\n", message);
        printf("\033[31mTEST \033[30m%i\033[31m FAILED\n", *testNumber);
        printf("> \tEXPECTED VALUE = %d\n", expected);
        printf("> \tACTUAL VALUE = %d\033[0m\n", actual);
        (*nFailed)++;
    } else {
        (*nPassed)++;
    }
    (*testNumber)++;
    
}

void PrintResult(struct NUit * _this) {
    
    printf("\033[34mnum_tests:     %i\033[0m\n", (*_this).tst_num);
    printf("\033[32mnum_passed:    %i\033[0m\n", (*_this).npassed);
    printf("\033[31mnum_failed:    %i\033[0m\n", (*_this).nfailed);

}
