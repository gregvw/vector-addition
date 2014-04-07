import numpy as np
from vectoradd import printvec, addvec

if __name__ == '__main__':

    n = 10
    a = np.arange(n)
    b = 2*np.flipud(a)
    c = addvec(a,b)
    printvec(c) 

