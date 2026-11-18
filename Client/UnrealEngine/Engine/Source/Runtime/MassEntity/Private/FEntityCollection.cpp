// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 16

// ConditionallyStoreCollection<FMassArchetypeEntityCollection_const_&> @ 1471c0ac0

void __thiscall
UE::Mass::FEntityCollection::ConditionallyStoreCollection<FMassArchetypeEntityCollection_const_&>
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

// FEntityCollection @ 1471d5c90

FEntityCollection * __thiscall
UE::Mass::FEntityCollection::FEntityCollection
          (FEntityCollection *this,FMassArchetypeEntityCollection *param_1)

{
  bool bVar1;
  
  (this->EntityHandles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EntityHandles).ArrayNum = 0;
  (this->EntityHandles).ArrayMax = 0;
  (this->CachedCollections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedCollections).ArrayNum = 0;
  (this->CachedCollections).ArrayMax = 0;
  this->CollectionCreationDuplicatesHandling = NoDuplicates;
  if (((param_1->Ranges).ArrayNum != 0) ||
     ((param_1->Archetype).ArchetypeHandle.DataPtr.Object != (FMassArchetypeData *)0x0)) {
    bVar1 = FMassArchetypeEntityCollection::ExportEntityHandles(param_1,&this->EntityHandles);
    if (bVar1) {
      ConditionallyStoreCollection<FMassArchetypeEntityCollection>(this,true,param_1);
    }
  }
  return this;
}

// FEntityCollection @ 1471d5cf0

FEntityCollection * __thiscall
UE::Mass::FEntityCollection::FEntityCollection
          (FEntityCollection *this,FMassArchetypeEntityCollection *param_1)

{
  bool bVar1;
  
  (this->EntityHandles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EntityHandles).ArrayNum = 0;
  (this->EntityHandles).ArrayMax = 0;
  (this->CachedCollections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedCollections).ArrayNum = 0;
  (this->CachedCollections).ArrayMax = 0;
  this->CollectionCreationDuplicatesHandling = NoDuplicates;
  if (((param_1->Ranges).ArrayNum != 0) ||
     ((param_1->Archetype).ArchetypeHandle.DataPtr.Object != (FMassArchetypeData *)0x0)) {
    bVar1 = FMassArchetypeEntityCollection::ExportEntityHandles(param_1,&this->EntityHandles);
    if (bVar1) {
      ConditionallyStoreCollection<FMassArchetypeEntityCollection_const_&>(this,true,param_1);
    }
  }
  return this;
}

// FEntityCollection @ 1471d5d50

FEntityCollection * __thiscall
UE::Mass::FEntityCollection::FEntityCollection
          (FEntityCollection *this,TArrayView<FMassEntityHandle_const_,int> *param_1,
          FMassArchetypeEntityCollection *param_2)

{
  int *piVar1;
  TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FMassEntityHandle *_Src;
  int iVar4;
  
  iVar4 = param_1->ArrayNum;
  piVar1 = &(this->EntityHandles).ArrayMax;
  _Src = param_1->DataPtr;
  (this->EntityHandles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EntityHandles).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar4,0,(ForAnyElementType *)this,iVar4,piVar1);
    memcpy((this->EntityHandles).AllocatorInstance.Data,_Src,(longlong)iVar4 << 3);
  }
  pTVar2 = &this->CachedCollections;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->CachedCollections).ArrayNum = 0;
  (this->CachedCollections).ArrayMax = 0;
  this->CollectionCreationDuplicatesHandling = NoDuplicates;
  iVar4 = Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x828,&pTVar2->AllocatorInstance,&(this->CachedCollections).ArrayMax);
  (this->CachedCollections).ArrayNum = iVar4 + 1;
  pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)iVar4 * 0x28;
  *(undefined8 *)pFVar3 = 0;
  *(FScriptContainerElement **)pFVar3 = (param_2->Ranges).AllocatorInstance.Data;
  (param_2->Ranges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar3 + 8) = (param_2->Ranges).ArrayNum;
  *(int *)(pFVar3 + 0xc) = (param_2->Ranges).ArrayMax;
  (param_2->Ranges).ArrayNum = 0;
  (param_2->Ranges).ArrayMax = 0;
  *(FMassArchetypeData **)(pFVar3 + 0x10) = (param_2->Archetype).ArchetypeHandle.DataPtr.Object;
  *(TReferenceControllerBase<1> **)(pFVar3 + 0x18) =
       (param_2->Archetype).ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController;
  (param_2->Archetype).ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_2->Archetype).ArchetypeHandle.DataPtr.Object = (FMassArchetypeData *)0x0;
  *(uint *)(pFVar3 + 0x20) = (param_2->Archetype).HandleVersion;
  return this;
}

// FEntityCollection @ 1471d5e80

FEntityCollection * __thiscall
UE::Mass::FEntityCollection::FEntityCollection
          (FEntityCollection *this,TArrayView<FMassEntityHandle_const_,int> *param_1)

{
  int *piVar1;
  int iVar2;
  FMassEntityHandle *_Src;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &(this->EntityHandles).ArrayMax;
  _Src = param_1->DataPtr;
  (this->EntityHandles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EntityHandles).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
    memcpy((this->EntityHandles).AllocatorInstance.Data,_Src,(longlong)iVar2 << 3);
  }
  (this->CachedCollections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedCollections).ArrayNum = 0;
  (this->CachedCollections).ArrayMax = 0;
  this->CollectionCreationDuplicatesHandling = NoDuplicates;
  return this;
}

// AddHandle @ 1471ee5d0

void __thiscall
UE::Mass::FEntityCollection::AddHandle(FEntityCollection *this,FMassEntityHandle param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = (this->EntityHandles).ArrayNum;
  piVar1 = &(this->EntityHandles).ArrayMax;
  if (iVar2 == *piVar1) {
    iVar2 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,piVar1);
  }
  (this->EntityHandles).ArrayNum = iVar2 + 1;
  *(FMassEntityHandle *)((this->EntityHandles).AllocatorInstance.Data + (longlong)iVar2 * 8) =
       param_1;
  MarkDirty(this);
  this->CollectionCreationDuplicatesHandling = FoldDuplicates;
  return;
}

// AppendHandles @ 1471f29a0

void __thiscall
UE::Mass::FEntityCollection::AppendHandles
          (FEntityCollection *this,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
  Append<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&this->EntityHandles,param_1);
  MarkDirty(this);
  this->CollectionCreationDuplicatesHandling = FoldDuplicates;
  return;
}

// AppendHandles @ 1471f29d0

void __thiscall
UE::Mass::FEntityCollection::AppendHandles
          (FEntityCollection *this,TArrayView<FMassEntityHandle_const_,int> *param_1,
          FMassArchetypeEntityCollection *param_2)

{
  int iVar1;
  
  iVar1 = (this->EntityHandles).ArrayNum;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
  Append<TArrayView<FMassEntityHandle_const_,int>_&>(&this->EntityHandles,param_1);
  ConditionallyStoreCollection<FMassArchetypeEntityCollection>(this,iVar1 == 0,param_2);
  return;
}

// AppendHandles @ 1471f2a20

void __thiscall
UE::Mass::FEntityCollection::AppendHandles
          (FEntityCollection *this,TArrayView<FMassEntityHandle_const_,int> *param_1)

{
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
  Append<TArrayView<FMassEntityHandle_const_,int>_&>(&this->EntityHandles,param_1);
  MarkDirty(this);
  this->CollectionCreationDuplicatesHandling = FoldDuplicates;
  return;
}

// ConditionallyUpdate @ 147204e50

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UE::Mass::FEntityCollection::ConditionallyUpdate
          (FEntityCollection *this,FMassEntityManager *param_1)

{
  EDuplicatesHandling EVar1;
  int iVar2;
  FMassEntityHandle *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 local_res18 [8];
  undefined4 uStack_1c;
  TArrayView<FMassEntityHandle_const_,int> local_18;
  
  bVar5 = IsUpToDate(this);
  if (!bVar5) {
    if ((this->CachedCollections).ArrayNum != 0) {
      local_res18[0] = bVar5;
      `UE::Mass::FEntityCollection::ConditionallyUpdate'::__l5::<lambda_1>::operator()(local_res18);
    }
    pFVar3 = (FMassEntityHandle *)(this->EntityHandles).AllocatorInstance.Data;
    EVar1 = this->CollectionCreationDuplicatesHandling;
    iVar2 = (this->EntityHandles).ArrayNum;
    if (iVar2 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    local_18._12_4_ = uStack_1c;
    local_18.ArrayNum = iVar2;
    local_18.DataPtr = pFVar3;
    Utils::CreateEntityCollections(param_1,&local_18,EVar1,&this->CachedCollections);
  }
  return;
}

// IsUpToDate @ 147233860

bool __thiscall UE::Mass::FEntityCollection::IsUpToDate(FEntityCollection *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FMassArchetypeEntityCollection *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  iVar3 = (this->CachedCollections).ArrayNum;
  if ((iVar3 == 0) == ((this->EntityHandles).ArrayNum == 0)) {
    pFVar9 = (this->CachedCollections).AllocatorInstance.Data;
    if ((iVar3 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    pFVar2 = pFVar9 + (longlong)iVar3 * 0x28;
    do {
      if (pFVar9 == pFVar2) {
        return true;
      }
      if (*(int *)(pFVar9 + 8) == 0) {
        if (*(longlong *)(pFVar9 + 0x10) != 0) {
          lVar8 = *(longlong *)(pFVar9 + 0x10);
          goto LAB_147233920;
        }
      }
      else {
        lVar8 = *(longlong *)(pFVar9 + 0x10);
        if (lVar8 == 0) goto LAB_147233894;
LAB_147233920:
        if (*(int *)(lVar8 + 0x2b8) != *(int *)(pFVar9 + 0x20)) goto LAB_147233894;
      }
      pFVar9 = pFVar9 + 0x28;
    } while( true );
  }
  if (iVar3 != 0) {
    `UE::Mass::FEntityCollection::IsUpToDate'::__l5::<lambda_1>::operator()(local_res8);
  }
LAB_147233894:
  piVar1 = &(this->CachedCollections).ArrayMax;
  iVar3 = (this->CachedCollections).ArrayNum;
  pFVar4 = (FMassArchetypeEntityCollection *)(this->CachedCollections).AllocatorInstance.Data;
  if ((this->CachedCollections).ArrayMax < 0) {
    DestructItems<FMassArchetypeEntityCollection,int>(pFVar4,iVar3);
    (this->CachedCollections).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&(this->CachedCollections).AllocatorInstance,0,piVar1);
    }
    return false;
  }
  DestructItems<FMassArchetypeEntityCollection,int>(pFVar4,iVar3);
  (this->CachedCollections).ArrayNum = 0;
  return false;
}

// MarkDirty @ 1472350e0

void __thiscall UE::Mass::FEntityCollection::MarkDirty(FEntityCollection *this)

{
  int *piVar1;
  int iVar2;
  FMassArchetypeEntityCollection *pFVar3;
  
  iVar2 = (this->CachedCollections).ArrayNum;
  piVar1 = &(this->CachedCollections).ArrayMax;
  pFVar3 = (FMassArchetypeEntityCollection *)(this->CachedCollections).AllocatorInstance.Data;
  if (-1 < (this->CachedCollections).ArrayMax) {
    DestructItems<FMassArchetypeEntityCollection,int>(pFVar3,iVar2);
    (this->CachedCollections).ArrayNum = 0;
    return;
  }
  DestructItems<FMassArchetypeEntityCollection,int>(pFVar3,iVar2);
  (this->CachedCollections).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&(this->CachedCollections).AllocatorInstance,0,piVar1);
  }
  return;
}

// UpdateAndRemoveDuplicates @ 147253d60

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::FEntityCollection::UpdateAndRemoveDuplicates
          (FEntityCollection *this,FMassEntityManager *param_1,bool param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FMassArchetypeEntityCollection *pFVar4;
  FMassEntityHandle *pFVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  FMassArchetypeEntityCollection *this_00;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  undefined4 uStack_3c;
  TArrayView<FMassEntityHandle_const_,int> local_38;
  
  iVar2 = (this->EntityHandles).ArrayNum;
  if ((param_2) || (this->CollectionCreationDuplicatesHandling == FoldDuplicates)) {
    iVar3 = (this->CachedCollections).ArrayNum;
    piVar1 = &(this->CachedCollections).ArrayMax;
    pFVar4 = (FMassArchetypeEntityCollection *)(this->CachedCollections).AllocatorInstance.Data;
    if ((this->CachedCollections).ArrayMax < 0) {
      DestructItems<FMassArchetypeEntityCollection,int>(pFVar4,iVar3);
      (this->CachedCollections).ArrayNum = 0;
      if (*piVar1 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,0,&(this->CachedCollections).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FMassArchetypeEntityCollection,int>(pFVar4,iVar3);
      (this->CachedCollections).ArrayNum = 0;
    }
    pFVar5 = (FMassEntityHandle *)(this->EntityHandles).AllocatorInstance.Data;
    iVar3 = (this->EntityHandles).ArrayNum;
    if (iVar3 < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
    }
    local_38._12_4_ = uStack_3c;
    local_38.ArrayNum = iVar3;
    local_38.DataPtr = pFVar5;
    Utils::CreateEntityCollections(param_1,&local_38,FoldDuplicates,&this->CachedCollections);
    (this->EntityHandles).ArrayNum = 0;
    if ((this->EntityHandles).ArrayMax < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)this,0,&(this->EntityHandles).ArrayMax);
    }
    iVar3 = (this->CachedCollections).ArrayNum;
    this_00 = (FMassArchetypeEntityCollection *)(this->CachedCollections).AllocatorInstance.Data;
    pFVar4 = this_00 + iVar3;
    while( true ) {
      if ((this->CachedCollections).ArrayNum != iVar3) {
        `TCheckedPointerIterator<FMassArchetypeEntityCollection,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (this_00 == pFVar4) break;
      FMassArchetypeEntityCollection::ExportEntityHandles(this_00,&this->EntityHandles);
      this_00 = this_00 + 1;
    }
    this->CollectionCreationDuplicatesHandling = NoDuplicates;
    iVar3 = (this->EntityHandles).ArrayNum;
    if (iVar3 <= iVar2) goto LAB_147253eed;
    `UE::Mass::FEntityCollection::UpdateAndRemoveDuplicates'::__l5::<lambda_1>::operator()
              (local_res8);
  }
  iVar3 = (this->EntityHandles).ArrayNum;
LAB_147253eed:
  return iVar2 != iVar3;
}

// operator() @ 150503f00

bool __thiscall
`UE::Mass::FEntityCollection::ConditionallyUpdate'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7424020076883345372>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7424020076883345372>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150503fc0

bool __thiscall `UE::Mass::FEntityCollection::IsUpToDate'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7424020076883345309>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7424020076883345309>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505040a0

bool __thiscall
`UE::Mass::FEntityCollection::UpdateAndRemoveDuplicates'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7424020076883345318>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7424020076883345318>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

