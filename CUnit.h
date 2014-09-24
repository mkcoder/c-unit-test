
/*  AVAILABLE FUNCTIONS:
 *  ASSERTEQUALS == CHECKS IF TWO VALUES ARE EQUAL
 *  ASSERTNOTEQUALS == CHECKS IF TWO VALUES ARE NOT EQUAL
 *  ASSERTTRUE == CHECKS IF THE VALUE IS TRUE (X > 0)
 *  ASSERTFALSE == CHECKS IF THE VALUE IS FALSE (X == 0)
 */

/**
 * This is a model that defines what a NUNIT should look like.
 */
typedef struct NUit {
    
    int tst_num;
    int npassed;
    int nfailed;
    char* testName;
    char* message;
    
} NUnit;

/**
 * @return NUNIT returns a nunit struct with all the values initialized to there proper values
 */
NUnit init();

/**
 This function checks if the value does not equal 0 and if it does it returns false otherwise it returns true.
 @return int returns 1 if passed and a 0 if failed
 @param _this takes a Struct reference and this is what the value will be modified throughout the functions.
 @param value the value you expect to be
 @param name the name of the test case, makes it easier to debug your code later on.
 @param message a small message as to why you are writing this test.
 */
int assertTrue(struct NUit * _this, int value, char * name, char * message);


/**
 This function checks if the value is equal to 0 or not.
 @return int returns 1 if failed and a 0 if passed
 @param _this takes a Struct reference and this is what the value will be modified throughout the functions.
 @param value the value you expect to be
 @param name the name of the test case, makes it easier to debug your code later on.
 @param message a small message as to why you are writing this test.
 */
int assertFalse(struct NUit * _this, int value, char * name, char * message);


/**
 This methods checks if the value you got equals the value you expect. If these two values are the same it returns a 1 meaning true the test has passed and does nothing special. If it fails it returns a 0 and prints to the console what the values are.
 @return int returns 1 if passed and a 0 if failed
 @param _this takes a Struct reference and this is what the value will be modified throughout the functions.
 @param value the value you got
 @param expected the value you expect to be
 @param name the name of the test case, makes it easier to debug your code later on.
 @param message a small message as to why you are writing this test.
 */
int assertEquals(struct NUit * _this, int actual, int expected, char * testName, char * message);

/**
This functions compares the value you got to the value you expect, if these too values are the same it return false and if these two values are not the same it returns true.
 @return int returns 1 if passed and a 0 if failed
 @param _this takes a Struct reference and this is what the value will be modified throughout the functions.
 @param value the value you got
 @param expected the value you expect to be
 @param name the name of the test case, makes it easier to debug your code later on.
 @param message a small message as to why you are writing this test.
 */
int assertNotEquals(struct NUit * _this,
                    int value, int expected,
                    char * testName, char * message);

/**
 @private
This method prints the statement to the console window and should not be called directly from the main function.
 @return void this only prints to the window
 
 @param score is it 1 or a 0. Did the test case pass or fail?
 @param testNumber the test number we are on
 @param nPassed the number of test cases that have passed
 @param nFailed the number of test cases we have failed
 @param value the value you got
 @param expected the value you expect to be
 @param name the name of the test case, makes it easier to debug your code later on.
 @param message a small message as to why you are writing this test.
 */
void printStatement(int score, int * testNumber,
                    int * nPassed, int * nFailed,
                    int expected, int actual,
                    char * testName, char * message);


void PrintResult(struct NUit * _this);