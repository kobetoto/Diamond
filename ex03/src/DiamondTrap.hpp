/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 15:30:40 by thodavid          #+#    #+#             */
/*   Updated: 2025/12/11 15:35:11 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

//[ ClapTrap via ScavTrap ][ ScavTrap ][ ClapTrap via FragTrap ][ FragTrap ][ DiamondTrap ]
//[ ClapTrap (virtuel, unique) ][ ScavTrap ][ FragTrap ][ DiamondTrap ]

class DiamondTrap : public ScavTrap, public FragTrap
{
public:

    DiamondTrap(void);
    DiamondTrap(std::string name);
    DiamondTrap(DiamondTrap const &src);
    DiamondTrap &operator=(DiamondTrap const &rightHandSide);
    virtual ~DiamondTrap(void);

    void    whoAmI();
    void    attack(const std::string &target);

private:
    std::string _name;
};
