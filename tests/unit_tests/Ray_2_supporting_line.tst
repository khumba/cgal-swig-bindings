exec('build/SWIG_CGAL/Kernel/sciloader.sce', -1);
p1 = new_Point_2(1,2);
p2 = new_Point_2(0,0);

r1 = new_Ray_2(p1,p2);

p4 = cgal.Ray_2.supporting_line(r1);
cgal.Line_2.toString(p4)
