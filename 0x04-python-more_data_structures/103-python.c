#include <Python.h>
void print_python_list(PyObject *p)
{
	if (!PyList_Check(p))
	{
		fprintf(stderr, "Invalid PyListObject\n");
		return;
	}

	Py_ssize_t size = PyList_Size(p);
	PyObject *item;
	Py_ssize_t i;

	printf("[*] Python list info\n");
	printf("[*] Size of the Python List = %ld\n", size);
	printf("[*] Allocated = %ld\n", ((PyListObject *)p)->allocated);

	for (i = 0; i < size; i++)
	{
		item = PyList_GetItem(p, i);
		printf("Element %ld: %s\n", i, Py_TYPE(item)->tp_name);
	}
}

void print_python_bytes(PyObject *p)
{
	if (!PyBytes_Check(p))
	{
		fprintf(stderr, "Invalid PyBytesObject\n");
		return;
	}

	Py_ssize_t size = PyBytes_Size(p);
	Py_ssize_t i;

	printf("[.] bytes object info\n");
	printf("  size: %ld\n", size);
	printf("  trying string: %s\n", ((PyBytesObject *)p)->ob_sval);

	printf("  first %ld bytes: ", (size < 10 ? size + 1 : 10))
		for (i = 0; i < size && i < 10; i++)
			printf("%02x%c", (unsigned char)((PyBytesObject *)p)->ob_sval[i], i == 9 || i == size - 1 ? '\n' : ' ');
}
