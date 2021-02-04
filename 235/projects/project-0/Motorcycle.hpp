#ifndef MOTORCYCLE_
#define MOTORCYCLE_

#include <string>

namespace bike_details
{

    enum bike_brand
    {
        YAMAHA = 0,
        DUCATI = 1,
        HARLEY_DAVIDSON = 2,
        KAWASAKI = 3
    };

    enum acceleration // the revolutions-per-minute (RPM) of the caller's wheels
    {
        NONE = 0,
        LOW = 44,
        MEDIUM = 88,
        HIGH = 132
    };

} // namespace bike_details

class Motorcycle
{
private:
    bike_details::bike_brand brand_;
    float curr_speed_;                             // speed in mph at which the caller is travelling
    float curr_direction_;                         // 0 <= direction <= 360 in which the caller is travelling
    float distance_traveled_;                      // total distance that the caller has traveled since instantiation
    bike_details::acceleration curr_acceleration_; // enum defined as the the rotations-per-minute (RPM) of the caller's wheels

    /**
        alters curr_speed_ depending on curr_speed_, curr_pedal_intensity_, and b_type_
    */
    void updateSpeed();

public:
    /* Default Constructor */
    Motorcycle();

    /* Parameterized Constructor */
    Motorcycle(int kind_of_bike);

    /**
        given curr_speed_, curr_pedal_intensity_, b_type_, and @param float duration,
            calculate the distance traveled during the specified time;
            increment distance_traveled_ by this amount
        @param float duration: time traveled
        @return: updated distance_traveled_
    */
    float ride(float duration);

    /**
        if the current intensity is not HIGH increase it by one level and call calculateSpeed()
    */
    void accelerate();

    /**
        if the current intensity is not NONE decrease it by one level and call calculateSpeed()
    */
    void brake();

    /** 
        updates direction_
        @param degrees: -360 <= degrees <= 360, and if the user enters a number outside of these
                            bounds adjust @param degrees to be within this range
    */
    void turn(float degrees);

    /**
        return the string that corresponds to the curr_direction_ that the caller faces 
           relative to a cartesian plane; assume that the caller is at position (0,0),
           the degree measure of (1, 0) is 0 degrees, and the degree measure of (-1, 0) is 180 degrees
    
           "North" == 90
           0 < "Northeast" < 90 
           "East" == 0
           "Southeast > 270
           "South" == 270
           180 < "Southwest < 270
           "West" == 180
           90 < "Northwest" < 180
    */
    std::string getDirection();

    /* Getter: brand_ */
    std::string getBikeType();

    /* Getter: curr_speed_ */
    float getSpeed();

    /* Getter: distance_traveled_ */
    float getDistanceTraveled();

    /* Getter: curr_acceleration_ */
    int getIntensity();
};

#endif