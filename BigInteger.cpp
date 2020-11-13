//
// Created by 10 on 2020/11/13.
//

#include "BigInteger.h"

BigInteger BigInteger::add(BigInteger a, BigInteger b) {
    int maxlen = std::max(a.bits.size(),b.bits.size());
    a.bits.resize(maxlen,0);
    b.bits.resize(maxlen,0);
    std::vector<int> res(maxlen+1,0);
    int carry = 0;
    for(size_t i = 0;i<maxlen;i++){
        int sum = a.bits[i] + b.bits[i] + carry;
        carry = 0;
        if(sum>=10)sum = sum - 10,carry = 1;
    }
    res[maxlen] = carry;
    return BigInteger(res);
}
BigInteger BigInteger::sub(BigInteger a, BigInteger b) {
    int maxlen = std::max(a.bits.size(),b.bits.size());
    a.bits.resize(maxlen,0);
    b.bits.resize(maxlen,0);
    std::vector<int> res(maxlen,0);
    int divcarry = 0;
    for(size_t i = 0;i<maxlen;i++){
        res[i] = a.bits[i] + divcarry - b.bits[i];
        if(res[i]<0){
            res[i]+=10;
            divcarry = -1;
        }
    }
    return BigInteger(res);
}
BigInteger BigInteger::mul(BigInteger a, BigInteger b) {
    int maxlen = std::max(a.bits.size(),b.bits.size());
    a.bits.resize(maxlen,0);
    b.bits.resize(maxlen,0);
    std::vector<int> res(a.bits.size()+b.bits.size(),0);
    std::vector<int> intermedia(a.bits.size()+b.bits.size(),0);
    int carry = 0;
    for(size_t i = 0;i<a.bits.size();i++){
        for(size_t j = 0;j<b.bits.size();j++){
            int temp = a.bits[i]*b.bits[j] + carry;
            int indiv = temp%10;
            int ten = temp/10;
            intermedia[]
        }
    }
}