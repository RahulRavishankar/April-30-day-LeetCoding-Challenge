/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * class BinaryMatrix {
 *   public:
 *     int get(int x, int y);
 *     vector<int> dimensions();
 * };
 */

class Solution {
public:
    int leftMostColumnWithOne(BinaryMatrix &binaryMatrix) {
        vector<int> v=binaryMatrix.dimensions();
        int n=v[0]; int m=v[1];
        int i=0; int j=m-1;
        int result=-1;
        while(i<n && j>=0)
        {
            if(binaryMatrix.get(i,j)==0)
                i++;
            else 
                result=j, j--;
        }
        return result;
        
    }
};
