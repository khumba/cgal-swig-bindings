exec('build/SWIG_CGAL/Kernel/sciloader.sce', -1);

l1 = new_Line_2(1, -1, 1);
c1 = new_Curve_2(l1);
l2 = cgal.Curve_2.line(c1);
cgal.Line_2.toString(l2)
