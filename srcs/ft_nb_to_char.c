/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nb_to_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcancela <mcancela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 14:54:17 by mcancela          #+#    #+#             */
/*   Updated: 2018/12/19 17:01:56 by mcancela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_nb_to_char(char *nstr, int *cpt, int n)
{
	unsigned int	nbr;

	nbr = n;
	if (n < 0)
	{
		nstr[*cpt] = '-';
		nbr = -n;
		(*cpt)++;
	}
	if (nbr < 10)
	{
		nstr[*cpt] = nbr + 48;
		(*cpt)++;
	}
	if (nbr > 9)
	{
		ft_nb_to_char(nstr, cpt, nbr / 10);
		ft_nb_to_char(nstr, cpt, nbr % 10);
	}
}
