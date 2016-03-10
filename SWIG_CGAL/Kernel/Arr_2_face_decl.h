// This header file includers wrapper files for face Class
// requried for the declaration of Arrangment_2 Package

#ifndef SWIG_CGAL_KERNEL_CGAL_FACE_HANDLE_DEF_H
#define SWIG_CGAL_KERNEL_CGAL_FACE_HANDLE_DEF_H

#include <SWIG_CGAL/Common/Macros.h>

// Direct CGAL includes
#include <CGAL/Arrangement_2.h>
#include <CGAL/Arr_linear_traits_2.h>
#include <CGAL/Arr_extended_dcel.h>
#include <CGAL/Arrangement_on_surface_2.h>
#include <CGAL/Arrangement_2/Arr_default_planar_topology.h>
#include <SWIG_CGAL/Kernel/Arr_2_types.h>

typedef Arrangement_2d::Face_handle Face_handle_2d;
typedef Arrangement_2d::Ccb_halfedge_circulator Ccb_halfedge_circulator;
typedef Arrangement_2d::Hole_iterator Hole_iterator;
typedef Arrangement_2d::Isolated_vertex_iterator Isolated_vertex_iterator;

//template <class Arr_traits,class Arr_dcel>
class SWIG_CGAL_KERNEL_DECL CGAL_Face_handle{
	Face_handle_2d swigData;
public:
	#ifndef SWIG
	typedef Face_handle_2d cpp_base;
	const cpp_base& get_data() const {return swigData;}
	      cpp_base& get_data()       {return swigData;}
	CGAL_Face_handle(const cpp_base& base):swigData(base){}
	#endif

// creation
CGAL_Face_handle():swigData(){}
//#ifndef SWIG
//CGAL_Face_handle(typename Face_handle_2d v):data(v){}
//#endif

// Access functions
SWIG_CGAL_FORWARD_CALL_0(bool,is_fictitious)
SWIG_CGAL_FORWARD_CALL_0(bool,is_unbounded)
SWIG_CGAL_FORWARD_CALL_0(bool,has_outer_ccb)
SWIG_CGAL_FORWARD_CALL_0(Ccb_halfedge_circulator,outer_ccb)
SWIG_CGAL_FORWARD_CALL_0(Hole_iterator,holes_begin)
SWIG_CGAL_FORWARD_CALL_0(Hole_iterator,holes_end)
SWIG_CGAL_FORWARD_CALL_0(Isolated_vertex_iterator,isolated_vertices_begin)
SWIG_CGAL_FORWARD_CALL_0(Isolated_vertex_iterator,isolated_vertices_end)

SWIG_CGAL_FORWARD_CALL_0(Arr_datum, data)
SWIG_CGAL_FORWARD_CALL_1(void, set_data, Arr_datum)

//Deep Copy
typedef CGAL_Face_handle Self;
	Self deepcopy() const {return Self(swigData);}
	void deepcopy(const Self& other){swigData=other.get_data();}
};

#endif // SWIG_CGAL_KERNEL_CGAL_FACE_HANDLE_DEF_H
