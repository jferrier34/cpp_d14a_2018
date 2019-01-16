/*
** EPITECH PROJECT, 2019
** Errors.cpp
** File description:
** ex00
*/

#include "Errors.hpp"

std::string const &NasaError::getComponent() const 
{
        return this->_component;
}

const char* NasaError::what() const noexcept
{
        return this->_message.c_str();
}
