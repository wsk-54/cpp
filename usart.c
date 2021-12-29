#include "stm32f10x.h"
#include "stdio.h"
#include "bsp_uart.h"
#include "bsp_led.h"

void delay(int i)
{
    int m, j;
    m = i;
    for (; m > 0; m--)
        for (j = 8000; j > 0; j--)
            ;
}

int main(void)
{
    char ch[8];
    int i;
    LED_GPIO_Config();
    DEBUG_UART_Config();
    Usart_SendString(DEBUG_USARTx, "开发板");
    printf("欢迎使用野火STM32开发板\r\n");
    while (1)
    {
        /* 获取字符指令 */
        gets(ch);
        printf("接收到的字符为：%s\n", ch);
        /* 根据字符指令控制 RGB 彩灯颜色 */
        for (i = 0; i < 8; i++)
        {
            switch (ch[i])
            {
            case '0':
                LED_B_OFF;
                break;
            case '1':
                LED_B_ON;
                break;
            default:
                LED_R_ON;
                break; // 显示错误
            }
            delay(600);
        }
    }
}