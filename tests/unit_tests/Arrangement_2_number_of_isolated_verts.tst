exec('build/SWIG_CGAL/Kernel/sciloader.sce', -1);
a1 = new_Arrangement_2();
p1 = new_Point_2(1,2);
p2 = new_Point_2(0,0);
face_hndl = cgal.Arrangement_2.fictitious_face(a1);

cgal.Arrangement_2.number_of_isolated_verts(a1)
vertex_hndl = cgal.Arrangement_2.insert_in_face_interior(a1,p1,face_hndl)
cgal.Arrangement_2.number_of_isolated_verts(a1)
vertex_hndl = cgal.Arrangement_2.insert_in_face_interior(a1,p2,face_hndl)
cgal.Arrangement_2.number_of_isolated_verts(a1)
