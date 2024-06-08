#include <unistd.h>
/*
* For Print A Single Character.
*/
void ft_putchar(char c);
/*
* Function For Draw A rectangle:
* - Start With Row = 1 And Column = 1 .
* - End With Row = Width(y) And Column = height(x).
*/
void	rush(int x, int y)
{
	int row,col;
	row = 1;
	if (x >= 0 && y >= 0)
	{
		while(row <= y)
		{
			col = 1;
			while(col <= x)
			{
				if ( (row == 1 && col ==1) || ( row == y && col == 1)  )
				{
					ft_putchar('A');
				}
				else if ( (row == 1 && col == x) || (row  == y && col == x) )
				{
						ft_putchar('C');
				}
				else if (col == 1 || col == x || row == 1 || row == y)
				{
					ft_putchar('B');
				}
				else
				{
					ft_putchar(' ');
				}
				col++;
			}
			ft_putchar('\n');
			row++;		
		}
	}
	else
	{
		write(1, "Please Enter Just Positive values", 30);
	}
}
