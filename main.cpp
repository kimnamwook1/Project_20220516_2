#include <iostream>
#include "Image.h"
#include <vector> // ũ�Ⱑ �ٲ�� �迭

using namespace std;

int main()
{
	std::vector<Image> ImageList; // <> ���̿� int float e�� ����� ���ĸ� �־��ָ� ��.

	Image Temp;
	Temp.X = 0;
	Temp.Y = 0;
	Temp.R = 165;
	Temp.G = 55;
	Temp.B = 128;

	ImageList.push_back(Temp); // List�� �߰��ϰڴ�.

	cout << ImageList.size() << endl;

	Temp.X = 0;
	Temp.Y = 1;
	Temp.R = 133;
	Temp.G = 82;
	Temp.B = 182;
	ImageList.push_back(Temp);
	cout << ImageList.size() << endl;

		return 0;
}