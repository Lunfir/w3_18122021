#include <iostream>
#include <cstdlib>


template <typename U>
struct StackElement
{
    U value;
    StackElement* prev;
};


template <typename T>
struct Stack
{
    StackElement<T>* current = nullptr;

    void push(T value)
    {
        StackElement<T>* item = (StackElement<T>*)malloc(sizeof(StackElement<T>));
        if (item == nullptr)
        {
            std::cout << "Stack::push_error" << std::endl;
            return;
        }

        item->value = value;
        item->prev = this->current;

        current = item;
    }

    T pop()
    {
        if (this->empty())
        {
            std::cout << "Stack::pop_error" << std::endl;
            return 0;
        }

        T out;
        out = this->current->value;

        StackElement<T>* tmp = this->current;
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
    Stack<float> stack;

    for (double i = 1.17; i <= 25.32; i += 2.2)
    {
        stack.push(i);
    }

    while(!stack.empty())
    {
        std::cout << stack.pop() << "_";
    }

    return 0;
}