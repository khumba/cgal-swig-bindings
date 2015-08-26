exec('build/SWIG_CGAL/Kernel/sciloader.sce', -1);
p1 = new_Point_2(1,2);
p2 = new_Point_2(0,0);
p3 = new_Point_2(2,3);

s1 = new_Segment_2(p1,p2);
s2 = new_Segment_2(p1,p3);

p4 = cgal.Segment_2.supporting_line(s1)
cgal.Line_2.toString(p4)
p4 = cgal.Segment_2.supporting_line(s2)
cgal.Line_2.toString(p4)
