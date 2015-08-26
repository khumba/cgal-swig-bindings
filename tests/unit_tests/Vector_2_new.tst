exec('build/SWIG_CGAL/Kernel/sciloader.sce', -1);
p1 = new_Point_2(1,2);
p2 = new_Point_2(0,0);
p3 = new_Point_2(2,3);

r1 = new_Ray_2(p3,p1);
s1 = new_Segment_2(p1,p3);
l1 = new_Line_2(p1,p3);

v1 = new_Vector_2(p1,p2);
cgal.Vector_2.toString(v1)
v1 = new_Vector_2(s1);
cgal.Vector_2.toString(v1)
v1 = new_Vector_2(r1);
cgal.Vector_2.toString(v1)
v1 = new_Vector_2(l1);
cgal.Vector_2.toString(v1)
v1 = new_Vector_2(5,7);
cgal.Vector_2.toString(v1)
v1 = new_Vector_2(2.33,7.99);
cgal.Vector_2.toString(v1)
