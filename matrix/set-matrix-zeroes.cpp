class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();

        bool frz=0,fcz=0;
        for(int i=0;  i<m; i++){
            if(matrix[i][0]==0){
                fcz=1;
                break;
            }
        }
        for(int i=0;  i<n; i++){
            if(matrix[0][i]==0){
                frz=1;
                break;
            }
        }
        for(int i=1; i<m; i++){
            for(int j=1; j<n; j++){
                if(matrix[i][j]==0){
                    matrix[0][j]=0;
                    matrix[i][0]=0;
                }
            }
        }
                for(int i=1; i<m; i++){
                    for(int j=1; j<n; j++){
                        if(matrix[i][0]==0 || matrix[0][j]==0){
                            matrix[i][j]=0;
                        }

                        }
            
                }
                
       if(frz==1){
        for(int i=0; i<n; i++){
            matrix[0][i]=0;
        }
       }
       if(fcz==1){
        for(int i=0; i<m; i++){
            matrix[i][0]=0;
        }
       }
       






        // vector <int> row(m,0),col(n,0);
        // for(int i=0; i<m; i++){
        //     for(int j=0; j<n; j++){
        //         if(matrix[i][j]==0){
        //             row[i]=1;
        //             col[j]=1;
        //         }
        //     }
        // }
        // for(int i=0;i<m; i++){
        //     for(int j=0; j<n; j++){
        //         if(row[i]==1 || col[j]==1) matrix[i][j]=0;
        //     }
        // }
        

        
    }
};