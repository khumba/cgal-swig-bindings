exec('build/SWIG_CGAL/Kernel/sciloader.sce', -1);
p1 = new_Point_2(1,2);
p2 = new_Point_2(0,0);
p3 = new_Point_2(2,3);

s1 = new_Segment_2(p1,p2);
s2 = new_Segment_2(p1,p3);

p4 = cgal.Segment_2.has_on(s1,p1)
p4 = cgal.Segment_2.has_on(s1,p3)
p4 = cgal.Segment_2.has_on(s2,p1)
p4 = cgal.Segment_2.has_on(s2,p2)
