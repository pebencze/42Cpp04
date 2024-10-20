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
