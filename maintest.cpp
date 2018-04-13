//#include <iostream>
//
//using namespace std;
//
//struct Rectangle {
//
//    int a, b;
//
//    int Square(Rectangle h) {
//        int square = h.a * h.b;
//        return square;
//    }
//    int chu_vi(Rectangle h) {
//        int chuvi = h.a + h.b;
//        return chuvi*2;
//    }
//};
//
//int main() {
//    struct Rectangle h;
//    cin >> h.a >> h.b;
//
//    cout << h.chu_vi(h) << " " << h.Square(h);// << endl;
//    return 0;
//}
#include <iostream>

using namespace std;

int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	else return gcd(b, a%b);
}

int main() {
	cout << gcd(6, 9); //<< endl;
	system("pause");
	return 0;
}

