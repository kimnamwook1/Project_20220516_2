#include <iostream>
#include "Image.h"
#include <vector> // 크기가 바뀌는 배열

using namespace std;

int main()
{
	std::vector<Image> ImageList; // <> 사이에 int float e등 사용할 형식만 넣어주면 됨.

	Image Temp;
	Temp.X = 0;
	Temp.Y = 0;
	Temp.R = 165;
	Temp.G = 55;
	Temp.B = 128;

	ImageList.push_back(Temp); // List에 추가하겠다.

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