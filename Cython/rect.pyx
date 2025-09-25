# rect.pyx
# distutils: language = c++
# distutils: sources = Rectangle.cpp

from Rectangle cimport Rectangle

cdef class PyRectangle:
    cdef Rectangle c_rect   # hold the C++ object

    def __init__(self, int x0, int y0, int x1, int y1):
        self.c_rect = Rectangle(x0, y0, x1, y1)

    def get_area(self):
        return self.c_rect.getArea()

    def get_size(self):
        cdef int w, h
        self.c_rect.getSize(&w, &h)
        return w, h

    def move(self, dx, dy):
        self.c_rect.move(dx, dy)
