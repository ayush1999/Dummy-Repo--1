from distutils.core import setup, Extension

name="fibo"
version="1.0"

ext_modules= Extension(name='_fibo',sources=["fibo.i","fibo.c"])

setup(name=name,
	version=version,
	ext_modules=[ext_modules])