#include "cpp-code.h"
#include <map>
#include <string>
// #include <stdlib.h>
#include <stdio.h>

#include "stm32f1xx_hal.h"

static const unsigned char cpp_text[] = "Hello, Unknown Soldier!\r\n";

extern UART_HandleTypeDef huart1;
extern unsigned int mallocs_count;
extern unsigned int frees_count;
extern unsigned int sbrks_count;

void function_to_investigate()
{
    std::map<std::string, int> m;
    for (int i = 1; i <= 10; ++i)
    {
        m[std::to_string(i)] = i;
    }
}

void print_stat()
{
    printf("Mallocs: %d\tFrees: %d\tSbrks: %d\r\n", mallocs_count, frees_count, sbrks_count);
}

void cpp_code_entry_point()
{
    function_to_investigate();
    print_stat();
}
