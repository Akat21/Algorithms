#include "Other.h"

UnionFind::UnionFind(int n){
    this->parent = new int[n];

    makeSet();
}

UnionFind::~UnionFind(){
}

void UnionFind::makeSet(){
    for(int i = 0; i < sizeof(this->parent); i++){
        this->parent[i] = i;
    }
}

int UnionFind::find(int x){
   if(this->parent[x] != x){
       this->parent[x] = find(this->parent[x]);
   }

    return this->parent[x];
}

void UnionFind::Union(int x, int y){
    int xRoot = find(x);
    int yRoot = find(y);

    if(xRoot == yRoot){
        return;
    }

    parent[xRoot] = yRoot;
}

void testUnionFind(){
    UnionFind uf(10); 

    uf.Union(0, 2); //[0, 2]
	uf.Union(4, 2); //[0, 4, 2]
	uf.Union(3, 1); //[[0, 4, 2], [1, 3]]
    uf.Union(5, 6); //[[0, 4, 2], [1, 3], [5, 6]]

    std::cout << uf.find(5) << std::endl;

	if (uf.find(4) == uf.find(0))
		std::cout << "Yes" << std::endl;
	else
		std::cout << "No" << std::endl;
	if (uf.find(1) == uf.find(0))
		std::cout << "Yes" << std::endl;
	else
		std::cout << "No" << std::endl;
}

