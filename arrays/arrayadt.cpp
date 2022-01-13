#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

typedef long long ll;
typedef double dbl;
#define rep(i, n) for (ll i = 0; i < n; i++)
#define f(i, a, b) for (ll i = a; i < b; i++)
#define fb(i, a, b) for (ll i = a; i > b; i--)
#define pb push_back

class adt
{
    vector<int> arr;

public:
    int search(int ele)
    {
        int n = arr.size();

        rep(i, n)
        {
            if (arr[i] == ele)
            {
                return i;
            }
        }
        return -1;
    }
    void insert_at_end(int ele)
    {
        arr.pb(ele);
    }
    void insertatpos(int pos, int ele)
    {
        int n = arr.size();

        fb(i, n, pos)
        {
            arr[i] = arr[i - 1];
        }
        if (pos == n)
        {
            arr.push_back(ele);
        }
        arr[pos] = ele;
    }
    void delete_(int ele)
    {
        int d = search(ele);
        int n = arr.size();

        if (d == -1)
        {
            return;
        }
        f(i, d, n - 1)
        {
            arr[i] = arr[i + 1];
        }
        arr.pop_back();
    }
    int min_()
    {
        // int minn ;
        //

        return *min_element(arr.begin(), arr.end());
    }
    int max_()
    {
        return *max_element(arr.begin(), arr.end());
    }
    void print()
    {
        int n = arr.size();

        rep(i, n)
        {
            cout << arr[i] << " ";
        }
    }
    //index
    int second_lar()
    {
        int n = arr.size();

        int res = -1;
        int largest = 0;
        f(i, 1, n)
        {
            if (arr[i] > arr[largest])
            {
                res = largest;
                largest = i;
            }
            else if (arr[i] < arr[largest])
            {
                if (arr[i] > arr[res])
                {
                    res = i;
                }
            }
        }
        return res;
    }
    bool issorted()
    {
        int n = arr.size();

        rep(i, (n - 1))
        {
            if (arr[i + 1] < arr[i])
            {
                return false;
            }
        }
        return true;
    }
    void reverse()
    {
        int low = 0;
        int high = arr.size() - 1;
        while (low < high)
        {
            swap(arr[low], arr[high]);
            low++;
            high--;
        }
    }
    void removedup()
    {
        // int i = 0;
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int res = 1;
        f(i, 1, n)
        {
            if (arr[i] != arr[res - 1])
            {
                arr[res] = arr[i];
                res++;
            }
        }
        //
        rep(i, res)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    void pushzero()
    {
        int n = arr.size();
        int res = n - 1;
        rep(i, n)
        {
            if (arr[i] == 0)
            {
                if (arr[res] != 0)
                {
                    swap(arr[i], arr[res]);
                    res--;
                }
                else
                {
                    while (arr[res] == 0)
                    {
                        res--;
                    }
                    swap(arr[i], arr[res]);
                    res--;
                }
            }
        }
    }
};
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int a;
    int b;
    //   cin>>a;
    adt t;
    while (cin >> a && a != -1)
    {
        //   cout<<"you are "<<endl;
        switch (a)
        {
        case 1:

            cin >> b;
            t.insert_at_end(b);
            break;
        case 2:

            cin >> b;
            cout << t.search(b) << endl;
            break;

        case 3:
            int pos;
            int ele;
            cin >> pos >> ele;
            t.insertatpos(pos, ele);
            break;

        case 4:
            t.print();
            cout << endl;
            break;
        case 5:
            t.delete_(2);
            break;
        case 6:
            cout << t.min_() << endl;
            break;
        case 7:
            cout << t.max_() << endl;
            break;
        case 8:

            cout << t.second_lar() << endl;
            break;

        case 9:
            cout << t.issorted() << endl;
            break;
        case 10:
            t.reverse();
            break;
        case 11:
            t.removedup();
            break;
        case 12:
            t.pushzero();
            break;
        }
    }

    return 0;
}