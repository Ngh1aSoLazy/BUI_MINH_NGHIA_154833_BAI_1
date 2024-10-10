#include<iostream>

using namespace std;
/*
Yêu cầu bài toán: Nhập vào n đối tượng có màu đỏ (red), trắng (white) và xanh (blue), 
sắp xếp theo trật tự như sau: các đối tượng cùng mầu nằm kế tiếp nhau và theo thứ tự đỏ, trắng, xanh.
Input {xanh, đỏ, xanh, đỏ, đỏ, trắng, đỏ, xanh, trắng}
Output {đỏ, đỏ, đỏ, đỏ, trắng, trắng, xanh, xanh, xanh}
*/

// Ham sap xep va in ra ket qua
void SORT(int arr[], int n)
{
	// Thuat toan sap xep bublle sort
	int a = 0; // Bien tam de luu gia tri cua phan tu mang khi doi cho 
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				a = arr[i];
				arr[i] = arr[j];
				arr[j] = a;
			}
		}
	}

	// In ra ket qua 
	cout << "OUTPUT: {";
	for (int i = 0; i < n - 1; i++)
	{
		cout << arr[i] << ", ";
	}
	cout << arr[n - 1];
	cout << "}";
}

int main()
{
	// In ra man hinh huong dan nhap INPUT
	cout << "Nhap cac mau do, trang, xanh theo quy tac sau:" << endl;
	cout << "Do: 0" << endl << "Trang: 1" << endl << "xanh: 2" << endl;

	// Nhap kich thuoc mang
	int n; // Khai bao bien luu gia tri kich thuoc mang
	cin >> n;
	
	// Nhap phan tu mang
	int* arr = new int[n]; // Khai bao mang dong luu cac phan tu mang

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	// Goi ham sap xep va in ra ket qua
	SORT(arr, n);

	delete[] arr;

	return 0;
}