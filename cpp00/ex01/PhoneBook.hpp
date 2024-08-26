/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 15:34:58 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/06/27 13:02:51 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <cstdlib>
#include <string>
#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact _contac[8];
        int	    _readInput(void) const;
    public:
        PhoneBook();
        ~PhoneBook();
        
        void    welcome(void) const;
        void	addContact(void);
        void	printContacts(void) const;
        void	searchContact(void) const;
};

#endif