exec('build/SWIG_CGAL/Kernel/sciloader.sce', -1);

l = new_Line_2(1, -1, 1);
p = cgal.Line_2.point(l, 1);
x = cgal.Point_2.x(p);
y = cgal.Point_2.y(p);
0 == x - y + 1
