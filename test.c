#include "examen.h"
#include "unity.h"

void test_suma(void) {
	// Test de suma()
	TEST_ASSERT_EQUAL_INT(sumar(2,2), 4);
	TEST_ASSERT_EQUAL_INT(sumar(3,3), 6);
	TEST_ASSERT_EQUAL_INT(sumar(5,5), 10);

	// Este test falla
	TEST_ASSERT_EQUAL_INT(sumar(3, 2), 4);
}

void test_resta(void) {
	// Test de resta()
	TEST_ASSERT_EQUAL_INT(restar(2,2), 0);
	TEST_ASSERT_EQUAL_INT(restar(10,1), 9);
	TEST_ASSERT_EQUAL_INT(restar(5000,2), 4998);	
}


int main(void) {
	UNITY_BEGIN();
	RUN_TEST(test_suma);
	RUN_TEST(test_resta);
	return UNITY_END();
}

