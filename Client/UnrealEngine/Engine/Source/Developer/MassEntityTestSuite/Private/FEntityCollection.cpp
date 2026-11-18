// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 11

// AppendCollection<FMassArchetypeEntityCollection_&> @ 1470d7660

void __thiscall
UE::Mass::FEntityCollection::AppendCollection<FMassArchetypeEntityCollection_&>
          (FEntityCollection *this,FMassArchetypeEntityCollection *param_1)

{
  int iVar1;
  bool bVar2;
  
  if (((param_1->Ranges).ArrayNum != 0) ||
     ((param_1->Archetype).ArchetypeHandle.DataPtr.Object != (FMassArchetypeData *)0x0)) {
    iVar1 = (this->EntityHandles).ArrayNum;
    bVar2 = FMassArchetypeEntityCollection::ExportEntityHandles(param_1,&this->EntityHandles);
    if (bVar2) {
      ConditionallyStoreCollection<FMassArchetypeEntityCollection_&>(this,iVar1 == 0,param_1);
    }
  }
  return;
}

// AppendCollection<FMassArchetypeEntityCollection> @ 1470d76c0

void __thiscall
UE::Mass::FEntityCollection::AppendCollection<FMassArchetypeEntityCollection>
          (FEntityCollection *this,FMassArchetypeEntityCollection *param_1)

{
  int iVar1;
  bool bVar2;
  
  if (((param_1->Ranges).ArrayNum != 0) ||
     ((param_1->Archetype).ArchetypeHandle.DataPtr.Object != (FMassArchetypeData *)0x0)) {
    iVar1 = (this->EntityHandles).ArrayNum;
    bVar2 = FMassArchetypeEntityCollection::ExportEntityHandles(param_1,&this->EntityHandles);
    if (bVar2) {
      ConditionallyStoreCollection<FMassArchetypeEntityCollection>(this,iVar1 == 0,param_1);
    }
  }
  return;
}

// ConditionallyStoreCollection<FMassArchetypeEntityCollection_&> @ 1470d7c30

void __thiscall
UE::Mass::FEntityCollection::ConditionallyStoreCollection<FMassArchetypeEntityCollection_&>
          (FEntityCollection *this,bool param_1,FMassArchetypeEntityCollection *param_2)

{
  int *piVar1;
  TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong lVar3;
  int iVar4;
  FMassArchetypeEntityCollection *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  FIdentityFunctor local_res10 [8];
  
  if ((param_1) || ((this->CachedCollections).ArrayNum != 0)) {
    iVar4 = (this->CachedCollections).ArrayNum;
    pTVar2 = &this->CachedCollections;
    iVar10 = 0;
    if (iVar4 != 0) {
      uVar11 = 0;
      if ((int)(iVar4 - 1U) < iVar4) {
        uVar11 = ~(iVar4 - 1U) >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar10 = (this->CachedCollections).ArrayNum;
      pFVar6 = (pTVar2->AllocatorInstance).Data;
      if ((*(FMassArchetypeData **)(pFVar6 + ((longlong)iVar10 + -1) * 0x28 + 0x10) ==
           (param_2->Archetype).ArchetypeHandle.DataPtr.Object) &&
         (*(uint *)(pFVar6 + ((longlong)iVar10 + -1) * 0x28 + 0x20) ==
          (param_2->Archetype).HandleVersion)) {
        uVar11 = 0;
        if ((int)(iVar10 - 1U) < iVar10) {
          uVar11 = ~(iVar10 - 1U) >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar6 = (pTVar2->AllocatorInstance).Data;
        lVar3 = (longlong)(this->CachedCollections).ArrayNum * 5 + -5;
        iVar4 = *(int *)(pFVar6 + lVar3 * 8 + 8);
        pFVar5 = (FMassArchetypeEntityCollection *)(pFVar6 + lVar3 * 8);
        if ((((pFVar5->Archetype).ArchetypeHandle.DataPtr.Object !=
              (param_2->Archetype).ArchetypeHandle.DataPtr.Object) ||
            ((pFVar5->Archetype).HandleVersion != (param_2->Archetype).HandleVersion)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSameArchetype(Other)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassArchetypeTypes.h"
                               ,0x1a8,
                               L"Unable to merge two entity collections representing different archetypes"
                              ), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((pFVar5 == param_2) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(void*)this != (void*)&Source",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x96e,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar10 = (param_2->Ranges).ArrayNum;
        if (iVar10 != 0) {
          iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0xc,4,iVar10,(ForAnyElementType *)pFVar5,&(pFVar5->Ranges).ArrayNum,
                             &(pFVar5->Ranges).ArrayMax);
          memcpy((pFVar5->Ranges).AllocatorInstance.Data + (longlong)iVar9 * 0xc,
                 (param_2->Ranges).AllocatorInstance.Data,(longlong)iVar10 * 0xc);
        }
        if (iVar4 == 0) {
          return;
        }
        AlgoImpl::
        IntroSortInternal<FMassArchetypeEntityCollection::FArchetypeEntityRange,int,FIdentityFunctor,TDereferenceWrapper<FMassArchetypeEntityCollection::FArchetypeEntityRange,TLess<void>_>_>
                  ((FArchetypeEntityRange *)(pFVar5->Ranges).AllocatorInstance.Data,
                   (pFVar5->Ranges).ArrayNum,local_res10[0],(TLess<void> *)local_res10);
        return;
      }
    }
    if (iVar10 == (this->CachedCollections).ArrayMax) {
      iVar10 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x828,&pTVar2->AllocatorInstance,&(this->CachedCollections).ArrayMax);
      (this->CachedCollections).ArrayNum = iVar10;
    }
    (this->CachedCollections).ArrayNum = iVar10 + 1;
    FMassArchetypeEntityCollection::FMassArchetypeEntityCollection
              ((FMassArchetypeEntityCollection *)
               ((pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 0x28),param_2);
  }
  else {
    piVar1 = &(this->CachedCollections).ArrayMax;
    pFVar5 = (FMassArchetypeEntityCollection *)(this->CachedCollections).AllocatorInstance.Data;
    if (-1 < *piVar1) {
      DestructItems<FMassArchetypeEntityCollection,int>(pFVar5,0);
      (this->CachedCollections).ArrayNum = 0;
      return;
    }
    DestructItems<FMassArchetypeEntityCollection,int>(pFVar5,0);
    (this->CachedCollections).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&(this->CachedCollections).AllocatorInstance,0,piVar1);
      return;
    }
  }
  return;
}

// ConditionallyStoreCollection<FMassArchetypeEntityCollection> @ 1470d7ed0

void __thiscall
UE::Mass::FEntityCollection::ConditionallyStoreCollection<FMassArchetypeEntityCollection>
          (FEntityCollection *this,bool param_1,FMassArchetypeEntityCollection *param_2)

{
  int *piVar1;
  TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FMassArchetypeEntityCollection *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  FIdentityFunctor local_res10 [8];
  
  if ((param_1) || ((this->CachedCollections).ArrayNum != 0)) {
    iVar3 = (this->CachedCollections).ArrayNum;
    pTVar2 = &this->CachedCollections;
    iVar9 = 0;
    if (iVar3 != 0) {
      uVar10 = 0;
      if ((int)(iVar3 - 1U) < iVar3) {
        uVar10 = ~(iVar3 - 1U) >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = (this->CachedCollections).ArrayNum;
      pFVar5 = (pTVar2->AllocatorInstance).Data;
      if ((*(FMassArchetypeData **)(pFVar5 + ((longlong)iVar9 + -1) * 0x28 + 0x10) ==
           (param_2->Archetype).ArchetypeHandle.DataPtr.Object) &&
         (*(uint *)(pFVar5 + ((longlong)iVar9 + -1) * 0x28 + 0x20) ==
          (param_2->Archetype).HandleVersion)) {
        uVar10 = 0;
        if ((int)(iVar9 - 1U) < iVar9) {
          uVar10 = ~(iVar9 - 1U) >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar4 = (FMassArchetypeEntityCollection *)
                 ((pTVar2->AllocatorInstance).Data +
                 (longlong)(this->CachedCollections).ArrayNum * 0x28 + -0x28);
        iVar3 = (pFVar4->Ranges).ArrayNum;
        if ((((pFVar4->Archetype).ArchetypeHandle.DataPtr.Object !=
              (param_2->Archetype).ArchetypeHandle.DataPtr.Object) ||
            ((pFVar4->Archetype).HandleVersion != (param_2->Archetype).HandleVersion)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSameArchetype(Other)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassArchetypeTypes.h"
                               ,0x1a8,
                               L"Unable to merge two entity collections representing different archetypes"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((pFVar4 == param_2) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(void*)this != (void*)&Source",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x986,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar9 = (param_2->Ranges).ArrayNum;
        if (iVar9 != 0) {
          iVar8 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0xc,4,iVar9,(ForAnyElementType *)pFVar4,&(pFVar4->Ranges).ArrayNum,
                             &(pFVar4->Ranges).ArrayMax);
          memmove((pFVar4->Ranges).AllocatorInstance.Data + (longlong)iVar8 * 0xc,
                  (param_2->Ranges).AllocatorInstance.Data,(longlong)iVar9 * 0xc);
          (param_2->Ranges).ArrayNum = 0;
        }
        if (iVar3 == 0) {
          return;
        }
        AlgoImpl::
        IntroSortInternal<FMassArchetypeEntityCollection::FArchetypeEntityRange,int,FIdentityFunctor,TDereferenceWrapper<FMassArchetypeEntityCollection::FArchetypeEntityRange,TLess<void>_>_>
                  ((FArchetypeEntityRange *)(pFVar4->Ranges).AllocatorInstance.Data,
                   (pFVar4->Ranges).ArrayNum,local_res10[0],(TLess<void> *)local_res10);
        return;
      }
    }
    if (iVar9 == (this->CachedCollections).ArrayMax) {
      iVar9 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&pTVar2->AllocatorInstance,&(this->CachedCollections).ArrayMax);
      (this->CachedCollections).ArrayNum = iVar9;
    }
    (this->CachedCollections).ArrayNum = iVar9 + 1;
    pFVar5 = (pTVar2->AllocatorInstance).Data;
    *(undefined8 *)(pFVar5 + (longlong)iVar9 * 0x28) = 0;
    pFVar5 = pFVar5 + (longlong)iVar9 * 0x28;
    *(FScriptContainerElement **)pFVar5 = (param_2->Ranges).AllocatorInstance.Data;
    (param_2->Ranges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar5 + 8) = (param_2->Ranges).ArrayNum;
    *(int *)(pFVar5 + 0xc) = (param_2->Ranges).ArrayMax;
    (param_2->Ranges).ArrayNum = 0;
    (param_2->Ranges).ArrayMax = 0;
    *(FMassArchetypeData **)(pFVar5 + 0x10) = (param_2->Archetype).ArchetypeHandle.DataPtr.Object;
    *(TReferenceControllerBase<1> **)(pFVar5 + 0x18) =
         (param_2->Archetype).ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController;
    (param_2->Archetype).ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (param_2->Archetype).ArchetypeHandle.DataPtr.Object = (FMassArchetypeData *)0x0;
    *(uint *)(pFVar5 + 0x20) = (param_2->Archetype).HandleVersion;
  }
  else {
    piVar1 = &(this->CachedCollections).ArrayMax;
    pFVar4 = (FMassArchetypeEntityCollection *)(this->CachedCollections).AllocatorInstance.Data;
    if (-1 < *piVar1) {
      DestructItems<FMassArchetypeEntityCollection,int>(pFVar4,0);
      (this->CachedCollections).ArrayNum = 0;
      return;
    }
    DestructItems<FMassArchetypeEntityCollection,int>(pFVar4,0);
    (this->CachedCollections).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&(this->CachedCollections).AllocatorInstance,0,piVar1);
      return;
    }
  }
  return;
}

// FEntityCollection @ 1470f3650

FEntityCollection * __thiscall
UE::Mass::FEntityCollection::FEntityCollection(FEntityCollection *this)

{
  (this->EntityHandles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EntityHandles).ArrayNum = 0;
  (this->EntityHandles).ArrayMax = 0;
  (this->CachedCollections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedCollections).ArrayNum = 0;
  (this->CachedCollections).ArrayMax = 0;
  this->CollectionCreationDuplicatesHandling = NoDuplicates;
  return this;
}

// ~FEntityCollection @ 1470f8080

void __thiscall UE::Mass::FEntityCollection::~FEntityCollection(FEntityCollection *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FMassArchetypeEntityCollection,int>
            ((FMassArchetypeEntityCollection *)(this->CachedCollections).AllocatorInstance.Data,
             (this->CachedCollections).ArrayNum);
  pFVar1 = (this->CachedCollections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EntityHandles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// GetCachedPerArchetypeCollections @ 14711ff80

TArrayView<FMassArchetypeEntityCollection_const_,int> * __thiscall
UE::Mass::FEntityCollection::GetCachedPerArchetypeCollections
          (FEntityCollection *this,
          TArrayView<FMassArchetypeEntityCollection_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *pTVar4;
  
  iVar1 = (this->CachedCollections).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FMassArchetypeEntityCollection *)(this->CachedCollections).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetEntityHandlesView @ 1471201f0

TArrayView<FMassEntityHandle_const_,int> * __thiscall
UE::Mass::FEntityCollection::GetEntityHandlesView
          (FEntityCollection *this,TArrayView<FMassEntityHandle_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FMassEntityHandle_const_,int> *pTVar4;
  
  iVar1 = (this->EntityHandles).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FMassEntityHandle *)(this->EntityHandles).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FMassEntityHandle_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetUpToDatePerArchetypeCollections @ 147122160

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

TArrayView<FMassArchetypeEntityCollection_const_,int> * __thiscall
UE::Mass::FEntityCollection::GetUpToDatePerArchetypeCollections
          (FEntityCollection *this,
          TArrayView<FMassArchetypeEntityCollection_const_,int> *__return_storage_ptr__,
          FMassEntityManager *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *pTVar4;
  
  ConditionallyUpdate(this,param_1);
  iVar1 = (this->CachedCollections).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FMassArchetypeEntityCollection *)(this->CachedCollections).AllocatorInstance.Data;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// IsEmpty @ 147192860

bool __thiscall UE::Mass::FEntityCollection::IsEmpty(FEntityCollection *this)

{
  undefined1 local_res8 [32];
  
  if (((this->EntityHandles).ArrayNum == 0) && ((this->CachedCollections).ArrayNum != 0)) {
    `UE::Mass::FEntityCollection::IsEmpty'::__l2::<lambda_1>::operator()(local_res8);
  }
  return (this->EntityHandles).ArrayNum == 0;
}

// operator() @ 1505008d0

bool __thiscall `UE::Mass::FEntityCollection::IsEmpty'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3264219829799747476>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3264219829799747476>,
                       &`public:___cdecl_`public:_bool___cdecl_UE::Mass::FEntityCollection::IsEmpty(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

