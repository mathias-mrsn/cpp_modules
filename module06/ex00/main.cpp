/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 13:43:49 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/10 10:59:25 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Scalar.hpp>
#include <cstdlib>

int
main (int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Invalid number of arguments" << std::endl;
		return (EXIT_FAILURE);
	}
	Scalar *scalar = new Scalar(av[1]);
	if (!scalar)
		return (EXIT_FAILURE);
	delete scalar;
	return (EXIT_SUCCESS);
}