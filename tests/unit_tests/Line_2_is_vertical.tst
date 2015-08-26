exec('build/SWIG_CGAL/Kernel/sciloader.sce', -1);
p1 = new_Point_2(1,2);
p2 = new_Point_2(0,0);
p3 = new_Point_2(1,3);

l1 = new_Line_2(p2,p1);
l2 = new_Line_2(p2,p2);
l3 = new_Line_2(p1,p3);

p4 = cgal.Line_2.is_vertical(l1)
p4 = cgal.Line_2.is_vertical(l2)
p4 = cgal.Line_2.is_vertical(l3)
