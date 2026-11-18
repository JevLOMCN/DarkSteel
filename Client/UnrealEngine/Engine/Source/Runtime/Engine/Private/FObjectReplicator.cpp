// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 43

// FObjectReplicator @ 147a25dc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FObjectReplicator * __thiscall FObjectReplicator::FObjectReplicator(FObjectReplicator *this)

{
  undefined1 *puVar1;
  
  this->bLastUpdateEmpty = 0;
  this->bCanUseNonDirtyOptimization = 0;
  this->bSupportsFastArrayDelta = 0;
  this->bSentSubObjectCreation = 0;
  this->bHasReplicatedProperties = 0;
  this->bForceUpdateUnmapped = 0;
  this->bOpenAckCalled = 0;
  this->bDirtyForReplay = 1;
  (this->ObjectNetGUID).field0_0x0.ObjectId = 0;
  (this->ChangelistMgr).Object = (FReplicationChangelistMgr *)0x0;
  (this->ChangelistMgr).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->RepLayout).Object = (FRepLayout *)0x0;
  (this->RepLayout).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->RepState).Ptr = (FRepState *)0x0;
  (this->CheckpointRepState).Ptr = (FRepState *)0x0;
  (this->ObjectClass).field0_0x0.DebugPtr = (UClass *)0x0;
  this->ObjectPtr = (UObject *)0x0;
  this->Connection = (UNetConnection *)0x0;
  this->OwningChannel = (UActorChannel *)0x0;
  this->RemoteFunctions = (FOutBunch *)0x0;
  (this->RemoteFuncInfo).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RemoteFuncInfo).ArrayNum = 0;
  (this->RemoteFuncInfo).ArrayMax = 0;
  (this->PendingLocalRPCs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingLocalRPCs).ArrayNum = 0;
  (this->PendingLocalRPCs).ArrayMax = 0;
  *(undefined8 *)&(this->ReferencedGuids).Elements = 0;
  *(undefined8 *)&(this->ReferencedGuids).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ReferencedGuids).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ReferencedGuids).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ReferencedGuids).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ReferencedGuids).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->ReferencedGuids).Elements.field_0x30 = 0xffffffff;
  (this->ReferencedGuids).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ReferencedGuids).HashSize = 0;
  (this->WeakObjectPtr).WeakPtr = (FWeakObjectPtr)0x0;
  (this->PendingTransactionalRPCs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingTransactionalRPCs).ArrayNum = 0;
  (this->PendingTransactionalRPCs).ArrayMax = 0;
  return this;
}

// ~FObjectReplicator @ 147a29a50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FObjectReplicator::~FObjectReplicator(FObjectReplicator *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  
  CleanUp(this);
  DestructItems<FObjectReplicator::FRPCPendingLocalCall,int>
            ((FRPCPendingLocalCall *)(this->PendingTransactionalRPCs).AllocatorInstance.Data,
             (this->PendingTransactionalRPCs).ArrayNum);
  pFVar1 = (this->PendingTransactionalRPCs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->ReferencedGuids).HashSize = 0;
  FVar2 = (this->ReferencedGuids).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FNetworkGUID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FNetworkGUID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ReferencedGuids).Elements);
  DestructItems<FObjectReplicator::FRPCPendingLocalCall,int>
            ((FRPCPendingLocalCall *)(this->PendingLocalRPCs).AllocatorInstance.Data,
             (this->PendingLocalRPCs).ArrayNum);
  pFVar1 = (this->PendingLocalRPCs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RemoteFuncInfo).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDefaultDelete<FRepState>::operator()
            ((TDefaultDelete<FRepState> *)&this->CheckpointRepState,(this->CheckpointRepState).Ptr);
  TDefaultDelete<FRepState>::operator()
            ((TDefaultDelete<FRepState> *)&this->RepState,(this->RepState).Ptr);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->RepLayout).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ChangelistMgr).SharedReferenceCount.ReferenceController);
  return;
}

// CallProcessEventForReceivedRPC @ 147a35460

void __cdecl
FObjectReplicator::CallProcessEventForReceivedRPC
          (UObject *param_1,UFunction *param_2,uchar *param_3)

{
  FScopedRemoteRPCMode local_res8 [8];
  FScopedNetContextRPC local_res20 [8];
  
  UE::Net::FScopedNetContextRPC::FScopedNetContextRPC(local_res20);
  UE::Net::Private::FScopedRemoteRPCMode::FScopedRemoteRPCMode(local_res8,param_2,Receiving);
  (**(code **)(*(longlong *)param_1 + 0x260))(param_1,param_2,param_3);
  UE::Net::Private::FScopedRemoteRPCMode::~FScopedRemoteRPCMode(local_res8);
  UE::Net::FScopedNetContextRPC::~FScopedNetContextRPC(local_res20);
  return;
}

// CallRepNotifies @ 147a354e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FObjectReplicator::CallRepNotifies(FObjectReplicator *this,bool param_1)

{
  UNetDriver *pUVar1;
  FReceivingRepState *pFVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  UObject *pUVar6;
  
  pUVar6 = this->ObjectPtr;
  if ((pUVar6 == (UObject *)0x0) &&
     (pUVar6 = FWeakObjectPtr::Get(&(this->WeakObjectPtr).WeakPtr), pUVar6 == (UObject *)0x0)) {
    return;
  }
  if ((*(uint *)&pUVar6->field_0x8 >> 0x1e & 1) == 0) {
    if (((this->Connection != (UNetConnection *)0x0) &&
        (pUVar1 = (this->Connection->Driver).field0_0x0.DebugPtr, pUVar1 != (UNetDriver *)0x0)) &&
       (cVar4 = (**(code **)(pUVar1->_padding_ + 0x430))(), cVar4 != '\0')) {
      return;
    }
    if (((!param_1) || (this->OwningChannel == (UActorChannel *)0x0)) ||
       ((this->OwningChannel->QueuedBunches).ArrayNum < 1)) {
      pFVar2 = (((this->RepState).Ptr)->ReceivingRepState).Ptr;
      if (((this->RepLayout).Object == (FRepLayout *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FRepLayout::CallRepNotifies((this->RepLayout).Object,pFVar2,pUVar6);
      if ((*(uint *)&pUVar6->field_0x8 >> 0x1e & 1) == 0) {
        (**(code **)(*(longlong *)pUVar6 + 0x230))(pUVar6);
      }
    }
  }
  return;
}

// CanSkipUpdate @ 147a35690

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall FObjectReplicator::CanSkipUpdate(FObjectReplicator *this,FReplicationFlags param_1)

{
  return false;
}

// CleanUp @ 147a359b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FObjectReplicator::CleanUp(FObjectReplicator *this)

{
  int *piVar1;
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *pTVar2;
  ulonglong uVar3;
  int iVar4;
  UNetDriver *pUVar5;
  FNetworkGUID FVar6;
  undefined1 *puVar7;
  FRepState *pFVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  FNetworkGUID_u_0 *pFVar14;
  FNetworkGUID_u_0 *pFVar15;
  uint uVar16;
  FNetworkGUID_u_0 *pFVar17;
  uint uVar18;
  int iVar19;
  undefined1 *puVar20;
  int iVar21;
  uint *puVar22;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  undefined4 uStack_8c;
  undefined8 local_80;
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  if (this->OwningChannel != (UActorChannel *)0x0) {
    StopReplicating(this,this->OwningChannel);
  }
  iVar19 = 0;
  if (this->Connection == (UNetConnection *)0x0) {
    if (this->TrackedGuidMemoryBytes != 0) {
      `FObjectReplicator::CleanUp'::__l17::<lambda_1>::operator()(local_res10);
    }
    if (*(int *)&(this->ReferencedGuids).Elements.field_0x8 !=
        *(int *)&(this->ReferencedGuids).Elements.field_0x34) {
      `FObjectReplicator::CleanUp'::__l17::<lambda_2>::operator()(local_res18);
    }
  }
  else {
    local_78 = &this->ReferencedGuids;
    puVar7 = &(this->ReferencedGuids).Elements.field_0x10;
    iVar4 = *(int *)&(this->ReferencedGuids).Elements.field_0x28;
    uVar11 = 1;
    iVar21 = 0;
    iVar12 = 0;
    if (iVar4 != 0) {
      puVar22 = *(uint **)&(this->ReferencedGuids).Elements.field_0x20;
      if (puVar22 == (uint *)0x0) {
        puVar22 = (uint *)puVar7;
      }
      uVar18 = *puVar22;
      iVar21 = 0;
      while (uVar18 == 0) {
        lVar13 = (longlong)iVar19;
        iVar21 = iVar21 + 0x20;
        iVar19 = iVar19 + 1;
        iVar12 = iVar4;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_147a35a8d;
        uVar18 = puVar22[lVar13 + 1];
      }
      uVar11 = -uVar18 & uVar18;
      uVar3 = (ulonglong)uVar11 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar12 = iVar21 + -1 + (int)lVar13;
      if (iVar4 < iVar12) {
        iVar12 = iVar4;
      }
    }
LAB_147a35a8d:
    uVar18 = *(uint *)&(this->ReferencedGuids).Elements.field_0x28;
    uVar16 = uVar18 & 0xffffffe0;
    TStack_70._padding_ = CONCAT44(uVar11,iVar19);
    TStack_70.CurrentBitIndex = iVar12;
    TStack_70.UnvisitedBitMask = 0xffffffff;
    iVar19 = (int)uVar18 >> 5;
    TStack_70._28_4_ = iVar12;
    TStack_70.BaseBitIndex = iVar21;
    uStack_50 = CONCAT44(uStack_8c,
                         *(int *)&(this->ReferencedGuids).Elements.field_0x8 -
                         *(int *)&(this->ReferencedGuids).Elements.field_0x34);
    local_res20 = uVar18;
    TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar7;
    if ((((int)uVar18 < 0) || (iVar4 < (int)uVar18)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uVar11 = *(uint *)&(this->ReferencedGuids).Elements.field_0x28;
    if (uVar18 != uVar11) {
      puVar20 = *(undefined1 **)&(this->ReferencedGuids).Elements.field_0x20;
      if (puVar20 == (undefined1 *)0x0) {
        puVar20 = puVar7;
      }
      uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar19 * 4);
      while (uVar18 == 0) {
        lVar13 = (longlong)iVar19;
        uVar16 = uVar16 + 0x20;
        iVar19 = iVar19 + 1;
        uVar18 = uVar11;
        local_res20 = uVar11;
        if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
        goto LAB_147a35ba0;
        uVar18 = *(uint *)(puVar20 + lVar13 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      uVar18 = (int)lVar13 + -1 + uVar16;
      local_res20 = uVar18;
      if ((int)uVar11 < (int)uVar18) {
        uVar18 = uVar11;
        local_res20 = uVar11;
      }
    }
LAB_147a35ba0:
    while( true ) {
      pTVar2 = local_78;
      if (*(int *)&(local_78->Elements).field_0x8 - *(int *)&(local_78->Elements).field_0x34 !=
          (int)uStack_50) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<FNetworkGUID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_70.CurrentBitIndex == uVar18) &&
          (TStack_70.Array ==
           (TBitArray<FDefaultBitArrayAllocator> *)&(this->ReferencedGuids).Elements.field_0x10)) &&
         (pTVar2 == &this->ReferencedGuids)) break;
      pFVar15 = (FNetworkGUID_u_0 *)
                (*(longlong *)&pTVar2->Elements + (longlong)TStack_70.CurrentBitIndex * 0x10);
      pUVar5 = (this->Connection->Driver).field0_0x0.DebugPtr;
      FVar6.field0_0x0 = (FNetworkGUID_u_0)pFVar15->ObjectId;
      if (*(int *)&(pUVar5->GuidToReplicatorMap).field_0x8 !=
          *(int *)&(pUVar5->GuidToReplicatorMap).field_0x34) {
        puVar7 = *(undefined1 **)&(pUVar5->GuidToReplicatorMap).field_0x40;
        puVar20 = &(pUVar5->GuidToReplicatorMap).field_0x38;
        if (puVar7 != (undefined1 *)0x0) {
          puVar20 = puVar7;
        }
        uVar11 = *(uint *)(puVar20 +
                          (((ulonglong)FVar6.field0_0x0 >> 0x20) * 0x17 + (longlong)FVar6.field0_0x0
                          & (ulonglong)(*(int *)&(pUVar5->GuidToReplicatorMap).field_0x48 - 1)) * 4)
        ;
        if (uVar11 != 0xffffffff) {
          do {
            pFVar17 = (FNetworkGUID_u_0 *)
                      ((longlong)(int)uVar11 * 0x60 + *(longlong *)&pUVar5->GuidToReplicatorMap);
            if ((FNetworkGUID_u_0)pFVar17->ObjectId == FVar6.field0_0x0) {
              if (pFVar17 != (FNetworkGUID_u_0 *)0x0) goto LAB_147a35c86;
              goto LAB_147a35c60;
            }
            uVar11 = pFVar17[0xb].Value;
          } while (uVar11 != 0xffffffff);
        }
      }
      pFVar17 = (FNetworkGUID_u_0 *)0x0;
LAB_147a35c60:
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Pair != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                          ,0x288,L"");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
LAB_147a35c86:
      if (pFVar17[2].Value != *(uint *)((longlong)pFVar17 + 0x3c)) {
        uVar11 = ((uint)((ulonglong)this >> 0x14) & 0xffff ^ (uint)((ulonglong)this >> 4)) *
                 -0x7a143595;
        uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
        pFVar14 = pFVar17 + 8;
        if ((FNetworkGUID_u_0 *)pFVar17[9].ObjectId != (FNetworkGUID_u_0 *)0x0) {
          pFVar14 = (FNetworkGUID_u_0 *)pFVar17[9].ObjectId;
        }
        uVar11 = *(uint *)((longlong)pFVar14 +
                          ((longlong)(int)pFVar17[10].Value - 1U &
                          (longlong)(int)(uVar11 >> 0x10 ^ uVar11)) * 4);
        if (uVar11 != 0xffffffff) {
LAB_147a35cf0:
          lVar13 = (longlong)(int)uVar11 * 0x10;
          if (*(FObjectReplicator **)(pFVar17[1].ObjectId + lVar13) != this)
          goto code_r0x000147a35d01;
          if (((int)uVar11 < 0) || ((int)pFVar17[6].Value <= (int)uVar11)) {
LAB_147a35d7b:
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Elements.IsValidIndex(ElementIndex)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                ,0x2ab,
                                L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
            if (bVar10) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          else {
            if (((int)pFVar17[6].Value <= (int)uVar11) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5c6,L""), bVar10)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar14 = pFVar17 + 3;
            if ((FNetworkGUID_u_0 *)pFVar17[5].ObjectId != (FNetworkGUID_u_0 *)0x0) {
              pFVar14 = (FNetworkGUID_u_0 *)pFVar17[5].ObjectId;
            }
            uVar18 = uVar11;
            if ((int)uVar11 < 0) {
              uVar18 = uVar11 + 0x1f;
            }
            if ((*(uint *)((longlong)pFVar14 + (longlong)((int)uVar18 >> 5) * 4) >> (uVar11 & 0x1f)
                & 1) == 0) goto LAB_147a35d7b;
          }
          uVar3 = pFVar17[1].ObjectId;
          pFVar14 = pFVar17 + 8;
          if ((FNetworkGUID_u_0 *)pFVar17[9].ObjectId != (FNetworkGUID_u_0 *)0x0) {
            pFVar14 = (FNetworkGUID_u_0 *)pFVar17[9].ObjectId;
          }
          puVar22 = (uint *)((longlong)*(int *)(uVar3 + lVar13 + 0xc) * 4 + (longlong)pFVar14);
          while( true ) {
            uVar18 = *puVar22;
            if ((uVar18 == 0xffffffff) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("NextElementIndex != INDEX_NONE",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                    ,0x2b5,L"Corrupt hash"), bVar10)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            if (uVar18 == uVar11) break;
            puVar22 = (uint *)(pFVar17[1].ObjectId + 8 + (longlong)(int)uVar18 * 0x10);
          }
          *puVar22 = *(uint *)(uVar3 + lVar13 + 8);
          TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::RemoveAtUninitialized
                    ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)(pFVar17 + 1),uVar11,1);
          uVar18 = local_res20;
        }
      }
LAB_147a35e36:
      if (pFVar17[2].Value == *(uint *)((longlong)pFVar17 + 0x3c)) {
        pUVar5 = (this->Connection->Driver).field0_0x0.DebugPtr;
        if (*(int *)&(pUVar5->GuidToReplicatorMap).field_0x8 !=
            *(int *)&(pUVar5->GuidToReplicatorMap).field_0x34) {
          TSet<TTuple<FNetworkGUID,TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
          ::RemoveImpl<FNetworkGUID>
                    ((TSet<TTuple<FNetworkGUID,TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                      *)&pUVar5->GuidToReplicatorMap,
                     (int)(pFVar15->ObjectId >> 0x20) * 0x17 + (int)pFVar15->ObjectId,
                     (FNetworkGUID *)pFVar15);
        }
      }
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    }
    TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>::Remove
              (&((this->Connection->Driver).field0_0x0.DebugPtr)->UnmappedReplicators,this);
    TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>::Remove
              (&((this->Connection->Driver).field0_0x0.DebugPtr)->ReplicatorsWithPendingTransactions
               ,this);
    piVar1 = &((this->Connection->Driver).field0_0x0.DebugPtr)->TotalTrackedGuidMemoryBytes;
    *piVar1 = *piVar1 - this->TrackedGuidMemoryBytes;
    TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>::Remove
              (&((this->Connection->Driver).field0_0x0.DebugPtr)->AllOwnedReplicators,this);
  }
  pTVar2 = &this->ReferencedGuids;
  bVar10 = 1 < (this->ReferencedGuids).HashSize;
  if (!bVar10) {
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::UnhashElements(pTVar2);
  }
  iVar19 = *(int *)&(this->ReferencedGuids).Elements.field_0xc;
  *(undefined4 *)&(this->ReferencedGuids).Elements.field_0x8 = 0;
  if (iVar19 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)pTVar2,0,
               (int *)&(this->ReferencedGuids).Elements.field_0xc);
  }
  *(undefined4 *)&(this->ReferencedGuids).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReferencedGuids).Elements.field_0x34 = 0;
  iVar19 = *(int *)&(this->ReferencedGuids).Elements.field_0x2c;
  *(undefined4 *)&(this->ReferencedGuids).Elements.field_0x28 = 0;
  if ((iVar19 < 0) || (0x80 < iVar19)) {
    *(undefined4 *)&(this->ReferencedGuids).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ReferencedGuids).Elements.field_0x10,
               0);
  }
  if (bVar10) {
    (this->ReferencedGuids).HashSize = 1;
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Rehash(pTVar2);
  }
  this->TrackedGuidMemoryBytes = 0;
  this->ObjectPtr = (UObject *)0x0;
  local_80 = 0;
  FWeakObjectPtr::operator=(&(this->WeakObjectPtr).WeakPtr,(FObjectPtr)&local_80);
  pFVar8 = (this->RepState).Ptr;
  this->bOpenAckCalled = 0;
  this->bSentSubObjectCreation = 0;
  this->bHasReplicatedProperties = 0;
  (this->RepState).Ptr = (FRepState *)0x0;
  (this->ObjectClass).field0_0x0.DebugPtr = (UClass *)0x0;
  this->Connection = (UNetConnection *)0x0;
  this->RemoteFunctions = (FOutBunch *)0x0;
  TDefaultDelete<FRepState>::operator()((TDefaultDelete<FRepState> *)&this->RepState,pFVar8);
  pFVar8 = (this->CheckpointRepState).Ptr;
  (this->CheckpointRepState).Ptr = (FRepState *)0x0;
  TDefaultDelete<FRepState>::operator()
            ((TDefaultDelete<FRepState> *)&this->CheckpointRepState,pFVar8);
  return;
code_r0x000147a35d01:
  uVar11 = *(uint *)(pFVar17[1].ObjectId + lVar13 + 8);
  if (uVar11 == 0xffffffff) goto LAB_147a35e36;
  goto LAB_147a35cf0;
}

// CountBytes @ 147a3ab50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FObjectReplicator::CountBytes(FObjectReplicator *this,FArchive *param_1)

{
  int iVar1;
  FOutBunch *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  FString local_58;
  FScopeMarker local_48;
  
  ::FString::FString(&local_58,"FObjectReplicator::CountBytes");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::FScopeMarker(&local_48,param_1,&local_58);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_48);
  if ((this->RepState).Ptr != (FRepState *)0x0) {
    (**(code **)(*(longlong *)param_1 + 0x10))(param_1,0x10,0x10);
    FRepState::CountBytes((this->RepState).Ptr,param_1);
  }
  ::FString::FString(&local_58,"RepState");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_48,&local_58);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_48);
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::CountBytes
            (&this->ReferencedGuids,param_1);
  ::FString::FString(&local_58,"ReferencedGuids");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_48,&local_58);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_48);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)(this->RemoteFuncInfo).ArrayNum * 0x18,
             (longlong)(this->RemoteFuncInfo).ArrayMax * 0x18);
  pFVar2 = this->RemoteFunctions;
  if (pFVar2 != (FOutBunch *)0x0) {
    (**(code **)(pFVar2->_padding_ + 0x270))(pFVar2,param_1);
  }
  ::FString::FString(&local_58,"RemoveFuncInfo");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_48,&local_58);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_48);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)(this->PendingLocalRPCs).ArrayNum * 0x78,
             (longlong)(this->PendingLocalRPCs).ArrayMax * 0x78);
  iVar1 = (this->PendingLocalRPCs).ArrayNum;
  pFVar3 = (this->PendingLocalRPCs).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x78;
  while( true ) {
    if ((this->PendingLocalRPCs).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FObjectReplicator::FRPCPendingLocalCall_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)*(int *)(pFVar3 + 0x10),(longlong)*(int *)(pFVar3 + 0x14));
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)*(int *)(pFVar3 + 0x30) << 4,(longlong)*(int *)(pFVar3 + 0x34) << 4
              );
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(ulonglong)(*(int *)(pFVar3 + 0x50) + 0x1fU >> 5) << 2,
               (ulonglong)(*(int *)(pFVar3 + 0x54) + 0x1fU >> 5) << 2);
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)*(int *)(pFVar3 + 0x70) << 2,(longlong)*(int *)(pFVar3 + 0x70) << 2
              );
    pFVar3 = pFVar3 + 0x78;
  }
  ::FString::FString(&local_58,"PendingLocalRPCs");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_48,&local_58);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::~FScopeMarker(&local_48);
  return;
}

// ExecutePendingTransactionalRPCs @ 147a43750

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

void __thiscall FObjectReplicator::ExecutePendingTransactionalRPCs(FObjectReplicator *this)

{
  UNetDriver *pUVar1;
  UNetConnection *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 uVar7;
  FRPCPendingLocalCall *pFVar8;
  bool bVar9;
  char cVar10;
  bool bVar11;
  UClass *pUVar12;
  UObject *this_00;
  FClassNetCacheMgr *this_01;
  FFieldNetCache *this_02;
  FString *pFVar13;
  int *piVar14;
  undefined1 auStackY_248 [32];
  bool local_208 [3];
  undefined1 local_205;
  undefined1 local_204;
  undefined1 local_203 [3];
  int local_200;
  FClassNetCache *local_1f8;
  undefined8 local_1f0;
  FRPCPendingLocalCall *local_1e8;
  FRPCPendingLocalCall *local_1e0;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FReadAccessScope local_178;
  FReadAccessScope local_160;
  FNetBitReader local_148;
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_248;
  bVar6 = false;
  bVar9 = false;
  local_200 = 0;
  local_208[1] = false;
  `FObjectReplicator::ExecutePendingTransactionalRPCs'::__l2::<lambda_1>::operator()(local_208 + 1);
  if (this->Connection == (UNetConnection *)0x0) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<28206385967663685>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                       ,0xa45,"Connection");
    if (bVar9) {
code_r0x000147a4383b:
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    pUVar1 = (this->Connection->Driver).field0_0x0.DebugPtr;
    if (pUVar1 == (UNetDriver *)0x0) {
      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<28206385967663685>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                         ,0xa45,"Connection->Driver");
      if (bVar9) goto code_r0x000147a4383b;
    }
    else if ((pUVar1->NetCache).Object == (FClassNetCacheMgr *)0x0) {
      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<28206385967663685>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                         ,0xa45,"Connection->Driver->NetCache");
      if (bVar9) goto code_r0x000147a4383b;
    }
    else {
      cVar10 = (**(code **)(pUVar1->_padding_ + 0x3f8))();
      if (((cVar10 != '\0') ||
          (bVar11 = `FObjectReplicator::ExecutePendingTransactionalRPCs'::__l6::<lambda_2>::
                    operator()(local_208 + 2), bVar11)) &&
         (pUVar2 = this->Connection, (pUVar2->PackageMap).field0_0x0.DebugPtr != (UPackageMap *)0x0)
         ) {
        pUVar12 = Z_Construct_UClass_UPackageMapClient_NoRegister();
        bVar11 = FObjectPtr::IsA((FObjectPtr *)&pUVar2->PackageMap,pUVar12);
        if (((bVar11) && ((pUVar2->PackageMap).field0_0x0.DebugPtr != (UPackageMap *)0x0)) &&
           (this->OwningChannel != (UActorChannel *)0x0)) {
          this_00 = this->ObjectPtr;
          if (this_00 == (UObject *)0x0) {
            this_00 = FWeakObjectPtr::Get(&(this->WeakObjectPtr).WeakPtr);
          }
          this_01 = TSharedPtr<FClassNetCacheMgr,1>::operator->
                              (&((this->Connection->Driver).field0_0x0.DebugPtr)->NetCache);
          local_1f8 = FClassNetCacheMgr::GetClassNetCache
                                (this_01,(this->ObjectClass).field0_0x0.DebugPtr);
          local_1e0 = (FRPCPendingLocalCall *)
                      (this->PendingTransactionalRPCs).AllocatorInstance.Data;
          uVar5 = (this->PendingTransactionalRPCs).ArrayNum;
          (this->PendingTransactionalRPCs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (this->PendingTransactionalRPCs).ArrayNum = 0;
          (this->PendingTransactionalRPCs).ArrayMax = 0;
          local_1e8 = local_1e0 + (int)uVar5;
          local_200 = uVar5;
          for (piVar14 = (int *)&(local_1e0->UnmappedGuids).Elements.field_0x8;
              (FRPCPendingLocalCall *)(piVar14 + -0xc) != local_1e8; piVar14 = piVar14 + 0x1e) {
            if (*piVar14 != piVar14[0xb]) {
              `FObjectReplicator::ExecutePendingTransactionalRPCs'::__l15::<lambda_3>::operator()
                        (&local_205);
            }
            this_02 = FClassNetCache::GetFromIndex
                                (local_1f8,((FRPCPendingLocalCall *)(piVar14 + -0xc))->RPCFieldIndex
                                );
            if (this_02 == (FFieldNetCache *)0x0) {
              if (2 < (byte)LogNet._0_1_) {
                UObjectBaseUtility::GetFullName
                          ((UObjectBaseUtility *)this_00,&local_1c8,(UObject *)0x0,None);
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
                if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
                }
              }
              bVar9 = true;
              pFVar13 = ::FString::FString(&local_1b8,L"Unknown");
LAB_147a43b88:
              pFVar3 = (pFVar13->Data).AllocatorInstance.Data;
              (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              (pFVar13->Data).ArrayNum = 0;
              (pFVar13->Data).ArrayMax = 0;
              if ((bVar9) &&
                 (bVar9 = false,
                 local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
              }
              if ((bVar6) &&
                 (bVar6 = false,
                 local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
              }
              if (this->Connection->bInternalAck == 0) {
                if (1 < (byte)LogNet._0_1_) {
                  UObjectBaseUtility::GetFullName
                            ((UObjectBaseUtility *)this_00,&local_188,(UObject *)0x0,None);
                  UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
                  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_188.Data.AllocatorInstance.Data);
                  }
                }
                UNetConnection::Close(this->Connection);
                if (pFVar3 != (FScriptContainerElement *)0x0) {
                  FMemory::Free(pFVar3);
                }
                break;
              }
              if (2 < (byte)LogNet._0_1_) {
                UObjectBaseUtility::GetFullName
                          ((UObjectBaseUtility *)this_00,&local_198,(UObject *)0x0,None);
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
                if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_198.Data.AllocatorInstance.Data);
                }
              }
              if (pFVar3 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar3);
              }
            }
            else {
              FFieldVariant::GetFName(&this_02->Field);
              uVar7 = local_1f0;
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                         &UE::RemoteExecutor::OnRegionBeginDelegate,&local_178);
              if ((UE::RemoteExecutor::OnRegionBeginDelegate._16_4_ != 0) &&
                 (UE::RemoteExecutor::OnRegionBeginDelegate._8_8_ != 0)) {
                (**(code **)(*(longlong *)UE::RemoteExecutor::OnRegionBeginDelegate._8_8_ + 0x68))
                          (UE::RemoteExecutor::OnRegionBeginDelegate._8_8_,uVar7);
              }
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
              ~FReadAccessScope(&local_178);
              FNetBitReader::FNetBitReader
                        (&local_148,(this->Connection->PackageMap).field0_0x0.DebugPtr,
                         *(uchar **)(piVar14 + -10),*(long64 *)(piVar14 + -6));
              UNetConnection::SetNetVersionsOnArchive(this->Connection,(FArchive *)&local_148);
              local_88.Elements._44_4_ = 0x80;
              local_88.Elements._0_8_ = 0;
              local_88.Elements._8_8_ = 0;
              local_88.Elements._32_8_ = 0;
              local_88.Elements._40_4_ = 0;
              local_88.Elements._52_4_ = 0;
              local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
              local_88.HashSize = 0;
              local_208[0] = false;
              local_88.Elements._48_4_ = 0xffffffff;
              bVar11 = ReceivedRPC(this,&local_148,&local_88,local_208,
                                   (FReplicationFlags *)(piVar14 + -0xb),this_02,NeverSkip);
              if (local_88.Elements._8_4_ != local_88.Elements._52_4_) {
                `FObjectReplicator::ExecutePendingTransactionalRPCs'::__l38::<lambda_5>::operator()
                          (&local_204);
              }
              if (local_208[0] != false) {
                `FObjectReplicator::ExecutePendingTransactionalRPCs'::__l38::<lambda_6>::operator()
                          (local_203);
              }
              ::FString::FString(&local_1d8,L"");
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                         &UE::RemoteExecutor::OnRegionEndDelegate,&local_160);
              if ((UE::RemoteExecutor::OnRegionEndDelegate._16_4_ != 0) &&
                 (UE::RemoteExecutor::OnRegionEndDelegate._8_8_ != 0)) {
                (**(code **)(*(longlong *)UE::RemoteExecutor::OnRegionEndDelegate._8_8_ + 0x68))
                          (UE::RemoteExecutor::OnRegionEndDelegate._8_8_,&local_1d8);
              }
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
              ~FReadAccessScope(&local_160);
              if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
              }
              local_88.HashSize = 0;
              if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FMemory::Free((void *)local_88.Hash.SecondaryData);
              }
              TSparseArray<TSparseSetElement<FNetworkGUID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<FNetworkGUID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        (&local_88.Elements);
              FNetBitReader::~FNetBitReader(&local_148);
              if (!bVar11) {
                bVar6 = true;
                pFVar13 = FFieldVariant::GetName(&this_02->Field,&local_1a8);
                goto LAB_147a43b88;
              }
            }
          }
          pFVar8 = local_1e0;
          DestructItems<FObjectReplicator::FRPCPendingLocalCall,int>(local_1e0,local_200);
          if (pFVar8 != (FRPCPendingLocalCall *)0x0) {
            FMemory::Free(pFVar8);
          }
        }
      }
    }
  }
  return;
}

// ForceRefreshUnreliableProperties @ 147a49c40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FObjectReplicator::ForceRefreshUnreliableProperties(FObjectReplicator *this)

{
  FSendingRepState *pFVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  
  if ((this->ObjectPtr == (UObject *)0x0) &&
     (pUVar4 = FWeakObjectPtr::Get(&(this->WeakObjectPtr).WeakPtr), pUVar4 == (UObject *)0x0)) {
    if ((byte)LogRep._0_1_ < 6) {
      return;
    }
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
    return;
  }
  if ((this->bOpenAckCalled != 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bOpenAckCalled",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                         ,0x851,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (((this->RepState).Ptr)->SendingRepState).Ptr;
  if (pFVar1 != (FSendingRepState *)0x0) {
    pFVar1->bOpenAckedCalled = true;
  }
  this->bOpenAckCalled = 1;
  return;
}

// InitRecentProperties @ 147a5cd20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FObjectReplicator::InitRecentProperties(FObjectReplicator *this,uchar *param_1)

{
  TUniquePtr<FRepState,TDefaultDelete<FRepState>_> *pTVar1;
  UNetDriver *this_00;
  FRepLayout *this_01;
  FRepState *pFVar2;
  FReceivingRepState *this_02;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  FSendingRepState *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  INetDeltaBaseState *pIVar7;
  code *pcVar8;
  bool bVar9;
  char cVar10;
  bool bVar11;
  byte bVar12;
  ushort uVar13;
  UObject *pUVar14;
  TSharedPtr<FRepChangedPropertyTracker,1> *pTVar15;
  TUniquePtr<FRepState,TDefaultDelete<FRepState>_> TVar16;
  TSharedPtr<INetDeltaBaseState,1> *pTVar17;
  longlong lVar18;
  ushort uVar19;
  undefined1 auStackY_298 [32];
  FRepState *local_260;
  UObject *local_258;
  FRepChangedPropertyTracker *local_250;
  TReferenceControllerBase<1> *local_248;
  UNetDriver *local_240;
  TSharedPtr<INetDeltaBaseState,1> local_238;
  TSharedPtr<INetDeltaBaseState,1> local_228;
  TSharedPtr<FRepChangedPropertyTracker,1> local_218;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  TReferenceControllerBase<1> *pTStack_1f0;
  undefined8 local_1e8;
  TReferenceControllerBase<1> *pTStack_1e0;
  FNetTokenExportScope local_1d8;
  FNetBitWriter local_1a8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_ac;
  byte local_ab;
  undefined1 local_aa;
  void *local_a8;
  undefined8 local_a0;
  void *local_98;
  undefined8 local_90;
  TArray<UE::Net::FNetToken,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> local_88;
  void *local_68;
  undefined8 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_298;
  pUVar14 = this->ObjectPtr;
  local_258 = (UObject *)param_1;
  if (((pUVar14 == (UObject *)0x0) &&
      (pUVar14 = FWeakObjectPtr::Get(&(this->WeakObjectPtr).WeakPtr), pUVar14 == (UObject *)0x0)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("MyObject",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                         ,0x18d,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((this->Connection == (UNetConnection *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Connection",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                         ,0x18e,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar1 = &this->RepState;
  if (((this->RepState).Ptr != (FRepState *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!RepState.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                         ,399,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  this_00 = (this->Connection->Driver).field0_0x0.DebugPtr;
  local_240 = this_00;
  cVar10 = (**(code **)(this_00->_padding_ + 0x3f8))(this_00);
  if ((cVar10 == '\0') && (this_00->bMaySendProperties == '\0')) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if (((this->RepLayout).Object == (FRepLayout *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  this_01 = (this->RepLayout).Object;
  if (bVar9) {
    pTVar15 = UNetDriver::FindOrCreateRepChangedPropertyTracker(this_00,&local_218,pUVar14);
    local_250 = pTVar15->Object;
    local_248 = (pTVar15->SharedReferenceCount).ReferenceController;
    (pTVar15->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar15->Object = (FRepChangedPropertyTracker *)0x0;
  }
  else {
    local_218.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_200 = 0;
    local_250 = (FRepChangedPropertyTracker *)0x0;
    local_248 = (TReferenceControllerBase<1> *)0x0;
    local_208 = 0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_218.SharedReferenceCount.ReferenceController);
  TVar16 = FRepLayout::CreateRepState
                     (this_01,(TRepDataBufferBase<0,unsigned_char_const_>)&local_260,
                      (TSharedPtr<FRepChangedPropertyTracker,1> *)local_258,
                      (ECreateRepStateFlags)&local_250);
  if ((FRepState *)pTVar1 != TVar16.Ptr) {
    pFVar2 = pTVar1->Ptr;
    pTVar1->Ptr = (FRepState *)((TVar16.Ptr)->ReceivingRepState).Ptr;
    ((TVar16.Ptr)->ReceivingRepState).Ptr = (FReceivingRepState *)0x0;
    if (pFVar2 != (FRepState *)0x0) {
      TDefaultDelete<FSendingRepState>::operator()
                ((TDefaultDelete<FSendingRepState> *)&pFVar2->SendingRepState,
                 (pFVar2->SendingRepState).Ptr);
      this_02 = (pFVar2->ReceivingRepState).Ptr;
      if (this_02 != (FReceivingRepState *)0x0) {
        *(undefined4 *)&(this_02->RepNotifyMetaData).field_0x48 = 0;
        pvVar3 = *(void **)&(this_02->RepNotifyMetaData).field_0x40;
        if (pvVar3 != (void *)0x0) {
          FMemory::Free(pvVar3);
        }
        TSparseArray<TSparseSetElement<TTuple<FProperty_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FProperty_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FProperty_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)&this_02->RepNotifyMetaData);
        pFVar4 = (this_02->RepNotifies).AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        *(undefined4 *)&(this_02->GuidReferencesMap).field_0x48 = 0;
        pvVar3 = *(void **)&(this_02->GuidReferencesMap).field_0x40;
        if (pvVar3 != (void *)0x0) {
          FMemory::Free(pvVar3);
        }
        TSparseArray<TSparseSetElement<TTuple<int,FGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<int,FGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<int,FGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)&this_02->GuidReferencesMap);
        FRepStateStaticBuffer::~FRepStateStaticBuffer(&this_02->StaticBuffer);
        ::operator_delete(this_02,0xd0);
      }
      ::operator_delete(pFVar2,0x10);
    }
  }
  TDefaultDelete<FRepState>::operator()((TDefaultDelete<FRepState> *)&local_260,local_260);
  if (bVar9) {
    pFVar2 = pTVar1->Ptr;
    this->bSupportsFastArrayDelta = -(uint)(GSupportsFastArrayDelta != 0) >> 5;
    pFVar5 = (pFVar2->SendingRepState).Ptr;
    if (pFVar5 != (FSendingRepState *)0x0) {
      uVar13 = FRepLayout::GetNumLifetimeCustomDeltaProperties(this_01);
      TArray<TSharedPtr<INetDeltaBaseState,1>,TSizedDefaultAllocator<32>_>::SetNum
                (&pFVar5->RecentCustomDeltaState,(uint)uVar13,Default);
      bVar12 = this->Connection->bInternalAck;
      if (bVar12 != 0) {
        TArray<TSharedPtr<INetDeltaBaseState,1>,TSizedDefaultAllocator<32>_>::SetNum
                  (&pFVar5->CDOCustomDeltaState,(uint)uVar13,Default);
        TArray<TSharedPtr<INetDeltaBaseState,1>,TSizedDefaultAllocator<32>_>::SetNum
                  (&pFVar5->CheckpointCustomDeltaState,(uint)uVar13,Default);
      }
      uVar19 = 0;
      if (uVar13 != 0) {
        lVar18 = 0;
        do {
          FNetBitWriter::FNetBitWriter
                    (&local_1a8,(this->Connection->PackageMap).field0_0x0.DebugPtr,0x400);
          local_ab = local_ab & 0xf0;
          local_1a8._padding_ = (longlong)&___7FOutBunch__6B_;
          local_c8 = 0;
          local_c0 = 0;
          local_d8 = 0;
          uStack_d0 = 0;
          local_b8 = 0;
          local_b0 = 0;
          local_ac = 0;
          local_aa = 0;
          local_a8 = (void *)0x0;
          local_a0 = 0;
          local_98 = (void *)0x0;
          local_90 = 0;
          local_88.AllocatorInstance.SecondaryData = (ForElementType<UE::Net::FNetToken>)0x0;
          local_88.ArrayNum = 0;
          local_88.ArrayMax = 4;
          local_68 = (void *)0x0;
          local_60 = 0;
          UE::Net::FNetTokenExportScope::FNetTokenExportScope
                    (&local_1d8,&local_1a8,(local_240->NetTokenStore).Ptr,&local_88,
                     "SendPropertiesForRPC");
          if (((pFVar5->RecentCustomDeltaState).ArrayNum <= (int)(uint)uVar19) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pTVar17 = (TSharedPtr<INetDeltaBaseState,1> *)
                    ((pFVar5->RecentCustomDeltaState).AllocatorInstance.Data + lVar18);
          local_238.Object = (INetDeltaBaseState *)0x0;
          local_238.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          if (pTVar17 != &local_238) {
            pTVar17->Object = (INetDeltaBaseState *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&pTVar17->SharedReferenceCount,&local_238.SharedReferenceCount);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_238.SharedReferenceCount.ReferenceController);
          local_228.Object = (INetDeltaBaseState *)0x0;
          local_228.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          SendCustomDeltaProperty(this,local_258,uVar19,&local_1a8,pTVar17,&local_228);
          if (bVar12 != 0) {
            if (((pFVar5->CDOCustomDeltaState).ArrayNum <= (int)(uint)uVar19) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pTVar6 = (pTVar17->SharedReferenceCount).ReferenceController;
            pFVar4 = (pFVar5->CDOCustomDeltaState).AllocatorInstance.Data;
            pIVar7 = pTVar17->Object;
            if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_1f8 = *(undefined8 *)(pFVar4 + lVar18);
            pTStack_1f0 = *(TReferenceControllerBase<1> **)(pFVar4 + lVar18 + 8);
            *(INetDeltaBaseState **)(pFVar4 + lVar18) = pIVar7;
            *(TReferenceControllerBase<1> **)(pFVar4 + lVar18 + 8) = pTVar6;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_1f0);
            if (((pFVar5->CheckpointCustomDeltaState).ArrayNum <= (int)(uint)uVar19) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pTVar6 = (pTVar17->SharedReferenceCount).ReferenceController;
            pFVar4 = (pFVar5->CheckpointCustomDeltaState).AllocatorInstance.Data;
            pIVar7 = pTVar17->Object;
            if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_1e8 = *(undefined8 *)(pFVar4 + lVar18);
            pTStack_1e0 = *(TReferenceControllerBase<1> **)(pFVar4 + lVar18 + 8);
            *(INetDeltaBaseState **)(pFVar4 + lVar18) = pIVar7;
            *(TReferenceControllerBase<1> **)(pFVar4 + lVar18 + 8) = pTVar6;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_1e0);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_228.SharedReferenceCount.ReferenceController);
          UE::Net::FNetTokenExportScope::~FNetTokenExportScope(&local_1d8);
          local_1a8._padding_ = (longlong)&___7FOutBunch__6B_;
          FNetTrace::DestroyTraceCollector(local_1a8.TraceCollector.Ptr);
          if (local_68 != (void *)0x0) {
            FMemory::Free(local_68);
          }
          if (local_88.AllocatorInstance.SecondaryData != (ForElementType<UE::Net::FNetToken>)0x0) {
            FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
          }
          if (local_98 != (void *)0x0) {
            FMemory::Free(local_98);
          }
          if (local_a8 != (void *)0x0) {
            FMemory::Free(local_a8);
          }
          FBitWriter::~FBitWriter((FBitWriter *)&local_1a8);
          uVar19 = uVar19 + 1;
          lVar18 = lVar18 + 0x10;
        } while (uVar19 < uVar13);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_248);
  return;
}

// InitWithObject @ 147a5d3a0

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
FObjectReplicator::InitWithObject
          (FObjectReplicator *this,UObject *param_1,UNetConnection *param_2,bool param_3)

{
  TSharedPtr<FRepLayout,1> *this_00;
  undefined1 *puVar1;
  UClass *pUVar2;
  FRepState *pFVar3;
  FSendingRepState *pFVar4;
  code *pcVar5;
  bool bVar6;
  UObject *pUVar7;
  TSharedPtr<FRepLayout,1> *pTVar8;
  FRepLayout *pFVar9;
  uint uVar10;
  FLLMScope local_res8 [2];
  FLLMScope local_res10 [2];
  UNetConnection *local_res18;
  FString local_b8;
  FString local_a8;
  FString local_98;
  undefined1 local_88 [4];
  FName local_84;
  UObject *local_78;
  FName local_70;
  FName local_68;
  FObjectReplicator *local_60;
  FMemScope local_58;
  FMemScope local_50;
  TSharedPtr<FRepLayout,1> local_48;
  uint uVar11;
  
  local_res18 = param_2;
  FLLMScope::FLLMScope
            (local_res10,LLMTagDeclaration_NetObjReplicator.UniqueName,false,None,Default,true);
  local_84 = LLMTagDeclaration_NetObjReplicator.UniqueName;
  FMemScope::FMemScope(&local_50,&local_84,true);
  if (((this->ObjectPtr != (UObject *)0x0) ||
      (pUVar7 = FWeakObjectPtr::Get(&(this->WeakObjectPtr).WeakPtr), pUVar7 != (UObject *)0x0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetObject() == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                         ,0x208,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((this->ObjectClass).field0_0x0.DebugPtr != (UClass *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ObjectClass == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                         ,0x209,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((this->bLastUpdateEmpty != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("bLastUpdateEmpty == false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                         ,0x20a,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((this->Connection != (UNetConnection *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Connection == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                         ,0x20b,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((this->OwningChannel != (UActorChannel *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("OwningChannel == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                         ,0x20c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((this->RepState).Ptr != (FRepState *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!RepState.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                         ,0x20d,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((this->RemoteFunctions != (FOutBunch *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("RemoteFunctions == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                         ,0x20e,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this_00 = &this->RepLayout;
  if (((this->RepLayout).Object != (FRepLayout *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!RepLayout.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                         ,0x20f,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this->ObjectPtr = param_1;
  local_78 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=(&(this->WeakObjectPtr).WeakPtr,(FObjectPtr)&local_78);
  bVar6 = FWeakObjectPtr::IsValid(&(this->WeakObjectPtr).WeakPtr);
  if (!bVar6) {
    if (1 < (byte)LogRep._0_1_) {
      if (param_1 == (UObject *)0x0) {
        ::FString::FString(&local_b8,L"None");
      }
      else {
        local_70.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
        local_70.Number = *(uint *)&param_1->field_0x1c;
        ::FName::ToString(&local_70,&local_b8);
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
    }
    goto LAB_147a5d8a7;
  }
  pUVar2 = *(UClass **)&param_1->field_0x10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->ObjectClass).field0_0x0.DebugPtr = pUVar2;
  uVar10 = 0;
  uVar11 = 0;
  this->bOpenAckCalled = 0;
  this->bHasReplicatedProperties = 0;
  this->Connection = local_res18;
  pFVar3 = (this->RepState).Ptr;
  (this->RepState).Ptr = (FRepState *)0x0;
  this->RemoteFunctions = (FOutBunch *)0x0;
  TDefaultDelete<FRepState>::operator()((TDefaultDelete<FRepState> *)&this->RepState,pFVar3);
  pUVar2 = (this->ObjectClass).field0_0x0.DebugPtr;
  this->OwningChannel = (UActorChannel *)0x0;
  this->TrackedGuidMemoryBytes = 0;
  pTVar8 = UNetDriver::GetObjectClassRepLayout
                     ((this->Connection->Driver).field0_0x0.DebugPtr,&local_48,pUVar2);
  if (this_00 != pTVar8) {
    this_00->Object = pTVar8->Object;
    pTVar8->Object = (FRepLayout *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->RepLayout).SharedReferenceCount,&pTVar8->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  pUVar7 = param_1;
  if (param_3) {
    pUVar7 = UObject::GetArchetype(param_1);
  }
  if ((pUVar7 == (UObject *)0x0) && (param_3)) {
    if ((this->ObjectClass).field0_0x0.DebugPtr == (UClass *)0x0) {
      pUVar7 = param_1;
      if (1 < (byte)LogRep._0_1_) {
        if (*(longlong *)&param_1->field_0x10 == 0) {
          ::FString::FString(&local_98,L"None");
        }
        else {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)param_1,&local_98,(UObject *)0x0,None);
        }
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      if (1 < (byte)LogRep._0_1_) {
        if (*(longlong *)&param_1->field_0x10 == 0) {
          ::FString::FString(&local_a8,L"None");
        }
        else {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)param_1,&local_a8,(UObject *)0x0,None);
        }
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
      }
      pUVar2 = (this->ObjectClass).field0_0x0.DebugPtr;
      if ((pUVar2->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar2);
      }
      pUVar7 = (pUVar2->ClassDefaultObject).field0_0x0.DebugPtr;
    }
  }
  InitRecentProperties(this,(uchar *)pUVar7);
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_NetDriver.UniqueName,false,None,Default,true);
  local_68 = LLMTagDeclaration_NetDriver.UniqueName;
  FMemScope::FMemScope(&local_58,&local_68,true);
  local_60 = this;
  TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>::
  Emplace<FObjectReplicator_*>
            (&((this->Connection->Driver).field0_0x0.DebugPtr)->AllOwnedReplicators,
             (FObjectReplicator **)local_88,(bool *)&local_60);
  FMemScope::~FMemScope(&local_58);
  FLLMScope::~FLLMScope(local_res8);
  if (GbPushModelSkipUndirtiedFastArrays == false) {
    if ((GbPushModelSkipUndirtiedReplicators != false) &&
       ((((pFVar9 = TSharedPtr<FRepLayout,1>::operator->(this_00), uVar10 = uVar11,
          (pFVar9->Flags & NoReplicatedProperties) != None || ((pFVar9->Parents).ArrayNum == 0)) ||
         (pFVar9 = TSharedPtr<FRepLayout,1>::operator->(this_00),
         (pFVar9->Flags & FullPushProperties) != None)) &&
        ((pFVar4 = (((this->RepState).Ptr)->SendingRepState).Ptr, pFVar4 != (FSendingRepState *)0x0
         && ((pFVar4->RecentCustomDeltaState).ArrayNum == 0)))))) goto LAB_147a5d899;
  }
  else if ((GbPushModelSkipUndirtiedReplicators != false) &&
          (((pFVar9 = TSharedPtr<FRepLayout,1>::operator->(this_00),
            (pFVar9->Flags & NoReplicatedProperties) != None || ((pFVar9->Parents).ArrayNum == 0))
           || (pFVar9 = TSharedPtr<FRepLayout,1>::operator->(this_00),
              (pFVar9->Flags & FullPushSupport) != None)))) {
LAB_147a5d899:
    uVar10 = 0x40;
  }
  this->bCanUseNonDirtyOptimization = 0;
  *(uint *)&this->field_0xc = *(uint *)&this->field_0xc | uVar10;
LAB_147a5d8a7:
  FMemScope::~FMemScope(&local_50);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// MoveMappedObjectToUnmapped @ 147a65da0

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
FObjectReplicator::MoveMappedObjectToUnmapped(FObjectReplicator *this,FNetworkGUID *param_1)

{
  FRepLayout *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FNetDeltaSerializeInfo local_f8;
  INetSerializeCB local_58;
  TObjectPtr<UNetDriver>_u_0 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined1 local_28;
  undefined8 local_20;
  TReferenceControllerBase<1> *local_18;
  
  if ((this->RepLayout).Object == (FRepLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("RepLayout",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                       ,0x61a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if ((this->RepLayout).Object == (FRepLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_f8.Connection = this->Connection;
  this_00 = (this->RepLayout).Object;
  local_50 = ((local_f8.Connection)->Driver).field0_0x0;
  local_f8.CustomDeltaIndex = 0xffff;
  local_58 = (INetSerializeCB)&___7FNetSerializeCB__6B_;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_28 = 0;
  local_20 = 0;
  local_18 = (TReferenceControllerBase<1> *)0x0;
  local_f8.Writer = (FBitWriter *)0x0;
  local_f8.Reader = (FBitReader *)0x0;
  local_f8.NewState = (TSharedPtr<INetDeltaBaseState,1> *)0x0;
  local_f8.OldState = (INetDeltaBaseState *)0x0;
  local_f8.Data = (void *)0x0;
  local_f8.Struct = (UStruct *)0x0;
  local_f8.bUpdateUnmappedObjects = false;
  local_f8.bOutSomeObjectsWereMapped = false;
  local_f8.bCalledPreNetReceive = false;
  local_f8.bOutHasMoreUnmapped = false;
  local_f8.bGuidListsChanged = false;
  local_f8.bIsWritingOnClient = false;
  local_f8.bIsInitializingBaseFromDefault = false;
  local_f8.bSupportsFastArrayDeltaStructSerialization = false;
  local_f8.CustomDeltaObject = (UObject *)0x0;
  local_f8.GatherGuidReferences =
       (TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *)0x0;
  local_f8.TrackedGuidMemoryBytes = (int *)0x0;
  local_f8.DebugName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.DebugName.Data.ArrayNum = 0;
  local_f8.DebugName.Data.ArrayMax = 0;
  local_f8.bInternalAck = (local_f8.Connection)->bInternalAck;
  local_f8.Map = *(UPackageMap **)&((local_f8.Connection)->PackageMap).field0_0x0;
  local_f8.Object = this->ObjectPtr;
  if (local_f8.Object == (UObject *)0x0) {
    local_f8.Object = FWeakObjectPtr::Get(&(this->WeakObjectPtr).WeakPtr);
  }
  local_f8.NetSerializeCB = &local_58;
  local_f8.MoveGuidToUnmapped = param_1;
  bVar2 = FRepLayout::MoveMappedObjectToUnmapped
                    (this_00,(((this->RepState).Ptr)->ReceivingRepState).Ptr,&local_f8,param_1);
  if (local_f8.DebugName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.DebugName.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return bVar2;
}

// PostReceivedBunch @ 147a66c20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FObjectReplicator::PostReceivedBunch(FObjectReplicator *this)

{
  UObject *pUVar1;
  
  if ((this->ObjectPtr == (UObject *)0x0) &&
     (pUVar1 = FWeakObjectPtr::Get(&(this->WeakObjectPtr).WeakPtr), pUVar1 == (UObject *)0x0)) {
    if ((byte)LogNet._0_1_ < 6) {
      return;
    }
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    return;
  }
  if ((*(longlong *)(*(longlong *)(this->OwningChannel->_padding_ + 0x58) + 0x100) != 0) &&
     (this->bHasReplicatedProperties != 0)) {
    pUVar1 = this->ObjectPtr;
    if ((pUVar1 != (UObject *)0x0) ||
       (pUVar1 = FWeakObjectPtr::Get(&(this->WeakObjectPtr).WeakPtr), pUVar1 != (UObject *)0x0)) {
      (**(code **)(*(longlong *)pUVar1 + 0x228))();
    }
    this->bHasReplicatedProperties = 0;
  }
  CallRepNotifies(this,true);
  return;
}

// PostSendBunch @ 147a66cd0

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
FObjectReplicator::PostSendBunch(FObjectReplicator *this,FPacketIdRange *param_1,uchar param_2)

{
  int *piVar1;
  TArray<FRepChangedHistory,TSizedDefaultAllocator<32>_> *pTVar2;
  FPropertyRetirement *pFVar3;
  FRepState *pFVar4;
  FSendingRepState *pFVar5;
  FRepChangedHistory *pFVar6;
  FPropertyRetirement *pFVar7;
  code *pcVar8;
  FPropertyRetirement *pFVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  FRepChangedHistory *pFVar14;
  FPropertyRetirement *pFVar15;
  uint uVar16;
  FPropertyRetirement *pFVar17;
  undefined1 local_res8 [8];
  FLLMScope local_res20 [2];
  UObject *local_50;
  FName local_48;
  FMemScope local_40;
  
  FLLMScope::FLLMScope
            (local_res20,LLMTagDeclaration_NetObjReplicator.UniqueName,false,None,Default,true);
  local_48 = LLMTagDeclaration_NetObjReplicator.UniqueName;
  FMemScope::FMemScope(&local_40,&local_48,true);
  local_50 = this->ObjectPtr;
  if ((local_50 == (UObject *)0x0) &&
     (local_50 = FWeakObjectPtr::Get(&(this->WeakObjectPtr).WeakPtr), local_50 == (UObject *)0x0)) {
    if (5 < (byte)LogNet._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    }
  }
  else {
    if (((this->RepLayout).Object == (FRepLayout *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("RepLayout",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                            ,0x867,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (((this->OwningChannel->_padding_ & 0x200) == 0) &&
       ((param_1->First != -1 || (param_1->Last != -1)))) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (((this->RepLayout).Object == (FRepLayout *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar4 = (this->RepState).Ptr;
    if ((pFVar4 != (FRepState *)0x0) &&
       (pFVar5 = (pFVar4->SendingRepState).Ptr, pFVar5 != (FSendingRepState *)0x0)) {
      iVar13 = pFVar5->HistoryEnd;
      uVar16 = pFVar5->HistoryStart;
      if (bVar10) {
        if ((int)uVar16 < iVar13) {
          uVar16 = iVar13 - 1U & 0x8000001f;
          if ((int)uVar16 < 0) {
            uVar16 = (uVar16 - 1 | 0xffffffe0) + 1;
          }
          if (pFVar5->ChangeHistory[(int)uVar16].OutPacketIdRange.First == -1) {
            pFVar5->ChangeHistory[(int)uVar16].OutPacketIdRange.First = -1;
            pFVar5->ChangeHistory[(int)uVar16].OutPacketIdRange.Last = -1;
            piVar1 = &pFVar5->ChangeHistory[(int)uVar16].Changed.ArrayMax;
            pFVar5->ChangeHistory[(int)uVar16].Changed.ArrayNum = 0;
            if (*piVar1 != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,0,&pFVar5->ChangeHistory[(int)uVar16].Changed.AllocatorInstance,0,
                         piVar1);
            }
            pFVar5->ChangeHistory[(int)uVar16].Resend = false;
            pFVar5->HistoryEnd = pFVar5->HistoryEnd + -1;
          }
        }
      }
      else if ((int)uVar16 < iVar13) {
        do {
          uVar12 = uVar16 & 0x8000001f;
          if ((int)uVar12 < 0) {
            uVar12 = (uVar12 - 1 | 0xffffffe0) + 1;
          }
          pFVar14 = pFVar5->ChangeHistory + (int)uVar12;
          if ((pFVar14->OutPacketIdRange).First == -1) {
            if (((pFVar14->Changed).ArrayNum < 1) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("HistoryItem.Changed.Num() > 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                                    ,0x87e,L""), bVar11)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if ((pFVar14->Resend != false) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!HistoryItem.Resend",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                                    ,0x87f,L""), bVar11)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar14->OutPacketIdRange = *param_1;
            if ((param_2 == '\0') && (pFVar5->bOpenAckedCalled == false)) {
              pTVar2 = &pFVar5->PreOpenAckHistory;
              pFVar6 = (FRepChangedHistory *)(pTVar2->AllocatorInstance).Data;
              if ((pFVar6 <= pFVar14) &&
                 ((pFVar14 < pFVar6 + (pFVar5->PreOpenAckHistory).ArrayMax &&
                  (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar11)))) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              iVar13 = (pFVar5->PreOpenAckHistory).ArrayNum;
              piVar1 = &(pFVar5->PreOpenAckHistory).ArrayMax;
              if (iVar13 == *piVar1) {
                iVar13 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x820,&pTVar2->AllocatorInstance,piVar1);
              }
              (pFVar5->PreOpenAckHistory).ArrayNum = iVar13 + 1;
              FRepChangedHistory::FRepChangedHistory
                        ((FRepChangedHistory *)
                         ((pTVar2->AllocatorInstance).Data + (longlong)iVar13 * 0x20),pFVar14);
            }
          }
          uVar16 = uVar16 + 1;
        } while ((int)uVar16 < pFVar5->HistoryEnd);
      }
      iVar13 = (pFVar5->Retirement).ArrayNum;
      pFVar17 = (FPropertyRetirement *)(pFVar5->Retirement).AllocatorInstance.Data;
      pFVar3 = pFVar17 + iVar13;
      while( true ) {
        if ((pFVar5->Retirement).ArrayNum != iVar13) {
          `TCheckedPointerIterator<FPropertyRetirement,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (pFVar17 == pFVar3) break;
        pFVar7 = pFVar17->Next;
        pFVar9 = pFVar17;
        while (pFVar7 != (FPropertyRetirement *)0x0) {
          pFVar15 = pFVar7;
          if ((pFVar7->OutPacketIdRange).First == -1) {
            if (bVar10) {
              pFVar9->Next = pFVar7->Next;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((pFVar7->DynamicState).SharedReferenceCount.ReferenceController);
              ::operator_delete(pFVar7,0x28);
              pFVar15 = pFVar9;
            }
            else {
              pFVar7->OutPacketIdRange = *param_1;
              pFVar17->OutPacketIdRange = *param_1;
            }
          }
          pFVar9 = pFVar15;
          pFVar7 = pFVar15->Next;
        }
        ValidateRetirementHistory(pFVar17,local_50);
        pFVar17 = pFVar17 + 1;
      }
    }
  }
  FMemScope::~FMemScope(&local_40);
  FLLMScope::~FLLMScope(local_res20);
  return;
}

// PreNetReceive @ 147a67140

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FObjectReplicator::PreNetReceive(FObjectReplicator *this)

{
  UObject *pUVar1;
  
  pUVar1 = this->ObjectPtr;
  if (pUVar1 == (UObject *)0x0) {
    pUVar1 = FWeakObjectPtr::Get(&(this->WeakObjectPtr).WeakPtr);
    if (pUVar1 == (UObject *)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000147a6716b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)pUVar1 + 0x220))();
  return;
}

// QueuePropertyRepNotify @ 147a6b230

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
FObjectReplicator::QueuePropertyRepNotify
          (FObjectReplicator *this,UObject *param_1,FProperty *param_2,int param_3,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_4)

{
  FRepState *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FScriptContainerElement FVar4;
  FProperty *pFVar5;
  bool bVar6;
  int iVar7;
  UFunction *pUVar8;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar9;
  int *piVar10;
  uint uVar11;
  FReceivingRepState *pFVar12;
  UObject *local_res10;
  FProperty *local_res18 [2];
  FScriptContainerElement local_58 [4];
  FLLMScope local_54;
  FName local_50;
  FMemScope local_48;
  FString local_40;
  UObject **local_30;
  FProperty **local_28;
  
  FVar4 = SUB41(param_3,0);
  local_res10 = param_1;
  local_res18[0] = param_2;
  FLLMScope::FLLMScope
            (&local_54,LLMTagDeclaration_NetObjReplicator.UniqueName,false,None,Default,true);
  local_50 = LLMTagDeclaration_NetObjReplicator.UniqueName;
  FMemScope::FMemScope(&local_48,&local_50,true);
  if ((local_res18[0]->PropertyFlags & CPF_RepNotify) != CPF_None) {
    pFVar1 = (this->RepState).Ptr;
    pFVar12 = (FReceivingRepState *)0x0;
    if ((pFVar1 == (FRepState *)0x0) ||
       (pFVar12 = (pFVar1->ReceivingRepState).Ptr, pFVar12 == (FReceivingRepState *)0x0)) {
      local_30 = &local_res10;
      local_28 = local_res18;
      bVar6 = `FObjectReplicator::QueuePropertyRepNotify'::__l6::<lambda_1>::operator()(&local_30);
      if (!bVar6) goto LAB_147a6b4fd;
    }
    TArray<FProperty_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FProperty_*_const_&>
              (&pFVar12->RepNotifies,local_res18);
    pUVar8 = UObject::FindFunctionChecked(local_res10,local_res18[0]->RepNotifyFunc);
    pFVar5 = local_res18[0];
    if (pUVar8->NumParms != '\0') {
      if (local_res18[0]->ArrayDim == 1) {
        if ((0 < param_4->ArrayNum) &&
           (uVar11 = ((uint)((ulonglong)local_res18[0] >> 0x14) & 0xffff ^
                     (uint)((ulonglong)local_res18[0] >> 4)) * -0x7a143595,
           uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb,
           pTVar9 = TMapBase<FProperty_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FProperty_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>
                    ::FindOrAddImpl<FProperty_*_const_&>
                              ((TMapBase<FProperty_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FProperty_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>
                                *)&pFVar12->RepNotifyMetaData,uVar11 >> 0x10 ^ uVar11,local_res18),
           pTVar9 != param_4)) {
          iVar7 = param_4->ArrayNum;
          piVar10 = &pTVar9->ArrayMax;
          pFVar2 = (param_4->AllocatorInstance).Data;
          pTVar9->ArrayNum = iVar7;
          if ((iVar7 == 0) && (*piVar10 == 0)) {
            *piVar10 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,iVar7,*piVar10,&pTVar9->AllocatorInstance,iVar7,piVar10);
            if (iVar7 != 0) {
              memcpy((pTVar9->AllocatorInstance).Data,pFVar2,(longlong)iVar7);
            }
          }
        }
      }
      else {
        if (5 < (byte)LogRepTraffic._0_1_) {
          bVar6 = IsThisNotNull(local_res18[0],"FField::GetName");
          if (bVar6) {
            ::FName::ToString((FName *)&pFVar5->_padding_,&local_40);
          }
          else {
            ::FString::FString(&local_40,L"None");
          }
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogRepTraffic);
          if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_40.Data.AllocatorInstance.Data);
          }
        }
        uVar11 = ((uint)((ulonglong)local_res18[0] >> 0x14) & 0xffff ^
                 (uint)((ulonglong)local_res18[0] >> 4)) * -0x7a143595;
        uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
        pTVar9 = TMapBase<FProperty_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FProperty_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>
                 ::FindOrAddImpl<FProperty_*_const_&>
                           ((TMapBase<FProperty_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FProperty_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>
                             *)&pFVar12->RepNotifyMetaData,uVar11 >> 0x10 ^ uVar11,local_res18);
        pFVar2 = (pTVar9->AllocatorInstance).Data;
        local_58[0] = FVar4;
        if (((pFVar2 <= local_58) && (local_58 < pFVar2 + pTVar9->ArrayMax)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = pTVar9->ArrayNum;
        if (iVar7 == pTVar9->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x101,&pTVar9->AllocatorInstance,&pTVar9->ArrayMax);
        }
        pTVar9->ArrayNum = iVar7 + 1;
        (pTVar9->AllocatorInstance).Data[iVar7] = local_58[0];
      }
    }
  }
LAB_147a6b4fd:
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(&local_54);
  return;
}

// QueueRemoteFunctionBunch @ 147a6b520

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
FObjectReplicator::QueueRemoteFunctionBunch
          (FObjectReplicator *this,UFunction *param_1,FOutBunch *param_2)

{
  TArray<FObjectReplicator::FRPCCallInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  UActorChannel *pUVar6;
  code *pcVar7;
  TConsoleVariableData<int> *pTVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  UObjectBaseUtility *this_00;
  UPackageMapClient *pUVar13;
  FOutBunch *pFVar14;
  FOutBunch *pFVar15;
  TObjectPtr<UPackageMap> *pTVar16;
  TArray<FOutBunch_*,TSizedDefaultAllocator<32>_> *pTVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  FLLMScope local_res8 [2];
  UFunction *local_res10;
  FOutBunch *local_res18;
  FName local_res20;
  FName local_c8;
  FMemScope local_c0;
  TArray<FOutBunch_*,TSizedDefaultAllocator<32>_> local_b8;
  FString local_a8;
  FString local_98 [5];
  
  local_res10 = param_1;
  local_res18 = param_2;
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_NetObjReplicator.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_NetObjReplicator.UniqueName;
  FMemScope::FMemScope(&local_c0,&local_res20,true);
  if (this->Connection != (UNetConnection *)0x0) {
    uVar19 = 0;
    if (0 < (this->RemoteFuncInfo).ArrayNum) {
      lVar18 = 0;
      do {
        lVar12 = param_1->_padding_;
        uVar10 = 0;
        if ((int)uVar19 < (this->RemoteFuncInfo).ArrayNum) {
          uVar10 = ~uVar19 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        param_1 = local_res10;
        if (*(longlong *)((this->RemoteFuncInfo).AllocatorInstance.Data + lVar18) == lVar12) {
          if (uVar19 != 0xffffffff) goto LAB_147a6b717;
          break;
        }
        uVar19 = uVar19 + 1;
        lVar18 = lVar18 + 0x18;
      } while ((int)uVar19 < (this->RemoteFuncInfo).ArrayNum);
    }
    uVar19 = (this->RemoteFuncInfo).ArrayNum;
    pTVar1 = &this->RemoteFuncInfo;
    if (uVar19 == (this->RemoteFuncInfo).ArrayMax) {
      uVar19 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&pTVar1->AllocatorInstance,&(this->RemoteFuncInfo).ArrayMax);
    }
    (this->RemoteFuncInfo).ArrayNum = uVar19 + 1;
    lVar18 = param_1->_padding_;
    uVar10 = 0;
    if ((int)uVar19 < (int)(uVar19 + 1)) {
      uVar10 = ~uVar19 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    *(longlong *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar19 * 0x18) = lVar18;
    uVar10 = 0;
    if ((int)uVar19 < (this->RemoteFuncInfo).ArrayNum) {
      uVar10 = ~uVar19 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    *(undefined4 *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar19 * 0x18 + 8) = 0;
LAB_147a6b717:
    uVar20 = ~uVar19 >> 0x1f;
    uVar10 = 0;
    if ((int)uVar19 < (this->RemoteFuncInfo).ArrayNum) {
      uVar10 = uVar20;
    }
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar5 = (this->RemoteFuncInfo).AllocatorInstance.Data;
    lVar18 = (longlong)(int)uVar19;
    pFVar3 = pFVar5 + lVar18 * 0x18 + 8;
    *(int *)pFVar3 = *(int *)pFVar3 + 1;
    pTVar8 = CVarMaxRPCPerNetUpdate.Ref;
    bVar9 = IsInParallelGameThread();
    if ((bVar9) || (bVar9 = IsInGameThread(), bVar9)) {
      lVar12 = 0;
    }
    else {
      lVar12 = 4;
    }
    if (*(int *)((longlong)pTVar8->ShadowedValue + lVar12) < *(int *)(pFVar5 + lVar18 * 0x18 + 8)) {
      if (5 < (byte)LogRep._0_1_) {
        uVar10 = 0;
        if ((int)uVar19 < (this->RemoteFuncInfo).ArrayNum) {
          uVar10 = uVar20;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        this_00 = (UObjectBaseUtility *)this->ObjectPtr;
        if ((this_00 == (UObjectBaseUtility *)0x0) &&
           (this_00 = (UObjectBaseUtility *)FWeakObjectPtr::Get(&(this->WeakObjectPtr).WeakPtr),
           this_00 == (UObjectBaseUtility *)0x0)) {
          ::FString::FString(&local_a8,L"None");
        }
        else {
          UObjectBaseUtility::GetPathName(this_00,&local_a8,(UObject *)0x0);
        }
        local_c8 = (FName)local_res10->_padding_;
        ::FName::ToString(&local_c8,local_98);
        uVar10 = 0;
        if ((int)uVar19 < (this->RemoteFuncInfo).ArrayNum) {
          uVar10 = uVar20;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
        if (local_98[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98[0].Data.AllocatorInstance.Data);
        }
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
      }
      pUVar13 = CastChecked<UPackageMapClient,UPackageMap>
                          (&this->Connection->PackageMap,NullChecked);
      (pUVar13->MustBeMappedGuidsInLastBunch).ArrayNum = 0;
      if ((pUVar13->MustBeMappedGuidsInLastBunch).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&(pUVar13->MustBeMappedGuidsInLastBunch).AllocatorInstance,0,
                   &(pUVar13->MustBeMappedGuidsInLastBunch).ArrayMax);
      }
    }
    else {
      pFVar15 = (FOutBunch *)0x0;
      uVar4 = *(undefined8 *)(*(longlong *)(this->OwningChannel->_padding_ + 0x58) + 800);
      uVar10 = 0;
      if ((int)uVar19 < (this->RemoteFuncInfo).ArrayNum) {
        uVar10 = uVar20;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(undefined8 *)((this->RemoteFuncInfo).AllocatorInstance.Data + lVar18 * 0x18 + 0x10) = uVar4;
      pFVar14 = this->RemoteFunctions;
      if (this->RemoteFunctions == (FOutBunch *)0x0) {
        pFVar14 = ::operator_new(0x150);
        if (pFVar14 != (FOutBunch *)0x0) {
          pFVar15 = FOutBunch::FOutBunch(pFVar14,(UChannel *)this->OwningChannel,false);
        }
        this->RemoteFunctions = pFVar15;
        pFVar14 = pFVar15;
      }
      pFVar15 = local_res18;
      pcVar7 = *(code **)(pFVar14->_padding_ + 400);
      if (((local_res18->_padding_ & 0x200) != 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("!IsError()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\BitWriter.h"
                             ,0x49,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      (*pcVar7)(pFVar14,pFVar15->_padding_);
      TArray<UE::Net::FNetToken,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::
      Append<UE::Net::FNetToken,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                (&this->RemoteFunctions->NetTokensPendingExport,&pFVar15->NetTokensPendingExport);
      piVar2 = &(pFVar15->NetTokensPendingExport).ArrayMax;
      (pFVar15->NetTokensPendingExport).ArrayNum = 0;
      if (*piVar2 < 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetToken>_>
                  (4,4,0,&(pFVar15->NetTokensPendingExport).AllocatorInstance,0,piVar2);
      }
      pTVar16 = &this->Connection->PackageMap;
      if ((pTVar16->field0_0x0).DebugPtr != (UPackageMap *)0x0) {
        pUVar13 = CastChecked<UPackageMapClient,UPackageMap>(pTVar16,NullChecked);
        if ((pUVar13->MustBeMappedGuidsInLastBunch).ArrayNum != 0) {
          TArray<FNetworkGUID,TSizedDefaultAllocator<32>_>::
          Append<FNetworkGUID,TSizedDefaultAllocator<32>_>
                    (&this->OwningChannel->QueuedMustBeMappedGuidsInLastBunch,
                     &pUVar13->MustBeMappedGuidsInLastBunch);
          piVar2 = &(pUVar13->MustBeMappedGuidsInLastBunch).ArrayMax;
          (pUVar13->MustBeMappedGuidsInLastBunch).ArrayNum = 0;
          if (*piVar2 < 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,0,&(pUVar13->MustBeMappedGuidsInLastBunch).AllocatorInstance,0,piVar2);
          }
        }
        if (this->Connection->bInternalAck == 0) {
          UPackageMapClient::GetAdditionalRequiredBunches(pUVar13,&local_b8,pFVar15,None);
          pUVar6 = this->OwningChannel;
          pTVar17 = &pUVar6->QueuedExportBunches;
          if ((pTVar17 == &local_b8) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(void*)this != (void*)&Source",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x986,L""), bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (local_b8.ArrayNum != 0) {
            iVar11 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (8,8,local_b8.ArrayNum,&pTVar17->AllocatorInstance,
                                &(pUVar6->QueuedExportBunches).ArrayNum,
                                &(pUVar6->QueuedExportBunches).ArrayMax);
            memmove((pTVar17->AllocatorInstance).Data + (longlong)iVar11 * 8,
                    local_b8.AllocatorInstance.Data,(longlong)local_b8.ArrayNum << 3);
            local_b8.ArrayNum = 0;
          }
          if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.AllocatorInstance.Data);
          }
        }
      }
    }
  }
  FMemScope::~FMemScope(&local_c0);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ReadyForDormancy @ 147a6f0d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall FObjectReplicator::ReadyForDormancy(FObjectReplicator *this,bool param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FRepState *pFVar3;
  FSendingRepState *pFVar4;
  bool bVar5;
  UObject *pUVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  if ((this->ObjectPtr == (UObject *)0x0) &&
     (pUVar6 = FWeakObjectPtr::Get(&(this->WeakObjectPtr).WeakPtr), pUVar6 == (UObject *)0x0)) {
    if (5 < (byte)LogRep._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
    }
LAB_147a6f123:
    bVar5 = true;
  }
  else {
    if (this->bLastUpdateEmpty == 0) {
      if ((5 < (byte)LogRepTraffic._0_1_) && (!param_1)) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogRepTraffic);
        return false;
      }
    }
    else {
      pFVar3 = (this->RepState).Ptr;
      if ((pFVar3 == (FRepState *)0x0) ||
         (pFVar4 = (pFVar3->SendingRepState).Ptr, pFVar4 == (FSendingRepState *)0x0))
      goto LAB_147a6f123;
      if ((pFVar4->HistoryStart == pFVar4->HistoryEnd) &&
         (((pFVar4->NumNaks < 1 && (pFVar4->bOpenAckedCalled != false)) &&
          ((pFVar4->PreOpenAckHistory).ArrayNum < 1)))) {
        iVar2 = (pFVar4->Retirement).ArrayNum;
        pFVar7 = (pFVar4->Retirement).AllocatorInstance.Data;
        pFVar1 = pFVar7 + (longlong)iVar2 * 0x28;
        while( true ) {
          if ((pFVar4->Retirement).ArrayNum != iVar2) {
            `TCheckedPointerIterator<FPropertyRetirement,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res8);
          }
          if (pFVar7 == pFVar1) goto LAB_147a6f123;
          if (*(longlong *)pFVar7 != 0) break;
          pFVar7 = pFVar7 + 0x28;
        }
        if ((5 < (byte)LogRepTraffic._0_1_) && (!param_1)) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogRepTraffic);
        }
      }
    }
    bVar5 = false;
  }
  return bVar5;
}

// ReceivedBunch @ 147a706c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
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
FObjectReplicator::ReceivedBunch
          (FObjectReplicator *this,FNetBitReader *param_1,FReplicationFlags *param_2,bool param_3,
          bool *param_4)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  UNetDriver *pUVar3;
  UActorChannel *pUVar4;
  ForElementType<FNetTracePacketContentEvent> FVar5;
  void *_Src;
  code *pcVar6;
  TConsoleVariableData<int> *pTVar7;
  TConsoleVariableData<FString> *pTVar8;
  FFieldNetCache *pFVar9;
  FReplicationFlags_u_0 *pFVar10;
  bool bVar11;
  undefined1 uVar12;
  char cVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  UObject *this_00;
  FString *pFVar17;
  UPackageMapClient *this_01;
  FName FVar18;
  UObject *pUVar19;
  longlong lVar20;
  size_t sVar21;
  UClass *pUVar22;
  EReceivePropertiesFlags EVar23;
  ForAnyElementType FVar24;
  byte bVar25;
  ForElementType<FNetTracePacketContentEvent> FVar26;
  ForAnyElementType FVar27;
  longlong lVar28;
  wchar_t *_Str;
  FScriptContainerElement *pFVar29;
  ulonglong uVar30;
  FStructProperty *pFVar31;
  FName FVar32;
  undefined1 auStackY_458 [32];
  bool local_408;
  char local_407;
  bool local_406;
  byte local_405;
  bool local_404 [4];
  uint local_400;
  uint local_3fc;
  FNetBitReader *local_3f8;
  FString local_3f0;
  FName local_3e0;
  FString local_3d8;
  FString local_3c8;
  ForAnyElementType local_3b8;
  int local_3b0;
  int local_3ac;
  uint local_3a8;
  bool *local_3a0;
  undefined8 local_398;
  FFieldNetCache *local_390;
  FRepLayout *local_388;
  FReplicationFlags_u_0 *local_380;
  FString local_378;
  FString local_368;
  FName local_358;
  FClassNetCache *local_350;
  FName local_348;
  TObjectPtr<UPackageMap>_u_0 local_340;
  FString local_338;
  FString local_328;
  FString local_318;
  FString local_308;
  FNetDeltaSerializeInfo local_2f8;
  TSharedPtr<FNetFieldExportGroup,1> local_258;
  INetSerializeCB local_248;
  UNetDriver *local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  TReferenceControllerBase<1> *pTStack_220;
  undefined1 local_218;
  undefined8 local_210;
  TReferenceControllerBase<1> *local_208;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FNetBitReader local_158;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_458;
  local_3a0 = param_4;
  local_400 = 0;
  local_3f8 = param_1;
  local_380 = &param_2->field0_0x0;
  if (((this->RepLayout).Object == (FRepLayout *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("RepLayout",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                          ,0x3d6,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    uVar12 = (*pcVar6)();
    return (bool)uVar12;
  }
  this_00 = this->ObjectPtr;
  if ((this_00 == (UObject *)0x0) &&
     (this_00 = FWeakObjectPtr::Get(&(this->WeakObjectPtr).WeakPtr), this_00 == (UObject *)0x0)) {
    if (5 < (byte)LogNet._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      return false;
    }
  }
  else {
    pUVar3 = (this->Connection->Driver).field0_0x0.DebugPtr;
    local_340 = (this->Connection->PackageMap).field0_0x0;
    local_407 = (**(code **)(pUVar3->_padding_ + 0x3f8))(pUVar3);
    pTVar7 = CVarDelayUnmappedRPCs.Ref;
    bVar11 = IsInParallelGameThread();
    if ((!bVar11) &&
       ((bVar11 = IsInGameThread(), !bVar11 &&
        (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007945>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6c9,"GetShadowIndex() == 0"), bVar11)))) {
      pcVar6 = (code *)swi(3);
      uVar12 = (*pcVar6)();
      return (bool)uVar12;
    }
    cVar13 = local_407;
    if ((pTVar7->ShadowedValue[0] < 1) || (local_405 = 1, local_407 != '\0')) {
      local_405 = 0;
    }
    local_3a8 = pUVar3->ReplicationFrame;
    if (((pUVar3->NetCache).Object == (FClassNetCacheMgr *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      uVar12 = (*pcVar6)();
      return (bool)uVar12;
    }
    local_350 = FClassNetCacheMgr::GetClassNetCache
                          ((pUVar3->NetCache).Object,(this->ObjectClass).field0_0x0.DebugPtr);
    if (local_350 == (FClassNetCache *)0x0) {
      if ((byte)LogNet._0_1_ < 2) {
        return false;
      }
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_00,&local_338,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      local_1d8.Data.AllocatorInstance.Data = local_338.Data.AllocatorInstance.Data;
    }
    else {
      if (((this->RepLayout).Object == (FRepLayout *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x44d,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        uVar12 = (*pcVar6)();
        return (bool)uVar12;
      }
      local_388 = (this->RepLayout).Object;
      local_408 = false;
      local_338.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)(((this->RepState).Ptr)->ReceivingRepState).Ptr;
      if (!param_3) {
LAB_147a70a23:
        pUVar4 = this->OwningChannel;
        pUVar22 = (this->ObjectClass).field0_0x0.DebugPtr;
        if (((UNetConnection *)pUVar4->_padding_)->bInternalAck == 0) {
          local_3d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          FVar24.Data = (FScriptContainerElement *)(FNetFieldExportGroup *)0x0;
        }
        else {
          local_3f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_3f0.Data.ArrayNum = 0;
          local_3f0.Data.ArrayMax = 0;
          uVar14 = UNetConnection::GetNetworkCustomVersion
                             ((UNetConnection *)pUVar4->_padding_,&FEngineNetworkCustomVersion::Guid
                             );
          if (uVar14 < 0xf) {
            local_3e0 = (FName)pUVar22->_padding_;
            ::FName::ToString(&local_3e0,&local_3d8);
            ::FString::ConcatFF(&local_3c8,&local_3d8,&UActorChannel::ClassNetCacheSuffix);
            if (local_3f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_3f0.Data.AllocatorInstance.Data);
            }
            local_3f0.Data.AllocatorInstance.Data = local_3c8.Data.AllocatorInstance.Data;
            local_3f0.Data.ArrayNum = local_3c8.Data.ArrayNum;
            local_3f0.Data.ArrayMax = local_3c8.Data.ArrayMax;
            local_3c8.Data.ArrayNum = 0;
            local_3c8.Data.ArrayMax = 0;
            local_3c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
            }
          }
          else {
            pFVar17 = UObjectBaseUtility::GetPathName
                                ((UObjectBaseUtility *)pUVar22,&local_1c8,(UObject *)0x0);
            if (&local_3f0 != pFVar17) {
              if (local_3f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_3f0.Data.AllocatorInstance.Data);
              }
              local_3f0.Data.AllocatorInstance.Data = (pFVar17->Data).AllocatorInstance.Data;
              (pFVar17->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_3f0.Data.ArrayNum = (pFVar17->Data).ArrayNum;
              local_3f0.Data.ArrayMax = (pFVar17->Data).ArrayMax;
              (pFVar17->Data).ArrayNum = 0;
              (pFVar17->Data).ArrayMax = 0;
            }
            if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
            }
            (**(code **)(GEngine->_padding_ + 0x498))(GEngine,pUVar4->_padding_,&local_3f0);
            if (UActorChannel::ClassNetCacheSuffix.Data.ArrayNum == 0) {
              iVar16 = 0;
            }
            else {
              iVar16 = UActorChannel::ClassNetCacheSuffix.Data.ArrayNum + -1;
            }
            ::FString::AppendChars
                      (&local_3f0,
                       (wchar_t *)UActorChannel::ClassNetCacheSuffix.Data.AllocatorInstance.Data,
                       iVar16);
          }
          this_01 = CastChecked<UPackageMapClient,UPackageMap>
                              ((TObjectPtr<UPackageMap> *)(pUVar4->_padding_ + 0x68),NullChecked);
          UPackageMapClient::GetNetFieldExportGroup(this_01,&local_258,&local_3f0);
          local_3d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_258.Object;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_258.SharedReferenceCount.ReferenceController);
          FVar24.Data = (FScriptContainerElement *)local_258.Object;
          if (local_3f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3f0.Data.AllocatorInstance.Data);
          }
        }
        FNetBitReader::FNetBitReader(&local_158,param_1->PackageMap,(uchar *)0x0,0);
        local_390 = (FFieldNetCache *)0x0;
        local_248 = (INetSerializeCB)&___7FNetSerializeCB__6B_;
        local_238 = 0;
        uStack_230 = 0;
        local_228 = 0;
        pTStack_220 = (TReferenceControllerBase<1> *)0x0;
        local_218 = 0;
        local_210 = 0;
        local_208 = (TReferenceControllerBase<1> *)0x0;
        local_240 = pUVar3;
        while( true ) {
          uVar30 = 0xffffffff;
          local_3fc = 0xffffffff;
          FVar27.Data = (FScriptContainerElement *)(FNetTraceCollector *)0x0;
          if (GNetTraceRuntimeVerbosity != 0) {
            FVar27.Data = (FScriptContainerElement *)
                          *(FNetTraceCollector **)(this->OwningChannel->_padding_ + 0x1ec0);
          }
          local_3c8.Data.AllocatorInstance.Data = FVar27.Data;
          if ((FNetTraceCollector *)FVar27.Data != (FNetTraceCollector *)0x0) {
            uVar14 = FNetTrace::BeginPacketContentEvent
                               ((FNetTraceCollector *)FVar27.Data,NameId,(uint)param_1->_padding_);
            uVar30 = (ulonglong)uVar14;
            local_398 = 0;
            local_3fc = uVar14;
            uVar15 = FNetTrace::TraceName((FName)0x0);
            FVar5 = (((FNetTraceCollector *)FVar27.Data)->Events).AllocatorInstance.SecondaryData;
            FVar26 = (ForElementType<FNetTracePacketContentEvent>)
                     &((FNetTraceCollector *)FVar27.Data)->Events;
            if (FVar5 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
              FVar26 = FVar5;
            }
            *(uint *)((longlong)FVar26 + (ulonglong)uVar14 * 0x10) = uVar15;
          }
          bVar11 = UActorChannel::ReadFieldHeaderAndPayload
                             (this->OwningChannel,this_00,local_350,
                              (FNetFieldExportGroup *)FVar24.Data,param_1,&local_390,&local_158);
          uVar14 = (uint)uVar30;
          if (!bVar11) {
            if (uVar14 != 0xffffffff) {
              FNetTrace::EndPacketContentEvent
                        ((FNetTraceCollector *)FVar27.Data,uVar14,(uint)param_1->_padding_);
            }
            if (local_408 != false) {
              UpdateGuidToReplicatorMap(this);
            }
            bVar11 = true;
            goto LAB_147a7179b;
          }
          FVar32 = *(FName *)(this->OwningChannel->_padding_ + 0x1ec0);
          local_3e0 = FVar32;
          if (FVar32 != (FName)0x0) {
            FNetTrace::PushStreamOffset
                      ((FNetTraceCollector *)FVar32,
                       (int)param_1->_padding_ - (int)local_158._padding_);
          }
          pFVar9 = local_390;
          if ((param_1->_padding_ & 0x200) != 0) break;
          if (local_390 == (FFieldNetCache *)0x0) {
            if (2 < (byte)LogNet._0_1_) {
              UObjectBaseUtility::GetFullName
                        ((UObjectBaseUtility *)this_00,&local_1b8,(UObject *)0x0,None);
              UE::Logging::Private::BasicLog<3>
                        ((FStaticBasicLogRecord *)&PTR_u_ReceivedBunch___15183bf70,
                         (FLogCategoryBase *)&LogNet);
              if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
              }
            }
LAB_147a70d63:
            if (FVar32 != (FName)0x0) {
              FNetTrace::PopStreamOffset((FNetTraceCollector *)FVar32);
            }
            FVar24.Data = local_3d8.Data.AllocatorInstance.Data;
            param_1 = local_3f8;
            if (uVar14 != 0xffffffff) {
              FNetTrace::EndPacketContentEvent
                        ((FNetTraceCollector *)FVar27.Data,uVar14,(uint)local_3f8->_padding_);
            }
          }
          else {
            if (local_390->bIncompatible != false) {
              if (5 < (byte)LogNet._0_1_) {
                FVar18 = FFieldVariant::GetFName(&local_390->Field);
                ::FName::ToString((FName *)FVar18,&local_198);
                UObjectBaseUtility::GetFullName
                          ((UObjectBaseUtility *)this_00,&local_1a8,(UObject *)0x0,None);
                UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
                if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
                }
                FVar27.Data = local_3c8.Data.AllocatorInstance.Data;
                if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_198.Data.AllocatorInstance.Data);
                  FVar27.Data = local_3c8.Data.AllocatorInstance.Data;
                }
              }
              goto LAB_147a70d63;
            }
            if (uVar14 != 0xffffffff) {
              FVar18 = FFieldVariant::GetFName(&local_390->Field);
              uVar14 = FNetTrace::TraceName(*(FName *)FVar18);
              FVar5 = (((FNetTraceCollector *)FVar27.Data)->Events).AllocatorInstance.SecondaryData;
              FVar26 = (ForElementType<FNetTracePacketContentEvent>)
                       &((FNetTraceCollector *)FVar27.Data)->Events;
              if (FVar5 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
                FVar26 = FVar5;
              }
              *(uint *)((longlong)FVar26 + uVar30 * 0x10) = uVar14;
            }
            bVar25 = *(byte *)&(pFVar9->Field).Container & 1;
            if (((bVar25 != 0) ||
                (pFVar31 = (FStructProperty *)(pFVar9->Field).Container.Field,
                pFVar31 == (FStructProperty *)0x0)) ||
               ((*(uint *)(pFVar31->_padding_ + 0x18) >> 0x14 & 1) == 0)) {
              pFVar31 = (FStructProperty *)0x0;
            }
            if (pFVar31 == (FStructProperty *)0x0) {
              if ((bVar25 != 0) &&
                 (uVar30 = (pFVar9->Field).Container.Unknown & 0xfffffffffffffffe, uVar30 != 0)) {
                pUVar22 = Z_Construct_UClass_UFunction_NoRegister();
                pFVar10 = local_380;
                lVar20 = *(longlong *)(uVar30 + 0x10);
                iVar16 = (int)pUVar22->_padding_;
                if ((iVar16 <= *(int *)(lVar20 + 0x38)) &&
                   ((longlong *)
                    *(undefined1 **)(*(longlong *)(lVar20 + 0x30) + (longlong)iVar16 * 8) ==
                    &pUVar22->_padding_)) {
                  local_404[0] = false;
                  local_98._0_8_ = (FScriptContainerElement *)0x0;
                  local_98._8_8_ = 0;
                  local_78 = (void *)0x0;
                  local_70 = 0;
                  local_6c = 0x80;
                  local_68 = 0xffffffff;
                  local_64 = 0;
                  local_58 = (ForElementType<FSetElementId>)0x0;
                  local_50 = 0;
                  bVar11 = ReceivedRPC(this,&local_158,
                                       (TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>
                                        *)local_98,local_404,(FReplicationFlags *)&local_380->_s_0,
                                       pFVar9,(uint)local_405);
                  if (bVar11) {
                    if (local_404[0] == false) {
                      if ((*(uint *)&((UObjectBaseUtility *)this_00)->field_0x8 >> 0x1e & 1) != 0) {
                        bVar11 = true;
                        goto LAB_147a715ef;
                      }
                    }
                    else {
                      iVar16 = (this->PendingLocalRPCs).ArrayNum;
                      piVar2 = &(this->PendingLocalRPCs).ArrayMax;
                      if (iVar16 == *piVar2) {
                        iVar16 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x878,&(this->PendingLocalRPCs).AllocatorInstance,piVar2
                                           );
                      }
                      lVar20 = local_158._padding_;
                      pFVar29 = (this->PendingLocalRPCs).AllocatorInstance.Data;
                      (this->PendingLocalRPCs).ArrayNum = iVar16 + 1;
                      pFVar29 = pFVar29 + (longlong)iVar16 * 0x78;
                      pFVar1 = pFVar29 + 8;
                      *(int *)pFVar29 = pFVar9->FieldNetIndex;
                      ((FReplicationFlags_u_0 *)(pFVar29 + 4))->_s_0 =
                           *(FReplicationFlags_u_0_s_0 *)pFVar10;
                      *(FScriptContainerElement **)&pFVar1->field_0x0 =
                           (FScriptContainerElement *)0x0;
                      sVar21 = (size_t)(int)local_158._padding_;
                      *(int *)(pFVar29 + 0x10) = (int)local_158._padding_;
                      if ((int)local_158._padding_ == 0) {
                        *(int *)(pFVar29 + 0x14) = 0;
                      }
                      else {
                        UE::Core::Private::
                        ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (1,1,(int)local_158._padding_,0,(ForAnyElementType *)pFVar1,
                                   (int)local_158._padding_,(int *)(pFVar29 + 0x14));
                        memcpy(*(FScriptContainerElement **)&pFVar1->field_0x0,(void *)lVar20,sVar21
                              );
                      }
                      *(ulonglong *)(pFVar29 + 0x18) =
                           CONCAT44(local_158._padding_._4_4_,(int)local_158._padding_);
                      *(uint *)(pFVar29 + 0x20) = local_3a8;
                      *(undefined8 *)
                       &((TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *)
                        (pFVar29 + 0x28))->Elements = 0;
                      *(undefined8 *)(pFVar29 + 0x30) = 0;
                      *(undefined8 *)(pFVar29 + 0x48) = 0;
                      *(undefined4 *)(pFVar29 + 0x50) = 0;
                      *(undefined4 *)(pFVar29 + 0x54) = 0x80;
                      *(undefined4 *)(pFVar29 + 0x58) = 0xffffffff;
                      *(undefined4 *)(pFVar29 + 0x5c) = 0;
                      *(undefined8 *)(pFVar29 + 0x68) = 0;
                      *(undefined4 *)(pFVar29 + 0x70) = 0;
                      TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::
                      operator=((TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>
                                 *)(pFVar29 + 0x28),
                                (TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>
                                 *)local_98);
                      local_408 = true;
                      *local_3a0 = true;
                      this->bForceUpdateUnmapped = 1;
                    }
                    local_50 = 0;
                    if (local_58 != (ForElementType<FSetElementId>)0x0) {
                      FMemory::Free((void *)local_58);
                    }
                    iVar16 = SUB84(local_98._8_8_,4);
                    local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
                    if (iVar16 != 0) {
                      UE::Core::Private::
                      ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x10,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
                    }
                    local_68 = 0xffffffff;
                    local_64 = 0;
                    local_70 = 0;
                    if (0x80 < local_6c) {
                      local_6c = 0x80;
                      TBitArray<FDefaultBitArrayAllocator>::Realloc
                                ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
                    }
                    FVar24.Data = (FScriptContainerElement *)local_98._0_8_;
                    if (local_78 != (void *)0x0) {
                      FMemory::Free(local_78);
                      FVar24.Data = (FScriptContainerElement *)local_98._0_8_;
                    }
                    goto LAB_147a714c0;
                  }
                  bVar11 = false;
LAB_147a715ef:
                  local_50 = 0;
                  if (local_58 != (ForElementType<FSetElementId>)0x0) {
                    FMemory::Free((void *)local_58);
                  }
                  iVar16 = SUB84(local_98._8_8_,4);
                  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
                  if (iVar16 != 0) {
                    UE::Core::Private::
                    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x10,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
                  }
                  local_68 = 0xffffffff;
                  local_64 = 0;
                  local_70 = 0;
                  if (0x80 < local_6c) {
                    local_6c = 0x80;
                    TBitArray<FDefaultBitArrayAllocator>::Realloc
                              ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
                  }
                  if (local_78 != (void *)0x0) {
                    FMemory::Free(local_78);
                  }
                  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
                    FMemory::Free((void *)local_98._0_8_);
                  }
                  goto LAB_147a715b5;
                }
              }
              if (1 < (byte)LogRep._0_1_) {
                UObjectBaseUtility::GetFullName
                          ((UObjectBaseUtility *)this_00,&local_178,(UObject *)0x0,None);
                UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
                if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_178.Data.AllocatorInstance.Data);
                }
              }
              goto LAB_147a715b3;
            }
            if (local_407 != '\0') {
              if (1 < (byte)LogNet._0_1_) {
                UObjectBaseUtility::GetFullName
                          ((UObjectBaseUtility *)this_00,&local_188,(UObject *)0x0,None);
                bVar11 = IsThisNotNull(pFVar31,"FField::GetName");
                if (bVar11) {
                  ::FName::ToString((FName *)&pFVar31->_padding_,&local_378);
                }
                else {
                  ::FString::FString(&local_378,L"None");
                }
                UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
                if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_378.Data.AllocatorInstance.Data);
                }
                FVar32 = local_3e0;
                if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_188.Data.AllocatorInstance.Data);
                  FVar32 = local_3e0;
                }
              }
              goto LAB_147a715b3;
            }
            if (ZPULL(*(undefined4 *)&this->field_0xc,3,1) == 0) {
              pUVar19 = this->ObjectPtr;
              *(uint *)&this->field_0xc = *(undefined4 *)&this->field_0xc | 8;
              if ((pUVar19 != (UObject *)0x0) ||
                 (pUVar19 = FWeakObjectPtr::Get(&(this->WeakObjectPtr).WeakPtr),
                 pUVar19 != (UObject *)0x0)) {
                (**(code **)(*(longlong *)pUVar19 + 0x220))();
              }
            }
            pTVar8 = CVarNetReplicationDebugProperty.Ref;
            bVar11 = IsInParallelGameThread();
            if ((bVar11) || (bVar11 = IsInGameThread(), bVar11)) {
              lVar20 = 0;
            }
            else {
              lVar20 = 0x10;
            }
            local_3b8.Data = (FScriptContainerElement *)0x0;
            local_3b0 = *(int *)((longlong)&pTVar8->ShadowedValue[0].Data.ArrayNum + lVar20);
            lVar28 = (longlong)local_3b0;
            _Src = *(void **)((longlong)&pTVar8->ShadowedValue[0].Data.AllocatorInstance.Data +
                             lVar20);
            if (local_3b0 == 0) {
              local_3ac = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_3b0,0,&local_3b8,local_3b0,&local_3ac);
              memcpy(local_3b8.Data,_Src,lVar28 * 2);
            }
            uVar14 = local_400;
            if (local_3b0 < 2) {
LAB_147a70fbe:
              bVar11 = false;
            }
            else {
              uVar14 = local_400 | 1;
              local_400 = uVar14;
              bVar11 = IsThisNotNull(pFVar31,"FField::GetName");
              if (bVar11) {
                ::FName::ToString((FName *)&pFVar31->_padding_,&local_328);
              }
              else {
                ::FString::FString(&local_328,L"None");
              }
              if (local_3b0 == 0) {
                _Str = L"";
              }
              else {
                _Str = (wchar_t *)local_3b8.Data;
                if (local_3b8.Data == (FScriptContainerElement *)0x0) goto LAB_147a70fbe;
              }
              sVar21 = wcslen(_Str);
              iVar16 = ::FString::Find(&local_328,_Str,(int)sVar21,IgnoreCase,FromStart,-1);
              if (iVar16 == -1) goto LAB_147a70fbe;
              bVar11 = true;
            }
            if (((uVar14 & 1) != 0) &&
               (local_400 = uVar14 & 0xfffffffe,
               local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_328.Data.AllocatorInstance.Data);
            }
            if ((bVar11) && (4 < (byte)LogRep._0_1_)) {
              local_348.ComparisonIndex.Value =
                   *(uint *)&((UObjectBaseUtility *)this_00)->field_0x18;
              local_348.Number = *(uint *)&((UObjectBaseUtility *)this_00)->field_0x1c;
              ::FName::ToString(&local_348,&local_318);
              bVar11 = IsThisNotNull(pFVar31,"FField::GetName");
              if (bVar11) {
                ::FName::ToString((FName *)&pFVar31->_padding_,&local_368);
              }
              else {
                ::FString::FString(&local_368,L"None");
              }
              UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
              if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_368.Data.AllocatorInstance.Data);
              }
              if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_318.Data.AllocatorInstance.Data);
              }
            }
            if (local_3b8.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_3b8.Data);
            }
            local_2f8.Writer = (FBitWriter *)0x0;
            local_2f8.NewState = (TSharedPtr<INetDeltaBaseState,1> *)0x0;
            local_2f8.OldState = (INetDeltaBaseState *)0x0;
            local_2f8.Data = (void *)0x0;
            local_2f8.Struct = (UStruct *)0x0;
            local_2f8.CustomDeltaIndex = 0xffff;
            local_2f8.Map = local_340.DebugPtr;
            local_2f8.Reader = (FBitReader *)&local_158;
            local_2f8.NetSerializeCB = &local_248;
            local_2f8.Connection = this->Connection;
            local_2f8.bUpdateUnmappedObjects = false;
            local_2f8.bOutSomeObjectsWereMapped = false;
            local_2f8.bCalledPreNetReceive = false;
            local_2f8.bOutHasMoreUnmapped = false;
            local_2f8.bGuidListsChanged = false;
            local_2f8.bIsWritingOnClient = false;
            local_2f8.bIsInitializingBaseFromDefault = false;
            local_2f8.bSupportsFastArrayDeltaStructSerialization = false;
            local_2f8.CustomDeltaObject = (UObject *)0x0;
            local_2f8.GatherGuidReferences =
                 (TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *)0x0;
            local_2f8.TrackedGuidMemoryBytes = (int *)0x0;
            local_2f8.MoveGuidToUnmapped = (FNetworkGUID *)0x0;
            local_2f8.DebugName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_2f8.DebugName.Data.ArrayNum = 0;
            local_2f8.DebugName.Data.ArrayMax = 0;
            local_2f8.bInternalAck = (local_2f8.Connection)->bInternalAck;
            local_2f8.Object = this_00;
            bVar11 = FRepLayout::ReceiveCustomDeltaProperty
                               (local_388,
                                (FReceivingRepState *)local_338.Data.AllocatorInstance.Data,
                                &local_2f8,pFVar31);
            FVar24.Data = local_2f8.DebugName.Data.AllocatorInstance.Data;
            if (bVar11) {
              if (local_2f8.bOutHasMoreUnmapped != false) {
                *local_3a0 = true;
              }
              if (local_2f8.bGuidListsChanged != false) {
                local_408 = true;
              }
              if (4 < (byte)LogRepTraffic._0_1_) {
                local_358.ComparisonIndex.Value =
                     *(uint *)&((UObjectBaseUtility *)this_00)->field_0x18;
                local_358.Number = *(uint *)&((UObjectBaseUtility *)this_00)->field_0x1c;
                ::FName::ToString(&local_358,&local_308);
                UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRepTraffic);
                FVar24.Data = local_2f8.DebugName.Data.AllocatorInstance.Data;
                if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_308.Data.AllocatorInstance.Data);
                  FVar24.Data = local_2f8.DebugName.Data.AllocatorInstance.Data;
                }
              }
            }
            else {
              pFVar9->bIncompatible = true;
            }
LAB_147a714c0:
            if (FVar24.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FVar24.Data);
            }
            if (local_3e0 != (FName)0x0) {
              FNetTrace::PopStreamOffset((FNetTraceCollector *)local_3e0);
            }
            FVar24.Data = local_3d8.Data.AllocatorInstance.Data;
            param_1 = local_3f8;
            if (local_3fc != 0xffffffff) {
              FNetTrace::EndPacketContentEvent
                        ((FNetTraceCollector *)local_3c8.Data.AllocatorInstance.Data,local_3fc,
                         (uint)local_3f8->_padding_);
            }
          }
        }
        if (1 < (byte)LogNet._0_1_) {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)this_00,&local_168,(UObject *)0x0,None);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
          if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_168.Data.AllocatorInstance.Data);
          }
        }
LAB_147a715b3:
        bVar11 = false;
LAB_147a715b5:
        if (FVar32 != (FName)0x0) {
          FNetTrace::PopStreamOffset((FNetTraceCollector *)FVar32);
        }
        if (local_3fc != 0xffffffff) {
          FNetTrace::EndPacketContentEvent
                    ((FNetTraceCollector *)local_3c8.Data.AllocatorInstance.Data,local_3fc,
                     (uint)local_3f8->_padding_);
        }
LAB_147a7179b:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_208);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_220);
        local_248 = (INetSerializeCB)&___7INetSerializeCB__6B_;
        FNetBitReader::~FNetBitReader(&local_158);
        return bVar11;
      }
      if (cVar13 == '\0') {
        if (ZPULL(*(undefined4 *)&this->field_0xc,3,1) == 0) {
          *(uint *)&this->field_0xc = *(undefined4 *)&this->field_0xc | 8;
          PreNetReceive(this);
        }
        cVar13 = (**(code **)(pUVar3->_padding_ + 0x458))(pUVar3,this_00);
        local_406 = false;
        EVar23 = cVar13 != '\0' | SkipRoleSwap;
        if ((local_380->Value & 0x40) == 0) {
          EVar23 = (uint)(cVar13 != '\0');
        }
        bVar11 = FRepLayout::ReceiveProperties
                           (local_388,this->OwningChannel,(this->ObjectClass).field0_0x0.DebugPtr,
                            (((this->RepState).Ptr)->ReceivingRepState).Ptr,this_00,param_1,
                            &local_406,&local_408,EVar23);
        if (bVar11) {
          *local_3a0 = (bool)(*local_3a0 | local_406);
          goto LAB_147a70a23;
        }
        if ((byte)LogRep._0_1_ < 2) {
          return false;
        }
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)this_00,&local_1d8,(UObject *)0x0,None);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
      }
      else {
        if ((byte)LogNet._0_1_ < 2) {
          return false;
        }
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)this_00,&local_1e8,(UObject *)0x0,None);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
        local_1d8.Data.AllocatorInstance.Data = local_1e8.Data.AllocatorInstance.Data;
      }
    }
    if ((FReceivingRepState *)local_1d8.Data.AllocatorInstance.Data != (FReceivingRepState *)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// ReceivedNak @ 147a73e90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FObjectReplicator::ReceivedNak(FObjectReplicator *this,int param_1)

{
  longlong *plVar1;
  FRepLayout *pFVar2;
  FRepState *pFVar3;
  FSendingRepState *pFVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  UObject *this_00;
  longlong lVar11;
  longlong *plVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  int iStackX_24;
  longlong local_e0;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  undefined8 local_88;
  void *local_80 [2];
  void *local_70 [2];
  undefined8 local_60;
  TReferenceControllerBase<1> *pTStack_58;
  
  this_00 = this->ObjectPtr;
  if ((this_00 == (UObject *)0x0) &&
     (this_00 = FWeakObjectPtr::Get(&(this->WeakObjectPtr).WeakPtr), this_00 == (UObject *)0x0)) {
    if (5 < (byte)LogNet._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      return;
    }
  }
  else if ((this->ObjectClass).field0_0x0.DebugPtr == (UClass *)0x0) {
    if (5 < (byte)LogNet._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      return;
    }
  }
  else {
    if (((this->RepLayout).Object == (FRepLayout *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar2 = (this->RepLayout).Object;
    if (((((pFVar2->Flags & NoReplicatedProperties) == None) && ((pFVar2->Parents).ArrayNum != 0))
        && (pFVar3 = (this->RepState).Ptr, pFVar3 != (FRepState *)0x0)) &&
       (pFVar4 = (pFVar3->SendingRepState).Ptr, pFVar4 != (FSendingRepState *)0x0)) {
      if (pFVar4->CustomDeltaChangeIndex != 0) {
        pFVar4->CustomDeltaChangeIndex = pFVar4->CustomDeltaChangeIndex - 1;
      }
      uVar15 = pFVar4->HistoryStart;
      if ((int)uVar15 < pFVar4->HistoryEnd) {
        do {
          uVar10 = uVar15 & 0x8000001f;
          if ((int)uVar10 < 0) {
            uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
          }
          if (((pFVar4->ChangeHistory[(int)uVar10].Resend == false) &&
              (pFVar4->ChangeHistory[(int)uVar10].OutPacketIdRange.First <= param_1)) &&
             (param_1 <= pFVar4->ChangeHistory[(int)uVar10].OutPacketIdRange.Last)) {
            if ((pFVar4->ChangeHistory[(int)uVar10].Changed.ArrayNum < 1) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("HistoryItem.Changed.Num() > 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                                   ,0x396,L""), bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar4->ChangeHistory[(int)uVar10].Resend = true;
            pFVar4->NumNaks = pFVar4->NumNaks + 1;
          }
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < pFVar4->HistoryEnd);
      }
      uVar15 = (pFVar4->Retirement).ArrayNum - 1;
      if (-1 < (int)uVar15) {
        local_e0 = (longlong)(int)uVar15 << 4;
        lVar11 = (longlong)(int)uVar15 * 0x28;
        do {
          uVar10 = 0;
          if ((int)uVar15 < (pFVar4->Retirement).ArrayNum) {
            uVar10 = ~uVar15 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar16 = (pFVar4->Retirement).AllocatorInstance.Data + lVar11;
          plVar12 = *(longlong **)pFVar16;
          iVar14 = -1;
          if (plVar12 != (longlong *)0x0) {
            while( true ) {
              if (*(int *)((longlong)plVar12 + 0x1c) < (int)plVar12[3]) {
                if (*(longlong *)&((UObjectBaseUtility *)this_00)->field_0x10 == 0) {
                  ::FString::FString(&local_c8,L"None");
                }
                else {
                  UObjectBaseUtility::GetFullName
                            ((UObjectBaseUtility *)this_00,&local_c8,(UObject *)0x0,None);
                }
                bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Rec->OutPacketIdRange.Last >= Rec->OutPacketIdRange.First",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                                   ,0x2e2,L"Invalid packet id range (Last < First). Object: %s");
                if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_c8.Data.AllocatorInstance.Data);
                }
                if (bVar9) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
              }
              if ((int)plVar12[3] < iVar14) {
                if (*(longlong *)&((UObjectBaseUtility *)this_00)->field_0x10 == 0) {
                  ::FString::FString(&local_b8,L"None");
                }
                else {
                  UObjectBaseUtility::GetFullName
                            ((UObjectBaseUtility *)this_00,&local_b8,(UObject *)0x0,None);
                }
                bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Rec->OutPacketIdRange.First >= LastRange.Last",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                                   ,0x2e3,
                                   L"Invalid packet id range (First < LastRange.Last). Object: %s");
                if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_b8.Data.AllocatorInstance.Data);
                }
                if (bVar9) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
              }
              lVar5 = plVar12[3];
              plVar12 = (longlong *)*plVar12;
              local_88 = lVar5;
              if (plVar12 == (longlong *)0x0) break;
              local_88._4_4_ = (int)((ulonglong)lVar5 >> 0x20);
              iVar14 = local_88._4_4_;
            }
          }
          pFVar13 = *(FScriptContainerElement **)pFVar16;
          iVar14 = 0;
joined_r0x000147a74219:
          if (pFVar13 == (FScriptContainerElement *)0x0) goto LAB_147a74291;
          if (*(int *)(pFVar13 + 0x1c) < param_1) {
            if ((*(FScriptContainerElement **)pFVar16 != pFVar13) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Retirement.Next == Rec",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                                   ,0x3aa,L""), bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            *(longlong *)pFVar16 = *(longlong *)pFVar13;
            iVar14 = *(int *)(pFVar13 + 0x20);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (*(TReferenceControllerBase<1> **)(pFVar13 + 0x10));
            ::operator_delete(pFVar13,0x28);
            pFVar13 = pFVar16;
LAB_147a7427f:
            pFVar13 = *(FScriptContainerElement **)pFVar13;
            goto joined_r0x000147a74219;
          }
          if (param_1 < *(int *)(pFVar13 + 0x18)) goto LAB_147a7427f;
          if (6 < (byte)LogNet._0_1_) {
            (**(code **)(this->Connection->_padding_ + 0x2d0))(this->Connection,local_70,1);
            (**(code **)(this->OwningChannel->_padding_ + 0x2d0))(this->OwningChannel,local_80);
            UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
            if (local_80[0] != (void *)0x0) {
              FMemory::Free(local_80[0]);
            }
            if (local_70[0] != (void *)0x0) {
              FMemory::Free(local_70[0]);
            }
          }
          if ((iVar14 != 0) && (*(longlong *)(pFVar13 + 8) != 0)) {
            *(int *)(*(longlong *)(pFVar13 + 8) + 0x18) = iVar14;
          }
          uVar10 = 0;
          if ((int)uVar15 < (pFVar4->RecentCustomDeltaState).ArrayNum) {
            uVar10 = ~uVar15 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar5 = *(longlong *)(pFVar13 + 0x10);
          pFVar6 = (pFVar4->RecentCustomDeltaState).AllocatorInstance.Data;
          lVar7 = *(longlong *)(pFVar13 + 8);
          if (lVar5 != 0) {
            LOCK();
            *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
            UNLOCK();
          }
          local_60 = *(undefined8 *)(pFVar6 + local_e0);
          pTStack_58 = *(TReferenceControllerBase<1> **)(pFVar6 + local_e0 + 8);
          *(longlong *)(pFVar6 + local_e0) = lVar7;
          *(longlong *)(pFVar6 + local_e0 + 8) = lVar5;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_58);
          do {
            pFVar6 = *(FScriptContainerElement **)pFVar13;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (*(TReferenceControllerBase<1> **)(pFVar13 + 0x10));
            ::operator_delete(pFVar13,0x28);
            pFVar13 = pFVar6;
          } while (pFVar6 != (FScriptContainerElement *)0x0);
          *(longlong *)pFVar16 = 0;
LAB_147a74291:
          plVar12 = *(longlong **)pFVar16;
          iStackX_24 = -1;
          if (plVar12 != (longlong *)0x0) {
            while( true ) {
              if (*(int *)((longlong)plVar12 + 0x1c) < (int)plVar12[3]) {
                if (*(longlong *)&((UObjectBaseUtility *)this_00)->field_0x10 == 0) {
                  ::FString::FString(&local_a8,L"None");
                }
                else {
                  UObjectBaseUtility::GetFullName
                            ((UObjectBaseUtility *)this_00,&local_a8,(UObject *)0x0,None);
                }
                bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Rec->OutPacketIdRange.Last >= Rec->OutPacketIdRange.First",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                                   ,0x2e2,L"Invalid packet id range (Last < First). Object: %s");
                if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_a8.Data.AllocatorInstance.Data);
                }
                if (bVar9) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
              }
              if ((int)plVar12[3] < iStackX_24) {
                if (*(longlong *)&((UObjectBaseUtility *)this_00)->field_0x10 == 0) {
                  ::FString::FString(&local_98,L"None");
                }
                else {
                  UObjectBaseUtility::GetFullName
                            ((UObjectBaseUtility *)this_00,&local_98,(UObject *)0x0,None);
                }
                bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Rec->OutPacketIdRange.First >= LastRange.Last",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                                   ,0x2e3,
                                   L"Invalid packet id range (First < LastRange.Last). Object: %s");
                if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_98.Data.AllocatorInstance.Data);
                }
                if (bVar9) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
              }
              plVar1 = plVar12 + 3;
              plVar12 = (longlong *)*plVar12;
              if (plVar12 == (longlong *)0x0) break;
              iStackX_24 = (int)((ulonglong)*plVar1 >> 0x20);
            }
          }
          local_e0 = local_e0 + -0x10;
          uVar15 = uVar15 - 1;
          lVar11 = lVar11 + -0x28;
          if ((int)uVar15 < 0) {
            return;
          }
        } while( true );
      }
    }
  }
  return;
}

// ReceivedRPC @ 147a75d40

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
FObjectReplicator::ReceivedRPC
          (FObjectReplicator *this,FNetBitReader *param_1,
          TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *param_2,
          bool *param_3,FReplicationFlags *param_4,FFieldNetCache *param_5,ESkipRpcBehavior param_6)

{
  byte bVar1;
  ushort uVar2;
  EFunctionFlags EVar3;
  FRPCDoSDetection *this_00;
  UNetDriver *pUVar4;
  AActor *pAVar5;
  code *pcVar6;
  FNameEntryId FVar7;
  UFunction *pUVar8;
  UFunction *pUVar9;
  FField *pFVar10;
  UFunction *pUVar11;
  bool bVar12;
  undefined1 uVar13;
  char cVar14;
  bool bVar15;
  ERPCNotifyResult EVar16;
  char cVar17;
  bool bVar18;
  uint uVar19;
  AActor *this_01;
  UFunction *pUVar20;
  FName *pFVar21;
  FThreadSafeStaticStat<FStat_STAT_NetReceiveRPC> FVar22;
  FSequentialRPCScope *pFVar23;
  uint *puVar24;
  FTlsAutoCleanup *pFVar25;
  TRepDataBufferBase<0,unsigned_char> _Dst;
  wchar_t *pwVar26;
  longlong lVar27;
  AActor *pAVar28;
  double dVar29;
  FScopedRemoteRPCMode local_248;
  FScopedNetContextRPC local_247 [7];
  FName local_240;
  FName local_238;
  FName local_230;
  byte local_228;
  FMemMark local_220;
  undefined1 local_1f8;
  undefined1 local_1f7 [7];
  FScopedRPCTimingTracker *local_1f0;
  TFieldIterator<FProperty> local_1e8;
  FColor_u_0 local_1d0 [2];
  FName local_1c8;
  byte local_1c0;
  FName local_1b8;
  LARGE_INTEGER local_1b0;
  TSharedPtr<FRepLayout,1> local_1a8;
  FScopedRPCTimingTracker local_198;
  code *local_178;
  undefined1 *local_170;
  code *local_168;
  undefined1 *local_160;
  FName local_158;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  if ((param_5 == (FFieldNetCache *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("FieldCache",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                          ,0x529,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    uVar13 = (*pcVar6)();
    return (bool)uVar13;
  }
  bVar12 = __CsvProfilerStat1324 == false;
  *param_3 = false;
  if (bVar12) {
    FCsvProfilerTrace::OutputInlineStatExclusive("HandleRPC");
    __CsvProfilerStat1324 = true;
  }
  FCsvProfiler::BeginExclusiveStat("HandleRPC","CSV_HandleRPC");
  cVar14 = (**(code **)(((this->Connection->Driver).field0_0x0.DebugPtr)->_padding_ + 0x3f8))();
  this_01 = (AActor *)this->ObjectPtr;
  if (this_01 == (AActor *)0x0) {
    this_01 = (AActor *)FWeakObjectPtr::Get(&(this->WeakObjectPtr).WeakPtr);
  }
  FFieldVariant::GetFName(&param_5->Field);
  pUVar20 = UObject::FindFunction((UObject *)this_01,local_240);
  local_198.Connection = this->Connection;
  this_00 = ((local_198.Connection)->RPCDoS).Ptr;
  local_198.StartTime = 0.0;
  local_198.RPCDoS = (FRPCDoSDetection *)0x0;
  local_198.Function = pUVar20;
  if (GReceiveRPCTimingEnabled != false) {
    QueryPerformanceCounter(&local_1b0);
    local_198.StartTime =
         (double)local_1b0.QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000;
  }
  local_1f0 = &local_198;
  if (((FScopedRPCTimingTracker::ActiveTrackers.AllocatorInstance.Data <=
        (FScriptContainerElement *)&local_1f0) &&
      ((FScriptContainerElement *)&local_1f0 <
       FScopedRPCTimingTracker::ActiveTrackers.AllocatorInstance.Data +
       (longlong)FScopedRPCTimingTracker::ActiveTrackers.ArrayMax * 8)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar6 = (code *)swi(3);
    uVar13 = (*pcVar6)();
    return (bool)uVar13;
  }
  if (FScopedRPCTimingTracker::ActiveTrackers.ArrayNum ==
      FScopedRPCTimingTracker::ActiveTrackers.ArrayMax) {
    FScopedRPCTimingTracker::ActiveTrackers.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&FScopedRPCTimingTracker::ActiveTrackers.AllocatorInstance,
                    &FScopedRPCTimingTracker::ActiveTrackers.ArrayMax);
  }
  lVar27 = (longlong)FScopedRPCTimingTracker::ActiveTrackers.ArrayNum;
  FScopedRPCTimingTracker::ActiveTrackers.ArrayNum =
       FScopedRPCTimingTracker::ActiveTrackers.ArrayNum + 1;
  *(FScopedRPCTimingTracker **)
   (FScopedRPCTimingTracker::ActiveTrackers.AllocatorInstance.Data + lVar27 * 8) = local_1f0;
  FVar22 = StatPtr_STAT_NetReceiveRPC;
  if (StatPtr_STAT_NetReceiveRPC == (FThreadSafeStaticStat<FStat_STAT_NetReceiveRPC>)0x0) {
    pFVar21 = ::FName::FName(&local_158,"STAT_NetReceiveRPC");
    FVar22 = (FThreadSafeStaticStat<FStat_STAT_NetReceiveRPC>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetReceiveRPC,*pFVar21,
                        L"ReceiveRPC","STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,ST_int64
                        ,true,false,MCR_Invalid);
  }
  local_230.ComparisonIndex.Value = 0;
  local_230.Number = 0;
  local_228 = 0;
  local_238 = *(FName *)FVar22;
  uVar19 = local_238.Number;
  if ((local_238.ComparisonIndex.Value.Value != 0) || (uVar19 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1d0[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1d0[0]._s_0,(char *)*(FName *)((longlong)FVar22 + 0x10));
      local_228 = local_228 | 1;
      if (-1 < CpuChannel->Enabled) {
        local_1b8.ComparisonIndex = local_238.ComparisonIndex.Value;
        local_1b8.Number = uVar19;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1b8,(wchar_t *)*(FName *)((longlong)FVar22 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                   ,0x533);
        local_228 = local_228 | 2;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FVar7 = local_238.ComparisonIndex.Value;
      local_238.Number = uVar19;
      local_238.ComparisonIndex.Value = FVar7.Value;
      local_230 = local_238;
      FThreadStats::AddMessage(local_238,CycleScopeStart);
      local_228 = local_228 | 4;
    }
  }
  FScopeCycleCounterUObject::FScopeCycleCounterUObject
            ((FScopeCycleCounterUObject *)&local_1c8,(UObjectBaseUtility *)pUVar20);
  if (pUVar20 == (UFunction *)0x0) {
    if (1 < (byte)LogNet._0_1_) {
      ::FName::ToString(&local_240,local_60);
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_01,&local_150,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      local_130.Data.AllocatorInstance.Data = local_60[0].Data.AllocatorInstance.Data;
      if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Data.AllocatorInstance.Data);
        local_130.Data.AllocatorInstance.Data = local_60[0].Data.AllocatorInstance.Data;
      }
LAB_147a76158:
      if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Data.AllocatorInstance.Data);
      }
    }
LAB_147a76162:
    if (cVar14 != '\0') {
      bVar12 = false;
      goto LAB_147a76c46;
    }
LAB_147a76211:
    param_5->bIncompatible = true;
  }
  else {
    EVar3 = pUVar20->FunctionFlags;
    if ((EVar3 & FUNC_Net) == FUNC_None) {
      if (1 < (byte)LogRep._0_1_) {
        ::FName::ToString(&local_240,&local_130);
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)this_01,&local_140,(UObject *)0x0,None);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
        if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_140.Data.AllocatorInstance.Data);
        }
        goto LAB_147a76158;
      }
      goto LAB_147a76162;
    }
    if (((EVar3 >> 0x15 & 1) != 0) && (cVar14 == '\0')) {
      if (1 < (byte)LogRep._0_1_) {
        ::FName::ToString(&local_240,&local_110);
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)this_01,&local_120,(UObject *)0x0,None);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
        if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_120.Data.AllocatorInstance.Data);
        }
        if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_110.Data.AllocatorInstance.Data);
        }
      }
      goto LAB_147a76211;
    }
    if (((EVar3 & (FUNC_NetClient|FUNC_NetMulticast)) != FUNC_None) && (cVar14 != '\0')) {
      if (1 < (byte)LogRep._0_1_) {
        ::FName::ToString(&local_240,&local_f0);
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)this_01,&local_100,(UObject *)0x0,None);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
        if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_100.Data.AllocatorInstance.Data);
        }
        if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.Data.AllocatorInstance.Data);
        }
      }
      bVar12 = false;
      goto LAB_147a76c46;
    }
    if ((((this_00 == (FRPCDoSDetection *)0x0) || (cVar14 == '\0')) ||
        (this_00->bRPCDoSDetection == false)) || (this->Connection->bReplay != 0)) {
LAB_147a764d3:
      if (4 < (byte)LogRepTraffic._0_1_) {
        ::FName::ToString(&local_240,&local_d0);
        UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)&PTR_u_______Received__15183c558,
                   (FLogCategoryBase *)&LogRepTraffic);
        if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d0.Data.AllocatorInstance.Data);
        }
      }
      pUVar4 = (this->Connection->Driver).field0_0x0.DebugPtr;
      cVar17 = (**(code **)(pUVar4->_padding_ + 0x490))(pUVar4,this_01);
      if (cVar17 != '\0') {
        bVar15 = -1 < CpuChannel->Enabled;
        if (bVar15) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId1391,"EvaluateCanExecute",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                     ,0x56f);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1391);
        }
        puVar24 = TThreadSingleton<FMemStack>::GetTlsSlot();
        local_170 = &local_1f8;
        local_178 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                    ::Call;
        pFVar25 = FThreadSingletonInitializer::Get
                            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_178,puVar24);
        local_220.Mem = (FMemStackBase *)(pFVar25 + 2);
        local_220.Top = (local_220.Mem)->Top;
        local_220.SavedChunk = *(FTaggedMemory **)(pFVar25 + 4);
        local_220.bPopped = false;
        local_220.NextTopmostMark = *(FMemMark **)(pFVar25 + 5);
        pFVar25[5] = (FTlsAutoCleanup)&local_220;
        *(int *)(pFVar25 + 6) = *(int *)(pFVar25 + 6) + 1;
        uVar2 = pUVar20->ParmsSize;
        puVar24 = TThreadSingleton<FMemStack>::GetTlsSlot();
        local_160 = local_1f7;
        local_168 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                    ::Call;
        pFVar25 = FThreadSingletonInitializer::Get
                            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_168,puVar24);
        _Dst.Data = FMemStackBase::Alloc((FMemStackBase *)(pFVar25 + 2),(ulonglong)uVar2,0x10);
        memset(_Dst.Data,0,(ulonglong)uVar2);
        pUVar11 = (UFunction *)pUVar20->_padding_;
        pUVar9 = pUVar20;
        while (pUVar8 = pUVar11, pUVar8 != (UFunction *)0x0) {
          pUVar9 = pUVar8;
          pUVar11 = (UFunction *)pUVar8->_padding_;
        }
        UNetDriver::GetFunctionRepLayout
                  ((this->Connection->Driver).field0_0x0.DebugPtr,&local_1a8,pUVar9);
        if (local_1a8.Object == (FRepLayout *)0x0) {
          if (1 < (byte)LogRep._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
          }
LAB_147a769ec:
          bVar12 = false;
        }
        else {
          FRepLayout::ReceivePropertiesForRPC
                    (local_1a8.Object,(UObject *)this_01,pUVar9,this->OwningChannel,param_1,_Dst,
                     param_2);
          if ((param_1->_padding_ & 0x200) == 0) {
            if (param_1->_padding_ == param_1->_padding_) {
              RPC_ResetLastFailedReason();
              if (param_6 == SkipIfNotReady) {
                if (((pUVar20->FunctionFlags & FUNC_NetReliable) == FUNC_None) ||
                   ((*(int *)&(param_2->Elements).field_0x8 -
                     *(int *)&(param_2->Elements).field_0x34 < 1 &&
                    ((this->PendingLocalRPCs).ArrayNum < 1)))) goto LAB_147a76a86;
LAB_147a76838:
                *param_3 = true;
              }
              else {
                if (param_6 == AlwaysSkip) goto LAB_147a76838;
LAB_147a76a86:
                *param_3 = false;
                pAVar5 = (this->OwningChannel->Actor).field0_0x0.DebugPtr;
                if (pAVar5 == (AActor *)0x0) {
                  bVar12 = this_01 == (AActor *)0x0;
                }
                else {
                  bVar12 = pAVar5 == this_01;
                }
                pUVar4 = (this->Connection->Driver).field0_0x0.DebugPtr;
                pAVar28 = (AActor *)0x0;
                if (!bVar12) {
                  pAVar28 = this_01;
                }
                (**(code **)(pUVar4->_padding_ + 0x4f8))(pUVar4,pAVar5,pAVar28,pUVar20,_Dst.Data);
                RPC_ResetLastFailedReason();
                bVar12 = UNetDriver::IsExecuteRPCFunctionsEnabled
                                   ((this->Connection->Driver).field0_0x0.DebugPtr);
                if (bVar12) {
                  UE::Net::FScopedNetContextRPC::FScopedNetContextRPC(local_247);
                  UE::Net::Private::FScopedRemoteRPCMode::FScopedRemoteRPCMode
                            (&local_248,pUVar20,Receiving);
                  (**(code **)(this_01->_padding_ + 0x260))(this_01,pUVar20,_Dst.Data);
                  UE::Net::Private::FScopedRemoteRPCMode::~FScopedRemoteRPCMode(&local_248);
                  UE::Net::FScopedNetContextRPC::~FScopedNetContextRPC(local_247);
                }
              }
              local_1e8.Field = (FField *)pUVar20->_padding_;
              local_1e8.InterfaceIndex = -1;
              local_1e8.bIncludeSuper = true;
              local_1e8.bIncludeDeprecated = true;
              local_1e8.bIncludeInterface = false;
              local_1e8.Struct = (UStruct *)pUVar20;
              TFieldIterator<FProperty>::IterateToNext(&local_1e8);
              pFVar10 = local_1e8.Field;
              while ((local_1e8.Field = pFVar10, pFVar10 != (FField *)0x0 &&
                     (((uint)pFVar10[1].ClassPrivate & 0x480) == 0x80))) {
                if ((~(byte)((ulonglong)pFVar10[1].ClassPrivate >> 0x24) & 1) != 0) {
                  pcVar6 = *(code **)(pFVar10->_padding_ + 0x138);
                  if (((int)pFVar10[1]._padding_ < 1) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                          ,0x2dd,
                                          L"Array index out of bounds: %i from an array of size %i")
                     , bVar12)) {
                    pcVar6 = (code *)swi(3);
                    uVar13 = (*pcVar6)();
                    return (bool)uVar13;
                  }
                  if ((_Dst.Data == (uchar *)0x0) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("ContainerPtr",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                          ,0x2de,L""), bVar12)) {
                    pcVar6 = (code *)swi(3);
                    uVar13 = (*pcVar6)();
                    return (bool)uVar13;
                  }
                  (*pcVar6)(pFVar10,_Dst.Data + *(int *)((longlong)&pFVar10[1].Owner.Container + 4))
                  ;
                }
                local_1e8.Field = pFVar10->Next;
                TFieldIterator<FProperty>::IterateToNext(&local_1e8);
                pFVar10 = local_1e8.Field;
              }
              if (local_220.bPopped == false) {
                if (((local_220.Mem)->TopMark != &local_220) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Mem.TopMark == this",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                                        ,0x215,L""), bVar12)) {
                  pcVar6 = (code *)swi(3);
                  uVar13 = (*pcVar6)();
                  return (bool)uVar13;
                }
                local_220.bPopped = true;
                (local_220.Mem)->NumMarks = (local_220.Mem)->NumMarks + -1;
                if (local_220.SavedChunk != (local_220.Mem)->TopChunk) {
                  FMemStackBase::FreeChunks(local_220.Mem,local_220.SavedChunk);
                }
                (local_220.Mem)->Top = local_220.Top;
                (local_220.Mem)->TopMark = local_220.NextTopmostMark;
                local_220.Top = (uchar *)0x0;
              }
              pwVar26 = RPC_GetLastFailedReason();
              if (pwVar26 == (wchar_t *)0x0) {
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_1a8.SharedReferenceCount.ReferenceController);
                if (local_220.bPopped == false) {
                  if (((local_220.Mem)->TopMark != &local_220) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Mem.TopMark == this",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                                          ,0x215,L""), bVar12)) {
                    pcVar6 = (code *)swi(3);
                    uVar13 = (*pcVar6)();
                    return (bool)uVar13;
                  }
                  local_220.bPopped = true;
                  (local_220.Mem)->NumMarks = (local_220.Mem)->NumMarks + -1;
                  if (local_220.SavedChunk != (local_220.Mem)->TopChunk) {
                    FMemStackBase::FreeChunks(local_220.Mem,local_220.SavedChunk);
                  }
                  (local_220.Mem)->Top = local_220.Top;
                  (local_220.Mem)->TopMark = local_220.NextTopmostMark;
                  local_220.Top = (uchar *)0x0;
                }
                if (bVar15) {
                  FCpuProfilerTrace::OutputEndEvent();
                }
                goto LAB_147a76c43;
              }
              if (1 < (byte)LogRep._0_1_) {
                RPC_GetLastFailedReason();
                UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
              }
              goto LAB_147a769ec;
            }
            if (1 < (byte)LogNet._0_1_) {
              UObjectBaseUtility::GetFullName
                        ((UObjectBaseUtility *)this_01,&local_90,(UObject *)0x0,None);
              ::FName::ToString(&local_240,&local_a0);
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
              if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a0.Data.AllocatorInstance.Data);
              }
              goto LAB_147a767cc;
            }
          }
          else if (1 < (byte)LogRep._0_1_) {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)this_01,&local_b0,(UObject *)0x0,None);
            ::FName::ToString(&local_240,&local_c0);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
            local_90.Data.AllocatorInstance.Data = local_b0.Data.AllocatorInstance.Data;
            if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c0.Data.AllocatorInstance.Data);
              local_90.Data.AllocatorInstance.Data = local_b0.Data.AllocatorInstance.Data;
            }
LAB_147a767cc:
            if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_90.Data.AllocatorInstance.Data);
            }
          }
          if (cVar14 != '\0') goto LAB_147a769ec;
          bVar12 = true;
          param_5->bIncompatible = true;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1a8.SharedReferenceCount.ReferenceController);
        if (local_220.bPopped == false) {
          if (((local_220.Mem)->TopMark != &local_220) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Mem.TopMark == this",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                                  ,0x215,L""), bVar18)) {
            pcVar6 = (code *)swi(3);
            uVar13 = (*pcVar6)();
            return (bool)uVar13;
          }
          local_220.bPopped = true;
          (local_220.Mem)->NumMarks = (local_220.Mem)->NumMarks + -1;
          if (local_220.SavedChunk != (local_220.Mem)->TopChunk) {
            FMemStackBase::FreeChunks(local_220.Mem,local_220.SavedChunk);
          }
          (local_220.Mem)->Top = local_220.Top;
          (local_220.Mem)->TopMark = local_220.NextTopmostMark;
          local_220.Top = (uchar *)0x0;
        }
        if (bVar15) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        goto LAB_147a76c46;
      }
      if (5 < (byte)LogRep._0_1_) {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_01,&local_70,(UObject *)0x0,None)
        ;
        ::FName::ToString(&local_240,&local_80);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
        if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.Data.AllocatorInstance.Data);
        }
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      bVar12 = -1 < CpuChannel->Enabled;
      if (bVar12) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId1362,"RPCDosDetection",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                   ,0x552);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1362);
      }
      local_198.RPCDoS = this_00;
      if (this_00->bRPCTrackingEnabled == false) {
        if ((this_00->bRPCDoSDetection != false) && (this_00->bHitchSuspendDetection == false)) {
          if ((this_00->SequentialRPCScopePrivate)._padding_ == '\0') {
            FRPCDoSDetection::PreSequentialRPC(this_00);
          }
          if ((this_00->ForcedRPCTracking != local_240) ||
             (uVar19 = rand(), dVar29 = (double)((float)(uVar19 & 0x7fff) * __real_38000100),
             this_00->ForcedRPCTrackingChance <= dVar29 &&
             dVar29 != this_00->ForcedRPCTrackingChance)) {
            pFVar23 = FRPCDoSDetection::GetSequentialRPCScope(this_00);
            bVar1 = (pFVar23->LightweightRPCTracking).Count;
            (pFVar23->LightweightRPCTracking).Count = bVar1 + 1;
            (pFVar23->LightweightRPCTracking).RPC[bVar1].Function = pUVar20;
            (pFVar23->LightweightRPCTracking).RPC[bVar1].Name = local_240;
          }
          else {
            dVar29 = FWindowsPlatformTime::Seconds();
            FRPCDoSDetection::EnableForcedRPCTracking(this_00,pUVar20,local_240,dVar29);
          }
        }
LAB_147a764c9:
        if (bVar12) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        goto LAB_147a764d3;
      }
      if ((this_00->bRPCDoSDetection == false) || (this_00->bHitchSuspendDetection != false))
      goto LAB_147a764c9;
      if ((this_00->SequentialRPCScopePrivate)._padding_ == '\0') {
        FRPCDoSDetection::PreSequentialRPC(this_00);
      }
      if (this_00->bRPCTrackingEnabled == false) goto LAB_147a764c9;
      if (((UE::Net::GRPCDoSScopeDebugging != 0) &&
          ((this_00->SequentialRPCScopePrivate)._padding_ == '\0')) &&
         (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_1192164650855168929>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Net\\RPCDoSDetection.h"
                              ,0x45f,
                              "GRPCDoSScopeDebugging == 0 || SequentialRPCScopePrivate.IsActive()"),
         bVar15)) {
        pcVar6 = (code *)swi(3);
        uVar13 = (*pcVar6)();
        return (bool)uVar13;
      }
      EVar16 = FRPCDoSDetection::CheckRPCTracking(this_00,pUVar20,local_240);
      if (EVar16 != BlockRPC) goto LAB_147a764c9;
      if (4 < (byte)LogRepTraffic._0_1_) {
        ::FName::ToString(&local_240,&local_e0);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRepTraffic);
        if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e0.Data.AllocatorInstance.Data);
        }
      }
      if (bVar12) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
  }
LAB_147a76c43:
  bVar12 = true;
LAB_147a76c46:
  if ((local_1c0 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_1c0 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_1c0 & 4) != 0) {
    FThreadStats::AddMessage(local_1c8,CycleScopeEnd);
  }
  local_1c0 = 0;
  if ((local_228 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_228 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_228 & 4) != 0) {
    FThreadStats::AddMessage(local_230,CycleScopeEnd);
  }
  local_228 = 0;
  FScopedRPCTimingTracker::~FScopedRPCTimingTracker(&local_198);
  FCsvProfiler::EndExclusiveStat("HandleRPC");
  return bVar12;
}

// ReplicateCustomDeltaProperties @ 147a81120

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
/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */

void __thiscall
FObjectReplicator::ReplicateCustomDeltaProperties
          (FObjectReplicator *this,FNetBitWriter *param_1,FReplicationFlags param_2,bool *param_3)

{
  EResendAllDataState EVar1;
  int iVar2;
  FName FVar3;
  UNetConnection *pUVar4;
  FRepChangedPropertyTracker *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  INetDeltaBaseState *pIVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  ushort uVar13;
  ELifetimeCondition EVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_NetReplicateCustomDeltaPropTime> FVar16;
  UObject *pUVar17;
  FProperty *pFVar18;
  short *psVar19;
  FPropertyRetirement *pFVar20;
  FRepLayout *this_00;
  FPropertyRetirement *pFVar21;
  FPropertyRetirement *pFVar22;
  longlong lVar23;
  TArray<TSharedPtr<INetDeltaBaseState,1>,TSizedDefaultAllocator<32>_> *pTVar24;
  TSharedPtr<INetDeltaBaseState,1> *pTVar25;
  uint uVar26;
  undefined1 auStackY_258 [32];
  byte local_1f7;
  FSendingRepState *local_1f0;
  TSharedPtr<INetDeltaBaseState,1> local_1e8;
  FName local_1d8;
  FColor_u_0 local_1d0;
  uint local_1cc;
  UObject *local_1c8;
  FRepLayout *local_1c0;
  FName local_1b8;
  FNetBitWriter *local_1b0;
  FNetFieldExportGroup *local_1a8;
  FName local_1a0;
  FObjectReplicator *local_198;
  FName local_190;
  bool *local_178;
  FProperty *local_170;
  FName local_168;
  INetDeltaBaseState *local_160;
  TReferenceControllerBase<1> *pTStack_158;
  INetDeltaBaseState *local_150;
  TReferenceControllerBase<1> *pTStack_148;
  INetDeltaBaseState *local_140;
  TReferenceControllerBase<1> *pTStack_138;
  FNetBitWriter local_128;
  FReplicationFlags local_58 [2];
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_258;
  local_1b0 = param_1;
  local_198 = this;
  local_178 = param_3;
  if (((this->RepLayout).Object == (FRepLayout *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("RepLayout",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                          ,0x66b,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (((this->RepLayout).Object == (FRepLayout *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_1c0 = (this->RepLayout).Object;
  *param_3 = false;
  uVar13 = FRepLayout::GetNumLifetimeCustomDeltaProperties(local_1c0);
  local_1cc = (uint)uVar13;
  if (local_1cc == 0) {
    return;
  }
  if (GUseDetailedScopeCounters == false) {
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_NetReplicateCustomDeltaPropTime>)
             &TStatId::TStatId_NAME_None;
  }
  else {
    FVar16 = StatPtr_STAT_NetReplicateCustomDeltaPropTime;
    if (StatPtr_STAT_NetReplicateCustomDeltaPropTime ==
        (FThreadSafeStaticStat<FStat_STAT_NetReplicateCustomDeltaPropTime>)0x0) {
      pFVar15 = ::FName::FName(&local_168,"STAT_NetReplicateCustomDeltaPropTime");
      FVar16 = (FThreadSafeStaticStat<FStat_STAT_NetReplicateCustomDeltaPropTime>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetReplicateCustomDeltaPropTime
                          ,*pFVar15,L"Custom Delta Property Rep Time","STATGROUP_Game",
                          "STATCAT_Advanced",L"Game",true,true,ST_int64,true,false,MCR_Invalid);
    }
  }
  FVar3 = *(FName *)FVar16;
  bVar11 = false;
  bVar9 = false;
  local_190.ComparisonIndex.Value = 0;
  local_190.Number = 0;
  bVar10 = false;
  bVar12 = false;
  if ((FVar3.ComparisonIndex.Value.Value != 0) || (FVar3.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1d0.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1d0._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar11 = false;
      bVar9 = true;
      bVar10 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1b8.ComparisonIndex.Value = FVar3.ComparisonIndex.Value.Value;
        local_1b8.Number = FVar3.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1b8,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                   ,0x678);
        bVar11 = true;
        bVar9 = true;
        bVar10 = true;
        bVar12 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_1d8 = FVar3;
      local_1a0 = FVar3;
      FThreadStats::AddMessage(FVar3,CycleScopeStart);
      bVar10 = true;
      goto LAB_147a81338;
    }
  }
  bVar9 = bVar12;
  bVar11 = bVar10;
  bVar10 = false;
  local_1a0 = local_190;
LAB_147a81338:
  pUVar17 = this->ObjectPtr;
  local_1c8 = pUVar17;
  if (pUVar17 == (UObject *)0x0) {
    pUVar17 = FWeakObjectPtr::Get(&(this->WeakObjectPtr).WeakPtr);
    local_1f0 = (((this->RepState).Ptr)->SendingRepState).Ptr;
    local_1c8 = pUVar17;
    if ((pUVar17 == (UObject *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Object",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                            ,0x680,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  else {
    local_1f0 = (((this->RepState).Ptr)->SendingRepState).Ptr;
  }
  if ((this->OwningChannel == (UActorChannel *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("OwningChannel",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                          ,0x681,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pUVar4 = (UNetConnection *)this->OwningChannel->_padding_;
  if (pUVar4 == (UNetConnection *)0x0) {
    bVar12 = this->Connection == (UNetConnection *)0x0;
  }
  else {
    bVar12 = pUVar4 == this->Connection;
  }
  if ((!bVar12) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Connection == OwningChannel->Connection",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                          ,0x682,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  EVar1 = this->Connection->ResendAllDataState;
  if (EVar1 == None) {
    pTVar24 = &local_1f0->RecentCustomDeltaState;
  }
  else {
    lVar23 = 0x4a0;
    if (EVar1 != SinceOpen) {
      lVar23 = 0x4b0;
    }
    pTVar24 = (TArray<TSharedPtr<INetDeltaBaseState,1>,TSizedDefaultAllocator<32>_> *)
              ((longlong)local_1f0->ChangeHistory + lVar23 + -0x30);
  }
  local_1d8 = (FName)pTVar24;
  if (((this->ChangelistMgr).Object == (FReplicationChangelistMgr *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  this_00 = local_1c0;
  FRepLayout::PreSendCustomDeltaProperties
            (local_1c0,pUVar17,this->Connection,(this->ChangelistMgr).Object,
             ((this->Connection->Driver).field0_0x0.DebugPtr)->ReplicationFrame,pTVar24);
  UE::Net::BuildConditionMapFromRepFlags(local_58);
  local_1a8 = UActorChannel::GetOrCreateNetFieldExportGroupForClassNetCache
                        (this->OwningChannel,pUVar17);
  FNetBitWriter::FNetBitWriter(&local_128,(this->Connection->PackageMap).field0_0x0.DebugPtr,0x400);
  if ((param_1->TraceCollector).Ptr == (FNetTraceCollector *)0x0) {
    local_128.TraceCollector.Ptr = (FNetTraceCollector *)0x0;
    local_1f7 = this->Connection->field_0xfc;
    local_128.NetTokenExportContext.Ptr = (param_1->NetTokenExportContext).Ptr;
  }
  else {
    if ((GNetTraceRuntimeVerbosity == 0) || (GNetTraceRuntimeVerbosity == 0)) {
      local_128.TraceCollector.Ptr = (FNetTraceCollector *)0x0;
    }
    else {
      local_128.TraceCollector.Ptr = FNetTrace::CreateTraceCollector();
    }
    local_1f7 = this->Connection->field_0xfc;
    local_128.NetTokenExportContext.Ptr = (param_1->NetTokenExportContext).Ptr;
  }
  local_1f7 = local_1f7 & 1;
  uVar13 = 0;
  uVar26 = 0;
  do {
    EVar14 = FRepLayout::GetLifetimeCustomDeltaPropertyCondition(this_00,uVar13);
    pFVar18 = FRepLayout::GetLifetimeCustomDeltaProperty(this_00,uVar13);
    local_170 = pFVar18;
    if (EVar14 == COND_Dynamic) {
      pFVar5 = (local_1f0->RepChangedPropertyTracker).Object;
      if (pFVar5 != (FRepChangedPropertyTracker *)0x0) {
        psVar19 = TMapBase<unsigned_short,short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,short,0>_>
                  ::Find((TMapBase<unsigned_short,short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,short,0>_>
                          *)&(pFVar5->ActiveState).DynamicConditions,pFVar18->RepIndex);
        if (psVar19 == (short *)0x0) {
          EVar14 = COND_Dynamic;
        }
        else {
          EVar14 = (ELifetimeCondition)*psVar19;
        }
        goto LAB_147a815ab;
      }
    }
    else {
LAB_147a815ab:
      if (EVar14 < COND_Max) {
LAB_147a815da:
        if (EVar14 < COND_Max) goto LAB_147a81605;
      }
      else {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("RepCondition >= 0 && RepCondition < COND_Max",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                            ,0x6b0,L"");
        if (bVar12) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (-1 < (int)EVar14) goto LAB_147a815da;
      }
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index>=0 && Index<NumBits",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StaticBitArray.h"
                          ,0xb7,L"");
      if (bVar12) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
LAB_147a81605:
    if ((*(ulonglong *)(local_58 + (ulonglong)(EVar14 >> 6) * 2) >> (EVar14 & 0x3f) & 1) == 0) {
      *local_178 = true;
    }
    else {
      local_1e8.Object = (INetDeltaBaseState *)0x0;
      local_1e8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      FBitWriter::Reset((FBitWriter *)&local_128);
      if (local_128.TraceCollector.Ptr != (FNetTraceCollector *)0x0) {
        FNetTraceCollector::Reset(local_128.TraceCollector.Ptr);
      }
      FVar3 = local_1d8;
      if ((*(int *)((longlong)local_1d8 + 8) <= (int)uVar26) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pTVar25 = (TSharedPtr<INetDeltaBaseState,1> *)
                (((ForAnyElementType *)FVar3)->Data + (ulonglong)uVar13 * 0x10);
      EVar1 = this->Connection->ResendAllDataState;
      if (EVar1 == None) {
        pFVar21 = (FPropertyRetirement *)0x0;
        if (local_1f7 == 0) {
          if (((local_1f0->Retirement).ArrayNum <= (int)uVar26) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar20 = (FPropertyRetirement *)
                    ((local_1f0->Retirement).AllocatorInstance.Data + (ulonglong)uVar13 * 0x28);
          iVar2 = this->Connection->OutAckPacketId;
          ValidateRetirementHistory(pFVar20,local_1c8);
          uVar26 = 0;
          pFVar21 = pFVar20;
          for (pFVar22 = pFVar20->Next; pFVar22 != (FPropertyRetirement *)0x0;
              pFVar22 = pFVar22->Next) {
            if ((pFVar22->OutPacketIdRange).Last <= iVar2) {
              if (5 < (byte)LogRepTraffic._0_1_) {
                UE::Logging::Private::BasicLog<6>
                          ((FStaticBasicLogRecord *)&PTR_u_Deleting_Proper_15183c980,
                           (FLogCategoryBase *)&LogRepTraffic);
              }
              pFVar21 = pFVar21->Next;
              if ((pFVar20->Next != pFVar21) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Retire.Next == ToDelete",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                                      ,0x65a,L""), bVar12)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pFVar20->Next = pFVar21->Next;
              uVar26 = pFVar21->FastArrayChangelistHistory;
              pFVar22 = pFVar20;
              if (pFVar21 != (FPropertyRetirement *)0x0) {
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          ((pFVar21->DynamicState).SharedReferenceCount.ReferenceController);
                ::operator_delete(pFVar21,0x28);
              }
            }
            pFVar21 = pFVar22;
          }
          if ((uVar26 != 0) && (pTVar25->Object != (INetDeltaBaseState *)0x0)) {
            pTVar25->Object->LastAckedHistory = uVar26;
          }
          if ((pFVar21->Next != (FPropertyRetirement *)0x0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("*LastNext == nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                                  ,0x6f4,L""), bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pUVar17 = local_1c8;
          ValidateRetirementHistory(pFVar20,local_1c8);
        }
        bVar12 = SendCustomDeltaProperty(this,pUVar17,uVar13,&local_128,&local_1e8,pTVar25);
        if (bVar12) {
          if (local_1f7 == 0) {
            pFVar20 = ::operator_new(0x28);
            if (pFVar20 != (FPropertyRetirement *)0x0) {
              (pFVar20->OutPacketIdRange).First = -1;
              (pFVar20->OutPacketIdRange).Last = -1;
              pFVar20->Next = (FPropertyRetirement *)0x0;
              (pFVar20->DynamicState).Object = (INetDeltaBaseState *)0x0;
              (pFVar20->DynamicState).SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)0x0;
              pFVar20->FastArrayChangelistHistory = 0;
            }
            pFVar21->Next = pFVar20;
            pTVar6 = (pTVar25->SharedReferenceCount).ReferenceController;
            pIVar7 = pTVar25->Object;
            if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_150 = (pFVar20->DynamicState).Object;
            pTStack_148 = (pFVar20->DynamicState).SharedReferenceCount.ReferenceController;
            (pFVar20->DynamicState).Object = pIVar7;
            (pFVar20->DynamicState).SharedReferenceCount.ReferenceController = pTVar6;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_148);
            if (local_1e8.Object != (INetDeltaBaseState *)0x0) {
              if ((local_1e8.Object == (INetDeltaBaseState *)0x0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar12)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pFVar21->Next->FastArrayChangelistHistory = (local_1e8.Object)->ChangelistHistory;
            }
          }
          if (local_1e8.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_1e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_1e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          local_140 = pTVar25->Object;
          pTStack_138 = (pTVar25->SharedReferenceCount).ReferenceController;
          pTVar25->Object = local_1e8.Object;
          (pTVar25->SharedReferenceCount).ReferenceController =
               local_1e8.SharedReferenceCount.ReferenceController;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_138);
          pFVar18 = local_170;
          WritePropertyHeaderAndPayload(this,pUVar17,local_170,local_1a8,local_1b0,&local_128);
          if ((GNetworkProfiler.bIsTrackingEnabled != false) ||
             (GNetworkProfiler.bShouldTrackingBeEnabled != false)) {
            if (__CsvProfilerStat1818 == false) {
              FCsvProfilerTrace::OutputInlineStatExclusive("NetworkProfiler");
              __CsvProfilerStat1818 = true;
            }
            FCsvProfiler::BeginExclusiveStat("NetworkProfiler","CSV_NetworkProfiler");
            FNetworkProfiler::TrackReplicateProperty
                      (&GNetworkProfiler,pFVar18,(ushort)local_128._padding_,this->Connection);
            FCsvProfiler::EndExclusiveStat("NetworkProfiler");
          }
        }
      }
      else if (EVar1 == SinceCheckpoint) {
        bVar12 = SendCustomDeltaProperty(this,pUVar17,uVar13,&local_128,&local_1e8,pTVar25);
        if (bVar12) {
          if (local_1e8.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_1e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_1e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          local_160 = pTVar25->Object;
          pTStack_158 = (pTVar25->SharedReferenceCount).ReferenceController;
          pTVar25->Object = local_1e8.Object;
          (pTVar25->SharedReferenceCount).ReferenceController =
               local_1e8.SharedReferenceCount.ReferenceController;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_158);
LAB_147a81720:
          WritePropertyHeaderAndPayload(this,pUVar17,pFVar18,local_1a8,local_1b0,&local_128);
        }
      }
      else {
        bVar12 = SendCustomDeltaProperty(this,pUVar17,uVar13,&local_128,&local_1e8,pTVar25);
        if (bVar12) goto LAB_147a81720;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1e8.SharedReferenceCount.ReferenceController);
    }
    uVar13 = uVar13 + 1;
    uVar26 = (uint)uVar13;
    this_00 = local_1c0;
    if (local_1cc <= uVar26) {
      FNetTrace::DestroyTraceCollector(local_128.TraceCollector.Ptr);
      FBitWriter::~FBitWriter((FBitWriter *)&local_128);
      FVar3 = local_1a0;
      if (((this->ChangelistMgr).Object == (FReplicationChangelistMgr *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x44d,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FRepLayout::PostSendCustomDeltaProperties
                (local_1c0,pUVar17,local_198->Connection,(local_198->ChangelistMgr).Object,
                 (TArray<TSharedPtr<INetDeltaBaseState,1>,TSizedDefaultAllocator<32>_> *)local_1d8);
      if (bVar9) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar11) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar10) {
        FThreadStats::AddMessage(FVar3,CycleScopeEnd);
      }
      return;
    }
  } while( true );
}

// ReplicateProperties @ 147a81b40

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
FObjectReplicator::ReplicateProperties
          (FObjectReplicator *this,FOutBunch *param_1,FReplicationFlags param_2)

{
  bool bVar1;
  FLLMScope local_res10 [2];
  FName local_res20;
  FMemScope local_e8 [2];
  FNetBitWriter local_d8;
  
  FLLMScope::FLLMScope
            (local_res10,LLMTagDeclaration_NetObjReplicator.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_NetObjReplicator.UniqueName;
  FMemScope::FMemScope(local_e8,&local_res20,true);
  FNetBitWriter::FNetBitWriter(&local_d8,(UPackageMap *)param_1->_padding_,0x2000);
  bVar1 = ReplicateProperties_r(this,param_1,param_2,&local_d8);
  FBitWriter::~FBitWriter((FBitWriter *)&local_d8);
  FMemScope::~FMemScope(local_e8);
  FLLMScope::~FLLMScope(local_res10);
  return bVar1;
}

// ReplicateProperties @ 147a81c10

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
FObjectReplicator::ReplicateProperties
          (FObjectReplicator *this,FOutBunch *param_1,FReplicationFlags param_2,
          FNetBitWriter *param_3)

{
  bool bVar1;
  FLLMScope local_28;
  FName local_24;
  FMemScope local_18 [2];
  
  FLLMScope::FLLMScope
            (&local_28,LLMTagDeclaration_NetObjReplicator.UniqueName,false,None,Default,true);
  local_24 = LLMTagDeclaration_NetObjReplicator.UniqueName;
  FMemScope::FMemScope(local_18,&local_24,true);
  bVar1 = ReplicateProperties_r(this,param_1,param_2,param_3);
  FMemScope::~FMemScope(local_18);
  FLLMScope::~FLLMScope(&local_28);
  return bVar1;
}

// ReplicateProperties_r @ 147a81cc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */

bool __thiscall
FObjectReplicator::ReplicateProperties_r
          (FObjectReplicator *this,FOutBunch *param_1,FReplicationFlags param_2,
          FNetBitWriter *param_3)

{
  TUniquePtr<FRepState,TDefaultDelete<FRepState>_> *this_00;
  int *piVar1;
  EResendAllDataState EVar2;
  int iVar3;
  uint uVar4;
  UNetDriver *this_01;
  FSendingRepState *pFVar5;
  FReplicationChangelistMgr *pFVar6;
  UActorChannel *pUVar7;
  UClass *pUVar8;
  UNetConnection *pUVar9;
  FOutBunch *pFVar10;
  FNetTokenExportContext *this_02;
  code *pcVar11;
  bool bVar12;
  undefined1 uVar13;
  bool bVar14;
  ERepLayoutResult EVar15;
  TRepDataBufferBase<0,unsigned_char_const_> TVar16;
  FNetTraceCollector *pFVar17;
  UObject *pUVar18;
  FRepLayout *pFVar19;
  TUniquePtr<FRepState,TDefaultDelete<FRepState>_> TVar20;
  FRepState *pFVar21;
  uchar *puVar22;
  bool local_res8 [8];
  FOutBunch *local_res10;
  FReplicationFlags_u_0 local_res18 [2];
  FRepState *local_98;
  FName local_90;
  UNetConnection *local_88;
  FString local_80;
  TSharedPtr<FRepChangedPropertyTracker,1> local_70;
  ForElementType<UE::Net::FNetToken> local_58;
  int iStack_50;
  undefined4 uStack_4c;
  TArrayView<UE::Net::FNetToken_const_,int> local_48;
  
  TVar16.Data = (uchar *)this->ObjectPtr;
  local_res10 = param_1;
  local_res18[0] = param_2.field0_0x0;
  if (((UObject *)TVar16.Data == (UObject *)0x0) &&
     (TVar16.Data = (uchar *)FWeakObjectPtr::Get(&(this->WeakObjectPtr).WeakPtr),
     (UObject *)TVar16.Data == (UObject *)0x0)) {
    if (5 < (byte)LogRep._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
    }
    return false;
  }
  if ((this->OwningChannel == (UActorChannel *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("OwningChannel",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                          ,0x78e,L""), bVar12)) {
    pcVar11 = (code *)swi(3);
    uVar13 = (*pcVar11)();
    return (bool)uVar13;
  }
  if (((this->RepLayout).Object == (FRepLayout *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("RepLayout.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                          ,0x78f,L""), bVar12)) {
    pcVar11 = (code *)swi(3);
    uVar13 = (*pcVar11)();
    return (bool)uVar13;
  }
  if (((this->RepState).Ptr == (FRepState *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("RepState.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                          ,0x790,L""), bVar12)) {
    pcVar11 = (code *)swi(3);
    uVar13 = (*pcVar11)();
    return (bool)uVar13;
  }
  if (((((this->RepState).Ptr)->SendingRepState).Ptr == (FSendingRepState *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("RepState->GetSendingRepState()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                          ,0x791,L""), bVar12)) {
    pcVar11 = (code *)swi(3);
    uVar13 = (*pcVar11)();
    return (bool)uVar13;
  }
  if ((this->ChangelistMgr).Object == (FReplicationChangelistMgr *)0x0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("ChangelistMgr.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                        ,0x792,L"");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      uVar13 = (*pcVar11)();
      return (bool)uVar13;
    }
    if (((this->ChangelistMgr).Object == (FReplicationChangelistMgr *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar11 = (code *)swi(3);
      uVar13 = (*pcVar11)();
      return (bool)uVar13;
    }
  }
  if (((this->ChangelistMgr).Object == (FReplicationChangelistMgr *)0xfffffffffffffff8) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ChangelistMgr->GetRepChangelistState() != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                          ,0x793,L""), bVar12)) {
    pcVar11 = (code *)swi(3);
    uVar13 = (*pcVar11)();
    return (bool)uVar13;
  }
  if (((this->ChangelistMgr).Object == (FReplicationChangelistMgr *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar11 = (code *)swi(3);
    uVar13 = (*pcVar11)();
    return (bool)uVar13;
  }
  iVar3 = (((this->ChangelistMgr).Object)->RepChangelistState).StaticBuffer.Buffer.ArrayNum;
  if (((this->RepLayout).Object == (FRepLayout *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar11 = (code *)swi(3);
    uVar13 = (*pcVar11)();
    return (bool)uVar13;
  }
  pFVar19 = (this->RepLayout).Object;
  if (((pFVar19->Flags & NoReplicatedProperties) == None) && ((pFVar19->Parents).ArrayNum != 0)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if (((iVar3 == 0) != bVar12) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(ChangelistMgr->GetRepChangelistState()->StaticBuffer.Num() == 0) == RepLayout->IsEmpty()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                          ,0x794,L""), bVar12)) {
    pcVar11 = (code *)swi(3);
    uVar13 = (*pcVar11)();
    return (bool)uVar13;
  }
  local_88 = (UNetConnection *)this->OwningChannel->_padding_;
  (param_3->NetTokenExportContext).Ptr = (FNetTokenExportContext *)param_1->_padding_;
  if (((param_1->_padding_ == 0) || (GNetTraceRuntimeVerbosity == 0)) ||
     (GNetTraceRuntimeVerbosity == 0)) {
    pFVar17 = (FNetTraceCollector *)0x0;
  }
  else {
    pFVar17 = FNetTrace::CreateTraceCollector();
  }
  (param_3->TraceCollector).Ptr = pFVar17;
  EVar2 = this->Connection->ResendAllDataState;
  if (EVar2 == SinceCheckpoint) {
    this_00 = &this->CheckpointRepState;
    if ((this->CheckpointRepState).Ptr == (FRepState *)0x0) {
      this_01 = (this->Connection->Driver).field0_0x0.DebugPtr;
      pUVar18 = this->ObjectPtr;
      if (pUVar18 == (UObject *)0x0) {
        pUVar18 = FWeakObjectPtr::Get(&(this->WeakObjectPtr).WeakPtr);
      }
      UNetDriver::FindOrCreateRepChangedPropertyTracker(this_01,&local_70,pUVar18);
      pFVar19 = TSharedPtr<FRepLayout,1>::operator->(&this->RepLayout);
      TVar20 = FRepLayout::CreateRepState
                         (pFVar19,(TRepDataBufferBase<0,unsigned_char_const_>)&local_98,
                          (TSharedPtr<FRepChangedPropertyTracker,1> *)TVar16.Data,
                          (ECreateRepStateFlags)&local_70);
      if ((FRepState *)this_00 != TVar20.Ptr) {
        pFVar21 = this_00->Ptr;
        this_00->Ptr = (FRepState *)((TVar20.Ptr)->ReceivingRepState).Ptr;
        ((TVar20.Ptr)->ReceivingRepState).Ptr = (FReceivingRepState *)0x0;
        TDefaultDelete<FRepState>::operator()((TDefaultDelete<FRepState> *)this_00,pFVar21);
      }
      TDefaultDelete<FRepState>::operator()((TDefaultDelete<FRepState> *)&local_98,local_98);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_70.SharedReferenceCount.ReferenceController);
    }
    pFVar21 = this_00->Ptr;
    if (pFVar21 == (FRepState *)0x0) goto LAB_147a8202e;
  }
  else {
LAB_147a8202e:
    pFVar21 = (this->RepState).Ptr;
  }
  pFVar5 = (pFVar21->SendingRepState).Ptr;
  if ((this->OwningChannel->bForceCompareProperties == 0) && (EVar2 != SinceCheckpoint)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  uVar4 = ((this->Connection->Driver).field0_0x0.DebugPtr)->ReplicationFrame;
  if (((this->ChangelistMgr).Object == (FReplicationChangelistMgr *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L""), bVar14)) {
    pcVar11 = (code *)swi(3);
    uVar13 = (*pcVar11)();
    return (bool)uVar13;
  }
  pFVar6 = (this->ChangelistMgr).Object;
  if (((this->RepLayout).Object == (FRepLayout *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L""), bVar14)) {
    pcVar11 = (code *)swi(3);
    uVar13 = (*pcVar11)();
    return (bool)uVar13;
  }
  EVar15 = FRepLayout::UpdateChangelistMgr
                     ((this->RepLayout).Object,pFVar5,pFVar6,(UObject *)TVar16.Data,uVar4,
                      (FReplicationFlags *)&local_res18[0]._s_0,bVar12);
  if (EVar15 == FatalError) {
    UNetConnection::SetPendingCloseDueToReplicationFailure(this->Connection);
  }
  else {
    if (((this->RepLayout).Object == (FRepLayout *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar11 = (code *)swi(3);
      uVar13 = (*pcVar11)();
      return (bool)uVar13;
    }
    pFVar19 = (this->RepLayout).Object;
    pUVar7 = this->OwningChannel;
    pUVar8 = (this->ObjectClass).field0_0x0.DebugPtr;
    if (((this->ChangelistMgr).Object == (FReplicationChangelistMgr *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar11 = (code *)swi(3);
      uVar13 = (*pcVar11)();
      return (bool)uVar13;
    }
    bVar12 = FRepLayout::ReplicateProperties
                       (pFVar19,pFVar5,&((this->ChangelistMgr).Object)->RepChangelistState,TVar16,
                        pUVar8,pUVar7,param_3,(FReplicationFlags *)&local_res18[0]._s_0);
    if ((GNetworkProfiler.bIsTrackingEnabled != false) ||
       (GNetworkProfiler.bShouldTrackingBeEnabled != false)) {
      if (__CsvProfilerStat2018 == false) {
        FCsvProfilerTrace::OutputInlineStatExclusive("NetworkProfiler");
        __CsvProfilerStat2018 = true;
      }
      FCsvProfiler::BeginExclusiveStat("NetworkProfiler","CSV_NetworkProfiler");
      if ((((GNetworkProfiler.bIsTrackingEnabled != false) ||
           (GNetworkProfiler.bShouldTrackingBeEnabled != false)) &&
          (FNetworkProfiler::bIsComparisonTrackingEnabled != false)) && (bVar12)) {
        pUVar9 = this->Connection;
        EVar2 = pUVar9->ResendAllDataState;
        pFVar19 = TSharedPtr<FRepLayout,1>::operator->(&this->RepLayout);
        FNetworkProfiler::TrackReplicatePropertiesMetadata
                  (&GNetworkProfiler,(UObject *)pFVar19->Owner,&pFVar5->InactiveParents,
                   EVar2 != None,pUVar9);
      }
      FCsvProfiler::EndExclusiveStat("NetworkProfiler");
    }
    local_res8[0] = false;
    ReplicateCustomDeltaProperties(this,param_3,(FReplicationFlags)local_res18[0]._s_0,local_res8);
    if (this->Connection->ResendAllDataState == None) {
      this->bLastUpdateEmpty = param_3->_padding_ == 0;
      if ((this->RemoteFunctions != (FOutBunch *)0x0) && (0 < this->RemoteFunctions->_padding_)) {
        if ((GNetRPCDebug == 1) && (2 < (byte)LogRepTraffic._0_1_)) {
          local_90 = *(FName *)(TVar16.Data + 0x18);
          ::FName::ToString(&local_90,&local_80);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRepTraffic);
          if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_80.Data.AllocatorInstance.Data);
          }
        }
        pcVar11 = *(code **)(param_3->_padding_ + 400);
        puVar22 = FBitWriter::GetData((FBitWriter *)this->RemoteFunctions);
        (*pcVar11)(param_3,puVar22);
        pFVar10 = this->RemoteFunctions;
        this_02 = (param_3->NetTokenExportContext).Ptr;
        local_58 = (pFVar10->NetTokensPendingExport).AllocatorInstance.SecondaryData;
        iStack_50 = (pFVar10->NetTokensPendingExport).ArrayNum;
        if (local_58 == (ForElementType<UE::Net::FNetToken>)0x0) {
          local_58 = (ForElementType<UE::Net::FNetToken>)&pFVar10->NetTokensPendingExport;
        }
        if ((iStack_50 < 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar14)) {
          pcVar11 = (code *)swi(3);
          uVar13 = (*pcVar11)();
          return (bool)uVar13;
        }
        local_48._12_4_ = uStack_4c;
        local_48.ArrayNum = iStack_50;
        local_48.DataPtr = (FNetToken *)local_58;
        UE::Net::FNetTokenExportContext::AppendNetTokensPendingExport(this_02,&local_48);
        pFVar10 = this->RemoteFunctions;
        (pFVar10->NetTokensPendingExport).ArrayNum = 0;
        if ((pFVar10->NetTokensPendingExport).ArrayMax < 0) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetToken>_>
                    (4,4,0,&(pFVar10->NetTokensPendingExport).AllocatorInstance,0,
                     &(pFVar10->NetTokensPendingExport).ArrayMax);
        }
        (**(code **)(this->RemoteFunctions->_padding_ + 0xc0))();
        piVar1 = &(this->RemoteFuncInfo).ArrayMax;
        (this->RemoteFuncInfo).ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,0,&(this->RemoteFuncInfo).AllocatorInstance,0,piVar1);
        }
        if ((GNetworkProfiler.bIsTrackingEnabled != false) ||
           (GNetworkProfiler.bShouldTrackingBeEnabled != false)) {
          if (__CsvProfilerStat2105 == false) {
            FCsvProfilerTrace::OutputInlineStatExclusive("NetworkProfiler");
            __CsvProfilerStat2105 = true;
          }
          FCsvProfiler::BeginExclusiveStat("NetworkProfiler","CSV_NetworkProfiler");
          FNetworkProfiler::FlushQueuedRPCs(&GNetworkProfiler,local_88,(UObject *)TVar16.Data);
          FCsvProfiler::EndExclusiveStat("NetworkProfiler");
        }
      }
      bVar14 = param_3->_padding_ != 0;
      if (param_3->_padding_ != 0) {
        UActorChannel::WriteContentBlockPayload
                  (this->OwningChannel,(UObject *)TVar16.Data,(FNetBitWriter *)local_res10,bVar12,
                   param_3);
      }
      goto LAB_147a8250c;
    }
    this->bDirtyForReplay = 0;
    if (param_3->_padding_ != 0) {
      UActorChannel::WriteContentBlockPayload
                (this->OwningChannel,(UObject *)TVar16.Data,(FNetBitWriter *)local_res10,bVar12,
                 param_3);
      bVar14 = true;
      goto LAB_147a8250c;
    }
  }
  bVar14 = false;
LAB_147a8250c:
  FNetTrace::DestroyTraceCollector((param_3->TraceCollector).Ptr);
  (param_3->NetTokenExportContext).Ptr = (FNetTokenExportContext *)0x0;
  return bVar14;
}

// SendCustomDeltaProperty @ 147a86b50

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
FObjectReplicator::SendCustomDeltaProperty
          (FObjectReplicator *this,UObject *param_1,ushort param_2,FNetBitWriter *param_3,
          TSharedPtr<INetDeltaBaseState,1> *param_4,TSharedPtr<INetDeltaBaseState,1> *param_5)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  UNetDriver *pUVar3;
  UWorld *this_00;
  code *pcVar4;
  TSharedPtr<INetDeltaBaseState,1> *pTVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  bool bVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_NetSerializeItemDeltaTime> FVar12;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FName FVar13;
  FColor_u_0 local_res18 [2];
  FNetBitWriter *local_res20;
  LARGE_INTEGER local_178;
  FStatMessage local_170;
  FNetDeltaSerializeInfo local_158;
  INetSerializeCB local_b8;
  UNetDriver *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  TReferenceControllerBase<1> *pTStack_90;
  undefined1 local_88;
  FReplicationChangelistMgr *local_80;
  TReferenceControllerBase<1> *pTStack_78;
  FName local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  pTVar5 = param_4;
  local_res20 = param_3;
  if (param_4->Object != (INetDeltaBaseState *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!NewFullState.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                       ,0x161,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      uVar9 = (*pcVar4)();
      return (bool)uVar9;
    }
  }
  if ((this->RepLayout).Object == (FRepLayout *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("RepLayout",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                       ,0x162,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      uVar9 = (*pcVar4)();
      return (bool)uVar9;
    }
  }
  if (GUseDetailedScopeCounters == false) {
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_NetSerializeItemDeltaTime>)
             &TStatId::TStatId_NAME_None;
  }
  else {
    FVar12 = StatPtr_STAT_NetSerializeItemDeltaTime;
    if (StatPtr_STAT_NetSerializeItemDeltaTime ==
        (FThreadSafeStaticStat<FStat_STAT_NetSerializeItemDeltaTime>)0x0) {
      pFVar11 = ::FName::FName(&local_68,"STAT_NetSerializeItemDeltaTime");
      FVar12 = (FThreadSafeStaticStat<FStat_STAT_NetSerializeItemDeltaTime>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetSerializeItemDeltaTime,
                          *pFVar11,L"NetSerializeItemDelta Time","STATGROUP_Game","STATCAT_Advanced"
                          ,L"Game",true,true,ST_int64,true,false,MCR_Invalid);
    }
  }
  FVar13 = *(FName *)FVar12;
  bVar8 = false;
  bVar7 = false;
  if ((FVar13.ComparisonIndex.Value.Value == 0) && (FVar13.Number == 0)) {
LAB_147a86d22:
    bVar6 = false;
    FVar13.ComparisonIndex.Value = 0;
    FVar13.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        param_4._0_4_ = FVar13.ComparisonIndex.Value.Value;
        param_4._4_4_ = FVar13.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&param_4,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                   ,0x164);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147a86d22;
    FThreadStats::AddMessage(FVar13,CycleScopeStart);
    bVar6 = true;
  }
  pTVar2 = (this->ChangelistMgr).SharedReferenceCount.ReferenceController;
  pUVar3 = (this->Connection->Driver).field0_0x0.DebugPtr;
  local_b8 = (INetSerializeCB)&___7FNetSerializeCB__6B_;
  local_80 = (this->ChangelistMgr).Object;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  pTStack_90 = (TReferenceControllerBase<1> *)0x0;
  local_88 = 0;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_60 = 0;
  uStack_58 = 0;
  local_b0 = pUVar3;
  pTStack_78 = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  local_158.Reader = (FBitReader *)0x0;
  local_158.bUpdateUnmappedObjects = false;
  local_158.bOutSomeObjectsWereMapped = false;
  local_158.bCalledPreNetReceive = false;
  local_158.bOutHasMoreUnmapped = false;
  local_158.bGuidListsChanged = false;
  local_158.GatherGuidReferences =
       (TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *)0x0;
  local_158.DebugName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.DebugName.Data.ArrayNum = 0;
  local_158.DebugName.Data.ArrayMax = 0;
  local_158.CustomDeltaObject = this->ObjectPtr;
  local_158.Data = (void *)0x0;
  local_158.Struct = (UStruct *)0x0;
  local_158.TrackedGuidMemoryBytes = (int *)0x0;
  local_158.MoveGuidToUnmapped = (FNetworkGUID *)0x0;
  local_158.Object = param_1;
  if (local_158.CustomDeltaObject == (UObject *)0x0) {
    local_158.CustomDeltaObject = FWeakObjectPtr::Get(&(this->WeakObjectPtr).WeakPtr);
  }
  local_158.Writer = (FBitWriter *)local_res20;
  local_158.Map = *(UPackageMap **)&(this->Connection->PackageMap).field0_0x0;
  local_158.NewState = pTVar5;
  local_158.OldState = param_5->Object;
  local_158.NetSerializeCB = &local_b8;
  if ((pUVar3 != (UNetDriver *)0x0) &&
     (this_00 = (pUVar3->World).field0_0x0.DebugPtr, this_00 != (UWorld *)0x0)) {
    bVar10 = UWorld::IsRecordingClientReplay(this_00);
    local_158.bIsWritingOnClient = true;
    if (bVar10) goto LAB_147a86e37;
  }
  local_158.bIsWritingOnClient = false;
LAB_147a86e37:
  local_158.bSupportsFastArrayDeltaStructSerialization = this->bSupportsFastArrayDelta;
  local_158.Connection = this->Connection;
  local_158.bInternalAck = (local_158.Connection)->bInternalAck;
  if ((local_158.Object == (UObject *)0x0) ||
     (local_158.bIsInitializingBaseFromDefault = true,
     (*(uint *)&(local_158.Object)->field_0x8 & 0x30) == 0)) {
    local_158.bIsInitializingBaseFromDefault = false;
  }
  local_158.CustomDeltaIndex = param_2;
  if ((this->RepLayout).Object == (FRepLayout *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x44d,L"");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      uVar9 = (*pcVar4)();
      return (bool)uVar9;
    }
  }
  bVar10 = FRepLayout::SendCustomDeltaProperty((this->RepLayout).Object,&local_158,param_2);
  if (local_158.DebugName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.DebugName.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_78);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_90);
  local_b8 = (INetSerializeCB)&___7INetSerializeCB__6B_;
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_170.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_170.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_178);
      local_170.StatData.Pad[4] = '\0';
      local_170.StatData.Pad[5] = '\0';
      local_170.StatData.Pad[6] = '\0';
      local_170.StatData.Pad[7] = '\0';
      local_170.StatData.Pad[0] = local_178.s.LowPart._0_1_;
      local_170.StatData.Pad[1] = local_178.s.LowPart._1_1_;
      local_170.StatData.Pad[2] = local_178.s.LowPart._2_1_;
      local_170.StatData.Pad[3] = local_178.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_170);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return bVar10;
}

// StartBecomingDormant @ 147a946a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FObjectReplicator::StartBecomingDormant(FObjectReplicator *this)

{
  UObject *pUVar1;
  
  if ((this->ObjectPtr == (UObject *)0x0) &&
     (pUVar1 = FWeakObjectPtr::Get(&(this->WeakObjectPtr).WeakPtr), pUVar1 == (UObject *)0x0)) {
    if ((byte)LogRep._0_1_ < 6) {
      return;
    }
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
    return;
  }
  this->bLastUpdateEmpty = 0;
  return;
}

// StartReplicating @ 147a948f0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FObjectReplicator::StartReplicating(FObjectReplicator *this,UActorChannel *param_1)

{
  TArray<FPropertyRetirement,TSizedDefaultAllocator<32>_> *this_00;
  UClass *pUVar1;
  UClass *pUVar2;
  UNetDriver *this_01;
  ulong64 uVar3;
  FRepState *pFVar4;
  FSendingRepState *pFVar5;
  AActor *this_02;
  UWorld *pUVar6;
  UNetDriver *this_03;
  code *pcVar7;
  bool bVar8;
  char cVar9;
  ushort uVar10;
  int iVar11;
  FNetworkGUID FVar12;
  FRepLayout *this_04;
  TSharedPtr<FReplicationChangelistMgr,1> *pTVar13;
  int iVar14;
  UObject *local_res8;
  UActorChannel *local_res10 [2];
  FString local_a8;
  FString local_98;
  UObject **local_88;
  UActorChannel **local_80;
  UObject **local_78;
  UActorChannel **local_70;
  TSharedPtr<FReplicationChangelistMgr,1> local_68;
  TSharedPtr<FReplicationChangelistMgr,1> local_58;
  FString local_48;
  
  local_res10[0] = param_1;
  if ((this->OwningChannel != (UActorChannel *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("OwningChannel == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                         ,0x282,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((local_res10[0] == (UActorChannel *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InActorChannel != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                         ,0x283,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((UNetConnection *)local_res10[0]->_padding_ == (UNetConnection *)0x0) {
    bVar8 = this->Connection == (UNetConnection *)0x0;
  }
  else {
    bVar8 = (UNetConnection *)local_res10[0]->_padding_ == this->Connection;
  }
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InActorChannel->Connection == Connection",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                         ,0x284,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_res8 = this->ObjectPtr;
  if ((local_res8 == (UObject *)0x0) &&
     (local_res8 = FWeakObjectPtr::Get(&(this->WeakObjectPtr).WeakPtr), local_res8 == (UObject *)0x0
     )) {
    if ((byte)LogRep._0_1_ < 2) {
      return;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
    return;
  }
  if ((this->ObjectClass).field0_0x0.DebugPtr == (UClass *)0x0) {
    local_88 = &local_res8;
    local_80 = local_res10;
    bVar8 = `FObjectReplicator::StartReplicating'::__l45::<lambda_1>::operator()(&local_88);
    if (!bVar8) {
      return;
    }
  }
  pUVar1 = *(UClass **)&local_res8->field_0x10;
  if ((pUVar1 != (UClass *)0x0) &&
     ((pUVar2 = (this->ObjectClass).field0_0x0.DebugPtr, pUVar2 == (UClass *)0x0 ||
      (pUVar2 != pUVar1)))) {
    local_78 = &local_res8;
    local_70 = local_res10;
    bVar8 = `FObjectReplicator::StartReplicating'::__l51::<lambda_2>::operator()(&local_78);
    if (!bVar8) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      (this->ObjectClass).field0_0x0.DebugPtr = pUVar1;
    }
  }
  this->OwningChannel = local_res10[0];
  this_01 = (this->Connection->Driver).field0_0x0.DebugPtr;
  if (((this_01->GuidCache).Object == (FNetGUIDCache *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar12 = FNetGUIDCache::GetOrAssignNetGUID
                     ((this_01->GuidCache).Object,(UObject *)(local_res10 + 1),
                      (TWeakObjectPtr<UObject,FWeakObjectPtr> *)local_res8);
  uVar3 = *(ulong64 *)FVar12.field0_0x0;
  (this->ObjectNetGUID).field0_0x0.ObjectId = uVar3;
  if ((uVar3 == 1) || (uVar3 == 0)) {
    if ((byte)LogRep._0_1_ < 2) {
      return;
    }
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)local_res8,&local_48,(UObject *)0x0);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
    if (local_48.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
    return;
  }
  this->bOpenAckCalled = 0;
  cVar9 = (**(code **)(this_01->_padding_ + 0x3f8))(this_01);
  if ((cVar9 == '\0') && (this_01->bMaySendProperties == '\0')) {
    return;
  }
  if (((this->Connection->bInternalAck != 0) ||
      (pFVar4 = (this->RepState).Ptr, pFVar4 == (FRepState *)0x0)) ||
     (pFVar5 = (pFVar4->SendingRepState).Ptr, pFVar5 == (FSendingRepState *)0x0))
  goto LAB_147a94d52;
  if (((this->RepLayout).Object == (FRepLayout *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("RepLayout",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                         ,0x2b9,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this_04 = TSharedPtr<FRepLayout,1>::operator*<FRepLayout>(&this->RepLayout);
  uVar10 = FRepLayout::GetNumLifetimeCustomDeltaProperties(this_04);
  this_00 = &pFVar5->Retirement;
  iVar14 = (pFVar5->Retirement).ArrayNum;
  if (iVar14 < (int)(uint)uVar10) {
    iVar14 = (uint)uVar10 - iVar14;
    iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x28,8,iVar14,&this_00->AllocatorInstance,&(pFVar5->Retirement).ArrayNum,
                        &(pFVar5->Retirement).ArrayMax);
    DefaultConstructItems<FPropertyRetirement,int>
              ((this_00->AllocatorInstance).Data + (longlong)iVar11 * 0x28,iVar14);
  }
  else if ((int)(uint)uVar10 < iVar14) {
    iVar14 = iVar14 - (uint)uVar10;
    if (iVar14 < 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    else if (iVar14 == 0) goto LAB_147a94c5f;
    TArray<FPropertyRetirement,TSizedDefaultAllocator<32>_>::RemoveAtImpl
              (this_00,(uint)uVar10,iVar14);
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,&this_00->AllocatorInstance,(pFVar5->Retirement).ArrayNum,
               &(pFVar5->Retirement).ArrayMax);
  }
LAB_147a94c5f:
  if ((this->OwningChannel->SpawnAcked != 0) &&
     (pFVar5->bOpenAckedCalled = true, 5 < (byte)LogRep._0_1_)) {
    this_02 = (local_res10[0]->Actor).field0_0x0.DebugPtr;
    if ((this_02 == (AActor *)0x0) || (this_02->_padding_ == 0)) {
      ::FString::FString(&local_98,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_02,&local_98,(UObject *)0x0,None);
    }
    if ((local_res8 == (UObject *)0x0) || (*(longlong *)&local_res8->field_0x10 == 0)) {
      ::FString::FString(&local_a8,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName
                ((UObjectBaseUtility *)local_res8,&local_a8,(UObject *)0x0,None);
    }
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
LAB_147a94d52:
  pUVar6 = (this_01->World).field0_0x0.DebugPtr;
  if (((pUVar6 == (UWorld *)0x0) ||
      (this_03 = (pUVar6->NetDriver).field0_0x0.DebugPtr, this_03 == (UNetDriver *)0x0)) ||
     (cVar9 = (**(code **)(this_03->_padding_ + 0x3f8))(this_03), cVar9 == '\0')) {
    pTVar13 = UNetDriver::GetReplicationChangeListMgr(this_01,&local_58,local_res8);
    if (&this->ChangelistMgr != pTVar13) {
      (this->ChangelistMgr).Object = pTVar13->Object;
      pTVar13->Object = (FReplicationChangelistMgr *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ChangelistMgr).SharedReferenceCount,&pTVar13->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
  }
  else {
    pTVar13 = UNetDriver::GetReplicationChangeListMgr(this_03,&local_68,local_res8);
    TSharedPtr<FReplicationChangelistMgr,1>::operator=(&this->ChangelistMgr,pTVar13);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
  }
  return;
}

// StopReplicating @ 147a976a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FObjectReplicator::StopReplicating(FObjectReplicator *this,UActorChannel *param_1)

{
  longlong *plVar1;
  int *piVar2;
  UNetConnection *pUVar3;
  FRepState *pFVar4;
  FSendingRepState *pFVar5;
  FScriptContainerElement *pFVar6;
  FOutBunch *pFVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  UObject *this_00;
  longlong *plVar11;
  FOutBunch *pFVar12;
  longlong lVar13;
  uint uVar14;
  int iStackX_24;
  FString local_68;
  FString local_58;
  
  if ((this->OwningChannel == (UActorChannel *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("OwningChannel != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                         ,0x2ee,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pUVar3 = (UNetConnection *)this->OwningChannel->_padding_;
  if (pUVar3 == (UNetConnection *)0x0) {
    bVar9 = this->Connection == (UNetConnection *)0x0;
  }
  else {
    bVar9 = pUVar3 == this->Connection;
  }
  if ((!bVar9) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("OwningChannel->Connection == Connection",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                         ,0x2ef,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((this->OwningChannel != param_1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("OwningChannel == InActorChannel",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                         ,0x2f0,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  this_00 = this->ObjectPtr;
  pFVar12 = (FOutBunch *)0x0;
  this->OwningChannel = (UActorChannel *)0x0;
  if (this_00 == (UObject *)0x0) {
    this_00 = FWeakObjectPtr::Get(&(this->WeakObjectPtr).WeakPtr);
  }
  pFVar4 = (this->RepState).Ptr;
  if ((pFVar4 != (FRepState *)0x0) &&
     (pFVar5 = (pFVar4->SendingRepState).Ptr, pFVar5 != (FSendingRepState *)0x0)) {
    uVar14 = (pFVar5->Retirement).ArrayNum - 1;
    if (-1 < (int)uVar14) {
      lVar13 = (longlong)(int)uVar14 * 0x28;
      do {
        uVar10 = (uint)pFVar12;
        if ((int)uVar14 < (pFVar5->Retirement).ArrayNum) {
          uVar10 = ~uVar14 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar6 = (pFVar5->Retirement).AllocatorInstance.Data;
        iStackX_24 = -1;
        plVar11 = *(longlong **)(pFVar6 + lVar13);
        if (plVar11 != (longlong *)0x0) {
          while( true ) {
            if (*(int *)((longlong)plVar11 + 0x1c) < (int)plVar11[3]) {
              if ((this_00 == (UObject *)0x0) ||
                 (*(longlong *)&((UObjectBaseUtility *)this_00)->field_0x10 == 0)) {
                ::FString::FString(&local_68,L"None");
              }
              else {
                UObjectBaseUtility::GetFullName
                          ((UObjectBaseUtility *)this_00,&local_68,(UObject *)0x0,None);
              }
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Rec->OutPacketIdRange.Last >= Rec->OutPacketIdRange.First",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                                 ,0x2e2,L"Invalid packet id range (Last < First). Object: %s");
              if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_68.Data.AllocatorInstance.Data);
              }
              if (bVar9) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
            if ((int)plVar11[3] < iStackX_24) {
              if ((this_00 == (UObject *)0x0) ||
                 (*(longlong *)&((UObjectBaseUtility *)this_00)->field_0x10 == 0)) {
                ::FString::FString(&local_58,L"None");
              }
              else {
                UObjectBaseUtility::GetFullName
                          ((UObjectBaseUtility *)this_00,&local_58,(UObject *)0x0,None);
              }
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Rec->OutPacketIdRange.First >= LastRange.Last",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                                 ,0x2e3,
                                 L"Invalid packet id range (First < LastRange.Last). Object: %s");
              if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_58.Data.AllocatorInstance.Data);
              }
              if (bVar9) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
            plVar1 = plVar11 + 3;
            plVar11 = (longlong *)*plVar11;
            if (plVar11 == (longlong *)0x0) break;
            iStackX_24 = (int)((ulonglong)*plVar1 >> 0x20);
          }
          pFVar12 = (FOutBunch *)0x0;
        }
        pFVar7 = *(FOutBunch **)(pFVar6 + lVar13);
        *(FOutBunch **)(pFVar6 + lVar13) = pFVar12;
        while (pFVar7 != (FOutBunch *)0x0) {
          pFVar12 = (FOutBunch *)pFVar7->_padding_;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)pFVar7->_padding_);
          ::operator_delete(pFVar7,0x28);
          pFVar7 = pFVar12;
        }
        lVar13 = lVar13 + -0x28;
        uVar14 = uVar14 - 1;
      } while (-1 < (int)uVar14);
    }
    DestructItems<FPropertyRetirement,int>
              ((FPropertyRetirement *)(pFVar5->Retirement).AllocatorInstance.Data,
               (pFVar5->Retirement).ArrayNum);
    piVar2 = &(pFVar5->Retirement).ArrayMax;
    (pFVar5->Retirement).ArrayNum = (int)pFVar12;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&(pFVar5->Retirement).AllocatorInstance,(int)pFVar12,piVar2);
    }
  }
  DestructItems<FObjectReplicator::FRPCPendingLocalCall,int>
            ((FRPCPendingLocalCall *)(this->PendingLocalRPCs).AllocatorInstance.Data,
             (this->PendingLocalRPCs).ArrayNum);
  piVar2 = &(this->PendingLocalRPCs).ArrayMax;
  (this->PendingLocalRPCs).ArrayNum = (int)pFVar12;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x78,8,0,&(this->PendingLocalRPCs).AllocatorInstance,(int)pFVar12,piVar2);
  }
  pFVar7 = this->RemoteFunctions;
  if (pFVar7 != (FOutBunch *)0x0) {
    (**(code **)pFVar7->_padding_)(pFVar7,1);
    this->RemoteFunctions = pFVar12;
  }
  return;
}

// UpdateGuidToReplicatorMap @ 147a9b380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FObjectReplicator::UpdateGuidToReplicatorMap(FObjectReplicator *this)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  int *piVar2;
  uint uVar3;
  FNetworkGUID FVar4;
  undefined1 *puVar5;
  UNetDriver *pUVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  FScriptContainerElement *pFVar10;
  FName FVar11;
  bool bVar12;
  char cVar13;
  bool bVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_NetUpdateGuidToReplicatorMap> FVar16;
  FRepLayout *this_00;
  TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator> *this_01;
  byte bVar17;
  ulonglong uVar18;
  longlong lVar19;
  ForElementType<FSetElementId> FVar20;
  undefined1 *puVar21;
  longlong *plVar22;
  FName FVar23;
  int iVar24;
  int iVar25;
  FScriptContainerElement *pFVar26;
  FNetworkGUID_u_0 *pFVar27;
  FScriptContainerElement *pFVar28;
  TBitArray<FDefaultBitArrayAllocator> *pTVar29;
  ForElementType<FSetElementId> FVar30;
  uint uVar31;
  FName FVar32;
  uint uVar33;
  longlong *plVar34;
  FName FVar35;
  uint uVar36;
  uint *puVar37;
  FObjectReplicator *pFVar38;
  undefined1 auStackY_3b8 [32];
  undefined1 local_357;
  undefined1 local_356;
  undefined1 local_355;
  undefined1 local_354 [4];
  uint local_350;
  int local_34c;
  FName local_348;
  FName local_340;
  FObjectReplicator *local_338;
  FScriptContainerElement *local_330;
  FScriptContainerElement *local_328;
  uint uStack_320;
  uint uStack_31c;
  TBitArray<FDefaultBitArrayAllocator> *local_318;
  undefined4 uStack_310;
  uint uStack_30c;
  uint local_308;
  undefined4 uStack_304;
  int iStack_300;
  undefined4 uStack_2fc;
  FLLMScope local_2f8;
  FLLMScope local_2f4;
  FColor_u_0 local_2f0 [2];
  FName local_2e8;
  longlong local_2e0;
  FName local_2d8;
  int local_2c8;
  int local_2c4;
  FNetworkGUID local_2c0;
  int local_2b8;
  undefined8 local_2b4;
  int local_2ac;
  FName local_2a8;
  FName local_2a0;
  FObjectReplicator *local_298;
  FMemScope local_290;
  FMemScope local_288;
  FScriptContainerElement *local_280;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_278;
  undefined8 uStack_258;
  longlong *local_250;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_248;
  undefined8 uStack_228;
  FName local_220;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_218;
  undefined8 uStack_1f8;
  FNetDeltaSerializeInfo local_1e8;
  INetSerializeCB local_148;
  TObjectPtr<UNetDriver>_u_0 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  TReferenceControllerBase<1> *pTStack_120;
  undefined1 local_118;
  undefined8 local_110;
  TReferenceControllerBase<1> *local_108;
  FName local_f8 [4];
  undefined4 local_d4;
  undefined4 local_b4;
  undefined4 local_94;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  undefined1 local_50 [8];
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  local_338 = this;
  FLLMScope::FLLMScope
            (&local_2f4,LLMTagDeclaration_NetObjReplicator.UniqueName,false,None,Default,true);
  local_2a8 = LLMTagDeclaration_NetObjReplicator.UniqueName;
  FMemScope::FMemScope(&local_288,&local_2a8,true);
  FVar16 = StatPtr_STAT_NetUpdateGuidToReplicatorMap;
  if (StatPtr_STAT_NetUpdateGuidToReplicatorMap ==
      (FThreadSafeStaticStat<FStat_STAT_NetUpdateGuidToReplicatorMap>)0x0) {
    pFVar15 = ::FName::FName(local_f8,"STAT_NetUpdateGuidToReplicatorMap");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_NetUpdateGuidToReplicatorMap>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetUpdateGuidToReplicatorMap,
                        *pFVar15,L"NetUpdateGuidToReplicatorMap Time","STATGROUP_Game",
                        "STATCAT_Advanced",L"Game",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar23 = *(FName *)FVar16;
  bVar8 = false;
  bVar9 = false;
  local_2d8.ComparisonIndex.Value = 0;
  local_2d8.Number = 0;
  bVar12 = false;
  bVar14 = false;
  if ((FVar23.ComparisonIndex.Value.Value != 0) || (FVar23.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_2f0[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2f0[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar8 = false;
      bVar9 = true;
      bVar12 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_2e8.ComparisonIndex.Value = FVar23.ComparisonIndex.Value.Value;
        local_2e8.Number = FVar23.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_2e8,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                   ,0x5ce);
        bVar8 = true;
        bVar9 = true;
        bVar12 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_348 = FVar23;
      local_340 = FVar23;
      FThreadStats::AddMessage(FVar23,CycleScopeStart);
      bVar12 = true;
      goto LAB_147a9b535;
    }
  }
  bVar9 = bVar14;
  bVar8 = bVar12;
  bVar12 = false;
  local_340 = local_2d8;
  FVar23 = local_2d8;
LAB_147a9b535:
  cVar13 = (**(code **)(((this->Connection->Driver).field0_0x0.DebugPtr)->_padding_ + 0x3f8))();
  if (cVar13 == '\0') {
    local_88._0_8_ = 0;
    local_88._8_8_ = 0;
    local_68 = (uint *)0x0;
    local_60 = 0;
    local_5c = 0x80;
    local_58 = 0xffffffff;
    local_54 = 0;
    local_48 = (ForElementType<FSetElementId>)0x0;
    local_40 = 0;
    local_34c = 0;
    if (((this->RepLayout).Object == (FRepLayout *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("RepLayout",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                            ,0x5d8,L""), bVar14)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    this_00 = TSharedPtr<FRepLayout,1>::operator*<FRepLayout>(&this->RepLayout);
    if ((this->RepState).Ptr != (FRepState *)0x0) {
      local_140 = (this->Connection->Driver).field0_0x0;
      local_148 = (INetSerializeCB)&___7FNetSerializeCB__6B_;
      local_1e8.CustomDeltaIndex = 0xffff;
      local_1e8.NetSerializeCB = &local_148;
      local_1e8.GatherGuidReferences =
           (TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *)local_88;
      local_1e8.TrackedGuidMemoryBytes = &local_34c;
      local_1e8.Object = this->ObjectPtr;
      local_138 = 0;
      uStack_130 = 0;
      local_128 = 0;
      pTStack_120 = (TReferenceControllerBase<1> *)0x0;
      local_118 = 0;
      local_110 = 0;
      local_108 = (TReferenceControllerBase<1> *)0x0;
      local_1e8.Writer = (FBitWriter *)0x0;
      local_1e8.Reader = (FBitReader *)0x0;
      local_1e8.NewState = (TSharedPtr<INetDeltaBaseState,1> *)0x0;
      local_1e8.OldState = (INetDeltaBaseState *)0x0;
      local_1e8.Map = (UPackageMap *)0x0;
      local_1e8.Connection = (UNetConnection *)0x0;
      local_1e8.Data = (void *)0x0;
      local_1e8.Struct = (UStruct *)0x0;
      local_1e8.bUpdateUnmappedObjects = false;
      local_1e8.bOutSomeObjectsWereMapped = false;
      local_1e8.bCalledPreNetReceive = false;
      local_1e8.bOutHasMoreUnmapped = false;
      local_1e8.bGuidListsChanged = false;
      local_1e8.bIsWritingOnClient = false;
      local_1e8.bIsInitializingBaseFromDefault = false;
      local_1e8.bSupportsFastArrayDeltaStructSerialization = false;
      local_1e8.CustomDeltaObject = (UObject *)0x0;
      local_1e8.MoveGuidToUnmapped = (FNetworkGUID *)0x0;
      local_1e8.DebugName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1e8.DebugName.Data.ArrayNum = 0;
      local_1e8.DebugName.Data.ArrayMax = 0;
      if (local_1e8.Object == (UObject *)0x0) {
        local_1e8.Object = FWeakObjectPtr::Get(&(this->WeakObjectPtr).WeakPtr);
      }
      local_1e8.bInternalAck = this->Connection->bInternalAck;
      FRepLayout::GatherGuidReferences
                (this_00,(((this->RepState).Ptr)->ReceivingRepState).Ptr,&local_1e8,
                 (TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *)local_88
                 ,&local_34c);
      if (local_1e8.DebugName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.DebugName.Data.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_108)
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_120);
      local_148 = (INetSerializeCB)&___7INetSerializeCB__6B_;
    }
    local_350 = (this->PendingLocalRPCs).ArrayNum;
    uVar18 = (ulonglong)(int)local_350;
    pFVar26 = (this->PendingLocalRPCs).AllocatorInstance.Data;
    pFVar28 = pFVar26 + 0x48;
    local_330 = pFVar26 + uVar18 * 0x78;
    while( true ) {
      pFVar10 = local_330;
      iVar24 = 0;
      uVar36 = 0;
      local_348 = (FName)pFVar26;
      if ((this->PendingLocalRPCs).ArrayNum != (int)uVar18) {
        local_357 = 0;
        `TCheckedPointerIterator<FObjectReplicator::FRPCPendingLocalCall,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_357);
      }
      uVar33 = local_60;
      FVar23 = local_340;
      local_308 = 0;
      uStack_31c = 1;
      uStack_30c = local_308;
      if (pFVar26 == pFVar10) break;
      uVar33 = (uint)*(longlong *)&pFVar28[8].field_0x0;
      uVar31 = local_308;
      if (uVar33 != 0) {
        pFVar26 = *(FScriptContainerElement **)pFVar28;
        if (pFVar26 == (FScriptContainerElement *)0x0) {
          pFVar26 = pFVar28 + -0x10;
        }
        uVar3 = *(uint *)pFVar26;
        uVar31 = uVar36;
        local_308 = uVar36;
        while (uVar3 == 0) {
          lVar19 = (longlong)(int)local_308;
          uVar31 = uVar31 + 0x20;
          local_308 = local_308 + 1;
          uStack_30c = uVar33;
          if ((int)((uVar33 - 1) + ((int)(uVar33 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_308)
          goto LAB_147a9b7ff;
          uVar3 = *(uint *)(pFVar26 + lVar19 * 4 + 4);
        }
        uStack_31c = -uVar3 & uVar3;
        uVar18 = (ulonglong)uStack_31c * 2 + 1;
        lVar19 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        local_2c8 = (int)lVar19;
        uStack_30c = local_2c8 + -1 + uVar31;
        if ((int)uVar33 < (int)uStack_30c) {
          uStack_30c = uVar33;
        }
      }
LAB_147a9b7ff:
      local_328 = pFVar28 + -0x20;
      pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar28 + -0x10);
      uStack_304 = local_d4;
      iStack_300 = (int)*(longlong *)&pFVar28[-0x18].field_0x0 - *(int *)(pFVar28 + 0x14);
      uVar36 = uVar33 & 0xffffffe0;
      TStack_278._padding_ = CONCAT44(uStack_31c,local_308);
      uStack_310 = 0xffffffff;
      TStack_278.CurrentBitIndex = uStack_30c;
      TStack_278.UnvisitedBitMask = 0xffffffff;
      iVar24 = (int)uVar33 >> 5;
      TStack_278._28_4_ = local_d4;
      TStack_278.BaseBitIndex = uVar31;
      uStack_258 = CONCAT44(uStack_2fc,iStack_300);
      uStack_320 = local_308;
      local_318 = pTVar1;
      local_280 = local_328;
      TStack_278.Array = pTVar1;
      if (((int)uVar33 < 0) &&
         (local_308 = uVar31,
         bVar14 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), uVar31 = local_308, bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_308 = uVar31;
      uVar31 = (uint)*(longlong *)&pFVar28[8].field_0x0;
      if (uVar33 != uVar31) {
        pTVar29 = pTVar1;
        if (*(TBitArray<FDefaultBitArrayAllocator> **)pFVar28 !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar29 = *(TBitArray<FDefaultBitArrayAllocator> **)pFVar28;
        }
        uVar33 = -1 << ((byte)uVar33 & 0x1f) &
                 *(uint *)((pTVar29->AllocatorInstance).InlineData + (longlong)iVar24 * 4);
        while (uVar33 == 0) {
          lVar19 = (longlong)iVar24;
          uVar36 = uVar36 + 0x20;
          iVar24 = iVar24 + 1;
          uVar33 = uVar31;
          if ((int)((uVar31 - 1) + ((int)(uVar31 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24)
          goto LAB_147a9b902;
          uVar33 = *(uint *)((pTVar29->AllocatorInstance).InlineData + lVar19 * 4 + 4);
        }
        uVar18 = (ulonglong)(-uVar33 & uVar33) * 2 + 1;
        lVar19 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        local_2c4 = (int)lVar19;
        uVar33 = (uVar36 - 1) + local_2c4;
        if ((int)uVar31 < (int)uVar33) {
          uVar33 = uVar31;
        }
      }
LAB_147a9b902:
      while( true ) {
        pFVar26 = local_280;
        if ((int)*(longlong *)&local_280[8].field_0x0 - *(int *)(local_280 + 0x34) !=
            (int)uStack_258) {
          local_356 = 0;
          `TSparseArray<TSparseSetElement<FNetworkGUID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_356);
        }
        if (((TStack_278.CurrentBitIndex == uVar33) && (TStack_278.Array == pTVar1)) &&
           (pFVar26 == pFVar28 + -0x20)) break;
        TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::
        Emplace<FNetworkGUID_const_&>
                  ((TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *)
                   local_88,&local_2c0,
                   (bool *)((longlong)TStack_278.CurrentBitIndex * 0x10 + *(longlong *)pFVar26));
        uVar36 = (uint)*(longlong *)&pFVar28[0x28].field_0x0;
        iVar24 = (*(int *)(pFVar28 + 0xc) + 0x1fU >> 5) + *(int *)(pFVar28 + -0x14) * 4;
        iVar25 = iVar24 + uVar36;
        if (uVar36 < 2) {
          iVar25 = iVar24;
        }
        local_34c = local_34c + iVar25 * 4 + (int)*(longlong *)&pFVar28[-0x38].field_0x0;
        TStack_278.UnvisitedBitMask = TStack_278.UnvisitedBitMask & ~TStack_278._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_278);
      }
      pFVar28 = pFVar28 + 0x78;
      pFVar26 = (FScriptContainerElement *)((longlong)local_348 + 0x78);
      uVar18 = (ulonglong)local_350;
      this = local_338;
    }
    if (local_60 != 0) {
      puVar37 = (uint *)(local_88 + 0x10);
      if (local_68 != (uint *)0x0) {
        puVar37 = local_68;
      }
      uVar31 = *puVar37;
      local_308 = uVar36;
      while (uVar31 == 0) {
        lVar19 = (longlong)iVar24;
        local_308 = local_308 + 0x20;
        iVar24 = iVar24 + 1;
        uStack_30c = local_60;
        if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24)
        goto LAB_147a9ba50;
        uVar31 = puVar37[lVar19 + 1];
      }
      uStack_31c = -uVar31 & uVar31;
      uVar18 = (ulonglong)uStack_31c * 2 + 1;
      lVar19 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      local_2c0.field0_0x0.ObjectId._4_4_ = (undefined4)lVar19;
      uStack_30c = local_2c0.field0_0x0.ObjectId._4_4_ + -1 + local_308;
      if ((int)local_60 < (int)uStack_30c) {
        uStack_30c = local_60;
      }
    }
LAB_147a9ba50:
    local_328 = (FScriptContainerElement *)local_88;
    uStack_304 = local_b4;
    local_318 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
    iStack_300 = local_88._8_4_ - local_54;
    uVar36 = local_60 & 0xffffffe0;
    TStack_248._padding_ = CONCAT44(uStack_31c,iVar24);
    uStack_310 = 0xffffffff;
    TStack_248.CurrentBitIndex = uStack_30c;
    TStack_248.UnvisitedBitMask = 0xffffffff;
    iVar25 = (int)local_60 >> 5;
    TStack_248._28_4_ = local_b4;
    TStack_248.BaseBitIndex = local_308;
    uStack_228 = CONCAT44(uStack_2fc,iStack_300);
    bVar17 = (byte)local_60;
    uStack_320 = iVar24;
    local_250 = (longlong *)local_328;
    TStack_248.Array = local_318;
    if (((int)local_60 < 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar14)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar38 = local_338;
    if (uVar33 != local_60) {
      puVar37 = (uint *)(local_88 + 0x10);
      if (local_68 != (uint *)0x0) {
        puVar37 = local_68;
      }
      uVar33 = -1 << (bVar17 & 0x1f) & puVar37[iVar25];
      while (uVar33 == 0) {
        lVar19 = (longlong)iVar25;
        uVar36 = uVar36 + 0x20;
        iVar25 = iVar25 + 1;
        uVar33 = local_60;
        if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar25)
        goto LAB_147a9bb71;
        uVar33 = puVar37[lVar19 + 1];
      }
      uVar18 = (ulonglong)(-uVar33 & uVar33) * 2 + 1;
      lVar19 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      local_2b8 = (int)lVar19;
      uVar33 = local_2b8 + -1 + uVar36;
      if ((int)local_60 < (int)uVar33) {
        uVar33 = local_60;
      }
    }
LAB_147a9bb71:
    FVar35 = (FName)&local_338->ReferencedGuids;
    local_340 = FVar35;
    while( true ) {
      plVar34 = local_250;
      if ((int)local_250[1] - *(int *)((longlong)local_250 + 0x34) != (int)uStack_228) {
        local_355 = 0;
        `TSparseArray<TSparseSetElement<FNetworkGUID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_355);
      }
      if (((TStack_248.CurrentBitIndex == uVar33) &&
          (TStack_248.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
         (plVar34 == (longlong *)local_88)) break;
      pFVar27 = (FNetworkGUID_u_0 *)(*plVar34 + (longlong)TStack_248.CurrentBitIndex * 0x10);
      FVar4.field0_0x0 = (FNetworkGUID_u_0)pFVar27->ObjectId;
      if (*(int *)&(pFVar38->ReferencedGuids).Elements.field_0x8 !=
          *(int *)&(pFVar38->ReferencedGuids).Elements.field_0x34) {
        FVar20 = (pFVar38->ReferencedGuids).Hash.SecondaryData;
        FVar30 = (ForElementType<FSetElementId>)&(pFVar38->ReferencedGuids).Hash;
        if (FVar20 != (ForElementType<FSetElementId>)0x0) {
          FVar30 = FVar20;
        }
        iVar24 = *(int *)((longlong)FVar30 +
                         (((ulonglong)FVar4.field0_0x0 >> 0x20) * 0x17 + (longlong)FVar4.field0_0x0
                         & (ulonglong)((pFVar38->ReferencedGuids).HashSize - 1)) * 4);
        if (iVar24 != -1) {
          do {
            if ((FNetworkGUID_u_0)
                ((FNetworkGUID_u_0 *)
                (*(longlong *)
                  &((TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *)
                   FVar35)->Elements + (longlong)iVar24 * 0x10))->ObjectId == FVar4.field0_0x0)
            goto LAB_147a9bcc2;
            iVar24 = *(int *)(*(longlong *)
                               &((TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>
                                  *)FVar35)->Elements + 8 + (longlong)iVar24 * 0x10);
          } while (iVar24 != -1);
        }
      }
      FLLMScope::FLLMScope
                (&local_2f8,LLMTagDeclaration_NetDriver.UniqueName,false,None,Default,true);
      local_2a0 = LLMTagDeclaration_NetDriver.UniqueName;
      FMemScope::FMemScope(&local_290,&local_2a0,true);
      this_01 = TMapBase<FNetworkGUID,TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>,0>_>
                ::FindOrAddImpl<FNetworkGUID_const_&>
                          ((TMapBase<FNetworkGUID,TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>,0>_>
                            *)&((pFVar38->Connection->Driver).field0_0x0.DebugPtr)->
                               GuidToReplicatorMap,
                           (int)(pFVar27->ObjectId >> 0x20) * 0x17 + (int)pFVar27->ObjectId,
                           (FNetworkGUID *)pFVar27);
      local_298 = pFVar38;
      TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>::
      Emplace<FObjectReplicator_*>(this_01,(FObjectReplicator **)&local_2b4,(bool *)&local_298);
      FMemScope::~FMemScope(&local_290);
      FLLMScope::~FLLMScope(&local_2f8);
LAB_147a9bcc2:
      TStack_248.UnvisitedBitMask = TStack_248.UnvisitedBitMask & ~TStack_248._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_248);
    }
    uVar36 = *(uint *)&(pFVar38->ReferencedGuids).Elements.field_0x28;
    FVar32 = (FName)&(pFVar38->ReferencedGuids).Elements.field_0x10;
    uStack_320 = 0;
    local_308 = 0;
    uStack_31c = 1;
    uStack_30c = 0;
    if (uVar36 != 0) {
      puVar37 = *(uint **)&(pFVar38->ReferencedGuids).Elements.field_0x20;
      if (puVar37 == (uint *)0x0) {
        puVar37 = (uint *)FVar32;
      }
      uVar33 = *puVar37;
      while (uVar33 == 0) {
        lVar19 = (longlong)(int)uStack_320;
        local_308 = local_308 + 0x20;
        uStack_320 = uStack_320 + 1;
        uStack_30c = uVar36;
        if ((int)((uVar36 - 1) + ((int)(uVar36 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_320)
        goto LAB_147a9bd6e;
        uVar33 = puVar37[lVar19 + 1];
      }
      uStack_31c = -uVar33 & uVar33;
      uVar18 = (ulonglong)uStack_31c * 2 + 1;
      lVar19 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      local_2b4._4_4_ = (int)lVar19;
      uStack_30c = (local_308 - 1) + local_2b4._4_4_;
      if ((int)uVar36 < (int)uStack_30c) {
        uStack_30c = uVar36;
      }
    }
LAB_147a9bd6e:
    uVar36 = *(uint *)&(pFVar38->ReferencedGuids).Elements.field_0x28;
    uStack_304 = local_94;
    iStack_300 = *(int *)&(pFVar38->ReferencedGuids).Elements.field_0x8 -
                 *(int *)&(pFVar38->ReferencedGuids).Elements.field_0x34;
    uVar33 = uVar36 & 0xffffffe0;
    uStack_310 = 0xffffffff;
    TStack_218._padding_ = CONCAT44(uStack_31c,uStack_320);
    TStack_218.CurrentBitIndex = uStack_30c;
    TStack_218.UnvisitedBitMask = 0xffffffff;
    iVar24 = (int)uVar36 >> 5;
    TStack_218._28_4_ = local_94;
    TStack_218.BaseBitIndex = local_308;
    uStack_1f8 = CONCAT44(uStack_2fc,iStack_300);
    local_350 = uVar36;
    local_348 = FVar32;
    local_328 = (FScriptContainerElement *)FVar35;
    local_318 = (TBitArray<FDefaultBitArrayAllocator> *)FVar32;
    local_220 = FVar35;
    TStack_218.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar32;
    if (((int)uVar36 < 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar14)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar31 = *(uint *)&(pFVar38->ReferencedGuids).Elements.field_0x28;
    if (uVar36 != uVar31) {
      puVar5 = *(undefined1 **)&(pFVar38->ReferencedGuids).Elements.field_0x20;
      puVar21 = (undefined1 *)FVar32;
      if (puVar5 != (undefined1 *)0x0) {
        puVar21 = puVar5;
      }
      uVar36 = -1 << ((byte)uVar36 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar24 * 4);
      while (uVar36 == 0) {
        lVar19 = (longlong)iVar24;
        uVar33 = uVar33 + 0x20;
        iVar24 = iVar24 + 1;
        uVar36 = uVar31;
        local_350 = uVar31;
        if ((int)((uVar31 - 1) + ((int)(uVar31 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24)
        goto LAB_147a9be90;
        uVar36 = *(uint *)(puVar21 + lVar19 * 4 + 4);
      }
      uVar18 = (ulonglong)(-uVar36 & uVar36) * 2 + 1;
      lVar19 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      local_2ac = (int)lVar19;
      uVar36 = (uVar33 - 1) + local_2ac;
      local_350 = uVar36;
      if ((int)uVar31 < (int)uVar36) {
        uVar36 = uVar31;
        local_350 = uVar31;
      }
    }
LAB_147a9be90:
    while( true ) {
      FVar11 = local_220;
      if (*(int *)((longlong)local_220 + 8) - *(int *)((longlong)local_220 + 0x34) !=
          (int)uStack_1f8) {
        local_354[0] = 0;
        `TSparseArray<TSparseSetElement<FNetworkGUID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_354);
      }
      pFVar38 = local_338;
      if (((TStack_218.CurrentBitIndex == uVar36) && ((FName)TStack_218.Array == FVar32)) &&
         (FVar11 == FVar35)) break;
      pFVar28 = (FScriptContainerElement *)
                (*(longlong *)FVar11 + (longlong)TStack_218.CurrentBitIndex * 0x10);
      lVar19 = *(longlong *)pFVar28;
      uVar33 = (int)((ulonglong)lVar19 >> 0x20) * 0x17 + (int)lVar19;
      local_330 = pFVar28;
      if (local_88._8_4_ != local_54) {
        FVar20 = (ForElementType<FSetElementId>)local_50;
        if (local_48 != (ForElementType<FSetElementId>)0x0) {
          FVar20 = local_48;
        }
        for (iVar24 = *(int *)((longlong)FVar20 + (ulonglong)(local_40 - 1U & uVar33) * 4);
            iVar24 != -1; iVar24 = *(int *)(local_88._0_8_ + 8 + (longlong)iVar24 * 0x10)) {
          if (*(longlong *)(local_88._0_8_ + (longlong)iVar24 * 0x10) == lVar19) goto LAB_147a9c1e9;
        }
      }
      pUVar6 = (local_338->Connection->Driver).field0_0x0.DebugPtr;
      if (*(int *)&(pUVar6->GuidToReplicatorMap).field_0x8 !=
          *(int *)&(pUVar6->GuidToReplicatorMap).field_0x34) {
        puVar5 = *(undefined1 **)&(pUVar6->GuidToReplicatorMap).field_0x40;
        puVar21 = &(pUVar6->GuidToReplicatorMap).field_0x38;
        if (puVar5 != (undefined1 *)0x0) {
          puVar21 = puVar5;
        }
        iVar24 = *(int *)(puVar21 +
                         (ulonglong)
                         (*(int *)&(pUVar6->GuidToReplicatorMap).field_0x48 - 1U & uVar33) * 4);
        if (iVar24 != -1) {
          do {
            plVar34 = (longlong *)
                      ((longlong)iVar24 * 0x60 + *(longlong *)&pUVar6->GuidToReplicatorMap);
            if (*plVar34 == lVar19) {
              if (plVar34 != (longlong *)0x0) goto LAB_147a9bff8;
              goto LAB_147a9bfd2;
            }
            iVar24 = (int)plVar34[0xb];
          } while (iVar24 != -1);
        }
      }
      plVar34 = (longlong *)0x0;
LAB_147a9bfd2:
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Pair != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                          ,0x288,L"");
      if (bVar14) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
LAB_147a9bff8:
      if ((int)plVar34[2] != *(int *)((longlong)plVar34 + 0x3c)) {
        uVar36 = ((uint)((ulonglong)pFVar38 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar38 >> 4)) *
                 -0x7a143595;
        uVar36 = (uVar36 >> 0xd ^ uVar36) * -0x3d4d51cb;
        plVar22 = plVar34 + 8;
        if ((longlong *)plVar34[9] != (longlong *)0x0) {
          plVar22 = (longlong *)plVar34[9];
        }
        uVar36 = *(uint *)((longlong)plVar22 +
                          ((longlong)(int)plVar34[10] - 1U &
                          (longlong)(int)(uVar36 >> 0x10 ^ uVar36)) * 4);
        pFVar28 = local_330;
        if (uVar36 != 0xffffffff) {
LAB_147a9c060:
          lVar19 = (longlong)(int)uVar36 * 0x10;
          if (*(FObjectReplicator **)(lVar19 + plVar34[1]) != pFVar38) goto code_r0x000147a9c071;
          if (((int)uVar36 < 0) || ((int)plVar34[6] <= (int)uVar36)) {
LAB_147a9c0ed:
            bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Elements.IsValidIndex(ElementIndex)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                ,0x2ab,
                                L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
            if (bVar14) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          else {
            if (((int)plVar34[6] <= (int)uVar36) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5c6,L""), bVar14)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            plVar22 = plVar34 + 3;
            if ((longlong *)plVar34[5] != (longlong *)0x0) {
              plVar22 = (longlong *)plVar34[5];
            }
            uVar33 = uVar36;
            if ((int)uVar36 < 0) {
              uVar33 = uVar36 + 0x1f;
            }
            if ((*(uint *)((longlong)plVar22 + (longlong)((int)uVar33 >> 5) * 4) >> (uVar36 & 0x1f)
                & 1) == 0) goto LAB_147a9c0ed;
          }
          local_2e0 = plVar34[1] + lVar19;
          plVar22 = plVar34 + 8;
          if ((longlong *)plVar34[9] != (longlong *)0x0) {
            plVar22 = (longlong *)plVar34[9];
          }
          puVar37 = (uint *)((longlong)*(int *)(local_2e0 + 0xc) * 4 + (longlong)plVar22);
          while( true ) {
            uVar33 = *puVar37;
            if ((uVar33 == 0xffffffff) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("NextElementIndex != INDEX_NONE",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                    ,0x2b5,L"Corrupt hash"), bVar14)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if (uVar33 == uVar36) break;
            puVar37 = (uint *)(plVar34[1] + 8 + (longlong)(int)uVar33 * 0x10);
          }
          *puVar37 = *(uint *)(local_2e0 + 8);
          TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::RemoveAtUninitialized
                    ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)(plVar34 + 1),uVar36,1);
          pFVar28 = local_330;
          pFVar38 = local_338;
        }
      }
LAB_147a9c1a1:
      FVar32 = local_348;
      FVar35 = local_340;
      uVar36 = local_350;
      if ((int)plVar34[2] == *(int *)((longlong)plVar34 + 0x3c)) {
        pUVar6 = (pFVar38->Connection->Driver).field0_0x0.DebugPtr;
        if (*(int *)&(pUVar6->GuidToReplicatorMap).field_0x8 !=
            *(int *)&(pUVar6->GuidToReplicatorMap).field_0x34) {
          TSet<TTuple<FNetworkGUID,TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
          ::RemoveImpl<FNetworkGUID>
                    ((TSet<TTuple<FNetworkGUID,TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                      *)&pUVar6->GuidToReplicatorMap,
                     (int)((ulonglong)*(undefined8 *)pFVar28 >> 0x20) * 0x17 +
                     (int)*(undefined8 *)pFVar28,(FNetworkGUID *)pFVar28);
          FVar32 = local_348;
          FVar35 = local_340;
          uVar36 = local_350;
        }
      }
LAB_147a9c1e9:
      TStack_218.UnvisitedBitMask = TStack_218.UnvisitedBitMask & ~TStack_218._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_218);
    }
    piVar2 = &((local_338->Connection->Driver).field0_0x0.DebugPtr)->TotalTrackedGuidMemoryBytes;
    *piVar2 = *piVar2 - local_338->TrackedGuidMemoryBytes;
    local_338->TrackedGuidMemoryBytes = local_34c;
    piVar2 = &((local_338->Connection->Driver).field0_0x0.DebugPtr)->TotalTrackedGuidMemoryBytes;
    *piVar2 = *piVar2 + local_34c;
    if (FVar35 != (FName)local_88) {
      TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::
      Move<TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>_>
                ((TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *)FVar35,
                 (TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *)local_88
                );
    }
    local_40 = 0;
    if (local_48 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_48);
    }
    TSparseArray<TSparseSetElement<FNetworkGUID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FNetworkGUID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FNetworkGUID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_88);
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar12) {
    FThreadStats::AddMessage(FVar23,CycleScopeEnd);
  }
  FMemScope::~FMemScope(&local_288);
  FLLMScope::~FLLMScope(&local_2f4);
  return;
code_r0x000147a9c071:
  uVar36 = *(uint *)(lVar19 + plVar34[1] + 8);
  if (uVar36 == 0xffffffff) goto LAB_147a9c1a1;
  goto LAB_147a9c060;
}

// UpdateUnmappedObjects @ 147a9e780

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
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FObjectReplicator::UpdateUnmappedObjects(FObjectReplicator *this,bool *param_1)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  ulonglong uVar3;
  uint uVar4;
  FReceivingRepState *pFVar5;
  UNetConnection *pUVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  FFieldNetCache *pFVar9;
  FClassNetCache *this_00;
  FScriptContainerElement *pFVar10;
  char cVar11;
  bool bVar12;
  EConnectionState EVar13;
  UObject *pUVar14;
  UClass *pUVar15;
  FClassNetCacheMgr *this_01;
  FString *pFVar16;
  longlong lVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  ESkipRpcBehavior EVar21;
  TBitArray<FDefaultBitArrayAllocator> *pTVar22;
  float fVar23;
  undefined1 auStackY_408 [32];
  bool local_3c8;
  bool local_3c7;
  bool local_3c6;
  char local_3c5;
  undefined1 local_3c4 [4];
  FString local_3c0;
  UObject *local_3b0;
  bool *local_3a8;
  uint local_3a0;
  int local_39c;
  int local_398;
  UPackageMap *local_390;
  FFieldNetCache *local_388;
  FScriptContainerElement *local_380;
  FClassNetCache *local_378;
  FScriptContainerElement *local_370;
  int iStack_368;
  uint uStack_364;
  TBitArray<FDefaultBitArrayAllocator> *local_360;
  undefined4 uStack_358;
  int iStack_354;
  int local_350;
  undefined4 uStack_34c;
  int iStack_348;
  undefined4 uStack_344;
  FScriptContainerElement *local_340;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_338;
  undefined8 uStack_318;
  FNetDeltaSerializeInfo local_308;
  INetSerializeCB local_268;
  TObjectPtr<UNetDriver>_u_0 local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  TReferenceControllerBase<1> *pTStack_240;
  undefined1 local_238;
  undefined8 local_230;
  TReferenceControllerBase<1> *local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8 [2];
  undefined4 local_19c;
  FNetBitReader local_198;
  undefined1 local_d8 [32];
  void *local_b8;
  undefined4 local_b0;
  uint local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  ForElementType<FSetElementId> local_98;
  int local_90;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_408;
  pUVar14 = this->ObjectPtr;
  local_3a8 = param_1;
  if (((pUVar14 == (UObject *)0x0) &&
      (local_3b0 = pUVar14, pUVar14 = FWeakObjectPtr::Get(&(this->WeakObjectPtr).WeakPtr),
      pUVar14 == (UObject *)0x0)) ||
     ((*(uint *)&((UObjectBaseUtility *)pUVar14)->field_0x8 >> 0x1e & 1) != 0)) {
    *param_1 = false;
  }
  else {
    local_3b0 = pUVar14;
    EVar13 = UNetConnection::GetConnectionState(this->Connection);
    if (EVar13 == USOCK_Closed) {
      if (5 < (byte)LogNet._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      }
    }
    else {
      pFVar5 = (((this->RepState).Ptr)->ReceivingRepState).Ptr;
      if (((this->OwningChannel == (UActorChannel *)0x0) ||
          ((this->OwningChannel->QueuedBunches).ArrayNum < 1)) &&
         (((pFVar5->RepNotifies).ArrayNum != 0 &&
          (cVar11 = (**(code **)(((this->Connection->Driver).field0_0x0.DebugPtr)->_padding_ + 0x430
                                ))(), cVar11 == '\0')))) {
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)pUVar14,&local_218,(UObject *)0x0,None);
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("bHasQueuedBunches || ReceivingRepState->RepNotifies.Num() == 0 || Connection->Driver->ShouldSkipRepNotifies()"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                            ,0x9ae,
                            L"Failed RepState RepNotifies check. Num=%d. Object=%s. Channel QueuedBunches=%d"
                           );
        if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_218.Data.AllocatorInstance.Data);
        }
        param_1 = local_3a8;
        if (bVar12) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      local_3c7 = false;
      local_3c8 = false;
      if (((this->RepLayout).Object == (FRepLayout *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("RepLayout",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                              ,0x9b3,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_3a0 = ((this->Connection->Driver).field0_0x0.DebugPtr)->ReplicationFrame;
      if (((this->RepLayout).Object == (FRepLayout *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x44d,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_308.Connection = this->Connection;
      local_260 = ((local_308.Connection)->Driver).field0_0x0;
      local_308.CustomDeltaIndex = 0xffff;
      local_268 = (INetSerializeCB)&___7FNetSerializeCB__6B_;
      local_258 = 0;
      uStack_250 = 0;
      local_248 = 0;
      pTStack_240 = (TReferenceControllerBase<1> *)0x0;
      local_238 = 0;
      local_230 = 0;
      local_228 = (TReferenceControllerBase<1> *)0x0;
      local_308.Writer = (FBitWriter *)0x0;
      local_308.Reader = (FBitReader *)0x0;
      local_308.NewState = (TSharedPtr<INetDeltaBaseState,1> *)0x0;
      local_308.OldState = (INetDeltaBaseState *)0x0;
      local_308.Data = (void *)0x0;
      local_308.Struct = (UStruct *)0x0;
      local_308.bOutSomeObjectsWereMapped = false;
      local_308.bCalledPreNetReceive = false;
      local_308.bOutHasMoreUnmapped = false;
      local_308.bGuidListsChanged = false;
      local_308.bIsWritingOnClient = false;
      local_308.bIsInitializingBaseFromDefault = false;
      local_308.bSupportsFastArrayDeltaStructSerialization = false;
      local_308.CustomDeltaObject = (UObject *)0x0;
      local_308.GatherGuidReferences =
           (TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *)0x0;
      local_308.TrackedGuidMemoryBytes = (int *)0x0;
      local_308.MoveGuidToUnmapped = (FNetworkGUID *)0x0;
      local_308.DebugName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_308.DebugName.Data.ArrayNum = 0;
      local_308.DebugName.Data.ArrayMax = 0;
      local_308.bInternalAck = (local_308.Connection)->bInternalAck;
      local_308.Map = *(UPackageMap **)&((local_308.Connection)->PackageMap).field0_0x0;
      local_308.NetSerializeCB = &local_268;
      local_308.bUpdateUnmappedObjects = true;
      local_308.Object = pUVar14;
      FRepLayout::UpdateUnmappedObjects
                ((this->RepLayout).Object,pFVar5,
                 ((local_308.Connection)->PackageMap).field0_0x0.DebugPtr,pUVar14,&local_308,
                 &local_3c7,&local_3c8,param_1);
      local_3c8 = (bool)(local_3c8 | local_308.bOutSomeObjectsWereMapped);
      *param_1 = (bool)(*param_1 | local_308.bOutHasMoreUnmapped);
      local_3c7 = (bool)(local_3c7 | local_308.bCalledPreNetReceive);
      if (local_3c7 != false) {
        pUVar14 = this->ObjectPtr;
        if ((pUVar14 != (UObject *)0x0) ||
           (pUVar14 = FWeakObjectPtr::Get(&(this->WeakObjectPtr).WeakPtr), pUVar14 != (UObject *)0x0
           )) {
          (**(code **)(*(longlong *)pUVar14 + 0x228))();
        }
        UpdateGuidToReplicatorMap(this);
      }
      CallRepNotifies(this,false);
      pUVar6 = this->Connection;
      if ((pUVar6->PackageMap).field0_0x0.DebugPtr != (UPackageMap *)0x0) {
        pUVar15 = Z_Construct_UClass_UPackageMapClient_NoRegister();
        bVar12 = FObjectPtr::IsA((FObjectPtr *)&pUVar6->PackageMap,pUVar15);
        if (((bVar12) &&
            (local_390 = (pUVar6->PackageMap).field0_0x0.DebugPtr, local_390 != (UPackageMap *)0x0))
           && (this->OwningChannel != (UActorChannel *)0x0)) {
          local_3c5 = (**(code **)(((this->Connection->Driver).field0_0x0.DebugPtr)->_padding_ +
                                  0x3f8))();
          this_01 = TSharedPtr<FClassNetCacheMgr,1>::operator->
                              (&((this->Connection->Driver).field0_0x0.DebugPtr)->NetCache);
          local_378 = FClassNetCacheMgr::GetClassNetCache
                                (this_01,(this->ObjectClass).field0_0x0.DebugPtr);
          if (0 < (this->PendingLocalRPCs).ArrayNum) {
LAB_147a9eb80:
            this_00 = local_378;
            if (((this->PendingLocalRPCs).ArrayNum < 1) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar7 = (this->PendingLocalRPCs).AllocatorInstance.Data;
            local_380 = pFVar7;
            local_388 = FClassNetCache::GetFromIndex(this_00,*(int *)pFVar7);
            FNetBitReader::FNetBitReader
                      (&local_198,(this->Connection->PackageMap).field0_0x0.DebugPtr,
                       *(uchar **)(pFVar7 + 8),*(long64 *)(pFVar7 + 0x18));
            UNetConnection::SetNetVersionsOnArchive(this->Connection,(FArchive *)&local_198);
            iVar18 = *(int *)(pFVar7 + 0x50);
            local_360 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar7 + 0x38);
            iStack_368 = 0;
            pFVar1 = pFVar7 + 0x28;
            local_350 = 0;
            uStack_364 = 1;
            iStack_354 = 0;
            if (iVar18 != 0) {
              pTVar22 = local_360;
              if (*(TBitArray<FDefaultBitArrayAllocator> **)(pFVar7 + 0x48) !=
                  (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
                pTVar22 = *(TBitArray<FDefaultBitArrayAllocator> **)(pFVar7 + 0x48);
              }
              uVar20 = *(uint *)(pTVar22->AllocatorInstance).InlineData;
              while (uVar20 == 0) {
                lVar17 = (longlong)iStack_368;
                local_350 = local_350 + 0x20;
                iStack_368 = iStack_368 + 1;
                iStack_354 = iVar18;
                if ((int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_368)
                goto LAB_147a9ec8e;
                uVar20 = *(uint *)((pTVar22->AllocatorInstance).InlineData + lVar17 * 4 + 4);
              }
              uStack_364 = -uVar20 & uVar20;
              uVar3 = (ulonglong)uStack_364 * 2 + 1;
              lVar17 = 0x3f;
              if (uVar3 != 0) {
                for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                }
              }
              local_39c = (int)lVar17;
              iStack_354 = local_350 + -1 + local_39c;
              if (iVar18 < iStack_354) {
                iStack_354 = iVar18;
              }
            }
LAB_147a9ec8e:
            uVar20 = *(uint *)(pFVar7 + 0x50);
            uStack_34c = local_19c;
            iStack_348 = *(int *)(pFVar7 + 0x30) - *(int *)(pFVar7 + 0x5c);
            uVar19 = uVar20 & 0xffffffe0;
            TStack_338._padding_ = CONCAT44(uStack_364,iStack_368);
            uStack_358 = 0xffffffff;
            TStack_338.CurrentBitIndex = iStack_354;
            TStack_338.UnvisitedBitMask = 0xffffffff;
            iVar18 = (int)uVar20 >> 5;
            TStack_338._28_4_ = local_19c;
            TStack_338.BaseBitIndex = local_350;
            uStack_318 = CONCAT44(uStack_344,iStack_348);
            local_370 = pFVar1;
            local_340 = pFVar1;
            TStack_338.Array = local_360;
            if (((int)uVar20 < 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x7af,L""), bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            uVar4 = *(uint *)(pFVar7 + 0x50);
            if (uVar20 != uVar4) {
              pTVar22 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar7 + 0x38);
              if (*(TBitArray<FDefaultBitArrayAllocator> **)(pFVar7 + 0x48) !=
                  (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
                pTVar22 = *(TBitArray<FDefaultBitArrayAllocator> **)(pFVar7 + 0x48);
              }
              uVar20 = -1 << ((byte)uVar20 & 0x1f) &
                       *(uint *)((pTVar22->AllocatorInstance).InlineData + (longlong)iVar18 * 4);
              while (uVar20 == 0) {
                lVar17 = (longlong)iVar18;
                uVar19 = uVar19 + 0x20;
                iVar18 = iVar18 + 1;
                uVar20 = uVar4;
                if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
                goto LAB_147a9ed90;
                uVar20 = *(uint *)((pTVar22->AllocatorInstance).InlineData + lVar17 * 4 + 4);
              }
              uVar3 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
              lVar17 = 0x3f;
              if (uVar3 != 0) {
                for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                }
              }
              local_398 = (int)lVar17;
              uVar20 = (uVar19 - 1) + local_398;
              if ((int)uVar4 < (int)uVar20) {
                uVar20 = uVar4;
              }
            }
LAB_147a9ed90:
            do {
              pFVar10 = local_340;
              if (*(int *)(local_340 + 8) - *(int *)(local_340 + 0x34) != (int)uStack_318) {
                local_3c4[0] = 0;
                `TSparseArray<TSparseSetElement<FNetworkGUID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_3c4);
              }
              if (((TStack_338.CurrentBitIndex == uVar20) &&
                  (TStack_338.Array == (TBitArray<FDefaultBitArrayAllocator> *)(pFVar7 + 0x38))) &&
                 (pFVar10 == pFVar1)) {
                EVar21 = NeverSkip;
                goto LAB_147a9ee01;
              }
              cVar11 = (**(code **)(local_390->_padding_ + 0x358))
                                 (local_390,
                                  (longlong)TStack_338.CurrentBitIndex * 0x10 + *(longlong *)pFVar10
                                 );
              if (cVar11 != '\0') goto LAB_147a9edf9;
              TStack_338.UnvisitedBitMask =
                   TStack_338.UnvisitedBitMask & ~TStack_338._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_338);
            } while( true );
          }
        }
      }
LAB_147a9f3b6:
      if (local_308.DebugName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_308.DebugName.Data.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_228)
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_240);
    }
  }
  return;
LAB_147a9edf9:
  EVar21 = SkipIfNotReady;
LAB_147a9ee01:
  local_d8._0_8_ = (FScriptContainerElement *)0x0;
  local_d8._8_8_ = 0;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  local_ac = 0x80;
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_98 = (ForElementType<FSetElementId>)0x0;
  local_90 = 0;
  local_3c6 = false;
  ::FString::FString(&local_3c0,L"(Unknown)");
  pFVar9 = local_388;
  pUVar14 = local_3b0;
  if (local_388 == (FFieldNetCache *)0x0) {
    if (2 < (byte)LogNet._0_1_) {
      UObjectBaseUtility::GetFullName
                ((UObjectBaseUtility *)local_3b0,&local_208,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_208.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    pFVar16 = FFieldVariant::GetName(&local_388->Field,&local_1f8);
    if (&local_3c0 != pFVar16) {
      if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
      }
      local_3c0.Data.AllocatorInstance.Data = (pFVar16->Data).AllocatorInstance.Data;
      (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3c0.Data.ArrayNum = (pFVar16->Data).ArrayNum;
      local_3c0.Data.ArrayMax = (pFVar16->Data).ArrayMax;
      (pFVar16->Data).ArrayNum = 0;
      (pFVar16->Data).ArrayMax = 0;
    }
    if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
    }
    pFVar1 = local_380;
    bVar12 = ReceivedRPC(this,&local_198,
                         (TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *)
                         local_d8,&local_3c6,(FReplicationFlags *)(local_380 + 4),pFVar9,EVar21);
    pUVar14 = local_3b0;
    if (bVar12) {
      if (local_3c6 == false) {
        uVar20 = *(uint *)(pFVar1 + 0x20);
        if ((uVar20 <= local_3a0) && (iVar18 = local_3a0 - uVar20, iVar18 != 0)) {
          if (5 < (byte)LogNet._0_1_) {
            fVar23 = (float)(**(code **)(GEngine->_padding_ + 0x310))(GEngine,0);
            if (0.0 < fVar23) {
              (**(code **)(GEngine->_padding_ + 0x310))(GEngine,0);
            }
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)local_3b0,&local_1d8,(UObject *)0x0,None);
            UE::Logging::Private::BasicLog<6>
                      ((FStaticBasicLogRecord *)&PTR_u_FObjectReplicat_15183d510,
                       (FLogCategoryBase *)&LogNet);
            if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
            }
          }
          piVar2 = &this->Connection->TotalDelayedRPCs;
          *piVar2 = *piVar2 + 1;
          piVar2 = &this->Connection->TotalDelayedRPCsFrameCount;
          *piVar2 = *piVar2 + iVar18;
        }
        goto LAB_147a9f0f7;
      }
      TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::operator=
                ((TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *)
                 (pFVar1 + 0x28),
                 (TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *)local_d8
                );
      *local_3a8 = true;
      goto LAB_147a9f2c1;
    }
  }
  if ((local_3c5 == '\0') || (this->Connection->bInternalAck != 0)) {
    if (2 < (byte)LogNet._0_1_) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar14,&local_1e8,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
      }
    }
LAB_147a9f0f7:
    TArray<FObjectReplicator::FRPCPendingLocalCall,TSizedDefaultAllocator<32>_>::RemoveAt
              (&this->PendingLocalRPCs,0,Default);
    if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
    }
    local_90 = 0;
    if (local_98 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_98);
    }
    bVar12 = local_d8._12_4_ != 0;
    local_d8._8_8_ = (ulonglong)(uint)local_d8._12_4_ << 0x20;
    if (bVar12) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)local_d8,0,(int *)(local_d8 + 0xc));
    }
    local_a8 = 0xffffffff;
    local_a4 = 0;
    local_b0 = 0;
    if (0x80 < local_ac) {
      local_ac = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10),0);
    }
    if (local_b8 != (void *)0x0) {
      FMemory::Free(local_b8);
    }
    if ((FScriptContainerElement *)local_d8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_d8._0_8_);
    }
    FNetBitReader::~FNetBitReader(&local_198);
    if ((this->PendingLocalRPCs).ArrayNum < 1) goto LAB_147a9f3b6;
    goto LAB_147a9eb80;
  }
  DestructItems<FObjectReplicator::FRPCPendingLocalCall,int>
            ((FRPCPendingLocalCall *)(this->PendingLocalRPCs).AllocatorInstance.Data,
             (this->PendingLocalRPCs).ArrayNum);
  piVar2 = &(this->PendingLocalRPCs).ArrayMax;
  (this->PendingLocalRPCs).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x78,8,0,&(this->PendingLocalRPCs).AllocatorInstance,0,piVar2);
  }
  *local_3a8 = false;
  if (1 < (byte)LogNet._0_1_) {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar14,local_1c8,(UObject *)0x0,None);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    if (local_1c8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8[0].Data.AllocatorInstance.Data);
    }
  }
  UNetConnection::Close(this->Connection);
LAB_147a9f2c1:
  if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
  }
  local_90 = 0;
  if (local_98 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98);
  }
  bVar12 = local_d8._12_4_ != 0;
  local_d8._8_8_ = (ulonglong)(uint)local_d8._12_4_ << 0x20;
  if (bVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_d8,0,(int *)(local_d8 + 0xc));
  }
  local_b0 = 0;
  local_a4 = 0;
  local_a8 = 0xffffffff;
  if (0x80 < local_ac) {
    local_ac = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10),0);
  }
  if (local_b8 != (void *)0x0) {
    FMemory::Free(local_b8);
  }
  if ((FScriptContainerElement *)local_d8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_d8._0_8_);
  }
  FNetBitReader::~FNetBitReader(&local_198);
  goto LAB_147a9f3b6;
}

// ValidateAgainstState @ 147a9f420

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall FObjectReplicator::ValidateAgainstState(FObjectReplicator *this,UObject *param_1)

{
  TRepDataBufferBase<1,unsigned_char> TVar1;
  bool bVar2;
  FReplicationChangelistMgr *pFVar3;
  FRepLayout *this_00;
  FName local_res8;
  FString local_18;
  
  if ((this->RepLayout).Object == (FRepLayout *)0x0) {
    if (2 < (byte)LogRep._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
      return false;
    }
  }
  else if ((this->RepState).Ptr == (FRepState *)0x0) {
    if (2 < (byte)LogRep._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
      return false;
    }
  }
  else if ((this->ChangelistMgr).Object == (FReplicationChangelistMgr *)0x0) {
    if (2 < (byte)LogRep._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
      return false;
    }
  }
  else {
    pFVar3 = TSharedPtr<FReplicationChangelistMgr,1>::operator->(&this->ChangelistMgr);
    if (pFVar3 == (FReplicationChangelistMgr *)&DAT_fffffffffffffff8) {
      if (2 < (byte)LogRep._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
        return false;
      }
    }
    else {
      TVar1.Data = (uchar *)(pFVar3->RepChangelistState).StaticBuffer.Buffer.AllocatorInstance.Data;
      this_00 = TSharedPtr<FRepLayout,1>::operator->(&this->RepLayout);
      bVar2 = FRepLayout::DiffProperties<1,0>
                        (this_00,(TArray<FProperty_*,TSizedDefaultAllocator<32>_> *)0x0,TVar1,
                         (TRepDataBufferBase<0,unsigned_char_const_>)param_1,None);
      if (!bVar2) {
        return true;
      }
      if (2 < (byte)LogRep._0_1_) {
        local_res8.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
        local_res8.Number = *(uint *)&param_1->field_0x1c;
        ::FName::ToString(&local_res8,&local_18);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRep);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  return false;
}

// WritePropertyHeaderAndPayload @ 147aa1500

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */

void __thiscall
FObjectReplicator::WritePropertyHeaderAndPayload
          (FObjectReplicator *this,UObject *param_1,FProperty *param_2,FNetFieldExportGroup *param_3
          ,FNetBitWriter *param_4,FNetBitWriter *param_5)

{
  UNetDriver *pUVar1;
  FClassNetCache *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FClassNetCache *pFVar7;
  TTuple<void_*,FFieldNetCache_*> *pTVar8;
  FFieldNetCache *pFVar9;
  
  pUVar1 = (this->Connection->Driver).field0_0x0.DebugPtr;
  if (((pUVar1->NetCache).Object == (FClassNetCacheMgr *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar7 = FClassNetCacheMgr::GetClassNetCache
                     ((pUVar1->NetCache).Object,(this->ObjectClass).field0_0x0.DebugPtr);
  if ((pFVar7 == (FClassNetCache *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ClassCache",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                         ,0xad3,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((((ulonglong)param_2 & 1) != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsUObject()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x180,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar9 = (FFieldNetCache *)0x0;
  for (pFVar2 = pFVar7; pFVar2 != (FClassNetCache *)0x0; pFVar2 = pFVar2->Super) {
    pTVar8 = TSet<TTuple<void_*,FFieldNetCache_*>,TDefaultMapHashableKeyFuncs<void_*,FFieldNetCache_*,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<void_*,FFieldNetCache_*>,TDefaultMapHashableKeyFuncs<void_*,FFieldNetCache_*,0>,FDefaultSetAllocator>
                     *)&pFVar2->FieldMap,param_2);
    if (pTVar8 == (TTuple<void_*,FFieldNetCache_*> *)0x0) {
      pFVar9 = (FFieldNetCache *)0x0;
    }
    else {
      pFVar9 = *(FFieldNetCache **)&pTVar8->field_0x8;
      if (pFVar9 != (FFieldNetCache *)0x0) break;
    }
  }
  if (((pFVar7->Fields).ArrayNum + pFVar7->FieldsBase < pFVar9->FieldNetIndex) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FieldCache->FieldNetIndex <= ClassCache->GetMaxIndex()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                         ,0xadb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar3 = param_5->_padding_;
  iVar6 = UActorChannel::WriteFieldHeaderAndPayload
                    (this->OwningChannel,param_4,pFVar7,pFVar9,param_3,param_5,false);
  if ((GNetworkProfiler.bIsTrackingEnabled != false) ||
     (GNetworkProfiler.bShouldTrackingBeEnabled != false)) {
    if (__CsvProfilerStat2785 == false) {
      FCsvProfilerTrace::OutputInlineStatExclusive("NetworkProfiler");
      __CsvProfilerStat2785 = true;
    }
    FCsvProfiler::BeginExclusiveStat("NetworkProfiler","CSV_NetworkProfiler");
    FNetworkProfiler::TrackWritePropertyHeader
              (&GNetworkProfiler,param_2,(short)iVar6 - (short)lVar3,(UNetConnection *)0x0);
    FCsvProfiler::EndExclusiveStat("NetworkProfiler");
  }
  return;
}

// operator() @ 150516800

bool __thiscall
`FObjectReplicator::ExecutePendingTransactionalRPCs'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<28206385967663684>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<28206385967663684>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150516c10

bool __thiscall
`FObjectReplicator::QueuePropertyRepNotify'::__l6::<lambda_1>::operator()(void *this)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar5 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<28206385967663780>);
  if (bVar4) {
    pvVar1 = (void *)**(undefined8 **)((longlong)this + 8);
    bVar5 = IsThisNotNull(pvVar1,"FField::GetName");
    if (bVar5) {
      ::FName::ToString((FName *)((longlong)pvVar1 + 0x20),&local_18);
    }
    else {
      ::FString::FString(&local_18,L"None");
    }
    if ((UObjectBaseUtility *)**(undefined8 **)this == (UObjectBaseUtility *)0x0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      UObjectBaseUtility::GetPathName
                ((UObjectBaseUtility *)**(undefined8 **)this,&local_28,(UObject *)0x0);
    }
    bVar3 = true;
    bVar5 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<28206385967663780>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150516cfc;
    }
  }
  bVar4 = false;
LAB_150516cfc:
  if ((bVar5) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  return false;
}

// operator() @ 150516e10

bool __thiscall `FObjectReplicator::CleanUp'::__l17::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<28206385967661676>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<28206385967661676>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150516f80

bool __thiscall `FObjectReplicator::StartReplicating'::__l45::<lambda_1>::operator()(void *this)

{
  longlong *plVar1;
  UObjectBaseUtility *pUVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  FString local_48;
  FString local_38;
  void *local_28 [2];
  
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  bVar7 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<28206385967661709>);
  if (bVar7) {
    plVar1 = *(longlong **)(**(longlong **)((longlong)this + 8) + 0x28);
    (**(code **)(*plVar1 + 0x2e0))(plVar1,local_28);
    pUVar2 = *(UObjectBaseUtility **)(**(longlong **)((longlong)this + 8) + 0x68);
    if ((pUVar2 == (UObjectBaseUtility *)0x0) || (*(longlong *)&pUVar2->field_0x10 == 0)) {
      ::FString::FString(&local_38,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName(pUVar2,&local_38,(UObject *)0x0,None);
    }
    pUVar2 = (UObjectBaseUtility *)**(undefined8 **)this;
    if ((pUVar2 == (UObjectBaseUtility *)0x0) || (*(longlong *)&pUVar2->field_0x10 == 0)) {
      ::FString::FString(&local_48,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName(pUVar2,&local_48,(UObject *)0x0,None);
    }
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    bVar7 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<28206385967661709>,&::ENSURE_Static);
    if (bVar7) {
      bVar7 = true;
      goto LAB_1505170b2;
    }
  }
  bVar7 = false;
LAB_1505170b2:
  if ((bVar4) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((bVar5) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar6) && (local_28[0] != (void *)0x0)) {
    FMemory::Free(local_28[0]);
  }
  if (bVar7) {
    pcVar3 = (code *)swi(3);
    uVar8 = (*pcVar3)();
    return (bool)uVar8;
  }
  return false;
}

// operator() @ 150517560

bool __thiscall
`FObjectReplicator::ExecutePendingTransactionalRPCs'::__l6::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<28206385967663691>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<28206385967663691>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150517750

bool __thiscall `FObjectReplicator::CleanUp'::__l17::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<28206385967661677>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<28206385967661677>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505179d0

bool __thiscall `FObjectReplicator::StartReplicating'::__l51::<lambda_2>::operator()(void *this)

{
  longlong *plVar1;
  UObjectBaseUtility *pUVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  FString local_48;
  FString local_38;
  void *local_28 [2];
  
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  bVar7 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<28206385967661717>);
  if (bVar7) {
    plVar1 = *(longlong **)(**(longlong **)((longlong)this + 8) + 0x28);
    (**(code **)(*plVar1 + 0x2e0))(plVar1,local_28);
    pUVar2 = *(UObjectBaseUtility **)(**(longlong **)((longlong)this + 8) + 0x68);
    if ((pUVar2 == (UObjectBaseUtility *)0x0) || (*(longlong *)&pUVar2->field_0x10 == 0)) {
      ::FString::FString(&local_38,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName(pUVar2,&local_38,(UObject *)0x0,None);
    }
    pUVar2 = (UObjectBaseUtility *)**(undefined8 **)this;
    if ((pUVar2 == (UObjectBaseUtility *)0x0) || (*(longlong *)&pUVar2->field_0x10 == 0)) {
      ::FString::FString(&local_48,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName(pUVar2,&local_48,(UObject *)0x0,None);
    }
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    bVar7 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<28206385967661717>,&::ENSURE_Static);
    if (bVar7) {
      bVar7 = true;
      goto LAB_150517b02;
    }
  }
  bVar7 = false;
LAB_150517b02:
  if ((bVar4) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((bVar5) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar6) && (local_28[0] != (void *)0x0)) {
    FMemory::Free(local_28[0]);
  }
  if (bVar7) {
    pcVar3 = (code *)swi(3);
    uVar8 = (*pcVar3)();
    return (bool)uVar8;
  }
  return false;
}

// operator() @ 150517e60

bool __thiscall
`FObjectReplicator::ExecutePendingTransactionalRPCs'::__l15::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<28206385967663711>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<28206385967663711>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150517f20

bool __thiscall
`FObjectReplicator::ExecutePendingTransactionalRPCs'::__l38::<lambda_5>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<28206385967663737>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<28206385967663737>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150517f70

bool __thiscall
`FObjectReplicator::ExecutePendingTransactionalRPCs'::__l38::<lambda_6>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<28206385967663738>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<28206385967663738>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

