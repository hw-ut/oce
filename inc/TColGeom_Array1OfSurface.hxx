// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColGeom_Array1OfSurface_HeaderFile
#define _TColGeom_Array1OfSurface_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Integer.hxx>
#include <Standard_Address.hxx>
#include <Standard_Boolean.hxx>
#include <Handle_Geom_Surface.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class Geom_Surface;



class TColGeom_Array1OfSurface 
{
public:

  DEFINE_STANDARD_ALLOC

  
    TColGeom_Array1OfSurface(const Standard_Integer Low, const Standard_Integer Up);
  
    TColGeom_Array1OfSurface(const Handle(Geom_Surface)& Item, const Standard_Integer Low, const Standard_Integer Up);
  
  Standard_EXPORT   void Init (const Handle(Geom_Surface)& V) ;
  
      void Destroy() ;
~TColGeom_Array1OfSurface()
{
  Destroy();
}
  
      Standard_Boolean IsAllocated()  const;
  
  Standard_EXPORT  const  TColGeom_Array1OfSurface& Assign (const TColGeom_Array1OfSurface& Other) ;
 const  TColGeom_Array1OfSurface& operator = (const TColGeom_Array1OfSurface& Other) 
{
  return Assign(Other);
}
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Handle(Geom_Surface)& Value) ;
  
     const  Handle(Geom_Surface)& Value (const Standard_Integer Index)  const;
   const  Handle(Geom_Surface)& operator () (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
      Handle(Geom_Surface)& ChangeValue (const Standard_Integer Index) ;
    Handle(Geom_Surface)& operator () (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}




protected:





private:

  
  Standard_EXPORT TColGeom_Array1OfSurface(const TColGeom_Array1OfSurface& AnArray);


  Standard_Integer myLowerBound;
  Standard_Integer myUpperBound;
  Standard_Address myStart;
  Standard_Boolean isAllocated;


};

#define Array1Item Handle(Geom_Surface)
#define Array1Item_hxx <Geom_Surface.hxx>
#define TCollection_Array1 TColGeom_Array1OfSurface
#define TCollection_Array1_hxx <TColGeom_Array1OfSurface.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx




#endif // _TColGeom_Array1OfSurface_HeaderFile
