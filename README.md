## How to run

g++ -std=c++11 -o main main.cpp PaymentProcessor.cpp ConcretePaymentValidator.cpp ConsoleTransactionLogger.cpp

./main

### Running uml python file:
python3 uml.py


### Main SOLID program description

design a simple payment application in modern C++ with the SOLID principles in mind. This application will have basic functionality such as processing payments, validating payment methods, and logging transactions.
Single Responsibility Principle (SRP)

First, we'll define classes with a single responsibility. For example, a PaymentProcessor class for handling payments, a PaymentValidator class for validating payments, and a TransactionLogger class for logging transactions.

Open/Closed Principle (OCP)

By using base classes for validation and logging, we allow the PaymentProcessor to be open for extension but closed for modification. New payment validators or loggers can be added without changing the PaymentProcessor class.
Liskov Substitution Principle (LSP)

The ConcretePaymentValidator and ConsoleTransactionLogger classes adhere to the interfaces PaymentValidator and TransactionLogger respectively, ensuring they can be substituted without affecting the PaymentProcessor.
Interface Segregation Principle (ISP)

The interfaces are small and focused, meaning clients are not forced to depend on methods they do not use. For instance, the PaymentValidator interface only has one method: validate.
Dependency Inversion Principle (DIP)

The PaymentProcessor depends on abstractions (PaymentValidator and TransactionLogger), not on concrete implementations. Dependencies are injected via the constructor.

This main application demonstrates the SOLID principles in action. The PaymentProcessor processes payments using injected dependencies for validation and logging, making the system modular, maintainable, and extendable.
