#include <iostream>
using namespace std;

class Stack{
    private:
        int *sPtr;
        int maxLen;
        int topSub;
    public:
        Stack(){
            sPtr = new int [100];
            maxLen = 99;
            topSub = -1;
        }
        ~Stack(){
            delete [] sPtr;
        };
        void push(int number){
            if(topSub == maxLen)
                cerr << "Error in push... Stack is full... \n";
            else
                sPtr[++topSub] = number;
        }
        void pop(){
            if (empty())
                cerr << "Stack is Empty...\n";
            else 
                topSub--;
        }
        int top(){
            if (empty())
                cerr << "Stack is Empty...\n";
            else 
                return (sPtr[topSub]);
        }
        int empty(){
            return (topSub == -1);
        }
};

int main(){
    int topOne;
    Stack stk;
    stk.push(45);
    stk.push(01);
    stk.push(12);
    stk.push(90);
    stk.push(42);
    topOne = stk.top();
    cout << topOne << endl;
    stk.push(39);
    topOne = stk.top();
    cout << topOne << endl;
    stk.pop();
    stk.pop();
    stk.pop();
    stk.pop();
    topOne = stk.top();
    cout << topOne << endl;
    return 0;
}