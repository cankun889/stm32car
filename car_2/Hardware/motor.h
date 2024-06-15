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
	float 		Servo_Target_Angle;//目标角度
	float       Actual_Angle;//实际角度
	float       Position_PID_PWM_OUT;//PWM输出
	
	int   		Motor1_PWM_Out;//电机1PWM输出
	int  		Motor2_PWM_Out;//电机2PWM输出	
	uint8_t 	openMV_Data;//openMV数据	
	uint16_t 	Timer_threshold_value;//定时阈值
	uint8_t 	ModeChoose;//模式选择
	
	short UnitTime_Motor1Pluse;//单位时间内电机1脉冲数
	short UnitTime_Motor2Pluse;//单位时间内电机2脉冲数	
}Param_InitTypedef;

extern Param_InitTypedef Param;

#endif
