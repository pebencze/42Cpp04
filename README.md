# 42Cpp04
Subtype polymorphism, abstract classes, interfaces.

## Subtype Polymorphism

Subtype polymorphism is very useful when it comes to inheritence. If we would like a function to be overridden in a child class, we have to virtualize that function in the parent class. This way we make the function dynamic during the execution. E.g. the Animal Cat won't make an animal sound, but it will execute the makeSound function of its own class.

```c++
class Animal {
    public:
        ...
        virtual ~Animal();
        
        virtual void makeSound() const; //dynamic function or virtual member function (that will be overridden)
        ...
};

class Cat : public Animal {
    public:
        Cat();
        Cat(const Cat & other);
        Cat & operator=(const Cat & other);
        ~Cat();

        void makeSound() const;
};

```

## Deep vs. Shallow Copies
A shallow copy duplicates an object's memory address, not the actual data it points to. This means that the original and the copy point to the same memory location. While shallow copying is fast, it can lead to issues such as dangling pointers, memory leaks, and unintended data modification if not used carefully. A deep copy allocates memory and duplicates the data that the object points to. This is why a custom copy constructor and assigment operator are useful.

```c++
class Cat : public Animal {
    public:
        ...
    private:
        Brain *brain;
};

Cat & Cat::operator=(const Cat & other){
    if (this != &other){
        this->_type = other._type;
        this->brain = new Brain(); //DEEP COPY
        *(this->brain) = *(other.brain); //DEEP COPY
    }
    return *this;
}

WrongCat & WrongCat::operator=(const WrongCat & other){
    if (this != &other){
        this->_type = other._type;
        this->brain = other.brain; //SHALLOW COPY
    }
    return *this;
}
```
