exec('build/SWIG_CGAL/Kernel/sciloader.sce', -1);
p1 = new_Point_2(1,2);
p2 = new_Point_2(0,0);
p3 = new_Point_2(2,3);
v1 = new_Vector_2(p2,p1);
v2 = new_Vector_2(p2,p3);
v3 = cgal.Vector_2.deepcopy(v1);

cgal.Vector_2.not_equals(v1,v3)
cgal.Vector_2.not_equals(v1,v2)
cgal.Vector_2.not_equals(p5,v3)

