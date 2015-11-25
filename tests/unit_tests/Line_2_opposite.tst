exec('build/SWIG_CGAL/Kernel/sciloader.sce', -1);

l1 = new_Line_2(1, -1, 1);
l2 = cgal.Line_2.opposite(l1);
[cgal.Line_2.a(l2), cgal.Line_2.b(l2), cgal.Line_2.c(l2)]
