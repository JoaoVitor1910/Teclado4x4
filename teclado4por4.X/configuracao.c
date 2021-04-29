/*
 * File:   configuracao.c
 * Author: 21192696
 *
 * Created on 29 de Abril de 2021, 15:35
 */


#include <xc.h>
#include "delay.h"
void teclado_init (void)
{
    ANSELH=0;
    TRISB=0xF0;
    OPTION_REGbits.nRBPU=0;
    WPUB=0x00;
    PORTB=0x01;
    
}

#define  L0   PORTBbits.RB0   
#define  L1   PORTBbits.RB1   
#define  L2   PORTBbits.RB2 
#define  L3   PORTBbits.RB3 
#define  C0   PORTBbits.RB4 
#define  C1   PORTBbits.RB5 
#define  C2   PORTBbits.RB6 
#define  C3   PORTBbits.RB7 


char teclado_scan (void)
{
    L0=1;
    L1=0;
    L2=0;
    L3=0;
    
    if( C0 )
        return('1');
    if( C1 )
        return('2');
    if( C2 )
        return('3');
    if( C3 )
        return('A');
    
    delay(15);
    
    L1=1;
    L0=0;
    L2=0;
    L3=0;  
    
    if( C0 )
        return('4');
    if( C1 )
        return('5');
    if( C2 )
        return('6');
    if( C3 )
        return('B');
    
     delay(15);
    
    L2=1;
    L0=0;
    L1=0;
    L3=0; 
    if( C0 )
        return('7');
    if( C1 )
        return('8');
    if( C2 )
        return('9');
    if( C3 )
        return('C');
    
     delay(15);
    
    L3=1;
    L1=0;
    L2=0;
    L0=0;
    if( C0 )
        return('*');
    if( C1 )
        return('0');
    if( C2 )
        return('#');
    if( C3 )
        return('D');
    
     delay(15) ;
}  

void condicao (void)
{
    if(L0)
    {
    L1=0;
    L2=0;
    L3=0;      
    }

    if(L1)
    {
    L0=0;
    L2=0;
    L3=0;      
    }
    
    if(L2)
    {
    L0=0;
    L1=0;
    L3=0;       
    }
    
    if(L3)
    {
    L1=0;
    L2=0;
    L0=0;      
    }
    
    
}