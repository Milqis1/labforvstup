#include <iostream>
#include <Windows.h>

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // ���������� ������ ��� ��� �� ������� �������
    int d, k, a, b, n, l, S;

    // ���������� ����� �� �����������
    std::cout << "������ ���� ����� (���.): ";
    std::cin >> d;

    std::cout << "������ ���� ����� (���.): ";
    std::cin >> k;

    std::cout << "������ ���� ������� (���.): ";
    std::cin >> a;

    std::cout << "������ ���� ������� (���.): ";
    std::cin >> b;

    std::cout << "������ ������� �������: ";
    std::cin >> n;

    std::cout << "������ ������� ����: ";
    std::cin >> l;

    std::cout << "������ ����� ����� (���.): ";
    std::cin >> S;

    // ���������� ������� ������� �� ����
    int total_cost = n * (a * 100 + b) + l * (d * 100 + k);

    // ��������, �� ��������� �����
    if (total_cost <= S * 100) {
        std::cout << "��� ��������� ����� �� ������� ��� ������� �� ����." << std::endl;
    }
    else {
        std::cout << "��� �� ��������� ����� �� ������� ��� ������� �� ����." << std::endl;
    }

    return 0;
}
