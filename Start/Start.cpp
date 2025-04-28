#include <iostream>

using namespace std;

int main() {
	int N, M, X, Y;
	cin >> N >> M >> X >> Y;
	if (N > M) swap(N , M);
	cout << min(min(X, Y),min(N - X,M - Y));

return 0;
}