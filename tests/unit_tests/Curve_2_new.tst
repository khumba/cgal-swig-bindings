exec('build/SWIG_CGAL/Kernel/sciloader.sce', -1);
p1 = new_Point_2(1,2);
p2 = new_Point_2(0,0);
p3 = new_Point_2(2,3);

l1 = new_Line_2(p2,p1);
r1 = new_Ray_2(p2,p1);
s1 = new_Segment_2(p2,p1);

c1 = new_Curve_2(l1);
cgal.Curve_2.is_segment(c1)
cgal.Curve_2.is_ray(c1)
cgal.Curve_2.is_line(c1)

c2 = new_Curve_2(r1);
cgal.Curve_2.is_ray(c2)
cgal.Curve_2.is_segment(c2)
cgal.Curve_2.is_line(c2)

c3 = new_Curve_2(s1);
cgal.Curve_2.is_line(c3)
cgal.Curve_2.is_segment(c)
cgal.Curve_2.is_ray(c3)


