exec('build/SWIG_CGAL/Kernel/sciloader.sce', -1);
p1 = new_Point_2(1,2);
p2 = new_Point_2(0,0);
p3 = new_Point_2(2,3);
v1 = new_Vector_2(p1,p2);
l1 = new_Line_2(p1,p2);
v2 = new_Vector_2(p2,p3);
l2 = new_Line_2(p2,p3);
d1 = new_Direction_2(v1);
d2 = new_Direction_2(v2);

r1 = new_Ray_2(p1,p2);
r1 = new_Ray_2(p1,d1);
r1 = new_Ray_2(p1,v1);
r1 = new_Ray_2(p1,l1);

r2 = new_Ray_2(p2,p3);
r2 = new_Ray_2(p1,d2);
r2 = new_Ray_2(p1,v2);
r2 = new_Ray_2(p1,l2);
