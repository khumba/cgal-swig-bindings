// Function Wrapper file for Arrangement_2 Class of CGAL
// Since it contains direct CGAL includes


#ifndef SWIG_CGAL_KERNEL_ARRANGEMENT_2_DEF_H
#define SWIG_CGAL_KERNEL_ARRANGEMENT_2_DEF_H

#include <sstream>
#include <SWIG_CGAL/Kernel/include_conflicts_2.h>
#include <SWIG_CGAL/Kernel/Bbox_2.h>
#include <SWIG_CGAL/Common/Macros.h>
#include <SWIG_CGAL/Kernel/typedefs.h>
#include <SWIG_CGAL/Kernel/Direction_2.h>
#include <SWIG_CGAL/Kernel/Curve_2.h>
#include <SWIG_CGAL/Kernel/Line_2.h>
#include <SWIG_CGAL/Kernel/Point_2.h>
#include <SWIG_CGAL/Kernel/Ray_2.h>
#include <SWIG_CGAL/Kernel/Segment_2.h>
#include <SWIG_CGAL/Kernel/Vector_2.h>
#include <SWIG_CGAL/Common/Iterator.h>
#include <SWIG_CGAL/Common/Wrapper_iterator_helper.h>
#include <SWIG_CGAL/Kernel/Arrangement_2_typedefs.h>

// Direct CGAL includes
#include <CGAL/Arrangement_2.h>
#include <CGAL/Arr_linear_traits_2.h>
#include <CGAL/Arr_extended_dcel.h>
#include <CGAL/Arrangement_on_surface_2.h>
#include <CGAL/Arrangement_2/Arr_default_planar_topology.h>
#include <SWIG_CGAL/Kernel/Arr_Cglab_arr_datum.h>

//typedef CGAL::Exact_predicates_inexact_constructions_kernel EPIC_Kernel;
typedef CGAL::Arr_linear_traits_2<EPIC_Kernel> Arr_traits;
typedef CGAL::Arr_extended_dcel<Arr_traits, Cglab_arr_datum, Cglab_arr_datum, Cglab_arr_datum> Arr_dcel;
typedef CGAL::Arrangement_2<Arr_traits,Arr_dcel> Arrangement_2d;

typedef Arr_traits::Vector_2 Vector_2;
typedef Arr_traits::Curve_2 Curve_2;
typedef Arr_traits::Point_2 Point_2;
typedef Arr_traits::Line_2 Line_2;
typedef Arr_traits::Ray_2 Ray_2;
typedef Arr_traits::Segment_2 Segment_2;
typedef Arr_traits::X_monotone_curve_2 X_monotone_curve_2;

typedef Arrangement_2d::Vertex_handle Vertex_handle;
typedef Arrangement_2d::Halfedge_handle Halfedge_handle;
typedef Arrangement_2d::Face_handle Face_handle;
typedef Arrangement_2d::Vertex_const_handle Vertex_const_handle;
typedef Arrangement_2d::Halfedge_const_handle Halfedge_const_handle;
typedef Arrangement_2d::Face_const_handle Face_const_handle;
typedef Arrangement_2d::Vertex_iterator Vertex_iterator;
typedef Arrangement_2d::Halfedge_iterator Halfedge_iterator;
typedef Arrangement_2d::Edge_iterator Edge_iterator;
typedef Arrangement_2d::Face_iterator Face_iterator;
typedef Arrangement_2d::Halfedge_around_vertex_circulator Halfedge_around_vertex_circulator;
typedef Arrangement_2d::Ccb_halfedge_circulator Ccb_halfedge_circulator;
typedef Arrangement_2d::Unbounded_face_iterator Unbounded_face_iterator;

class SWIG_CGAL_KERNEL_DECL Arrangement_2{
   Arrangement_2d data;
public:
   #ifndef SWIG
   typedef Arrangement_2d cpp_base; // Line check
   const cpp_base& get_data() const {return data;}
	 cpp_base& get_data()	    {return data;}
   Arrangement_2(const cpp_base& base):data(base){}
   #endif

//Creation
//Arrangement_2():data(){}
inline Arrangement_2(const Base& base);
inline Arrangement_2(const Traits_2 *tr);
//inline Arrangement_2(const Self &other);
//inline Arrangement_2(const Traits_2 *traits);

//Assignment Methods
inline Self& operator= (const Base& base);
inline void assign (const Base& base);
inline void clear();

//Access Functions
SWIG_CGAL_DECLARE_CALL_AND_REF_0(Traits_2*,get_traits)
SWIG_CGAL_DECLARE_CALL_AND_REF_0(bool,is_empty)

//Accessing the Arrangement Vertices
SWIG_CGAL_DECLARE_CALL_AND_REF_0(Size,number_of_vertices)
SWIG_CGAL_DECLARE_CALL_AND_REF_0(Size,number_of_isolated_vertices)
SWIG_CGAL_DECLARE_CALL_AND_REF_0(Vertex_iterator,vertices_begin)
SWIG_CGAL_DECLARE_CALL_AND_REF_0(Vertex_iterator,vertices_end)
SWIG_CGAL_DECLARE_CALL_AND_REF_0(Size,number_of_vertices_at_infinity)

//Accessing the Arrangement Halfedges
SWIG_CGAL_DECLARE_CALL_AND_REF_0(Size,number_of_halfedges)
SWIG_CGAL_DECLARE_CALL_AND_REF_0(Halfedge_iterator,halfedges_begin)
SWIG_CGAL_DECLARE_CALL_AND_REF_0(Halfedge_iterator,halfedges_end)
SWIG_CGAL_DECLARE_CALL_AND_REF_0(Size,number_of_edges)
SWIG_CGAL_DECLARE_CALL_AND_REF_0(Edge_iterator,edges_end)
SWIG_CGAL_DECLARE_CALL_AND_REF_0(Edge_iterator,edges_begin)

//Accessing the Arrangement Faces
SWIG_CGAL_DECLARE_CALL_AND_REF_0(Face_handle,unbounded_face)
SWIG_CGAL_DECLARE_CALL_AND_REF_0(Size,number_of_faces)
SWIG_CGAL_DECLARE_CALL_AND_REF_0(Face_iterator,faces_end)
SWIG_CGAL_DECLARE_CALL_AND_REF_0(Face_iterator,faces_begin)
SWIG_CGAL_DECLARE_CALL_AND_REF_0(Size,number_of_unbounded_faces)
SWIG_CGAL_DECLARE_CALL_AND_REF_0(Unbounded_face_iterator,unbounded_faces_end)
SWIG_CGAL_DECLARE_CALL_AND_REF_0(Unbounded_face_iterator,unbounded_faces_begin)
SWIG_CGAL_DECLARE_CALL_AND_REF_0(Face_handle,fictitious_face)

//Casting Away Costness
SWIG_CGAL_DECLARE_CALL_AND_REF_1(Vertex_handle,non_const_handle,Vertex_const_handle)
SWIG_CGAL_DECLARE_CALL_AND_REF_1(Halfedge_handle,non_const_handle,Halfedge_const_handle)
SWIG_CGAL_DECLARE_CALL_AND_REF_1(Face_handle,non_const_handle,Face_const_handle) 

//Specialized Insertion Method
SWIG_CGAL_FORWARD_CALL_2(Vertex_handle,insert_in_face_interior,Point_2,Face_handle)
SWIG_CGAL_FORWARD_CALL_2(Halfedge_handle,insert_in_face_interior,X_monotone_curve_2,Face_handle)
SWIG_CGAL_FORWARD_CALL_2(Halfedge_handle,insert_from_left_vertex,X_monotone_curve_2,Vertex_handle)
SWIG_CGAL_FORWARD_CALL_2(Halfedge_handle,insert_from_right_vertex,X_monotone_curve_2,Vertex_handle)
SWIG_CGAL_FORWARD_CALL_3(Halfedge_handle,insert_at_vertices,X_monotone_curve_2,Vertex_handle,Vertex_handle)
SWIG_CGAL_FORWARD_CALL_4(Halfedge_handle,insert_in_face_interior,X_monotone_curve_2,Halfedge_handle,Halfedge_handle,Halfedge_handle)
SWIG_CGAL_FORWARD_CALL_2(Halfedge_handle,insert_from_left_vertex,X_monotone_curve_2,Halfedge_handle)
SWIG_CGAL_FORWARD_CALL_3(Halfedge_handle,insert_from_left_vertex,X_monotone_curve_2,Halfedge_handle,Halfedge_handle)
SWIG_CGAL_FORWARD_CALL_2(Halfedge_handle,insert_from_right_vertex,X_monotone_curve_2,Halfedge_handle)
SWIG_CGAL_FORWARD_CALL_3(Halfedge_handle,insert_from_right_vertex,X_monotone_curve_2,Halfedge_handle,Halfedge_handle)
SWIG_CGAL_FORWARD_CALL_3(Halfedge_handle,insert_at_vertices,X_monotone_curve_2,Halfedge_handle,Vertex_handle)
SWIG_CGAL_FORWARD_CALL_3(Halfedge_handle,insert_at_vertices,X_monotone_curve_2,Halfedge_handle,Halfedge_handle)

//Modifying Vertices and Edges
SWIG_CGAL_FORWARD_CALL_2(Vertex_handle,modify_vertex,Vertex_handle,Point_2)
SWIG_CGAL_DECLARE_CALL_AND_REF_1(Face_handle,remove_isolated_vertex,Vertex_handle)
SWIG_CGAL_FORWARD_CALL_2(Halfedge_handle,modify_edge,Halfedge_handle,X_monotone_curve_2)
SWIG_CGAL_FORWARD_CALL_3(Halfedge_handle,split_edge,Halfedge_handle,X_monotone_curve_2,X_monotone_curve_2)
SWIG_CGAL_FORWARD_CALL_3(Halfedge_handle,merge_edge,Halfedge_handle,Halfedge_handle,X_monotone_curve_2)
SWIG_CGAL_FORWARD_CALL_3(Face_handle,remove_edge,Halfedge_handle,bool,bool)

// Miscellaneous
SWIG_CGAL_DECLARE_CALL_AND_REF_0(bool,is_valid)

//Deep copy
  typedef Arrangement_2 Self;
  Self deepcopy() const {return Self(data);}
  void deepcopy(const Self& other){data=other.get_data();}
};

#endif
