#include <iostream>

using namespace std;

int solution(int N, int K)
{
    if(0>K || 0>N || K>N) return -1;
    else
    {
        unsigned long long r=1;
        if(K>N-K) K=N-K;
        for (int i = 0; i < K; i++)
        {
            r *= (N - i);
            r /= (i + 1);
        }
        if(r>1000000000) return -1;
        else return r;
    }
}

int main()
{
    int N , K;
    cout << "Give N and K values: " << endl;
    cin >> N >> K;
    cout << "Value of B(" << N << ", " << K << ") equals " << solution(N, K) << endl;
}
