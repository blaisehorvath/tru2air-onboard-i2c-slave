#include <msp430.h>

//variables
volatile unsigned char RXData; //store rece

int main () {
	WDTCTL = WDTPW + WDTHOLD;                 // Stop WDT
	WDTCTL = WDTPW + WDTHOLD;                 // Stop WDT
	  P1SEL |= BIT6 + BIT7;                     // Assign I2C pins to USCI_B0
	  P1SEL2|= BIT6 + BIT7;                     // Assign I2C pins to USCI_B0




	  UCB0CTL1 |= UCSWRST;                      // Enable SW reset
	  UCB0CTL0 = UCMODE_3 + UCSYNC;             // I2C Slave, synchronous mode
	  UCB0I2COA = 0x08; // I2C slave address - USCI module will receive the transmitted address
	  	  	  	  	  	  //and compare it against its own address stored in UCBxI2COA
	  UCB0CTL1 &= ~UCSWRST;                     // Clear SW reset, resume operation
	  UCB0I2CIE |= UCSTPIE + UCSTTIE;
	  IE2 |= UCB0RXIE;                          // Enable RX interrupt

	  P1DIR |= 0x01;
	  P1OUT &= 0xFE;
	  __bis_SR_register(CPUOFF + GIE);
	while(1){
		P1OUT &= 0xFE;
	};
}

void __attribute__ ((interrupt(USCIAB0RX_VECTOR))) USCIAB0RX_ISR (void)
{
	int fasz = UCB0RXBUF;
  UCB0STAT &= ~(UCSTPIFG + UCSTTIFG);       // Clear interrupt flags
	P1OUT |= 0x01;
}                                           // received



