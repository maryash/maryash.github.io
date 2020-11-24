/****************************************************************************************************************************
Title          :   Sorter.cpp
Auhor          :   Nigel Ferrer
Modified By    :   ** ENTER YOUR NAME **
Description    :   implementation file of an integer array container class that 
                   contains implementations of some sorting algorithms
Dependencies   :   Sorter.cpp
****************************************************************************************************************************/

#include "Sorter.hpp"
using namespace std;

Sorter::Sorter(array_type type, size_t array_size, int *arr) : type_(type), SIZE_(array_size), values_(arr)
{
}

/***************************s* Selection Sort ****************************/
template <typename Comparator>
int Sorter::getPosOfMinOrMax(int arr[], int from, int to, const Comparator &comp)
{
    int min_or_max = from;
    for (int i = from + 1; i <= to; i++)
    {
        if (comp(arr[i], arr[min_or_max]))
        {
            min_or_max = i;
        }
    }
    return min_or_max;
}

template <typename Comparator>
int Sorter::selectionSort(int arr[], size_t size, const Comparator &comp)
{
}
/************************************************************************/

/**************************** Insertion Sort ****************************/
template <typename Comparator>
int Sorter::insertionSort(int arr[], size_t size, const Comparator &comp)
{
}
/************************************************************************/

// /****************************** Merge Sort ******************************/
template <typename Comparator>
void Sorter::merge(int arr[], int from, int mid, int to, const Comparator &comp)
{
}

template <typename Comparator>
int Sorter::mergeSort(int arr[], int from, int to, const Comparator &comp)
{
}
// /************************************************************************/

// /****************************** Quick Sort ******************************/
template <typename Comparator>
int Sorter::partition(int arr[], int from, int to, const Comparator &comp)
{
}

template <typename Comparator>
int Sorter::quickSort(int arr[], int from, int to, const Comparator &comp)
{
}
// /************************************************************************/

void Sorter::runSorts(sort_order order)
{

    int selectionValues[SIZE_];
    int insertionValues[SIZE_];
    int mergeValues[SIZE_];
    int quickValues[SIZE_];

    if (type_ == RANDOM)
    {
        srand(static_cast<unsigned>(time(0)));
        for (int i = 0; i < SIZE_; i++)
        {
            selectionValues[i] = rand() % 100;
            insertionValues[i] = rand() % 100;
            mergeValues[i] = rand() % 100;
            quickValues[i] = rand() % 100;
        }
    }

    else
    {
        for (int i = 0; i < SIZE_; i++)
        {
            selectionValues[i] = values_[i];
            insertionValues[i] = values_[i];
            mergeValues[i] = values_[i];
            quickValues[i] = values_[i];
        }
    }

    // Selection Sort Display
    std::cout << "******** Selection Sort ********\nOriginal Array:\n";
    displayArr(selectionValues);
    if (order == INCREASING)
    {
        selectionSort(selectionValues, SIZE_, std::less<int>());
    }
    else
    {
        selectionSort(selectionValues, SIZE_, std::greater<int>());
    }
    std::cout << "\nSorted Array:\n";
    displayArr(selectionValues);
    std::cout << "\nNumber of swaps: " << selectionCount_ << "\n********************************\n\n";

    // Insertion Sort Display
    std::cout << "\n******** Insertion Sort ********\nOriginal Array:\n";
    displayArr(insertionValues);
    if (order == INCREASING)
    {
        insertionSort(insertionValues, SIZE_, std::less<int>());
    }
    else
    {
        insertionSort(insertionValues, SIZE_, std::greater<int>());
    }
    std::cout << "\nSorted Array:\n";
    displayArr(insertionValues);
    std::cout << "\nNumber of swaps: " << insertionCount_ << "\n********************************\n\n";

    // Merge Sort Display
    std::cout << "\n********** Merge Sort **********\nOriginal Array:\n";
    displayArr(mergeValues);
    if (order == INCREASING)
    {
        mergeSort(mergeValues, 0, SIZE_ - 1, std::less<int>());
    }
    else
    {
        mergeSort(mergeValues, 0, SIZE_ - 1, std::greater<int>());
    }
    std::cout << "\nSorted Array:\n";
    displayArr(mergeValues);
    std::cout << "\nNumber of comparisons: " << mergeCount_ << "\n********************************\n\n";

    // Quick Sort Display
    std::cout << "\n********** Quick Sort **********\nOriginal Array:\n";
    displayArr(quickValues);
    if (order == INCREASING)
    {
        quickSort(quickValues, 0, SIZE_ - 1, std::less<int>());
    }
    else
    {
        quickSort(quickValues, 0, SIZE_ - 1, std::greater<int>());
    }
    std::cout << "\nSorted Array:\n";
    displayArr(quickValues);
    std::cout << "\nNumber of swaps: " << quickCount_ << "\n*******************************\n";
}

void Sorter::displayArr(const int array[]) const
{
    for (size_t i = 0; i < SIZE_; i++)
    {
        std::cout << array[i];
        (i < SIZE_ - 1) ? (cout << " ") : (cout << "\n");
    }
}