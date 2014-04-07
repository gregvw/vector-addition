from distutils.core import setup
from distutils.extension import Extension
from Cython.Distutils import build_ext
import numpy
import os

os.environ["CC"] = "g++"
os.environ["CXX"] = "g++"

setup( name = 'vectoradd',
       version = '0.1',
       author = 'Greg von Winckel',
       description = 'Add vectors with C++ and Cython',
       ext_modules=[Extension("vectoradd",
                        sources=["vecadd.pyx","vectoradd.cpp"],
                        language="c++",
                        include_dirs=[numpy.get_include()])
       ],
       cmdclass = {'build_ext': build_ext},
)                                  
