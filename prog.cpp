#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

//#define MYDEBUG

#ifdef MYDEBUG
# define msg(X) cout <<"[" <<_LINE_<< "]" #X << "=" << endl; 
# else
#define msg(X)
#endif




int main(int argc, char **argv){


int n, x, child, gondola;
vector<int> children;

//children.push_back(1);

//children.at(1);

//return 0;

 cin >> n >> x

 msg(n); msg(x);

while(n--){

cin >> child;
children.push_back(child);

}

sort(children.begin(), children.end());

while(children.size() != 0){

	int i = 1;

	if((children.at(i)+children.at(children.size()-1)) > x){
		children.pop_back();
		gondola++;
	}else{
		children.erase(children.begin());
		children.pop_back();
		gondola++;

	}


}

cout << gondola  <<endl;



}