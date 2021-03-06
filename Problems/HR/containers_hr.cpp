#ifndef IOSTREAM
#define IOSTREAM
#include <iostream>
#endif

#ifndef FSTREAM
#define FSTREAM
#include <fstream>
#endif


#ifndef VECTOR
#define VECTOR
#include <vector>
#endif

#ifndef STRING
#define STRING
#include <string>
#endif

#include<algorithm>
#include<iterator>
#include <iomanip> 


using std::string;
using std::vector;
using std::cout;
using std::cin;



// https://www.hackerrank.com/challenges/vector-erase/problem
/*
6
1 4 6 2 8 9
2
2 4

o/p:
3
1 8 9
*/

int main_vector_erase()
{
    // int num_of_lines = 4;
    // while(num_of_lines){
    //     cin>>n;
            
    // }

    vector<int> v = {1,4,6,2,8,9};
    // vector<int>::iterator new_end ;
    int k = 2, l=2,m=4;  
    // new_end = std::remove(begin(v),end(v),v[k-1]);
    // v.erase(begin(v)+l-1,begin(v)+m-1);
    // for(int i=l-1;i<m-1;++i){
    //     cout<<"\n";
    //     copy(begin(v),end(v),std::ostream_iterator<int>(std::cout, " "));
    //     new_end = std::remove(begin(v),new_end,v[i]);
        
    //   }
    // cout<<v.size()<<"\n";
    // v.erase(new_end,v.end());

    v.erase(begin(v)+k-1);
    v.erase(begin(v)+l-1,begin(v)+m-1);
    cout<<v.size()<<"\n";
    copy(begin(v),end(v),std::ostream_iterator<int>(std::cout, " "));
    return 0;
}

//https://www.hackerrank.com/challenges/prettyprint/problem


int main_printpretty() {
	int T; cin >> T;
	cout << std::setiosflags(std::ios::uppercase);
	cout << std::setw(0xf) << std::internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;

		/* Enter your code here */

	}
	return 0;

}


// https://www.hackerrank.com/challenges/deque-stl/problem
/*
2
5 2
3 4 6 3 4
7 4
3 4 5 8 1 4 10

o/p:
4 6 6 4
8 8 8 10
*/
void printKMax(int arr[], int n, int k)
{

}

int main_deque()
{
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}

int main(){
    main_vector_erase();
    // main_deque();
    // main_printpretty();
    return 0;
}