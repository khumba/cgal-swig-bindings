exec('build/SWIG_CGAL/Kernel/sciloader.sce', -1);
p1 = new_Point_2(1,2);
v1 = new_Vector_2(2,4);
p2 = cgal.Point_2.minus(p1,v1);
cgal.Point_2.toString(p2)
