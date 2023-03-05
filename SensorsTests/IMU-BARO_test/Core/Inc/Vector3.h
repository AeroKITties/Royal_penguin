template <typename T>
class Vector3{
private:
    T data[3];
public:
    Vector3() {
    	T data[3] {T{}, T{}, T{}};
    }
    
    Vector3(T f, T s, T t) {
    	T data[3] {f, s, t};
    }
    
    T& operator[] (T i) {
        return data[i];
    }

    const T& operator[] (T i) const {
            return data[i];
        }
};

using Vector3i = Vector3<int>;
using Vector3f = Vector3<float>;

