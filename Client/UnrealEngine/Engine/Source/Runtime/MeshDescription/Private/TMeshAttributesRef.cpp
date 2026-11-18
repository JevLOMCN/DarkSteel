// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshDescription
// Functions: 6

// operator[] @ 14365e000

FPolygonGroupID * __thiscall
TMeshAttributesRef<int,FPolygonGroupID>::operator[]
          (TMeshAttributesRef<int,FPolygonGroupID> *this,int param_1)

{
  FMeshAttributeArraySetBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  FPolygonGroupID *pFVar4;
  FMeshAttributeArraySetBase *this_00;
  
  pFVar1 = this->ArrayPtr;
  if ((int)pFVar1[2].Type < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPolygonGroupID *)(*pcVar2)();
      return pFVar4;
    }
  }
  this_00 = (FMeshAttributeArraySetBase *)pFVar1[2]._padding_;
  if ((FMeshAttributeArraySetBase *)pFVar1[2]._padding_ == (FMeshAttributeArraySetBase *)0x0) {
    this_00 = pFVar1 + 1;
  }
  pFVar4 = TMeshAttributeArrayBase<FPolygonGroupID>::GetElementBase
                     ((TMeshAttributeArrayBase<FPolygonGroupID> *)this_00,param_1);
  return pFVar4;
}

// operator[] @ 14365e080

FPolygonID * __thiscall
TMeshAttributesRef<int,FPolygonID>::operator[](TMeshAttributesRef<int,FPolygonID> *this,int param_1)

{
  FMeshAttributeArraySetBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  FPolygonID *pFVar4;
  FMeshAttributeArraySetBase *this_00;
  
  pFVar1 = this->ArrayPtr;
  if ((int)pFVar1[2].Type < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPolygonID *)(*pcVar2)();
      return pFVar4;
    }
  }
  this_00 = (FMeshAttributeArraySetBase *)pFVar1[2]._padding_;
  if ((FMeshAttributeArraySetBase *)pFVar1[2]._padding_ == (FMeshAttributeArraySetBase *)0x0) {
    this_00 = pFVar1 + 1;
  }
  pFVar4 = TMeshAttributeArrayBase<FPolygonID>::GetElementBase
                     ((TMeshAttributeArrayBase<FPolygonID> *)this_00,param_1);
  return pFVar4;
}

// operator[] @ 14365e100

TArrayView<FEdgeID,int> * __thiscall
TMeshAttributesRef<int,TArrayView<FEdgeID,int>_>::operator[]
          (TMeshAttributesRef<int,TArrayView<FEdgeID,int>_> *this,
          TArrayView<FEdgeID,int> *__return_storage_ptr__,int param_1)

{
  uint uVar1;
  FMeshAttributeArraySetBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<FEdgeID,int> *pTVar5;
  FEdgeID *pFVar6;
  FMeshAttributeArraySetBase *pFVar7;
  
  pFVar2 = this->ArrayPtr;
  if (this->Extent == 0) {
    if ((int)pFVar2[2].Type < 1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TArrayView<FEdgeID,int> *)(*pcVar3)();
        return pTVar5;
      }
    }
    pFVar7 = (FMeshAttributeArraySetBase *)pFVar2[2]._padding_;
    if ((FMeshAttributeArraySetBase *)pFVar2[2]._padding_ == (FMeshAttributeArraySetBase *)0x0) {
      pFVar7 = pFVar2 + 1;
    }
    TAttributeArrayContainer<FEdgeID>::Get
              ((TAttributeArrayContainer<FEdgeID> *)pFVar7,__return_storage_ptr__,param_1);
  }
  else {
    if ((int)pFVar2[2].Type < 1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TArrayView<FEdgeID,int> *)(*pcVar3)();
        return pTVar5;
      }
    }
    pFVar7 = (FMeshAttributeArraySetBase *)pFVar2[2]._padding_;
    if ((FMeshAttributeArraySetBase *)pFVar2[2]._padding_ == (FMeshAttributeArraySetBase *)0x0) {
      pFVar7 = pFVar2 + 1;
    }
    pFVar6 = TMeshAttributeArrayBase<FEdgeID>::GetElementBase
                       ((TMeshAttributeArrayBase<FEdgeID> *)pFVar7,param_1);
    uVar1 = this->Extent;
    __return_storage_ptr__->DataPtr = pFVar6;
    __return_storage_ptr__->ArrayNum = uVar1;
    if ((int)uVar1 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TArrayView<FEdgeID,int> *)(*pcVar3)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// operator[] @ 14365e230

TArrayView<FVertexID,int> * __thiscall
TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
          (TMeshAttributesRef<int,TArrayView<FVertexID,int>_> *this,
          TArrayView<FVertexID,int> *__return_storage_ptr__,int param_1)

{
  uint uVar1;
  TMeshAttributeArraySet<FVertexID> *this_00;
  code *pcVar2;
  bool bVar3;
  TMeshAttributeArrayBase<FVertexID> *this_01;
  FVertexID *pFVar4;
  TArrayView<FVertexID,int> *pTVar5;
  ForElementType<TMeshAttributeArrayBase<FVertexID>_> this_02;
  
  this_00 = (TMeshAttributeArraySet<FVertexID> *)this->ArrayPtr;
  if (this->Extent == 0) {
    if ((this_00->ArrayForChannels).ArrayNum < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<FVertexID,int> *)(*pcVar2)();
        return pTVar5;
      }
    }
    this_02 = (this_00->ArrayForChannels).AllocatorInstance.SecondaryData;
    if (this_02 == (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)0x0) {
      this_02 = (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)&this_00->ArrayForChannels;
    }
    TAttributeArrayContainer<FVertexID>::Get
              ((TAttributeArrayContainer<FVertexID> *)this_02,__return_storage_ptr__,param_1);
  }
  else {
    this_01 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel(this_00,0);
    pFVar4 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(this_01,param_1);
    uVar1 = this->Extent;
    __return_storage_ptr__->DataPtr = pFVar4;
    __return_storage_ptr__->ArrayNum = uVar1;
    if ((int)uVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<FVertexID,int> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// operator[] @ 14365e320

TArrayView<FVertexInstanceID,int> * __thiscall
TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_>::operator[]
          (TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_> *this,
          TArrayView<FVertexInstanceID,int> *__return_storage_ptr__,int param_1)

{
  uint uVar1;
  FMeshAttributeArraySetBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<FVertexInstanceID,int> *pTVar5;
  FVertexInstanceID *pFVar6;
  FMeshAttributeArraySetBase *pFVar7;
  
  pFVar2 = this->ArrayPtr;
  if (this->Extent == 0) {
    if ((int)pFVar2[2].Type < 1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TArrayView<FVertexInstanceID,int> *)(*pcVar3)();
        return pTVar5;
      }
    }
    pFVar7 = (FMeshAttributeArraySetBase *)pFVar2[2]._padding_;
    if ((FMeshAttributeArraySetBase *)pFVar2[2]._padding_ == (FMeshAttributeArraySetBase *)0x0) {
      pFVar7 = pFVar2 + 1;
    }
    TAttributeArrayContainer<FVertexInstanceID>::Get
              ((TAttributeArrayContainer<FVertexInstanceID> *)pFVar7,__return_storage_ptr__,param_1)
    ;
  }
  else {
    if ((int)pFVar2[2].Type < 1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TArrayView<FVertexInstanceID,int> *)(*pcVar3)();
        return pTVar5;
      }
    }
    pFVar7 = (FMeshAttributeArraySetBase *)pFVar2[2]._padding_;
    if ((FMeshAttributeArraySetBase *)pFVar2[2]._padding_ == (FMeshAttributeArraySetBase *)0x0) {
      pFVar7 = pFVar2 + 1;
    }
    pFVar6 = TMeshAttributeArrayBase<FVertexInstanceID>::GetElementBase
                       ((TMeshAttributeArrayBase<FVertexInstanceID> *)pFVar7,param_1);
    uVar1 = this->Extent;
    __return_storage_ptr__->DataPtr = pFVar6;
    __return_storage_ptr__->ArrayNum = uVar1;
    if ((int)uVar1 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TArrayView<FVertexInstanceID,int> *)(*pcVar3)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// Get @ 143670d50

TArrayView<FUVID,int> * __thiscall
TMeshAttributesRef<int,TArrayView<FUVID,int>_>::Get
          (TMeshAttributesRef<int,TArrayView<FUVID,int>_> *this,
          TArrayView<FUVID,int> *__return_storage_ptr__,int param_1,int param_2)

{
  FMeshAttributeArraySetBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TArrayView<FUVID,int> *pTVar5;
  FUVID *pFVar6;
  FMeshAttributeArraySetBase *pFVar7;
  
  pFVar1 = this->ArrayPtr;
  if (this->Extent == 0) {
    uVar4 = 0;
    if (param_2 < (int)pFVar1[2].Type) {
      uVar4 = (uint)~param_2 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<FUVID,int> *)(*pcVar2)();
        return pTVar5;
      }
    }
    pFVar7 = (FMeshAttributeArraySetBase *)pFVar1[2]._padding_;
    if ((FMeshAttributeArraySetBase *)pFVar1[2]._padding_ == (FMeshAttributeArraySetBase *)0x0) {
      pFVar7 = pFVar1 + 1;
    }
    TAttributeArrayContainer<FUVID>::Get
              ((TAttributeArrayContainer<FUVID> *)(pFVar7 + param_2),__return_storage_ptr__,param_1)
    ;
  }
  else {
    uVar4 = 0;
    if (param_2 < (int)pFVar1[2].Type) {
      uVar4 = (uint)~param_2 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<FUVID,int> *)(*pcVar2)();
        return pTVar5;
      }
    }
    pFVar7 = (FMeshAttributeArraySetBase *)pFVar1[2]._padding_;
    if ((FMeshAttributeArraySetBase *)pFVar1[2]._padding_ == (FMeshAttributeArraySetBase *)0x0) {
      pFVar7 = pFVar1 + 1;
    }
    pFVar6 = TMeshAttributeArrayBase<FUVID>::GetElementBase
                       ((TMeshAttributeArrayBase<FUVID> *)(pFVar7 + param_2),param_1);
    uVar4 = this->Extent;
    __return_storage_ptr__->DataPtr = pFVar6;
    __return_storage_ptr__->ArrayNum = uVar4;
    if ((int)uVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<FUVID,int> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

