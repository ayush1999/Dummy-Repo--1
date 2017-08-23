from distutils.core import setup, Extension

ex= Extension(name="example", sources=['fact_wrap.c','fact.c'])

setup(name="example", ext_modules=[ex])
