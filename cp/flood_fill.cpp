#include <bits/stdc++.h>
using namespace std;
const int n = 1e5+10;

void dfs(int i, int j, int intialcolor, int newcolor, vector<vector<int>>& image){
    int n = image.size();
    int m = image[0].size();

    if(i>n) return;
    if(j>m) return;
    if(i<0) return;
    if(j<0) return;
    if(image[i][j] != newcolor) return;

    image[i][j] = newcolor;

    dfs(i-1, j, intialcolor, newcolor,image);
    dfs(i+1, j, intialcolor, newcolor,image);
    dfs(i, j-1, intialcolor, newcolor,image);
    dfs(i, j+1, intialcolor, newcolor,image);
}

vector<vector<int>> floodfill(<vector<vector<int>>& image, int r, int c, int newcolor){
    int intialcolor = image[r][j];
    if(intialcolor != newcolor)
    
}