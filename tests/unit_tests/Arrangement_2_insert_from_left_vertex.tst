exec('build/SWIG_CGAL/Kernel/sciloader.sce', -1);
a1 = new_Arrangement_2();
p1 = new_Point_2(0,0);
p2 = new_Point_2(1,0);
p3 = new_Point_2(2,1);
s1 = new_Segment_2(p1,p2);
c1 = new_Curve_2(s1);
s2 = new_Segment_2(p2,p3);
c2 = new_Curve_2(s2);

cgal.Arrangement_2.number_of_halfedges(a1)
face = cgal.Arrangement_2.fictitious_face(a1);
vert1 = cgal.Arrangement_2.insert_in_face_interior(a1,p1,face);
edge1 = cgal.Arrangement_2.insert_from_left_vertex(a1,c1,vert1);
edge2 = cgal.Arrangement_2.insert_from_left_vertex(a1,c2,edge1);
cgal.Arrangement_2.number_of_halfedges(a1)
