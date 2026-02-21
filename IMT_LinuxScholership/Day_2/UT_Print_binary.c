#include <stdio.h>
#include <string.h>
#include <stdint.h>

typedef struct {
    int num_input;
    int pad_input;
    const char *ptr_expected;
} TestCase;


void PrintPading(int num, int padding_bits, char *res)
{

    for (int j = 0; j < padding_bits; j++) {
        int bit = padding_bits - 1 - j;
        res[j] = ((num >> bit) & 1) ? '1' : '0';
    }

    res[padding_bits] = '\0';
}


int main(void)
{
    TestCase test[3] = {
        {0, 4, "0000"},
        {3, 5, "00011"},
        {1, 2, "01"}
    };

    char buffer[33];   // max 32 bits + null terminator

    for (int i = 0; i < 3; i++)
    {
        PrintPading(test[i].num_input, test[i].pad_input, buffer);

        printf("Test %d -> Input(%d, %d) => Output: %s | Expected: %s | ",
               i + 1,
               test[i].num_input,
               test[i].pad_input,
               buffer,
               test[i].ptr_expected);

        if (strcmp(buffer, test[i].ptr_expected) == 0)
            printf("PASS\n");
        else
            printf("FAIL\n");
    }

    return 0;
}