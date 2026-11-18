#include <iostream>
using namespace std;

int jobQueue[100];
int front = -1, rear = -1;
int queueSize;

void addjob()
{
    if (rear == queueSize - 1)
    {
        cout << "Queue is full!!!\n";
        return;
    }

    int job;

    cout << "Enter job number: ";
    cin >> job;

    if (front == -1)
    {
        front = 0;
    }

    rear++;
    jobQueue[rear] = job;

    cout << "Job added successfully!\n";
}

void deletejob()
{
    if (front == -1)
    {
        cout << "Queue is empty!\n";
        return;
    }

    cout << "Deleted job: " << jobQueue[front] << endl;

    front++;

    if (front > rear)
    {
        front = -1;
        rear = -1;
    }
}

void display()
{
    if (front == -1)
    {
        cout << "Queue is empty!\n";
        return;
    }

    cout << "Jobs in queue: ";

    for (int i = front; i <= rear; i++)
    {
        cout << jobQueue[i] << " ";
    }

    cout << endl;
}

int main()
{
    int choice;

    cout << "========================================\n";
    cout << "                 OUTPUT\n";
    cout << "========================================\n";
    cout << "Name       : Deepali Pardhi\n";
    cout << "Class      : SY B.Tech\n";
    cout << "Roll No.   : 214\n";
    cout << "========================================\n";

    cout << "\nEnter maximum queue size: ";
    cin >> queueSize;

    if (queueSize <= 0 || queueSize > 100)
    {
        cout << "Invalid queue size!\n";
        return 0;
    }

    do
    {
        cout << "\n1. Add job";
        cout << "\n2. Delete job";
        cout << "\n3. Display jobs";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            int numjobs;

            cout << "How many jobs to add? ";
            cin >> numjobs;

            for (int i = 0; i < numjobs; i++)
            {
                addjob();
            }
        }
        else if (choice == 2)
        {
            deletejob();
        }
        else if (choice == 3)
        {
            display();
        }
        else if (choice == 4)
        {
            cout << "Exiting...\n";
        }
        else
        {
            cout << "Invalid choice!!!\n";
        }

    } while (choice != 4);

    return 0;
}
