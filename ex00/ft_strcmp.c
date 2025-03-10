/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moguille <moguille@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 19:52:43 by moguille          #+#    #+#             */
/*   Updated: 2025/03/10 23:58:35 by moguille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

/*int	main(void)
{
	char	*str1 = "sol";
	char	*str2 = "sol";

	int	res;
	res = ft_strcmp(str1, str2);

	if(res == 0)
		printf("<str1> and <str2> are equal\n");
	else if (res < 0)
		printf("<str1> is less than <str2>\n");
		else
			printf("<str1> is greater than <str2>\n");

	return (0 );
}*/
