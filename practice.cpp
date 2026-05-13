//#include <iostream>
//
//using namespace std;
//
//int main()
//{
    //task 1
    /*
    int d2array[3][3] = {
     {1,2,3},
     {4,5,6},
     {7,8,9}
    };
    int sum = 0;
    int min = d2array[0][0],
        max = d2array[0][0];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {

            sum += d2array[i][j];

            if (min > d2array[i][j])
                min = d2array[i][j];
            if (max < d2array[i][j])
                max = d2array[i][j];
        }
    }
    int Arithmetic = sum / 9;
    cout << "Sum: " << sum << '\n';
    cout << "Arithmetic: " << Arithmetic << '\n';
    cout << "Minimal num: " << min << '\n';
    cout << "Maximal num: " << max;
    */

    //task 2
    /*
    const int rows = 3;
    const int cols = 4;
    int d2array[rows][cols] = {
        {3,5,6,7},
        {12,1,1,1},
        {0,7,12,1}
      };

    int colsSum[cols] = { 0 };
    
    int totalSum = 0;


    for (int i = 0; i < rows; i++) {
        int rowSum = 0;

        for (int j = 0; j < cols; j++) {
            cout << d2array[i][j] << '\t';


            rowSum += d2array[i][j];
            colsSum[j] += d2array[i][j];
            totalSum += d2array[i][j];
        }
        cout << "| " << rowSum << endl;
    }
    cout << "-------------------------------------" << endl;

    for (int j = 0; j < cols; j++) {
        cout << colsSum[j] << '\t';
    }
    cout << "| " << totalSum << endl;
    */
    //task 3 
//     const int ROWS = 5;
//     const int COLS1 = 10;
//     const int COLS2 = 5;
//
//     int a[ROWS][COLS1];
//     int b[ROWS][COLS2];
//
//     srand(time(0));
//     for (int i = 0; i < ROWS; i++) {
//         for (int j = 0; j < COLS1; j++) {
//                a[i][j] = rand() % 51;
//          }
//     }
//        for (int i = 0; i < ROWS; i++) {
//            for (int j = 0; j < COLS2; j++) {
//                b[i][j] = a[i][2 * j] + a[i][2 * j + 1];
//            }
//        }
//
//      cout << "first array:\n";
//      for (int i = 0; i < ROWS; i++) {
//          for (int j = 0; j < COLS1; j++) {
//              cout << a[i][j] << "\t";
//          }
//          cout << endl;
//      }  
//
//      cout << "second array:\n";
//      for (int i = 0; i < ROWS; i++) {
//          for (int j = 0; j < COLS2; j++) {
//              cout << b[i][j] << "\t";
//          }
//          cout << endl;
//      }  
//
//}
