exec('build/SWIG_CGAL/Kernel/sciloader.sce', -1);
p1 = new_Point_2(1,2);
p2 = new_Point_2(0,0);
p3 = new_Point_2(2,3);
s1 = new_Segment_2(p1,p2);
s2 = new_Ray_2(p3,p1);

c1 = new_Curve_2(s1);
p4 = cgal.Curve_2.target(c1);
cgal.Point_2.toString(p4)
c2 = new_Curve_2(s2);
p4 = cgal.Curve_2.target(c2);
cgal.Point_2.toString(p4)
