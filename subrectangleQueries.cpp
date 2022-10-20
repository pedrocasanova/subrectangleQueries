class SubrectangleQueries 
{
    public:
    vector<vector<int>> matrix;
    SubrectangleQueries(vector<vector<int>>& rectangle) 
    {
        matrix = rectangle;
        
    }
    
    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) 
    {
        for(int i = col1; i < col2; i++)
        {
            for(int j = row1; j < row2; j++)
            {
                matrix[i][j] = newValue;
                /* for (int i = 0; i < 4; i++)
                {
                    for(int j = 0; j < 3; j++)
                    {
                        cout << matrix[i][j];
                    }
                    cout << endl;
                }
                cout << endl; */
            }
        }
    }
    
    int getValue(int row, int col) 
    {
        return matrix[row][col];
    }
};

/**
 * Your SubrectangleQueries object will be instantiated and called as such:
 * SubrectangleQueries* obj = new SubrectangleQueries(rectangle);
 * obj->updateSubrectangle(row1,col1,row2,col2,newValue);
 * int param_2 = obj->getValue(row,col);
 */