#include <iostream>
#include <cstring>
using namespace std;
int size(char s[]) {
	int dem=0;
	while(s[dem]!='\0') {
		dem++;
	}
	return dem;
}
void reverse(char s[]) {
	int n=size(s);
	char *s2=new char [n];
	for(int i=0;i<n;i++) {
		*(s2+i)=*(s+n-1-i);
	}
	for(int i=0;i<n;i++) {
		*(s+i)=*(s2+i);
	}
}
void delete_char(char s[],char c) {
	int n=size(s);
	for(int i=0;i<n;i++) {
		if(s[i]==c) {
			for(int j=i;j<n-1;j++) {
				*(s+j)=*(s+j+1);
			}
			i--;
			*(s+n-1)='\0';
		}
	}
	
}
void pad_right(char s[], int n) {
	int m=size(s);
    if(n>m) {
        for(int i=m;i<n;i++) {
        	*(s+i)=' ';
		}
    }
}
void pad_left(char s[], int n) {
	int m=size(s);
    if(n>m) {
        for(int i=0;i<m;i++) {
		    *(s+i+(n-m))=*(s+i);
	     }
	     for(int i=0;i<n-m;i++) {
	        *(s+i)=' ';
	     }
    }
}
void truncate(char s[], int n ) {
	int m=size(s);
	if(n<m) {
		for(int i=m-n;i<m;i++) {
			*(s+i)='\0';
		}
	}
}
bool is_palindrome(char s[]) {
	int n=size(s);
	for(int i=0;i<n/2;i++) {
		if(*(s+i)!=*(s+n-1-i)) {
			return false;
		}
	}
	return true;
}
void trim_left(char s[]) {
	int n=size(s);
	if(*(s+0)==' ') {
		for(int i=0;i<n;i++) {
			if(*(s+i)==' ') {
				for(int j=i;j<n-1;j++) {
					*(s+j)=*(s+j+1);
				}
				i--;
			}
		}
	}
}
void trim_right(char s[]) {
	int n=size(s);
	if(*(s+n-1)==' ') {
		for(int i=0;i<n;i++) {
			if(*(s+i)==' ') {
				for(int j=i;j<n-1;j++) {
					*(s+j)=*(s+j+1);
				}
				i--;
			}
		}
	}
}
int main() {
	char *s=new char [50];
	cin >> s;
	//reverse(s);
	//delete_char(s,'a');
	int n;
	cin >> n;
	//pad_right(s,n)
	//pad_left(s,n)
	//truncate(s,n);
	// cout << is_palindrome(s);
	//trim_left(s);
	//trim_right(s);
	cout << s;
	return 0;
}
