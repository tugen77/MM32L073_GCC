#include "delay.h"
#include "sys.h"
#include "led.h"
#include "bkp.h"

/********************************************************************************************************
**������Ϣ ��main(void)                     
**�������� ��
**������� ����
**������� ����
********************************************************************************************************/
int main(void)    
{
    u8 flag=0;
    delay_init();
    LED_Init();
    flag = BKP_DATA();		 //��BKPд���ݣ�����ɹ���LED������ʧ���������˸
    
    if(flag==0)	
    {
        while(1)              //����ѭ��
        {
            LED1_TOGGLE();
            LED2_TOGGLE();
            LED3_TOGGLE();
            LED4_TOGGLE();
            delay_ms(1000);//BKP���ݶ�д�ɹ�������
        }
    }
    else
    {
        while(1)              //����ѭ��
        {
            LED1_TOGGLE();
            LED2_TOGGLE();
            LED3_TOGGLE();
            LED4_TOGGLE();
            delay_ms(50);//BKP���ݶ�дʧ�ܣ�����
        }
    }
}

