from distutils.core import setup, Extension
name="prime"
version="1.0"

ext_modules= Extension(name='_prime', sources=["prime.i","prime.c"])

setup(name=name,
	version=version,
	ext_modules=[ext_modules])
