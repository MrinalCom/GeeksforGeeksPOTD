char nonrepeatingCharacter(string S)
    {
       //Your code here
       int n = S.length();
        for (int i = 0; i < n; i++) {
            bool isRepeated = false;
            for (int j = 0; j < n; j++) {
                if (i != j && S[i] == S[j]) {
                    isRepeated = true;
                    break;
                }
            }
            if (!isRepeated) {
                return S[i];
            }
        }
        
        return '$';
       
    }
