#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the divisors function below.
 */
int divisors(int n) 
{
    int cnt=0;

    for(int i = 1; i <= sqrt(n); i++)
    {
        if(n%i==0)
        {
            if(n/i == i)
            {
                if((n/i)%2 == 0)
                {
                    cnt++;
                }
            }
            else
            {
                if((n/i)%2 == 0)
                {
                    cnt++;
                }
                if(i%2 == 0)
                {
                    cnt++;
                }
            }
        }
        
    }

    return cnt;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = divisors(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
