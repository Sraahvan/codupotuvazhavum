// circularQueue.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>




    class MyCircularQueue {
    public:

        MyCircularQueue(int k) {

            sizeMax = k;

        }

        bool enQueue(int value) {

            if (sizePt < sizeMax)
            {
                node* newnode = new node();
                newnode->value = value;

                if (head == nullptr)
                {
                    head = newnode;
                    rear = newnode;


                }
                else
                {
                    newnode->front = rear;
                    rear->back = newnode;
                   
                    rear = newnode;

                }

                sizePt++;
                return true;
            }
            else
            {
                return false;
            }
        }
      
        bool deQueue() {
            if (sizePt  != 0 )
            {
       
                node* temp = head;

                {
                    head = head->back;
                    
                    delete temp;
                    temp = nullptr;

                  

                }

                sizePt--;
                if (sizePt == 0)
                {
                    
                    rear = nullptr;
                }
                std::cout << sizePt;
                return true;
            }
            {
                return false;
            }
           

        }

        int Front() {
            if (head == nullptr)
            {
                return -1;
            }
                
            else
            {
                return head->value;
            }

           

        }

        int Rear() {
            if (rear == nullptr)
            {
                return -1;
            }

            return rear->value;

        }

        bool isEmpty() {

            if (sizePt == 0)
            {
                return true;
            }
            else
                return false;

        }

        bool isFull() {

            if (sizePt == sizeMax)

            {
                return true;

            }
            else
            {
                return false;
            }
        }
    private:
        struct node
        {
            int value;
            int size;
            node* front = nullptr;
            node* back  = nullptr; 
        };
        node* head = nullptr;
        node* rear = nullptr;

        int sizeMax;
        int sizePt = 0;

    };

    /**
    * ["MyCircularQueue","enQueue","Rear","Rear","deQueue","enQueue","Rear","deQueue","Front","deQueue","deQueue","deQueue"]
[[6],[6],[],[],[],[5],[],[],[],[],[],[]]
     * Your MyCircularQueue object will be instantiated and called as such:
     MyCircularQueue* obj = new MyCircularQueue(k);
     * bool param_1 = obj->enQueue(value);
     * bool param_2 = obj->deQueue();
     * int param_3 = obj->Front();
     * int param_4 = obj->Rear();
     * bool param_5 = obj->isEmpty();
     * bool param_6 = obj->isFull();
     * */
 int main()
{
     MyCircularQueue* obj = new MyCircularQueue(6);
     obj->enQueue(1);
     std::cout<<obj->Rear();

     std::cout<<obj->Rear();
     obj->deQueue();
     obj->enQueue(7);
     obj->Rear();
     obj->deQueue();
     std::cout << obj->Front();
     obj->deQueue();
     obj->deQueue();
     obj->deQueue();


   /*  obj->enQueue(3);
     obj->enQueue(4);
     
     obj->traverse();*/

  /*   std::cout << "Hello World!\n";
     obj->deQueue();
     obj->deQueue();*/

    // obj->traverse();

     
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
