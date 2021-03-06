// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/Array>
#include <osg/Geometry>
#include <osg/Vec3>
#include <osgUtil/EdgeCollector>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_VALUE_REFLECTOR(osgUtil::dereference_clear)
	I_DeclaringFile("osgUtil/EdgeCollector");
	I_Constructor0(____dereference_clear,
	               "",
	               "");
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osgUtil::dereference_less)
	I_DeclaringFile("osgUtil/EdgeCollector");
	I_Constructor0(____dereference_less,
	               "",
	               "");
END_REFLECTOR

TYPE_NAME_ALIAS(std::list< osg::ref_ptr< osg::UIntArray > >, osgUtil::EdgeCollector::IndexArrayList)

TYPE_NAME_ALIAS(std::set< osg::ref_ptr< osgUtil::EdgeCollector::Edge > COMMA  osgUtil::dereference_less >, osgUtil::EdgeCollector::EdgeSet)

TYPE_NAME_ALIAS(std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Edge > >, osgUtil::EdgeCollector::EdgeList)

TYPE_NAME_ALIAS(std::list< osg::ref_ptr< osgUtil::EdgeCollector::Edgeloop > >, osgUtil::EdgeCollector::EdgeloopList)

TYPE_NAME_ALIAS(std::set< osg::ref_ptr< osgUtil::EdgeCollector::Point > COMMA  osgUtil::dereference_less >, osgUtil::EdgeCollector::PointSet)

TYPE_NAME_ALIAS(std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Point > >, osgUtil::EdgeCollector::PointList)

TYPE_NAME_ALIAS(std::list< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > >, osgUtil::EdgeCollector::TriangleList)

TYPE_NAME_ALIAS(std::set< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > >, osgUtil::EdgeCollector::TriangleSet)

TYPE_NAME_ALIAS(std::map< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > COMMA  unsigned int COMMA  osgUtil::dereference_less >, osgUtil::EdgeCollector::TriangleMap)

BEGIN_VALUE_REFLECTOR(osgUtil::EdgeCollector)
	I_DeclaringFile("osgUtil/EdgeCollector");
	I_Constructor0(____EdgeCollector,
	               "",
	               "");
	I_Method1(void, setGeometry, IN, osg::Geometry *, geometry,
	          Properties::NON_VIRTUAL,
	          __void__setGeometry__osg_Geometry_P1,
	          "",
	          "");
	I_Method0(osg::Geometry *, getGeometry,
	          Properties::NON_VIRTUAL,
	          __osg_Geometry_P1__getGeometry,
	          "",
	          "");
	I_Method0(unsigned int, getNumOfTriangles,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getNumOfTriangles,
	          "",
	          "");
	I_Method3(osgUtil::EdgeCollector::Triangle *, addTriangle, IN, unsigned int, p1, IN, unsigned int, p2, IN, unsigned int, p3,
	          Properties::NON_VIRTUAL,
	          __Triangle_P1__addTriangle__unsigned_int__unsigned_int__unsigned_int,
	          "",
	          "");
	I_Method3(osgUtil::EdgeCollector::Triangle *, addTriangle, IN, osgUtil::EdgeCollector::Point *, p1, IN, osgUtil::EdgeCollector::Point *, p2, IN, osgUtil::EdgeCollector::Point *, p3,
	          Properties::NON_VIRTUAL,
	          __Triangle_P1__addTriangle__Point_P1__Point_P1__Point_P1,
	          "",
	          "");
	I_Method3(osgUtil::EdgeCollector::Edge *, addEdge, IN, osgUtil::EdgeCollector::Triangle *, triangle, IN, osgUtil::EdgeCollector::Point *, p1, IN, osgUtil::EdgeCollector::Point *, p2,
	          Properties::NON_VIRTUAL,
	          __Edge_P1__addEdge__Triangle_P1__Point_P1__Point_P1,
	          "",
	          "");
	I_Method2(osgUtil::EdgeCollector::Point *, addPoint, IN, osgUtil::EdgeCollector::Triangle *, triangle, IN, unsigned int, p1,
	          Properties::NON_VIRTUAL,
	          __Point_P1__addPoint__Triangle_P1__unsigned_int,
	          "",
	          "");
	I_Method2(osgUtil::EdgeCollector::Point *, addPoint, IN, osgUtil::EdgeCollector::Triangle *, triangle, IN, osgUtil::EdgeCollector::Point *, point,
	          Properties::NON_VIRTUAL,
	          __Point_P1__addPoint__Triangle_P1__Point_P1,
	          "",
	          "");
	I_Method1(void, getBoundaryEdgeList, IN, osgUtil::EdgeCollector::EdgeList &, el,
	          Properties::NON_VIRTUAL,
	          __void__getBoundaryEdgeList__EdgeList_R1,
	          "",
	          "");
	I_Method2(bool, extractBoundaryEdgeloop, IN, osgUtil::EdgeCollector::EdgeList &, el, IN, osgUtil::EdgeCollector::Edgeloop &, edgeloop,
	          Properties::NON_VIRTUAL,
	          __bool__extractBoundaryEdgeloop__EdgeList_R1__Edgeloop_R1,
	          "",
	          "");
	I_Method2(bool, extractBoundaryEdgeloopList, IN, osgUtil::EdgeCollector::EdgeList &, el, IN, osgUtil::EdgeCollector::EdgeloopList &, edgeloopList,
	          Properties::NON_VIRTUAL,
	          __bool__extractBoundaryEdgeloopList__EdgeList_R1__EdgeloopList_R1,
	          "",
	          "");
	I_Method1(void, getEdgeloopIndexList, IN, osgUtil::EdgeCollector::IndexArrayList &, ial,
	          Properties::NON_VIRTUAL,
	          __void__getEdgeloopIndexList__IndexArrayList_R1,
	          "",
	          "");
	I_SimpleProperty(osg::Geometry *, Geometry, 
	                 __osg_Geometry_P1__getGeometry, 
	                 __void__setGeometry__osg_Geometry_P1);
	I_PublicMemberProperty(osg::Geometry *, _geometry);
	I_PublicMemberProperty(osgUtil::EdgeCollector::EdgeSet, _edgeSet);
	I_PublicMemberProperty(osgUtil::EdgeCollector::TriangleSet, _triangleSet);
	I_PublicMemberProperty(osgUtil::EdgeCollector::PointSet, _pointSet);
	I_PublicMemberProperty(osgUtil::EdgeCollector::PointList, _originalPointList);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgUtil::EdgeCollector::Edge)
	I_DeclaringFile("osgUtil/EdgeCollector");
	I_BaseType(osg::Referenced);
	I_Constructor0(____Edge,
	               "",
	               "");
	I_Method0(void, clear,
	          Properties::NON_VIRTUAL,
	          __void__clear,
	          "",
	          "");
	I_Method2(void, setOrderedPoints, IN, osgUtil::EdgeCollector::Point *, p1, IN, osgUtil::EdgeCollector::Point *, p2,
	          Properties::NON_VIRTUAL,
	          __void__setOrderedPoints__Point_P1__Point_P1,
	          "",
	          "");
	I_Method1(void, addTriangle, IN, osgUtil::EdgeCollector::Triangle *, triangle,
	          Properties::NON_VIRTUAL,
	          __void__addTriangle__Triangle_P1,
	          "",
	          "");
	I_Method0(bool, isBoundaryEdge,
	          Properties::NON_VIRTUAL,
	          __bool__isBoundaryEdge,
	          "",
	          "");
	I_Method0(bool, isAdjacentToBoundary,
	          Properties::NON_VIRTUAL,
	          __bool__isAdjacentToBoundary,
	          "",
	          "");
	I_Method1(bool, endConnected, IN, const osgUtil::EdgeCollector::Edge &, rhs,
	          Properties::NON_VIRTUAL,
	          __bool__endConnected__C5_Edge_R1,
	          "",
	          "");
	I_Method1(bool, beginConnected, IN, const osgUtil::EdgeCollector::Edge &, rhs,
	          Properties::NON_VIRTUAL,
	          __bool__beginConnected__C5_Edge_R1,
	          "",
	          "");
	I_PublicMemberProperty(osg::ref_ptr< osgUtil::EdgeCollector::Point >, _p1);
	I_PublicMemberProperty(osg::ref_ptr< osgUtil::EdgeCollector::Point >, _p2);
	I_PublicMemberProperty(osg::ref_ptr< osgUtil::EdgeCollector::Point >, _op1);
	I_PublicMemberProperty(osg::ref_ptr< osgUtil::EdgeCollector::Point >, _op2);
	I_PublicMemberProperty(osgUtil::EdgeCollector::TriangleSet, _triangles);
END_REFLECTOR

TYPE_NAME_ALIAS(std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Edge > >, osgUtil::EdgeCollector::Edgeloop::EdgeList)

BEGIN_OBJECT_REFLECTOR(osgUtil::EdgeCollector::Edgeloop)
	I_DeclaringFile("osgUtil/EdgeCollector");
	I_BaseType(osg::Referenced);
	I_Constructor0(____Edgeloop,
	               "",
	               "");
	I_Method0(bool, isClosed,
	          Properties::NON_VIRTUAL,
	          __bool__isClosed,
	          "",
	          "");
	I_Method0(osg::UIntArray *, toIndexArray,
	          Properties::NON_VIRTUAL,
	          __osg_UIntArray_P1__toIndexArray,
	          "",
	          "");
	I_PublicMemberProperty(osgUtil::EdgeCollector::Edgeloop::EdgeList, _edgeList);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgUtil::EdgeCollector::Point)
	I_DeclaringFile("osgUtil/EdgeCollector");
	I_BaseType(osg::Referenced);
	I_Constructor0(____Point,
	               "",
	               "");
	I_Method0(void, clear,
	          Properties::NON_VIRTUAL,
	          __void__clear,
	          "",
	          "");
	I_Method0(bool, isBoundaryPoint,
	          Properties::NON_VIRTUAL,
	          __bool__isBoundaryPoint,
	          "",
	          "");
	I_PublicMemberProperty(bool, _protected);
	I_PublicMemberProperty(unsigned int, _index);
	I_PublicMemberProperty(osg::Vec3d, _vertex);
	I_PublicMemberProperty(osgUtil::EdgeCollector::TriangleSet, _triangles);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgUtil::EdgeCollector::Triangle)
	I_DeclaringFile("osgUtil/EdgeCollector");
	I_BaseType(osg::Referenced);
	I_Constructor0(____Triangle,
	               "",
	               "");
	I_Method0(void, clear,
	          Properties::NON_VIRTUAL,
	          __void__clear,
	          "",
	          "");
	I_Method3(void, setOrderedPoints, IN, osgUtil::EdgeCollector::Point *, p1, IN, osgUtil::EdgeCollector::Point *, p2, IN, osgUtil::EdgeCollector::Point *, p3,
	          Properties::NON_VIRTUAL,
	          __void__setOrderedPoints__Point_P1__Point_P1__Point_P1,
	          "",
	          "");
	I_Method1(float, distance, IN, const osg::Vec3 &, vertex,
	          Properties::NON_VIRTUAL,
	          __float__distance__C5_osg_Vec3_R1,
	          "",
	          "");
	I_Method0(bool, isBoundaryTriangle,
	          Properties::NON_VIRTUAL,
	          __bool__isBoundaryTriangle,
	          "",
	          "");
	I_PublicMemberProperty(osg::ref_ptr< osgUtil::EdgeCollector::Point >, _p1);
	I_PublicMemberProperty(osg::ref_ptr< osgUtil::EdgeCollector::Point >, _p2);
	I_PublicMemberProperty(osg::ref_ptr< osgUtil::EdgeCollector::Point >, _p3);
	I_PublicMemberProperty(osg::ref_ptr< osgUtil::EdgeCollector::Point >, _op1);
	I_PublicMemberProperty(osg::ref_ptr< osgUtil::EdgeCollector::Point >, _op2);
	I_PublicMemberProperty(osg::ref_ptr< osgUtil::EdgeCollector::Point >, _op3);
	I_PublicMemberProperty(osg::ref_ptr< osgUtil::EdgeCollector::Edge >, _e1);
	I_PublicMemberProperty(osg::ref_ptr< osgUtil::EdgeCollector::Edge >, _e2);
	I_PublicMemberProperty(osg::ref_ptr< osgUtil::EdgeCollector::Edge >, _e3);
	I_PublicMemberProperty(osg::Plane, _plane);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::ref_ptr< osg::UIntArray >)
	I_DeclaringFile("osg/ref_ptr");
	I_Constructor0(____ref_ptr,
	               "",
	               "");
	I_Constructor1(IN, osg::UIntArray *, ptr,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__T_P1,
	               "",
	               "");
	I_Constructor1(IN, const osg::ref_ptr< osg::UIntArray > &, rp,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__C5_ref_ptr_R1,
	               "",
	               "");
	I_Method0(osg::UIntArray *, get,
	          Properties::NON_VIRTUAL,
	          __T_P1__get,
	          "",
	          "");
	I_Method0(bool, valid,
	          Properties::NON_VIRTUAL,
	          __bool__valid,
	          "",
	          "");
	I_Method0(osg::UIntArray *, release,
	          Properties::NON_VIRTUAL,
	          __T_P1__release,
	          "",
	          "");
	I_Method1(void, swap, IN, osg::ref_ptr< osg::UIntArray > &, rp,
	          Properties::NON_VIRTUAL,
	          __void__swap__ref_ptr_R1,
	          "",
	          "");
	I_SimpleProperty(osg::UIntArray *, , 
	                 __T_P1__get, 
	                 0);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::ref_ptr< osgUtil::EdgeCollector::Edge >)
	I_DeclaringFile("osg/ref_ptr");
	I_Constructor0(____ref_ptr,
	               "",
	               "");
	I_Constructor1(IN, osgUtil::EdgeCollector::Edge *, ptr,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__T_P1,
	               "",
	               "");
	I_Constructor1(IN, const osg::ref_ptr< osgUtil::EdgeCollector::Edge > &, rp,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__C5_ref_ptr_R1,
	               "",
	               "");
	I_Method0(osgUtil::EdgeCollector::Edge *, get,
	          Properties::NON_VIRTUAL,
	          __T_P1__get,
	          "",
	          "");
	I_Method0(bool, valid,
	          Properties::NON_VIRTUAL,
	          __bool__valid,
	          "",
	          "");
	I_Method0(osgUtil::EdgeCollector::Edge *, release,
	          Properties::NON_VIRTUAL,
	          __T_P1__release,
	          "",
	          "");
	I_Method1(void, swap, IN, osg::ref_ptr< osgUtil::EdgeCollector::Edge > &, rp,
	          Properties::NON_VIRTUAL,
	          __void__swap__ref_ptr_R1,
	          "",
	          "");
	I_SimpleProperty(osgUtil::EdgeCollector::Edge *, , 
	                 __T_P1__get, 
	                 0);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::ref_ptr< osgUtil::EdgeCollector::Edgeloop >)
	I_DeclaringFile("osg/ref_ptr");
	I_Constructor0(____ref_ptr,
	               "",
	               "");
	I_Constructor1(IN, osgUtil::EdgeCollector::Edgeloop *, ptr,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__T_P1,
	               "",
	               "");
	I_Constructor1(IN, const osg::ref_ptr< osgUtil::EdgeCollector::Edgeloop > &, rp,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__C5_ref_ptr_R1,
	               "",
	               "");
	I_Method0(osgUtil::EdgeCollector::Edgeloop *, get,
	          Properties::NON_VIRTUAL,
	          __T_P1__get,
	          "",
	          "");
	I_Method0(bool, valid,
	          Properties::NON_VIRTUAL,
	          __bool__valid,
	          "",
	          "");
	I_Method0(osgUtil::EdgeCollector::Edgeloop *, release,
	          Properties::NON_VIRTUAL,
	          __T_P1__release,
	          "",
	          "");
	I_Method1(void, swap, IN, osg::ref_ptr< osgUtil::EdgeCollector::Edgeloop > &, rp,
	          Properties::NON_VIRTUAL,
	          __void__swap__ref_ptr_R1,
	          "",
	          "");
	I_SimpleProperty(osgUtil::EdgeCollector::Edgeloop *, , 
	                 __T_P1__get, 
	                 0);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::ref_ptr< osgUtil::EdgeCollector::Point >)
	I_DeclaringFile("osg/ref_ptr");
	I_Constructor0(____ref_ptr,
	               "",
	               "");
	I_Constructor1(IN, osgUtil::EdgeCollector::Point *, ptr,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__T_P1,
	               "",
	               "");
	I_Constructor1(IN, const osg::ref_ptr< osgUtil::EdgeCollector::Point > &, rp,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__C5_ref_ptr_R1,
	               "",
	               "");
	I_Method0(osgUtil::EdgeCollector::Point *, get,
	          Properties::NON_VIRTUAL,
	          __T_P1__get,
	          "",
	          "");
	I_Method0(bool, valid,
	          Properties::NON_VIRTUAL,
	          __bool__valid,
	          "",
	          "");
	I_Method0(osgUtil::EdgeCollector::Point *, release,
	          Properties::NON_VIRTUAL,
	          __T_P1__release,
	          "",
	          "");
	I_Method1(void, swap, IN, osg::ref_ptr< osgUtil::EdgeCollector::Point > &, rp,
	          Properties::NON_VIRTUAL,
	          __void__swap__ref_ptr_R1,
	          "",
	          "");
	I_SimpleProperty(osgUtil::EdgeCollector::Point *, , 
	                 __T_P1__get, 
	                 0);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::ref_ptr< osgUtil::EdgeCollector::Triangle >)
	I_DeclaringFile("osg/ref_ptr");
	I_Constructor0(____ref_ptr,
	               "",
	               "");
	I_Constructor1(IN, osgUtil::EdgeCollector::Triangle *, ptr,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__T_P1,
	               "",
	               "");
	I_Constructor1(IN, const osg::ref_ptr< osgUtil::EdgeCollector::Triangle > &, rp,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__C5_ref_ptr_R1,
	               "",
	               "");
	I_Method0(osgUtil::EdgeCollector::Triangle *, get,
	          Properties::NON_VIRTUAL,
	          __T_P1__get,
	          "",
	          "");
	I_Method0(bool, valid,
	          Properties::NON_VIRTUAL,
	          __bool__valid,
	          "",
	          "");
	I_Method0(osgUtil::EdgeCollector::Triangle *, release,
	          Properties::NON_VIRTUAL,
	          __T_P1__release,
	          "",
	          "");
	I_Method1(void, swap, IN, osg::ref_ptr< osgUtil::EdgeCollector::Triangle > &, rp,
	          Properties::NON_VIRTUAL,
	          __void__swap__ref_ptr_R1,
	          "",
	          "");
	I_SimpleProperty(osgUtil::EdgeCollector::Triangle *, , 
	                 __T_P1__get, 
	                 0);
END_REFLECTOR

STD_LIST_REFLECTOR(std::list< osg::ref_ptr< osg::UIntArray > >)

STD_LIST_REFLECTOR(std::list< osg::ref_ptr< osgUtil::EdgeCollector::Edgeloop > >)

STD_LIST_REFLECTOR(std::list< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > >)

STD_MAP_REFLECTOR(std::map< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > COMMA  unsigned int COMMA  osgUtil::dereference_less >)

STD_SET_REFLECTOR(std::set< osg::ref_ptr< osgUtil::EdgeCollector::Edge > COMMA  osgUtil::dereference_less >)

STD_SET_REFLECTOR(std::set< osg::ref_ptr< osgUtil::EdgeCollector::Point > COMMA  osgUtil::dereference_less >)

STD_SET_REFLECTOR(std::set< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > >)

STD_VECTOR_REFLECTOR(std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Edge > >)

STD_VECTOR_REFLECTOR(std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Point > >)

