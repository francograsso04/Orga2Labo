
#include <inttypes.h>
#include <stdio.h>
 
int main(void)
{
    printf("%zu\n", sizeof(int8_t));
    printf("%zu\n", sizeof(int16_t));
    printf("%zu\n", sizeof(int32_t));
    printf("%zu\n", sizeof(int64_t));
    printf("%zu\n", sizeof(int_fast8_t));
    printf("%zu\n", sizeof(int_fast16_t));
    printf("%zu\n", sizeof(int_fast32_t));
    printf("%zu\n", sizeof(int_fast64_t));
    printf("%zu\n", sizeof(uintmax_t));

    return 0;
}