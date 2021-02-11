/****************************************************************************************************************************
Title         :   Vehicle.hpp
Auhor         :   Team FBK
Description   :   header/interface files with an enhanced array class
****************************************************************************************************************************/

#ifndef VEHICLE_
#define VEHICLE_

#include <iostream>
#include <string>

class Vehicle
{
public:
    //default constructor
    //set name and manufacturer to ""
    //set all numerical values to 0
    Vehicle();

    /** 
            Parameterized Constructor 
            @param name   : name/model of said vehicle
            @param manufacturer  : the name of the manufacturer
            @param topSpeed : a double letting us know the fastest speed of the vehicle in Miles Per Hour
            @param weight : weight of the car pounds
            @param milesPerGallon : how many miles your car gets on a single gallon
            @param currentAmountGas : your vehicle's current gas capacity
        */
    Vehicle(std::string name, std::string manufacturer, double top_speed, double weight, double mpg, double curr_gas_amt);

    /**
            given your vehicles top speed and @param float duration,
            calculate the distance traveled during the specified time;
            increment distance_traveled_ by this amount
            @param float duration: time traveled
            @return: updated distance_traveled_
        */
    double travelMaxSpeed(float duration);

    /**
            Filling up a tank sets it to 1
            @post   :   returns true if your tank has been filled and was not already full
		*/
    bool fillUpTank(); //  x

    double getTopSpeed() const;          // returns top_speed_
    size_t getWheels() const;            // returns wheels_
    double getWeight() const;            // returns weight_
    double getMilesPerGallon() const;    // returns milesPerGallon_
    size_t getGaragePositions() const;   // returns garagePositions_
    double getDistanceTraveled() const;  // returns distance_traveled_
    double getCurrentAmountGas() const;  // return how much gas we currently have
    std::string getName() const;         // returns name_
    std::string getManufacturer() const; // returns manufacturer_
    void turn(float degrees);            // adds to current direction
    std::string getDirection();          // gets current direction of vehicle based on degrees
    const size_t getSpaces() const;      // returns garage_spaces_
    const size_t getNumWheels() const;   // returns num_wheels_
    void setGarageSpaces(size_t spaces); // sets the amount of available garage spaces
    void setNumWheels(size_t wheels);    // sets the number of wheels the vehicle has

    bool operator!=(const Vehicle &rhs) const;
    bool operator==(const Vehicle &rhs) const; // Comparison operator overload
    void operator=(const Vehicle &rhs);        // Assignment operator overload

protected:
    std::string manufacturer_;
    std::string name_;
    size_t wheels_;
    double top_speed_;
    double weight_;
    double mpg_;
    double curr_gas_amt_;      // <- describe units that gas is measured in [0, 1]  0 <- empty, 1 <- full
    double curr_direction_;    // describes which direction (in degrees) vehicle is facing on a compass
    double distance_traveled_; // how far you have traveled with your vehicle
    size_t garage_spaces_;     // number of garage slots this vehicle takes up
    size_t num_wheels_;

}; // end Vehicle

#endif