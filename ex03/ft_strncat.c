/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moguille <moguille@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 21:57:49 by moguille          #+#    #+#             */
/*   Updated: 2025/03/09 23:03:05 by moguille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				len_dest;
	unsigned int	i;

	i = 0;
	len_dest = ft_strlen(dest);
	while (i < nb && src[i] != '\0')
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (dest);
}

/*#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	dest[100] = "Edu ";
	char	src[] = "te quiero mucho";

	ft_strncat(dest, src, 30);
	printf("%s\n", dest);
	return (0);
}*/
