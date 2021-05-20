#include "CntConfigurable_cfg.h"

#ifdef COUNT_GLOBAL_VALUE
	extern int ThisCounter;
#else
	/*No global for the counter value*/
#endif

int CntConfigurable(void);