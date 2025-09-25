import rect

r = rect.PyRectangle(1, 2, 3, 4)
print(r.get_area())   # 4
print(r.get_size())   # (2, 2)
r.move(5, 5)
print(r.get_area())   # still 4, but moved
