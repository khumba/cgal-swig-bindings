exec('build/SWIG_CGAL/Kernel/sciloader.sce', -1);
p1 = new_Point_2(1,2);
p2 = new_Point_2(0,0);
p3 = new_Point_2(2,3);
v1 = new_Vector_2(p1,p2);
d1 = new_Direction_2(v1);

r1 = new_Ray_2(p1,d1);
p4 = cgal.Ray_2.direction(r1);

cgal.Direction_2.equals(d1,p4)
