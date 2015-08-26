exec('build/SWIG_CGAL/Kernel/sciloader.sce', -1);
p1 = new_Point_2(1,2);
p2 = new_Point_2(0,0);
p3 = new_Point_2(2,3);

s1 = new_Segment_2(p1,p2);
s2 = new_Segment_2(p1,p3);
s3 = cgal.Segment_2.deepcopy(s1);

p4 = cgal.Segment_2.bbox(s1)
cgal.Bbox_2.dimension(p4)
p4 = cgal.Segment_2.bbox(s2)
cgal.Bbox_2.dimension(p4)
p4 = cgal.Segment_2.bbox(s3)
cgal.Bbox_2.dimension(p4)
