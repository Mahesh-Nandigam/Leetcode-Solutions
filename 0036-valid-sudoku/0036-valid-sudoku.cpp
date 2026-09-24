class Solution {
public:
bool isrow(vector<vector<char>>& board,int i,char num){
int ct=0;
for(int j=0;j<9;j++){
    if(board[i][j]==num)
    ct++;
}
if(ct>=2)
return false;
return true;
}
bool iscol(vector<vector<char>>& board,int j,char num){
int ct=0;
for(int i=0;i<9;i++){
    if(board[i][j]==num)
    ct++;
}
if(ct>=2)
return false;
return true;
}
bool ismat3(vector<vector<char>>&board,int i,int j,char num){
int ct=0;
int row=i/3;
int col=j/3;
row*=3;
col*=3;
for(int a=row;a<=row+2;a++){
    for(int b=col;b<=col+2;b++){
        if(board[a][b]==num)
        ct++;
    }
}
if(ct>=2)
return false;
return true;
}
    bool isValidSudoku(vector<vector<char>>& board) {
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(board[i][j]!='.'){
            int num=board[i][j];
            if(iscol(board,j,num) && isrow(board,i,num) && ismat3(board,i,j,num))
            continue;
            else
                return false;
            }
        }
        
    }
    return true;
    }
};