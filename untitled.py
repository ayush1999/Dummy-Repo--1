from disutils.core import setup, Extensions

module= Extension('myModule', sources=['myModule.c'])

setup(name='PackageName',
	version='1.0',
	description="Package for my fib",
	ext_modules=[module])
