exec('build/SWIG_CGAL/Kernel/sciloader.sce', -1);
p1 = new_Point_2(1,2);
p4 = cgal.Point_2.deepcopy(p1)
cgal.Point_2.toString(p4)
p5 = cgal.Point_2.not_equals(p1,p4)

