#include <msp430.h>				

int main(void) {
	WDTCTL = WDTPW | WDTHOLD;		// Stop watchdog timer
	P1DIR |= 0x41;				// Set P1.0 to output direction
	P1OUT &= 0xBE;
	char str[] = "Andre V 2";
	int n = sizeof(str)/sizeof(str[0]);
	n = n-1;
	int j;

	for(;;) {
		volatile unsigned int i;	// volatile to prevent optimization

		for(j=0;j < n;j++)
		{
			if(str[j] == 'A' || str[j] == 'a')
			{
				P1OUT ^= 0x01;
				i = 20000;					// SW Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// SW Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// SW Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Space Delay
				do i--;
				while(i != 0);
			}
			if(str[j] == 'B' || str[j] == 'b')
			{
				P1OUT ^= 0x01;
				i = 60000;					// SW Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// SW Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// SW Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// SW Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// SW Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// SW Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// SW Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Space Delay
				do i--;
				while(i != 0);

			}
			if(str[j] == 'C' || str[j] == 'c')
			{
				P1OUT ^= 0x01;
				i = 60000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Space Delay
				do i--;
				while(i != 0);
			}
			if(str[j] == 'D' || str[j] == 'd')
			{
				P1OUT ^= 0x01;
				i = 60000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Space Delay
				do i--;
				while(i != 0);
			}
			if(str[j] == 'E' || str[j] == 'e')
			{
				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Space Delay
				do i--;
				while(i != 0);
			}
			if(str[j] == 'F' || str[j] == 'f')
			{
				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Space Delay
				do i--;
				while(i != 0);
			}
			if(str[j] == 'G' || str[j] == 'g')
			{
				P1OUT ^= 0x01;
				i = 60000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Space Delay
				do i--;
				while(i != 0);
			}
			if(str[j] == 'H' || str[j] == 'h')
			{
				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Space Delay
				do i--;
				while(i != 0);
			}
			if(str[j] == 'I' || str[j] == 'i')
			{
				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Dot Delay
				do i--;
				while(i != 0);
			}
			if(str[j] == 'J' || str[j] == 'j')
			{
				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Space Delay
				do i--;
				while(i != 0);
			}
			if(str[j] == 'K' || str[j] == 'k')
			{
				P1OUT ^= 0x01;
				i = 60000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Space Delay
				do i--;
				while(i != 0);
			}
			if(str[j] == 'L' || str[j] == 'l')
			{
				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Space Delay
				do i--;
				while(i != 0);
			}
			if(str[j] == 'M' || str[j] == 'm')
			{
				P1OUT ^= 0x01;
				i = 60000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Space Delay
				do i--;
				while(i != 0);
			}
			if(str[j] == 'N' || str[j] == 'n')
			{
				P1OUT ^= 0x01;
				i = 60000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Space Delay
				do i--;
				while(i != 0);
			}
			if(str[j] == 'O' || str[j] == 'o')
			{
				P1OUT ^= 0x01;
				i = 60000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Space Delay
				do i--;
				while(i != 0);
			}
			if(str[j] == 'P' || str[j] == 'p')
			{
				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Space Delay
				do i--;
				while(i != 0);
			}
			if(str[j] == 'Q' || str[j] == 'q')
			{
				P1OUT ^= 0x01;
				i = 60000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Space Delay
				do i--;
				while(i != 0);
			}
			if(str[j] == 'R' || str[j] == 'r')
			{
				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Space Delay
				do i--;
				while(i != 0);
			}
			if(str[j] == 'S' || str[j] == 's')
			{
				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Space Delay
				do i--;
				while(i != 0);
			}
			if(str[j] == 'T' || str[j] == 't')
			{
				P1OUT ^= 0x01;
				i = 60000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Space Delay
				do i--;
				while(i != 0);
			}
			if(str[j] == 'U' || str[j] == 'u')
			{
				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Space Delay
				do i--;
				while(i != 0);
			}
			if(str[j] == 'V' || str[j] == 'v')
			{
				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Space Delay
				do i--;
				while(i != 0);
			}
			if(str[j] == 'W' || str[j] == 'w')
			{
				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Space Delay
				do i--;
				while(i != 0);
			}
			if(str[j] == 'X' || str[j] == 'x')
			{
				P1OUT ^= 0x01;
				i = 60000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Space Delay
				do i--;
				while(i != 0);
			}
			if(str[j] == 'Y' || str[j] == 'y')
			{
				P1OUT ^= 0x01;
				i = 60000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Space Delay
				do i--;
				while(i != 0);
			}
			if(str[j] == 'Z' || str[j] == 'z')
			{
				P1OUT ^= 0x01;
				i = 60000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Space Delay
				do i--;
				while(i != 0);
			}
			if(str[j] == ' ')
			{
				i = 60000;					// Space Delay
				do i--;
				while(i != 0);

				i = 20000;					// Space Delay
				do i--;
				while(i != 0);
			}
			if(str[j] == '1')
			{
				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Space Delay
				do i--;
				while(i != 0);
			}
			if(str[j] == '2')
			{
				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Space Delay
				do i--;
				while(i != 0);
			}
			if(str[j] == '3')
			{
				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Space Delay
				do i--;
				while(i != 0);
			}
			if(str[j] == '4')
			{
				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Space Delay
				do i--;
				while(i != 0);
			}
			if(str[j] == '5')
			{
				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Space Delay
				do i--;
				while(i != 0);
			}
			if(str[j] == '6')
			{
				P1OUT ^= 0x01;
				i = 60000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Space Delay
				do i--;
				while(i != 0);
			}
			if(str[j] == '7')
			{
				P1OUT ^= 0x01;
				i = 60000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Space Delay
				do i--;
				while(i != 0);
			}
			if(str[j] == '8')
			{
				P1OUT ^= 0x01;
				i = 60000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Space Delay
				do i--;
				while(i != 0);
			}
			if(str[j] == '9')
			{
				P1OUT ^= 0x01;
				i = 60000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dot Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Space Delay
				do i--;
				while(i != 0);
			}
			if(str[j] == '0')
			{
				P1OUT ^= 0x01;
				i = 60000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 20000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Dash Delay
				do i--;
				while(i != 0);

				P1OUT ^= 0x01;
				i = 60000;					// Space Delay
				do i--;
				while(i != 0);
			}
		}

		P1OUT ^= 0x40;				// Toggle P1.0 using exclusive-OR

		i = 60000;					// SW Delay
		do i--;
		while(i != 0);

		P1OUT ^= 0x40;
		i = 60000;					// SW Delay
		do i--;
		while(i != 0);
	}
	
	return 0;
}
