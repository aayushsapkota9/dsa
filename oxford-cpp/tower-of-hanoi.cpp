#include <iostream>
using namespace std;
void towerOfHanoi(int n, char src, char dest, char aux)
{
    if (n == 1)
    {
        cout << "Move disk 1 from " << src << " to " << dest << endl;
        return;
    }
    towerOfHanoi(n - 1, src, aux, dest);
    cout << "Move disk " << n << " from " << src << " to " << dest << "\n";
    towerOfHanoi(n - 1, aux, dest, src);
}
int main()
{
    towerOfHanoi(3, 'A', 'C', 'B');
    return 0;
}