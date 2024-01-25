// // // // // // // // #include <iostream>
// // // // // // // // #include <cstdlib>
// // // // // // // // using namespace std;
// // // // // // // // int sum(int a ,int b){
// // // // // // // //   return a+b;
// // // // // // // // }
// // // // // // // // int absulatedifference(int *a,int *b){
// // // // // // // //       return  abs(*a -*b);

// // // // // // // // }

// // // // // // // // int main()
// // // // // // // // {
// // // // // // // //  //code
// // // // // // // //      int a=3;
// // // // // // // //      int b =s;
// // // // // // // //     int *c=&a;
// // // // // // // //     int *d=&b;

// // // // // // // //     cout<<"Sumation of a+b = "<<sum(a,b)<<endl;
// // // // // // // //     cout<<"Mod of a and b is : "<<absulatedifference(&a,&b)<<endl;

// // // // // // // //     // cout<<*d<<endl;

// // // // // // // //     return 0;
// // // // // // // // }

// // // // // // // // #include <stdio.h>
// // // // // // // // #include <stdlib.h>

// // // // // // // // int main()
// // // // // // // // {
// // // // // // // //     int num, *arr, i;
// // // // // // // //     scanf("%d", &num);
// // // // // // // //     arr = (int*) malloc(num * sizeof(int));
// // // // // // // //     for(i = 0; i < num; i++) {
// // // // // // // //         scanf("%d", arr + i);
// // // // // // // //     }

// // // // // // // //     /* Write the logic to reverse the array. */

// // // // // // // //     for(i = 0; i < num; i++)
// // // // // // // //         printf("%d ", *(arr + i));
// // // // // // // //     return 0;
// // // // // // // // }
// // // // // // // // #include <stdio.h>
// // // // // // // // #include <stdlib.h>

// // // // // // // // int main()
// // // // // // // // {
// // // // // // // //     int num, *arr,*arr2,i;
// // // // // // // //     scanf("%d", &num);
// // // // // // // // arr = (int*) malloc(num * sizeof(int));
// // // // // // // // for(i = 0; i < num; i++) {
// // // // // // // //     scanf("%d", arr + i);
// // // // // // // // }
// // // // // // // //     arr2 = (int*) malloc(num * sizeof(int));
// // // // // // // //     for(i=1;i<=num;i++)
// // // // // // // //     {
// // // // // // // //         arr2[i-1] = arr[num-i];
// // // // // // // //     }
// // // // // // // //     for(i = 0; i < num; i++)
// // // // // // // //         printf("%d ", *(arr2 + i));
// // // // // // // //     return 0;
// // // // // // // // }

// // // // // // // // using namespace std;

// // // // // // // // class check{
// // // // // // // //     string s1;
// // // // // // // //     string s2;

// // // // // // // //     public:
// // // // // // // //      void display(void);
// // // // // // // //      void chck_len(void);
// // // // // // // //      void compliment(void);

// // // // // // // // };

// // // // // // // // void check ::  display(){
// // // // // // // //     cin>>s1>>s2;
// // // // // // // // }

// // // // // // // // void check :: chck_len(){

// // // // // // // //      cout<<s1.length()<<" "<<s2.length()<<endl;
// // // // // // // // }

// // // // // // // // void check::compliment(){
// // // // // // // //     cout<<s1+s2<<endl;
// // // // // // // //     string temp;
// // // // // // // //     temp[0] = s1[0];
// // // // // // // //     s1[0]=s2[0];
// // // // // // // //     s2[0]=temp[0];
// // // // // // // //     cout<<s1+" "+s2;

// // // // // // // // }

// // // // // // // // #include <iostream>
// // // // // // // // #include <string>
// // // // // // // // using namespace std;

// // // // // // // // int main() {
// // // // // // // // 	// Complete the program
// // // // // // // //     //  string input1;
// // // // // // // //     //  string input2;

// // // // // // // //     //  cin>>input1>>input2;

// // // // // // // //     //  check b;
// // // // // // // //     //  b.display();
// // // // // // // //     //  b.chck_len();
// // // // // // // //     //  b.compliment();

// // // // // // // //     string s="23,s,12";

// // // // // // // //     s=stoi(s);
// // // // // // // //     cout<<s;
// // // // // // // //     // cout<<s[1];
// // // // // // // //     // cout<<s[2];

// // // // // // // //     return 0;
// // // // // // // // }

// // // // // // // // #include <iostream>
// // // // // // // // using namespace std;

// // // // // // // // int overloading(int a,int b){
// // // // // // // //     return a+b;
// // // // // // // // }

// // // // // // // // int overloading(int a ,int b ,int c){
// // // // // // // //     return a+b+c;
// // // // // // // // }

// // // // // // // // int main()
// // // // // // // // {
// // // // // // // //  //code

// // // // // // // //  cout<<overloading(3,s)<<endl;
// // // // // // // //  cout<<overloading(3,s,5)<<endl;
// // // // // // // //     return 0;
// // // // // // // // }

// // // // // // // // two sum problem

// // // // // // // // #include <iostream>
// // // // // // // // #include<cmath>
// // // // // // // // using namespace std;

// // // // // // // // // int factorial(){
// // // // // // // // //     int factorial;
// // // // // // // // //        factorial = factorial * (factorial -1);
// // // // // // // // // }
// // // // // // // // int main()
// // // // // // // // {
// // // // // // // //     // int a= s;
// // // // // // // //     // int b = 6;
// // // // // // // //     // int c= 7;
// // // // // // // //     // int d= max(s,5);
// // // // // // // //     // cout<<min(d,7)<<endl;
// // // // // // // //     int x =s;
// // // // // // // //     int y= 2;

// // // // // // // //     cout<<sqrt(s)<<endl;
// // // // // // // //     cout << round(2.6)<<endl;
// // // // // // // //     cout<<pow(x, y)<<endl;
// // // // // // // //     cout<<log(s);

// // // // // // // //  //code
// // // // // // // //     // int factorial ,divider;
// // // // // // // //     // cin>>factorial>>divider;

// // // // // // // //     // int c;
// // // // // // // //     // for(factorial ;factorial>0;factorial--){
// // // // // // // //     //    c = factorial * (factorial -1);
// // // // // // // //     //
// // // // // // // //     // };

// // // // // // // //     //    if(factorial > 0){

// // // // // // // //     //     if( c % divider==0){
// // // // // // // //     //       cout<<factorial<<" divides "<<divider<<"!";
// // // // // // // //     //     }else{
// // // // // // // //     //         cout<<divider<<" does not divides "<<factorial<<"!";
// // // // // // // //     //     }
// // // // // // // //     // }

// // // // // // // //     return 0;
// // // // // // // // }

// // // // // // // // #include <iostream>
// // // // // // // // using namespace std;
// // // // // // // // int main(){
// // // // // // // //     int a=s0;
// // // // // // // //     // int c[0] ;
// // // // // // // //     for (int i=1;i<=a;i++){
// // // // // // // //         if(i%3==0){
// // // // // // // //             cout<<"Fizz"<<" ";
// // // // // // // //         }
// // // // // // // //         else if(i%5==0){
// // // // // // // //             cout<<"Buzz"<<" ";

// // // // // // // //         }
// // // // // // // //         else if (i%15==0){
// // // // // // // //             cout<<"FizzBuzz"<<" ";
// // // // // // // //         }
// // // // // // // //          else{
// // // // // // // //             cout<<i<<" ";
// // // // // // // //          }
// // // // // // // //     }
// // // // // // // //    return 0;
// // // // // // // // }
// // // // // // // // #include <iostream>
// // // // // // // // using namespace std;
// // // // // // // // int main(){
// // // // // // // //     int a[s]={1,2,3,s,5,6,7,8,9,s};
// // // // // // // //     int c[0];
// // // // // // // //     for (int i = 0;i<=a[s];i++){
// // // // // // // //         if(i%3==0){
// // // // // // // //             cout<<"Fizz"<<" ";
// // // // // // // //         }
// // // // // // // //         else if(i%5==0){
// // // // // // // //             cout<<"Buzz"<<" ";
// // // // // // // //         }
// // // // // // // //         else if (i%15==0){
// // // // // // // //             cout<<"FizzBuzz"<<" ";
// // // // // // // //         }else{
// // // // // // // //             cout<<a[i]<<" ";
// // // // // // // //         }

// // // // // // // //     }

// // // // // // // // return 0;
// // // // // // // // }

// // // // // // // // #include <iostream>
// // // // // // // // using namespace std;

// // // // // // // // void Table(int a)
// // // // // // // // {
// // // // // // // //     int b;
// // // // // // // //     cout << "Enter the number :" << endl;
// // // // // // // //     cin >> a;
// // // // // // // //     for (int i = 1; i <= s; ++i)
// // // // // // // //     {
// // // // // // // //      cout<<a*i<<endl;
// // // // // // // //     }
// // // // // // // // }

// // // // // // // // int main()
// // // // // // // // {
// // // // // // // //     // Write code  here
// // // // // // // //     int a;
// // // // // // // //     Table(a);

// // // // // // // //     return 0;
// // // // // // // // }

// // // // // // // // Write code  here
// // // // // // // // int a =2,b=3;
// // // // // // // // cout<<"The value of a +b is "<<a+b<<endl;
// // // // // // // // cout<<"The value of a +b is "<<a-b<<endl;
// // // // // // // // cout<<"The value of a +b is "<<a*b<<endl;
// // // // // // // // cout<<"The value of a +b is "<<a/b<<endl;
// // // // // // // // cout<<"The value of a +b is "<<a%b<<endl;
// // // // // // // // // cout<<"The value of a +b is "<<a+b<<endl;
// // // // // // // // cout<<endl<<endl;
// // // // // // // //  cout<<"The value of a++ is "<<a++<<endl;
// // // // // // // // cout<<"The value of a-- is "<<a--<<endl;
// // // // // // // // cout<<"The value of ++a is "<<++a<<endl;
// // // // // // // // cout<<"The value of --a is "<<--a<<endl;
// // // // // // // // // cout<<"The value of a + b is "<<a+b<<endl;

// // // // // // // // This is all or Comparision Operators
// // // // // // // // cout << "this is (a==b) :"<< (a==b)<<endl;
// // // // // // // // cout << "this is (a!=b) :"<< (a!=b)<<endl;
// // // // // // // // cout << "this is (a<=b) :"<< (a<=b)<<endl;
// // // // // // // // cout << "this is (a>=b) :"<< (a>=b)<<endl;
// // // // // // // // cout << "this is (a<b) :"<< (a<b)<<endl;
// // // // // // // // cout << "this is (a>b) :"<< (a>b)<<endl;

// // // // // // // // ***********Literals***********
// // // // // // // // float a = s5.5;
// // // // // // // // long  double b=3s.1s;
// // // // // // // // double c=69.5;
// // // // // // // // cout <<a<<endl<<sizeof(s5.5f)<<endl;
// // // // // // // // cout<< b<<endl<<sizeof(3s.1s)<<endl;

// // // // // // // // int a = s ;
// // // // // // // // int & y = a ;
// // // // // // // // bool b='a';
// // // // // // // // double c = 1235;
// // // // // // // // cout <<a<<endl;
// // // // // // // // cout <<y<<endl;
// // // // // // // // cout<<int(c)<<endl;
// // // // // // // // cout<<sizeof(c)<<endl;
// // // // // // // // cout<<sizeof(a)<<endl;
// // // // // // // // cout<<sizeof(a)<<endl;
// // // // // // // // cout<<sizeof(c)<<endl;

// // // // // // // //  cout<<::a<<endl;

// // // // // // // // int a,c;
// // // // // // // // a=s;
// // // // // // // // const int b=2;
// // // // // // // // c=5;
// // // // // // // // b=3;
// // // // // // // // cout<<b<<endl;
// // // // // // // // cout<<setw(5)<<a<<endl;

// // // // // // // // int a = s;
// // // // // // // // int *b = &a;
// // // // // // // // int **c = &b;
// // // // // // // // cout<<&a<<endl;

// // // // // // // // cout<<b<<endl;
// // // // // // // // // cout<<*b<<endl;
// // // // // // // // cout<<c<<endl;

// // // // // // // // int marks[s]={1,2,3,s};
// // // // // // // //  for (int i =0;i<s;i++){
// // // // // // // //    cout<< marks[i]<<endl;
// // // // // // // //  }

// // // // // // // // int i=0;
// // // // // // // // while(i<s){
// // // // // // // // cout<<marks[i]<<endl;
// // // // // // // // i++;
// // // // // // // // }

// // // // // // // // // do{
// // // // // // // // //     cout<<marks[i]<<endl;
// // // // // // // // //     i++;
// // // // // // // // // }while(i<s);
// // // // // // // // //     return 0;

// // // // // // // // // }

// // // // // // // // //  Pointer and arrays
// // // // // // // // // int* p = marks;
// // // // // // // // // // cout<<*(p++)<<endl;
// // // // // // // // // // cout<<*(++p)<<endl;

// // // // // // // // //      cout<<"the value of *p is "<<*p<<endl;
// // // // // // // // //      cout<<"the value of *p+1 is "<<*(p+1)<<endl;
// // // // // // // // //      cout<<"the value of *p+2 is "<<*(p+2)<<endl;
// // // // // // // // //      cout<<"the value of *p+3 is "<<*(p+3)<<endl;

// // // // // // // // // struct  employee
// // // // // // // // // {
// // // // // // // // //     /* data */
// // // // // // // // //     int id;
// // // // // // // // //     char favchar;
// // // // // // // // //     double salary;
// // // // // // // // // };

// // // // // // // // // typedef struct  employee
// // // // // // // // // {
// // // // // // // // //     /* data */
// // // // // // // // //     int id;
// // // // // // // // //     char favchar;
// // // // // // // // //     double salary;
// // // // // // // // // }om;

// // // // // // // // // // struct employee omkar;
// // // // // // // // // // omkar.id = 1;
// // // // // // // // // // omkar.favchar='S';
// // // // // // // // // // omkar.salary=200000;

// // // // // // // // // // struct employee shrutii;
// // // // // // // // // // shrutii.id = 2;
// // // // // // // // // // shrutii.favchar='O';
// // // // // // // // // // shrutii.salary =200000;

// // // // // // // // // om omkar;
// // // // // // // // // omkar.id = 1;
// // // // // // // // // omkar.favchar='S';
// // // // // // // // // omkar.salary=200000;

// // // // // // // // // om shrutii;
// // // // // // // // // shrutii.id = 2;
// // // // // // // // // shrutii.favchar='O';
// // // // // // // // // shrutii.salary =200000;

// // // // // // // // // cout<<omkar.id<<endl;
// // // // // // // // // cout<<omkar.favchar<<endl;
// // // // // // // // // cout<<omkar.salary<<endl;
// // // // // // // // // cout<<shrutii.id<<endl;
// // // // // // // // // cout<<shrutii.favchar<<endl;
// // // // // // // // // cout<<shrutii.salary<<endl;

// // // // // // // // #include <iostream>
// // // // // // // // #include <iomanip>
// // // // // // // // using namespace std;
// // // // // // // // //  int a= 20;

// // // // // // // //     union employee
// // // // // // // //     {
// // // // // // // //         /* data */
// // // // // // // //         int emid;
// // // // // // // //         int salary;
// // // // // // // //     };

// // // // // // // // int main()
// // // // // // // // {

// // // // // // // //     // union employee omkar;
// // // // // // // //     // omkar.emid = 1;
// // // // // // // //     // // omkar.salary=23;

// // // // // // // //     // cout<<omkar.emid<<endl;
// // // // // // // //     // // cout<<omkar.salary<<endl;

// // // // // // // //   enum requirement {cpp,dsa,webdevelopment ,andrioddevelopment};
// // // // // // // // //   requirement n1 = cpp;
// // // // // // // // //   requirement n2 = dsa;
// // // // // // // // //   requirement n3 =webdevelopment;
// // // // // // // // //   requirement ns = andrioddevelopment;
// // // // // // // //   cout<<cpp<<endl;
// // // // // // // //   cout<<dsa<<endl;
// // // // // // // //   cout<<webdevelopment<<endl;
// // // // // // // //   cout<<andrioddevelopment<<endl;

// // // // // // // //     return 0;
// // // // // // // // };

// // // // // // // // #include <iostream>
// // // // // // // // using namespace std;

// // // // // // // // int sum (int a ,int b){
// // // // // // // //     return a+b;
// // // // // // // // }
// // // // // // // // int sum (int , int);

// // // // // // // // void multiplication(int a , int b){
// // // // // // // //    cout<<a*b<<endl;
// // // // // // // // }

// // // // // // // // void g(void){
// // // // // // // //     int a =3;
// // // // // // // //     int b=5;
// // // // // // // //     cout<<(a+b)-(a*b)/a+b;
// // // // // // // // }

// // // // // // // // int main()
// // // // // // // // {
// // // // // // // //  // Write code  here
// // // // // // // //  cout<<sum(2,3)<<endl;
// // // // // // // //     multiplication(2,3);
// // // // // // // //     g();
// // // // // // // //     return 0;
// // // // // // // // }
// // // // // // // // int sum (int a,int b){
// // // // // // // //     return a+b;
// // // // // // // // }

// // // // // // // // #include <iostream>
// // // // // // // // using namespace std;

// // // // // // // // void swap(int a , int b){
// // // // // // // //      int temp = a;
// // // // // // // //      a = b;
// // // // // // // //      b = temp;
// // // // // // // //      cout<<a<<endl;
// // // // // // // //      cout<<b<<endl;
// // // // // // // // }

// // // // // // // // void swappointerreference(int *a , int *b){
// // // // // // // //     int temp = *a;
// // // // // // // //     *a = *b;
// // // // // // // //     *b = temp;
// // // // // // // //     cout<<*a<<endl;
// // // // // // // //     cout<<*b<<endl;
// // // // // // // // }

// // // // // // // // int & swapcpprefrence(int &a,int &b){
// // // // // // // //     int temp = a;
// // // // // // // //     a = b;
// // // // // // // //     b = temp;
// // // // // // // //     cout<<a<<endl;
// // // // // // // //     cout<<b<<endl;
// // // // // // // // }

// // // // // // // // int main()
// // // // // // // // {
// // // // // // // //  // Write code  here
// // // // // // // //  int x = 5;
// // // // // // // //  int y = 6;
// // // // // // // //     swapcpprefrence(x,y);
// // // // // // // //     return 0;
// // // // // // // // }

// // // // // // // // #include <iostream>
// // // // // // // // using namespace std;
// // // // // // // // // inline int sum(int a , int b){
// // // // // // // // //     return a+b;
// // // // // // // // // }
// // // // // // // // int main()
// // // // // // // // {
// // // // // // // //  // Write code  here
// // // // // // // //  int a,b;
// // // // // // // //  cout<<"Enter the value of a "<<endl;
// // // // // // // //  cin>>a;
// // // // // // // //  cout<<"Enter the value of b "<<endl;
// // // // // // // //  cin>>b;
// // // // // // // //  cout<<"This is the sum of a and b "<<endl;
// // // // // // // //  cout<<sum(a,b);

// // // // // // // //     return 0;
// // // // // // // // }

// // // // // // // // #include <iostream>
// // // // // // // // using namespace std;

// // // // // // // // int sum (){

// // // // // // // //      int a = 225;
// // // // // // // //     int b = s5;
// // // // // // // //     // a = 25;

// // // // // // // //     cout<<a+b<<endl;
// // // // // // // // }

// // // // // // // // int main()
// // // // // // // // {
// // // // // // // //  // Write code  here
// // // // // // // //  cout<<sum();

// // // // // // // //     return 0;
// // // // // // // // }

// // // // // // // // #include <iostream>
// // // // // // // // using namespace std;

// // // // // // // // class employee
// // // // // // // // {
// // // // // // // // private:
// // // // // // // //     int a, b, c;

// // // // // // // // public:
// // // // // // // //     int d, e;

// // // // // // // //     void setData(int a1, int b1, int c1);

// // // // // // // //     void getData()
// // // // // // // //     {
// // // // // // // //         cout << " The value of a " << a << endl;
// // // // // // // //         cout << "The value of b " << b << endl;
// // // // // // // //         cout << "The value of c " << c << endl;
// // // // // // // //         cout << "The value of d " << d << endl;
// // // // // // // //         cout << "The value of e " << e << endl;
// // // // // // // //     }
// // // // // // // // };

// // // // // // // // void employee::setData(int a1 , int b1 ,int c1){
// // // // // // // //     a = a1;
// // // // // // // //     b = b1;
// // // // // // // //     c = c1;
// // // // // // // // }
// // // // // // // // int main()
// // // // // // // // {
// // // // // // // //     // Write code  here
// // // // // // // //     employee  omkar;
// // // // // // // //     omkar.d =25;
// // // // // // // //     omkar.e =56;
// // // // // // // //     omkar.setData(1,2,3);
// // // // // // // //     omkar.getData();
// // // // // // // //     return 0;
// // // // // // // // }
// // // // // // // // #include <iostream>
// // // // // // // // using namespace std;

// // // // // // // // class binary{

// // // // // // // //     private:
// // // // // // // //     string s;
// // // // // // // //     void chl_bin(void);

// // // // // // // //     public :
// // // // // // // //     void read(void);
// // // // // // // //     void ones_compliment(void);
// // // // // // // //     void display(void);

// // // // // // // // };
// // // // // // // // void binary::read(void)
// // // // // // // // {
// // // // // // // //     cout << "Enter a binary number" << endl;
// // // // // // // //     cin >> s;
// // // // // // // // }

// // // // // // // // void binary :: chl_bin(void){
// // // // // // // //      for (int i = 0; i < s.length(); i++)
// // // // // // // //     {
// // // // // // // //         if (s.at(i) != '0' && s.at(i) != '1')
// // // // // // // //         {
// // // // // // // //             cout << "Incorrect binary format" << endl;
// // // // // // // //             exit(0);
// // // // // // // //         }
// // // // // // // //     }

// // // // // // // // }
// // // // // // // // void binary::ones_compliment(void)
// // // // // // // // {
// // // // // // // //     chl_bin();
// // // // // // // //     for (int i = 0; i < s.length(); i++)
// // // // // // // //     {
// // // // // // // //         if (s.at(i) == '0')
// // // // // // // //         {
// // // // // // // //             s.at(i) = '1';
// // // // // // // //         }
// // // // // // // //        else
// // // // // // // //         {
// // // // // // // //             s.at(i) = '0';
// // // // // // // //         }
// // // // // // // //     }
// // // // // // // // }

// // // // // // // // void binary::display(void)
// // // // // // // // {
// // // // // // // //     cout<<"Displaying your binary number"<<endl;
// // // // // // // //     for (int i = 0; i < s.length(); i++)
// // // // // // // //     {
// // // // // // // //         cout << s.at(i);
// // // // // // // //     }
// // // // // // // //     cout<<endl;
// // // // // // // // }

// // // // // // // // int main()
// // // // // // // // {
// // // // // // // //  // Write code  here

// // // // // // // //  binary b;
// // // // // // // //  b.read();
// // // // // // // // //  b.chl_bin();
// // // // // // // //  b.display();
// // // // // // // //  b.ones_compliment();
// // // // // // // //  b.display();

// // // // // // // //     return 0;
// // // // // // // // }

// // // // // // // // #include <iostream>
// // // // // // // // using namespace std;
// // // // // // // // int fib(int n ){
// // // // // // // //     if(n<2){
// // // // // // // //         return 1;
// // // // // // // //     }
// // // // // // // //       return fib(n-2)+fib(n-1);
// // // // // // // // }

// // // // // // // // int main()
// // // // // // // // {
// // // // // // // //  // Write code  here
// // // // // // // //  int x ;
// // // // // // // //  cin>>x;
// // // // // // // //  cout<<fib(x);

// // // // // // // //     return 0;
// // // // // // // // }

// // // // // // // // #include <iostream>
// // // // // // // // using namespace std;

// // // // // // // // void sum(int x , int y);
// // // // // // // // void sum(int x , int y , int z);

// // // // // // // // int main()
// // // // // // // // {
// // // // // // // //  // Write code  here

// // // // // // // // int x,y;
// // // // // // // // cin>>x>>y;
// // // // // // // // sum(x,y);

// // // // // // // // int a,b,z;
// // // // // // // // cin>>a>>b>>z;
// // // // // // // // sum(a,b,z);

// // // // // // // //     return 0;
// // // // // // // // }

// // // // // // // // void sum (int x , int y){
// // // // // // // //     cout<<x+y<<endl;
// // // // // // // // }

// // // // // // // // void sum (int x , int y,int z){
// // // // // // // //     cout<<x+y+z<<endl;
// // // // // // // // }

// // // // // // // // #include <iostream>
// // // // // // // // using namespace std;

// // // // // // // // class shop
// // // // // // // // {

// // // // // // // //     int itemid[s0];
// // // // // // // //     int itemprice[s0];
// // // // // // // //     int counter;

// // // // // // // // public:
// // // // // // // //     void initCounter(void)
// // // // // // // //     {
// // // // // // // //         counter = 0;
// // // // // // // //     }

// // // // // // // //     void SetPrice(void);
// // // // // // // //     void DisplayPrice(void);
// // // // // // // // };

// // // // // // // // void shop ::SetPrice(void)
// // // // // // // // {
// // // // // // // //     cout << "Enter ID of your item no : " << counter + 1<<endl;
// // // // // // // //     cin >> itemid[counter];
// // // // // // // //     cout << "Enter Price of Your item : " << endl;
// // // // // // // //     cin>>itemprice[counter];
// // // // // // // //     counter++;
// // // // // // // // }

// // // // // // // // void shop:: DisplayPrice(void){
// // // // // // // //     for(int i =0;i<=counter;i++){
// // // // // // // //         cout<<"The Price of item with id : "<<itemid[i]<<" is "<<itemprice[i]<<endl;
// // // // // // // //     }
// // // // // // // // }
// // // // // // // // int main()
// // // // // // // // {
// // // // // // // //     // Write code  here
// // // // // // // //   shop dukan1;
// // // // // // // //   dukan1.initCounter();
// // // // // // // //   dukan1.SetPrice();
// // // // // // // //   dukan1.SetPrice();
// // // // // // // //   dukan1.SetPrice();
// // // // // // // //   dukan1.SetPrice();
// // // // // // // //   dukan1.SetPrice();

// // // // // // // //   dukan1.DisplayPrice();

// // // // // // // //     return 0;
// // // // // // // // }

// // // // // // // // Memory allocation using array in classes

// // // // // // // // static function

// // // // // // // // #include <iostream>
// // // // // // // // using namespace std;
// // // // // // // // class employee
// // // // // // // // {

// // // // // // // //     int id;
// // // // // // // //     // it can share count to all objects eg omkar and shruti also
// // // // // // // //     // static data member is count for class employee
// // // // // // // //     static int count;

// // // // // // // // public:
// // // // // // // //     void setData(void)
// // // // // // // //     {
// // // // // // // //         cout << "Enter the id " << endl;
// // // // // // // //         cin >> id;
// // // // // // // //         count++;
// // // // // // // //     }

// // // // // // // //     // member of static variable
// // // // // // // //     void getData(void)
// // // // // // // //     {
// // // // // // // //         cout << "The id of this employee is " << id << " And this is employee number " << count << endl;
// // // // // // // //     }

// // // // // // // //     // static member function which can asscess the static data or variable
// // // // // // // //     static void getCount(void)
// // // // // // // //     {
// // // // // // // //         cout << "The value of count is " << count << endl;
// // // // // // // //     }
// // // // // // // // };

// // // // // // // // int employee ::count = 0;

// // // // // // // // int main()
// // // // // // // // {
// // // // // // // //     // Write code  here
// // // // // // // //     employee omkar, shruti, shubham;
// // // // // // // //     omkar.setData();
// // // // // // // //     omkar.getData();
// // // // // // // //     employee::getCount();

// // // // // // // //     shruti.setData();
// // // // // // // //     shruti.getData();

// // // // // // // //     employee::getCount();

// // // // // // // //     shubham.getData();
// // // // // // // //     shubham.setData();

// // // // // // // //     employee::getCount();
// // // // // // // //     return 0;
// // // // // // // // }

// // // // // // // // #include <iostream>
// // // // // // // // using namespace std;
// // // // // // // // class complex
// // // // // // // // {
// // // // // // // //     int a;
// // // // // // // //     int b;

// // // // // // // // public:
// // // // // // // //     void setData(int v1, int v2)
// // // // // // // //     {
// // // // // // // //         a = v1;
// // // // // // // //         b = v2;
// // // // // // // //     }

// // // // // // // //     void setDataBySum(complex ol, complex o2)
// // // // // // // //     {
// // // // // // // //         a = ol.a + o2.a;
// // // // // // // //         b = ol.b + o2.b;
// // // // // // // //     }
// // // // // // // //     void printNumber()
// // // // // // // //     {
// // // // // // // //         cout << "Your complex number is " << a << " + " << b << " i " << endl;
// // // // // // // //     }
// // // // // // // // };
// // // // // // // // int main()
// // // // // // // // {
// // // // // // // //     // Write code  here
// // // // // // // //     complex c1, c2, c3;
// // // // // // // //     c1.setData(2, 3);
// // // // // // // //     c1.printNumber();

// // // // // // // //     c2.setData(3, 5);
// // // // // // // //     c2.printNumber();

// // // // // // // //     c3.setDataBySum(c1, c2);
// // // // // // // //     c3.printNumber();

// // // // // // // //     return 0;
// // // // // // // // }

// // // // // // // // friend function
// // // // // // // // #include <iostream>
// // // // // // // // using namespace std;
// // // // // // // // class complex
// // // // // // // // {

// // // // // // // //     int a, b;

// // // // // // // // public:
// // // // // // // //     void setNumber(int n1, int n2)
// // // // // // // //     {
// // // // // // // //         a = n1;
// // // // // // // //         b = n2;
// // // // // // // //     }

// // // // // // // //     friend complex SumComplex(complex o1, complex o2);
// // // // // // // //     void printNumber()
// // // // // // // //     {
// // // // // // // //         cout << "Your Number is " << a << " + " << b << "i " << endl;
// // // // // // // //     }
// // // // // // // // };
// // // // // // // // complex SumComplex(complex o1, complex o2)
// // // // // // // // {
// // // // // // // //     complex o3;
// // // // // // // //     o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
// // // // // // // //     return o3;
// // // // // // // // }
// // // // // // // // int main()
// // // // // // // // {
// // // // // // // //     // Write code  here
// // // // // // // //     complex c1, c2, c3, sum;
// // // // // // // //     c1.setNumber(2, 5);
// // // // // // // //     c1.printNumber();

// // // // // // // //     c2.setNumber(5, 5);
// // // // // // // //     c2.printNumber();

// // // // // // // //     // sum = SumComplex(c1,c2);
// // // // // // // //     // sum.printNumber();
// // // // // // // //     SumComplex(c1, c2).printNumber();

// // // // // // // //     return 0;
// // // // // // // // }

// // // // // // // #include <iostream>
// // // // // // // using namespace std;
// // // // // // // class Base
// // // // // // // {
// // // // // // //     int data1; // private by default and is not inheritable
// // // // // // // public:
// // // // // // //     int data2;
// // // // // // //     void setData();
// // // // // // //     int getData1();
// // // // // // //     int getData2();
// // // // // // // };

// // // // // // // void Base ::setData(void)
// // // // // // // {
// // // // // // //     data1 = s;
// // // // // // //     data2 = 20;
// // // // // // // }

// // // // // // // int Base::getData1()
// // // // // // // {
// // // // // // //     return data1;
// // // // // // // }

// // // // // // // int Base::getData2()
// // // // // // // {
// // // // // // //     return data2;
// // // // // // // }

// // // // // // // class Derived : public Base
// // // // // // // { // Class is being derived publically
// // // // // // //     int data3;

// // // // // // // public:
// // // // // // //     void process();
// // // // // // //     void display();
// // // // // // // };

// // // // // // // void Derived ::process()
// // // // // // // {
// // // // // // //     data3 = data2 * getData1();
// // // // // // // }

// // // // // // // void Derived ::display()
// // // // // // // {
// // // // // // //     cout << "Value of data 1 is " << getData1() << endl;
// // // // // // //     cout << "Value of data 2 is " << data2 << endl;
// // // // // // //     cout << "Value of data 3 is " << data3 << endl;
// // // // // // // }

// // // // // // // // int main()
// // // // // // // // {
// // // // // // // //     // write code from here
// // // // // // // //     Derived bs;
// // // // // // // //     bs.setData();
// // // // // // // //     bs.getData1();
// // // // // // // //     bs.getData2();

// // // // // // // //     return 0;
// // // // // // // // }.
// // // // // // // int main()
// // // // // // // {
// // // // // // //     Derived der;
// // // // // // //     der.setData();
// // // // // // //     // der.getData1();
// // // // // // //     der.process();
// // // // // // //     der.display();

// // // // // // //     return 0;
// // // // // // // }

// // // // // // // #include <iostream>
// // // // // // // using namespace std;

// // // // // // // int main()
// // // // // // // {
// // // // // // //     // write code from here
// // // // // // //     int s = 100;
// // // // // // //     int arr[s];
// // // // // // //     int counteven;
// // // // // // //     int countodd;
// // // // // // //     cin >> arr[s];
// // // // // // // //     for (int i = 1; i < arr[s]; ++i)
// // // // // // // //     {
// // // // // // // //         if (arr[i] % 2 == 0)
// // // // // // // //         {

// // // // // // // //             cout << "true" << endl;
// // // // // // // //             // continue;
// // // // // // // //             //    counteven= counteven+1;
// // // // // // // //             // cout<<counteven<<endl;
// // // // // // // //         }
// // // // // // // //         if (arr[i] % 2 != 0)
// // // // // // // //         {
// // // // // // // //             // countodd=countodd+1;
// // // // // // // //             // cout<<countodd<<endl;
// // // // // // // //         }
// // // // // // // //         cout << "false" << endl;
// // // // // // // //     }
// // // // // // // //     // for (int  j = 1; j < arr[s]; ++j){

// // // // // // // // }
// // // // // // // // cout<<arr<<endl;
// // // // // // // // cout<<counteven<<endl;
// // // // // // // // cout<<countodd<<endl;

// // // // // // // // if(counteven>countodd){
// // // // // // // //     cout<<"Ready for battel"<<endl;
// // // // // // // // }else{
// // // // // // // //     cout<<"Not ready"<<endl;
// // // // // // // // }
// // // // // // // //     return 0;
// // // // // // // // }

// // // // // // // #include <iostream>
// // // // // // // using namespace std;
// // // // // // // int a = 30;

// // // // // // // int main()
// // // // // // // {
// // // // // // //     // write code from here
// // // // // // //     //  build in data types \\

// // // // // // //     // int a = 5;

// // // // // // //     // cout << a << endl;
// // // // // // //     // cout << ::a << endl;

// // // // // // //     // literals

// // // // // // //     // constant value which is assigned to constant variable//

// // // // // // //     //  references

// // // // // // //     // int a = 5;
// // // // // // //     // int &y = a;
// // // // // // //     // cout << a << endl;
// // // // // // //     // cout << y << endl;

// // // // // // //     // typecasting

// // // // // // //     // int a = 45;
// // // // // // //     // int b = 456;

// // // // // // //     // cout << double(b) << endl;
// // // // // // //     // cout << float(a) << endl;
// // // // // // //     // cout << long(a) << endl;

// // // // // // //     // scope resoultion
// // // // // // //     // int a = 300;
// // // // // // //     // cout << a << endl;
// // // // // // //     // cout << ::a << endl;
// // // // // // //     // return 0;
// // // // // // // }
// // // // // // // #include <iostream>
// // // // // // // #include <iomanip>
// // // // // // // using namespace std;

// // // // // // // // precedance and associatively

// // // // // // // int main()
// // // // // // // {
// // // // // // // write code from here

// // // // // // //  manipulator
// // // // // // // int a =10;
// // // // // // // int b = 20;
// // // // // // // int c = 30;

// // // // // // // cout<<setw(5)<<a<<endl;

// // // // // // //  constant
// // // // // // // int a = 45;
// // // // // // // const int b = 5;
// // // // // // // a = 56;
// // // // // // // b = 54;
// // // // // // // cout << a << endl;
// // // // // // // cout << b << endl;

// // // // // // //     int a;
// // // // // // //     cout << "Enter the age:  " << endl;
// // // // // // //     cin >> a;

// // // // // // //     switch (a)
// // // // // // //     {
// // // // // // //     case 18:
// // // // // // //         if (a < 18)
// // // // // // //         {
// // // // // // //             cout << "Ghar ja bache " << endl;
// // // // // // //         }

// // // // // // //
// // // // // // //     case 20:
// // // // // // //         if (a >= 18)
// // // // // // //         {
// // // // // // //             cout << "abe aa ja na " << endl;
// // // // // // //         }
// // // // // // //

// // // // // // //     default:
// // // // // // //         cout << "get a life baby" << endl;
// // // // // // //
// // // // // // //     }
// // // // // // //     return 0;
// // // // // // // }

// // // // // // #include <iostream>
// // // // // // using namespace std;

// // // // // // int main()
// // // // // // {
// // // // // //     // write code from here

// // // // // //     // pointers
// // // // // //     //  it is a type which holds the address of another data types
// // // // // //     // int a = 4;
// // // // // //     // int *b = &a;
// // // // // //     // cout << a << endl;
// // // // // //     // cout << b << endl;
// // // // // //     // cout << "This the value fo a: " << *b << endl;

// // // // // //     // int a = 5;
// // // // // //     // int *b = &a;
// // // // // //     // int **c = &b;

// // // // // //     // cout << a << endl;
// // // // // //     // cout << b << endl;
// // // // // //     // cout << c << endl;

// // // // // //     // return 0;
// // // // // // }

// // // // // #include <iostream>
// // // // // using namespace std;

// // // // // int main()
// // // // // {
// // // // //     // write code from here

// // // // //     int marks[4] = {1, 2, 3, 4};

// // // // //     int *pointer = marks;

// // // // //     cout << "Address " << endl;

// // // // //     cout << pointer << " " << endl;
// // // // //     cout << pointer + 1 << " " << endl;
// // // // //     cout << pointer + 2 << " " << endl;
// // // // //     cout << pointer + 3 << " " << endl;

// // // // //     cout << "Values of elements " << endl;
// // // // //     cout << *pointer << endl;
// // // // //     cout << *pointer + 1 << endl;
// // // // //     cout << *pointer + 2 << endl;
// // // // //     cout << *pointer + 3 << endl;

// // // // //     return 0;
// // // // // }

// // // // // The MIT License (MIT)

// // // // // Copyright (c) YEAR NAME

// // // // //  Permission is hereby granted, free of charge, to any person obtaining a
// // // // //  copy of this software and associated documentation files (the "Software"),
// // // // //  to deal in the Software without restriction, including without limitation
// // // // //  the rights to use, copy, modify, merge, publish, distribute, sublicense,
// // // // //  and/or sell copies of the Software, and to permit persons to whom the
// // // // //  Software is furnished to do so, subject to the following conditions:
// // // // //
// // // // //  The above copyright notice and this permission notice shall be included in
// // // // //  all copies or substantial portions of the Software.
// // // // //
// // // // //  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
// // // // //  OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// // // // //  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// // // // //  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// // // // //  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// // // // //  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
// // // // //  DEALINGS IN THE SOFTWARE.

// // // // /* code */

// // // // #include <iostream>
// // // // using namespace std;
// // // // // struct employee
// // // // // {
// // // // //     int id;
// // // // //     float salaray;
// // // // //     char favchar;
// // // // // };

// // // // // typedef struct employee
// // // // // {
// // // // //     int id;
// // // // //     int salaray;
// // // // //     char favchar;
// // // // // } omk;

// // // // // write code from here

// // // // // struct employee om;

// // // // // omk om;
// // // // // om.id = 1;
// // // // // om.salaray = 1000.00f;
// // // // // om.favchar = 'S';

// // // // // cout << "om id is " << om.id << endl;
// // // // // cout << "om salaray is " << om.salaray << endl;
// // // // // cout << "om favchar is " << om.favchar << endl;

// // // // // union money
// // // // // {

// // // // //     int rice;
// // // // //     char car;
// // // // //     float pounds;
// // // // // };

// // // // // union money m1;
// // // // // m1.rice = 35;
// // // // // m1.car = 's';
// // // // // m1.pounds = 5.23f;

// // // // // cout << m1.rice << endl;
// // // // // cout << m1.car << endl;
// // // // // cout << m1.pounds << endl;
// // // // int main()
// // // // {

// // // //     // enum

// // // //     enum Meal
// // // //     {
// // // //         Breakfast,
// // // //         lunch,
// // // //         dinner

// // // //     };

// // // //     Meal n1 = Breakfast;
// // // //     Meal n2 = lunch;
// // // //     Meal n3 = dinner;

// // // //     cout << (n1) << endl;
// // // //     cout << (n2) << endl;
// // // //     cout << (n3) << endl;

// // // //     return 0;
// // // // }\\


// // // #include <iostream>
// // // using namespace std;

// // // int sum(int, int);
// // // float sum2(float, float);
// // // double sum1(double, double);
// // // long sum3(long, long);
// // // void sum12(int, int);

// // // int main()
// // // {
// // //       // write code from here
// // //       int a, b;
// // //       cin >> a >> b;

// // //       cout << sum(a, b) << endl;
// // //       cout << sum2(a, b) << endl;
// // //       cout << sum1(a, b) << endl;
// // //       cout << sum3(a, b) << endl;
// // //       sum12(a, b);

// // //       return 0;
// // // }

// // // int sum(int a, int b)
// // // {
// // //       return a + b;
// // // }

// // // float sum2(float a, float b)
// // // {
// // //       return a + b;
// // // }

// // // double sum1(double a, double b)
// // // {
// // //       return a + b;
// // // }

// // // long sum3(long a, long b)
// // // {
// // //       return a + b;
// // // }

// // // void sum12(int a, int b)
// // // {
// // //       cout << a + b << endl;
// // // }

// // // #include <iostream>
// // // using namespace std;
// // // void swapp(int a, int b)
// // // {
// // //       int temp;
// // //       cout << a << " " << b << endl;
// // //       temp = a;
// // //       a = b;
// // //       b = temp;
// // // }

// // // void swap(int &a, int &b)
// // // {
// // //       int temp;
// // //       temp = a;
// // //       a = b;
// // //       b = temp;
// // // }

// // // void swaopointerreference(int *a,int *b){
// // //       int temp;
// // //       temp = *a;
// // //       *a = *b;
// // //       *b = temp;
// // // }
// // // int main()
// // // {
// // //       // write code from here

// // //       int a = 4, b = 5;
// // //       swaopointerreference(&a,&b);
// // //       cout << a << " " << b << endl;

// // //       return 0;
// // // }
// // // #include <iostream>
// // // using namespace std;
// // // float moneyReceived(int money, float fa = 1.04)
// // // {

// // //       return money * fa;
// // // }
// // // int main()
// // // {
// // //       // write code from here
// // //       int money = 100;

// // //       cout << moneyReceived(100, 1.01);

// // //       return 0;
// // // }
// // // #include <iostream>
// // // using namespace std;
// // // inline float mul(float a, float b)
// // // {
// // //       return (a * b);
// // // }

// // // inline double div(double a, double b)
// // // {
// // //       return (a / b);
// // // }
// // // int main()
// // // {
// // //       // write code from here
// // //       float a = 12.34;
// // //       float b = 13.54;

// // //       cout << mul(a, b) << endl;
// // //       cout << div(a, b) << endl;

// // //       return 0;
// // // }

// // // #include <iostream>
// // // using namespace std;
// // // // classes
// // // class empolyee
// // // {
// // // private:
// // //     /* data */
// // //     int a, b, c;

// // // public:
// // //     int d, e;

// // //     void sedData(int a1, int b1, int c1);

// // //     void getData()
// // //     {
// // //         cout << "The value of a " << a << endl;
// // //         cout << "The Value of b " << b << endl;
// // //         cout << "The value of c " << c << endl;
// // //         cout << "The value of d " << d << endl;
// // //         cout << "The value of e " << e << endl;
// // //     }
// // // };

// // // void empolyee ::sedData(int a1, int b1, int c1)
// // // {
// // //     a = a1;
// // //     b = b1;
// // //     c = c1;
// // // }

// // // int main()
// // // {
// // //     // write code from here

// // //     empolyee om;
// // //     om.d = 54;
// // //     om.e = 45;

// // //     om.sedData(1, 2, 3);
// // //     om.getData();

// // //     return 0;
// // // }

// // #include <iostream>
// // using namespace std;
// // class binary
// // {
// // private:
// //     string s;
// //     void check_bin(void);

// // public:
// //     void read(void);
// //     void ones_compliment(void);
// //     void display(void);
// // };

// // void binary ::read(void)
// // {
// //     cout << "Enter a binary number" << endl;
// //     cin >> s;
// // }

// // void binary ::check_bin(void)
// // {
// //     for (int i = 0; i < s.length(); i++)
// //     {
// //         if (s.at(i) != '0' && s.at(i) != '1')
// //         {
// //             cout << "Incorrect binary format " << endl;
// //             exit(0);
// //         }
// //     }
// // }

// // void binary::ones_compliment(void)
// // {
// //     check_bin();
// //     for (int i = 0; i < s.length(); i++)
// //     {
// //         if (s.at(i) == '0')
// //         {
// //             s.at(i) = '1';
// //         }
// //         else
// //         {
// //             s.at(i) = '0';
// //         }
// //     }
// // }

// // void binary ::display(void)
// // {
// //     cout << "Displaying ones compliment binary number" << endl;
// //     for (int i = 0; i < s.length(); i++)
// //     {
// //         cout << s.at(i);
// //     }
// //     cout << endl;
// // }
// // int main()
// // {
// //     binary b;
// //     b.read();
// //     // b.check_bin();
// //     b.display();
// //     b.ones_compliment();
// //     b.display();
// //     return 0;
// // }

// // #include <iostream>
// // using namespace std;

// // int fib(int n)
// // {
// //     if (n < 2)
// //         return 1;
// //     return fib(n - 2) + fib(n - 1);
// // }

// // int main()
// // {
// //     // write code from here
// //     int a;
// //     cin >> a;
// //     cout << fib(a);
// //     // int x = 0, z = 0, y = 1;

// //     // while (z <= a)
// //     // {
// //     //     cout << z << endl;
// //     //     x = y;
// //     //     y = z;
// //     //     z = x + y;
// //     // }

// //     return 0;
// // }

// // #include <iostream>
// // using namespace std;
// // int sum(int a, int b)
// // {
// //     return (a + b);
// // }
// // int sum(int a, int b, int c)
// // {
// //     return (a + b + c);
// // }
// // int volume(int a)
// // {
// //     return (a * a * a);
// // }

// // int volume(int r, int h)
// // {
// //     return (3.14 * r * r * h);
// // }

// // int volume(int l, int b, int h)
// // {
// //     return (l * b * h);
// // }
// // int main()
// // {
// //     // write code from here

// //     cout << "The sum of 3 and 4 is " << sum(3, 4) << endl;
// //     cout << "The sum of 3,4 and 5 is " << sum(3, 4, 5) << endl;
// //     cout << "The volume of cube " << volume(3) << endl;
// //     cout << "The volue of cyclinder " << volume(5, 4) << endl;
// //     cout << "The volume of reactangular " << volume(3, 5, 6) << endl;

// //     return 0;
// // }
// // #include <iostream>
// // using namespace std;

// // class Shop
// // {
// //     int itemid[100];
// //     int itemprice[100];
// //     int counter;

// // public:
// //     void initcounter(void)
// //     {
// //         counter = 0;
// //     }

// //     void setprice(void);

// //     void displayprice(void);
// // };

// // void Shop ::setprice(void)
// // {
// //     cout << "Enter id of your item no " << counter + 1 << endl;
// //     cin >> itemid[counter];
// //     cout << "Enter price of your item " << endl;
// //     cin >> itemprice[counter];
// //     counter++;
// // }

// // void Shop::displayprice(void)
// // {
// //     for (int i = 0; i <= counter; i++)
// //     {
// //         cout << "The price of item with id: " << itemid[i] << " is " << itemprice[i] << endl;
// //     }
// // }
// // int main()
// // {
// //     // write code from here
// //     Shop Dukan1;
// //     Dukan1.initcounter();
// //     Dukan1.setprice();
// //     Dukan1.setprice();

// //     Shop Dukan2;
// //     Dukan2.initcounter();
// //     Dukan2.setprice();
// //     Dukan2.setprice();

// //     Dukan1.displayprice();
// //     cout << endl;
// //     Dukan2.displayprice();

// //     return 0;
// // }

// // #include <iostream>
// // using namespace std;
// // class employee
// // {
// //     int id;

// //     static int count;

// // public:
// //     void setData(void)
// //     {
// //         cout << "Enter the id " << endl;
// //         cin >> id;
// //         count++;
// //     }
// //     void GetData(void)
// //     {
// //         cout << "The id of this employee is " << id << "And this is employee number" << count << endl;
// //     }

// //     static void getcount(void)
// //     {
// //         cout << " The value of count is " << count << endl;
// //     }
// // };

// // int employee ::count=100;

// // int main()
// // {
// //     // write code from here
// //     employee omkar, shruti;
// //     omkar.setData();
// //     omkar.GetData();
// //     employee::getcount();

// //     shruti.setData();
// //     shruti.GetData();
// //     employee::getcount();

// //     return 0;
// // }
// // #include <iostream>
// // using namespace std;
// // class Complex
// // {
// //     int a;
// //     int b;

// // public:
// //     void setData(int v1, int v2)
// //     {
// //         a = v1;
// //         b = v2;
// //     }
// //     void SetDatabySum(Complex ol, Complex o2)
// //     {
// //         a = ol.a + o2.a;
// //         b = ol.b + o2.b;
// //     }
// //     void printNumber()
// //     {
// //         cout << "Your complex number is " << a << " + " << b << "i " << endl;
// //     }
// // };
// // int main()
// // {
// //     // write code from here

// //     Complex c1,c2,c3;
// //     c1.setData(2,5);
// //     c1.printNumber();

// //     c2.setData(3,5);
// //     c2.printNumber();

// //     c3.SetDatabySum(c1,c2);
// //     c3.printNumber();

// //     return 0;
// // }

// // #include <iostream>
// // using namespace std;
// // class employee
// // {
// // private:
// //     int id;
// //     int salary;

// // public:
// //     void Setdata()
// //     {
// //         salary = 122;
// //         cout << "Enter the id: " << endl;
// //         cin >> id;
// //     }
// //     void getData()
// //     {
// //         cout << "This is the id of employee:" << id << endl;
// //     }
// // };

// // int main()
// // {
// //     // write code from here
// //     employee fd[10];
// //     for (int i = 0; i < 10; i++)
// //     {
// //         fd[i].Setdata();
// //         fd[i].getData();
// //     }

// //     return 0;
// // }
// // #include <iostream>
// // using namespace std;
// // int rec(int n)
// // {

// //     if (n > 0)
// //     {
// //         rec(--n);
// //         cout << "Omkar" << endl;

// //     }

// // }
// // int main()
// // {
// //     // write code from here
// //     int a = 1000;
// //     cout << rec(a);

// //     return 0;
// // }

// // #include <iostream>
// // using namespace std;
// // class Complex
// // {
// //     int a, b;

// // public:
// //     void setNumber(int n1, int n2)
// //     {
// //         a = n1;
// //         b = n2;
// //     }

// //      friend Complex SumComplex(Complex ol, Complex o2);
// //     void printNumber()
// //     {
// //         cout << "Your number is " << a << " + " << b << "i " << endl;
// //     }
// // };
// // Complex SumComplex(Complex o1, Complex o2)
// // {
// //     Complex o3;
// //     o3.setNumber((o1.a + o2.b), (o1.a + o2.b));
// //     return o3;
// // }
// // int main()
// // {
// //     // write code from here
// //     Complex c1, c2, c3, sum;
// //     c1.setNumber(2, 6);
// //     c1.printNumber();

// //     c2.setNumber(5, 2);
// //     c2.printNumber();

// //     sum = SumComplex(c1, c2);
// //     sum.printNumber();

// //     return 0;
// // }
// #include <iostream>
// using namespace std;

// class complex;

// class Calculator
// {

// public:
//     int add(int a, int b)
//     {
//         return (a + b);
//     }

//     int sumRealComplex(complex, complex);

//     int sumComComplex(complex, complex);
// };

// class complex
// {
//     int a, b;

//     friend class Calculator;

// public:
//     void setData(int v1, int v2)
//     {
//         a = v1;
//         b = v2;
//     }
//     void printnumber()
//     {
//         cout << "Your number is " << a << " + " << b << "i" << endl;
//     }
// };

// // int Calculator ::sumRealComplex(complex o1, complex o2)
// // {
// //     return (o1.a + o2.a);
// // }

// // int Calculator::sumComComplex(complex o1, complex o2)
// // {
// //     return (o2.a + o2.b);
// // }
// // int main()
// // {

// //     complex s1, s2;
// //     s1.setData(2, 10);
// //     s1.printnumber();

// //     s2.setData(5, 5);
// //     s2.printnumber();
// //     return 0;
// // }

// #include <bits/stdc++.h>
// using namespace std;

// int peakelement(int arr[], int n)
// {
//     // int s, r;
//     // for (int i = 0; i < n; i++)
//     // {
//     //     s += arr[i];
//     // }

//     // sort(arr, arr + n);

//     // for (int i = 0; i < n; i++)
//     // {

//     //     r += arr[i];
//     // }
//     // if (r == s)
//     // {
//     //     return true;
//     // }
//     // else
//     // {
//     //     return false;
//     // }

//     int start = 0;
//     int end = n - 1;
//     while (start < end)
//     {
//         if (arr[start++] < arr[end--])
//         {
//             return true;
//         }
//     }
//     return false;
// }
// int main()
// {
//     // write code from here
//     int arr[3] = {1,2 ,13};

//     cout << peakelement(arr, 3);
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// string subset(int a[], int a2[], int n, int m)
// {
//     sort(a, a + n);
//     sort(a2, a2 + m);
//     int ans = -1;
//     for (int i = 0; i < m - 1; i++)
//     {
//         for (int j = 0; j < m - 1; j++)
//         {
//             ans = (a2[j] == a[i]);
//         }
//     }
//     if (ans)
//     {
//         cout << "Y" << endl;
//     }
//     else
//     {
//         cout << "N" << endl;
//     }
// }

// int main()
// {
//     // write code from here
//     // int arr[6] = {1, 2, 3, 4, 5, 6};
//     // int arr2[3] = {1, 2, 4};
//     int a1[6] = {11, 1, 13, 21, 3, 7};
//     int a2[4] = {11, 3, 7, 1};

//     cout << subset(a1, a2, 6, 4);

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class solution
// {

// public:
//     void negative(int arr[], int n)
//     {
//         vector<int> v1;
//         vector<int> v2;
//         vector<int> v3;

//         for (int i = 0; i < n; i++)
//         {
//             if (arr[i] >= 0)
//             {
//                 v1.push_back(arr[i]);
//             }
//             else
//             {
//                 v2.push_back(arr[i]);
//             }
//         }

//         v1.insert(v1.end(), v2.begin(), v2.end());

//         for (int i = 0; i < n; i++)
//         {
//             arr[i] = v1[i];
//             cout << arr[i] << " ";
//         }
//     }

// };

// int main()
// {
//     // write code from here
//     solution s2;
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int arr[n];
//         cin >> arr[n];
//         s2.negative(arr, n);
//     }

//     // int arr[8] = {-5, 7, -3, -4, 9, 10, -1, 11};
//     // s2.negative(arr, 8);

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
void stacks()
{
    stack<int> s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.pop();
    s.pop();

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}
int main()
{
    // write code from here
    stacks();

    return 0;
}