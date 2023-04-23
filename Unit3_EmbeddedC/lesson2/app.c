#include "uart.h"

unsigned char string_buffer[15] = "Hello Ibrahim";
unsigned const char string_buffer2[15] = "Hello Yosry";
void main()
{
	uart_send_string(string_buffer);
}