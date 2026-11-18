// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 44

// AddInitialObjects @ 14801fb40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNetworkObjectList::AddInitialObjects(FNetworkObjectList *this,UWorld *param_1,UNetDriver *param_2)

{
  code *pcVar1;
  bool bVar2;
  AActor *this_00;
  TActorIteratorBase<FActorIterator> local_68;
  
  if (((param_1 != (UWorld *)0x0) && (param_2 != (UNetDriver *)0x0)) &&
     (param_2->ReplicationSystem == (UReplicationSystem *)0x0)) {
    FActorIterator::FActorIterator
              ((FActorIterator *)&local_68,param_1,OnlyActiveLevels|SkipPendingKill);
    while( true ) {
      if ((local_68.State.bIsSet == false) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (local_68.State.TypedValue.ReachedEnd != false) break;
      if ((local_68.State.bIsSet == false) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_00 = FActorIteratorState::GetActorChecked(&local_68.State.TypedValue);
      if ((((this_00 != (AActor *)0x0) && (((uint)this_00->_padding_ >> 0x1e & 1) == 0)) &&
          (bVar2 = ULevel::IsNetActor(this_00), bVar2)) &&
         ((bVar2 = AActor::IsNetStartupActor(this_00), !bVar2 ||
          ((this_00->NetDormancy).Value != '\x04')))) {
        FindOrAdd(this,this_00,param_2,(bool *)0x0);
      }
      TActorIteratorBase<FActorIterator>::operator++(&local_68);
    }
    if (local_68.State.bIsSet != false) {
      UWorld::RemoveOnActorSpawnedHandler
                (local_68.State.TypedValue.CurrentWorld,
                 local_68.State.TypedValue.ActorSpawnedDelegateHandle);
      if (local_68.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
      }
      if (local_68.State.TypedValue.ActorArray.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.State.TypedValue.ActorArray.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// AddSubObjectChannelReference @ 148020c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNetworkObjectList::AddSubObjectChannelReference
          (FNetworkObjectList *this,AActor *param_1,UObject *param_2,UObject *param_3)

{
  TSet<FNetworkObjectList::FActorSubObjectReferences,FNetworkObjectList::FActorSubObjectRefKeyFuncs,FDefaultSetAllocator>
  *this_00;
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  UObject **ppUVar4;
  code *pcVar5;
  AActor *pAVar6;
  uint uVar7;
  bool bVar8;
  int iVar9;
  FActorSubObjectReferences *pFVar10;
  FScriptContainerElement *pFVar11;
  longlong *plVar12;
  ForElementType<FSetElementId> FVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  UObject *pUVar16;
  undefined1 auStackY_1a8 [32];
  UObject *local_150;
  FWeakObjectPtr local_148;
  FWeakObjectPtr local_140;
  undefined1 local_138 [8];
  FWeakObjectPtr local_130;
  FObjectKey local_128;
  UObject *local_120;
  AActor *local_118;
  AActor *local_110;
  AActor *local_108;
  UObject *local_100;
  FWeakObjectPtr local_f8;
  ForElementType<FSetElementId> local_f0;
  void *local_e8;
  ForAnyElementType local_e0;
  UObject **local_d8;
  AActor **local_d0;
  UObject **local_c8;
  FWeakObjectPtr local_b8;
  undefined1 local_b0 [32];
  void *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  void *local_70;
  undefined4 local_68;
  FSubObjectChannelReference *local_60;
  undefined8 local_58;
  undefined2 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_128.ObjectIndex = 0;
  local_128.ObjectSerialNumber = 0;
  this_00 = &this->SubObjectChannelReferences;
  local_150 = param_3;
  local_120 = param_2;
  local_118 = param_1;
  if (param_1 != (AActor *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_130.ObjectIndex = 0;
    local_130.ObjectSerialNumber = 0;
    local_110 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_130,(FObjectPtr)&local_110);
    local_128.ObjectIndex = local_130.ObjectIndex;
    local_128.ObjectSerialNumber = local_130.ObjectSerialNumber;
  }
  pAVar6 = local_118;
  pUVar16 = local_120;
  pFVar10 = TSet<FNetworkObjectList::FActorSubObjectReferences,FNetworkObjectList::FActorSubObjectRefKeyFuncs,FDefaultSetAllocator>
            ::Find(this_00,&local_128);
  if (pFVar10 == (FActorSubObjectReferences *)0x0) {
    local_b8.ObjectIndex = 0;
    local_b8.ObjectSerialNumber = 0;
    if (pAVar6 != (AActor *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pAVar6);
      }
      local_140.ObjectIndex = 0;
      local_140.ObjectSerialNumber = 0;
      local_108 = pAVar6;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar6 != (AActor *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pAVar6);
      }
      FWeakObjectPtr::operator=(&local_140,(FObjectPtr)&local_108);
      local_b8 = local_140;
    }
    local_88 = ___xmm_00000000ffffffff0000008000000000;
    uStack_80 = _UNK_150631d98;
    local_b0._0_8_ = (FScriptContainerElement *)0x0;
    local_b0._8_8_ = 0;
    local_90 = (void *)0x0;
    local_70 = (void *)0x0;
    local_68 = 0;
    local_60 = (FSubObjectChannelReference *)0x0;
    local_58 = 0;
    local_50 = 0;
    TSet<FNetworkObjectList::FActorSubObjectReferences,FNetworkObjectList::FActorSubObjectRefKeyFuncs,FDefaultSetAllocator>
    ::Emplace<FNetworkObjectList::FActorSubObjectReferences>
              (this_00,(FActorSubObjectReferences *)local_138,(bool *)&local_b8);
    DestructItems<FNetworkObjectList::FSubObjectChannelReference,int>(local_60,(int)local_58);
    if (local_60 != (FSubObjectChannelReference *)0x0) {
      FMemory::Free(local_60);
    }
    local_68 = 0;
    if (local_70 != (void *)0x0) {
      FMemory::Free(local_70);
    }
    TSparseArray<TSparseSetElement<FNetworkObjectList::FSubObjectChannelReference>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<FNetworkObjectList::FSubObjectChannelReference>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_b0,0,local_b0._8_4_);
    iVar9 = SUB84(local_b0._8_8_,4);
    local_b0._8_8_ = local_b0._8_8_ & 0xffffffff00000000;
    if (iVar9 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)local_b0,0,(int *)(local_b0 + 0xc));
    }
    uVar7 = local_88._4_4_;
    uStack_80 = 0xffffffff;
    local_88 = (ulonglong)local_88._4_4_ << 0x20;
    if (0x80 < uVar7) {
      local_88 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_b0 + 0x10),0);
    }
    if (local_90 != (void *)0x0) {
      FMemory::Free(local_90);
    }
    if ((FScriptContainerElement *)local_b0._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_b0._0_8_);
    }
    pFVar10 = (FActorSubObjectReferences *)
              ((longlong)(int)local_138._0_4_ * 0x78 + *(longlong *)&this_00->Elements);
    pUVar16 = local_120;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar16 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar16);
  }
  local_148.ObjectIndex = 0;
  local_148.ObjectSerialNumber = 0;
  local_100 = pUVar16;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar16 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar16);
  }
  FWeakObjectPtr::operator=(&local_148,(FObjectPtr)&local_100);
  if (*(int *)&(pFVar10->ActiveSubObjectChannelReferences).Elements.field_0x8 !=
      *(int *)&(pFVar10->ActiveSubObjectChannelReferences).Elements.field_0x34) {
    FVar13 = (pFVar10->ActiveSubObjectChannelReferences).Hash.SecondaryData;
    if (FVar13 == (ForElementType<FSetElementId>)0x0) {
      FVar13 = (ForElementType<FSetElementId>)&(pFVar10->ActiveSubObjectChannelReferences).Hash;
    }
    iVar9 = *(int *)((longlong)FVar13 +
                    (ulonglong)
                    ((pFVar10->ActiveSubObjectChannelReferences).HashSize - 1U &
                    (local_148.ObjectSerialNumber ^ local_148.ObjectIndex)) * 4);
    if (iVar9 != -1) {
      lVar2 = *(longlong *)&(pFVar10->ActiveSubObjectChannelReferences).Elements;
      do {
        pFVar15 = (FScriptContainerElement *)(lVar2 + (longlong)iVar9 * 0x28);
        if ((*(uchar (*) [4])(lVar2 + (longlong)iVar9 * 0x28) == (uchar  [4])local_148.ObjectIndex)
           && (*(uint *)(pFVar15 + 4) == local_148.ObjectSerialNumber)) {
          if ((iVar9 != -1) && (pFVar15 != (FScriptContainerElement *)0x0)) goto LAB_148020f82;
          break;
        }
        iVar9 = *(int *)(pFVar15 + 0x20);
      } while (iVar9 != -1);
    }
  }
  pFVar14 = (pFVar10->InvalidSubObjectChannelReferences).AllocatorInstance.Data;
  pFVar11 = pFVar14 + (longlong)(pFVar10->InvalidSubObjectChannelReferences).ArrayNum * 0x20;
  for (; (pFVar15 = (FScriptContainerElement *)0x0, pFVar14 != pFVar11 &&
         ((*(uchar (*) [4])pFVar14 != (uchar  [4])local_148.ObjectIndex ||
          (pFVar15 = pFVar14, *(uint *)(pFVar14 + 4) != local_148.ObjectSerialNumber))));
      pFVar14 = pFVar14 + 0x20) {
  }
  if (pFVar15 == (FScriptContainerElement *)0x0) {
    local_f8 = local_148;
    local_f0._0_2_ = 1;
    local_f0._2_1_ = 0;
    local_e8 = (void *)0x0;
    local_e0.Data = (FScriptContainerElement *)0x0;
    TSet<FNetworkObjectList::FSubObjectChannelReference,FNetworkObjectList::FSubObjectChannelRefKeyFuncs,FDefaultSetAllocator>
    ::Emplace<FNetworkObjectList::FSubObjectChannelReference>
              (&pFVar10->ActiveSubObjectChannelReferences,
               (FSubObjectChannelReference *)(local_138 + 4),(bool *)&local_f8);
    if (local_e8 != (void *)0x0) {
      FMemory::Free(local_e8);
    }
    lVar3 = *(longlong *)&(pFVar10->ActiveSubObjectChannelReferences).Elements;
    lVar2 = lVar3 + (longlong)(int)local_138._4_4_ * 0x28;
    ppUVar4 = *(UObject ***)(lVar3 + 0x10 + (longlong)(int)local_138._4_4_ * 0x28);
    if (((ppUVar4 <= &local_150) && (&local_150 < ppUVar4 + *(int *)(lVar2 + 0x1c))) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar9 = *(int *)(lVar2 + 0x18);
    if (iVar9 == *(int *)(lVar2 + 0x1c)) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)(lVar2 + 0x10),(int *)(lVar2 + 0x1c));
    }
    *(int *)(lVar2 + 0x18) = iVar9 + 1;
    *(UObject **)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar9 * 8) = local_150;
  }
  else {
LAB_148020f82:
    plVar12 = *(longlong **)(pFVar15 + 0x10);
    plVar1 = plVar12 + *(int *)(pFVar15 + 0x18);
    for (; plVar12 != plVar1; plVar12 = plVar12 + 1) {
      if ((UObject *)*plVar12 == local_150) {
        local_d8 = &local_120;
        local_d0 = &local_118;
        local_c8 = &local_150;
        `FNetworkObjectList::AddSubObjectChannelReference'::__l11::<lambda_1>::operator()(&local_d8)
        ;
        break;
      }
    }
    if (((*(UObject ***)(pFVar15 + 0x10) <= &local_150) &&
        (&local_150 < *(UObject ***)(pFVar15 + 0x10) + *(int *)(pFVar15 + 0x1c))) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar9 = *(int *)(pFVar15 + 0x18);
    if (iVar9 == *(int *)(pFVar15 + 0x1c)) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)(pFVar15 + 0x10),(int *)(pFVar15 + 0x1c));
    }
    *(int *)(pFVar15 + 0x18) = iVar9 + 1;
    *(UObject **)(*(longlong *)(pFVar15 + 0x10) + (longlong)iVar9 * 8) = local_150;
    *(short *)&pFVar15[8].field_0x0 = (short)*(int *)&pFVar15[8].field_0x0 + 1;
    if (((short)*(int *)&pFVar15[8].field_0x0 == -1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ChannelReferences->ChannelRefCount < ((uint16) 0xffff)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetworkObjectList.cpp"
                           ,0x2b9,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}

// ClearRecentlyDormantConnection @ 148024240

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNetworkObjectList::ClearRecentlyDormantConnection
          (FNetworkObjectList *this,AActor *param_1,UNetConnection *param_2,UNetDriver *param_3)

{
  FNetworkObjectInfo *pFVar1;
  longlong lVar2;
  TSharedPtr<FNetworkObjectInfo,1> *pTVar3;
  longlong lVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  FWeakObjectPtr local_18;
  UNetConnection *local_10;
  
  pTVar3 = FindOrAdd(this,param_1,param_3,(bool *)0x0);
  if (pTVar3 != (TSharedPtr<FNetworkObjectInfo,1> *)0x0) {
    pFVar1 = pTVar3->Object;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UNetConnection *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    local_18.ObjectIndex = 0;
    local_18.ObjectSerialNumber = 0;
    local_10 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UNetConnection *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_18,(FObjectPtr)&local_10);
    if (*(int *)&(pFVar1->RecentlyDormantConnections).Elements.field_0x8 !=
        *(int *)&(pFVar1->RecentlyDormantConnections).Elements.field_0x34) {
      FVar6 = (pFVar1->RecentlyDormantConnections).Hash.SecondaryData;
      if (FVar6 == (ForElementType<FSetElementId>)0x0) {
        FVar6 = (ForElementType<FSetElementId>)&(pFVar1->RecentlyDormantConnections).Hash;
      }
      iVar5 = *(int *)((longlong)FVar6 +
                      ((longlong)(local_18.ObjectSerialNumber ^ local_18.ObjectIndex) &
                      (longlong)(pFVar1->RecentlyDormantConnections).HashSize - 1U) * 4);
      if (iVar5 != -1) {
        lVar2 = *(longlong *)&(pFVar1->RecentlyDormantConnections).Elements;
        while ((lVar4 = (longlong)iVar5, *(uint *)(lVar2 + lVar4 * 0x10) != local_18.ObjectIndex ||
               (*(uint *)(lVar2 + 4 + lVar4 * 0x10) != local_18.ObjectSerialNumber))) {
          iVar5 = *(int *)(lVar2 + 8 + lVar4 * 0x10);
          if (iVar5 == -1) {
            return;
          }
        }
        TSet<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,FNetworkObjectInfo::FNetConnectionKeyFuncs,FDefaultSetAllocator>
        ::RemoveByIndex(&pFVar1->RecentlyDormantConnections,iVar5);
      }
    }
  }
  return;
}

// CountBytes @ 1480267c0

void __thiscall FNetworkObjectList::CountBytes(FNetworkObjectList *this,FArchive *param_1)

{
  TSet<TTuple<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  *this_00;
  TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>
  *this_01;
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  code *pcVar4;
  TSet<FNetworkObjectList::FActorSubObjectReferences,FNetworkObjectList::FActorSubObjectRefKeyFuncs,FDefaultSetAllocator>
  *pTVar5;
  TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>
  *pTVar6;
  TSet<TTuple<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  *pTVar7;
  TMap<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>,0>_>
  *pTVar8;
  FNetworkObjectList *pFVar9;
  bool bVar10;
  uint uVar11;
  byte bVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  TBitArray<FDefaultBitArrayAllocator> *pTVar17;
  int iVar18;
  TBitArray<FDefaultBitArrayAllocator> *pTVar19;
  undefined1 *puVar20;
  int iVar21;
  uint *puVar22;
  TSet<FNetworkObjectList::FActorSubObjectReferences,FNetworkObjectList::FActorSubObjectRefKeyFuncs,FDefaultSetAllocator>
  *pTVar23;
  undefined8 uVar24;
  TMap<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>,0>_>
  *this_02;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_388;
  undefined1 local_387 [7];
  FNetworkObjectList *local_380;
  undefined8 uStack_378;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_370;
  uint uStack_368;
  int iStack_364;
  int iStack_360;
  undefined4 uStack_35c;
  int local_358;
  undefined4 uStack_354;
  undefined8 local_350;
  uint local_348;
  int local_340;
  uint uStack_33c;
  undefined1 *puStack_338;
  undefined4 local_330;
  int iStack_32c;
  int iStack_328;
  undefined4 uStack_324;
  FScopeMarker local_320;
  TBitArray<FDefaultBitArrayAllocator> *local_2f8;
  TSet<FNetworkObjectList::FActorSubObjectReferences,FNetworkObjectList::FActorSubObjectRefKeyFuncs,FDefaultSetAllocator>
  *local_2f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2e8;
  undefined8 local_2c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_280;
  int local_260;
  int local_25c;
  int local_258;
  int local_254;
  int local_250;
  int local_24c;
  TMap<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>,0>_>
  *local_248;
  TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>
  *local_240;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_238;
  undefined8 uStack_218;
  TSet<TTuple<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  *local_210;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_208;
  undefined8 uStack_1e8;
  TMap<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>,0>_>
  *local_1e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1d8;
  undefined8 uStack_1b8;
  FNetworkObjectList *local_1b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1a8;
  undefined8 uStack_188;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FScopeMarker local_d0;
  undefined4 local_8c;
  undefined4 local_6c;
  undefined4 local_4c;
  
  ::FString::FString(&local_180,"FNetworkObjectList::CountBytes");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::FScopeMarker
            (&local_320,param_1,&local_180);
  if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_320);
  TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::CountBytes
            (&this->ActiveNetworkObjects,param_1);
  ::FString::FString(&local_170,"ActiveNetworkObjects");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_320,&local_170);
  if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_320);
  TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::CountBytes
            (&this->ObjectsDormantOnAllConnections,param_1);
  ::FString::FString(&local_160,"ObjectsDormantOnAllConnections");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_320,&local_160);
  if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_320);
  TSet<TTuple<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
  ::CountBytes((TSet<TTuple<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
                *)&this->NumDormantObjectsPerConnection,param_1);
  ::FString::FString(&local_150,"NumDormantObjectsPerConnection");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_320,&local_150);
  if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_320);
  this_01 = &this->FullyDormantObjectsByLevel;
  TSet<TTuple<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::CountBytes((TSet<TTuple<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                *)this_01,param_1);
  pTVar17 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->FullyDormantObjectsByLevel).field_0x10;
  local_280._padding_._0_4_ = 0;
  local_350 = 1;
  local_280._padding_._4_4_ = 1;
  local_280.UnvisitedBitMask = 0xffffffff;
  local_280.CurrentBitIndex = 0;
  local_280.BaseBitIndex = 0;
  local_280.Array = pTVar17;
  if (*(int *)&(this->FullyDormantObjectsByLevel).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_280);
  }
  uVar16 = *(uint *)&(this->FullyDormantObjectsByLevel).field_0x28;
  TStack_2e8._padding_ = CONCAT44(local_280._padding_._4_4_,(undefined4)local_280._padding_);
  bVar12 = (byte)uVar16 & 0x1f;
  TStack_2e8.CurrentBitIndex = local_280.CurrentBitIndex;
  TStack_2e8.UnvisitedBitMask = local_280.UnvisitedBitMask;
  TStack_2e8._28_4_ = local_280._28_4_;
  TStack_2e8.BaseBitIndex = local_280.BaseBitIndex;
  local_2c8 = CONCAT44(local_2c8._4_4_,
                       *(int *)&(this->FullyDormantObjectsByLevel).field_0x8 -
                       *(int *)&(this->FullyDormantObjectsByLevel).field_0x34);
  local_2c0._padding_._0_4_ = (int)uVar16 >> 5;
  local_2c0._padding_._4_4_ = 1 << bVar12;
  local_2c0.UnvisitedBitMask = -1 << bVar12;
  TStack_2e8.Array = local_280.Array;
  local_2c0.BaseBitIndex = uVar16 & 0xffffffe0;
  TStack_238.Array = local_280.Array;
  uStack_218 = local_2c8;
  local_2f0 = (TSet<FNetworkObjectList::FActorSubObjectReferences,FNetworkObjectList::FActorSubObjectRefKeyFuncs,FDefaultSetAllocator>
               *)this_01;
  local_2c0.Array = pTVar17;
  local_2c0.CurrentBitIndex = uVar16;
  local_240 = this_01;
  TStack_238._padding_ = TStack_2e8._padding_;
  TStack_238._16_8_ = TStack_2e8._16_8_;
  TStack_238._24_8_ = TStack_2e8._24_8_;
  if (((int)uVar16 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (uVar16 != *(uint *)&(this->FullyDormantObjectsByLevel).field_0x28) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2c0);
    pTVar17 = local_2c0.Array;
    uVar16 = local_2c0.CurrentBitIndex;
  }
  while( true ) {
    pTVar6 = local_240;
    if (*(int *)(&local_240->field_0x0 + 8) - *(int *)(&local_240->field_0x0 + 0x34) !=
        (int)uStack_218) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_238.CurrentBitIndex == uVar16) && (TStack_238.Array == pTVar17)) &&
       (pTVar6 == this_01)) break;
    lVar14 = *(longlong *)&pTVar6->field_0x0 + (longlong)TStack_238.CurrentBitIndex * 0x60;
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)*(int *)(lVar14 + 0x10) * 0x18,
               (longlong)*(int *)(lVar14 + 0x14) * 0x18);
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(ulonglong)(*(int *)(lVar14 + 0x30) + 0x1fU >> 5) << 2,
               (ulonglong)(*(int *)(lVar14 + 0x34) + 0x1fU >> 5) << 2);
    lVar14 = (longlong)*(int *)(lVar14 + 0x50) << 2;
    (**(code **)(*(longlong *)param_1 + 0x10))(param_1,lVar14,lVar14);
    TStack_238.UnvisitedBitMask = TStack_238.UnvisitedBitMask & ~TStack_238._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_238);
  }
  ::FString::FString(&local_f0,"FullyDormantObjectsByLevel");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_320,&local_f0);
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_320);
  this_02 = &this->DormantObjectsPerConnection;
  local_248 = this_02;
  TSet<TTuple<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>,0>,FDefaultSetAllocator>
  ::CountBytes((TSet<TTuple<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>,0>,FDefaultSetAllocator>
                *)this_02,param_1);
  uVar24 = local_350;
  pTStack_370 = (TBitArray<FDefaultBitArrayAllocator> *)
                &(this->DormantObjectsPerConnection).field_0x10;
  iVar21 = *(int *)&(this->DormantObjectsPerConnection).field_0x28;
  uVar16 = (uint)local_350;
  local_340 = 0;
  iStack_32c = 0;
  iStack_328 = 0;
  uStack_33c = uVar16;
  if (iVar21 != 0) {
    puVar22 = *(uint **)&(this->DormantObjectsPerConnection).field_0x20;
    if (puVar22 == (uint *)0x0) {
      puVar22 = (uint *)pTStack_370;
    }
    uVar11 = *puVar22;
    iStack_328 = 0;
    local_340 = 0;
    while (uVar11 == 0) {
      iStack_328 = iStack_328 + 0x20;
      lVar14 = (longlong)local_340;
      local_340 = local_340 + 1;
      if ((int)(iVar21 + -1 + (iVar21 + -1 >> 0x1f & 0x1fU)) >> 5 < local_340) goto LAB_148026bcc;
      uVar11 = puVar22[lVar14 + 1];
    }
    uStack_33c = -uVar11 & uVar11;
    uVar1 = (ulonglong)uStack_33c * 2 + 1;
    lVar14 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_260 = (int)lVar14;
    iStack_32c = local_260 + -1 + iStack_328;
    if (iVar21 < iStack_32c) {
LAB_148026bcc:
      iStack_32c = iVar21;
    }
  }
  local_330 = 0xffffffff;
  uVar11 = *(uint *)&(this->DormantObjectsPerConnection).field_0x28;
  bVar12 = (byte)uVar11 & 0x1f;
  local_358 = *(int *)&(this->DormantObjectsPerConnection).field_0x8 -
              *(int *)&(this->DormantObjectsPerConnection).field_0x34;
  uStack_378 = CONCAT44(uStack_33c,local_340);
  iStack_364 = iStack_32c;
  uStack_368 = 0xffffffff;
  uStack_35c = uStack_324;
  iStack_360 = iStack_328;
  local_2a0._padding_._0_4_ = (int)uVar11 >> 5;
  local_2a0._padding_._4_4_ = uVar16 << bVar12;
  local_2a0.UnvisitedBitMask = -1 << bVar12;
  local_2a0.BaseBitIndex = uVar11 & 0xffffffe0;
  uStack_1b8 = CONCAT44(uStack_354,local_358);
  local_380 = (FNetworkObjectList *)this_02;
  puStack_338 = (undefined1 *)pTStack_370;
  local_2a0.Array = pTStack_370;
  local_2a0.CurrentBitIndex = uVar11;
  local_1e0 = this_02;
  TStack_1d8._padding_ = uStack_378;
  TStack_1d8.Array = pTStack_370;
  TStack_1d8._16_8_ = _uStack_368;
  TStack_1d8._24_8_ = _iStack_360;
  if ((((int)uVar11 < 0) || (iVar21 < (int)uVar11)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (uVar11 != *(uint *)&(this->DormantObjectsPerConnection).field_0x28) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2a0);
  }
  uStack_378 = CONCAT44(local_2a0._padding_._4_4_,(int)local_2a0._padding_);
  iStack_364 = local_2a0.CurrentBitIndex;
  uStack_368 = local_2a0.UnvisitedBitMask;
  uStack_35c = local_2a0._28_4_;
  iStack_360 = local_2a0.BaseBitIndex;
  pTStack_370 = local_2a0.Array;
  local_2f8 = local_2a0.Array;
  local_348 = local_2a0.CurrentBitIndex;
  while( true ) {
    pTVar8 = local_1e0;
    uVar16 = local_348;
    iVar21 = 0;
    if (*(int *)(&local_1e0->field_0x0 + 8) - *(int *)(&local_1e0->field_0x0 + 0x34) !=
        (int)uStack_1b8) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    uVar11 = (uint)uVar24;
    iVar18 = 0;
    iStack_364 = iVar18;
    if (((TStack_1d8.CurrentBitIndex == uVar16) && (TStack_1d8.Array == local_2f8)) &&
       (pTVar8 == this_02)) break;
    lVar14 = (longlong)TStack_1d8.CurrentBitIndex * 0x60 + *(longlong *)&pTVar8->field_0x0;
    this_00 = (TSet<TTuple<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
               *)(lVar14 + 8);
    TSet<TTuple<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::CountBytes(this_00,param_1);
    iVar3 = *(int *)(lVar14 + 0x30);
    pTVar17 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar14 + 0x18);
    if (iVar3 != 0) {
      pTVar19 = pTVar17;
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 0x28) !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar19 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 0x28);
      }
      uVar16 = *(uint *)(pTVar19->AllocatorInstance).InlineData;
      iVar18 = iVar21;
      while (uVar16 == 0) {
        lVar13 = (longlong)iVar18;
        iVar21 = iVar21 + 0x20;
        iVar18 = iVar18 + 1;
        iStack_364 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_148026d9d;
        uVar16 = *(uint *)((pTVar19->AllocatorInstance).InlineData + lVar13 * 4 + 4);
      }
      uVar11 = -uVar16 & uVar16;
      uVar1 = (ulonglong)uVar11 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_25c = (int)lVar13;
      iStack_364 = iVar21 + -1 + local_25c;
      if (iVar3 < iStack_364) {
        iStack_364 = iVar3;
      }
    }
LAB_148026d9d:
    local_358 = *(int *)(lVar14 + 0x10) - *(int *)(lVar14 + 0x3c);
    uVar16 = *(uint *)(lVar14 + 0x30);
    uStack_378 = CONCAT44(uVar11,iVar18);
    uVar11 = uVar16 & 0xffffffe0;
    uStack_368 = 0xffffffff;
    uStack_35c = local_8c;
    iStack_360 = iVar21;
    TStack_208._padding_ = uStack_378;
    iVar18 = (int)uVar16 >> 5;
    uStack_1e8 = CONCAT44(uStack_354,local_358);
    TStack_208.UnvisitedBitMask = 0xffffffff;
    TStack_208.CurrentBitIndex = iStack_364;
    TStack_208.BaseBitIndex = iVar21;
    TStack_208._28_4_ = local_8c;
    local_380 = (FNetworkObjectList *)this_00;
    pTStack_370 = pTVar17;
    local_210 = this_00;
    TStack_208.Array = pTVar17;
    if ((((int)uVar16 < 0) || (iVar3 < (int)uVar16)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar15 = *(uint *)(lVar14 + 0x30);
    if (uVar16 != uVar15) {
      pTVar19 = pTVar17;
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 0x28) !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar19 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 0x28);
      }
      uVar16 = -1 << ((byte)uVar16 & 0x1f) &
               *(uint *)((pTVar19->AllocatorInstance).InlineData + (longlong)iVar18 * 4);
      while (uVar16 == 0) {
        lVar14 = (longlong)iVar18;
        uVar11 = uVar11 + 0x20;
        iVar18 = iVar18 + 1;
        uVar16 = uVar15;
        if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
        goto LAB_148026eb0;
        uVar16 = *(uint *)((pTVar19->AllocatorInstance).InlineData + lVar14 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_258 = (int)lVar14;
      uVar16 = (uVar11 - 1) + local_258;
      if ((int)uVar15 < (int)uVar16) {
        uVar16 = uVar15;
      }
    }
LAB_148026eb0:
    while( true ) {
      pTVar7 = local_210;
      if (*(int *)&(local_210->Elements).field_0x8 - *(int *)&(local_210->Elements).field_0x34 !=
          (int)uStack_1e8) {
        local_res20[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (((TStack_208.CurrentBitIndex == uVar16) && (TStack_208.Array == pTVar17)) &&
         (pTVar7 == this_00)) break;
      lVar14 = *(longlong *)&pTVar7->Elements + (longlong)TStack_208.CurrentBitIndex * 0x60;
      (**(code **)(*(longlong *)param_1 + 0x10))
                (param_1,(longlong)*(int *)(lVar14 + 0x10) * 0x18,
                 (longlong)*(int *)(lVar14 + 0x14) * 0x18);
      (**(code **)(*(longlong *)param_1 + 0x10))
                (param_1,(ulonglong)(*(int *)(lVar14 + 0x30) + 0x1fU >> 5) << 2,
                 (ulonglong)(*(int *)(lVar14 + 0x34) + 0x1fU >> 5) << 2);
      lVar14 = (longlong)*(int *)(lVar14 + 0x50) << 2;
      (**(code **)(*(longlong *)param_1 + 0x10))(param_1,lVar14,lVar14);
      TStack_208.UnvisitedBitMask = TStack_208.UnvisitedBitMask & ~TStack_208._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_208);
    }
    TStack_1d8.UnvisitedBitMask = TStack_1d8.UnvisitedBitMask & ~TStack_1d8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1d8);
    uVar24 = local_350;
    this_02 = local_248;
  }
  ::FString::FString(&local_100,"DormantObjectsPerConnection");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_320,&local_100);
  if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_320);
  TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::CountBytes
            (&this->AllNetworkObjects,param_1);
  iVar3 = *(int *)&(this->AllNetworkObjects).Elements.field_0x28;
  puVar2 = &(this->AllNetworkObjects).Elements.field_0x10;
  if (iVar3 != 0) {
    puVar22 = *(uint **)&(this->AllNetworkObjects).Elements.field_0x20;
    if (puVar22 == (uint *)0x0) {
      puVar22 = (uint *)puVar2;
    }
    uVar16 = *puVar22;
    iVar18 = iVar21;
    while (uVar16 == 0) {
      lVar14 = (longlong)iVar21;
      iVar18 = iVar18 + 0x20;
      iVar21 = iVar21 + 1;
      iStack_364 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar21) goto LAB_14802707d;
      uVar16 = puVar22[lVar14 + 1];
    }
    uVar11 = -uVar16 & uVar16;
    uVar1 = (ulonglong)uVar11 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_254 = (int)lVar14;
    iStack_364 = iVar18 + -1 + local_254;
    if (iVar3 < iStack_364) {
      iStack_364 = iVar3;
    }
  }
LAB_14802707d:
  uVar16 = *(uint *)&(this->AllNetworkObjects).Elements.field_0x28;
  uVar15 = uVar16 & 0xffffffe0;
  local_358 = *(int *)&(this->AllNetworkObjects).Elements.field_0x8 -
              *(int *)&(this->AllNetworkObjects).Elements.field_0x34;
  uStack_368 = 0xffffffff;
  uStack_378 = CONCAT44(uVar11,iVar21);
  uStack_35c = local_6c;
  iStack_360 = iVar18;
  TStack_1a8._padding_ = uStack_378;
  iVar21 = (int)uVar16 >> 5;
  uStack_188 = CONCAT44(uStack_354,local_358);
  TStack_1a8.UnvisitedBitMask = 0xffffffff;
  TStack_1a8.CurrentBitIndex = iStack_364;
  TStack_1a8.BaseBitIndex = iVar18;
  TStack_1a8._28_4_ = local_6c;
  local_380 = this;
  pTStack_370 = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  local_1b0 = this;
  TStack_1a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar16 < 0) || (iVar3 < (int)uVar16)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar11 = *(uint *)&(this->AllNetworkObjects).Elements.field_0x28;
  if (uVar16 != uVar11) {
    puVar20 = *(undefined1 **)&(this->AllNetworkObjects).Elements.field_0x20;
    if (puVar20 == (undefined1 *)0x0) {
      puVar20 = puVar2;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar21 * 4);
    while (uVar16 == 0) {
      lVar14 = (longlong)iVar21;
      uVar15 = uVar15 + 0x20;
      iVar21 = iVar21 + 1;
      uVar16 = uVar11;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
      goto LAB_148027190;
      uVar16 = *(uint *)(puVar20 + lVar14 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_250 = (int)lVar14;
    uVar16 = (uVar15 - 1) + local_250;
    if ((int)uVar11 < (int)uVar16) {
      uVar16 = uVar11;
    }
  }
LAB_148027190:
  while( true ) {
    pFVar9 = local_1b0;
    if (*(int *)&(local_1b0->AllNetworkObjects).Elements.field_0x8 -
        *(int *)&(local_1b0->AllNetworkObjects).Elements.field_0x34 != (int)uStack_188) {
      local_388 = 0;
      `TSparseArray<TSparseSetElement<TSharedPtr<FNetworkObjectInfo,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_388);
    }
    if (((TStack_1a8.CurrentBitIndex == uVar16) &&
        (TStack_1a8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pFVar9 == this))
    break;
    lVar14 = *(longlong *)
              (*(longlong *)&(pFVar9->AllNetworkObjects).Elements +
              (longlong)TStack_1a8.CurrentBitIndex * 0x18);
    if (lVar14 != 0) {
      (**(code **)(*(longlong *)param_1 + 0x10))(param_1,0xd8,0xd8);
      ::FString::FString(&local_110,"FNetworkObjectInfo::CountBytes");
      UE::Net::Private::GranularMemoryTracking::FScopeMarker::FScopeMarker
                (&local_d0,param_1,&local_110);
      if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
      }
      UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_d0);
      TSet<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,FNetworkObjectInfo::FNetConnectionKeyFuncs,FDefaultSetAllocator>
      ::CountBytes((TSet<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,FNetworkObjectInfo::FNetConnectionKeyFuncs,FDefaultSetAllocator>
                    *)(lVar14 + 0x30),param_1);
      ::FString::FString(&local_e0,"DormantConnections");
      UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_d0,&local_e0);
      if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
      }
      UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_d0);
      TSet<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,FNetworkObjectInfo::FNetConnectionKeyFuncs,FDefaultSetAllocator>
      ::CountBytes((TSet<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,FNetworkObjectInfo::FNetConnectionKeyFuncs,FDefaultSetAllocator>
                    *)(lVar14 + 0x80),param_1);
      ::FString::FString(&local_140,"RecentlyDormantConnections");
      UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_d0,&local_140);
      if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
      }
      UE::Net::Private::GranularMemoryTracking::FScopeMarker::~FScopeMarker(&local_d0);
    }
    TStack_1a8.UnvisitedBitMask = TStack_1a8.UnvisitedBitMask & ~TStack_1a8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1a8);
  }
  ::FString::FString(&local_130,"AllNetworkObjects");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_320,&local_130);
  if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_320);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)&(this->SubObjectChannelReferences).Elements.field_0x8 * 0x78
             ,(longlong)*(int *)&(this->SubObjectChannelReferences).Elements.field_0xc * 0x78);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)
                     (*(int *)&(this->SubObjectChannelReferences).Elements.field_0x28 + 0x1fU >> 5)
                     << 2,
             (ulonglong)
             (*(int *)&(this->SubObjectChannelReferences).Elements.field_0x2c + 0x1fU >> 5) << 2);
  lVar14 = (longlong)(this->SubObjectChannelReferences).HashSize << 2;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,lVar14,lVar14);
  ::FString::FString(&local_120,"SubObjectChannelReferences");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_320,&local_120);
  if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Data.AllocatorInstance.Data);
  }
  iVar18 = 0;
  pTVar23 = &this->SubObjectChannelReferences;
  iStack_360 = 0;
  puVar2 = &(this->SubObjectChannelReferences).Elements.field_0x10;
  iVar21 = *(int *)&(this->SubObjectChannelReferences).Elements.field_0x28;
  iStack_364 = 0;
  if (iVar21 == 0) {
LAB_14802745f:
    uVar16 = (uint)local_350;
  }
  else {
    puVar22 = *(uint **)&(this->SubObjectChannelReferences).Elements.field_0x20;
    if (puVar22 == (uint *)0x0) {
      puVar22 = (uint *)puVar2;
    }
    uVar16 = *puVar22;
    while (uVar16 == 0) {
      lVar14 = (longlong)iVar18;
      iStack_360 = iStack_360 + 0x20;
      iVar18 = iVar18 + 1;
      iStack_364 = iVar21;
      if ((int)(iVar21 + -1 + (iVar21 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14802745f;
      uVar16 = puVar22[lVar14 + 1];
    }
    uVar16 = -uVar16 & uVar16;
    uVar1 = (ulonglong)uVar16 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_24c = (int)lVar14;
    iStack_364 = iStack_360 + -1 + local_24c;
    if (iVar21 < iStack_364) {
      iStack_364 = iVar21;
    }
  }
  local_358 = *(int *)&(this->SubObjectChannelReferences).Elements.field_0x8 -
              *(int *)&(this->SubObjectChannelReferences).Elements.field_0x34;
  uVar11 = *(uint *)&(this->SubObjectChannelReferences).Elements.field_0x28;
  uVar15 = uVar11 & 0xffffffe0;
  uStack_378 = CONCAT44(uVar16,iVar18);
  uStack_368 = 0xffffffff;
  uStack_35c = local_4c;
  TStack_2e8._padding_ = uStack_378;
  iVar18 = (int)uVar11 >> 5;
  local_2c8 = CONCAT44(uStack_354,local_358);
  TStack_2e8.UnvisitedBitMask = 0xffffffff;
  TStack_2e8.CurrentBitIndex = iStack_364;
  TStack_2e8.BaseBitIndex = iStack_360;
  TStack_2e8._28_4_ = local_4c;
  local_380 = (FNetworkObjectList *)pTVar23;
  pTStack_370 = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  local_2f0 = pTVar23;
  TStack_2e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar11 < 0) || (iVar21 < (int)uVar11)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar16 = *(uint *)&(this->SubObjectChannelReferences).Elements.field_0x28;
  if (uVar11 != uVar16) {
    puVar20 = *(undefined1 **)&(this->SubObjectChannelReferences).Elements.field_0x20;
    if (puVar20 == (undefined1 *)0x0) {
      puVar20 = puVar2;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar18 * 4);
    while (uVar11 == 0) {
      lVar14 = (longlong)iVar18;
      uVar15 = uVar15 + 0x20;
      iVar18 = iVar18 + 1;
      uVar11 = uVar16;
      if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
      goto LAB_148027570;
      uVar11 = *(uint *)(puVar20 + lVar14 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar11 = (int)lVar14 + -1 + uVar15;
    if ((int)uVar16 < (int)uVar11) {
      uVar11 = uVar16;
    }
  }
LAB_148027570:
  while( true ) {
    pTVar5 = local_2f0;
    if (*(int *)&(local_2f0->Elements).field_0x8 - *(int *)&(local_2f0->Elements).field_0x34 !=
        (int)local_2c8) {
      `TSparseArray<TSparseSetElement<FNetworkObjectList::FActorSubObjectReferences>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_387);
    }
    if (((TStack_2e8.CurrentBitIndex == uVar11) &&
        (TStack_2e8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar5 == pTVar23)
       ) break;
    lVar13 = *(longlong *)&pTVar5->Elements + (longlong)TStack_2e8.CurrentBitIndex * 0x78;
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)*(int *)(lVar13 + 0x10) * 0x28,
               (longlong)*(int *)(lVar13 + 0x14) * 0x28);
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(ulonglong)(*(int *)(lVar13 + 0x30) + 0x1fU >> 5) << 2,
               (ulonglong)(*(int *)(lVar13 + 0x34) + 0x1fU >> 5) << 2);
    lVar14 = (longlong)*(int *)(lVar13 + 0x50) << 2;
    (**(code **)(*(longlong *)param_1 + 0x10))(param_1,lVar14,lVar14);
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)*(int *)(lVar13 + 0x60) << 5,(longlong)*(int *)(lVar13 + 100) << 5)
    ;
    TStack_2e8.UnvisitedBitMask = TStack_2e8.UnvisitedBitMask & ~TStack_2e8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2e8);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::~FScopeMarker(&local_320);
  return;
}

// Find @ 148030ce0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TSharedPtr<FNetworkObjectInfo,1> * __thiscall
FNetworkObjectList::Find
          (FNetworkObjectList *this,TSharedPtr<FNetworkObjectInfo,1> *__return_storage_ptr__,
          AActor *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedPtr<FNetworkObjectInfo,1> *pTVar2;
  
  if (param_1 == (AActor *)0x0) {
    __return_storage_ptr__->Object = (FNetworkObjectInfo *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  pTVar2 = TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::Find
                     (&this->AllNetworkObjects,param_1);
  if (pTVar2 == (TSharedPtr<FNetworkObjectInfo,1> *)0x0) {
    __return_storage_ptr__->Object = (FNetworkObjectInfo *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    __return_storage_ptr__->Object = pTVar2->Object;
    pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// FindActorInvalidSubObjects @ 148030d50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FActorInvalidSubObjectView * __thiscall
FNetworkObjectList::FindActorInvalidSubObjects
          (FNetworkObjectList *this,FActorInvalidSubObjectView *__return_storage_ptr__,
          AActor *param_1)

{
  ushort uVar1;
  FActorSubObjectReferences *pFVar2;
  FWeakObjectPtr local_res8;
  AActor *local_res18 [2];
  
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  if (param_1 != (AActor *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res18[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  }
  pFVar2 = TSet<FNetworkObjectList::FActorSubObjectReferences,FNetworkObjectList::FActorSubObjectRefKeyFuncs,FDefaultSetAllocator>
           ::Find(&this->SubObjectChannelReferences,(FObjectKey *)&local_res8);
  if (pFVar2 != (FActorSubObjectReferences *)0x0) {
    uVar1 = pFVar2->InvalidSubObjectDirtyCount;
    __return_storage_ptr__->InvalidSubObjectsPtr = &pFVar2->InvalidSubObjectChannelReferences;
    __return_storage_ptr__->InvalidSubObjectDirtyCount = uVar1;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->InvalidSubObjectDirtyCount = 0;
  __return_storage_ptr__->InvalidSubObjectsPtr =
       (TArray<FNetworkObjectList::FSubObjectChannelReference,TSizedDefaultAllocator<32>_> *)0x0;
  return __return_storage_ptr__;
}

// FindOrAdd @ 148031850

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TSharedPtr<FNetworkObjectInfo,1> * __thiscall
FNetworkObjectList::FindOrAdd
          (FNetworkObjectList *this,AActor *param_1,UNetDriver *param_2,bool *param_3)

{
  code *pcVar1;
  UNetDriver *pUVar2;
  bool bVar3;
  char cVar4;
  FSetElementId FVar5;
  FNetworkObjectInfo *pFVar6;
  undefined8 *puVar7;
  undefined4 extraout_var;
  FString *pFVar8;
  TSharedPtr<FNetworkObjectInfo,1> *pTVar9;
  undefined8 *puVar10;
  AActor *pAVar11;
  AActor *local_res10;
  UNetDriver *local_res18 [2];
  TSharedPtr<FNetworkObjectInfo,1> local_b8;
  AActor *local_a8;
  undefined8 *local_a0;
  FName local_98;
  FName local_90;
  FString local_88;
  FString local_78;
  AActor **local_68;
  UNetDriver **local_60;
  FString local_58;
  FString local_48;
  
  puVar10 = (undefined8 *)0x0;
  local_b8.SharedReferenceCount.ReferenceController._0_4_ = 0;
  if ((param_1 != (AActor *)0x0) && (((uint)param_1->_padding_ >> 0x1e & 1) == 0)) {
    local_res10 = param_1;
    local_res18[0] = param_2;
    if (param_1->bActorIsBeingDestroyed != '\0') {
      local_68 = &local_res10;
      local_60 = local_res18;
      bVar3 = `FNetworkObjectList::FindOrAdd'::__l3::<lambda_1>::operator()(&local_68);
      if (!bVar3) {
        return (TSharedPtr<FNetworkObjectInfo,1> *)0x0;
      }
    }
    pUVar2 = local_res18[0];
    pAVar11 = local_res10;
    if ((local_res18[0] == (UNetDriver *)0x0) ||
       (local_res18[0]->ReplicationSystem == (UReplicationSystem *)0x0)) {
      pFVar6 = (FNetworkObjectInfo *)
               TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::
               Find(&this->AllNetworkObjects,local_res10);
      local_b8.Object = pFVar6;
      if (pFVar6 == (FNetworkObjectInfo *)0x0) {
        if ((pUVar2 != (UNetDriver *)0x0) &&
           (cVar4 = (**(code **)(pUVar2->_padding_ + 0x488))(pUVar2,pAVar11), cVar4 != '\0')) {
          puVar7 = ::operator_new(0xd8);
          pAVar11 = local_res10;
          if (puVar7 != (undefined8 *)0x0) {
            *puVar7 = local_res10;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_res10 != (AActor *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_res10);
            }
            puVar7[1] = 0;
            local_a8 = pAVar11;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar11 != (AActor *)0x0))
            {
              UE::GC::MarkAsReachable((UObject *)pAVar11);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 1),(FObjectPtr)&local_a8);
            puVar7[6] = 0;
            puVar7[7] = 0;
            puVar7[10] = 0;
            puVar7[2] = 0;
            puVar7[3] = 0;
            *(undefined4 *)(puVar7 + 4) = 0;
            puVar7[5] = 0;
            *(undefined4 *)(puVar7 + 0xb) = 0;
            *(undefined4 *)((longlong)puVar7 + 0x5c) = 0x80;
            *(undefined4 *)(puVar7 + 0xc) = 0xffffffff;
            *(undefined4 *)((longlong)puVar7 + 100) = 0;
            puVar7[0xe] = 0;
            *(undefined4 *)(puVar7 + 0xf) = 0;
            puVar7[0x10] = 0;
            puVar7[0x11] = 0;
            puVar7[0x14] = 0;
            *(undefined4 *)(puVar7 + 0x15) = 0;
            *(undefined4 *)((longlong)puVar7 + 0xac) = 0x80;
            *(undefined4 *)(puVar7 + 0x16) = 0xffffffff;
            *(undefined4 *)((longlong)puVar7 + 0xb4) = 0;
            puVar7[0x18] = 0;
            *(undefined4 *)(puVar7 + 0x19) = 0;
            *(byte *)(puVar7 + 0x1a) = *(byte *)(puVar7 + 0x1a) & 0xf8;
            *(undefined4 *)((longlong)puVar7 + 0xd4) = 0;
            puVar10 = puVar7;
          }
          local_a0 = puVar10;
          FVar5 = TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>
                  ::Emplace<FNetworkObjectInfo_*>
                            (&this->AllNetworkObjects,
                             (FNetworkObjectInfo **)&local_b8.SharedReferenceCount,(bool *)&local_a0
                            );
          pFVar6 = (FNetworkObjectInfo *)
                   (*(longlong *)&(this->AllNetworkObjects).Elements +
                   (longlong)*(int *)CONCAT44(extraout_var,FVar5.Index) * 0x18);
          TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::
          Emplace<TSharedPtr<FNetworkObjectInfo,1>_const_&>
                    (&this->ActiveNetworkObjects,&local_b8,(bool *)pFVar6);
          if (6 < (byte)LogNetDormancy._0_1_) {
            ::FName::ToString(&local_res18[0]->NetDriverName,&local_58);
            local_98 = (FName)local_res10->_padding_;
            ::FName::ToString(&local_98,&local_88);
            UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogNetDormancy);
            if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_88.Data.AllocatorInstance.Data);
            }
            if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Data.AllocatorInstance.Data);
            }
          }
          if (param_3 != (bool *)0x0) {
            *param_3 = true;
          }
        }
      }
      else {
        if (6 < (byte)LogNetDormancy._0_1_) {
          if (pUVar2 != (UNetDriver *)0x0) {
            pFVar8 = ::FName::ToString(&pUVar2->NetDriverName,&local_48);
            pAVar11 = local_res10;
            if ((pFVar8->Data).ArrayNum == 0) {
              puVar10 = (undefined8 *)&DAT_00000001;
            }
            else {
              puVar10 = (undefined8 *)&DAT_00000001;
            }
          }
          local_90 = (FName)pAVar11->_padding_;
          ::FName::ToString(&local_90,&local_78);
          UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogNetDormancy);
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          if ((puVar10 != (undefined8 *)0x0) &&
             (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
        }
        pFVar6 = local_b8.Object;
        if (param_3 != (bool *)0x0) {
          *param_3 = false;
        }
      }
      if ((((*(int *)&(this->ObjectsDormantOnAllConnections).Elements.field_0x8 -
            *(int *)&(this->ObjectsDormantOnAllConnections).Elements.field_0x34) -
           *(int *)&(this->ActiveNetworkObjects).Elements.field_0x34) +
           *(int *)&(this->ActiveNetworkObjects).Elements.field_0x8 !=
           *(int *)&(this->AllNetworkObjects).Elements.field_0x8 -
           *(int *)&(this->AllNetworkObjects).Elements.field_0x34) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ActiveNetworkObjects.Num() + ObjectsDormantOnAllConnections.Num()) == AllNetworkObjects.Num()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetworkObjectList.cpp"
                             ,0x78,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        pTVar9 = (TSharedPtr<FNetworkObjectInfo,1> *)(*pcVar1)();
        return pTVar9;
      }
      return (TSharedPtr<FNetworkObjectInfo,1> *)pFVar6;
    }
  }
  return (TSharedPtr<FNetworkObjectInfo,1> *)0x0;
}

// FlushDormantActors @ 148032af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNetworkObjectList::FlushDormantActors
          (FNetworkObjectList *this,UNetConnection *param_1,FName *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator> *pTVar5;
  TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>
  *this_00;
  byte bVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  undefined1 auStack_148 [32];
  undefined1 local_128 [8];
  FWeakObjectPtr local_120;
  FWeakObjectPtr local_118;
  longlong *local_110;
  uint uStack_108;
  uint uStack_104;
  TBitArray<FDefaultBitArrayAllocator> *local_100;
  undefined4 uStack_f8;
  uint uStack_f4;
  uint local_f0;
  uint uStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  int local_e0;
  UNetConnection *local_d8;
  longlong *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_6c = 0x80;
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  local_78 = (uint *)0x0;
  uVar10 = 0;
  local_70 = 0;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  local_68 = 0xffffffff;
  pTVar5 = TMapBase<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>
           ::Find((TMapBase<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>
                   *)&this->FullyDormantObjectsByLevel,*param_2);
  if (pTVar5 != (TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>
                 *)0x0) {
    TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::
    Append<FDefaultSetAllocator>
              ((TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator> *
               )local_98,pTVar5);
  }
  local_118.ObjectIndex = 0;
  local_118.ObjectSerialNumber = 0;
  if (param_1 != (UNetConnection *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_120.ObjectIndex = 0;
    local_120.ObjectSerialNumber = 0;
    local_d8 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_120,(FObjectPtr)&local_d8);
    local_118 = local_120;
  }
  this_00 = TMapBase<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>,0>_>
            ::Find((TMapBase<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>,0>_>
                    *)&this->DormantObjectsPerConnection,(TObjectKey<UNetConnection> *)&local_118);
  if ((this_00 !=
       (TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>
        *)0x0) &&
     (pTVar5 = TMapBase<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>
               ::Find((TMapBase<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>
                       *)this_00,*param_2),
     pTVar5 != (TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator> *
               )0x0)) {
    TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::
    Append<FDefaultSetAllocator>
              ((TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator> *
               )local_98,pTVar5);
  }
  uVar9 = local_70;
  uStack_104 = 1;
  local_f0 = 0;
  uStack_f4 = local_f0;
  if (local_70 != 0) {
    puVar11 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar11 = local_78;
    }
    uVar12 = *puVar11;
    local_f0 = 0;
    uVar10 = 0;
    while (uVar12 == 0) {
      lVar7 = (longlong)(int)uVar10;
      local_f0 = local_f0 + 0x20;
      uVar10 = uVar10 + 1;
      uStack_f4 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar10)
      goto LAB_148032c71;
      uVar12 = puVar11[lVar7 + 1];
    }
    uStack_104 = -uVar12 & uVar12;
    uVar1 = (ulonglong)uStack_104 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_e0 = (int)lVar7;
    uStack_f4 = (local_f0 - 1) + local_e0;
    if ((int)local_70 < (int)uStack_f4) {
      uStack_f4 = local_70;
    }
  }
LAB_148032c71:
  local_110 = (longlong *)local_98;
  local_100 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  uVar12 = local_70 & 0xffffffe0;
  iStack_e8 = local_98._8_4_ - local_64;
  uStack_f8 = 0xffffffff;
  TStack_c8.CurrentBitIndex = uStack_f4;
  TStack_c8.UnvisitedBitMask = 0xffffffff;
  TStack_c8._padding_ = CONCAT44(uStack_104,uVar10);
  iVar8 = (int)local_70 >> 5;
  TStack_c8._28_4_ = uStack_f4;
  TStack_c8.BaseBitIndex = local_f0;
  uStack_a8 = CONCAT44(uStack_e4,iStack_e8);
  bVar6 = (byte)local_70;
  uStack_108 = uVar10;
  uStack_ec = uStack_f4;
  local_d0 = local_110;
  TStack_c8.Array = local_100;
  if (((int)local_70 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar9 != local_70) {
    puVar11 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar11 = local_78;
    }
    uVar10 = -1 << (bVar6 & 0x1f) & puVar11[iVar8];
    while (uVar10 == 0) {
      lVar7 = (longlong)iVar8;
      uVar12 = uVar12 + 0x20;
      iVar8 = iVar8 + 1;
      uVar9 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
      goto LAB_148032d7c;
      uVar10 = puVar11[lVar7 + 1];
    }
    uVar1 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar9 = (int)lVar7 + -1 + uVar12;
    if ((int)local_70 < (int)uVar9) {
      uVar9 = local_70;
    }
  }
LAB_148032d7c:
  while( true ) {
    plVar3 = local_d0;
    if ((int)local_d0[1] - *(int *)((longlong)local_d0 + 0x34) != (int)uStack_a8) {
      `TSparseArray<TSparseSetElement<TSharedPtr<FNetworkObjectInfo,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_128);
    }
    if (((TStack_c8.CurrentBitIndex == uVar9) &&
        (TStack_c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
       (plVar3 == (longlong *)local_98)) break;
    MarkActiveInternal(this,(TSharedPtr<FNetworkObjectInfo,1> *)
                            (*plVar3 + (longlong)TStack_c8.CurrentBitIndex * 0x18),param_1,
                       (param_1->Driver).field0_0x0.DebugPtr);
    TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
  }
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  TSparseArray<TSparseSetElement<TSharedPtr<FNetworkObjectInfo,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TSharedPtr<FNetworkObjectInfo,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TSharedPtr<FNetworkObjectInfo,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return;
}

// ForceActorRelevantNextUpdate @ 1480345c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNetworkObjectList::ForceActorRelevantNextUpdate
          (FNetworkObjectList *this,AActor *param_1,UNetDriver *param_2)

{
  TSharedPtr<FNetworkObjectInfo,1> *pTVar1;
  
  pTVar1 = FindOrAdd(this,param_1,param_2,(bool *)0x0);
  if (pTVar1 != (TSharedPtr<FNetworkObjectInfo,1> *)0x0) {
    pTVar1->Object->ForceRelevantFrame = param_2->ReplicationFrame + 1;
  }
  return;
}

// GetNumDormantActorsForConnection @ 148036210

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall
FNetworkObjectList::GetNumDormantActorsForConnection
          (FNetworkObjectList *this,UNetConnection *param_1)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UNetConnection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = (FWeakObjectPtr)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UNetConnection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  local_res10 = local_res8;
  iVar2 = TSet<TTuple<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TWeakObjectPtr<UNetConnection_const_,FWeakObjectPtr>_>
                    ((TSet<TTuple<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
                      *)&this->NumDormantObjectsPerConnection,
                     local_res8.ObjectSerialNumber ^ local_res8.ObjectIndex,
                     (TWeakObjectPtr<UNetConnection_const_,FWeakObjectPtr> *)&local_res10);
  if (iVar2 != -1) {
    lVar1 = *(longlong *)&(this->NumDormantObjectsPerConnection).field_0x0 + (longlong)iVar2 * 0x14;
    piVar3 = (int *)(lVar1 + 8);
    if (lVar1 == 0) {
      piVar3 = (int *)0x0;
    }
    if (piVar3 != (int *)0x0) {
      return *piVar3;
    }
  }
  return 0;
}

// HandleConnectionAdded @ 148038b00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FNetworkObjectList::HandleConnectionAdded(FNetworkObjectList *this)

{
  undefined1 *puVar1;
  TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator> *this_00;
  TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>
  *this_01;
  int iVar2;
  bool bVar3;
  undefined1 local_38 [12];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  this_00 = &this->ObjectsDormantOnAllConnections;
  TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::TIterator::
  TIterator((TIterator *)local_38,this_00);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::
      Emplace<TSharedPtr<FNetworkObjectInfo,1>_const_&>
                (&this->ActiveNetworkObjects,(TSharedPtr<FNetworkObjectInfo,1> *)&stack0x00000008,
                 (bool *)(*(longlong *)local_38._0_8_ + (longlong)local_1c * 0x18));
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_38 + 8));
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  bVar3 = 1 < (this->ObjectsDormantOnAllConnections).HashSize;
  if (!bVar3) {
    TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::
    UnhashElements(this_00);
  }
  TSparseArray<TSparseSetElement<TSharedPtr<FNetworkObjectInfo,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(&this_00->Elements,0,
                    *(int *)&(this->ObjectsDormantOnAllConnections).Elements.field_0x8);
  puVar1 = &(this->ObjectsDormantOnAllConnections).Elements.field_0xc;
  *(undefined4 *)&(this->ObjectsDormantOnAllConnections).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ObjectsDormantOnAllConnections).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ObjectsDormantOnAllConnections).Elements.field_0x34 = 0;
  iVar2 = *(int *)&(this->ObjectsDormantOnAllConnections).Elements.field_0x2c;
  *(undefined4 *)&(this->ObjectsDormantOnAllConnections).Elements.field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->ObjectsDormantOnAllConnections).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->ObjectsDormantOnAllConnections).Elements.field_0x10,0);
  }
  if (bVar3) {
    (this->ObjectsDormantOnAllConnections).HashSize = 1;
    TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::Rehash
              (this_00);
  }
  this_01 = &this->FullyDormantObjectsByLevel;
  bVar3 = 1 < *(int *)&(this->FullyDormantObjectsByLevel).field_0x48;
  if (!bVar3) {
    TSet<TTuple<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                      *)this_01);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_01,0,*(int *)&(this->FullyDormantObjectsByLevel).field_0x8);
  puVar1 = &(this->FullyDormantObjectsByLevel).field_0xc;
  *(undefined4 *)&(this->FullyDormantObjectsByLevel).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,(ForAnyElementType *)this_01,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->FullyDormantObjectsByLevel).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FullyDormantObjectsByLevel).field_0x34 = 0;
  iVar2 = *(int *)&(this->FullyDormantObjectsByLevel).field_0x2c;
  *(undefined4 *)&(this->FullyDormantObjectsByLevel).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->FullyDormantObjectsByLevel).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->FullyDormantObjectsByLevel).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->FullyDormantObjectsByLevel).field_0x48 = 1;
    TSet<TTuple<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
              *)this_01);
  }
  return;
}

// HandleRemoveActiveSubObjectRef @ 14803c470

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FNetworkObjectList::HandleRemoveActiveSubObjectRef
          (FNetworkObjectList *this,FActorSubObjectReferences *param_1,
          TWeakObjectPtr<UObject,FWeakObjectPtr> *param_2,UObject *param_3)

{
  short *psVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  ForElementType<FSetElementId> FVar7;
  FSetElementId FVar8;
  UObject *local_res20;
  TWeakObjectPtr<UObject,FWeakObjectPtr> *local_38;
  FActorSubObjectReferences *local_30;
  UObject **local_28;
  
  uVar2 = (param_2->WeakPtr).ObjectSerialNumber;
  uVar3 = (param_2->WeakPtr).ObjectIndex;
  if (*(int *)&(param_1->ActiveSubObjectChannelReferences).Elements.field_0x8 !=
      *(int *)&(param_1->ActiveSubObjectChannelReferences).Elements.field_0x34) {
    FVar7 = (param_1->ActiveSubObjectChannelReferences).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(param_1->ActiveSubObjectChannelReferences).Hash;
    }
    FVar8.Index = *(int *)((longlong)FVar7 +
                          (ulonglong)
                          ((param_1->ActiveSubObjectChannelReferences).HashSize - 1U &
                          (uVar2 ^ uVar3)) * 4);
    if (FVar8.Index != -1) {
      lVar4 = *(longlong *)&(param_1->ActiveSubObjectChannelReferences).Elements;
      do {
        lVar6 = (longlong)FVar8.Index;
        if ((*(uint *)(lVar4 + lVar6 * 0x28) == uVar3) &&
           (*(uint *)(lVar4 + 4 + lVar6 * 0x28) == uVar2)) {
          if (FVar8.Index == -1) {
            return false;
          }
          psVar1 = (short *)(lVar4 + 8 + (longlong)FVar8.Index * 0x28);
          *psVar1 = *psVar1 + -1;
          lVar4 = lVar4 + (longlong)FVar8.Index * 0x28;
          local_res20 = param_3;
          iVar5 = TArray<UObject_*,TSizedDefaultAllocator<32>_>::RemoveSingleSwap
                            ((TArray<UObject_*,TSizedDefaultAllocator<32>_> *)(lVar4 + 0x10),
                             &local_res20,Default);
          if (iVar5 < 1) {
            local_28 = &local_res20;
            local_38 = param_2;
            local_30 = param_1;
            `FNetworkObjectList::HandleRemoveActiveSubObjectRef'::__l5::<lambda_1>::operator()
                      (&local_38);
          }
          if (*(short *)(lVar4 + 8) == 0) {
            TSet<FNetworkObjectList::FSubObjectChannelReference,FNetworkObjectList::FSubObjectChannelRefKeyFuncs,FDefaultSetAllocator>
            ::Remove(&param_1->ActiveSubObjectChannelReferences,FVar8);
          }
          return true;
        }
        FVar8.Index = *(int *)(lVar4 + 0x20 + lVar6 * 0x28);
      } while (FVar8.Index != -1);
    }
  }
  return false;
}

// HandleRemoveAnySubObjectChannelRef @ 14803c570

void __thiscall
FNetworkObjectList::HandleRemoveAnySubObjectChannelRef
          (FNetworkObjectList *this,FActorSubObjectReferences *param_1,
          TWeakObjectPtr<UObject,FWeakObjectPtr> *param_2,UObject *param_3)

{
  code *pcVar1;
  bool bVar2;
  TWeakObjectPtr<UObject,FWeakObjectPtr> *local_18;
  FActorSubObjectReferences *local_10;
  
  if (((param_2->WeakPtr).ObjectIndex == 0) && ((param_2->WeakPtr).ObjectSerialNumber == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SubObjectPtr.IsExplicitlyNull() == false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetworkObjectList.cpp"
                       ,0x318,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = HandleRemoveActiveSubObjectRef(this,param_1,param_2,param_3);
  if (!bVar2) {
    bVar2 = HandleRemoveInvalidSubObjectRef(this,param_1,param_2,param_3);
    if (!bVar2) {
      local_18 = param_2;
      local_10 = param_1;
      `FNetworkObjectList::HandleRemoveAnySubObjectChannelRef'::__l2::<lambda_1>::operator()
                (&local_18);
    }
  }
  return;
}

// HandleRemoveInvalidSubObjectRef @ 14803c620

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FNetworkObjectList::HandleRemoveInvalidSubObjectRef
          (FNetworkObjectList *this,FActorSubObjectReferences *param_1,
          TWeakObjectPtr<UObject,FWeakObjectPtr> *param_2,UObject *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  UObject *local_res20;
  TWeakObjectPtr<UObject,FWeakObjectPtr> *local_48;
  FActorSubObjectReferences *local_40;
  UObject **local_38;
  
  iVar6 = (param_1->InvalidSubObjectChannelReferences).ArrayNum;
  pFVar1 = (param_1->InvalidSubObjectChannelReferences).AllocatorInstance.Data;
  if (pFVar1 != pFVar1 + (longlong)iVar6 * 0x20) {
    pFVar8 = pFVar1;
    do {
      if ((*(int *)pFVar8 == (param_2->WeakPtr).ObjectIndex) &&
         (*(int *)(pFVar8 + 4) == (param_2->WeakPtr).ObjectSerialNumber)) {
        uVar7 = (uint)((longlong)pFVar8 - (longlong)pFVar1 >> 5);
        if (uVar7 == 0xffffffff) {
          return false;
        }
        uVar5 = 0;
        if ((int)uVar7 < iVar6) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        local_res20 = param_3;
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        pFVar1 = (param_1->InvalidSubObjectChannelReferences).AllocatorInstance.Data;
        *(short *)(pFVar1 + (longlong)(int)uVar7 * 0x20 + 8) =
             *(short *)(pFVar1 + (longlong)(int)uVar7 * 0x20 + 8) + -1;
        iVar6 = TArray<UObject_*,TSizedDefaultAllocator<32>_>::RemoveSingleSwap
                          ((TArray<UObject_*,TSizedDefaultAllocator<32>_> *)
                           (pFVar1 + (longlong)(int)uVar7 * 0x20 + 0x10),&local_res20,Default);
        if (iVar6 < 1) {
          local_38 = &local_res20;
          local_48 = param_2;
          local_40 = param_1;
          `FNetworkObjectList::HandleRemoveInvalidSubObjectRef'::__l5::<lambda_1>::operator()
                    (&local_48);
        }
        if (*(short *)(pFVar1 + (longlong)(int)uVar7 * 0x20 + 8) == 0) {
          uVar5 = 0;
          if ((int)uVar7 < (param_1->InvalidSubObjectChannelReferences).ArrayNum) {
            uVar5 = ~uVar7 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          TArray<FNetworkObjectList::FSubObjectChannelReference,TSizedDefaultAllocator<32>_>::
          RemoveAtSwapImpl(&param_1->InvalidSubObjectChannelReferences,uVar7);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,&(param_1->InvalidSubObjectChannelReferences).AllocatorInstance,
                     (param_1->InvalidSubObjectChannelReferences).ArrayNum,
                     &(param_1->InvalidSubObjectChannelReferences).ArrayMax);
        }
        return true;
      }
      pFVar8 = pFVar8 + 0x20;
    } while (pFVar8 != pFVar1 + (longlong)iVar6 * 0x20);
  }
  return false;
}

// HandleSwapReferenceForDormancy @ 14803cb40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FNetworkObjectList::HandleSwapReferenceForDormancy
          (FNetworkObjectList *this,FActorSubObjectReferences *param_1,
          TWeakObjectPtr<UObject,FWeakObjectPtr> *param_2,UObject *param_3,UObject *param_4)

{
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *this_00;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FActorSubObjectReferences *pFVar4;
  bool bVar5;
  int iVar6;
  FSubObjectChannelReference *pFVar7;
  FScriptContainerElement *pFVar8;
  FSubObjectChannelReference *pFVar9;
  FActorSubObjectReferences *local_res10;
  UObject *local_res20;
  UObject **local_68;
  TWeakObjectPtr<UObject,FWeakObjectPtr> *local_60;
  FActorSubObjectReferences **local_58;
  TWeakObjectPtr<UObject,FWeakObjectPtr> *local_50;
  FActorSubObjectReferences **local_48;
  UObject **local_40;
  UObject **local_38;
  UObject **local_30;
  TWeakObjectPtr<UObject,FWeakObjectPtr> *local_28;
  FActorSubObjectReferences **local_20;
  UObject **local_18;
  
  local_res10 = param_1;
  local_res20 = param_3;
  if ((param_1 == (FActorSubObjectReferences *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("SubObjectsRefInfo",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetworkObjectList.cpp"
                         ,0x371,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar4 = local_res10;
  pFVar7 = TSet<FNetworkObjectList::FSubObjectChannelReference,FNetworkObjectList::FSubObjectChannelRefKeyFuncs,FDefaultSetAllocator>
           ::Find(&local_res10->ActiveSubObjectChannelReferences,param_2);
  if (pFVar7 == (FSubObjectChannelReference *)0x0) {
    pFVar7 = (FSubObjectChannelReference *)
             (pFVar4->InvalidSubObjectChannelReferences).AllocatorInstance.Data;
    pFVar9 = pFVar7 + (pFVar4->InvalidSubObjectChannelReferences).ArrayNum;
    if (pFVar7 != pFVar9) {
      do {
        if (((pFVar7->SubObjectPtr).WeakPtr.ObjectIndex == (param_2->WeakPtr).ObjectIndex) &&
           ((pFVar7->SubObjectPtr).WeakPtr.ObjectSerialNumber ==
            (param_2->WeakPtr).ObjectSerialNumber)) {
          if (pFVar7 != (FSubObjectChannelReference *)0x0) goto LAB_14803cc08;
          break;
        }
        pFVar7 = pFVar7 + 1;
      } while (pFVar7 != pFVar9);
    }
    local_48 = &local_res10;
    local_40 = &local_res20;
    local_38 = &param_4;
    local_50 = param_2;
    `FNetworkObjectList::HandleSwapReferenceForDormancy'::__l17::<lambda_3>::operator()(&local_50);
  }
  else {
LAB_14803cc08:
    this_00 = &pFVar7->RegisteredOwners;
    iVar6 = TArray<UObject_*,TSizedDefaultAllocator<32>_>::RemoveSingleSwap
                      (this_00,&local_res20,Default);
    if (iVar6 < 1) {
      local_30 = &local_res20;
      local_20 = &local_res10;
      local_18 = &param_4;
      local_28 = param_2;
      `FNetworkObjectList::HandleSwapReferenceForDormancy'::__l15::<lambda_1>::operator()(&local_30)
      ;
    }
    pFVar8 = (this_00->AllocatorInstance).Data;
    pFVar2 = pFVar8 + (longlong)(pFVar7->RegisteredOwners).ArrayNum * 8;
    for (; pFVar8 != pFVar2; pFVar8 = pFVar8 + 8) {
      if (*(UObject **)pFVar8 == param_4) {
        local_68 = &param_4;
        local_58 = &local_res10;
        local_60 = param_2;
        `FNetworkObjectList::HandleSwapReferenceForDormancy'::__l15::<lambda_2>::operator()
                  (&local_68);
        break;
      }
    }
    pFVar2 = (this_00->AllocatorInstance).Data;
    if (((pFVar2 <= (FScriptContainerElement *)&param_4) &&
        ((FScriptContainerElement *)&param_4 <
         pFVar2 + (longlong)(pFVar7->RegisteredOwners).ArrayMax * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar6 = (pFVar7->RegisteredOwners).ArrayNum;
    piVar1 = &(pFVar7->RegisteredOwners).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&this_00->AllocatorInstance,piVar1);
    }
    (pFVar7->RegisteredOwners).ArrayNum = iVar6 + 1;
    *(UObject **)((this_00->AllocatorInstance).Data + (longlong)iVar6 * 8) = param_4;
  }
  return;
}

// InvalidateSubObject @ 148040f30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNetworkObjectList::InvalidateSubObject
          (FNetworkObjectList *this,AActor *param_1,UObject *param_2,ENetSubObjectStatus param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  FScriptContainerElement FVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FActorSubObjectReferences *pFVar9;
  longlong lVar10;
  ushort uVar11;
  ForElementType<FSetElementId> FVar12;
  FSetElementId FVar13;
  FScriptContainerElement *pFVar14;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  FObjectKey local_48;
  AActor *local_40;
  UObject *local_38 [2];
  
  if ((param_3 == Active) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6392462506836622715>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetworkObjectList.cpp"
                         ,0x285,"InvalidStatus != ENetSubObjectStatus::Active"), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_48.ObjectIndex = 0;
  local_48.ObjectSerialNumber = 0;
  if (param_1 != (AActor *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_40 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_40);
    local_48.ObjectIndex = local_res10.ObjectIndex;
    local_48.ObjectSerialNumber = local_res10.ObjectSerialNumber;
  }
  pFVar9 = TSet<FNetworkObjectList::FActorSubObjectReferences,FNetworkObjectList::FActorSubObjectRefKeyFuncs,FDefaultSetAllocator>
           ::Find(&this->SubObjectChannelReferences,&local_48);
  if (pFVar9 != (FActorSubObjectReferences *)0x0) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_2);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_38[0] = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_2);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_38);
    if (*(int *)&(pFVar9->ActiveSubObjectChannelReferences).Elements.field_0x8 !=
        *(int *)&(pFVar9->ActiveSubObjectChannelReferences).Elements.field_0x34) {
      FVar12 = (pFVar9->ActiveSubObjectChannelReferences).Hash.SecondaryData;
      if (FVar12 == (ForElementType<FSetElementId>)0x0) {
        FVar12 = (ForElementType<FSetElementId>)&(pFVar9->ActiveSubObjectChannelReferences).Hash;
      }
      FVar13.Index = *(int *)((longlong)FVar12 +
                             (ulonglong)
                             ((pFVar9->ActiveSubObjectChannelReferences).HashSize - 1U &
                             (local_res8.ObjectSerialNumber ^ local_res8.ObjectIndex)) * 4);
      if (FVar13.Index != -1) {
        lVar4 = *(longlong *)&(pFVar9->ActiveSubObjectChannelReferences).Elements;
        do {
          lVar10 = (longlong)FVar13.Index;
          if ((*(uint *)(lVar4 + lVar10 * 0x28) == local_res8.ObjectIndex) &&
             (*(uint *)(lVar4 + 4 + lVar10 * 0x28) == local_res8.ObjectSerialNumber)) {
            if (FVar13.Index == -1) {
              return;
            }
            piVar1 = &(pFVar9->InvalidSubObjectChannelReferences).ArrayMax;
            *(ENetSubObjectStatus *)(lVar4 + 10 + (longlong)FVar13.Index * 0x28) = param_3;
            puVar2 = (undefined8 *)
                     (*(longlong *)&(pFVar9->ActiveSubObjectChannelReferences).Elements +
                     (longlong)FVar13.Index * 0x28);
            iVar7 = (pFVar9->InvalidSubObjectChannelReferences).ArrayNum;
            if (iVar7 == *piVar1) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x820,&(pFVar9->InvalidSubObjectChannelReferences).
                                        AllocatorInstance,piVar1);
            }
            (pFVar9->InvalidSubObjectChannelReferences).ArrayNum = iVar7 + 1;
            pFVar14 = (pFVar9->InvalidSubObjectChannelReferences).AllocatorInstance.Data +
                      (longlong)iVar7 * 0x20;
            *(undefined8 *)pFVar14 = *puVar2;
            *(undefined2 *)(pFVar14 + 8) = *(undefined2 *)(puVar2 + 1);
            FVar3 = *(FScriptContainerElement *)((longlong)puVar2 + 10);
            *(undefined8 *)(pFVar14 + 0x10) = 0;
            pFVar14[10] = FVar3;
            *(undefined8 *)(pFVar14 + 0x10) = puVar2[2];
            puVar2[2] = 0;
            *(undefined4 *)(pFVar14 + 0x18) = *(undefined4 *)(puVar2 + 3);
            *(undefined4 *)(pFVar14 + 0x1c) = *(undefined4 *)((longlong)puVar2 + 0x1c);
            puVar2[3] = 0;
            TSet<FNetworkObjectList::FSubObjectChannelReference,FNetworkObjectList::FSubObjectChannelRefKeyFuncs,FDefaultSetAllocator>
            ::Remove(&pFVar9->ActiveSubObjectChannelReferences,FVar13);
            uVar8 = pFVar9->InvalidSubObjectDirtyCount + 1;
            uVar11 = 1;
            if (1 < uVar8) {
              uVar11 = (ushort)uVar8;
            }
            pFVar9->InvalidSubObjectDirtyCount = uVar11;
            return;
          }
          FVar13.Index = *(int *)(lVar4 + 0x20 + lVar10 * 0x28);
        } while (FVar13.Index != -1);
      }
    }
  }
  return;
}

// MarkActive @ 148042aa0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FNetworkObjectList::MarkActive
          (FNetworkObjectList *this,AActor *param_1,UNetConnection *param_2,UNetDriver *param_3)

{
  bool bVar1;
  TSharedPtr<FNetworkObjectInfo,1> *pTVar2;
  
  pTVar2 = FindOrAdd(this,param_1,param_3,(bool *)0x0);
  if (pTVar2 == (TSharedPtr<FNetworkObjectInfo,1> *)0x0) {
    return false;
  }
  bVar1 = MarkActiveInternal(this,pTVar2,param_2,param_3);
  return bVar1;
}

// MarkActiveInternal @ 148042b00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FNetworkObjectList::MarkActiveInternal
          (FNetworkObjectList *this,TSharedPtr<FNetworkObjectInfo,1> *param_1,
          UNetConnection *param_2,UNetDriver *param_3)

{
  TMap<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>,0>_>
  *this_00;
  FNetworkObjectInfo *pFVar1;
  undefined1 *puVar2;
  longlong lVar3;
  code *pcVar4;
  TSharedPtr<FNetworkObjectInfo,1> *pTVar5;
  FName FVar6;
  FWeakObjectPtr FVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  ULevel *this_01;
  UPackage *pUVar11;
  TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator> *pTVar12;
  UObject *pUVar13;
  longlong lVar14;
  TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>
  *this_02;
  uint uVar15;
  uint uVar16;
  undefined1 *puVar17;
  ForElementType<FSetElementId> FVar18;
  int *piVar19;
  int iVar20;
  int iVar22;
  uint uVar23;
  AActor *this_03;
  int local_res8 [2];
  TSharedPtr<FNetworkObjectInfo,1> *local_res10;
  FName local_190;
  FWeakObjectPtr local_188;
  FWeakObjectPtr local_180;
  FWeakObjectPtr local_178;
  FWeakObjectPtr local_170;
  FWeakObjectPtr local_168;
  FWeakObjectPtr local_160;
  FWeakObjectPtr local_158;
  FString local_150;
  FString local_140;
  AActor *local_130;
  FName local_128;
  FName local_120;
  AActor *local_118;
  FName local_110;
  UObject *local_108;
  FWeakObjectPtr *local_100;
  AActor *local_f8;
  UNetConnection *local_f0;
  UNetConnection *local_e8;
  UNetConnection *local_e0;
  UNetConnection *local_d8;
  AActor *local_d0;
  FName local_c8;
  FName local_c0;
  FName local_b8;
  undefined1 local_b0 [24];
  FString local_98;
  FString local_88;
  FString local_78;
  undefined1 local_68 [12];
  uint local_5c;
  longlong local_58;
  uint local_50;
  int local_4c;
  ulonglong uVar21;
  
  pFVar1 = param_1->Object;
  this_03 = pFVar1->Actor;
  local_res10 = param_1;
  local_f8 = this_03;
  this_01 = AActor::GetLevel(this_03);
  pUVar11 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this_01);
  local_190 = (FName)pUVar11->_padding_;
  local_130 = this_03;
  if (*(int *)&(this->ObjectsDormantOnAllConnections).Elements.field_0x8 !=
      *(int *)&(this->ObjectsDormantOnAllConnections).Elements.field_0x34) {
    uVar15 = ((uint)((ulonglong)this_03 >> 0x14) & 0xffff ^ (uint)((ulonglong)this_03 >> 4)) *
             -0x7a143595;
    uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
    uVar15 = uVar15 >> 0x10 ^ uVar15;
    iVar10 = TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::
             RemoveImpl<AActor_*>(&this->ObjectsDormantOnAllConnections,uVar15,&local_130);
    if (0 < iVar10) {
      TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::
      Emplace<TSharedPtr<FNetworkObjectInfo,1>_const_&>
                (&this->ActiveNetworkObjects,(TSharedPtr<FNetworkObjectInfo,1> *)&stack0x00000018,
                 (bool *)param_1);
      if (4 < (byte)LogNetDormancy._0_1_) {
        local_128 = (FName)param_2->_padding_;
        ::FName::ToString(&local_128,&local_98);
        local_120 = (FName)this_03->_padding_;
        ::FName::ToString(&local_120,(FString *)(local_b0 + 8));
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetDormancy);
        if ((TReferenceControllerBase<1> *)local_b0._8_8_ != (TReferenceControllerBase<1> *)0x0) {
          FMemory::Free((void *)local_b0._8_8_);
        }
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
      }
      if ((UE::Net::Private::bTrackDormantObjectsByLevel != false) &&
         (pTVar12 = TMapBase<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>
                    ::Find((TMapBase<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>
                            *)&this->FullyDormantObjectsByLevel,local_190),
         pTVar12 !=
         (TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator> *)0x0))
      {
        local_118 = this_03;
        if ((*(int *)&(pTVar12->Elements).field_0x8 == *(int *)&(pTVar12->Elements).field_0x34) ||
           (iVar10 = TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>
                     ::RemoveImpl<AActor_*>(pTVar12,uVar15,&local_118), iVar10 < 1)) {
          if (this_03 == (AActor *)0x0) {
            ::FString::FString(&local_150,L"None");
          }
          else {
            local_110 = (FName)this_03->_padding_;
            ::FName::ToString(&local_110,&local_150);
          }
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumRemoved > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetworkObjectList.cpp"
                             ,0x13f,L"Actor not found in full Level->Dormant map: %s");
          if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_150.Data.AllocatorInstance.Data);
          }
          if (bVar8) {
            pcVar4 = (code *)swi(3);
            uVar9 = (*pcVar4)();
            return (bool)uVar9;
          }
        }
        if (*(int *)&(pTVar12->Elements).field_0x8 == *(int *)&(pTVar12->Elements).field_0x34) {
          TMapBase<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>
          ::Remove((TMapBase<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>
                    *)&this->FullyDormantObjectsByLevel,local_190);
        }
        TSet<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,FNetworkObjectInfo::FNetConnectionKeyFuncs,FDefaultSetAllocator>
        ::TIterator::TIterator((TIterator *)local_68,&pFVar1->DormantConnections);
        pTVar5 = local_res10;
        if (local_4c < *(int *)(local_58 + 0x18)) {
          this_00 = &this->DormantObjectsPerConnection;
          do {
            pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                          ((longlong)local_4c * 0x10 + *(longlong *)local_68._0_8_))
            ;
            uVar21 = 0;
            iVar20 = 0;
            local_178.ObjectIndex = 0;
            local_178.ObjectSerialNumber = 0;
            iVar10 = 0;
            if (pUVar13 != (UObject *)0x0) {
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable(pUVar13);
              }
              local_188.ObjectIndex = 0;
              local_188.ObjectSerialNumber = 0;
              local_108 = pUVar13;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable(pUVar13);
              }
              FWeakObjectPtr::operator=(&local_188,(FObjectPtr)&local_108);
              uVar21 = (ulonglong)local_188 >> 0x20;
              iVar20 = local_188.ObjectIndex;
              local_178 = local_188;
              FVar7 = local_178;
              local_178.ObjectSerialNumber = local_188.ObjectSerialNumber;
              iVar10 = local_178.ObjectSerialNumber;
              local_178 = FVar7;
            }
            iVar22 = (int)uVar21;
            uVar16 = iVar20 - iVar22 ^ (uint)(uVar21 >> 0xd);
            uVar15 = (-0x61c88647 - uVar16) - iVar22 ^ uVar16 << 8;
            uVar23 = (iVar22 - uVar15) - uVar16 ^ uVar15 >> 0xd;
            uVar16 = (uVar16 - uVar23) - uVar15 ^ uVar23 >> 0xc;
            uVar15 = (uVar15 - uVar16) - uVar23 ^ uVar16 << 0x10;
            uVar23 = (uVar23 - uVar15) - uVar16 ^ uVar15 >> 5;
            uVar16 = (uVar16 - uVar23) - uVar15 ^ uVar23 >> 3;
            uVar15 = (uVar15 - uVar16) - uVar23 ^ uVar16 << 10;
            uVar15 = (uVar23 - uVar15) - uVar16 ^ uVar15 >> 0xf;
            if (*(int *)&(this->DormantObjectsPerConnection).field_0x8 !=
                *(int *)&(this->DormantObjectsPerConnection).field_0x34) {
              puVar2 = *(undefined1 **)&(this->DormantObjectsPerConnection).field_0x40;
              puVar17 = &(this->DormantObjectsPerConnection).field_0x38;
              if (puVar2 != (undefined1 *)0x0) {
                puVar17 = puVar2;
              }
              iVar22 = *(int *)(puVar17 +
                               (ulonglong)
                               (*(int *)&(this->DormantObjectsPerConnection).field_0x48 - 1U &
                               uVar15) * 4);
              if (iVar22 != -1) {
                do {
                  piVar19 = (int *)((longlong)iVar22 * 0x60 + *(longlong *)&this_00->field_0x0);
                  if ((*piVar19 == iVar20) && (piVar19[1] == iVar10)) {
                    if ((iVar22 != -1) && (piVar19 != (int *)0x0)) goto LAB_148042f36;
                    break;
                  }
                  iVar22 = piVar19[0x16];
                } while (iVar22 != -1);
              }
            }
            local_100 = &local_178;
            TSet<TTuple<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>,0>,FDefaultSetAllocator>
            ::EmplaceByHash<TKeyInitializer<TObjectKey<UNetConnection>_&&>_>
                      ((TSet<TTuple<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>,0>,FDefaultSetAllocator>
                        *)this_00,(uint)local_res8,
                       (TKeyInitializer<TObjectKey<UNetConnection>_&&> *)(ulonglong)uVar15,
                       (bool *)&local_100);
            piVar19 = (int *)((longlong)local_res8[0] * 0x60 + *(longlong *)&this_00->field_0x0);
LAB_148042f36:
            FVar6 = local_190;
            uVar15 = ::GetTypeHash(local_190.ComparisonIndex.Value);
            pTVar12 = TMapBase<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>
                      ::FindOrAddImpl<FName_const_&>
                                ((TMapBase<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>
                                  *)(piVar19 + 2),uVar15 + FVar6.Number,&local_190);
            TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::
            Emplace<TSharedPtr<FNetworkObjectInfo,1>_const_&>
                      (pTVar12,(TSharedPtr<FNetworkObjectInfo,1> *)local_b0,(bool *)pTVar5);
            local_50 = local_50 & ~local_5c;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_68 + 8));
            this_03 = local_f8;
          } while (local_4c < *(int *)(local_58 + 0x18));
        }
      }
    }
  }
  if ((((*(int *)&(this->ObjectsDormantOnAllConnections).Elements.field_0x8 -
        *(int *)&(this->ObjectsDormantOnAllConnections).Elements.field_0x34) -
       *(int *)&(this->ActiveNetworkObjects).Elements.field_0x34) +
       *(int *)&(this->ActiveNetworkObjects).Elements.field_0x8 !=
       *(int *)&(this->AllNetworkObjects).Elements.field_0x8 -
       *(int *)&(this->AllNetworkObjects).Elements.field_0x34) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ActiveNetworkObjects.Num() + ObjectsDormantOnAllConnections.Num()) == AllNetworkObjects.Num()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetworkObjectList.cpp"
                         ,0x151,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UNetConnection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  local_170.ObjectIndex = 0;
  local_170.ObjectSerialNumber = 0;
  local_f0 = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UNetConnection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(&local_170,(FObjectPtr)&local_f0);
  if (*(int *)&(pFVar1->DormantConnections).Elements.field_0x8 !=
      *(int *)&(pFVar1->DormantConnections).Elements.field_0x34) {
    FVar18 = (pFVar1->DormantConnections).Hash.SecondaryData;
    bVar8 = false;
    if (FVar18 == (ForElementType<FSetElementId>)0x0) {
      FVar18 = (ForElementType<FSetElementId>)&(pFVar1->DormantConnections).Hash;
    }
    iVar10 = *(int *)((longlong)FVar18 +
                     ((longlong)(local_170.ObjectSerialNumber ^ local_170.ObjectIndex) &
                     (longlong)(pFVar1->DormantConnections).HashSize - 1U) * 4);
    if (iVar10 != -1) {
      lVar3 = *(longlong *)&(pFVar1->DormantConnections).Elements;
      do {
        lVar14 = (longlong)iVar10;
        if ((*(uint *)(lVar3 + lVar14 * 0x10) == local_170.ObjectIndex) &&
           (*(uint *)(lVar3 + 4 + lVar14 * 0x10) == local_170.ObjectSerialNumber)) {
          TSet<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,FNetworkObjectInfo::FNetConnectionKeyFuncs,FDefaultSetAllocator>
          ::RemoveByIndex(&pFVar1->DormantConnections,iVar10);
          bVar8 = true;
          break;
        }
        iVar10 = *(int *)(lVar3 + 8 + lVar14 * 0x10);
      } while (iVar10 != -1);
    }
    if (bVar8) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UNetConnection *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      local_158.ObjectIndex = 0;
      local_158.ObjectSerialNumber = 0;
      local_e8 = param_2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UNetConnection *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      FWeakObjectPtr::operator=(&local_158,(FObjectPtr)&local_e8);
      TSet<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,FNetworkObjectInfo::FNetConnectionKeyFuncs,FDefaultSetAllocator>
      ::Emplace<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
                (&pFVar1->RecentlyDormantConnections,
                 (TWeakObjectPtr<UNetConnection,FWeakObjectPtr> *)(local_b0 + 4),(bool *)&local_158)
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UNetConnection *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      local_180.ObjectIndex = 0;
      local_180.ObjectSerialNumber = 0;
      local_e0 = param_2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UNetConnection *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      FWeakObjectPtr::operator=(&local_180,(FObjectPtr)&local_e0);
      piVar19 = TMapBase<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int,0>_>
                ::FindOrAddImpl<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
                          ((TMapBase<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int,0>_>
                            *)&this->NumDormantObjectsPerConnection,
                           local_180.ObjectSerialNumber ^ local_180.ObjectIndex,
                           (TWeakObjectPtr<UNetConnection,FWeakObjectPtr> *)&local_180);
      if ((*piVar19 < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumDormantObjectsPerConnectionRef > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetworkObjectList.cpp"
                             ,0x15a,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      *piVar19 = *piVar19 + -1;
      if (UE::Net::Private::bTrackDormantObjectsByLevel != false) {
        local_160.ObjectIndex = 0;
        local_160.ObjectSerialNumber = 0;
        if (param_2 != (UNetConnection *)0x0) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)param_2);
          }
          local_168.ObjectIndex = 0;
          local_168.ObjectSerialNumber = 0;
          local_d8 = param_2;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)param_2);
          }
          FWeakObjectPtr::operator=(&local_168,(FObjectPtr)&local_d8);
          local_160 = local_168;
        }
        this_02 = TMapBase<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>,0>_>
                  ::Find((TMapBase<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>,0>_>
                          *)&this->DormantObjectsPerConnection,
                         (TObjectKey<UNetConnection> *)&local_160);
        if ((this_02 !=
             (TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>
              *)0x0) &&
           (pTVar12 = TMapBase<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>
                      ::Find((TMapBase<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>
                              *)this_02,local_190),
           pTVar12 !=
           (TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator> *)0x0
           )) {
          local_d0 = this_03;
          if ((*(int *)&(pTVar12->Elements).field_0x8 == *(int *)&(pTVar12->Elements).field_0x34) ||
             (uVar15 = ((uint)((ulonglong)this_03 >> 0x14) & 0xffff ^
                       (uint)((ulonglong)this_03 >> 4)) * -0x7a143595,
             uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb,
             iVar10 = TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>
                      ::RemoveImpl<AActor_*>(pTVar12,uVar15 >> 0x10 ^ uVar15,&local_d0), iVar10 < 1)
             ) {
            if (this_03 == (AActor *)0x0) {
              ::FString::FString(&local_140,L"None");
            }
            else {
              local_c8 = (FName)this_03->_padding_;
              ::FName::ToString(&local_c8,&local_140);
            }
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumRemoved > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetworkObjectList.cpp"
                               ,0x164,L"Actor not found in Connection->Level->Dormant map: %s");
            if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_140.Data.AllocatorInstance.Data);
            }
            if (bVar8) {
              pcVar4 = (code *)swi(3);
              uVar9 = (*pcVar4)();
              return (bool)uVar9;
            }
          }
          if (*(int *)&(pTVar12->Elements).field_0x8 == *(int *)&(pTVar12->Elements).field_0x34) {
            TMapBase<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>
            ::Remove((TMapBase<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>
                      *)this_02,local_190);
          }
        }
      }
      if (4 < (byte)LogNetDormancy._0_1_) {
        local_c0 = (FName)param_2->_padding_;
        ::FName::ToString(&local_c0,&local_78);
        local_b8 = (FName)this_03->_padding_;
        ::FName::ToString(&local_b8,&local_88);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetDormancy);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
      }
      return true;
    }
  }
  return false;
}

// MarkDirtyForReplay @ 1480433b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FNetworkObjectList::MarkDirtyForReplay(FNetworkObjectList *this,AActor *param_1)

{
  undefined1 *puVar1;
  TSharedPtr<FNetworkObjectInfo,1> *pTVar2;
  
  if (param_1 != (AActor *)0x0) {
    pTVar2 = TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::
             Find(&this->AllNetworkObjects,param_1);
    if ((pTVar2 != (TSharedPtr<FNetworkObjectInfo,1> *)0x0) &&
       (pTVar2->Object != (FNetworkObjectInfo *)0x0)) {
      pTVar2->Object->bDirtyForReplay = '\x01';
    }
  }
  return;
}

// MarkDormant @ 1480433e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNetworkObjectList::MarkDormant
          (FNetworkObjectList *this,AActor *param_1,UNetConnection *param_2,int param_3,
          UNetDriver *param_4)

{
  TMap<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>,0>_>
  *this_00;
  FNetworkObjectInfo *pFVar1;
  code *pcVar2;
  FName FVar3;
  undefined8 uVar4;
  bool bVar5;
  EConnectionState EVar6;
  int iVar7;
  TSharedPtr<FNetworkObjectInfo,1> *pTVar8;
  ULevel *this_01;
  UPackage *pUVar9;
  longlong lVar10;
  int *piVar11;
  uint *puVar12;
  TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator> *pTVar13;
  UObject *pUVar14;
  UNetConnection *pUVar15;
  FName *pFVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  ForElementType<FSetElementId> FVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  ForElementType<FSetElementId> FVar24;
  longlong lVar25;
  TSet<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,FNetworkObjectInfo::FNetConnectionKeyFuncs,FDefaultSetAllocator>
  *this_02;
  TSet<TTuple<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  *this_03;
  int iVar26;
  int iVar27;
  ulonglong uVar28;
  uint uVar29;
  FName local_1e8;
  FWeakObjectPtr local_1e0;
  FWeakObjectPtr local_1d8;
  FWeakObjectPtr local_1d0;
  FWeakObjectPtr local_1c8;
  FWeakObjectPtr local_1c0;
  FWeakObjectPtr local_1b8;
  int local_1b0;
  FWeakObjectPtr local_1ac;
  FWeakObjectPtr local_1a4;
  FNetworkObjectInfo *local_198;
  TSharedPtr<FNetworkObjectInfo,1> *local_190;
  FString local_188;
  undefined1 local_178 [8];
  TSharedPtr<FNetworkObjectInfo,1> local_170;
  UNetConnection *local_160;
  UNetConnection *local_158;
  UNetConnection *local_150;
  FWeakObjectPtr *local_148;
  FName local_140;
  FName local_138;
  UObject *local_130;
  TSet<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,FNetworkObjectInfo::FNetConnectionKeyFuncs,FDefaultSetAllocator>
  *local_128;
  UObject *local_120;
  AActor *local_118;
  FName local_110;
  FName local_108;
  AActor *local_100;
  FName local_f8;
  FName local_f0;
  TWeakObjectPtr<UNetConnection,FWeakObjectPtr> local_e8;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  undefined1 local_a0 [12];
  uint local_94;
  longlong local_90;
  uint local_88;
  int local_84;
  TSet<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,FNetworkObjectInfo::FNetConnectionKeyFuncs,FDefaultSetAllocator>
  *local_78;
  undefined1 local_70 [12];
  uint local_64;
  longlong local_60;
  uint local_58;
  int local_54;
  
  pTVar8 = FindOrAdd(this,param_1,param_4,(bool *)0x0);
  if (pTVar8 != (TSharedPtr<FNetworkObjectInfo,1> *)0x0) {
    local_190 = pTVar8;
    this_01 = AActor::GetLevel(param_1);
    pUVar9 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this_01);
    local_1e8 = (FName)pUVar9->_padding_;
    pFVar1 = pTVar8->Object;
    this_02 = &pFVar1->DormantConnections;
    local_198 = pFVar1;
    local_128 = this_02;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UNetConnection *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    local_1c0.ObjectIndex = 0;
    local_1c0.ObjectSerialNumber = 0;
    local_170.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UNetConnection *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_1c0,(FObjectPtr)&local_170.SharedReferenceCount);
    if (*(int *)&(pFVar1->DormantConnections).Elements.field_0x8 !=
        *(int *)&(pFVar1->DormantConnections).Elements.field_0x34) {
      FVar21 = (pFVar1->DormantConnections).Hash.SecondaryData;
      if (FVar21 == (ForElementType<FSetElementId>)0x0) {
        FVar21 = (ForElementType<FSetElementId>)&(pFVar1->DormantConnections).Hash;
      }
      iVar7 = *(int *)((longlong)FVar21 +
                      (ulonglong)
                      ((pFVar1->DormantConnections).HashSize - 1U &
                      (local_1c0.ObjectSerialNumber ^ local_1c0.ObjectIndex)) * 4);
      if (iVar7 != -1) {
        lVar25 = *(longlong *)&this_02->Elements;
        do {
          lVar10 = (longlong)iVar7;
          if ((*(uint *)(lVar25 + lVar10 * 0x10) == local_1c0.ObjectIndex) &&
             (*(uint *)(lVar25 + 4 + lVar10 * 0x10) == local_1c0.ObjectSerialNumber)) {
            if (iVar7 != -1) goto LAB_1480438fe;
            break;
          }
          iVar7 = *(int *)(lVar25 + 8 + lVar10 * 0x10);
        } while (iVar7 != -1);
      }
    }
    uVar17 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
             -0x7a143595;
    uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
    if (*(int *)&(this->ActiveNetworkObjects).Elements.field_0x8 !=
        *(int *)&(this->ActiveNetworkObjects).Elements.field_0x34) {
      FVar21 = (this->ActiveNetworkObjects).Hash.SecondaryData;
      if (FVar21 == (ForElementType<FSetElementId>)0x0) {
        FVar21 = (ForElementType<FSetElementId>)&(this->ActiveNetworkObjects).Hash;
      }
      iVar7 = *(int *)((longlong)FVar21 +
                      (ulonglong)
                      ((this->ActiveNetworkObjects).HashSize - 1U & (uVar17 >> 0x10 ^ uVar17)) * 4);
      if (iVar7 != -1) {
        lVar25 = *(longlong *)&(this->ActiveNetworkObjects).Elements;
        do {
          if ((AActor *)**(longlong **)(lVar25 + (longlong)iVar7 * 0x18) == param_1)
          goto LAB_1480435ce;
          iVar7 = *(int *)(lVar25 + 0x10 + (longlong)iVar7 * 0x18);
        } while (iVar7 != -1);
      }
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActiveNetworkObjects.Contains(Actor)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetworkObjectList.cpp"
                       ,0xdd,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
LAB_1480435ce:
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UNetConnection *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    local_1ac.ObjectIndex = 0;
    local_1ac.ObjectSerialNumber = 0;
    local_160 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UNetConnection *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_1ac,(FObjectPtr)&local_160);
    TSet<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,FNetworkObjectInfo::FNetConnectionKeyFuncs,FDefaultSetAllocator>
    ::Emplace<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>(this_02,&local_e8,(bool *)&local_1ac);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UNetConnection *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    local_1e0.ObjectIndex = 0;
    local_1e0.ObjectSerialNumber = 0;
    local_158 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UNetConnection *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_1e0,(FObjectPtr)&local_158);
    piVar11 = TMapBase<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int,0>_>
              ::FindOrAddImpl<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
                        ((TMapBase<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int,0>_>
                          *)&this->NumDormantObjectsPerConnection,
                         local_1e0.ObjectSerialNumber ^ local_1e0.ObjectIndex,
                         (TWeakObjectPtr<UNetConnection,FWeakObjectPtr> *)&local_1e0);
    *piVar11 = *piVar11 + 1;
    if (UE::Net::Private::bTrackDormantObjectsByLevel != false) {
      local_1d0.ObjectIndex = 0;
      local_1d0.ObjectSerialNumber = 0;
      this_00 = &this->DormantObjectsPerConnection;
      uVar19 = 0;
      uVar17 = uVar19;
      if (param_2 != (UNetConnection *)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_2);
        }
        local_1d8.ObjectIndex = 0;
        local_1d8.ObjectSerialNumber = 0;
        local_150 = param_2;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_2);
        }
        FWeakObjectPtr::operator=(&local_1d8,(FObjectPtr)&local_150);
        uVar19 = local_1d8.ObjectIndex;
        local_1d0 = local_1d8;
        uVar17 = local_1d8.ObjectSerialNumber;
      }
      uVar20 = uVar19 - uVar17 ^ uVar17 >> 0xd;
      uVar18 = (-0x61c88647 - uVar20) - uVar17 ^ uVar20 << 8;
      uVar29 = (uVar17 - uVar18) - uVar20 ^ uVar18 >> 0xd;
      uVar20 = (uVar20 - uVar29) - uVar18 ^ uVar29 >> 0xc;
      uVar18 = (uVar18 - uVar20) - uVar29 ^ uVar20 << 0x10;
      uVar29 = (uVar29 - uVar18) - uVar20 ^ uVar18 >> 5;
      uVar20 = (uVar20 - uVar29) - uVar18 ^ uVar29 >> 3;
      uVar18 = (uVar18 - uVar20) - uVar29 ^ uVar20 << 10;
      uVar18 = (uVar29 - uVar18) - uVar20 ^ uVar18 >> 0xf;
      if (*(int *)&(this->DormantObjectsPerConnection).field_0x8 !=
          *(int *)&(this->DormantObjectsPerConnection).field_0x34) {
        puVar22 = *(undefined1 **)&(this->DormantObjectsPerConnection).field_0x40;
        if (puVar22 == (undefined1 *)0x0) {
          puVar22 = &(this->DormantObjectsPerConnection).field_0x38;
        }
        uVar20 = *(uint *)(puVar22 +
                          (ulonglong)
                          (*(int *)&(this->DormantObjectsPerConnection).field_0x48 - 1U & uVar18) *
                          4);
        if (uVar20 != 0xffffffff) {
          do {
            puVar12 = (uint *)((longlong)(int)uVar20 * 0x60 + *(longlong *)&this_00->field_0x0);
            if ((*puVar12 == uVar19) && (puVar12[1] == uVar17)) {
              if ((uVar20 != 0xffffffff) && (puVar12 != (uint *)0x0)) goto LAB_148043822;
              break;
            }
            uVar20 = puVar12[0x16];
          } while (uVar20 != 0xffffffff);
        }
      }
      local_148 = &local_1d0;
      TSet<TTuple<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<TObjectKey<UNetConnection>_&&>_>
                ((TSet<TTuple<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>,0>,FDefaultSetAllocator>
                  *)this_00,(uint)&local_1b0,
                 (TKeyInitializer<TObjectKey<UNetConnection>_&&> *)(ulonglong)uVar18,
                 (bool *)&local_148);
      puVar12 = (uint *)((longlong)local_1b0 * 0x60 + *(longlong *)&this_00->field_0x0);
LAB_148043822:
      FVar3 = local_1e8;
      if (*(int *)&(local_198->DormantConnections).Elements.field_0x8 -
          *(int *)&(local_198->DormantConnections).Elements.field_0x34 != param_3) {
        uVar17 = ::GetTypeHash(local_1e8.ComparisonIndex.Value);
        pTVar13 = TMapBase<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>
                  ::FindOrAddImpl<FName_const_&>
                            ((TMapBase<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>
                              *)(puVar12 + 2),uVar17 + FVar3.Number,&local_1e8);
        TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::
        Emplace<TSharedPtr<FNetworkObjectInfo,1>_const_&>
                  (pTVar13,(TSharedPtr<FNetworkObjectInfo,1> *)local_178,(bool *)local_190);
      }
    }
    if (4 < (byte)LogNetDormancy._0_1_) {
      local_140 = (FName)param_2->_padding_;
      ::FName::ToString(&local_140,&local_d0);
      local_138 = (FName)param_1->_padding_;
      ::FName::ToString(&local_138,&local_e0);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetDormancy);
      if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
      }
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
    }
LAB_1480438fe:
    TSet<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,FNetworkObjectInfo::FNetConnectionKeyFuncs,FDefaultSetAllocator>
    ::TIterator::TIterator((TIterator *)local_a0,this_02);
    if (local_84 < *(int *)(local_90 + 0x18)) {
      do {
        iVar7 = local_84;
        uVar4 = local_a0._0_8_;
        lVar25 = (longlong)local_84 * 0x10;
        pUVar14 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)local_a0._0_8_ + lVar25));
        if (pUVar14 == (UObject *)0x0) {
LAB_148043967:
          if (UE::Net::Private::bTrackDormantObjectsByLevel != false) {
            pUVar14 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)uVar4 + lVar25));
            local_1a4.ObjectIndex = 0;
            local_1a4.ObjectSerialNumber = 0;
            uVar19 = 0;
            uVar17 = uVar19;
            if (pUVar14 != (UObject *)0x0) {
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable(pUVar14);
              }
              local_1c8.ObjectIndex = 0;
              local_1c8.ObjectSerialNumber = 0;
              local_130 = pUVar14;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable(pUVar14);
              }
              FWeakObjectPtr::operator=(&local_1c8,(FObjectPtr)&local_130);
              uVar19 = local_1c8.ObjectIndex;
              local_1a4 = local_1c8;
              uVar17 = local_1c8.ObjectSerialNumber;
            }
            if (*(int *)&(this->DormantObjectsPerConnection).field_0x8 !=
                *(int *)&(this->DormantObjectsPerConnection).field_0x34) {
              uVar19 = uVar19 - uVar17 ^ uVar17 >> 0xd;
              uVar20 = (-0x61c88647 - uVar17) - uVar19 ^ uVar19 << 8;
              uVar18 = (uVar17 - uVar20) - uVar19 ^ uVar20 >> 0xd;
              uVar17 = (uVar19 - uVar18) - uVar20 ^ uVar18 >> 0xc;
              uVar20 = (uVar20 - uVar17) - uVar18 ^ uVar17 << 0x10;
              uVar19 = (uVar18 - uVar20) - uVar17 ^ uVar20 >> 5;
              uVar17 = (uVar17 - uVar19) - uVar20 ^ uVar19 >> 3;
              uVar18 = (uVar20 - uVar17) - uVar19 ^ uVar17 << 10;
              TSet<TTuple<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>,0>,FDefaultSetAllocator>
              ::RemoveImpl<TObjectKey<UNetConnection>_>
                        ((TSet<TTuple<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>,0>,FDefaultSetAllocator>
                          *)&this->DormantObjectsPerConnection,
                         (uVar19 - uVar18) - uVar17 ^ uVar18 >> 0xf,
                         (TObjectKey<UNetConnection> *)&local_1a4);
            }
          }
          TSet<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,FNetworkObjectInfo::FNetConnectionKeyFuncs,FDefaultSetAllocator>
          ::RemoveByIndex(local_78,iVar7);
        }
        else {
          pUVar15 = (UNetConnection *)
                    FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)uVar4 + lVar25));
          EVar6 = UNetConnection::GetConnectionState(pUVar15);
          if (EVar6 == USOCK_Closed) goto LAB_148043967;
        }
        local_88 = local_88 & ~local_94;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_a0 + 8));
        this_02 = local_128;
      } while (local_84 < *(int *)(local_90 + 0x18));
    }
    pFVar1 = local_198;
    if ((param_3 < *(int *)&(local_198->DormantConnections).Elements.field_0x8 -
                   *(int *)&(local_198->DormantConnections).Elements.field_0x34) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("NetworkObjectInfo->DormantConnections.Num() <= NumConnections",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetworkObjectList.cpp"
                           ,0x104,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pTVar8 = local_190;
    if (*(int *)&(pFVar1->DormantConnections).Elements.field_0x8 -
        *(int *)&(pFVar1->DormantConnections).Elements.field_0x34 == param_3) {
      TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::
      Emplace<TSharedPtr<FNetworkObjectInfo,1>_const_&>
                (&this->ObjectsDormantOnAllConnections,
                 (TSharedPtr<FNetworkObjectInfo,1> *)(local_178 + 4),(bool *)local_190);
      FVar3 = local_1e8;
      if (UE::Net::Private::bTrackDormantObjectsByLevel != false) {
        uVar17 = ::GetTypeHash(local_1e8.ComparisonIndex.Value);
        pTVar13 = TMapBase<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>
                  ::FindOrAddImpl<FName_const_&>
                            ((TMapBase<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>
                              *)&this->FullyDormantObjectsByLevel,uVar17 + FVar3.Number,&local_1e8);
        TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::
        Emplace<TSharedPtr<FNetworkObjectInfo,1>_const_&>(pTVar13,&local_170,(bool *)pTVar8);
        TSet<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,FNetworkObjectInfo::FNetConnectionKeyFuncs,FDefaultSetAllocator>
        ::TIterator::TIterator((TIterator *)local_70,this_02);
        if (local_54 < *(int *)(local_60 + 0x18)) {
LAB_148043b90:
          uVar4 = local_70._0_8_;
          lVar25 = (longlong)local_54;
          pUVar14 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                        (*(longlong *)local_70._0_8_ + lVar25 * 0x10));
          uVar28 = 0;
          iVar7 = 0;
          if (pUVar14 != (UObject *)0x0) {
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(pUVar14);
            }
            local_1b8.ObjectIndex = 0;
            local_1b8.ObjectSerialNumber = 0;
            local_120 = pUVar14;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(pUVar14);
            }
            FWeakObjectPtr::operator=(&local_1b8,(FObjectPtr)&local_120);
            uVar28 = (ulonglong)local_1b8 >> 0x20;
            iVar7 = local_1b8.ObjectIndex;
          }
          FVar3 = local_1e8;
          iVar27 = (int)uVar28;
          uVar19 = iVar7 - iVar27 ^ (uint)(uVar28 >> 0xd);
          uVar17 = (-0x61c88647 - iVar27) - uVar19 ^ uVar19 << 8;
          uVar18 = (iVar27 - uVar17) - uVar19 ^ uVar17 >> 0xd;
          uVar19 = (uVar19 - uVar18) - uVar17 ^ uVar18 >> 0xc;
          uVar17 = (uVar17 - uVar19) - uVar18 ^ uVar19 << 0x10;
          uVar18 = (uVar18 - uVar17) - uVar19 ^ uVar17 >> 5;
          uVar19 = (uVar19 - uVar18) - uVar17 ^ uVar18 >> 3;
          uVar17 = (uVar17 - uVar19) - uVar18 ^ uVar19 << 10;
          if (*(int *)&(this->DormantObjectsPerConnection).field_0x8 !=
              *(int *)&(this->DormantObjectsPerConnection).field_0x34) {
            puVar22 = *(undefined1 **)&(this->DormantObjectsPerConnection).field_0x40;
            puVar23 = &(this->DormantObjectsPerConnection).field_0x38;
            if (puVar22 != (undefined1 *)0x0) {
              puVar23 = puVar22;
            }
            iVar26 = *(int *)(puVar23 +
                             (ulonglong)
                             (*(int *)&(this->DormantObjectsPerConnection).field_0x48 - 1U &
                             ((uVar18 - uVar17) - uVar19 ^ uVar17 >> 0xf)) * 4);
            if (iVar26 != -1) {
              do {
                piVar11 = (int *)((longlong)iVar26 * 0x60 +
                                 *(longlong *)&this->DormantObjectsPerConnection);
                if ((*piVar11 == iVar7) && (piVar11[1] == iVar27)) {
                  if (iVar26 != -1) {
                    this_03 = (TSet<TTuple<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                               *)(piVar11 + 2);
                    if (piVar11 == (int *)0x0) {
                      this_03 = (TSet<TTuple<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                                 *)0x0;
                    }
                    if (this_03 !=
                        (TSet<TTuple<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                         *)0x0) {
                      uVar17 = ::GetTypeHash(local_1e8.ComparisonIndex.Value);
                      if (*(int *)&(this_03->Elements).field_0x8 !=
                          *(int *)&(this_03->Elements).field_0x34) {
                        FVar21 = (this_03->Hash).SecondaryData;
                        FVar24 = (ForElementType<FSetElementId>)&this_03->Hash;
                        if (FVar21 != (ForElementType<FSetElementId>)0x0) {
                          FVar24 = FVar21;
                        }
                        uVar17 = *(uint *)((longlong)FVar24 +
                                          (ulonglong)
                                          (this_03->HashSize - 1U & FVar3.Number + uVar17) * 4);
                        if (uVar17 != 0xffffffff) {
                          goto LAB_148043d70;
                        }
                      }
                    }
                  }
                  break;
                }
                iVar26 = piVar11[0x16];
              } while (iVar26 != -1);
            }
          }
          goto LAB_148043eae;
        }
      }
LAB_148043ede:
      local_100 = param_1;
      if (*(int *)&(this->ActiveNetworkObjects).Elements.field_0x8 !=
          *(int *)&(this->ActiveNetworkObjects).Elements.field_0x34) {
        uVar17 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
                 -0x7a143595;
        uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
        TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::
        RemoveImpl<AActor_*>(&this->ActiveNetworkObjects,uVar17 >> 0x10 ^ uVar17,&local_100);
      }
      if (4 < (byte)LogNetDormancy._0_1_) {
        local_f8 = (FName)param_2->_padding_;
        ::FName::ToString(&local_f8,&local_b0);
        local_f0 = (FName)param_1->_padding_;
        ::FName::ToString(&local_f0,&local_c0);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetDormancy);
        if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.Data.AllocatorInstance.Data);
        }
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
      }
    }
    if ((((*(int *)&(this->ObjectsDormantOnAllConnections).Elements.field_0x8 -
          *(int *)&(this->ObjectsDormantOnAllConnections).Elements.field_0x34) -
         *(int *)&(this->ActiveNetworkObjects).Elements.field_0x34) +
         *(int *)&(this->ActiveNetworkObjects).Elements.field_0x8 !=
         *(int *)&(this->AllNetworkObjects).Elements.field_0x8 -
         *(int *)&(this->AllNetworkObjects).Elements.field_0x34) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ActiveNetworkObjects.Num() + ObjectsDormantOnAllConnections.Num()) == AllNetworkObjects.Num()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetworkObjectList.cpp"
                           ,0x128,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
  while (uVar17 = pFVar16[0xb].ComparisonIndex.Value, uVar17 != 0xffffffff) {
LAB_148043d70:
    pFVar16 = (FName *)((longlong)(int)uVar17 * 0x60 + *(longlong *)&this_03->Elements);
    if (*pFVar16 == FVar3) {
      pTVar13 = (TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>
                 *)(pFVar16 + 1);
      if (pFVar16 == (FName *)0x0) {
        pTVar13 = (TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>
                   *)0x0;
      }
      if (pTVar13 !=
          (TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator> *)0x0)
      {
        local_118 = param_1;
        if (((*(int *)&(pTVar13->Elements).field_0x8 == *(int *)&(pTVar13->Elements).field_0x34) ||
            (uVar17 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)
                      ) * -0x7a143595, uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb,
            iVar7 = TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>
                    ::RemoveImpl<AActor_*>(pTVar13,uVar17 >> 0x10 ^ uVar17,&local_118), iVar7 < 1))
           && (pUVar15 = (UNetConnection *)
                         FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)uVar4 + lVar25 * 0x10))
              , param_2 != pUVar15)) {
          if (param_1 == (AActor *)0x0) {
            ::FString::FString(&local_188,L"None");
          }
          else {
            local_110 = (FName)param_1->_padding_;
            ::FName::ToString(&local_110,&local_188);
          }
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(NumRemoved > 0) || (Connection == (*ConnectionIt).Get())",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetworkObjectList.cpp"
                             ,0x118,L"Actor not found in Connection->Level->Dormant map: %s");
          if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_188.Data.AllocatorInstance.Data);
          }
          if (bVar5) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        FVar3 = local_1e8;
        if ((*(int *)&(pTVar13->Elements).field_0x8 == *(int *)&(pTVar13->Elements).field_0x34) &&
           (local_108 = local_1e8,
           *(int *)&(this_03->Elements).field_0x8 != *(int *)&(this_03->Elements).field_0x34)) {
          uVar17 = ::GetTypeHash(local_1e8.ComparisonIndex.Value);
          TSet<TTuple<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
          ::RemoveImpl<FName>(this_03,FVar3.Number + uVar17,&local_108);
        }
      }
      break;
    }
  }
LAB_148043eae:
  local_58 = local_58 & ~local_64;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
            ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_70 + 8));
  if (*(int *)(local_60 + 0x18) <= local_54) goto LAB_148043ede;
  goto LAB_148043b90;
}

// OnActorDestroyed @ 148047130

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FNetworkObjectList::OnActorDestroyed(FNetworkObjectList *this,AActor *param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  FWeakObjectPtr local_res8;
  AActor *local_res10;
  
  uVar8 = 0;
  iVar7 = 0;
  if (param_1 != (AActor *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    uVar8 = (ulonglong)local_res8 >> 0x20;
    iVar7 = local_res8.ObjectIndex;
  }
  if (*(int *)&(this->SubObjectChannelReferences).Elements.field_0x8 !=
      *(int *)&(this->SubObjectChannelReferences).Elements.field_0x34) {
    iVar11 = (int)uVar8;
    uVar9 = iVar7 - iVar11 ^ (uint)(uVar8 >> 0xd);
    uVar4 = (-0x61c88647 - uVar9) - iVar11 ^ uVar9 << 8;
    uVar2 = (iVar11 - uVar4) - uVar9 ^ uVar4 >> 0xd;
    uVar10 = (uVar9 - uVar2) - uVar4 ^ uVar2 >> 0xc;
    uVar9 = (uVar4 - uVar2) - uVar10 ^ uVar10 << 0x10;
    uVar4 = (uVar2 - uVar9) - uVar10 ^ uVar9 >> 5;
    uVar10 = (uVar10 - uVar4) - uVar9 ^ uVar4 >> 3;
    uVar2 = uVar10 << 10 ^ (uVar9 - uVar10) - uVar4;
    FVar6 = (this->SubObjectChannelReferences).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->SubObjectChannelReferences).Hash;
    }
    iVar5 = *(int *)((longlong)FVar6 +
                    (((longlong)(int)((uVar4 - uVar2) - uVar10) ^ (ulonglong)(uVar2 >> 0xf)) &
                    (longlong)(this->SubObjectChannelReferences).HashSize - 1U) * 4);
    if (iVar5 != -1) {
      lVar1 = *(longlong *)&(this->SubObjectChannelReferences).Elements;
      while ((lVar3 = (longlong)iVar5 * 0x78, *(int *)(lVar3 + lVar1) != iVar7 ||
             (*(int *)(lVar3 + 4 + lVar1) != iVar11))) {
        iVar5 = *(int *)(lVar3 + 0x70 + lVar1);
        if (iVar5 == -1) {
          return;
        }
      }
      TSet<FNetworkObjectList::FActorSubObjectReferences,FNetworkObjectList::FActorSubObjectRefKeyFuncs,FDefaultSetAllocator>
      ::RemoveByIndex(&this->SubObjectChannelReferences,iVar5);
    }
  }
  return;
}

// OnActorIsTraveling @ 1480472a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FNetworkObjectList::OnActorIsTraveling(FNetworkObjectList *this,AActor *param_1)

{
  TSharedPtr<FNetworkObjectInfo,1> *pTVar1;
  TSharedPtr<FNetworkObjectInfo,1> local_res8 [2];
  
  pTVar1 = TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::Find
                     (&this->AllNetworkObjects,param_1);
  if (pTVar1 != (TSharedPtr<FNetworkObjectInfo,1> *)0x0) {
    TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::
    Emplace<TSharedPtr<FNetworkObjectInfo,1>_const_&>
              (&this->SeamlessTravelingObjects,local_res8,(bool *)pTVar1);
  }
  return;
}

// OnPostSeamlessTravel @ 148047820

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FNetworkObjectList::OnPostSeamlessTravel(FNetworkObjectList *this)

{
  undefined1 *puVar1;
  TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator> *this_00;
  bool *pbVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ForElementType<FSetElementId> FVar6;
  code *pcVar7;
  TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator> *pTVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  ForElementType<FSetElementId> FVar12;
  int iVar13;
  TSet<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,FNetworkObjectInfo::FNetConnectionKeyFuncs,FDefaultSetAllocator>
  *pTVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  undefined1 local_d8 [16];
  int iStack_c8;
  uint uStack_c4;
  undefined1 *local_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  TSharedPtr<FNetworkObjectInfo,1> local_a0;
  AActor *local_90;
  AActor *local_88;
  AActor *local_80;
  TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator> *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  puVar1 = &(this->SeamlessTravelingObjects).Elements.field_0x10;
  iVar10 = *(int *)&(this->SeamlessTravelingObjects).Elements.field_0x28;
  this_00 = &this->SeamlessTravelingObjects;
  iStack_c8 = 0;
  uStack_c4 = 1;
  local_b0 = 0;
  iStack_b4 = 0;
  if (iVar10 != 0) {
    puVar17 = *(uint **)&(this->SeamlessTravelingObjects).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar15 = *puVar17;
    local_b0 = 0;
    while (uVar15 == 0) {
      lVar11 = (longlong)iStack_c8;
      local_b0 = local_b0 + 0x20;
      iStack_c8 = iStack_c8 + 1;
      iStack_b4 = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c8) goto LAB_1480478cd;
      uVar15 = puVar17[lVar11 + 1];
    }
    uStack_c4 = -uVar15 & uVar15;
    uVar4 = (ulonglong)uStack_c4 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res10 = (int)lVar11;
    iStack_b4 = local_b0 + -1 + local_res10;
    if (iVar10 < iStack_b4) {
      iStack_b4 = iVar10;
    }
  }
LAB_1480478cd:
  uVar15 = *(uint *)&(this->SeamlessTravelingObjects).Elements.field_0x28;
  uVar18 = uVar15 & 0xffffffe0;
  iStack_a8 = *(int *)&(this->SeamlessTravelingObjects).Elements.field_0x8 -
              *(int *)&(this->SeamlessTravelingObjects).Elements.field_0x34;
  uStack_b8 = 0xffffffff;
  TStack_70._padding_ = CONCAT44(uStack_c4,iStack_c8);
  TStack_70.CurrentBitIndex = iStack_b4;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar15 >> 5;
  TStack_70._28_4_ = iStack_b4;
  TStack_70.BaseBitIndex = local_b0;
  uStack_50 = CONCAT44(uStack_a4,iStack_a8);
  local_d8._8_8_ = this_00;
  local_c0 = puVar1;
  iStack_ac = iStack_b4;
  local_78 = this_00;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar10 < (int)uVar15)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar5 = *(uint *)&(this->SeamlessTravelingObjects).Elements.field_0x28;
  if (uVar15 != uVar5) {
    puVar16 = *(undefined1 **)&(this->SeamlessTravelingObjects).Elements.field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar13 * 4);
    while (uVar15 == 0) {
      lVar11 = (longlong)iVar13;
      uVar18 = uVar18 + 0x20;
      iVar13 = iVar13 + 1;
      uVar15 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_1480479d0;
      uVar15 = *(uint *)(puVar16 + lVar11 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res18 = (int)lVar11;
    uVar15 = local_res18 + -1 + uVar18;
    if ((int)uVar5 < (int)uVar15) {
      uVar15 = uVar5;
    }
  }
LAB_1480479d0:
  do {
    pTVar8 = local_78;
    if (*(int *)&(local_78->Elements).field_0x8 - *(int *)&(local_78->Elements).field_0x34 !=
        (int)uStack_50) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TSharedPtr<FNetworkObjectInfo,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_70.CurrentBitIndex == uVar15) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == this_00))
    {
      bVar9 = 1 < (this->SeamlessTravelingObjects).HashSize;
      if (!bVar9) {
        TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::
        UnhashElements(this_00);
      }
      TSparseArray<TSparseSetElement<TSharedPtr<FNetworkObjectInfo,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this_00->Elements,0,
                        *(int *)&(this->SeamlessTravelingObjects).Elements.field_0x8);
      puVar1 = &(this->SeamlessTravelingObjects).Elements.field_0xc;
      *(undefined4 *)&(this->SeamlessTravelingObjects).Elements.field_0x8 = 0;
      if (*(int *)puVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
      }
      *(undefined4 *)&(this->SeamlessTravelingObjects).Elements.field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->SeamlessTravelingObjects).Elements.field_0x34 = 0;
      iVar10 = *(int *)&(this->SeamlessTravelingObjects).Elements.field_0x2c;
      *(undefined4 *)&(this->SeamlessTravelingObjects).Elements.field_0x28 = 0;
      if ((iVar10 < 0) || (0x80 < iVar10)) {
        *(undefined4 *)&(this->SeamlessTravelingObjects).Elements.field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)
                   &(this->SeamlessTravelingObjects).Elements.field_0x10,0);
      }
      if (bVar9) {
        (this->SeamlessTravelingObjects).HashSize = 1;
        TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::Rehash
                  (this_00);
      }
      return;
    }
    lVar11 = *(longlong *)&pTVar8->Elements;
    pbVar2 = (bool *)(lVar11 + (longlong)TStack_70.CurrentBitIndex * 0x18);
    if ((*(longlong *)(lVar11 + (longlong)TStack_70.CurrentBitIndex * 0x18) == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar4 = **(ulonglong **)pbVar2;
    uVar18 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
    uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
    if (*(int *)&(this->AllNetworkObjects).Elements.field_0x8 !=
        *(int *)&(this->AllNetworkObjects).Elements.field_0x34) {
      FVar6 = (this->AllNetworkObjects).Hash.SecondaryData;
      FVar12 = (ForElementType<FSetElementId>)&(this->AllNetworkObjects).Hash;
      if (FVar6 != (ForElementType<FSetElementId>)0x0) {
        FVar12 = FVar6;
      }
      iVar10 = *(int *)((longlong)FVar12 +
                       (ulonglong)
                       ((this->AllNetworkObjects).HashSize - 1U & (uVar18 >> 0x10 ^ uVar18)) * 4);
      if (iVar10 != -1) {
        lVar11 = *(longlong *)&(this->AllNetworkObjects).Elements;
        do {
          lVar3 = lVar11 + (longlong)iVar10 * 0x18;
          if (**(ulonglong **)(lVar11 + (longlong)iVar10 * 0x18) == uVar4) {
            if (lVar3 != 0) {
              local_d8._0_8_ = **(ulonglong **)pbVar2;
              local_a0.SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)local_d8;
              `FNetworkObjectList::OnPostSeamlessTravel'::__l9::<lambda_1>::operator()
                        (&local_a0.SharedReferenceCount);
              local_90 = (AActor *)local_d8._0_8_;
              if (*(int *)&(this->AllNetworkObjects).Elements.field_0x8 !=
                  *(int *)&(this->AllNetworkObjects).Elements.field_0x34) {
                uVar18 = ((uint)((ulonglong)local_d8._0_8_ >> 0x14) & 0xffff ^
                         (uint)((ulonglong)local_d8._0_8_ >> 4)) * -0x7a143595;
                uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
                TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::
                RemoveImpl<AActor_*>(&this->AllNetworkObjects,uVar18 >> 0x10 ^ uVar18,&local_90);
              }
              local_88 = (AActor *)local_d8._0_8_;
              if (*(int *)&(this->ActiveNetworkObjects).Elements.field_0x8 !=
                  *(int *)&(this->ActiveNetworkObjects).Elements.field_0x34) {
                uVar18 = ((uint)((ulonglong)local_d8._0_8_ >> 0x14) & 0xffff ^
                         (uint)((ulonglong)local_d8._0_8_ >> 4)) * -0x7a143595;
                uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
                TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::
                RemoveImpl<AActor_*>(&this->ActiveNetworkObjects,uVar18 >> 0x10 ^ uVar18,&local_88);
              }
              local_80 = (AActor *)local_d8._0_8_;
              if (*(int *)&(this->ObjectsDormantOnAllConnections).Elements.field_0x8 !=
                  *(int *)&(this->ObjectsDormantOnAllConnections).Elements.field_0x34) {
                uVar18 = ((uint)((ulonglong)local_d8._0_8_ >> 0x14) & 0xffff ^
                         (uint)((ulonglong)local_d8._0_8_ >> 4)) * -0x7a143595;
                uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
                TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::
                RemoveImpl<AActor_*>
                          (&this->ObjectsDormantOnAllConnections,uVar18 >> 0x10 ^ uVar18,&local_80);
              }
            }
            break;
          }
          iVar10 = *(int *)(lVar3 + 0x10);
        } while (iVar10 != -1);
      }
    }
    if ((*(longlong *)pbVar2 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    lVar11 = *(longlong *)pbVar2;
    pTVar14 = (TSet<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,FNetworkObjectInfo::FNetConnectionKeyFuncs,FDefaultSetAllocator>
               *)(lVar11 + 0x30);
    bVar9 = 1 < *(int *)(lVar11 + 0x78);
    if (!bVar9) {
      TSet<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,FNetworkObjectInfo::FNetConnectionKeyFuncs,FDefaultSetAllocator>
      ::UnhashElements(pTVar14);
    }
    *(undefined4 *)(lVar11 + 0x38) = 0;
    if (*(int *)(lVar11 + 0x3c) != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)pTVar14,0,(int *)(lVar11 + 0x3c));
    }
    *(undefined4 *)(lVar11 + 0x60) = 0xffffffff;
    *(undefined4 *)(lVar11 + 100) = 0;
    *(undefined4 *)(lVar11 + 0x58) = 0;
    if ((*(int *)(lVar11 + 0x5c) < 0) || (0x80 < *(int *)(lVar11 + 0x5c))) {
      *(undefined4 *)(lVar11 + 0x5c) = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(lVar11 + 0x40),0);
    }
    if (bVar9) {
      *(undefined4 *)(lVar11 + 0x78) = 1;
      TSet<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,FNetworkObjectInfo::FNetConnectionKeyFuncs,FDefaultSetAllocator>
      ::Rehash(pTVar14);
    }
    if ((*(longlong *)pbVar2 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    lVar11 = *(longlong *)pbVar2;
    pTVar14 = (TSet<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,FNetworkObjectInfo::FNetConnectionKeyFuncs,FDefaultSetAllocator>
               *)(lVar11 + 0x80);
    bVar9 = 1 < *(int *)(lVar11 + 200);
    if (!bVar9) {
      TSet<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,FNetworkObjectInfo::FNetConnectionKeyFuncs,FDefaultSetAllocator>
      ::UnhashElements(pTVar14);
    }
    *(undefined4 *)(lVar11 + 0x88) = 0;
    if (*(int *)(lVar11 + 0x8c) != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)pTVar14,0,(int *)(lVar11 + 0x8c));
    }
    *(undefined4 *)(lVar11 + 0xb0) = 0xffffffff;
    *(undefined4 *)(lVar11 + 0xb4) = 0;
    *(undefined4 *)(lVar11 + 0xa8) = 0;
    if ((*(int *)(lVar11 + 0xac) < 0) || (0x80 < *(int *)(lVar11 + 0xac))) {
      *(undefined4 *)(lVar11 + 0xac) = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(lVar11 + 0x90),0);
    }
    if (bVar9) {
      *(undefined4 *)(lVar11 + 200) = 1;
      TSet<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,FNetworkObjectInfo::FNetConnectionKeyFuncs,FDefaultSetAllocator>
      ::Rehash(pTVar14);
    }
    TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::
    Emplace<TSharedPtr<FNetworkObjectInfo,1>_const_&>
              (&this->AllNetworkObjects,(TSharedPtr<FNetworkObjectInfo,1> *)&stack0x00000020,pbVar2)
    ;
    TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::
    Emplace<TSharedPtr<FNetworkObjectInfo,1>_const_&>(&this->ActiveNetworkObjects,&local_a0,pbVar2);
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  } while( true );
}

// Remove @ 148050bd0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FNetworkObjectList::Remove(FNetworkObjectList *this,AActor *param_1)

{
  longlong lVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  int iVar5;
  EConnectionState EVar6;
  TSharedPtr<FNetworkObjectInfo,1> *pTVar7;
  ULevel *this_00;
  UPackage *pUVar8;
  UNetConnection *this_01;
  int *piVar9;
  TSet<TTuple<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  *this_02;
  TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator> *pTVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ForElementType<FSetElementId> FVar14;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_d8;
  FName local_d0;
  UNetConnection *local_c8;
  UNetConnection *local_c0;
  FWeakObjectPtr local_b8;
  AActor *local_b0;
  FName local_a8;
  UNetConnection *local_a0;
  AActor *local_98;
  AActor *local_90;
  AActor *local_88;
  AActor *local_80;
  FName local_78;
  undefined1 local_70 [12];
  uint local_64;
  longlong local_60;
  uint local_58;
  int local_54;
  TSet<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,FNetworkObjectInfo::FNetConnectionKeyFuncs,FDefaultSetAllocator>
  *local_48;
  
  if (param_1 != (AActor *)0x0) {
    pTVar7 = TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::
             Find(&this->AllNetworkObjects,param_1);
    if (pTVar7 == (TSharedPtr<FNetworkObjectInfo,1> *)0x0) {
      uVar11 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
               -0x7a143595;
      uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
      uVar11 = uVar11 >> 0x10 ^ uVar11;
      if (*(int *)&(this->ActiveNetworkObjects).Elements.field_0x8 !=
          *(int *)&(this->ActiveNetworkObjects).Elements.field_0x34) {
        FVar14 = (this->ActiveNetworkObjects).Hash.SecondaryData;
        if (FVar14 == (ForElementType<FSetElementId>)0x0) {
          FVar14 = (ForElementType<FSetElementId>)&(this->ActiveNetworkObjects).Hash;
        }
        iVar5 = *(int *)((longlong)FVar14 +
                        (ulonglong)((this->ActiveNetworkObjects).HashSize - 1U & uVar11) * 4);
        if (iVar5 != -1) {
          lVar1 = *(longlong *)&(this->ActiveNetworkObjects).Elements;
          do {
            if ((AActor *)**(longlong **)(lVar1 + (longlong)iVar5 * 0x18) == param_1) {
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("!ActiveNetworkObjects.Contains(Actor)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetworkObjectList.cpp"
                                 ,0x89,L"");
              if (bVar4) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              break;
            }
            iVar5 = *(int *)(lVar1 + 0x10 + (longlong)iVar5 * 0x18);
          } while (iVar5 != -1);
        }
      }
      if (*(int *)&(this->ObjectsDormantOnAllConnections).Elements.field_0x8 !=
          *(int *)&(this->ObjectsDormantOnAllConnections).Elements.field_0x34) {
        FVar14 = (this->ObjectsDormantOnAllConnections).Hash.SecondaryData;
        if (FVar14 == (ForElementType<FSetElementId>)0x0) {
          FVar14 = (ForElementType<FSetElementId>)&(this->ObjectsDormantOnAllConnections).Hash;
        }
        iVar5 = *(int *)((longlong)FVar14 +
                        (ulonglong)((this->ObjectsDormantOnAllConnections).HashSize - 1U & uVar11) *
                        4);
        if (iVar5 != -1) {
          lVar1 = *(longlong *)&(this->ObjectsDormantOnAllConnections).Elements;
          do {
            if ((AActor *)**(longlong **)(lVar1 + (longlong)iVar5 * 0x18) == param_1) {
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("!ObjectsDormantOnAllConnections.Contains(Actor)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetworkObjectList.cpp"
                                 ,0x8a,L"");
              if (bVar4) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              break;
            }
            iVar5 = *(int *)(lVar1 + 0x10 + (longlong)iVar5 * 0x18);
          } while (iVar5 != -1);
        }
      }
      if ((((*(int *)&(this->ObjectsDormantOnAllConnections).Elements.field_0x8 -
            *(int *)&(this->ObjectsDormantOnAllConnections).Elements.field_0x34) -
           *(int *)&(this->ActiveNetworkObjects).Elements.field_0x34) +
           *(int *)&(this->ActiveNetworkObjects).Elements.field_0x8 !=
           *(int *)&(this->AllNetworkObjects).Elements.field_0x8 -
           *(int *)&(this->AllNetworkObjects).Elements.field_0x34) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ActiveNetworkObjects.Num() + ObjectsDormantOnAllConnections.Num()) == AllNetworkObjects.Num()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetworkObjectList.cpp"
                             ,0x8b,L""), bVar4)) {
code_r0x000148051286:
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      if (UE::Net::Private::bTrackDormantObjectsByLevel == false) {
        local_d0.ComparisonIndex.Value = 0;
        local_d0.Number = 0;
      }
      else {
        this_00 = AActor::GetLevel(param_1);
        pUVar8 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this_00);
        local_d0 = (FName)pUVar8->_padding_;
      }
      FVar3 = local_d0;
      TSet<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,FNetworkObjectInfo::FNetConnectionKeyFuncs,FDefaultSetAllocator>
      ::TIterator::TIterator((TIterator *)local_70,&pTVar7->Object->DormantConnections);
      if (local_54 < *(int *)(local_60 + 0x18)) {
        do {
          iVar5 = local_54;
          this_01 = (UNetConnection *)
                    FWeakObjectPtr::Get((FWeakObjectPtr *)
                                        ((longlong)local_54 * 0x10 + *(longlong *)local_70._0_8_));
          uVar11 = 0;
          if ((this_01 == (UNetConnection *)0x0) ||
             (EVar6 = UNetConnection::GetConnectionState(this_01), EVar6 == USOCK_Closed)) {
            if (UE::Net::Private::bTrackDormantObjectsByLevel != false) {
              local_d8.ObjectIndex = 0;
              local_d8.ObjectSerialNumber = 0;
              uVar12 = uVar11;
              if (this_01 != (UNetConnection *)0x0) {
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable((UObject *)this_01);
                }
                local_res18.ObjectIndex = 0;
                local_res18.ObjectSerialNumber = 0;
                local_a0 = this_01;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable((UObject *)this_01);
                }
                FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_a0);
                uVar11 = local_res18.ObjectIndex;
                local_d8 = local_res18;
                uVar12 = local_res18.ObjectSerialNumber;
              }
              if (*(int *)&(this->DormantObjectsPerConnection).field_0x8 !=
                  *(int *)&(this->DormantObjectsPerConnection).field_0x34) {
                uVar11 = uVar11 - uVar12 ^ uVar12 >> 0xd;
                uVar13 = (-0x61c88647 - uVar11) - uVar12 ^ uVar11 << 8;
                uVar12 = (uVar12 - uVar13) - uVar11 ^ uVar13 >> 0xd;
                uVar11 = (uVar11 - uVar12) - uVar13 ^ uVar12 >> 0xc;
                uVar13 = (uVar13 - uVar11) - uVar12 ^ uVar11 << 0x10;
                uVar12 = (uVar12 - uVar13) - uVar11 ^ uVar13 >> 5;
                uVar11 = (uVar11 - uVar12) - uVar13 ^ uVar12 >> 3;
                uVar13 = (uVar13 - uVar11) - uVar12 ^ uVar11 << 10;
                TSet<TTuple<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>,0>,FDefaultSetAllocator>
                ::RemoveImpl<TObjectKey<UNetConnection>_>
                          ((TSet<TTuple<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>,0>,FDefaultSetAllocator>
                            *)&this->DormantObjectsPerConnection,
                           (uVar12 - uVar13) - uVar11 ^ uVar13 >> 0xf,
                           (TObjectKey<UNetConnection> *)&local_d8);
              }
            }
            TSet<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,FNetworkObjectInfo::FNetConnectionKeyFuncs,FDefaultSetAllocator>
            ::RemoveByIndex(local_48,iVar5);
          }
          else {
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this_01);
            }
            local_res10.ObjectIndex = 0;
            local_res10.ObjectSerialNumber = 0;
            local_c8 = this_01;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this_01);
            }
            FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_c8);
            piVar9 = TMapBase<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int,0>_>
                     ::FindOrAddImpl<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
                               ((TMapBase<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int,0>_>
                                 *)&this->NumDormantObjectsPerConnection,
                                local_res10.ObjectSerialNumber ^ local_res10.ObjectIndex,
                                (TWeakObjectPtr<UNetConnection,FWeakObjectPtr> *)&local_res10);
            if ((*piVar9 < 1) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("NumDormantObjectsPerConnectionRef > 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetworkObjectList.cpp"
                                   ,0xa4,L""), bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            *piVar9 = *piVar9 + -1;
            if (UE::Net::Private::bTrackDormantObjectsByLevel != false) {
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)this_01);
              }
              local_res20.ObjectIndex = 0;
              local_res20.ObjectSerialNumber = 0;
              local_c0 = this_01;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)this_01);
              }
              FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_c0);
              local_b8 = local_res20;
              this_02 = (TSet<TTuple<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                         *)TMapBase<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>,0>_>
                           ::Find((TMapBase<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>,0>_>
                                   *)&this->DormantObjectsPerConnection,
                                  (TObjectKey<UNetConnection> *)&local_b8);
              if ((this_02 !=
                   (TSet<TTuple<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                    *)0x0) &&
                 (pTVar10 = TMapBase<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>
                            ::Find((TMapBase<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>
                                    *)this_02,FVar3),
                 pTVar10 !=
                 (TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>
                  *)0x0)) {
                local_b0 = param_1;
                if (*(int *)&(pTVar10->Elements).field_0x8 !=
                    *(int *)&(pTVar10->Elements).field_0x34) {
                  uVar11 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^
                           (uint)((ulonglong)param_1 >> 4)) * -0x7a143595;
                  uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
                  TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>
                  ::RemoveImpl<AActor_*>(pTVar10,uVar11 >> 0x10 ^ uVar11,&local_b0);
                }
                if ((*(int *)&(pTVar10->Elements).field_0x8 ==
                     *(int *)&(pTVar10->Elements).field_0x34) &&
                   (local_a8 = FVar3,
                   *(int *)&(this_02->Elements).field_0x8 != *(int *)&(this_02->Elements).field_0x34
                   )) {
                  uVar11 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
                  TSet<TTuple<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                  ::RemoveImpl<FName>(this_02,FVar3.Number + uVar11,&local_a8);
                }
              }
            }
          }
          local_58 = local_58 & ~local_64;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_70 + 8));
        } while (local_54 < *(int *)(local_60 + 0x18));
      }
      uVar11 = (uint)((ulonglong)param_1 >> 4);
      local_98 = param_1;
      if (*(int *)&(this->AllNetworkObjects).Elements.field_0x8 !=
          *(int *)&(this->AllNetworkObjects).Elements.field_0x34) {
        uVar12 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ uVar11) * -0x7a143595;
        uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
        TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::
        RemoveImpl<AActor_*>(&this->AllNetworkObjects,uVar12 >> 0x10 ^ uVar12,&local_98);
      }
      local_90 = param_1;
      if (*(int *)&(this->ActiveNetworkObjects).Elements.field_0x8 !=
          *(int *)&(this->ActiveNetworkObjects).Elements.field_0x34) {
        uVar12 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ uVar11) * -0x7a143595;
        uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
        TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::
        RemoveImpl<AActor_*>(&this->ActiveNetworkObjects,uVar12 >> 0x10 ^ uVar12,&local_90);
      }
      uVar12 = (uint)((ulonglong)param_1 >> 0x14) & 0xffff;
      local_88 = param_1;
      if (*(int *)&(this->ObjectsDormantOnAllConnections).Elements.field_0x8 !=
          *(int *)&(this->ObjectsDormantOnAllConnections).Elements.field_0x34) {
        uVar13 = (uVar12 ^ uVar11) * -0x7a143595;
        uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
        TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::
        RemoveImpl<AActor_*>
                  (&this->ObjectsDormantOnAllConnections,uVar13 >> 0x10 ^ uVar13,&local_88);
      }
      if ((UE::Net::Private::bTrackDormantObjectsByLevel != false) &&
         (pTVar10 = TMapBase<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>
                    ::Find((TMapBase<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>
                            *)&this->FullyDormantObjectsByLevel,FVar3),
         pTVar10 !=
         (TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator> *)0x0))
      {
        local_80 = param_1;
        if (*(int *)&(pTVar10->Elements).field_0x8 != *(int *)&(pTVar10->Elements).field_0x34) {
          uVar11 = (uVar11 ^ uVar12) * -0x7a143595;
          uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
          TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::
          RemoveImpl<AActor_*>(pTVar10,uVar11 >> 0x10 ^ uVar11,&local_80);
        }
        if ((*(int *)&(pTVar10->Elements).field_0x8 == *(int *)&(pTVar10->Elements).field_0x34) &&
           (local_78 = FVar3,
           *(int *)&(this->FullyDormantObjectsByLevel).field_0x8 !=
           *(int *)&(this->FullyDormantObjectsByLevel).field_0x34)) {
          uVar11 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
          TSet<TTuple<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
          ::RemoveImpl<FName>((TSet<TTuple<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                               *)&this->FullyDormantObjectsByLevel,local_d0.Number + uVar11,
                              &local_78);
        }
      }
      if ((((*(int *)&(this->ObjectsDormantOnAllConnections).Elements.field_0x8 -
            *(int *)&(this->ObjectsDormantOnAllConnections).Elements.field_0x34) -
           *(int *)&(this->ActiveNetworkObjects).Elements.field_0x34) +
           *(int *)&(this->ActiveNetworkObjects).Elements.field_0x8 !=
           *(int *)&(this->AllNetworkObjects).Elements.field_0x8 -
           *(int *)&(this->AllNetworkObjects).Elements.field_0x34) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ActiveNetworkObjects.Num() + ObjectsDormantOnAllConnections.Num()) == AllNetworkObjects.Num()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetworkObjectList.cpp"
                             ,0xca,L""), bVar4)) goto code_r0x000148051286;
    }
  }
  return;
}

// RemoveMultipleActiveSubObjectChannelReference @ 148052a40

void __thiscall
FNetworkObjectList::RemoveMultipleActiveSubObjectChannelReference
          (FNetworkObjectList *this,FObjectKey param_1,
          TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> *param_2,UObject *param_3)

{
  TWeakObjectPtr<UObject,FWeakObjectPtr> *pTVar1;
  bool bVar2;
  FActorSubObjectReferences *pFVar3;
  TWeakObjectPtr<UObject,FWeakObjectPtr> *pTVar4;
  FObjectKey local_res8;
  FObjectKey local_res10;
  
  local_res10 = param_1;
  TSet<FNetworkObjectList::FActorSubObjectReferences,FNetworkObjectList::FActorSubObjectRefKeyFuncs,FDefaultSetAllocator>
  ::FindId(&this->SubObjectChannelReferences,&local_res8);
  if (local_res8.ObjectIndex != -1) {
    pFVar3 = (FActorSubObjectReferences *)
             ((longlong)local_res8.ObjectIndex * 0x78 +
             *(longlong *)&(this->SubObjectChannelReferences).Elements);
    pTVar4 = param_2->DataPtr;
    pTVar1 = pTVar4 + param_2->ArrayNum;
    for (; pTVar4 != pTVar1; pTVar4 = pTVar4 + 1) {
      bVar2 = HandleRemoveActiveSubObjectRef(this,pFVar3,pTVar4,param_3);
      if (!bVar2) {
        HandleRemoveInvalidSubObjectRef(this,pFVar3,pTVar4,param_3);
      }
    }
    if ((*(int *)&(pFVar3->ActiveSubObjectChannelReferences).Elements.field_0x8 ==
         *(int *)&(pFVar3->ActiveSubObjectChannelReferences).Elements.field_0x34) &&
       ((pFVar3->InvalidSubObjectChannelReferences).ArrayNum == 0)) {
      TSet<FNetworkObjectList::FActorSubObjectReferences,FNetworkObjectList::FActorSubObjectRefKeyFuncs,FDefaultSetAllocator>
      ::RemoveByIndex(&this->SubObjectChannelReferences,local_res8.ObjectIndex);
    }
  }
  return;
}

// RemoveMultipleInvalidSubObjectChannelReference @ 148052b10

void __thiscall
FNetworkObjectList::RemoveMultipleInvalidSubObjectChannelReference
          (FNetworkObjectList *this,FObjectKey param_1,
          TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> *param_2,UObject *param_3)

{
  TWeakObjectPtr<UObject,FWeakObjectPtr> *pTVar1;
  FActorSubObjectReferences *pFVar2;
  TWeakObjectPtr<UObject,FWeakObjectPtr> *pTVar3;
  FObjectKey local_res8;
  FObjectKey local_res10;
  
  local_res10 = param_1;
  TSet<FNetworkObjectList::FActorSubObjectReferences,FNetworkObjectList::FActorSubObjectRefKeyFuncs,FDefaultSetAllocator>
  ::FindId(&this->SubObjectChannelReferences,&local_res8);
  if (local_res8.ObjectIndex != -1) {
    pFVar2 = (FActorSubObjectReferences *)
             ((longlong)local_res8.ObjectIndex * 0x78 +
             *(longlong *)&(this->SubObjectChannelReferences).Elements);
    pTVar3 = param_2->DataPtr;
    pTVar1 = pTVar3 + param_2->ArrayNum;
    for (; pTVar3 != pTVar1; pTVar3 = pTVar3 + 1) {
      HandleRemoveInvalidSubObjectRef(this,pFVar2,pTVar3,param_3);
    }
    if ((*(int *)&(pFVar2->ActiveSubObjectChannelReferences).Elements.field_0x8 ==
         *(int *)&(pFVar2->ActiveSubObjectChannelReferences).Elements.field_0x34) &&
       ((pFVar2->InvalidSubObjectChannelReferences).ArrayNum == 0)) {
      TSet<FNetworkObjectList::FActorSubObjectReferences,FNetworkObjectList::FActorSubObjectRefKeyFuncs,FDefaultSetAllocator>
      ::RemoveByIndex(&this->SubObjectChannelReferences,local_res8.ObjectIndex);
    }
  }
  return;
}

// RemoveMultipleSubObjectChannelReference @ 148052bd0

void __thiscall
FNetworkObjectList::RemoveMultipleSubObjectChannelReference
          (FNetworkObjectList *this,FObjectKey param_1,
          TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> *param_2,UObject *param_3)

{
  TWeakObjectPtr<UObject,FWeakObjectPtr> *pTVar1;
  FActorSubObjectReferences *pFVar2;
  TWeakObjectPtr<UObject,FWeakObjectPtr> *pTVar3;
  FObjectKey local_res8;
  FObjectKey local_res10;
  
  local_res10 = param_1;
  TSet<FNetworkObjectList::FActorSubObjectReferences,FNetworkObjectList::FActorSubObjectRefKeyFuncs,FDefaultSetAllocator>
  ::FindId(&this->SubObjectChannelReferences,&local_res8);
  if (local_res8.ObjectIndex != -1) {
    pFVar2 = (FActorSubObjectReferences *)
             ((longlong)local_res8.ObjectIndex * 0x78 +
             *(longlong *)&(this->SubObjectChannelReferences).Elements);
    pTVar3 = param_2->DataPtr;
    pTVar1 = pTVar3 + param_2->ArrayNum;
    for (; pTVar3 != pTVar1; pTVar3 = pTVar3 + 1) {
      HandleRemoveAnySubObjectChannelRef(this,pFVar2,pTVar3,param_3);
    }
    if ((*(int *)&(pFVar2->ActiveSubObjectChannelReferences).Elements.field_0x8 ==
         *(int *)&(pFVar2->ActiveSubObjectChannelReferences).Elements.field_0x34) &&
       ((pFVar2->InvalidSubObjectChannelReferences).ArrayNum == 0)) {
      TSet<FNetworkObjectList::FActorSubObjectReferences,FNetworkObjectList::FActorSubObjectRefKeyFuncs,FDefaultSetAllocator>
      ::RemoveByIndex(&this->SubObjectChannelReferences,local_res8.ObjectIndex);
    }
  }
  return;
}

// RemoveSubObjectChannelReference @ 148053530

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNetworkObjectList::RemoveSubObjectChannelReference
          (FNetworkObjectList *this,AActor *param_1,TWeakObjectPtr<UObject,FWeakObjectPtr> *param_2,
          UObject *param_3)

{
  int iVar1;
  FActorSubObjectReferences *pFVar2;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  if (param_1 != (AActor *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = (FWeakObjectPtr)param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    local_res10 = local_res8;
  }
  TSet<FNetworkObjectList::FActorSubObjectReferences,FNetworkObjectList::FActorSubObjectRefKeyFuncs,FDefaultSetAllocator>
  ::FindId(&this->SubObjectChannelReferences,(FObjectKey *)&local_res8);
  iVar1 = local_res8.ObjectIndex;
  if (local_res8.ObjectIndex != -1) {
    pFVar2 = (FActorSubObjectReferences *)
             ((longlong)local_res8.ObjectIndex * 0x78 +
             *(longlong *)&(this->SubObjectChannelReferences).Elements);
    HandleRemoveAnySubObjectChannelRef(this,pFVar2,param_2,param_3);
    if ((*(int *)&(pFVar2->ActiveSubObjectChannelReferences).Elements.field_0x8 ==
         *(int *)&(pFVar2->ActiveSubObjectChannelReferences).Elements.field_0x34) &&
       ((pFVar2->InvalidSubObjectChannelReferences).ArrayNum == 0)) {
      TSet<FNetworkObjectList::FActorSubObjectReferences,FNetworkObjectList::FActorSubObjectRefKeyFuncs,FDefaultSetAllocator>
      ::RemoveByIndex(&this->SubObjectChannelReferences,iVar1);
    }
  }
  return;
}

// Reset @ 148053e60

void __thiscall FNetworkObjectList::Reset(FNetworkObjectList *this)

{
  undefined1 *puVar1;
  TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator> *this_00;
  TMap<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int,0>_>
  *this_01;
  TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>
  *this_02;
  int iVar2;
  bool bVar3;
  TMap<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>,0>_>
  *this_03;
  
  bVar3 = 1 < (this->AllNetworkObjects).HashSize;
  if (!bVar3) {
    TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::
    UnhashElements(&this->AllNetworkObjects);
  }
  TSparseArray<TSparseSetElement<TSharedPtr<FNetworkObjectInfo,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TSharedPtr<FNetworkObjectInfo,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this,0,*(int *)&(this->AllNetworkObjects).Elements.field_0x8);
  puVar1 = &(this->AllNetworkObjects).Elements.field_0xc;
  *(undefined4 *)&(this->AllNetworkObjects).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->AllNetworkObjects).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AllNetworkObjects).Elements.field_0x34 = 0;
  iVar2 = *(int *)&(this->AllNetworkObjects).Elements.field_0x2c;
  *(undefined4 *)&(this->AllNetworkObjects).Elements.field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->AllNetworkObjects).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->AllNetworkObjects).Elements.field_0x10,0);
  }
  if (bVar3) {
    (this->AllNetworkObjects).HashSize = 1;
    TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::Rehash
              (&this->AllNetworkObjects);
  }
  bVar3 = 1 < (this->ActiveNetworkObjects).HashSize;
  if (!bVar3) {
    TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::
    UnhashElements(&this->ActiveNetworkObjects);
  }
  TSparseArray<TSparseSetElement<TSharedPtr<FNetworkObjectInfo,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(&(this->ActiveNetworkObjects).Elements,0,
                    *(int *)&(this->ActiveNetworkObjects).Elements.field_0x8);
  puVar1 = &(this->ActiveNetworkObjects).Elements.field_0xc;
  *(undefined4 *)&(this->ActiveNetworkObjects).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&this->ActiveNetworkObjects,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ActiveNetworkObjects).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActiveNetworkObjects).Elements.field_0x34 = 0;
  iVar2 = *(int *)&(this->ActiveNetworkObjects).Elements.field_0x2c;
  *(undefined4 *)&(this->ActiveNetworkObjects).Elements.field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->ActiveNetworkObjects).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->ActiveNetworkObjects).Elements.field_0x10,0);
  }
  if (bVar3) {
    (this->ActiveNetworkObjects).HashSize = 1;
    TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::Rehash
              (&this->ActiveNetworkObjects);
  }
  this_00 = &this->ObjectsDormantOnAllConnections;
  bVar3 = 1 < (this->ObjectsDormantOnAllConnections).HashSize;
  if (!bVar3) {
    TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::
    UnhashElements(this_00);
  }
  TSparseArray<TSparseSetElement<TSharedPtr<FNetworkObjectInfo,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(&this_00->Elements,0,
                    *(int *)&(this->ObjectsDormantOnAllConnections).Elements.field_0x8);
  puVar1 = &(this->ObjectsDormantOnAllConnections).Elements.field_0xc;
  *(undefined4 *)&(this->ObjectsDormantOnAllConnections).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ObjectsDormantOnAllConnections).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ObjectsDormantOnAllConnections).Elements.field_0x34 = 0;
  iVar2 = *(int *)&(this->ObjectsDormantOnAllConnections).Elements.field_0x2c;
  *(undefined4 *)&(this->ObjectsDormantOnAllConnections).Elements.field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->ObjectsDormantOnAllConnections).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->ObjectsDormantOnAllConnections).Elements.field_0x10,0);
  }
  if (bVar3) {
    (this->ObjectsDormantOnAllConnections).HashSize = 1;
    TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::Rehash
              (this_00);
  }
  this_01 = &this->NumDormantObjectsPerConnection;
  bVar3 = 1 < *(int *)&(this->NumDormantObjectsPerConnection).field_0x48;
  if (!bVar3) {
    TSet<TTuple<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
                      *)this_01);
  }
  puVar1 = &(this->NumDormantObjectsPerConnection).field_0xc;
  *(undefined4 *)&(this->NumDormantObjectsPerConnection).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)this_01,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->NumDormantObjectsPerConnection).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NumDormantObjectsPerConnection).field_0x34 = 0;
  iVar2 = *(int *)&(this->NumDormantObjectsPerConnection).field_0x2c;
  *(undefined4 *)&(this->NumDormantObjectsPerConnection).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->NumDormantObjectsPerConnection).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->NumDormantObjectsPerConnection).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->NumDormantObjectsPerConnection).field_0x48 = 1;
    TSet<TTuple<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
              *)this_01);
  }
  this_02 = &this->FullyDormantObjectsByLevel;
  bVar3 = 1 < *(int *)&(this->FullyDormantObjectsByLevel).field_0x48;
  if (!bVar3) {
    TSet<TTuple<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                      *)this_02);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_02,0,*(int *)&(this->FullyDormantObjectsByLevel).field_0x8);
  puVar1 = &(this->FullyDormantObjectsByLevel).field_0xc;
  *(undefined4 *)&(this->FullyDormantObjectsByLevel).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,(ForAnyElementType *)this_02,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->FullyDormantObjectsByLevel).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FullyDormantObjectsByLevel).field_0x34 = 0;
  iVar2 = *(int *)&(this->FullyDormantObjectsByLevel).field_0x2c;
  *(undefined4 *)&(this->FullyDormantObjectsByLevel).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->FullyDormantObjectsByLevel).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->FullyDormantObjectsByLevel).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->FullyDormantObjectsByLevel).field_0x48 = 1;
    TSet<TTuple<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
              *)this_02);
  }
  this_03 = &this->DormantObjectsPerConnection;
  bVar3 = 1 < *(int *)&(this->DormantObjectsPerConnection).field_0x48;
  if (!bVar3) {
    TSet<TTuple<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>,0>,FDefaultSetAllocator>
                      *)this_03);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_03,0,*(int *)&(this->DormantObjectsPerConnection).field_0x8);
  puVar1 = &(this->DormantObjectsPerConnection).field_0xc;
  *(undefined4 *)&(this->DormantObjectsPerConnection).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,(ForAnyElementType *)this_03,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->DormantObjectsPerConnection).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DormantObjectsPerConnection).field_0x34 = 0;
  iVar2 = *(int *)&(this->DormantObjectsPerConnection).field_0x2c;
  *(undefined4 *)&(this->DormantObjectsPerConnection).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->DormantObjectsPerConnection).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->DormantObjectsPerConnection).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->DormantObjectsPerConnection).field_0x48 = 1;
    TSet<TTuple<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>,0>,FDefaultSetAllocator>
              *)this_03);
  }
  return;
}

// ResetDormancyState @ 1480542f0

void __thiscall FNetworkObjectList::ResetDormancyState(FNetworkObjectList *this)

{
  undefined1 *puVar1;
  TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator> *this_00;
  TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>
  *this_01;
  TSet<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,FNetworkObjectInfo::FNetConnectionKeyFuncs,FDefaultSetAllocator>
  *this_02;
  TMap<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int,0>_>
  *this_03;
  TMap<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>,0>_>
  *this_04;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 local_38 [12];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  this_00 = &this->ObjectsDormantOnAllConnections;
  bVar4 = 1 < (this->ObjectsDormantOnAllConnections).HashSize;
  if (!bVar4) {
    TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::
    UnhashElements(this_00);
  }
  TSparseArray<TSparseSetElement<TSharedPtr<FNetworkObjectInfo,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(&this_00->Elements,0,
                    *(int *)&(this->ObjectsDormantOnAllConnections).Elements.field_0x8);
  puVar1 = &(this->ObjectsDormantOnAllConnections).Elements.field_0xc;
  *(undefined4 *)&(this->ObjectsDormantOnAllConnections).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ObjectsDormantOnAllConnections).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ObjectsDormantOnAllConnections).Elements.field_0x34 = 0;
  iVar2 = *(int *)&(this->ObjectsDormantOnAllConnections).Elements.field_0x2c;
  *(undefined4 *)&(this->ObjectsDormantOnAllConnections).Elements.field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->ObjectsDormantOnAllConnections).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->ObjectsDormantOnAllConnections).Elements.field_0x10,0);
  }
  if (bVar4) {
    (this->ObjectsDormantOnAllConnections).HashSize = 1;
    TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::Rehash
              (this_00);
  }
  this_01 = &this->FullyDormantObjectsByLevel;
  bVar4 = 1 < *(int *)&(this->FullyDormantObjectsByLevel).field_0x48;
  if (!bVar4) {
    TSet<TTuple<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                      *)this_01);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_01,0,*(int *)&(this->FullyDormantObjectsByLevel).field_0x8);
  puVar1 = &(this->FullyDormantObjectsByLevel).field_0xc;
  *(undefined4 *)&(this->FullyDormantObjectsByLevel).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,(ForAnyElementType *)this_01,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->FullyDormantObjectsByLevel).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FullyDormantObjectsByLevel).field_0x34 = 0;
  iVar2 = *(int *)&(this->FullyDormantObjectsByLevel).field_0x2c;
  *(undefined4 *)&(this->FullyDormantObjectsByLevel).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->FullyDormantObjectsByLevel).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->FullyDormantObjectsByLevel).field_0x10,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->FullyDormantObjectsByLevel).field_0x48 = 1;
    TSet<TTuple<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
              *)this_01);
  }
  TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::operator=
            (&this->ActiveNetworkObjects,&this->AllNetworkObjects);
  TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::TIterator::
  TIterator((TIterator *)local_38,&this->AllNetworkObjects);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      lVar3 = *(longlong *)(*(longlong *)local_38._0_8_ + (longlong)local_1c * 0x18);
      bVar4 = 1 < *(int *)(lVar3 + 0x78);
      if (!bVar4) {
        TSet<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,FNetworkObjectInfo::FNetConnectionKeyFuncs,FDefaultSetAllocator>
        ::UnhashElements((TSet<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,FNetworkObjectInfo::FNetConnectionKeyFuncs,FDefaultSetAllocator>
                          *)(lVar3 + 0x30));
      }
      *(undefined4 *)(lVar3 + 0x38) = 0;
      if (*(int *)(lVar3 + 0x3c) != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,(ForAnyElementType *)(lVar3 + 0x30),0,(int *)(lVar3 + 0x3c));
      }
      *(undefined4 *)(lVar3 + 0x60) = 0xffffffff;
      *(undefined4 *)(lVar3 + 100) = 0;
      *(undefined4 *)(lVar3 + 0x58) = 0;
      if ((*(int *)(lVar3 + 0x5c) < 0) || (0x80 < *(int *)(lVar3 + 0x5c))) {
        *(undefined4 *)(lVar3 + 0x5c) = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(lVar3 + 0x40),0);
      }
      if (bVar4) {
        *(undefined4 *)(lVar3 + 0x78) = 1;
        TSet<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,FNetworkObjectInfo::FNetConnectionKeyFuncs,FDefaultSetAllocator>
        ::Rehash((TSet<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,FNetworkObjectInfo::FNetConnectionKeyFuncs,FDefaultSetAllocator>
                  *)(lVar3 + 0x30));
      }
      this_02 = (TSet<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,FNetworkObjectInfo::FNetConnectionKeyFuncs,FDefaultSetAllocator>
                 *)(lVar3 + 0x80);
      bVar4 = 1 < *(int *)(lVar3 + 200);
      if (!bVar4) {
        TSet<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,FNetworkObjectInfo::FNetConnectionKeyFuncs,FDefaultSetAllocator>
        ::UnhashElements(this_02);
      }
      *(undefined4 *)(lVar3 + 0x88) = 0;
      if (*(int *)(lVar3 + 0x8c) != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,(ForAnyElementType *)this_02,0,(int *)(lVar3 + 0x8c));
      }
      *(undefined4 *)(lVar3 + 0xb0) = 0xffffffff;
      *(undefined4 *)(lVar3 + 0xb4) = 0;
      *(undefined4 *)(lVar3 + 0xa8) = 0;
      if ((*(int *)(lVar3 + 0xac) < 0) || (0x80 < *(int *)(lVar3 + 0xac))) {
        *(undefined4 *)(lVar3 + 0xac) = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(lVar3 + 0x90),0);
      }
      if (bVar4) {
        *(undefined4 *)(lVar3 + 200) = 1;
        TSet<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,FNetworkObjectInfo::FNetConnectionKeyFuncs,FDefaultSetAllocator>
        ::Rehash(this_02);
      }
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_38 + 8));
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  this_03 = &this->NumDormantObjectsPerConnection;
  bVar4 = 1 < *(int *)&(this->NumDormantObjectsPerConnection).field_0x48;
  if (!bVar4) {
    TSet<TTuple<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
                      *)this_03);
  }
  puVar1 = &(this->NumDormantObjectsPerConnection).field_0xc;
  *(undefined4 *)&(this->NumDormantObjectsPerConnection).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)this_03,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->NumDormantObjectsPerConnection).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NumDormantObjectsPerConnection).field_0x34 = 0;
  iVar2 = *(int *)&(this->NumDormantObjectsPerConnection).field_0x2c;
  *(undefined4 *)&(this->NumDormantObjectsPerConnection).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->NumDormantObjectsPerConnection).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->NumDormantObjectsPerConnection).field_0x10,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->NumDormantObjectsPerConnection).field_0x48 = 1;
    TSet<TTuple<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
              *)this_03);
  }
  this_04 = &this->DormantObjectsPerConnection;
  bVar4 = *(int *)&(this->DormantObjectsPerConnection).field_0x48 < 2;
  if (bVar4) {
    TSet<TTuple<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>,0>,FDefaultSetAllocator>
                      *)this_04);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_04,0,*(int *)&(this->DormantObjectsPerConnection).field_0x8);
  puVar1 = &(this->DormantObjectsPerConnection).field_0xc;
  *(undefined4 *)&(this->DormantObjectsPerConnection).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,(ForAnyElementType *)this_04,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->DormantObjectsPerConnection).field_0x34 = 0;
  *(undefined4 *)&(this->DormantObjectsPerConnection).field_0x30 = 0xffffffff;
  iVar2 = *(int *)&(this->DormantObjectsPerConnection).field_0x2c;
  *(undefined4 *)&(this->DormantObjectsPerConnection).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->DormantObjectsPerConnection).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->DormantObjectsPerConnection).field_0x10,0);
  }
  if (bVar4) {
    return;
  }
  *(undefined4 *)&(this->DormantObjectsPerConnection).field_0x48 = 1;
  TSet<TTuple<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>,0>,FDefaultSetAllocator>
  ::Rehash((TSet<TTuple<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>,0>,FDefaultSetAllocator>
            *)this_04);
  return;
}

// ResetReplayDirtyTracking @ 148054af0

void __thiscall FNetworkObjectList::ResetReplayDirtyTracking(FNetworkObjectList *this)

{
  byte *pbVar1;
  longlong lVar2;
  undefined1 local_38 [12];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::TIterator::
  TIterator((TIterator *)local_38,&this->AllNetworkObjects);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      lVar2 = *(longlong *)(*(longlong *)local_38._0_8_ + (longlong)local_1c * 0x18);
      if (lVar2 != 0) {
        pbVar1 = (byte *)(lVar2 + 0xd0);
        *pbVar1 = *pbVar1 & 0xfd;
      }
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_38 + 8));
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  return;
}

// SetSubObjectForDeletion @ 14805f880

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNetworkObjectList::SetSubObjectForDeletion
          (FNetworkObjectList *this,AActor *param_1,UObject *param_2)

{
  InvalidateSubObject(this,param_1,param_2,Delete);
  return;
}

// SetSubObjectForTearOff @ 14805f890

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNetworkObjectList::SetSubObjectForTearOff
          (FNetworkObjectList *this,AActor *param_1,UObject *param_2)

{
  InvalidateSubObject(this,param_1,param_2,TearOff);
  return;
}

// SwapMultipleReferencesForDormancy @ 148065c60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNetworkObjectList::SwapMultipleReferencesForDormancy
          (FNetworkObjectList *this,AActor *param_1,
          TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> *param_2,UActorChannel *param_3,
          UNetConnection *param_4)

{
  TWeakObjectPtr<UObject,FWeakObjectPtr> *pTVar1;
  FActorSubObjectReferences *pFVar2;
  TWeakObjectPtr<UObject,FWeakObjectPtr> *pTVar3;
  FWeakObjectPtr local_res8;
  AActor *local_res10;
  
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  if (param_1 != (AActor *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  }
  pFVar2 = TSet<FNetworkObjectList::FActorSubObjectReferences,FNetworkObjectList::FActorSubObjectRefKeyFuncs,FDefaultSetAllocator>
           ::Find(&this->SubObjectChannelReferences,(FObjectKey *)&local_res8);
  if (pFVar2 != (FActorSubObjectReferences *)0x0) {
    pTVar3 = param_2->DataPtr;
    pTVar1 = pTVar3 + param_2->ArrayNum;
    for (; pTVar3 != pTVar1; pTVar3 = pTVar3 + 1) {
      HandleSwapReferenceForDormancy(this,pFVar2,pTVar3,(UObject *)param_3,(UObject *)param_4);
    }
  }
  return;
}

// SwapReferenceForDormancy @ 148065d50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNetworkObjectList::SwapReferenceForDormancy
          (FNetworkObjectList *this,AActor *param_1,UObject *param_2,UNetConnection *param_3,
          UActorChannel *param_4)

{
  FActorSubObjectReferences *pFVar1;
  FWeakObjectPtr local_res8;
  AActor *local_res10;
  
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  if (param_1 != (AActor *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  }
  pFVar1 = TSet<FNetworkObjectList::FActorSubObjectReferences,FNetworkObjectList::FActorSubObjectRefKeyFuncs,FDefaultSetAllocator>
           ::Find(&this->SubObjectChannelReferences,(FObjectKey *)&local_res8);
  if (pFVar1 != (FActorSubObjectReferences *)0x0) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_2);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = (AActor *)param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_2);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    HandleSwapReferenceForDormancy
              (this,pFVar1,(TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_res8,(UObject *)param_3,
               (UObject *)param_4);
  }
  return;
}

// operator() @ 150520370

bool __thiscall
`FNetworkObjectList::HandleRemoveAnySubObjectChannelRef'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  UObject *pUVar6;
  FWeakObjectPtr local_res10;
  FName local_res18;
  FName local_res20;
  FString local_48;
  FString local_38;
  
  bVar3 = false;
  bVar2 = false;
  local_res10.ObjectIndex = 0;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6392462506836622556>);
  if (bVar4) {
    local_res10.ObjectIndex = **(int **)((longlong)this + 8);
    local_res10.ObjectSerialNumber = (*(int **)((longlong)this + 8))[1];
    pUVar6 = FWeakObjectPtr::GetEvenIfUnreachable(&local_res10);
    if (pUVar6 == (UObject *)0x0) {
      ::FString::FString(&local_38,L"None");
    }
    else {
      local_res18.ComparisonIndex.Value = *(uint *)&pUVar6->field_0x18;
      local_res18.Number = *(uint *)&pUVar6->field_0x1c;
      ::FName::ToString(&local_res18,&local_38);
    }
    FWeakObjectPtr::GetEvenIfUnreachable(*(FWeakObjectPtr **)this);
    pUVar6 = FWeakObjectPtr::GetEvenIfUnreachable(*(FWeakObjectPtr **)this);
    if (pUVar6 == (UObject *)0x0) {
      ::FString::FString(&local_48,L"None");
    }
    else {
      local_res20.ComparisonIndex.Value = *(uint *)&pUVar6->field_0x18;
      local_res20.Number = *(uint *)&pUVar6->field_0x1c;
      ::FName::ToString(&local_res20,&local_48);
    }
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6392462506836622556>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1505204ae;
    }
  }
  bVar4 = false;
LAB_1505204ae:
  if ((bVar2) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150520770

bool __thiscall `FNetworkObjectList::FindOrAdd'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString *pFVar6;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6392462506836623277>);
  if (bVar4) {
    if (**(longlong **)((longlong)this + 8) != 0) {
      pFVar6 = ::FName::ToString((FName *)(**(longlong **)((longlong)this + 8) + 0x218),&local_18);
      if ((pFVar6->Data).ArrayNum == 0) {
        bVar3 = true;
      }
      else {
        bVar3 = true;
      }
    }
    bVar2 = true;
    UObjectBaseUtility::GetPathName
              ((UObjectBaseUtility *)**(undefined8 **)this,&local_28,(UObject *)0x0);
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6392462506836623277>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150520834;
    }
  }
  bVar4 = false;
LAB_150520834:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150520c10

bool __thiscall
`FNetworkObjectList::HandleRemoveActiveSubObjectRef'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  UObject *pUVar7;
  FWeakObjectPtr local_res10;
  FName local_res18;
  FName local_res20;
  FName local_78;
  FString local_70;
  FString local_60;
  FString local_50;
  
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  local_res10.ObjectIndex = 0;
  bVar5 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6392462506836622539>);
  if (bVar5) {
    if (**(longlong **)((longlong)this + 0x10) == 0) {
      ::FString::FString(&local_50,L"None");
    }
    else {
      local_res18 = *(FName *)(**(longlong **)((longlong)this + 0x10) + 0x18);
      ::FName::ToString(&local_res18,&local_50);
    }
    local_res10.ObjectIndex = **(int **)((longlong)this + 8);
    local_res10.ObjectSerialNumber = (*(int **)((longlong)this + 8))[1];
    pUVar7 = FWeakObjectPtr::GetEvenIfUnreachable(&local_res10);
    if (pUVar7 == (UObject *)0x0) {
      ::FString::FString(&local_60,L"None");
    }
    else {
      local_res20.ComparisonIndex.Value = *(uint *)&pUVar7->field_0x18;
      local_res20.Number = *(uint *)&pUVar7->field_0x1c;
      ::FName::ToString(&local_res20,&local_60);
    }
    FWeakObjectPtr::GetEvenIfUnreachable(*(FWeakObjectPtr **)this);
    pUVar7 = FWeakObjectPtr::GetEvenIfUnreachable(*(FWeakObjectPtr **)this);
    if (pUVar7 == (UObject *)0x0) {
      ::FString::FString(&local_70,L"None");
    }
    else {
      local_78.ComparisonIndex.Value = *(uint *)&pUVar7->field_0x18;
      local_78.Number = *(uint *)&pUVar7->field_0x1c;
      ::FName::ToString(&local_78,&local_70);
    }
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
    bVar5 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6392462506836622539>,&::ENSURE_Static);
    if (bVar5) {
      bVar5 = true;
      goto LAB_150520db0;
    }
  }
  bVar5 = false;
LAB_150520db0:
  if ((bVar2) && (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return (bool)uVar6;
  }
  return false;
}

// operator() @ 150520e20

bool __thiscall
`FNetworkObjectList::HandleRemoveInvalidSubObjectRef'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  UObject *pUVar7;
  FWeakObjectPtr local_res10;
  FName local_res18;
  FName local_res20;
  FName local_78;
  FString local_70;
  FString local_60;
  FString local_50;
  
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  local_res10.ObjectIndex = 0;
  bVar5 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6392462506836622515>);
  if (bVar5) {
    if (**(longlong **)((longlong)this + 0x10) == 0) {
      ::FString::FString(&local_50,L"None");
    }
    else {
      local_res18 = *(FName *)(**(longlong **)((longlong)this + 0x10) + 0x18);
      ::FName::ToString(&local_res18,&local_50);
    }
    local_res10.ObjectIndex = **(int **)((longlong)this + 8);
    local_res10.ObjectSerialNumber = (*(int **)((longlong)this + 8))[1];
    pUVar7 = FWeakObjectPtr::GetEvenIfUnreachable(&local_res10);
    if (pUVar7 == (UObject *)0x0) {
      ::FString::FString(&local_60,L"None");
    }
    else {
      local_res20.ComparisonIndex.Value = *(uint *)&pUVar7->field_0x18;
      local_res20.Number = *(uint *)&pUVar7->field_0x1c;
      ::FName::ToString(&local_res20,&local_60);
    }
    FWeakObjectPtr::GetEvenIfUnreachable(*(FWeakObjectPtr **)this);
    pUVar7 = FWeakObjectPtr::GetEvenIfUnreachable(*(FWeakObjectPtr **)this);
    if (pUVar7 == (UObject *)0x0) {
      ::FString::FString(&local_70,L"None");
    }
    else {
      local_78.ComparisonIndex.Value = *(uint *)&pUVar7->field_0x18;
      local_78.Number = *(uint *)&pUVar7->field_0x1c;
      ::FName::ToString(&local_78,&local_70);
    }
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
    bVar5 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6392462506836622515>,&::ENSURE_Static);
    if (bVar5) {
      bVar5 = true;
      goto LAB_150520fc0;
    }
  }
  bVar5 = false;
LAB_150520fc0:
  if ((bVar2) && (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return (bool)uVar6;
  }
  return false;
}

// operator() @ 150521290

bool __thiscall `FNetworkObjectList::OnPostSeamlessTravel'::__l9::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6392462506836622919>);
  if (bVar2) {
    if (**(longlong **)this == 0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res10[0] = *(FName *)(**(longlong **)this + 0x18);
      ::FName::ToString(local_res10,&local_18);
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6392462506836622919>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150521320;
    }
  }
  bVar2 = false;
LAB_150521320:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150521ac0

bool __thiscall
`FNetworkObjectList::AddSubObjectChannelReference'::__l11::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FString local_58;
  FString local_48;
  FString local_38;
  
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar5 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6392462506836622668>);
  if (bVar5) {
    if (**(longlong **)((longlong)this + 0x10) == 0) {
      ::FString::FString(&local_38,L"None");
    }
    else {
      local_res10 = *(FName *)(**(longlong **)((longlong)this + 0x10) + 0x18);
      ::FName::ToString(&local_res10,&local_38);
    }
    if (**(longlong **)((longlong)this + 8) == 0) {
      ::FString::FString(&local_48,L"None");
    }
    else {
      local_res18 = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
      ::FName::ToString(&local_res18,&local_48);
    }
    if (**(longlong **)this == 0) {
      ::FString::FString(&local_58,L"None");
    }
    else {
      local_res20 = *(FName *)(**(longlong **)this + 0x18);
      ::FName::ToString(&local_res20,&local_58);
    }
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
    bVar5 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6392462506836622668>,&::ENSURE_Static);
    if (bVar5) {
      bVar5 = true;
      goto LAB_150521c49;
    }
  }
  bVar5 = false;
LAB_150521c49:
  if ((bVar2) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return (bool)uVar6;
  }
  return false;
}

// operator() @ 150522020

bool __thiscall
`FNetworkObjectList::HandleSwapReferenceForDormancy'::__l15::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  UObject *pUVar8;
  FWeakObjectPtr local_res10;
  FName local_res18;
  FName local_res20;
  FName local_98;
  FName local_90;
  undefined8 local_88;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  local_res10.ObjectIndex = 0;
  bVar6 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6392462506836622463>);
  if (bVar6) {
    if (**(longlong **)((longlong)this + 0x18) == 0) {
      ::FString::FString(&local_50,L"None");
    }
    else {
      local_res18 = *(FName *)(**(longlong **)((longlong)this + 0x18) + 0x18);
      ::FName::ToString(&local_res18,&local_50);
    }
    local_88 = **(undefined8 **)((longlong)this + 0x18);
    local_res10.ObjectIndex = *(int *)**(undefined8 **)((longlong)this + 0x10);
    local_res10.ObjectSerialNumber = ((int *)**(undefined8 **)((longlong)this + 0x10))[1];
    pUVar8 = FWeakObjectPtr::GetEvenIfUnreachable(&local_res10);
    if (pUVar8 == (UObject *)0x0) {
      ::FString::FString(&local_60,L"None");
    }
    else {
      local_res20.ComparisonIndex.Value = *(uint *)&pUVar8->field_0x18;
      local_res20.Number = *(uint *)&pUVar8->field_0x1c;
      ::FName::ToString(&local_res20,&local_60);
    }
    FWeakObjectPtr::GetEvenIfUnreachable(*(FWeakObjectPtr **)((longlong)this + 8));
    pUVar8 = FWeakObjectPtr::GetEvenIfUnreachable(*(FWeakObjectPtr **)((longlong)this + 8));
    if (pUVar8 == (UObject *)0x0) {
      ::FString::FString(&local_70,L"None");
    }
    else {
      local_98.ComparisonIndex.Value = *(uint *)&pUVar8->field_0x18;
      local_98.Number = *(uint *)&pUVar8->field_0x1c;
      ::FName::ToString(&local_98,&local_70);
    }
    if (**(longlong **)this == 0) {
      ::FString::FString(&local_80,L"None");
    }
    else {
      local_90 = *(FName *)(**(longlong **)this + 0x18);
      ::FName::ToString(&local_90,&local_80);
    }
    bVar5 = true;
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
    bVar6 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6392462506836622463>,&::ENSURE_Static);
    if (bVar6) {
      bVar6 = true;
      goto LAB_150522217;
    }
  }
  bVar6 = false;
LAB_150522217:
  if ((bVar2) && (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  if ((bVar5) && (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  if (bVar6) {
    pcVar1 = (code *)swi(3);
    uVar7 = (*pcVar1)();
    return (bool)uVar7;
  }
  return false;
}

// operator() @ 150522500

bool __thiscall
`FNetworkObjectList::HandleSwapReferenceForDormancy'::__l15::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  UObject *pUVar7;
  FWeakObjectPtr local_res10;
  FName local_res18;
  FName local_res20;
  FName local_78;
  FString local_70;
  FString local_60;
  FString local_50;
  
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  local_res10.ObjectIndex = 0;
  bVar5 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6392462506836622460>);
  if (bVar5) {
    local_res10.ObjectIndex = *(int *)**(undefined8 **)((longlong)this + 0x10);
    local_res10.ObjectSerialNumber = ((int *)**(undefined8 **)((longlong)this + 0x10))[1];
    pUVar7 = FWeakObjectPtr::GetEvenIfUnreachable(&local_res10);
    if (pUVar7 == (UObject *)0x0) {
      ::FString::FString(&local_50,L"None");
    }
    else {
      local_res18.ComparisonIndex.Value = *(uint *)&pUVar7->field_0x18;
      local_res18.Number = *(uint *)&pUVar7->field_0x1c;
      ::FName::ToString(&local_res18,&local_50);
    }
    FWeakObjectPtr::GetEvenIfUnreachable(*(FWeakObjectPtr **)((longlong)this + 8));
    pUVar7 = FWeakObjectPtr::GetEvenIfUnreachable(*(FWeakObjectPtr **)((longlong)this + 8));
    if (pUVar7 == (UObject *)0x0) {
      ::FString::FString(&local_60,L"None");
    }
    else {
      local_res20.ComparisonIndex.Value = *(uint *)&pUVar7->field_0x18;
      local_res20.Number = *(uint *)&pUVar7->field_0x1c;
      ::FName::ToString(&local_res20,&local_60);
    }
    if (**(longlong **)this == 0) {
      ::FString::FString(&local_70,L"None");
    }
    else {
      local_78 = *(FName *)(**(longlong **)this + 0x18);
      ::FName::ToString(&local_78,&local_70);
    }
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
    bVar5 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6392462506836622460>,&::ENSURE_Static);
    if (bVar5) {
      bVar5 = true;
      goto LAB_150522690;
    }
  }
  bVar5 = false;
LAB_150522690:
  if ((bVar2) && (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return (bool)uVar6;
  }
  return false;
}

// operator() @ 150522700

bool __thiscall
`FNetworkObjectList::HandleSwapReferenceForDormancy'::__l17::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  UObject *pUVar8;
  FWeakObjectPtr local_res10;
  FName local_res18;
  FName local_res20;
  FName local_98;
  FName local_90;
  undefined8 local_88;
  undefined8 local_80;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  local_res10.ObjectIndex = 0;
  bVar6 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6392462506836622453>);
  if (bVar6) {
    if (**(longlong **)((longlong)this + 0x18) == 0) {
      ::FString::FString(&local_48,L"None");
    }
    else {
      local_res18 = *(FName *)(**(longlong **)((longlong)this + 0x18) + 0x18);
      ::FName::ToString(&local_res18,&local_48);
    }
    local_88 = **(undefined8 **)((longlong)this + 0x18);
    if (**(longlong **)((longlong)this + 0x10) == 0) {
      ::FString::FString(&local_58,L"None");
    }
    else {
      local_res20 = *(FName *)(**(longlong **)((longlong)this + 0x10) + 0x18);
      ::FName::ToString(&local_res20,&local_58);
    }
    local_80 = **(undefined8 **)((longlong)this + 0x10);
    local_res10.ObjectIndex = *(int *)**(undefined8 **)((longlong)this + 8);
    local_res10.ObjectSerialNumber = ((int *)**(undefined8 **)((longlong)this + 8))[1];
    pUVar8 = FWeakObjectPtr::GetEvenIfUnreachable(&local_res10);
    if (pUVar8 == (UObject *)0x0) {
      ::FString::FString(&local_68,L"None");
    }
    else {
      local_98.ComparisonIndex.Value = *(uint *)&pUVar8->field_0x18;
      local_98.Number = *(uint *)&pUVar8->field_0x1c;
      ::FName::ToString(&local_98,&local_68);
    }
    FWeakObjectPtr::GetEvenIfUnreachable(*(FWeakObjectPtr **)this);
    pUVar8 = FWeakObjectPtr::GetEvenIfUnreachable(*(FWeakObjectPtr **)this);
    if (pUVar8 == (UObject *)0x0) {
      ::FString::FString(&local_78,L"None");
    }
    else {
      local_90.ComparisonIndex.Value = *(uint *)&pUVar8->field_0x18;
      local_90.Number = *(uint *)&pUVar8->field_0x1c;
      ::FName::ToString(&local_90,&local_78);
    }
    bVar5 = true;
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
    bVar6 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6392462506836622453>,&::ENSURE_Static);
    if (bVar6) {
      bVar6 = true;
      goto LAB_150522902;
    }
  }
  bVar6 = false;
LAB_150522902:
  if ((bVar2) && (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((bVar5) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (bVar6) {
    pcVar1 = (code *)swi(3);
    uVar7 = (*pcVar1)();
    return (bool)uVar7;
  }
  return false;
}

