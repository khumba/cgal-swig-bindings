exec('build/SWIG_CGAL/Kernel/sciloader.sce', -1);
p1 = new_Point_2(1,2);
p2 = new_Point_2(0,0);
p3 = new_Point_2(2,3);

v1 = new_Vector_2(p2,p1);
v2 = new_Vector_2(p2,p3);
v3 = cgal.Vector_2.deepcopy(v1);
v4 = new_Vector_2(0,0);
v5 = new_Vector_2(p3,p3);

cgal.Vector_2.equals(v2,v1)
cgal.Vector_2.equals(v1,v3)
cgal.Vector_2.equals(v4,v3)
cgal.Vector_2.equals(v4,v5)
