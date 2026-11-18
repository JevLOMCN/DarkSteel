// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 16

// ContainsType<FTestSharedFragment_Float> @ 1470d9080

bool __thiscall
FMassArchetypeSharedFragmentValues::ContainsType<FTestSharedFragment_Float>
          (FMassArchetypeSharedFragmentValues *this)

{
  bool bVar1;
  UPackage *pUVar2;
  
  if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Float.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestSharedFragment_Float.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Float,(UObject *)pUVar2,
                         L"TestSharedFragment_Float");
  }
  bVar1 = TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
          ::Contains((TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                      *)&this->SharedFragmentBitSet,
                     Z_Registration_Info_UScriptStruct_FTestSharedFragment_Float.OuterSingleton);
  return bVar1;
}

// ContainsType<FTestSharedFragment_Int> @ 1470d90d0

bool __thiscall
FMassArchetypeSharedFragmentValues::ContainsType<FTestSharedFragment_Int>
          (FMassArchetypeSharedFragmentValues *this)

{
  bool bVar1;
  UPackage *pUVar2;
  
  if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Int,(UObject *)pUVar2,
                         L"TestSharedFragment_Int");
  }
  bVar1 = TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
          ::Contains((TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                      *)&this->SharedFragmentBitSet,
                     Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton);
  return bVar1;
}

// FMassArchetypeSharedFragmentValues @ 1470f4750

FMassArchetypeSharedFragmentValues * __thiscall
FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues
          (FMassArchetypeSharedFragmentValues *this,FMassArchetypeSharedFragmentValues *param_1)

{
  TArray<FConstSharedStruct,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FSharedStruct,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  this->HashCache = param_1->HashCache;
  this->bSorted = param_1->bSorted;
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)&this->SharedFragmentBitSet,
             (FBitSetContainer *)&param_1->SharedFragmentBitSet);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)&this->ConstSharedFragmentBitSet,
             (FBitSetContainer *)&param_1->ConstSharedFragmentBitSet);
  pTVar1 = &this->ConstSharedFragments;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ConstSharedFragments).ArrayMax;
  iVar4 = (param_1->ConstSharedFragments).ArrayNum;
  pFVar5 = (param_1->ConstSharedFragments).AllocatorInstance.Data;
  (this->ConstSharedFragments).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    ConstructItems<FConstSharedStruct,FConstSharedStruct,int>
              ((pTVar1->AllocatorInstance).Data,(FConstSharedStruct *)pFVar5,iVar4);
  }
  pTVar3 = &this->SharedFragments;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->SharedFragments).ArrayMax;
  iVar4 = (param_1->SharedFragments).ArrayNum;
  pFVar5 = (param_1->SharedFragments).AllocatorInstance.Data;
  (this->SharedFragments).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar2);
    ConstructItems<FSharedStruct,FSharedStruct,int>
              ((pTVar3->AllocatorInstance).Data,(FSharedStruct *)pFVar5,iVar4);
  }
  return this;
}

// FMassArchetypeSharedFragmentValues @ 1470f4860

FMassArchetypeSharedFragmentValues * __thiscall
FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues
          (FMassArchetypeSharedFragmentValues *this)

{
  this->HashCache = 0xffffffff;
  *(undefined8 *)&(this->SharedFragmentBitSet).field_0x10 = 0;
  this->bSorted = true;
  *(undefined4 *)&(this->SharedFragmentBitSet).field_0x18 = 0;
  *(undefined4 *)&(this->SharedFragmentBitSet).field_0x1c = 0x80;
  *(undefined8 *)&(this->ConstSharedFragmentBitSet).field_0x10 = 0;
  *(undefined4 *)&(this->ConstSharedFragmentBitSet).field_0x18 = 0;
  *(undefined4 *)&(this->ConstSharedFragmentBitSet).field_0x1c = 0x80;
  (this->ConstSharedFragments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstSharedFragments).ArrayNum = 0;
  (this->ConstSharedFragments).ArrayMax = 0;
  (this->SharedFragments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SharedFragments).ArrayNum = 0;
  (this->SharedFragments).ArrayMax = 0;
  return this;
}

// ~FMassArchetypeSharedFragmentValues @ 1470f83a0

void __thiscall
FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues
          (FMassArchetypeSharedFragmentValues *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  DestructItems<FSharedStruct,int>
            ((FSharedStruct *)(this->SharedFragments).AllocatorInstance.Data,
             (this->SharedFragments).ArrayNum);
  pFVar1 = (this->SharedFragments).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FConstSharedStruct,int>
            ((FConstSharedStruct *)(this->ConstSharedFragments).AllocatorInstance.Data,
             (this->ConstSharedFragments).ArrayNum);
  pFVar1 = (this->ConstSharedFragments).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->ConstSharedFragmentBitSet).field_0x10;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->SharedFragmentBitSet).field_0x10;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
    return;
  }
  return;
}

// Add @ 14710f490

void __thiscall
FMassArchetypeSharedFragmentValues::Add
          (FMassArchetypeSharedFragmentValues *this,FConstSharedStruct *param_1)

{
  FConstSharedStruct local_18;
  
  Add_GetRef(this,&local_18,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.StructMemoryPtr.SharedReferenceCount.ReferenceController);
  return;
}

// Add @ 14710f4c0

void __thiscall
FMassArchetypeSharedFragmentValues::Add
          (FMassArchetypeSharedFragmentValues *this,FSharedStruct *param_1)

{
  FSharedStruct local_18;
  
  Add_GetRef(this,&local_18,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.StructMemoryPtr.SharedReferenceCount.ReferenceController);
  return;
}

// ContainsType @ 14711b890

bool __thiscall
FMassArchetypeSharedFragmentValues::ContainsType
          (FMassArchetypeSharedFragmentValues *this,UScriptStruct *param_1)

{
  bool bVar1;
  int iVar2;
  UScriptStruct *pUVar3;
  UStruct *pUVar4;
  FConstBitSetContainer *this_00;
  UScriptStruct *local_res10 [3];
  
  if (param_1 == (UScriptStruct *)0x0) {
    return false;
  }
  pUVar3 = FMassSharedFragment::StaticStruct();
  if (pUVar3 != (UScriptStruct *)0x0) {
    iVar2 = (int)pUVar3->_padding_;
    if (((int)param_1->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar2 * 8) != &pUVar3->_padding_
       )) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      pUVar4 = TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
               ::GetBaseUStruct();
      if (pUVar4 == (UStruct *)0x0) {
LAB_14711b909:
        local_res10[0] = param_1;
        bVar1 = `TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                ::Contains'::__l6::<lambda_1>::operator()(local_res10);
        if (!bVar1) {
          return false;
        }
      }
      else {
        iVar2 = (int)pUVar4->_padding_;
        if (((int)param_1->_padding_ < iVar2) ||
           ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar2 * 8) !=
            &pUVar4->_padding_)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) goto LAB_14711b909;
      }
      iVar2 = FStructTracker::FindStructTypeIndex
                        (&FMassSharedFragmentBitSetStructTrackerWrapper::StructTracker,
                         (UStruct *)param_1);
      if (iVar2 == -1) {
        return false;
      }
      this_00 = (FConstBitSetContainer *)&this->SharedFragmentBitSet;
      goto LAB_14711b9cc;
    }
  }
  pUVar3 = FMassConstSharedFragment::StaticStruct();
  if (pUVar3 == (UScriptStruct *)0x0) {
    return false;
  }
  iVar2 = (int)pUVar3->_padding_;
  if (((int)param_1->_padding_ < iVar2) ||
     ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar2 * 8) != &pUVar3->_padding_))
  {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return false;
  }
  pUVar4 = TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
           ::GetBaseUStruct();
  if (pUVar4 == (UStruct *)0x0) {
LAB_14711b9a1:
    local_res10[0] = param_1;
    bVar1 = `TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
            ::Contains'::__l6::<lambda_1>::operator()(local_res10);
    if (!bVar1) {
      return false;
    }
  }
  else {
    iVar2 = (int)pUVar4->_padding_;
    if (((int)param_1->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar2 * 8) != &pUVar4->_padding_
       )) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_14711b9a1;
  }
  iVar2 = FStructTracker::FindStructTypeIndex
                    (&FMassConstSharedFragmentBitSetStructTrackerWrapper::StructTracker,
                     (UStruct *)param_1);
  if (iVar2 == -1) {
    return false;
  }
  this_00 = (FConstBitSetContainer *)&this->ConstSharedFragmentBitSet;
LAB_14711b9cc:
  bVar1 = FStructTypeBitSet::FConstBitSetContainer::Contains(this_00,iVar2);
  if (!bVar1) {
    return false;
  }
  return true;
}

// GetConstSharedFragmentBitSet @ 14711fff0

TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
* __thiscall
FMassArchetypeSharedFragmentValues::GetConstSharedFragmentBitSet
          (FMassArchetypeSharedFragmentValues *this)

{
  return &this->ConstSharedFragmentBitSet;
}

// GetConstSharedFragmentStruct @ 147120000

FConstSharedStruct * __thiscall
FMassArchetypeSharedFragmentValues::GetConstSharedFragmentStruct
          (FMassArchetypeSharedFragmentValues *this,FConstSharedStruct *__return_storage_ptr__,
          UScriptStruct *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FStructSharedMemory *pFVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  FConstSharedStruct *pFVar7;
  uint uVar8;
  UScriptStruct *pUVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  
  pUVar9 = (UScriptStruct *)0x0;
  pFVar2 = (this->ConstSharedFragments).AllocatorInstance.Data;
  iVar1 = (this->ConstSharedFragments).ArrayNum;
  pFVar11 = pFVar2;
  do {
    if (pFVar11 == pFVar2 + (longlong)iVar1 * 0x10) {
LAB_14712004f:
      (__return_storage_ptr__->StructMemoryPtr).Object = (FStructSharedMemory *)0x0;
      (__return_storage_ptr__->StructMemoryPtr).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
LAB_147120056:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pUVar9);
      return __return_storage_ptr__;
    }
    pUVar6 = pUVar9;
    if (*(longlong **)pFVar11 != (longlong *)0x0) {
      pUVar6 = (UScriptStruct *)**(longlong **)pFVar11;
    }
    if (pUVar6 == param_1) {
      uVar10 = (uint)((longlong)pFVar11 - (longlong)pFVar2 >> 4);
      if (uVar10 != 0xffffffff) {
        uVar8 = 0;
        if ((int)uVar10 < iVar1) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar7 = (FConstSharedStruct *)(*pcVar4)();
          return pFVar7;
        }
        pFVar2 = (this->ConstSharedFragments).AllocatorInstance.Data;
        pFVar3 = *(FStructSharedMemory **)(pFVar2 + (longlong)(int)uVar10 * 0x10);
        pUVar9 = *(UScriptStruct **)(pFVar2 + (longlong)(int)uVar10 * 0x10 + 8);
        if (pUVar9 != (UScriptStruct *)0x0) {
          LOCK();
          *(atomic<int> *)&pUVar9->_padding_ =
               (atomic<int>)((int)*(atomic<int> *)&pUVar9->_padding_ + 1);
          UNLOCK();
        }
        (__return_storage_ptr__->StructMemoryPtr).Object = pFVar3;
        (__return_storage_ptr__->StructMemoryPtr).SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)pUVar9;
        if (pUVar9 != (UScriptStruct *)0x0) {
          LOCK();
          *(atomic<int> *)&pUVar9->_padding_ =
               (atomic<int>)((int)*(atomic<int> *)&pUVar9->_padding_ + 1);
          UNLOCK();
        }
        goto LAB_147120056;
      }
      goto LAB_14712004f;
    }
    pFVar11 = pFVar11 + 0x10;
  } while( true );
}

// GetSharedFragmentBitSet @ 147121bb0

TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct> *
__thiscall
FMassArchetypeSharedFragmentValues::GetSharedFragmentBitSet
          (FMassArchetypeSharedFragmentValues *this)

{
  return &this->SharedFragmentBitSet;
}

// GetSharedFragmentStruct @ 147121bc0

FSharedStruct * __thiscall
FMassArchetypeSharedFragmentValues::GetSharedFragmentStruct
          (FMassArchetypeSharedFragmentValues *this,FSharedStruct *__return_storage_ptr__,
          UScriptStruct *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FStructSharedMemory *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  UScriptStruct *pUVar8;
  FSharedStruct *pFVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  
  pFVar2 = (this->SharedFragments).AllocatorInstance.Data;
  iVar1 = (this->SharedFragments).ArrayNum;
  pFVar11 = pFVar2;
  do {
    if (pFVar11 == pFVar2 + (longlong)iVar1 * 0x10) {
LAB_147121c09:
      (__return_storage_ptr__->StructMemoryPtr).Object = (FStructSharedMemory *)0x0;
      (__return_storage_ptr__->StructMemoryPtr).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
LAB_147121c18:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      return __return_storage_ptr__;
    }
    pUVar8 = (UScriptStruct *)0x0;
    if (*(longlong **)pFVar11 != (longlong *)0x0) {
      pUVar8 = (UScriptStruct *)**(longlong **)pFVar11;
    }
    if (pUVar8 == param_1) {
      uVar10 = (uint)((longlong)pFVar11 - (longlong)pFVar2 >> 4);
      if (uVar10 != 0xffffffff) {
        uVar7 = 0;
        if ((int)uVar10 < iVar1) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar9 = (FSharedStruct *)(*pcVar5)();
          return pFVar9;
        }
        pFVar2 = (this->SharedFragments).AllocatorInstance.Data;
        pTVar3 = *(TReferenceControllerBase<1> **)(pFVar2 + (longlong)(int)uVar10 * 0x10 + 8);
        pFVar4 = *(FStructSharedMemory **)(pFVar2 + (longlong)(int)uVar10 * 0x10);
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        (__return_storage_ptr__->StructMemoryPtr).Object = pFVar4;
        (__return_storage_ptr__->StructMemoryPtr).SharedReferenceCount.ReferenceController = pTVar3;
        goto LAB_147121c18;
      }
      goto LAB_147121c09;
    }
    pFVar11 = pFVar11 + 0x10;
  } while( true );
}

// HasExactConstSharedFragmentTypesMatch @ 1471221e0

bool __thiscall
FMassArchetypeSharedFragmentValues::HasExactConstSharedFragmentTypesMatch
          (FMassArchetypeSharedFragmentValues *this,
          TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
          *param_1)

{
  bool bVar1;
  
  bVar1 = TBitArray<FDefaultBitArrayAllocator>::CompareSetBits<FDefaultBitArrayAllocator>
                    ((TBitArray<FDefaultBitArrayAllocator> *)&this->ConstSharedFragmentBitSet,
                     (TBitArray<FDefaultBitArrayAllocator> *)param_1,false);
  return bVar1;
}

// HasExactSharedFragmentTypesMatch @ 147122200

bool __thiscall
FMassArchetypeSharedFragmentValues::HasExactSharedFragmentTypesMatch
          (FMassArchetypeSharedFragmentValues *this,
          TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
          *param_1)

{
  bool bVar1;
  
  bVar1 = TBitArray<FDefaultBitArrayAllocator>::CompareSetBits<FDefaultBitArrayAllocator>
                    ((TBitArray<FDefaultBitArrayAllocator> *)&this->SharedFragmentBitSet,
                     (TBitArray<FDefaultBitArrayAllocator> *)param_1,false);
  return bVar1;
}

// Reset @ 14719bc00

void __thiscall FMassArchetypeSharedFragmentValues::Reset(FMassArchetypeSharedFragmentValues *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  this->HashCache = 0xffffffff;
  this->bSorted = false;
  piVar1 = &(this->ConstSharedFragments).ArrayMax;
  *(undefined4 *)&(this->SharedFragmentBitSet).field_0x18 = 0;
  *(undefined4 *)&(this->ConstSharedFragmentBitSet).field_0x18 = 0;
  pFVar3 = (this->ConstSharedFragments).AllocatorInstance.Data;
  iVar2 = (this->ConstSharedFragments).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<FConstSharedStruct,int>((FConstSharedStruct *)pFVar3,iVar2);
    (this->ConstSharedFragments).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->ConstSharedFragments).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FConstSharedStruct,int>((FConstSharedStruct *)pFVar3,iVar2);
    (this->ConstSharedFragments).ArrayNum = 0;
  }
  pFVar3 = (this->SharedFragments).AllocatorInstance.Data;
  piVar1 = &(this->SharedFragments).ArrayMax;
  iVar2 = (this->SharedFragments).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<FSharedStruct,int>((FSharedStruct *)pFVar3,iVar2);
    (this->SharedFragments).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->SharedFragments).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FSharedStruct,int>((FSharedStruct *)pFVar3,iVar2);
    (this->SharedFragments).ArrayNum = 0;
  }
  return;
}

// Sort @ 1471ab8b0

void __thiscall FMassArchetypeSharedFragmentValues::Sort(FMassArchetypeSharedFragmentValues *this)

{
  FIdentityFunctor local_res8 [32];
  
  if (this->bSorted == false) {
    AlgoImpl::
    IntroSortInternal<FConstSharedStruct,int,FIdentityFunctor,TDereferenceWrapper<FConstSharedStruct,FStructTypeSortOperator>_>
              ((FConstSharedStruct *)(this->ConstSharedFragments).AllocatorInstance.Data,
               (this->ConstSharedFragments).ArrayNum,local_res8[0],
               (FStructTypeSortOperator *)local_res8);
    AlgoImpl::
    IntroSortInternal<FSharedStruct,int,FIdentityFunctor,TDereferenceWrapper<FSharedStruct,FStructTypeSortOperator>_>
              ((FSharedStruct *)(this->SharedFragments).AllocatorInstance.Data,
               (this->SharedFragments).ArrayNum,local_res8[0],(FStructTypeSortOperator *)local_res8)
    ;
    this->bSorted = true;
  }
  return;
}

