exec('build/SWIG_CGAL/Kernel/sciloader.sce', -1);
p1 = new_Point_2(1,2);
p2 = new_Point_2(0,0);
p3 = new_Point_2(2,3);
v1 = new_Vector_2(p1,p2);
v2 = new_Vector_2(p2,p3);

d1 = new_Direction_2(v1);
d2 = new_Direction_2(v2);
d3 = cgal.Direction_2.deepcopy(d1)

p4 = cgal.Direction_2.minus(d1)
cgal.Direction_2.toString(p4)
p4 = cgal.Direction_2.minus(d2)
cgal.Direction_2.toString(p4)
p4 = cgal.Direction_2.minus(d3)
cgal.Direction_2.toString(p4)
