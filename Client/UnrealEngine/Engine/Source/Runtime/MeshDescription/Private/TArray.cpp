// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshDescription
// Functions: 114

// TArray<FTriangleID,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_><FTriangleID_const_,int> @ 1436343f0

TArray<FTriangleID,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_> * __thiscall
TArray<FTriangleID,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>::
TArray<FTriangleID,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_><FTriangleID_const_,int>
          (TArray<FTriangleID,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_> *this,
          TArrayView<FTriangleID_const_,int> *param_1)

{
  int iVar1;
  FTriangleID *_Src;
  ForElementType<FTriangleID> FVar2;
  ForElementType<FTriangleID> _Dst;
  
  (this->AllocatorInstance).SecondaryData = (ForElementType<FTriangleID>)0x0;
  iVar1 = param_1->ArrayNum;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar1;
  if (iVar1 == 0) {
    this->ArrayMax = 0x40;
    return this;
  }
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FTriangleID>_>
            (4,4,iVar1,0,&this->AllocatorInstance,iVar1,&this->ArrayMax);
  FVar2 = (this->AllocatorInstance).SecondaryData;
  _Dst = (ForElementType<FTriangleID>)this;
  if (FVar2 != (ForElementType<FTriangleID>)0x0) {
    _Dst = FVar2;
  }
  memcpy((void *)_Dst,_Src,(longlong)iVar1 << 2);
  return this;
}

// operator=<FEdgeID_const_,int> @ 143634e30

TArray<FEdgeID,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FEdgeID,TSizedDefaultAllocator<32>_>::operator=<FEdgeID_const_,int>
          (TArray<FEdgeID,TSizedDefaultAllocator<32>_> *this,TArrayView<FEdgeID_const_,int> *param_1
          )

{
  int *piVar1;
  int iVar2;
  FEdgeID *_Src;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  if (iVar2 != 0) {
    memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 2);
  }
  return this;
}

// operator=<FPolygonID_const_,int> @ 143634ec0

TArray<FPolygonID,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FPolygonID,TSizedDefaultAllocator<32>_>::operator=<FPolygonID_const_,int>
          (TArray<FPolygonID,TSizedDefaultAllocator<32>_> *this,
          TArrayView<FPolygonID_const_,int> *param_1)

{
  int *piVar1;
  int iVar2;
  FPolygonID *_Src;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  if (iVar2 != 0) {
    memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 2);
  }
  return this;
}

// operator=<FTriangleID_const_,int> @ 143634f50

TArray<FTriangleID,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FTriangleID,TSizedDefaultAllocator<32>_>::operator=<FTriangleID_const_,int>
          (TArray<FTriangleID,TSizedDefaultAllocator<32>_> *this,
          TArrayView<FTriangleID_const_,int> *param_1)

{
  int *piVar1;
  int iVar2;
  FTriangleID *_Src;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  if (iVar2 != 0) {
    memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 2);
  }
  return this;
}

// operator=<FVertexInstanceID_const_,int> @ 143634fe0

TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_>::operator=<FVertexInstanceID_const_,int>
          (TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *this,
          TArrayView<FVertexInstanceID_const_,int> *param_1)

{
  int *piVar1;
  int iVar2;
  FVertexInstanceID *_Src;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  if (iVar2 != 0) {
    memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 2);
  }
  return this;
}

// operator=<FEdgeID,int> @ 143635070

TArray<FEdgeID,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FEdgeID,TSizedDefaultAllocator<32>_>::operator=<FEdgeID,int>
          (TArray<FEdgeID,TSizedDefaultAllocator<32>_> *this,TArrayView<FEdgeID,int> *param_1)

{
  int *piVar1;
  int iVar2;
  FEdgeID *_Src;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  if (iVar2 != 0) {
    memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 2);
  }
  return this;
}

// operator=<FEdgeID,int> @ 143635100

TArray<FEdgeID,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> * __thiscall
TArray<FEdgeID,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>::operator=<FEdgeID,int>
          (TArray<FEdgeID,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *this,
          TArrayView<FEdgeID,int> *param_1)

{
  int *piVar1;
  int iVar2;
  FEdgeID *_Src;
  ForElementType<FEdgeID> FVar3;
  ForElementType<FEdgeID> _Dst;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0x10;
    return this;
  }
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FEdgeID>_>
            (4,4,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  FVar3 = (this->AllocatorInstance).SecondaryData;
  _Dst = (ForElementType<FEdgeID>)this;
  if (FVar3 != (ForElementType<FEdgeID>)0x0) {
    _Dst = FVar3;
  }
  if (iVar2 != 0) {
    memcpy((void *)_Dst,_Src,(longlong)iVar2 << 2);
  }
  return this;
}

// operator=<FVertexID,int> @ 1436351a0

TArray<FVertexID,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FVertexID,TSizedDefaultAllocator<32>_>::operator=<FVertexID,int>
          (TArray<FVertexID,TSizedDefaultAllocator<32>_> *this,TArrayView<FVertexID,int> *param_1)

{
  int *piVar1;
  int iVar2;
  FVertexID *_Src;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  if (iVar2 != 0) {
    memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 2);
  }
  return this;
}

// operator=<FVertexInstanceID,int> @ 143635230

TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_>::operator=<FVertexInstanceID,int>
          (TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *this,
          TArrayView<FVertexInstanceID,int> *param_1)

{
  int *piVar1;
  int iVar2;
  FVertexInstanceID *_Src;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  if (iVar2 != 0) {
    memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 2);
  }
  return this;
}

// operator=<FVertexInstanceID,int> @ 1436352c0

TArray<FVertexInstanceID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> * __thiscall
TArray<FVertexInstanceID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::
operator=<FVertexInstanceID,int>
          (TArray<FVertexInstanceID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *this,
          TArrayView<FVertexInstanceID,int> *param_1)

{
  int *piVar1;
  int iVar2;
  FVertexInstanceID *_Src;
  ForElementType<FVertexInstanceID> FVar3;
  ForElementType<FVertexInstanceID> _Dst;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 8;
    return this;
  }
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FVertexInstanceID>_>
            (4,4,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  FVar3 = (this->AllocatorInstance).SecondaryData;
  _Dst = (ForElementType<FVertexInstanceID>)this;
  if (FVar3 != (ForElementType<FVertexInstanceID>)0x0) {
    _Dst = FVar3;
  }
  if (iVar2 != 0) {
    memcpy((void *)_Dst,_Src,(longlong)iVar2 << 2);
  }
  return this;
}

// AddUniqueImpl<FEdgeID_const_&> @ 143637f20

int __thiscall
TArray<FEdgeID,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FEdgeID_const_&>
          (TArray<FEdgeID,TSizedDefaultAllocator<32>_> *this,FEdgeID *param_1)

{
  FEdgeID *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEdgeID *pFVar6;
  
  pFVar1 = (FEdgeID *)(this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + this->ArrayNum) {
    pFVar6 = pFVar1;
    do {
      if (*pFVar6 == *param_1) {
        iVar5 = (int)((longlong)pFVar6 - (longlong)pFVar1 >> 2);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      pFVar6 = pFVar6 + 1;
    } while (pFVar6 != pFVar1 + this->ArrayNum);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar5;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar5 + 1;
  *(FEdgeID *)(pFVar2 + (longlong)iVar5 * 4) = *param_1;
  return iVar5;
}

// AddUniqueImpl<FEdgeID_const_&> @ 143638020

int __thiscall
TArray<FEdgeID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::
AddUniqueImpl<FEdgeID_const_&>
          (TArray<FEdgeID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *this,
          FEdgeID *param_1)

{
  ForElementType<FEdgeID> FVar1;
  ForElementType<FEdgeID> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<FEdgeID> FVar6;
  ForElementType<FEdgeID> FVar7;
  
  FVar2 = (this->AllocatorInstance).SecondaryData;
  FVar7 = (ForElementType<FEdgeID>)this;
  if (FVar2 != (ForElementType<FEdgeID>)0x0) {
    FVar7 = FVar2;
  }
  FVar1 = (ForElementType<FEdgeID>)((longlong)FVar7 + (longlong)this->ArrayNum * 4);
  if (FVar7 != FVar1) {
    FVar6 = FVar7;
    do {
      if (*(FEdgeID *)FVar6 == *param_1) {
        iVar5 = (int)((longlong)FVar6 - (longlong)FVar7 >> 2);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      FVar6 = (ForElementType<FEdgeID>)((longlong)FVar6 + 4);
    } while (FVar6 != FVar1);
  }
  FVar7 = (ForElementType<FEdgeID>)this;
  if (FVar2 != (ForElementType<FEdgeID>)0x0) {
    FVar7 = FVar2;
  }
  if ((ulonglong)FVar7 <= param_1) {
    FVar7 = (ForElementType<FEdgeID>)this;
    if (FVar2 != (ForElementType<FEdgeID>)0x0) {
      FVar7 = FVar2;
    }
    if ((param_1 < (FEdgeID *)((longlong)FVar7 + (longlong)this->ArrayMax * 4)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FEdgeID>_>
                      (0x404,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar5 + 1;
  FVar2 = (this->AllocatorInstance).SecondaryData;
  if (FVar2 != (ForElementType<FEdgeID>)0x0) {
    this = (TArray<FEdgeID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
  }
  *(FEdgeID *)((longlong)this + (longlong)iVar5 * 4) = *param_1;
  return iVar5;
}

// AddUniqueImpl<FPolygonGroupID_const_&> @ 143638130

int __thiscall
TArray<FPolygonGroupID,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FPolygonGroupID_const_&>
          (TArray<FPolygonGroupID,TSizedDefaultAllocator<32>_> *this,FPolygonGroupID *param_1)

{
  FPolygonGroupID *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FPolygonGroupID *pFVar6;
  
  pFVar1 = (FPolygonGroupID *)(this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + this->ArrayNum) {
    pFVar6 = pFVar1;
    do {
      if (*pFVar6 == *param_1) {
        iVar5 = (int)((longlong)pFVar6 - (longlong)pFVar1 >> 2);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      pFVar6 = pFVar6 + 1;
    } while (pFVar6 != pFVar1 + this->ArrayNum);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar5;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar5 + 1;
  *(FPolygonGroupID *)(pFVar2 + (longlong)iVar5 * 4) = *param_1;
  return iVar5;
}

// AddUniqueImpl<FPolygonID_const_&> @ 143638230

int __thiscall
TArray<FPolygonID,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FPolygonID_const_&>
          (TArray<FPolygonID,TSizedDefaultAllocator<32>_> *this,FPolygonID *param_1)

{
  FPolygonID *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FPolygonID *pFVar6;
  
  pFVar1 = (FPolygonID *)(this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + this->ArrayNum) {
    pFVar6 = pFVar1;
    do {
      if (*pFVar6 == *param_1) {
        iVar5 = (int)((longlong)pFVar6 - (longlong)pFVar1 >> 2);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      pFVar6 = pFVar6 + 1;
    } while (pFVar6 != pFVar1 + this->ArrayNum);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar5;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar5 + 1;
  *(FPolygonID *)(pFVar2 + (longlong)iVar5 * 4) = *param_1;
  return iVar5;
}

// AddUniqueImpl<FPolygonID_const_&> @ 143638330

int __thiscall
TArray<FPolygonID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::
AddUniqueImpl<FPolygonID_const_&>
          (TArray<FPolygonID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *this,
          FPolygonID *param_1)

{
  ForElementType<FPolygonID> FVar1;
  ForElementType<FPolygonID> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<FPolygonID> FVar6;
  ForElementType<FPolygonID> FVar7;
  
  FVar2 = (this->AllocatorInstance).SecondaryData;
  FVar7 = (ForElementType<FPolygonID>)this;
  if (FVar2 != (ForElementType<FPolygonID>)0x0) {
    FVar7 = FVar2;
  }
  FVar1 = (ForElementType<FPolygonID>)((longlong)FVar7 + (longlong)this->ArrayNum * 4);
  if (FVar7 != FVar1) {
    FVar6 = FVar7;
    do {
      if (*(FPolygonID *)FVar6 == *param_1) {
        iVar5 = (int)((longlong)FVar6 - (longlong)FVar7 >> 2);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      FVar6 = (ForElementType<FPolygonID>)((longlong)FVar6 + 4);
    } while (FVar6 != FVar1);
  }
  FVar7 = (ForElementType<FPolygonID>)this;
  if (FVar2 != (ForElementType<FPolygonID>)0x0) {
    FVar7 = FVar2;
  }
  if ((ulonglong)FVar7 <= param_1) {
    FVar7 = (ForElementType<FPolygonID>)this;
    if (FVar2 != (ForElementType<FPolygonID>)0x0) {
      FVar7 = FVar2;
    }
    if ((param_1 < (FPolygonID *)((longlong)FVar7 + (longlong)this->ArrayMax * 4)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FPolygonID>_>
                      (0x404,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar5 + 1;
  FVar2 = (this->AllocatorInstance).SecondaryData;
  if (FVar2 != (ForElementType<FPolygonID>)0x0) {
    this = (TArray<FPolygonID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
  }
  *(FPolygonID *)((longlong)this + (longlong)iVar5 * 4) = *param_1;
  return iVar5;
}

// AddUniqueImpl<FVertexID_const_&> @ 143638440

int __thiscall
TArray<FVertexID,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FVertexID_const_&>
          (TArray<FVertexID,TSizedDefaultAllocator<32>_> *this,FVertexID *param_1)

{
  FVertexID *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FVertexID *pFVar6;
  
  pFVar1 = (FVertexID *)(this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + this->ArrayNum) {
    pFVar6 = pFVar1;
    do {
      if (*pFVar6 == *param_1) {
        iVar5 = (int)((longlong)pFVar6 - (longlong)pFVar1 >> 2);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      pFVar6 = pFVar6 + 1;
    } while (pFVar6 != pFVar1 + this->ArrayNum);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar5;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar5 + 1;
  *(FVertexID *)(pFVar2 + (longlong)iVar5 * 4) = *param_1;
  return iVar5;
}

// AddUniqueImpl<FVertexInstanceID_const_&> @ 143638540

int __thiscall
TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FVertexInstanceID_const_&>
          (TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *this,FVertexInstanceID *param_1)

{
  FVertexInstanceID *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FVertexInstanceID *pFVar6;
  
  pFVar1 = (FVertexInstanceID *)(this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + this->ArrayNum) {
    pFVar6 = pFVar1;
    do {
      if (*pFVar6 == *param_1) {
        iVar5 = (int)((longlong)pFVar6 - (longlong)pFVar1 >> 2);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      pFVar6 = pFVar6 + 1;
    } while (pFVar6 != pFVar1 + this->ArrayNum);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar5;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar5 + 1;
  *(FVertexInstanceID *)(pFVar2 + (longlong)iVar5 * 4) = *param_1;
  return iVar5;
}

// BulkSerialize @ 143662300

void __thiscall
TArray<int,TSizedDefaultAllocator<32>_>::BulkSerialize
          (TArray<int,TSizedDefaultAllocator<32>_> *this,FArchive *param_1,bool param_2)

{
  int *piVar1;
  int *piVar2;
  undefined1 *puVar3;
  uint uVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  char *pcVar8;
  atomic<unsigned_char> *paVar9;
  int iVar10;
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  
  local_res10[0] = 4;
  plVar5 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar5;
    *plVar5 = *plVar5 + 4;
  }
  puVar3 = &param_1->field_0x2a;
  if ((param_2) ||
     ((((param_1->field_0x28 & 4) != 0 &&
       ((*(longlong *)&param_1->field_0x68 == 0 ||
        (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)))) || ((*puVar3 & 1) != 0))))
  {
    TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>(param_1,this);
    return;
  }
  piVar1 = &this->ArrayMax;
  piVar2 = &this->ArrayNum;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)this->ArrayNum << 2,(longlong)*piVar1 << 2);
  if ((param_1->field_0x28 & 1) == 0) {
    if ((param_1->field_0x28 & 4) != 0) {
      plVar5 = *(longlong **)&param_1->field_0x8;
      local_res20[0] = *piVar2;
      if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
        if ((*puVar3 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
          uVar4 = local_res20[0];
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,local_res20);
          uVar4 = local_res20[0];
        }
      }
      else {
        uVar4 = *(uint *)*plVar5;
        *plVar5 = *plVar5 + 4;
        local_res20[0] = uVar4;
      }
LAB_143662524:
      (**(code **)(*(longlong *)param_1 + 0x188))
                (param_1,(this->AllocatorInstance).Data,(longlong)(int)uVar4 << 2);
      return;
    }
  }
  else {
    if (local_res10[0] == 4) {
      plVar5 = *(longlong **)&param_1->field_0x8;
      local_res18[0] = 0;
      if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
        if ((*puVar3 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,local_res18);
        }
      }
      else {
        local_res18[0] = *(uint *)*plVar5;
        *plVar5 = *plVar5 + 4;
      }
      if (local_res18[0] < 0x20000000) {
        *piVar2 = 0;
        if (*piVar1 != local_res18[0]) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_res18[0],&this->AllocatorInstance,0,piVar1);
        }
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_res18[0],&this->AllocatorInstance,piVar2,piVar1);
        uVar4 = local_res18[0];
        goto LAB_143662524;
      }
      pcVar8 = 
      "NewArrayNum >= 0 && std::numeric_limits<SizeType>::max() / (SizeType)ElementSize >= NewArrayNum"
      ;
      iVar10 = 0x65a;
      paVar9 = &bGEnsureHasExecuted<2846541355549722202>;
    }
    else {
      pcVar8 = "SerializedElementSize == ElementSize";
      iVar10 = 0x64f;
      paVar9 = &bGEnsureHasExecuted<2846541355549722191>;
    }
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (paVar9,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,iVar10,pcVar8);
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return;
}

// BulkSerialize @ 143662560

void __thiscall
TArray<float,TSizedDefaultAllocator<32>_>::BulkSerialize
          (TArray<float,TSizedDefaultAllocator<32>_> *this,FArchive *param_1,bool param_2)

{
  int *piVar1;
  int *piVar2;
  undefined1 *puVar3;
  uint uVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  char *pcVar8;
  atomic<unsigned_char> *paVar9;
  int iVar10;
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  
  local_res10[0] = 4;
  plVar5 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar5;
    *plVar5 = *plVar5 + 4;
  }
  puVar3 = &param_1->field_0x2a;
  if ((param_2) ||
     ((((param_1->field_0x28 & 4) != 0 &&
       ((*(longlong *)&param_1->field_0x68 == 0 ||
        (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)))) || ((*puVar3 & 1) != 0))))
  {
    TArrayPrivateFriend::Serialize<float,TSizedDefaultAllocator<32>_>(param_1,this);
    return;
  }
  piVar1 = &this->ArrayMax;
  piVar2 = &this->ArrayNum;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)this->ArrayNum << 2,(longlong)*piVar1 << 2);
  if ((param_1->field_0x28 & 1) == 0) {
    if ((param_1->field_0x28 & 4) != 0) {
      plVar5 = *(longlong **)&param_1->field_0x8;
      local_res20[0] = *piVar2;
      if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
        if ((*puVar3 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
          uVar4 = local_res20[0];
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,local_res20);
          uVar4 = local_res20[0];
        }
      }
      else {
        uVar4 = *(uint *)*plVar5;
        *plVar5 = *plVar5 + 4;
        local_res20[0] = uVar4;
      }
LAB_143662784:
      (**(code **)(*(longlong *)param_1 + 0x188))
                (param_1,(this->AllocatorInstance).Data,(longlong)(int)uVar4 << 2);
      return;
    }
  }
  else {
    if (local_res10[0] == 4) {
      plVar5 = *(longlong **)&param_1->field_0x8;
      local_res18[0] = 0;
      if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
        if ((*puVar3 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,local_res18);
        }
      }
      else {
        local_res18[0] = *(uint *)*plVar5;
        *plVar5 = *plVar5 + 4;
      }
      if (local_res18[0] < 0x20000000) {
        *piVar2 = 0;
        if (*piVar1 != local_res18[0]) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_res18[0],&this->AllocatorInstance,0,piVar1);
        }
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_res18[0],&this->AllocatorInstance,piVar2,piVar1);
        uVar4 = local_res18[0];
        goto LAB_143662784;
      }
      pcVar8 = 
      "NewArrayNum >= 0 && std::numeric_limits<SizeType>::max() / (SizeType)ElementSize >= NewArrayNum"
      ;
      iVar10 = 0x65a;
      paVar9 = &bGEnsureHasExecuted<2846541355549722202>;
    }
    else {
      pcVar8 = "SerializedElementSize == ElementSize";
      iVar10 = 0x64f;
      paVar9 = &bGEnsureHasExecuted<2846541355549722191>;
    }
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (paVar9,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,iVar10,pcVar8);
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return;
}

// BulkSerialize @ 1436627c0

void __thiscall
TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::BulkSerialize
          (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *this,FArchive *param_1,
          bool param_2)

{
  int *piVar1;
  int *piVar2;
  undefined1 *puVar3;
  uint uVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  char *pcVar8;
  atomic<unsigned_char> *paVar9;
  int iVar10;
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  
  local_res10[0] = 0x60;
  plVar5 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar5;
    *plVar5 = *plVar5 + 4;
  }
  puVar3 = &param_1->field_0x2a;
  if ((param_2) ||
     ((((param_1->field_0x28 & 4) != 0 &&
       ((*(longlong *)&param_1->field_0x68 == 0 ||
        (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)))) || ((*puVar3 & 1) != 0))))
  {
    TArrayPrivateFriend::Serialize<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>
              (param_1,this);
    return;
  }
  piVar1 = &this->ArrayMax;
  piVar2 = &this->ArrayNum;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*piVar2 * 0x60,(longlong)this->ArrayMax * 0x60);
  if ((param_1->field_0x28 & 1) == 0) {
    if ((param_1->field_0x28 & 4) != 0) {
      plVar5 = *(longlong **)&param_1->field_0x8;
      local_res20[0] = *piVar2;
      if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
        if ((*puVar3 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
          uVar4 = local_res20[0];
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,local_res20);
          uVar4 = local_res20[0];
        }
      }
      else {
        uVar4 = *(uint *)*plVar5;
        *plVar5 = *plVar5 + 4;
        local_res20[0] = uVar4;
      }
LAB_1436629f1:
      (**(code **)(*(longlong *)param_1 + 0x188))
                (param_1,(this->AllocatorInstance).Data,(longlong)(int)uVar4 * 0x60);
      return;
    }
  }
  else {
    if (local_res10[0] == 0x60) {
      plVar5 = *(longlong **)&param_1->field_0x8;
      local_res18[0] = 0;
      if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
        if ((*puVar3 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,local_res18);
        }
      }
      else {
        local_res18[0] = *(uint *)*plVar5;
        *plVar5 = *plVar5 + 4;
      }
      if (local_res18[0] < 0x1555556) {
        *piVar2 = 0;
        if (*piVar1 != local_res18[0]) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x60,0x10,local_res18[0],&this->AllocatorInstance,0,piVar1);
        }
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,local_res18[0],&this->AllocatorInstance,piVar2,piVar1);
        uVar4 = local_res18[0];
        goto LAB_1436629f1;
      }
      pcVar8 = 
      "NewArrayNum >= 0 && std::numeric_limits<SizeType>::max() / (SizeType)ElementSize >= NewArrayNum"
      ;
      iVar10 = 0x65a;
      paVar9 = &bGEnsureHasExecuted<2846541355549722202>;
    }
    else {
      pcVar8 = "SerializedElementSize == ElementSize";
      iVar10 = 0x64f;
      paVar9 = &bGEnsureHasExecuted<2846541355549722191>;
    }
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (paVar9,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,iVar10,pcVar8);
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return;
}

// BulkSerialize @ 143662a30

void __thiscall
TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::BulkSerialize
          (TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *this,FArchive *param_1,
          bool param_2)

{
  int *piVar1;
  int *piVar2;
  undefined1 *puVar3;
  uint uVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  char *pcVar8;
  atomic<unsigned_char> *paVar9;
  int iVar10;
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  
  local_res10[0] = 8;
  plVar5 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar5;
    *plVar5 = *plVar5 + 4;
  }
  puVar3 = &param_1->field_0x2a;
  if ((param_2) ||
     ((((param_1->field_0x28 & 4) != 0 &&
       ((*(longlong *)&param_1->field_0x68 == 0 ||
        (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)))) || ((*puVar3 & 1) != 0))))
  {
    TArrayPrivateFriend::Serialize<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>
              (param_1,this);
    return;
  }
  piVar1 = &this->ArrayMax;
  piVar2 = &this->ArrayNum;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)this->ArrayNum << 3,(longlong)*piVar1 << 3);
  if ((param_1->field_0x28 & 1) == 0) {
    if ((param_1->field_0x28 & 4) != 0) {
      plVar5 = *(longlong **)&param_1->field_0x8;
      local_res20[0] = *piVar2;
      if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
        if ((*puVar3 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
          uVar4 = local_res20[0];
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,local_res20);
          uVar4 = local_res20[0];
        }
      }
      else {
        uVar4 = *(uint *)*plVar5;
        *plVar5 = *plVar5 + 4;
        local_res20[0] = uVar4;
      }
LAB_143662c5a:
      (**(code **)(*(longlong *)param_1 + 0x188))
                (param_1,(this->AllocatorInstance).Data,(longlong)(int)uVar4 << 3);
      return;
    }
  }
  else {
    if (local_res10[0] == 8) {
      plVar5 = *(longlong **)&param_1->field_0x8;
      local_res18[0] = 0;
      if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
        if ((*puVar3 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,local_res18);
        }
      }
      else {
        local_res18[0] = *(uint *)*plVar5;
        *plVar5 = *plVar5 + 4;
      }
      if (local_res18[0] < 0x10000000) {
        *piVar2 = 0;
        if (*piVar1 != local_res18[0]) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,local_res18[0],&this->AllocatorInstance,0,piVar1);
        }
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,local_res18[0],&this->AllocatorInstance,piVar2,piVar1);
        uVar4 = local_res18[0];
        goto LAB_143662c5a;
      }
      pcVar8 = 
      "NewArrayNum >= 0 && std::numeric_limits<SizeType>::max() / (SizeType)ElementSize >= NewArrayNum"
      ;
      iVar10 = 0x65a;
      paVar9 = &bGEnsureHasExecuted<2846541355549722202>;
    }
    else {
      pcVar8 = "SerializedElementSize == ElementSize";
      iVar10 = 0x64f;
      paVar9 = &bGEnsureHasExecuted<2846541355549722191>;
    }
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (paVar9,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,iVar10,pcVar8);
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return;
}

// BulkSerialize @ 143662ca0

void __thiscall
TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::BulkSerialize
          (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *this,FArchive *param_1,
          bool param_2)

{
  int *piVar1;
  int *piVar2;
  undefined1 *puVar3;
  uint uVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  char *pcVar8;
  atomic<unsigned_char> *paVar9;
  int iVar10;
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  
  local_res10[0] = 0x10;
  plVar5 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar5;
    *plVar5 = *plVar5 + 4;
  }
  puVar3 = &param_1->field_0x2a;
  if ((param_2) ||
     ((((param_1->field_0x28 & 4) != 0 &&
       ((*(longlong *)&param_1->field_0x68 == 0 ||
        (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)))) || ((*puVar3 & 1) != 0))))
  {
    TArrayPrivateFriend::Serialize<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>
              (param_1,this);
    return;
  }
  piVar1 = &this->ArrayMax;
  piVar2 = &this->ArrayNum;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)this->ArrayNum << 4,(longlong)*piVar1 << 4);
  if ((param_1->field_0x28 & 1) == 0) {
    if ((param_1->field_0x28 & 4) != 0) {
      plVar5 = *(longlong **)&param_1->field_0x8;
      local_res20[0] = *piVar2;
      if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
        if ((*puVar3 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
          uVar4 = local_res20[0];
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,local_res20);
          uVar4 = local_res20[0];
        }
      }
      else {
        uVar4 = *(uint *)*plVar5;
        *plVar5 = *plVar5 + 4;
        local_res20[0] = uVar4;
      }
LAB_143662ec4:
      (**(code **)(*(longlong *)param_1 + 0x188))
                (param_1,(this->AllocatorInstance).Data,(longlong)(int)uVar4 << 4);
      return;
    }
  }
  else {
    if (local_res10[0] == 0x10) {
      plVar5 = *(longlong **)&param_1->field_0x8;
      local_res18[0] = 0;
      if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
        if ((*puVar3 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,local_res18);
        }
      }
      else {
        local_res18[0] = *(uint *)*plVar5;
        *plVar5 = *plVar5 + 4;
      }
      if (local_res18[0] < 0x8000000) {
        *piVar2 = 0;
        if (*piVar1 != local_res18[0]) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,0x10,local_res18[0],&this->AllocatorInstance,0,piVar1);
        }
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,0x10,local_res18[0],&this->AllocatorInstance,piVar2,piVar1);
        uVar4 = local_res18[0];
        goto LAB_143662ec4;
      }
      pcVar8 = 
      "NewArrayNum >= 0 && std::numeric_limits<SizeType>::max() / (SizeType)ElementSize >= NewArrayNum"
      ;
      iVar10 = 0x65a;
      paVar9 = &bGEnsureHasExecuted<2846541355549722202>;
    }
    else {
      pcVar8 = "SerializedElementSize == ElementSize";
      iVar10 = 0x64f;
      paVar9 = &bGEnsureHasExecuted<2846541355549722191>;
    }
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (paVar9,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,iVar10,pcVar8);
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return;
}

// BulkSerialize @ 143662f00

void __thiscall
TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::BulkSerialize
          (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *this,FArchive *param_1,
          bool param_2)

{
  int *piVar1;
  int *piVar2;
  undefined1 *puVar3;
  uint uVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  char *pcVar8;
  atomic<unsigned_char> *paVar9;
  int iVar10;
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  
  local_res10[0] = 0xc;
  plVar5 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar5;
    *plVar5 = *plVar5 + 4;
  }
  puVar3 = &param_1->field_0x2a;
  if ((param_2) ||
     ((((param_1->field_0x28 & 4) != 0 &&
       ((*(longlong *)&param_1->field_0x68 == 0 ||
        (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)))) || ((*puVar3 & 1) != 0))))
  {
    TArrayPrivateFriend::Serialize<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>
              (param_1,this);
    return;
  }
  piVar1 = &this->ArrayMax;
  piVar2 = &this->ArrayNum;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*piVar2 * 0xc,(longlong)this->ArrayMax * 0xc);
  if ((param_1->field_0x28 & 1) == 0) {
    if ((param_1->field_0x28 & 4) != 0) {
      plVar5 = *(longlong **)&param_1->field_0x8;
      local_res20[0] = *piVar2;
      if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
        if ((*puVar3 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
          uVar4 = local_res20[0];
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,local_res20);
          uVar4 = local_res20[0];
        }
      }
      else {
        uVar4 = *(uint *)*plVar5;
        *plVar5 = *plVar5 + 4;
        local_res20[0] = uVar4;
      }
LAB_143663131:
      (**(code **)(*(longlong *)param_1 + 0x188))
                (param_1,(this->AllocatorInstance).Data,(longlong)(int)uVar4 * 0xc);
      return;
    }
  }
  else {
    if (local_res10[0] == 0xc) {
      plVar5 = *(longlong **)&param_1->field_0x8;
      local_res18[0] = 0;
      if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
        if ((*puVar3 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,local_res18);
        }
      }
      else {
        local_res18[0] = *(uint *)*plVar5;
        *plVar5 = *plVar5 + 4;
      }
      if (local_res18[0] < 0xaaaaaab) {
        *piVar2 = 0;
        if (*piVar1 != local_res18[0]) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,local_res18[0],&this->AllocatorInstance,0,piVar1);
        }
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,local_res18[0],&this->AllocatorInstance,piVar2,piVar1);
        uVar4 = local_res18[0];
        goto LAB_143663131;
      }
      pcVar8 = 
      "NewArrayNum >= 0 && std::numeric_limits<SizeType>::max() / (SizeType)ElementSize >= NewArrayNum"
      ;
      iVar10 = 0x65a;
      paVar9 = &bGEnsureHasExecuted<2846541355549722202>;
    }
    else {
      pcVar8 = "SerializedElementSize == ElementSize";
      iVar10 = 0x64f;
      paVar9 = &bGEnsureHasExecuted<2846541355549722191>;
    }
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (paVar9,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,iVar10,pcVar8);
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return;
}

// BulkSerialize @ 143663170

void __thiscall
TArray<bool,TSizedDefaultAllocator<32>_>::BulkSerialize
          (TArray<bool,TSizedDefaultAllocator<32>_> *this,FArchive *param_1,bool param_2)

{
  int *piVar1;
  int *piVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  char *pcVar7;
  atomic<unsigned_char> *paVar8;
  longlong lVar9;
  int iVar10;
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  
  local_res10[0] = 1;
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  puVar3 = &param_1->field_0x2a;
  if ((param_2) ||
     ((((param_1->field_0x28 & 4) != 0 &&
       ((*(longlong *)&param_1->field_0x68 == 0 ||
        (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)))) || ((*puVar3 & 1) != 0))))
  {
    TArrayPrivateFriend::Serialize<bool,TSizedDefaultAllocator<32>_>(param_1,this);
    return;
  }
  piVar1 = &this->ArrayMax;
  piVar2 = &this->ArrayNum;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)this->ArrayNum,(longlong)*piVar1);
  if ((param_1->field_0x28 & 1) != 0) {
    if (local_res10[0] == 1) {
      plVar4 = *(longlong **)&param_1->field_0x8;
      local_res18[0] = 0;
      if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
        if ((*puVar3 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,local_res18);
        }
      }
      else {
        local_res18[0] = *(uint *)*plVar4;
        *plVar4 = *plVar4 + 4;
      }
      if (-1 < (int)local_res18[0]) {
        *piVar2 = 0;
        if (*piVar1 != local_res18[0]) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,local_res18[0],&this->AllocatorInstance,0,piVar1);
        }
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,local_res18[0],&this->AllocatorInstance,piVar2,piVar1);
        lVar9 = (longlong)(int)local_res18[0];
        goto LAB_1436632f0;
      }
      pcVar7 = 
      "NewArrayNum >= 0 && std::numeric_limits<SizeType>::max() / (SizeType)ElementSize >= NewArrayNum"
      ;
      iVar10 = 0x65a;
      paVar8 = &bGEnsureHasExecuted<2846541355549722202>;
    }
    else {
      pcVar7 = "SerializedElementSize == ElementSize";
      iVar10 = 0x64f;
      paVar8 = &bGEnsureHasExecuted<2846541355549722191>;
    }
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (paVar8,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,iVar10,pcVar7);
    if (!bVar6) {
      FArchiveState::SetError((FArchiveState *)param_1);
      return;
    }
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((param_1->field_0x28 & 4) == 0) {
    return;
  }
  plVar4 = *(longlong **)&param_1->field_0x8;
  local_res20[0] = *piVar2;
  if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
      lVar9 = (longlong)(int)local_res20[0];
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res20);
      lVar9 = (longlong)(int)local_res20[0];
    }
  }
  else {
    local_res20[0] = *(uint *)*plVar4;
    *plVar4 = *plVar4 + 4;
    lVar9 = (longlong)(int)local_res20[0];
  }
LAB_1436632f0:
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,(this->AllocatorInstance).Data,lVar9);
  return;
}

// Empty @ 14366ace0

void __thiscall
TArray<TAttributeArrayContainer<int>::FChunk,TSizedDefaultAllocator<32>_>::Empty
          (TArray<TAttributeArrayContainer<int>::FChunk,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  if (-1 < param_1) {
    DestructItems<TAttributeArrayContainer<int>::FChunk,int>
              ((FChunk *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc18,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14366ad50

void __thiscall
TArray<TAttributeArrayContainer<float>::FChunk,TSizedDefaultAllocator<32>_>::Empty
          (TArray<TAttributeArrayContainer<float>::FChunk,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  if (-1 < param_1) {
    DestructItems<TAttributeArrayContainer<float>::FChunk,int>
              ((FChunk *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc18,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14366adc0

void __thiscall
TArray<TAttributeArrayContainer<UE::Math::TTransform<double>_>::FChunk,TSizedDefaultAllocator<32>_>
::Empty(TArray<TAttributeArrayContainer<UE::Math::TTransform<double>_>::FChunk,TSizedDefaultAllocator<32>_>
        *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<TAttributeArrayContainer<UE::Math::TTransform<double>_>::FChunk,int>
              ((FChunk *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc18,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14366ae30

void __thiscall
TArray<TAttributeArrayContainer<UE::Math::TVector2<float>_>::FChunk,TSizedDefaultAllocator<32>_>::
Empty(TArray<TAttributeArrayContainer<UE::Math::TVector2<float>_>::FChunk,TSizedDefaultAllocator<32>_>
      *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<TAttributeArrayContainer<UE::Math::TVector2<float>_>::FChunk,int>
              ((FChunk *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc18,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14366aea0

void __thiscall
TArray<TAttributeArrayContainer<UE::Math::TVector4<float>_>::FChunk,TSizedDefaultAllocator<32>_>::
Empty(TArray<TAttributeArrayContainer<UE::Math::TVector4<float>_>::FChunk,TSizedDefaultAllocator<32>_>
      *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<TAttributeArrayContainer<UE::Math::TVector4<float>_>::FChunk,int>
              ((FChunk *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc18,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14366af10

void __thiscall
TArray<TAttributeArrayContainer<UE::Math::TVector<float>_>::FChunk,TSizedDefaultAllocator<32>_>::
Empty(TArray<TAttributeArrayContainer<UE::Math::TVector<float>_>::FChunk,TSizedDefaultAllocator<32>_>
      *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<TAttributeArrayContainer<UE::Math::TVector<float>_>::FChunk,int>
              ((FChunk *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc18,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14366af80

void __thiscall
TArray<TAttributeArrayContainer<FName>::FChunk,TSizedDefaultAllocator<32>_>::Empty
          (TArray<TAttributeArrayContainer<FName>::FChunk,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  if (-1 < param_1) {
    DestructItems<TAttributeArrayContainer<FName>::FChunk,int>
              ((FChunk *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc18,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14366aff0

void __thiscall
TArray<TAttributeArrayContainer<bool>::FChunk,TSizedDefaultAllocator<32>_>::Empty
          (TArray<TAttributeArrayContainer<bool>::FChunk,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  if (-1 < param_1) {
    DestructItems<TAttributeArrayContainer<bool>::FChunk,int>
              ((FChunk *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc18,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14366b060

void __thiscall
TArray<FEdgeID,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FEdgeID,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14366b0b0

void __thiscall
TArray<FMeshTriangle_Legacy,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FMeshTriangle_Legacy,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14366b100

void __thiscall
TArray<FPolygonID,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FPolygonID,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14366b150

void __thiscall
TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14366b1a0

void __thiscall
TArray<TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::Empty
          (TArray<TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_>,int>
              ((TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *)
               (this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14366b210

void __thiscall
TArray<TAttributeArrayContainer<int>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
Empty(TArray<TAttributeArrayContainer<int>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
      *this,int param_1)

{
  ForElementType<TAttributeArrayContainer<int>_> FVar1;
  ForElementType<TAttributeArrayContainer<int>_> FVar2;
  
  if (-1 < param_1) {
    FVar1 = (this->AllocatorInstance).SecondaryData;
    FVar2 = (ForElementType<TAttributeArrayContainer<int>_>)this;
    if (FVar1 != (ForElementType<TAttributeArrayContainer<int>_>)0x0) {
      FVar2 = FVar1;
    }
    DestructItems<TAttributeArrayContainer<int>,int>
              ((TAttributeArrayContainer<int> *)FVar2,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<int>_>_>
                (0x18,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14366b280

void __thiscall
TArray<TAttributeArrayContainer<float>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
Empty(TArray<TAttributeArrayContainer<float>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
      *this,int param_1)

{
  ForElementType<TAttributeArrayContainer<float>_> FVar1;
  ForElementType<TAttributeArrayContainer<float>_> FVar2;
  
  if (-1 < param_1) {
    FVar1 = (this->AllocatorInstance).SecondaryData;
    FVar2 = (ForElementType<TAttributeArrayContainer<float>_>)this;
    if (FVar1 != (ForElementType<TAttributeArrayContainer<float>_>)0x0) {
      FVar2 = FVar1;
    }
    DestructItems<TAttributeArrayContainer<float>,int>
              ((TAttributeArrayContainer<float> *)FVar2,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<float>_>_>
                (0x18,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14366b2f0

void __thiscall
TArray<TAttributeArrayContainer<UE::Math::TTransform<double>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
::Empty(TArray<TAttributeArrayContainer<UE::Math::TTransform<double>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
        *this,int param_1)

{
  ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_> FVar1;
  ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_> FVar2;
  
  if (-1 < param_1) {
    FVar1 = (this->AllocatorInstance).SecondaryData;
    FVar2 = (ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>)this;
    if (FVar1 != (ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>)0x0) {
      FVar2 = FVar1;
    }
    DestructItems<TAttributeArrayContainer<UE::Math::TTransform<double>_>,int>
              ((TAttributeArrayContainer<UE::Math::TTransform<double>_> *)FVar2,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>_>
                (0x80,0x10,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14366b370

void __thiscall
TArray<TAttributeArrayContainer<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
::Empty(TArray<TAttributeArrayContainer<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
        *this,int param_1)

{
  ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_> FVar1;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_> FVar2;
  
  if (-1 < param_1) {
    FVar1 = (this->AllocatorInstance).SecondaryData;
    FVar2 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>)this;
    if (FVar1 != (ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>)0x0) {
      FVar2 = FVar1;
    }
    DestructItems<TAttributeArrayContainer<UE::Math::TVector2<float>_>,int>
              ((TAttributeArrayContainer<UE::Math::TVector2<float>_> *)FVar2,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>_>
                (0x20,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14366b3e0

void __thiscall
TArray<TAttributeArrayContainer<UE::Math::TVector4<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
::Empty(TArray<TAttributeArrayContainer<UE::Math::TVector4<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
        *this,int param_1)

{
  ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_> FVar1;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_> FVar2;
  
  if (-1 < param_1) {
    FVar1 = (this->AllocatorInstance).SecondaryData;
    FVar2 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>)this;
    if (FVar1 != (ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>)0x0) {
      FVar2 = FVar1;
    }
    DestructItems<TAttributeArrayContainer<UE::Math::TVector4<float>_>,int>
              ((TAttributeArrayContainer<UE::Math::TVector4<float>_> *)FVar2,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>_>
                (0x30,0x10,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14366b450

void __thiscall
TArray<TAttributeArrayContainer<UE::Math::TVector<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
::Empty(TArray<TAttributeArrayContainer<UE::Math::TVector<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
        *this,int param_1)

{
  ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_> FVar1;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_> FVar2;
  
  if (-1 < param_1) {
    FVar1 = (this->AllocatorInstance).SecondaryData;
    FVar2 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>)this;
    if (FVar1 != (ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>)0x0) {
      FVar2 = FVar1;
    }
    DestructItems<TAttributeArrayContainer<UE::Math::TVector<float>_>,int>
              ((TAttributeArrayContainer<UE::Math::TVector<float>_> *)FVar2,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>_>
                (0x20,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14366b4c0

void __thiscall
TArray<TAttributeArrayContainer<FName>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
Empty(TArray<TAttributeArrayContainer<FName>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
      *this,int param_1)

{
  ForElementType<TAttributeArrayContainer<FName>_> FVar1;
  ForElementType<TAttributeArrayContainer<FName>_> FVar2;
  
  if (-1 < param_1) {
    FVar1 = (this->AllocatorInstance).SecondaryData;
    FVar2 = (ForElementType<TAttributeArrayContainer<FName>_>)this;
    if (FVar1 != (ForElementType<TAttributeArrayContainer<FName>_>)0x0) {
      FVar2 = FVar1;
    }
    DestructItems<TAttributeArrayContainer<FName>,int>
              ((TAttributeArrayContainer<FName> *)FVar2,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<FName>_>_>
                (0x20,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14366b530

void __thiscall
TArray<TAttributeArrayContainer<bool>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
Empty(TArray<TAttributeArrayContainer<bool>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
      *this,int param_1)

{
  ForElementType<TAttributeArrayContainer<bool>_> FVar1;
  ForElementType<TAttributeArrayContainer<bool>_> FVar2;
  
  if (-1 < param_1) {
    FVar1 = (this->AllocatorInstance).SecondaryData;
    FVar2 = (ForElementType<TAttributeArrayContainer<bool>_>)this;
    if (FVar1 != (ForElementType<TAttributeArrayContainer<bool>_>)0x0) {
      FVar2 = FVar1;
    }
    DestructItems<TAttributeArrayContainer<bool>,int>
              ((TAttributeArrayContainer<bool> *)FVar2,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<bool>_>_>
                (0x18,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14366b5a0

void __thiscall
TArray<TMeshAttributeArrayBase<int>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Empty
          (TArray<TMeshAttributeArrayBase<int>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
           *this,int param_1)

{
  ForElementType<TMeshAttributeArrayBase<int>_> FVar1;
  ForElementType<TMeshAttributeArrayBase<int>_> FVar2;
  
  if (-1 < param_1) {
    FVar1 = (this->AllocatorInstance).SecondaryData;
    FVar2 = (ForElementType<TMeshAttributeArrayBase<int>_>)this;
    if (FVar1 != (ForElementType<TMeshAttributeArrayBase<int>_>)0x0) {
      FVar2 = FVar1;
    }
    DestructItems<TMeshAttributeArrayBase<int>,int>
              ((TMeshAttributeArrayBase<int> *)FVar2,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<int>_>_>
                (0x18,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14366b610

void __thiscall
TArray<TMeshAttributeArrayBase<float>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
Empty(TArray<TMeshAttributeArrayBase<float>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
      *this,int param_1)

{
  ForElementType<TMeshAttributeArrayBase<float>_> FVar1;
  ForElementType<TMeshAttributeArrayBase<float>_> FVar2;
  
  if (-1 < param_1) {
    FVar1 = (this->AllocatorInstance).SecondaryData;
    FVar2 = (ForElementType<TMeshAttributeArrayBase<float>_>)this;
    if (FVar1 != (ForElementType<TMeshAttributeArrayBase<float>_>)0x0) {
      FVar2 = FVar1;
    }
    DestructItems<TMeshAttributeArrayBase<float>,int>
              ((TMeshAttributeArrayBase<float> *)FVar2,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<float>_>_>
                (0x18,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14366b680

void __thiscall
TArray<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
::Empty(TArray<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
        *this,int param_1)

{
  ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_> FVar1;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_> FVar2;
  
  if (-1 < param_1) {
    FVar1 = (this->AllocatorInstance).SecondaryData;
    FVar2 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>)this;
    if (FVar1 != (ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>)0x0) {
      FVar2 = FVar1;
    }
    DestructItems<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>,int>
              ((TMeshAttributeArrayBase<UE::Math::TTransform<double>_> *)FVar2,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>_>
                (0x18,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14366b6f0

void __thiscall
TArray<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
::Empty(TArray<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
        *this,int param_1)

{
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_> FVar1;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_> FVar2;
  
  if (-1 < param_1) {
    FVar1 = (this->AllocatorInstance).SecondaryData;
    FVar2 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)this;
    if (FVar1 != (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)0x0) {
      FVar2 = FVar1;
    }
    DestructItems<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,int>
              ((TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *)FVar2,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>_>
                (0x18,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14366b760

void __thiscall
TArray<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
::Empty(TArray<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
        *this,int param_1)

{
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_> FVar1;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_> FVar2;
  
  if (-1 < param_1) {
    FVar1 = (this->AllocatorInstance).SecondaryData;
    FVar2 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)this;
    if (FVar1 != (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)0x0) {
      FVar2 = FVar1;
    }
    DestructItems<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>,int>
              ((TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *)FVar2,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>_>
                (0x18,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14366b7d0

void __thiscall
TArray<TMeshAttributeArrayBase<UE::Math::TVector<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
::Empty(TArray<TMeshAttributeArrayBase<UE::Math::TVector<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
        *this,int param_1)

{
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_> FVar1;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_> FVar2;
  
  if (-1 < param_1) {
    FVar1 = (this->AllocatorInstance).SecondaryData;
    FVar2 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)this;
    if (FVar1 != (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)0x0) {
      FVar2 = FVar1;
    }
    DestructItems<TMeshAttributeArrayBase<UE::Math::TVector<float>_>,int>
              ((TMeshAttributeArrayBase<UE::Math::TVector<float>_> *)FVar2,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>_>
                (0x18,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14366b840

void __thiscall
TArray<TMeshAttributeArrayBase<FName>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
Empty(TArray<TMeshAttributeArrayBase<FName>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
      *this,int param_1)

{
  ForElementType<TMeshAttributeArrayBase<FName>_> FVar1;
  ForElementType<TMeshAttributeArrayBase<FName>_> FVar2;
  
  if (-1 < param_1) {
    FVar1 = (this->AllocatorInstance).SecondaryData;
    FVar2 = (ForElementType<TMeshAttributeArrayBase<FName>_>)this;
    if (FVar1 != (ForElementType<TMeshAttributeArrayBase<FName>_>)0x0) {
      FVar2 = FVar1;
    }
    DestructItems<TMeshAttributeArrayBase<FName>,int>
              ((TMeshAttributeArrayBase<FName> *)FVar2,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<FName>_>_>
                (0x18,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14366b8b0

void __thiscall
TArray<TMeshAttributeArrayBase<bool>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
Empty(TArray<TMeshAttributeArrayBase<bool>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
      *this,int param_1)

{
  ForElementType<TMeshAttributeArrayBase<bool>_> FVar1;
  ForElementType<TMeshAttributeArrayBase<bool>_> FVar2;
  
  if (-1 < param_1) {
    FVar1 = (this->AllocatorInstance).SecondaryData;
    FVar2 = (ForElementType<TMeshAttributeArrayBase<bool>_>)this;
    if (FVar1 != (ForElementType<TMeshAttributeArrayBase<bool>_>)0x0) {
      FVar2 = FVar1;
    }
    DestructItems<TMeshAttributeArrayBase<bool>,int>
              ((TMeshAttributeArrayBase<bool> *)FVar2,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<bool>_>_>
                (0x18,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14366b920

void __thiscall
TArray<FMeshElementContainer,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Empty
          (TArray<FMeshElementContainer,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
           *this,int param_1)

{
  ForElementType<FMeshElementContainer> FVar1;
  ForElementType<FMeshElementContainer> FVar2;
  
  if (-1 < param_1) {
    FVar1 = (this->AllocatorInstance).SecondaryData;
    FVar2 = (ForElementType<FMeshElementContainer>)this;
    if (FVar1 != (ForElementType<FMeshElementContainer>)0x0) {
      FVar2 = FVar1;
    }
    DestructItems<FMeshElementContainer,int>((FMeshElementContainer *)FVar2,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshElementContainer>_>
                (0x80,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// InsertUninitializedImpl @ 14367d030

void __thiscall
TArray<TAttributeArrayContainer<int>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
InsertUninitializedImpl
          (TArray<TAttributeArrayContainer<int>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
           *this,int param_1,int param_2)

{
  void *_Src;
  ForElementType<TAttributeArrayContainer<int>_> FVar1;
  int iVar2;
  
  iVar2 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<int>_>_>
                    (0x18,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  FVar1 = (this->AllocatorInstance).SecondaryData;
  if (FVar1 != (ForElementType<TAttributeArrayContainer<int>_>)0x0) {
    this = (TArray<TAttributeArrayContainer<int>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
            *)FVar1;
  }
  _Src = (void *)((longlong)this + (longlong)param_1 * 0x18);
  memmove((void *)((longlong)_Src + (longlong)param_2 * 0x18),_Src,
          (longlong)(iVar2 - param_1) * 0x18);
  return;
}

// InsertUninitializedImpl @ 14367d0b0

void __thiscall
TArray<TAttributeArrayContainer<float>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
InsertUninitializedImpl
          (TArray<TAttributeArrayContainer<float>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
           *this,int param_1,int param_2)

{
  void *_Src;
  ForElementType<TAttributeArrayContainer<float>_> FVar1;
  int iVar2;
  
  iVar2 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<float>_>_>
                    (0x18,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  FVar1 = (this->AllocatorInstance).SecondaryData;
  if (FVar1 != (ForElementType<TAttributeArrayContainer<float>_>)0x0) {
    this = (TArray<TAttributeArrayContainer<float>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
            *)FVar1;
  }
  _Src = (void *)((longlong)this + (longlong)param_1 * 0x18);
  memmove((void *)((longlong)_Src + (longlong)param_2 * 0x18),_Src,
          (longlong)(iVar2 - param_1) * 0x18);
  return;
}

// InsertUninitializedImpl @ 14367d130

void __thiscall
TArray<TAttributeArrayContainer<UE::Math::TTransform<double>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
::InsertUninitializedImpl
          (TArray<TAttributeArrayContainer<UE::Math::TTransform<double>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
           *this,int param_1,int param_2)

{
  ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_> FVar1;
  int iVar2;
  void *_Src;
  
  iVar2 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>_>
                    (0x80,0x10,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  FVar1 = (this->AllocatorInstance).SecondaryData;
  if (FVar1 != (ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>)0x0) {
    this = (TArray<TAttributeArrayContainer<UE::Math::TTransform<double>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
            *)FVar1;
  }
  _Src = (void *)((longlong)param_1 * 0x80 + (longlong)this);
  memmove((void *)((longlong)param_2 * 0x80 + (longlong)_Src),_Src,(longlong)(iVar2 - param_1) << 7)
  ;
  return;
}

// InsertUninitializedImpl @ 14367d1c0

void __thiscall
TArray<TAttributeArrayContainer<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
::InsertUninitializedImpl
          (TArray<TAttributeArrayContainer<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
           *this,int param_1,int param_2)

{
  ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_> FVar1;
  int iVar2;
  void *_Src;
  
  iVar2 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>_>
                    (0x20,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  FVar1 = (this->AllocatorInstance).SecondaryData;
  if (FVar1 != (ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>)0x0) {
    this = (TArray<TAttributeArrayContainer<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
            *)FVar1;
  }
  _Src = (void *)((longlong)param_1 * 0x20 + (longlong)this);
  memmove((void *)((longlong)param_2 * 0x20 + (longlong)_Src),_Src,(longlong)(iVar2 - param_1) << 5)
  ;
  return;
}

// InsertUninitializedImpl @ 14367d250

void __thiscall
TArray<TAttributeArrayContainer<UE::Math::TVector4<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
::InsertUninitializedImpl
          (TArray<TAttributeArrayContainer<UE::Math::TVector4<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
           *this,int param_1,int param_2)

{
  ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_> FVar1;
  int iVar2;
  void *_Src;
  
  iVar2 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>_>
                    (0x30,0x10,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  FVar1 = (this->AllocatorInstance).SecondaryData;
  if (FVar1 != (ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>)0x0) {
    this = (TArray<TAttributeArrayContainer<UE::Math::TVector4<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
            *)FVar1;
  }
  _Src = (void *)((longlong)param_1 * 0x30 + (longlong)this);
  memmove((void *)((longlong)param_2 * 0x30 + (longlong)_Src),_Src,
          (longlong)(iVar2 - param_1) * 0x30);
  return;
}

// InsertUninitializedImpl @ 14367d2e0

void __thiscall
TArray<TAttributeArrayContainer<UE::Math::TVector<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
::InsertUninitializedImpl
          (TArray<TAttributeArrayContainer<UE::Math::TVector<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
           *this,int param_1,int param_2)

{
  ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_> FVar1;
  int iVar2;
  void *_Src;
  
  iVar2 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>_>
                    (0x20,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  FVar1 = (this->AllocatorInstance).SecondaryData;
  if (FVar1 != (ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>)0x0) {
    this = (TArray<TAttributeArrayContainer<UE::Math::TVector<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
            *)FVar1;
  }
  _Src = (void *)((longlong)param_1 * 0x20 + (longlong)this);
  memmove((void *)((longlong)param_2 * 0x20 + (longlong)_Src),_Src,(longlong)(iVar2 - param_1) << 5)
  ;
  return;
}

// InsertUninitializedImpl @ 14367d370

void __thiscall
TArray<TAttributeArrayContainer<FName>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
InsertUninitializedImpl
          (TArray<TAttributeArrayContainer<FName>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
           *this,int param_1,int param_2)

{
  ForElementType<TAttributeArrayContainer<FName>_> FVar1;
  int iVar2;
  void *_Src;
  
  iVar2 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<FName>_>_>
                    (0x20,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  FVar1 = (this->AllocatorInstance).SecondaryData;
  if (FVar1 != (ForElementType<TAttributeArrayContainer<FName>_>)0x0) {
    this = (TArray<TAttributeArrayContainer<FName>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
            *)FVar1;
  }
  _Src = (void *)((longlong)param_1 * 0x20 + (longlong)this);
  memmove((void *)((longlong)param_2 * 0x20 + (longlong)_Src),_Src,(longlong)(iVar2 - param_1) << 5)
  ;
  return;
}

// InsertUninitializedImpl @ 14367d400

void __thiscall
TArray<TAttributeArrayContainer<bool>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
InsertUninitializedImpl
          (TArray<TAttributeArrayContainer<bool>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
           *this,int param_1,int param_2)

{
  void *_Src;
  ForElementType<TAttributeArrayContainer<bool>_> FVar1;
  int iVar2;
  
  iVar2 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<bool>_>_>
                    (0x18,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  FVar1 = (this->AllocatorInstance).SecondaryData;
  if (FVar1 != (ForElementType<TAttributeArrayContainer<bool>_>)0x0) {
    this = (TArray<TAttributeArrayContainer<bool>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
            *)FVar1;
  }
  _Src = (void *)((longlong)this + (longlong)param_1 * 0x18);
  memmove((void *)((longlong)_Src + (longlong)param_2 * 0x18),_Src,
          (longlong)(iVar2 - param_1) * 0x18);
  return;
}

// InsertUninitializedImpl @ 14367d480

void __thiscall
TArray<TMeshAttributeArrayBase<int>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
InsertUninitializedImpl
          (TArray<TMeshAttributeArrayBase<int>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
           *this,int param_1,int param_2)

{
  void *_Src;
  ForElementType<TMeshAttributeArrayBase<int>_> FVar1;
  int iVar2;
  
  iVar2 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<int>_>_>
                    (0x18,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  FVar1 = (this->AllocatorInstance).SecondaryData;
  if (FVar1 != (ForElementType<TMeshAttributeArrayBase<int>_>)0x0) {
    this = (TArray<TMeshAttributeArrayBase<int>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
            *)FVar1;
  }
  _Src = (void *)((longlong)this + (longlong)param_1 * 0x18);
  memmove((void *)((longlong)_Src + (longlong)param_2 * 0x18),_Src,
          (longlong)(iVar2 - param_1) * 0x18);
  return;
}

// InsertUninitializedImpl @ 14367d500

void __thiscall
TArray<TMeshAttributeArrayBase<float>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
InsertUninitializedImpl
          (TArray<TMeshAttributeArrayBase<float>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
           *this,int param_1,int param_2)

{
  void *_Src;
  ForElementType<TMeshAttributeArrayBase<float>_> FVar1;
  int iVar2;
  
  iVar2 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<float>_>_>
                    (0x18,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  FVar1 = (this->AllocatorInstance).SecondaryData;
  if (FVar1 != (ForElementType<TMeshAttributeArrayBase<float>_>)0x0) {
    this = (TArray<TMeshAttributeArrayBase<float>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
            *)FVar1;
  }
  _Src = (void *)((longlong)this + (longlong)param_1 * 0x18);
  memmove((void *)((longlong)_Src + (longlong)param_2 * 0x18),_Src,
          (longlong)(iVar2 - param_1) * 0x18);
  return;
}

// InsertUninitializedImpl @ 14367d580

void __thiscall
TArray<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
::InsertUninitializedImpl
          (TArray<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
           *this,int param_1,int param_2)

{
  void *_Src;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_> FVar1;
  int iVar2;
  
  iVar2 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>_>
                    (0x18,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  FVar1 = (this->AllocatorInstance).SecondaryData;
  if (FVar1 != (ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>)0x0) {
    this = (TArray<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
            *)FVar1;
  }
  _Src = (void *)((longlong)this + (longlong)param_1 * 0x18);
  memmove((void *)((longlong)_Src + (longlong)param_2 * 0x18),_Src,
          (longlong)(iVar2 - param_1) * 0x18);
  return;
}

// InsertUninitializedImpl @ 14367d600

void __thiscall
TArray<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
::InsertUninitializedImpl
          (TArray<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
           *this,int param_1,int param_2)

{
  void *_Src;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_> FVar1;
  int iVar2;
  
  iVar2 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>_>
                    (0x18,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  FVar1 = (this->AllocatorInstance).SecondaryData;
  if (FVar1 != (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)0x0) {
    this = (TArray<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
            *)FVar1;
  }
  _Src = (void *)((longlong)this + (longlong)param_1 * 0x18);
  memmove((void *)((longlong)_Src + (longlong)param_2 * 0x18),_Src,
          (longlong)(iVar2 - param_1) * 0x18);
  return;
}

// InsertUninitializedImpl @ 14367d680

void __thiscall
TArray<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
::InsertUninitializedImpl
          (TArray<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
           *this,int param_1,int param_2)

{
  void *_Src;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_> FVar1;
  int iVar2;
  
  iVar2 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>_>
                    (0x18,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  FVar1 = (this->AllocatorInstance).SecondaryData;
  if (FVar1 != (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)0x0) {
    this = (TArray<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
            *)FVar1;
  }
  _Src = (void *)((longlong)this + (longlong)param_1 * 0x18);
  memmove((void *)((longlong)_Src + (longlong)param_2 * 0x18),_Src,
          (longlong)(iVar2 - param_1) * 0x18);
  return;
}

// InsertUninitializedImpl @ 14367d700

void __thiscall
TArray<TMeshAttributeArrayBase<UE::Math::TVector<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
::InsertUninitializedImpl
          (TArray<TMeshAttributeArrayBase<UE::Math::TVector<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
           *this,int param_1,int param_2)

{
  void *_Src;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_> FVar1;
  int iVar2;
  
  iVar2 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>_>
                    (0x18,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  FVar1 = (this->AllocatorInstance).SecondaryData;
  if (FVar1 != (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)0x0) {
    this = (TArray<TMeshAttributeArrayBase<UE::Math::TVector<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
            *)FVar1;
  }
  _Src = (void *)((longlong)this + (longlong)param_1 * 0x18);
  memmove((void *)((longlong)_Src + (longlong)param_2 * 0x18),_Src,
          (longlong)(iVar2 - param_1) * 0x18);
  return;
}

// InsertUninitializedImpl @ 14367d780

void __thiscall
TArray<TMeshAttributeArrayBase<FName>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
InsertUninitializedImpl
          (TArray<TMeshAttributeArrayBase<FName>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
           *this,int param_1,int param_2)

{
  void *_Src;
  ForElementType<TMeshAttributeArrayBase<FName>_> FVar1;
  int iVar2;
  
  iVar2 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<FName>_>_>
                    (0x18,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  FVar1 = (this->AllocatorInstance).SecondaryData;
  if (FVar1 != (ForElementType<TMeshAttributeArrayBase<FName>_>)0x0) {
    this = (TArray<TMeshAttributeArrayBase<FName>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
            *)FVar1;
  }
  _Src = (void *)((longlong)this + (longlong)param_1 * 0x18);
  memmove((void *)((longlong)_Src + (longlong)param_2 * 0x18),_Src,
          (longlong)(iVar2 - param_1) * 0x18);
  return;
}

// InsertUninitializedImpl @ 14367d800

void __thiscall
TArray<TMeshAttributeArrayBase<bool>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
InsertUninitializedImpl
          (TArray<TMeshAttributeArrayBase<bool>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
           *this,int param_1,int param_2)

{
  void *_Src;
  ForElementType<TMeshAttributeArrayBase<bool>_> FVar1;
  int iVar2;
  
  iVar2 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<bool>_>_>
                    (0x18,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  FVar1 = (this->AllocatorInstance).SecondaryData;
  if (FVar1 != (ForElementType<TMeshAttributeArrayBase<bool>_>)0x0) {
    this = (TArray<TMeshAttributeArrayBase<bool>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
            *)FVar1;
  }
  _Src = (void *)((longlong)this + (longlong)param_1 * 0x18);
  memmove((void *)((longlong)_Src + (longlong)param_2 * 0x18),_Src,
          (longlong)(iVar2 - param_1) * 0x18);
  return;
}

// RemoveAtImpl @ 1436860a0

void __thiscall
TArray<TAttributeArrayContainer<int>::FChunk,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<TAttributeArrayContainer<int>::FChunk,TSizedDefaultAllocator<32>_> *this,
          int param_1,int param_2)

{
  int iVar1;
  FChunk *_Dst;
  
  _Dst = (FChunk *)((this->AllocatorInstance).Data + (longlong)param_1 * 0xc18);
  DestructItems<TAttributeArrayContainer<int>::FChunk,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0xc18);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 143686120

void __thiscall
TArray<TAttributeArrayContainer<float>::FChunk,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<TAttributeArrayContainer<float>::FChunk,TSizedDefaultAllocator<32>_> *this,
          int param_1,int param_2)

{
  int iVar1;
  FChunk *_Dst;
  
  _Dst = (FChunk *)((this->AllocatorInstance).Data + (longlong)param_1 * 0xc18);
  DestructItems<TAttributeArrayContainer<float>::FChunk,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0xc18);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 1436861a0

void __thiscall
TArray<TAttributeArrayContainer<UE::Math::TTransform<double>_>::FChunk,TSizedDefaultAllocator<32>_>
::RemoveAtImpl(TArray<TAttributeArrayContainer<UE::Math::TTransform<double>_>::FChunk,TSizedDefaultAllocator<32>_>
               *this,int param_1,int param_2)

{
  int iVar1;
  FChunk *_Dst;
  
  _Dst = (FChunk *)((this->AllocatorInstance).Data + (longlong)param_1 * 0xc18);
  DestructItems<TAttributeArrayContainer<UE::Math::TTransform<double>_>::FChunk,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0xc18);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 143686220

void __thiscall
TArray<TAttributeArrayContainer<UE::Math::TVector2<float>_>::FChunk,TSizedDefaultAllocator<32>_>::
RemoveAtImpl(TArray<TAttributeArrayContainer<UE::Math::TVector2<float>_>::FChunk,TSizedDefaultAllocator<32>_>
             *this,int param_1,int param_2)

{
  int iVar1;
  FChunk *_Dst;
  
  _Dst = (FChunk *)((this->AllocatorInstance).Data + (longlong)param_1 * 0xc18);
  DestructItems<TAttributeArrayContainer<UE::Math::TVector2<float>_>::FChunk,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0xc18);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 1436862a0

void __thiscall
TArray<TAttributeArrayContainer<UE::Math::TVector4<float>_>::FChunk,TSizedDefaultAllocator<32>_>::
RemoveAtImpl(TArray<TAttributeArrayContainer<UE::Math::TVector4<float>_>::FChunk,TSizedDefaultAllocator<32>_>
             *this,int param_1,int param_2)

{
  int iVar1;
  FChunk *_Dst;
  
  _Dst = (FChunk *)((this->AllocatorInstance).Data + (longlong)param_1 * 0xc18);
  DestructItems<TAttributeArrayContainer<UE::Math::TVector4<float>_>::FChunk,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0xc18);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 143686320

void __thiscall
TArray<TAttributeArrayContainer<UE::Math::TVector<float>_>::FChunk,TSizedDefaultAllocator<32>_>::
RemoveAtImpl(TArray<TAttributeArrayContainer<UE::Math::TVector<float>_>::FChunk,TSizedDefaultAllocator<32>_>
             *this,int param_1,int param_2)

{
  int iVar1;
  FChunk *_Dst;
  
  _Dst = (FChunk *)((this->AllocatorInstance).Data + (longlong)param_1 * 0xc18);
  DestructItems<TAttributeArrayContainer<UE::Math::TVector<float>_>::FChunk,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0xc18);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 1436863a0

void __thiscall
TArray<TAttributeArrayContainer<FName>::FChunk,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<TAttributeArrayContainer<FName>::FChunk,TSizedDefaultAllocator<32>_> *this,
          int param_1,int param_2)

{
  int iVar1;
  FChunk *_Dst;
  
  _Dst = (FChunk *)((this->AllocatorInstance).Data + (longlong)param_1 * 0xc18);
  DestructItems<TAttributeArrayContainer<FName>::FChunk,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0xc18);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 143686420

void __thiscall
TArray<TAttributeArrayContainer<bool>::FChunk,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<TAttributeArrayContainer<bool>::FChunk,TSizedDefaultAllocator<32>_> *this,
          int param_1,int param_2)

{
  int iVar1;
  FChunk *_Dst;
  
  _Dst = (FChunk *)((this->AllocatorInstance).Data + (longlong)param_1 * 0xc18);
  DestructItems<TAttributeArrayContainer<bool>::FChunk,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0xc18);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 1436864a0

void __thiscall
TArray<FMeshElementIndexer::FChunk,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FMeshElementIndexer::FChunk,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  FChunk *_Dst;
  
  _Dst = (FChunk *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x58);
  DestructItems<FMeshElementIndexer::FChunk,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x58);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 143686510

void __thiscall
TArray<FMeshElementIndexer::FIndexPerChannel,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FMeshElementIndexer::FIndexPerChannel,TSizedDefaultAllocator<32>_> *this,
          int param_1,int param_2)

{
  int iVar1;
  FIndexPerChannel *_Dst;
  
  _Dst = (FIndexPerChannel *)((this->AllocatorInstance).Data + (longlong)param_1 * 0xb0);
  DestructItems<FMeshElementIndexer::FIndexPerChannel,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0xb0);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 143686590

void __thiscall
TArray<TAttributeArrayContainer<int>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
RemoveAtImpl(TArray<TAttributeArrayContainer<int>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
             *this,int param_1,int param_2)

{
  TAttributeArrayContainer<int> *_Dst;
  ForElementType<TAttributeArrayContainer<int>_> FVar1;
  int iVar2;
  ForElementType<TAttributeArrayContainer<int>_> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<TAttributeArrayContainer<int>_>)this;
  if (FVar1 != (ForElementType<TAttributeArrayContainer<int>_>)0x0) {
    FVar3 = FVar1;
  }
  _Dst = (TAttributeArrayContainer<int> *)((longlong)FVar3 + (longlong)param_1 * 0x18);
  DestructItems<TAttributeArrayContainer<int>,int>(_Dst,param_2);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (iVar2 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar2 * 0x18);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 143686610

void __thiscall
TArray<TAttributeArrayContainer<float>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
RemoveAtImpl(TArray<TAttributeArrayContainer<float>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
             *this,int param_1,int param_2)

{
  TAttributeArrayContainer<float> *_Dst;
  ForElementType<TAttributeArrayContainer<float>_> FVar1;
  int iVar2;
  ForElementType<TAttributeArrayContainer<float>_> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<TAttributeArrayContainer<float>_>)this;
  if (FVar1 != (ForElementType<TAttributeArrayContainer<float>_>)0x0) {
    FVar3 = FVar1;
  }
  _Dst = (TAttributeArrayContainer<float> *)((longlong)FVar3 + (longlong)param_1 * 0x18);
  DestructItems<TAttributeArrayContainer<float>,int>(_Dst,param_2);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (iVar2 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar2 * 0x18);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 143686690

void __thiscall
TArray<TAttributeArrayContainer<UE::Math::TTransform<double>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
::RemoveAtImpl(TArray<TAttributeArrayContainer<UE::Math::TTransform<double>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
               *this,int param_1,int param_2)

{
  ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_> FVar1;
  int iVar2;
  TAttributeArrayContainer<UE::Math::TTransform<double>_> *_Dst;
  ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>)this;
  if (FVar1 != (ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>)0x0) {
    FVar3 = FVar1;
  }
  _Dst = (TAttributeArrayContainer<UE::Math::TTransform<double>_> *)
         ((longlong)param_1 * 0x80 + (longlong)FVar3);
  DestructItems<TAttributeArrayContainer<UE::Math::TTransform<double>_>,int>(_Dst,param_2);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (iVar2 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar2 << 7);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 143686720

void __thiscall
TArray<TAttributeArrayContainer<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
::RemoveAtImpl(TArray<TAttributeArrayContainer<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
               *this,int param_1,int param_2)

{
  ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_> FVar1;
  int iVar2;
  TAttributeArrayContainer<UE::Math::TVector2<float>_> *_Dst;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>)this;
  if (FVar1 != (ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>)0x0) {
    FVar3 = FVar1;
  }
  _Dst = (TAttributeArrayContainer<UE::Math::TVector2<float>_> *)
         ((longlong)param_1 * 0x20 + (longlong)FVar3);
  DestructItems<TAttributeArrayContainer<UE::Math::TVector2<float>_>,int>(_Dst,param_2);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (iVar2 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar2 << 5);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 1436867a0

void __thiscall
TArray<TAttributeArrayContainer<UE::Math::TVector4<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
::RemoveAtImpl(TArray<TAttributeArrayContainer<UE::Math::TVector4<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
               *this,int param_1,int param_2)

{
  ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_> FVar1;
  int iVar2;
  TAttributeArrayContainer<UE::Math::TVector4<float>_> *_Dst;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>)this;
  if (FVar1 != (ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>)0x0) {
    FVar3 = FVar1;
  }
  _Dst = (TAttributeArrayContainer<UE::Math::TVector4<float>_> *)
         ((longlong)param_1 * 0x30 + (longlong)FVar3);
  DestructItems<TAttributeArrayContainer<UE::Math::TVector4<float>_>,int>(_Dst,param_2);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (iVar2 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar2 * 0x30);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 143686830

void __thiscall
TArray<TAttributeArrayContainer<UE::Math::TVector<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
::RemoveAtImpl(TArray<TAttributeArrayContainer<UE::Math::TVector<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
               *this,int param_1,int param_2)

{
  ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_> FVar1;
  int iVar2;
  TAttributeArrayContainer<UE::Math::TVector<float>_> *_Dst;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>)this;
  if (FVar1 != (ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>)0x0) {
    FVar3 = FVar1;
  }
  _Dst = (TAttributeArrayContainer<UE::Math::TVector<float>_> *)
         ((longlong)param_1 * 0x20 + (longlong)FVar3);
  DestructItems<TAttributeArrayContainer<UE::Math::TVector<float>_>,int>(_Dst,param_2);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (iVar2 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar2 << 5);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 1436868b0

void __thiscall
TArray<TAttributeArrayContainer<FName>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
RemoveAtImpl(TArray<TAttributeArrayContainer<FName>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
             *this,int param_1,int param_2)

{
  ForElementType<TAttributeArrayContainer<FName>_> FVar1;
  int iVar2;
  TAttributeArrayContainer<FName> *_Dst;
  ForElementType<TAttributeArrayContainer<FName>_> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<TAttributeArrayContainer<FName>_>)this;
  if (FVar1 != (ForElementType<TAttributeArrayContainer<FName>_>)0x0) {
    FVar3 = FVar1;
  }
  _Dst = (TAttributeArrayContainer<FName> *)((longlong)param_1 * 0x20 + (longlong)FVar3);
  DestructItems<TAttributeArrayContainer<FName>,int>(_Dst,param_2);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (iVar2 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar2 << 5);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 143686930

void __thiscall
TArray<TAttributeArrayContainer<bool>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
RemoveAtImpl(TArray<TAttributeArrayContainer<bool>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
             *this,int param_1,int param_2)

{
  TAttributeArrayContainer<bool> *_Dst;
  ForElementType<TAttributeArrayContainer<bool>_> FVar1;
  int iVar2;
  ForElementType<TAttributeArrayContainer<bool>_> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<TAttributeArrayContainer<bool>_>)this;
  if (FVar1 != (ForElementType<TAttributeArrayContainer<bool>_>)0x0) {
    FVar3 = FVar1;
  }
  _Dst = (TAttributeArrayContainer<bool> *)((longlong)FVar3 + (longlong)param_1 * 0x18);
  DestructItems<TAttributeArrayContainer<bool>,int>(_Dst,param_2);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (iVar2 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar2 * 0x18);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 1436869b0

void __thiscall
TArray<TMeshAttributeArrayBase<int>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
RemoveAtImpl(TArray<TMeshAttributeArrayBase<int>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
             *this,int param_1,int param_2)

{
  TMeshAttributeArrayBase<int> *_Dst;
  ForElementType<TMeshAttributeArrayBase<int>_> FVar1;
  int iVar2;
  ForElementType<TMeshAttributeArrayBase<int>_> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<TMeshAttributeArrayBase<int>_>)this;
  if (FVar1 != (ForElementType<TMeshAttributeArrayBase<int>_>)0x0) {
    FVar3 = FVar1;
  }
  _Dst = (TMeshAttributeArrayBase<int> *)((longlong)FVar3 + (longlong)param_1 * 0x18);
  DestructItems<TMeshAttributeArrayBase<int>,int>(_Dst,param_2);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (iVar2 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar2 * 0x18);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 143686a30

void __thiscall
TArray<TMeshAttributeArrayBase<float>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
RemoveAtImpl(TArray<TMeshAttributeArrayBase<float>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
             *this,int param_1,int param_2)

{
  TMeshAttributeArrayBase<float> *_Dst;
  ForElementType<TMeshAttributeArrayBase<float>_> FVar1;
  int iVar2;
  ForElementType<TMeshAttributeArrayBase<float>_> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<TMeshAttributeArrayBase<float>_>)this;
  if (FVar1 != (ForElementType<TMeshAttributeArrayBase<float>_>)0x0) {
    FVar3 = FVar1;
  }
  _Dst = (TMeshAttributeArrayBase<float> *)((longlong)FVar3 + (longlong)param_1 * 0x18);
  DestructItems<TMeshAttributeArrayBase<float>,int>(_Dst,param_2);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (iVar2 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar2 * 0x18);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 143686ab0

void __thiscall
TArray<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
::RemoveAtImpl(TArray<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
               *this,int param_1,int param_2)

{
  TMeshAttributeArrayBase<UE::Math::TTransform<double>_> *_Dst;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_> FVar1;
  int iVar2;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>)this;
  if (FVar1 != (ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>)0x0) {
    FVar3 = FVar1;
  }
  _Dst = (TMeshAttributeArrayBase<UE::Math::TTransform<double>_> *)
         ((longlong)FVar3 + (longlong)param_1 * 0x18);
  DestructItems<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>,int>(_Dst,param_2);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (iVar2 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar2 * 0x18);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 143686b30

void __thiscall
TArray<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
::RemoveAtImpl(TArray<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
               *this,int param_1,int param_2)

{
  TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *_Dst;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_> FVar1;
  int iVar2;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)this;
  if (FVar1 != (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)0x0) {
    FVar3 = FVar1;
  }
  _Dst = (TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *)
         ((longlong)FVar3 + (longlong)param_1 * 0x18);
  DestructItems<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,int>(_Dst,param_2);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (iVar2 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar2 * 0x18);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 143686bb0

void __thiscall
TArray<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
::RemoveAtImpl(TArray<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
               *this,int param_1,int param_2)

{
  TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *_Dst;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_> FVar1;
  int iVar2;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)this;
  if (FVar1 != (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)0x0) {
    FVar3 = FVar1;
  }
  _Dst = (TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *)
         ((longlong)FVar3 + (longlong)param_1 * 0x18);
  DestructItems<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>,int>(_Dst,param_2);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (iVar2 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar2 * 0x18);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 143686c30

void __thiscall
TArray<TMeshAttributeArrayBase<UE::Math::TVector<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
::RemoveAtImpl(TArray<TMeshAttributeArrayBase<UE::Math::TVector<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
               *this,int param_1,int param_2)

{
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *_Dst;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_> FVar1;
  int iVar2;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)this;
  if (FVar1 != (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)0x0) {
    FVar3 = FVar1;
  }
  _Dst = (TMeshAttributeArrayBase<UE::Math::TVector<float>_> *)
         ((longlong)FVar3 + (longlong)param_1 * 0x18);
  DestructItems<TMeshAttributeArrayBase<UE::Math::TVector<float>_>,int>(_Dst,param_2);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (iVar2 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar2 * 0x18);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 143686cb0

void __thiscall
TArray<TMeshAttributeArrayBase<FName>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
RemoveAtImpl(TArray<TMeshAttributeArrayBase<FName>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
             *this,int param_1,int param_2)

{
  TMeshAttributeArrayBase<FName> *_Dst;
  ForElementType<TMeshAttributeArrayBase<FName>_> FVar1;
  int iVar2;
  ForElementType<TMeshAttributeArrayBase<FName>_> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<TMeshAttributeArrayBase<FName>_>)this;
  if (FVar1 != (ForElementType<TMeshAttributeArrayBase<FName>_>)0x0) {
    FVar3 = FVar1;
  }
  _Dst = (TMeshAttributeArrayBase<FName> *)((longlong)FVar3 + (longlong)param_1 * 0x18);
  DestructItems<TMeshAttributeArrayBase<FName>,int>(_Dst,param_2);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (iVar2 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar2 * 0x18);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 143686d30

void __thiscall
TArray<TMeshAttributeArrayBase<bool>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
RemoveAtImpl(TArray<TMeshAttributeArrayBase<bool>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
             *this,int param_1,int param_2)

{
  TMeshAttributeArrayBase<bool> *_Dst;
  ForElementType<TMeshAttributeArrayBase<bool>_> FVar1;
  int iVar2;
  ForElementType<TMeshAttributeArrayBase<bool>_> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<TMeshAttributeArrayBase<bool>_>)this;
  if (FVar1 != (ForElementType<TMeshAttributeArrayBase<bool>_>)0x0) {
    FVar3 = FVar1;
  }
  _Dst = (TMeshAttributeArrayBase<bool> *)((longlong)FVar3 + (longlong)param_1 * 0x18);
  DestructItems<TMeshAttributeArrayBase<bool>,int>(_Dst,param_2);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (iVar2 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar2 * 0x18);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 143686db0

void __thiscall
TArray<FMeshElementContainer,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::RemoveAtImpl
          (TArray<FMeshElementContainer,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
           *this,int param_1,int param_2)

{
  ForElementType<FMeshElementContainer> FVar1;
  int iVar2;
  FMeshElementContainer *_Dst;
  ForElementType<FMeshElementContainer> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<FMeshElementContainer>)this;
  if (FVar1 != (ForElementType<FMeshElementContainer>)0x0) {
    FVar3 = FVar1;
  }
  _Dst = (FMeshElementContainer *)((longlong)param_1 * 0x80 + (longlong)FVar3);
  DestructItems<FMeshElementContainer,int>(_Dst,param_2);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (iVar2 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar2 << 7);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// SetNum @ 14368ff00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x60,0x10,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<UE::Math::TTransform<double>,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 0x60,param_1 - iVar5);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x60;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 0x60,(longlong)iVar5 * 0x60);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x60,0x10,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 143690050

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,0x10,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<UE::Math::TVector4<float>,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 0x10,param_1 - iVar5);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 0x10,(longlong)iVar5 << 4);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,0x10,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 143690190

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TAttributeArrayContainer<int>::FChunk,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<TAttributeArrayContainer<int>::FChunk,TSizedDefaultAllocator<32>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc18,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<TAttributeArrayContainer<int>::FChunk,int>
              ((this->AllocatorInstance).Data + (longlong)iVar5 * 0xc18,param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc18,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNum @ 1436902c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TAttributeArrayContainer<float>::FChunk,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<TAttributeArrayContainer<float>::FChunk,TSizedDefaultAllocator<32>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc18,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<TAttributeArrayContainer<float>::FChunk,int>
              ((this->AllocatorInstance).Data + (longlong)iVar5 * 0xc18,param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc18,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNum @ 1436903f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TAttributeArrayContainer<UE::Math::TTransform<double>_>::FChunk,TSizedDefaultAllocator<32>_>
::SetNum(TArray<TAttributeArrayContainer<UE::Math::TTransform<double>_>::FChunk,TSizedDefaultAllocator<32>_>
         *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc18,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<TAttributeArrayContainer<UE::Math::TTransform<double>_>::FChunk,int>
              ((this->AllocatorInstance).Data + (longlong)iVar5 * 0xc18,param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc18,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNum @ 143690520

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TAttributeArrayContainer<UE::Math::TVector2<float>_>::FChunk,TSizedDefaultAllocator<32>_>::
SetNum(TArray<TAttributeArrayContainer<UE::Math::TVector2<float>_>::FChunk,TSizedDefaultAllocator<32>_>
       *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc18,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<TAttributeArrayContainer<UE::Math::TVector2<float>_>::FChunk,int>
              ((this->AllocatorInstance).Data + (longlong)iVar5 * 0xc18,param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc18,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNum @ 143690650

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TAttributeArrayContainer<UE::Math::TVector4<float>_>::FChunk,TSizedDefaultAllocator<32>_>::
SetNum(TArray<TAttributeArrayContainer<UE::Math::TVector4<float>_>::FChunk,TSizedDefaultAllocator<32>_>
       *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc18,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<TAttributeArrayContainer<UE::Math::TVector4<float>_>::FChunk,int>
              ((this->AllocatorInstance).Data + (longlong)iVar5 * 0xc18,param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc18,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNum @ 143690780

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TAttributeArrayContainer<UE::Math::TVector<float>_>::FChunk,TSizedDefaultAllocator<32>_>::
SetNum(TArray<TAttributeArrayContainer<UE::Math::TVector<float>_>::FChunk,TSizedDefaultAllocator<32>_>
       *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc18,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<TAttributeArrayContainer<UE::Math::TVector<float>_>::FChunk,int>
              ((this->AllocatorInstance).Data + (longlong)iVar5 * 0xc18,param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc18,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNum @ 1436908b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TAttributeArrayContainer<FName>::FChunk,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<TAttributeArrayContainer<FName>::FChunk,TSizedDefaultAllocator<32>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc18,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<TAttributeArrayContainer<FName>::FChunk,int>
              ((this->AllocatorInstance).Data + (longlong)iVar5 * 0xc18,param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc18,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNum @ 1436909e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TAttributeArrayContainer<bool>::FChunk,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<TAttributeArrayContainer<bool>::FChunk,TSizedDefaultAllocator<32>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc18,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<TAttributeArrayContainer<bool>::FChunk,int>
              ((this->AllocatorInstance).Data + (longlong)iVar5 * 0xc18,param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc18,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNum @ 143690b10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FMeshElementIndexer::FIndexPerChannel,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FMeshElementIndexer::FIndexPerChannel,TSizedDefaultAllocator<32>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xb0,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<FMeshElementIndexer::FIndexPerChannel,int>
              ((this->AllocatorInstance).Data + (longlong)iVar5 * 0xb0,param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xb0,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNum @ 143690c40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FMeshElementContainer,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::SetNum
          (TArray<FMeshElementContainer,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
           *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  ForElementType<FMeshElementContainer> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar6 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshElementContainer>_>
                      (0x80,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar3 = (this->AllocatorInstance).SecondaryData;
    if (FVar3 != (ForElementType<FMeshElementContainer>)0x0) {
      this = (TArray<FMeshElementContainer,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
              *)FVar3;
    }
    DefaultConstructItems<FMeshElementContainer,int>
              ((void *)((longlong)iVar6 * 0x80 + (longlong)this),param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar7 = iVar2 - param_1;
      if (((int)(uVar7 | param_1) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((uVar7 != 0) && (RemoveAtImpl(this,param_1,uVar7), param_2 == Default)) {
        UE::Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshElementContainer>_>
                  (0x80,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNum @ 143690d80

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<bool,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<bool,TSizedDefaultAllocator<32>_> *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + iVar4,0,(longlong)(param_1 - iVar5));
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + param_1;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (int)uVar6,(longlong)iVar5);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumUninitialized @ 1436954a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<int,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::SetNumUninitialized
          (TArray<int,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  ForElementType<int> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<int> FVar6;
  uint uVar7;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar7 = iVar5 - param_1;
      if (((int)(uVar7 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar7 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar6 = (ForElementType<int>)this;
        if (FVar2 != (ForElementType<int>)0x0) {
          FVar6 = FVar2;
        }
        _Dst = (void *)((longlong)FVar6 + (longlong)param_1 * 4);
        iVar5 = (*piVar1 - uVar7) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar7 * 4),(longlong)iVar5 << 2);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar7;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                    (4,4,&this->AllocatorInstance,iVar5 - uVar7,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumUninitialized @ 1436955e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TTuple<int,int>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::
SetNumUninitialized(TArray<TTuple<int,int>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                    *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  ForElementType<TTuple<int,int>_> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<TTuple<int,int>_> FVar6;
  uint uVar7;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<int,int>_>_>
              (8,4,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar7 = iVar5 - param_1;
      if (((int)(uVar7 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar7 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar6 = (ForElementType<TTuple<int,int>_>)this;
        if (FVar2 != (ForElementType<TTuple<int,int>_>)0x0) {
          FVar6 = FVar2;
        }
        _Dst = (void *)((longlong)FVar6 + (longlong)param_1 * 8);
        iVar5 = (*piVar1 - uVar7) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar7 * 8),(longlong)iVar5 << 3);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar7;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<int,int>_>_>
                    (8,4,&this->AllocatorInstance,iVar5 - uVar7,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumUninitialized @ 143695720

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FEdgeID,TSizedDefaultAllocator<32>_>::SetNumUninitialized
          (TArray<FEdgeID,TSizedDefaultAllocator<32>_> *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  piVar1 = &this->ArrayNum;
  iVar4 = *piVar1;
  if (iVar4 < param_1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,param_1 - iVar4,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar4) {
      uVar5 = iVar4 - param_1;
      if (((int)(uVar5 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar5 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 4;
        iVar4 = (*piVar1 - uVar5) - param_1;
        if (iVar4 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar5 * 4,(longlong)iVar4 << 2);
        }
        iVar4 = *piVar1;
        *piVar1 = iVar4 - uVar5;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&this->AllocatorInstance,iVar4 - uVar5,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumUninitialized @ 143695850

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FVertexID,TSizedDefaultAllocator<32>_>::SetNumUninitialized
          (TArray<FVertexID,TSizedDefaultAllocator<32>_> *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  piVar1 = &this->ArrayNum;
  iVar4 = *piVar1;
  if (iVar4 < param_1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,param_1 - iVar4,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar4) {
      uVar5 = iVar4 - param_1;
      if (((int)(uVar5 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar5 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 4;
        iVar4 = (*piVar1 - uVar5) - param_1;
        if (iVar4 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar5 * 4,(longlong)iVar4 << 2);
        }
        iVar4 = *piVar1;
        *piVar1 = iVar4 - uVar5;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&this->AllocatorInstance,iVar4 - uVar5,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

