#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int a[20], b[20], c[100], k, m, x, f = 0, h = 1;
	system("chcp 1251");

	cout << "������� ���������� ��������� ��������� �" << "\n";
	cin >> k;
	x = k + 1;

	cout << "������� ���������� ��������� ��������� B" << "\n";
	cin >> m;

	cout << "������� ��������� �" << "\n";
	for (int u = 1; u <= k; u++) {
        cin >> a[u];
    }

    cout << "������� ��������� B" << "\n";
	for (int i = 1; i <= m; i++) {
        cin >> b[i];
	}

    cout << "������� �������� ���������� ������� f" << "\n";
	cout << "��� f ������ 0 ����� ������� �������� �����������, ��� f ������ 1 - �����������" << "\n";
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
		cout << "����������� ��������:" << "\n";
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
		cout << "����������� ��������" << "\n";
		for (int u = 1; u < h; u++) {
			cout << c[u] << " ";
		}
	}
	  getch();
}




