class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        int count = row*col;
        int startRow = 0;
        int startCol = 0;
        int endRow = row-1;
        int endCol = col-1;
        vector<int> ans;

        while(count != 0){
            //starting row
            for(int i=startCol; i<=endCol && count!=0;i++){
                ans.push_back(matrix[startRow][i]);
                count--;
            }
            startRow++;
            //ending col
            for(int i=startRow; i<=endRow && count!=0;i++){
                ans.push_back(matrix[i][endCol]);
                count--;
            }
            endCol--;
            //ending row
            for(int i=endCol; i>=startCol && count!=0;i--){
                ans.push_back(matrix[endRow][i]);
                count--;
            }
            endRow--;
            //starting column
            for(int i=endRow; i>=startRow && count!=0;i--){
                ans.push_back(matrix[i][startCol]);
                count--;
            }
            startCol++;
        }

        return ans;
    }
};