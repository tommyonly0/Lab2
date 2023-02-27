#include <iostream>
using namespace std;
int main()
{
	int arr_3d[3][3];
	int count,sum = 0,sum1 = 0 ,sum2 = 0,sum3 = 0,sum4 = 0,sum5 = 0;
	for (int row = 0; row < 3; row++)
	{
		for (int col = 0; col < 3; col++)
		{
			cin >> arr_3d[row][col];
			switch (row)
			{
			case 0:
				count = arr_3d[row][col];
				sum = sum + count;
				break;
			case 1:
				count = arr_3d[row][col];
				sum1 = sum1 + count;
				break;
			case 2:
				count = arr_3d[row][col];
				sum2 = sum2 + count;
				break;
			default:
				break;
			}
			switch (col)
			{
			case 0:
				count = arr_3d[row][col];
				sum3 = sum3 + count;
				break;
			case 1:
				count = arr_3d[row][col];
				sum4 = sum4 + count;
				break;
			case 2:
				count = arr_3d[row][col];
				sum5 = sum5 + count;
				break;
			default:
				break;
			}
		}
	}
	int sum6,sum7;
	sum6 = arr_3d[0][2]+arr_3d[1][1]+arr_3d[2][0];
	sum7 = arr_3d[0][0]+arr_3d[1][1]+arr_3d[2][2];
	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 3; y++)
		{
			cout << arr_3d[x][y] << "  ";
		}
		cout << endl;
	}

	cout << sum << endl << sum1 << endl << sum2 << endl << sum3 << endl << sum4 << endl << sum5 << endl;
	cout << sum6 << endl << sum7 << endl;
	
	if ((sum=sum1)&&(sum1=sum2)&&(sum2=sum3)&&(sum3=sum4)&&(sum4=sum5)&&(sum5=sum6)&&(sum6=sum7)) cout << "Lo Shu Magic Square!!";
}