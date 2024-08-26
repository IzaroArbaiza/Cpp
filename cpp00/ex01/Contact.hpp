/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 15:34:40 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/06/27 13:11:30 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact
{
    private:
        int _index;
        std::string _firstName;
        std::string _lastName;
        std::string _nickname;
        std::string _phoneNumber;
        std::string _darkestSecret;
        
        std::string	_getInput(std::string str) const; 
        std::string	_adjustLen(std::string str) const;
        
    public:
        Contact();
        ~Contact();
        
        void    init(void);
        void    setIndex(int i);
        void    viewContacts(int index) const;
        void    showContact(int index) const;
};

#endif