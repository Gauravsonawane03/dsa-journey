#include <vector>
using namespace std;

class MyCircularQueue
{
private:
    vector<int> queue;
    int capacity;
    int currentSize = 0;
    int start = -1;
    int end = -1;

public:
    MyCircularQueue(int k) : queue(k), capacity(k)
    {
    }

    bool enQueue(int value)
    {
        if (currentSize == capacity)
        {
            return false;
        }

        if (currentSize == 0)
        {
            start = 0;
            end = 0;
        }
        else
        {
            end = (end + 1) % capacity;
        }

        queue[end] = value;
        currentSize += 1;
        return true;
    }

    bool deQueue()
    {
        if (currentSize == 0)
        {
            return false;
        }

        if (currentSize == 1)
        {
            start = -1;
            end = -1;
            currentSize = 0;
        }
        else
        {
            start = (start + 1) % capacity;
            currentSize -= 1;
        }

        return true;
    }

    int Front()
    {
        if (currentSize == 0)
        {
            return -1;
        }
        return queue[start];
    }

    int Rear()
    {
        if (currentSize == 0)
        {
            return -1;
        }
        return queue[end];
    }

    bool isEmpty()
    {
        return currentSize == 0;
    }

    bool isFull()
    {
        return currentSize == capacity;
    }
};
