while (numcopy != 0)
    {
        rem = numcopy%10;
        while (cnt != 0)
        {
            mul = mul*rem;
            cnt--;
        }
        
        result = result + mul;
        mul = 1;
        numcopy = numcopy/10;
        cnt = count;
    }