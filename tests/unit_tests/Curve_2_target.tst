exec('build/SWIG_CGAL/Kernel/sciloader.sce', -1);
p1 = new_Point_2(1,2);
p2 = new_Point_2(0,0);
s1 = new_Segment_2(p2,p1);

c1 = new_Curve_2(s1);
p4 = cgal.Curve_2.target(c1);
cgal.Point_2.toString(p4)
