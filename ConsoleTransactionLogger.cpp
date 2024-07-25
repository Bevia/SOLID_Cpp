#include "ConsoleTransactionLogger.h"
#include <iostream>

void ConsoleTransactionLogger::logTransaction(const std::string& paymentMethod, double amount) {
    std::cout << "Logged transaction: " << paymentMethod << " - $" << amount << std::endl;
}
