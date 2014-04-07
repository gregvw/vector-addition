#include"vectoradd.hpp"


void printvector(const std::vector<double> &a){
    for(unsigned int k=0; k<a.size(); ++k) {
        std::cout << a[k] << std::endl;
    }
}

dvec addvectors(const std::vector<double> &a,
                const std::vector<double> &b){
 
    dvec c;
    for(unsigned int k=0; k<a.size(); ++k) {
        c.push_back(a[k]+b[k]);
    }
    return c;
}


int main()
{
    int n = 3;
    std::vector<double> a(n,0);
    std::vector<double> b(n,3);
    std::vector<double> c(n,0);

    for(int k=0;k<n;++k){
        a[k] = k;
    }
    
    c = addvectors(a,b);
    for(int k=0; k<a.size(); ++k) {
        std::cout << a[k] << "," << b[k] << "," << c[k] << std::endl;
    }
//    printvector(c);
 
}
