/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 12:44:31 by thodavid          #+#    #+#             */
/*   Updated: 2025/12/11 10:11:11 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
public:
    ScavTrap(void);
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const &src);
    ScavTrap &operator=(ScavTrap const &rightHandSide);
    virtual ~ScavTrap(void);

    void    guardGate();
    void    attack(const std::string &target);

};

#endif // SCAVTRAP_HPP
