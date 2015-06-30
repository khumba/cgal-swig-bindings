%module (package="CCA2") CGAL_Arrangement_2_vector

%{
#include <SWIG_CGAL/Kernel/Vector_2.h> 
//#include <SWIG_CGAL/Others/Curve_2.h>		// yet to be defined
#include <SWIG_CGAL/Kernel/Point_2.h>
#include <SWIG_CGAL/Kernel/Line_2.h>
#include <SWIG_CGAL/Kernel/Segment_2.h>
#include <SWIG_CGAL/Kernel/Ray_2.h>
//#include <SWIG_CGAL/Others/X_monotone_curve_2.h>	// yet to be defined
%}

%inline %{

//----------------------------------------------------------------------
//  Vector_2 Perpendicular(const Orientation &o); Direction_2 direction();
//---------------------------------------------------------------------- 

class SWIG_CGAL_KERNEL_DECL Vector_2{
  EPIC_Kernel::Vector_2 data;
public:
  #ifndef SWIG
  typedef EPIC_Kernel::Vector_2 cpp_base;
  const cpp_base& get_data() const {return data;}
        cpp_base& get_data()       {return data;}swig
  Vector_2(const cpp_base& base):data(base){}
  #endif

//Creation
  Vector_2():data(){}
  Vector_2(const Null_vector&):data(CGAL::NULL_VECTOR){}
  inline Vector_2(const Point_2& a,const Point_2& b);
  inline Vector_2(const Segment_2& s);
  inline Vector_2(const Ray_2& r);
  inline Vector_2(const Line_2& l);
  Vector_2(int x, int y):data(x,y){}
  Vector_2(double x, double y):data(x,y){}

//Operations
  SWIG_CGAL_DECLARE_CALL_AND_REF_0(Direction_2,direction)
  SWIG_CGAL_FORWARD_CALL_AND_REF_1(Vector_2,perpendicular,Orientation)
};


//----------------------------------------------------------------------
//  Point_2(double x,double y),double x(),double y();
//---------------------------------------------------------------------- 

class SWIG_CGAL_KERNEL_DECL Point_2{
  EPIC_Kernel::Point_2 data;
public:
  #ifndef SWIG
  typedef EPIC_Kernel::Point_2 cpp_base;
  const cpp_base& get_data() const {return data;}
        cpp_base& get_data()       {return data;}
  Point_2(const cpp_base& base):data(base){}
  #endif

//Creation
  Point_2():data(){}
  Point_2(const Origin&):data(CGAL::ORIGIN){}
  Point_2(double x,double y):data(x,y){}

//Operations
  double x() const {return data.x();}
  double y() const {return data.y();}
};


//----------------------------------------------------------------------
//  		                Line_2
//----------------------------------------------------------------------

class SWIG_CGAL_KERNEL_DECL Line_2{
  EPIC_Kernel::Line_2 data;
public:
  #ifndef SWIG
   typedef EPIC_Kernel::Line_2 cpp_base;
  const cpp_base& get_data() const {return data;}
        cpp_base& get_data()       {return data;}
  Line_2(const cpp_base& base):data(base){}
  #endif

//Creation
  Line_2(double a, double b, double c):data(a,b,c){}
  inline Line_2(const Point_2& p,const Point_2& q);
  inline Line_2(const Point_2& p,const Direction_2& d);
  inline Line_2(const Point_2& p,const Vector_2& v);
  inline Line_2(const Segment_2& s);
  inline Line_2(const Ray_2& r);

//Operations
  SWIG_CGAL_FORWARD_CALL_0(double,a)
  SWIG_CGAL_FORWARD_CALL_0(double,b)
  SWIG_CGAL_FORWARD_CALL_0(double,c)
  SWIG_CGAL_DECLARE_CALL_AND_REF_1(Point_2,point,int)
  SWIG_CGAL_DECLARE_CALL_AND_REF_1(Point_2,projection,Point_2)
  SWIG_CGAL_FORWARD_CALL_1(double,x_at_y,double)
  SWIG_CGAL_FORWARD_CALL_1(double,y_at_x,double)

//Predicates
  SWIG_CGAL_FORWARD_CALL_0(bool,is_degenerate)
  SWIG_CGAL_FORWARD_CALL_0(bool,is_horizontal)
  SWIG_CGAL_FORWARD_CALL_0(bool,is_vertical)
  SWIG_CGAL_DECLARE_CALL_1(Oriented_side,oriented_side,Point_2)
  SWIG_CGAL_DECLARE_CALL_1(bool,has_on,Point_2)
  SWIG_CGAL_DECLARE_CALL_1(bool,has_on_positive_side,Point_2)
  SWIG_CGAL_DECLARE_CALL_1(bool,has_on_negative_side,Point_2)

//Miscellaneous
  SWIG_CGAL_DECLARE_CALL_AND_REF_0(Vector_2,to_vector)
  SWIG_CGAL_DECLARE_CALL_AND_REF_0(Direction_2,direction)
  SWIG_CGAL_FORWARD_CALL_AND_REF_0(Line_2,opposite)
  SWIG_CGAL_DECLARE_CALL_AND_REF_1(Line_2,perpendicular,Point_2)

//Operators
  DEFINE_EQUALITY_OPERATORS(Line_2)

//I/O
  std::string toString(){
    std::stringstream sstr;
    sstr << data;
    return sstr.str();
  }

//Deep copy
  typedef Line_2 Self;
  Self deepcopy() const {return Self(data);}
  void deepcopy(const Self& other){data=other.get_data();}
};


//----------------------------------------------------------------------
//  		Segment_2
//----------------------------------------------------------------------

class SWIG_CGAL_KERNEL_DECL Segment_2{
  EPIC_Kernel::Segment_2 data;
public:
  #ifndef SWIG
  typedef EPIC_Kernel::Segment_2 cpp_base;
  const cpp_base& get_data() const {return data;}
        cpp_base& get_data()       {return data;}
  Segment_2(const cpp_base& base):data(base){}
  #endif
  
//Creation
  Segment_2():data(){}
  inline Segment_2(const Point_2& p,const Point_2& q);  

//Operations
  SWIG_CGAL_DECLARE_CALL_AND_REF_0(Point_2,source)
  SWIG_CGAL_DECLARE_CALL_AND_REF_0(Point_2,target)
  SWIG_CGAL_DECLARE_CALL_AND_REF_0(Point_2,min)
  SWIG_CGAL_DECLARE_CALL_AND_REF_0(Point_2,max)
  SWIG_CGAL_DECLARE_CALL_AND_REF_1(Point_2,vertex,int)
  SWIG_CGAL_DECLARE_CALL_AND_REF_1(Point_2,point,int)
  SWIG_CGAL_FORWARD_CALL_0(double,squared_length)
  SWIG_CGAL_FORWARD_CALL_AND_REF_0(Segment_2,opposite)
  SWIG_CGAL_DECLARE_CALL_AND_REF_0(Direction_2,direction)
  SWIG_CGAL_DECLARE_CALL_AND_REF_0(Vector_2,to_vector)
  SWIG_CGAL_DECLARE_CALL_AND_REF_0(Line_2,supporting_line)
  SWIG_CGAL_FORWARD_CALL_AND_REF_0(Bbox_2,bbox)

//Predicates
  SWIG_CGAL_FORWARD_CALL_0(bool,is_degenerate)
  SWIG_CGAL_FORWARD_CALL_0(bool,is_horizontal)
  SWIG_CGAL_FORWARD_CALL_0(bool,is_vertical)
  SWIG_CGAL_DECLARE_CALL_1(bool,has_on,Point_2)
  SWIG_CGAL_DECLARE_CALL_1(bool,collinear_has_on,Point_2)

//Operators
  DEFINE_EQUALITY_OPERATORS(Segment_2)

//I/O
  std::string toString(){
    std::stringstream sstr;
    sstr << data;
    return sstr.str();
  }

//Deep copy
  typedef Segment_2 Self;
  Self deepcopy() const {return Self(data);}
  void deepcopy(const Self& other){data=other.get_data();}
};
%}

