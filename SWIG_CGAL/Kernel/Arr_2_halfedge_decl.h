// This file contains the wrapper code for Halfedge Class
// for Arrangement_2 Package of CGAL :: It includes everything except
// const Traits::X_monotone_curve_2 curve Function
// This file needs to be checked as it posses a function that calls itself


#ifndef SWIG_CGAL_KERNEL_CGAL_HALFEDGE_DEF_H
#define SWIG_CGAL_KERNEL_CGAL_HALFEDGE_DEF_H

#include <CGAL/Arr_enums.h>
//#include <CGAL/Arrangment_2.h>
#include <CGAL/Arr_linear_traits_2.h>
#include <CGAL/Arr_extended_dcel.h>
#include <SWIG_CGAL/Kernel/Arr_Cglab_arr_datum.h>
#include <SWIG_CGAL/Kernel/X_monotone_curve_2.h>
#include <SWIG_CGAL/Kernel/Arr_2_face_decl.h>
#include <SWIG_CGAL/Kernel/Arr_2_vertex_decl.h>

typedef CGAL::Arr_linear_traits_2<EPIC_Kernel> Arr_traits;
typedef CGAL::Arr_extended_dcel<Arr_traits, Cglab_arr_datum, Cglab_arr_datum, Cglab_arr_datum> Arr_dcel;
typedef CGAL::Arrangement_2<Arr_traits,Arr_dcel> Arrangement_2d;

//typedef Arrangement_2d::Vertex_handle Vertex_handle;
typedef CGAL_Vertex_handle<Arr_traits,Arr_dcel> Vertex_handle;
typedef CGAL_Face_handle<Arr_traits,Arr_dcel> Face_handle;
//typedef Arrangement_2d::Face_handle Face_handle;
typedef Arrangement_2d::Halfedge_handle Halfedge_handle_2d;
typedef Arrangement_2d::Ccb_halfedge_circulator Ccb_halfedge_circulator; 

//enum CGAL::Arr_halfedge_direction{
//CGAL::ARR_LEFT_TO_RIGHT,
//CGAL::ARR_RIGHT_TO_LEFT
//} Arr_halfedge_direction;
typedef CGAL::Arr_halfedge_direction Arr_halfedge_direction;

template <class Arr_traits,class Arr_dcel>
class SWIG_CGAL_KERNEL_DECL CGAL_Halfedge_handle{
	Halfedge_handle_2d data;
public:
	#ifndef SWIG
	typedef Halfedge_handle_2d cpp_base; // Line check:: or Halfedge handle
	const cpp_base& get_data() const {return data;}
	      cpp_base& get_data()	 {return data;}
	CGAL_Halfedge_handle(const cpp_base& base):data(base){} 
	#endif

// Creation
CGAL_Halfedge_handle():data(){}

// Access Functions
SWIG_CGAL_DECLARE_CALL_AND_REF_0(bool,is_fictitious)
SWIG_CGAL_DECLARE_CALL_AND_REF_0(Vertex_handle,source)
SWIG_CGAL_DECLARE_CALL_AND_REF_0(Vertex_handle,target)
SWIG_CGAL_DECLARE_CALL_AND_REF_0(Arr_halfedge_direction,direction)
SWIG_CGAL_DECLARE_CALL_AND_REF_0(Face_handle,face)
SWIG_CGAL_DECLARE_CALL_AND_REF_0(Halfedge_handle,twin)
SWIG_CGAL_DECLARE_CALL_AND_REF_0(Halfedge_handle,prev)
SWIG_CGAL_DECLARE_CALL_AND_REF_0(Halfedge_handle,next)
SWIG_CGAL_DECLARE_CALL_AND_REF_0(Ccb_halfedge_circulator,ccb)
SWIG_CGAL_DECLARE_CALL_AND_REF_0(X_monotone_curve_2,curve)

//deepcopy
	typedef CGAL_Halfedge_handle<Arr_traits,Arr_dcel> Self;
	Self deepcopy() const {return Self(data);}
	void deepcopy(const Self& other){data=other.get_data();}	
};

#endif // SWIG_CGAl_KERNEL_CGAL_HALFEDGE_DEF_H
