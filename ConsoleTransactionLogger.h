#pragma once
#include "TransactionLogger.h"

class ConsoleTransactionLogger : public TransactionLogger {
public:
    void logTransaction(const std::string& paymentMethod, double amount) override;
};
