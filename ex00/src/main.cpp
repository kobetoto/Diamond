/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 14:00:01 by kobe              #+#    #+#             */
/*   Updated: 2025/12/11 15:01:22 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    std::cout << "=====================" << std::endl;
    std::cout << "========START========" << std::endl;
    std::cout << "=====================" << std::endl;

    ClapTrap kobe("KOBE");    //[ ClapTrap ]

    ClapTrap kobe2;    //[ ClapTrap ]


    // std::cout << kobe.getName( ) << std::endl;
    // std::cout << kobe.getHitPts() << std::endl;
    // std::cout << kobe.getEnrgyPts() << std::endl;
    // std::cout << kobe.getAttckDama() << std::endl;
    kobe.attack("KOBE-2-");
    kobe.beRepaired(42);
    kobe.takeDamage(52);
    kobe.attack("KOBE-2-");
    kobe.beRepaired(42);

    std::cout << std::endl;
    std::cout << "=====================" << std::endl;
    std::cout << "=========END=========" << std::endl;
    std::cout << "=====================" << std::endl;

    /************************************************/

    std::cout << std::endl;
    std::cout << "=====================" << std::endl;
    std::cout << "========START========" << std::endl;
    std::cout << "=====================" << std::endl;

    kobe2.attack("KOBE");
    kobe2.beRepaired(90);
    kobe2.takeDamage(10);
    for (int i = 0; i < 8; i++)
        kobe2.attack("KOBE");
    kobe2.beRepaired(10);
    kobe2.beRepaired(0);
    
    std::cout << std::endl;
    std::cout << "=====================" << std::endl;
    std::cout << "=========END=========" << std::endl;
    std::cout << "=====================" << std::endl;

    return (0);
}
