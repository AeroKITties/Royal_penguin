#include <vector>

class Vector3{
private:
    std::vector<int> vec;
public:
    Vector3(){ 
	vec = {0, 0, 0}; 
    }
    
    Vector3(int f, int s, int t){
        vec = std::vector<int>{f, s, t};
    }
    
    int& operator[] (int i) {
        return vec[i];
    }
};

