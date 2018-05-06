
#ifndef CONTROLLERS_ROTUECONTROLLER_H_
#define CONTROLLERS_ROTUECONTROLLER_H_

#include "../HAL/lineTracer.h"
#include "../HAL/motor.h"
#include "../ServiceLayer/std_types.h"
#include "../MCAL/GPIO.h"
#include "../config.h"

#define CLKWIS     0
#define ANTICLKWIS 1
#define X 0
#define Y 1
extern uint8 currentPos[2] ;

BOOLEAN crossDetection();
void route(uint8,uint8,uint8,uint8);
void rotat90(uint8 direction);
void excuitYEnd(uint8 va);
void setFinalPos();
void excuitValue(uint8 va);
void excuitYStart(uint8 va);
void  excuiteX(uint8 xs,uint8 xe);

#endif /* CONTROLLERS_ROTUECONTROLLER_H_ */
