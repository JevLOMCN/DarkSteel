// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 21

// Emplace<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> @ 14333cb60

TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> * __thiscall
TOptional<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>::
Emplace<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
          (TOptional<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *this,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_1)

{
  undefined1 *_Src;
  undefined1 *_Dst;
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar4;
  
  (this->field0_0x0).TypedValue.HashSize = 0;
  pvVar1 = *(void **)((longlong)&this->field0_0x0 + 0x40);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  *(undefined8 *)&this->field0_0x0 = 0;
  *(undefined8 *)((longlong)&this->field0_0x0 + 8) = 0;
  *(undefined8 *)((longlong)&this->field0_0x0 + 0x20) = 0;
  *(undefined4 *)((longlong)&this->field0_0x0 + 0x28) = 0;
  *(undefined4 *)((longlong)&this->field0_0x0 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)&this->field0_0x0 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)&this->field0_0x0 + 0x34) = 0;
  *(undefined8 *)((longlong)&this->field0_0x0 + 0x40) = 0;
  (this->field0_0x0).TypedValue.HashSize = 0;
  if ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)this != param_1) {
    _Src = &(param_1->Elements).field_0x10;
    *(undefined8 *)&this->field0_0x0 = *(undefined8 *)&param_1->Elements;
    *(undefined8 *)&param_1->Elements = 0;
    *(undefined4 *)((longlong)&this->field0_0x0 + 8) = *(undefined4 *)&(param_1->Elements).field_0x8
    ;
    _Dst = (undefined1 *)((longlong)&this->field0_0x0 + 0x10);
    *(undefined4 *)((longlong)&this->field0_0x0 + 0xc) =
         *(undefined4 *)&(param_1->Elements).field_0xc;
    *(undefined8 *)&(param_1->Elements).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->Elements).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar1 = *(void **)((longlong)&this->field0_0x0 + 0x20);
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      *(undefined8 *)((longlong)&this->field0_0x0 + 0x20) =
           *(undefined8 *)&(param_1->Elements).field_0x20;
      *(undefined8 *)&(param_1->Elements).field_0x20 = 0;
      *(undefined4 *)((longlong)&this->field0_0x0 + 0x28) =
           *(undefined4 *)&(param_1->Elements).field_0x28;
      *(undefined4 *)((longlong)&this->field0_0x0 + 0x2c) =
           *(undefined4 *)&(param_1->Elements).field_0x2c;
      *(undefined8 *)&(param_1->Elements).field_0x28 = 0;
    }
    *(undefined4 *)((longlong)&this->field0_0x0 + 0x30) =
         *(undefined4 *)&(param_1->Elements).field_0x30;
    *(undefined4 *)((longlong)&this->field0_0x0 + 0x34) =
         *(undefined4 *)&(param_1->Elements).field_0x34;
    *(undefined4 *)&(param_1->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->Elements).field_0x34 = 0;
  }
  if ((param_1->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) {
    *(undefined4 *)(this->field0_0x0).TypedValue.Hash.InlineData =
         *(undefined4 *)(param_1->Hash).InlineData;
  }
  pvVar1 = *(void **)((longlong)&this->field0_0x0 + 0x40);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(ForElementType<FSetElementId> *)((longlong)&this->field0_0x0 + 0x40) =
       (param_1->Hash).SecondaryData;
  (param_1->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->field0_0x0).TypedValue.HashSize = param_1->HashSize;
  param_1->HashSize = 0;
  if (*(int *)((longlong)&this->field0_0x0 + 0xc) == -1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x171,
                       L"TOptional::Emplace(...) - optionals should not be unset by an emplacement")
    ;
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)this;
}

// GetValue @ 1433b3890

TDynamicVector<int,512> * __thiscall
TOptional<UE::Geometry::TDynamicVector<int,512>_>::GetValue
          (TOptional<UE::Geometry::TDynamicVector<int,512>_> *this)

{
  code *pcVar1;
  bool bVar2;
  TDynamicVector<int,512> *pTVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TDynamicVector<int,512> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return &this->TypedValue;
}

// GetValue @ 1433b38e0

TDynamicVector<UE::Math::TVector2<float>,512> * __thiscall
TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>_>::GetValue
          (TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>_> *this)

{
  code *pcVar1;
  bool bVar2;
  TDynamicVector<UE::Math::TVector2<float>,512> *pTVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TDynamicVector<UE::Math::TVector2<float>,512> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return &this->TypedValue;
}

// GetValue @ 1433b3930

TDynamicVector<UE::Math::TVector<float>,512> * __thiscall
TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>_>::GetValue
          (TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>_> *this)

{
  code *pcVar1;
  bool bVar2;
  TDynamicVector<UE::Math::TVector<float>,512> *pTVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TDynamicVector<UE::Math::TVector<float>,512> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return &this->TypedValue;
}

// Emplace<> @ 143434bd0

TDynamicVector<int,512> * __thiscall
TOptional<UE::Geometry::TDynamicVector<int,512>_>::Emplace<>
          (TOptional<UE::Geometry::TDynamicVector<int,512>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  if (this->bIsSet != false) {
    UE::Geometry::TDynamicVector<int,512>::Empty(&this->TypedValue,0);
    pFVar1 = (this->TypedValue).Blocks.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  }
  (this->TypedValue).CurBlock = 0;
  (this->TypedValue).CurBlockUsed = 0;
  (this->TypedValue).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TypedValue).Blocks.ArrayNum = 0;
  (this->TypedValue).Blocks.ArrayMax = 0;
  UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock(&this->TypedValue);
  this->bIsSet = true;
  return &this->TypedValue;
}

// Emplace<> @ 143434c20

TDynamicVector<UE::Math::TVector2<float>,512> * __thiscall
TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>_>::Emplace<>
          (TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  if (this->bIsSet != false) {
    UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>::Empty(&this->TypedValue,0);
    pFVar1 = (this->TypedValue).Blocks.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  }
  (this->TypedValue).CurBlock = 0;
  (this->TypedValue).CurBlockUsed = 0;
  (this->TypedValue).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TypedValue).Blocks.ArrayNum = 0;
  (this->TypedValue).Blocks.ArrayMax = 0;
  UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>::AddAllocatedBlock(&this->TypedValue);
  this->bIsSet = true;
  return &this->TypedValue;
}

// Emplace<> @ 143434c70

TDynamicVector<UE::Math::TVector<float>,512> * __thiscall
TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>_>::Emplace<>
          (TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  if (this->bIsSet != false) {
    UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::Empty(&this->TypedValue,0);
    pFVar1 = (this->TypedValue).Blocks.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  }
  (this->TypedValue).CurBlock = 0;
  (this->TypedValue).CurBlockUsed = 0;
  (this->TypedValue).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TypedValue).Blocks.ArrayNum = 0;
  (this->TypedValue).Blocks.ArrayMax = 0;
  UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::AddAllocatedBlock(&this->TypedValue);
  this->bIsSet = true;
  return &this->TypedValue;
}

// operator= @ 143455790

TOptional<DynamicMeshInfo::FMergeEdgesInfo> * __thiscall
TOptional<DynamicMeshInfo::FMergeEdgesInfo>::operator=
          (TOptional<DynamicMeshInfo::FMergeEdgesInfo> *this,
          TOptional<DynamicMeshInfo::FMergeEdgesInfo> *param_1)

{
  ForElementType<int> FVar1;
  
  if (param_1 != this) {
    if (param_1->bIsSet != false) {
      if (this->bIsSet != false) {
        FVar1 = (this->TypedValue).BowtiesKeptEdges.AllocatorInstance.SecondaryData;
        if (FVar1 != (ForElementType<int>)0x0) {
          FMemory::Free((void *)FVar1);
        }
        FVar1 = (this->TypedValue).BowtiesRemovedEdges.AllocatorInstance.SecondaryData;
        if (FVar1 != (ForElementType<int>)0x0) {
          FMemory::Free((void *)FVar1);
        }
      }
      (this->TypedValue).KeptEdge = (param_1->TypedValue).KeptEdge;
      (this->TypedValue).RemovedEdge = (param_1->TypedValue).RemovedEdge;
      (this->TypedValue).KeptVerts.field0_0x0 = (param_1->TypedValue).KeptVerts.field0_0x0;
      (this->TypedValue).RemovedVerts.field0_0x0 = (param_1->TypedValue).RemovedVerts.field0_0x0;
      (this->TypedValue).ExtraRemovedEdges.field0_0x0 =
           (param_1->TypedValue).ExtraRemovedEdges.field0_0x0;
      (this->TypedValue).ExtraKeptEdges.field0_0x0 = (param_1->TypedValue).ExtraKeptEdges.field0_0x0
      ;
      (this->TypedValue).BowtiesRemovedEdges.AllocatorInstance.SecondaryData =
           (ForElementType<int>)0x0;
      if ((param_1->TypedValue).BowtiesRemovedEdges.AllocatorInstance.SecondaryData ==
          (ForElementType<int>)0x0) {
        memmove(&(this->TypedValue).BowtiesRemovedEdges,&(param_1->TypedValue).BowtiesRemovedEdges,
                0x10);
      }
      FVar1 = (this->TypedValue).BowtiesRemovedEdges.AllocatorInstance.SecondaryData;
      if (FVar1 != (ForElementType<int>)0x0) {
        FMemory::Free((void *)FVar1);
      }
      (this->TypedValue).BowtiesRemovedEdges.AllocatorInstance.SecondaryData =
           (param_1->TypedValue).BowtiesRemovedEdges.AllocatorInstance.SecondaryData;
      (param_1->TypedValue).BowtiesRemovedEdges.AllocatorInstance.SecondaryData =
           (ForElementType<int>)0x0;
      (this->TypedValue).BowtiesRemovedEdges.ArrayNum =
           (param_1->TypedValue).BowtiesRemovedEdges.ArrayNum;
      (this->TypedValue).BowtiesRemovedEdges.ArrayMax =
           (param_1->TypedValue).BowtiesRemovedEdges.ArrayMax;
      (param_1->TypedValue).BowtiesRemovedEdges.ArrayNum = 0;
      (param_1->TypedValue).BowtiesRemovedEdges.ArrayMax = 4;
      (this->TypedValue).BowtiesKeptEdges.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0
      ;
      if ((param_1->TypedValue).BowtiesKeptEdges.AllocatorInstance.SecondaryData ==
          (ForElementType<int>)0x0) {
        memmove(&(this->TypedValue).BowtiesKeptEdges,&(param_1->TypedValue).BowtiesKeptEdges,0x10);
      }
      FVar1 = (this->TypedValue).BowtiesKeptEdges.AllocatorInstance.SecondaryData;
      if (FVar1 != (ForElementType<int>)0x0) {
        FMemory::Free((void *)FVar1);
      }
      (this->TypedValue).BowtiesKeptEdges.AllocatorInstance.SecondaryData =
           (param_1->TypedValue).BowtiesKeptEdges.AllocatorInstance.SecondaryData;
      (param_1->TypedValue).BowtiesKeptEdges.AllocatorInstance.SecondaryData =
           (ForElementType<int>)0x0;
      (this->TypedValue).BowtiesKeptEdges.ArrayNum = (param_1->TypedValue).BowtiesKeptEdges.ArrayNum
      ;
      (this->TypedValue).BowtiesKeptEdges.ArrayMax = (param_1->TypedValue).BowtiesKeptEdges.ArrayMax
      ;
      (param_1->TypedValue).BowtiesKeptEdges.ArrayNum = 0;
      (param_1->TypedValue).BowtiesKeptEdges.ArrayMax = 4;
      (this->TypedValue).InterpolationT = (param_1->TypedValue).InterpolationT;
      this->bIsSet = true;
      return this;
    }
    if (this->bIsSet != false) {
      FVar1 = (this->TypedValue).BowtiesKeptEdges.AllocatorInstance.SecondaryData;
      if (FVar1 != (ForElementType<int>)0x0) {
        FMemory::Free((void *)FVar1);
      }
      FVar1 = (this->TypedValue).BowtiesRemovedEdges.AllocatorInstance.SecondaryData;
      if (FVar1 != (ForElementType<int>)0x0) {
        FMemory::Free((void *)FVar1);
      }
      this->bIsSet = false;
    }
  }
  return this;
}

// operator= @ 143455910

TOptional<UE::Geometry::TDynamicVector<int,512>_> * __thiscall
TOptional<UE::Geometry::TDynamicVector<int,512>_>::operator=
          (TOptional<UE::Geometry::TDynamicVector<int,512>_> *this,TDynamicVector<int,512> *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  
  if ((TOptional<UE::Geometry::TDynamicVector<int,512>_> *)param_1 != this) {
    if (this->bIsSet != false) {
      UE::Geometry::TDynamicVector<int,512>::Empty(&this->TypedValue,0);
      pFVar2 = (this->TypedValue).Blocks.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
    }
    (this->TypedValue).CurBlock = param_1->CurBlock;
    uVar1 = param_1->CurBlockUsed;
    (this->TypedValue).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->TypedValue).CurBlockUsed = uVar1;
    (this->TypedValue).Blocks.AllocatorInstance.Data = (param_1->Blocks).AllocatorInstance.Data;
    (param_1->Blocks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->TypedValue).Blocks.ArrayNum = (param_1->Blocks).ArrayNum;
    (this->TypedValue).Blocks.ArrayMax = (param_1->Blocks).ArrayMax;
    (param_1->Blocks).ArrayNum = 0;
    (param_1->Blocks).ArrayMax = 0;
    param_1->CurBlock = 0;
    param_1->CurBlockUsed = 0;
    UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock(param_1);
    this->bIsSet = true;
  }
  return this;
}

// operator= @ 143455990

TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>_> * __thiscall
TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>_>::operator=
          (TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>_> *this,
          TDynamicVector<UE::Math::TVector2<float>,512> *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  
  if ((TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>_> *)param_1 != this) {
    if (this->bIsSet != false) {
      UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>::Empty(&this->TypedValue,0);
      pFVar2 = (this->TypedValue).Blocks.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
    }
    (this->TypedValue).CurBlock = param_1->CurBlock;
    uVar1 = param_1->CurBlockUsed;
    (this->TypedValue).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->TypedValue).CurBlockUsed = uVar1;
    (this->TypedValue).Blocks.AllocatorInstance.Data = (param_1->Blocks).AllocatorInstance.Data;
    (param_1->Blocks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->TypedValue).Blocks.ArrayNum = (param_1->Blocks).ArrayNum;
    (this->TypedValue).Blocks.ArrayMax = (param_1->Blocks).ArrayMax;
    (param_1->Blocks).ArrayNum = 0;
    (param_1->Blocks).ArrayMax = 0;
    param_1->CurBlock = 0;
    param_1->CurBlockUsed = 0;
    UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>::AddAllocatedBlock(param_1);
    this->bIsSet = true;
  }
  return this;
}

// operator= @ 143455a10

TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>_> * __thiscall
TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>_>::operator=
          (TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>_> *this,
          TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>_> *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  
  if (param_1 != this) {
    if (param_1->bIsSet != false) {
      if (this->bIsSet != false) {
        UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::Empty(&this->TypedValue,0);
        pFVar2 = (this->TypedValue).Blocks.AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
      }
      (this->TypedValue).CurBlock = (param_1->TypedValue).CurBlock;
      uVar1 = (param_1->TypedValue).CurBlockUsed;
      (this->TypedValue).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->TypedValue).CurBlockUsed = uVar1;
      (this->TypedValue).Blocks.AllocatorInstance.Data =
           (param_1->TypedValue).Blocks.AllocatorInstance.Data;
      (param_1->TypedValue).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->TypedValue).Blocks.ArrayNum = (param_1->TypedValue).Blocks.ArrayNum;
      (this->TypedValue).Blocks.ArrayMax = (param_1->TypedValue).Blocks.ArrayMax;
      (param_1->TypedValue).Blocks.ArrayNum = 0;
      (param_1->TypedValue).Blocks.ArrayMax = 0;
      (param_1->TypedValue).CurBlock = 0;
      (param_1->TypedValue).CurBlockUsed = 0;
      UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::AddAllocatedBlock
                (&param_1->TypedValue);
      this->bIsSet = true;
      return this;
    }
    if (this->bIsSet != false) {
      UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::Empty(&this->TypedValue,0);
      pFVar2 = (this->TypedValue).Blocks.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      this->bIsSet = false;
    }
  }
  return this;
}

// operator= @ 143455ad0

TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>_> * __thiscall
TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>_>::operator=
          (TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>_> *this,
          TDynamicVector<UE::Math::TVector<float>,512> *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  
  if ((TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>_> *)param_1 != this) {
    if (this->bIsSet != false) {
      UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::Empty(&this->TypedValue,0);
      pFVar2 = (this->TypedValue).Blocks.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
    }
    (this->TypedValue).CurBlock = param_1->CurBlock;
    uVar1 = param_1->CurBlockUsed;
    (this->TypedValue).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->TypedValue).CurBlockUsed = uVar1;
    (this->TypedValue).Blocks.AllocatorInstance.Data = (param_1->Blocks).AllocatorInstance.Data;
    (param_1->Blocks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->TypedValue).Blocks.ArrayNum = (param_1->Blocks).ArrayNum;
    (this->TypedValue).Blocks.ArrayMax = (param_1->Blocks).ArrayMax;
    (param_1->Blocks).ArrayNum = 0;
    (param_1->Blocks).ArrayMax = 0;
    param_1->CurBlock = 0;
    param_1->CurBlockUsed = 0;
    UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::AddAllocatedBlock(param_1);
    this->bIsSet = true;
  }
  return this;
}

// operator= @ 143455b50

TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>_> * __thiscall
TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>_>::operator=
          (TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>_> *this,
          TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  
  if (param_1 != this) {
    if (param_1->bIsSet != false) {
      if (this->bIsSet != false) {
        UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::Empty(&this->TypedValue,0);
        pFVar1 = (this->TypedValue).Blocks.AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
      }
      UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::
      TDynamicVector<UE::Math::TVector<float>,512>(&this->TypedValue,&param_1->TypedValue);
      this->bIsSet = true;
      return this;
    }
    if (this->bIsSet != false) {
      UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::Empty(&this->TypedValue,0);
      pFVar1 = (this->TypedValue).Blocks.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      this->bIsSet = false;
    }
  }
  return this;
}

// operator-> @ 143456470

TDynamicVector<int,512> * __thiscall
TOptional<UE::Geometry::TDynamicVector<int,512>_>::operator->
          (TOptional<UE::Geometry::TDynamicVector<int,512>_> *this)

{
  code *pcVar1;
  bool bVar2;
  TDynamicVector<int,512> *pTVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TDynamicVector<int,512> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return &this->TypedValue;
}

// operator-> @ 1434564c0

TDynamicVector<UE::Math::TVector2<float>,512> * __thiscall
TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>_>::operator->
          (TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>_> *this)

{
  code *pcVar1;
  bool bVar2;
  TDynamicVector<UE::Math::TVector2<float>,512> *pTVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TDynamicVector<UE::Math::TVector2<float>,512> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return &this->TypedValue;
}

// operator-> @ 143456510

TDynamicVector<UE::Math::TVector<float>,512> * __thiscall
TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>_>::operator->
          (TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>_> *this)

{
  code *pcVar1;
  bool bVar2;
  TDynamicVector<UE::Math::TVector<float>,512> *pTVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TDynamicVector<UE::Math::TVector<float>,512> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return &this->TypedValue;
}

// operator* @ 143456560

TDynamicVector<int,512> * __thiscall
TOptional<UE::Geometry::TDynamicVector<int,512>_>::operator*
          (TOptional<UE::Geometry::TDynamicVector<int,512>_> *this)

{
  code *pcVar1;
  bool bVar2;
  TDynamicVector<int,512> *pTVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TDynamicVector<int,512> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return &this->TypedValue;
}

// Serialize @ 143529380

void __thiscall
TOptional<UE::Geometry::TDynamicVector<int,512>_>::Serialize
          (TOptional<UE::Geometry::TDynamicVector<int,512>_> *this,FArchive *param_1)

{
  uint *puVar1;
  uint uVar2;
  ulonglong *puVar3;
  uint *puVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  uint local_res8 [2];
  uint local_res10 [2];
  
  cVar8 = this->bIsSet;
  puVar3 = *(ulonglong **)&param_1->field_0x8;
  puVar4 = (uint *)*puVar3;
  puVar1 = puVar4 + 1;
  if ((param_1->field_0x28 & 1) == 0) {
    if ((uint *)puVar3[1] < puVar1) {
      local_res10[0] = (uint)((bool)cVar8 != false);
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
      if (1 < local_res10[0]) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      uVar2 = local_res10[0];
      if ((param_1->field_0x28 & 1) != 0) goto LAB_143529499;
    }
    else {
      uVar2 = *puVar4;
      *puVar3 = (ulonglong)puVar1;
LAB_143529499:
      cVar8 = uVar2 != 0;
    }
    if (cVar8 == '\0') {
      return;
    }
LAB_1435294a2:
    if ((this->bIsSet == false) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    UE::Geometry::TDynamicVector<int,512>::Serialize<0,0>(&this->TypedValue,param_1);
  }
  else {
    if ((uint *)puVar3[1] < puVar1) {
      local_res8[0] = 0;
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      if (1 < local_res8[0]) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      uVar2 = local_res8[0];
      if ((param_1->field_0x28 & 1) != 0) goto LAB_1435293f9;
    }
    else {
      uVar2 = *puVar4;
      *puVar3 = (ulonglong)puVar1;
LAB_1435293f9:
      if (uVar2 != 0) {
        if ((bool)cVar8 == false) {
          Emplace<>(this);
        }
        goto LAB_1435294a2;
      }
    }
    if (this->bIsSet != false) {
      UE::Geometry::TDynamicVector<int,512>::Empty(&this->TypedValue,0);
      pFVar5 = (this->TypedValue).Blocks.AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      this->bIsSet = false;
      return;
    }
  }
  return;
}

// Serialize @ 1435294f0

void __thiscall
TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>_>::Serialize
          (TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>_> *this,
          FArchive *param_1)

{
  uint *puVar1;
  uint uVar2;
  ulonglong *puVar3;
  uint *puVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  uint local_res8 [2];
  uint local_res10 [2];
  
  cVar8 = this->bIsSet;
  puVar3 = *(ulonglong **)&param_1->field_0x8;
  puVar4 = (uint *)*puVar3;
  puVar1 = puVar4 + 1;
  if ((param_1->field_0x28 & 1) == 0) {
    if ((uint *)puVar3[1] < puVar1) {
      local_res10[0] = (uint)((bool)cVar8 != false);
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
      if (1 < local_res10[0]) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      uVar2 = local_res10[0];
      if ((param_1->field_0x28 & 1) != 0) goto LAB_143529609;
    }
    else {
      uVar2 = *puVar4;
      *puVar3 = (ulonglong)puVar1;
LAB_143529609:
      cVar8 = uVar2 != 0;
    }
    if (cVar8 == '\0') {
      return;
    }
LAB_143529612:
    if ((this->bIsSet == false) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>::Serialize<0,0>
              (&this->TypedValue,param_1);
  }
  else {
    if ((uint *)puVar3[1] < puVar1) {
      local_res8[0] = 0;
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      if (1 < local_res8[0]) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      uVar2 = local_res8[0];
      if ((param_1->field_0x28 & 1) != 0) goto LAB_143529569;
    }
    else {
      uVar2 = *puVar4;
      *puVar3 = (ulonglong)puVar1;
LAB_143529569:
      if (uVar2 != 0) {
        if ((bool)cVar8 == false) {
          Emplace<>(this);
        }
        goto LAB_143529612;
      }
    }
    if (this->bIsSet != false) {
      UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>::Empty(&this->TypedValue,0);
      pFVar5 = (this->TypedValue).Blocks.AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      this->bIsSet = false;
      return;
    }
  }
  return;
}

// Serialize @ 143529660

void __thiscall
TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>_>::Serialize
          (TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>_> *this,
          FArchive *param_1)

{
  uint *puVar1;
  uint uVar2;
  ulonglong *puVar3;
  uint *puVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  uint local_res8 [2];
  uint local_res10 [2];
  
  cVar8 = this->bIsSet;
  puVar3 = *(ulonglong **)&param_1->field_0x8;
  puVar4 = (uint *)*puVar3;
  puVar1 = puVar4 + 1;
  if ((param_1->field_0x28 & 1) == 0) {
    if ((uint *)puVar3[1] < puVar1) {
      local_res10[0] = (uint)((bool)cVar8 != false);
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
      if (1 < local_res10[0]) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      uVar2 = local_res10[0];
      if ((param_1->field_0x28 & 1) != 0) goto LAB_143529779;
    }
    else {
      uVar2 = *puVar4;
      *puVar3 = (ulonglong)puVar1;
LAB_143529779:
      cVar8 = uVar2 != 0;
    }
    if (cVar8 == '\0') {
      return;
    }
LAB_143529782:
    if ((this->bIsSet == false) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::Serialize<0,0>
              (&this->TypedValue,param_1);
  }
  else {
    if ((uint *)puVar3[1] < puVar1) {
      local_res8[0] = 0;
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      if (1 < local_res8[0]) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      uVar2 = local_res8[0];
      if ((param_1->field_0x28 & 1) != 0) goto LAB_1435296d9;
    }
    else {
      uVar2 = *puVar4;
      *puVar3 = (ulonglong)puVar1;
LAB_1435296d9:
      if (uVar2 != 0) {
        if ((bool)cVar8 == false) {
          Emplace<>(this);
        }
        goto LAB_143529782;
      }
    }
    if (this->bIsSet != false) {
      UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::Empty(&this->TypedValue,0);
      pFVar5 = (this->TypedValue).Blocks.AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      this->bIsSet = false;
      return;
    }
  }
  return;
}

// GetValue @ 1435b5380

TArray<signed_char,TSizedDefaultAllocator<32>_> * __thiscall
TOptional<TArray<signed_char,TSizedDefaultAllocator<32>_>_>::GetValue
          (TOptional<TArray<signed_char,TSizedDefaultAllocator<32>_>_> *this)

{
  code *pcVar1;
  bool bVar2;
  TArray<signed_char,TSizedDefaultAllocator<32>_> *pTVar3;
  
  if ((this->field0_0x0).TypedValue.ArrayMax == -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<signed_char,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return (TArray<signed_char,TSizedDefaultAllocator<32>_> *)this;
}

