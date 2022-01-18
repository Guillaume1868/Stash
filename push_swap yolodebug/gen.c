/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gen.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaubert <gaubert@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 10:13:47 by gaubert           #+#    #+#             */
/*   Updated: 2022/01/18 10:34:43 by gaubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int Count(int N)
{
	// Initialize a variable to store
    // count of Repeating digits
    int res = 0;

    // Initialize cnt array to
    // store digit count

    int cnt[10] = { 0 };

    // Iterate through the digits of N
    while (N > 0) {

        // Retrieve the last digit of N
        int rem = N % 10;

        // Increase the count of digit
        cnt[rem]++;

        // Remove the last digit of N
        N = N / 10;
    }

    // Iterate through the cnt array
    for (int i = 0; i < 10; i++) {

        // If frequency of digit
        // is greater than 1
        if (cnt[i] > 1) {

            // Increment the count
            // of Repeating digits
            res++;
        }
    }

    // Return count of repeating digit
    return res;
}

void PrintfRecursivly(int number)
{
     if (number < 0)
     {
       number *= -1;
       printf("- ");
     }
     if (number > 10)
     {
        PrintfRecursivly(number / 10);
        printf(" ");
     }

     printf("%d", number % 10);
}

int	main(void)
{
	int x = 1200;
	while (++x < 100000)
	{
		if(!Count(x))
		{
			if (x < 10000)
			{
				printf("0 ");
				PrintfRecursivly(x);
				printf("\n");
			}
			else
			{
				PrintfRecursivly(x);
				printf("\n");
			}
		}
	}

}
