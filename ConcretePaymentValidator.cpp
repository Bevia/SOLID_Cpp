#include "ConcretePaymentValidator.h"

bool ConcretePaymentValidator::validate(const std::string& paymentMethod) {
    // A stub implementation. Real validation logic would go here.
    return paymentMethod == "CreditCard" || paymentMethod == "PayPal";
}
