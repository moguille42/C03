/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moguille <moguille@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 18:04:45 by moguille          #+#    #+#             */
/*   Updated: 2025/03/10 23:55:13 by moguille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char	*str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

char	*ft_strstr(char *str, char *to_find)
{
	int				i;
	unsigned int	size;

	i = 0;
	size = ft_strlen(to_find) - 1;
	while (str[i] != '\0')
	{
		if (ft_strncmp(&str[i], to_find, size) == 0)
			return (&str[i]);
		i++;
	}
	return (0);
}

/*#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	s1[] = "Si el perrito de Rita te irrita. Dile a Rita que \
	cambie el perrito por una perrita";
	char 	*str;

	str = s1;

	while (str != 0)
	{
		printf("%s\n", str);
		str++;
		str = ft_strstr(str, "rit");
	}
	return (0);
}*/
