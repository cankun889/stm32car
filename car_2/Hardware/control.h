#ifndef  _CONTROL_H
#define  _CONTROL_H

#include "stm32f10x.h"
#include "sys.h" 

#define BACK_PACKING 			1
#define SIDE_PACKING 			2
#define BACK_SIDE_PACKING 		3

/* 编码器物理分辨率 */
#define ENCODER_RESOLUTION                     13
/* 经过倍频之后的总分辨率 */
#define ENCODER_TOTAL_RESOLUTION             (ENCODER_RESOLUTION * 4)  /* 4倍频后的总分辨率 */
/* 减速电机减速比 */
#define REDUCTION_RATIO  30
/* 定时器周期10ms */
#define VELOCITY_PID_PERIOD  10   




typedef struct{	
 uint8_t Is_Stop_Car;//是否停车
 uint8_t Is_Timer_Up;//是否定时到
 uint8_t Run_Step;//运行步骤
 uint8_t Start_Count;//开始计时	
 uint8_t Go_Straight;//直行
 uint8_t Go_Turn_Left;//左转
 uint8_t back;
 uint8_t Go_Turn_Right;
}Flag_InitTypedef;


extern Flag_InitTypedef  Flag;
extern float Pitch,Roll,Yaw; 		//欧拉角

void Kinematic_Analysis(float velocity1,float velocity2); //现在的PID 速度期望最大为580
void Control_Proc(void);

extern float Positon1_Target_cm;//传入目标距离d
extern float Positon2_Target_cm;//传入目标距离d
extern float Positon_Kp,Positon_Kd;

extern u8 Menu;
extern u8 Bunch_PID;//位置速度串级PID模式
extern u8 Velocity_PID;//位置速度串级PID模式

extern int32_t Position_Encoder1_Sum;//左轮编码器累计
extern int32_t Position_Encoder2_Sum;//右轮编码器累计

#endif

