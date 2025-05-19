#ifndef _BIT_MATH_H
#define _BIT_MATH_H

#define SET_BIT(reg,bit)     (reg|=1<<bit)
#define CLR_BIT(reg,bit)     (reg&=~(1<<bit))
#define TOOGLE_BIT(reg,bit)  (reg^=1<<bit)
#define GIT_BIT(reg,bit)     ((reg>>bit)&1)

#endif