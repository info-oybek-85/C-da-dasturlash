#ifndef STACK_H
#define STACK_H
class StackOfIntegers{
public:
StackOfIntegers();
bool empty() const;
int peek() const;
void push(int value);
int pop();
int getSize() const;
private:
int elements[100];
int size;};
StackOfIntegers::StackOfIntegers()
{size = 0;}
bool StackOfIntegers::empty() const
{return size == 0;}
int StackOfIntegers::peek() const
{return elements[size - 1];}
void StackOfIntegers::push(int value)
{elements[size++] = value;}
int StackOfIntegers::pop()
{return elements[--size];}
int StackOfIntegers::getSize() const
{return size;}
#endif

