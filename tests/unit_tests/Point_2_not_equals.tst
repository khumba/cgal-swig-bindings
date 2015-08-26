exec('build/SWIG_CGAL/Kernel/sciloader.sce', -1);
p1 = new_Point_2(1,2);
p2 = new_Point_2(2,3);
p3 = cgal.Point_2.deepcopy(p1);
p4 = cgal.Point_2.not_equals(p1,p2)
p5 = cgal.Point_2.not_equals(p1,p3)
p6 = cgal.Point_2.not_equals(p2,p1)
