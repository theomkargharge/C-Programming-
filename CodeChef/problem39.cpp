// // #include <iostream>
// // using namespace std;
// // void ExpiringBread(void)
// // {
// //     int bread, days, count;
// //     cin >> bread >> days >> count;
// //     for (int i = 0; i < days; i--)
// //     {
// //     //    i  = bread - count;
// //         if(bread/( days * count)!=0){
// //             cout<<"NO"<<endl;
// //             break;
// //         }

       
// //         else{
// //             cout<<"Yes"<<endl;
// //             break;
// //         }
// //         /* code */
// //     }
    


// //     // if (bread == days)
// //     // {
// //     //     cout << "Yes" << endl;
// //     // }
// //     // else if (days < expire)
// //     // {
// //     //     cout << "Yes" << endl;
// //     // }
// //     // else
// //     // {
// //     //     cout << "NO" << endl;
// //     // }
// // }
// // int main()
// // {
// //     // write code from here
// //     int t;
// //     cin >> t;
// //     while (t--)
// //     {
// //         ExpiringBread();
// //     }

// //     return 0;
// // }

// #include <iostream>
// using namespace std;
// class Solution
// {
//     public:
//     //Function to reverse words in a given string.
//     string reverseWords(string s) 
//     { 
            

//     vector<string>vs;
//     string ans,temp;
//    for(int i=0;i<s.size();i++)
//    {
//        if(s[i]!='.')
//        temp+=s[i];
//        else
//        {
//            vs.push_back(temp);
//            temp.clear();
           
//        }
//    }
//    vs.push_back(temp);
//          for(int i=vs.size()-1;i>=0;i--)
//          {
//              ans+=vs[i];
//              if(i!=0)
//                 ans+='.';
//          }
//          return ans;
       
// } 
    
// };

// int main() {
// //write code from here 


//       return 0;
// }
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
            

    vector<string>vs;
    string ans,temp;
   for(int i=0;i<s.size();i++)
   {
       if(s[i]=='.')
       temp+=s[i];
       else
       {
           vs.push_back(temp);
           temp.clear();
           
       }
   }
   vs.push_back(temp);
         for(int i=vs.size()-1;i>=0;i--)
         {
             ans+=vs[i];
             if(i!=0)
                ans+='.';
         }
         return ans;
       
} 
    
};
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends