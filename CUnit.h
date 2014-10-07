
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
This functions checks if two arrays (master, and other) are the same, if they are the same it returns a 1 (true) or else a 0 (false).
 @return int returns 1 if passed and a 0 if failed
 @param _this takes a Struct reference and this is what the value will be modified throughout the functions.
 @param master the orginal or the master array to compare the other with.
 @param other what we are comparing against.
 @param name the name of the test case, makes it easier to debug your code later on.
 @param message a small message as to why you are writing this test.
 */
int assertArrayEquals(struct NUit * _this, int master[], int other[], char * name, char * message);

/**
 This functions checks if two arrays (master, and other) are not the same, if they are the same it returns a false (0) and true (1) if they are not the same.
 @return int returns 1 if passed and a 0 if failed
 @param _this takes a Struct reference and this is what the value will be modified throughout the functions.
 @param master the orginal or the master array to compare the other with.
 @param other what we are comparing against.
 @param name the name of the test case, makes it easier to debug your code later on.
 @param message a small message as to why you are writing this test.
 */
int assertArrayNotEquals(struct NUit * _this, int master[], int other[], char * name, char * message);

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
 @private this is a private method
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


/**
 This functions prints out the console window the result of the test.
 It includes what how many test cases there were there in the program.
 How many passes and how many failed.   
 @param _this the structure that you want to print out the result for.
 */
void PrintResult(struct NUit * _this);