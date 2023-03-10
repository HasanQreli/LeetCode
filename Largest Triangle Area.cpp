class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        
        double area,result=0;
        for(int i=0;i<points.size();i++){
            for(int j=i+1;j<points.size();j++){
                for(int k=j+1;k<points.size();k++){
                    area = (double)(points[i][0]*points[j][1] + 
                            points[j][0]*points[k][1] + 
                            points[k][0]*points[i][1] - 
                            points[i][0]*points[k][1] - 
                            points[j][0]*points[i][1] - 
                            points[k][0]*points[j][1])/2;
                    if(area<0) area=-area;
                    if(area>=result) result=area;
                    
                }
            }
        }
        return result;
        
    }
};
