/*
 * File:   main.c
 * Author: 21192696
 *
 * Created on 29 de Abril de 2021, 14:03
 */


#include <xc.h>
#include "config.h"
#include "delay.h"
#include "dispLCD4vias.h"
#include "configuracao.h"

void main(void) 
{
    char tecla=0;
    dispLCD_init();
    teclado_init();
    teclado_scan();
    condicao();
    
    dispLCD(0,0, " boa tarde ");
    dispLCD(1,0, " Contando ");
    
    delay(1000);
    dispLCD_clr();
    
    dispLCD(0,0, " Contando: ");
    
    
    
    while(1)
    {
        tecla=teclado_scan();
        
        switch (tecla)
        {        
                
            case '1' :
                    
                    
                    dispLCD(0,10, " 1 ");
                    
                    break;
                    
            case '2' :
                    
                    dispLCD(0,10, " 2 ");
                    break;
        
            case '3' :
                
                    
                    dispLCD(0,10, " 3 ");
                    break;
                    
                    
            case 'A' :
                        
                    
                    dispLCD(0,10, " A ");
                    break;
            case '4' :
                
                    
                    dispLCD(0,10, " 4 ");
                    break;
                    
            case '5' :
                    
                    
                    dispLCD(0,10, " 5 ");
                    break;
            case '6' :
                
                    
                    dispLCD(0,10, " 6 ");
                    break;
                    
            case 'B' :
                    
                    
                    dispLCD(0,10, "B ");
                    break;
            case '7' :
                
                    
                    dispLCD(0,10, " 7 ");
                    break;
                    
            case '8' :
                    
                    
                    dispLCD(0,10, " 8 ");
                    break;
            
            case '9' :
                    
                    
                    dispLCD(0,10, " 9 ");
                    break;
            
            case 'C' :
                    
                    
                    dispLCD(0,10, " C ");
                    break;
                    
            case '*' :
                    
                    
                    dispLCD(0,10, " * ");
                    break;
                    
            case '0' :
                    
                    
                    dispLCD(0,10, " 0 ");
                    break;
                    
            case '#' :
                    
                    
                    dispLCD(0,10, " # ");
                    break;
               
            case 'D' :
                    
                    
                    dispLCD(0,10, " D ");
                    break;        
        }
        
        
    }

}
