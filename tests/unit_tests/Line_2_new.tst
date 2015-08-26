exec('build/SWIG_CGAL/Kernel/sciloader.sce', -1);
p1 = new_Point_2(1,2);
p2 = new_Point_2(0,0);
p3 = new_Point_2(2,3);
v1 = new_Vector_2(p1,p2);
r1 = new_Ray_2(p1,p2);
v2 = new_Vector_2(p2,p3);
r2 = new_Ray_2(p2,p3);
d1 = new_Direction_2(v1);
d2 = new_Direction_2(v2);
s2 = new_Segment_2(p2,p3);
s1 = new_Segment_2(p2,p1);

p4 = new_Line_2(p2,p1)
cgal.Line_2.toString(p4)
p4 = new_Line_2(p2,d2)
cgal.Line_2.toString(p4)
p4 = new_Line_2(p2,v2)
cgal.Line_2.toString(p4)
p4 = new_Line_2(s2)
cgal.Line_2.toString(p4)
p4 = new_Line_2(r2)
cgal.Line_2.toString(p4)
p4 = new_Line_2(p2,p3)
cgal.Line_2.toString(p4)
p4 = new_Line_2(p2,d1)
cgal.Line_2.toString(p4)
p4 = new_Line_2(p2,v1)
cgal.Line_2.toString(p4)
p4 = new_Line_2(s1)
cgal.Line_2.toString(p4)
p4 = new_Line_2(r1)
cgal.Line_2.toString(p4)
