from distutils.core import setup,Extension
name="class"
version="1.0"

ext_modules= Extension(name="_class", sources=["class.cpp","class.i"])

setup(name=name,
 version=version,
 ext_modules=[ext_modules])