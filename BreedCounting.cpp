/*

This is free and unencumbered software released into the public domain.

Anyone is free to copy, modify, publish, use, compile, sell, or
distribute this software, either in source code form or as a compiled
binary, for any purpose, commercial or non-commercial, and by any
means.

In jurisdictions that recognize copyright laws, the author or authors
of this software dedicate any and all copyright interest in the
software to the public domain. We make this dedication for the benefit
of the public at large and to the detriment of our heirs and
successors. We intend this dedication to be an overt act of
relinquishment in perpetuity of all present and future rights to this
software under copyright law.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
OTHER DEALINGS IN THE SOFTWARE.

For more information, please refer to <http://unlicense.org/>

*/


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
