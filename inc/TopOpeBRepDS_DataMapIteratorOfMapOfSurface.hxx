// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepDS_DataMapIteratorOfMapOfSurface_HeaderFile
#define _TopOpeBRepDS_DataMapIteratorOfMapOfSurface_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BasicMapIterator.hxx>
#include <Standard_Integer.hxx>
#include <Handle_TopOpeBRepDS_DataMapNodeOfMapOfSurface.hxx>
class Standard_NoSuchObject;
class TopOpeBRepDS_SurfaceData;
class TColStd_MapIntegerHasher;
class TopOpeBRepDS_MapOfSurface;
class TopOpeBRepDS_DataMapNodeOfMapOfSurface;



class TopOpeBRepDS_DataMapIteratorOfMapOfSurface  : public TCollection_BasicMapIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopOpeBRepDS_DataMapIteratorOfMapOfSurface();
  
  Standard_EXPORT TopOpeBRepDS_DataMapIteratorOfMapOfSurface(const TopOpeBRepDS_MapOfSurface& aMap);
  
  Standard_EXPORT   void Initialize (const TopOpeBRepDS_MapOfSurface& aMap) ;
  
  Standard_EXPORT  const  Standard_Integer& Key()  const;
  
  Standard_EXPORT  const  TopOpeBRepDS_SurfaceData& Value()  const;




protected:





private:





};







#endif // _TopOpeBRepDS_DataMapIteratorOfMapOfSurface_HeaderFile
