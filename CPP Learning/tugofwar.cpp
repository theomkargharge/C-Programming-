// // #include <iostream>
// // using namespace std;
// // int main(){
   
// //     // Declare n as number of people in picnic in two team
// //     int t;
// //     cin >> t;
// //     while(t--){
// //     int n, n1,n2,st,d;
// //     cin >> n1;
// //     cin>>n2;
// //     cin >>st;
// //     d = n1+n2 ;
// //     if(d == st){
        

// //         cout<<d<<" "<<st;
       
// //     }

// //     else if(d!= st){
// //         if(d < st){
// //         cout<<d<<" "<<st;

// //         }else{
// //             cout <<st<<" "<<d;
// //         }
// //     }

// //     return 0;
 
// // }
// // }
// #include <bits/stdc++.h>
// using namespace std;

// // function that tries every possible solution by calling itself recursively
// void TOWUtil(int* arr, int n, bool* curr_elements, int no_of_selected_elements,
// 			bool* soln, int* min_diff, int sum, int curr_sum, int curr_position)
// {
// 	// checks whether the it is going out of bound
// 	if (curr_position == n)
// 		return;

// 	// checks that the numbers of elements left are not less than the
// 	// number of elements required to form the solution
// 	if ((n/2 - no_of_selected_elements) > (n - curr_position))
// 		return;

// 	// consider the cases when current element is not included in the solution
// 	TOWUtil(arr, n, curr_elements, no_of_selected_elements,
// 			soln, min_diff, sum, curr_sum, curr_position+1);

// 	// add the current element to the solution
// 	no_of_selected_elements++;
// 	curr_sum = curr_sum + arr[curr_position];
// 	curr_elements[curr_position] = true;

// 	// checks if a solution is formed
// 	if (no_of_selected_elements == n/2)
// 	{
// 		// checks if the solution formed is better than the best solution so far
// 		if (abs(sum/2 - curr_sum) < *min_diff)
// 		{
// 			*min_diff = abs(sum/2 - curr_sum);
// 			for (int i = 0; i<n; i++)
// 				soln[i] = curr_elements[i];
// 		}
// 	}
// 	else
// 	{
// 		// consider the cases where current element is included in the solution
// 		TOWUtil(arr, n, curr_elements, no_of_selected_elements, soln,
// 				min_diff, sum, curr_sum, curr_position+1);
// 	}

// 	// removes current element before returning to the caller of this function
// 	curr_elements[curr_position] = false;
// }

// // main function that generate an arr
// void tugOfWar(int *arr, int n)
// {
// 	// the boolean array that contains the inclusion and exclusion of an element
// 	// in current set. The number excluded automatically form the other set
// 	bool* curr_elements = new bool[n];

// 	// The inclusion/exclusion array for final solution
// 	bool* soln = new bool[n];

// 	int min_diff = INT_MAX;

// 	int sum = 0;
// 	for (int i=0; i<n; i++)
// 	{
// 		sum += arr[i];
// 		curr_elements[i] = soln[i] = false;
// 	}

// 	// Find the solution using recursive function TOWUtil()
// 	TOWUtil(arr, n, curr_elements, 0, soln, &min_diff, sum, 0, 0);

// 	// Print the solution
// 	cout << "The first subset is: ";
// 	for (int i=0; i<n; i++)
// 	{
// 		if (soln[i] == true)
// 			cout << arr[i] << " ";
// 	}
// 	cout << "\nThe second subset is: ";
// 	for (int i=0; i<n; i++)
// 	{
// 		if (soln[i] == false)
// 			cout << arr[i] << " ";
// 	}
// }

// // Driver program to test above functions
// int main()
// {
// 	int arr[] = {23, 45, -34, 12, 0, 98, -99, 4, 189, -1, 4};
// 	int n = sizeof(arr)/sizeof(arr[0]);
// 	tugOfWar(arr, n);
// 	return 0;
// }


#include <iostream>
#include <stdlib.h>
#include <limits.h>
using namespace std;
 
void TugofWarRecur(int* array, int n, bool* current_elements, int selected_elements_count,bool* solution, int* min_diff, int sum, int current_sum, int current_position)
{
    
    if (current_position == n)
    {
        return;
    }
    if ((n/2 - selected_elements_count) > (n - current_position))
    {
        return;
    }
 TugofWarRecur(array, n, current_elements, selected_elements_count,solution, min_diff, sum, current_sum, current_position+1);
 
    selected_elements_count++;
    current_sum = current_sum + array[current_position];
    current_elements[current_position] = true;
    if (selected_elements_count == n/2)
    {
        if (abs(sum/2 - current_sum) < *min_diff)
        {
            *min_diff = abs(sum/2 - current_sum);
            for (int i = 0; i<n; i++)
            {
                solution[i] = current_elements[i];
            }
        }
    }  else
    {
        TugofWarRecur(array, n, current_elements, selected_elements_count, solution, min_diff, sum, current_sum, current_position+1);
    }
    current_elements[current_position] = false;
}
 
void TugOfWar(int *array, int n)
{
    bool* current_elements = new bool[n];
    bool* solution = new bool[n];
    int min_diff = INT_MAX;
    int sum = 0;
    for (int i=0; i<n; i++)
    {
        sum =sum + array[i];
        current_elements[i] =  solution[i] = false;
    }
    TugofWarRecur(array, n, current_elements, 0, solution, &min_diff, sum, 0, 0);
    for (int i=0; i<n; i++)
    {
        if(solution[i] == true)
        {
            cout << array[i] << " ";
        }
    }
    cout<<endl;
    for (int i=0; i<n; i++)
    {
        if(solution[i] == false)
        {
            cout << array[i] << " ";
        }
    }
}
