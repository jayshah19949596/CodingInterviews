#include <iostream>
#include <stack>
#include <vector>
#include <climits>
#include <exception>

using namespace std;

enum {POP, DUP, PLUS, MINUS};
const string OPERATIONS [] = {"POP", "DUP", "+", "-"};

class MyStack
{
public:
    MyStack()
    {
        mStack = new stack<string>();
    }

    ~MyStack() = default;

    void push(const string &item)
    {
        mStack->push(item);
    }

    void pop() noexcept(false)
    {
        if (mStack->empty())
            throw runtime_error("Empty Stack");

        mStack->pop();
    }

    string top() noexcept(false)
    {
        if (mStack->empty())
            throw runtime_error("Empty Stack");

        return mStack->top();
    }

    bool empty()
    {
        return mStack->empty();
    }

private:
    stack<string> *mStack;
};

int solution(const string &S)
{
    MyStack mStack;
    string token;
    size_t index = -1;

    try
    {
        while (index != S.size())
        {
            index++;
            token = "";

            while(S[index] != ' ')
            {
                token += S[index];

                index++;

                if (index == S.size() )
                    break;
            }

            if(token == OPERATIONS[POP])
            {
                mStack.pop();
            }
            else if(token == OPERATIONS[DUP])
            {
                string temp = mStack.top();
                mStack.push(temp);
            }
            else if(token == OPERATIONS[PLUS])
            {
                string temp1 = mStack.top();
                mStack.pop();
                string temp2 = mStack.top();
                mStack.pop();
                unsigned long temp3 = stoul(temp1) + stoul(temp2);

                if (temp3 > INT_MAX)
                    throw runtime_error("OverFlow");;

                mStack.push(to_string(temp3));
            }
            else if(token == OPERATIONS[MINUS])
            {
                string temp1;
                temp1 = mStack.top();
                mStack.pop();
                string temp2;
                temp2 = mStack.top();
                mStack.pop();

                long temp3 = stoul(temp1) - stoul(temp2);

                if (temp3 < 0)
                    throw runtime_error("UnderFlow");;

                mStack.push(to_string(temp3));
            }
            else
            {
                mStack.push(token);
            }
        }

        return stoi(mStack.top());
    }
    catch(const std::exception &e)
    {
        return -1;
    }
}

int main(int argc, char **argv)
{
    string test1 = "13 DUP 4 POP 5 DUP + DUP + -";
    string test2 = "5 6 + -";

    cout << "Solution: " << solution(test1) << endl;
    cout << "Solution: " << solution(test2) << endl;

    return EXIT_SUCCESS;
}
