/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 15:03:47 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/10 15:15:09 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int
main (__attribute__((unused)) int ac, __attribute__((unused)) char **av)
{
	std::string tab[5];

	tab[0] = "salut";
	tab[1] = "comment";
	tab[2] = "tu";
	tab[3] = "va";
	tab[4] = "cool";

	::iter(tab, static_cast<size_t>(5), &putstr);
}