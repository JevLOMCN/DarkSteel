// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StaticMeshDescription
// Functions: 4

// operator=<FVertexInstanceID,int> @ 14435fb50

TArray<FVertexInstanceID,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> * __thiscall
TArray<FVertexInstanceID,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::
operator=<FVertexInstanceID,int>
          (TArray<FVertexInstanceID,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *this,
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
    *piVar1 = 4;
    return this;
  }
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FVertexInstanceID>_>
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

// AddUniqueImpl<FEdgeID_const_&> @ 14435fc80

int __thiscall
TArray<FEdgeID,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::
AddUniqueImpl<FEdgeID_const_&>
          (TArray<FEdgeID,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *this,
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
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FEdgeID>_>
                      (0x404,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar5 + 1;
  FVar2 = (this->AllocatorInstance).SecondaryData;
  if (FVar2 != (ForElementType<FEdgeID>)0x0) {
    this = (TArray<FEdgeID,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
  }
  *(FEdgeID *)((longlong)this + (longlong)iVar5 * 4) = *param_1;
  return iVar5;
}

// AddUniqueImpl<FTriangleID_const_&> @ 14435fd90

int __thiscall
TArray<FTriangleID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::
AddUniqueImpl<FTriangleID_const_&>
          (TArray<FTriangleID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *this,
          FTriangleID *param_1)

{
  ForElementType<FTriangleID> FVar1;
  ForElementType<FTriangleID> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<FTriangleID> FVar6;
  ForElementType<FTriangleID> FVar7;
  
  FVar2 = (this->AllocatorInstance).SecondaryData;
  FVar7 = (ForElementType<FTriangleID>)this;
  if (FVar2 != (ForElementType<FTriangleID>)0x0) {
    FVar7 = FVar2;
  }
  FVar1 = (ForElementType<FTriangleID>)((longlong)FVar7 + (longlong)this->ArrayNum * 4);
  if (FVar7 != FVar1) {
    FVar6 = FVar7;
    do {
      if (*(FTriangleID *)FVar6 == *param_1) {
        iVar5 = (int)((longlong)FVar6 - (longlong)FVar7 >> 2);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      FVar6 = (ForElementType<FTriangleID>)((longlong)FVar6 + 4);
    } while (FVar6 != FVar1);
  }
  FVar7 = (ForElementType<FTriangleID>)this;
  if (FVar2 != (ForElementType<FTriangleID>)0x0) {
    FVar7 = FVar2;
  }
  if ((ulonglong)FVar7 <= param_1) {
    FVar7 = (ForElementType<FTriangleID>)this;
    if (FVar2 != (ForElementType<FTriangleID>)0x0) {
      FVar7 = FVar2;
    }
    if ((param_1 < (FTriangleID *)((longlong)FVar7 + (longlong)this->ArrayMax * 4)) &&
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
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FTriangleID>_>
                      (0x404,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar5 + 1;
  FVar2 = (this->AllocatorInstance).SecondaryData;
  if (FVar2 != (ForElementType<FTriangleID>)0x0) {
    this = (TArray<FTriangleID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
  }
  *(FTriangleID *)((longlong)this + (longlong)iVar5 * 4) = *param_1;
  return iVar5;
}

// AddZeroed @ 1443701c0

int __thiscall
TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::AddZeroed
          (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,param_1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  memset((this->AllocatorInstance).Data + (longlong)iVar1 * 0xc,0,(longlong)param_1 * 0xc);
  return iVar1;
}

