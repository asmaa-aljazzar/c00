/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljazza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 12:34:25 by aaljazza          #+#    #+#             */
/*   Updated: 2024/06/08 12:57:01 by aaljazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
/*
* For Print A Single Character.
*/
void	ft_putchar(char c);
/*
* Function For Draw A rectangle:
* - Start With Row = 1 And Column = 1 .
* - End With Row = Width(y) And Column = height(x).
*/

void	print_col_row(int row, int col, int x, int y)
{
	if ((row == 1 && col == 1) || (row == 1 && col == x))
	{
		ft_putchar('A');
	}
	else if ((row == y && col == 1) || (row == y && col == x))
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
}

void	rush(int x, int y)
{
	int	row;
	int	col;

	row = 1;
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			print_col_row(row, col, x, y);
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
