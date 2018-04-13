#include <iostream>
#include <string>
using namespace std;

void swap(char *xp, char *yp) {
    char temp = *xp;
    *xp = *yp;
    *yp = temp;
}
int main()
{
    char sentence[100];
    cin.getline(sentence,100);

    int srt, des;

    cin >> srt >> des;
    swap(&sentence[srt],&sentence[des]);
    cout << sentence;

    return 0;
}
