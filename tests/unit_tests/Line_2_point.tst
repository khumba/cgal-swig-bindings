exec('build/SWIG_CGAL/Kernel/sciloader.sce', -1);
p1 = new_Point_2(1,2);
p2 = new_Point_2(0,0);
p3 = new_Point_2(1,3);

l1 = new_Line_2(p2,p1);
l2 = new_Line_2(p2,p2);
l3 = new_Line_2(p1,p3);

p4 = cgal.Line_2.point(l1,1)
cgal.Point_2.toString(p4)
p4 = cgal.Line_2.point(l2,2)
cgal.Point_2.toString(p4)
p4 = cgal.Line_2.point(l3,3)
cgal.Point_2.toString(p4)
