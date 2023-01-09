#include <iostream>

using namespace std;

int main()
{
    int king, queen, rook, bishop, knight, pawn;

    cin >> king;
    cout << 1 - king << " ";

    cin >> queen;
    cout << 1 - queen << " ";

    cin >> rook;
    cout << 2 - rook << " ";

    cin >> bishop;
    cout << 2 - bishop << " ";

    cin >> knight;
    cout << 2 - knight << " ";

    cin >> pawn;
    cout << 8 - pawn;

}
