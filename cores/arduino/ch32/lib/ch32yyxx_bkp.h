#ifndef _CH32YYXX__BKP_H_
#define _CH32YYXX__BKP_H_

#ifdef CH32V00x
//nothing

#elif defined (CH32V10x)
#include "ch32v10x_bkp.h"

#elif defined (CH32V20x)
#include "ch32v20x_bkp.h"

#elif defined (CH32V30x) || defined (CH32V30x_C)
#include "ch32v30x_bkp.h"

#elif defined(CH32L10x)
#include "ch32l103_bkp.h"



#endif

#endif /* _CH32YYXX__BKP_H_ */ 