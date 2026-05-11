//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	//const int rows = 2;
//	//const int cols = 3;
//
//	//int matrix[rows][cols] = {
//	//	{2,3,4},
//	//	{5,6,7}
//	//};
//
//	//for (int i = 0; i < rows; i++) {
//	//	for (int j = 0; j < cols; j++) {
//	//		cout << matrix[i][j] << ' ';
//	//	}
//
//	//}
//    const int size1 = 2;
//    const int size2 = 3;
//    const int size3 = 2;
//    const int size4 = 2;
//
//    int arr4d[size1][size2][size3][size4] = {
//        {
//          {
//              {10, 12},
//              {-2, 5}
//          },
//          {
//             {3, 1},
//                {-2, 8}
//          },
//          {
//                {15, 21},
//                {-2, 56}
//          }
//     },
//      {
//         {
//             {10, 12},
//             {-2, 5}
//         },
//         {
//             {3, 1},
//             {-2, 8}
//         },
//         {
//             {15, 21},
//                {-2, 56}
//          }
//        }
//    };
//    for (int i = 0; i < size1; i++) {
//        cout << '\n' << i + 1 << ':';
//        for (int j = 0; j < size2; j++) {
//            cout << '\n' << '\t' << j + 1 << ':' << '\n' ;
//            for (int x = 0; x < size3;x++) {
//                cout << '\t' << ' ';
//                for (int c = 0; c < size4; c++) {
//                    cout << arr4d[i][j][x][c] << ' ';
//                }
//            }
//        }
//    }
//}
