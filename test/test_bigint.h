#ifndef TEST_BIGINT_H
#define TEST_BIGINT_H


#include "acutest.h"
#include "include/bigint.h"
#include "include/utils.h"


void test_create_bigint_from_ints(void){
    int a[] ={1,2,3,4,4,5,0,0,0};
    int len_a = 9;
    int a_[] = {1,2,3,4,4,5 };
    int len_a_ = 5;
    bigint big = newnumint(a, len_a);

    print(big);
    //TEST_ASSERT(big.length == 6);

    for (int i=0;i< len_a_;i++)
    {
        TEST_ASSERT(big.number[i]== a_[i]);
        TEST_MSG("Bigint.%d; Input.%d at i=%d", big.number[i], a_[i], i);
    }

}

void
test_BigInt_element(void)
{
    char i[] = "12345";
    int len_i = strlen(i);
    int num;
    char str;

    bigint a;
    
    a = newnumc(i);

    // Check all members of numbers
    for (int j=0;j< len_i; j++){
        str = i[len_i-j-1];
        num = str2int(str);
   
        TEST_CHECK(a.number[j] == num);
        TEST_MSG("BigInt.Number = %d ; Input= %c ", a.number[j], num);
    }

    // Check Length
    TEST_CHECK(a.length == strlen(i) );
    TEST_MSG("Size of BigInt = %d ; Input= %lu", a.length, strlen(i));

    
}

void test_display(void)
{
    char i[]= "12345678";
    bigint BIGNUM = newnumc(i);
    char* str_BIGNUM = create_string(BIGNUM);

    TEST_CHECK(str_BIGNUM[sizeof(i)/sizeof(i[0])]== '\0');
    TEST_CHECK(strcmp(str_BIGNUM,i)==0);
    TEST_MSG("string(BIGNUM)=%s", str_BIGNUM);

    print(BIGNUM);

}


void test_ADD(void)
{
    bigint a = newnumc("123");
    bigint b = newnumc("2");
    bigint c = add(a,b);
    bigint ans = newnumc("125");

    TEST_CHECK(striden(create_string(c), create_string(ans)));
}

void test_substraction(void){
    bigint a = newnumc("00000232343342342");
    bigint b = newnumc("9999999");
    bigint ans = newnumc("232333342343");
    bigint ans_p;

    ans_p = substraction_bigint(a,b);
    TEST_CHECK(compare_bigint(ans_p, ans));
}

void test_init_bigint(void){
    int a[] = {1,2,3,4};

    bigint p = init_bigint(a,4);
    bigint z = init_bigint_zero();

    TEST_CHECK(z.length == 0);
    TEST_CHECK(p.length == 4);
}

void test_compare(void){
    bigint a = newnumc("0000000003434341341412234234");
    bigint b = newnumc("3434341341412234234");
    bigint c = newnumc("3434341341412234234000000000");
    bigint d1 = newnumc("0");
    bigint d2 = newnumc("000000000000");
    

    TEST_CHECK(compare_bigint(a,b)==1);
    TEST_CHECK(compare_bigint(d1,d1)==1);
    TEST_CHECK(compare_bigint(d1,d2)==1);
    TEST_CHECK(compare_bigint(b,c)==0);
    TEST_CHECK(compare_bigint(a,c)==0);
}
void test_division(void){

    //Define problem
    bigint divident1 = newnumc("3434341341412234234");
    bigint divident2 = newnumc("1");
    bigint divident3 = newnumc("0");
    int divisor=2;
    bigint quotient1, quotient2, quotient3;
    bigint quo_real1 = newnumc("1717170670706117117");
    bigint quo_real2 = newnumc("0");
    bigint quo_real3 = newnumc("0");
    //Calculation
    quotient1 = divide_bigint_onedigit(divident1, divisor);
    quotient2 = divide_bigint_onedigit(divident2, divisor);
    quotient3 = divide_bigint_onedigit(divident3, divisor);
    //Test
    TEST_CHECK(compare_bigint(quotient1, quo_real1)==1);
    TEST_MSG("%s / %d = %s . but got %s", create_string(divident1), divisor, create_string(quo_real1), create_string(quotient1));
    TEST_CHECK(compare_bigint(quotient2, quo_real2)==1);
    TEST_CHECK(compare_bigint(quotient3, quo_real3)==1);
}

void test_swap(void){
    bigint a = newnumc("3434341341412234234");
    bigint b = newnumc("0");
    bigint a2 = newnumc("0");
    bigint b2 = newnumc("3434341341412234234");

    swap_bigint(&a, &b);
    TEST_CHECK(compare_bigint(a,a2)==1);
    TEST_CHECK(compare_bigint(b,b2)==1);
}

void test_minmax(void){
    bigint a2 = newnumc("001212132313");
    bigint b2 = newnumc("00000003434341341");

    TEST_CHECK(argmax_bigint(a2,b2) == 1);
    TEST_CHECK( compare_bigint(max_bigint(a2,b2), b2) == 1);
    TEST_CHECK( compare_bigint(min_bigint(a2,b2), a2) == 1);
}


#endif