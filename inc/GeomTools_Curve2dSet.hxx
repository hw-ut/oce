// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomTools_Curve2dSet_HeaderFile
#define _GeomTools_Curve2dSet_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TColStd_IndexedMapOfTransient.hxx>
#include <Handle_Message_ProgressIndicator.hxx>
#include <Standard_Integer.hxx>
#include <Handle_Geom2d_Curve.hxx>
#include <Standard_OStream.hxx>
#include <Standard_IStream.hxx>
#include <Standard_Boolean.hxx>
class Message_ProgressIndicator;
class Standard_OutOfRange;
class Geom2d_Curve;


//! Stores a set of Curves from Geom2d.
class GeomTools_Curve2dSet 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Returns an empty set of Curves.
  Standard_EXPORT GeomTools_Curve2dSet();
  
  //! Clears the content of the set.
  Standard_EXPORT   void Clear() ;
  
  //! Incorporate a new Curve in the  set and returns
  //! its index.
  Standard_EXPORT   Standard_Integer Add (const Handle(Geom2d_Curve)& C) ;
  
  //! Returns the Curve of index <I>.
  Standard_EXPORT   Handle(Geom2d_Curve) Curve2d (const Standard_Integer I)  const;
  
  //! Returns the index of <L>.
  Standard_EXPORT   Standard_Integer Index (const Handle(Geom2d_Curve)& C)  const;
  
  //! Dumps the content of me on the stream <OS>.
  Standard_EXPORT   void Dump (Standard_OStream& OS)  const;
  
  //! Writes the content of  me  on the stream <OS> in a
  //! format that can be read back by Read.
  Standard_EXPORT   void Write (Standard_OStream& OS)  const;
  
  //! Reads the content of me from the  stream  <IS>. me
  //! is first cleared.
  Standard_EXPORT   void Read (Standard_IStream& IS) ;
  
  //! Dumps the curve on the stream,  if compact is True
  //! use the compact format that can be read back.
  Standard_EXPORT static   void PrintCurve2d (const Handle(Geom2d_Curve)& C, Standard_OStream& OS, const Standard_Boolean compact = Standard_False) ;
  
  //! Reads the curve  from  the stream.  The  curve  is
  //! assumed   to have  been  writtent  with  the Print
  //! method (compact = True).
  Standard_EXPORT static   Standard_IStream& ReadCurve2d (Standard_IStream& IS, Handle(Geom2d_Curve)& C) ;
  
  Standard_EXPORT   void SetProgress (const Handle(Message_ProgressIndicator)& PR) ;
  
  Standard_EXPORT   Handle(Message_ProgressIndicator) GetProgress()  const;




protected:





private:



  TColStd_IndexedMapOfTransient myMap;
  Handle(Message_ProgressIndicator) myProgress;


};







#endif // _GeomTools_Curve2dSet_HeaderFile
