a1 = new_Arrangement_2();
a2 = cgal.Arrangement_2.deepcopy(a1);
p1 = new_Point_2(1,2);
p2 = new_Point_2(0,0);
s1 = new_Segment_2(p1,p2);
c1 = new_Curve_2(s1);

cgal.Arrangement_2.number_of_halfedges(a1)
face_hndl = cgal.Arrangement_2.fictitious_face(a1);
halfedge_hndl = cgal.Arrangement_2.insert_in_face_interior(a1,c1,face_hndl);
vertex_hndl = cgal.Arrangement_2.insert_in_face_interior(a1,p2,face_hndl)
halfedge_hndl1 = cgal.Arrangement_2.insert_from_left_vertex(a1,c1,vertex_hndl)
cgal.Arrangement_2.number_of_halfedges(a1)
