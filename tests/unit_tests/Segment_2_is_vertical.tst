p1 = new_Point_2(1,2);
p2 = new_Point_2(0,0);
p3 = new_Point_2(2,3);
p5 = new_Point_2(1,3);

s1 = new_Segment_2(p1,p2);
s2 = new_Segment_2(p1,p1);
s3 = new_Segment_2(p1,p5);

cgal.Segment_2.is_vertical(s1)
cgal.Segment_2.is_vertical(s2)
cgal.Segment_2.is_vertical(s3)
