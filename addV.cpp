#include "addV.h"

int AddVertex(int chart[][100], int length)
{
	int n, num, m;
	num = length;
	cout << "��ǰ�ڵ���ĿΪ��" << num << endl;
	n = num;
	chart[num][num] = 0;
	while (num) {
	loop:
		cout << "�������½ڵ���ڵ�" << num << "�ľ��루����ֵ����0��������������100����" << endl;
		cin >> m;
		if (m == 0) { cout << "�������" << endl; goto loop; }
		else {
			--num;
			chart[n][num] = m;
			chart[num][n] = chart[n][num];
		}
	}
	length = length + 1;
	return length;
}