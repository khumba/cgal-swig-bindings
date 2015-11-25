exec('build/SWIG_CGAL/Kernel/sciloader.sce', -1);
p1 = new_Point_2(1,2);
p2 = new_Point_2(0,0);
p3 = new_Point_2(1,2);
cgal.Point_2.equals(p1,p2)
cgal.Point_2.equals(p1,p3)
cgal.Point_2.equals(p2,p3)
