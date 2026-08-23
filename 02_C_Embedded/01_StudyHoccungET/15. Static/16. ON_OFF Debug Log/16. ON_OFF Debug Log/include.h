#ifndef __INC_H
#define __INC_H

#define MCU_DEBUG 1 // 1 print - 0 No print
#if MCU_DEBUG
	#include <stdio.h>
	#define mPrintf(...) printf(__VA_ARGS__)
#else
	#define mPrintf(...) ((void)0)
#endif

#endif
