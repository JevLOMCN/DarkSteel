// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 15

// FTransformDynamicCollection @ 143f8d3f0

FTransformDynamicCollection * __thiscall
FTransformDynamicCollection::FTransformDynamicCollection
          (FTransformDynamicCollection *this,FGeometryCollection *param_1)

{
  code *pcVar1;
  bool bVar2;
  FTransformDynamicCollection *pFVar3;
  
  FManagedArrayCollection::FManagedArrayCollection((FManagedArrayCollection *)this);
  this->RestCollection = param_1;
  this->_padding_ = (longlong)&___7FTransformDynamicCollection__6B_;
  (this->RestCollectionShared).Object = (FGeometryCollection *)0x0;
  (this->RestCollectionShared).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(this->HasParent).field_0x20 = 0;
  (this->HasParent).field_0x8 = 0;
  *(undefined4 *)&(this->HasParent).field_0x28 = 0;
  *(undefined4 *)&(this->HasParent).field_0x2c = 0x80;
  *(undefined ***)&this->HasParent = &___7__TManagedArray__N__6B_;
  *(undefined ***)&this->Transform = &___7__TManagedArray_U__TTransform_M_Math_UE____6B_;
  (this->Transform).field_0x8 = 0;
  *(undefined8 *)&(this->Transform).field_0x10 = 0;
  *(undefined8 *)&(this->Transform).field_0x18 = 0;
  this->bTransformHasChanged = false;
  if (this->RestCollection == (FGeometryCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("RestCollection != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollectionProxyData.cpp"
                       ,0x17,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FTransformDynamicCollection *)(*pcVar1)();
      return pFVar3;
    }
  }
  Construct(this);
  return this;
}

// FTransformDynamicCollection @ 143f8d4d0

FTransformDynamicCollection * __thiscall
FTransformDynamicCollection::FTransformDynamicCollection
          (FTransformDynamicCollection *this,TSharedPtr<FGeometryCollection_const_,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FTransformDynamicCollection *pFVar4;
  
  FManagedArrayCollection::FManagedArrayCollection((FManagedArrayCollection *)this);
  this->_padding_ = (longlong)&___7FTransformDynamicCollection__6B_;
  this->RestCollection = param_1->Object;
  (this->RestCollectionShared).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->RestCollectionShared).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->HasParent).field_0x8 = 0;
  *(undefined8 *)&(this->HasParent).field_0x20 = 0;
  *(undefined4 *)&(this->HasParent).field_0x28 = 0;
  *(undefined4 *)&(this->HasParent).field_0x2c = 0x80;
  *(undefined ***)&this->HasParent = &___7__TManagedArray__N__6B_;
  *(undefined ***)&this->Transform = &___7__TManagedArray_U__TTransform_M_Math_UE____6B_;
  (this->Transform).field_0x8 = 0;
  *(undefined8 *)&(this->Transform).field_0x10 = 0;
  *(undefined8 *)&(this->Transform).field_0x18 = 0;
  this->bTransformHasChanged = false;
  if ((this->RestCollectionShared).Object == (FGeometryCollection *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("RestCollectionShared",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollectionProxyData.cpp"
                       ,0x25,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FTransformDynamicCollection *)(*pcVar2)();
      return pFVar4;
    }
  }
  Construct(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FTransformDynamicCollection @ 143f8dff0

void __thiscall
FTransformDynamicCollection::~FTransformDynamicCollection(FTransformDynamicCollection *this)

{
  void *pvVar1;
  
  *(undefined ***)&this->Transform = &___7__TManagedArrayBase_U__TTransform_M_Math_UE____6B_;
  pvVar1 = *(void **)&(this->Transform).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->Transform = &___7FManagedArrayBase__6B_;
  *(undefined ***)&this->HasParent = &___7FManagedBitArrayBase__6B_;
  pvVar1 = *(void **)&(this->HasParent).field_0x20;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->HasParent = &___7FManagedArrayBase__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->RestCollectionShared).SharedReferenceCount.ReferenceController);
  FManagedArrayCollection::~FManagedArrayCollection((FManagedArrayCollection *)this);
  return;
}

// Construct @ 143fa6940

void __thiscall FTransformDynamicCollection::Construct(FTransformDynamicCollection *this)

{
  code *pcVar1;
  FName FVar2;
  FName FVar3;
  bool bVar4;
  undefined2 local_20;
  undefined2 uStack_1e;
  FConstructionParameters local_18;
  
  local_18.Saved = true;
  local_18.bAllowCircularDependency = false;
  local_18._10_2_ = uStack_1e;
  local_18.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_18.GroupIndexDependency.Number = 0;
  FManagedArrayCollection::AddExternalAttribute<bool>
            ((FManagedArrayCollection *)this,FTransformCollection::ParentAttribute,
             FTransformCollection::TransformGroup,&this->HasParent,&local_18);
  FVar3 = FTransformCollection::ParentAttribute;
  FVar2 = FTransformCollection::TransformGroup;
  if ((this->RestCollectionShared).Object == (FGeometryCollection *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FManagedArrayCollection::CopyAttribute
            ((FManagedArrayCollection *)this,
             (FManagedArrayCollection *)(this->RestCollectionShared).Object,FVar3,FVar2);
  return;
}

// GetHasParent @ 143fb0b70

TManagedArray<bool> * __thiscall
FTransformDynamicCollection::GetHasParent(FTransformDynamicCollection *this)

{
  return &this->HasParent;
}

// GetHasParent @ 143fb0b80

bool __thiscall
FTransformDynamicCollection::GetHasParent(FTransformDynamicCollection *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  
  if ((param_1 < 0) || (*(int *)&(this->HasParent).field_0x28 <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5c6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  puVar4 = *(undefined1 **)&(this->HasParent).field_0x20;
  if (puVar4 == (undefined1 *)0x0) {
    puVar4 = &(this->HasParent).field_0x10;
  }
  return (*(uint *)(puVar4 + (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4) >>
          (param_1 & 0x1fU) & 1) != 0;
}

// GetNumTransforms @ 143fb1620

int __thiscall FTransformDynamicCollection::GetNumTransforms(FTransformDynamicCollection *this)

{
  FGeometryCollection *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  
  if (this->bTransformHasChanged != false) {
    if ((this->RestCollectionShared).Object == (FGeometryCollection *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    pFVar1 = (this->RestCollectionShared).Object;
    iVar4 = (**(code **)(*(longlong *)&this->Transform + 0x60))();
    iVar5 = (**(code **)(pFVar1->_padding_ + 0x60))(&pFVar1->_padding_);
    if (iVar5 != iVar4) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8717185947470397362>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollectionProxyData.cpp"
                         ,0x4e,
                         "!bTransformHasChanged || RestCollectionShared->Transform.Num() == Transform.Num()"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
  }
  if ((this->RestCollectionShared).Object == (FGeometryCollection *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000143fb1718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar4 = (**(code **)(((this->RestCollectionShared).Object)->_padding_ + 0x60))();
  return iVar4;
}

// GetParent @ 143fb1980

int __thiscall FTransformDynamicCollection::GetParent(FTransformDynamicCollection *this,int param_1)

{
  FGeometryCollection *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  
  if ((this->RestCollectionShared).Object == (FGeometryCollection *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("RestCollectionShared",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollectionProxyData.cpp"
                       ,0x6d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  if ((-1 < param_1) && (param_1 < *(int *)&(this->HasParent).field_0x28)) {
    if (*(int *)&(this->HasParent).field_0x28 <= param_1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    puVar6 = *(undefined1 **)&(this->HasParent).field_0x20;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->HasParent).field_0x10;
    }
    if ((*(uint *)(puVar6 + (ulonglong)((uint)param_1 >> 5) * 4) >> (param_1 & 0x1fU) & 1) != 0) {
      if ((this->RestCollectionShared).Object == (FGeometryCollection *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
      }
      pFVar1 = (this->RestCollectionShared).Object;
      uVar5 = 0;
      if (param_1 < (int)pFVar1->_padding_) {
        uVar5 = (uint)~param_1 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
      }
      return *(int *)(pFVar1->_padding_ + (longlong)param_1 * 4);
    }
  }
  return -1;
}

// GetTransform @ 143fb3690

TTransform<float> * __thiscall
FTransformDynamicCollection::GetTransform(FTransformDynamicCollection *this,int param_1)

{
  FGeometryCollection *pFVar1;
  code *pcVar2;
  bool bVar3;
  TTransform<float> *pTVar4;
  uint uVar5;
  
  if (this->bTransformHasChanged != false) {
    uVar5 = 0;
    if (param_1 < *(int *)&(this->Transform).field_0x18) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TTransform<float> *)(*pcVar2)();
        return pTVar4;
      }
    }
    return (TTransform<float> *)
           ((longlong)param_1 * 0x30 + *(longlong *)&(this->Transform).field_0x10);
  }
  if ((this->RestCollectionShared).Object == (FGeometryCollection *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TTransform<float> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pFVar1 = (this->RestCollectionShared).Object;
  uVar5 = 0;
  if (param_1 < (int)pFVar1->_padding_) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TTransform<float> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return (TTransform<float> *)((longlong)param_1 * 0x30 + pFVar1->_padding_);
}

// HasChildren @ 143fb40a0

bool __thiscall
FTransformDynamicCollection::HasChildren(FTransformDynamicCollection *this,int param_1)

{
  ulonglong uVar1;
  TBitArray<FDefaultBitArrayAllocator> *pTVar2;
  int iVar3;
  FGeometryCollection *pFVar4;
  undefined1 *puVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  int iVar16;
  TBitArray<FDefaultBitArrayAllocator> *pTVar17;
  longlong *plVar18;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if (((this->RestCollectionShared).Object == (FGeometryCollection *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  pFVar4 = (this->RestCollectionShared).Object;
  iVar12 = 0;
  uVar9 = 0;
  if (param_1 < (int)pFVar4->_padding_) {
    uVar9 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  uVar9 = 1;
  plVar18 = (longlong *)((longlong)param_1 * 0x50 + pFVar4->_padding_);
  iVar16 = 0;
  iVar3 = (int)plVar18[5];
  pTVar2 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar18 + 2);
  iVar10 = 0;
  if (iVar3 != 0) {
    pTVar17 = (TBitArray<FDefaultBitArrayAllocator> *)plVar18[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar18[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar17 = pTVar2;
    }
    uVar14 = *(uint *)(pTVar17->AllocatorInstance).InlineData;
    iVar16 = 0;
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar12;
      iVar16 = iVar16 + 0x20;
      iVar12 = iVar12 + 1;
      iVar10 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_143fb41cd;
      uVar14 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar11 * 4 + 4);
    }
    uVar9 = -uVar14 & uVar14;
    uVar1 = (ulonglong)uVar9 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar10 = iVar16 + -1 + (int)lVar11;
    if (iVar3 < iVar10) {
      iVar10 = iVar3;
    }
  }
LAB_143fb41cd:
  uVar14 = *(uint *)(plVar18 + 5);
  uVar13 = uVar14 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar9,iVar12);
  TStack_60.CurrentBitIndex = iVar10;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar14 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,(int)plVar18[1] - *(int *)((longlong)plVar18 + 0x34));
  TStack_60.Array = pTVar2;
  if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  uVar9 = *(uint *)(plVar18 + 5);
  if (uVar14 != uVar9) {
    pTVar17 = (TBitArray<FDefaultBitArrayAllocator> *)plVar18[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar18[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar17 = pTVar2;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) &
             *(uint *)((pTVar17->AllocatorInstance).InlineData + (longlong)iVar12 * 4);
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar12;
      uVar13 = uVar13 + 0x20;
      iVar12 = iVar12 + 1;
      uVar14 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_143fb42d0;
      uVar14 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar11 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res18 = (int)lVar11;
    uVar14 = local_res18 + -1 + uVar13;
    if ((int)uVar9 < (int)uVar14) {
      uVar14 = uVar9;
    }
  }
LAB_143fb42d0:
  while( true ) {
    if ((int)plVar18[1] - *(int *)((longlong)plVar18 + 0x34) != (int)uStack_40) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar14) && (TStack_60.Array == pTVar2)) {
      return false;
    }
    uVar9 = *(uint *)(*plVar18 + (longlong)TStack_60.CurrentBitIndex * 0xc);
    if ((((int)uVar9 < 0) || (*(int *)&(this->HasParent).field_0x28 <= (int)uVar9)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    puVar5 = *(undefined1 **)&(this->HasParent).field_0x20;
    puVar15 = &(this->HasParent).field_0x10;
    if (puVar5 != (undefined1 *)0x0) {
      puVar15 = puVar5;
    }
    uVar13 = uVar9 & 0x1f;
    if ((int)uVar9 < 0) {
      uVar9 = uVar9 + 0x1f;
    }
    if ((*(uint *)(puVar15 + (longlong)((int)uVar9 >> 5) * 4) >> uVar13 & 1) != 0) break;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return true;
}

// InitializeTransforms @ 143fb7410

void __thiscall FTransformDynamicCollection::InitializeTransforms(FTransformDynamicCollection *this)

{
  code *pcVar1;
  FName FVar2;
  FName FVar3;
  bool bVar4;
  undefined2 local_20;
  undefined2 uStack_1e;
  FConstructionParameters local_18;
  
  if (this->bTransformHasChanged == false) {
    local_18.Saved = true;
    local_18.bAllowCircularDependency = false;
    local_18._10_2_ = uStack_1e;
    local_18.GroupIndexDependency.ComparisonIndex.Value = 0;
    local_18.GroupIndexDependency.Number = 0;
    FManagedArrayCollection::AddExternalAttribute<UE::Math::TTransform<float>_>
              ((FManagedArrayCollection *)this,FTransformCollection::TransformAttribute,
               FTransformCollection::TransformGroup,&this->Transform,&local_18);
    FVar3 = FTransformCollection::TransformAttribute;
    FVar2 = FTransformCollection::TransformGroup;
    if ((this->RestCollectionShared).Object == (FGeometryCollection *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FManagedArrayCollection::CopyAttribute
              ((FManagedArrayCollection *)this,
               (FManagedArrayCollection *)(this->RestCollectionShared).Object,FVar3,FVar2);
    this->bTransformHasChanged = true;
  }
  return;
}

// IsCluster @ 143fb7650

bool __thiscall
FTransformDynamicCollection::IsCluster(FTransformDynamicCollection *this,int param_1)

{
  FGeometryCollection *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  
  pFVar1 = (this->RestCollectionShared).Object;
  if (((pFVar1 != (FGeometryCollection *)0x0) && (-1 < param_1)) &&
     (param_1 < (int)pFVar1->_padding_)) {
    uVar5 = 0;
    if (param_1 < (int)pFVar1->_padding_) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    return 0 < *(int *)((longlong)param_1 * 0x50 + 8 + pFVar1->_padding_) -
               *(int *)((longlong)param_1 * 0x50 + 0x34 + pFVar1->_padding_);
  }
  return false;
}

// ResetInitialTransforms @ 143fc6050

void __thiscall
FTransformDynamicCollection::ResetInitialTransforms(FTransformDynamicCollection *this)

{
  if (this->bTransformHasChanged != false) {
    FManagedArrayCollection::RemoveAttribute
              ((FManagedArrayCollection *)this,FTransformCollection::TransformAttribute,
               FTransformCollection::TransformGroup);
    this->bTransformHasChanged = false;
  }
  return;
}

// SetHasParent @ 143fc8670

void __thiscall
FTransformDynamicCollection::SetHasParent
          (FTransformDynamicCollection *this,int param_1,bool param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  undefined1 *puVar5;
  
  InitializeTransforms(this);
  if ((param_1 < 0) || (*(int *)&(this->HasParent).field_0x28 <= param_1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  puVar5 = *(undefined1 **)&(this->HasParent).field_0x20;
  if (puVar5 == (undefined1 *)0x0) {
    puVar5 = &(this->HasParent).field_0x10;
  }
  uVar4 = 1 << ((byte)param_1 & 0x1f);
  uVar1 = *(uint *)(puVar5 + (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4);
  if (param_2) {
    uVar4 = uVar4 | uVar1;
  }
  else {
    uVar4 = ~uVar4 & uVar1;
  }
  *(uint *)(puVar5 + (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4) = uVar4;
  return;
}

// SetTransform @ 143fc9840

void __thiscall
FTransformDynamicCollection::SetTransform
          (FTransformDynamicCollection *this,int param_1,TTransform<float> *param_2)

{
  float *pfVar1;
  ulong64 *puVar2;
  longlong lVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ulong64 uVar9;
  ulong64 uVar10;
  ulong64 uVar11;
  ulong64 uVar12;
  bool bVar13;
  uint uVar14;
  longlong lVar15;
  
  lVar15 = (longlong)param_1;
  InitializeTransforms(this);
  fVar5 = (param_2->Rotation).m128_f32[0];
  fVar6 = (param_2->Rotation).m128_f32[1];
  fVar7 = (param_2->Rotation).m128_f32[2];
  fVar8 = (param_2->Rotation).m128_f32[3];
  uVar9 = (param_2->Translation).m128_u64[0];
  uVar10 = (param_2->Translation).m128_u64[1];
  uVar11 = (param_2->Scale3D).m128_u64[0];
  uVar12 = (param_2->Scale3D).m128_u64[1];
  uVar14 = 0;
  if (param_1 < *(int *)&(this->Transform).field_0x18) {
    uVar14 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar3 = *(longlong *)&(this->Transform).field_0x10;
  pfVar1 = (float *)(lVar3 + lVar15 * 0x30);
  *pfVar1 = fVar5;
  pfVar1[1] = fVar6;
  pfVar1[2] = fVar7;
  pfVar1[3] = fVar8;
  puVar2 = (ulong64 *)(lVar3 + 0x10 + lVar15 * 0x30);
  *puVar2 = uVar9;
  puVar2[1] = uVar10;
  puVar2 = (ulong64 *)(lVar3 + 0x20 + lVar15 * 0x30);
  *puVar2 = uVar11;
  puVar2[1] = uVar12;
  return;
}

