# DSA
Stack, Queue, and Selection Sort Operations in C++
This C++ program demonstrates the implementation of stack operations, queue operations, and selection sort algorithm. Below is a breakdown of each component and how to interact with the program.

Components:
Stack Class (class Stack):

Supports basic stack operations such as push, pop, isEmpty, isFull, peek, count, change, and display.
Implemented with an array-based approach.
Queue Class (class Queue):

Provides queue operations including enqueue, dequeue, isEmpty, isFull, count, and display.
Implemented using an array-based approach.
Selection Sort Function (void selectionSort(int arr[], int n)):

Implements the selection sort algorithm to sort an array of integers in ascending order.
Main Program (int main()):

Presents a menu-driven interface (Main Menu) allowing users to choose:
Stack Operations: Push, Pop, isEmpty, isFull, peek, count, change, display.
Queue Operations: Enqueue, Dequeue, isEmpty, isFull, count, display.
Sort a List: Sorts a list of integers using the selection sort algorithm.
Exit: Terminate the program.
Usage:
Stack Operations:

Enter 1 to perform stack operations.
Follow on-screen prompts to interact with the stack functionalities.
Queue Operations:

Enter 2 to perform queue operations.
Follow on-screen prompts to interact with the queue functionalities.
Sort a List:

Enter 3 to sort an array of integers using the selection sort algorithm.
Provide the size of the array and its elements when prompted.
Exiting the Program:

Enter 4 to exit the program.
Notes:
The program handles edge cases such as stack overflow, underflow, and queue overflow, underflow.
Ensure valid inputs are provided as per the program prompts to avoid unexpected behavior.
The selection sort function (selectionSort) and its helper function (printArray) are separate from the stack and queue operations.
