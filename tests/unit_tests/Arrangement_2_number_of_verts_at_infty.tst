// Can't really test this function without splitting a face; think we need
// CGAL::insert() for that.

exec('build/SWIG_CGAL/Kernel/sciloader.sce', -1);
a1 = new_Arrangement_2();
cgal.Arrangement_2.number_of_verts_at_infty(a1)
