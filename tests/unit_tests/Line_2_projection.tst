exec('build/SWIG_CGAL/Kernel/sciloader.sce', -1);
p1 = new_Point_2(1,2);
p2 = new_Point_2(0,0);
p3 = new_Point_2(1,3);

l1 = new_Line_2(p2,p1);
l2 = new_Line_2(p2,p2);
l3 = new_Line_2(p1,p3);

p4 = cgal.Line_2.projection(l1,p1)
cgal.Point_2.toString(p4)
p4 = cgal.Line_2.projection(l2,p2)
cgal.Point_2.toString(p4)
p4 = cgal.Line_2.projection(l3,p3)
cgal.Point_2.toString(p4)
