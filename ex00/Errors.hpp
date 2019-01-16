/*
** EPITECH PROJECT, 2019
** Errors.hpp
** File description:
** ex00
*/

#ifndef ERRORS_HPP_
#define ERRORS_HPP_

#include <string>
#include <memory>
#include <iostream>
#include <fstream>
#include <exception> 

class NasaError : public std::exception
{
    public:
        NasaError(std::string const &message,
                std::string const &component = "Unknown") : _component(component), _message(message) {}
        virtual ~NasaError() = default;
        std::string const &getComponent() const;
        const char* what() const;  
    private:
        std::string _message;
    protected:
        std::string _component;
};

class MissionCriticalError : public NasaError
{
    public:
        MissionCriticalError(std::string const &message,
                  std::string const &component = "Unknown") : NasaError(message, component) {}
           virtual ~MissionCriticalError() = default;
};

class LifeCriticalError : public NasaError
{
    public:
        LifeCriticalError(std::string const &message,
                std::string const &component = "Unknown") : NasaError(message, component){}
         virtual ~LifeCriticalError() = default;
};

class UserError : public NasaError
{
    public:
        UserError(std::string const &message,
                std::string const &component = "Unknown") : NasaError(message, component) {}
         virtual ~UserError() = default;
};

class CommunicationError : public NasaError
{
    public:
        CommunicationError(std::string const &message) : NasaError(message, "CommunicationDevice") {}
       virtual ~CommunicationError() = default;
};

#endif
