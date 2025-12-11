/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 09:04:26 by thodavid          #+#    #+#             */
/*   Updated: 2025/12/11 10:30:22 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/* CONSTR + DESTR */
FragTrap::FragTrap(void) : ClapTrap()
{
    _hit_points = 100;
    _energy_points = 100;
    _attack_damage = 30;
    std::cout << "Hello from FragTrap constructor" << std::endl;
    return;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    _hit_points = 100;
    _energy_points = 100;
    _attack_damage = 30;
    std::cout << "Hello from FragTrap constructor" << std::endl;
    return;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src)
{
    std::cout << "Hello from FragTrap constructor" << std::endl;
    return;
}

FragTrap::~FragTrap(void)
{
    std::cout << "Hello from FragTrap destructor" << std::endl;
    return;
}

/* FlagTrap CMD */

void FragTrap::highFivesGuys(void)
{
    std::cout << std::endl;
    std::cout << "===  FragTrap  " << this->_name << "  ===" << std::endl
              << this->_name << " Give me five !!!! 🤙(ToyStory) MontaElis Handshake👈"
              << std::endl;
}

void FragTrap::attack(const std::string &target)
{
    if (this->_energy_points <= 0)
    {
        std::cout << std::endl;
        std::cout << "===  FlagTrap  " << this->_name << "  ===" << std::endl;
        std::cout << "~IS OUT OF ENERGY~" << std::endl;
    }
    else if (this->_hit_points <= 0)
    {
        std::cout << std::endl;
        std::cout << "===  FlagTrap  " << this->_name << "  ===" << std::endl;
        std::cout << "~XXX IS DESTROY XXX~" << std::endl;
    }
    else
    {
        std::cout << std::endl;
        std::cout << "===  FlagTrap  " << this->_name << "  ===" << std::endl
                  << this->_name << " attack: " << target << std::endl
                  << "causing " << this->_attack_damage << " points of damage!"
                  << std::endl;
        this->_energy_points--;
    }
    return;
}

FragTrap &FragTrap::operator=(FragTrap const &rightHandSide)
{
    std::cout << "FlagTrap copy assign" << std::endl;
    if (this != &rightHandSide)
        ClapTrap::operator=(rightHandSide);
    return *this;
}
