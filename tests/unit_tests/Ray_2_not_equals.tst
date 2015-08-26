exec('build/SWIG_CGAL/Kernel/sciloader.sce', -1);
p1 = new_Point_2(1,2);
p2 = new_Point_2(0,0);
p3 = new_Point_2(2,3);

r1 = new_Ray_2(p1,p2);
r2 = new_Ray_2(p2,p1);
r3 = cgal.Ray_2.deepcopy(r1);

p4 = cgal.Ray_2.not_equals(r2,r3)
r2 = new_Ray_2(p2,p3);
p4 = cgal.Ray_2.not_equals(r2,r3)
p4 = cgal.Ray_2.not_equals(r1,r3)

