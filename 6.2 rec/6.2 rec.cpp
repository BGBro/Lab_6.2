#include <iostream>
#include <vector>

using namespace std;

vector<int> m_count(vector<int> a, int n)// обчислює непарні
{
	static vector<int> count(1, 0);
	if (n < size(a))
	{
		if (a[n] % 2 == 1)
		{
			count[0] += 1;
		}
		return m_count(a, n + 1);
	}
	else
	{
		return count;
	}
}

void m_out(vector<int> a, int n)// виводить
{
	if (n < size(a))
	{
		cout << a[n] << " ";
		return m_out(a, n + 1);
	}
	else
	{
		cout << endl;
	}
}

vector<int> m_fill(vector<int> a, int n)// заповняє
{
	int i;
	if (n < size(a))
	{
		cin >> i;
		a[n] = i;
		return m_fill(a, n + 1);
	}
	else 
	{
		return a;
	}
}

vector<int> m_creation()// створює
{
	int n;
	cin >> n;
	vector<int> a(n, 0);

	return a;
}

int main()
{
	vector<int> a;
	a = m_fill(m_creation(), 0); //створення та наповнення масиву
	m_out(a, 0); // вивід масиву
	m_out(m_count(a, 0), 0); // вивід числа непарних
	system("pause");
}
