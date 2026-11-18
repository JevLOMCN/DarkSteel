// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 3

// FindEntry @ 14682dd30

FPreAnimatedStateEntry * __thiscall
UE::MovieScene::FPreAnimatedDataLayerStorage::FindEntry
          (FPreAnimatedDataLayerStorage *this,FPreAnimatedStateEntry *__return_storage_ptr__,
          UDataLayerInstance *param_1)

{
  TAutoRegisterPreAnimatedStorageID<UE::MovieScene::FPreAnimatedDataLayerStorage> TVar1;
  int iVar2;
  TTuple<TObjectKey<UDataLayerInstance>,UE::MovieScene::FPreAnimatedStorageIndex> *pTVar3;
  FWeakObjectPtr local_res8;
  UDataLayerInstance *local_res10;
  
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  if (param_1 != (UDataLayerInstance *)0x0) {
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
  pTVar3 = TSet<TTuple<TObjectKey<UDataLayerInstance>,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<TObjectKey<UDataLayerInstance>,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TObjectKey<UDataLayerInstance>,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<TObjectKey<UDataLayerInstance>,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                   *)&this->field_0x18,(TObjectKey<UDataLayerInstance> *)&local_res8);
  if (pTVar3 == (TTuple<TObjectKey<UDataLayerInstance>,UE::MovieScene::FPreAnimatedStorageIndex> *)
                0x0) {
    iVar2 = -1;
  }
  else {
    iVar2 = *(int *)&pTVar3->field_0x8;
  }
  (__return_storage_ptr__->GroupHandle).Value = -1;
  TVar1 = StorageID;
  (__return_storage_ptr__->ValueHandle).StorageIndex.Value = iVar2;
  (__return_storage_ptr__->ValueHandle).TypeID.TypeID = (uint)TVar1;
  return __return_storage_ptr__;
}

// MakeEntry @ 146840610

FPreAnimatedStateEntry * __thiscall
UE::MovieScene::FPreAnimatedDataLayerStorage::MakeEntry
          (FPreAnimatedDataLayerStorage *this,FPreAnimatedStateEntry *__return_storage_ptr__,
          UDataLayerInstance *param_1)

{
  int iVar1;
  int iVar2;
  TAutoRegisterPreAnimatedStorageID<UE::MovieScene::FPreAnimatedDataLayerStorage> TVar3;
  FPreAnimatedStorageIndex *pFVar4;
  int iVar5;
  TTuple<TObjectKey<UDataLayerInstance>,UE::MovieScene::FPreAnimatedStorageIndex> *pTVar6;
  int local_res8 [2];
  TPairInitializer<TObjectKey<UDataLayerInstance>_const_&,UE::MovieScene::FPreAnimatedStorageIndex_const_&>
  local_res10;
  UDataLayerInstance *local_res20;
  uint local_40;
  FPreAnimatedStorageIndex **local_38;
  int *local_30;
  
  local_res10.Value = (FPreAnimatedStorageIndex *)0x0;
  if (param_1 != (UDataLayerInstance *)0x0) {
    if (GC::GIsIncrementalReachabilityPending) {
      GC::MarkAsReachable((UObject *)param_1);
    }
    local_res10.Key = (TObjectKey<UDataLayerInstance> *)0x0;
    local_res20 = param_1;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res10,(FObjectPtr)&local_res20);
    local_res10.Value = (FPreAnimatedStorageIndex *)local_res10.Key;
  }
  pFVar4 = local_res10.Value;
  pTVar6 = TSet<TTuple<TObjectKey<UDataLayerInstance>,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<TObjectKey<UDataLayerInstance>,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TObjectKey<UDataLayerInstance>,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<TObjectKey<UDataLayerInstance>,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                   *)&this->field_0x18,(TObjectKey<UDataLayerInstance> *)&local_res10.Value);
  if ((pTVar6 == (TTuple<TObjectKey<UDataLayerInstance>,UE::MovieScene::FPreAnimatedStorageIndex> *)
                 0x0) || (local_res8[0] = *(int *)&pTVar6->field_0x8, local_res8[0] == -1)) {
    local_40 = local_40 & 0xfffffcff;
    if (*(int *)&this->field_0x9c == 0) {
      iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xc,4,1,(ForAnyElementType *)&this->field_0x68,(int *)&this->field_0x70,
                         (int *)&this->field_0x74);
      TBitArray<FDefaultBitArrayAllocator>::Add
                ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x78,false);
    }
    else {
      iVar5 = *(int *)&this->field_0x98;
      iVar1 = *(int *)&this->field_0x9c + -1;
      iVar2 = *(int *)(*(longlong *)&this->field_0x68 + 4 + (longlong)iVar5 * 0xc);
      *(int *)&this->field_0x98 = iVar2;
      *(int *)&this->field_0x9c = iVar1;
      if (iVar1 != 0) {
        *(undefined4 *)(*(longlong *)&this->field_0x68 + (longlong)iVar2 * 0xc) = 0xffffffff;
      }
    }
    TSparseArrayBase<12,4,FDefaultSparseArrayAllocator>::AllocateIndex
              ((TSparseArrayBase<12,4,FDefaultSparseArrayAllocator> *)&this->field_0x68,
               (FSparseArrayAllocationInfo *)&local_38,iVar5);
    if (local_30 != (int *)0x0) {
      *(FPreAnimatedStorageIndex **)local_30 = pFVar4;
      *(uint *)((longlong)local_30 + 8) = local_40;
    }
    local_res8[0] = (int)local_38;
    local_38 = &local_res10.Value;
    local_30 = local_res8;
    TSet<TTuple<TObjectKey<UDataLayerInstance>,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<TObjectKey<UDataLayerInstance>,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<TObjectKey<UDataLayerInstance>_const_&,UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
              ((TSet<TTuple<TObjectKey<UDataLayerInstance>,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<TObjectKey<UDataLayerInstance>,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                *)&this->field_0x18,&local_res10,(bool *)&local_38);
  }
  (__return_storage_ptr__->GroupHandle).Value = -1;
  TVar3 = StorageID;
  (__return_storage_ptr__->ValueHandle).StorageIndex.Value = local_res8[0];
  (__return_storage_ptr__->ValueHandle).TypeID.TypeID = (uint)TVar3;
  return __return_storage_ptr__;
}

// SavePreAnimatedState @ 146868ec0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FPreAnimatedDataLayerStorage::SavePreAnimatedState
          (FPreAnimatedDataLayerStorage *this,UDataLayerInstance *param_1)

{
  longlong lVar1;
  FPreAnimatedStateExtension *this_00;
  code *pcVar2;
  FPreAnimatedStorageIndex FVar3;
  bool bVar4;
  EPreAnimatedStorageRequirement EVar5;
  EDataLayerRuntimeState EVar6;
  TTuple<TObjectKey<UDataLayerInstance>,UE::MovieScene::FPreAnimatedStorageIndex> *pTVar7;
  EDataLayerRuntimeState *pEVar8;
  TTuple<UE::MovieScene::FPreAnimatedStorageIndex,EDataLayerRuntimeState> *pTVar9;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FPreAnimatedStorageIndex local_70 [2];
  FPreAnimatedStorageIndex local_68 [2];
  FWeakObjectPtr local_60;
  FWeakObjectPtr local_58;
  UDataLayerInstance *local_50;
  FPreAnimatedStateEntry local_48;
  FPreAnimatedStateEntry local_38;
  
  if (**(int **)&this->field_0xb0 == 0) {
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    if (param_1 != (UDataLayerInstance *)0x0) {
      if (GC::GIsIncrementalReachabilityPending) {
        GC::MarkAsReachable((UObject *)param_1);
      }
      local_60.ObjectIndex = 0;
      local_60.ObjectSerialNumber = 0;
      local_50 = param_1;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_60,(FObjectPtr)&local_50);
      local_58 = local_60;
    }
    pTVar7 = TSet<TTuple<TObjectKey<UDataLayerInstance>,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<TObjectKey<UDataLayerInstance>,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<TObjectKey<UDataLayerInstance>,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<TObjectKey<UDataLayerInstance>,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                     *)&this->field_0x18,(TObjectKey<UDataLayerInstance> *)&local_58);
    if (pTVar7 == (TTuple<TObjectKey<UDataLayerInstance>,UE::MovieScene::FPreAnimatedStorageIndex> *
                  )0x0) {
      return;
    }
    local_48.ValueHandle.StorageIndex.Value = *(int *)&pTVar7->field_0x8;
    local_48.ValueHandle.TypeID.TypeID = *(uint *)&this->field_0xc0;
    local_48.GroupHandle.Value = -1;
    if (local_48.ValueHandle.StorageIndex.Value == -1) {
      return;
    }
    bVar4 = FPreAnimatedStateExtension::MetaDataExists
                      (*(FPreAnimatedStateExtension **)&this->field_0xb0,&local_48);
    if (!bVar4) {
      local_res18[0] = 0;
      bVar4 = `UE::MovieScene::
              TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedDataLayerStorageTraits>::
              ShouldTrackCaptureSource<UDataLayerInstance_const_*_&>'::__l11::<lambda_1>::operator()
                        (local_res18);
      if (!bVar4) {
        return;
      }
    }
  }
  MakeEntry(this,&local_38,param_1);
  this_00 = *(FPreAnimatedStateExtension **)&this->field_0xb0;
  if (this_00->NumRequestsForGlobalState == 0) {
    if ((local_38.ValueHandle.StorageIndex.Value == -1) ||
       (bVar4 = FPreAnimatedStateExtension::MetaDataExists(this_00,&local_38), !bVar4)) {
      local_res20[0] = 0;
      `UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedDataLayerStorageTraits>
      ::TrackCaptureSource'::__l5::<lambda_1>::operator()(local_res20);
    }
  }
  else {
    FPreAnimatedStateExtension::EnsureMetaData(this_00,&local_38);
  }
  EVar5 = FPreAnimatedStateExtension::GetStorageRequirement
                    (*(FPreAnimatedStateExtension **)&this->field_0xb0,&local_38);
  FVar3.Value = local_38.ValueHandle.StorageIndex.Value;
  local_68[0].Value = local_38.ValueHandle.StorageIndex.Value;
  if ((local_38.ValueHandle.StorageIndex.Value == -1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StorageIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                         ,0x1b6,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar1 = *(longlong *)&this->field_0x68 + (longlong)FVar3.Value * 0xc;
  if (EVar5 == Persistent) {
    if ((*(byte *)(lVar1 + 9) & 1) != 0) {
      return;
    }
  }
  else {
    if (EVar5 != Transient) {
      return;
    }
    if ((*(byte *)(lVar1 + 9) & 3) == 1) {
      return;
    }
    pEVar8 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,enum_EDataLayerRuntimeState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
             ::Find(&this->field_0xa0,local_68);
    if (pEVar8 != (EDataLayerRuntimeState *)0x0) {
      return;
    }
  }
  EVar6 = UDataLayerInstance::GetRuntimeState(param_1);
  local_70[0].Value = local_38.ValueHandle.StorageIndex.Value;
  if ((local_38.ValueHandle.StorageIndex.Value == -1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StorageIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                         ,0x195,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar1 = *(longlong *)&this->field_0x68 + (longlong)local_70[0].Value * 0xc;
  if (EVar5 == Persistent) {
    if (((*(byte *)(lVar1 + 9) & 1) != 0) &&
       (bVar4 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3111672766223352219>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                           ,0x19b,"!CachedData.bInitialized"), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(byte *)(lVar1 + 9) = *(byte *)(lVar1 + 9) | 3;
    *(EDataLayerRuntimeState *)(lVar1 + 8) = EVar6;
  }
  else if (EVar5 == Transient) {
    if ((((*(byte *)(lVar1 + 9) & 1) != 0) &&
        (pEVar8 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,enum_EDataLayerRuntimeState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                  ::Find(&this->field_0xa0,local_70), pEVar8 != (EDataLayerRuntimeState *)0x0)) &&
       (bVar4 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3111672766223352226>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                           ,0x1a2,
                           "!CachedData.bInitialized || !TransientPreAnimatedStorage.Contains(StorageIndex)"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((*(byte *)(lVar1 + 9) & 1) == 0) {
      *(EDataLayerRuntimeState *)(lVar1 + 8) = EVar6;
      *(byte *)(lVar1 + 9) = *(byte *)(lVar1 + 9) | 1;
    }
    else {
      pTVar9 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,enum_EDataLayerRuntimeState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
               ::AllocateMemoryForEmplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&>
                         (&this->field_0xa0,local_70);
      *(int *)pTVar9 = local_70[0].Value;
      pTVar9->field_0x4 = EVar6;
    }
  }
  return;
}

