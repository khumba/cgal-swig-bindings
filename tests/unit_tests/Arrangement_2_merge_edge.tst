exec('build/SWIG_CGAL/Kernel/sciloader.sce', -1);
a1 = new_Arrangement_2();
p1 = new_Point_2(0,0);
p2 = new_Point_2(1,0);
p3 = new_Point_2(2,0)
face = cgal.Arrangement_2.fictitious_face(a1);
vert1 = cgal.Arrangement_2.insert_in_face_interior(a1, p1, face);
vert2 = cgal.Arrangement_2.insert_in_face_interior(a1, p2, face);
vert3 = cgal.Arrangement_2.insert_in_face_interior(a1, p3, face);
curve1 = new_Curve_2(new_Segment_2(p1, p2));
curve2 = new_Curve_2(new_Segment_2(p2, p3));
edge1 = cgal.Arrangement_2.insert_at_vertices(a1, curve1, vert1, vert2);
edge2 = cgal.Arrangement_2.insert_at_vertices(a1, curve2, vert2, vert3);
cgal.Arrangement_2.number_of_edges(a1)

mergedCurve = new_Curve_2(new_Segment_2(p1, p3));
cgal.Arrangement_2.merge_edge(a1, edge1, edge2, mergedCurve);
cgal.Arrangement_2.number_of_edges(a1)
