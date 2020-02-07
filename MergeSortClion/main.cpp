#include <iostream>
using namespace std;
void merge (int array[],int first,int middle,int last)
{
    int side1 = middle - first;
    int side2 = last - middle;
    int leftArray[side1];
    int rightArray[side2];
    for (int i = 0 ; i < side1 ; i++)
    {
        leftArray[i] = array[first + i];
    }
    for (int j = 0 ; j < side2 ; j++)
    {
        rightArray[j] = array[middle + 1 + j];
    }
    int i = 0;
    int j = 0;
    while(i < side1 && j < side2)
    {
        if(leftArray[i] <= rightArray[j])
        {
            array[first + i] = leftArray[i];
            i++;
        }
        else
            {
                
            }
    }
}
void mergeSort (int array[],int first,int last) {
    if(first < last)
    {
        int middle;
        middle = (first + last + 1) / 2;
        mergeSort(array, first, middle);
        mergeSort(array, middle + 1, last);
        merge(array,first,middle,last);
    }
}
int main()
{
    cout << "How many numbers you want to add? " << endl;
    int size;
    cin >> size;
    int array[size];
    int i = 0;
    int input;
    cout << "Enter the numbers: " << endl;
    while(i < size)
    {
        cin >> input;
        array[i] = input;
        i++;
    }
    mergeSort(array,0,size - 1)
}
