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
    Usart_SendString(DEBUG_USARTx, "������");
    printf("��ӭʹ��Ұ��STM32������\r\n");
    while (1)
    {
        /* ��ȡ�ַ�ָ�� */
        gets(ch);
        printf("���յ����ַ�Ϊ��%s\n", ch);
        /* �����ַ�ָ����� RGB �ʵ���ɫ */
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
                break; // ��ʾ����
            }
            delay(600);
        }
    }
}