//  Copyright © 2017 Dougy Ouyang. All rights reserved.

#include <iostream>

using namespace std;

int main()
{
    int prefix[100005][3], n, q;
    int breed, s[100005], e[100005];
    int i;
    
    cin >> n >> q;
    for(i=1;i<=n;i++){
        if(i!=1){
            prefix[i][0]=prefix[i-1][0];
            prefix[i][1]=prefix[i-1][1];
            prefix[i][2]=prefix[i-1][2];
        }
        cin >> breed;
        prefix[i][breed-1]++;
    }
    for(i=0;i<q;i++){
        cin >> s[i] >> e[i];
    }
    
    for(i=0;i<q;i++){
        cout << prefix[e[i]][0]-prefix[s[i]-1][0] << " " << prefix[e[i]][1]-prefix[s[i]-1][1] << " " << prefix[e[i]][2]-prefix[s[i]-1][2] << endl;
    }
    return 0;
}
