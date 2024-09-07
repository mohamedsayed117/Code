bhb#include <iostream>
#include <conio.h>
using namespace std;


class heapsort
{
public:
    void heapify(int arr[], int N, int i)
    {
        int largest = i;
        int l = 2 * i + 1;
        int r = 2 * i + 2;

        if (l<N && arr[l]>arr[largest])
        {
            largest = l;
        }
        if (r<N && arr[r]>arr[largest]) {
            largest = r;
        }

        if (largest != i)
        {
            swap(arr[i], arr[largest]);
            heapify(arr, N, largest);
        }

    }
    void heapSort(int arr[], int N)
    {

        for (int i = N / 2 - 1; i >= 0; i--)
        {
            heapify(arr, N, i);
        }
        for (int i = N - 1; i > 0; i--)
        {
            swap(arr[0], arr[i]);
            heapify(arr, i, 0);
        }

    }
    void printArray(int arr[], int N)
    {
        cout << "[";
        for (int i = 0; i < N; ++i)
            cout << arr[i] << ",";
        cout << "]";
        cout << "\n";
    }
    void run_of_heapalgorithm() {

        heapsort H;
        int n;
        cout << "enter the size of element: ";
        cin >> n;
        int* arr = new int[n];    // define the array using pointer ( user enter the size of array )
        cout << "enter the value:\n";
        for (int i = 0; i < n; i++)  // the for loop 
        {
            cout << i << ": ";
            cin >> arr[i];
            cout << endl;
        }
        H.heapSort(arr, n);
        cout << "Sorted array is \n";
        H.printArray(arr, n);
        delete[] arr;
    }
    void example()
    {
        cout << "\nstep 1:Build complete binary tree from given array\n" << endl;
        cout << "                                         [4] " << endl;
        cout << "                                          ^     \n  ";
        cout << "arr = {4,10,3,5,1}  ----------->    [10] [3]" << endl;
        cout << "                                       ^\n";
        cout << "                                    [5] [1] \n" << endl;
        cout << "* To transform a heap into a max-heap, the parent node should always be greater than or equal to the child nodes\n* Here, in this example, as the parent node 4 is smaller than the child node 10, thus, swap them to build a max - heap.\n* Now, 4 as a parent is smaller than the child 5, thus swap both of these again and the resulted heap and array should be like this:\n";
        cout << "\nstep 2:Max-Heapify constructed binary tree\n\n";
        cout << "  Swap       [4]                          [10]                        [10]\n";
        cout << " (10>4)       ^                             ^                           ^\n";
        cout << "          [10] [3]   ----->      Swap    [4] [3]     ----->          [5] [3]\n";
        cout << "            ^                    (5>4)    ^                           ^\n";
        cout << "         [5] [1]                       [5] [1]                     [4] [1]\n";
        cout << "\n       Max-Heapify                    Max-Heapify               Finl tree after";
        cout << "\n           Root                     non - leaf node               Max-Heapify\n";
        cout << "\n* Delete the root element (10) from the max heap. In order to delete this node, try to swap it with the last node, i.e. (1). After removing the root element, again heapify it to convert it into max heap\n* Resulted heap and array should look like this";
        cout << "\n\nstep 3:Remove maximum from root and max heapify\n\n";
        cout << "            [10]                           [1]                         [5]\n";
        cout << "              ^                             ^                           ^\n";
        cout << "           [5] [3]   ----->              [5] [3]     ----->          [4] [3]\n";
        cout << "            ^                             ^                           ^\n";
        cout << "         [4] [1]                       [4]                         [1]    \n";
        cout << "     Remove max element (10)     shift leaf to the place        max heapify\n";
        cout << " insert at the end of final array     of removed element     the remaining tree\n";
        cout << "\n* Repeat the above steps.";
        cout << "\n* Now when the root is removed once again it is sorted. and the sorted array will be like arr[] = {1, 3, 4, 5, 10}\n";
    }
    void code()
    {
        cout << "\nvoid heapify(int arr[], int N, int i) {\n";
        cout << "            int largest = i\n            int l = 2 * i + 1;\n            int r = 2 * i + 2;\n            if (l<N && arr[l]>arr[largest]) {\n                largest = l; }\n            if (r<N && arr[r]>arr[largest]) {\n                largest = r; }\n            if (largest != i) {\n                swap(arr[i], arr[largest]);\n                heapify(arr, N, largest); }\n }\n";
        cout << "\nvoid heapSort(int arr[], int N) {\n            for (int i = N / 2 - 1; i >= 0; i--) {\n                heapify(arr, N, i) }\n            for (int i = N - 1; i > 0; i--) {\n                swap(arr[0], arr[i]);\n                heapify(arr, i, 0); }\n }\n";
        cout << "\nvoid printArray(int arr[], int N) {\n            cout << '['; \n            for (int i = 0; i < N; ++i)\n                cout << arr[i] << ', ''; \n            cout << ']'; \n            cout << 'endl';\n }\n";
    }
};
class bubblesort
{
public:
    void bubble_sort(int arr[], int n)
    {
        int i, j;
        bool swapped;
        for (i = 0; i < n - 1; i++)
        {
            swapped = false;
            for (j = 0; j < n - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    swap(arr[j], arr[j + 1]);
                    swapped = true;
                }
            }
            if (swapped == false) {
                break;
            }
        }
    }
    void printarray(int arr[], int n)
    {
        cout << "[";
        for (int i = 0; i < n; ++i)
            cout << arr[i] << ",";
        cout << "]";
        cout << "\n";
    }
    void example()
    {
        cout << "\nIn Bubble Sort algorithm,\n* traverse from left and compare adjacent elements and the higher one is placed at right side.\n* In this way, the largest element is moved to the rightmost end at first.\n* This process is then continued to find the second largest and place it and so on until the data is sorted\n";
        cout << "\n\nInput: arr[] = {6, 0, 3, 5}" << endl;
        cout << "\nFirst step: \nThe largest element is placed in its correct position, i.e., the end of the array.\n\n";
        cout << "_" << endl;
        cout << "|6|0|3|5|" << "     6>0  yes       swap(arr[0], arr[1])" << endl;
        cout << "_" << endl;
        cout << "|0|6|3|5|" << "     6>3  yes       swap(arr[1], arr[2])" << endl;
        cout << "_" << endl;
        cout << "|0|3|6|5|" << "     6>5  yes       swap(arr[2], arr[3])" << endl;
        cout << "_" << endl;
        cout << "|0|3|5|6|" << "                    6 sorted" << endl;
        cout << "\nSecond step: \nPlace the second largest element at correct position\n\n";
        cout << "_" << endl;
        cout << "|0|3|5|6|" << "     0>3  No        No swap" << endl;
        cout << "_" << endl;
        cout << "|0|3|5|6|" << "     3>5  No        No swap" << endl;
        cout << "_" << endl;
        cout << "|0|3|5|6|" << "                 5,6 sorted" << endl;
        cout << "\nThird step:  \nPlace the remaining two elements at their correct positions.\n\n";
        cout << "_" << endl;
        cout << "|0|3|5|6|" << "     0>3  No        No swap" << endl;
        cout << "\nsorted array is: " << endl;
        cout << "_" << endl;
        cout << "|0|3|5|6|" << "\n\n";

    }
    void code()
    {
        cout << "        void bubble_sort(int arr[], int n) {\n            int i, j;\n            bool swapped;\n            for (i = 0; i < n - 1; i++) {\n                swapped = false;\n                for (j = 0; j < n - 1; j++) {\n                    if (arr[j] > arr[j + 1]) {\n                        swap(arr[j], arr[j + 1]);\n                        swapped = true; }\n                }\n                if (swapped == false) {\n                    break; }\n            }\n        }\n";
        cout << "\nvoid printArray(int arr[], int N) {\n            cout << '['; \n            for (int i = 0; i < N; ++i)\n                cout << arr[i] << ', ''; \n            cout << ']'; \n            cout << 'endl';\n }\n";
    }
    void runalgorithm()
    {
        bubblesort B;
        int n;
        cout << "enter the size of element: ";
        cin >> n;
        int* arr = new int[n];    // define the array using pointer ( user enter the size of array )
        cout << "enter the value:\n";
        for (int i = 0; i < n; i++)  // the for loop 
        {
            cout << i << ": ";
            cin >> arr[i];
            cout << endl;
        }
        B.bubble_sort(arr, n);
        cout << "Sorted array is \n";
        B.printarray(arr, n);
        delete[] arr;
    }
};
class binarysearch
{
public:
    int binarySearch(int arr[], int low, int high, int x)
    {
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] == x)
                return mid;

            if (arr[mid] < x)
                low = mid + 1;

            else
                high = mid - 1;
        }

        return -1;
    }
    void example()
    {
        cout << "\ninput:   arr{2,5,8,12,16,23,38,56,72,91}\n\n";
        cout << "" << endl;
        cout << "|2|5|8|12|(16)|23|38|56|72|91|" << endl;
        cout << "\nsearch 23      mid=(0+9)/2=4      23>16  yes   using write array\n";
        cout << "" << endl;
        cout << "|2|5|8|12|16|23|38|(56)|72|91|" << endl;
        cout << "\nsearch 23      mid=(5+9)/2=7      23<56  NO    using left array\n";
        cout << "" << endl;
        cout << "|2|5|8|12|16|(23)|38|56|72|91|" << endl;
        cout << "\nsearch 23      mid=(5+6)/2=5     arr[5]=23 yes found 23 of index 5 \n\n";

    }
    void code()
    {

    }
    void runalgorithm()
    {
        bubblesort B;
        int n;
        cout << "enter the size of element: ";
        cin >> n;
        int* arr = new int[n];    // define the array using pointer ( user enter the size of array )
        cout << "enter the value:\n";
        for (int i = 0; i < n; i++)
        {
            cout << i << ": ";
            cin >> arr[i];
            cout << endl;
        }

        B.bubble_sort(arr, n);
        cout << "Sorted array is \n";
        B.printarray(arr, n);

        int value;
        cout << "\nenter the value: ";
        cin >> value;
        int result = binarySearch(arr, 0, n - 1, value);
        if (result == -1)
        {
            cout << "the value not found" << endl;
        }
        else
        {
            cout << "the value wont be search: " << value << endl;
            cout << "the index of value: " << result << endl;
        }
    }
};

void main()
{
    string a = "no";
    while (a == "no")
    {
        int number_of_algorithm, n;
        cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> chose the algorithm <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << endl;
        cout << "( 1 )>> Heap_sort <<" << endl;
        cout << "( 2 )>> Bubble_sort <<" << endl;
        cout << "( 3 )>> Binary_search <<" << endl;
        cout << "( 4 )>> Exit <<" << endl;
        cout << "enter the number of algorithm: ";
        cin >> number_of_algorithm;
        if (number_of_algorithm == 1)
        {
            cout << "( 1 )>> start <<" << endl;
            cout << "( 2 )>> example <<" << endl;
            cout << "( 3 )>> code <<" << endl;
            cout << "( 4 )>> back <<" << endl;
            cout << "enter the number: ";
            cin >> n;
            if (n == 1)
            {
                a = "yes";
                while (a == "yes")
                {
                    heapsort H;
                    H.run_of_heapalgorithm();
                    cout << "you wont again: yes OR no\n ";
                    cin >> a;
 
                }
            }
            if (n == 2)
            {
                heapsort H;
                H.example();
            }
            if (n == 3)
            {
                heapsort H;
                H.code();
            }
        }
        if (number_of_algorithm == 2)
        {
            cout << "( 1 )>> start <<" << endl;
            cout << "( 2 )>> example <<" << endl;
            cout << "( 3 )>> code <<" << endl;
            cout << "( 4 )>> back <<" << endl;
            cout << "enter the number: ";
            cin >> n;
            if (n == 1)
            {
                a = "yes";
                while (a == "yes")
                {
                    bubblesort B;
                    B.runalgorithm();
                    cout << "you wont again: yes OR no \n";
                    cin >> a;

                }
            }
            if (n == 2)
            {
                bubblesort B;
                B.example();
            }
            if (n == 3)
            {
                bubblesort B;
                B.code();
            }
        }
        if (number_of_algorithm == 3)
        {
            cout << "( 1 )>> start <<" << endl;
            cout << "( 2 )>> example <<" << endl;
            cout << "( 3 )>> code <<" << endl;
            cout << "( 3 )>> back <<" << endl;
            cout << "enter the number: ";
            cin >> n;
            if (n == 1)
            {
                a = "yes";
                while (a == "yes")
                {
                    binarysearch B;
                    B.runalgorithm();
                    cout << "you wont again: yes OR no \n";
                    cin >> a;
                }
            }
            if (n == 2) {
                binarysearch B;
                B.example();
            }
            if (n == 3)
            {
                binarysearch B;
                B.code();
            }
        }
        if (number_of_algorithm == 4)
        {
            a = "Exit";
        }
    }


    system("pause");
}