a1 = new_Arrangement_2();
a2 = cgal.Arrangement_2.deepcopy(a1);
p1 = new_Point_2(1,2);
p2 = new_Point_2(0,0);
s1 = new_Segment_2(p1,p2);
c1 = new_Curve_2(s1);

cgal.Arrangement_2.is_empty(a2)
face_hndl = cgal.Arrangement_2.fictitious_face(a1);
vertex_hndl = cgal.Arrangement_2.insert_in_face_interior(a1,p1,face_hndl);
halfedge_hndl = cgal.Arrangement_2.insert_in_face_interior(a1,c1,face_hndl);
cgal.Arrangement_2.is_empty(face_hndl)
cgal.Arrangement_2.is_empty(vertex_hndl)
cgal.Arrangement_2.is_empty(halfedge_hndl)