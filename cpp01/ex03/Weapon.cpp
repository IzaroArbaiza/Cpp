/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 10:02:08 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/07/10 13:29:52 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
    this->setType(type);
}

Weapon::~Weapon() {
}

const std::string   &Weapon::getType(void) {
    return (this->type);
}

void    Weapon::setType(std::string type) {
    this->type = type;
}
