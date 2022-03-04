/**
 * @file test.c
 * @author Gurram Manikanta
 * @brief testing of functions using some specified test cases for that i had created call to  TEST_ASSERT_EQUAL function to
 *  perform testcases of each function
 * @version 1.1
 * @date 2022-02-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include"quiz.h"
#include"unity.h"



void setUp()
{

}
void tearDown()
{

}

void test_start(void)
{
    TEST_ASSERT_EQUAL(1,start(1,0));
}
void test_high_score(void)
{
    TEST_ASSERT_EQUAL(35,high_score(5,7));

}
void test_exit(void)
{
     TEST_ASSERT_EQUAL(0,exit());
}



int main_test()
{
    UNITY_BEGIN();
   RUN_TEST(test_start);
   RUN_TEST(test_high_score);
   RUN_TEST(test_exit);


    return UNITY_END();
}