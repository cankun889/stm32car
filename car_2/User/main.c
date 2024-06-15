#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "OLED.h"
#include "Serial.h"
#include "LED.h"
#include "string.h"
#include "stdio.h"
#include "motor.h"
#include "control.h"


int main(void)
{
	/*模块初始化*/
	OLED_Init();		//OLED初始化
	Usart2_Init(115200);
	
	Motor_Init();
	
	PWM_Init_TIM1(0,7199);//10khz频率驱动电机
//	Param.Motor1_PWM_Out=3000;
//	Param.Motor2_PWM_Out=3000;
	/*显示静态字符串*/
	OLED_ShowString(1, 1, "test");
	
	while (1)
	{
		
		if (USART_GetITStatus(USART2, USART_IT_RXNE) != RESET)		//如果接收到数据包
		{
			u8 received_data = USART_ReceiveData(USART2);  // 读取接收到的数据
            OLED_ShowChar(2, 1, received_data);  // 在 OLED 上显示接收到的字符
			printf("%u",received_data);
			set_motor(3000,3000);
		}
		else{
			OLED_ShowString(4, 1, "                ");
		}
	}
}
	
char Usart_ReadBuff1[30] = {0};
u8 Usart_ReadOk = 0;
u8 count_USART2=0;
void USART2_IRQHandler(void)
{
//    uint8_t ch;
    u8 temp;

    if(USART_GetITStatus(USART2, USART_IT_RXNE) != RESET)
    {     
        //ch = USART1->DR;
//		ch = USART_ReceiveData(USART2);
		temp=USART_ReceiveData(USART2);
		if(Usart_ReadOk==0)
		{
			Usart_ReadBuff1[count_USART2]=temp;
			count_USART2++;
			if(temp=='#')
			{
				count_USART2=0;
				Usart_ReadOk=1;
			}
		}
		
//         printf( "%c", ch );    //将接受到的数据直接返回打印
//		 printf( "%c", temp ); 
    } 
     
}
