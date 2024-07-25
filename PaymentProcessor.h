#pragma once
#include <string>
#include <memory>
#include "PaymentValidator.h"
#include "TransactionLogger.h"

class PaymentProcessor {
public:
    PaymentProcessor(std::shared_ptr<PaymentValidator> validator, std::shared_ptr<TransactionLogger> logger)
        : validator_(validator), logger_(logger) {}

    void processPayment(const std::string& paymentMethod, double amount);

private:
    std::shared_ptr<PaymentValidator> validator_;
    std::shared_ptr<TransactionLogger> logger_;
};
