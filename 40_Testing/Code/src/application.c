#include "Std_types.h"
#include "CntConfigurable.h"
#include "application_cfg.h"

int main(void)
{
    static int MainStatus = E_NOT_OK;
	static int CounterFlag = FALSE;

	/*Run the counter until its complete*/
	while (CounterFlag == FALSE)
	{
		CounterFlag = CntConfigurable();
	}

	/*Check that the counter reset and the counter flag is still set*/
	/*(Depending on the application configuration different check will be performed)*/
	#ifdef ACCESS_TO_COUNTER_VALUE
        #ifdef THIS_COUNTER_UP
		if(ThisCounter == 0 && CounterFlag == TRUE)
		#else
		if(ThisCounter == 10 && CounterFlag == TRUE)
        #endif
		{
			MainStatus = E_OK;
		}
		else
		{
			MainStatus = E_NOT_OK;
		}
	#else
		if(CounterFlag == TRUE)
		{
			MainStatus = E_OK;
		}
		else
		{
			MainStatus = E_NOT_OK;
		}
    #endif

	return MainStatus;
}
