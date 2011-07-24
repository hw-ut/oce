// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepOffsetAPI_MakeOffset_HeaderFile
#define _BRepOffsetAPI_MakeOffset_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _GeomAbs_JoinType_HeaderFile
#include <GeomAbs_JoinType.hxx>
#endif
#ifndef _TopoDS_Face_HeaderFile
#include <TopoDS_Face.hxx>
#endif
#ifndef _TopTools_ListOfShape_HeaderFile
#include <TopTools_ListOfShape.hxx>
#endif
#ifndef _BRepFill_ListOfOffsetWire_HeaderFile
#include <BRepFill_ListOfOffsetWire.hxx>
#endif
#ifndef _BRepBuilderAPI_MakeShape_HeaderFile
#include <BRepBuilderAPI_MakeShape.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class Standard_ConstructionError;
class TopoDS_Face;
class TopoDS_Wire;
class TopTools_ListOfShape;
class TopoDS_Shape;


//! Describes algorithms for offsetting wires from a set of <br>
//! wires contained in a planar face. <br>
//! A MakeOffset object provides a framework for: <br>
//! - defining the construction of an offset, <br>
//! - implementing the construction algorithm, and <br>
//! - consulting the result. <br>
class BRepOffsetAPI_MakeOffset  : public BRepBuilderAPI_MakeShape {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  //! Constructs an algorithm for creating an empty offset <br>
  Standard_EXPORT   BRepOffsetAPI_MakeOffset();
  //! Constructs an algorithm for creating an algorithm <br>
//! to build parallels to the spine Spine <br>
  Standard_EXPORT   BRepOffsetAPI_MakeOffset(const TopoDS_Face& Spine,const GeomAbs_JoinType Join = GeomAbs_Arc);
  //! Initializes the algorithm to construct parallels to the spine Spine. <br>
//! Join defines the type of parallel generated by the <br>
//! salient vertices of the spine. The default type is <br>
//! GeomAbs_Arc where the vertices generate sections <br>
//! of a circle. At present, this is the only construction type implemented. <br>
  Standard_EXPORT     void Init(const TopoDS_Face& Spine,const GeomAbs_JoinType Join = GeomAbs_Arc) ;
  
  Standard_EXPORT   BRepOffsetAPI_MakeOffset(const TopoDS_Wire& Spine,const GeomAbs_JoinType Join = GeomAbs_Arc);
  //! Initialize the evaluation of Offseting. <br>
  Standard_EXPORT     void Init(const GeomAbs_JoinType Join = GeomAbs_Arc) ;
  //! Initializes the algorithm to construct parallels to the wire Spine. <br>
  Standard_EXPORT     void AddWire(const TopoDS_Wire& Spine) ;
  //!  Computes a parallel to the spine at distance Offset and <br>
//! at an altitude Alt from the plane of the spine in relation <br>
//! to the normal to the spine. <br>
//! Exceptions: Standard_ConstructionError if the offset is not built. <br>
  Standard_EXPORT     void Perform(const Standard_Real Offset,const Standard_Real Alt = 0.0) ;
  //! Builds the resulting shape (redefined from MakeShape). <br>
  Standard_EXPORT   virtual  void Build() ;
  //! returns a list of the created shapes <br>
//!          from the shape <S>. <br>
  Standard_EXPORT   virtual const TopTools_ListOfShape& Generated(const TopoDS_Shape& S) ;





protected:





private:



Standard_Boolean myIsInitialized;
Standard_Boolean myLastIsLeft;
GeomAbs_JoinType myJoin;
TopoDS_Face myFace;
TopTools_ListOfShape myWires;
BRepFill_ListOfOffsetWire myLeft;
BRepFill_ListOfOffsetWire myRight;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif