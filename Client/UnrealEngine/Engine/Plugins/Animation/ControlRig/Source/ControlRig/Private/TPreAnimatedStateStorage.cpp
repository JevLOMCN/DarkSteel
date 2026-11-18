// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 20

// CacheTrackedPreAnimatedValue<UControlRig_*> @ 14a38f950

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigTraits>::
CacheTrackedPreAnimatedValue<UControlRig_*>
          (TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigTraits> *this,
          EPreAnimatedCaptureSourceTracking param_1,UControlRig *param_2)

{
  FPreAnimatedStateExtension **ppFVar1;
  longlong lVar2;
  byte bVar3;
  FPreAnimatedStateExtension *this_00;
  longlong *plVar4;
  TReferenceControllerBase<1> *pTVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  FPreAnimatedStorageIndex FVar8;
  FWeakObjectPtr FVar9;
  EPreAnimatedStorageRequirement EVar10;
  bool bVar11;
  TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex> *pTVar12;
  UObject *pUVar13;
  UClass *pUVar14;
  USkeletalMeshComponent *this_01;
  FPreAnimatedControlRigState *pFVar15;
  int iVar16;
  undefined1 local_res10 [8];
  UControlRig *local_res18;
  undefined1 local_res20 [8];
  undefined1 local_b8 [8];
  FPreAnimatedStorageIndex local_b0 [2];
  FPreAnimatedControlRigState local_a8;
  FPreAnimatedStateEntry local_90;
  FPreAnimatedStorageIndex local_80 [2];
  undefined1 local_78 [8];
  FWeakObjectPtr local_70;
  FPreAnimatedStateEntry local_68;
  FWeakObjectPtr local_58;
  FObjectKey local_50;
  FWeakObjectPtr local_48;
  FWeakObjectPtr local_40;
  UControlRig *local_38;
  UControlRig *local_30;
  
  iVar16 = 0;
  local_res18 = param_2;
  if (param_1 == CacheIfTracked) {
    ppFVar1 = &this->ParentExtension;
    if ((*ppFVar1)->NumRequestsForGlobalState == 0) {
      local_50.ObjectIndex = 0;
      local_50.ObjectSerialNumber = 0;
      if (param_2 != (UControlRig *)0x0) {
        if (GC::GIsIncrementalReachabilityPending) {
          GC::MarkAsReachable((UObject *)param_2);
        }
        local_58.ObjectIndex = 0;
        local_58.ObjectSerialNumber = 0;
        local_38 = param_2;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable((UObject *)param_2);
        }
        FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_38);
        local_50.ObjectIndex = local_58.ObjectIndex;
        local_50.ObjectSerialNumber = local_58.ObjectSerialNumber;
      }
      FBoundObjectPreAnimatedStateTraits::FindGroupImpl
                ((FBoundObjectPreAnimatedStateTraits *)&this->Traits,(UObject *)local_78);
      pTVar12 = TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                        *)&this->KeyToStorageIndex,&local_50);
      if (pTVar12 == (TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex> *)0x0) {
        return;
      }
      local_68.ValueHandle.StorageIndex.Value = *(int *)&pTVar12->field_0x8;
      local_68.GroupHandle.Value = local_78._0_4_;
      local_68.ValueHandle.TypeID.TypeID = (this->StorageID).TypeID;
      if (local_68.ValueHandle.StorageIndex.Value == -1) {
        return;
      }
      bVar11 = FPreAnimatedStateExtension::MetaDataExists(*ppFVar1,&local_68);
      if (!bVar11) {
        local_res10[0] = 0;
        bVar11 = `UE::MovieScene::
                 TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigTraits>::
                 ShouldTrackCaptureSource<UControlRig_*_&>'::__l11::<lambda_1>::operator()
                           (local_res10);
        if (!bVar11) {
          return;
        }
      }
    }
    MakeEntry<UControlRig_*_&>(this,&local_90,&local_res18);
    this_00 = *ppFVar1;
    if (this_00->NumRequestsForGlobalState == 0) {
      if ((local_90.ValueHandle.StorageIndex.Value == -1) ||
         (bVar11 = FPreAnimatedStateExtension::MetaDataExists(this_00,&local_90), !bVar11)) {
        local_res20[0] = 0;
        `UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigTraits>::
        TrackCaptureSource'::__l5::<lambda_1>::operator()(local_res20);
      }
    }
    else {
      FPreAnimatedStateExtension::EnsureMetaData(this_00,&local_90);
    }
  }
  else {
    if (param_1 != AlwaysCache) {
      `UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigTraits>::
      ShouldTrackCaptureSource<UControlRig_*_&>'::__l4::<lambda_2>::operator()(local_b8);
      return;
    }
    MakeEntry<UControlRig_*_&>(this,&local_90,&local_res18);
    FPreAnimatedStateExtension::AddSourceMetaData(this->ParentExtension,&local_90);
  }
  EVar10 = FPreAnimatedStateExtension::GetStorageRequirement(this->ParentExtension,&local_90);
  FVar8.Value = local_90.ValueHandle.StorageIndex.Value;
  local_80[0].Value = local_90.ValueHandle.StorageIndex.Value;
  if ((local_90.ValueHandle.StorageIndex.Value == -1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StorageIndex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                          ,0x1b6,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar2 = *(longlong *)&this->PreAnimatedStorage + (longlong)FVar8.Value * 0x28;
  if (EVar10 == Persistent) {
    bVar11 = (*(byte *)(lVar2 + 0x20) & 1) == 0;
  }
  else {
    if (EVar10 != Transient) {
      return;
    }
    bVar3 = *(byte *)(lVar2 + 0x20);
    if (((bVar3 & 1) != 0) && ((bVar3 & 2) == 0)) {
      return;
    }
    pFVar15 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
              ::Find(&this->TransientPreAnimatedStorage,local_80);
    bVar11 = pFVar15 == (FPreAnimatedControlRigState *)0x0;
  }
  if (!bVar11) {
    return;
  }
  local_70.ObjectIndex = 0;
  local_70.ObjectSerialNumber = 0;
  if (param_2 != (UControlRig *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    local_48.ObjectIndex = 0;
    local_48.ObjectSerialNumber = 0;
    local_30 = param_2;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_48,(FObjectPtr)&local_30);
    local_70 = local_48;
    FVar9 = local_70;
    local_70.ObjectIndex = local_48.ObjectIndex;
    iVar16 = local_70.ObjectIndex;
    local_70 = FVar9;
  }
  local_40.ObjectSerialNumber = local_70.ObjectSerialNumber;
  local_40.ObjectIndex = iVar16;
  pUVar13 = FWeakObjectPtr::Get(&local_40);
  if (pUVar13 == (UObject *)0x0) {
LAB_14a38fbfa:
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("ControlRig",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Sequencer\\MovieSceneControlRigSystem.cpp"
                        ,0x30a,L"");
    pUVar13 = (UObject *)0x0;
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    pUVar14 = Z_Construct_UClass_UControlRig_NoRegister();
    iVar16 = (int)pUVar14->_padding_;
    if ((*(int *)(*(longlong *)&pUVar13->field_0x10 + 0x38) < iVar16) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar13->field_0x10 + 0x30) + (longlong)iVar16 * 8) !=
        &pUVar14->_padding_)) goto LAB_14a38fbfa;
  }
  local_a8.SkeletalMeshRestoreState.SkeletalMeshCompEditorParams.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_a8.SkeletalMeshRestoreState.SkeletalMeshCompEditorParams.ArrayNum = 0;
  local_a8.SkeletalMeshRestoreState.SkeletalMeshCompEditorParams.ArrayMax = 0;
  plVar4 = *(longlong **)&pUVar13[0x17].field_0x8;
  pTVar5 = *(TReferenceControllerBase<1> **)&pUVar13[0x17].field_0x10;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((plVar4 == (longlong *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this_01 = (USkeletalMeshComponent *)(**(code **)(*plVar4 + 0x28))(plVar4);
  if (this_01 == (USkeletalMeshComponent *)0x0) {
LAB_14a38fcc2:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  }
  else {
    pUVar14 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar16 = (int)pUVar14->_padding_;
    if ((*(int *)(this_01->_padding_ + 0x38) < iVar16) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar16 * 8) !=
        &pUVar14->_padding_)) goto LAB_14a38fcc2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    FSkeletalMeshRestoreState::SaveState(&local_a8.SkeletalMeshRestoreState,this_01);
    local_a8.AnimationMode = USkeletalMeshComponent::GetAnimationMode(this_01);
  }
  local_b0[0].Value = local_90.ValueHandle.StorageIndex.Value;
  if ((local_90.ValueHandle.StorageIndex.Value == -1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StorageIndex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                          ,0x195,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar2 = *(longlong *)&this->PreAnimatedStorage + (longlong)local_b0[0].Value * 0x28;
  if (EVar10 == Persistent) {
    if (((*(byte *)(lVar2 + 0x20) & 1) != 0) &&
       (bVar11 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<3111672766223352219>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                            ,0x19b,"!CachedData.bInitialized"), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar15 = (FPreAnimatedControlRigState *)(lVar2 + 8);
    if (pFVar15 != &local_a8) {
      pFVar6 = (pFVar15->SkeletalMeshRestoreState).SkeletalMeshCompEditorParams.AllocatorInstance.
               Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      (pFVar15->SkeletalMeshRestoreState).SkeletalMeshCompEditorParams.AllocatorInstance.Data =
           local_a8.SkeletalMeshRestoreState.SkeletalMeshCompEditorParams.AllocatorInstance.Data;
      local_a8.SkeletalMeshRestoreState.SkeletalMeshCompEditorParams.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      *(int *)(lVar2 + 0x10) =
           local_a8.SkeletalMeshRestoreState.SkeletalMeshCompEditorParams.ArrayNum;
      *(int *)(lVar2 + 0x14) =
           local_a8.SkeletalMeshRestoreState.SkeletalMeshCompEditorParams.ArrayMax;
      local_a8.SkeletalMeshRestoreState.SkeletalMeshCompEditorParams.ArrayNum = 0;
      local_a8.SkeletalMeshRestoreState.SkeletalMeshCompEditorParams.ArrayMax = 0;
    }
    *(Type *)(lVar2 + 0x18) = local_a8.AnimationMode;
    *(byte *)(lVar2 + 0x20) = *(byte *)(lVar2 + 0x20) | 3;
  }
  else if (EVar10 == Transient) {
    if ((*(byte *)(lVar2 + 0x20) & 1) != 0) {
      pFVar15 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                ::Find(&this->TransientPreAnimatedStorage,local_b0);
      if ((pFVar15 != (FPreAnimatedControlRigState *)0x0) &&
         (bVar11 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<3111672766223352226>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                              ,0x1a2,
                              "!CachedData.bInitialized || !TransientPreAnimatedStorage.Contains(StorageIndex)"
                             ), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((*(byte *)(lVar2 + 0x20) & 1) != 0) {
        TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
        ::
        Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,UE::MovieScene::FPreAnimatedControlRigState>
                  (&this->TransientPreAnimatedStorage,local_b0,&local_a8);
        goto LAB_14a38fe35;
      }
    }
    pFVar15 = (FPreAnimatedControlRigState *)(lVar2 + 8);
    if (pFVar15 != &local_a8) {
      pFVar6 = (pFVar15->SkeletalMeshRestoreState).SkeletalMeshCompEditorParams.AllocatorInstance.
               Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      (pFVar15->SkeletalMeshRestoreState).SkeletalMeshCompEditorParams.AllocatorInstance.Data =
           local_a8.SkeletalMeshRestoreState.SkeletalMeshCompEditorParams.AllocatorInstance.Data;
      local_a8.SkeletalMeshRestoreState.SkeletalMeshCompEditorParams.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      *(int *)(lVar2 + 0x10) =
           local_a8.SkeletalMeshRestoreState.SkeletalMeshCompEditorParams.ArrayNum;
      *(int *)(lVar2 + 0x14) =
           local_a8.SkeletalMeshRestoreState.SkeletalMeshCompEditorParams.ArrayMax;
      local_a8.SkeletalMeshRestoreState.SkeletalMeshCompEditorParams.ArrayNum = 0;
      local_a8.SkeletalMeshRestoreState.SkeletalMeshCompEditorParams.ArrayMax = 0;
    }
    *(Type *)(lVar2 + 0x18) = local_a8.AnimationMode;
    *(byte *)(lVar2 + 0x20) = *(byte *)(lVar2 + 0x20) | 1;
  }
LAB_14a38fe35:
  if (local_a8.SkeletalMeshRestoreState.SkeletalMeshCompEditorParams.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.SkeletalMeshRestoreState.SkeletalMeshCompEditorParams.AllocatorInstance.
                  Data);
  }
  return;
}

// MakeEntry<UControlRig_*_&> @ 14a3a5540

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FPreAnimatedStateEntry * __thiscall
UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigTraits>::
MakeEntry<UControlRig_*_&>
          (TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigTraits> *this,
          FPreAnimatedStateEntry *__return_storage_ptr__,UControlRig **param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  UControlRig *pUVar4;
  longlong lVar5;
  FPreAnimatedStorageIndex *pFVar6;
  int iVar7;
  TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex> *pTVar8;
  int local_res8 [2];
  FWeakObjectPtr local_res10;
  TPairInitializer<FObjectKey_const_&,UE::MovieScene::FPreAnimatedStorageIndex_const_&> local_res18;
  FPreAnimatedStorageIndex **local_58;
  FWeakObjectPtr *local_50;
  
  pUVar4 = *param_1;
  local_res18.Value = (FPreAnimatedStorageIndex *)0x0;
  if (pUVar4 != (UControlRig *)0x0) {
    if (GC::GIsIncrementalReachabilityPending) {
      GC::MarkAsReachable((UObject *)pUVar4);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res18.Key = (FObjectKey *)pUVar4;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)pUVar4);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
    local_res18.Value = (FPreAnimatedStorageIndex *)local_res10;
  }
  FBoundObjectPreAnimatedStateTraits::MakeGroupImpl
            ((FBoundObjectPreAnimatedStateTraits *)&this->Traits,(UObject *)&local_res10);
  pTVar8 = TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                   *)&this->KeyToStorageIndex,(FObjectKey *)&local_res18.Value);
  pFVar6 = local_res18.Value;
  if (pTVar8 != (TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex> *)0x0) {
    local_res8[0] = *(int *)&pTVar8->field_0x8;
    if (local_res8[0] != -1) goto LAB_14a3a56c3;
  }
  iVar1 = *(int *)&(this->PreAnimatedStorage).field_0x34;
  if (iVar1 == 0) {
    iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)&this->PreAnimatedStorage,
                       (int *)&(this->PreAnimatedStorage).field_0x8,
                       (int *)&(this->PreAnimatedStorage).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->PreAnimatedStorage).field_0x10,false)
    ;
  }
  else {
    iVar7 = *(int *)&(this->PreAnimatedStorage).field_0x30;
    iVar1 = iVar1 + -1;
    lVar5 = *(longlong *)&this->PreAnimatedStorage;
    iVar2 = *(int *)(lVar5 + 4 + (longlong)iVar7 * 0x28);
    *(int *)&(this->PreAnimatedStorage).field_0x30 = iVar2;
    *(int *)&(this->PreAnimatedStorage).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar5 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,FDefaultSparseArrayAllocator>::AllocateIndex
            ((TSparseArrayBase<40,8,FDefaultSparseArrayAllocator> *)&this->PreAnimatedStorage,
             (FSparseArrayAllocationInfo *)&local_58,iVar7);
  if (local_50 != (FWeakObjectPtr *)0x0) {
    *local_50 = (FWeakObjectPtr)pFVar6;
    local_50[1].ObjectIndex = 0;
    local_50[1].ObjectSerialNumber = 0;
    local_50[2].ObjectIndex = 0;
    local_50[2].ObjectSerialNumber = 0;
    local_50[3].ObjectIndex = local_res8[0];
    *(byte *)&local_50[4].ObjectIndex = (byte)local_50[4].ObjectIndex & 0xfc;
  }
  local_res8[0] = (int)local_58;
  local_58 = &local_res18.Value;
  local_50 = (FWeakObjectPtr *)local_res8;
  TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FObjectKey_const_&,UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
            ((TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
              *)&this->KeyToStorageIndex,&local_res18,(bool *)&local_58);
LAB_14a3a56c3:
  (__return_storage_ptr__->GroupHandle).Value = local_res10.ObjectIndex;
  uVar3 = (this->StorageID).TypeID;
  (__return_storage_ptr__->ValueHandle).StorageIndex.Value = local_res8[0];
  (__return_storage_ptr__->ValueHandle).TypeID.TypeID = uVar3;
  return __return_storage_ptr__;
}

// MakeEntry<UControlRig_*_&,FName_&> @ 14a3a56f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FPreAnimatedStateEntry * __thiscall
UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigParameterTraits>::
MakeEntry<UControlRig_*_&,FName_&>
          (TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigParameterTraits> *this,
          FPreAnimatedStateEntry *__return_storage_ptr__,UControlRig **param_1,FName *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  UControlRig *pUVar4;
  longlong lVar5;
  int iVar6;
  TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex> *pTVar7;
  int local_res8 [2];
  FWeakObjectPtr local_res10;
  TPairInitializer<TTuple<FObjectKey,FName>_const_&,UE::MovieScene::FPreAnimatedStorageIndex_const_&>
  local_res18;
  undefined1 local_a8 [16];
  FSparseArrayAllocationInfo local_98;
  FWeakObjectPtr local_88;
  FName FStack_80;
  FWeakObjectPtr local_58;
  undefined1 local_50;
  
  pUVar4 = *param_1;
  local_a8._0_4_ = 0;
  local_a8._4_4_ = 0;
  if (pUVar4 != (UControlRig *)0x0) {
    if (GC::GIsIncrementalReachabilityPending) {
      GC::MarkAsReachable((UObject *)pUVar4);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res18.Key = (TTuple<FObjectKey,FName> *)pUVar4;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)pUVar4);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
    local_a8._0_8_ = local_res10;
  }
  local_a8._8_8_ = *param_2;
  FBoundObjectPreAnimatedStateTraits::MakeGroupImpl
            ((FBoundObjectPreAnimatedStateTraits *)&this->Traits,(UObject *)&local_res10);
  pTVar7 = TSet<TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                   *)&this->KeyToStorageIndex,(TTuple<FObjectKey,FName> *)local_a8);
  if (pTVar7 != (TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex> *)0x0) {
    local_res8[0] = *(int *)&pTVar7->field_0x10;
    if (local_res8[0] != -1) goto LAB_14a3a5898;
  }
  iVar1 = *(int *)&(this->PreAnimatedStorage).field_0x34;
  local_58.ObjectIndex = 0;
  local_58.ObjectSerialNumber = 0;
  local_88.ObjectIndex = local_a8._0_4_;
  local_88.ObjectSerialNumber = local_a8._4_4_;
  FStack_80.ComparisonIndex.Value = local_a8._8_4_;
  FStack_80.Number = local_a8._12_4_;
  if (iVar1 == 0) {
    iVar6 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,1,(ForAnyElementType *)&this->PreAnimatedStorage,
                       (int *)&(this->PreAnimatedStorage).field_0x8,
                       (int *)&(this->PreAnimatedStorage).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->PreAnimatedStorage).field_0x10,false)
    ;
  }
  else {
    iVar6 = *(int *)&(this->PreAnimatedStorage).field_0x30;
    iVar1 = iVar1 + -1;
    lVar5 = *(longlong *)&this->PreAnimatedStorage;
    iVar2 = *(int *)((longlong)iVar6 * 0x38 + 4 + lVar5);
    *(int *)&(this->PreAnimatedStorage).field_0x30 = iVar2;
    *(int *)&(this->PreAnimatedStorage).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x38 + lVar5) = 0xffffffff;
    }
  }
  TSparseArrayBase<56,8,FDefaultSparseArrayAllocator>::AllocateIndex
            ((TSparseArrayBase<56,8,FDefaultSparseArrayAllocator> *)&this->PreAnimatedStorage,
             &local_98,iVar6);
  if (local_98.Pointer != (FWeakObjectPtr *)0x0) {
    *(FWeakObjectPtr *)local_98.Pointer = local_88;
    *(FName *)((longlong)local_98.Pointer + 8) = FStack_80;
    ((FWeakObjectPtr *)((longlong)local_98.Pointer + 0x10))->ObjectIndex = 0;
    ((FWeakObjectPtr *)((longlong)local_98.Pointer + 0x10))->ObjectSerialNumber = 0;
    ((FWeakObjectPtr *)((longlong)local_98.Pointer + 0x18))->ObjectIndex = 0;
    ((FWeakObjectPtr *)((longlong)local_98.Pointer + 0x18))->ObjectSerialNumber = 0;
    *(FWeakObjectPtr *)((longlong)local_98.Pointer + 0x20) = local_58;
    *(undefined1 *)&((FWeakObjectPtr *)((longlong)local_98.Pointer + 0x28))->ObjectIndex = local_50;
    *(byte *)&((FWeakObjectPtr *)((longlong)local_98.Pointer + 0x30))->ObjectIndex =
         (byte)((FWeakObjectPtr *)((longlong)local_98.Pointer + 0x30))->ObjectIndex & 0xfc;
  }
  local_res8[0] = local_98.Index;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_98._0_8_ = local_a8;
  local_98.Pointer = local_res8;
  TSet<TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<TTuple<FObjectKey,FName>_const_&,UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
            ((TSet<TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
              *)&this->KeyToStorageIndex,&local_res18,(bool *)&local_98);
LAB_14a3a5898:
  (__return_storage_ptr__->GroupHandle).Value = local_res10.ObjectIndex;
  uVar3 = (this->StorageID).TypeID;
  (__return_storage_ptr__->ValueHandle).StorageIndex.Value = local_res8[0];
  (__return_storage_ptr__->ValueHandle).TypeID.TypeID = uVar3;
  return __return_storage_ptr__;
}

// ~TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigParameterTraits> @ 14a3bb850

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigParameterTraits>::
~TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigParameterTraits>
          (TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigParameterTraits> *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  
  *(undefined4 *)&(this->Traits).PreAnimatedBuffers.field_0x48 = 0;
  pvVar3 = *(void **)&(this->Traits).PreAnimatedBuffers.field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FObjectKey,TWeakPtr<UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedBufferPairs,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,TWeakPtr<UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedBufferPairs,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FObjectKey,TWeakPtr<UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedBufferPairs,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Traits).PreAnimatedBuffers);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)(this->Traits)._padding_);
  DestructItems<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedParameterKey>,int>
            ((TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedParameterKey>
              *)(this->TransientPreAnimatedStorage).Pairs.AllocatorInstance.Data,
             (this->TransientPreAnimatedStorage).Pairs.ArrayNum);
  pFVar4 = (this->TransientPreAnimatedStorage).Pairs.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigParameterTraits>::FCachedData,FDefaultSparseArrayAllocator>
  ::
  ~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigParameterTraits>::FCachedData,FDefaultSparseArrayAllocator>
            (&this->PreAnimatedStorage);
  *(undefined4 *)&(this->KeyToStorageIndex).field_0x48 = 0;
  pvVar3 = *(void **)&(this->KeyToStorageIndex).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->KeyToStorageIndex);
  this->_padding_ = (longlong)&___7IPreAnimatedStorage_MovieScene_UE__6B_;
  plVar5 = (longlong *)this->_padding_;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  return;
}

// ~TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigTraits> @ 14a3bb920

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigTraits>::
~TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigTraits>
          (TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigTraits> *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  longlong *plVar5;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->Traits).field_0x8);
  DestructItems<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigState>,int>
            ((TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigState>
              *)(this->TransientPreAnimatedStorage).Pairs.AllocatorInstance.Data,
             (this->TransientPreAnimatedStorage).Pairs.ArrayNum);
  pFVar3 = (this->TransientPreAnimatedStorage).Pairs.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigTraits>::FCachedData,FDefaultSparseArrayAllocator>
  ::
  ~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigTraits>::FCachedData,FDefaultSparseArrayAllocator>
            (&this->PreAnimatedStorage);
  *(undefined4 *)&(this->KeyToStorageIndex).field_0x48 = 0;
  pvVar4 = *(void **)&(this->KeyToStorageIndex).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->KeyToStorageIndex);
  this->_padding_ = (longlong)&___7IPreAnimatedStorage_MovieScene_UE__6B_;
  plVar5 = (longlong *)this->_padding_;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  return;
}

// AddReferencedObjects @ 14a3dfce0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigParameterTraits>::
AddReferencedObjects
          (TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigParameterTraits> *this,
          FReferenceCollector *param_1)

{
  return;
}

// AddReferencedObjects @ 14a3dfcf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigTraits>::
AddReferencedObjects
          (TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigTraits> *this,
          FReferenceCollector *param_1)

{
  TMap<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>_>
  *pTVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint *puVar11;
  uint uVar12;
  undefined1 local_res8 [8];
  FReferenceCollector *local_res10;
  undefined4 local_res18;
  int local_res20;
  int local_108;
  uint uStack_104;
  int iStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_e0;
  int local_c0;
  longlong local_b8;
  undefined1 auStack_b0 [16];
  uint uStack_a0;
  int iStack_9c;
  longlong local_98;
  TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
  *pTStack_90;
  TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
  *local_88;
  undefined2 local_80;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
  *pTStack_50;
  
  pTVar1 = &this->KeyToStorageIndex;
  local_res10 = param_1;
  TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
              *)pTVar1);
  local_80 = 0;
  stack0xffffffffffffff58 = local_78._16_16_;
  local_b8 = local_78._0_8_;
  auStack_b0._0_8_ = local_78._8_8_;
  local_98 = local_58;
  pTStack_90 = pTStack_50;
  local_88 = (TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
              *)pTVar1;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      uStack_a0 = uStack_a0 & ~auStack_b0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_b0);
    } while (iStack_9c < *(int *)(auStack_b0._8_8_ + 0x18));
    if (((char)local_80 != '\0') && (local_80._1_1_ != '\0')) {
      uVar9 = *(int *)&(local_88->Elements).field_0x8 - *(int *)&(local_88->Elements).field_0x34;
      if (uVar9 < 4) {
        iVar7 = 1;
      }
      else {
        uVar2 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
        lVar8 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        local_res18 = (undefined4)lVar8;
        iVar7 = 1 << ((byte)lVar8 & 0x1f);
      }
      if (((0 < (int)uVar9) && (local_88->HashSize < iVar7)) || (iVar7 < local_88->HashSize)) {
        local_88->HashSize = iVar7;
        TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
        ::Rehash(local_88);
      }
    }
  }
  uStack_104 = 1;
  local_108 = 0;
  iVar7 = *(int *)&(this->PreAnimatedStorage).field_0x28;
  puVar3 = &(this->PreAnimatedStorage).field_0x10;
  iStack_f4 = 0;
  iStack_f0 = 0;
  if (iVar7 != 0) {
    puVar11 = *(uint **)&(this->PreAnimatedStorage).field_0x20;
    if (puVar11 == (uint *)0x0) {
      puVar11 = (uint *)puVar3;
    }
    uVar9 = *puVar11;
    iStack_f0 = 0;
    local_108 = 0;
    while (uVar9 == 0) {
      iStack_f0 = iStack_f0 + 0x20;
      lVar8 = (longlong)local_108;
      local_108 = local_108 + 1;
      if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < local_108) goto LAB_14a3dfe7c;
      uVar9 = puVar11[lVar8 + 1];
    }
    uStack_104 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uStack_104 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res20 = (int)lVar8;
    iStack_f4 = local_res20 + -1 + iStack_f0;
    if (iVar7 < iStack_f4) {
LAB_14a3dfe7c:
      iStack_f4 = iVar7;
    }
  }
  uVar9 = *(uint *)&(this->PreAnimatedStorage).field_0x28;
  local_c0 = *(int *)&(this->PreAnimatedStorage).field_0x8 -
             *(int *)&(this->PreAnimatedStorage).field_0x34;
  local_e0._padding_ = CONCAT44(uStack_104,local_108);
  iVar7 = (int)uVar9 >> 5;
  local_e0.CurrentBitIndex = iStack_f4;
  local_e0.UnvisitedBitMask = 0xffffffff;
  local_e0._28_4_ = uStack_ec;
  local_e0.BaseBitIndex = iStack_f0;
  uVar12 = uVar9 & 0xffffffe0;
  local_e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if (((int)uVar9 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(this->PreAnimatedStorage).field_0x28;
  if (uVar9 != uVar4) {
    puVar10 = *(undefined1 **)&(this->PreAnimatedStorage).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = puVar3;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar10 + (longlong)iVar7 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar7;
      uVar12 = uVar12 + 0x20;
      iVar7 = iVar7 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar7) goto LAB_14a3dff60;
      uVar9 = *(uint *)(puVar10 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar12;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_14a3dff60:
  while( true ) {
    if (*(int *)&(this->PreAnimatedStorage).field_0x8 -
        *(int *)&(this->PreAnimatedStorage).field_0x34 != local_c0) {
      `TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigTraits>::FCachedData,FDefaultSparseArrayAllocator>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_e0.CurrentBitIndex == uVar9) &&
       (local_e0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) break;
    AddReferencedObjectForComponent();
    local_e0.UnvisitedBitMask = local_e0.UnvisitedBitMask & ~local_e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_e0);
  }
  return;
}

// DiscardPreAnimatedStateStorage @ 14a4034d0

/* WARNING: Enum "Type": Some values do not have unique names */

EPreAnimatedStorageRequirement __thiscall
UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigParameterTraits>::
DiscardPreAnimatedStateStorage
          (TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigParameterTraits> *this,
          FPreAnimatedStorageIndex param_1,EPreAnimatedStorageRequirement param_2)

{
  undefined8 *puVar1;
  byte *pbVar2;
  IRestoreMask *pIVar3;
  code *pcVar4;
  bool bVar5;
  EPreAnimatedStorageRequirement EVar6;
  char cVar7;
  int iVar8;
  TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigParameterTraits>::FCachedData,FDefaultSparseArrayAllocator>
  *this_00;
  FPreAnimatedStorageIndex local_res10 [2];
  TTuple<FObjectKey,FName> local_28;
  
  pIVar3 = this->RestoreMask;
  local_res10[0].Value = param_1.Value;
  if (pIVar3 != (IRestoreMask *)0x0) {
    pcVar4 = *(code **)((longlong)*pIVar3 + 8);
    if ((param_1.Value == -1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      EVar6 = (*pcVar4)();
      return EVar6;
    }
    cVar7 = (*pcVar4)(pIVar3);
    if (cVar7 == '\0') {
      return NoChange;
    }
  }
  this_00 = &this->PreAnimatedStorage;
  if (param_2 == Persistent) {
    if ((param_1.Value == -1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      EVar6 = (*pcVar4)();
      return EVar6;
    }
    puVar1 = (undefined8 *)((longlong)param_1.Value * 0x38 + *(longlong *)this_00);
    local_28._0_8_ = *puVar1;
    local_28._8_8_ = puVar1[1];
    TMapBase<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>_>
    ::Remove((TMapBase<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>_>
              *)&this->KeyToStorageIndex,&local_28);
    if ((param_1.Value == -1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      EVar6 = (*pcVar4)();
      return EVar6;
    }
    TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigParameterTraits>::FCachedData,FDefaultSparseArrayAllocator>
    ::RemoveAt(this_00,param_1.Value,1);
    TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedParameterKey,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
    ::Remove(&this->TransientPreAnimatedStorage,local_res10);
    EVar6 = None;
  }
  else {
    if ((param_2 != Transient) &&
       (bVar5 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3111672766223352133>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                           ,0x145,"SourceRequirement == EPreAnimatedStorageRequirement::Transient"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      EVar6 = (*pcVar4)();
      return EVar6;
    }
    iVar8 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedParameterKey,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
            ::Remove(&this->TransientPreAnimatedStorage,local_res10);
    if (iVar8 == 0) {
      if ((param_1.Value == -1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                             ,0x45,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        EVar6 = (*pcVar4)();
        return EVar6;
      }
      pbVar2 = (byte *)((longlong)param_1.Value * 0x38 + 0x30 + *(longlong *)this_00);
      *pbVar2 = *pbVar2 | 2;
    }
    EVar6 = Persistent;
  }
  return EVar6;
}

// DiscardPreAnimatedStateStorage @ 14a4036c0

/* WARNING: Enum "Type": Some values do not have unique names */

EPreAnimatedStorageRequirement __thiscall
UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigTraits>::
DiscardPreAnimatedStateStorage
          (TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigTraits> *this,
          FPreAnimatedStorageIndex param_1,EPreAnimatedStorageRequirement param_2)

{
  byte *pbVar1;
  IRestoreMask *pIVar2;
  code *pcVar3;
  bool bVar4;
  EPreAnimatedStorageRequirement EVar5;
  char cVar6;
  int iVar7;
  TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigTraits>::FCachedData,FDefaultSparseArrayAllocator>
  *this_00;
  FObjectKey local_res8;
  FPreAnimatedStorageIndex local_res10 [2];
  
  pIVar2 = this->RestoreMask;
  local_res10[0].Value = param_1.Value;
  if (pIVar2 != (IRestoreMask *)0x0) {
    pcVar3 = *(code **)((longlong)*pIVar2 + 8);
    if ((param_1.Value == -1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
    cVar6 = (*pcVar3)(pIVar2);
    if (cVar6 == '\0') {
      return NoChange;
    }
  }
  this_00 = &this->PreAnimatedStorage;
  if (param_2 != Persistent) {
    if ((param_2 != Transient) &&
       (bVar4 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3111672766223352133>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                           ,0x145,"SourceRequirement == EPreAnimatedStorageRequirement::Transient"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
    iVar7 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
            ::Remove(&this->TransientPreAnimatedStorage,local_res10);
    if (iVar7 == 0) {
      if ((param_1.Value == -1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                             ,0x45,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        EVar5 = (*pcVar3)();
        return EVar5;
      }
      pbVar1 = (byte *)(*(longlong *)this_00 + 0x20 + (longlong)param_1.Value * 0x28);
      *pbVar1 = *pbVar1 | 2;
    }
    return Persistent;
  }
  if ((param_1.Value == -1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                         ,0x45,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    EVar5 = (*pcVar3)();
    return EVar5;
  }
  local_res8 = *(FObjectKey *)(*(longlong *)this_00 + (longlong)param_1.Value * 0x28);
  TMapBase<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>_>
  ::Remove((TMapBase<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>_>
            *)&this->KeyToStorageIndex,&local_res8);
  if ((param_1.Value == -1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                         ,0x45,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    EVar5 = (*pcVar3)();
    return EVar5;
  }
  TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigTraits>::FCachedData,FDefaultSparseArrayAllocator>
  ::RemoveAt(this_00,param_1.Value,1);
  TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
  ::Remove(&this->TransientPreAnimatedStorage,local_res10);
  return None;
}

// GetStorageType @ 14a419c80

/* WARNING: Enum "Type": Some values do not have unique names */

FPreAnimatedStorageID __thiscall
UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigParameterTraits>::
GetStorageType(TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigParameterTraits> *this
              )

{
  uint *in_RDX;
  
  *in_RDX = (this->StorageID).TypeID;
  return (FPreAnimatedStorageID)(uint)in_RDX;
}

// GetStorageType @ 14a419ca0

/* WARNING: Enum "Type": Some values do not have unique names */

FPreAnimatedStorageID __thiscall
UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigTraits>::
GetStorageType(TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigTraits> *this)

{
  uint *in_RDX;
  
  *in_RDX = (this->StorageID).TypeID;
  return (FPreAnimatedStorageID)(uint)in_RDX;
}

// Initialize @ 14a41f730

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigParameterTraits>::
Initialize(TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigParameterTraits> *this,
          FPreAnimatedStorageID param_1,FPreAnimatedStateExtension *param_2)

{
  this->ParentExtension = param_2;
  (this->StorageID).TypeID = param_1.TypeID;
  FBoundObjectPreAnimatedStateTraits::Initialize
            ((FBoundObjectPreAnimatedStateTraits *)&this->Traits,param_1,param_2);
  return;
}

// Initialize @ 14a41f750

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigTraits>::Initialize
          (TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigTraits> *this,
          FPreAnimatedStorageID param_1,FPreAnimatedStateExtension *param_2)

{
  this->ParentExtension = param_2;
  (this->StorageID).TypeID = param_1.TypeID;
  FBoundObjectPreAnimatedStateTraits::Initialize
            ((FBoundObjectPreAnimatedStateTraits *)&this->Traits,param_1,param_2);
  return;
}

// OnObjectReplaced @ 14a430c30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigParameterTraits>::
OnObjectReplaced(TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigParameterTraits>
                 *this,FPreAnimatedStorageIndex param_1,FObjectKey *param_2,FObjectKey *param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  TPairInitializer<TTuple<FObjectKey,FName>_const_&,UE::MovieScene::FPreAnimatedStorageIndex_const_&>
  local_res8;
  FObjectKey local_48;
  undefined8 uStack_40;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  FObjectKey *local_28;
  FPreAnimatedStorageIndex **local_20;
  TTuple<FObjectKey,FName> local_18;
  
  if ((param_1.Value == -1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                         ,0x45,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uStack_40 = *(undefined8 *)
               ((longlong)param_1.Value * 0x38 + *(longlong *)&this->PreAnimatedStorage + 8);
  local_48 = *param_3;
  local_res8.Value._0_4_ = param_1.Value;
  if ((param_1.Value == -1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                         ,0x45,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  puVar1 = (undefined8 *)
           ((longlong)local_res8.Value._0_4_ * 0x38 + *(longlong *)&this->PreAnimatedStorage);
  local_18._0_8_ = *puVar1;
  local_18._8_8_ = puVar1[1];
  local_38 = local_48.ObjectIndex;
  iStack_34 = local_48.ObjectSerialNumber;
  iStack_30 = (int)uStack_40;
  iStack_2c = uStack_40._4_4_;
  if ((local_res8.Value._0_4_ == -1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                         ,0x45,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  piVar2 = (int *)((longlong)local_res8.Value._0_4_ * 0x38 + *(longlong *)&this->PreAnimatedStorage)
  ;
  *piVar2 = local_38;
  piVar2[1] = iStack_34;
  piVar2[2] = iStack_30;
  piVar2[3] = iStack_2c;
  TMapBase<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>_>
  ::Remove((TMapBase<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>_>
            *)&this->KeyToStorageIndex,&local_18);
  local_28 = &local_48;
  local_20 = &local_res8.Value;
  TSet<TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<TTuple<FObjectKey,FName>_const_&,UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
            ((TSet<TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
              *)&this->KeyToStorageIndex,&local_res8,(bool *)&local_28);
  return;
}

// OnObjectReplaced @ 14a430d70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigTraits>::
OnObjectReplaced(TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigTraits> *this,
                FPreAnimatedStorageIndex param_1,FObjectKey *param_2,FObjectKey *param_3)

{
  FObjectKey FVar1;
  code *pcVar2;
  FObjectKey FVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  TPairInitializer<FObjectKey_const_&,UE::MovieScene::FPreAnimatedStorageIndex_const_&> local_res8;
  FObjectKey local_res20;
  FObjectKey local_38;
  FObjectKey *local_30;
  FPreAnimatedStorageIndex **local_28;
  
  if (param_1.Value == -1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                       ,0x45,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_38 = *param_3;
  local_res8.Value._0_4_ = param_1.Value;
  if (param_1.Value == -1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                       ,0x45,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar3 = local_38;
  FVar1 = *(FObjectKey *)
           (*(longlong *)&this->PreAnimatedStorage + (longlong)local_res8.Value._0_4_ * 0x28);
  local_res20 = FVar1;
  if (local_res8.Value._0_4_ == -1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                       ,0x45,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(FObjectKey *)(*(longlong *)&this->PreAnimatedStorage + (longlong)local_res8.Value._0_4_ * 0x28)
       = FVar3;
  if (*(int *)&(this->KeyToStorageIndex).field_0x8 != *(int *)&(this->KeyToStorageIndex).field_0x34)
  {
    uVar6 = FVar1.ObjectIndex - local_res20.ObjectSerialNumber ^
            (uint)local_res20.ObjectSerialNumber >> 0xd;
    uVar7 = (-0x61c88647 - uVar6) - local_res20.ObjectSerialNumber ^ uVar6 << 8;
    uVar5 = (local_res20.ObjectSerialNumber - uVar7) - uVar6 ^ uVar7 >> 0xd;
    uVar6 = (uVar6 - uVar5) - uVar7 ^ uVar5 >> 0xc;
    uVar7 = (uVar7 - uVar5) - uVar6 ^ uVar6 << 0x10;
    uVar5 = (uVar5 - uVar7) - uVar6 ^ uVar7 >> 5;
    uVar6 = (uVar6 - uVar5) - uVar7 ^ uVar5 >> 3;
    uVar7 = (uVar7 - uVar6) - uVar5 ^ uVar6 << 10;
    TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
    ::RemoveImpl<FObjectKey>
              ((TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                *)&this->KeyToStorageIndex,(uVar5 - uVar7) - uVar6 ^ uVar7 >> 0xf,&local_res20);
  }
  local_30 = &local_38;
  local_28 = &local_res8.Value;
  TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FObjectKey_const_&,UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
            ((TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
              *)&this->KeyToStorageIndex,&local_res8,(bool *)&local_30);
  return;
}

// RestorePreAnimatedStateStorage @ 14a451ca0

/* WARNING: Enum "Type": Some values do not have unique names */

EPreAnimatedStorageRequirement __thiscall
UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigParameterTraits>::
RestorePreAnimatedStateStorage
          (TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigParameterTraits> *this,
          FPreAnimatedStorageIndex param_1,EPreAnimatedStorageRequirement param_2,
          EPreAnimatedStorageRequirement param_3,FRestoreStateParams *param_4)

{
  IRestoreMask *pIVar1;
  code *pcVar2;
  bool bVar3;
  EPreAnimatedStorageRequirement EVar4;
  char cVar5;
  FPreAnimatedParameterKey *pFVar6;
  TTuple<FObjectKey,FName> *pTVar7;
  TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigParameterTraits>::FCachedData,FDefaultSparseArrayAllocator>
  *this_00;
  undefined8 *puVar8;
  FPreAnimatedStorageIndex local_res10 [2];
  TTuple<FObjectKey,FName> local_98;
  FPreAnimatedParameterKey local_88;
  byte local_68;
  TTuple<FObjectKey,FName> local_60;
  FPreAnimatedParameterKey local_50;
  byte local_30;
  
  pIVar1 = this->RestoreMask;
  local_res10[0].Value = param_1.Value;
  if (pIVar1 != (IRestoreMask *)0x0) {
    pcVar2 = *(code **)((longlong)*pIVar1 + 8);
    if ((param_1.Value == -1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
    cVar5 = (*pcVar2)(pIVar1);
    if (cVar5 == '\0') {
      return NoChange;
    }
  }
  this_00 = &this->PreAnimatedStorage;
  if (param_2 != Persistent) {
    if ((param_2 != Transient) &&
       (bVar3 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3111672766223352050>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                           ,0xf2,"SourceRequirement == EPreAnimatedStorageRequirement::Transient"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
    pFVar6 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedParameterKey,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
             ::Find(&this->TransientPreAnimatedStorage,local_res10);
    if (pFVar6 != (FPreAnimatedParameterKey *)0x0) {
      if ((param_1.Value == -1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                             ,0x45,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar4 = (*pcVar2)();
        return EVar4;
      }
      FPreAnimatedControlRigParameterTraits::RestorePreAnimatedValue
                (&this->Traits,
                 (TTuple<FObjectKey,FName> *)((longlong)param_1.Value * 0x38 + *(longlong *)this_00)
                 ,pFVar6,param_4);
      TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedParameterKey,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
      ::Remove(&this->TransientPreAnimatedStorage,local_res10);
      return Persistent;
    }
    if (param_3 == None) {
      if ((param_1.Value == -1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                             ,0x45,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar4 = (*pcVar2)();
        return EVar4;
      }
      pTVar7 = (TTuple<FObjectKey,FName> *)((longlong)param_1.Value * 0x38 + *(longlong *)this_00);
      if ((*(byte *)(pTVar7 + 3) & 2) == 0) {
        if ((param_1.Value == -1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Value != INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                               ,0x45,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          EVar4 = (*pcVar2)();
          return EVar4;
        }
        puVar8 = (undefined8 *)
                 ((longlong)param_1.Value * 0x38 + *(longlong *)&this->PreAnimatedStorage);
        local_50.Buffer.Object = (FPreAnimatedBufferPairs *)puVar8[2];
        local_60._0_8_ = *puVar8;
        local_60._8_8_ = puVar8[1];
        local_50.Buffer.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)puVar8[3];
        puVar8[3] = 0;
        puVar8[2] = 0;
        local_50.ParameterName = *(FName *)(puVar8 + 4);
        local_50.bPersistent = *(bool *)(puVar8 + 5);
        local_30 = *(byte *)(puVar8 + 6) & 3 | local_30 & 0xfc;
        TMapBase<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>_>
        ::Remove((TMapBase<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>_>
                  *)&this->KeyToStorageIndex,&local_60);
        if ((param_1.Value == -1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Value != INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                               ,0x45,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          EVar4 = (*pcVar2)();
          return EVar4;
        }
        TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigParameterTraits>::FCachedData,FDefaultSparseArrayAllocator>
        ::RemoveAt(this_00,param_1.Value,1);
        TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedParameterKey,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
        ::Remove(&this->TransientPreAnimatedStorage,local_res10);
        if ((local_30 & 1) != 0) {
          FPreAnimatedControlRigParameterTraits::RestorePreAnimatedValue
                    (&this->Traits,&local_60,&local_50,param_4);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_50.Buffer.SharedReferenceCount.ReferenceController);
        return None;
      }
      if ((*(byte *)(pTVar7 + 3) & 1) == 0) {
        return Persistent;
      }
    }
    else {
      if (param_3 != Persistent) {
        return Persistent;
      }
      if ((param_1.Value == -1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                             ,0x45,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar4 = (*pcVar2)();
        return EVar4;
      }
      pTVar7 = (TTuple<FObjectKey,FName> *)((longlong)param_1.Value * 0x38 + *(longlong *)this_00);
      if ((*(byte *)(pTVar7 + 3) & 1) == 0) {
        return Persistent;
      }
      *(byte *)(pTVar7 + 3) = *(byte *)(pTVar7 + 3) | 2;
    }
    FPreAnimatedControlRigParameterTraits::RestorePreAnimatedValue
              (&this->Traits,pTVar7,(FPreAnimatedParameterKey *)(pTVar7 + 1),param_4);
    return Persistent;
  }
  if (param_3 == None) {
    if ((param_1.Value == -1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
    puVar8 = (undefined8 *)((longlong)param_1.Value * 0x38 + *(longlong *)this_00);
    local_88.Buffer.Object = (FPreAnimatedBufferPairs *)puVar8[2];
    local_98._0_8_ = *puVar8;
    local_98._8_8_ = puVar8[1];
    local_88.Buffer.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)puVar8[3];
    puVar8[3] = 0;
    puVar8[2] = 0;
    local_88.ParameterName = *(FName *)(puVar8 + 4);
    local_88.bPersistent = *(bool *)(puVar8 + 5);
    local_68 = *(byte *)(puVar8 + 6) & 3 | local_68 & 0xfc;
    TMapBase<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>_>
    ::Remove((TMapBase<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>_>
              *)&this->KeyToStorageIndex,&local_98);
    if ((param_1.Value == -1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
    TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigParameterTraits>::FCachedData,FDefaultSparseArrayAllocator>
    ::RemoveAt(this_00,param_1.Value,1);
    TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedParameterKey,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
    ::Remove(&this->TransientPreAnimatedStorage,local_res10);
    if ((local_68 & 1) != 0) {
      FPreAnimatedControlRigParameterTraits::RestorePreAnimatedValue
                (&this->Traits,&local_98,&local_88,param_4);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.Buffer.SharedReferenceCount.ReferenceController);
    return None;
  }
  if ((param_3 != NoChange) &&
     (bVar3 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3111672766223352038>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                         ,0xe6,"TargetRequirement == EPreAnimatedStorageRequirement::NoChange"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    EVar4 = (*pcVar2)();
    return EVar4;
  }
  if ((param_1.Value == -1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                         ,0x45,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    EVar4 = (*pcVar2)();
    return EVar4;
  }
  pTVar7 = (TTuple<FObjectKey,FName> *)((longlong)param_1.Value * 0x38 + *(longlong *)this_00);
  if ((*(byte *)(pTVar7 + 3) & 1) != 0) {
    FPreAnimatedControlRigParameterTraits::RestorePreAnimatedValue
              (&this->Traits,pTVar7,(FPreAnimatedParameterKey *)(pTVar7 + 1),param_4);
  }
  return NoChange;
}

// RestorePreAnimatedStateStorage @ 14a452180

/* WARNING: Enum "Type": Some values do not have unique names */

EPreAnimatedStorageRequirement __thiscall
UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigTraits>::
RestorePreAnimatedStateStorage
          (TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigTraits> *this,
          FPreAnimatedStorageIndex param_1,EPreAnimatedStorageRequirement param_2,
          EPreAnimatedStorageRequirement param_3,FRestoreStateParams *param_4)

{
  longlong lVar1;
  byte bVar2;
  IRestoreMask *pIVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  EPreAnimatedStorageRequirement EVar7;
  char cVar8;
  longlong lVar9;
  FPreAnimatedControlRigState *pFVar10;
  FObjectKey *pFVar11;
  TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigTraits>::FCachedData,FDefaultSparseArrayAllocator>
  *this_00;
  ForAnyElementType FVar12;
  FPreAnimatedStorageIndex local_res10 [2];
  FObjectKey local_78;
  FPreAnimatedControlRigState local_70;
  byte local_58;
  FObjectKey local_50;
  FPreAnimatedControlRigState local_48;
  byte local_30;
  
  pIVar3 = this->RestoreMask;
  local_res10[0].Value = param_1.Value;
  if (pIVar3 != (IRestoreMask *)0x0) {
    pcVar4 = *(code **)((longlong)*pIVar3 + 8);
    if ((param_1.Value == -1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      EVar7 = (*pcVar4)();
      return EVar7;
    }
    cVar8 = (*pcVar4)(pIVar3);
    if (cVar8 == '\0') {
      return NoChange;
    }
  }
  this_00 = &this->PreAnimatedStorage;
  if (param_2 == Persistent) {
    if (param_3 != None) {
      if ((param_3 != NoChange) &&
         (bVar6 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<3111672766223352038>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                             ,0xe6,"TargetRequirement == EPreAnimatedStorageRequirement::NoChange"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      if ((param_1.Value == -1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                             ,0x45,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      pFVar11 = (FObjectKey *)(*(longlong *)this_00 + (longlong)param_1.Value * 0x28);
      if ((*(byte *)(*(longlong *)this_00 + 0x20 + (longlong)param_1.Value * 0x28) & 1) != 0) {
        FPreAnimatedControlRigTraits::RestorePreAnimatedValue
                  (pFVar11,(FPreAnimatedControlRigState *)(pFVar11 + 1),param_4);
      }
      return NoChange;
    }
    if ((param_1.Value == -1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      EVar7 = (*pcVar4)();
      return EVar7;
    }
    lVar9 = (longlong)param_1.Value;
    lVar5 = *(longlong *)this_00;
    FVar12.Data = *(FScriptContainerElement **)(lVar5 + 8 + lVar9 * 0x28);
    lVar1 = lVar5 + lVar9 * 0x28;
    local_78 = *(FObjectKey *)(lVar5 + lVar9 * 0x28);
    *(undefined8 *)(lVar1 + 8) = 0;
    local_70.SkeletalMeshRestoreState.SkeletalMeshCompEditorParams.ArrayNum = *(int *)(lVar1 + 0x10)
    ;
    local_70.SkeletalMeshRestoreState.SkeletalMeshCompEditorParams.ArrayMax = *(int *)(lVar1 + 0x14)
    ;
    *(undefined8 *)(lVar1 + 0x10) = 0;
    bVar2 = *(byte *)(lVar1 + 0x20);
    local_70.AnimationMode = *(Type *)(lVar1 + 0x18);
    local_58 = bVar2 & 3 | local_58 & 0xfc;
    local_70.SkeletalMeshRestoreState.SkeletalMeshCompEditorParams.AllocatorInstance.Data =
         FVar12.Data;
    TMapBase<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>_>
    ::Remove((TMapBase<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>_>
              *)&this->KeyToStorageIndex,&local_78);
    if ((param_1.Value == -1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      EVar7 = (*pcVar4)();
      return EVar7;
    }
    TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigTraits>::FCachedData,FDefaultSparseArrayAllocator>
    ::RemoveAt(this_00,param_1.Value,1);
    TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
    ::Remove(&this->TransientPreAnimatedStorage,local_res10);
    if ((bVar2 & 1) != 0) {
      FPreAnimatedControlRigTraits::RestorePreAnimatedValue(&local_78,&local_70,param_4);
      FVar12.Data = local_70.SkeletalMeshRestoreState.SkeletalMeshCompEditorParams.AllocatorInstance
                    .Data;
    }
LAB_14a4525d3:
    if (FVar12.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar12.Data);
    }
    return None;
  }
  if ((param_2 != Transient) &&
     (bVar6 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3111672766223352050>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                         ,0xf2,"SourceRequirement == EPreAnimatedStorageRequirement::Transient"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    EVar7 = (*pcVar4)();
    return EVar7;
  }
  pFVar10 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
            ::Find(&this->TransientPreAnimatedStorage,local_res10);
  if (pFVar10 != (FPreAnimatedControlRigState *)0x0) {
    if ((param_1.Value == -1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      EVar7 = (*pcVar4)();
      return EVar7;
    }
    FPreAnimatedControlRigTraits::RestorePreAnimatedValue
              ((FObjectKey *)(*(longlong *)this_00 + (longlong)param_1.Value * 0x28),pFVar10,param_4
              );
    TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
    ::Remove(&this->TransientPreAnimatedStorage,local_res10);
    return Persistent;
  }
  if (param_3 == None) {
    if ((param_1.Value == -1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      EVar7 = (*pcVar4)();
      return EVar7;
    }
    pFVar11 = (FObjectKey *)(*(longlong *)this_00 + (longlong)param_1.Value * 0x28);
    if ((pFVar11[4].ObjectIndex & 2) == 0) {
      if ((param_1.Value == -1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                             ,0x45,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      lVar9 = (longlong)param_1.Value;
      lVar5 = *(longlong *)&this->PreAnimatedStorage;
      FVar12.Data = *(FScriptContainerElement **)(lVar5 + 8 + lVar9 * 0x28);
      lVar1 = lVar5 + lVar9 * 0x28;
      local_50 = *(FObjectKey *)(lVar5 + lVar9 * 0x28);
      *(undefined8 *)(lVar1 + 8) = 0;
      local_48.SkeletalMeshRestoreState.SkeletalMeshCompEditorParams.ArrayNum =
           *(int *)(lVar1 + 0x10);
      local_48.SkeletalMeshRestoreState.SkeletalMeshCompEditorParams.ArrayMax =
           *(int *)(lVar1 + 0x14);
      *(undefined8 *)(lVar1 + 0x10) = 0;
      bVar2 = *(byte *)(lVar1 + 0x20);
      local_48.AnimationMode = *(Type *)(lVar1 + 0x18);
      local_30 = bVar2 & 3 | local_30 & 0xfc;
      local_48.SkeletalMeshRestoreState.SkeletalMeshCompEditorParams.AllocatorInstance.Data =
           FVar12.Data;
      TMapBase<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>_>
      ::Remove((TMapBase<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>_>
                *)&this->KeyToStorageIndex,&local_50);
      if ((param_1.Value == -1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                             ,0x45,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
      TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigTraits>::FCachedData,FDefaultSparseArrayAllocator>
      ::RemoveAt(this_00,param_1.Value,1);
      TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
      ::Remove(&this->TransientPreAnimatedStorage,local_res10);
      if ((bVar2 & 1) != 0) {
        FPreAnimatedControlRigTraits::RestorePreAnimatedValue(&local_50,&local_48,param_4);
        FVar12.Data = local_48.SkeletalMeshRestoreState.SkeletalMeshCompEditorParams.
                      AllocatorInstance.Data;
      }
      goto LAB_14a4525d3;
    }
    if ((pFVar11[4].ObjectIndex & 1) == 0) {
      return Persistent;
    }
  }
  else {
    if (param_3 != Persistent) {
      return Persistent;
    }
    if ((param_1.Value == -1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      EVar7 = (*pcVar4)();
      return EVar7;
    }
    pFVar11 = (FObjectKey *)(*(longlong *)this_00 + (longlong)param_1.Value * 0x28);
    bVar2 = (byte)pFVar11[4].ObjectIndex;
    if ((bVar2 & 1) == 0) {
      return Persistent;
    }
    *(byte *)&pFVar11[4].ObjectIndex = bVar2 | 2;
  }
  FPreAnimatedControlRigTraits::RestorePreAnimatedValue
            (pFVar11,(FPreAnimatedControlRigState *)(pFVar11 + 1),param_4);
  return Persistent;
}

// operator() @ 15054ee10

bool __thiscall
`UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigTraits>::
TrackCaptureSource'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3111672766223352684>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3111672766223352684>,
                       &`public:___cdecl_`protected:_void___cdecl_UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigTraits>::TrackCaptureSource(UE::MovieScene::FPreAnimatedStateEntry_const&___ptr64,UE::MovieScene::EPreAnimatedCaptureSourceTracking)___ptr64'::`5'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15054f0c0

bool __thiscall
`UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigTraits>::
ShouldTrackCaptureSource<UControlRig_*_&>'::__l11::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3111672766223352646>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3111672766223352646>,
                       &`public:___cdecl_`protected:_bool___cdecl_UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigTraits>::ShouldTrackCaptureSource<UControlRig*___ptr64&___ptr64>(UE::MovieScene::EPreAnimatedCaptureSourceTracking,UControlRig*___ptr64&___ptr64)___ptr64'::`11'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15054f100

bool __thiscall
`UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigTraits>::
ShouldTrackCaptureSource<UControlRig_*_&>'::__l4::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3111672766223352660>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3111672766223352660>,
                       &`public:___cdecl_`protected:_bool___cdecl_UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedControlRigTraits>::ShouldTrackCaptureSource<UControlRig*___ptr64&___ptr64>(UE::MovieScene::EPreAnimatedCaptureSourceTracking,UControlRig*___ptr64&___ptr64)___ptr64'::`4'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

