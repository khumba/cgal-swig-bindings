p1 = new_Point_2(1,2);
p2 = new_Point_2(0,0);
p3 = new_Point_2(2,3);
v1 = new_Vector_2(p2,p1);
v2 = new_Vector_2(p2,p3);

d1 = new_Direction_2(v1);
p4 = cgal.Vector_2.direction(v1);
cgal.Direction_2.equals(p4,d1)

d2 = new_Direction_2(v2);
p4 = cgal.Vector_2.direction(v2);
cgal.Direction_2.equals(p4,d2)