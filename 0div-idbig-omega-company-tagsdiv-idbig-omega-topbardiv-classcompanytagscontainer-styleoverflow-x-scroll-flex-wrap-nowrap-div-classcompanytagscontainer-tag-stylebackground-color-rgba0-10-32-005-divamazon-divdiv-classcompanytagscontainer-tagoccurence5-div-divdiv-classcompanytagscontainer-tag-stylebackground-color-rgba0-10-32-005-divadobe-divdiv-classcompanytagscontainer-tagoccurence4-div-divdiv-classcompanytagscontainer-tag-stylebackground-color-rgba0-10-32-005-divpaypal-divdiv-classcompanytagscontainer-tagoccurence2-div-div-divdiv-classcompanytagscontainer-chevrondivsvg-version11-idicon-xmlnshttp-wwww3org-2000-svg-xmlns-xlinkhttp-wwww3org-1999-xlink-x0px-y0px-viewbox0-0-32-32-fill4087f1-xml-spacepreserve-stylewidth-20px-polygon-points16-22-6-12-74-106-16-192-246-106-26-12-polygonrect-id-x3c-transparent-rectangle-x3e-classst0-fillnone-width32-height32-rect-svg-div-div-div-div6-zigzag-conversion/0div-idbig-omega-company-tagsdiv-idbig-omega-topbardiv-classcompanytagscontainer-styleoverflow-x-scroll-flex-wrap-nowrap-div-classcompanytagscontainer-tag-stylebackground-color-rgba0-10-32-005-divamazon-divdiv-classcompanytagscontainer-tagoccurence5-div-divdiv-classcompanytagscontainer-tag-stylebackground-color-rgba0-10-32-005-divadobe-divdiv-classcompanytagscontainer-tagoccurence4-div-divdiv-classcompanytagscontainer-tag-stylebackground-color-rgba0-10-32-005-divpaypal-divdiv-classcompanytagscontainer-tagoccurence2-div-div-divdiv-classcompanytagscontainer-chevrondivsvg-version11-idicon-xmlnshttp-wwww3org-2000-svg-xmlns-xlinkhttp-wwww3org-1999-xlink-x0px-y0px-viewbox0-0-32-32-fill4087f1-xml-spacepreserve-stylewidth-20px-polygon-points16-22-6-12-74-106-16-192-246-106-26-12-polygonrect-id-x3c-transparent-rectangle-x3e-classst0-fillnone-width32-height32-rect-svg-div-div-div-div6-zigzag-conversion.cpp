class Solution{
    public:
        string convert(string s, int numRows){
            if(numRows == 1)
                return s;
            int StringLength = s.length();
            string ZigZagString = string(StringLength, ' ');
            int RepeatLength = numRows;
            int DiagonalRepeatLength = 0;
            int CurrentIndex = 0;
            if(numRows > 2)
                RepeatLength += RepeatLength - 2;
            for(int row = 0; row < numRows && row < StringLength; ++row){
                if(numRows > 2)
                    DiagonalRepeatLength = (row % (numRows - 1)) * 2;
                for(int col = row; col - DiagonalRepeatLength < StringLength; col += RepeatLength ){
                    if(col - DiagonalRepeatLength >= 0)
                        ZigZagString[CurrentIndex++] = s[col - DiagonalRepeatLength];
                    if(DiagonalRepeatLength && col < StringLength)
                        ZigZagString[CurrentIndex++] = s[col];
                }
            }
            ZigZagString[CurrentIndex] = '\n';
            return ZigZagString;
        };
};