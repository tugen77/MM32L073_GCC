#include "bkp.h"

/********************************************************************************************************
**������Ϣ ��BKP_DATA(void)         
**�������� : BKP���ݶ�д���ԣ��ж�д�Ͷ��������Ƿ�һ��
**������� ��FirstBackupData
**������� ��i
********************************************************************************************************/
u8 BKP_DATA(void)
{
    /* Enable PWR and BKP clock */
    RCC->APB1ENR |= RCC_APB1ENR_PWREN;
    /* Enable write access to Backup domain */
    PWR->CR |= 0x100; 
    
    BKP->DR1=0x34;	
    
    if(BKP->DR1==0x34)
        return 0;
    else
        return 1;
}
