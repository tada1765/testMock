#include "unity.h"
#include "tryMock.h"

#include  "mock_multiplydivide.h" // "mock_" file not exit ,just way to comm ceedling.
#include  "mock_add.h"
#include  "mock_minus.h"
void setUp(void)
{
}

void tearDown(void)
{
}
//------USE OF MOCK----------
//can check the order of the function
//and the input of the function
void test_tryMock_addMultiplyAndDivide_expect_6_add_2_equal_8(void)
{
  int result;
  multiply_ExpectAndReturn(2, 3, 6); // 1st tow is input parameter last one is result
  divide_ExpectAndReturn(10, 5, 2);// if the input 'X' then not pass test
  
  result = addMultiplyAndDivide(2,3,10,5);// real input here
  TEST_ASSERT_EQUAL(8, result);
}

void test_tryMock_Mock_add_and_minus(void)
{
	int result; 
	add_ExpectAndReturn(2, 2, 4);
	minus_ExpectAndReturn(6, 2, 4);
	
	result = multiplyAddAndMinus(2,2,6,2);
	
	//result = 8;
  TEST_ASSERT_EQUAL(8, result);
}