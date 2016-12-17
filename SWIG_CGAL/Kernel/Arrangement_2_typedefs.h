//typedefs for Arrangement_2 class

#ifndef SWIG_CGAL_KERNEL_ARRANGEMENT_2_TYPEDEFS_DEF_H
#define SWIG_CGAL_KERNEL_ARRANGEMENT_2_TYPEDEFS_DEF_H

#include <sstream>
#include <CGAL/Arrangement_2.h>
#include <CGAL/Arr_linear_traits_2.h>

typedef Arr_traits::Vector_2 Vector_2;
typedef Arr_traits::Curve_2 Curve_2;
typedef Arr_traits::Point_2 Point_2;
typedef Arr_traits::Line_2 Line_2;
typedef Arr_traits::Ray_2 Ray_2;
typedef Arr_traits::Segment_2 Segment_2;
typedef Arr_traits::X_monotone_curve_2 X_monotone_curve_2;

typedef Arrangement_2::Vertex_handle Vertex_handle;
typedef Arrangement_2::Halfedge_handle Halfedge_handle;
typedef Arrangement_2::Face_handle Face_handle;
typedef Arrangement_2::Vertex_const_handle Vertex_const_handle;
typedef Arrangement_2::Halfedge_const_handle Halfedge_const_handle;
typedef Arrangement_2::Face_const_handle Face_const_handle;
typedef Arrangement_2::Vertex_iterator Vertex_iterator;
typedef Arrangement_2::Halfedge_iterator Halfedge_iterator;
typedef Arrangement_2::Edge_iterator Edge_iterator;
typedef Arrangement_2::Face_iterator Face_iterator;
typedef Arrangement_2::Halfedge_around_vertex_circulator Halfedge_around_vertex_circulator;
typedef Arrangement_2::Ccb_halfedge_circulator Ccb_halfedge_circulator;
typedef Arrangement_2::Unbounded_face_iterator Unbounded_face_iterator; 

#endif
