class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>>row(9);
        vector<unordered_set<char>>cols(9);
        vector<unordered_set<char>>box(9);

        for(int i=0; i<9; i++)
        {
            for(int j=0; j<9; j++){
                char ch = board[i][j];
                int boardIndex = (i/3)*3 + (j/3);

                if(ch == '.')
                    continue;
                if(row[i].count(ch) || cols[j].count(ch) || box[boardIndex].count(ch))
                    return false;
                
                row[i].insert(ch);
                cols[j].insert(ch);
                box[boardIndex].insert(ch);
            }
        }
        return true;
    }
};
