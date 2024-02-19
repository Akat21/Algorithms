#ifndef OTHER_H
#define OTHER_H

#include "iostream"

class UnionFind{
    private:
        int *parent;

    public:
        UnionFind(int n);
        ~UnionFind();
        
        int find(int x);
        void Union(int x, int y);
        void makeSet();

};

void testUnionFind();


#endif