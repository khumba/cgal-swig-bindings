exec('build/SWIG_CGAL/Kernel/sciloader.sce', -1);

l1 = new_Line_2(0, -1, 1);
p = new_Point_2(3, 5);
l2 = cgal.Line_2.perpendicular(l1, p);
a = cgal.Line_2.a(l2);
b = cgal.Line_2.b(l2);
c = cgal.Line_2.c(l2);
b == 0
-c / a == 3
