// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 19

// FDirtyNetObjectTracker @ 144228d80

FDirtyNetObjectTracker * __thiscall
UE::Net::Private::FDirtyNetObjectTracker::FDirtyNetObjectTracker(FDirtyNetObjectTracker *this)

{
  this->GlobalDirtyTrackerPollHandle = 0xffffffff;
  this->ReplicationSystemId = 0xffffffff;
  (this->AccumulatedDirtyNetObjects).Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->AccumulatedDirtyNetObjects).Storage.ArrayNum = 0;
  (this->AccumulatedDirtyNetObjects).Storage.ArrayMax = 0;
  (this->AccumulatedDirtyNetObjects).BitCount = 0;
  (this->ForceNetUpdateObjects).Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ForceNetUpdateObjects).Storage.ArrayNum = 0;
  (this->ForceNetUpdateObjects).Storage.ArrayMax = 0;
  (this->ForceNetUpdateObjects).BitCount = 0;
  (this->DirtyNetObjects).Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DirtyNetObjects).Storage.ArrayNum = 0;
  (this->DirtyNetObjects).Storage.ArrayMax = 0;
  (this->DirtyNetObjects).BitCount = 0;
  this->NetRefHandleManager = (FNetRefHandleManager *)0x0;
  this->NetObjectIdCount = 0;
  this->bShouldResetPolledGlobalDirtyTracker = false;
  this->bIsExternalAccessAllowed = false;
  this->PushModelDirtyObjectsCount = 0;
  this->ForceNetUpdateObjectsCount = 0;
  return this;
}

// ~FDirtyNetObjectTracker @ 14422afe0

void __thiscall
UE::Net::Private::FDirtyNetObjectTracker::~FDirtyNetObjectTracker(FDirtyNetObjectTracker *this)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  
  uVar1 = (this->GlobalDirtyTrackerPollHandle).Index;
  if (uVar1 != 0xffffffff) {
    FGlobalDirtyNetObjectTracker::DestroyPoller(uVar1);
    (this->GlobalDirtyTrackerPollHandle).Index = 0xffffffff;
  }
  pFVar2 = (this->DirtyNetObjects).Storage.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ForceNetUpdateObjects).Storage.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->AccumulatedDirtyNetObjects).Storage.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

// AllowExternalAccess @ 144230210

void __thiscall
UE::Net::Private::FDirtyNetObjectTracker::AllowExternalAccess(FDirtyNetObjectTracker *this)

{
  this->bIsExternalAccessAllowed = true;
  return;
}

// ApplyAndTryResetGlobalDirtyObjectList @ 144230640

void __thiscall
UE::Net::Private::FDirtyNetObjectTracker::ApplyAndTryResetGlobalDirtyObjectList
          (FDirtyNetObjectTracker *this)

{
  ApplyGlobalDirtyObjectList(this);
  FGlobalDirtyNetObjectTracker::ResetDirtyNetObjectsIfSinglePoller
            (&this->GlobalDirtyTrackerPollHandle);
  this->bShouldResetPolledGlobalDirtyTracker = true;
  return;
}

// ApplyGlobalDirtyObjectList @ 144231410

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FDirtyNetObjectTracker::ApplyGlobalDirtyObjectList(FDirtyNetObjectTracker *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  TMap<UE::Net::FNetHandle,TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetHandle,TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
  *pTVar6;
  TSet<UE::Net::FNetHandle,DefaultKeyFuncs<UE::Net::FNetHandle,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  UReplicationSystem *this_00;
  TMap<UE::Net::FNetHandle,TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetHandle,TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
  *pTVar11;
  uint *puVar12;
  FReplicatedObjectData *pFVar13;
  uchar **ppuVar14;
  TSet<UE::Net::FNetHandle,DefaultKeyFuncs<UE::Net::FNetHandle,0>,FDefaultSetAllocator> *pTVar15;
  longlong lVar16;
  FNetHandle_u_0 FVar17;
  uint uVar18;
  FNetHandle_u_0 *pFVar19;
  int iVar20;
  undefined1 *puVar21;
  int iVar22;
  uint uVar23;
  bool local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TSet<UE::Net::FNetHandle,DefaultKeyFuncs<UE::Net::FNetHandle,0>,FDefaultSetAllocator> *local_158;
  undefined8 uStack_150;
  FReplicationProtocol **local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  int iStack_130;
  undefined4 uStack_12c;
  FNetHandle_u_0 local_128;
  uint local_120;
  uint local_11c;
  FReplicationProtocol *local_118;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  TMap<UE::Net::FNetHandle,TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetHandle,TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
  *local_100;
  FNetHandle_u_0 local_f8;
  FReplicationInstanceProtocol *local_f0;
  FNetHandle_u_0 local_e8;
  TMap<UE::Net::FNetHandle,TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetHandle,TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
  *local_e0;
  undefined1 auStack_d8 [20];
  uint uStack_c4;
  bool *local_c0;
  undefined8 uStack_b8;
  TSet<UE::Net::FNetHandle,DefaultKeyFuncs<UE::Net::FNetHandle,0>,FDefaultSetAllocator> *local_b0;
  undefined1 auStack_a8 [20];
  uint uStack_94;
  bool *local_90;
  undefined8 uStack_88;
  undefined4 local_64;
  undefined4 local_44;
  
  bVar8 = FGlobalDirtyNetObjectTracker::IsUsingPerPropertyDirtyTracking();
  if (bVar8) {
    this_00 = GetReplicationSystem(this->ReplicationSystemId);
    if (this_00 != (UReplicationSystem *)0x0) {
      UReplicationSystem::GetReplicationSystemInternal(this_00);
      pTVar11 = FGlobalDirtyNetObjectTracker::GetDirtyNetObjectsAndProperties
                          (&this->GlobalDirtyTrackerPollHandle);
      iVar3 = *(int *)&pTVar11->field_0x28;
      iVar20 = 0;
      uVar9 = 1;
      puVar1 = &pTVar11->field_0x10;
      iVar10 = iVar20;
      iVar22 = iVar20;
      if (iVar3 != 0) {
        puVar12 = *(uint **)&pTVar11->field_0x20;
        if (*(uint **)&pTVar11->field_0x20 == (uint *)0x0) {
          puVar12 = (uint *)puVar1;
        }
        uVar18 = *puVar12;
        iVar22 = 0;
        iVar20 = 0;
        while (uVar18 == 0) {
          lVar16 = (longlong)iVar20;
          iVar22 = iVar22 + 0x20;
          iVar20 = iVar20 + 1;
          iVar10 = iVar3;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar20) goto LAB_1442314ef;
          uVar18 = puVar12[lVar16 + 1];
        }
        uVar9 = -uVar18 & uVar18;
        uVar2 = (ulonglong)uVar9 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        local_110 = (int)lVar16;
        iVar10 = iVar22 + -1 + local_110;
        if (iVar3 < iVar10) {
          iVar10 = iVar3;
        }
      }
LAB_1442314ef:
      uVar18 = *(uint *)&pTVar11->field_0x28;
      iStack_130 = *(int *)&pTVar11->field_0x8 - *(int *)&pTVar11->field_0x34;
      uVar23 = uVar18 & 0xffffffe0;
      uStack_140 = (FReplicationInstanceProtocol **)CONCAT44(iVar10,0xffffffff);
      uStack_150 = (FNetRefHandleManager *)CONCAT44(uVar9,iVar20);
      local_138 = (bool *)CONCAT44(local_64,iVar22);
      auStack_d8._0_8_ = uStack_150;
      iVar22 = (int)uVar18 >> 5;
      uStack_b8 = CONCAT44(uStack_12c,iStack_130);
      stack0xffffffffffffff38 = uStack_140;
      local_c0 = local_138;
      local_158 = (TSet<UE::Net::FNetHandle,DefaultKeyFuncs<UE::Net::FNetHandle,0>,FDefaultSetAllocator>
                   *)pTVar11;
      local_148 = (FReplicationProtocol **)puVar1;
      local_100 = pTVar11;
      local_e0 = pTVar11;
      auStack_d8._8_8_ = puVar1;
      if ((((int)uVar18 < 0) || (iVar3 < (int)uVar18)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar6 = local_100;
      uVar9 = *(uint *)&pTVar11->field_0x28;
      if (uVar18 != uVar9) {
        puVar21 = *(undefined1 **)&pTVar11->field_0x20;
        if (*(undefined1 **)&pTVar11->field_0x20 == (undefined1 *)0x0) {
          puVar21 = puVar1;
        }
        uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar22 * 4);
        while (uVar18 == 0) {
          lVar16 = (longlong)iVar22;
          uVar23 = uVar23 + 0x20;
          iVar22 = iVar22 + 1;
          uVar18 = uVar9;
          if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22)
          goto LAB_144231610;
          uVar18 = *(uint *)(puVar21 + lVar16 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
        lVar16 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        local_10c = (int)lVar16;
        uVar18 = local_10c + -1 + uVar23;
        if ((int)uVar9 < (int)uVar18) {
          uVar18 = uVar9;
        }
      }
LAB_144231610:
      do {
        pTVar11 = local_e0;
        if (*(int *)&local_e0->field_0x8 - *(int *)&local_e0->field_0x34 != (int)uStack_b8) {
          local_res18[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetHandle,TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        if (((uStack_c4 == uVar18) && ((undefined1 *)auStack_d8._8_8_ == puVar1)) &&
           (pTVar11 == pTVar6)) {
          return;
        }
        pFVar19 = (FNetHandle_u_0 *)((longlong)(int)uStack_c4 * 0x30 + *(longlong *)pTVar11);
        local_f8 = *pFVar19;
        puVar12 = TMapBase<UE::Net::FNetHandle,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetHandle,unsigned_int,0>_>
                  ::Find((TMapBase<UE::Net::FNetHandle,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetHandle,unsigned_int,0>_>
                          *)&this->NetRefHandleManager->NetHandleToInternalIndex,
                         (FNetHandle *)&local_f8.Value);
        if ((puVar12 != (uint *)0x0) && (uVar9 = *puVar12, uVar9 != 0)) {
          uVar23 = pFVar19[4].InternalValue.Id;
          if (uVar23 == 0) {
LAB_144231795:
            pFVar4 = (this->DirtyNetObjects).Storage.AllocatorInstance.Data;
            if (((this->DirtyNetObjects).BitCount <= uVar9) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index < BitCount",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                   ,0x2a2,L""), bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            *(uint *)(pFVar4 + (ulonglong)(uVar9 >> 5) * 4) =
                 *(uint *)(pFVar4 + (ulonglong)(uVar9 >> 5) * 4) | 1 << (uVar9 & 0x1f);
          }
          else {
            local_11c = uVar23 * 0x20;
            local_res10[0] = false;
            FVar17 = (FNetHandle_u_0)(pFVar19 + 1);
            if (pFVar19[3] != (FNetHandle_u_0)0x0) {
              FVar17 = pFVar19[3];
            }
            local_120 = local_11c + 0x1f >> 5;
            local_128 = (FNetHandle_u_0)&local_11c;
            if ((uVar23 & 0x7ffffff) != 0) {
              local_128 = FVar17;
            }
            pFVar13 = FNetRefHandleManager::GetReplicatedObjectDataNoCheck
                                (this->NetRefHandleManager,uVar9);
            local_118 = pFVar13->Protocol;
            local_f0 = pFVar13->InstanceProtocol;
            if (((local_f0 != (FReplicationInstanceProtocol *)0x0) &&
                (ppuVar14 = TChunkedArray<unsigned_char_*,800,TSizedDefaultAllocator<32>_>::
                            operator[]((TChunkedArray<unsigned_char_*,800,TSizedDefaultAllocator<32>_>
                                        *)&this->NetRefHandleManager->ReplicatedObjectStateBuffers,
                                       uVar9), *ppuVar14 != (uchar *)0x0)) &&
               (local_118->PushModelOwnerCount != 0)) {
              if (local_118->PushModelOwnerCount < 2) {
                uStack_150 = this->NetRefHandleManager;
                local_148 = &local_118;
                uStack_140 = &local_f0;
                local_138 = local_res10;
                local_158._0_6_ = (uint6)uVar9;
                FNetBitArrayHelper::
                ForAllSetBits<_UE::Net::Private::FDirtyNetObjectTracker::MarkPushbasedPropertiesDirty_::__l2::<lambda_1>_&>
                          ((uint *)local_128,local_120,local_11c,(<lambda_1> *)&local_158);
                if (local_res10[0] != false) goto LAB_144231795;
              }
              else if (1 < (byte)LogIris._0_1_) {
                Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
              }
            }
          }
        }
        stack0xffffffffffffff38 =
             (FReplicationInstanceProtocol **)
             CONCAT44(uStack_c4,auStack_d8._16_4_ & ~auStack_d8._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_d8);
      } while( true );
    }
  }
  else {
    pTVar15 = FGlobalDirtyNetObjectTracker::GetDirtyNetObjects(&this->GlobalDirtyTrackerPollHandle);
    iVar3 = *(int *)&(pTVar15->Elements).field_0x28;
    iVar22 = 0;
    uVar9 = 1;
    iVar20 = 0;
    puVar1 = &(pTVar15->Elements).field_0x10;
    iVar10 = 0;
    if (iVar3 != 0) {
      puVar12 = *(uint **)&(pTVar15->Elements).field_0x20;
      if (puVar12 == (uint *)0x0) {
        puVar12 = (uint *)puVar1;
      }
      uVar18 = *puVar12;
      while (uVar18 == 0) {
        lVar16 = (longlong)iVar22;
        iVar20 = iVar20 + 0x20;
        iVar22 = iVar22 + 1;
        iVar10 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar22) goto LAB_144231880;
        uVar18 = puVar12[lVar16 + 1];
      }
      uVar9 = -uVar18 & uVar18;
      uVar2 = (ulonglong)uVar9 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      local_108 = (int)lVar16;
      iVar10 = iVar20 + -1 + local_108;
      if (iVar3 < iVar10) {
        iVar10 = iVar3;
      }
    }
LAB_144231880:
    uVar18 = *(uint *)&(pTVar15->Elements).field_0x28;
    iStack_130 = *(int *)&(pTVar15->Elements).field_0x8 - *(int *)&(pTVar15->Elements).field_0x34;
    uStack_150 = (FNetRefHandleManager *)CONCAT44(uVar9,iVar22);
    uVar9 = uVar18 & 0xffffffe0;
    uStack_140 = (FReplicationInstanceProtocol **)CONCAT44(iVar10,0xffffffff);
    local_138 = (bool *)CONCAT44(local_44,iVar20);
    auStack_a8._0_8_ = uStack_150;
    iVar22 = (int)uVar18 >> 5;
    uStack_88 = CONCAT44(uStack_12c,iStack_130);
    stack0xffffffffffffff68 = uStack_140;
    local_90 = local_138;
    local_158 = pTVar15;
    local_148 = (FReplicationProtocol **)puVar1;
    local_b0 = pTVar15;
    auStack_a8._8_8_ = puVar1;
    if ((((int)uVar18 < 0) || (iVar3 < (int)uVar18)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar23 = *(uint *)&(pTVar15->Elements).field_0x28;
    if (uVar18 != uVar23) {
      puVar21 = *(undefined1 **)&(pTVar15->Elements).field_0x20;
      if (puVar21 == (undefined1 *)0x0) {
        puVar21 = puVar1;
      }
      uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar22 * 4);
      while (uVar18 == 0) {
        lVar16 = (longlong)iVar22;
        uVar9 = uVar9 + 0x20;
        iVar22 = iVar22 + 1;
        uVar18 = uVar23;
        if ((int)((uVar23 - 1) + ((int)(uVar23 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22)
        goto LAB_144231990;
        uVar18 = *(uint *)(puVar21 + lVar16 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
      lVar16 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      local_104 = (int)lVar16;
      uVar18 = local_104 + -1 + uVar9;
      if ((int)uVar23 < (int)uVar18) {
        uVar18 = uVar23;
      }
    }
LAB_144231990:
    while( true ) {
      pTVar7 = local_b0;
      if (*(int *)&(local_b0->Elements).field_0x8 - *(int *)&(local_b0->Elements).field_0x34 !=
          (int)uStack_88) {
        local_res20[0] = 0;
        `TSparseArray<TSparseSetElement<UE::Net::FNetHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (((uStack_94 == uVar18) && ((undefined1 *)auStack_a8._8_8_ == puVar1)) &&
         (pTVar7 == pTVar15)) break;
      local_e8 = *(FNetHandle_u_0 *)
                  (*(longlong *)&pTVar7->Elements + (longlong)(int)uStack_94 * 0x10);
      puVar12 = TMapBase<UE::Net::FNetHandle,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetHandle,unsigned_int,0>_>
                ::Find((TMapBase<UE::Net::FNetHandle,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetHandle,unsigned_int,0>_>
                        *)&this->NetRefHandleManager->NetHandleToInternalIndex,
                       (FNetHandle *)&local_e8.Value);
      if ((puVar12 != (uint *)0x0) && (uVar9 = *puVar12, uVar9 != 0)) {
        pFVar4 = (this->DirtyNetObjects).Storage.AllocatorInstance.Data;
        if (((this->DirtyNetObjects).BitCount <= uVar9) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index < BitCount",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                               ,0x2a2,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(uint *)(pFVar4 + (ulonglong)(uVar9 >> 5) * 4) =
             *(uint *)(pFVar4 + (ulonglong)(uVar9 >> 5) * 4) | 1 << (uVar9 & 0x1f);
      }
      stack0xffffffffffffff68 =
           (FReplicationInstanceProtocol **)
           CONCAT44(uStack_94,auStack_a8._16_4_ & ~auStack_a8._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_a8);
    }
  }
  return;
}

// Deinit @ 144235c20

void __thiscall UE::Net::Private::FDirtyNetObjectTracker::Deinit(FDirtyNetObjectTracker *this)

{
  uint uVar1;
  
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this->NetRefHandleManager->OnMaxInternalNetRefIndexIncreased,this);
  uVar1 = (this->GlobalDirtyTrackerPollHandle).Index;
  if (uVar1 != 0xffffffff) {
    FGlobalDirtyNetObjectTracker::DestroyPoller(uVar1);
    (this->GlobalDirtyTrackerPollHandle).Index = 0xffffffff;
  }
  this->bShouldResetPolledGlobalDirtyTracker = false;
  return;
}

// ForceNetUpdate @ 14423a4d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FDirtyNetObjectTracker::ForceNetUpdate(FDirtyNetObjectTracker *this,uint param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FString local_28;
  
  pFVar2 = (this->ForceNetUpdateObjects).Storage.AllocatorInstance.Data;
  if (((this->ForceNetUpdateObjects).BitCount <= param_1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2c1,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar1 = (ulonglong)(param_1 >> 5) * 4;
  this->ForceNetUpdateObjectsCount =
       this->ForceNetUpdateObjectsCount +
       (uint)((*(uint *)(pFVar2 + lVar1) >> (param_1 & 0x1f) & 1) == 0);
  pFVar2 = (this->ForceNetUpdateObjects).Storage.AllocatorInstance.Data;
  if (((this->ForceNetUpdateObjects).BitCount <= param_1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2a2,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(uint *)(pFVar2 + lVar1) = *(uint *)(pFVar2 + lVar1) | 1 << (param_1 & 0x1f);
  MarkNetObjectDirty(this,param_1);
  if (5 < (byte)LogIrisDirtyTracker._0_1_) {
    FNetRefHandleManager::PrintObjectFromIndex(this->NetRefHandleManager,&local_28,param_1);
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisDirtyTracker);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// GetDirtyNetObjectsThisFrame @ 14423bf30

FNetBitArrayView * __thiscall
UE::Net::Private::FDirtyNetObjectTracker::GetDirtyNetObjectsThisFrame
          (FDirtyNetObjectTracker *this,FNetBitArrayView *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FNetBitArrayView *pFVar3;
  
  if (this->bIsExternalAccessAllowed != false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bIsExternalAccessAllowed",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\DirtyNetObjectTracker.cpp"
                       ,0x148,
                       L"Cannot access the DirtyNetObjects bitarray unless its locked for multithread access."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNetBitArrayView *)(*pcVar1)();
      return pFVar3;
    }
  }
  FNetBitArrayView::FNetBitArrayView
            (__return_storage_ptr__,(uint *)(this->DirtyNetObjects).Storage.AllocatorInstance.Data,
             (this->DirtyNetObjects).BitCount);
  return __return_storage_ptr__;
}

// Init @ 14423ffc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FDirtyNetObjectTracker::Init
          (FDirtyNetObjectTracker *this,FDirtyNetObjectTrackerInitParams *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FPollHandle FVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  undefined4 extraout_var;
  uint local_res8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_48;
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  if (param_1->NetRefHandleManager == (FNetRefHandleManager *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Params.NetRefHandleManager != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\DirtyNetObjectTracker.cpp"
                       ,0x1e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->NetRefHandleManager = param_1->NetRefHandleManager;
  this->ReplicationSystemId = param_1->ReplicationSystemId;
  this->NetObjectIdCount = param_1->MaxInternalNetRefIndex;
  local_48.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_48,(FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar5 = Core::Private::DelegateAllocate(0x28,&local_40);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFDirtyNetObjectTracker_Private_Net_UE____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar5[4] = ApplyGlobalDirtyObjectList;
    puVar5[3] = this;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FVar4 = FGlobalDirtyNetObjectTracker::CreatePoller
                    ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_res8);
  uVar1 = (this->GlobalDirtyTrackerPollHandle).Index;
  if (uVar1 != 0xffffffff) {
    FGlobalDirtyNetObjectTracker::DestroyPoller(uVar1);
  }
  (this->GlobalDirtyTrackerPollHandle).Index = *(uint *)CONCAT44(extraout_var,FVar4.Index);
  *(uint *)CONCAT44(extraout_var,FVar4.Index) = 0xffffffff;
  if (local_res8 != 0xffffffff) {
    FGlobalDirtyNetObjectTracker::DestroyPoller(local_res8);
  }
  SetNetObjectListsSize(this,param_1->MaxInternalNetRefIndex);
  TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>::
  AddRaw<UE::Net::Private::FDirtyNetObjectTracker>
            ((TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
              *)&this->NetRefHandleManager->OnMaxInternalNetRefIndexIncreased,
             (FDirtyNetObjectTracker *)&stack0x00000010,(pmf_e6480c10)this);
  this->bIsExternalAccessAllowed = true;
  if (4 < (byte)LogIrisDirtyTracker._0_1_) {
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIrisDirtyTracker);
  }
  return;
}

// LockExternalAccess @ 144244330

void __thiscall
UE::Net::Private::FDirtyNetObjectTracker::LockExternalAccess(FDirtyNetObjectTracker *this)

{
  this->bIsExternalAccessAllowed = false;
  return;
}

// MarkNetObjectDirty @ 144244500

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FDirtyNetObjectTracker::MarkNetObjectDirty
          (FDirtyNetObjectTracker *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString local_18;
  
  if ((this->bIsExternalAccessAllowed == false) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsExternalAccessAllowed",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\DirtyNetObjectTracker.cpp"
                         ,0x112,
                         L"Cannot mark objects dirty while the bitarray is locked for modifications."
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_1 < this->NetObjectIdCount) && (param_1 != 0)) {
    bVar3 = FNetBitArray::IsBitSet(&this->DirtyNetObjects,param_1);
    this->PushModelDirtyObjectsCount = this->PushModelDirtyObjectsCount + (bVar3 ^ 1);
    pFVar1 = (this->DirtyNetObjects).Storage.AllocatorInstance.Data + (ulonglong)(param_1 >> 5) * 4;
    *(uint *)pFVar1 = *(uint *)pFVar1 | 1 << (param_1 & 0x1f);
    if (5 < (byte)LogIrisDirtyTracker._0_1_) {
      FNetRefHandleManager::PrintObjectFromIndex(this->NetRefHandleManager,&local_18,param_1);
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisDirtyTracker);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        return;
      }
    }
  }
  else if (2 < (byte)LogIrisDirtyTracker._0_1_) {
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIrisDirtyTracker);
  }
  return;
}

// MarkPushbasedPropertiesDirty @ 1442448a0

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Net::Private::FDirtyNetObjectTracker::MarkPushbasedPropertiesDirty
          (FDirtyNetObjectTracker *this,uint param_1,ushort param_2,FNetBitArrayView *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FReplicatedObjectData *pFVar4;
  uchar **ppuVar5;
  bool local_res18 [16];
  FReplicationProtocol *local_48;
  FReplicationInstanceProtocol *local_40;
  <lambda_1> local_38;
  
  local_res18[0] = false;
  if (param_2 == 0) {
    pFVar4 = FNetRefHandleManager::GetReplicatedObjectDataNoCheck(this->NetRefHandleManager,param_1)
    ;
    local_48 = pFVar4->Protocol;
    local_40 = pFVar4->InstanceProtocol;
    if (local_40 != (FReplicationInstanceProtocol *)0x0) {
      ppuVar5 = TChunkedArray<unsigned_char_*,800,TSizedDefaultAllocator<32>_>::operator[]
                          ((TChunkedArray<unsigned_char_*,800,TSizedDefaultAllocator<32>_> *)
                           &this->NetRefHandleManager->ReplicatedObjectStateBuffers,param_1);
      if ((*ppuVar5 != (uchar *)0x0) && (local_48->PushModelOwnerCount != 0)) {
        if (local_48->PushModelOwnerCount < 2) {
          local_38.OwnerIndex = 0;
          local_38.LocalNetRefHandleManager = this->NetRefHandleManager;
          local_38.Protocol = &local_48;
          local_38.InstanceProtocol = &local_40;
          local_38.bShouldMarkObjectDirty = local_res18;
          local_38.ObjectIndex = param_1;
          FNetBitArrayHelper::
          ForAllSetBits<_UE::Net::Private::FDirtyNetObjectTracker::MarkPushbasedPropertiesDirty_::__l2::<lambda_1>_&>
                    (param_3->Storage,param_3->WordCount,param_3->BitCount,&local_38);
          return local_res18[0];
        }
        if (1 < (byte)LogIris._0_1_) {
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        }
      }
    }
  }
  else {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3316308089359040585>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\DirtyNetObjectTracker.cpp"
                       ,0x49,"OwnerIndex == 0U");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// OnMaxInternalNetRefIndexIncreased @ 1442464d0

void __thiscall
UE::Net::Private::FDirtyNetObjectTracker::OnMaxInternalNetRefIndexIncreased
          (FDirtyNetObjectTracker *this,uint param_1)

{
  SetNetObjectListsSize(this,param_1);
  this->NetObjectIdCount = param_1;
  return;
}

// ReconcilePolledList @ 14424b270

void __thiscall
UE::Net::Private::FDirtyNetObjectTracker::ReconcilePolledList
          (FDirtyNetObjectTracker *this,FNetBitArrayView *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint *puVar4;
  ulonglong uVar5;
  FNetBitArrayView local_28;
  FNetBitArrayView local_18;
  
  this->bIsExternalAccessAllowed = false;
  if (this->bShouldResetPolledGlobalDirtyTracker != false) {
    this->bShouldResetPolledGlobalDirtyTracker = false;
    FGlobalDirtyNetObjectTracker::ResetDirtyNetObjects(&this->GlobalDirtyTrackerPollHandle);
  }
  FNetBitArrayView::FNetBitArrayView
            (&local_28,(uint *)(this->ForceNetUpdateObjects).Storage.AllocatorInstance.Data,
             (this->ForceNetUpdateObjects).BitCount);
  if (((local_28.Storage == param_1->Storage) || (local_28.BitCount != param_1->BitCount)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(*this).GetData() != (Other).GetData() && (*this).GetNumBits() == (Other).GetNumBits()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x64b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  puVar4 = param_1->Storage;
  if (local_28.WordCount != 0) {
    uVar5 = (ulonglong)local_28.WordCount;
    do {
      uVar1 = *puVar4;
      puVar4 = puVar4 + 1;
      *local_28.Storage = *local_28.Storage & ~uVar1;
      local_28.Storage = local_28.Storage + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  FNetBitArrayView::FNetBitArrayView
            (&local_18,(uint *)(this->AccumulatedDirtyNetObjects).Storage.AllocatorInstance.Data,
             (this->AccumulatedDirtyNetObjects).BitCount);
  if (((local_18.Storage == param_1->Storage) || (local_18.BitCount != param_1->BitCount)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(*this).GetData() != (Other).GetData() && (*this).GetNumBits() == (Other).GetNumBits()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x64b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  puVar4 = param_1->Storage;
  if (local_18.WordCount != 0) {
    uVar5 = (ulonglong)local_18.WordCount;
    do {
      uVar1 = *puVar4;
      puVar4 = puVar4 + 1;
      *local_18.Storage = *local_18.Storage & ~uVar1;
      local_18.Storage = local_18.Storage + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  memset((this->DirtyNetObjects).Storage.AllocatorInstance.Data,0,
         (longlong)(this->DirtyNetObjects).Storage.ArrayNum << 2);
  this->bIsExternalAccessAllowed = true;
  return;
}

// ReportCSVStats @ 14424f860

void __thiscall
UE::Net::Private::FDirtyNetObjectTracker::ReportCSVStats(FDirtyNetObjectTracker *this)

{
  if (!__CsvProfilerStat358) {
    FCsvProfilerTrace::OutputInlineStat("PushModelDirtyObjects",_GCsvCategory_Iris.Index);
    __CsvProfilerStat358 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("PushModelDirtyObjects",_GCsvCategory_Iris.Index,this->PushModelDirtyObjectsCount,Set);
  if (__CsvProfilerStat359 == false) {
    FCsvProfilerTrace::OutputInlineStat("ForceNetUpdateObjects",_GCsvCategory_Iris.Index);
    __CsvProfilerStat359 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("ForceNetUpdateObjects",_GCsvCategory_Iris.Index,this->ForceNetUpdateObjectsCount,Set);
  this->PushModelDirtyObjectsCount = 0;
  this->ForceNetUpdateObjectsCount = 0;
  return;
}

// SetNetObjectListsSize @ 1442527f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Net::Private::FDirtyNetObjectTracker::SetNetObjectListsSize
          (FDirtyNetObjectTracker *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  uint uVar3;
  
  (this->AccumulatedDirtyNetObjects).BitCount = param_1;
  uVar3 = param_1 + 0x1f >> 5;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumZeroed
            ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)this,uVar3,No);
  uVar2 = (this->AccumulatedDirtyNetObjects).BitCount;
  if (uVar2 != 0) {
    pFVar1 = (this->AccumulatedDirtyNetObjects).Storage.AllocatorInstance.Data +
             (longlong)(this->AccumulatedDirtyNetObjects).Storage.ArrayNum * 4 + -4;
    *(uint *)pFVar1 = *(uint *)pFVar1 & 0xffffffffU >> (-(char)uVar2 & 0x1fU);
  }
  (this->ForceNetUpdateObjects).BitCount = param_1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&(this->ForceNetUpdateObjects).Storage,uVar3,No);
  uVar2 = (this->ForceNetUpdateObjects).BitCount;
  if (uVar2 != 0) {
    pFVar1 = (this->ForceNetUpdateObjects).Storage.AllocatorInstance.Data +
             (longlong)(this->ForceNetUpdateObjects).Storage.ArrayNum * 4 + -4;
    *(uint *)pFVar1 = *(uint *)pFVar1 & 0xffffffffU >> (-(char)uVar2 & 0x1fU);
  }
  (this->DirtyNetObjects).BitCount = param_1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&(this->DirtyNetObjects).Storage,uVar3,No);
  uVar2 = (this->DirtyNetObjects).BitCount;
  if (uVar2 != 0) {
    pFVar1 = (this->DirtyNetObjects).Storage.AllocatorInstance.Data +
             (longlong)(this->DirtyNetObjects).Storage.ArrayNum * 4 + -4;
    *(uint *)pFVar1 = *(uint *)pFVar1 & 0xffffffffU >> (-(char)uVar2 & 0x1fU);
  }
  return;
}

// UpdateAccumulatedDirtyList @ 1442560b0

void __thiscall
UE::Net::Private::FDirtyNetObjectTracker::UpdateAccumulatedDirtyList(FDirtyNetObjectTracker *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  ulonglong uVar5;
  longlong lVar6;
  bool bVar7;
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId267,"FDirtyNetObjectTracker_UpdateDirtyNetObjects",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\DirtyNetObjectTracker.cpp"
               ,0x10b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId267);
  }
  if ((((this->AccumulatedDirtyNetObjects).Storage.AllocatorInstance.Data ==
        (this->DirtyNetObjects).Storage.AllocatorInstance.Data) ||
      ((this->AccumulatedDirtyNetObjects).BitCount != (this->DirtyNetObjects).BitCount)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(*this).GetData() != (Other).GetData() && (*this).GetNumBits() == (Other).GetNumBits()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x539,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar1 = (this->AccumulatedDirtyNetObjects).Storage.ArrayNum;
  pFVar4 = (this->AccumulatedDirtyNetObjects).Storage.AllocatorInstance.Data;
  if (uVar1 != 0) {
    lVar6 = (longlong)(this->DirtyNetObjects).Storage.AllocatorInstance.Data - (longlong)pFVar4;
    uVar5 = (ulonglong)uVar1;
    do {
      *(uint *)pFVar4 = *(uint *)pFVar4 | *(uint *)(pFVar4 + lVar6);
      pFVar4 = pFVar4 + 4;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// UpdateAndLockDirtyNetObjects @ 144256180

void __thiscall
UE::Net::Private::FDirtyNetObjectTracker::UpdateAndLockDirtyNetObjects(FDirtyNetObjectTracker *this)

{
  if ((this->GlobalDirtyTrackerPollHandle).Index != 0xffffffff) {
    UpdateDirtyNetObjects(this);
    FGlobalDirtyNetObjectTracker::LockDirtyListUntilReset(&this->GlobalDirtyTrackerPollHandle);
    return;
  }
  return;
}

// UpdateDirtyNetObjects @ 144256fd0

void __thiscall
UE::Net::Private::FDirtyNetObjectTracker::UpdateDirtyNetObjects(FDirtyNetObjectTracker *this)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  bool bVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  FNetBitArrayView local_18;
  
  if ((this->GlobalDirtyTrackerPollHandle).Index == 0xffffffff) {
    return;
  }
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId224,"FDirtyNetObjectTracker_UpdateDirtyNetObjects",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\DirtyNetObjectTracker.cpp"
               ,0xe0);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId224);
  }
  this->bIsExternalAccessAllowed = false;
  ApplyGlobalDirtyObjectList(this);
  FGlobalDirtyNetObjectTracker::ResetDirtyNetObjectsIfSinglePoller
            (&this->GlobalDirtyTrackerPollHandle);
  uVar2 = (this->AccumulatedDirtyNetObjects).Storage.ArrayNum;
  this->bShouldResetPolledGlobalDirtyTracker = true;
  FNetBitArrayView::FNetBitArrayView
            (&local_18,
             (uint *)(this->NetRefHandleManager->GlobalScopableInternalIndices).Storage.
                     AllocatorInstance.Data,
             (this->NetRefHandleManager->GlobalScopableInternalIndices).BitCount);
  if ((local_18.WordCount < uVar2) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("MaxWordIterationCount <= WordCount",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                          ,0x1b0,
                          L"MaxWordIterationCount (%u) is higher than this NetBitArrayView word count (%u). Out of Bounds memory access will occur."
                         ), bVar12)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((this->AccumulatedDirtyNetObjects).Storage.ArrayNum < (int)uVar2) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(int32)MaxWordIterationCount <= Storage.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                          ,0x8e,
                          L"MaxWordIterationCount (%u) is higher than this NetBitArray word count (%d). Out of Bounds memory access will occur."
                         ), bVar12)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar3 = (this->AccumulatedDirtyNetObjects).Storage.AllocatorInstance.Data;
  if (((this->DirtyNetObjects).Storage.ArrayNum < (int)uVar2) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(int32)MaxWordIterationCount <= Storage.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                          ,0x8e,
                          L"MaxWordIterationCount (%u) is higher than this NetBitArray word count (%d). Out of Bounds memory access will occur."
                         ), bVar12)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar4 = (this->DirtyNetObjects).Storage.AllocatorInstance.Data;
  uVar17 = 0;
  if (uVar2 == 0) goto LAB_14425722c;
  uVar16 = uVar17;
  if (1 < uVar2) {
    uVar13 = (ulonglong)(uVar2 - 1);
    if (((((FScriptContainerElement *)((longlong)local_18.Storage + uVar13 * 4) < pFVar3) ||
         (pFVar3 + uVar13 * 4 < local_18.Storage)) &&
        ((pFVar4 + uVar13 * 4 < pFVar3 || (pFVar3 + uVar13 * 4 < pFVar4)))) &&
       (((FScriptContainerElement *)((longlong)local_18.Storage + uVar13 * 4) < pFVar4 ||
        (uVar16 = 0, pFVar4 + uVar13 * 4 < local_18.Storage)))) {
      if (uVar2 < 4) {
LAB_1442571b6:
        do {
          uVar20 = (uint)*(undefined8 *)((longlong)local_18.Storage + uVar17 * 4);
          uVar15 = (uint)((ulonglong)*(undefined8 *)((longlong)local_18.Storage + uVar17 * 4) >>
                         0x20);
          uVar13 = CONCAT44(uVar15 & (uint)((ulonglong)*(undefined8 *)(pFVar4 + uVar17 * 4) >> 0x20)
                            ,uVar20 & (uint)*(undefined8 *)(pFVar4 + uVar17 * 4));
          uVar16 = *(ulonglong *)(pFVar3 + uVar17 * 4);
          *(ulonglong *)(pFVar4 + uVar17 * 4) = uVar13;
          uVar13 = uVar13 | uVar16;
          *(ulonglong *)(pFVar3 + uVar17 * 4) =
               CONCAT44((uint)(uVar13 >> 0x20) & uVar15,(uint)uVar13 & uVar20);
          uVar15 = (int)uVar17 + 2;
          uVar17 = (ulonglong)uVar15;
        } while (uVar15 < (uVar2 & 0xfffffffe));
      }
      else {
        do {
          pFVar14 = pFVar4 + uVar17 * 4;
          pFVar1 = (FScriptContainerElement *)((longlong)local_18.Storage + uVar17 * 4);
          uVar15 = *(uint *)pFVar1;
          uVar20 = *(uint *)(pFVar1 + 4);
          uVar6 = *(uint *)(pFVar1 + 8);
          uVar7 = *(uint *)(pFVar1 + 0xc);
          uVar19 = uVar15 & *(uint *)pFVar14;
          uVar21 = uVar20 & *(uint *)(pFVar14 + 4);
          uVar22 = uVar6 & *(uint *)(pFVar14 + 8);
          uVar23 = uVar7 & *(uint *)(pFVar14 + 0xc);
          pFVar14 = pFVar3 + uVar17 * 4;
          uVar8 = *(uint *)pFVar14;
          uVar9 = *(uint *)(pFVar14 + 4);
          uVar10 = *(uint *)(pFVar14 + 8);
          uVar11 = *(uint *)(pFVar14 + 0xc);
          pFVar14 = pFVar4 + uVar17 * 4;
          *(uint *)pFVar14 = uVar19;
          *(uint *)(pFVar14 + 4) = uVar21;
          *(uint *)(pFVar14 + 8) = uVar22;
          *(uint *)(pFVar14 + 0xc) = uVar23;
          pFVar14 = pFVar3 + uVar17 * 4;
          *(uint *)pFVar14 = (uVar19 | uVar8) & uVar15;
          *(uint *)(pFVar14 + 4) = (uVar21 | uVar9) & uVar20;
          *(uint *)(pFVar14 + 8) = (uVar22 | uVar10) & uVar6;
          *(uint *)(pFVar14 + 0xc) = (uVar23 | uVar11) & uVar7;
          uVar15 = (int)uVar17 + 4;
          uVar17 = (ulonglong)uVar15;
        } while (uVar15 < uVar2 - (uVar2 & 3));
        if (1 < (uVar2 & 3)) goto LAB_1442571b6;
      }
      uVar16 = uVar17;
      if (uVar2 <= (uint)uVar17) goto LAB_14425722c;
    }
  }
  pFVar14 = (FScriptContainerElement *)((longlong)local_18.Storage + uVar16 * 4);
  uVar17 = (ulonglong)(uVar2 - (int)uVar16);
  do {
    *(uint *)(pFVar14 + ((longlong)pFVar4 - (longlong)local_18.Storage)) =
         *(uint *)(pFVar14 + ((longlong)pFVar4 - (longlong)local_18.Storage)) & *(uint *)pFVar14;
    *(uint *)(pFVar14 + ((longlong)pFVar3 - (longlong)local_18.Storage)) =
         (*(uint *)(pFVar14 + ((longlong)pFVar4 - (longlong)local_18.Storage)) |
         *(uint *)(pFVar14 + ((longlong)pFVar3 - (longlong)local_18.Storage))) & *(uint *)pFVar14;
    pFVar14 = pFVar14 + 4;
    uVar17 = uVar17 - 1;
  } while (uVar17 != 0);
LAB_14425722c:
  this->bIsExternalAccessAllowed = true;
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

