#include "control.h"



void Kenematic_Analysis(void)
{
	if(1)
	{
	    switch(0)
	    {
	    	case 0://ֱ������ ��������
	    		Param.Motor1_PWM_Out=Param.Motor1_PWM_Out;
	    		Param.Motor2_PWM_Out=Param.Motor2_PWM_Out;
	    		break;
	    	case 1://���ּ���/���ּ���
	    		Param.Motor1_PWM_Out=Param.Motor1_PWM_Out;
	    		Param.Motor2_PWM_Out=Param.Motor2_PWM_Out/2;
	    		break;
	    	case 2://���ּ���/���ּ���
	    		Param.Motor1_PWM_Out=Param.Motor1_PWM_Out/2;
	    		Param.Motor2_PWM_Out=Param.Motor2_PWM_Out;
	    		break;
	    	case 3://����+����
	    		Param.Motor1_PWM_Out=Param.Motor1_PWM_Out;
	    		Param.Motor2_PWM_Out=Param.Motor2_PWM_Out/3.5;
	    		break;
	    	case 4://����+����
	    		Param.Motor1_PWM_Out=Param.Motor1_PWM_Out/3.5;
	    		Param.Motor2_PWM_Out=Param.Motor2_PWM_Out;
	    		break;
			case 5://����++����
	    		Param.Motor1_PWM_Out=Param.Motor1_PWM_Out;
	    		Param.Motor2_PWM_Out=Param.Motor2_PWM_Out/6;
	    		break;		
			case 6://����++����
	    		Param.Motor1_PWM_Out=Param.Motor1_PWM_Out/6;
	    		Param.Motor2_PWM_Out=Param.Motor2_PWM_Out;
	    		break;			
	    }
	}
}
