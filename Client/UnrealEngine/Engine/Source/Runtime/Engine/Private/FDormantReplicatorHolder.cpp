// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 15

// CleanupAllReplicatorsOfActor @ 148023570

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
UE::Net::Private::FDormantReplicatorHolder::CleanupAllReplicatorsOfActor
          (FDormantReplicatorHolder *this,AActor *param_1)

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
    if (GC::GIsIncrementalReachabilityPending) {
      GC::MarkAsReachable((UObject *)param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = param_1;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    uVar8 = (ulonglong)local_res8 >> 0x20;
    iVar7 = local_res8.ObjectIndex;
  }
  if (*(int *)&(this->ActorReplicatorSet).Elements.field_0x8 !=
      *(int *)&(this->ActorReplicatorSet).Elements.field_0x34) {
    iVar11 = (int)uVar8;
    uVar9 = iVar7 - iVar11 ^ (uint)(uVar8 >> 0xd);
    uVar4 = (-0x61c88647 - uVar9) - iVar11 ^ uVar9 << 8;
    uVar2 = (iVar11 - uVar4) - uVar9 ^ uVar4 >> 0xd;
    uVar10 = (uVar9 - uVar2) - uVar4 ^ uVar2 >> 0xc;
    uVar9 = (uVar4 - uVar2) - uVar10 ^ uVar10 << 0x10;
    uVar4 = (uVar2 - uVar9) - uVar10 ^ uVar9 >> 5;
    uVar10 = (uVar10 - uVar4) - uVar9 ^ uVar4 >> 3;
    uVar2 = uVar10 << 10 ^ (uVar9 - uVar10) - uVar4;
    FVar6 = (this->ActorReplicatorSet).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->ActorReplicatorSet).Hash;
    }
    iVar5 = *(int *)((longlong)FVar6 +
                    (((longlong)(int)((uVar4 - uVar2) - uVar10) ^ (ulonglong)(uVar2 >> 0xf)) &
                    (longlong)(this->ActorReplicatorSet).HashSize - 1U) * 4);
    if (iVar5 != -1) {
      lVar1 = *(longlong *)&(this->ActorReplicatorSet).Elements;
      while ((lVar3 = (longlong)iVar5 * 0x60, *(int *)(lVar3 + lVar1) != iVar7 ||
             (*(int *)(lVar3 + 4 + lVar1) != iVar11))) {
        iVar5 = *(int *)(lVar3 + 0x58 + lVar1);
        if (iVar5 == -1) {
          return;
        }
      }
      TSet<UE::Net::Private::FActorDormantReplicators,UE::Net::Private::FDormantReplicatorHolder::FActorDormantReplicatorsKeyFuncs,FDefaultSetAllocator>
      ::RemoveByIndex(&this->ActorReplicatorSet,iVar5);
    }
  }
  return;
}

// CleanupStaleObjects @ 148023b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Net::Private::FDormantReplicatorHolder::CleanupStaleObjects
          (FDormantReplicatorHolder *this,FNetworkObjectList *param_1,UObject *param_2)

{
  TSet<FNetworkObjectList::FActorSubObjectReferences,FNetworkObjectList::FActorSubObjectRefKeyFuncs,FDefaultSetAllocator>
  *this_00;
  ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> FVar1;
  code *pcVar2;
  FNetworkObjectList *this_01;
  int iVar3;
  UObject *pUVar4;
  bool bVar5;
  longlong lVar6;
  int *piVar7;
  FActorSubObjectReferences *pFVar8;
  int *piVar9;
  ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> FVar10;
  longlong *plVar11;
  int iVar12;
  undefined1 auStackY_1b8 [32];
  FWeakObjectPtr local_168;
  FNetworkObjectList *local_160;
  FObjectKey local_158;
  undefined1 local_150 [12];
  uint local_144;
  longlong local_140;
  uint local_138;
  int local_134;
  TSet<UE::Net::Private::FActorDormantReplicators,UE::Net::Private::FDormantReplicatorHolder::FActorDormantReplicatorsKeyFuncs,FDefaultSetAllocator>
  *local_128;
  undefined8 local_120;
  UObject *local_118;
  undefined1 local_110 [12];
  uint local_104;
  longlong local_100;
  uint local_f8;
  int local_f4;
  TSet<UE::Net::Private::FDormantObjectReplicator,UE::Net::Private::FActorDormantReplicators::FDormantObjectReplicatorKeyFuncs,FDefaultSetAllocator>
  *local_e8;
  ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> local_d8;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_d8.SecondaryData = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0;
  local_50 = 0;
  local_4c = 0x10;
  local_160 = param_1;
  local_118 = param_2;
  TSet<UE::Net::Private::FActorDormantReplicators,UE::Net::Private::FDormantReplicatorHolder::FActorDormantReplicatorsKeyFuncs,FDefaultSetAllocator>
  ::TIterator::TIterator((TIterator *)local_150,&this->ActorReplicatorSet);
  if (local_134 < *(int *)(local_140 + 0x18)) {
    do {
      iVar12 = local_134;
      plVar11 = (longlong *)local_150._0_8_;
      TSet<UE::Net::Private::FDormantObjectReplicator,UE::Net::Private::FActorDormantReplicators::FDormantObjectReplicatorKeyFuncs,FDefaultSetAllocator>
      ::TIterator::TIterator
                ((TIterator *)local_110,
                 (TSet<UE::Net::Private::FDormantObjectReplicator,UE::Net::Private::FActorDormantReplicators::FDormantObjectReplicatorKeyFuncs,FDefaultSetAllocator>
                  *)(*(longlong *)local_150._0_8_ + 8 + (longlong)local_134 * 0x60));
      if (local_f4 < *(int *)(local_100 + 0x18)) {
        do {
          iVar3 = local_f4;
          piVar9 = (int *)((longlong)local_f4 * 0x20 + *(longlong *)local_110._0_8_);
          local_168 = *(FWeakObjectPtr *)(*(longlong *)(piVar9 + 2) + 0xd8);
          bVar5 = FWeakObjectPtr::IsValid(&local_168);
          if (!bVar5) {
            piVar7 = (int *)((longlong)iVar12 * 0x60 + *plVar11);
            if ((*piVar7 != *piVar9) || (piVar7[1] != piVar9[1])) {
              FVar10 = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)&local_d8;
              if (local_d8.SecondaryData !=
                  (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
                FVar10 = local_d8.SecondaryData;
              }
              if ((ulonglong)FVar10 <= &local_168) {
                FVar10 = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)&local_d8;
                if (local_d8.SecondaryData !=
                    (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
                  FVar10 = local_d8.SecondaryData;
                }
                if ((&local_168 < (FWeakObjectPtr *)((longlong)FVar10 + (longlong)local_4c * 8)) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar5)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
              }
              if (local_50 == local_4c) {
                local_50 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>_>
                                     (0x408,&local_d8,&local_4c);
              }
              lVar6 = (longlong)local_50;
              FVar10 = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)&local_d8;
              if (local_d8.SecondaryData !=
                  (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
                FVar10 = local_d8.SecondaryData;
              }
              local_50 = local_50 + 1;
              *(FWeakObjectPtr *)((longlong)FVar10 + lVar6 * 8) = local_168;
            }
            TSet<UE::Net::Private::FDormantObjectReplicator,UE::Net::Private::FActorDormantReplicators::FDormantObjectReplicatorKeyFuncs,FDefaultSetAllocator>
            ::RemoveByIndex(local_e8,iVar3);
          }
          local_f8 = local_f8 & ~local_104;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_110 + 8));
        } while (local_f4 < *(int *)(local_100 + 0x18));
      }
      lVar6 = (longlong)local_50;
      if (0 < local_50) {
        this_00 = &param_1->SubObjectChannelReferences;
        FVar10 = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)&local_d8;
        if (local_d8.SecondaryData != (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0)
        {
          FVar10 = local_d8.SecondaryData;
        }
        local_120 = *(undefined8 *)((longlong)iVar12 * 0x60 + *plVar11);
        TSet<FNetworkObjectList::FActorSubObjectReferences,FNetworkObjectList::FActorSubObjectRefKeyFuncs,FDefaultSetAllocator>
        ::FindId(this_00,&local_158);
        pUVar4 = local_118;
        iVar3 = local_158.ObjectIndex;
        this_01 = local_160;
        if (local_158.ObjectIndex != -1) {
          FVar1 = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)
                  ((longlong)FVar10 + lVar6 * 8);
          pFVar8 = (FActorSubObjectReferences *)
                   ((longlong)local_158.ObjectIndex * 0x78 + *(longlong *)&this_00->Elements);
          for (; FVar10 != FVar1;
              FVar10 = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)
                       ((longlong)FVar10 + 8)) {
            FNetworkObjectList::HandleRemoveAnySubObjectChannelRef
                      (this_01,pFVar8,(TWeakObjectPtr<UObject,FWeakObjectPtr> *)FVar10,pUVar4);
            plVar11 = (longlong *)local_150._0_8_;
            iVar12 = local_134;
          }
          param_1 = local_160;
          if ((*(int *)&(pFVar8->ActiveSubObjectChannelReferences).Elements.field_0x8 ==
               *(int *)&(pFVar8->ActiveSubObjectChannelReferences).Elements.field_0x34) &&
             ((pFVar8->InvalidSubObjectChannelReferences).ArrayNum == 0)) {
            TSet<FNetworkObjectList::FActorSubObjectReferences,FNetworkObjectList::FActorSubObjectRefKeyFuncs,FDefaultSetAllocator>
            ::RemoveByIndex(this_00,iVar3);
            param_1 = local_160;
          }
        }
        if (local_4c < 0) {
          local_50 = 0;
          if (local_4c != 0) {
            Core::Private::
            ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>_>
                      (8,4,0,&local_d8,0,&local_4c);
          }
        }
        else {
          local_50 = 0;
        }
      }
      lVar6 = (longlong)iVar12 * 0x60 + *plVar11;
      if (*(int *)(lVar6 + 0x10) == *(int *)(lVar6 + 0x3c)) {
        TSet<UE::Net::Private::FActorDormantReplicators,UE::Net::Private::FDormantReplicatorHolder::FActorDormantReplicatorsKeyFuncs,FDefaultSetAllocator>
        ::RemoveByIndex(local_128,iVar12);
      }
      local_138 = local_138 & ~local_144;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_150 + 8));
    } while (local_134 < *(int *)(local_140 + 0x18));
  }
  if (local_d8.SecondaryData != (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
    FMemory::Free((void *)local_d8.SecondaryData);
  }
  return;
}

// ClearFlushedObjectsForActor @ 148024120

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
UE::Net::Private::FDormantReplicatorHolder::ClearFlushedObjectsForActor
          (FDormantReplicatorHolder *this,AActor *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FWeakObjectPtr local_res8;
  AActor *local_res10;
  
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  uVar2 = 0;
  uVar1 = uVar2;
  if (param_1 != (AActor *)0x0) {
    if (GC::GIsIncrementalReachabilityPending) {
      GC::MarkAsReachable((UObject *)param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = param_1;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    uVar2 = local_res8.ObjectIndex;
    uVar1 = local_res8.ObjectSerialNumber;
  }
  if (*(int *)&(this->FlushedObjectMap).field_0x8 != *(int *)&(this->FlushedObjectMap).field_0x34) {
    uVar2 = uVar2 - uVar1 ^ uVar1 >> 0xd;
    uVar3 = (-0x61c88647 - uVar2) - uVar1 ^ uVar2 << 8;
    uVar1 = (uVar1 - uVar3) - uVar2 ^ uVar3 >> 0xd;
    uVar2 = (uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xc;
    uVar3 = (uVar3 - uVar1) - uVar2 ^ uVar2 << 0x10;
    uVar1 = (uVar1 - uVar3) - uVar2 ^ uVar3 >> 5;
    uVar2 = (uVar2 - uVar1) - uVar3 ^ uVar1 >> 3;
    uVar3 = (uVar3 - uVar2) - uVar1 ^ uVar2 << 10;
    TSet<TTuple<FObjectKey,TMap<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>,0>,FDefaultSetAllocator>
    ::RemoveImpl<FObjectKey>
              ((TSet<TTuple<FObjectKey,TMap<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>,0>,FDefaultSetAllocator>
                *)&this->FlushedObjectMap,(uVar1 - uVar3) - uVar2 ^ uVar3 >> 0xf,
               (FObjectKey *)&local_res8);
  }
  return;
}

// CountBytes @ 1480262e0

void __thiscall
UE::Net::Private::FDormantReplicatorHolder::CountBytes
          (FDormantReplicatorHolder *this,FArchive *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  FDormantReplicatorHolder *pFVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  TMap<FObjectKey,TMap<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>,0>_>
  *this_00;
  int iVar11;
  int iVar12;
  undefined1 *puVar13;
  uint *puVar14;
  undefined1 local_res10 [8];
  int local_res18;
  ulonglong local_res20;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  int iStack_c0;
  undefined4 uStack_bc;
  FDormantReplicatorHolder *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  undefined4 local_6c;
  undefined4 local_4c;
  
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)&(this->ActorReplicatorSet).Elements.field_0x8 * 0x60,
             (longlong)*(int *)&(this->ActorReplicatorSet).Elements.field_0xc * 0x60);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)
                     (*(int *)&(this->ActorReplicatorSet).Elements.field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&(this->ActorReplicatorSet).Elements.field_0x2c + 0x1fU >> 5) << 2)
  ;
  lVar9 = (longlong)(this->ActorReplicatorSet).HashSize << 2;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,lVar9,lVar9);
  iVar3 = *(int *)&(this->ActorReplicatorSet).Elements.field_0x28;
  puVar1 = &(this->ActorReplicatorSet).Elements.field_0x10;
  iVar11 = 0;
  local_res20 = 1;
  iVar12 = 0;
  TStack_e0.BaseBitIndex = 0;
  uVar8 = 1;
  TStack_e0.CurrentBitIndex = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->ActorReplicatorSet).Elements.field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar8 = *puVar14;
    TStack_e0.BaseBitIndex = 0;
    while (uVar8 == 0) {
      lVar9 = (longlong)iVar12;
      TStack_e0.BaseBitIndex = TStack_e0.BaseBitIndex + 0x20;
      iVar12 = iVar12 + 1;
      uVar8 = 1;
      TStack_e0.CurrentBitIndex = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1480263ef;
      uVar8 = puVar14[lVar9 + 1];
    }
    uVar8 = -uVar8 & uVar8;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res18 = (int)lVar9;
    TStack_e0.CurrentBitIndex = TStack_e0.BaseBitIndex + -1 + local_res18;
    if (iVar3 < TStack_e0.CurrentBitIndex) {
      TStack_e0.CurrentBitIndex = iVar3;
    }
  }
LAB_1480263ef:
  iStack_c0 = *(int *)&(this->ActorReplicatorSet).Elements.field_0x8 -
              *(int *)&(this->ActorReplicatorSet).Elements.field_0x34;
  uVar10 = *(uint *)&(this->ActorReplicatorSet).Elements.field_0x28;
  TStack_e0._padding_ = CONCAT44(uVar8,iVar12);
  uVar8 = uVar10 & 0xffffffe0;
  TStack_e0.UnvisitedBitMask = 0xffffffff;
  TStack_e0._28_4_ = local_6c;
  TStack_b0._padding_ = TStack_e0._padding_;
  iVar12 = (int)uVar10 >> 5;
  uStack_90 = CONCAT44(uStack_bc,iStack_c0);
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  TStack_b0.CurrentBitIndex = TStack_e0.CurrentBitIndex;
  TStack_b0.BaseBitIndex = TStack_e0.BaseBitIndex;
  TStack_b0._28_4_ = local_6c;
  TStack_e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  local_b8 = this;
  TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(this->ActorReplicatorSet).Elements.field_0x28;
  if (uVar10 != uVar4) {
    puVar13 = *(undefined1 **)&(this->ActorReplicatorSet).Elements.field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar12;
      uVar8 = uVar8 + 0x20;
      iVar12 = iVar12 + 1;
      uVar10 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1480264f0;
      uVar10 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar10 = (int)lVar9 + -1 + uVar8;
    if ((int)uVar4 < (int)uVar10) {
      uVar10 = uVar4;
    }
  }
LAB_1480264f0:
  while( true ) {
    pFVar6 = local_b8;
    if (*(int *)&(local_b8->ActorReplicatorSet).Elements.field_0x8 -
        *(int *)&(local_b8->ActorReplicatorSet).Elements.field_0x34 != (int)uStack_90) {
      `TSparseArray<TSparseSetElement<UE::Net::Private::FActorDormantReplicators>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_b0.CurrentBitIndex == uVar10) &&
        (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pFVar6 == this))
    break;
    lVar9 = *(longlong *)&(pFVar6->ActorReplicatorSet).Elements +
            (longlong)TStack_b0.CurrentBitIndex * 0x60;
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)*(int *)(lVar9 + 0x10) << 5,(longlong)*(int *)(lVar9 + 0x14) << 5);
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(ulonglong)(*(int *)(lVar9 + 0x30) + 0x1fU >> 5) << 2,
               (ulonglong)(*(int *)(lVar9 + 0x34) + 0x1fU >> 5) << 2);
    lVar9 = (longlong)*(int *)(lVar9 + 0x50) << 2;
    (**(code **)(*(longlong *)param_1 + 0x10))(param_1,lVar9,lVar9);
    TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
  }
  this_00 = &this->FlushedObjectMap;
  TSet<TTuple<FObjectKey,TMap<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>,0>,FDefaultSetAllocator>
  ::CountBytes((TSet<TTuple<FObjectKey,TMap<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>,0>,FDefaultSetAllocator>
                *)this_00,param_1);
  iVar3 = *(int *)&(this->FlushedObjectMap).field_0x28;
  TStack_e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->FlushedObjectMap).field_0x10;
  TStack_b0.BaseBitIndex = 0;
  TStack_e0.CurrentBitIndex = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->FlushedObjectMap).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)TStack_e0.Array;
    }
    uVar8 = *puVar14;
    TStack_b0.BaseBitIndex = 0;
    while (uVar8 == 0) {
      lVar9 = (longlong)iVar11;
      TStack_b0.BaseBitIndex = TStack_b0.BaseBitIndex + 0x20;
      iVar11 = iVar11 + 1;
      TStack_e0.CurrentBitIndex = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14802661a;
      uVar8 = puVar14[lVar9 + 1];
    }
    local_res20 = (ulonglong)(-uVar8 & uVar8);
    uVar2 = local_res20 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    TStack_e0.CurrentBitIndex = TStack_b0.BaseBitIndex + -1 + (int)lVar9;
    if (iVar3 < TStack_e0.CurrentBitIndex) {
      TStack_e0.CurrentBitIndex = iVar3;
    }
  }
LAB_14802661a:
  TStack_e0._padding_._4_4_ = (uint)local_res20;
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  TStack_b0._28_4_ = local_4c;
  TStack_e0.BaseBitIndex = TStack_b0.BaseBitIndex;
  TStack_e0._28_4_ = local_4c;
  TStack_e0.UnvisitedBitMask = 0xffffffff;
  local_b8 = (FDormantReplicatorHolder *)this_00;
  TStack_b0.Array = TStack_e0.Array;
  TStack_b0.CurrentBitIndex = TStack_e0.CurrentBitIndex;
  TStack_e0._padding_._0_4_ = iVar11;
  TStack_b0._padding_._0_4_ = iVar11;
  TStack_b0._padding_._4_4_ = TStack_e0._padding_._4_4_;
  if (TStack_e0.CurrentBitIndex < iVar3) {
    do {
      TSet<TTuple<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
      ::CountBytes((TSet<TTuple<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                    *)(*(longlong *)&this_00->field_0x0 + 8 +
                      (longlong)TStack_e0.CurrentBitIndex * 0x60),param_1);
      TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
    } while (TStack_e0.CurrentBitIndex < (TStack_e0.Array)->NumBits);
  }
  return;
}

// CreateAndStoreReplicator @ 148027cf0

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

TSharedRef<FObjectReplicator,1> * __thiscall
UE::Net::Private::FDormantReplicatorHolder::CreateAndStoreReplicator
          (FDormantReplicatorHolder *this,AActor *param_1,UObject *param_2,bool *param_3)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  FActorDormantReplicators *pFVar4;
  TSharedRef<FObjectReplicator,1> *pTVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStackY_128 [32];
  int local_f8;
  FWeakObjectPtr local_f0;
  undefined1 local_e8 [16];
  int local_d8;
  int local_d4;
  TReferenceControllerBase<1> *local_d0;
  TReferenceControllerBase<1> *pTStack_c8;
  AActor *local_c0;
  UObject *local_b8 [2];
  undefined1 local_a8 [8];
  undefined1 local_a0 [32];
  void *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ForElementType<FSetElementId> local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_128;
  if (param_1 == (AActor *)0x0) {
    local_a8._0_4_ = 0;
    local_a8._4_4_ = 0;
    local_f8 = 0;
  }
  else {
    if (GC::GIsIncrementalReachabilityPending) {
      GC::MarkAsReachable((UObject *)param_1);
    }
    local_e8._8_4_ = 0;
    local_e8._12_4_ = 0;
    local_c0 = param_1;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(local_e8 + 8),(FObjectPtr)&local_c0);
    local_f8 = (int)local_e8._8_8_;
    local_a8 = (undefined1  [8])local_e8._8_8_;
  }
  uVar7 = local_a8._4_4_;
  local_a0._0_8_ = (FScriptContainerElement *)0x0;
  local_a0._8_8_ = 0;
  uVar6 = local_f8 - uVar7 ^ uVar7 >> 0xd;
  local_80 = (void *)0x0;
  local_78 = ___xmm_00000000ffffffff0000008000000000;
  uStack_70 = _UNK_150631d98;
  local_60 = (ForElementType<FSetElementId>)0x0;
  local_58 = 0;
  uVar8 = (-0x61c88647 - uVar6) - uVar7 ^ uVar6 << 8;
  uVar7 = (uVar7 - uVar6) - uVar8 ^ uVar8 >> 0xd;
  uVar6 = (uVar6 - uVar7) - uVar8 ^ uVar7 >> 0xc;
  uVar8 = (uVar8 - uVar6) - uVar7 ^ uVar6 << 0x10;
  uVar7 = (uVar7 - uVar8) - uVar6 ^ uVar8 >> 5;
  uVar6 = (uVar6 - uVar7) - uVar8 ^ uVar7 >> 3;
  uVar8 = (uVar8 - uVar6) - uVar7 ^ uVar6 << 10;
  pFVar4 = TSet<UE::Net::Private::FActorDormantReplicators,UE::Net::Private::FDormantReplicatorHolder::FActorDormantReplicatorsKeyFuncs,FDefaultSetAllocator>
           ::FindOrAddByHash<UE::Net::Private::FActorDormantReplicators>
                     (&this->ActorReplicatorSet,(uVar7 - uVar8) - uVar6 ^ uVar8 >> 0xf,
                      (FActorDormantReplicators *)local_a8,(bool *)0x0);
  local_58 = 0;
  if (local_60 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_60);
  }
  TSparseArray<TSparseSetElement<UE::Net::Private::FDormantObjectReplicator>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<UE::Net::Private::FDormantObjectReplicator>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_a0,0,local_a0._8_4_);
  iVar2 = SUB84(local_a0._8_8_,4);
  local_a0._8_8_ = local_a0._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_a0,0,(int *)(local_a0 + 0xc));
  }
  uVar6 = local_78._4_4_;
  uStack_70 = 0xffffffff;
  local_78 = (ulonglong)local_78._4_4_ << 0x20;
  if (0x80 < uVar6) {
    local_78 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_a0 + 0x10),0);
  }
  if (local_80 != (void *)0x0) {
    FMemory::Free(local_80);
  }
  if ((FScriptContainerElement *)local_a0._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a0._0_8_);
  }
  local_d8 = 0;
  local_d4 = 0;
  if (param_2 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(param_2);
    }
    local_f0.ObjectIndex = 0;
    local_f0.ObjectSerialNumber = 0;
    local_b8[0] = param_2;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(param_2);
    }
    FWeakObjectPtr::operator=(&local_f0,(FObjectPtr)local_b8);
    local_d8 = local_f0.ObjectIndex;
    local_d4 = local_f0.ObjectSerialNumber;
  }
  pTStack_c8 = ::operator_new(0x100);
  if (pTStack_c8 == (TReferenceControllerBase<1> *)0x0) {
    local_d0 = ___xmm_00000000000000000000000000000010;
    pTStack_c8 = _UNK_150651568;
  }
  else {
    pTStack_c8->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_c8->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_c8->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFObjectReplicator___00_SharedPointerInternals__6B_;
    FObjectReplicator::FObjectReplicator((FObjectReplicator *)(pTStack_c8 + 1));
    local_d0 = pTStack_c8 + 1;
    if (local_d0 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TSharedRef<FObjectReplicator,1> *)(*pcVar1)();
        return pTVar5;
      }
    }
  }
  TSet<UE::Net::Private::FDormantObjectReplicator,UE::Net::Private::FActorDormantReplicators::FDormantObjectReplicatorKeyFuncs,FDefaultSetAllocator>
  ::Emplace<UE::Net::Private::FDormantObjectReplicator>
            (&pFVar4->DormantReplicators,(FDormantObjectReplicator *)local_e8,(bool *)&local_d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_c8);
  return (TSharedRef<FObjectReplicator,1> *)
         (*(longlong *)&(pFVar4->DormantReplicators).Elements +
         (longlong)(int)local_e8._0_4_ * 0x20 + 8);
}

// DoesReplicatorExist @ 14802c080

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UE::Net::Private::FDormantReplicatorHolder::DoesReplicatorExist
          (FDormantReplicatorHolder *this,AActor *param_1,UObject *param_2)

{
  FActorDormantReplicators *pFVar1;
  FDormantObjectReplicator *pFVar2;
  FWeakObjectPtr local_res8;
  AActor *local_res10;
  
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  if (param_1 != (AActor *)0x0) {
    if (GC::GIsIncrementalReachabilityPending) {
      GC::MarkAsReachable((UObject *)param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = param_1;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  }
  pFVar1 = TSet<UE::Net::Private::FActorDormantReplicators,UE::Net::Private::FDormantReplicatorHolder::FActorDormantReplicatorsKeyFuncs,FDefaultSetAllocator>
           ::Find(&this->ActorReplicatorSet,(FObjectKey *)&local_res8);
  if (pFVar1 != (FActorDormantReplicators *)0x0) {
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    if (param_2 != (UObject *)0x0) {
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable(param_2);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res10 = (AActor *)param_2;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable(param_2);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    }
    pFVar2 = TSet<UE::Net::Private::FDormantObjectReplicator,UE::Net::Private::FActorDormantReplicators::FDormantObjectReplicatorKeyFuncs,FDefaultSetAllocator>
             ::Find(&pFVar1->DormantReplicators,(FObjectKey *)&local_res8);
    return pFVar2 != (FDormantObjectReplicator *)0x0;
  }
  return false;
}

// EmptySet @ 14802e170

void __thiscall UE::Net::Private::FDormantReplicatorHolder::EmptySet(FDormantReplicatorHolder *this)

{
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = 1 < (this->ActorReplicatorSet).HashSize;
  if (!bVar3) {
    TSet<UE::Net::Private::FActorDormantReplicators,UE::Net::Private::FDormantReplicatorHolder::FActorDormantReplicatorsKeyFuncs,FDefaultSetAllocator>
    ::UnhashElements(&this->ActorReplicatorSet);
  }
  TSparseArray<TSparseSetElement<UE::Net::Private::FActorDormantReplicators>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<UE::Net::Private::FActorDormantReplicators>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this,0,*(int *)&(this->ActorReplicatorSet).Elements.field_0x8);
  puVar1 = &(this->ActorReplicatorSet).Elements.field_0xc;
  *(undefined4 *)&(this->ActorReplicatorSet).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,(ForAnyElementType *)this,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ActorReplicatorSet).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActorReplicatorSet).Elements.field_0x34 = 0;
  iVar2 = *(int *)&(this->ActorReplicatorSet).Elements.field_0x2c;
  *(undefined4 *)&(this->ActorReplicatorSet).Elements.field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->ActorReplicatorSet).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->ActorReplicatorSet).Elements.field_0x10,0);
  }
  if (bVar3) {
    (this->ActorReplicatorSet).HashSize = 1;
    TSet<UE::Net::Private::FActorDormantReplicators,UE::Net::Private::FDormantReplicatorHolder::FActorDormantReplicatorsKeyFuncs,FDefaultSetAllocator>
    ::Rehash(&this->ActorReplicatorSet);
  }
  return;
}

// FindAndRemoveReplicator @ 148030e10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TSharedPtr<FObjectReplicator,1> * __thiscall
UE::Net::Private::FDormantReplicatorHolder::FindAndRemoveReplicator
          (FDormantReplicatorHolder *this,TSharedPtr<FObjectReplicator,1> *__return_storage_ptr__,
          AActor *param_1,UObject *param_2)

{
  longlong lVar1;
  FActorDormantReplicators *pFVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ForElementType<FSetElementId> FVar6;
  int iVar7;
  TSet<UE::Net::Private::FDormantObjectReplicator,UE::Net::Private::FActorDormantReplicators::FDormantObjectReplicatorKeyFuncs,FDefaultSetAllocator>
  *this_00;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  FWeakObjectPtr local_res8;
  AActor *local_res10;
  TSharedPtr<FObjectReplicator,1> local_38;
  
  __return_storage_ptr__->Object = (FObjectReplicator *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  if (param_1 != (AActor *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = param_1;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  }
  pFVar2 = TSet<UE::Net::Private::FActorDormantReplicators,UE::Net::Private::FDormantReplicatorHolder::FActorDormantReplicatorsKeyFuncs,FDefaultSetAllocator>
           ::Find(&this->ActorReplicatorSet,(FObjectKey *)&local_res8);
  if (pFVar2 != (FActorDormantReplicators *)0x0) {
    if (param_2 == (UObject *)0x0) {
      uVar10 = 0;
      uVar8 = uVar10;
    }
    else {
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable(param_2);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res10 = (AActor *)param_2;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable(param_2);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable(param_2);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res10 = (AActor *)param_2;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable(param_2);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
      uVar10 = local_res8.ObjectIndex;
      uVar8 = local_res8.ObjectSerialNumber;
    }
    this_00 = &pFVar2->DormantReplicators;
    uVar5 = uVar10 - uVar8 ^ uVar8 >> 0xd;
    uVar4 = (-0x61c88647 - uVar5) - uVar8 ^ uVar5 << 8;
    uVar9 = (uVar8 - uVar4) - uVar5 ^ uVar4 >> 0xd;
    uVar5 = (uVar5 - uVar9) - uVar4 ^ uVar9 >> 0xc;
    uVar4 = (uVar4 - uVar9) - uVar5 ^ uVar5 << 0x10;
    uVar9 = (uVar9 - uVar4) - uVar5 ^ uVar4 >> 5;
    uVar5 = (uVar5 - uVar9) - uVar4 ^ uVar9 >> 3;
    uVar4 = (uVar4 - uVar5) - uVar9 ^ uVar5 << 10;
    if (*(int *)&(pFVar2->DormantReplicators).Elements.field_0x8 !=
        *(int *)&(pFVar2->DormantReplicators).Elements.field_0x34) {
      FVar6 = (pFVar2->DormantReplicators).Hash.SecondaryData;
      if (FVar6 == (ForElementType<FSetElementId>)0x0) {
        FVar6 = (ForElementType<FSetElementId>)&(pFVar2->DormantReplicators).Hash;
      }
      iVar7 = *(int *)((longlong)FVar6 +
                      (ulonglong)
                      ((pFVar2->DormantReplicators).HashSize - 1U &
                      ((uVar9 - uVar4) - uVar5 ^ uVar4 >> 0xf)) * 4);
      if (iVar7 != -1) {
        do {
          lVar3 = (longlong)iVar7 * 0x20;
          lVar1 = lVar3 + *(longlong *)&this_00->Elements;
          if ((*(uint *)(lVar3 + *(longlong *)&this_00->Elements) == uVar10) &&
             (*(uint *)(lVar1 + 4) == uVar8)) {
            if (iVar7 == -1) {
              return __return_storage_ptr__;
            }
            local_38.Object = *(FObjectReplicator **)(lVar3 + 8 + *(longlong *)&this_00->Elements);
            local_38.SharedReferenceCount.ReferenceController =
                 *(TReferenceControllerBase<1> **)(lVar3 + 0x10 + *(longlong *)&this_00->Elements);
            if (local_38.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                   1);
              UNLOCK();
            }
            if (__return_storage_ptr__ != &local_38) {
              __return_storage_ptr__->Object = local_38.Object;
              local_38.Object = (FObjectReplicator *)0x0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        (&__return_storage_ptr__->SharedReferenceCount,
                         &local_38.SharedReferenceCount);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_38.SharedReferenceCount.ReferenceController);
            TSet<UE::Net::Private::FDormantObjectReplicator,UE::Net::Private::FActorDormantReplicators::FDormantObjectReplicatorKeyFuncs,FDefaultSetAllocator>
            ::RemoveByIndex(this_00,iVar7);
            return __return_storage_ptr__;
          }
          iVar7 = *(int *)(lVar1 + 0x18);
        } while (iVar7 != -1);
      }
    }
  }
  return __return_storage_ptr__;
}

// FindFlushedObjectsForActor @ 148031250

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TMap<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>
* __thiscall
UE::Net::Private::FDormantReplicatorHolder::FindFlushedObjectsForActor
          (FDormantReplicatorHolder *this,AActor *param_1)

{
  TMap<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>
  *pTVar1;
  uint uVar2;
  TMap<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>
  *pTVar3;
  uint uVar4;
  undefined1 *puVar5;
  TMap<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>
  *pTVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  FWeakObjectPtr local_res8;
  AActor *local_res10;
  
  pTVar6 = (TMap<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>
            *)0x0;
  local_res8.ObjectIndex = 0;
  pTVar1 = pTVar6;
  if (param_1 != (AActor *)0x0) {
    if (GC::GIsIncrementalReachabilityPending) {
      GC::MarkAsReachable((UObject *)param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = param_1;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    pTVar1 = (TMap<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>
              *)((ulonglong)local_res8 >> 0x20);
  }
  iVar9 = (int)pTVar1;
  uVar4 = local_res8.ObjectIndex - iVar9 ^ (uint)((ulonglong)pTVar1 >> 0xd);
  uVar2 = (-0x61c88647 - uVar4) - iVar9 ^ uVar4 << 8;
  uVar7 = (iVar9 - uVar2) - uVar4 ^ uVar2 >> 0xd;
  uVar4 = (uVar4 - uVar7) - uVar2 ^ uVar7 >> 0xc;
  uVar2 = (uVar2 - uVar7) - uVar4 ^ uVar4 << 0x10;
  uVar7 = (uVar7 - uVar2) - uVar4 ^ uVar2 >> 5;
  uVar4 = (uVar4 - uVar7) - uVar2 ^ uVar7 >> 3;
  uVar2 = (uVar2 - uVar4) - uVar7 ^ uVar4 << 10;
  if (*(int *)&(this->FlushedObjectMap).field_0x8 != *(int *)&(this->FlushedObjectMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->FlushedObjectMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->FlushedObjectMap).field_0x38;
    }
    iVar8 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->FlushedObjectMap).field_0x48 - 1U &
                              ((uVar7 - uVar2) - uVar4 ^ uVar2 >> 0xf)) * 4);
    if (iVar8 != -1) {
      do {
        pTVar1 = (TMap<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>
                  *)((longlong)iVar8 * 0x60 + *(longlong *)&this->FlushedObjectMap);
        if ((*(int *)pTVar1 == local_res8.ObjectIndex) && (*(int *)&pTVar1->field_0x4 == iVar9)) {
          if (iVar8 != -1) goto LAB_1480313ae;
          break;
        }
        iVar8 = *(int *)&pTVar1[1].field_0x8;
      } while (iVar8 != -1);
    }
  }
  pTVar1 = pTVar6;
LAB_1480313ae:
  pTVar3 = (TMap<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>
            *)&pTVar1->field_0x8;
  if (pTVar1 == (TMap<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>
                 *)0x0) {
    pTVar3 = pTVar6;
  }
  return pTVar3;
}

// FindOrAddFlushedObjectsForActor @ 148031c60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TMap<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>
* __thiscall
UE::Net::Private::FDormantReplicatorHolder::FindOrAddFlushedObjectsForActor
          (FDormantReplicatorHolder *this,AActor *param_1)

{
  TMap<FObjectKey,TMap<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>,0>_>
  *this_00;
  FWeakObjectPtr FVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  AActor *local_res18;
  
  iVar8 = 0;
  this_00 = &this->FlushedObjectMap;
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  uVar7 = 0;
  if (param_1 != (AActor *)0x0) {
    if (GC::GIsIncrementalReachabilityPending) {
      GC::MarkAsReachable((UObject *)param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res18 = param_1;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
    local_res10 = local_res8;
    FVar1 = local_res10;
    iVar8 = local_res8.ObjectIndex;
    local_res10.ObjectSerialNumber = local_res8.ObjectSerialNumber;
    uVar7 = local_res10.ObjectSerialNumber;
    local_res10 = FVar1;
  }
  uVar4 = iVar8 - uVar7 ^ uVar7 >> 0xd;
  uVar3 = (-0x61c88647 - uVar4) - uVar7 ^ uVar4 << 8;
  uVar9 = (uVar7 - uVar3) - uVar4 ^ uVar3 >> 0xd;
  uVar4 = (uVar4 - uVar9) - uVar3 ^ uVar9 >> 0xc;
  uVar3 = (uVar3 - uVar9) - uVar4 ^ uVar4 << 0x10;
  uVar9 = (uVar9 - uVar3) - uVar4 ^ uVar3 >> 5;
  uVar4 = (uVar4 - uVar9) - uVar3 ^ uVar9 >> 3;
  uVar3 = (uVar3 - uVar4) - uVar9 ^ uVar4 << 10;
  uVar3 = (uVar9 - uVar3) - uVar4 ^ uVar3 >> 0xf;
  if (*(int *)&(this->FlushedObjectMap).field_0x8 != *(int *)&(this->FlushedObjectMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->FlushedObjectMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->FlushedObjectMap).field_0x38;
    }
    iVar6 = *(int *)(puVar5 + (ulonglong)(*(int *)&(this->FlushedObjectMap).field_0x48 - 1U & uVar3)
                              * 4);
    if (iVar6 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar6 * 0x60 + *(longlong *)&this_00->field_0x0);
        if ((*piVar2 == iVar8) && (piVar2[1] == uVar7)) {
          if ((iVar6 != -1) && (piVar2 != (int *)0x0)) {
            return (TMap<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>
                    *)(piVar2 + 2);
          }
          break;
        }
        iVar6 = piVar2[0x16];
      } while (iVar6 != -1);
    }
  }
  local_res18 = (AActor *)&local_res10;
  TSet<TTuple<FObjectKey,TMap<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FObjectKey_&&>_>
            ((TSet<TTuple<FObjectKey,TMap<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>,0>,FDefaultSetAllocator>
              *)this_00,(uint)&local_res8,(TKeyInitializer<FObjectKey_&&> *)(ulonglong)uVar3,
             (bool *)&local_res18);
  return (TMap<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>
          *)((longlong)local_res8.ObjectIndex * 0x60 + 8 + *(longlong *)&this_00->field_0x0);
}

// FindReplicator @ 148032100

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TSharedPtr<FObjectReplicator,1> * __thiscall
UE::Net::Private::FDormantReplicatorHolder::FindReplicator
          (FDormantReplicatorHolder *this,TSharedPtr<FObjectReplicator,1> *__return_storage_ptr__,
          AActor *param_1,UObject *param_2)

{
  FActorDormantReplicators *pFVar1;
  FDormantObjectReplicator *pFVar2;
  FWeakObjectPtr local_res8;
  AActor *local_res10;
  TSharedPtr<FObjectReplicator,1> local_38;
  
  __return_storage_ptr__->Object = (FObjectReplicator *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  if (param_1 != (AActor *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = param_1;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  }
  pFVar1 = TSet<UE::Net::Private::FActorDormantReplicators,UE::Net::Private::FDormantReplicatorHolder::FActorDormantReplicatorsKeyFuncs,FDefaultSetAllocator>
           ::Find(&this->ActorReplicatorSet,(FObjectKey *)&local_res8);
  if (pFVar1 != (FActorDormantReplicators *)0x0) {
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    if (param_2 != (UObject *)0x0) {
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable(param_2);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res10 = (AActor *)param_2;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable(param_2);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    }
    pFVar2 = TSet<UE::Net::Private::FDormantObjectReplicator,UE::Net::Private::FActorDormantReplicators::FDormantObjectReplicatorKeyFuncs,FDefaultSetAllocator>
             ::Find(&pFVar1->DormantReplicators,(FObjectKey *)&local_res8);
    if (pFVar2 != (FDormantObjectReplicator *)0x0) {
      local_38.SharedReferenceCount.ReferenceController =
           (pFVar2->Replicator).SharedReferenceCount.ReferenceController;
      local_38.Object = (pFVar2->Replicator).Object;
      if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (__return_storage_ptr__ != &local_38) {
        __return_storage_ptr__->Object = local_38.Object;
        local_38.Object = (FObjectReplicator *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&__return_storage_ptr__->SharedReferenceCount,&local_38.SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
    }
  }
  return __return_storage_ptr__;
}

// ForEachDormantReplicator @ 148033b20

void __thiscall
UE::Net::Private::FDormantReplicatorHolder::ForEachDormantReplicator
          (FDormantReplicatorHolder *this,
          TFunctionRef<void___cdecl(FObjectKey,FObjectKey,TSharedRef<FObjectReplicator,1>_const_&)>
          *param_1)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  int iVar3;
  code *pcVar4;
  undefined8 *puVar5;
  FDormantReplicatorHolder *pFVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  TBitArray<FDefaultBitArrayAllocator> *pTVar15;
  int iVar16;
  uint *puVar17;
  undefined8 *puVar18;
  TBitArray<FDefaultBitArrayAllocator> *pTVar19;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_158;
  undefined4 uStack_124;
  undefined8 local_108;
  TBitArray<FDefaultBitArrayAllocator> *local_100;
  undefined8 *local_f8;
  int iStack_f0;
  uint uStack_ec;
  TBitArray<FDefaultBitArrayAllocator> *local_e8;
  undefined4 uStack_e0;
  int iStack_dc;
  int local_d8;
  int iStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined8 *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  FDormantReplicatorHolder *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  undefined4 local_4c;
  
  iVar3 = *(int *)&(this->ActorReplicatorSet).Elements.field_0x28;
  pTVar19 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->ActorReplicatorSet).Elements.field_0x10;
  iVar13 = 0;
  iVar16 = 0;
  uVar8 = 1;
  iVar9 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->ActorReplicatorSet).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)pTVar19;
    }
    uVar11 = *puVar17;
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar13;
      iVar16 = iVar16 + 0x20;
      iVar13 = iVar13 + 1;
      iVar9 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_148033bce;
      uVar11 = puVar17[lVar10 + 1];
    }
    uVar8 = -uVar11 & uVar11;
    uVar1 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar9 = (int)lVar10 + -1 + iVar16;
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
  }
LAB_148033bce:
  local_158 = *(uint *)&(this->ActorReplicatorSet).Elements.field_0x28;
  uVar11 = local_158 & 0xffffffe0;
  TStack_90._padding_ = CONCAT44(uVar8,iVar13);
  TStack_90.CurrentBitIndex = iVar9;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)local_158 >> 5;
  TStack_90._28_4_ = local_4c;
  TStack_90.BaseBitIndex = iVar16;
  uStack_70 = CONCAT44(uStack_124,
                       *(int *)&(this->ActorReplicatorSet).Elements.field_0x8 -
                       *(int *)&(this->ActorReplicatorSet).Elements.field_0x34);
  local_100 = pTVar19;
  local_98 = this;
  TStack_90.Array = pTVar19;
  if ((((int)local_158 < 0) || (iVar3 < (int)local_158)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar8 = *(uint *)&(this->ActorReplicatorSet).Elements.field_0x28;
  if (local_158 != uVar8) {
    puVar14 = *(undefined1 **)&(this->ActorReplicatorSet).Elements.field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = (undefined1 *)pTVar19;
    }
    uVar12 = -1 << ((byte)local_158 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      uVar11 = uVar11 + 0x20;
      iVar13 = iVar13 + 1;
      local_158 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_148033cf0;
      uVar12 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_158 = (int)lVar10 + -1 + uVar11;
    if ((int)uVar8 < (int)local_158) {
      local_158 = uVar8;
    }
  }
LAB_148033cf0:
  do {
    pFVar6 = local_98;
    if (*(int *)&(local_98->ActorReplicatorSet).Elements.field_0x8 -
        *(int *)&(local_98->ActorReplicatorSet).Elements.field_0x34 != (int)uStack_70) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<UE::Net::Private::FActorDormantReplicators>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_90.CurrentBitIndex == local_158) && (TStack_90.Array == pTVar19)) &&
       (pFVar6 == this)) {
      return;
    }
    iStack_f0 = 0;
    local_d8 = 0;
    puVar18 = (undefined8 *)
              ((longlong)TStack_90.CurrentBitIndex * 0x60 +
              *(longlong *)&(pFVar6->ActorReplicatorSet).Elements);
    uStack_ec = 1;
    iVar3 = *(int *)(puVar18 + 6);
    pTVar19 = (TBitArray<FDefaultBitArrayAllocator> *)(puVar18 + 3);
    puVar2 = puVar18 + 1;
    iStack_dc = 0;
    if (iVar3 != 0) {
      pTVar15 = pTVar19;
      if ((TBitArray<FDefaultBitArrayAllocator> *)puVar18[5] !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar15 = (TBitArray<FDefaultBitArrayAllocator> *)puVar18[5];
      }
      uVar8 = *(uint *)(pTVar15->AllocatorInstance).InlineData;
      while (uVar8 == 0) {
        lVar10 = (longlong)iStack_f0;
        local_d8 = local_d8 + 0x20;
        iStack_f0 = iStack_f0 + 1;
        iStack_dc = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f0) goto LAB_148033dbe;
        uVar8 = *(uint *)((pTVar15->AllocatorInstance).InlineData + lVar10 * 4 + 4);
      }
      uStack_ec = -uVar8 & uVar8;
      uVar1 = (ulonglong)uStack_ec * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iStack_dc = local_d8 + -1 + (int)lVar10;
      if (iVar3 < iStack_dc) {
        iStack_dc = iVar3;
      }
    }
LAB_148033dbe:
    uVar8 = *(uint *)(puVar18 + 6);
    uVar11 = uVar8 & 0xffffffe0;
    iStack_d0 = *(int *)(puVar18 + 2) - *(int *)((longlong)puVar18 + 0x3c);
    TStack_c0._padding_ = CONCAT44(uStack_ec,iStack_f0);
    uStack_e0 = 0xffffffff;
    TStack_c0.CurrentBitIndex = iStack_dc;
    TStack_c0.UnvisitedBitMask = 0xffffffff;
    iVar16 = (int)uVar8 >> 5;
    TStack_c0._28_4_ = iVar9;
    TStack_c0.BaseBitIndex = local_d8;
    uStack_a0 = CONCAT44(uStack_cc,iStack_d0);
    local_f8 = puVar2;
    local_e8 = pTVar19;
    iStack_d4 = iVar9;
    local_c8 = puVar2;
    TStack_c0.Array = pTVar19;
    if ((((int)uVar8 < 0) || (iVar3 < (int)uVar8)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar12 = *(uint *)(puVar18 + 6);
    if (uVar8 != uVar12) {
      pTVar15 = pTVar19;
      if ((TBitArray<FDefaultBitArrayAllocator> *)puVar18[5] !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar15 = (TBitArray<FDefaultBitArrayAllocator> *)puVar18[5];
      }
      uVar8 = -1 << ((byte)uVar8 & 0x1f) &
              *(uint *)((pTVar15->AllocatorInstance).InlineData + (longlong)iVar16 * 4);
      while (uVar8 == 0) {
        lVar10 = (longlong)iVar16;
        uVar11 = uVar11 + 0x20;
        iVar16 = iVar16 + 1;
        uVar8 = uVar12;
        if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
        goto LAB_148033ec0;
        uVar8 = *(uint *)((pTVar15->AllocatorInstance).InlineData + lVar10 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar8 & uVar8) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar8 = (int)lVar10 + -1 + uVar11;
      if ((int)uVar12 < (int)uVar8) {
        uVar8 = uVar12;
      }
    }
LAB_148033ec0:
    while( true ) {
      puVar5 = local_c8;
      if (*(int *)(local_c8 + 1) - *(int *)((longlong)local_c8 + 0x34) != (int)uStack_a0) {
        local_res20[0] = 0;
        `TSparseArray<TSparseSetElement<UE::Net::Private::FDormantObjectReplicator>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (((TStack_c0.CurrentBitIndex == uVar8) && (TStack_c0.Array == pTVar19)) &&
         (puVar5 == puVar2)) break;
      local_108 = *puVar18;
      (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_108);
      TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
    }
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
    pTVar19 = local_100;
  } while( true );
}

// ForEachDormantReplicatorOfActor @ 148033f90

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
UE::Net::Private::FDormantReplicatorHolder::ForEachDormantReplicatorOfActor
          (FDormantReplicatorHolder *this,AActor *param_1,
          TFunctionRef<void___cdecl(FObjectKey,FObjectKey,TSharedRef<FObjectReplicator,1>_const_&)>
          *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TSet<UE::Net::Private::FDormantObjectReplicator,UE::Net::Private::FActorDormantReplicators::FDormantObjectReplicatorKeyFuncs,FDefaultSetAllocator>
  *pTVar6;
  bool bVar7;
  FActorDormantReplicators *pFVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint *puVar15;
  undefined8 *puVar16;
  undefined1 local_res8 [8];
  int local_res10;
  FWeakObjectPtr local_res20;
  FObjectKey local_b8;
  TSet<UE::Net::Private::FDormantObjectReplicator,UE::Net::Private::FActorDormantReplicators::FDormantObjectReplicatorKeyFuncs,FDefaultSetAllocator>
  *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  AActor *local_80;
  undefined8 local_78;
  FObjectKey local_70;
  TSet<UE::Net::Private::FDormantObjectReplicator,UE::Net::Private::FActorDormantReplicators::FDormantObjectReplicatorKeyFuncs,FDefaultSetAllocator>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar10 = 0;
  local_b8.ObjectIndex = 0;
  local_b8.ObjectSerialNumber = 0;
  if (param_1 != (AActor *)0x0) {
    if (GC::GIsIncrementalReachabilityPending) {
      GC::MarkAsReachable((UObject *)param_1);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_80 = param_1;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_80);
    local_b8.ObjectIndex = local_res20.ObjectIndex;
    local_b8.ObjectSerialNumber = local_res20.ObjectSerialNumber;
  }
  pFVar8 = TSet<UE::Net::Private::FActorDormantReplicators,UE::Net::Private::FDormantReplicatorHolder::FActorDormantReplicatorsKeyFuncs,FDefaultSetAllocator>
           ::Find(&this->ActorReplicatorSet,&local_b8);
  if (pFVar8 != (FActorDormantReplicators *)0x0) {
    iVar3 = *(int *)&(pFVar8->DormantReplicators).Elements.field_0x28;
    local_b0 = &pFVar8->DormantReplicators;
    uStack_a4 = 1;
    puVar1 = &(pFVar8->DormantReplicators).Elements.field_0x10;
    local_90 = 0;
    iStack_94 = iVar10;
    if (iVar3 != 0) {
      puVar15 = *(uint **)&(pFVar8->DormantReplicators).Elements.field_0x20;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)puVar1;
      }
      uVar13 = *puVar15;
      local_90 = 0;
      iVar10 = 0;
      while (uVar13 == 0) {
        lVar9 = (longlong)iVar10;
        local_90 = local_90 + 0x20;
        iVar10 = iVar10 + 1;
        iStack_94 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14803409d;
        uVar13 = puVar15[lVar9 + 1];
      }
      uStack_a4 = -uVar13 & uVar13;
      uVar2 = (ulonglong)uStack_a4 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_res10 = (int)lVar9;
      iStack_94 = local_90 + -1 + local_res10;
      if (iVar3 < iStack_94) {
        iStack_94 = iVar3;
      }
    }
LAB_14803409d:
    uVar13 = *(uint *)&(pFVar8->DormantReplicators).Elements.field_0x28;
    uVar12 = uVar13 & 0xffffffe0;
    iStack_88 = *(int *)&(pFVar8->DormantReplicators).Elements.field_0x8 -
                *(int *)&(pFVar8->DormantReplicators).Elements.field_0x34;
    uStack_98 = 0xffffffff;
    TStack_60._padding_ = CONCAT44(uStack_a4,iVar10);
    TStack_60.CurrentBitIndex = iStack_94;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iVar11 = (int)uVar13 >> 5;
    TStack_60._28_4_ = iStack_94;
    TStack_60.BaseBitIndex = local_90;
    uStack_40 = CONCAT44(uStack_84,iStack_88);
    iStack_a8 = iVar10;
    local_a0 = puVar1;
    iStack_8c = iStack_94;
    local_68 = local_b0;
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar4 = *(uint *)&(pFVar8->DormantReplicators).Elements.field_0x28;
    if (uVar13 != uVar4) {
      puVar14 = *(undefined1 **)&(pFVar8->DormantReplicators).Elements.field_0x20;
      if (puVar14 == (undefined1 *)0x0) {
        puVar14 = puVar1;
      }
      uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar11 * 4);
      while (uVar13 == 0) {
        lVar9 = (longlong)iVar11;
        uVar12 = uVar12 + 0x20;
        iVar11 = iVar11 + 1;
        uVar13 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
        goto LAB_148034199;
        uVar13 = *(uint *)(puVar14 + lVar9 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar13 = (int)lVar9 + -1 + uVar12;
      if ((int)uVar4 < (int)uVar13) {
        uVar13 = uVar4;
      }
    }
LAB_148034199:
    while( true ) {
      pTVar6 = local_68;
      if (*(int *)&(local_68->Elements).field_0x8 - *(int *)&(local_68->Elements).field_0x34 !=
          (int)uStack_40) {
        `TSparseArray<TSparseSetElement<UE::Net::Private::FDormantObjectReplicator>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_60.CurrentBitIndex == uVar13) &&
          (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar6 == &pFVar8->DormantReplicators)) break;
      puVar16 = (undefined8 *)
                ((longlong)TStack_60.CurrentBitIndex * 0x20 + *(longlong *)&pTVar6->Elements);
      local_78 = *puVar16;
      local_70 = pFVar8->OwnerActorKey;
      (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_70,&local_78,puVar16 + 1);
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
  }
  return;
}

// RemoveStoredReplicator @ 148053270

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UE::Net::Private::FDormantReplicatorHolder::RemoveStoredReplicator
          (FDormantReplicatorHolder *this,AActor *param_1,FObjectKey param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  FWeakObjectPtr local_res8;
  AActor *local_res10;
  FObjectKey local_res18;
  
  uVar8 = 0;
  iVar5 = 0;
  local_res18 = param_2;
  if (param_1 != (AActor *)0x0) {
    if (GC::GIsIncrementalReachabilityPending) {
      GC::MarkAsReachable((UObject *)param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = param_1;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    uVar8 = (ulonglong)local_res8 >> 0x20;
    iVar5 = local_res8.ObjectIndex;
  }
  iVar12 = (int)uVar8;
  uVar4 = iVar5 - iVar12 ^ (uint)(uVar8 >> 0xd);
  uVar3 = (-0x61c88647 - uVar4) - iVar12 ^ uVar4 << 8;
  uVar10 = (iVar12 - uVar3) - uVar4 ^ uVar3 >> 0xd;
  uVar4 = (uVar4 - uVar10) - uVar3 ^ uVar10 >> 0xc;
  uVar3 = (uVar3 - uVar10) - uVar4 ^ uVar4 << 0x10;
  uVar10 = (uVar10 - uVar3) - uVar4 ^ uVar3 >> 5;
  uVar4 = (uVar4 - uVar10) - uVar3 ^ uVar10 >> 3;
  uVar3 = (uVar3 - uVar4) - uVar10 ^ uVar4 << 10;
  if (*(int *)&(this->ActorReplicatorSet).Elements.field_0x8 !=
      *(int *)&(this->ActorReplicatorSet).Elements.field_0x34) {
    FVar6 = (this->ActorReplicatorSet).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->ActorReplicatorSet).Hash;
    }
    iVar1 = *(int *)((longlong)FVar6 +
                    (ulonglong)
                    ((this->ActorReplicatorSet).HashSize - 1U &
                    ((uVar10 - uVar3) - uVar4 ^ uVar3 >> 0xf)) * 4);
    if (iVar1 != -1) {
      lVar11 = *(longlong *)&(this->ActorReplicatorSet).Elements;
      while ((lVar7 = (longlong)iVar1 * 0x60, *(int *)(lVar7 + lVar11) != iVar5 ||
             (*(int *)(lVar7 + 4 + lVar11) != iVar12))) {
        iVar1 = *(int *)(lVar7 + 0x58 + lVar11);
        if (iVar1 == -1) {
          return false;
        }
      }
      if (iVar1 == -1) {
        return false;
      }
      lVar9 = (longlong)iVar1 * 0x60;
      lVar7 = lVar9 + lVar11;
      if (*(int *)(lVar9 + 0x10 + lVar11) != *(int *)(lVar7 + 0x3c)) {
        uVar4 = param_2.ObjectIndex - local_res18.ObjectSerialNumber ^
                (uint)local_res18.ObjectSerialNumber >> 0xd;
        uVar10 = (-0x61c88647 - uVar4) - local_res18.ObjectSerialNumber ^ uVar4 << 8;
        uVar3 = (local_res18.ObjectSerialNumber - uVar10) - uVar4 ^ uVar10 >> 0xd;
        uVar4 = (uVar4 - uVar3) - uVar10 ^ uVar3 >> 0xc;
        uVar10 = (uVar10 - uVar3) - uVar4 ^ uVar4 << 0x10;
        uVar3 = (uVar3 - uVar10) - uVar4 ^ uVar10 >> 5;
        uVar4 = (uVar4 - uVar3) - uVar10 ^ uVar3 >> 3;
        uVar10 = (uVar10 - uVar4) - uVar3 ^ uVar4 << 10;
        lVar11 = *(longlong *)(lVar7 + 0x48);
        if (*(longlong *)(lVar7 + 0x48) == 0) {
          lVar11 = lVar7 + 0x40;
        }
        iVar5 = *(int *)(lVar11 + (((longlong)(int)((uVar3 - uVar10) - uVar4) ^
                                   (ulonglong)(uVar10 >> 0xf)) &
                                  (longlong)*(int *)(lVar7 + 0x50) - 1U) * 4);
        if (iVar5 != -1) {
          lVar11 = *(longlong *)(lVar7 + 8);
          do {
            lVar2 = (longlong)iVar5 * 0x20;
            if ((*(int *)(lVar2 + lVar11) == param_2.ObjectIndex) &&
               (*(uint *)(lVar2 + 4 + lVar11) == local_res18.ObjectSerialNumber)) {
              TSet<UE::Net::Private::FDormantObjectReplicator,UE::Net::Private::FActorDormantReplicators::FDormantObjectReplicatorKeyFuncs,FDefaultSetAllocator>
              ::RemoveByIndex((TSet<UE::Net::Private::FDormantObjectReplicator,UE::Net::Private::FActorDormantReplicators::FDormantObjectReplicatorKeyFuncs,FDefaultSetAllocator>
                               *)(lVar7 + 8),iVar5);
              break;
            }
            iVar5 = *(int *)(lVar2 + 0x18 + lVar11);
          } while (iVar5 != -1);
        }
      }
      lVar11 = *(longlong *)&(this->ActorReplicatorSet).Elements;
      if (*(int *)(lVar11 + 0x10 + lVar9) == *(int *)(lVar11 + 0x3c + lVar9)) {
        TSet<UE::Net::Private::FActorDormantReplicators,UE::Net::Private::FDormantReplicatorHolder::FActorDormantReplicatorsKeyFuncs,FDefaultSetAllocator>
        ::RemoveByIndex(&this->ActorReplicatorSet,iVar1);
      }
      return true;
    }
  }
  return false;
}

// StoreReplicator @ 1480658f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
UE::Net::Private::FDormantReplicatorHolder::StoreReplicator
          (FDormantReplicatorHolder *this,AActor *param_1,UObject *param_2,
          TSharedRef<FObjectReplicator,1> *param_3)

{
  FActorDormantReplicators *pFVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStackY_f8 [32];
  FDormantObjectReplicator local_c8;
  FObjectReplicator *local_b0;
  TReferenceControllerBase<1> *local_a8;
  undefined1 local_98 [8];
  undefined1 local_90 [32];
  void *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ForElementType<FSetElementId> local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  iVar5 = 0;
  local_c8.ObjectKey.ObjectIndex = 0;
  local_c8.ObjectKey.ObjectSerialNumber = 0;
  if (param_1 != (AActor *)0x0) {
    if (GC::GIsIncrementalReachabilityPending) {
      GC::MarkAsReachable((UObject *)param_1);
    }
    local_c8.ObjectKey.ObjectIndex = 0;
    local_c8.ObjectKey.ObjectSerialNumber = 0;
    local_c8.Replicator.Object = (FObjectReplicator *)param_1;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_c8,(FObjectPtr)&local_c8.Replicator);
    iVar5 = local_c8.ObjectKey.ObjectIndex;
  }
  uVar3 = local_c8.ObjectKey.ObjectSerialNumber;
  local_90._0_8_ = (FScriptContainerElement *)0x0;
  local_90._8_8_ = 0;
  uVar2 = iVar5 - uVar3 ^ uVar3 >> 0xd;
  local_70 = (void *)0x0;
  local_68 = ___xmm_00000000ffffffff0000008000000000;
  uStack_60 = _UNK_150631d98;
  local_50 = (ForElementType<FSetElementId>)0x0;
  local_48 = 0;
  uVar4 = (-0x61c88647 - uVar2) - uVar3 ^ uVar2 << 8;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar4 >> 0xd;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 >> 0xc;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 << 0x10;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 5;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 >> 3;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 << 10;
  local_98 = (undefined1  [8])local_c8.ObjectKey;
  pFVar1 = TSet<UE::Net::Private::FActorDormantReplicators,UE::Net::Private::FDormantReplicatorHolder::FActorDormantReplicatorsKeyFuncs,FDefaultSetAllocator>
           ::FindOrAddByHash<UE::Net::Private::FActorDormantReplicators>
                     (&this->ActorReplicatorSet,(uVar3 - uVar4) - uVar2 ^ uVar4 >> 0xf,
                      (FActorDormantReplicators *)local_98,(bool *)0x0);
  local_48 = 0;
  if (local_50 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_50);
  }
  TSparseArray<TSparseSetElement<UE::Net::Private::FDormantObjectReplicator>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<UE::Net::Private::FDormantObjectReplicator>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_90,0,local_90._8_4_);
  iVar5 = SUB84(local_90._8_8_,4);
  local_90._8_8_ = local_90._8_8_ & 0xffffffff00000000;
  if (iVar5 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_90,0,(int *)(local_90 + 0xc));
  }
  uVar2 = local_68._4_4_;
  uStack_60 = 0xffffffff;
  local_68 = (ulonglong)local_68._4_4_ << 0x20;
  if (0x80 < uVar2) {
    local_68 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_90 + 0x10),0);
  }
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  if ((FScriptContainerElement *)local_90._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_90._0_8_);
  }
  local_c8.ObjectKey.ObjectIndex = 0;
  local_c8.ObjectKey.ObjectSerialNumber = 0;
  if (param_2 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(param_2);
    }
    local_c8.ObjectKey.ObjectIndex = 0;
    local_c8.ObjectKey.ObjectSerialNumber = 0;
    local_c8.Replicator.Object = (FObjectReplicator *)param_2;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(param_2);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_c8,(FObjectPtr)&local_c8.Replicator);
  }
  local_c8.Replicator.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)local_c8.ObjectKey;
  local_b0 = param_3->Object;
  local_a8 = (param_3->SharedReferenceCount).ReferenceController;
  if (local_a8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_a8->SharedReferenceCount = (atomic<int>)((int)local_a8->SharedReferenceCount + 1);
    UNLOCK();
  }
  TSet<UE::Net::Private::FDormantObjectReplicator,UE::Net::Private::FActorDormantReplicators::FDormantObjectReplicatorKeyFuncs,FDefaultSetAllocator>
  ::Emplace<UE::Net::Private::FDormantObjectReplicator>
            (&pFVar1->DormantReplicators,&local_c8,(bool *)&local_c8.Replicator.SharedReferenceCount
            );
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a8);
  return;
}

