/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moguille <moguille@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 18:04:45 by moguille          #+#    #+#             */
/*   Updated: 2025/03/11 22:48:46 by moguille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0 && (s1 || s2))
		return (0);
	while (i < n - 1 && s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	s1[] = "";
	char 	s2[] = "ho";
	int res;
	int size = 0;
	
	printf("%i \n", strncmp(s1, s2, size));
	printf("%i \n", ft_strncmp(s1, s2, size));
	//res = ft_strncmp(s1, s2, size);
	/*if (res == 0)
		printf("las primeras %d letras son iguales.\n", size);
	else if (res < 0)
		printf("<str1> is less.\n");
	else
		printf("<str1> is greater. \n");*/
	return (0);
}
