// This file contains the wrapper code for Halfedge Class
// for Arrangement_2 Package of CGAL :: It includes everything except
// const Traits::X_monotone_curve_2 curve Function
// This file needs to be checked as it posses a function that calls itself


#ifndef SWIG_CGAL_KERNEL_CGAL_HALFEDGE_DEF_H
#define SWIG_CGAL_KERNEL_CGAL_HALFEDGE_DEF_H

#include <CGAL/Arr_enums.h>
#include <CGAL/Arrangement_2.h>
#include <CGAL/Arr_linear_traits_2.h>
#include <CGAL/Arr_extended_dcel.h>
#include <SWIG_CGAL/Kernel/Arr_Cglab_arr_datum.h>
#include <SWIG_CGAL/Kernel/Curve_2.h>
#include <SWIG_CGAL/Kernel/Arr_2_face_decl.h>
#include <SWIG_CGAL/Kernel/Arr_2_vertex_decl.h>

typedef CGAL::Arr_linear_traits_2<EPIC_Kernel> Arr_traits;
typedef CGAL::Arr_extended_dcel<Arr_traits, Cglab_arr_datum, Cglab_arr_datum, Cglab_arr_datum> Arr_dcel;
typedef CGAL::Arrangement_2<Arr_traits,Arr_dcel> Arrangement_2d;

//typedef Arrangement_2d::Vertex_handle Vertex_handle;
typedef CGAL_Vertex_handle Vertex_handle;
typedef CGAL_Face_handle Face_handle;
typedef Curve_2 X_monotone_curve_2;
//typedef Arrangement_2d::Face_handle Face_handle;
typedef Arrangement_2d::Halfedge_handle Halfedge_handle_2d;
typedef Arrangement_2d::Ccb_halfedge_circulator Ccb_halfedge_circulator; 

typedef CGAL::Arr_halfedge_direction Arr_halfedge_direction;

//template <class Arr_traits,class Arr_dcel>
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
SWIG_CGAL_DECLARE_CALL_AND_REF_0(Halfedge_handle_2d,twin)
SWIG_CGAL_DECLARE_CALL_AND_REF_0(Halfedge_handle_2d,prev)
SWIG_CGAL_DECLARE_CALL_AND_REF_0(Halfedge_handle_2d,next)
SWIG_CGAL_DECLARE_CALL_AND_REF_0(Ccb_halfedge_circulator,ccb)
SWIG_CGAL_DECLARE_CALL_AND_REF_0(X_monotone_curve_2,curve)

//deepcopy
	typedef CGAL_Halfedge_handle Self;
	Self deepcopy() const {return Self(data);}
	void deepcopy(const Self& other){data=other.get_data();}	
};

#endif // SWIG_CGAl_KERNEL_CGAL_HALFEDGE_DEF_H
