// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 15

// ~FReplicationProtocolManager @ 1442b0570

void __thiscall
UE::Net::Private::FReplicationProtocolManager::~FReplicationProtocolManager
          (FReplicationProtocolManager *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  void *pvVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->ProtocolToInfoMap).field_0x28;
  puVar1 = &(this->ProtocolToInfoMap).field_0x10;
  iVar13 = 0;
  iVar15 = 0;
  uVar8 = 1;
  iVar9 = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&(this->ProtocolToInfoMap).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar12 = *puVar16;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      iVar9 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_1442b060d;
      uVar12 = puVar16[lVar10 + 1];
    }
    uVar8 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res18 = (int)lVar10;
    iVar9 = iVar15 + -1 + local_res18;
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
  }
LAB_1442b060d:
  uVar12 = *(uint *)&(this->ProtocolToInfoMap).field_0x28;
  uVar17 = uVar12 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar8,iVar13);
  TStack_60.CurrentBitIndex = iVar9;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iVar9;
  TStack_60.BaseBitIndex = iVar15;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->ProtocolToInfoMap).field_0x8 -
                       *(int *)&(this->ProtocolToInfoMap).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar8 = *(uint *)&(this->ProtocolToInfoMap).field_0x28;
  if (uVar12 != uVar8) {
    puVar14 = *(undefined1 **)&(this->ProtocolToInfoMap).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      uVar17 = uVar17 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_1442b0710;
      uVar12 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar17;
    if ((int)uVar8 < (int)uVar12) {
      uVar12 = uVar8;
    }
  }
LAB_1442b0710:
  while( true ) {
    if (*(int *)&(this->ProtocolToInfoMap).field_0x8 - *(int *)&(this->ProtocolToInfoMap).field_0x34
        != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<UE::Net::FReplicationProtocol_const_*,UE::Net::Private::FReplicationProtocolManager::FRegisteredProtocolInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar12) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    InternalDestroyReplicationProtocol
              (this,*(FReplicationProtocol **)
                     ((longlong)TStack_60.CurrentBitIndex * 0x20 + 8 +
                     *(longlong *)&this->ProtocolToInfoMap));
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  pFVar11 = (this->PendingDestroyProtocols).AllocatorInstance.Data;
  iVar3 = (this->PendingDestroyProtocols).ArrayNum;
  pFVar4 = pFVar11 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->PendingDestroyProtocols).ArrayNum != iVar3) {
      `TCheckedPointerIterator<UE::Net::FReplicationProtocol_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar11 == pFVar4) break;
    InternalDestroyReplicationProtocol(this,*(FReplicationProtocol **)pFVar11);
    pFVar11 = pFVar11 + 8;
  }
  pFVar4 = (this->PendingDestroyProtocols).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  *(undefined4 *)&(this->DescriptorToProtocolMap).field_0x48 = 0;
  pvVar5 = *(void **)&(this->DescriptorToProtocolMap).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Net::FReplicationStateDescriptor_const_*,UE::Net::FReplicationProtocol_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Net::FReplicationStateDescriptor_const_*,UE::Net::FReplicationProtocol_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Net::FReplicationStateDescriptor_const_*,UE::Net::FReplicationProtocol_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DescriptorToProtocolMap);
  *(undefined4 *)&(this->ProtocolToInfoMap).field_0x48 = 0;
  pvVar5 = *(void **)&(this->ProtocolToInfoMap).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Net::FReplicationProtocol_const_*,UE::Net::Private::FReplicationProtocolManager::FRegisteredProtocolInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Net::FReplicationProtocol_const_*,UE::Net::Private::FReplicationProtocolManager::FRegisteredProtocolInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Net::FReplicationProtocol_const_*,UE::Net::Private::FReplicationProtocolManager::FRegisteredProtocolInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ProtocolToInfoMap);
  *(undefined4 *)&(this->RegisteredProtocols).field_0x48 = 0;
  pvVar5 = *(void **)&(this->RegisteredProtocols).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Net::Private::FReplicationProtocolManager::FRegisteredProtocolInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Net::Private::FReplicationProtocolManager::FRegisteredProtocolInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Net::Private::FReplicationProtocolManager::FRegisteredProtocolInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// CalculateProtocolIdentifier @ 1442b6a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __cdecl
UE::Net::Private::FReplicationProtocolManager::CalculateProtocolIdentifier
          (TArray<UE::Net::FReplicationFragmentInfo,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
           *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<UE::Net::FReplicationFragmentInfo> FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  ForElementType<unsigned___int64> FVar7;
  longlong lVar8;
  ForElementType<unsigned___int64> FVar9;
  undefined1 auStack_188 [32];
  ForElementType<unsigned___int64> local_168;
  ForElementType<unsigned___int64> local_160;
  longlong local_158;
  longlong local_150;
  undefined8 local_148;
  undefined1 local_138 [8];
  ForElementType<unsigned___int64> local_130;
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_188;
  FVar3 = (param_1->AllocatorInstance).SecondaryData;
  piVar1 = &param_1->ArrayNum;
  iVar2 = *piVar1;
  local_130.SecondaryData = (ForElementType<unsigned___int64>)0x0;
  local_28 = 0;
  local_24 = 0x20;
  if (FVar3 != (ForElementType<UE::Net::FReplicationFragmentInfo>)0x0) {
    param_1 = (TArray<UE::Net::FReplicationFragmentInfo,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
               *)FVar3;
  }
  FVar3 = (ForElementType<UE::Net::FReplicationFragmentInfo>)
          ((longlong)param_1 + (longlong)iVar2 * 0x18);
  do {
    if (*piVar1 != iVar2) {
      local_138[0] = 0;
      `TCheckedPointerIterator<UE::Net::FReplicationFragmentInfo_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_138);
    }
    if ((ForElementType<UE::Net::FReplicationFragmentInfo>)param_1 == FVar3) {
      FVar7 = (ForElementType<unsigned___int64>)&local_130;
      if (local_130.SecondaryData != (ForElementType<unsigned___int64>)0x0) {
        FVar7 = local_130.SecondaryData;
      }
      uVar6 = CityHash32((char *)FVar7,local_28 * 8);
      if (local_130.SecondaryData != (ForElementType<unsigned___int64>)0x0) {
        FMemory::Free((void *)local_130.SecondaryData);
      }
      return uVar6;
    }
    FVar9 = (ForElementType<unsigned___int64>)(*(longlong *)param_1 + 0x90);
    FVar7 = (ForElementType<unsigned___int64>)&local_130;
    if (local_130.SecondaryData != (ForElementType<unsigned___int64>)0x0) {
      FVar7 = local_130.SecondaryData;
    }
    if ((ulonglong)FVar7 <= (ulonglong)FVar9) {
      FVar7 = (ForElementType<unsigned___int64>)&local_130;
      if (local_130.SecondaryData != (ForElementType<unsigned___int64>)0x0) {
        FVar7 = local_130.SecondaryData;
      }
      if ((ulonglong)FVar9 < (ulonglong)((longlong)FVar7 + (longlong)local_24 * 8)) {
        local_148 = 8;
        local_150 = (longlong)local_28;
        local_160 = (ForElementType<unsigned___int64>)&local_130;
        if (local_130.SecondaryData != (ForElementType<unsigned___int64>)0x0) {
          local_160 = local_130.SecondaryData;
        }
        local_168 = FVar9;
        local_158 = (longlong)local_24;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return uVar6;
        }
      }
    }
    if (local_28 == local_24) {
      local_28 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned___int64>_>
                           (0x808,&local_130,&local_24);
    }
    FVar7 = (ForElementType<unsigned___int64>)&local_130;
    if (local_130.SecondaryData != (ForElementType<unsigned___int64>)0x0) {
      FVar7 = local_130.SecondaryData;
    }
    lVar8 = (longlong)local_28;
    local_28 = local_28 + 1;
    *(undefined8 *)((longlong)FVar7 + lVar8 * 8) = *(undefined8 *)FVar9;
    FVar9 = (ForElementType<unsigned___int64>)(*(longlong *)param_1 + 0x98);
    FVar7 = (ForElementType<unsigned___int64>)&local_130;
    if (local_130.SecondaryData != (ForElementType<unsigned___int64>)0x0) {
      FVar7 = local_130.SecondaryData;
    }
    if ((ulonglong)FVar7 <= (ulonglong)FVar9) {
      FVar7 = (ForElementType<unsigned___int64>)&local_130;
      if (local_130.SecondaryData != (ForElementType<unsigned___int64>)0x0) {
        FVar7 = local_130.SecondaryData;
      }
      if ((ulonglong)FVar9 < (ulonglong)((longlong)FVar7 + (longlong)local_24 * 8)) {
        local_150 = (longlong)local_28;
        local_148 = 8;
        local_160 = (ForElementType<unsigned___int64>)&local_130;
        if (local_130.SecondaryData != (ForElementType<unsigned___int64>)0x0) {
          local_160 = local_130.SecondaryData;
        }
        local_168 = FVar9;
        local_158 = (longlong)local_24;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return uVar6;
        }
      }
    }
    if (local_28 == local_24) {
      local_28 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned___int64>_>
                           (0x808,&local_130,&local_24);
    }
    FVar7 = (ForElementType<unsigned___int64>)&local_130;
    if (local_130.SecondaryData != (ForElementType<unsigned___int64>)0x0) {
      FVar7 = local_130.SecondaryData;
    }
    lVar8 = (longlong)local_28;
    param_1 = (TArray<UE::Net::FReplicationFragmentInfo,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
               *)((longlong)param_1 + 0x18);
    local_28 = local_28 + 1;
    *(undefined8 *)((longlong)FVar7 + lVar8 * 8) = *(undefined8 *)FVar9;
  } while( true );
}

// CreateInstanceProtocol @ 1442b9520

/* WARNING: Enum "Type": Some values do not have unique names */

FReplicationInstanceProtocol * __cdecl
UE::Net::Private::FReplicationProtocolManager::CreateInstanceProtocol
          (TArray<UE::Net::FReplicationFragmentInfo,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
           *param_1,EReplicationFragmentTraits param_2)

{
  int *piVar1;
  int iVar2;
  ForElementType<UE::Net::FReplicationFragmentInfo> FVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  FReplicationInstanceProtocol *pFVar7;
  EReplicationInstanceProtocolTraits EVar8;
  EReplicationInstanceProtocolTraits EVar9;
  ForElementType<UE::Net::FReplicationFragmentInfo> FVar10;
  uchar *puVar11;
  EReplicationFragmentTraits EVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 local_res8 [8];
  EReplicationFragmentTraits local_res10;
  undefined1 local_res18 [8];
  undefined8 *local_58;
  uint local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  
  piVar1 = &param_1->ArrayNum;
  uVar13 = *piVar1;
  local_res10 = param_2;
  if (uVar13 < 0x10000) {
    pFVar7 = FMemory::MallocZeroed((ulonglong)uVar13 * 0x18 + 0x18,8);
    pFVar7->FragmentData = (FFragmentData *)(pFVar7 + 1);
    pFVar7->Fragments = (FReplicationFragment **)(&pFVar7[1].FragmentData + (ulonglong)uVar13 * 2);
    local_58 = &local_48;
    pFVar7->FragmentCount = (ushort)uVar13;
    FVar3 = (param_1->AllocatorInstance).SecondaryData;
    iVar2 = *piVar1;
    local_50 = 0;
    uVar14 = 0;
    local_4c = 2;
    local_48 = 0;
    uStack_40 = 0;
    FVar10 = (ForElementType<UE::Net::FReplicationFragmentInfo>)param_1;
    if (FVar3 != (ForElementType<UE::Net::FReplicationFragmentInfo>)0x0) {
      FVar10 = FVar3;
    }
    puVar11 = (uchar *)((longlong)FVar10 + 0x10);
    while( true ) {
      if (*piVar1 != iVar2) {
        `TCheckedPointerIterator<UE::Net::FReplicationFragmentInfo_const_,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res8);
      }
      if ((ForElementType<UE::Net::FReplicationFragmentInfo> *)(puVar11 + -0x10) ==
          (ForElementType<UE::Net::FReplicationFragmentInfo> *)
          ((longlong)FVar10 + (longlong)iVar2 * 0x18)) break;
      pFVar7->FragmentData[uVar14].ExternalSrcBuffer = *(uchar **)(puVar11 + -8);
      pFVar7->FragmentData[uVar14].Traits =
           *(EReplicationFragmentTraits *)(*(longlong *)puVar11 + 8);
      pFVar7->Fragments[uVar14] = *(FReplicationFragment **)puVar11;
      if ((*(short *)(*(longlong *)
                       ((ForElementType<UE::Net::FReplicationFragmentInfo> *)(puVar11 + -0x10))->
                       InlineData + 0x7c) != 0) &&
         (plVar4 = *(longlong **)puVar11, (*(uint *)(plVar4 + 1) & 0x400) != 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4,&local_58);
      }
      uVar14 = (ulonglong)((int)uVar14 + 1);
      puVar11 = puVar11 + 0x18;
    }
    iVar2 = *piVar1;
    FVar3 = (param_1->AllocatorInstance).SecondaryData;
    uVar13 = 0xffffffff;
    if (iVar2 < 1) {
      uVar13 = 0;
    }
    if (FVar3 != (ForElementType<UE::Net::FReplicationFragmentInfo>)0x0) {
      param_1 = (TArray<UE::Net::FReplicationFragmentInfo,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
                 *)FVar3;
    }
    FVar3 = (ForElementType<UE::Net::FReplicationFragmentInfo>)
            ((longlong)param_1 + (longlong)iVar2 * 0x18);
    EVar12 = local_res10;
    while( true ) {
      if (*piVar1 != iVar2) {
        `TCheckedPointerIterator<UE::Net::FReplicationFragmentInfo_const_,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res18);
      }
      if ((ForElementType<UE::Net::FReplicationFragmentInfo>)param_1 == FVar3) break;
      EVar12 = EVar12 | *(EReplicationFragmentTraits *)(*(longlong *)((longlong)param_1 + 0x10) + 8)
      ;
      uVar13 = uVar13 & *(uint *)(*(longlong *)((longlong)param_1 + 0x10) + 8);
      param_1 = (TArray<UE::Net::FReplicationFragmentInfo,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
                 *)((longlong)param_1 + 0x18);
    }
    EVar8 = (EReplicationInstanceProtocolTraits)(EVar12 >> 7) & NeedsPoll;
    EVar9 = EVar8 | NeedsLegacyCallbacks;
    if ((EVar12 >> 8 & 1) == 0) {
      EVar9 = EVar8;
    }
    EVar8 = EVar9 | NeedsPreSendUpdate;
    if ((EVar12 >> 9 & 1) == 0) {
      EVar8 = EVar9;
    }
    EVar9 = EVar8 | HasObjectReference;
    if ((EVar12 >> 0xd & 1) == 0) {
      EVar9 = EVar8;
    }
    if (local_50 < 2) {
      EVar8 = EVar9;
      if (((EVar12 >> 10 & 1) != 0) &&
         (EVar8 = EVar9 | HasPushBasedDirtiness, (uVar13 >> 0xb & 1) != 0)) {
        EVar8 = EVar9 | (HasFullPushBasedDirtiness|HasPushBasedDirtiness);
      }
    }
    else {
      EVar8 = EVar9 | IsMultiObjectInstance;
      if (2 < (byte)LogIris._0_1_) {
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      }
    }
    pFVar7->InstanceTraits = EVar8;
    return pFVar7;
  }
  bVar6 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_6254803943096844228>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationProtocolManager.cpp"
                     ,0x3c,"FragmentCount < 65536");
  if (!bVar6) {
    return (FReplicationInstanceProtocol *)0x0;
  }
  pcVar5 = (code *)swi(3);
  pFVar7 = (FReplicationInstanceProtocol *)(*pcVar5)();
  return pFVar7;
}

// CreateReplicationProtocol @ 1442b9a30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

FReplicationProtocol * __thiscall
UE::Net::Private::FReplicationProtocolManager::CreateReplicationProtocol
          (FReplicationProtocolManager *this,uint param_1,
          TArray<UE::Net::FReplicationFragmentInfo,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
          *param_2,wchar_t *param_3,FCreateReplicationProtocolParameters *param_4)

{
  short *psVar1;
  UObject *pUVar2;
  code *pcVar3;
  FWeakObjectPtr FVar4;
  FReplicationProtocolManager *pFVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  FReplicationProtocol *pFVar10;
  size_t sVar11;
  FNetDebugName *pFVar12;
  void *pvVar13;
  FReplicationProtocol *pFVar14;
  EReplicationProtocolTraits EVar15;
  EReplicationProtocolTraits EVar16;
  undefined1 *puVar17;
  longlong lVar18;
  ForElementType<UE::Net::FReplicationFragmentInfo> FVar19;
  longlong lVar20;
  ForElementType<UE::Net::FReplicationProtocol::FRepIndexToFragmentIndex> FVar21;
  ushort uVar22;
  TArray<UE::Net::FReplicationProtocol::FRepIndexToFragmentIndex,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
  *pTVar23;
  ForElementType<UE::Net::FReplicationFragmentInfo> FVar24;
  ulonglong uVar25;
  uint uVar26;
  ForElementType<UE::Net::FReplicationProtocol::FRepIndexToFragmentIndex> FVar27;
  short *psVar28;
  ulonglong uVar29;
  int iVar30;
  ForAnyElementType FVar31;
  int iVar32;
  uint uVar33;
  ulonglong uVar34;
  ForElementType<UE::Net::FReplicationFragmentInfo> FVar35;
  ulonglong uVar36;
  uint uVar37;
  FReplicationProtocol *_Dst;
  undefined1 auStackY_42e8 [32];
  FReplicationProtocol *local_42a8;
  EReplicationProtocolTraits local_42a0 [4];
  uint local_4298 [2];
  uint local_4290 [2];
  ForAnyElementType local_4288;
  undefined8 local_4280;
  undefined1 local_4278;
  undefined1 local_4277 [3];
  uint local_4274;
  uint local_4270;
  undefined1 local_426c [4];
  FWeakObjectPtr local_4268;
  ForElementType<UE::Net::FReplicationFragmentInfo> local_4260;
  longlong local_4258;
  int *local_4250;
  ForElementType<UE::Net::FReplicationFragmentInfo> local_4248;
  FWeakObjectPtr local_4240;
  ForElementType<UE::Net::FReplicationFragmentInfo> local_4238;
  FReplicationProtocol *local_4230;
  FReplicationStateDescriptor *local_4228;
  wchar_t *local_4220;
  FWeakObjectPtr local_4218;
  FReplicationProtocolManager *local_4210;
  FReplicationProtocolManager *local_4208;
  uint uStack_4200;
  int iStack_41fc;
  int local_41f8;
  undefined4 uStack_41f4;
  longlong *local_41f0;
  int local_41e8;
  undefined4 local_41e4;
  undefined8 local_41e0;
  uint uStack_41d8;
  int iStack_41d4;
  undefined8 local_41d0;
  TPairInitializer<UE::Net::FReplicationProtocol_const_*_const_&,UE::Net::Private::FReplicationProtocolManager::FRegisteredProtocolInfo_const_&>
  local_41c8;
  UObject *local_41b8;
  undefined1 local_41b0 [16];
  FWeakObjectPtr local_41a0;
  TBaseKeyIterator<0> local_4198;
  FReplicationStateDescriptor **local_4180;
  FReplicationProtocol **local_4178;
  FReplicationProtocol **local_4170;
  undefined1 *local_4168;
  wchar_t **local_4160;
  uint *local_4158;
  uint *local_4150;
  FLogScopedVerbosityOverride local_4148;
  longlong local_4138 [2];
  TArray<UObject_const_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> local_4128;
  TStringBuilderBase<wchar_t> local_4098;
  wchar_t local_4078 [4096];
  TStringBuilderBase<wchar_t> local_2078;
  wchar_t local_2058 [4096];
  ulonglong local_58 [3];
  ulonglong uVar38;
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStackY_42e8;
  local_41c8.Value = (FRegisteredProtocolInfo *)param_4;
  local_4298[0] = param_1;
  local_4238 = (ForElementType<UE::Net::FReplicationFragmentInfo>)param_2;
  local_4220 = param_3;
  local_4210 = this;
  if ((param_4->bValidateProtocolId == false) ||
     (local_4290[0] = CalculateProtocolIdentifier(param_2), local_4290[0] == local_4298[0])) {
    if ((param_4->bHasTemplateKey == false) ||
       ((param_4->TemplateKey != (UObject *)0x0 &&
        ((*(uint *)&param_4->TemplateKey->field_0x8 >> 0x1e & 1) == 0)))) {
      pUVar2 = param_4->TemplateKey;
      pFVar10 = (FReplicationProtocol *)0x0;
      uVar33 = 0;
      uVar7 = uVar33;
      uVar26 = uVar33;
      if (pUVar2 != (UObject *)0x0) {
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar2);
        }
        local_4268.ObjectIndex = 0;
        local_4268.ObjectSerialNumber = 0;
        local_4260 = (ForElementType<UE::Net::FReplicationFragmentInfo>)pUVar2;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar2);
        }
        FWeakObjectPtr::operator=(&local_4268,(FObjectPtr)&local_4260);
        uVar7 = local_4268.ObjectIndex;
        local_4240 = local_4268;
        FVar4 = local_4240;
        local_4240.ObjectSerialNumber = local_4268.ObjectSerialNumber;
        uVar26 = local_4240.ObjectSerialNumber;
        local_4240 = FVar4;
      }
      iVar8 = *(int *)&(this->RegisteredProtocols).field_0x48;
      iStack_41fc = -1;
      if (iVar8 == 0) {
        local_41f8 = -1;
      }
      else {
        puVar17 = *(undefined1 **)&(this->RegisteredProtocols).field_0x40;
        if (puVar17 == (undefined1 *)0x0) {
          puVar17 = &(this->RegisteredProtocols).field_0x38;
        }
        local_41f8 = *(int *)(puVar17 + ((longlong)iVar8 - 1U & (longlong)(int)local_4298[0]) * 4);
        iStack_41fc = local_41f8;
        if (local_41f8 != -1) {
          do {
            local_41f8 = *(int *)((longlong)iStack_41fc * 0x20 + 0x18 +
                                 *(longlong *)&this->RegisteredProtocols);
            if (*(uint *)((longlong)iStack_41fc * 0x20 + *(longlong *)&this->RegisteredProtocols) ==
                local_4298[0]) break;
            iStack_41fc = local_41f8;
          } while (local_41f8 != -1);
        }
      }
      local_41d0 = CONCAT44(uStack_41f4,local_41f8);
      iStack_41d4 = iStack_41fc;
      local_4208 = this;
      uStack_4200 = local_4298[0];
      uStack_41d8 = local_4298[0];
      if (iStack_41fc != -1) {
        lVar20 = *(longlong *)&this->RegisteredProtocols;
        iVar8 = local_41f8;
        iStack_41d4 = iStack_41fc;
        do {
          lVar18 = (longlong)iStack_41d4 * 0x20;
          if ((*(uint *)(lVar18 + 0x10 + lVar20) == uVar7) &&
             (*(uint *)(lVar18 + 0x14 + lVar20) == uVar26)) {
            if (*(longlong *)(lVar18 + 8 + lVar20) != 0) {
              local_41e0 = this;
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("GetReplicationProtocol(ProtocolId, Params.TemplateKey) == nullptr"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationProtocolManager.cpp"
                                 ,0x11d,L"");
              this = local_41e0;
              if (bVar6) {
                pcVar3 = (code *)swi(3);
                pFVar10 = (FReplicationProtocol *)(*pcVar3)();
                return pFVar10;
              }
            }
            break;
          }
          iStack_41d4 = iVar8;
          if (iVar8 == -1) break;
          do {
            iVar8 = *(int *)((longlong)iStack_41d4 * 0x20 + 0x18 +
                            *(longlong *)&this->RegisteredProtocols);
            local_41d0 = CONCAT44(local_41d0._4_4_,iVar8);
            if (*(uint *)((longlong)iStack_41d4 * 0x20 + *(longlong *)&this->RegisteredProtocols) ==
                local_4298[0]) break;
            iStack_41d4 = iVar8;
          } while (iVar8 != -1);
        } while (iStack_41d4 != -1);
      }
      local_4250 = &param_2->ArrayNum;
      local_4274 = *local_4250;
      local_4270 = local_4274;
      if (local_4274 < 0x10001) {
        FVar24 = (param_2->AllocatorInstance).SecondaryData;
        local_4288.Data = (FScriptContainerElement *)0x0;
        local_4280 = 0;
        local_4128.AllocatorInstance.SecondaryData = (ForElementType<UObject_const_*>)0x0;
        local_4128.ArrayNum = 0;
        local_4128.ArrayMax = 0x10;
        FVar35 = (ForElementType<UE::Net::FReplicationFragmentInfo>)param_2;
        if (FVar24 != (ForElementType<UE::Net::FReplicationFragmentInfo>)0x0) {
          FVar35 = FVar24;
        }
        FVar24 = (ForElementType<UE::Net::FReplicationFragmentInfo>)
                 ((longlong)FVar35 + (longlong)(int)local_4274 * 0x18);
        local_4248 = FVar24;
        while( true ) {
          if (*local_4250 != local_4274) {
            local_4278 = 0;
            local_41e0 = this;
            `TCheckedPointerIterator<UE::Net::FReplicationFragmentInfo_const_,int,0>::operator!='::
            __l2::<lambda_1>::operator()(&local_4278);
            this = local_41e0;
          }
          local_41e0 = this;
          if (FVar35 == FVar24) break;
          FVar19 = (ForElementType<UE::Net::FReplicationFragmentInfo>)param_2;
          if (*(ForElementType<UE::Net::FReplicationFragmentInfo> *)((longlong)param_2 + 0x300) !=
              (ForElementType<UE::Net::FReplicationFragmentInfo>)0x0) {
            FVar19 = *(ForElementType<UE::Net::FReplicationFragmentInfo> *)
                      ((longlong)param_2 + 0x300);
          }
          lVar20 = ((longlong)FVar35 - (longlong)FVar19) / 6 +
                   ((longlong)FVar35 - (longlong)FVar19 >> 0x3f);
          local_4258 = (lVar20 >> 2) - (lVar20 >> 0x3f);
          if ((*(short *)(*(longlong *)FVar35 + 0x7c) != 0) &&
             ((*(uint *)(*(longlong **)((longlong)FVar35 + 0x10) + 1) & 0x400) != 0)) {
            local_41f0 = local_4138;
            local_41e8 = 0;
            local_41e4 = 2;
            (**(code **)(**(longlong **)((longlong)FVar35 + 0x10) + 0x10))();
            if (local_41e8 == 0) {
              bVar6 = Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_6254803943096843983>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationProtocolManager.cpp"
                                 ,0x131,"OwnerCollector.GetOwnerCount() > 0U");
              if (bVar6) {
                pcVar3 = (code *)swi(3);
                pFVar10 = (FReplicationProtocol *)(*pcVar3)();
                return pFVar10;
              }
              local_4230 = pFVar10;
              if (local_41e8 != 0) goto LAB_1442b9f83;
            }
            else {
LAB_1442b9f83:
              local_4230 = (FReplicationProtocol *)*local_41f0;
            }
            uVar7 = TArray<UObject_const_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                    ::AddUniqueImpl<UObject_const_*_const_&>(&local_4128,(UObject **)&local_4230);
            iVar8 = local_4128.ArrayNum;
            if ((int)(uint)local_4280 < local_4128.ArrayNum) {
              iVar30 = local_4128.ArrayNum - (uint)local_4280;
              iVar8 = Core::Private::
                      ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x110,8,iVar30,&local_4288,(int *)&local_4280,
                                 (int *)((longlong)&local_4280 + 4));
              DefaultConstructItems<TArray<UE::Net::FReplicationProtocol::FRepIndexToFragmentIndex,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>,int>
                        (local_4288.Data + (longlong)iVar8 * 0x110,iVar30);
            }
            else {
              if (local_4128.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
                Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_4128.ArrayNum);
              }
              if (local_4128.ArrayNum < (int)(uint)local_4280) {
                uVar26 = (uint)local_4280 - local_4128.ArrayNum;
                if ((int)(uVar26 | local_4128.ArrayNum) < 0) {
                  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x458,
                                     L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                    );
                  if (bVar6) {
                    pcVar3 = (code *)swi(3);
                    pFVar10 = (FReplicationProtocol *)(*pcVar3)();
                    return pFVar10;
                  }
                }
                if (uVar26 != 0) {
                  pTVar23 = (TArray<UE::Net::FReplicationProtocol::FRepIndexToFragmentIndex,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
                             *)(local_4288.Data + (longlong)iVar8 * 0x110);
                  DestructItems<TArray<UE::Net::FReplicationProtocol::FRepIndexToFragmentIndex,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>,int>
                            (pTVar23,uVar26);
                  iVar8 = ((uint)local_4280 - iVar8) - uVar26;
                  if (iVar8 != 0) {
                    memmove(pTVar23,pTVar23 + (int)uVar26,(longlong)iVar8 * 0x110);
                  }
                  iVar8 = (uint)local_4280 - uVar26;
                  local_4280 = CONCAT44(local_4280._4_4_,iVar8);
                  Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x110,8,&local_4288,iVar8,(int *)((longlong)&local_4280 + 4));
                }
              }
            }
            uVar26 = uVar33;
            if ((int)uVar7 < (int)(uint)local_4280) {
              uVar26 = ~uVar7 >> 0x1f;
            }
            if (uVar26 == 0) {
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar6) {
                pcVar3 = (code *)swi(3);
                pFVar10 = (FReplicationProtocol *)(*pcVar3)();
                return pFVar10;
              }
            }
            lVar20 = (longlong)(int)uVar7 * 0x110;
            FVar27 = (ForElementType<UE::Net::FReplicationProtocol::FRepIndexToFragmentIndex>)
                     ((longlong)local_4288.Data + lVar20);
            uVar9 = 0;
            uVar26 = uVar9;
            if ((int)uVar7 < (int)(uint)local_4280) {
              uVar26 = ~uVar7 >> 0x1f;
            }
            if (uVar26 == 0) {
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar6) {
                pcVar3 = (code *)swi(3);
                pFVar10 = (FReplicationProtocol *)(*pcVar3)();
                return pFVar10;
              }
            }
            uVar22 = *(ushort *)(local_4288.Data + lVar20 + 0x108);
            if (*(ushort *)(local_4288.Data + lVar20 + 0x108) <
                *(ushort *)(*(longlong *)FVar35 + 0x84)) {
              uVar22 = *(ushort *)(*(longlong *)FVar35 + 0x84);
            }
            iVar8 = *(int *)((ForElementType<UE::Net::FReplicationProtocol::FRepIndexToFragmentIndex>
                              *)((longlong)FVar27 + 0x108))->InlineData;
            uVar26 = (uint)uVar22;
            if (iVar8 < (int)(uint)uVar22) {
              iVar30 = Core::Private::
                       ReallocGrow<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FReplicationProtocol::FRepIndexToFragmentIndex>_>
                                 (2,2,uVar26 - iVar8,
                                  (ForElementType<UE::Net::FReplicationProtocol::FRepIndexToFragmentIndex>
                                   *)FVar27,(int *)((longlong)FVar27 + 0x108),
                                  (int *)((longlong)FVar27 + 0x10c));
              if (*(ForElementType<UE::Net::FReplicationProtocol::FRepIndexToFragmentIndex> *)
                   ((longlong)FVar27 + 0x100) !=
                  (ForElementType<UE::Net::FReplicationProtocol::FRepIndexToFragmentIndex>)0x0) {
                FVar27 = *(ForElementType<UE::Net::FReplicationProtocol::FRepIndexToFragmentIndex> *
                          )((longlong)FVar27 + 0x100);
              }
              DefaultConstructItems<UE::Net::FReplicationProtocol::FRepIndexToFragmentIndex,int>
                        ((void *)((longlong)FVar27 + (longlong)iVar30 * 2),uVar26 - iVar8);
            }
            else if ((int)(uint)uVar22 < iVar8) {
              iVar8 = iVar8 - uVar26;
              if (iVar8 < 0) {
                bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  );
                if (bVar6) {
                  pcVar3 = (code *)swi(3);
                  pFVar10 = (FReplicationProtocol *)(*pcVar3)();
                  return pFVar10;
                }
              }
              else if (iVar8 == 0) goto LAB_1442ba283;
              FVar21 = FVar27;
              if (*(ForElementType<UE::Net::FReplicationProtocol::FRepIndexToFragmentIndex> *)
                   ((longlong)FVar27 + 0x100) !=
                  (ForElementType<UE::Net::FReplicationProtocol::FRepIndexToFragmentIndex>)0x0) {
                FVar21 = *(ForElementType<UE::Net::FReplicationProtocol::FRepIndexToFragmentIndex> *
                          )((longlong)FVar27 + 0x100);
              }
              pvVar13 = (void *)((longlong)FVar21 + (ulonglong)uVar22 * 2);
              iVar30 = (*(int *)((longlong)FVar27 + 0x108) - uVar26) - iVar8;
              if (iVar30 != 0) {
                memmove(pvVar13,(void *)((longlong)pvVar13 + (longlong)iVar8 * 2),
                        (longlong)iVar30 * 2);
              }
              iVar8 = *(int *)((longlong)FVar27 + 0x108) - iVar8;
              *(int *)((longlong)FVar27 + 0x108) = iVar8;
              Core::Private::
              ReallocShrink<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FReplicationProtocol::FRepIndexToFragmentIndex>_>
                        (2,2,(ForElementType<UE::Net::FReplicationProtocol::FRepIndexToFragmentIndex>
                              *)FVar27,iVar8,(int *)((longlong)FVar27 + 0x10c));
            }
LAB_1442ba283:
            psVar28 = *(short **)(*(longlong *)FVar35 + 0x50);
            psVar1 = psVar28 + *(ushort *)(*(longlong *)FVar35 + 0x84);
            FVar24 = local_4248;
            param_2 = (TArray<UE::Net::FReplicationFragmentInfo,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
                       *)local_4238;
            this = local_41e0;
            for (; local_4248 = FVar24,
                local_4238 = (ForElementType<UE::Net::FReplicationFragmentInfo>)param_2,
                psVar28 != psVar1; psVar28 = psVar28 + 1) {
              lVar20 = *(longlong *)(*(longlong *)FVar35 + 0x50);
              if (*psVar28 != -1) {
                uVar26 = uVar9;
                if ((int)uVar7 < (int)(uint)local_4280) {
                  uVar26 = ~uVar7 >> 0x1f;
                }
                if (uVar26 == 0) {
                  local_41e0 = this;
                  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  this = local_41e0;
                  if (bVar6) {
                    pcVar3 = (code *)swi(3);
                    pFVar10 = (FReplicationProtocol *)(*pcVar3)();
                    return pFVar10;
                  }
                }
                uVar37 = (uint)((longlong)psVar28 - lVar20 >> 1);
                FVar27 = (ForElementType<UE::Net::FReplicationProtocol::FRepIndexToFragmentIndex>)
                         ((longlong)(int)uVar7 * 0x110 + (longlong)local_4288.Data);
                uVar26 = uVar9;
                if ((int)uVar37 < *(int *)((longlong)FVar27 + 0x108)) {
                  uVar26 = ~uVar37 >> 0x1f;
                }
                if (uVar26 == 0) {
                  local_41e0 = this;
                  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  this = local_41e0;
                  if (bVar6) {
                    pcVar3 = (code *)swi(3);
                    pFVar10 = (FReplicationProtocol *)(*pcVar3)();
                    return pFVar10;
                  }
                }
                if (*(ForElementType<UE::Net::FReplicationProtocol::FRepIndexToFragmentIndex> *)
                     ((longlong)FVar27 + 0x100) !=
                    (ForElementType<UE::Net::FReplicationProtocol::FRepIndexToFragmentIndex>)0x0) {
                  FVar27 = *(ForElementType<UE::Net::FReplicationProtocol::FRepIndexToFragmentIndex>
                             *)((longlong)FVar27 + 0x100);
                }
                *(short *)((longlong)FVar27 + (longlong)(int)uVar37 * 2) = (short)local_4258;
              }
              FVar24 = local_4248;
              param_2 = (TArray<UE::Net::FReplicationFragmentInfo,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
                         *)local_4238;
            }
          }
          FVar35 = (ForElementType<UE::Net::FReplicationFragmentInfo>)((longlong)FVar35 + 0x18);
        }
        if (local_4128.AllocatorInstance.SecondaryData != (ForElementType<UObject_const_*>)0x0) {
          FMemory::Free((void *)local_4128.AllocatorInstance.SecondaryData);
          this = local_41e0;
        }
        uVar26 = local_4270;
        uVar25 = local_4280;
        uVar7 = (uint)local_4280;
        uVar29 = (ulonglong)local_4270;
        pTVar23 = (TArray<UE::Net::FReplicationProtocol::FRepIndexToFragmentIndex,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
                   *)(local_4288.Data + (longlong)(int)(uint)local_4280 * 0x110);
        pFVar14 = pFVar10;
        FVar31.Data = local_4288.Data;
        while( true ) {
          if ((uint)local_4280 != uVar7) {
            local_4277[0] = 0;
            local_41e0 = this;
            `TCheckedPointerIterator<TArray<UE::Net::FReplicationProtocol::FRepIndexToFragmentIndex,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_4277);
            this = local_41e0;
          }
          if ((TArray<UE::Net::FReplicationProtocol::FRepIndexToFragmentIndex,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
               *)FVar31.Data == pTVar23) break;
          pFVar14 = (FReplicationProtocol *)
                    (ulonglong)
                    (uint)((int)pFVar14 +
                          ((TArray<UE::Net::FReplicationProtocol::FRepIndexToFragmentIndex,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
                            *)FVar31.Data)->ArrayNum);
          FVar31.Data = FVar31.Data + 0x110;
        }
        local_41e0 = this;
        local_42a8 = FMemory::MallocZeroed
                               ((ulonglong)(uVar7 & 0xffff) * 0x10 + uVar29 * 8 + 0x50 +
                                (longlong)pFVar14 * 2,8);
        pFVar14 = local_42a8 + 1;
        if (uVar26 == 0) {
          pFVar14 = pFVar10;
        }
        local_42a8->ReplicationStateDescriptors = (FReplicationStateDescriptor **)pFVar14;
        local_42a8->ReplicationStateCount = uVar26;
        uVar22 = (ushort)uVar25;
        if (uVar22 == 0) {
          local_42a8->PushModelOwnerRepIndexToFragmentIndexTable =
               (FRepIndexToFragmentIndexTable *)0x0;
          pFVar14 = pFVar10;
          _Dst = pFVar10;
        }
        else {
          local_42a8->PushModelOwnerRepIndexToFragmentIndexTable =
               (FRepIndexToFragmentIndexTable *)
               (&local_42a8[1].ReplicationStateDescriptors + uVar29);
          pFVar14 = (FReplicationProtocol *)(&local_42a8[1].ReplicationStateDescriptors + uVar29);
          _Dst = (FReplicationProtocol *)
                 (&local_42a8[1].ReplicationStateDescriptors +
                 uVar29 + (ulonglong)(uVar7 & 0xffff) * 2);
        }
        local_42a8->PushModelOwnerCount = uVar22;
        local_4270 = uVar7 & 0xffff;
        if ((uVar25 & 0xffff) != 0) {
          do {
            uVar26 = (uint)pFVar10;
            uVar7 = 0;
            if ((int)uVar26 < (int)(uint)local_4280) {
              uVar7 = ~uVar26 >> 0x1f;
            }
            if (uVar7 == 0) {
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar6) {
                pcVar3 = (code *)swi(3);
                pFVar10 = (FReplicationProtocol *)(*pcVar3)();
                return pFVar10;
              }
            }
            uVar7 = *(uint *)(local_4288.Data + (longlong)(int)uVar26 * 0x110 + 0x108);
            uVar33 = 0;
            if ((int)uVar26 < (int)(uint)local_4280) {
              uVar33 = ~uVar26 >> 0x1f;
            }
            if (uVar33 == 0) {
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar6) {
                pcVar3 = (code *)swi(3);
                pFVar10 = (FReplicationProtocol *)(*pcVar3)();
                return pFVar10;
              }
            }
            FVar21 = (ForElementType<UE::Net::FReplicationProtocol::FRepIndexToFragmentIndex>)
                     ((longlong)local_4288.Data + (longlong)(int)uVar26 * 0x110);
            FVar27 = *(ForElementType<UE::Net::FReplicationProtocol::FRepIndexToFragmentIndex> *)
                      ((longlong)FVar21 + 0x100);
            if (FVar27 != (ForElementType<UE::Net::FReplicationProtocol::FRepIndexToFragmentIndex>)
                          0x0) {
              FVar21 = FVar27;
            }
            memcpy(_Dst,(void *)FVar21,(ulonglong)uVar7 * 2);
            pFVar14->ReplicationStateDescriptors = (FReplicationStateDescriptor **)_Dst;
            uVar33 = 0;
            if ((int)uVar26 < (int)(uint)local_4280) {
              uVar33 = ~uVar26 >> 0x1f;
            }
            if (uVar33 == 0) {
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar6) {
                pcVar3 = (code *)swi(3);
                pFVar10 = (FReplicationProtocol *)(*pcVar3)();
                return pFVar10;
              }
            }
            _Dst = (FReplicationProtocol *)
                   ((longlong)&_Dst->ReplicationStateDescriptors + (ulonglong)uVar7 * 2);
            pFVar10 = (FReplicationProtocol *)(ulonglong)(uVar26 + 1);
            pFVar14->ReplicationStateCount =
                 *(uint *)(local_4288.Data + (longlong)(int)uVar26 * 0x110 + 0x108);
            pFVar14 = (FReplicationProtocol *)&pFVar14->InternalTotalAlignment;
          } while (uVar26 + 1 < local_4270);
        }
        uVar25 = 0;
        local_4258 = CONCAT44(local_4258._4_4_,0xffffffff);
        local_4268 = (FWeakObjectPtr)((ulonglong)local_4268 & 0xffffffff00000000);
        local_4274 = 0;
        iVar8 = *(int *)((longlong)local_4238 + 0x308);
        local_4290[0] = 0;
        uVar7 = 0xffffffff;
        if (iVar8 < 1) {
          uVar7 = 0;
        }
        local_4230 = (FReplicationProtocol *)((ulonglong)local_4230 & 0xffffffff00000000);
        local_4240.ObjectIndex = uVar7;
        local_4250 = (int *)((ulonglong)local_4250 & 0xffffffff00000000);
        local_4248 = (ForElementType<UE::Net::FReplicationFragmentInfo>)
                     ((ulonglong)local_4248 & 0xffffffff00000000);
        FVar24 = local_4238;
        if (*(ForElementType<UE::Net::FReplicationFragmentInfo> *)((longlong)local_4238 + 0x300) !=
            (ForElementType<UE::Net::FReplicationFragmentInfo>)0x0) {
          FVar24 = *(ForElementType<UE::Net::FReplicationFragmentInfo> *)
                    ((longlong)local_4238 + 0x300);
        }
        FVar35 = (ForElementType<UE::Net::FReplicationFragmentInfo>)
                 ((longlong)FVar24 + (longlong)iVar8 * 0x18);
        uVar29 = uVar25;
        FVar19 = local_4238;
        while( true ) {
          uVar26 = (uint)uVar29;
          if (*(int *)((longlong)FVar19 + 0x308) != iVar8) {
            `TCheckedPointerIterator<UE::Net::FReplicationFragmentInfo_const_,int,0>::operator!='::
            __l2::<lambda_1>::operator()(local_426c);
            FVar19 = local_4238;
            uVar7 = local_4240.ObjectIndex;
            uVar26 = local_4248._0_4_;
          }
          if (FVar24 == FVar35) break;
          uVar26 = uVar26 | *(uint *)(*(longlong *)((longlong)FVar24 + 0x10) + 8);
          uVar29 = (ulonglong)uVar26;
          uVar7 = uVar7 & *(uint *)(*(longlong *)((longlong)FVar24 + 0x10) + 8);
          local_4248._0_4_ = uVar26;
          FVar24 = (ForElementType<UE::Net::FReplicationFragmentInfo>)((longlong)FVar24 + 0x18);
          local_4240.ObjectIndex = uVar7;
        }
        local_4270 = *(int *)((longlong)FVar19 + 0x308);
        iVar8 = -1;
        uVar7 = 0xffffffff;
        FVar24 = FVar19;
        if (*(ForElementType<UE::Net::FReplicationFragmentInfo> *)((longlong)FVar19 + 0x300) !=
            (ForElementType<UE::Net::FReplicationFragmentInfo>)0x0) {
          FVar24 = *(ForElementType<UE::Net::FReplicationFragmentInfo> *)((longlong)FVar19 + 0x300);
        }
        local_4260 = (ForElementType<UE::Net::FReplicationFragmentInfo>)
                     ((longlong)FVar24 + (longlong)(int)local_4270 * 0x18);
        uVar29 = uVar25;
        uVar34 = uVar25;
        uVar36 = uVar25;
        uVar38 = uVar25;
        do {
          uVar26 = (uint)uVar36;
          uVar22 = (ushort)iVar8;
          if (*(int *)((longlong)FVar19 + 0x308) != local_4270) {
            `TCheckedPointerIterator<UE::Net::FReplicationFragmentInfo_const_,int,0>::operator!='::
            __l2::<lambda_1>::operator()(local_42a0);
            uVar22 = (ushort)local_4258;
          }
          local_42a0[0] = (EReplicationProtocolTraits)uVar34;
          if (FVar24 == local_4260) {
            EVar15 = local_42a0[0];
            if (((ulonglong)local_4250 & 0x40) != 0) {
              EVar15 = local_42a0[0] | HasDynamicState;
            }
            EVar16 = EVar15 | HasConnectionSpecificSerialization;
            if (((EReplicationStateTraits)local_4250 >> 0xc & 1) == 0) {
              EVar16 = EVar15;
            }
            EVar15 = EVar16 | HasObjectReference;
            if (((ulonglong)local_4250 & 4) == 0) {
              EVar15 = EVar16;
            }
            if ((((EReplicationStateTraits)local_4250 >> 0xf & 1) != 0) && (uVar26 != 0)) {
              EVar15 = EVar15 | SupportsDeltaCompression;
            }
            uVar33 = local_4290[0];
            if ((EVar15 & HasConditionalChangeMask) != None) {
              uVar33 = 4;
              if (4 < local_4290[0]) {
                uVar33 = local_4290[0];
              }
              uVar26 = uVar26 + 3 & 0xfffffffc;
              local_42a8->InternalChangeMasksOffset = uVar26;
              local_42a8->FirstLifetimeConditionalsStateIndex = uVar22;
              local_42a8->LifetimeConditionalsStateCount = (ushort)uVar38;
              local_42a8->FirstLifetimeConditionalsChangeMaskOffset = uVar7;
              uVar26 = uVar26 + ((uint)uVar25 + 0x1f >> 5) * 4;
            }
            EVar16 = EVar15;
            if ((((ulonglong)local_4248 & 0x400) != 0) &&
               (EVar16 = EVar15 | HasPushBasedDirtiness, ((ulonglong)local_4240 & 0x400) != 0)) {
              EVar16 = EVar15 | (HasFullPushBasedDirtiness|HasPushBasedDirtiness);
            }
            uVar7 = 1;
            if (1 < uVar33) {
              uVar7 = uVar33;
            }
            local_42a8->InternalTotalAlignment = uVar7;
            local_42a8->InternalTotalSize = uVar26;
            local_42a8->MaxExternalStateSize = local_4268.ObjectIndex;
            uVar7 = 1;
            if (1 < local_4274) {
              uVar7 = local_4274;
            }
            local_42a8->MaxExternalStateAlignment = uVar7;
            local_42a8->ChangeMaskBitCount = (uint)uVar25;
            local_42a8->ProtocolIdentifier = local_4298[0];
            local_42a8->ProtocolTraits = EVar16;
            sVar11 = wcslen(local_4220);
            pFVar12 = CreatePersistentNetDebugName(local_4220,(uint)sVar11);
            local_4260 = (ForElementType<UE::Net::FReplicationFragmentInfo>)0x0;
            local_42a8->DebugName = pFVar12;
            iVar8 = *(int *)((longlong)local_41c8.Value + 0xc);
            if (iVar8 < 0) {
              iVar8 = 0;
            }
            local_42a8->TypeStatsIndex = iVar8;
            local_42a8->RefCount = 0;
            pUVar2 = (UObject *)(local_41c8.Value)->Protocol;
            if (pUVar2 == (UObject *)0x0) {
              local_41a0.ObjectIndex = 0;
              local_41a0.ObjectSerialNumber = 0;
            }
            else {
              if (GC::GIsIncrementalReachabilityPending != false) {
                GC::MarkAsReachable(pUVar2);
              }
              local_4218.ObjectIndex = 0;
              local_4218.ObjectSerialNumber = 0;
              local_41b8 = pUVar2;
              if (GC::GIsIncrementalReachabilityPending != false) {
                GC::MarkAsReachable(pUVar2);
              }
              FWeakObjectPtr::operator=(&local_4218,(FObjectPtr)&local_41b8);
              local_41a0 = local_4218;
            }
            pFVar5 = local_4210;
            local_41b0._8_8_ = local_42a8;
            TMultiMap<unsigned_int,UE::Net::Private::FReplicationProtocolManager::FRegisteredProtocolInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FReplicationProtocolManager::FRegisteredProtocolInfo,1>_>
            ::
            EmplaceUnique<unsigned_int_const_&,UE::Net::Private::FReplicationProtocolManager::FRegisteredProtocolInfo_const_&>
                      (&local_4210->RegisteredProtocols,local_4298,
                       (FRegisteredProtocolInfo *)(local_41b0 + 8));
            local_4170 = &local_42a8;
            local_4168 = local_41b0 + 8;
            TSet<TTuple<UE::Net::FReplicationProtocol_const_*,UE::Net::Private::FReplicationProtocolManager::FRegisteredProtocolInfo>,TDefaultMapHashableKeyFuncs<UE::Net::FReplicationProtocol_const_*,UE::Net::Private::FReplicationProtocolManager::FRegisteredProtocolInfo,0>,FDefaultSetAllocator>
            ::
            Emplace<TPairInitializer<UE::Net::FReplicationProtocol_const_*_const_&,UE::Net::Private::FReplicationProtocolManager::FRegisteredProtocolInfo_const_&>_>
                      ((TSet<TTuple<UE::Net::FReplicationProtocol_const_*,UE::Net::Private::FReplicationProtocolManager::FRegisteredProtocolInfo>,TDefaultMapHashableKeyFuncs<UE::Net::FReplicationProtocol_const_*,UE::Net::Private::FReplicationProtocolManager::FRegisteredProtocolInfo,0>,FDefaultSetAllocator>
                        *)&pFVar5->ProtocolToInfoMap,&local_41c8,(bool *)&local_4170);
            if (bIrisLogReplicationProtocols == false) {
              if (5 < (byte)LogIris._0_1_) {
                Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
              }
            }
            else {
              local_4098.Base = local_4078;
              local_4098.bIsDynamic = false;
              local_4098.bIsExternal = false;
              local_4098.CurPos = local_4078;
              local_4098.End = (wchar_t *)&local_2078;
              pvVar13 = FGenericPlatformString::Memcpy(local_4078,L"Fragments:\n",0x16);
              local_4098.CurPos = (wchar_t *)((longlong)pvVar13 + 0x16);
              uVar26 = 0;
              uVar7 = *(uint *)((longlong)local_4238 + 0x308);
              if (uVar7 != 0) {
                do {
                  TStringBuilderBase<wchar_t>::AppendfImpl
                            (&local_4098,
                             L"index %u/%u named %s identifier (0x%llx, 0x%llx) Pointer: %p\n");
                  uVar26 = uVar26 + 1;
                } while (uVar26 < uVar7);
              }
              FLogScopedVerbosityOverride::FLogScopedVerbosityOverride
                        (&local_4148,(FLogCategoryBase *)&LogIris,Log);
              if (4 < (byte)LogIris._0_1_) {
                Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
                if (4 < (byte)LogIris._0_1_) {
                  if (local_4098.End < (TStringBuilderBase<wchar_t> *)(local_4098.CurPos + 1)) {
                    TStringBuilderBase<wchar_t>::Extend(&local_4098,1);
                  }
                  *local_4098.CurPos = L'\0';
                  Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
                }
              }
              FLogScopedVerbosityOverride::~FLogScopedVerbosityOverride(&local_4148);
              TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_4098);
            }
            pFVar10 = local_42a8;
            DestructItems<TArray<UE::Net::FReplicationProtocol::FRepIndexToFragmentIndex,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>,int>
                      ((TArray<UE::Net::FReplicationProtocol::FRepIndexToFragmentIndex,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
                        *)local_4288.Data,(uint)local_4280);
            if ((TArray<UE::Net::FReplicationProtocol::FRepIndexToFragmentIndex,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
                 *)local_4288.Data !=
                (TArray<UE::Net::FReplicationProtocol::FRepIndexToFragmentIndex,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
              FMemory::Free(local_4288.Data);
              return pFVar10;
            }
            return pFVar10;
          }
          local_4228 = *(FReplicationStateDescriptor **)FVar24;
          iVar30 = (int)uVar29;
          local_42a8->ReplicationStateDescriptors[uVar29] = local_4228;
          FReplicationStateDescriptor::AddRef(local_4228);
          pFVar10 = local_42a8;
          TSet<TTuple<UE::Net::FReplicationStateDescriptor_const_*,UE::Net::FReplicationProtocol_const_*>,TDefaultMapHashableKeyFuncs<UE::Net::FReplicationStateDescriptor_const_*,UE::Net::FReplicationProtocol_const_*,1>,FDefaultSetAllocator>
          ::TBaseKeyIterator<0>::TBaseKeyIterator<0>
                    (&local_4198,
                     (TSet<TTuple<UE::Net::FReplicationStateDescriptor_const_*,UE::Net::FReplicationProtocol_const_*>,TDefaultMapHashableKeyFuncs<UE::Net::FReplicationStateDescriptor_const_*,UE::Net::FReplicationProtocol_const_*,1>,FDefaultSetAllocator>
                      *)&local_4210->DescriptorToProtocolMap,local_4228);
          if (local_4198.Index != -1) {
            lVar20 = *(longlong *)&(local_4198.Set)->Elements;
            iVar32 = local_4198.Index;
            iVar8 = local_4198.NextIndex;
            do {
              lVar18 = (longlong)iVar32 * 3 + 1;
              if (*(FReplicationProtocol **)(lVar20 + lVar18 * 8) == pFVar10) {
                if (lVar20 + lVar18 * 8 != 0) goto LAB_1442ba7d3;
                break;
              }
              iVar32 = iVar8;
              if (iVar8 == -1) break;
              do {
                iVar8 = *(int *)(lVar20 + 0x10 + (longlong)iVar32 * 0x18);
                if (*(FReplicationStateDescriptor **)(lVar20 + (longlong)iVar32 * 0x18) ==
                    local_4198.Key) break;
                iVar32 = iVar8;
              } while (iVar8 != -1);
            } while (iVar32 != -1);
          }
          local_4180 = &local_4228;
          local_4178 = &local_42a8;
          TSet<TTuple<UE::Net::FReplicationStateDescriptor_const_*,UE::Net::FReplicationProtocol_const_*>,TDefaultMapHashableKeyFuncs<UE::Net::FReplicationStateDescriptor_const_*,UE::Net::FReplicationProtocol_const_*,1>,FDefaultSetAllocator>
          ::
          Emplace<TPairInitializer<UE::Net::FReplicationStateDescriptor_const_*_const_&,UE::Net::FReplicationProtocol_const_*_const_&>_>
                    ((TSet<TTuple<UE::Net::FReplicationStateDescriptor_const_*,UE::Net::FReplicationProtocol_const_*>,TDefaultMapHashableKeyFuncs<UE::Net::FReplicationStateDescriptor_const_*,UE::Net::FReplicationProtocol_const_*,1>,FDefaultSetAllocator>
                      *)&local_4210->DescriptorToProtocolMap,
                     (TPairInitializer<UE::Net::FReplicationStateDescriptor_const_*_const_&,UE::Net::FReplicationProtocol_const_*_const_&>
                      *)local_41b0,(bool *)&local_4180);
LAB_1442ba7d3:
          uVar22 = local_4228->InternalAlignment;
          uVar33 = local_4228->ExternalSize;
          if (local_4228->ExternalSize < (uint)local_4268.ObjectIndex) {
            uVar33 = local_4268.ObjectIndex;
          }
          local_4268.ObjectIndex = uVar33;
          uVar33 = (uint)local_4228->ExternalAlignment;
          if (local_4228->ExternalAlignment < local_4274) {
            uVar33 = local_4274;
          }
          uVar9 = (uint)uVar22;
          if (uVar22 < local_4290[0]) {
            uVar9 = local_4290[0];
          }
          local_4250 = (int *)CONCAT44(local_4250._4_4_,
                                       (EReplicationStateTraits)local_4250 | local_4228->Traits);
          uVar36 = (ulonglong)
                   (((uVar26 - 1) + (uint)uVar22 & -(uint)uVar22) + local_4228->InternalSize);
          uVar26 = (int)local_4230 + (uint)local_4228->ChangeMaskBitCount;
          uVar25 = (ulonglong)uVar26;
          local_4230 = (FReplicationProtocol *)CONCAT44(local_4230._4_4_,uVar26);
          if ((local_4228->Traits & HasLifetimeConditionals) == None) {
LAB_1442ba84f:
            iVar8 = (int)local_4258;
          }
          else {
            uVar34 = 6;
            uVar37 = (int)uVar38 + 1;
            uVar38 = (ulonglong)uVar37;
            if (uVar37 != 1) goto LAB_1442ba84f;
            local_4258 = CONCAT44(local_4258._4_4_,iVar30);
            uVar7 = uVar26 - local_4228->ChangeMaskBitCount;
            iVar8 = iVar30;
          }
          uVar29 = (ulonglong)(iVar30 + 1);
          FVar24 = (ForElementType<UE::Net::FReplicationFragmentInfo>)((longlong)FVar24 + 0x18);
          FVar19 = local_4238;
          local_4290[0] = uVar9;
          local_4274 = uVar33;
        } while( true );
      }
      local_41e0 = this;
      bVar6 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6254803943096843999>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationProtocolManager.cpp"
                         ,0x121,"FragmentCount <= 65536");
    }
    else {
      if (1 < (byte)LogIris._0_1_) {
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      }
      if (param_4->bHasTemplateKey == false) {
        return (FReplicationProtocol *)0x0;
      }
      if ((param_4->TemplateKey != (UObject *)0x0) &&
         ((*(uint *)&param_4->TemplateKey->field_0x8 >> 0x1e & 1) == 0)) {
        return (FReplicationProtocol *)0x0;
      }
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Params.bHasTemplateKey == false || IsValid(Params.TemplateKey)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationProtocolManager.cpp"
                         ,0x118,L"");
    }
    if (bVar6 != false) {
      pcVar3 = (code *)swi(3);
      pFVar10 = (FReplicationProtocol *)(*pcVar3)();
      return pFVar10;
    }
  }
  else {
    if ((2 < (byte)LogIris._0_1_) &&
       (Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris),
       2 < (byte)LogIris._0_1_)) {
      local_2078.Base = local_2058;
      local_2078.bIsDynamic = false;
      local_2078.bIsExternal = false;
      local_2078.CurPos = local_2058;
      local_2078.End = (wchar_t *)local_58;
      FragmentListToString(&local_2078,param_2);
      if (2 < (byte)LogIris._0_1_) {
        if (local_2078.End < local_2078.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_2078,1);
        }
        *local_2078.CurPos = L'\0';
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      }
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_2078);
    }
    if (local_4290[0] != local_4298[0]) {
      local_4160 = &local_4220;
      local_4158 = local_4298;
      local_4150 = local_4290;
      `UE::Net::Private::FReplicationProtocolManager::CreateReplicationProtocol'::__l8::<lambda_1>::
      operator()(&local_4160);
      return (FReplicationProtocol *)0x0;
    }
  }
  return (FReplicationProtocol *)0x0;
}

// DestroyInstanceProtocol @ 1442bdda0

void __cdecl
UE::Net::Private::FReplicationProtocolManager::DestroyInstanceProtocol
          (FReplicationInstanceProtocol *param_1)

{
  FReplicationFragment *pFVar1;
  FReplicationFragment **ppFVar2;
  ulonglong uVar3;
  
  ppFVar2 = param_1->Fragments;
  if (param_1->FragmentCount != 0) {
    uVar3 = (ulonglong)param_1->FragmentCount;
    do {
      pFVar1 = *ppFVar2;
      if (((pFVar1->Traits & DeleteWithInstanceProtocol) != None) &&
         (pFVar1 != (FReplicationFragment *)0x0)) {
        (**(code **)pFVar1->_padding_)(pFVar1,1);
      }
      ppFVar2 = ppFVar2 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  FMemory::Free(param_1);
  return;
}

// DestroyReplicationProtocol @ 1442be0d0

void __thiscall
UE::Net::Private::FReplicationProtocolManager::DestroyReplicationProtocol
          (FReplicationProtocolManager *this,FReplicationProtocol *param_1)

{
  int *piVar1;
  TArray<UE::Net::FReplicationProtocol_const_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FReplicationProtocol *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  FReplicationProtocol *local_28;
  FRegisteredProtocolInfo local_20;
  
  local_20.TemplateKey.ObjectIndex = 0;
  local_20.TemplateKey.ObjectSerialNumber = 0;
  pTVar2 = &this->PendingDestroyProtocols;
  bVar6 = TMap<UE::Net::FReplicationProtocol_const_*,UE::Net::Private::FReplicationProtocolManager::FRegisteredProtocolInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FReplicationProtocol_const_*,UE::Net::Private::FReplicationProtocolManager::FRegisteredProtocolInfo,0>_>
          ::RemoveAndCopyValue(&this->ProtocolToInfoMap,param_1,&local_20);
  if (bVar6) {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    local_28 = local_20.Protocol;
    if ((pFVar3 <= (FScriptContainerElement *)&local_28) &&
       ((FScriptContainerElement *)&local_28 <
        pFVar3 + (longlong)(this->PendingDestroyProtocols).ArrayMax * 8)) {
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
    iVar7 = (this->PendingDestroyProtocols).ArrayNum;
    piVar1 = &(this->PendingDestroyProtocols).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->PendingDestroyProtocols).ArrayNum = iVar7 + 1;
    *(FReplicationProtocol **)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_28;
    TMultiMap<unsigned_int,UE::Net::Private::FReplicationProtocolManager::FRegisteredProtocolInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FReplicationProtocolManager::FRegisteredProtocolInfo,1>_>
    ::RemoveSingle(&this->RegisteredProtocols,param_1->ProtocolIdentifier,&local_20);
  }
  for (uVar9 = 0; (-1 < (int)uVar9 && ((int)uVar9 < (this->PendingDestroyProtocols).ArrayNum));
      uVar9 = uVar9 + 1) {
    if ((int)uVar9 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar4 = *(FReplicationProtocol **)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar9 * 8)
    ;
    if (pFVar4->RefCount == 0) {
      InternalDestroyReplicationProtocol(this,pFVar4);
      uVar8 = 0;
      if ((int)uVar9 < (this->PendingDestroyProtocols).ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar9 * 8;
      iVar7 = (this->PendingDestroyProtocols).ArrayNum + ~uVar9;
      if (iVar7 != 0) {
        memmove(pFVar3,pFVar3 + 8,(longlong)iVar7 << 3);
      }
      iVar7 = (this->PendingDestroyProtocols).ArrayNum + -1;
      (this->PendingDestroyProtocols).ArrayNum = iVar7;
      Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&pTVar2->AllocatorInstance,iVar7,&(this->PendingDestroyProtocols).ArrayMax);
      uVar9 = uVar9 - 1;
    }
  }
  return;
}

// FragmentListToString @ 1442c1ac0

void __cdecl
UE::Net::Private::FReplicationProtocolManager::FragmentListToString
          (TStringBuilderBase<wchar_t> *param_1,
          TArray<UE::Net::FReplicationFragmentInfo,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  uint uVar1;
  uint uVar2;
  
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,L"Fragments:\n",0xb);
  uVar1 = param_2->ArrayNum;
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      TStringBuilderBase<wchar_t>::AppendfImpl
                (param_1,L"index %u/%u named %s identifier (0x%llx, 0x%llx) Pointer: %p\n");
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return;
}

// GetReplicationProtocol @ 1442c3de0

FReplicationProtocol * __thiscall
UE::Net::Private::FReplicationProtocolManager::GetReplicationProtocol
          (FReplicationProtocolManager *this,uint param_1,FObjectKey param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  int iStackX_1c;
  int iStack_2c;
  int local_28;
  
  iVar1 = *(int *)&(this->RegisteredProtocols).field_0x48;
  iStack_2c = -1;
  if (iVar1 == 0) {
    local_28 = -1;
  }
  else {
    puVar4 = *(undefined1 **)&(this->RegisteredProtocols).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->RegisteredProtocols).field_0x38;
    }
    local_28 = *(int *)(puVar4 + ((longlong)iVar1 - 1U & (longlong)(int)param_1) * 4);
    iStack_2c = local_28;
    if (local_28 != -1) {
      do {
        local_28 = *(int *)((longlong)iStack_2c * 0x20 + 0x18 +
                           *(longlong *)&this->RegisteredProtocols);
        if (*(uint *)((longlong)iStack_2c * 0x20 + *(longlong *)&this->RegisteredProtocols) ==
            param_1) break;
        iStack_2c = local_28;
      } while (local_28 != -1);
    }
  }
  if (iStack_2c != -1) {
    lVar2 = *(longlong *)&this->RegisteredProtocols;
    iStackX_1c = param_2.ObjectSerialNumber;
    do {
      lVar3 = (longlong)iStack_2c * 0x20;
      if ((*(int *)(lVar3 + 0x10 + lVar2) == param_2.ObjectIndex) &&
         (*(int *)(lVar3 + 0x14 + lVar2) == iStackX_1c)) {
        return *(FReplicationProtocol **)(lVar3 + 8 + lVar2);
      }
      if (local_28 == -1) {
        return (FReplicationProtocol *)0x0;
      }
      iStack_2c = local_28;
      do {
        local_28 = *(int *)((longlong)iStack_2c * 0x20 + 0x18 +
                           *(longlong *)&this->RegisteredProtocols);
        if (*(uint *)((longlong)iStack_2c * 0x20 + *(longlong *)&this->RegisteredProtocols) ==
            param_1) break;
        iStack_2c = local_28;
      } while (local_28 != -1);
    } while (iStack_2c != -1);
  }
  return (FReplicationProtocol *)0x0;
}

// InternalDeferDestroyReplicationProtocol @ 1442c5ab0

void __thiscall
UE::Net::Private::FReplicationProtocolManager::InternalDeferDestroyReplicationProtocol
          (FReplicationProtocolManager *this,FReplicationProtocol *param_1)

{
  int *piVar1;
  TArray<UE::Net::FReplicationProtocol_const_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FReplicationProtocol *local_res10 [3];
  
  pTVar2 = &this->PendingDestroyProtocols;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  local_res10[0] = param_1;
  if ((pFVar3 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar3 + (longlong)(this->PendingDestroyProtocols).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->PendingDestroyProtocols).ArrayNum;
  piVar1 = &(this->PendingDestroyProtocols).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->PendingDestroyProtocols).ArrayNum = iVar6 + 1;
  *(FReplicationProtocol **)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) =
       local_res10[0];
  return;
}

// InternalDestroyReplicationProtocol @ 1442c5d10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FReplicationProtocolManager::InternalDestroyReplicationProtocol
          (FReplicationProtocolManager *this,FReplicationProtocol *param_1)

{
  FReplicationStateDescriptor **ppFVar1;
  FReplicationStateDescriptor *this_00;
  longlong lVar2;
  ForElementType<unsigned_int> FVar3;
  ForElementType<FSetElementId> FVar4;
  code *pcVar5;
  TSparseArray<TSparseSetElement<TTuple<UE::Net::FReplicationStateDescriptor_const_*,UE::Net::FReplicationProtocol_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar6;
  TSet<TTuple<UE::Net::FReplicationStateDescriptor_const_*,UE::Net::FReplicationProtocol_const_*>,TDefaultMapHashableKeyFuncs<UE::Net::FReplicationStateDescriptor_const_*,UE::Net::FReplicationProtocol_const_*,1>,FDefaultSetAllocator>
  *this_01;
  int iVar7;
  bool bVar8;
  uint uVar9;
  ForElementType<FSetElementId> FVar10;
  uint *puVar11;
  ForElementType<unsigned_int> FVar12;
  FReplicationStateDescriptor **ppFVar13;
  TBaseKeyIterator<0> local_58;
  
  if (param_1 != (FReplicationProtocol *)0x0) {
    if (5 < (byte)LogIris._0_1_) {
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    }
    uVar9 = param_1->ReplicationStateCount;
    ppFVar13 = param_1->ReplicationStateDescriptors;
    if (((int)uVar9 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    ppFVar1 = ppFVar13 + (int)uVar9;
    if (ppFVar13 != ppFVar1) {
      do {
        this_00 = *ppFVar13;
        TSet<TTuple<UE::Net::FReplicationStateDescriptor_const_*,UE::Net::FReplicationProtocol_const_*>,TDefaultMapHashableKeyFuncs<UE::Net::FReplicationStateDescriptor_const_*,UE::Net::FReplicationProtocol_const_*,1>,FDefaultSetAllocator>
        ::TBaseKeyIterator<0>::TBaseKeyIterator<0>
                  (&local_58,
                   (TSet<TTuple<UE::Net::FReplicationStateDescriptor_const_*,UE::Net::FReplicationProtocol_const_*>,TDefaultMapHashableKeyFuncs<UE::Net::FReplicationStateDescriptor_const_*,UE::Net::FReplicationProtocol_const_*,1>,FDefaultSetAllocator>
                    *)&this->DescriptorToProtocolMap,this_00);
        this_01 = local_58.Set;
        if (local_58.Index != 0xffffffff) {
          lVar2 = *(longlong *)&(local_58.Set)->Elements;
LAB_1442c5e12:
          iVar7 = local_58.Index;
          if (*(FReplicationProtocol **)(lVar2 + 8 + (longlong)local_58.Index * 0x18) == param_1) {
            if ((local_58.Index < 0) ||
               (*(int *)&((local_58.Set)->Elements).field_0x28 <= local_58.Index)) {
LAB_1442c5ebb:
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Elements.IsValidIndex(ElementIndex)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                 ,0x2ab,
                                 L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            else {
              pTVar6 = &(local_58.Set)->Elements;
              if ((*(int *)&((local_58.Set)->Elements).field_0x28 <= local_58.Index) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index>=0 && Index<NumBits",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                     ,0x5c6,L""), bVar8)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              FVar3 = *(ForElementType<unsigned_int> *)&(this_01->Elements).field_0x20;
              FVar12 = (ForElementType<unsigned_int>)&pTVar6->field_0x10;
              if (FVar3 != (ForElementType<unsigned_int>)0x0) {
                FVar12 = FVar3;
              }
              uVar9 = iVar7;
              if (iVar7 < 0) {
                uVar9 = iVar7 + 0x1f;
              }
              if ((*(uint *)((longlong)FVar12 + (longlong)((int)uVar9 >> 5) * 4) >> (iVar7 & 0x1fU)
                  & 1) == 0) goto LAB_1442c5ebb;
            }
            lVar2 = *(longlong *)&this_01->Elements + (longlong)iVar7 * 0x18;
            FVar4 = (this_01->Hash).SecondaryData;
            FVar10 = (ForElementType<FSetElementId>)&this_01->Hash;
            if (FVar4 != (ForElementType<FSetElementId>)0x0) {
              FVar10 = FVar4;
            }
            puVar11 = (uint *)((longlong)FVar10 + (longlong)*(int *)(lVar2 + 0x14) * 4);
            while( true ) {
              uVar9 = *puVar11;
              if ((uVar9 == 0xffffffff) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("NextElementIndex != INDEX_NONE",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                     ,0x2b5,L"Corrupt hash"), bVar8)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if (uVar9 == iVar7) break;
              puVar11 = (uint *)(*(longlong *)&this_01->Elements +
                                (longlong)(int)uVar9 * 0x18 + 0x10);
            }
            *puVar11 = *(uint *)(lVar2 + 0x10);
            TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this_01,iVar7,1);
          }
          else {
            local_58.Index = local_58.NextIndex;
            if (local_58.NextIndex != 0xffffffff) goto LAB_1442c5e30;
          }
        }
LAB_1442c5f5e:
        FReplicationStateDescriptor::Release(this_00);
        ppFVar13 = ppFVar13 + 1;
      } while (ppFVar13 != ppFVar1);
    }
    FMemory::Free(param_1);
  }
  return;
LAB_1442c5e30:
  do {
    local_58.NextIndex = *(uint *)(lVar2 + 0x10 + (longlong)local_58.Index * 0x18);
    if (*(FReplicationStateDescriptor **)(lVar2 + (longlong)local_58.Index * 0x18) == local_58.Key)
    break;
    local_58.Index = local_58.NextIndex;
  } while (local_58.NextIndex != 0xffffffff);
  if (local_58.Index == 0xffffffff) goto LAB_1442c5f5e;
  goto LAB_1442c5e12;
}

// InvalidateDescriptor @ 1442c6d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Net::Private::FReplicationProtocolManager::InvalidateDescriptor
          (FReplicationProtocolManager *this,FReplicationStateDescriptor *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ForElementType<UE::Net::FReplicationProtocol_const_*> FVar5;
  int iVar6;
  ForElementType<UE::Net::FReplicationProtocol_const_*> FVar7;
  ForElementType<UE::Net::FReplicationProtocol_const_*> FVar8;
  undefined1 auStack_1d8 [32];
  ForElementType<UE::Net::FReplicationProtocol_const_*> local_1b8;
  ForElementType<UE::Net::FReplicationProtocol_const_*> local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  undefined8 local_198;
  TSet<TTuple<UE::Net::FReplicationStateDescriptor_const_*,UE::Net::FReplicationProtocol_const_*>,TDefaultMapHashableKeyFuncs<UE::Net::FReplicationStateDescriptor_const_*,UE::Net::FReplicationProtocol_const_*,1>,FDefaultSetAllocator>
  *local_188;
  FReplicationStateDescriptor *pFStack_180;
  undefined8 local_178;
  TBaseKeyIterator<1> local_170;
  ForElementType<UE::Net::FReplicationProtocol_const_*> local_158;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  FVar8 = (ForElementType<UE::Net::FReplicationProtocol_const_*>)0x0;
  local_158.SecondaryData = (ForElementType<UE::Net::FReplicationProtocol_const_*>)0x0;
  local_50 = 0;
  local_4c = 0x20;
  TSet<TTuple<UE::Net::FReplicationStateDescriptor_const_*,UE::Net::FReplicationProtocol_const_*>,TDefaultMapHashableKeyFuncs<UE::Net::FReplicationStateDescriptor_const_*,UE::Net::FReplicationProtocol_const_*,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
            (&local_170,
             (TSet<TTuple<UE::Net::FReplicationStateDescriptor_const_*,UE::Net::FReplicationProtocol_const_*>,TDefaultMapHashableKeyFuncs<UE::Net::FReplicationStateDescriptor_const_*,UE::Net::FReplicationProtocol_const_*,1>,FDefaultSetAllocator>
              *)&this->DescriptorToProtocolMap,param_1);
  local_178 = CONCAT44(local_170.NextIndex,local_170.Index);
  local_188 = local_170.Set;
  pFStack_180 = local_170.Key;
  FVar7 = FVar8;
  iVar6 = local_170.NextIndex;
  uVar4 = 0;
  if (local_170.Index != -1) {
    while( true ) {
      uVar4 = FVar8._0_4_;
      FVar8 = (ForElementType<UE::Net::FReplicationProtocol_const_*>)
              (*(longlong *)&(local_170.Set)->Elements + ((longlong)local_170.Index * 3 + 1) * 8);
      FVar5 = (ForElementType<UE::Net::FReplicationProtocol_const_*>)&local_158;
      if (FVar7 != (ForElementType<UE::Net::FReplicationProtocol_const_*>)0x0) {
        FVar5 = FVar7;
      }
      if ((ulonglong)FVar5 <= (ulonglong)FVar8) {
        FVar5 = (ForElementType<UE::Net::FReplicationProtocol_const_*>)&local_158;
        if (FVar7 != (ForElementType<UE::Net::FReplicationProtocol_const_*>)0x0) {
          FVar5 = FVar7;
        }
        if ((ulonglong)FVar8 < (ulonglong)((longlong)FVar5 + (longlong)(int)local_4c * 8)) {
          local_198 = 8;
          local_1a0 = (longlong)(int)uVar4;
          local_1b0 = (ForElementType<UE::Net::FReplicationProtocol_const_*>)&local_158;
          if (FVar7 != (ForElementType<UE::Net::FReplicationProtocol_const_*>)0x0) {
            local_1b0 = FVar7;
          }
          local_1b8 = FVar8;
          local_1a8 = (longlong)(int)local_4c;
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          FVar7 = local_158.SecondaryData;
          uVar4 = local_50;
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
      }
      if (uVar4 == local_4c) {
        uVar4 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FReplicationProtocol_const_*>_>
                          (0x808,&local_158,(int *)&local_4c);
        FVar7 = local_158.SecondaryData;
      }
      local_178 = CONCAT44(local_178._4_4_,iVar6);
      local_50 = uVar4 + 1;
      FVar5 = (ForElementType<UE::Net::FReplicationProtocol_const_*>)&local_158;
      if (FVar7 != (ForElementType<UE::Net::FReplicationProtocol_const_*>)0x0) {
        FVar5 = FVar7;
      }
      *(undefined8 *)((longlong)FVar5 + (longlong)(int)uVar4 * 8) = *(undefined8 *)FVar8;
      FVar8 = local_158.SecondaryData;
      uVar4 = local_50;
      if (iVar6 == -1) break;
      do {
        iVar1 = *(int *)(*(longlong *)&(local_170.Set)->Elements + 0x10 + (longlong)iVar6 * 0x18);
        local_170.Index = iVar6;
        if (*(FReplicationStateDescriptor **)
             (*(longlong *)&(local_170.Set)->Elements + (longlong)iVar6 * 0x18) == local_170.Key)
        break;
        local_170.Index = iVar1;
        iVar6 = iVar1;
      } while (iVar1 != -1);
      local_178 = CONCAT44(iVar1,local_170.Index);
      if (local_170.Index == -1) break;
      FVar8._4_4_ = 0;
      FVar8._0_4_ = local_50;
      FVar7 = local_158.SecondaryData;
      iVar6 = iVar1;
    }
  }
  FVar7 = (ForElementType<UE::Net::FReplicationProtocol_const_*>)&local_158;
  if (FVar8 != (ForElementType<UE::Net::FReplicationProtocol_const_*>)0x0) {
    FVar7 = FVar8;
  }
  if (((int)uVar4 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), FVar8 = local_158.SecondaryData, bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FVar5 = (ForElementType<UE::Net::FReplicationProtocol_const_*>)
          ((longlong)FVar7 + (longlong)(int)uVar4 * 8);
  for (; FVar7 != FVar5;
      FVar7 = (ForElementType<UE::Net::FReplicationProtocol_const_*>)((longlong)FVar7 + 8)) {
    DestroyReplicationProtocol(this,*(FReplicationProtocol **)FVar7);
    FVar8 = local_158.SecondaryData;
  }
  if (FVar8 != (ForElementType<UE::Net::FReplicationProtocol_const_*>)0x0) {
    FMemory::Free((void *)FVar8);
  }
  return;
}

// PruneProtocolsPendingDestroy @ 1442d6570

void __thiscall
UE::Net::Private::FReplicationProtocolManager::PruneProtocolsPendingDestroy
          (FReplicationProtocolManager *this)

{
  int *piVar1;
  TArray<UE::Net::FReplicationProtocol_const_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *_Dst;
  FReplicationProtocol *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  pTVar2 = &this->PendingDestroyProtocols;
  for (uVar8 = 0; (-1 < (int)uVar8 && ((int)uVar8 < (this->PendingDestroyProtocols).ArrayNum));
      uVar8 = uVar8 + 1) {
    if ((int)uVar8 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar3 = *(FReplicationProtocol **)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar8 * 8)
    ;
    if (pFVar3->RefCount == 0) {
      InternalDestroyReplicationProtocol(this,pFVar3);
      uVar6 = 0;
      if ((int)uVar8 < (this->PendingDestroyProtocols).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      _Dst = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar8 * 8;
      iVar7 = (this->PendingDestroyProtocols).ArrayNum + ~uVar8;
      if (iVar7 != 0) {
        memmove(_Dst,_Dst + 8,(longlong)iVar7 << 3);
      }
      piVar1 = &(this->PendingDestroyProtocols).ArrayNum;
      *piVar1 = *piVar1 + -1;
      Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&pTVar2->AllocatorInstance,(this->PendingDestroyProtocols).ArrayNum,
                 &(this->PendingDestroyProtocols).ArrayMax);
      uVar8 = uVar8 - 1;
    }
  }
  return;
}

// ValidateReplicationProtocol @ 1442ec790

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UE::Net::Private::FReplicationProtocolManager::ValidateReplicationProtocol
          (FReplicationProtocol *param_1,
          TArray<UE::Net::FReplicationFragmentInfo,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
          *param_2,bool param_3)

{
  ForElementType<UE::Net::FReplicationFragmentInfo> FVar1;
  FReplicationStateDescriptor *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  atomic<unsigned_char> *paVar7;
  uint uVar8;
  ulonglong uVar9;
  FReplicationProtocol *pFVar10;
  int iVar11;
  FReplicationProtocol *local_res8;
  uint local_res10 [2];
  char *pcVar12;
  FReplicationProtocol **local_38;
  uint *local_30;
  
  local_res10[0] = param_2->ArrayNum;
  bVar5 = true;
  local_res8 = param_1;
  if (param_1->ReplicationStateCount != local_res10[0]) {
    local_38 = &local_res8;
    local_30 = local_res10;
    bVar4 = `UE::Net::Private::FReplicationProtocolManager::ValidateReplicationProtocol'::__l3::
            <lambda_1>::operator()(&local_38);
    if (!bVar4) {
      return true;
    }
  }
  FVar1 = (param_2->AllocatorInstance).SecondaryData;
  if (FVar1 != (ForElementType<UE::Net::FReplicationFragmentInfo>)0x0) {
    param_2 = (TArray<UE::Net::FReplicationFragmentInfo,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
               *)FVar1;
  }
  uVar9 = 0;
  pFVar10 = local_res8;
  bVar4 = true;
  if (local_res10[0] != 0) {
    do {
      bVar5 = bVar4;
      pFVar2 = *(FReplicationStateDescriptor **)((longlong)param_2 + uVar9 * 0x18);
      if (pFVar2 == pFVar10->ReplicationStateDescriptors[uVar9]) {
        if ((pFVar2->DescriptorIdentifier).Value !=
            (pFVar10->ReplicationStateDescriptors[uVar9]->DescriptorIdentifier).Value) {
          if (2 < (byte)LogIris._0_1_) {
            Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
            pFVar10 = local_res8;
          }
          if (*(ulong64 *)(*(longlong *)((longlong)param_2 + uVar9 * 0x18) + 0x90) !=
              (pFVar10->ReplicationStateDescriptors[uVar9]->DescriptorIdentifier).Value) {
            pcVar12 = 
            "Info.Descriptor->DescriptorIdentifier == Protocol->ReplicationStateDescriptors[It]->DescriptorIdentifier"
            ;
            paVar7 = &bGEnsureHasExecuted<_6254803943096844070>;
            iVar11 = 0xda;
            goto LAB_1442ec9e1;
          }
          goto LAB_1442ec9fd;
        }
      }
      else {
        if (2 < (byte)LogIris._0_1_) {
          Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        }
        pcVar12 = "bIsSameDescriptor";
        paVar7 = &bGEnsureHasExecuted<_6254803943096844081>;
        iVar11 = 0xcf;
LAB_1442ec9e1:
        bVar5 = Assert::Private::ExecCheckImplInternal
                          (paVar7,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationProtocolManager.cpp"
                           ,iVar11,pcVar12);
        pFVar10 = local_res8;
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
LAB_1442ec9fd:
        bVar5 = false;
      }
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
      bVar4 = bVar5;
    } while (uVar8 < local_res10[0]);
  }
  return bVar5;
}

// operator() @ 1504b85d0

bool __thiscall
`UE::Net::Private::FReplicationProtocolManager::ValidateReplicationProtocol'::__l3::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6254803943096844097>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<_6254803943096844097>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504b8790

bool __thiscall
`UE::Net::Private::FReplicationProtocolManager::CreateReplicationProtocol'::__l8::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6254803943096844017>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6254803943096844017>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

