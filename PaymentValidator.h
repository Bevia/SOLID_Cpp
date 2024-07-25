#pragma once
#include <string>

class PaymentValidator {
public:
    virtual bool validate(const std::string& paymentMethod) = 0;
    virtual ~PaymentValidator() = default;
};
