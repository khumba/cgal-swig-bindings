p1 = new_Point_2(1,2);
p2 = new_Point_2(0,0);
p3 = new_Point_2(1,3);

l1 = new_Line_2(p2,p1);
l2 = new_Line_2(p2,p2);
l3 = new_Line_2(p1,p3);

p4 = cgal.Line_2.to_vector(l1)
cgal.Vector_2.toString(p4)
p4 = cgal.Line_2.to_vector(l2)
cgal.Vector_2.toString(p4)
p4 = cgal.Line_2.to_vector(l3)
cgal.Vector_2.toString(p4)
