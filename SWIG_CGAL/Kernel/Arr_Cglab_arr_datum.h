

#ifndef SWIG_CGAL_KERNEL_ARR_CGLAB_ARR_DATUM_DEF_H
#define SWIG_CGAL_KERNEL_ARR_CGLAB_ARR_DATUM_DEF_H

#include <cassert>
#include <cstdio>
//#include <map>

using namespace std;

class Cglab_arr_datum
{
private:
	int index_;
	int datum_;

public:
	static const int invalid_index = -1;
	static const int default_datum = -1;

	Cglab_arr_datum(int index = invalid_index, int datum = default_datum)
		: index_(index), datum_(datum)
		{}

	int index() const { return index_; }
	int datum() const { return datum_; }
	Cglab_arr_datum with_index(int idx) const { return Cglab_arr_datum(idx, datum_); }
	Cglab_arr_datum with_datum(int dat) const { return Cglab_arr_datum(index_, dat); }

	int first() const { return index_; }
	int second() const { return datum_; }
};

#endif
