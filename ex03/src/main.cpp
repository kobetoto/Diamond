/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 14:00:01 by kobe              #+#    #+#             */
/*   Updated: 2025/12/11 15:14:14 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
    {
        std::cout << "=====================" << std::endl;
        std::cout << "========START========" << std::endl;
        std::cout << "=====================" << std::endl;

        ClapTrap Clap("CLAP");    //[ ClapTrap ]
        ScavTrap Scav("SCAV");    //[ ClapTrap ] [ Scav ]
        FragTrap Frag("FRAG");    //[ ClapTrap ] [ Frag ]
        DiamondTrap Diamond("DIAMOND");    //[ ClapTrap ] [ Scav ] [ Frag ] [ Diamond ]
        //DiamondTrap Diamond("DIAMOND");    //[ [Clap] [Scav] ] [ [Clap] [Frag] ] [ Diamond ]

        Clap.attack("DIAMOND");
        Clap.beRepaired(42);
        Clap.takeDamage(52);
        Clap.attack("DIAMOND");
        Clap.beRepaired(42);

        std::cout << std::endl
                  << "*********************" << std::endl;

        Scav.attack("FRAG");
        Scav.beRepaired(42);
        Scav.takeDamage(52);
        Scav.attack("FRAG");
        Scav.beRepaired(42);
        std::cout << std::endl;

        std::cout << std::endl
                  << "*********************" << std::endl;

        Frag.attack("CLAP");
        Frag.beRepaired(42);
        Frag.takeDamage(52);
        Frag.attack("CLAP");
        Frag.beRepaired(42);
        std::cout << std::endl;

        std::cout << std::endl
                  << "*********************" << std::endl;

        Diamond.attack("SCAV");
        Diamond.beRepaired(42);
        Diamond.takeDamage(52);
        Diamond.attack("SCAV");
        Diamond.beRepaired(42);
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
        FragTrap frag("FRAG");
        std::cout << std::endl;
        frag.highFivesGuys();
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
        DiamondTrap Diam("Diams");
        std::cout << std::endl;
        Diam.whoAmI();
        std::cout << std::endl;
    }
    std::cout << "=====================" << std::endl;
    std::cout << "=========END=========" << std::endl;
    std::cout << "=====================" << std::endl;
    return (0);
}
