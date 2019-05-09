/*
* Filename: Dc_circuit
* Author: 	Matthew Adams
* Date: 	10/23/2018
*Description: This program will solve a DC circuit for current, voltage and power for a circuit of 5 resistances given the resistance of each. 
*/

#include <stdio.h>
#include <stdlib.h>

int main ( void ) {
	
	float a ;
	
	printf( "Please enter the DC volatage applied to the circuit: ") ;
	
	scanf(" %f", &a) ;
	
	printf("Voltage you entered is %f Volts\n", a); //used this to make sure code was working, see if what was entered was what was wanted

	float r1 ;
	printf( "Please enter resistance of resistor one: "); //asking for resistance one by one
	scanf(" %f", &r1);
	printf("The resistance you entered was %f Ohms\n", r1);//used this to make sure code was working
	
	float r2 ;
	printf( "Please enter resistance of resistor two: "); 
	scanf(" %f", &r2);
	printf("The resistance you entered was %f Ohms\n", r2);
	
	float r3 ;
	printf( "Please enter resistance of resistor three: "); 
	scanf(" %f", &r3);
	printf("The resistance you entered was %f Ohms\n", r3);
	
	float r4 ;
	printf( "Please enter resistance of resistor four: "); 
	scanf(" %f", &r4);
	printf("The resistance you entered was %f Ohms\n", r4);
	
	float r5 ;
	printf( "Please enter resistance of resistor five: "); 
	scanf(" %f", &r5);
	printf("The resistance you entered was %f Ohms\n", r5);
	
	float calc_resistance; //was not sure how to return calc_resistance back to rt, instead left it as varible
	calc_resistance = r1+r2+r3+r4+r5 ;
	printf("The total Resistance = %f Ohms\n", calc_resistance );
	
	float calc_current ;
	calc_current = a / calc_resistance ; 
	printf("The total current = %f Amps\n", calc_current);
	
	float vr1 ;
	vr1 = r1 * calc_current ;
	printf("The voltage for resistor one = %f Volts\n", vr1);
	
	float vr2 ;
	vr2 = r2 * calc_current ;
	printf("The voltage for resistor tow = %f Volts\n", vr2);
	
	float vr3 ;
	vr3 = r3 * calc_current ;
	printf("The voltage for resistor three = %f Volts\n", vr3);
	
	float vr4 ;
	vr4 = r4 * calc_current ;
	printf("The voltage for resistor four = %f Volts\n", vr4);
	
	float vr5 ;
	vr5 = r5 * calc_current ;
	printf("The voltage for resistor five = %f Volts\n", vr5);
	
	float pr1 ; //tried to make an array or a way to ask which resistor you wanted to know, array did not work, had hard time linking r1-r5, also need way to ask question 4 more times after the first one to gather all data
	pr1 = calc_current * calc_current * r1 ;
	printf("The power for resistor one = %f Watts\n", pr1);
	
	float pr2 ;
	pr2 = calc_current * calc_current * r2 ;
	printf("The power for resistor two = %f Watts\n", pr2);
	
	float pr3 ;
	pr3 = calc_current * calc_current * r3 ;
	printf("The power for resistor three = %f Watts\n", pr3);
	
	float pr4 ;
	pr4 = calc_current * calc_current * r4 ;
	printf("The power for resistor four = %f Watts\n", pr4);
	
	float pr5 ;
	pr5 = calc_current * calc_current * r5 ;
	printf("The power for resistor five = %f Watts\n", pr5);
	}
	
	float calc_resistance(r1, r2, r3, r4 ,r5)
	{return 
	}
	
	
	
	
	
	
	
