//
//  main.cpp
//  SortingBenchmarksEmmanuelIdehen
//
//  Created by Emmanuel Idehen on 4/4/19.
//  Copyright © 2019 Emmanuel Idehen. All rights reserved.
//  Submitted to Mr. Marcus Golden(CS204 Computer programming II)

/*
 Sorting Benchmarks
 Write a program that uses two identical arrays of at least 20 integers. It should
 call a function that uses the bubble sort algorithm to sort one of the arrays in
 ascending order. The function should count the number of exchanges it makes. The
 program should then call a function that uses the selection sort algorithm to sort
 the other array. It should also count the number of exchanges it makes. Display
 these values on the screen.
 
 
 psuedo code:
 
 create arrays of const size 20,
 fill the array up with interger that match(identical)
 sort the array1 using bubble sort
 sort the array2 using selection sort
 print the number of comparison both algorithm does.
 
 
 
 */

#include <iostream>
using namespace std;


//bubbleSort
void bubbleSort(int array[], int size, int &Exch)
{
    int temp;
    bool swap;
    
    do
    {     swap = false;
        for (int count = 0; count < (size - 1); count++)
        {
            if (array[count] > array[count + 1])
            {
                temp = array[count];
                array[count] = array[count + 1];
                array[count + 1] = temp;
                swap = true;
                Exch++;
            }
        }
    } while (swap);
}


 //selectionSort


void selectionSort(int array[], int size, int &Exch2)
{
    int startScan, minIndex, minValue;
    
    for (int startScan = 0; startScan < (size - 1); startScan++)
    {
        minIndex = startScan;
        minValue = array[startScan];
        for (int index = startScan + 1; index < size; index++)
        {
            if (array[index] < minValue)
            {
                minValue = array[index];
                minIndex = index;
                Exch2++;
            }
        }
        array[minIndex] = array[startScan];
        array[startScan] = minValue;
    }
}



int main()
{
    //declare variables and init array!
     int x(0), y(0);
    const int SIZE = 20;
    int Array1[SIZE] = {1, 3, 4, 6, 12, 5, 7, 8, 9, 2,
        10, 11, 14, 13, 15, 14,  16, 18, 17, 19};
    
    int Array2[SIZE] = {1, 3, 4, 6, 12, 5, 7, 8, 9, 2,
        10, 11, 14, 13, 15, 14,  16, 18, 17, 19};
    
   
    //function call
    bubbleSort(Array1, SIZE, x);
    
    selectionSort(Array2, SIZE, y);
    

    
   //print out number of Exchanges
    cout << "\nThe bublle sort output is: " << x << endl;
    cout << "The selection sort output: " << y << "\n"<<endl;
    
}
/*
 Test case:
 
 
 The bublle sort output is: 18
 The selection sort output: 12
 
 Program ended with exit code: 0
 
 */
