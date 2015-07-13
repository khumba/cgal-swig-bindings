
#ifndef SWIG_CGAL_KERNEL_X_MONOTONE_CURVE_2_DEF_H
#define SWIG_CGAL_KERNEL_X_MONOTONE_CURVE_2_DEF_H

#include <sstream>
#include <SWIG_CGAL/Kernel/include_conflicts_2.h>
#include <SWIG_CGAL/Kernel/typedefs.h>
#include <SWIG_CGAL/Kernel/enum.h>

// Direct Cgal includes
#include <CGAL/Arr_algebraic_segment_traits_2.h>

class SWIG_CGAL_KERNEL_DECL X_monotone_curve_2{
	EPIC_Kernel::X_monotone_curve_2 data;
public:
	#ifndef SWIG
	typedef EPIC_Kernel::X_monotone_curve_2 cpp_base; //or ArrangementBasicTraits_2
	const cpp_base& get_data() const {return data;}
	      cpp_base& get_data()	 {return data;}
	X_monotone_curve_2(const cpp_base& base):data(base){}
	#endif

//Modifiers
SWIG_CGAL_FORWARD_CALL_AND_REF_SCOPE_0(Curve_2,curve)
SWIG_CGAL_FORWARD_CALL_0(bool,is_vertical)
SWIG_CGAL_DECLARE_CALL_1(bool,is_finite,CGAL::Arr_curve_end)
SWIG_CGAL_FORWARD_CALL_AND_REF_SCOPE_1(Point_2,curve_end,CGAL::Arr_curve_end)
SWIG_CGAL_FORWARD_CALL_AND_REF_SCOPE_0(int,arcno)
SWIG_CGAL_FORWARD_CALL_AND_REF_SCOPE_0(Algebraic_real_1,x)

//Deep Copy
typedef X_monotone_curve_2 Self;
   Self deepcopy() const {return Self(data);}
   void deepcopy(const Self& other){data=other.get_data();}
};

#endif // SWIG_CGAL_KERNEL_X_MONOTONE_CURVE_2_DEF_H
