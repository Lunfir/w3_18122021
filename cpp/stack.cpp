#include <iostream>
#include <cstdlib>

struct StackElement
{
    int value;
    StackElement* prev;
};


struct Stack
{
    StackElement* current = nullptr;

    void push(int value)
    {
        StackElement* item = (StackElement*)malloc(sizeof(StackElement));
        if (item == nullptr)
        {
            std::cout << "Stack::push_error" << std::endl;
            return;
        }

        item->value = value;
        item->prev = this->current;

        current = item;
    }

    int pop()
    {
        if (this->empty())
        {
            std::cout << "Stack::pop_error" << std::endl;
            return 0;
        }

        int out;
        out = this->current->value;

        StackElement* tmp = this->current;
        this->current = this->current->prev;
        free(tmp);

        return out;
    }

    bool empty()
    {
        return current == nullptr;
    }

};

int main()
{
    Stack stack;

    for (int i = 1; i <= 25; i += 2)
    {
        stack.push(i);
    }

    while(!stack.empty())
    {
        std::cout << stack.pop() << "_";
    }

    return 0;
}