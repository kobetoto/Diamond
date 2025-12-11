/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 14:10:32 by kobe              #+#    #+#             */
/*   Updated: 2025/12/08 14:05:02 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* CONSTR + DESTR */
ClapTrap::ClapTrap(void) : _name(), _hit_points(10), _energy_points(10), _attack_damage(0)
{
    if (this->_name.empty())
        this->_name = "[NO NAME]";
    std::cout << "Hello from ClapTrap constructor" << std::endl;
    return;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
    if (this->_name.empty())
        this->_name = "[NO NAME]";
    std::cout << "Hello from ClapTrap constructor" << std::endl;
    return;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
    std::cout << "Hello from ClapTrap cpy constr" << std::endl;
    *this = src;
    return;
}
ClapTrap::~ClapTrap(void)
{
    std::cout << "Hello from ClapTrap destructor" << std::endl;
    return;
}

/* ClapTrap CMD */

void ClapTrap::attack(const std::string &target)
{
    if (this->_energy_points <= 0)
    {
        std::cout << std::endl;
        std::cout << "===  ClapTrap  " << this->_name << "  ===" << std::endl;
        std::cout << "~IS OUT OF ENERGY~" << std::endl;
    }
    else if (this->_hit_points <= 0)
    {
        std::cout << std::endl;
        std::cout << "===  ClapTrap  " << this->_name << "  ===" << std::endl;
        std::cout << "~XXX IS DESTROY XXX~" << std::endl;
    }
    else
    {
        std::cout << std::endl;
        std::cout << "===  ClapTrap  " << this->_name << "  ===" << std::endl
                  << this->_name << " attack: " << target << std::endl
                  << "causing " << this->_attack_damage << " points of damage!"
                  << std::endl;
        this->_energy_points--;
    }
    return;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hit_points <= 0)
    {
        std::cout << std::endl;
        std::cout << "===  ClapTrap  " << this->_name << "  ===" << std::endl;
        std::cout << "XXX IS DESTROY XXX" << std::endl;
    }
    else
    {
        unsigned int hit_pts;
        if (this->_hit_points > (amount))
            hit_pts = (this->_hit_points - amount);
        else
            hit_pts = 0;
        std::cout << std::endl;
        std::cout << "===  ClapTrap  " << this->_name << "  ===" << std::endl
                  << "Outch! " << this->_name << " lose: " << amount << " hp" << std::endl
                  << this->_name <<"'s hit points (health) is actually: " << hit_pts
                  << std::endl;
        this->_hit_points = hit_pts;
    }
    return;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energy_points <= 0)
    {
        std::cout << std::endl;
        std::cout << "===  ClapTrap  " << this->_name << "  ===" << std::endl;
        std::cout << "~IS OUT OF ENERGY~" << std::endl;
    }
    else if (this->_hit_points <= 0)
    {
        std::cout << std::endl;
        std::cout << "===  ClapTrap  " << this->_name << "  ===" << std::endl;
        std::cout << "~XXX IS DESTROY XXX~" << std::endl;
    }
    else
    {
        std::cout << std::endl;
        std::cout << "===  ClapTrap  " << this->_name << "  ===" << std::endl
                  << this->_name << " regains: " << amount << " hp" <<std::endl
                  << this->_name << "'s hit points (health) is actually: " << (this->_hit_points + amount) << " hp" 
                  << std::endl;
        this->_energy_points--;
        this->_hit_points += amount;
    }
    return;
}

/* overload operator */

ClapTrap &ClapTrap::operator=(ClapTrap const &rightHandSide)
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

/* GET + SET */
std::string ClapTrap::getName(void){return (this->_name);}
unsigned int ClapTrap::getHitPts( void ){ return (this->_hit_points); };
unsigned int ClapTrap::getEnrgyPts( void ){ return (this->_energy_points); };
unsigned int ClapTrap::getAttckDama( void ){ return (this->_attack_damage);};
