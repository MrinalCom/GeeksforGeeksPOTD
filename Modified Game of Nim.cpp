int result = accumulate(A, A+n, 0, bit_xor<int>());
        return result!=0 && n&1?2:1; 
