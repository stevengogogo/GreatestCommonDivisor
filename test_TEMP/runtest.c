#include <stdio.h>

#include "acutest.h"

#include "test_bigint.h"
#include "test_utils.h"


// Run TESTs 
TEST_LIST = {
    {"Initiation of Bigint", test_init_bigint},
    {"Generate Integers to Bigint",test_create_bigint_from_ints},
    { "Element of BigInt", test_BigInt_element },
    {"Comparison", test_compare},
    {"Swap",test_swap},
    {"Swap min max",test_swapminmax},
    {"Check even", test_even},
    {"Division", test_division},
    {"MinMax", test_minmax},
    {"substraction", test_substraction},
    {"Multipication",test_multiplication},
    {"Multiplication one decimal", test_multiply_onedecimal},
    {"GCD", test_gcd},
    {"Display", test_display},
    {"Utility", test_utils},
    {"Utility: string comparison",test_str_identical},
    {NULL, NULL} // Terminate the test
};