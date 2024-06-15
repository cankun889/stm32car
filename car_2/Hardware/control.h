#ifndef  _CONTROL_H
#define  _CONTROL_H

#include "stm32f10x.h"
#include "sys.h" 

#define BACK_PACKING 			1
#define SIDE_PACKING 			2
#define BACK_SIDE_PACKING 		3

/* ����������ֱ��� */
#define ENCODER_RESOLUTION                     13
/* ������Ƶ֮����ֱܷ��� */
#define ENCODER_TOTAL_RESOLUTION             (ENCODER_RESOLUTION * 4)  /* 4��Ƶ����ֱܷ��� */
/* ���ٵ�����ٱ� */
#define REDUCTION_RATIO  30
/* ��ʱ������10ms */
#define VELOCITY_PID_PERIOD  10   




typedef struct{	
 uint8_t Is_Stop_Car;//�Ƿ�ͣ��
 uint8_t Is_Timer_Up;//�Ƿ�ʱ��
 uint8_t Run_Step;//���в���
 uint8_t Start_Count;//��ʼ��ʱ	
 uint8_t Go_Straight;//ֱ��
 uint8_t Go_Turn_Left;//��ת
 uint8_t back;
 uint8_t Go_Turn_Right;
}Flag_InitTypedef;


extern Flag_InitTypedef  Flag;
extern float Pitch,Roll,Yaw; 		//ŷ����

void Kinematic_Analysis(float velocity1,float velocity2); //���ڵ�PID �ٶ��������Ϊ580
void Control_Proc(void);

extern float Positon1_Target_cm;//����Ŀ�����d
extern float Positon2_Target_cm;//����Ŀ�����d
extern float Positon_Kp,Positon_Kd;

extern u8 Menu;
extern u8 Bunch_PID;//λ���ٶȴ���PIDģʽ
extern u8 Velocity_PID;//λ���ٶȴ���PIDģʽ

extern int32_t Position_Encoder1_Sum;//���ֱ������ۼ�
extern int32_t Position_Encoder2_Sum;//���ֱ������ۼ�

#endif

