/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 14:00:01 by clap              #+#    #+#             */
/*   Updated: 2025/12/11 15:01:41 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    {
        std::cout << "=====================" << std::endl;
        std::cout << "========START========" << std::endl;
        std::cout << "=====================" << std::endl;

        ClapTrap Clap("CLAP");    //[ ClapTrap ]

        ScavTrap Scav("SCAV");    //[ ClapTrap ][ ScavTrap ]


        Clap.attack("SCAV");
        Clap.beRepaired(42);
        Clap.takeDamage(52);
        Clap.attack("SCAV");
        Clap.beRepaired(42);

        std::cout << std::endl
                  << "*********************" << std::endl;

        Scav.attack("CLAP");
        Scav.beRepaired(42);
        Scav.takeDamage(52);
        Scav.attack("CLAP");
        Scav.beRepaired(42);
        std::cout << std::endl;
    }
    std::cout << "=====================" << std::endl;
    std::cout << "=========END=========" << std::endl;
    std::cout << "=====================" << std::endl;
    std::cout << std::endl;
    std::cout << "*********************" << std::endl;
    std::cout << std::endl;
    {
        std::cout << "=====================" << std::endl;
        std::cout << "========START========" << std::endl;
        std::cout << "=====================" << std::endl;
        ScavTrap scav("SCAV");
        std::cout << std::endl;
        scav.guardGate();
        std::cout << std::endl;
    }
    std::cout << "=====================" << std::endl;
    std::cout << "=========END=========" << std::endl;
    std::cout << "=====================" << std::endl;
    return (0);
}
