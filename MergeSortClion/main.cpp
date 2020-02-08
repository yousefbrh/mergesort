#include <iostream>
using namespace std;
void merge (int array[],int first,int middle,int last)
{
    int side1 = middle - first + 1;
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
    int f = first;
    while(i < side1 && j < side2)
    {
        if(leftArray[i] <= rightArray[j])
        {
            array[f] = leftArray[i];
            i++;
        }
        else
        {
            array[f] = rightArray[j];
            j++;
        }
        f++;
    }
    while(i < side1)
    {
        array[f] = leftArray[i];
        i++;
        f++;
    }
    while(j < side2)
    {
        array[f] = rightArray[j];
        j++;
        f++;
    }

}
void mergeSort (int array[],int first,int last) {
    if(first < last)
    {
        int middle;
        middle = (first + last) / 2;
        mergeSort(array, first, middle);
        mergeSort(array, middle + 1, last);
        merge(array,first,middle,last);
    }
}
void mergeSortPrint(int array[] ,int size)
{
    cout << "Your Sorted Array is :" << endl;
    for(int i = 0 ; i < size ; i++)
    {
        cout << array[i] << " " ;
    }
}
int main()
{
    cout << "How many numbers you want to add? " << endl;
    int size;
    cin >> size;
    int array[size];
    int input;
    cout << "Enter the numbers: " << endl;
    for(int i = 0 ; i < size ; i++)
    {
        cin >> input;
        array[i] = input;
    }
    mergeSort(array,0,size - 1);
    mergeSortPrint(array,size);
}
