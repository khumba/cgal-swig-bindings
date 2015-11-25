exec('build/SWIG_CGAL/Kernel/sciloader.sce', -1);

l1 = new_Line_2(0, -1, 1);
p1 = new_Point_2(3, 5);
p2 = cgal.Line_2.projection(l1, p1);
cgal.Point_2.toString(p2)
