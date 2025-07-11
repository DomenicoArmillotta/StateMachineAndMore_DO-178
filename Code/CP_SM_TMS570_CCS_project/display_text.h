#ifndef __DISPLAYTEXT_H__
#define __DISPLAYTEXT_H__

#include "HL_sci.h"

/* Choosing the SCI module used depending upon the device HDK */
#if defined(_TMS570LC43x_) || defined(_RM57Lx_)
#define sciREGx sciREG1
#else
#define sciREGx scilinREG
#endif
extern uint8_t     txtCRLF_[2];
void    sciDisplayText_      (sciBASE_t *sci, uint8_t *text,uint32_t length);

#endif
