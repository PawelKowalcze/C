#include<iostream>
#include<cstring>
using namespace std;
int main (int argc, char **argv) {
	bool loopexit = 0;
	for (size_t i; i < argc; ++i){
		if(strcmp(argv[i],"-l") == 0){
			cout << "File list" << endl;
			loopexit = 1;
		}
		if(loopexit){
			break;
		}
	}
	if (!loopexit){
	cout << "-l - list avaliable files" << endl;
	}

	return 0;
}
