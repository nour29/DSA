
#include <iostream>
// C++ program for implementation of
// selection sort
//#include <bits/stdc++.h>
using namespace std;

// Function for Selection sort
void selectionSort(int arr[], int n)
{

    int i, j, min_idx;

    // One by one move boundary of
    // unsorted subarray
    for (i = 0; i < n - 1; i++) {

        // Find the minimum element in
        // unsorted array
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }

        // Swap the found minimum element
        // with the first element
        if (min_idx != i)
            swap(arr[min_idx], arr[i]);
    }
}

// Function to print an array
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++) {
        cout << arr[i] << " ";
        cout << endl;
    }
}
//create the Stack and the statements to operate the stack
class Stack {
private:
    int top;
    int* s1;
    int size;

public:
    Stack(int n) {
        if (n <= 0) {
            throw invalid_argument("Size of the stack must be greater than 0.");
        }
        cout<<"enter the size of the stack";
        cin>>n;
        size = n;
        top = -1;
        s1 = new int[size];
        for (int i = 0; i < size; i++) {
            s1[i] = 0;
        }
    }
    ~Stack() {
        delete[] s1;
    }

    // checking if the stack has elements
    bool isEmpty() {
        if (top == -1)
            return true;
        else
            return false;
    }
    // checking if stack has spaces to insert new values
    bool isFull() {
        if (top == 4)
            return true;
        else
            return false;
    }

    void push(int val) {
        if (isFull()) {
            cout << "stack overflow" << endl;
        } else {
            top++; // 1
            s1[top] = val;
        }
    }

    int pop() {
        if (isEmpty()) {
            cout << "stack underflow" << endl;
            return 0;
        } else {
            int popValue = s1[top];
            s1[top] = 0;
            top--;
            return popValue;
        }
    }

    int count() {
        return (top + 1);
    }

    int peek(int pos) {
        if (isEmpty()) {
            cout << "stack underflow" << endl;
            return 0;
        } else {
            return s1[pos];
        }
    }

    void change(int pos, int val) {
        s1[pos] = val;
        cout << "value changed at location " << pos << endl;
    }

    void display() {
        cout << "All values in the Stack are " << endl;
        for (int i = 4; i >= 0; i--) {
            cout << s1[i] << endl;
        }
    }
};
class Queue {
private:
    int front;
    int rear;
    int* q1;
    int size;

public:
    Queue(int n) {
        if (n <= 0) {
            throw invalid_argument("Size of the queue must be greater than 0.");
        }
        size = n;
        front = -1;
        rear = -1;
        q1 = new int[size];
        for (int i = 0; i < size; i++) {
            q1[i] = 0;
        }
    }
    ~Queue() {
        delete[] q1;
    }

    bool isEmpty() {
        return front == -1 && rear == -1;
    }

    bool isFull() {
        return rear == size - 1;
    }

    void enqueue(int val) {
        cin>>val;
        if (isFull()) {
            cout << "Queue Overflow" << endl;
        } else if (isEmpty()) {
            front = rear = 0;
            q1[rear] = val;
        } else {
            rear++;
            q1[rear] = val;
        }
       
    }

    int dequeue() {
        int x = 0;
        if (isEmpty()) {
            cout << "Queue Underflow" << endl;
            return x;
        } else if (front == rear) {
            x = q1[front];
            q1[front] = 0;
            front = rear = -1;
        } else {
            x = q1[front];
            q1[front] = 0;
            front++;
        }
        return x;
    }

    int count() {
        if (isEmpty()) {
            return 0;
        } else {
            return rear - front + 1;
        }
    }

    void display() {
        for (int i = 0; i < size; i++) {
            cout << q1[i] << " ";
        }
        cout << endl;
    }

    Queue() {

    }
};
// Driver program is basically the part of the program that calls all the functions,
// it may also include additional code.
int main()
{
    cout<<"Main Menu\n";
    int a;
    cout << "1.Stack Operations\n2.Queue Operations\n3.Sort a List\n4.Exit\n";
    cin >> a;
    if (a == 1){
        int size;

    Stack arr(size);
    int option, position, value;

    do {
        cout << "What operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
        cout << "1. Push()" << endl;
        cout << "2. Pop()" << endl;
        cout << "3. isEmpty()" << endl;
        cout << "4. isFull()" << endl;
        cout << "5. peek()" << endl;
        cout << "6. count()" << endl;
        cout << "7. change()" << endl;
        cout << "8. display()" << endl;
        

        cin >> option;
        switch (option) {
            case 0:
                break;
            case 1:
                cout << "Enter an item to push in the stack" << endl;
                cin >> value;
                arr.push(value);
                break;
            case 2:
                cout << "Pop Function Called - Poped Value: " << arr.pop() << endl;
                break;
            case 3:
                if (arr.isEmpty())
                    cout << "Stack is Empty" << endl;
                else
                    cout << "Stack is not Empty" << endl;
                break;
            case 4:
                if (arr.isFull())
                    cout << "Stack is Full" << endl;
                else
                    cout << "Stack is not Full" << endl;
                break;
            case 5:
                cout << "Enter position of item you want to peek: " << endl;
                cin >> position;
                cout << "Peek Function Called - Value at position " << position << " is " << arr.peek(position) << endl;
                break;
            case 6:
                cout << "Count Function Called - Number of Items in the Stack are: " << arr.count() << endl;
                break;
            case 7:
                cout << "Change Function Called - " << endl;
                cout << "Enter position of item you want to change : ";
                cin >> position;
                cout << endl;
                cout << "Enter value of item you want to change : ";
                cin >> value;
                arr.change(position, value);
                break;
            case 8:
                cout << "Display Function Called - " << endl;
                arr.display();
                break;
            case 9:
                system("cls");
                break;
            default:
                cout << "Enter Proper Option number " << endl;
        }

    } while (option != 0);}
    else if (a==2){

    Queue q1;
    int value1, option1;

    do {
        cout << "\n\nWhat operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
        cout << "1. Enqueue()" << endl;
        cout << "2. Dequeue()" << endl;
        cout << "3. isEmpty()" << endl;
        cout << "4. isFull()" << endl;
        cout << "5. count()" << endl;
        cout << "6. display()" << endl;
        cout << "7. Clear Screen" << endl << endl;

        cin >> option1;

        switch (option1) {
            case 0:
                break;
            case 1:
                cout << "Enqueue Operation \nEnter an item to Enqueue in the Queue" << endl;
                cin >> value1;
                q1.enqueue(value1);
                break;
            case 2:
                cout << "Dequeue Operation \nDequeued Value : " << q1.dequeue() << endl;
                break;
            case 3:
                if (q1.isEmpty())
                    cout << "Queue is Empty" << endl;
                else
                    cout << "Queue is not Empty" << endl;
                break;
            case 4:
                if (q1.isFull())
                    cout << "Queue is Full" << endl;
                else
                    cout << "Queue is not Full" << endl;
                break;
            case 5:
                cout << "Count Operation \nCount of items in Queue : " << q1.count() << endl;
                break;
            case 6:
                cout << "Display Function Called - " << endl;
                q1.display();
                break;
            case 7:
                system("cls");
                break;
            default:
                cout << "Enter Proper Option number " << endl;
        }
        

    } while (option1 != 0);
    }
    else {


        int n;
        cout << "Enter the number of elements in the array: ";
        cin >> n;

        int *arr = new int[n];
        cout << "Enter the elements of the array: ";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        // Function Call
        selectionSort(arr, n);
        cout << "Sorted array: \n";
        printArray(arr, n);
    }
    return 0;
}
