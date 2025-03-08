/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moguille <moguille@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 18:04:45 by moguille          #+#    #+#             */
/*   Updated: 2025/03/08 21:15:38 by moguille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)

{
	while (n > 0)
	{
		if (*s1 == '\0' && (*s1 != *s2))
			s1++;
			s2++;
			n--;
	return ((unsigned char)*s1 - (unsigned char)*s2);
	}
	return (0);
}

int	main(void)
{
	char	s1[] = 
	char 	s2[] = 
	s1[] = "viñedo";
	s2[5] = "viña";

	int res;
	res = 0;

	res = ft_strncmp(s1, s2, 4);

	if (res == 0)
	{
		printf("las primeras 4 letras son iguales.\n");
	}
	else if (res < 0)
	{
		printf("<str1> is less.\n");
	}
	else
	{
		printf("<str1> is greater. \n");
	}
	return (0);
}
