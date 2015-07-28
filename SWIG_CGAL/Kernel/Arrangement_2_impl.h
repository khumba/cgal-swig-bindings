


#ifndef SWIG_CGAL_KERNEL_ARRANGEMENT_2_IMPH_H
#define SWIG_CGAL_KERNEL_ARRANGEMENT_2_IMPH_H

#include <SWIG_CGAL/Kernel/Direction_2_decl.h>
#include <SWIG_CGAL/Kernel/Line_2_decl.h>
#include <SWIG_CGAL/Kernel/Point_2_decl.h>
#include <SWIG_CGAL/Kernel/Ray_2_decl.h>
#include <SWIG_CGAL/Kernel/Segment_2_decl.h>
#include <SWIG_CGAL/Kernel/Vector_2.h>
#include <SWIG_CGAL/Kernel/Origin.h>
#include <CGAL/Origin.h>

// member Functions involving elements that are in include conflict

//  for Line_2
Line_2::Line_2(const Point_2& p,const Point_2& q):data(p.get_data(),q.get_data()){}
Line_2::Line_2(const Point_2& p,const Direction_2& d):data(p.get_data(),d.get_data()){}
Line_2::Line_2(const Point_2& p,const Vector_2& v):data(p.get_Data(),v.get_data()){}
Line_2::Line_2(const Segment_2& s):data(s.get_data()){}
Line_2::Line_2(const Ray_2& r):data(r.get_data()){}
SWIG_CGAL_FORWARD_CALL_AND_REF_SCOPE_1(Point_2,Line_2::point,point,int)
SWIG_CGAL_FORWARD_CALL_AND_REF_SCOPE_1(Point_2,Line_2::projection,projection,Point_2)
SWIG_CGAL_FORWARD_CALL_SCOPE_1(Oriented_side,Line_2::oriented_side,oriented_side,Point_2)
SWIG_CGAL_FORWARD_CALL_SCOPE_1(bool,Line_2::has_on,has_on,Point_2)
SWiG_CGAL_FORWARD_CALL_SCOPE_1(bool,Line_2::has_on_positive_side,has_on_positive_side,Point_2)
SWIG_CGAL_FORWARD_CALL_SCOPE_1(bool,Line_2::has_on_negative_side,has_on_negative_side,Point_2)
SWIG_CGAL_FORWARD_CALL_AND_REF_SCOPE_1(Line_2,Line_2::perpendicular,perpendicular,Point_2)
SWIG_CGAL_FORWARD_CALL_AND_REF_SCOPE_0(Vector_2,Line_2::to_vector,to_vector)
SWIG_CGAL_FORWARD_CALL_AND_REF_SCOPE_0(Direction_2,Line_2::direction,direction)


// for Point_2
Vector_2 Point_2::operator-(Point_2& p) {return Vector_2( get_data() - p.get_data() );}
Point_2  Point_2::operator+(Vector_2& v) {return Point_2( get_data() + v.get_data() );}
Point_2  Point_2::operator-(Vector_2& v) {return Point_2( get_data() - v.get_data() );}
Vector_2  Point_2::operator-(const Origin&) {return Vector_2( get_data() - CGAL::ORIGIN ); }
Point_2&  Point_2::operator+=(Vector_2& v){
  get_data()=get_data()+v.get_data();
  return *this; }
Point_2&  Point_2::operator-=(Vector_2& v){
  get_data()=get_data()-v.get_data();
  return *this; }


// for Ray_2
Ray_2::Ray_2(const Point_2& p,const Point_2& q):data(p.get_data(),q.get_data()){}
Ray_2::Ray_2(const Point_2& p,const Direction_2& d):data(p.get_data(),d.get_data()){}
Ray_2::Ray_2(const Point_2& p,const Vector_2& v):data(p.get_data(),v.get_data()){}
Ray_2::Ray_2(const Point_2& p,const Line_2& l):data(p.get_data(),l.get_data()){}
SWIG_CGAL_FORWARD_CALL_AND_REF_SCOPE_0(Direction_2,Ray_2::direction,direction)
SWIG_CGAL_FORWARD_CALL_AND_REF_SCOPE_0(Vector_2,Ray_2::to_vector,to_vector)
SWIG_CGAL_FORWARD_CALL_AND_REF_SCOPE_0(Line_2,Ray_2::supporting_line,supporting_line)
SWIG_CGAL_FORWARD_CALL_AND_REF_SCOPE_0(Point_2,Ray_2::source,source)
SWIG_CGAL_FORWARD_CALL_AND_REF_SCOPE_1(Poiny_2,Ray_2::point,point,int)
SWIG_CGAL_FORWARD_CALL_SCOPE_1(bool,Ray_2::has_on,has_on,Point_2)
SWIG_CGAL_FORWARD_CALL_SCOPE_1(bool,Ray_2::collinear_has_on,collinear_has_on,Point_2)


// for Segment_2
Segment_2::Segment_2(const Point_2& p,const Point_2& q):data(p.get_data(),q.get_data()){}
SWIG_CGAL_FORWARD_CALL_AND_REF_SCOPE_0(Point_2,Segment_2::source,source)
SWIG_CGAL_FORWARD_CALL_AND_REF_SCOPE_0(Point_2,Segment_2::target,target)
SWIG_CGAL_FORWARD_CALL_AND_REF_SCOPE_0(Point_2,Segment_2::min,min)
SWIG_CGAL_FORWARD_CALL_AND_REF_SCOPE_0(Point_2,Segment_2::max,max)
SWIG_CGAL_FORWARD_CALL_AND_REF_SCOPE_1(Point_2,Segment_2::point,point,int)
SWIG_CGAL_FORWARD_CALL_AND_REF_SCOPE_1(Point_2,Segment_2::vertex,vertex,int)
SWIG_CGAL_FORWARD_CALL_SCOPE_1(bool,Segment_2::has_on,has_on,Point_2)
SWIG_CGAL_FORWARD_CALL_SCOPE_1(bool,Segment_2::collinear_has_on,collinear_has_on,Point_2)
SWIG_CGAL_FORWARD_CALL_AND_REF_SCOPE_0(Direction_2,Segment_2::direction,direction)
SWIG_CGAL_FORWARD_CALL_AND_REF_SCOPE_0(Vector_2,Segment_2::to_vector,to_vector)
SWIG_CGAL_FORWARD_CALL_AND_REF_SCOPE_0(Line_2,Segment_2::supporting_line,supporting_line)
 

//  for Vector_2
Vector_2::Vector_2(const Point_2& a,const Point_2& b):data(a.get_data(),b.get_data()){}
Vector_2::Vector_2(const Segment_2& s):data(s.get_data()){}
Vector_2::Vector_2(const Ray_2& r):data(r.get.data()){}
Vector_2::Vector_2(const Line2& l):data(l.get_data()){}
SWIG_CGAL_FORWARD_CALL_AND_REF_SCOPE_0(Direction_2,Vector_2::direction,direction)


#endif
