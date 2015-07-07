
#ifndef SWIG_CGAL_KERNEL_CURVE_2_DEF_H
#define SWIG_CGAL_KERNEL_CURVE_2_DEF_H

#include <sstream>
#include <SWIG_CGAL/Kernel/include_conflicts_2.h>
#include <SWIG_CGAL/Kernel/enum.h>
#include <SWIG_CGAL/Kernel/typedefs.h>

class SWIG_CGAL_KERNEL_DECL Curve_2{
  EPIC_Kernel::Curve_2 data;
public:
  #ifndef SWIG
  typedef EPIC_Kernel::Curve_2 cpp_base; // or typedef Arr_traits::Curve_2 Curve_2;
  const cpp_base& get_data() const {return data;}
        cpp_base& get_data()       {return data;}
  Curve_2(const cpp_base& base):data(base){}
  #endif

//Creation
Curve_2():data(){}
inline Curve_2(const Segment_2& seg);
inline Curve_2(const Ray_2& ray);
inline Curve_2(const Line_2& ln);
//Access Functions
SWIG_CGAL_DECLARE_CALL_AND_REF_0(Point_2,source)
SWIG_CGAL_DECLARE_CALL_AND_REF_0(Point_2,target)
SWIG_CGAL_DECLARE_CALL_AND_REF_0(Line_2,line)
SWIG_CGAL_DECLARE_CALL_AND_REF_0(Line_2,supporting_line)
SWIG_CGAL_DECLARE_CALL_AND_REF_0(Ray_2,ray)
SWIG_CGAL_DECLARE_CALL_AND_REF_0(Segment_2,segment)
SWIG_CGAL_FORWARD_CALL_0(bool,is_segment)
SWIG_CGAL_FORWARD_CALL_0(bool,is_ray)
SWIG_CGAL_FORWARD_CALL_0(bool,is_line)

//Deep copy
  typedef Curve_2 Self;
  Self deepcopy() const {return Self(data);}
  void deepcopy(const Self& other){data=other.get_data();}

};
#endif

