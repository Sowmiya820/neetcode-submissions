class Solution {
public:
    int hammingWeight(uint32_t n) {
       bitset<32> b(n);
       size_t cnt=b.count();
       return (int)cnt;
    }
};
