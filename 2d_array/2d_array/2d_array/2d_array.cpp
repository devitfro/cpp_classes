#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

int main()
{
    srand(time(0));
    // task 1
    // ��� ��������� ������ ������������ �, ����������� ���������� ������� �� ��������� �� 0 �� 20. ���������� ����� ��������� �������, ������� ��������������, ����������� � ������������ �������.
    const int width = 3;
    const int height = 5;
    int arr[width][height];
    int sum = 0;
    int elementCount = 0;
    int minElem, maxElem;

    for (int i = 0; i < width; i++) {
        for (int j = 0; j < height; j++) {
            arr[i][j] = rand() % 21;
        }
    }

    minElem = arr[0][0];
    maxElem = arr[width - 1][height - 1];

    for (int i = 0; i < width; i++) {
        for (int j = 0; j < height; j++) {
            elementCount++;
            sum += arr[i][j];
            if (arr[i][j] < minElem) {
                minElem = arr[i][j];
            }
            if (arr[i][j] > maxElem) {
                maxElem = arr[i][j];
            }

        }
    }

    for (int i = 0; i < width; i++) {
        for (int j = 0; j < height; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    float avg = static_cast<float>(sum) / elementCount;

    cout << fixed << setprecision(2);

    cout << "Sum of elem = " << sum << "\n";
    cout << "Count elem = " << elementCount << "\n";
    cout << "AVG = " << avg << "\n";
    cout << "Min element = " << minElem << "\n";
    cout << "Max element = " << maxElem << "\n";

    // task 2
    // ��� ��������� ������ ������������ �, ����������� ���������� ������� �� ��������� �� 0 �� 20. ���������� ����� ���������, ������������� �� ������� ���������, � ����� ����� ���������, ������������� �� �������� ���������.
    const int x = 5;
    int arr[x][x];
    int mainSum = 0;
    int notMainSum = 0;

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            arr[i][j] = rand() % 21;
        }
    }

    for (int i = 0; i < x; i++) {
        mainSum += arr[i][i];
        notMainSum += arr[i][x - 1 - i];
    }

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "Sum of main diagonal elements = " << mainSum << "\n";
    cout << "Sum of secondary diagonal elements = " << notMainSum << "\n";

    // task 3
    // ��� ��������� ������ ������������ �, ����������� ���������� ������� �� ��������� �� - 10 �� 10. ���������� ���������� �������������, ������������� � ������� ���������.
    const int x = 5;
    int arr[x][x];
    int positiveElemCount = 0;
    int negativeElemCount = 0;
    int zeroElemCount = 0;

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            arr[i][j] = rand() % 21 - 10;
        }
    }

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            if (arr[i][j] == 0) {
                zeroElemCount++;
            }
            else if (arr[i][j] > 0) {
                positiveElemCount++;
            }
            else {
                negativeElemCount++;
            }
        }
    }

    cout << "Positive elements = " << positiveElemCount << "\n";
    cout << "Negative elements = " << negativeElemCount << "\n";
    cout << "Zero elements = " << zeroElemCount << "\n";

    // task 4
    // � ��������� ������� ����������� x �������� ������� ������ ������ � ���������.
    const int x = 5;
    int arr[x][x];
 
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            arr[i][j] = rand() % 21;
        }
    }

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\n";

    for (int i = 0; i < x - 1; i += 2) {
        for (int j = 0; j < x; j++) { 
            int temp = arr[i][j];
            arr[i][j] = arr[i + 1][j];
            arr[i + 1][j] = temp;
        }
    }

    cout << "After change:" << "\n";

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    // task 5
    // ����������� �������������� ���������� ������� � ����������, � ��������.
    const int width = 5;
    const int height = 3;
    int arr[width][height];
    const int size = width * height;

    for (int i = 0; i < width; i++) {
        for (int j = 0; j < height; j++) {
            arr[i][j] = rand() % 21;
        }
    }

    for (int i = 0; i < width; i++) {
        for (int j = 0; j < height; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\n";

    int oneArr[size];
    for (int i = 0; i < width; i++) {
        for (int j = 0; j < height; j++) {
            oneArr[i * height + j] = arr[i][j];
        }
    }

    cout << "1D Array:\n";

    for (int i = 0; i < size; i++) {
        cout << oneArr[i] << " ";
    }

    cout << "\n";
    cout << "\n";

    int newArr[width][height];
    for (int i = 0; i < width; i++) {
        for (int j = 0; j < height; j++) {
            newArr[i][j] = oneArr[i * height + j];
        }
    }

    cout << "Converted back to 2D Array:\n";

    for (int i = 0; i < width; i++) {
        for (int j = 0; j < height; j++) {
            cout << newArr[i][j] << " ";
        }
        cout << "\n";
    }

    // task 6
    // ������� ������ ������������, ����������� ���������� �������.������� �� ����� ������, ��� ������� ������� �������������� ��������� ����������� ���������� �� �������� ��������������� �������� ��� ���� ��������� �������.
    const int width = 5;
    const int height = 3;
    int arr[width][height];
    int elemCount = 0;
    int elemSum = 0;

    int sumRowsMax = 0;

    for (int i = 0; i < width; i++) {
        for (int j = 0; j < height; j++) {
            arr[i][j] = rand() % 21;
            elemCount++;
            elemSum += arr[i][j];
        }
    }
    float avg = static_cast<float>(elemSum) / elemCount;

    float maxDifference = 0;
    int rowWithMaxDifference = -1;

    for (int i = 0; i < width; i++) {
        int rowSum = 0;
        for (int j = 0; j < height; j++) {
            rowSum += arr[i][j];
        }
        float rowAvg = static_cast<float>(rowSum) / height;
        float difference = fabs(rowAvg - avg); // ���������� ����������

        if (difference > maxDifference) {
            maxDifference = difference;
            rowWithMaxDifference = i;
        }
    }

    cout << "Array:\n";
    for (int i = 0; i < width; i++) {
        for (int j = 0; j < height; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    cout << fixed << setprecision(2);
    cout << "Sum of elements = " << elemSum << "\n";
    cout << "Count of elements = " << elemCount << "\n";
    cout << "Avg = " << avg << "\n";

    if (rowWithMaxDifference != -1) {
        cout << "Row with max diff - " << rowWithMaxDifference << " ";
        for (int j = 0; j < height; j++) {
            cout << arr[rowWithMaxDifference][j] << " ";
        }
        cout << "\n";
    }

    // task 7
    const int width = 5;
    const int height = 3;
    int arr[width][height];
    int num = 1;

    for (int i = 0; i < width; i++) {
        for (int j = 0; j < height; j++) {
            arr[i][j] = num;
            num += 1;
        }
    }

    for (int i = 0; i < width; i++) {
        for (int j = 0; j < height; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    // task 8
    const int width = 5;
    const int height = 3;
    int arr[width][height];
    int num = 1;

    for (int i = 0; i < width; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < height; j++) {
                arr[i][j] = num++;
            }
        }
        else {
            for (int j = height - 1; j >= 0; j--) {
                arr[i][j] = num++;
            }
        }
    }

    for (int i = 0; i < width; i++) {
        for (int j = 0; j < height; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;  
}


