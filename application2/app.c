/* 
 * File:   app.c
 * Author: Ismail
 *
 * Created on 22 ?????, 2024, 07:53 ?
 */
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<time.h>
#include<xc.h>
#include"../../include/proc/pic18f4620.h"
typedef unsigned char uint8;

#define HWREG(_x) (*((volatile uint8*)(_x)))
#define LATC_ADD (0XF8B)
#define TRISC_ADD (0XF94)
/*another type of macro to address*/
#define GHADA_LATC (HWREG(0XF8B))
#define GHADA_TRISC (HWREG(0XF94))
/**MACRO SET BIT***/
#define SET_BIT(REG,POIS) (REG |=(1<<POIS))

/**MACRO CLEAR BIT***/
#define CLEAR_BIT(REG,POIS) (REG&=~(1<<POIS))
/**MACRO TOGGLE BIT***/
#define TOGGLE_BIT(REG,POIS) (REG ^=(1<<POIS))

/*
 * 
 */
int main(int argc, char** argv) {

    HWREG(TRISC_ADD)=0x00;
    GHADA_TRISC=0X00;
    while(1){
    
    HWREG(GHADA_LATC)=0x55;
   
__delay_ms(2000);
    SET_BIT(GHADA_LATC,_TRISC_TRISC1_POSN);
    __delay_ms(2000);
    }
    
    
    
    
    
    
    return (EXIT_SUCCESS);
}
