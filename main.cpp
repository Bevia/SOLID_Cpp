#include "PaymentProcessor.h"
#include "ConcretePaymentValidator.h"
#include "ConsoleTransactionLogger.h"
#include <memory>

int main() {
    auto validator = std::make_shared<ConcretePaymentValidator>();
    auto logger = std::make_shared<ConsoleTransactionLogger>();

    PaymentProcessor processor(validator, logger);

    processor.processPayment("CreditCard", 100.0);
    processor.processPayment("Bitcoin", 50.0);

    return 0;
}
