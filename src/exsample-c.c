#include <stdio.h>


int exsample_c_func(void)
{
	printf("exsample-c-func\n");

#ifdef	_USER_DEBUG_
	printf("USERDEBUG_C");
#endif	//_USER_DEBUG_

#ifdef	_PRINTF_DEBUG_
	printf("PRINTFDEBUG_C");
#endif	//_PRINTF_DEBUG_

	return 0;
}
