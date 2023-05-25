/*
 * Design Pattern - Template Method 樣板方法模式
 * 
 * 在這個範例中，AbstractClass（抽象類別）定義了一個模板方法TemplateMethod，該方法描述了一個算法的框架，並調用了幾個抽象方法Step1、Step2和Step3。
 * ConcreteClassA和ConcreteClassB是AbstractClass的具體實現類，它們實現了抽象方法，從而完成了算法的實現。
 * 
 * 在客戶端，我們創建了ConcreteClassA和ConcreteClassB的實例，並通過調用TemplateMethod方法來執行算法。
 * 由於TemplateMethod是在AbstractClass中定義的，所以無論我們使用哪個具體實現類，算法的執行方式都是一樣的，但具體的步驟實現可以有所差異。
 */

#include <iostream>

// AbstractClass
class AbstractClass {
public:
    void TemplateMethod() {
        // 調用模板方法
        Step1();
        Step2();
        Step3();
    }

    virtual void Step1() = 0;
    virtual void Step2() = 0;
    virtual void Step3() = 0;
};

// ConcreteClassA
class ConcreteClassA : public AbstractClass {
public:
    void Step1() override {
        std::cout << "ConcreteClassA: Step 1" << std::endl;
    }

    void Step2() override {
        std::cout << "ConcreteClassA: Step 2" << std::endl;
    }

    void Step3() override {
        std::cout << "ConcreteClassA: Step 3" << std::endl;
    }
};

// ConcreteClassB
class ConcreteClassB : public AbstractClass {
public:
    void Step1() override {
        std::cout << "ConcreteClassB: Step 1" << std::endl;
    }

    void Step2() override {
        std::cout << "ConcreteClassB: Step 2" << std::endl;
    }

    void Step3() override {
        std::cout << "ConcreteClassB: Step 3" << std::endl;
    }
};

int main() {
    // 使用 ConcreteClassA
    AbstractClass* objectA = new ConcreteClassA();
    objectA->TemplateMethod();
    delete objectA;

    std::cout << std::endl;

    // 使用 ConcreteClassB
    AbstractClass* objectB = new ConcreteClassB();
    objectB->TemplateMethod();
    delete objectB;

    return 0;
}
