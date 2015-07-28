// This file contains the wrapper code for Vertex Class
// for Arrangement_2 Package

#ifndef SWIG_CGAL_KERNEL_CGAL_VERTEX_DEF_H
#define SWIG_CGAL_KERNEL_CGAL_VERTEX_DEF_H

#include <CGAL/Arr_enums.h>
#include <CGAL/Arrangement_2.h>
#include <CGAL/Arr_linear_traits_2.h>
#include <CGAL/Arr_extended_dcel.h>
#include <SWIG_CGAL/Kernel/Arr_Cglab_arr_datum.h>
#include <SWIG_CGAL/Kernel/Point_2.h>
#include <SWIG_CGAL/Kernel/Arr_2_face_decl.h>

typedef CGAL::Arr_linear_traits_2<EPIC_Kernel> Arr_traits;
typedef CGAL::Arr_extended_dcel<Arr_traits, Cglab_arr_datum, Cglab_arr_datum, Cglab_arr_datum> Arr_dcel;
typedef CGAL::Arrangement_2<Arr_traits,Arr_dcel> Arrangement_2d;

typedef Arr_dcel::Size Size;
//typedef Arrangement_2::Face_handle Face_handle;
typedef CGAL_Face_handle Face_handle;
typedef Arrangement_2d::Halfedge_around_vertex_circulator Halfedge_around_vertex_circulator;
typedef Arrangement_2d::Vertex_handle Vertex_handle_2d;

//enum CGAL::Arr_parameter_space{
//CGAL::ARR_LEFT_BOUNDARY,
//CGAL::ARR_RIGHT_BOUNDARY,
//CGAL::ARR_BOTTOM_BOUNDARY,
//CGAL::ARR_TOP_BOUNDARY,
//CGAL::ARR_INTERIOR
//} Arr_parameter_space;
typedef CGAL::Arr_parameter_space Arr_parameter_space;

//template <class Arr_traits,class Arr_dcel>
class SWIG_CGAL_KERNEL_DECL CGAL_Vertex_handle{
	Vertex_handle_2d data;
public:
	#ifndef SWIG
	typedef Vertex_handle_2d cpp_base;
	const cpp_base& get_data() const {return data;}
	      cpp_base& get_data() {return data;}
	CGAL_Vertex_handle(const cpp_base& base):data(base){}
	#endif

//Creation
CGAL_Vertex_handle():data(){}

// Access Functions
SWIG_CGAL_DECLARE_CALL_AND_REF_0(bool,is_at_open_boundary)
SWIG_CGAL_DECLARE_CALL_AND_REF_0(bool,is_isolated)
SWIG_CGAL_DECLARE_CALL_AND_REF_0(Size,degree)
SWIG_CGAL_DECLARE_CALL_AND_REF_0(Halfedge_around_vertex_circulator,incident_halfedges)
SWIG_CGAL_DECLARE_CALL_AND_REF_0(Face_handle,face)
SWIG_CGAL_DECLARE_CALL_AND_REF_0(Point_2,point)
SWIG_CGAL_DECLARE_CALL_AND_REF_0(Arr_parameter_space,parameter_space_in_x)
SWIG_CGAL_DECLARE_CALL_AND_REF_0(Arr_parameter_space,parameter_space_in_y)

//Deep copy
	typedef CGAL_Vertex_handle Self;
	Self deepcopy() const {return Self(data);}
	void deepcopy(const Self& other){data=other.get_data();}

};

#endif

