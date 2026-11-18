// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 12

// AddCreatedEntitiesCollection<FMassArchetypeEntityCollection_const_&> @ 1471ba500

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

int __thiscall
UE::Mass::ObserverManager::FObserverLock::
AddCreatedEntitiesCollection<FMassArchetypeEntityCollection_const_&>
          (FObserverLock *this,FMassArchetypeEntityCollection *param_1)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  DWORD DVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  FEntityCollection local_48;
  
  DVar5 = GetCurrentThreadId();
  if (this->OwnerThreadId != DVar5) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("OwnerThreadId == FPlatformTLS::GetCurrentThreadId()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassObserverNotificationTypes.h"
                       ,0x14e,
                       L"%hs: all FObserverLock operations are expected to be run in a single thread"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
  }
  uVar2 = this->CreationNotificationIndex;
  iVar6 = (this->BufferedNotifications).ArrayNum;
  if (uVar2 == 0xffffffff) {
    this->CreationNotificationIndex = iVar6;
    local_48.EntityHandles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.EntityHandles.ArrayNum = 0;
    local_48.EntityHandles.ArrayMax = 0;
    local_48.CachedCollections.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.CachedCollections.ArrayNum = 0;
    local_48.CachedCollections.ArrayMax = 0;
    local_48.CollectionCreationDuplicatesHandling = NoDuplicates;
    if (((param_1->Ranges).ArrayNum != 0) ||
       ((param_1->Archetype).ArchetypeHandle.DataPtr.Object != (FMassArchetypeData *)0x0)) {
      bVar4 = FMassArchetypeEntityCollection::ExportEntityHandles(param_1,&local_48.EntityHandles);
      if (bVar4) {
        FEntityCollection::ConditionallyStoreCollection<FMassArchetypeEntityCollection_const_&>
                  (&local_48,true,param_1);
      }
    }
    iVar6 = (this->BufferedNotifications).ArrayNum;
    piVar1 = &(this->BufferedNotifications).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x8e0,&(this->BufferedNotifications).AllocatorInstance,piVar1);
    }
    (this->BufferedNotifications).ArrayNum = iVar6 + 1;
    pFVar7 = (this->BufferedNotifications).AllocatorInstance.Data + (longlong)iVar6 * 0xe0;
    *pFVar7 = (FScriptContainerElement)0x3;
    pFVar7[0xa8] = (FScriptContainerElement)0x0;
    *(undefined8 *)(pFVar7 + 0xb0) = 0;
    *(FScriptContainerElement **)(pFVar7 + 0xb0) = local_48.EntityHandles.AllocatorInstance.Data;
    local_48.EntityHandles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar7 + 0xb8) = local_48.EntityHandles.ArrayNum;
    *(int *)(pFVar7 + 0xbc) = local_48.EntityHandles.ArrayMax;
    local_48.EntityHandles.ArrayNum = 0;
    local_48.EntityHandles.ArrayMax = 0;
    *(undefined8 *)(pFVar7 + 0xc0) = 0;
    *(FScriptContainerElement **)(pFVar7 + 0xc0) = local_48.CachedCollections.AllocatorInstance.Data
    ;
    local_48.CachedCollections.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar7 + 200) = local_48.CachedCollections.ArrayNum;
    *(int *)(pFVar7 + 0xcc) = local_48.CachedCollections.ArrayMax;
    local_48.CachedCollections.ArrayNum = 0;
    local_48.CachedCollections.ArrayMax = 0;
    *(EDuplicatesHandling *)(pFVar7 + 0xd0) = local_48.CollectionCreationDuplicatesHandling;
    pFVar7[0xd8] = (FScriptContainerElement)0x0;
    DestructItems<FMassArchetypeEntityCollection,int>((FMassArchetypeEntityCollection *)0x0,0);
    if (local_48.CachedCollections.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.CachedCollections.AllocatorInstance.Data);
    }
    if (local_48.EntityHandles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.EntityHandles.AllocatorInstance.Data);
    }
  }
  else {
    uVar8 = 0;
    if ((int)uVar2 < iVar6) {
      uVar8 = ~uVar2 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
    }
    FBufferedNotification::AppendEntities<FMassArchetypeEntityCollection_const_&>
              ((FBufferedNotification *)
               ((this->BufferedNotifications).AllocatorInstance.Data + (longlong)(int)uVar2 * 0xe0),
               param_1);
  }
  return this->CreationNotificationIndex;
}

// AddNotification<FMassEntityHandle_&> @ 1471bac60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001471baebb) */
/* WARNING: Removing unreachable block (ram,0x0001471baecc) */
/* WARNING: Removing unreachable block (ram,0x0001471baef1) */
/* WARNING: Removing unreachable block (ram,0x0001471baef2) */
/* WARNING: Removing unreachable block (ram,0x0001471baf5e) */
/* WARNING: Removing unreachable block (ram,0x0001471baf0d) */
/* WARNING: Removing unreachable block (ram,0x0001471baf19) */
/* WARNING: Removing unreachable block (ram,0x0001471baf1e) */
/* WARNING: Removing unreachable block (ram,0x0001471baf2a) */
/* WARNING: Removing unreachable block (ram,0x0001471baf2f) */
/* WARNING: Removing unreachable block (ram,0x0001471baf3b) */
/* WARNING: Removing unreachable block (ram,0x0001471baf40) */
/* WARNING: Removing unreachable block (ram,0x0001471baf49) */
/* WARNING: Removing unreachable block (ram,0x0001471baf4e) */
/* WARNING: Removing unreachable block (ram,0x0001471baf57) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UE::Mass::ObserverManager::FObserverLock::AddNotification<FMassEntityHandle_&>
          (FObserverLock *this,EMassObservedOperation param_1,FMassEntityHandle *param_2,
          bool param_3,
          TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
          *param_4,bool param_5,
          TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *param_6)

{
  longlong lVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  FBitSetContainer *pFVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  undefined1 auStack_4b8 [32];
  longlong local_498;
  longlong local_490;
  undefined4 local_488;
  undefined1 local_480 [16];
  void *local_470;
  undefined8 local_468;
  undefined1 local_460 [16];
  void *local_450;
  undefined8 local_448;
  undefined1 local_440 [16];
  void *local_430;
  undefined8 local_428;
  undefined1 local_418 [32];
  undefined1 local_3f8 [32];
  undefined1 local_3d8 [16];
  void *local_3c8;
  undefined4 local_3c0;
  undefined4 local_3bc;
  undefined1 local_3b8 [16];
  void *local_3a8;
  undefined4 local_3a0;
  undefined4 local_39c;
  undefined1 local_398 [16];
  void *local_388;
  undefined4 local_380;
  undefined4 local_37c;
  FBitSetContainer local_378;
  FBitSetContainer local_358;
  FBitSetContainer local_338;
  FBitSetContainer local_318;
  FBitSetContainer local_2f8;
  FScriptContainerElement local_2d8 [8];
  TVariant<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>
  local_2d0;
  FBitSetContainer local_228 [5];
  byte local_188;
  FBitSetContainer local_180 [5];
  byte local_e0 [8];
  FBitSetContainer local_d8 [5];
  byte local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_4b8;
  local_488 = 0;
  if (param_3 == param_5) {
    local_440._0_8_ = 0;
    local_440._8_8_ = 0;
    local_460._0_8_ = 0;
    local_460._8_8_ = 0;
    local_480._0_8_ = 0;
    local_480._8_8_ = 0;
    FStructTypeBitSet::FBitSetContainer::FBitSetContainer
              ((FBitSetContainer *)local_418,(FBitSetContainer *)param_4);
    FStructTypeBitSet::FBitSetContainer::FBitSetContainer
              ((FBitSetContainer *)local_3f8,(FBitSetContainer *)param_6);
    local_3c8 = (void *)0x0;
    local_470 = (void *)0x0;
    local_3d8._0_8_ = local_480._0_8_;
    local_3d8._8_8_ = local_480._8_8_;
    local_3c0 = 0;
    local_3bc = 0x80;
    local_3b8._0_8_ = local_460._0_8_;
    local_3b8._8_8_ = local_460._8_8_;
    local_468 = 0;
    local_3a8 = (void *)0x0;
    local_398._0_8_ = local_440._0_8_;
    local_398._8_8_ = local_440._8_8_;
    local_450 = (void *)0x0;
    local_3a0 = 0;
    local_39c = 0x80;
    local_448 = 0;
    local_388 = (void *)0x0;
    local_430 = (void *)0x0;
    local_380 = 0;
    local_37c = 0x80;
    local_428 = 0;
    FStructTypeBitSet::FBitSetContainer::FBitSetContainer(&local_378,(FBitSetContainer *)local_418);
    FStructTypeBitSet::FBitSetContainer::FBitSetContainer(&local_358,(FBitSetContainer *)local_3f8);
    FStructTypeBitSet::FBitSetContainer::FBitSetContainer(&local_338,(FBitSetContainer *)local_3d8);
    FStructTypeBitSet::FBitSetContainer::FBitSetContainer(&local_318,(FBitSetContainer *)local_3b8);
    FStructTypeBitSet::FBitSetContainer::FBitSetContainer(&local_2f8,(FBitSetContainer *)local_398);
    local_2d8[0] = (FScriptContainerElement)0x1;
    pFVar15 = &local_378;
    bVar18 = false;
    bVar7 = false;
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    bVar9 = true;
    bVar10 = false;
  }
  else {
    bVar18 = !param_3;
    if (bVar18) {
      FStructTypeBitSet::FBitSetContainer::FBitSetContainer(local_180,(FBitSetContainer *)param_6);
      local_e0[0] = 3;
      pFVar15 = local_180;
    }
    else {
      FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                ((FBitSetContainer *)(local_e0 + 8),(FBitSetContainer *)param_4);
      local_38 = 2;
      pFVar15 = (FBitSetContainer *)(local_e0 + 8);
    }
    bVar7 = true;
    bVar6 = false;
    bVar5 = false;
    bVar4 = false;
    bVar9 = false;
    bVar10 = !bVar18;
    local_188 = *(byte *)(pFVar15 + 5);
    uVar13 = (ulonglong)local_188;
    if ((3 < uVar13) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x105,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                ::__l2::MoveConstructors)[uVar13])(local_2d8 + 0xb0,pFVar15);
    pFVar15 = (FBitSetContainer *)(local_2d8 + 0xb0);
  }
  local_2d0.TypeIndex = *(uchar *)(pFVar15 + 5);
  uVar13 = (ulonglong)local_2d0.TypeIndex;
  if ((3 < uVar13) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x105,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[uVar13])(local_2d8 + 8,pFVar15);
  if (bVar9) {
    if (local_388 != (void *)0x0) {
      FMemory::Free(local_388);
    }
    if (local_3a8 != (void *)0x0) {
      FMemory::Free(local_3a8);
    }
    if (local_3c8 != (void *)0x0) {
      FMemory::Free(local_3c8);
    }
    if ((void *)local_3f8._16_8_ != (void *)0x0) {
      FMemory::Free((void *)local_3f8._16_8_);
    }
    if ((void *)local_418._16_8_ != (void *)0x0) {
      FMemory::Free((void *)local_418._16_8_);
    }
  }
  if ((bVar4) && (local_470 != (void *)0x0)) {
    FMemory::Free(local_470);
  }
  if ((bVar5) && (local_450 != (void *)0x0)) {
    FMemory::Free(local_450);
  }
  if ((bVar6) && (local_430 != (void *)0x0)) {
    FMemory::Free(local_430);
  }
  if (bVar7) {
    uVar13 = (ulonglong)local_188;
    if ((3 < uVar13) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar9)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar13])(local_2d8 + 0xb0);
  }
  if (bVar18) {
    uVar13 = (ulonglong)local_e0[0];
    if ((3 < uVar13) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar9)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar13])(local_180);
  }
  if (bVar10) {
    uVar13 = (ulonglong)local_38;
    if ((3 < uVar13) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar10)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar13])(local_e0 + 8);
  }
  iVar11 = (this->BufferedNotifications).ArrayNum;
  if (iVar11 != 0) {
    uVar16 = iVar11 - 1;
    uVar12 = 0;
    uVar17 = uVar12;
    if ((int)uVar16 < iVar11) {
      uVar17 = ~uVar16 >> 0x1f;
    }
    if (uVar17 == 0) {
      local_498 = (longlong)(int)uVar16;
      local_490 = (longlong)iVar11;
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar11 = (this->BufferedNotifications).ArrayNum;
    lVar1 = (longlong)iVar11 + -1;
    if ((this->BufferedNotifications).AllocatorInstance.Data[lVar1 * 0xe0] ==
        (FScriptContainerElement)param_1) {
      uVar17 = uVar12;
      if ((int)(iVar11 - 1U) < iVar11) {
        uVar17 = ~(iVar11 - 1U) >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (local_498 = lVar1, local_490 = (longlong)iVar11,
         bVar10 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      bVar10 = FBufferedNotification::AreCompositionsEqual
                         ((TVariant<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>
                           *)((this->BufferedNotifications).AllocatorInstance.Data +
                             (longlong)((this->BufferedNotifications).ArrayNum + -1) * 0xe0 + 8),
                          (TVariant<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>
                           *)(local_2d8 + 8));
      if (bVar10) {
        iVar11 = (this->BufferedNotifications).ArrayNum;
        uVar17 = iVar11 - 1;
        if ((int)uVar17 < iVar11) {
          uVar12 = ~uVar17 >> 0x1f;
        }
        if (uVar12 == 0) {
          local_498 = (longlong)(int)uVar17;
          local_490 = (longlong)iVar11;
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        FBufferedNotification::AddHandle
                  ((FBufferedNotification *)
                   ((this->BufferedNotifications).AllocatorInstance.Data +
                   (longlong)((this->BufferedNotifications).ArrayNum + -1) * 0xe0),*param_2);
        goto LAB_1471bb2da;
      }
    }
  }
  iVar11 = (this->BufferedNotifications).ArrayNum;
  piVar2 = &(this->BufferedNotifications).ArrayMax;
  if (iVar11 == *piVar2) {
    iVar11 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x8e0,&(this->BufferedNotifications).AllocatorInstance,piVar2);
  }
  pFVar14 = (this->BufferedNotifications).AllocatorInstance.Data;
  (this->BufferedNotifications).ArrayNum = iVar11 + 1;
  pFVar14 = pFVar14 + (longlong)iVar11 * 0xe0;
  *pFVar14 = (FScriptContainerElement)param_1;
  uVar13 = (ulonglong)local_2d0.TypeIndex;
  pFVar14[0xa8] = (FScriptContainerElement)local_2d0.TypeIndex;
  if ((3 < local_2d0.TypeIndex) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x105,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[uVar13])(pFVar14 + 8,local_2d8 + 8);
  *(FMassEntityHandle *)(pFVar14 + 0xb0) = *param_2;
  pFVar14[0xd8] = (FScriptContainerElement)0x1;
LAB_1471bb2da:
  uVar13 = (ulonglong)local_2d0.TypeIndex;
  if ((3 < uVar13) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0xd4,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar13])(local_2d8 + 8);
  return;
}

// AddNotification<FMassArchetypeEntityCollection_const_&> @ 1471bb360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001471bb5b0) */
/* WARNING: Removing unreachable block (ram,0x0001471bb5c1) */
/* WARNING: Removing unreachable block (ram,0x0001471bb5e6) */
/* WARNING: Removing unreachable block (ram,0x0001471bb5e7) */
/* WARNING: Removing unreachable block (ram,0x0001471bb653) */
/* WARNING: Removing unreachable block (ram,0x0001471bb602) */
/* WARNING: Removing unreachable block (ram,0x0001471bb60e) */
/* WARNING: Removing unreachable block (ram,0x0001471bb613) */
/* WARNING: Removing unreachable block (ram,0x0001471bb61f) */
/* WARNING: Removing unreachable block (ram,0x0001471bb624) */
/* WARNING: Removing unreachable block (ram,0x0001471bb630) */
/* WARNING: Removing unreachable block (ram,0x0001471bb635) */
/* WARNING: Removing unreachable block (ram,0x0001471bb63e) */
/* WARNING: Removing unreachable block (ram,0x0001471bb643) */
/* WARNING: Removing unreachable block (ram,0x0001471bb64c) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UE::Mass::ObserverManager::FObserverLock::AddNotification<FMassArchetypeEntityCollection_const_&>
          (FObserverLock *this,EMassObservedOperation param_1,
          FMassArchetypeEntityCollection *param_2,bool param_3,
          TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
          *param_4,bool param_5,
          TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *param_6)

{
  longlong lVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  FEntityCollection *this_00;
  FBitSetContainer *pFVar15;
  uint uVar16;
  bool bVar17;
  undefined1 auStack_4c8 [32];
  longlong local_4a8;
  longlong local_4a0;
  undefined4 local_498;
  undefined1 local_490 [16];
  void *local_480;
  undefined8 local_478;
  undefined1 local_470 [16];
  void *local_460;
  undefined8 local_458;
  undefined1 local_450 [16];
  void *local_440;
  undefined8 local_438;
  undefined1 local_428 [32];
  undefined1 local_408 [32];
  undefined1 local_3e8 [16];
  void *local_3d8;
  undefined4 local_3d0;
  undefined4 local_3cc;
  undefined1 local_3c8 [16];
  void *local_3b8;
  undefined4 local_3b0;
  undefined4 local_3ac;
  undefined1 local_3a8 [16];
  void *local_398;
  undefined4 local_390;
  undefined4 local_38c;
  FBitSetContainer local_388;
  FBitSetContainer local_368;
  FBitSetContainer local_348;
  FBitSetContainer local_328;
  FBitSetContainer local_308;
  FScriptContainerElement local_2e8 [8];
  TVariant<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>
  local_2e0;
  FBitSetContainer local_238 [5];
  byte local_198;
  FBitSetContainer local_190 [5];
  byte local_f0 [8];
  FBitSetContainer local_e8 [5];
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_4c8;
  local_498 = 0;
  if (param_3 == param_5) {
    local_450._0_8_ = 0;
    local_450._8_8_ = 0;
    local_470._0_8_ = 0;
    local_470._8_8_ = 0;
    local_490._0_8_ = 0;
    local_490._8_8_ = 0;
    FStructTypeBitSet::FBitSetContainer::FBitSetContainer
              ((FBitSetContainer *)local_428,(FBitSetContainer *)param_4);
    FStructTypeBitSet::FBitSetContainer::FBitSetContainer
              ((FBitSetContainer *)local_408,(FBitSetContainer *)param_6);
    local_3d8 = (void *)0x0;
    local_480 = (void *)0x0;
    local_3e8._0_8_ = local_490._0_8_;
    local_3e8._8_8_ = local_490._8_8_;
    local_3d0 = 0;
    local_3cc = 0x80;
    local_3c8._0_8_ = local_470._0_8_;
    local_3c8._8_8_ = local_470._8_8_;
    local_478 = 0;
    local_3b8 = (void *)0x0;
    local_3a8._0_8_ = local_450._0_8_;
    local_3a8._8_8_ = local_450._8_8_;
    local_460 = (void *)0x0;
    local_3b0 = 0;
    local_3ac = 0x80;
    local_458 = 0;
    local_398 = (void *)0x0;
    local_440 = (void *)0x0;
    local_390 = 0;
    local_38c = 0x80;
    local_438 = 0;
    FStructTypeBitSet::FBitSetContainer::FBitSetContainer(&local_388,(FBitSetContainer *)local_428);
    FStructTypeBitSet::FBitSetContainer::FBitSetContainer(&local_368,(FBitSetContainer *)local_408);
    FStructTypeBitSet::FBitSetContainer::FBitSetContainer(&local_348,(FBitSetContainer *)local_3e8);
    FStructTypeBitSet::FBitSetContainer::FBitSetContainer(&local_328,(FBitSetContainer *)local_3c8);
    FStructTypeBitSet::FBitSetContainer::FBitSetContainer(&local_308,(FBitSetContainer *)local_3a8);
    local_2e8[0] = (FScriptContainerElement)0x1;
    pFVar15 = &local_388;
    bVar17 = false;
    bVar7 = false;
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    bVar9 = true;
    bVar10 = false;
  }
  else {
    bVar17 = !param_3;
    if (bVar17) {
      FStructTypeBitSet::FBitSetContainer::FBitSetContainer(local_190,(FBitSetContainer *)param_6);
      local_f0[0] = 3;
      pFVar15 = local_190;
    }
    else {
      FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                ((FBitSetContainer *)(local_f0 + 8),(FBitSetContainer *)param_4);
      local_48 = 2;
      pFVar15 = (FBitSetContainer *)(local_f0 + 8);
    }
    bVar7 = true;
    bVar6 = false;
    bVar5 = false;
    bVar4 = false;
    bVar9 = false;
    bVar10 = !bVar17;
    local_198 = *(byte *)(pFVar15 + 5);
    uVar13 = (ulonglong)local_198;
    if ((3 < uVar13) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x105,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                ::__l2::MoveConstructors)[uVar13])(local_2e8 + 0xb0,pFVar15);
    pFVar15 = (FBitSetContainer *)(local_2e8 + 0xb0);
  }
  local_2e0.TypeIndex = *(uchar *)(pFVar15 + 5);
  uVar13 = (ulonglong)local_2e0.TypeIndex;
  if ((3 < uVar13) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x105,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[uVar13])(local_2e8 + 8,pFVar15);
  if (bVar9) {
    if (local_398 != (void *)0x0) {
      FMemory::Free(local_398);
    }
    if (local_3b8 != (void *)0x0) {
      FMemory::Free(local_3b8);
    }
    if (local_3d8 != (void *)0x0) {
      FMemory::Free(local_3d8);
    }
    if ((void *)local_408._16_8_ != (void *)0x0) {
      FMemory::Free((void *)local_408._16_8_);
    }
    if ((void *)local_428._16_8_ != (void *)0x0) {
      FMemory::Free((void *)local_428._16_8_);
    }
  }
  if ((bVar4) && (local_480 != (void *)0x0)) {
    FMemory::Free(local_480);
  }
  if ((bVar5) && (local_460 != (void *)0x0)) {
    FMemory::Free(local_460);
  }
  if ((bVar6) && (local_440 != (void *)0x0)) {
    FMemory::Free(local_440);
  }
  if (bVar7) {
    uVar13 = (ulonglong)local_198;
    if ((3 < uVar13) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar9)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar13])(local_2e8 + 0xb0);
  }
  if (bVar17) {
    uVar13 = (ulonglong)local_f0[0];
    if ((3 < uVar13) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar9)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar13])(local_190);
  }
  if (bVar10) {
    uVar13 = (ulonglong)local_48;
    if ((3 < uVar13) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar10)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar13])(local_f0 + 8);
  }
  iVar11 = (this->BufferedNotifications).ArrayNum;
  if (iVar11 != 0) {
    uVar16 = iVar11 - 1;
    uVar12 = 0;
    if ((int)uVar16 < iVar11) {
      uVar12 = ~uVar16 >> 0x1f;
    }
    if (uVar12 == 0) {
      local_4a8 = (longlong)(int)uVar16;
      local_4a0 = (longlong)iVar11;
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar11 = (this->BufferedNotifications).ArrayNum;
    lVar1 = (longlong)iVar11 + -1;
    if ((this->BufferedNotifications).AllocatorInstance.Data[lVar1 * 0xe0] ==
        (FScriptContainerElement)param_1) {
      uVar12 = 0;
      if ((int)(iVar11 - 1U) < iVar11) {
        uVar12 = ~(iVar11 - 1U) >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (local_4a8 = lVar1, local_4a0 = (longlong)iVar11,
         bVar10 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      bVar10 = FBufferedNotification::AreCompositionsEqual
                         ((TVariant<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>
                           *)((this->BufferedNotifications).AllocatorInstance.Data +
                             (longlong)((this->BufferedNotifications).ArrayNum + -1) * 0xe0 + 8),
                          (TVariant<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>
                           *)(local_2e8 + 8));
      if (bVar10) {
        iVar11 = (this->BufferedNotifications).ArrayNum;
        uVar16 = iVar11 - 1;
        uVar12 = 0;
        if ((int)uVar16 < iVar11) {
          uVar12 = ~uVar16 >> 0x1f;
        }
        if (uVar12 == 0) {
          local_4a8 = (longlong)(int)uVar16;
          local_4a0 = (longlong)iVar11;
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        FBufferedNotification::AppendEntities<FMassArchetypeEntityCollection_const_&>
                  ((FBufferedNotification *)
                   ((this->BufferedNotifications).AllocatorInstance.Data +
                   (longlong)((this->BufferedNotifications).ArrayNum + -1) * 0xe0),param_2);
        goto LAB_1471bb9ff;
      }
    }
  }
  iVar11 = (this->BufferedNotifications).ArrayNum;
  piVar2 = &(this->BufferedNotifications).ArrayMax;
  if (iVar11 == *piVar2) {
    iVar11 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x8e0,&(this->BufferedNotifications).AllocatorInstance,piVar2);
  }
  pFVar14 = (this->BufferedNotifications).AllocatorInstance.Data;
  (this->BufferedNotifications).ArrayNum = iVar11 + 1;
  pFVar14 = pFVar14 + (longlong)iVar11 * 0xe0;
  *pFVar14 = (FScriptContainerElement)param_1;
  uVar13 = (ulonglong)local_2e0.TypeIndex;
  pFVar14[0xa8] = (FScriptContainerElement)local_2e0.TypeIndex;
  if ((3 < local_2e0.TypeIndex) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x105,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[uVar13])(pFVar14 + 8,local_2e8 + 8);
  this_00 = (FEntityCollection *)(pFVar14 + 0xb0);
  (this_00->EntityHandles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)(pFVar14 + 0xb8) = 0;
  *(undefined8 *)(pFVar14 + 0xc0) = 0;
  *(undefined8 *)(pFVar14 + 200) = 0;
  *(undefined4 *)(pFVar14 + 0xd0) = 0;
  if ((((param_2->Ranges).ArrayNum != 0) ||
      ((param_2->Archetype).ArchetypeHandle.DataPtr.Object != (FMassArchetypeData *)0x0)) &&
     (bVar10 = FMassArchetypeEntityCollection::ExportEntityHandles
                         (param_2,(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)this_00),
     bVar10)) {
    FEntityCollection::ConditionallyStoreCollection<FMassArchetypeEntityCollection_const_&>
              (this_00,true,param_2);
  }
  pFVar14[0xd8] = (FScriptContainerElement)0x0;
LAB_1471bb9ff:
  uVar13 = (ulonglong)local_2e0.TypeIndex;
  if ((3 < uVar13) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0xd4,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar13])(local_2e8 + 8);
  return;
}

// FObserverLock @ 1471db9c0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FObserverLock * __thiscall
UE::Mass::ObserverManager::FObserverLock::FObserverLock
          (FObserverLock *this,FMassObserverManager *param_1)

{
  DWORD DVar1;
  
  DVar1 = GetCurrentThreadId();
  this->CreationNotificationIndex = -1;
  this->OwnerThreadId = DVar1;
  (this->BufferedNotifications).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BufferedNotifications).ArrayNum = 0;
  (this->BufferedNotifications).ArrayMax = 0;
  this->CollectionCreationDuplicatesHandling = NoDuplicates;
  TSharedFromThis<FMassEntityManager,1>::AsWeak
            ((TSharedFromThis<FMassEntityManager,1> *)&param_1->EntityManager->_padding_,
             &this->WeakEntityManager);
  this->LockSerialNumber = param_1->LockedNotificationSerialNumber;
  param_1->LocksCount = param_1->LocksCount + 1;
  return this;
}

// ~FObserverLock @ 1471e0550

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall UE::Mass::ObserverManager::FObserverLock::~FObserverLock(FObserverLock *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  FScriptContainerElement *pFVar4;
  FMassEntityManager *pFVar5;
  code *pcVar6;
  atomic<int> aVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  
  pTVar8 = (this->WeakEntityManager).WeakReferenceCount.ReferenceController;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar8->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1471e0586;
      }
      LOCK();
      aVar7 = pTVar8->SharedReferenceCount;
      bVar9 = aVar3 == aVar7;
      if (bVar9) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar7 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar7;
    } while (!bVar9);
    pFVar5 = (this->WeakEntityManager).Object;
    if (pFVar5 != (FMassEntityManager *)0x0) {
      piVar2 = &(pFVar5->ObserverManager).LocksCount;
      *piVar2 = *piVar2 + -1;
      if ((*piVar2 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("SharedEntityManager->GetObserverManager().LocksCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassObserverNotificationTypes.cpp"
                             ,0x2a,L"%hs: the lock count has become unbalanced."), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FMassObserverManager::ResumeExecution(&pFVar5->ObserverManager,this);
    }
  }
LAB_1471e0586:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  pTVar8 = (this->WeakEntityManager).WeakReferenceCount.ReferenceController;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar8->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar8->_padding_ + 8))(pTVar8,1);
    }
  }
  DestructItems<UE::Mass::ObserverManager::FBufferedNotification,int>
            ((FBufferedNotification *)(this->BufferedNotifications).AllocatorInstance.Data,
             (this->BufferedNotifications).ArrayNum);
  pFVar4 = (this->BufferedNotifications).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
    return;
  }
  return;
}

// AddCreatedEntities @ 1471ec8e0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

int __thiscall
UE::Mass::ObserverManager::FObserverLock::AddCreatedEntities
          (FObserverLock *this,TArrayView<FMassEntityHandle_const_,int> *param_1,
          FMassArchetypeEntityCollection *param_2)

{
  int *piVar1;
  uint uVar2;
  ulonglong uVar3;
  code *pcVar4;
  FMassEntityHandle *_Src;
  bool bVar5;
  DWORD DVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  FBufferedNotification *this_00;
  FScriptContainerElement *pFVar11;
  FEntityCollection *this_01;
  TArrayView<FMassEntityHandle_const_,int> local_58;
  ForAnyElementType local_48;
  undefined8 local_40;
  ForAnyElementType local_38;
  undefined8 local_30;
  undefined4 local_28;
  
  DVar6 = GetCurrentThreadId();
  if ((this->OwnerThreadId != DVar6) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("OwnerThreadId == FPlatformTLS::GetCurrentThreadId()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassObserverNotificationTypes.h"
                         ,0x13c,
                         L"%hs: all FObserverLock operations are expected to be run in a single thread"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar7 = (*pcVar4)();
    return iVar7;
  }
  uVar2 = this->CreationNotificationIndex;
  iVar7 = (this->BufferedNotifications).ArrayNum;
  if (uVar2 == 0xffffffff) {
    uVar3 = *(ulonglong *)&param_1->ArrayNum;
    this->CreationNotificationIndex = iVar7;
    local_48.Data = (FScriptContainerElement *)0x0;
    iVar7 = (int)uVar3;
    local_40 = CONCAT44(local_40._4_4_,iVar7);
    if (iVar7 == 0) {
      local_40 = uVar3 & 0xffffffff;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar7,0,&local_48,iVar7,(int *)((longlong)&local_40 + 4));
      memcpy(local_48.Data,param_1->DataPtr,(longlong)iVar7 << 3);
    }
    local_38.Data = (FScriptContainerElement *)0x0;
    local_30 = 0;
    local_28 = 0;
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&local_38,(int *)((longlong)&local_30 + 4));
    piVar1 = &(this->BufferedNotifications).ArrayMax;
    *(undefined8 *)(local_38.Data + (longlong)iVar8 * 0x28) = 0;
    pFVar11 = local_38.Data + (longlong)iVar8 * 0x28;
    *(FScriptContainerElement **)pFVar11 = (param_2->Ranges).AllocatorInstance.Data;
    (param_2->Ranges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar11 + 8) = (param_2->Ranges).ArrayNum;
    *(int *)(pFVar11 + 0xc) = (param_2->Ranges).ArrayMax;
    (param_2->Ranges).ArrayNum = 0;
    (param_2->Ranges).ArrayMax = 0;
    *(FMassArchetypeData **)(pFVar11 + 0x10) = (param_2->Archetype).ArchetypeHandle.DataPtr.Object;
    *(TReferenceControllerBase<1> **)(pFVar11 + 0x18) =
         (param_2->Archetype).ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController;
    (param_2->Archetype).ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (param_2->Archetype).ArchetypeHandle.DataPtr.Object = (FMassArchetypeData *)0x0;
    *(uint *)(pFVar11 + 0x20) = (param_2->Archetype).HandleVersion;
    iVar7 = (this->BufferedNotifications).ArrayNum;
    local_30._0_4_ = iVar8 + 1;
    if (iVar7 == *piVar1) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x8e0,&(this->BufferedNotifications).AllocatorInstance,piVar1);
    }
    (this->BufferedNotifications).ArrayNum = iVar7 + 1;
    pFVar11 = (this->BufferedNotifications).AllocatorInstance.Data + (longlong)iVar7 * 0xe0;
    *pFVar11 = (FScriptContainerElement)0x3;
    pFVar11[0xa8] = (FScriptContainerElement)0x0;
    *(undefined8 *)(pFVar11 + 0xb0) = 0;
    *(FScriptContainerElement **)(pFVar11 + 0xb0) = local_48.Data;
    local_48.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(pFVar11 + 0xb8) = (undefined4)local_40;
    *(undefined4 *)(pFVar11 + 0xbc) = local_40._4_4_;
    local_40 = 0;
    *(undefined8 *)(pFVar11 + 0xc0) = 0;
    *(FScriptContainerElement **)(pFVar11 + 0xc0) = local_38.Data;
    local_38.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar11 + 200) = (int)local_30;
    *(undefined4 *)(pFVar11 + 0xcc) = local_30._4_4_;
    local_30 = 0;
    *(undefined4 *)(pFVar11 + 0xd0) = local_28;
    pFVar11[0xd8] = (FScriptContainerElement)0x0;
    DestructItems<FMassArchetypeEntityCollection,int>((FMassArchetypeEntityCollection *)0x0,0);
    if (local_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data);
    }
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
  }
  else {
    uVar9 = 0;
    if ((int)uVar2 < iVar7) {
      uVar9 = ~uVar2 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar7 = (*pcVar4)();
      return iVar7;
    }
    local_58.DataPtr._0_4_ = *(undefined4 *)&param_1->DataPtr;
    local_58.DataPtr._4_4_ = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
    _Src = param_1->DataPtr;
    iVar7 = param_1->ArrayNum;
    local_58._12_4_ = *(undefined4 *)&param_1->field_0xc;
    this_00 = (FBufferedNotification *)
              ((this->BufferedNotifications).AllocatorInstance.Data + (longlong)(int)uVar2 * 0xe0);
    this_01 = (FEntityCollection *)&this_00->AffectedEntities;
    if ((this_00->AffectedEntities).TypeIndex != '\0') {
      this_01 = (FEntityCollection *)0x0;
    }
    local_58.ArrayNum = iVar7;
    if (this_01 == (FEntityCollection *)0x0) {
      FBufferedNotification::
      ConvertStoredHandleToCollection<TArrayView<FMassEntityHandle_const_,int>_const_&>
                (this_00,&local_58);
    }
    else {
      iVar8 = (this_01->EntityHandles).ArrayNum;
      if ((iVar7 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x9a9,L"Invalid range size: %lld"), bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
      if (iVar7 != 0) {
        iVar10 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (8,8,iVar7,(ForAnyElementType *)this_01,
                            &(this_01->EntityHandles).ArrayNum,&(this_01->EntityHandles).ArrayMax);
        memcpy((this_01->EntityHandles).AllocatorInstance.Data + (longlong)iVar10 * 8,_Src,
               (longlong)iVar7 << 3);
      }
      FEntityCollection::ConditionallyStoreCollection<FMassArchetypeEntityCollection>
                (this_01,iVar8 == 0,param_2);
    }
  }
  return this->CreationNotificationIndex;
}

// AddCreatedEntities @ 1471ecc40

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

int __thiscall
UE::Mass::ObserverManager::FObserverLock::AddCreatedEntities
          (FObserverLock *this,TArrayView<FMassEntityHandle_const_,int> *param_1)

{
  int *piVar1;
  uint uVar2;
  ulonglong uVar3;
  code *pcVar4;
  FMassEntityHandle *_Src;
  bool bVar5;
  DWORD DVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  FBufferedNotification *this_00;
  FScriptContainerElement *pFVar10;
  FEntityCollection *this_01;
  TArrayView<FMassEntityHandle_const_,int> local_58;
  ForAnyElementType local_48;
  undefined8 local_40;
  void *local_38;
  undefined8 local_30;
  undefined4 local_28;
  
  DVar6 = GetCurrentThreadId();
  if ((this->OwnerThreadId != DVar6) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("OwnerThreadId == FPlatformTLS::GetCurrentThreadId()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassObserverNotificationTypes.h"
                         ,0x12a,
                         L"%hs: all FObserverLock operations are expected to be run in a single thread"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar7 = (*pcVar4)();
    return iVar7;
  }
  uVar2 = this->CreationNotificationIndex;
  iVar7 = (this->BufferedNotifications).ArrayNum;
  if (uVar2 == 0xffffffff) {
    uVar3 = *(ulonglong *)&param_1->ArrayNum;
    this->CreationNotificationIndex = iVar7;
    local_48.Data = (FScriptContainerElement *)0x0;
    iVar7 = (int)uVar3;
    local_40 = CONCAT44(local_40._4_4_,iVar7);
    if (iVar7 == 0) {
      local_40 = uVar3 & 0xffffffff;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar7,0,&local_48,iVar7,(int *)((longlong)&local_40 + 4));
      memcpy(local_48.Data,param_1->DataPtr,(longlong)iVar7 << 3);
    }
    iVar7 = (this->BufferedNotifications).ArrayNum;
    piVar1 = &(this->BufferedNotifications).ArrayMax;
    local_38 = (void *)0x0;
    local_30 = 0;
    local_28 = 0;
    if (iVar7 == *piVar1) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x8e0,&(this->BufferedNotifications).AllocatorInstance,piVar1);
    }
    (this->BufferedNotifications).ArrayNum = iVar7 + 1;
    pFVar10 = (this->BufferedNotifications).AllocatorInstance.Data + (longlong)iVar7 * 0xe0;
    *pFVar10 = (FScriptContainerElement)0x3;
    pFVar10[0xa8] = (FScriptContainerElement)0x0;
    *(undefined8 *)(pFVar10 + 0xb0) = 0;
    *(FScriptContainerElement **)(pFVar10 + 0xb0) = local_48.Data;
    local_48.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(pFVar10 + 0xb8) = (undefined4)local_40;
    *(undefined4 *)(pFVar10 + 0xbc) = local_40._4_4_;
    local_40 = 0;
    *(undefined8 *)(pFVar10 + 0xc0) = 0;
    *(void **)(pFVar10 + 0xc0) = local_38;
    local_38 = (void *)0x0;
    *(undefined4 *)(pFVar10 + 200) = (undefined4)local_30;
    *(undefined4 *)(pFVar10 + 0xcc) = local_30._4_4_;
    local_30 = 0;
    *(undefined4 *)(pFVar10 + 0xd0) = local_28;
    pFVar10[0xd8] = (FScriptContainerElement)0x0;
    DestructItems<FMassArchetypeEntityCollection,int>((FMassArchetypeEntityCollection *)0x0,0);
    if (local_38 != (void *)0x0) {
      FMemory::Free(local_38);
    }
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
  }
  else {
    uVar8 = 0;
    if ((int)uVar2 < iVar7) {
      uVar8 = ~uVar2 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar7 = (*pcVar4)();
      return iVar7;
    }
    _Src = param_1->DataPtr;
    local_58.ArrayNum = param_1->ArrayNum;
    local_58._12_4_ = *(undefined4 *)&param_1->field_0xc;
    this_00 = (FBufferedNotification *)
              ((this->BufferedNotifications).AllocatorInstance.Data + (longlong)(int)uVar2 * 0xe0);
    this_01 = (FEntityCollection *)&this_00->AffectedEntities;
    if ((this_00->AffectedEntities).TypeIndex != '\0') {
      this_01 = (FEntityCollection *)0x0;
    }
    local_58.DataPtr = _Src;
    if (this_01 == (FEntityCollection *)0x0) {
      FBufferedNotification::
      ConvertStoredHandleToCollection<TArrayView<FMassEntityHandle_const_,int>_const_&>
                (this_00,&local_58);
    }
    else {
      iVar7 = (int)*(undefined8 *)&param_1->ArrayNum;
      if ((iVar7 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x9a9,L"Invalid range size: %lld"), bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
      if (iVar7 != 0) {
        iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,iVar7,(ForAnyElementType *)this_01,&(this_01->EntityHandles).ArrayNum
                           ,&(this_01->EntityHandles).ArrayMax);
        memcpy((this_01->EntityHandles).AllocatorInstance.Data + (longlong)iVar9 * 8,_Src,
               (longlong)iVar7 << 3);
      }
      FEntityCollection::MarkDirty(this_01);
      this_01->CollectionCreationDuplicatesHandling = FoldDuplicates;
    }
  }
  return this->CreationNotificationIndex;
}

// ForceUpdateCurrentThreadID @ 14721d9c0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UE::Mass::ObserverManager::FObserverLock::ForceUpdateCurrentThreadID(FObserverLock *this)

{
  DWORD DVar1;
  
  DVar1 = GetCurrentThreadId();
  this->OwnerThreadId = DVar1;
  return;
}

// GetCreationNotification @ 147220a90

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FBufferedNotification * __thiscall
UE::Mass::ObserverManager::FObserverLock::GetCreationNotification
          (FObserverLock *this,FCreationNotificationHandle param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FBufferedNotification *pFVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  FCreationNotificationHandle local_res10;
  
  local_res10 = param_1;
  if (param_1.OpIndex != this->CreationNotificationIndex) {
    local_res8[0] = 0;
    `UE::Mass::ObserverManager::FObserverLock::GetCreationNotification'::__l2::<lambda_1>::
    operator()(local_res8);
  }
  if (((longlong)param_1 < 0) || ((this->BufferedNotifications).ArrayNum <= param_1.OpIndex)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("BufferedNotifications.IsValidIndex(CreationHandle)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassObserverNotificationTypes.h"
                       ,0xf0,L"Given CreationHandle doesn\'t match stored notifications");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBufferedNotification *)(*pcVar1)();
      return pFVar4;
    }
  }
  lVar5 = (longlong)local_res10.OpIndex;
  uVar3 = 0;
  if (local_res10.OpIndex < (this->BufferedNotifications).ArrayNum) {
    uVar3 = (uint)~local_res10.OpIndex >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBufferedNotification *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FBufferedNotification *)
         ((this->BufferedNotifications).AllocatorInstance.Data + lVar5 * 0xe0);
}

// operator() @ 150502e30

bool __thiscall
`UE::Mass::ObserverManager::FObserverLock::GetCreationNotification'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5643180168987017455>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5643180168987017455>,
                       &`public:___cdecl_`public:_struct_UE::Mass::ObserverManager::FBufferedNotification_const&___ptr64___cdecl_UE::Mass::ObserverManager::FObserverLock::GetCreationNotification(UE::Mass::ObserverManager::FCreationNotificationHandle)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505030c0

bool __thiscall
`UE::Mass::ObserverManager::FObserverLock::MarkCreationNotificationDirty'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5643180168987017448>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5643180168987017448>,
                       &`public:___cdecl_`public:_void___cdecl_UE::Mass::ObserverManager::FObserverLock::MarkCreationNotificationDirty(UE::Mass::ObserverManager::FCreationNotificationHandle)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150503400

bool __thiscall
`UE::Mass::ObserverManager::FObserverLock::ReleaseCreationNotification'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5643180168987017490>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5643180168987017490>,
                       &`public:___cdecl_`private:_bool___cdecl_UE::Mass::ObserverManager::FObserverLock::ReleaseCreationNotification(UE::Mass::ObserverManager::FCreationNotificationHandle)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

