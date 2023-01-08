#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class queuee
{
public:
    int front;
    int rear;
    int *arr;
    int size;

    queuee(int size)
    {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }
    int isempty()
    {
        if (front == -1 && rear == -1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int isfull()
    {
        if (rear == size - 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    void enqueue(int item)
    {
        if (isfull())
        {
            cout << "Queue is full" << endl;
            return;
        }
        else if (isempty())
        {
            front = rear = 0;
        }
        else
        {
            rear++;
        }
        arr[rear] = item;
    }
    void dequeue()
    {
        if (isempty())
        {
            cout << "Queue is empty" << endl;
            return;
        }
        else if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front++;
        }
    }
    void reverse()
    {
        int i = 0;
        int j = rear;
        while (i <= j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
    void sorting(){
        sort(arr,arr+(rear+1));
    }
    void display()
    {
        
        if (!isempty())
        {
            
            for (int i = front; i <= rear; i++)
            {
                cout << arr[i] << " ";
            }
        }
        else
        {
            cout << "Queue is empty"
                 << "Nothing to see here";
        }
    }
};
void priority(int choice)
{
    if (choice == 1)
    {
        cout << "ascending order prirority(lowest value has the highet priority)" << endl;
    }
    else if (choice == 2)
    {
        cout << "descending order priority(highest value has the highest priority)" << endl;
    }
    else
    {
        cout << "Enter correct choice" << endl;
    }
}
int main()
{
    int size;
    cout << "Enter the size of the queue" << endl;
    cin >> size;
    queuee q1(5);
    int userchoice;
    int choice;
    while (userchoice != 0)
    {
        cout << "Enter the type of priority" << endl;
        cout << "1 for ascending order prirority(lowest value has the highet priority)" << endl;
        cout << "2 for descending order priority(highest value has the highest priority)" << endl;
        cout << "0 for exiting utitlity" << endl;
        cin >> userchoice;

        switch (userchoice)
        {
        case 1:
            cout << "You have chosen"
                 << " " << userchoice << endl;
            priority(userchoice);
            cout << endl;
            do
            {
                cout << endl
                     << "1 for insertion" << endl;
                cout << "2 for deletion" << endl;
                cout << "3 to check isempty()" << endl;
                cout << "4 to check isfull()" << endl;
                cout << "0 to exit()" << endl;
                cout << "Enter your choice" << endl;
                cin >> choice;
                switch (choice)
                {
                case 1:
                    int data1;
                    cout << "Enter the data which you want to insert" << endl;
                    cin >> data1;
                    q1.enqueue(data1);
                    cout << "............Performing ascending order priority............" << endl;
                    q1.sorting();
                    q1.display();
                    break;
                break;
                case 2:
                    q1.dequeue();
                    q1.display();
                    break;
                case 3:
                    if (q1.isempty())
                    {
                        cout << "The queue is empty";
                    }
                    else
                    {
                        cout << "The queue is not empty";
                    }
                    break;
                case 4:
                    if (q1.isfull())
                    {
                        cout << "The queue is full";
                    }
                    else
                    {
                        cout << "the queue is not full";
                    }
                    break;
                default:
                    cout << "Enter correct choice" << endl;
                    break;
                }
            } while (choice != 0);
            break;
        case 2:
            cout << "You have chosen" << userchoice << endl;
            priority(userchoice);
            cout << endl;
            do
            {
                cout << endl
                     << "1 for insertion" << endl;
                cout << "2 for deletion" << endl;
                cout << "3 to check isempty()" << endl;
                cout << "4 to check isfull()" << endl;
                cout << "0 to exit()" << endl;
                cout << "Enter your choice" << endl;

                cin >> choice;
                switch (choice)
                {
                case 1:
                    int data1;
                    cout << "Enter the data which you want to insert" << endl;
                    cin >> data1;
                    q1.enqueue(data1);
                    cout << "............Performing descending order priority............" << endl;
                    q1.sorting();
                    q1.reverse();
                    q1.display();
                    break;
                case 2:
                    q1.dequeue();
                    q1.display();
                    break;
                case 3:
                    if (q1.isempty())
                    {
                        cout << "The queue is empty";
                    }
                    else
                    {
                        cout << "The queue is not empty";
                    }
                    break;
                case 4:
                    if (q1.isfull())
                    {
                        cout << "The queue is full";
                    }
                    else
                    {
                        cout << "The queue is not full";
                    }
                    break;
                default:
                    cout << "Enter correct choice" << endl;
                    break;
                }
            } while (choice != 0);
            break;
        case 0:
            return 0;
        break;
        default:
            cout << "Enter correct choice" << endl;
            break;
        }
    }
    return 0;
}
