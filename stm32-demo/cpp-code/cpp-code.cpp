#include "cpp-code.h"
#include <vector>

#include "stm32f1xx_hal.h"

static const unsigned char cpp_text[] = "Hello, stm32 C++ developer!\r\n";

extern UART_HandleTypeDef huart1;

void cpp_code_entry_point()
{
    // Some example that proof C++ code works
    std::vector<int> v(10);
    v.push_back(1234);
    HAL_UART_Transmit(&huart1, cpp_text, sizeof(cpp_text), 100);
}
