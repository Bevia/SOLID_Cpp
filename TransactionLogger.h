#pragma once
#include <string>

class TransactionLogger {
public:
    virtual void logTransaction(const std::string& paymentMethod, double amount) = 0;
    virtual ~TransactionLogger() = default;
};
