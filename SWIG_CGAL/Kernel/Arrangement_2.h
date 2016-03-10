#ifndef SWIG_CGAL_KERNEL_ARRANGEMENT_2_H
#define SWIG_CGAL_KERNEL_ARRANGEMENT_2_H

#include <sstream>
#include <SWIG_CGAL/Kernel/include_conflicts_2.h>
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
#include <SWIG_CGAL/Common/Input_iterator_wrapper.h>
#include <SWIG_CGAL/Kernel/Arr_2_face_decl.h>
#include <SWIG_CGAL/Kernel/Arr_2_halfedge_decl.h>
#include <SWIG_CGAL/Kernel/Arr_2_vertex_decl.h>
#include <SWIG_CGAL/Kernel/Arr_2_types.h>

// Direct CGAL includes
#include <CGAL/Arrangement_2.h>

typedef Curve_2 X_monotone_curve_2;
//typedef Arrangement_2d::Vertex_const_handle Vertex_const_handle;
//typedef Arrangement_2d::Halfedge_const_handle Halfedge_const_handle;
//typedef Arrangement_2d::Face_const_handle Face_const_handle;
typedef Arrangement_2d::Vertex_iterator CGAL_Vertex_iterator;
typedef Arrangement_2d::Halfedge_iterator CGAL_Halfedge_iterator;
typedef Arrangement_2d::Edge_iterator CGAL_Edge_iterator;
typedef Arrangement_2d::Face_iterator CGAL_Face_iterator;
//typedef Arrangement_2d::Halfedge_around_vertex_circulator Halfedge_around_vertex_circulator;
//typedef Arrangement_2d::Ccb_halfedge_circulator Ccb_halfedge_circulator;
typedef Arrangement_2d::Unbounded_face_iterator CGAL_Unbounded_face_iterator;

class SWIG_CGAL_KERNEL_DECL Arrangement_2{
   Arrangement_2d data;
public:
   #ifndef SWIG
   typedef Arrangement_2d cpp_base; // Line check
   const cpp_base& get_data() const {return data;}
	 cpp_base& get_data()	    {return data;}
   Arrangement_2(const cpp_base& base):data(base){}
   #endif

	typedef Arrangement_2 Self;

//Creation
Arrangement_2():data(){}

//Assignment Methods
//inline Self& operator= (const Base& base);
//inline void assign (const Self& other);
//inline void clear();
//SWIG_CGAL_FORWARD_CALL_1(void,assign,Arrangement_2d)
SWIG_CGAL_FORWARD_CALL_0(void,clear)

//Access Functions
//SWIG_CGAL_FORWARD_CALL_0(Traits_2,get_traits) - Check get_traits
SWIG_CGAL_FORWARD_CALL_0(bool,is_empty)

//Accessing the Arrangement Vertices
SWIG_CGAL_FORWARD_CALL_0(size_t,number_of_vertices)
SWIG_CGAL_FORWARD_CALL_0(size_t,number_of_isolated_vertices)
SWIG_CGAL_FORWARD_CALL_0(CGAL_Vertex_iterator,vertices_begin)
SWIG_CGAL_FORWARD_CALL_0(CGAL_Vertex_iterator,vertices_end)
SWIG_CGAL_FORWARD_CALL_0(size_t,number_of_vertices_at_infinity)

//Accessing the Arrangement Halfedges
SWIG_CGAL_FORWARD_CALL_0(size_t,number_of_halfedges)
SWIG_CGAL_FORWARD_CALL_0(CGAL_Halfedge_iterator,halfedges_begin)
SWIG_CGAL_FORWARD_CALL_0(CGAL_Halfedge_iterator,halfedges_end)
SWIG_CGAL_FORWARD_CALL_0(size_t,number_of_edges)
SWIG_CGAL_FORWARD_CALL_0(CGAL_Edge_iterator,edges_end)
SWIG_CGAL_FORWARD_CALL_0(CGAL_Edge_iterator,edges_begin)

//Accessing the Arrangement Faces
SWIG_CGAL_FORWARD_CALL_0(CGAL_Face_handle,unbounded_face)
SWIG_CGAL_FORWARD_CALL_0(size_t,number_of_faces)
SWIG_CGAL_FORWARD_CALL_0(CGAL_Face_iterator,faces_end)
SWIG_CGAL_FORWARD_CALL_0(CGAL_Face_iterator,faces_begin)
SWIG_CGAL_FORWARD_CALL_0(size_t,number_of_unbounded_faces)
SWIG_CGAL_FORWARD_CALL_0(CGAL_Unbounded_face_iterator,unbounded_faces_end)
SWIG_CGAL_FORWARD_CALL_0(CGAL_Unbounded_face_iterator,unbounded_faces_begin)
SWIG_CGAL_FORWARD_CALL_0(CGAL_Face_handle,fictitious_face)

//Casting Away Costness
/*SWIG_CGAL_DECLARE_CALL_AND_REF_1(CGAL_Vertex_handle,non_const_handle,Vertex_const_handle)
SWIG_CGAL_DECLARE_CALL_AND_REF_1(Halfedge_handle,non_const_handle,Halfedge_const_handle)
SWIG_CGAL_DECLARE_CALL_AND_REF_1(Face_handle,non_const_handle,Face_const_handle)
*/

//Specialized Insertion Method
SWIG_CGAL_FORWARD_CALL_2(CGAL_Vertex_handle,insert_in_face_interior,Point_2,CGAL_Face_handle)
SWIG_CGAL_FORWARD_CALL_2(CGAL_Halfedge_handle,insert_in_face_interior,X_monotone_curve_2,CGAL_Face_handle)
SWIG_CGAL_FORWARD_CALL_2(CGAL_Halfedge_handle,insert_from_left_vertex,X_monotone_curve_2,CGAL_Vertex_handle)
SWIG_CGAL_FORWARD_CALL_2(CGAL_Halfedge_handle,insert_from_right_vertex,X_monotone_curve_2,CGAL_Vertex_handle)
SWIG_CGAL_FORWARD_CALL_3(CGAL_Halfedge_handle,insert_at_vertices,X_monotone_curve_2,CGAL_Vertex_handle,CGAL_Vertex_handle)
//SWIG_CGAL_FORWARD_CALL_3(CGAL_Halfedge_handle,insert_in_face_interior,X_monotone_curve_2,CGAL_Halfedge_handle,CGAL_Halfedge_handle)
SWIG_CGAL_FORWARD_CALL_2(CGAL_Halfedge_handle,insert_from_left_vertex,X_monotone_curve_2,CGAL_Halfedge_handle)
//SWIG_CGAL_FORWARD_CALL_3(CGAL_Halfedge_handle,insert_from_left_vertex,X_monotone_curve_2,CGAL_Halfedge_handle,CGAL_Halfedge_handle)
SWIG_CGAL_FORWARD_CALL_2(CGAL_Halfedge_handle,insert_from_right_vertex,X_monotone_curve_2,CGAL_Halfedge_handle)
//SWIG_CGAL_FORWARD_CALL_3(CGAL_Halfedge_handle,insert_from_right_vertex,X_monotone_curve_2,CGAL_Halfedge_handle,CGAL_Halfedge_handle)
SWIG_CGAL_FORWARD_CALL_3(CGAL_Halfedge_handle,insert_at_vertices,X_monotone_curve_2,CGAL_Halfedge_handle,CGAL_Vertex_handle)
SWIG_CGAL_FORWARD_CALL_3(CGAL_Halfedge_handle,insert_at_vertices,X_monotone_curve_2,CGAL_Halfedge_handle,CGAL_Halfedge_handle)

//Modifying Vertices and Edges
SWIG_CGAL_FORWARD_CALL_2(CGAL_Vertex_handle,modify_vertex,CGAL_Vertex_handle,Point_2)
SWIG_CGAL_FORWARD_CALL_1(CGAL_Face_handle,remove_isolated_vertex,CGAL_Vertex_handle)
SWIG_CGAL_FORWARD_CALL_3(CGAL_Halfedge_handle,split_edge,CGAL_Halfedge_handle,X_monotone_curve_2,X_monotone_curve_2)
SWIG_CGAL_FORWARD_CALL_3(CGAL_Halfedge_handle,merge_edge,CGAL_Halfedge_handle,CGAL_Halfedge_handle,X_monotone_curve_2)
SWIG_CGAL_FORWARD_CALL_3(CGAL_Face_handle,remove_edge,CGAL_Halfedge_handle,bool,bool)

// Miscellaneous
SWIG_CGAL_FORWARD_CALL_0(bool,is_valid)

//Deep Copy
  Self deepcopy() const {return Self(data);}
  void deepcopy(const Self& other){data=other.get_data();}
};

#endif
