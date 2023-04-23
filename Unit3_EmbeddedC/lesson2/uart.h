#ifndef _UART_H_
#define _UART_H_

#define UART_BASE   0x101F1000
#define UART0DR     (*(volatile unsigned int*)(UART_BASE + 0x0))

void uart_send_string(unsigned char* p_tx_string);

#endif