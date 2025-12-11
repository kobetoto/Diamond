/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 14:15:00 by kobe              #+#    #+#             */
/*   Updated: 2025/12/08 13:46:46 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

/*
Orthodox Canonical Form:
    •Default constructor
    •Copy constructor
    •Copy assignment operator
    •Destructor
*/

class ClapTrap
{
public:
    ClapTrap(void); //(c) CONSTR
    ClapTrap(std::string name);
    ClapTrap(ClapTrap const &src);                      //(c) CONSTR by copy
    ClapTrap &operator=(ClapTrap const &rightHandSide); //(c) Copy assignment operator
    virtual ~ClapTrap(void);                                    //(c) destr

    std::string getName(void);
    unsigned int getHitPts(void);
    unsigned int getEnrgyPts(void);
    unsigned int getAttckDama(void);

    virtual void    attack(const std::string &target);
    void            takeDamage(unsigned int amount);
    void            beRepaired(unsigned int amount);

protected:
    std::string _name;
    unsigned int _hit_points;
    unsigned int _energy_points;
    unsigned int _attack_damage;
};

#endif // CLAPTRAP_HPP
