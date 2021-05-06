#include "lexer_tests.h"
#include "string_tests.h"

#define IS_MAIN_FILE
#include "testing.h"

int main(void)
{
    RUN_MAIN_TEST(TestDynString);
    RUN_MAIN_TEST(TestLexer);

    return 0;
}
