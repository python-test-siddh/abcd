#include <Python.h>
#include <stdio.h>

long nc(long long a,long long b)
{
	return a-b+30;
}
static PyObject *foo_bar(PyObject *self, PyObject *args)
{
if (!PyArg_ParseTuple(args, ""))
return NULL;

long long a = 100234234;  long long b = 22342342;  long long c = 341342;
nc=nc(a,b)


return Py_BuildValue("L", nc);
}




static PyMethodDef FooMethods[] = {
{"moku",  foo_bar, METH_VARARGS},
{NULL, NULL}  /* Sentinel */
};

static struct PyModuleDef foo_bar_module = {
    PyModuleDef_HEAD_INIT,
    "moku",
    "Python interface for the fputs C library function",
    -1,
    FooMethods
};




PyMODINIT_FUNC PyInit_moku(void) {
    return PyModule_Create(&foo_bar_module);
}
