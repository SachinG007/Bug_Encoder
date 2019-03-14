#include <bits/stdc++.h> 
using namespace std; 

double similar(int a[], int b[], int la, int lb){
    //b is subset of a=> High Similarity
    //Eucledian distance is less => hihg score 
    //find number of common elements in both the arrays
    //sort array a and array b
    int num_sim = 0;
    int i = 0;
    int j = 0;
    // la = a.size()
    // lb = b.size()
    while(i<la && j<lb){

        if(a[i]==b[j]){
            num_sim++;
            i++;
            j++;
        }
        else if(a[i]<b[j]){
            i++;
        }
        else{
            j++;
        }
    }

    return num_sim;
}

int main() 
{ 
    int a[] = {1,2,56,7,4};
    int b[] = {22,55,6,8,1,2,3,9,88};
    int n1 = sizeof(a)/sizeof(a[0]); 
    sort(a, a+n1); 
    int n2 = sizeof(b)/sizeof(b[0]); 
    sort(b, b+n2); 

    double same_els = similar(a,b,n1,n2);
    //if one string is quite large, then number of dissimilar elements will also be large
    //so simply dividing similar by non similar elements
    double sim_score = same_els/(n1+n2-same_els);
    
    cout << sim_score;
    return 0; 
} 