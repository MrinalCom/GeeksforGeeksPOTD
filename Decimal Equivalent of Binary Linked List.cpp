  long long int ans = 0;
        struct Node *p = head;
        while (p)
        {
            ans = (ans << 1) | p->data;
            ans = ans % 1000000007;
            p = p->next;
        }

        return ans;
