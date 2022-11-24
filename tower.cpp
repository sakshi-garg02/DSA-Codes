#include <iostream>
using namespace std;

void tower(int n, char from, char to, char through)
{
    if (n == 0)
    {
        return;
    }
    tower(n - 1, from, through, to);

    cout << "move" << n << "from" << from << "to" << to << "using" << through << endl;

    tower(n - 1, through, to, from);
}
int main()
{
    int n = 3;

    tower(n, 'A', 'C', 'B');
    return 0;
}