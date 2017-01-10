/*
 * SearchUtilities.cpp
 *
 *  Created on: Mar 10, 2013
 *      Author: kamilla
 */


int seqSearch(const int list[], int listLength, int searchItem)
{
    if( listLength == 0 )
        return -1;
    if( searchItem == list[listLength-1] )
        return listLength - 1;
    return seqSearch( list, listLength - 1, searchItem );
}
//TODO recursive sequential search
int recbinarySearch(int sortedArray[], int first, int last, int key){
    if (first <= last) {
       int mid = (first + last) / 2;  // compute mid point.
       if (key == sortedArray[mid]) 
           return mid;   // found it.
       else if (key < sortedArray[mid]) 
           // Call ourself for the lower part of the array
           return recbinarySearch(sortedArray, first, mid-1, key);
       else
           // Call ourself for the upper part of the array
           return recbinarySearch(sortedArray, mid+1, last, key);
   }
   return -(first + 1);    // failed to find key
}
//BinarySearch
int itbinarySearch(const int list[], int listLength, int searchItem)
{
    int first = 0;
    int last = listLength-1;
    int mid;
    
    bool found = false;
    
    while(first <= last && !found){
        mid = (first + last) / 2;
        if(list[mid] == searchItem){
            found = true;
        }
        else if(list[mid] > searchItem){
            last = mid - 1;
        }
        else{
            first = mid+1;
        }
    }
    if(found){
        return mid;
    }
    else{
        return -1;
    }
}

//TODO recursive binary search

