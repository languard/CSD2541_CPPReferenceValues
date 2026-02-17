/*
    Assignment:
    Part 1 - Endless Fibonacci (5 pts)
    Write a function that will return the next number in the fibonacci sequence. Calling the function multiple
    times in a row will continue to advance the sequence.
    * The value of the sequence must be calculated in a function
    * Other than the initial variable values, you cannot alter the values in main()
    * Use 1,1 as the starting values
    * Call the function 5 times and display the results to screen
    * For example, if I set x,y to 1,1 and call EndlessFib(x,y) five times I would get the following output:
    * 2 3 5 8 13
     
    Part 2 - Rebasing (15 pts)
    Sometimes you have to rebase values. For example, your data is in the range of 1 to 50, but you need it to be
    rebased to be from 15 to 35
    Write a function that will take an array and rebase all the values.
    Display the values of the array before and after the rebase
    The array must be defined in main() and passed into the function
    Requirements:
    * Create an array of 10 integers
    * Initialize the elements of the array to index + 1. So array[0] = 1, array[1] = 2 and so on
    * This means the range is 1 to 10 for the initial values
    * Prompt the user for a new min and max value
    * Rebase the array to the new min and max values
    * For example, if the use enters 20 and 80 for the new values, the output would look like this:
    * Min: 20
    * Max: 80
    * Old Values: 1 2 3 4 5 6 7 8 9 10
    * New Values: 20 27 33 40 47 53 60 67 73 80
    * 
    To map a value x from an old range [A,B] to a new range [C,D], use the following:
    
    xNew ​= C + ((x−A) * (D−C)) / (B-A)​
    Where:
    A,B = The old minimum and maximum
    C,D = The new minimum and maximum
    x = The specific number you are converting
*/

#include <iostream>

int main()
{
    std::cout << "Assignment code goes here";

}
