//
// Created by 10 on 2020/11/13.
//

#ifndef RSA_BIGINTEGER_H
#define RSA_BIGINTEGER_H
#include <bits/stdc++.h>

#include <utility>
class BigInteger{
public:
    explicit BigInteger(std::vector<int> bits){
        this->bits = std::move(bits);
    }
    BigInteger add(BigInteger a,BigInteger b);
    BigInteger sub(BigInteger a,BigInteger b);
    BigInteger mul(BigInteger a,BigInteger b);
    BigInteger div(BigInteger a,BigInteger b);

private:
    std::vector<int> bits;
};
#endif //RSA_BIGINTEGER_H
