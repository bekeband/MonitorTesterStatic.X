/*
 * File:   main.c
 * Author: user
 * Created on 2014. február 26., 9:24
 */

#include <p30Fxxxx.h>      /* Device header file                              */
#include <stdio.h>
#include <stdlib.h>

/* You can change the hack a day nonfigurative picture, or catvision monoscope
 */

//#define HACK_A_DAY_PICTURE
#define CATVISION_PICTURE

#ifdef HACK_A_DAY_PICTURE
  #include "hackaday.h"
#else
#ifdef CATVISION_PICTURE
  #include "catvision.h"
#endif
#endif
//#include "main.h"

extern void outframe(void);

/* Enables HS oscillator div 2, and PLL 16 (80Mhz)
 TCY (instruction cycle = FOSC / 4
 FOSC = 20MHz  TOSC = 50nsec  */
_FOSC(HS2_PLL16 & CSW_FSCM_OFF);
_FBORPOR(PWRT_OFF & BORV27 & PBOR_OFF & MCLR_EN & RST_IOPIN); /* Ext MCLR, no
                                                               * brownout */
_FWDT(WDT_OFF); /* Turns off watchdog timer */

void InitIOPorts()
{
  /* ADPCFG: A/D Port Configuration Register *
    * PCFG<15:0>: Analog Input Pin Configuration Control bits
    * 1 = Analog input pin in Digital mode, port read input enabled, A/D input multiplexer input connected to AVSS
    * 0 = Analog input pin in Analog mode, port read input disabled, A/D samples pin voltage */

  ADPCFG = 0b0000000000011110;  // AD 1,2,3,4 leaves digital port
  TRISB = 0b11100001; // B1-2-3-4 outputs.

}

__psv__ unsigned int* SCREEN_POINTER = &SCREEN_BUFFER_02[0];

/*
 * 
 */
int main()
{

  InitIOPorts();

  /* Only cyclical draw the one frame. */

  while (1)
    {
      outframe();
    }
  
  return (EXIT_SUCCESS);
}

