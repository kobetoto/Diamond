/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 15:30:35 by thodavid          #+#    #+#             */
/*   Updated: 2025/12/11 10:38:11 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

//[ ClapTrap via ScavTrap ][ ScavTrap ][ ClapTrap via FragTrap ][ FragTrap ][ DiamondTrap ]

//[ ClapTrap (virtuel, unique) ][ ScavTrap ][ FragTrap ][ DiamondTrap ]
DiamondTrap::DiamondTrap(void) : ClapTrap()
{
    std::cout << "Hello from Diamond constructor" << std::endl;
}
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"),
                                             ScavTrap(name),
                                             FragTrap(name),
                                             _name(name)
{
    _hit_points = 420;
    _energy_points = 420;
    _attack_damage = 420;
    std::cout << "Hello from DiamondTrap constructor" << std::endl;
}
DiamondTrap::DiamondTrap(DiamondTrap const &src)
{
    std::cout << "Hello from DiamondTrap cpy constr" << std::endl;
    *this = src;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &rightHandSide)
{
    std::cout << "Copy assignment operator called" << '\n';
    if (this != &rightHandSide)
    {
        this->_name = rightHandSide._name;
        this->_hit_points = rightHandSide._hit_points;
        this->_energy_points = rightHandSide._energy_points;
        this->_attack_damage = rightHandSide._attack_damage;
    }
    return *this;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "Hello from DiamondTrap destructor" << std::endl;
    return;
}

void    DiamondTrap::attack(const std::string &target){
    if (this->_energy_points <= 0)
    {
        std::cout << std::endl;
        std::cout << "===  DiamondTrap  " << this->_name << "  ===" << std::endl;
        std::cout << "~IS OUT OF ENERGY~" << std::endl;
    }
    else if (this->_hit_points <= 0)
    {
        std::cout << std::endl;
        std::cout << "===  DiamondTrap  " << this->_name << "  ===" << std::endl;
        std::cout << "~XXX IS DESTROY XXX~" << std::endl;
    }
    else
    {
        std::cout << std::endl;
        std::cout << "===  DiamondTrap  " << this->_name << "  ===" << std::endl
                  << this->_name << " attack: " << target << std::endl
                  << "causing " << this->_attack_damage << " points of damage!"
                  << std::endl;
        this->_energy_points--;
    }
}


void DiamondTrap::whoAmI()
{
    std::cout << std::endl;
    std::cout << "===  FlagTrap  " << this->_name << "  ===" << std::endl;
    std::cout << "My name is: " << this->_name << std::endl;
    std::cout << "My name is: " << ClapTrap::_name << std::endl;
    std::cout << "Hi, kids, do you like violence?..." << std::endl;
}
