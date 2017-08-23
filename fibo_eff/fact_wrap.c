#include "Python.h"
#include "fact.h"

static PyObject* fact_wrapper( PyObject* self, PyObject* args){
	int num,res;
	if(!PyArg_ParseTuple(args,"i",&num)){
		return NULL;
	}
	res=fact(num);
	return Py_BuildValue("i",res);
}

static PyMethodDef ExampleMethods[]={
	{"fact", fact_wrapper, METH_VARARGS, "Print the factorial of any number"},
	{NULL, NULL, 0, NULL}
};

PyMODINIT_FUNC initexample(void){
	(void) Py_InitModule("example",ExampleMethods);
}

