/****************************************************************************************************************************
Title          :   Sorter.hpp
Auhor          :   Nigel Ferrer
Modified By    :   ** ENTER YOUR NAME **
Description    :   header/interface file of an integer array container class that 
                   contains implementations of some sorting algorithms
****************************************************************************************************************************/

#ifndef Sorter_hpp
#define Sorter_hpp

#include <iostream>

enum sort_order // describes the order in which the items held in a Sorter object
{               // will be sorted when runSorts() is called
    INCREASING,
    DECREASING
};
enum array_type // describes whether the arrays that will be sorted will be randomly
{               // generated or predetermined, i.e., passed in as a parameter to the
    RANDOM,     // constructor
    PREDETERMINED
};

class Sorter
{
public:
    /* Parameterized Constructor 

            Example Usage:  

                i) Defined array:
                    int size <- any integer
                    int arr[size] <- ...;
                        Sorter sorter_obj(PREDETERMINED, size, arr);

                ii) Random arrays
                        int size <- any integer
                        Sorter sorter_obj(RANDOM, size)

    */
    Sorter(array_type type, size_t array_size, int *arr = nullptr);

    template <typename Comparator>
    int selectionSort(int arr[], size_t size, const Comparator &comp);

    template <typename Comparator>
    int insertionSort(int arr[], size_t size, const Comparator &comp);

    template <typename Comparator>
    int mergeSort(int arr[], int from, int to, const Comparator &comp);

    void runSorts(sort_order order);

private:
    array_type type_;   // either PREDETERMINED OR RANDOM
    const size_t SIZE_; // the size of values_
    int *values_;       //an array of integer values to be sorted when array_type is PREDETERMINED

    int selectionCount_ = 0; // the number of swaps executed during selectionSort()
    int insertionCount_ = 0; // the number of swaps executed during insertionSort()
    int mergeCount_ = 0;     // the number of comparisons executed during mergeSort()

    /* 
        yields the index of either the minimum or maximum of a subarray of @param arr
        Note: a subarray can be the original array!
    */
    template <typename Comparator>
    int getPosOfMinOrMax(int arr[], int from, int to, const Comparator &comp);

    template <typename Comparator>
    void merge(int arr[], int from, int mid, int to, const Comparator &comp);

    void displayArr(const int array[]) const;

}; //end Sorter

#endif /* Sorter_hpp */
