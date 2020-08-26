#ifndef BICYCLE_
#define BICYCLE_

#include <string>

namespace bike_details
{

    enum bike_type
    {
        BMX = 0,
        MOUNTAIN = 1,
        TOURING = 2,
        ROAD = 3
    };

    enum pedalling_intensity // the revolutions-per-minute (RPM) of the the caller's pedals
    {
        NONE = 0,
        LOW = 44,
        MEDIUM = 88,
        HIGH = 132
    };

} // namespace bike_details

class Bicycle
{
private:
    bike_details::bike_type b_type_;
    float curr_speed_;                                       // speed in mph at which the caller is traveling
    float curr_direction_;                                   // 0 <= direction <= 360 in which the caller is traveling
    float distance_traveled_;                                // total distance that the caller has traveled since instantiation
    int seat_height_;                                        // 0 <= seat_height <= 36 seat height of caller bike in inches
    bike_details::pedalling_intensity curr_pedal_intensity_; // enum defined as the the rotations-per-minute (RPM) of the caller's pedals

    /**
        alters curr_speed_ depending on curr_speed_, curr_pedal_intensity_, and b_type_
    */
    void updateSpeed();

public:
    /* Default Constructor */
    Bicycle();

    /** 
        Parameterized Constructor 
        @param int kind_of_bike: a specific bike type, 0 <= kind_of_bike < 4
    */
    Bicycle(int kind_of_bike);

    /**
        given curr_speed_, and @param float duration,
            calculate the distance traveled during the specified time;
            increment distance_traveled_, which tracks the total distance traveled, by this amount
        @param float duration: time traveled in minutes, 0 <= duration
        @return: updated the distance traveled in the given duration
    */
    float ride(float duration);

    /** 
        Setter: seat_height_ 
        @param float inches: new seat height, 0 <= inches < 37
                        inches < 0 -> seat_height = 0
                        inches > 36 -> seat_height = 36    
    */
    void changeSeatHeight(int inches);

    /**
        if the current intensity is not HIGH increase it by one level and call updateSpeed()
    */
    void pedal();

    /**
        if the current intensity is not NONE decrease it by one level and call updateSpeed()
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

    /* Getter: b_type_ */
    std::string getBikeType();

    /* Getter: seat_height_ in inches */
    int getSeatHeight();

    /* Getter: curr_speed_ in miles per hour */
    float getSpeed();

    /* Getter: distance_traveled_ in miles */
    float getDistanceTraveled();

    /* Getter: curr_pedal_intensity_ */
    std::string getIntensity();
};

#endif