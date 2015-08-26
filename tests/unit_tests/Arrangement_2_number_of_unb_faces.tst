exec('build/SWIG_CGAL/Kernel/sciloader.sce', -1);
a1 = new_Arrangement_2();
a2 = cgal.Arrangement_2.deepcopy(a1);
p1 = new_Point_2(1,2);
p2 = new_Point_2(0,0);
s1 = new_Segment_2(p1,p2);
c1 = new_Curve_2(s1);

cgal.Arrangement_2.number_of_unb_faces(a1)
face_hndl = cgal.Arrangement_2.unbounded_face(a1);
cgal.Arrangement_2.insert_in_face_interior(a1,c1,face_hndl);
cgal.Arrangement_2.number_of_unb_faces(a1)
