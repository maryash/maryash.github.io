/****************************************************************************************************************************
Title        : Vehicle.cpp
Auhors       : Khandaker Shayel & Nigel Ferrer & Yash for Moral Support
Description  : partial implementation file of a Vehicle class
Dependencies : Vehicle.hpp
****************************************************************************************************************************/

#include "Vehicle.hpp"

/* Constructors */
Vehicle::Vehicle() : name_{""}, manufacturer_{""}, top_speed_{0}, weight_{0}, mpg_{0}, curr_gas_amt_{1}, wheels_{0}, garage_spaces_{0}, num_wheels_{0}
{
}

Vehicle::Vehicle(std::string name, std::string manufacturer, double top_speed, double weight, double mpg, double curr_gas_amt) : name_{name}, manufacturer_{manufacturer}, top_speed_{top_speed}, weight_{weight}, mpg_{mpg}, curr_gas_amt_{curr_gas_amt}, wheels_{0}, garage_spaces_{0}, num_wheels_{0}
{
}

bool Vehicle::fillUpTank()
{
    if (curr_gas_amt_ < 1)
    {
        curr_gas_amt_ = 1;
        return true;
    }
    return false;
}

void Vehicle::turn(float degrees)
{
    curr_direction_ += degrees;

    while (curr_direction_ > 360)
    {
        curr_direction_ -= 360;
    }

    while (curr_direction_ < 0)
    {
        curr_direction_ += 360;
    }
}

std::string Vehicle::getDirection()
{
    if (curr_direction_ == 0)
    {
        return "East";
    }
    else if (curr_direction_ < 90)
    {
        return "Northeast";
    }
    else if (curr_direction_ == 90)
    {
        return "North";
    }
    else if (curr_direction_ < 180)
    {
        return "Northwest";
    }
    else if (curr_direction_ == 180)
    {
        return "West";
    }
    else if (curr_direction_ < 270)
    {
        return "Southwest";
    }
    else if (curr_direction_ == 270)
    {
        return "South";
    }
    else if (curr_direction_ < 360)
    {
        return "Southeast";
    }
    else
    {
        return "Out of bounds";
    }
}

double Vehicle::travelMaxSpeed(float duration)
{
    if (duration <= 0)
    {
        return 0;
    }

    float curr_distance_traveled = top_speed_ * duration;
    distance_traveled_ += curr_distance_traveled;
    curr_gas_amt_ = (14 - curr_distance_traveled * mpg_) / 14;
    
    if (curr_gas_amt_ < 0)
    {
        curr_gas_amt_ = 0;
    }

    return curr_distance_traveled;
}

double Vehicle::getTopSpeed() const
{
    return top_speed_;
}

double Vehicle::getCurrentAmountGas() const
{
    return curr_gas_amt_;
}

double Vehicle::getDistanceTraveled() const
{
    return distance_traveled_;
}

double Vehicle::getWeight() const
{
    return weight_;
}

double Vehicle::getMilesPerGallon() const
{
    return mpg_;
}

size_t Vehicle::getWheels() const
{
    return wheels_;
}

std::string Vehicle::getName() const
{
    return name_;
}

std::string Vehicle::getManufacturer() const
{
    return manufacturer_;
}

/* comparison operator overload */
bool Vehicle::operator==(const Vehicle &rhs) const
{
    return rhs.getName() == name_ && rhs.getManufacturer() == manufacturer_;
}

/* comparison operator overload */
bool Vehicle::operator!=(const Vehicle &rhs) const
{
    return rhs.getName() != name_ || rhs.getManufacturer() != manufacturer_;
}

size_t Vehicle::getGaragePositions() const
{
    return garage_spaces_;
}

/* assignment operator overload */
void Vehicle::operator=(const Vehicle &rhs)
{
    name_ = rhs.name_;
    manufacturer_ = rhs.manufacturer_;
    top_speed_ = rhs.top_speed_;
    weight_ = rhs.weight_;
    mpg_ = rhs.mpg_;
    curr_gas_amt_ = rhs.curr_gas_amt_;
}

void Vehicle::setGarageSpaces(size_t spaces)
{
    garage_spaces_ = spaces;
}

 const size_t Vehicle::getNumWheels() const
 {
     return num_wheels_;
 }

void Vehicle::setNumWheels(size_t wheels)
{
    num_wheels_ = wheels;
}


const size_t Vehicle::getSpaces() const { return garage_spaces_; }