#ifndef SWIG_CGAL_KERNEL_CURVE_2_IMPL_H
#define SWIG_CGAL_KERNEL_CURVE_2_IMPL_H

#include <SWIG_CGAL/Kernel/Point_2_decl.h>
#include <SWIG_CGAL/Kernel/Ray_2_decl.h>
#include <SWIG_CGAL/Kernel/Line_2_decl.h>
#include <SWIG_CGAL/Kernel/Segment_2_decl.h>

//member functions involving elements that are in include conflict 2
Curve_2::Curve_2(const Segment_2& seg):data(seg.get_data()){}
Curve_2::Curve_2(const Ray_2& ray):data(ray.get_data()){}
Curve_2::Curve_2(const Line_2& ln):data(ln.get_data()){}
SWIG_CGAL_FORWARD_CALL_AND_REF_SCOPE_0(Point_2,Curve_2::source,source)
SWIG_CGAL_FORWARD_CALL_AND_REF_SCOPE_0(Point_2,Curve_2::target,target)
SWIG_CGAL_FORWARD_CALL_AND_REF_SCOPE_0(Line_2,Curve_2::line,line)
SWIG_CGAL_FORWARD_CALL_AND_REF_SCOPE_0(Line_2,Curve_2::supporting_line,supporting_line)
SWIG_CGAL_FORWARD_CALL_AND_REF_SCOPE_0(Ray_2,Curve_2::ray,ray)
SWIG_CGAL_FORWARD_CALL_AND_REF_SCOPE_0(Segment_2,Curve_2::segment,segment)

#endif	// SWIG_CGAL_KERNEL_CURVE_2_H
