#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int a[20], b[20], c[100], k, m, x, f = 0, h = 1;
	system("chcp 1251");

	cout << "Введите количество элементов множества А" << "\n";
	cin >> k;
	x = k + 1;

	cout << "Введите количество элементов множества B" << "\n";
	cin >> m;

	cout << "Введите множество А" << "\n";
	for (int u = 1; u <= k; u++) {
        cin >> a[u];
    }

    cout << "Введите множество B" << "\n";
	for (int i = 1; i <= m; i++) {
        cin >> b[i];
	}

    cout << "Введите значение переменной условия f" << "\n";
	cout << "при f равном 0 будет выбрана операция объединения, при f равном 1 - пересечения" << "\n";
    cin >> f;

    if (f == 0) {
		for (int u = 1; u <= k; u++) {
			c[u] = a[u];
        }
        for (int i = 1; i <= m; i++) {
			for (int u = 1; u <= k; u++) {
				if (a[u] == b[i]) {
                    break;
				}
				if ((u == k) && a[u] != b[i]){
					c[x] = b[i];
                    x++;
				}
            }
        }
		cout << "Объединение множеств:" << "\n";
		for (int u = 1; u < x; u++) {
			cout << c[u] << " ";
		}
	}
	if (f == 1) {
		for (int i = 1; i <= m; i++) {
			for (int u = 1; u <= k; u++) {
				if (a[u] == b[i]) {
					c[h] = b[i];
					h++;
				}
			}
		}
		cout << "Пересечение множеств" << "\n";
		for (int u = 1; u < h; u++) {
			cout << c[u] << " ";
		}
	}
	  getch();
}




