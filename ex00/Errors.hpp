/*
** EPITECH PROJECT, 2019
** Errors.hpp
** File description:
** ex00
*/


#ifndef ERRORS_HPP_
#define ERRORS_HPP_

#include <string>

class NasaError 
{
    public:
        NasaError(std::string const &message,
                std::string const &component = "Unknown") : _component(component), _message(message) {}
        ~NasaError() = default;
        std::string const &getComponent() const  {return (this->_component;};
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
                  ~MissionCriticalError() = default;
};

class LifeCriticalError : public NasaError
{
    public:
        LifeCriticalError(std::string const &message,
                std::string const &component = "Unknown") : NasaError(message, component){}
                ~LifeCriticalError() = default;
};

class UserError : public NasaError
{
    public:
        UserError(std::string const &message,
                std::string const &component = "Unknown");
                ~UserError() = default;
};

class CommunicationError : public NasaError
{
    public:
        CommunicationError(std::string const &message) : NasaError(message, "CommunicationDevice")
        ~CommunicationError() = default;
};

#endif
