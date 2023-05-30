/* startup code for Arm Cortex M3
   Author: Ibrahim Yosry       */

#include <stdint.h>

extern uint32_t _stack_top;
extern uint32_t _S_text, _E_text, _S_rodata, _E_rodata, _S_data, _E_data, _S_bss, _E_bss;
extern int main();

void _Reset_Handler();
void _Default_Handler();

void _NMI_Handler()             __attribute__((weak, alias ("_Default_Handler")));
void _HardFault_Handler()       __attribute__((weak, alias ("_Default_Handler")));
void _MemManage_Handler()       __attribute__((weak, alias ("_Default_Handler")));
void _BusFault_Handler()        __attribute__((weak, alias ("_Default_Handler")));
void _UsageFault_Handler()      __attribute__((weak, alias ("_Default_Handler")));
void _PendSV_Handler()          __attribute__((weak, alias ("_Default_Handler")));
void _SysTick_Handler()         __attribute__((weak, alias ("_Default_Handler")));
void _WWWDG_Handler()           __attribute__((weak, alias ("_Default_Handler")));
void _PVD_Handler()             __attribute__((weak, alias ("_Default_Handler")));
void _TAMPER_Handler()          __attribute__((weak, alias ("_Default_Handler")));
void _RTC_Handler()             __attribute__((weak, alias ("_Default_Handler")));
void _Flash_Handler()           __attribute__((weak, alias ("_Default_Handler")));
void _RCC_Handler()             __attribute__((weak, alias ("_Default_Handler")));
void _EXTI0_Handler()           __attribute__((weak, alias ("_Default_Handler")));
void _EXTI1_Handler()           __attribute__((weak, alias ("_Default_Handler")));
void _EXTI2_Handler()           __attribute__((weak, alias ("_Default_Handler")));
void _EXTI3_Handler()           __attribute__((weak, alias ("_Default_Handler")));
void _EXTI4_Handler()           __attribute__((weak, alias ("_Default_Handler")));
void _DMA1_Channel1_Handler()   __attribute__((weak, alias ("_Default_Handler")));
void _DMA1_Channel2_Handler()   __attribute__((weak, alias ("_Default_Handler")));
void _DMA1_Channel3_Handler()   __attribute__((weak, alias ("_Default_Handler")));
void _DMA1_Channel4_Handler()   __attribute__((weak, alias ("_Default_Handler")));
void _DMA1_Channel5_Handler()   __attribute__((weak, alias ("_Default_Handler")));
void _DMA1_Channel6_Handler()   __attribute__((weak, alias ("_Default_Handler")));
void _DMA1_Channel7_Handler()   __attribute__((weak, alias ("_Default_Handler")));
void _ADC1_2_Handler()          __attribute__((weak, alias ("_Default_Handler")));
void _CAN1_TX_Handler()         __attribute__((weak, alias ("_Default_Handler")));
void _CAN1_RX0_Handler()        __attribute__((weak, alias ("_Default_Handler")));
void _CAN1_RX1_Handler()        __attribute__((weak, alias ("_Default_Handler")));
void _CAN1_SCE_Handler()        __attribute__((weak, alias ("_Default_Handler")));
void _EXTI9_5_Handler()         __attribute__((weak, alias ("_Default_Handler")));
void _TIM1_BRK_Handler()        __attribute__((weak, alias ("_Default_Handler")));
void _TIM1_UP_Handler()         __attribute__((weak, alias ("_Default_Handler")));
void _TIM1_TRG_COM_Handler()    __attribute__((weak, alias ("_Default_Handler")));
void _TIM1_CC_Handler()         __attribute__((weak, alias ("_Default_Handler")));
void _TIM2_Handler()            __attribute__((weak, alias ("_Default_Handler")));
void _TIM3_Handler()            __attribute__((weak, alias ("_Default_Handler")));
void _TIM4_Handler()            __attribute__((weak, alias ("_Default_Handler")));
void _I2C1_EV_Handler()         __attribute__((weak, alias ("_Default_Handler")));
void _I2C1_ER_Handler()         __attribute__((weak, alias ("_Default_Handler")));
void _I2C2_EV_Handler()         __attribute__((weak, alias ("_Default_Handler")));
void _I2C2_ER_Handler()         __attribute__((weak, alias ("_Default_Handler")));
void _SPI1_Handler()            __attribute__((weak, alias ("_Default_Handler")));
void _SPI2_Handler()            __attribute__((weak, alias ("_Default_Handler")));
void _USART1_Handler()          __attribute__((weak, alias ("_Default_Handler")));
void _USART2_Handler()          __attribute__((weak, alias ("_Default_Handler")));
void _USART3_Handler()          __attribute__((weak, alias ("_Default_Handler")));
void _EXTI15_10_Handler()       __attribute__((weak, alias ("_Default_Handler")));
void _RTCAlarm_Handler()        __attribute__((weak, alias ("_Default_Handler")));
void _OTG_FS_WKUP_Handler()     __attribute__((weak, alias ("_Default_Handler")));
void _TIM5_Handler()            __attribute__((weak, alias ("_Default_Handler")));
void _SPI3_Handler()            __attribute__((weak, alias ("_Default_Handler")));
void _UART4_Handler()           __attribute__((weak, alias ("_Default_Handler")));
void _UART5_Handler()           __attribute__((weak, alias ("_Default_Handler")));
void _TIM6_Handler()            __attribute__((weak, alias ("_Default_Handler")));
void _TIM7_Handler()            __attribute__((weak, alias ("_Default_Handler")));
void _DMA2_Channel1_Handler()   __attribute__((weak, alias ("_Default_Handler")));
void _DMA2_Channel2_Handler()   __attribute__((weak, alias ("_Default_Handler")));
void _DMA2_Channel3_Handler()   __attribute__((weak, alias ("_Default_Handler")));
void _DMA2_Channel4_Handler()   __attribute__((weak, alias ("_Default_Handler")));
void _DMA2_Channel5_Handler()   __attribute__((weak, alias ("_Default_Handler")));
void _ETH_Handler()             __attribute__((weak, alias ("_Default_Handler")));
void _ETH_WKUP_Handler()        __attribute__((weak, alias ("_Default_Handler")));
void _CAN2_TX_Handler()         __attribute__((weak, alias ("_Default_Handler")));
void _CAN2_RX0_Handler()        __attribute__((weak, alias ("_Default_Handler")));
void _CAN2_RX1_Handler()        __attribute__((weak, alias ("_Default_Handler")));
void _CAN2_SCE_Handler()        __attribute__((weak, alias ("_Default_Handler")));
void _OTG_FS_Handler()          __attribute__((weak, alias ("_Default_Handler")));


uint32_t vectors[] __attribute__((section(".vectors"))) = {
(uint32_t) &_stack_top,                 /*Stack Pointer address*/
(uint32_t) &_Reset_Handler,             /*Reset Handler*/
(uint32_t) &_NMI_Handler,               /*NMI Handler*/
(uint32_t) &_HardFault_Handler,         /*HardFault Handler*/
(uint32_t) &_MemManage_Handler,         /*MemManage Handler*/
(uint32_t) &_BusFault_Handler,          /*BusFault Handler*/
(uint32_t) &_UsageFault_Handler,        /*UsageFault Handler*/
(uint32_t) &_Default_Handler,           /*Reserved*/
(uint32_t) &_Default_Handler,           /*Reserved*/
(uint32_t) &_Default_Handler,           /*Reserved*/
(uint32_t) &_Default_Handler,           /*Reserved*/
(uint32_t) &_PendSV_Handler,            /*PendSV Handler*/
(uint32_t) &_SysTick_Handler,           /*SysTick Handler*/
(uint32_t) &_WWWDG_Handler,             /*WWWDG Handler*/
(uint32_t) &_PVD_Handler,               /*WWWDG Handler*/
(uint32_t) &_TAMPER_Handler,            /*TAMPER Handler*/
(uint32_t) &_RTC_Handler,               /*RTC Handler*/
(uint32_t) &_Flash_Handler,             /*Flash Handler*/
(uint32_t) &_RCC_Handler,               /*RCC Handler*/
(uint32_t) &_EXTI0_Handler,             /*EXTI0 Handler*/
(uint32_t) &_EXTI1_Handler,             /*EXTI1 Handler*/
(uint32_t) &_EXTI2_Handler,             /*EXTI2 Handler*/
(uint32_t) &_EXTI3_Handler,             /*EXTI3 Handler*/
(uint32_t) &_EXTI4_Handler,             /*EXTI4 Handler*/
(uint32_t) &_DMA1_Channel1_Handler,     /*DMA1_Channel1 Handler*/
(uint32_t) &_DMA1_Channel2_Handler,     /*DMA1_Channel2 Handler*/
(uint32_t) &_DMA1_Channel3_Handler,     /*DMA1_Channel3 Handler*/
(uint32_t) &_DMA1_Channel4_Handler,     /*DMA1_Channel4 Handler*/
(uint32_t) &_DMA1_Channel5_Handler,     /*DMA1_Channel5 Handler*/
(uint32_t) &_DMA1_Channel6_Handler,     /*DMA1_Channel6 Handler*/
(uint32_t) &_DMA1_Channel7_Handler,     /*DMA1_Channel7 Handler*/
(uint32_t) &_ADC1_2_Handler,            /*ADC1_2 Handler*/
(uint32_t) &_CAN1_TX_Handler,           /*CAN1_TX Handler*/
(uint32_t) &_CAN1_RX0_Handler,          /*CAN1_RX0 Handler*/
(uint32_t) &_CAN1_RX1_Handler,          /*CAN1_RX1 Handler*/
(uint32_t) &_CAN1_SCE_Handler,          /*CAN1_SCE Handler*/
(uint32_t) &_EXTI9_5_Handler,           /*EXTI9_5 Handler*/
(uint32_t) &_TIM1_BRK_Handler,          /*TIM1_BRK Handler*/
(uint32_t) &_TIM1_UP_Handler,           /*TIM1_UP Handler*/
(uint32_t) &_TIM1_TRG_COM_Handler,      /*TIM1_TRG_COM Handler*/
(uint32_t) &_TIM1_CC_Handler,           /*TIM1_CC Handler*/
(uint32_t) &_TIM2_Handler,              /*TIM2 Handler*/
(uint32_t) &_TIM3_Handler,              /*TIM3 Handler*/
(uint32_t) &_TIM4_Handler,              /*TIM4 Handler*/
(uint32_t) &_I2C1_EV_Handler,           /*I2C1_EV Handler*/
(uint32_t) &_I2C1_ER_Handler,           /*I2C1_ER Handler*/
(uint32_t) &_I2C2_EV_Handler,           /*I2C2_EV Handler*/
(uint32_t) &_I2C2_ER_Handler,           /*I2C2_ER Handler*/
(uint32_t) &_SPI1_Handler,              /*SPI1 Handler*/
(uint32_t) &_SPI2_Handler,              /*SPI2 Handler*/
(uint32_t) &_USART1_Handler,            /*USART1 Handler*/
(uint32_t) &_USART2_Handler,            /*USART2 Handler*/
(uint32_t) &_USART3_Handler,            /*USART3 Handler*/
(uint32_t) &_EXTI15_10_Handler,         /*EXTI15_10 Handler*/
(uint32_t) &_RTCAlarm_Handler,          /*RTCAlarm Handler*/
(uint32_t) &_OTG_FS_WKUP_Handler,       /*OTG_FS_WKUP Handler*/
(uint32_t) &_TIM5_Handler,              /*TIM5 Handler*/
(uint32_t) &_SPI3_Handler,              /*SPI3 Handler*/
(uint32_t) &_UART4_Handler,             /*UART4 Handler*/
(uint32_t) &_UART5_Handler,             /*UART5 Handler*/
(uint32_t) &_TIM6_Handler,              /*TIM6 Handler*/
(uint32_t) &_TIM7_Handler,              /*TIM7 Handler*/
(uint32_t) &_DMA2_Channel1_Handler,     /*DMA2_Channel1 Handler*/
(uint32_t) &_DMA2_Channel2_Handler,     /*DMA2_Channel2 Handler*/
(uint32_t) &_DMA2_Channel3_Handler,     /*DMA2_Channel3 Handler*/
(uint32_t) &_DMA2_Channel4_Handler,     /*DMA2_Channel4 Handler*/
(uint32_t) &_DMA2_Channel5_Handler,     /*DMA2_Channel5 Handler*/
(uint32_t) &_ETH_Handler,               /*ETH Handler*/
(uint32_t) &_ETH_WKUP_Handler,          /*ETH_WKUP Handler*/
(uint32_t) &_CAN2_TX_Handler,           /*CAN2_TX Handler*/
(uint32_t) &_CAN2_RX0_Handler,          /*CAN2_RX0 Handler*/
(uint32_t) &_CAN2_RX1_Handler,          /*CAN2_RX1 Handler*/
(uint32_t) &_CAN2_SCE_Handler,          /*CAN2_SCE Handler*/
(uint32_t) &_OTG_FS_Handler             /*OTG_FS Handler*/
};

void _Reset_Handler()
{
    /*copy .data section from Flash to SRAM*/
    uint8_t  data_size = (uint32_t)&_E_data - (uint32_t)&_S_data;
    uint8_t* p_src = (uint8_t*)&_E_rodata;
    uint8_t* p_dst = (uint8_t*)&_S_data;
    uint8_t  i;
    
    for (i = 0; i < data_size; i++)
    {
        *p_dst++ = *p_src++;
    }

    /*initialize .bss section in SRAM with zeros*/
    uint8_t bss_size = (uint32_t*)&_E_bss - (uint32_t*)&_S_bss;
    p_dst = (uint8_t*)&_S_bss;

    for (i = 0; i < bss_size; i++)
    {
        *p_dst++ = (uint8_t)0;
    }

    /*jump to main function*/
    main();

    /*stop*/
    while(1);
}

void _Default_Handler()
{
    _Reset_Handler();
}
