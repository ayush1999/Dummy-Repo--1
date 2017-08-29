from distutils.core import setup, Extension

name="powerlaw"
version="1.0"

ext_modules= Extension(name='_powerlaw',sources=["powerlaw.i","powerlaw.cxx"])

setup(name=name,
	version=version,
	ext_modules=[ext_modules])