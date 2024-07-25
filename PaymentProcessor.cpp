#include "PaymentProcessor.h"
#include <iostream>

void PaymentProcessor::processPayment(const std::string& paymentMethod, double amount) {
    if (validator_->validate(paymentMethod)) {
        // Process the payment (this is a stub, real implementation would go here)
        std::cout << "Processing payment of $" << amount << " using " << paymentMethod << std::endl;
        logger_->logTransaction(paymentMethod, amount);
    } else {
        std::cout << "Payment method " << paymentMethod << " is invalid." << std::endl;
    }
}
