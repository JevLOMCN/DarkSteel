// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 11

// StaticClass @ 14e031df0

UClass * __cdecl UGroomHairGroupsMapping::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGroomHairGroupsMapping.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsCore",L"GroomHairGroupsMapping",
               &Z_Registration_Info_UClass_UGroomHairGroupsMapping.InnerSingleton,
               StaticRegisterNativesUGroomHairGroupsMapping,0x78,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UGroomHairGroupsMapping>,
               InternalVTableHelperCtorCaller<UGroomHairGroupsMapping>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGroomHairGroupsMapping.InnerSingleton;
}

// UGroomHairGroupsMapping @ 14e03de90

UGroomHairGroupsMapping * __thiscall
UGroomHairGroupsMapping::UGroomHairGroupsMapping
          (UGroomHairGroupsMapping *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UGroomHairGroupsMapping__6B_;
  (this->OldGroupNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OldGroupNames).ArrayNum = 0;
  (this->OldGroupNames).ArrayMax = 0;
  (this->NewGroupNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewGroupNames).ArrayNum = 0;
  (this->NewGroupNames).ArrayMax = 0;
  (this->OldToNewGroupIndexMapping).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OldToNewGroupIndexMapping).ArrayNum = 0;
  (this->OldToNewGroupIndexMapping).ArrayMax = 0;
  (this->NewToOldGroupIndexMapping).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewToOldGroupIndexMapping).ArrayNum = 0;
  (this->NewToOldGroupIndexMapping).ArrayMax = 0;
  (this->CachedOldGroupNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedOldGroupNames).ArrayNum = 0;
  (this->CachedOldGroupNames).ArrayMax = 0;
  return this;
}

// UGroomHairGroupsMapping @ 14e03def0

UGroomHairGroupsMapping * __thiscall
UGroomHairGroupsMapping::UGroomHairGroupsMapping
          (UGroomHairGroupsMapping *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UGroomHairGroupsMapping__6B_;
  (this->OldGroupNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OldGroupNames).ArrayNum = 0;
  (this->OldGroupNames).ArrayMax = 0;
  (this->NewGroupNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewGroupNames).ArrayNum = 0;
  (this->NewGroupNames).ArrayMax = 0;
  (this->OldToNewGroupIndexMapping).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OldToNewGroupIndexMapping).ArrayNum = 0;
  (this->OldToNewGroupIndexMapping).ArrayMax = 0;
  (this->NewToOldGroupIndexMapping).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewToOldGroupIndexMapping).ArrayNum = 0;
  (this->NewToOldGroupIndexMapping).ArrayMax = 0;
  (this->CachedOldGroupNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedOldGroupNames).ArrayNum = 0;
  (this->CachedOldGroupNames).ArrayMax = 0;
  return this;
}

// ~UGroomHairGroupsMapping @ 14e03eee0

void __thiscall UGroomHairGroupsMapping::~UGroomHairGroupsMapping(UGroomHairGroupsMapping *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UGroomHairGroupsMapping__6B_;
  DestructItems<TSharedPtr<FString,1>,int>
            ((TSharedPtr<FString,1> *)(this->CachedOldGroupNames).AllocatorInstance.Data,
             (this->CachedOldGroupNames).ArrayNum);
  pFVar1 = (this->CachedOldGroupNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NewToOldGroupIndexMapping).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OldToNewGroupIndexMapping).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NewGroupNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OldGroupNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetOldGroupNames @ 14e050d50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_> * __thiscall
UGroomHairGroupsMapping::GetOldGroupNames(UGroomHairGroupsMapping *this)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_> *pTVar9;
  FString *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  uint uVar12;
  TReferenceControllerBase<1> *pTVar13;
  FScriptContainerElement *pFVar14;
  TReferenceControllerBase<1> *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  TReferenceControllerBase<1> *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  FString local_48 [2];
  
  pTVar5 = _UNK_150651568;
  pTVar4 = ___xmm_00000000000000000000000000000010;
  if ((this->CachedOldGroupNames).ArrayNum != 0) {
    return &this->CachedOldGroupNames;
  }
  uVar2 = (this->OldGroupNames).ArrayNum;
  uVar12 = 0;
  if (uVar2 != 0) {
    do {
      pTVar13 = (TReferenceControllerBase<1> *)0x0;
      uVar7 = 0;
      if ((int)uVar12 < (this->OldGroupNames).ArrayNum) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar9;
      }
      pFVar10 = ::FName::ToString((FName *)((this->OldGroupNames).AllocatorInstance.Data +
                                           (longlong)(int)uVar12 * 8),local_48);
      pTVar11 = ::operator_new(0x20);
      if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
        local_68 = pTVar4;
        pTStack_60 = pTVar5;
      }
      else {
        pTVar11[1]._padding_ = 0;
        pTVar11->SharedReferenceCount = (atomic<int>)0x1;
        pTVar11->WeakReferenceCount = (atomic<int>)0x1;
        pTVar11->_padding_ =
             (longlong)
             &___7__TIntrusiveReferenceController_VFString___00_SharedPointerInternals__6B_;
        pTVar11[1]._padding_ = (longlong)(pFVar10->Data).AllocatorInstance.Data;
        (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        pTVar11[1].SharedReferenceCount = (atomic<int>)(pFVar10->Data).ArrayNum;
        pTVar11[1].WeakReferenceCount = (atomic<int>)(pFVar10->Data).ArrayMax;
        (pFVar10->Data).ArrayNum = 0;
        (pFVar10->Data).ArrayMax = 0;
        if ((pTVar11 + 1 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar9;
        }
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
        pTVar13 = pTVar11;
        local_68 = pTVar11 + 1;
        pTStack_60 = pTVar11;
      }
      pFVar14 = (this->CachedOldGroupNames).AllocatorInstance.Data;
      if (((pFVar14 <= (FScriptContainerElement *)&local_68) &&
          ((FScriptContainerElement *)&local_68 <
           pFVar14 + (longlong)(this->CachedOldGroupNames).ArrayMax * 0x10)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar9;
      }
      iVar8 = (this->CachedOldGroupNames).ArrayNum;
      if (iVar8 == (this->CachedOldGroupNames).ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this->CachedOldGroupNames).AllocatorInstance,
                           &(this->CachedOldGroupNames).ArrayMax);
      }
      (this->CachedOldGroupNames).ArrayNum = iVar8 + 1;
      pFVar14 = (this->CachedOldGroupNames).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
      *(TReferenceControllerBase<1> **)pFVar14 = local_68;
      *(TReferenceControllerBase<1> **)(pFVar14 + 8) = pTStack_60;
      pTStack_60 = (TReferenceControllerBase<1> *)0x0;
      local_68 = (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
      if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar2);
  }
  pTVar13 = (TReferenceControllerBase<1> *)0x0;
  pTVar11 = ::operator_new(0x20);
  if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
    local_58 = pTVar4;
    pTStack_50 = pTVar5;
  }
  else {
    pTVar11->SharedReferenceCount = (atomic<int>)0x1;
    pTVar11->WeakReferenceCount = (atomic<int>)0x1;
    pTVar11->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController_VFString___00_SharedPointerInternals__6B_;
    ::FString::FString((FString *)(pTVar11 + 1),L"Default");
    local_58 = pTVar11 + 1;
    if ((local_58 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      pTVar9 = (TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar9;
    }
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
    pTVar13 = pTVar11;
    pTStack_50 = pTVar11;
  }
  pFVar14 = (this->CachedOldGroupNames).AllocatorInstance.Data;
  if (((pFVar14 <= (FScriptContainerElement *)&local_58) &&
      ((FScriptContainerElement *)&local_58 <
       pFVar14 + (longlong)(this->CachedOldGroupNames).ArrayMax * 0x10)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar3 = (code *)swi(3);
    pTVar9 = (TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
    return pTVar9;
  }
  iVar8 = (this->CachedOldGroupNames).ArrayNum;
  piVar1 = &(this->CachedOldGroupNames).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->CachedOldGroupNames).AllocatorInstance,piVar1);
  }
  (this->CachedOldGroupNames).ArrayNum = iVar8 + 1;
  pFVar14 = (this->CachedOldGroupNames).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
  *(TReferenceControllerBase<1> **)pFVar14 = local_58;
  *(TReferenceControllerBase<1> **)(pFVar14 + 8) = pTStack_50;
  pTStack_50 = (TReferenceControllerBase<1> *)0x0;
  local_58 = (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  return &this->CachedOldGroupNames;
}

// GetPrivateStaticClass @ 14e052210

UClass * __cdecl UGroomHairGroupsMapping::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGroomHairGroupsMapping.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsCore",L"GroomHairGroupsMapping",
               &Z_Registration_Info_UClass_UGroomHairGroupsMapping.InnerSingleton,
               StaticRegisterNativesUGroomHairGroupsMapping,0x78,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UGroomHairGroupsMapping>,
               InternalVTableHelperCtorCaller<UGroomHairGroupsMapping>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGroomHairGroupsMapping.InnerSingleton;
}

// HasValidMapping @ 14e0546c0

bool __thiscall UGroomHairGroupsMapping::HasValidMapping(UGroomHairGroupsMapping *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->NewToOldGroupIndexMapping).AllocatorInstance.Data;
  iVar2 = (this->NewToOldGroupIndexMapping).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 4;
  while( true ) {
    if ((this->NewToOldGroupIndexMapping).ArrayNum != iVar2) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(int *)pFVar3 != -1) {
      return true;
    }
    pFVar3 = pFVar3 + 4;
  }
  return false;
}

// Map @ 14e0590e0

void __thiscall
UGroomHairGroupsMapping::Map
          (UGroomHairGroupsMapping *this,FHairDescriptionGroups *param_1,
          FHairDescriptionGroups *param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  pFVar9 = (param_2->HairGroups).AllocatorInstance.Data;
  iVar2 = (param_2->HairGroups).ArrayNum;
  pFVar8 = pFVar9 + (longlong)iVar2 * 0x318;
  pFVar10 = pFVar9 + 8;
  while( true ) {
    if ((param_2->HairGroups).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FHairDescriptionGroup_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar9 == pFVar8) break;
    pFVar3 = (this->NewGroupNames).AllocatorInstance.Data;
    if ((pFVar3 <= pFVar10) && (pFVar10 < pFVar3 + (longlong)(this->NewGroupNames).ArrayMax * 8)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar7 = (this->NewGroupNames).ArrayNum;
    piVar1 = &(this->NewGroupNames).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&(this->NewGroupNames).AllocatorInstance,piVar1);
    }
    (this->NewGroupNames).ArrayNum = iVar7 + 1;
    pFVar9 = pFVar9 + 0x318;
    uVar4 = *(undefined8 *)pFVar10;
    pFVar10 = pFVar10 + 0x318;
    *(undefined8 *)((this->NewGroupNames).AllocatorInstance.Data + (longlong)iVar7 * 8) = uVar4;
  }
  pFVar9 = (param_1->HairGroups).AllocatorInstance.Data;
  iVar2 = (param_1->HairGroups).ArrayNum;
  pFVar10 = pFVar9 + 8;
  pFVar8 = pFVar9 + (longlong)iVar2 * 0x318;
  while( true ) {
    if ((param_1->HairGroups).ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FHairDescriptionGroup_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar9 == pFVar8) break;
    pFVar3 = (this->OldGroupNames).AllocatorInstance.Data;
    if ((pFVar3 <= pFVar10) && (pFVar10 < pFVar3 + (longlong)(this->OldGroupNames).ArrayMax * 8)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar7 = (this->OldGroupNames).ArrayNum;
    piVar1 = &(this->OldGroupNames).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&(this->OldGroupNames).AllocatorInstance,piVar1);
    }
    (this->OldGroupNames).ArrayNum = iVar7 + 1;
    pFVar9 = pFVar9 + 0x318;
    uVar4 = *(undefined8 *)pFVar10;
    pFVar10 = pFVar10 + 0x318;
    *(undefined8 *)((this->OldGroupNames).AllocatorInstance.Data + (longlong)iVar7 * 8) = uVar4;
  }
  RemapHairDescriptionGroups(param_1,param_2,&this->OldToNewGroupIndexMapping);
  RemapHairDescriptionGroups(param_2,param_1,&this->NewToOldGroupIndexMapping);
  return;
}

// RemapHairDescriptionGroups @ 14e059c70

void __cdecl
UGroomHairGroupsMapping::RemapHairDescriptionGroups
          (FHairDescriptionGroups *param_1,FHairDescriptionGroups *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined4 uVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res20 [8];
  undefined1 local_48 [4];
  undefined4 local_44;
  uint local_40;
  
  uVar2 = (param_1->HairGroups).ArrayNum;
  uVar7 = (ulonglong)uVar2;
  local_44 = 0xffffffff;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar7);
  }
  piVar1 = &param_3->ArrayMax;
  param_3->ArrayNum = 0;
  if (*piVar1 != uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar2,&param_3->AllocatorInstance,0,piVar1);
  }
  if (0 < (int)uVar2) {
    do {
      pFVar10 = (param_3->AllocatorInstance).Data;
      if ((pFVar10 <= (FScriptContainerElement *)&local_44) &&
         ((FScriptContainerElement *)&local_44 < pFVar10 + (longlong)*piVar1 * 4)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar5 = param_3->ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_3->AllocatorInstance,piVar1);
      }
      param_3->ArrayNum = iVar5 + 1;
      *(undefined4 *)((param_3->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_44;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  local_40 = (param_1->HairGroups).ArrayNum;
  uVar7 = (ulonglong)(int)local_40;
  pFVar10 = (param_1->HairGroups).AllocatorInstance.Data;
  pFVar12 = pFVar10 + uVar7 * 0x318;
  do {
    if ((param_1->HairGroups).ArrayNum != (int)uVar7) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FHairDescriptionGroup_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (pFVar10 == pFVar12) {
      return;
    }
    iVar5 = (param_2->HairGroups).ArrayNum;
    uVar11 = 0xffffffff;
    pFVar8 = (param_2->HairGroups).AllocatorInstance.Data;
    pFVar9 = pFVar8 + (longlong)iVar5 * 0x318;
    while( true ) {
      if ((param_2->HairGroups).ArrayNum != iVar5) {
        local_48[0] = 0;
        `TCheckedPointerIterator<FHairDescriptionGroup_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_48);
      }
      if (pFVar8 == pFVar9) goto LAB_14e059e10;
      if (*(longlong *)(pFVar8 + 8) == *(longlong *)(pFVar10 + 8)) break;
      pFVar8 = pFVar8 + 0x318;
    }
    uVar11 = *(undefined4 *)pFVar8;
LAB_14e059e10:
    uVar2 = *(uint *)pFVar10;
    uVar6 = 0;
    if ((int)uVar2 < param_3->ArrayNum) {
      uVar6 = ~uVar2 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar10 = pFVar10 + 0x318;
    uVar7 = (ulonglong)local_40;
    *(undefined4 *)((param_3->AllocatorInstance).Data + (longlong)(int)uVar2 * 4) = uVar11;
  } while( true );
}

// SetIndex @ 14e063ba0

void __thiscall
UGroomHairGroupsMapping::SetIndex(UGroomHairGroupsMapping *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  
  bVar3 = true;
  if ((-1 < param_1) && (param_1 < (this->NewGroupNames).ArrayNum)) {
    if ((param_2 < 0) || ((this->OldGroupNames).ArrayNum <= param_2)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    iVar5 = -1;
    if (bVar2) {
      iVar5 = param_2;
    }
    uVar4 = 0;
    if (param_1 < (this->NewToOldGroupIndexMapping).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(int *)((this->NewToOldGroupIndexMapping).AllocatorInstance.Data + (longlong)param_1 * 4) =
         iVar5;
  }
  if ((-1 < param_2) && (param_2 < (this->OldGroupNames).ArrayNum)) {
    if ((param_1 < 0) || ((this->NewGroupNames).ArrayNum <= param_1)) {
      bVar3 = false;
    }
    iVar5 = -1;
    if (bVar3) {
      iVar5 = param_1;
    }
    uVar4 = 0;
    if (param_2 < (this->OldToNewGroupIndexMapping).ArrayNum) {
      uVar4 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(int *)((this->OldToNewGroupIndexMapping).AllocatorInstance.Data + (longlong)param_2 * 4) =
         iVar5;
  }
  return;
}

// StaticRegisterNativesUGroomHairGroupsMapping @ 14e064ca0

void __cdecl UGroomHairGroupsMapping::StaticRegisterNativesUGroomHairGroupsMapping(void)

{
  return;
}

