#include "main.h"
#include <stdio.h>

void print_times_table(int n) 
{
	if (n < 0 || n > 15) 
	{
		return;
	}
	for (int i = 0; i <= n; i++) 
	{
		for (int j = 0; j <= n; j++) 
		{
            		int product = i * j;
            		if (product < 10) 
	    	{
		    	_putchar(product + '0');
            	} 
			else 
	    	{
		    	_putchar((product / 10) + '0');
		    	_putchar((product % 10) + '0');
            	}
            	_putchar(' ');
        }
        _putchar('\n');
    }
}
