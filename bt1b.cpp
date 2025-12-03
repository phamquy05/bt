#include <iostream>
#include <vector> 
using namespace std;

int main(){
    // tạo ma trận
    int n;
    cout <<"nhap do lon ma tran n x n, n:";cin>> n;
    vector<vector<int>> matranke(n,vector<int>(n));
    // nhập dữ liệu vào ma trận
    cout<<"bat dau tao ma tran\n";
    for (int i = 0; i < n ; ++i)
        {for (int j= 0; j<n;++j)
            {cin >> matranke[i][j];
            };
        }
    // tạo danh sách cạnh từ ma trận    
    vector<pair<int,int>> danhsachcanh;
    for (int i=0;i<n;i++){
        for (int j=i + 1; j<n;j++){
            if (matranke[i][j]== 1){ danhsachcanh.push_back({i + 1, j + 1});
                    }
                }
            }
    // xuất danh sách cạnh        
   for (auto canh : danhsachcanh) {
        cout << canh.first << " " << canh.second << endl;
    }

    return 0;
}