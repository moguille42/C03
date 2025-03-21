/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moguille <moguille@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 18:04:45 by moguille          #+#    #+#             */
/*   Updated: 2025/03/12 12:47:47 by moguille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	s1[] = "lluvaioso";
	char 	s2[] = "lluvia";
	int res;
	int size = 3;
	
	printf("%i \n", strncmp(s1, s2, size));
	printf("%i \n", ft_strncmp(s1, s2, size));
	res = ft_strncmp(s1, s2, size);
	if (res == 0)
		printf("las primeras %d letras son iguales.\n", size);
	else if (res < 0)
		printf("<str1> is less.\n");
	else
		printf("<str1> is greater. \n");
	return (0);
}*/
