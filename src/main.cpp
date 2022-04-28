#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int a, b, c, d;
	while (true) {
		cin >> a >> b >> c >> d;

		if (0 == a && 0 == b && 0 == c && 0 == d) {
			return 0;
		}

		const auto& t1 = (100 * c) / a;
		const auto& t2 = (100 * d) / b;
		const auto& t = t1 < t2 ? t1 : t2;

		const auto& y1 = (100 * d) / a;
		const auto& y2 = (100 * c) / b;
		const auto& y = y1 < y2 ? y1 : y2;

		auto ans = t < y ? y : t;
		if (100 < ans) {
			ans = 100;
		}

		cout << ans << "%\n";
	}

	return 0;
}