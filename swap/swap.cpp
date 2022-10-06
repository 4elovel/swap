#include <iostream>
#include <list>

using namespace std;


template<class I>
void print(const I& start, const I& end)
{
    for (I it = start; it != end; ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
}


void if_swap(list <int> &ls1, list <int>& ls2) {
    if (ls1.size() % 2 == 0 && ls2.size() % 2 == 0)
    {
        swap(ls1, ls2);
    }
}


int main()
{
    list <int> ls1{1,2,3,4};
    list <int> ls2{5,6,7,8};

    if_swap(ls1, ls2);

    print(ls1.begin(), ls1.end());
    print(ls2.begin(), ls2.end());

}