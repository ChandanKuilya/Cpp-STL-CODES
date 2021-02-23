//VECTORS:
/*
#include<iostream>
#include<vector>
using namespace std;
int main(){

 //vector<int>v(5);
 //vector<int>v(5,7);
  vector<int>v;
  for (int i=0;i<5;i++){
    v.push_back(i+1);
  }

  vector<int>::iterator it;
  for(it=v.begin();it!=v.end();it++){
      cout<<*it<<" ";
  }
return 0;
}
*/

//STRINGS:
/*
#include<iostream>
#include<string>
using namespace std;
int main(){
//string s="CHANDAN";
//cout<<s;
//string s="PARIKH";
//string s1(s);
//cout<<s<<'\n';
//cout<<s1;
string s="PARIKHSA";
string s1(s,2,4);
cout<<s<<'\n';
cout<<s1<<'\n';

//string s2=s.substr(1,4);
//cout<<s2<<'\n';
//if(s1.compare(s2)==0){
  //cout<<s1<<" is equal to "<<s2<<'\n';
//}
//else{
  //cout<<s1<<" is not equal to "<<s2<<'\n';
//}
string s2=s.substr(2,4);
cout<<s2<<'\n';
if(s1.compare(s2)==0){
  cout<<s1<<" is equal to "<<s2<<'\n';
}
else{
  cout<<s1<<" is not equal to "<<s2<<'\n';
}

return 0;
}
*/

//PAIR:
/*
#include<iostream>
#include<utility>
using namespace std;

int main(){

  pair<int,char>p;
  
  p=make_pair(9,'b');

  pair<int,char>p2(1,'a');

  cout<<p.first<<" "<<p.second<<'\n';
  cout<<p2.first<<" "<<p2.second<<'\n';


return 0;
}
*/

//SET:

/*
#include<iostream>
#include<set>
using namespace std;

int main(){
  set<int>s;
  int arr[]={1,2,3,4,5,6,5};

  for (int i=0;i<7;i++){
    s.insert(arr[i]);
  }

  set<int>::iterator it;

  for (it=s.begin();it!=s.end();it++){
    cout<<*it<<" ";
  }
  cout<<'\n';

  if(s.find(6)==s.end()){
    cout<<"Element not found in the set"<<'\n';
  }
  else{
    cout<<"Element found in the set"<<'\n';
  }
  if(s.find(9)==s.end()){
    cout<<"Element not found in the set"<<'\n';
  }
  else{
    cout<<"Element found in the set"<<'\n';
  }

  return 0;
}
*/

//MAP:(uses bst)
/*
#include<iostream>
#include<map>
using namespace std;

int main(){

map<int,int>m;

int arr[]={1,2,3,4,5,6,5,6,3,3};

for (int i=0;i<10;i++){
   m[arr[i]]++;
}

map<int,int>::iterator it;

for (it=m.begin();it!=m.end();it++){
  cout<<it->first<<" : "<<it->second<<'\n';
}

cout<<'\n';

m.erase(5);

for (it=m.begin();it!=m.end();it++){
  cout<<it->first<<" : "<<it->second<<'\n';
}

return 0;
}
*/

//UNORDERED_MAP:(uses hashtable)

/*

#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

unordered_map<int,int>m;

int arr[]={1,2,3,4,5,6,5,6,3,3};

for (int i=0;i<10;i++){
   m[arr[i]]++;
}

unordered_map<int,int>::iterator it;

for (it=m.begin();it!=m.end();it++){
  cout<<it->first<<" : "<<it->second<<'\n';
}

cout<<'\n';

m.erase(5);

for (it=m.begin();it!=m.end();it++){
  cout<<it->first<<" : "<<it->second<<'\n';
}

return 0;
}

*/

//STL FUNCTIONS:

//SORTING:

/*
#include<iostream>
#include<algorithm>
using namespace std;

int main(){

int arr[]={2,6,1,9,4,233,33};

//sort(arr,arr+7);
//sort(arr+2,arr+7);  //sorting in between particular interval of the array.
sort(arr,arr+7,greater<int>());  //sort the array in decreasing order.

for (int i=0;i<7;i++){
   cout<<arr[i]<<" ";
}
cout<<'\n';

 return 0; 
}
*/

//SORTING 1ST OR 2ND DATAS OR BOTH IN AN INTERVAL:

/*
#include<iostream>
#include<algorithm>
using namespace std;

struct interval{
  int st;
  int et;
};

bool compare(interval i1,interval i2){
    return (i1.st<i2.st);
}

int main(){

interval arr[]={{3,41},{1,9},{2,7},{7,13},{5,20}};

sort(arr,arr+5,compare);

for (int i=0;i<5;i++){
  cout<<arr[i].st<<" : "<<arr[i].et<<'\n';
}


return 0;
}
*/


//BINARY SEARCH:
 
    //GOOD ARTICLE:
//https://www.geeksforgeeks.org/binary-search-functions-in-c-stl-binary_search-lower_bound-and-upper_bound/

#include<iostream>
#include<algorithm>
using namespace std;

int main(){

int arr[]={13,19,7,9,22,1,34,11,3,5,2,4,10,19,1,10,1,19,10};

int n=sizeof(arr)/sizeof(int); //19

sort(arr,arr+n); // 1 1 1 2 3 4 5 7 9 10 10 10 11 13 19 19 19 22 34


int key;
cin>>key;

//bool present=binary_search(arr,arr+n,key);

//cout<<present<<'\n';

/*
if(present)
  cout<<key<<" is present in the array."<<'\n';
else
  cout<<key<<" is not present in the array."<<'\n';
  */

/*
auto it=lower_bound(arr,arr+n,key);
int pos=(it-arr);                        
 //Incase of vector<int>v={13,19,7,9,22,1,34,11,3,5,2,4,10,19,1,10,1,19,10};
  // int pos=(lower_bound(v.begin,v.end(),key)-v.begin());
  // i.e. incase of vector v,
  //auto it=lower_bound(v.begin(),v.end(),key);
  //and to find pos,
    // int pos=it-v.begin();

cout<<"position of "<<key<<" using lower bound is: "<<pos<<'\n';

auto it1=upper_bound(arr,arr+n,key);
int pos1=(it1-arr);

cout<<"position of "<<key<<" using upper bound is: "<<pos1<<'\n';

auto lb=lower_bound(arr,arr+n,key);
auto ub=upper_bound(arr,arr+n,key);

int occurance=(ub-lb);//occurance=((ub-arr)-(lb-arr))=(ub-lb);

cout<<"Occurance frequency of "<<key<<" the array is: "<<occurance<<'\n';


  return 0;
}

*/

//GCD:
/*
#include<iostream>
#include<algorithm>
using namespace std;

int main(){

   int  a,b;
   cin>>a>>b;

   int gcd=__gcd(a,b);

   cout<<"GCD OF "<< a <<" & "<<b<<" is: "<<gcd<<'\n';

   cout<<"LCM OF "<< a <<" & "<<b<<" is: "<<((a*b)/gcd)<<'\n';



return 0;
}
*/



