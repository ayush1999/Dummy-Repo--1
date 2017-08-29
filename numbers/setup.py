from distutils.core import setup, Extension

name="number"
version="1.0"

ext_modules=Extension(name="_number",swig_opts=["-c++"], sources=["number.i","number.cxx"])

setup(name=name,
    version=version,
    ext_modules=[ext_modules])