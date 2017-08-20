#include <Python.h>

int cfib(int n){
	if (n<2){
		return n;
	}
	else {
		return cfib(n-1)+cfib(n-2);
	}
}

static PyObject* fib(PyObject* self, PyObject* args){
	int n;
	if (!PyArg_ParseTuple(args,"i",&n)){
		return NULL;
	}
	return Py_BuildValue("i",cfib(n));
}

static PyObject* version(PyObject* self){
	return Py_BuildValue("s","Version 1.0");
}

static PyMethodDef myMethods[]={
	{"fib",fib,METH_VARARGS,"Calculate the fib number"},
	{"version",version,METH_NOARGS,"Returns the version" },
	{NULL, NULL, 0, NULL}
}
PyMODINIT_func initmyModule(void){
	(void) Py_InitModule("myModule",myMethods);
}