#pragma once
#include "PaymentValidator.h"

class ConcretePaymentValidator : public PaymentValidator {
public:
    bool validate(const std::string& paymentMethod) override;
};
