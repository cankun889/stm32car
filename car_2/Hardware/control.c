#include "control.h"



void Kenematic_Analysis(void)
{
	if(1)
	{
	    switch(0)
	    {
	    	case 0://直行匀速 后退匀速
	    		Param.Motor1_PWM_Out=Param.Motor1_PWM_Out;
	    		Param.Motor2_PWM_Out=Param.Motor2_PWM_Out;
	    		break;
	    	case 1://左轮加速/左轮减速
	    		Param.Motor1_PWM_Out=Param.Motor1_PWM_Out;
	    		Param.Motor2_PWM_Out=Param.Motor2_PWM_Out/2;
	    		break;
	    	case 2://右轮加速/左轮减速
	    		Param.Motor1_PWM_Out=Param.Motor1_PWM_Out/2;
	    		Param.Motor2_PWM_Out=Param.Motor2_PWM_Out;
	    		break;
	    	case 3://左轮+加速
	    		Param.Motor1_PWM_Out=Param.Motor1_PWM_Out;
	    		Param.Motor2_PWM_Out=Param.Motor2_PWM_Out/3.5;
	    		break;
	    	case 4://右轮+加速
	    		Param.Motor1_PWM_Out=Param.Motor1_PWM_Out/3.5;
	    		Param.Motor2_PWM_Out=Param.Motor2_PWM_Out;
	    		break;
			case 5://左轮++加速
	    		Param.Motor1_PWM_Out=Param.Motor1_PWM_Out;
	    		Param.Motor2_PWM_Out=Param.Motor2_PWM_Out/6;
	    		break;		
			case 6://右轮++加速
	    		Param.Motor1_PWM_Out=Param.Motor1_PWM_Out/6;
	    		Param.Motor2_PWM_Out=Param.Motor2_PWM_Out;
	    		break;			
	    }
	}
}
