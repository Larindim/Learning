#include <string>
#include <vector>
#include <iostream>

using namespace std;
  
const size_t depth = 2;

template<typename T>
class Node
{
	
 typedef Node<T>* nodetype; 


public:
	void setValue(T* type) //??
	{
		data = type;
	}

	T* getValue()
	{
		return &data;
	}

	void addNode(nodetype node)
	{
		//nodes.push_back(node);
	}

	void getNode(size_t index)
	{
		//... find
	}


private:
       nodetype parent;
	vector<nodetype> nodes;
	T* data;
};



struct Type1    // áàçîâûé êëàññ
{
	string A;
	string B;
	int C;

     Type1(string a, string b, int c)
     {
       A=a, B=b; C=c;
     }
 
     ~Type1(){};
};


struct Type2    // áàçîâûé êëàññ
{
	string A;
	string B;
	int C;
       int *arr; 
	int N;

     Type2(string a, string b, int c, int size)
       {
         A=a; B=b; C=c; N=size;
	  arr = new int [2][size];
         for (int i = 0; i<size; i++)
           { cout << “input x(”<<i+1<<”) ”;
             cin >> *arr[0][i]>> endl;
             cout << “input y(”<<i+1<<”) ”;
             cin >> *arr[1][i] >> endl;
        }    
     
    }

  ~Type2()
    { delete [][]arr;};

};


struct Type3    
{

	string A;
	string B
int C;
	int D;
	int F;
	double G;

	Type3(string a, string b, int c, int d, int e, double f)
	{ 
         A=a; B=b; C=c; D=d; E=e; F=f;
       }

	~Type3()
	{
	}
};



int main()
{     string raz, dva;
      int try;
      cout << “input Name ”;
      getline(cin, raz);
      cout <<endl<< “input 2 Name”;
      getline(cin, dva);
      cout <<endl<< “input Age”;
      cin >> try
      
      
  
	Type1 t = new t (raz, dva, try);


	



	return 0;
}
