#include <bits/stdc++.h>

template <typename C>
int sz(const C &c) { return static_cast<int>(c.size()); }

using namespace std;

int main()
{
    iostream::sync_with_stdio(false);

    int testCase;
    cin >> testCase;
    cout << "Lumberjacks:\n";

    for (int i = 0; i < testCase; i++)
    {
        vector<int> arr;

        for (int k = 0; k < 10; k++)
        {
            int inp;
            cin >> inp;
            arr.push_back(inp);
        }

        bool isOrdered = true;

        if (arr[0] < arr[1])
        {

            int temp = arr.size() - 1;
            for (int j = 0; j < temp; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    isOrdered = false;
                }
            }
        }
        else
        {
            int temp = arr.size() - 1;
            for (int j = 0; j < temp; j++)
            {
                if (arr[j + 1] > arr[j])
                {
                    isOrdered = false;
                }
            }
        }

        if (isOrdered)
        {
            cout << "Ordered\n";
        }
        else
        {
            cout << "Unordered\n";
        }
    }
}