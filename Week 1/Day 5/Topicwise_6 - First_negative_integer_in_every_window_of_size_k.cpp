vector<long long> printFirstNegativeInteger(long long int A[],
                                            long long int N, long long int K)
{

    vector<long long int> v;
    queue<int> q;
    int l = 0;
    int r = K - 1;

    for (int i = 0; i < N; i++)
    {
        if (A[i] < 0)
            q.push(i);
    }
    while (r < N)
    {
        if(q.empty())
            v.push_back(0);
        else if (q.front() == l)
        {
            v.push_back(A[q.front()]);
            q.pop();
        }
        else if (q.front() > l && q.front() <= r)
            v.push_back(A[q.front()]);
        else
            v.push_back(0);
        l++;
        r++;
    }
    return v;
}
