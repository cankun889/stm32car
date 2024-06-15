#ifndef _MOTOR_H
#define	_MOTOR_H

#include "stm32f10x.h"
#include "sys.h"



#define PWMA   TIM1->CCR1  //PA8
#define PWMB   TIM1->CCR4  //PA11

void Motor_Init(void);
void Limit(int *motoA,int *motoB);
int  abs(int p);
void Load(int motor1,int motor2,uint16_t Target_Position);


void set_motor_enable(void);
void set_motor_disable(void);
void set_motor(int motor1,int motor2);

typedef struct{	
	float 		Servo_Target_Angle;//Ŀ��Ƕ�
	float       Actual_Angle;//ʵ�ʽǶ�
	float       Position_PID_PWM_OUT;//PWM���
	
	int   		Motor1_PWM_Out;//���1PWM���
	int  		Motor2_PWM_Out;//���2PWM���	
	uint8_t 	openMV_Data;//openMV����	
	uint16_t 	Timer_threshold_value;//��ʱ��ֵ
	uint8_t 	ModeChoose;//ģʽѡ��
	
	short UnitTime_Motor1Pluse;//��λʱ���ڵ��1������
	short UnitTime_Motor2Pluse;//��λʱ���ڵ��2������	
}Param_InitTypedef;

extern Param_InitTypedef Param;

#endif
