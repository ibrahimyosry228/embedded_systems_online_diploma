/* Startup code for Arm Cortex M3
   Author: Ibrahim Yosry       */

.section .vectors

.word 0x20001000       /*Stack Pointer address*/
.word _reset_handler   /*Reset handler*/
.word _vector_handler   /*NMI handler*/
.word _vector_handler   /*HardFault handler*/
.word _vector_handler   /*MemManage handler*/
.word _vector_handler   /*BusFault handler*/
.word _vector_handler   /*UsageFault handler*/
.word _vector_handler   /*Reserved*/
.word _vector_handler   /*Reserved*/
.word _vector_handler   /*Reserved*/
.word _vector_handler   /*Reserved*/
.word _vector_handler   /*PendSV handler*/
.word _vector_handler   /*SysTick handler*/
.word _vector_handler   /*WWWDG handler*/
.word _vector_handler   /*PVD handler*/
.word _vector_handler   /*TAMPER handler*/
.word _vector_handler   /*RTC handler*/
.word _vector_handler   /*Flash handler*/
.word _vector_handler   /*RCC handler*/
.word _vector_handler   /*EXTI0 handler*/
.word _vector_handler   /*EXTI1 handler*/
.word _vector_handler   /*EXTI2 handler*/
.word _vector_handler   /*EXTI3 handler*/
.word _vector_handler   /*EXTI4 handler*/
.word _vector_handler   /*DMA1_Channel1 handler*/
.word _vector_handler   /*DMA1_Channel2 handler*/
.word _vector_handler   /*DMA1_Channel3 handler*/
.word _vector_handler   /*DMA1_Channel4 handler*/
.word _vector_handler   /*DMA1_Channel5 handler*/
.word _vector_handler   /*DMA1_Channel6 handler*/
.word _vector_handler   /*DMA1_Channel7 handler*/
.word _vector_handler   /*ADC1_2 handler*/
.word _vector_handler   /*CAN1_TX handler*/
.word _vector_handler   /*CAN1_RX0 handler*/
.word _vector_handler   /*CAN1_RX1 handler*/
.word _vector_handler   /*CAN1_SCE handler*/
.word _vector_handler   /*EXTI9_5 handler*/
.word _vector_handler   /*TIM1_BRK handler*/
.word _vector_handler   /*TIM1_UP handler*/
.word _vector_handler   /*TIM1_TRG_COM handler*/
.word _vector_handler   /*TIM1_CC handler*/
.word _vector_handler   /*TIM2 handler*/
.word _vector_handler   /*TIM3 handler*/
.word _vector_handler   /*TIM4 handler*/
.word _vector_handler   /*I2C1_EV handler*/
.word _vector_handler   /*I2C1_ER handler*/
.word _vector_handler   /*I2C2_EV handler*/
.word _vector_handler   /*I2C2_ER handler*/
.word _vector_handler   /*SPI1 handler*/
.word _vector_handler   /*SPI2 handler*/
.word _vector_handler   /*USART1 handler*/
.word _vector_handler   /*USART2 handler*/
.word _vector_handler   /*USART3 handler*/
.word _vector_handler   /*EXTI15_10 handler*/
.word _vector_handler   /*RTCAlarm handler*/
.word _vector_handler   /*OTG_FS_WKUP handler*/
.word _vector_handler   /*TIM5 handler*/
.word _vector_handler   /*TIM5 handler*/
.word _vector_handler   /*UART4 handler*/
.word _vector_handler   /*UART5 handler*/
.word _vector_handler   /*TIM6 handler*/
.word _vector_handler   /*TIM7 handler*/
.word _vector_handler   /*DMA2_Channel1 handler*/
.word _vector_handler   /*DMA2_Channel2 handler*/
.word _vector_handler   /*DMA2_Channel3 handler*/
.word _vector_handler   /*DMA2_Channel4 handler*/
.word _vector_handler   /*DMA2_Channel5 handler*/
.word _vector_handler   /*ETH handler*/
.word _vector_handler   /*ETH_WKUP handler*/
.word _vector_handler   /*CAN2_TX handler*/
.word _vector_handler   /*CAN2_RX0 handler*/
.word _vector_handler   /*CAN2_RX1 handler*/
.word _vector_handler   /*CAN2_SCE handler*/
.word _vector_handler   /*OTG_FS handler*/

.thumb_func

.section .text

_reset_handler:
    bl main
    b .

_vector_handler:
