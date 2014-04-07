# distutils: language = c++
# distutils: sources = vecadd.cpp

import cython
import numpy as np
cimport numpy as np
from libcpp.vector cimport vector

cdef extern from "vectoradd.hpp":
    void printvector(const vector[double]&)
    vector[double] addvectors(const vector[double]&,
                    const vector[double]&)

def printvec(const vector[double]& a):
    print("printing vector of length " + str(a.size()))
    printvector(a)

def addvec(vector[double] a,vector[double] b):
    
    return addvectors(a,b)


