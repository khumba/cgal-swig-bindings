exec('build/SWIG_CGAL/Kernel/sciloader.sce', -1);
p1 = new_Point_2(1,2);
p2 = new_Point_2(0,0);
p3 = new_Point_2(2,3);
v1 = new_Vector_2(p1,p2);
r1 = new_Ray_2(p1,p2);
v2 = new_Vector_2(p2,p3);
r2 = new_Ray_2(p2,p3);
s2 = new_Segment_2(p2,p3);
s1 = new_Segment_2(p2,p1);
l1 = new_Line_2(p2,p1);
l2 = new_Line_2(p2,p3);

d1 = new_Direction_2(v1);
d2 = new_Direction_2(v2);
cgal.Direction_2.toString(d1)
cgal.Direction_2.toString(d2)
d1 = new_Direction_2(l1);
d2 = new_Direction_2(l2);
cgal.Direction_2.toString(d1)
cgal.Direction_2.toString(d2)
d1 = new_Direction_2(r1);
d2 = new_Direction_2(r2);
cgal.Direction_2.toString(d1)
cgal.Direction_2.toString(d2)
d1 = new_Direction_2(s1);
d2 = new_Direction_2(s2);
cgal.Direction_2.toString(d1)
cgal.Direction_2.toString(d2)
d1 = new_Direction_2(3,4);
d2 = new_Direction_2(4,5);
cgal.Direction_2.toString(d1)
cgal.Direction_2.toString(d2)
