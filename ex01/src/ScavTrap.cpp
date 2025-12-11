/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 12:44:25 by thodavid          #+#    #+#             */
/*   Updated: 2025/12/08 14:31:48 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* CONSTR + DESTR */
ScavTrap::ScavTrap(void) : ClapTrap()
{
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
    std::cout << "Hello from ScavTrap constructor" << std::endl;
    return;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
    std::cout << "Hello from ScavTrap constructor" << std::endl;
    return;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src)
{
    std::cout << "Hello from ScavTrap cpy constr" << std::endl;
    return;
}
ScavTrap::~ScavTrap(void)
{
    std::cout << "Hello from ScavTrap destructor" << std::endl;
    return;
}

/* ClapTrap CMD */

void ScavTrap::guardGate()
{
    std::cout << "===  ScavTrap  " << this->_name << "  ===" << std::endl
              << this->_name << " ScavTrap is now in Gate keeper mode."
              << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (this->_energy_points <= 0)
    {
        std::cout << std::endl;
        std::cout << "===  ScavTrap  " << this->_name << "  ===" << std::endl;
        std::cout << "~IS OUT OF ENERGY~" << std::endl;
    }
    else if (this->_hit_points <= 0)
    {
        std::cout << std::endl;
        std::cout << "===  ScavTrap  " << this->_name << "  ===" << std::endl;
        std::cout << "~XXX IS DESTROY XXX~" << std::endl;
    }
    else
    {
        std::cout << std::endl;
        std::cout << "===  ScavTrap  " << this->_name << "  ===" << std::endl
                  << this->_name << " attack: " << target << std::endl
                  << "causing " << this->_attack_damage << " points of damage!"
                  << std::endl;
        this->_energy_points--;
    }
    return;
}

/* overload operator */

ScavTrap &ScavTrap::operator=(ScavTrap const &rightHandSide)
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

// ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
// {
//     std::cout << "ScavTrap copy assign" << std::endl;
//     if (this != &rhs)
//         ClapTrap::operator=(rhs);
//     return *this;
// }
