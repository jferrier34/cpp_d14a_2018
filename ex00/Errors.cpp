/*
** EPITECH PROJECT, 2019
** Errors.cpp
** File description:
** ex00
*/

#include "Errors.hpp"

NasaError::getComponent() const 
{
        return this->_component;
}

const NasaError::what() const
{
        return _message.c_str();
}