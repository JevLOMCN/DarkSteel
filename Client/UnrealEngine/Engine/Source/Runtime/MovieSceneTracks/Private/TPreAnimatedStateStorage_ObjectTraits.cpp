// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 52

// AsObjectStorage @ 14677ccd0

IPreAnimatedObjectEntityStorage * __thiscall
UE::MovieScene::
TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedAudioStateTraits<UE::MovieScene::FBoundObjectPreAnimatedStateTraits>_>
::AsObjectStorage(TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedAudioStateTraits<UE::MovieScene::FBoundObjectPreAnimatedStateTraits>_>
                  *this)

{
  IPreAnimatedObjectEntityStorage *pIVar1;
  
  pIVar1 = (IPreAnimatedObjectEntityStorage *)&this->field_0xd8;
  if (this == (TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedAudioStateTraits<UE::MovieScene::FBoundObjectPreAnimatedStateTraits>_>
               *)0x0) {
    pIVar1 = (IPreAnimatedObjectEntityStorage *)0x0;
  }
  return pIVar1;
}

// AsObjectStorage @ 14677ccf0

IPreAnimatedObjectEntityStorage * __thiscall
UE::MovieScene::
TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FComponentAttachmentPreAnimatedTraits>::
AsObjectStorage(TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FComponentAttachmentPreAnimatedTraits>
                *this)

{
  IPreAnimatedObjectEntityStorage *pIVar1;
  
  pIVar1 = (IPreAnimatedObjectEntityStorage *)&this->field_0xd8;
  if (this == (TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FComponentAttachmentPreAnimatedTraits>
               *)0x0) {
    pIVar1 = (IPreAnimatedObjectEntityStorage *)0x0;
  }
  return pIVar1;
}

// AsObjectStorage @ 14677cd10

IPreAnimatedObjectEntityStorage * __thiscall
UE::MovieScene::
TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedCameraComponentShakeTraits>::
AsObjectStorage(TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedCameraComponentShakeTraits>
                *this)

{
  IPreAnimatedObjectEntityStorage *pIVar1;
  
  pIVar1 = (IPreAnimatedObjectEntityStorage *)&this->field_0xd8;
  if (this == (TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedCameraComponentShakeTraits>
               *)0x0) {
    pIVar1 = (IPreAnimatedObjectEntityStorage *)0x0;
  }
  return pIVar1;
}

// AsObjectStorage @ 14677cd30

IPreAnimatedObjectEntityStorage * __thiscall
UE::MovieScene::TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedCameraShakeTraits>
::AsObjectStorage(TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedCameraShakeTraits>
                  *this)

{
  IPreAnimatedObjectEntityStorage *pIVar1;
  
  pIVar1 = (IPreAnimatedObjectEntityStorage *)&this->field_0xd8;
  if (this == (TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedCameraShakeTraits>
               *)0x0) {
    pIVar1 = (IPreAnimatedObjectEntityStorage *)0x0;
  }
  return pIVar1;
}

// AsObjectStorage @ 14677cd50

IPreAnimatedObjectEntityStorage * __thiscall
UE::MovieScene::
TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedCameraSourceShakeTraits>::
AsObjectStorage(TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedCameraSourceShakeTraits>
                *this)

{
  IPreAnimatedObjectEntityStorage *pIVar1;
  
  pIVar1 = (IPreAnimatedObjectEntityStorage *)&this->field_0xd8;
  if (this == (TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedCameraSourceShakeTraits>
               *)0x0) {
    pIVar1 = (IPreAnimatedObjectEntityStorage *)0x0;
  }
  return pIVar1;
}

// AsObjectStorage @ 14677cd70

IPreAnimatedObjectEntityStorage * __thiscall
UE::MovieScene::TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedMobilityTraits>::
AsObjectStorage(TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedMobilityTraits>
                *this)

{
  IPreAnimatedObjectEntityStorage *pIVar1;
  
  pIVar1 = (IPreAnimatedObjectEntityStorage *)&this->field_0xd8;
  if (this == (TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedMobilityTraits> *)
              0x0) {
    pIVar1 = (IPreAnimatedObjectEntityStorage *)0x0;
  }
  return pIVar1;
}

// BeginTrackingEntities @ 14677ced0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedAudioStateTraits<UE::MovieScene::FBoundObjectPreAnimatedStateTraits>_>
::BeginTrackingEntities
          (TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedAudioStateTraits<UE::MovieScene::FBoundObjectPreAnimatedStateTraits>_>
           *this,FPreAnimatedTrackerParams *param_1,
          TRead<UE::MovieScene::FMovieSceneEntityID> param_2,
          TRead<UE::MovieScene::FRootInstanceHandle> param_3,TRead<UObject_*> param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  UObject *pUVar4;
  FWeakObjectPtr FVar5;
  int iVar6;
  TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex> *pTVar7;
  longlong lVar8;
  byte bVar9;
  int local_res10 [2];
  FObjectKey local_b8;
  undefined1 local_b0 [8];
  FWeakObjectPtr local_a8;
  FPreAnimatedStateEntry local_a0;
  TPairInitializer<FObjectKey_const_&,UE::MovieScene::FPreAnimatedStorageIndex_const_&> local_90;
  FPreAnimatedEntityCaptureSource *local_80;
  longlong local_78;
  FWeakObjectPtr local_70;
  int iStack_68;
  uint uStack_64;
  FSparseArrayAllocationInfo local_60;
  FObjectKey *local_50;
  int *local_48;
  
  bVar2 = param_1->bWantsRestoreState;
  iVar6 = param_1->Num;
  if ((((*(FPreAnimatedStateExtension **)&this[-1].field_0xb8)->NumRequestsForGlobalState != 0) ||
      (bVar2 != false)) &&
     (local_80 = FPreAnimatedStateExtension::GetOrCreateEntityMetaData
                           (*(FPreAnimatedStateExtension **)&this[-1].field_0xb8), 0 < iVar6)) {
    lVar8 = 0;
    bVar9 = (byte)uStack_64;
    local_78 = (longlong)iVar6;
    do {
      local_b8.ObjectIndex = 0;
      local_b8.ObjectSerialNumber = 0;
      pUVar4 = *(UObject **)((longlong)param_4 + lVar8 * 8);
      if (pUVar4 != (UObject *)0x0) {
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar4);
        }
        local_a8.ObjectIndex = 0;
        local_a8.ObjectSerialNumber = 0;
        local_90.Value = (FPreAnimatedStorageIndex *)pUVar4;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar4);
        }
        FWeakObjectPtr::operator=(&local_a8,(FObjectPtr)&local_90.Value);
        local_b8.ObjectIndex = local_a8.ObjectIndex;
        local_b8.ObjectSerialNumber = local_a8.ObjectSerialNumber;
      }
      FBoundObjectPreAnimatedStateTraits::MakeGroupImpl
                ((FBoundObjectPreAnimatedStateTraits *)&this[-1].field_0xd0,(UObject *)local_b0);
      pTVar7 = TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                       *)&this[-1].field_0x20,&local_b8);
      if ((pTVar7 == (TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex> *)0x0) ||
         (local_res10[0] = *(int *)&pTVar7->field_0x8, local_res10[0] == -1)) {
        local_res10[0] = -1;
        local_70.ObjectIndex = local_b8.ObjectIndex;
        local_70.ObjectSerialNumber = local_b8.ObjectSerialNumber;
        uStack_64 = CONCAT31(uStack_64._1_3_,bVar9) & 0xfffffffc;
        if (*(int *)&this[-1].field_0xa4 == 0) {
          iVar6 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,4,1,(ForAnyElementType *)&this[-1].field_0x70,
                             (int *)&this[-1].field_0x78,(int *)&this[-1].field_0x7c);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&this[-1].field_0x80,false);
        }
        else {
          iVar6 = *(int *)&this[-1].field_0xa0;
          iVar3 = *(int *)(*(longlong *)&this[-1].field_0x70 + 4 + (longlong)iVar6 * 0x10);
          iVar1 = *(int *)&this[-1].field_0xa4 + -1;
          *(int *)&this[-1].field_0xa0 = iVar3;
          *(int *)&this[-1].field_0xa4 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)(*(longlong *)&this[-1].field_0x70 + (longlong)iVar3 * 0x10) = 0xffffffff
            ;
          }
        }
        TSparseArrayBase<16,4,FDefaultSparseArrayAllocator>::AllocateIndex
                  ((TSparseArrayBase<16,4,FDefaultSparseArrayAllocator> *)&this[-1].field_0x70,
                   &local_60,iVar6);
        if (local_60.Pointer != (FWeakObjectPtr *)0x0) {
          FVar5.ObjectSerialNumber = uStack_64;
          FVar5.ObjectIndex = iStack_68;
          *(FWeakObjectPtr *)local_60.Pointer = local_70;
          *(FWeakObjectPtr *)((longlong)local_60.Pointer + 8) = FVar5;
        }
        local_res10[0] = local_60.Index;
        local_50 = &local_b8;
        local_48 = local_res10;
        TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FObjectKey_const_&,UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                  ((TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                    *)&this[-1].field_0x20,&local_90,(bool *)&local_50);
        bVar9 = bVar9 & 0xfc;
      }
      local_a0.GroupHandle.Value = local_b0._0_4_;
      local_a0.ValueHandle.TypeID.TypeID = *(uint *)&this[-1].field_0xc8;
      local_a0.ValueHandle.StorageIndex.Value = local_res10[0];
      FPreAnimatedEntityCaptureSource::BeginTrackingEntity
                (local_80,&local_a0,(FMovieSceneEntityID)*(ushort *)param_2,
                 *(FRootInstanceHandle *)param_3,bVar2);
      lVar8 = lVar8 + 1;
      param_3 = (TRead<UE::MovieScene::FRootInstanceHandle>)((longlong)param_3 + 4);
      param_2 = (TRead<UE::MovieScene::FMovieSceneEntityID>)((longlong)param_2 + 2);
    } while (lVar8 < local_78);
  }
  return;
}

// BeginTrackingEntities @ 14677d130

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FComponentAttachmentPreAnimatedTraits>::
BeginTrackingEntities
          (TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FComponentAttachmentPreAnimatedTraits>
           *this,FPreAnimatedTrackerParams *param_1,
          TRead<UE::MovieScene::FMovieSceneEntityID> param_2,
          TRead<UE::MovieScene::FRootInstanceHandle> param_3,TRead<UObject_*> param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  UObject *pUVar4;
  FWeakObjectPtr FVar5;
  int iVar6;
  TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex> *pTVar7;
  longlong lVar8;
  int local_res10 [2];
  FObjectKey local_c8;
  undefined1 local_c0 [8];
  FWeakObjectPtr local_b8;
  FWeakObjectPtr local_b0;
  FWeakObjectPtr FStack_a8;
  FWeakObjectPtr local_a0;
  undefined2 uStack_98;
  undefined1 uStack_96;
  undefined1 uStack_95;
  uint uStack_94;
  FPreAnimatedStateEntry local_90;
  TPairInitializer<FObjectKey_const_&,UE::MovieScene::FPreAnimatedStorageIndex_const_&> local_80;
  FPreAnimatedEntityCaptureSource *local_70;
  longlong local_68;
  FSparseArrayAllocationInfo local_60;
  FObjectKey *local_50;
  int *local_48;
  
  bVar2 = param_1->bWantsRestoreState;
  iVar6 = param_1->Num;
  if ((((*(FPreAnimatedStateExtension **)&this[-1].field_0xb8)->NumRequestsForGlobalState != 0) ||
      (bVar2 != false)) &&
     (local_70 = FPreAnimatedStateExtension::GetOrCreateEntityMetaData
                           (*(FPreAnimatedStateExtension **)&this[-1].field_0xb8), 0 < iVar6)) {
    lVar8 = 0;
    local_68 = (longlong)iVar6;
    do {
      local_c8.ObjectIndex = 0;
      local_c8.ObjectSerialNumber = 0;
      pUVar4 = *(UObject **)((longlong)param_4 + lVar8 * 8);
      if (pUVar4 != (UObject *)0x0) {
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar4);
        }
        local_b8.ObjectIndex = 0;
        local_b8.ObjectSerialNumber = 0;
        local_80.Value = (FPreAnimatedStorageIndex *)pUVar4;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar4);
        }
        FWeakObjectPtr::operator=(&local_b8,(FObjectPtr)&local_80.Value);
        local_c8.ObjectIndex = local_b8.ObjectIndex;
        local_c8.ObjectSerialNumber = local_b8.ObjectSerialNumber;
      }
      FBoundObjectPreAnimatedStateTraits::MakeGroupImpl
                ((FBoundObjectPreAnimatedStateTraits *)&this[-1].field_0xd0,(UObject *)local_c0);
      pTVar7 = TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                       *)&this[-1].field_0x20,&local_c8);
      if (pTVar7 == (TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex> *)0x0) {
        local_res10[0] = -1;
LAB_14677d237:
        uStack_94 = uStack_94 & 0xfffffffc;
        local_b0.ObjectIndex = local_c8.ObjectIndex;
        local_b0.ObjectSerialNumber = local_c8.ObjectSerialNumber;
        FStack_a8.ObjectIndex = 0;
        FStack_a8.ObjectSerialNumber = 0;
        local_a0.ObjectIndex = 0;
        local_a0.ObjectSerialNumber = 0;
        uStack_98 = 0;
        uStack_96 = 0;
        if (*(int *)&this[-1].field_0xa4 == 0) {
          iVar6 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x20,4,1,(ForAnyElementType *)&this[-1].field_0x70,
                             (int *)&this[-1].field_0x78,(int *)&this[-1].field_0x7c);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&this[-1].field_0x80,false);
        }
        else {
          iVar6 = *(int *)&this[-1].field_0xa0;
          iVar3 = *(int *)((longlong)iVar6 * 0x20 + 4 + *(longlong *)&this[-1].field_0x70);
          iVar1 = *(int *)&this[-1].field_0xa4 + -1;
          *(int *)&this[-1].field_0xa0 = iVar3;
          *(int *)&this[-1].field_0xa4 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)((longlong)iVar3 * 0x20 + *(longlong *)&this[-1].field_0x70) = 0xffffffff
            ;
          }
        }
        TSparseArrayBase<32,4,FDefaultSparseArrayAllocator>::AllocateIndex
                  ((TSparseArrayBase<32,4,FDefaultSparseArrayAllocator> *)&this[-1].field_0x70,
                   &local_60,iVar6);
        if (local_60.Pointer != (FWeakObjectPtr *)0x0) {
          FVar5.ObjectIndex._2_1_ = uStack_96;
          FVar5.ObjectIndex._0_2_ = uStack_98;
          FVar5.ObjectIndex._3_1_ = uStack_95;
          FVar5.ObjectSerialNumber = uStack_94;
          *(FWeakObjectPtr *)local_60.Pointer = local_b0;
          *(FWeakObjectPtr *)((longlong)local_60.Pointer + 8) = FStack_a8;
          *(FWeakObjectPtr *)((longlong)local_60.Pointer + 0x10) = local_a0;
          *(FWeakObjectPtr *)((longlong)local_60.Pointer + 0x18) = FVar5;
        }
        local_res10[0] = local_60.Index;
        local_50 = &local_c8;
        local_48 = local_res10;
        TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FObjectKey_const_&,UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                  ((TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                    *)&this[-1].field_0x20,&local_80,(bool *)&local_50);
      }
      else {
        local_res10[0] = *(int *)&pTVar7->field_0x8;
        if (local_res10[0] == -1) goto LAB_14677d237;
      }
      local_90.GroupHandle.Value = local_c0._0_4_;
      local_90.ValueHandle.TypeID.TypeID = *(uint *)&this[-1].field_0xc8;
      local_90.ValueHandle.StorageIndex.Value = local_res10[0];
      FPreAnimatedEntityCaptureSource::BeginTrackingEntity
                (local_70,&local_90,(FMovieSceneEntityID)*(ushort *)param_2,
                 *(FRootInstanceHandle *)param_3,bVar2);
      lVar8 = lVar8 + 1;
      param_3 = (TRead<UE::MovieScene::FRootInstanceHandle>)((longlong)param_3 + 4);
      param_2 = (TRead<UE::MovieScene::FMovieSceneEntityID>)((longlong)param_2 + 2);
    } while (lVar8 < local_68);
  }
  return;
}

// BeginTrackingEntities @ 14677d3a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedCameraComponentShakeTraits>::
BeginTrackingEntities
          (TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedCameraComponentShakeTraits>
           *this,FPreAnimatedTrackerParams *param_1,
          TRead<UE::MovieScene::FMovieSceneEntityID> param_2,
          TRead<UE::MovieScene::FRootInstanceHandle> param_3,TRead<UObject_*> param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  UObject *pUVar4;
  int iVar5;
  TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex> *pTVar6;
  longlong lVar7;
  byte bVar8;
  int local_res10 [2];
  FObjectKey local_b8;
  undefined1 local_b0 [8];
  FWeakObjectPtr local_a8;
  FWeakObjectPtr local_a0;
  undefined4 local_98;
  FPreAnimatedStateEntry local_90;
  TPairInitializer<FObjectKey_const_&,UE::MovieScene::FPreAnimatedStorageIndex_const_&> local_80;
  FPreAnimatedEntityCaptureSource *local_70;
  longlong local_68;
  FSparseArrayAllocationInfo local_60;
  FObjectKey *local_50;
  int *local_48;
  
  bVar2 = param_1->bWantsRestoreState;
  iVar5 = param_1->Num;
  if ((((*(FPreAnimatedStateExtension **)&this[-1].field_0xb8)->NumRequestsForGlobalState != 0) ||
      (bVar2 != false)) &&
     (local_70 = FPreAnimatedStateExtension::GetOrCreateEntityMetaData
                           (*(FPreAnimatedStateExtension **)&this[-1].field_0xb8), 0 < iVar5)) {
    lVar7 = 0;
    bVar8 = local_98._1_1_;
    local_68 = (longlong)iVar5;
    do {
      local_b8.ObjectIndex = 0;
      local_b8.ObjectSerialNumber = 0;
      pUVar4 = *(UObject **)((longlong)param_4 + lVar7 * 8);
      if (pUVar4 != (UObject *)0x0) {
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar4);
        }
        local_a8.ObjectIndex = 0;
        local_a8.ObjectSerialNumber = 0;
        local_80.Value = (FPreAnimatedStorageIndex *)pUVar4;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar4);
        }
        FWeakObjectPtr::operator=(&local_a8,(FObjectPtr)&local_80.Value);
        local_b8.ObjectIndex = local_a8.ObjectIndex;
        local_b8.ObjectSerialNumber = local_a8.ObjectSerialNumber;
      }
      FBoundObjectPreAnimatedStateTraits::MakeGroupImpl
                ((FBoundObjectPreAnimatedStateTraits *)&this[-1].field_0xd0,(UObject *)local_b0);
      pTVar6 = TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                       *)&this[-1].field_0x20,&local_b8);
      if ((pTVar6 == (TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex> *)0x0) ||
         (local_res10[0] = *(int *)&pTVar6->field_0x8, local_res10[0] == -1)) {
        local_res10[0] = -1;
        local_a0.ObjectIndex = local_b8.ObjectIndex;
        local_a0.ObjectSerialNumber = local_b8.ObjectSerialNumber;
        local_98 = CONCAT22(local_98._2_2_,CONCAT11(bVar8,(undefined1)local_98)) & 0xfffffcff;
        if (*(int *)&this[-1].field_0xa4 == 0) {
          iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0xc,4,1,(ForAnyElementType *)&this[-1].field_0x70,
                             (int *)&this[-1].field_0x78,(int *)&this[-1].field_0x7c);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&this[-1].field_0x80,false);
        }
        else {
          iVar5 = *(int *)&this[-1].field_0xa0;
          iVar1 = *(int *)&this[-1].field_0xa4 + -1;
          iVar3 = *(int *)(*(longlong *)&this[-1].field_0x70 + 4 + (longlong)iVar5 * 0xc);
          *(int *)&this[-1].field_0xa0 = iVar3;
          *(int *)&this[-1].field_0xa4 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)(*(longlong *)&this[-1].field_0x70 + (longlong)iVar3 * 0xc) = 0xffffffff;
          }
        }
        TSparseArrayBase<12,4,FDefaultSparseArrayAllocator>::AllocateIndex
                  ((TSparseArrayBase<12,4,FDefaultSparseArrayAllocator> *)&this[-1].field_0x70,
                   &local_60,iVar5);
        if (local_60.Pointer != (FWeakObjectPtr *)0x0) {
          *(FWeakObjectPtr *)local_60.Pointer = local_a0;
          ((FWeakObjectPtr *)((longlong)local_60.Pointer + 8))->ObjectIndex = local_98;
        }
        local_res10[0] = local_60.Index;
        local_50 = &local_b8;
        local_48 = local_res10;
        TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FObjectKey_const_&,UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                  ((TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                    *)&this[-1].field_0x20,&local_80,(bool *)&local_50);
        bVar8 = bVar8 & 0xfc;
      }
      local_90.GroupHandle.Value = local_b0._0_4_;
      local_90.ValueHandle.TypeID.TypeID = *(uint *)&this[-1].field_0xc8;
      local_90.ValueHandle.StorageIndex.Value = local_res10[0];
      FPreAnimatedEntityCaptureSource::BeginTrackingEntity
                (local_70,&local_90,(FMovieSceneEntityID)*(ushort *)param_2,
                 *(FRootInstanceHandle *)param_3,bVar2);
      lVar7 = lVar7 + 1;
      param_3 = (TRead<UE::MovieScene::FRootInstanceHandle>)((longlong)param_3 + 4);
      param_2 = (TRead<UE::MovieScene::FMovieSceneEntityID>)((longlong)param_2 + 2);
    } while (lVar7 < local_68);
  }
  return;
}

// BeginTrackingEntities @ 14677d600

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedCameraShakeTraits>
::BeginTrackingEntities
          (TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedCameraShakeTraits>
           *this,FPreAnimatedTrackerParams *param_1,
          TRead<UE::MovieScene::FMovieSceneEntityID> param_2,
          TRead<UE::MovieScene::FRootInstanceHandle> param_3,TRead<UObject_*> param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  UObject *pUVar4;
  int iVar5;
  TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex> *pTVar6;
  longlong lVar7;
  byte bVar8;
  int local_res10 [2];
  FObjectKey local_b8;
  undefined1 local_b0 [8];
  FWeakObjectPtr local_a8;
  FWeakObjectPtr local_a0;
  undefined4 local_98;
  FPreAnimatedStateEntry local_90;
  TPairInitializer<FObjectKey_const_&,UE::MovieScene::FPreAnimatedStorageIndex_const_&> local_80;
  FPreAnimatedEntityCaptureSource *local_70;
  longlong local_68;
  FSparseArrayAllocationInfo local_60;
  FObjectKey *local_50;
  int *local_48;
  
  bVar2 = param_1->bWantsRestoreState;
  iVar5 = param_1->Num;
  if ((((*(FPreAnimatedStateExtension **)&this[-1].field_0xb8)->NumRequestsForGlobalState != 0) ||
      (bVar2 != false)) &&
     (local_70 = FPreAnimatedStateExtension::GetOrCreateEntityMetaData
                           (*(FPreAnimatedStateExtension **)&this[-1].field_0xb8), 0 < iVar5)) {
    lVar7 = 0;
    bVar8 = local_98._1_1_;
    local_68 = (longlong)iVar5;
    do {
      local_b8.ObjectIndex = 0;
      local_b8.ObjectSerialNumber = 0;
      pUVar4 = *(UObject **)((longlong)param_4 + lVar7 * 8);
      if (pUVar4 != (UObject *)0x0) {
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar4);
        }
        local_a8.ObjectIndex = 0;
        local_a8.ObjectSerialNumber = 0;
        local_80.Value = (FPreAnimatedStorageIndex *)pUVar4;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar4);
        }
        FWeakObjectPtr::operator=(&local_a8,(FObjectPtr)&local_80.Value);
        local_b8.ObjectIndex = local_a8.ObjectIndex;
        local_b8.ObjectSerialNumber = local_a8.ObjectSerialNumber;
      }
      FBoundObjectPreAnimatedStateTraits::MakeGroupImpl
                ((FBoundObjectPreAnimatedStateTraits *)&this[-1].field_0xd0,(UObject *)local_b0);
      pTVar6 = TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                       *)&this[-1].field_0x20,&local_b8);
      if ((pTVar6 == (TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex> *)0x0) ||
         (local_res10[0] = *(int *)&pTVar6->field_0x8, local_res10[0] == -1)) {
        local_res10[0] = -1;
        local_a0.ObjectIndex = local_b8.ObjectIndex;
        local_a0.ObjectSerialNumber = local_b8.ObjectSerialNumber;
        local_98 = CONCAT22(local_98._2_2_,CONCAT11(bVar8,(undefined1)local_98)) & 0xfffffcff;
        if (*(int *)&this[-1].field_0xa4 == 0) {
          iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0xc,4,1,(ForAnyElementType *)&this[-1].field_0x70,
                             (int *)&this[-1].field_0x78,(int *)&this[-1].field_0x7c);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&this[-1].field_0x80,false);
        }
        else {
          iVar5 = *(int *)&this[-1].field_0xa0;
          iVar1 = *(int *)&this[-1].field_0xa4 + -1;
          iVar3 = *(int *)(*(longlong *)&this[-1].field_0x70 + 4 + (longlong)iVar5 * 0xc);
          *(int *)&this[-1].field_0xa0 = iVar3;
          *(int *)&this[-1].field_0xa4 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)(*(longlong *)&this[-1].field_0x70 + (longlong)iVar3 * 0xc) = 0xffffffff;
          }
        }
        TSparseArrayBase<12,4,FDefaultSparseArrayAllocator>::AllocateIndex
                  ((TSparseArrayBase<12,4,FDefaultSparseArrayAllocator> *)&this[-1].field_0x70,
                   &local_60,iVar5);
        if (local_60.Pointer != (FWeakObjectPtr *)0x0) {
          *(FWeakObjectPtr *)local_60.Pointer = local_a0;
          ((FWeakObjectPtr *)((longlong)local_60.Pointer + 8))->ObjectIndex = local_98;
        }
        local_res10[0] = local_60.Index;
        local_50 = &local_b8;
        local_48 = local_res10;
        TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FObjectKey_const_&,UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                  ((TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                    *)&this[-1].field_0x20,&local_80,(bool *)&local_50);
        bVar8 = bVar8 & 0xfc;
      }
      local_90.GroupHandle.Value = local_b0._0_4_;
      local_90.ValueHandle.TypeID.TypeID = *(uint *)&this[-1].field_0xc8;
      local_90.ValueHandle.StorageIndex.Value = local_res10[0];
      FPreAnimatedEntityCaptureSource::BeginTrackingEntity
                (local_70,&local_90,(FMovieSceneEntityID)*(ushort *)param_2,
                 *(FRootInstanceHandle *)param_3,bVar2);
      lVar7 = lVar7 + 1;
      param_3 = (TRead<UE::MovieScene::FRootInstanceHandle>)((longlong)param_3 + 4);
      param_2 = (TRead<UE::MovieScene::FMovieSceneEntityID>)((longlong)param_2 + 2);
    } while (lVar7 < local_68);
  }
  return;
}

// BeginTrackingEntities @ 14677d860

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedCameraSourceShakeTraits>::
BeginTrackingEntities
          (TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedCameraSourceShakeTraits>
           *this,FPreAnimatedTrackerParams *param_1,
          TRead<UE::MovieScene::FMovieSceneEntityID> param_2,
          TRead<UE::MovieScene::FRootInstanceHandle> param_3,TRead<UObject_*> param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  UObject *pUVar4;
  int iVar5;
  TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex> *pTVar6;
  longlong lVar7;
  byte bVar8;
  int local_res10 [2];
  FObjectKey local_b8;
  undefined1 local_b0 [8];
  FWeakObjectPtr local_a8;
  FWeakObjectPtr local_a0;
  undefined4 local_98;
  FPreAnimatedStateEntry local_90;
  TPairInitializer<FObjectKey_const_&,UE::MovieScene::FPreAnimatedStorageIndex_const_&> local_80;
  FPreAnimatedEntityCaptureSource *local_70;
  longlong local_68;
  FSparseArrayAllocationInfo local_60;
  FObjectKey *local_50;
  int *local_48;
  
  bVar2 = param_1->bWantsRestoreState;
  iVar5 = param_1->Num;
  if ((((*(FPreAnimatedStateExtension **)&this[-1].field_0xb8)->NumRequestsForGlobalState != 0) ||
      (bVar2 != false)) &&
     (local_70 = FPreAnimatedStateExtension::GetOrCreateEntityMetaData
                           (*(FPreAnimatedStateExtension **)&this[-1].field_0xb8), 0 < iVar5)) {
    lVar7 = 0;
    bVar8 = local_98._1_1_;
    local_68 = (longlong)iVar5;
    do {
      local_b8.ObjectIndex = 0;
      local_b8.ObjectSerialNumber = 0;
      pUVar4 = *(UObject **)((longlong)param_4 + lVar7 * 8);
      if (pUVar4 != (UObject *)0x0) {
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar4);
        }
        local_a8.ObjectIndex = 0;
        local_a8.ObjectSerialNumber = 0;
        local_80.Value = (FPreAnimatedStorageIndex *)pUVar4;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar4);
        }
        FWeakObjectPtr::operator=(&local_a8,(FObjectPtr)&local_80.Value);
        local_b8.ObjectIndex = local_a8.ObjectIndex;
        local_b8.ObjectSerialNumber = local_a8.ObjectSerialNumber;
      }
      FBoundObjectPreAnimatedStateTraits::MakeGroupImpl
                ((FBoundObjectPreAnimatedStateTraits *)&this[-1].field_0xd0,(UObject *)local_b0);
      pTVar6 = TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                       *)&this[-1].field_0x20,&local_b8);
      if ((pTVar6 == (TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex> *)0x0) ||
         (local_res10[0] = *(int *)&pTVar6->field_0x8, local_res10[0] == -1)) {
        local_res10[0] = -1;
        local_a0.ObjectIndex = local_b8.ObjectIndex;
        local_a0.ObjectSerialNumber = local_b8.ObjectSerialNumber;
        local_98 = CONCAT22(local_98._2_2_,CONCAT11(bVar8,(undefined1)local_98)) & 0xfffffcff;
        if (*(int *)&this[-1].field_0xa4 == 0) {
          iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0xc,4,1,(ForAnyElementType *)&this[-1].field_0x70,
                             (int *)&this[-1].field_0x78,(int *)&this[-1].field_0x7c);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&this[-1].field_0x80,false);
        }
        else {
          iVar5 = *(int *)&this[-1].field_0xa0;
          iVar1 = *(int *)&this[-1].field_0xa4 + -1;
          iVar3 = *(int *)(*(longlong *)&this[-1].field_0x70 + 4 + (longlong)iVar5 * 0xc);
          *(int *)&this[-1].field_0xa0 = iVar3;
          *(int *)&this[-1].field_0xa4 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)(*(longlong *)&this[-1].field_0x70 + (longlong)iVar3 * 0xc) = 0xffffffff;
          }
        }
        TSparseArrayBase<12,4,FDefaultSparseArrayAllocator>::AllocateIndex
                  ((TSparseArrayBase<12,4,FDefaultSparseArrayAllocator> *)&this[-1].field_0x70,
                   &local_60,iVar5);
        if (local_60.Pointer != (FWeakObjectPtr *)0x0) {
          *(FWeakObjectPtr *)local_60.Pointer = local_a0;
          ((FWeakObjectPtr *)((longlong)local_60.Pointer + 8))->ObjectIndex = local_98;
        }
        local_res10[0] = local_60.Index;
        local_50 = &local_b8;
        local_48 = local_res10;
        TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FObjectKey_const_&,UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                  ((TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                    *)&this[-1].field_0x20,&local_80,(bool *)&local_50);
        bVar8 = bVar8 & 0xfc;
      }
      local_90.GroupHandle.Value = local_b0._0_4_;
      local_90.ValueHandle.TypeID.TypeID = *(uint *)&this[-1].field_0xc8;
      local_90.ValueHandle.StorageIndex.Value = local_res10[0];
      FPreAnimatedEntityCaptureSource::BeginTrackingEntity
                (local_70,&local_90,(FMovieSceneEntityID)*(ushort *)param_2,
                 *(FRootInstanceHandle *)param_3,bVar2);
      lVar7 = lVar7 + 1;
      param_3 = (TRead<UE::MovieScene::FRootInstanceHandle>)((longlong)param_3 + 4);
      param_2 = (TRead<UE::MovieScene::FMovieSceneEntityID>)((longlong)param_2 + 2);
    } while (lVar7 < local_68);
  }
  return;
}

// BeginTrackingEntities @ 14677dac0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedMobilityTraits>::
BeginTrackingEntities
          (TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedMobilityTraits> *this,
          FPreAnimatedTrackerParams *param_1,TRead<UE::MovieScene::FMovieSceneEntityID> param_2,
          TRead<UE::MovieScene::FRootInstanceHandle> param_3,TRead<UObject_*> param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  UObject *pUVar4;
  FWeakObjectPtr FVar5;
  int iVar6;
  TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex> *pTVar7;
  longlong lVar8;
  byte bVar9;
  int local_res10 [2];
  FObjectKey local_b8;
  undefined1 local_b0 [8];
  FWeakObjectPtr local_a8;
  FPreAnimatedStateEntry local_a0;
  TPairInitializer<FObjectKey_const_&,UE::MovieScene::FPreAnimatedStorageIndex_const_&> local_90;
  FPreAnimatedEntityCaptureSource *local_80;
  longlong local_78;
  FWeakObjectPtr local_70;
  int iStack_68;
  uint uStack_64;
  FSparseArrayAllocationInfo local_60;
  FObjectKey *local_50;
  int *local_48;
  
  bVar2 = param_1->bWantsRestoreState;
  iVar6 = param_1->Num;
  if ((((*(FPreAnimatedStateExtension **)&this[-1].field_0xb8)->NumRequestsForGlobalState != 0) ||
      (bVar2 != false)) &&
     (local_80 = FPreAnimatedStateExtension::GetOrCreateEntityMetaData
                           (*(FPreAnimatedStateExtension **)&this[-1].field_0xb8), 0 < iVar6)) {
    lVar8 = 0;
    bVar9 = (byte)uStack_64;
    local_78 = (longlong)iVar6;
    do {
      local_b8.ObjectIndex = 0;
      local_b8.ObjectSerialNumber = 0;
      pUVar4 = *(UObject **)((longlong)param_4 + lVar8 * 8);
      if (pUVar4 != (UObject *)0x0) {
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar4);
        }
        local_a8.ObjectIndex = 0;
        local_a8.ObjectSerialNumber = 0;
        local_90.Value = (FPreAnimatedStorageIndex *)pUVar4;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar4);
        }
        FWeakObjectPtr::operator=(&local_a8,(FObjectPtr)&local_90.Value);
        local_b8.ObjectIndex = local_a8.ObjectIndex;
        local_b8.ObjectSerialNumber = local_a8.ObjectSerialNumber;
      }
      FBoundObjectPreAnimatedStateTraits::MakeGroupImpl
                ((FBoundObjectPreAnimatedStateTraits *)&this[-1].field_0xd0,(UObject *)local_b0);
      pTVar7 = TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                       *)&this[-1].field_0x20,&local_b8);
      if ((pTVar7 == (TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex> *)0x0) ||
         (local_res10[0] = *(int *)&pTVar7->field_0x8, local_res10[0] == -1)) {
        local_res10[0] = -1;
        local_70.ObjectIndex = local_b8.ObjectIndex;
        local_70.ObjectSerialNumber = local_b8.ObjectSerialNumber;
        uStack_64 = CONCAT31(uStack_64._1_3_,bVar9) & 0xfffffffc;
        if (*(int *)&this[-1].field_0xa4 == 0) {
          iVar6 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,4,1,(ForAnyElementType *)&this[-1].field_0x70,
                             (int *)&this[-1].field_0x78,(int *)&this[-1].field_0x7c);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&this[-1].field_0x80,false);
        }
        else {
          iVar6 = *(int *)&this[-1].field_0xa0;
          iVar3 = *(int *)(*(longlong *)&this[-1].field_0x70 + 4 + (longlong)iVar6 * 0x10);
          iVar1 = *(int *)&this[-1].field_0xa4 + -1;
          *(int *)&this[-1].field_0xa0 = iVar3;
          *(int *)&this[-1].field_0xa4 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)(*(longlong *)&this[-1].field_0x70 + (longlong)iVar3 * 0x10) = 0xffffffff
            ;
          }
        }
        TSparseArrayBase<16,4,FDefaultSparseArrayAllocator>::AllocateIndex
                  ((TSparseArrayBase<16,4,FDefaultSparseArrayAllocator> *)&this[-1].field_0x70,
                   &local_60,iVar6);
        if (local_60.Pointer != (FWeakObjectPtr *)0x0) {
          FVar5.ObjectSerialNumber = uStack_64;
          FVar5.ObjectIndex = iStack_68;
          *(FWeakObjectPtr *)local_60.Pointer = local_70;
          *(FWeakObjectPtr *)((longlong)local_60.Pointer + 8) = FVar5;
        }
        local_res10[0] = local_60.Index;
        local_50 = &local_b8;
        local_48 = local_res10;
        TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FObjectKey_const_&,UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                  ((TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                    *)&this[-1].field_0x20,&local_90,(bool *)&local_50);
        bVar9 = bVar9 & 0xfc;
      }
      local_a0.GroupHandle.Value = local_b0._0_4_;
      local_a0.ValueHandle.TypeID.TypeID = *(uint *)&this[-1].field_0xc8;
      local_a0.ValueHandle.StorageIndex.Value = local_res10[0];
      FPreAnimatedEntityCaptureSource::BeginTrackingEntity
                (local_80,&local_a0,(FMovieSceneEntityID)*(ushort *)param_2,
                 *(FRootInstanceHandle *)param_3,bVar2);
      lVar8 = lVar8 + 1;
      param_3 = (TRead<UE::MovieScene::FRootInstanceHandle>)((longlong)param_3 + 4);
      param_2 = (TRead<UE::MovieScene::FMovieSceneEntityID>)((longlong)param_2 + 2);
    } while (lVar8 < local_78);
  }
  return;
}

// BeginTrackingEntity @ 14677dd20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedAudioStateTraits<UE::MovieScene::FBoundObjectPreAnimatedStateTraits>_>
::BeginTrackingEntity
          (TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedAudioStateTraits<UE::MovieScene::FBoundObjectPreAnimatedStateTraits>_>
           *this,FMovieSceneEntityID param_1,bool param_2,FRootInstanceHandle param_3,
          UObject *param_4)

{
  FPreAnimatedEntityCaptureSource *this_00;
  int local_res8;
  FObjectKey local_58;
  FWeakObjectPtr local_50;
  FWeakObjectPtr local_48;
  UObject *local_40;
  FPreAnimatedStateEntry local_38;
  
  if (((*(FPreAnimatedStateExtension **)&this[-1].field_0xb8)->NumRequestsForGlobalState != 0) ||
     (param_2)) {
    this_00 = FPreAnimatedStateExtension::GetOrCreateEntityMetaData
                        (*(FPreAnimatedStateExtension **)&this[-1].field_0xb8);
    local_48.ObjectIndex = 0;
    local_48.ObjectSerialNumber = 0;
    if (param_4 != (UObject *)0x0) {
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable(param_4);
      }
      local_50.ObjectIndex = 0;
      local_50.ObjectSerialNumber = 0;
      local_40 = param_4;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable(param_4);
      }
      FWeakObjectPtr::operator=(&local_50,(FObjectPtr)&local_40);
      local_48 = local_50;
    }
    TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedAudioStateTraits<UE::MovieScene::FBoundObjectPreAnimatedStateTraits>_>
    ::GetOrCreateStorageIndex
              ((TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedAudioStateTraits<UE::MovieScene::FBoundObjectPreAnimatedStateTraits>_>
                *)&this[-1].field_0x8,&local_58);
    FBoundObjectPreAnimatedStateTraits::MakeGroupImpl
              ((FBoundObjectPreAnimatedStateTraits *)&this[-1].field_0xd0,(UObject *)&local_res8);
    local_38.GroupHandle.Value = local_res8;
    local_38.ValueHandle.TypeID.TypeID = *(uint *)&this[-1].field_0xc8;
    local_38.ValueHandle.StorageIndex.Value = local_58.ObjectIndex;
    FPreAnimatedEntityCaptureSource::BeginTrackingEntity(this_00,&local_38,param_1,param_3,param_2);
  }
  return;
}

// BeginTrackingEntity @ 14677de50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FComponentAttachmentPreAnimatedTraits>::
BeginTrackingEntity(TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FComponentAttachmentPreAnimatedTraits>
                    *this,FMovieSceneEntityID param_1,bool param_2,FRootInstanceHandle param_3,
                   UObject *param_4)

{
  FPreAnimatedEntityCaptureSource *this_00;
  int local_res8;
  FObjectKey local_58;
  FWeakObjectPtr local_50;
  FWeakObjectPtr local_48;
  UObject *local_40;
  FPreAnimatedStateEntry local_38;
  
  if (((*(FPreAnimatedStateExtension **)&this[-1].field_0xb8)->NumRequestsForGlobalState != 0) ||
     (param_2)) {
    this_00 = FPreAnimatedStateExtension::GetOrCreateEntityMetaData
                        (*(FPreAnimatedStateExtension **)&this[-1].field_0xb8);
    local_48.ObjectIndex = 0;
    local_48.ObjectSerialNumber = 0;
    if (param_4 != (UObject *)0x0) {
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable(param_4);
      }
      local_50.ObjectIndex = 0;
      local_50.ObjectSerialNumber = 0;
      local_40 = param_4;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable(param_4);
      }
      FWeakObjectPtr::operator=(&local_50,(FObjectPtr)&local_40);
      local_48 = local_50;
    }
    TPreAnimatedStateStorage<UE::MovieScene::FComponentAttachmentPreAnimatedTraits>::
    GetOrCreateStorageIndex
              ((TPreAnimatedStateStorage<UE::MovieScene::FComponentAttachmentPreAnimatedTraits> *)
               &this[-1].field_0x8,&local_58);
    FBoundObjectPreAnimatedStateTraits::MakeGroupImpl
              ((FBoundObjectPreAnimatedStateTraits *)&this[-1].field_0xd0,(UObject *)&local_res8);
    local_38.GroupHandle.Value = local_res8;
    local_38.ValueHandle.TypeID.TypeID = *(uint *)&this[-1].field_0xc8;
    local_38.ValueHandle.StorageIndex.Value = local_58.ObjectIndex;
    FPreAnimatedEntityCaptureSource::BeginTrackingEntity(this_00,&local_38,param_1,param_3,param_2);
  }
  return;
}

// BeginTrackingEntity @ 14677df80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedCameraComponentShakeTraits>::
BeginTrackingEntity(TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedCameraComponentShakeTraits>
                    *this,FMovieSceneEntityID param_1,bool param_2,FRootInstanceHandle param_3,
                   UObject *param_4)

{
  FPreAnimatedEntityCaptureSource *this_00;
  int local_res8;
  FObjectKey local_58;
  FWeakObjectPtr local_50;
  FWeakObjectPtr local_48;
  UObject *local_40;
  FPreAnimatedStateEntry local_38;
  
  if (((*(FPreAnimatedStateExtension **)&this[-1].field_0xb8)->NumRequestsForGlobalState != 0) ||
     (param_2)) {
    this_00 = FPreAnimatedStateExtension::GetOrCreateEntityMetaData
                        (*(FPreAnimatedStateExtension **)&this[-1].field_0xb8);
    local_48.ObjectIndex = 0;
    local_48.ObjectSerialNumber = 0;
    if (param_4 != (UObject *)0x0) {
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable(param_4);
      }
      local_50.ObjectIndex = 0;
      local_50.ObjectSerialNumber = 0;
      local_40 = param_4;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable(param_4);
      }
      FWeakObjectPtr::operator=(&local_50,(FObjectPtr)&local_40);
      local_48 = local_50;
    }
    TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraComponentShakeTraits>::
    GetOrCreateStorageIndex
              ((TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraComponentShakeTraits> *)
               &this[-1].field_0x8,&local_58);
    FBoundObjectPreAnimatedStateTraits::MakeGroupImpl
              ((FBoundObjectPreAnimatedStateTraits *)&this[-1].field_0xd0,(UObject *)&local_res8);
    local_38.GroupHandle.Value = local_res8;
    local_38.ValueHandle.TypeID.TypeID = *(uint *)&this[-1].field_0xc8;
    local_38.ValueHandle.StorageIndex.Value = local_58.ObjectIndex;
    FPreAnimatedEntityCaptureSource::BeginTrackingEntity(this_00,&local_38,param_1,param_3,param_2);
  }
  return;
}

// BeginTrackingEntity @ 14677e0b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedCameraShakeTraits>
::BeginTrackingEntity
          (TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedCameraShakeTraits>
           *this,FMovieSceneEntityID param_1,bool param_2,FRootInstanceHandle param_3,
          UObject *param_4)

{
  FPreAnimatedEntityCaptureSource *this_00;
  int local_res8;
  FObjectKey local_58;
  FWeakObjectPtr local_50;
  FWeakObjectPtr local_48;
  UObject *local_40;
  FPreAnimatedStateEntry local_38;
  
  if (((*(FPreAnimatedStateExtension **)&this[-1].field_0xb8)->NumRequestsForGlobalState != 0) ||
     (param_2)) {
    this_00 = FPreAnimatedStateExtension::GetOrCreateEntityMetaData
                        (*(FPreAnimatedStateExtension **)&this[-1].field_0xb8);
    local_48.ObjectIndex = 0;
    local_48.ObjectSerialNumber = 0;
    if (param_4 != (UObject *)0x0) {
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable(param_4);
      }
      local_50.ObjectIndex = 0;
      local_50.ObjectSerialNumber = 0;
      local_40 = param_4;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable(param_4);
      }
      FWeakObjectPtr::operator=(&local_50,(FObjectPtr)&local_40);
      local_48 = local_50;
    }
    TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraShakeTraits>::GetOrCreateStorageIndex
              ((TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraShakeTraits> *)
               &this[-1].field_0x8,&local_58);
    FBoundObjectPreAnimatedStateTraits::MakeGroupImpl
              ((FBoundObjectPreAnimatedStateTraits *)&this[-1].field_0xd0,(UObject *)&local_res8);
    local_38.GroupHandle.Value = local_res8;
    local_38.ValueHandle.TypeID.TypeID = *(uint *)&this[-1].field_0xc8;
    local_38.ValueHandle.StorageIndex.Value = local_58.ObjectIndex;
    FPreAnimatedEntityCaptureSource::BeginTrackingEntity(this_00,&local_38,param_1,param_3,param_2);
  }
  return;
}

// BeginTrackingEntity @ 14677e1e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedCameraSourceShakeTraits>::
BeginTrackingEntity(TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedCameraSourceShakeTraits>
                    *this,FMovieSceneEntityID param_1,bool param_2,FRootInstanceHandle param_3,
                   UObject *param_4)

{
  FPreAnimatedEntityCaptureSource *this_00;
  int local_res8;
  FObjectKey local_58;
  FWeakObjectPtr local_50;
  FWeakObjectPtr local_48;
  UObject *local_40;
  FPreAnimatedStateEntry local_38;
  
  if (((*(FPreAnimatedStateExtension **)&this[-1].field_0xb8)->NumRequestsForGlobalState != 0) ||
     (param_2)) {
    this_00 = FPreAnimatedStateExtension::GetOrCreateEntityMetaData
                        (*(FPreAnimatedStateExtension **)&this[-1].field_0xb8);
    local_48.ObjectIndex = 0;
    local_48.ObjectSerialNumber = 0;
    if (param_4 != (UObject *)0x0) {
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable(param_4);
      }
      local_50.ObjectIndex = 0;
      local_50.ObjectSerialNumber = 0;
      local_40 = param_4;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable(param_4);
      }
      FWeakObjectPtr::operator=(&local_50,(FObjectPtr)&local_40);
      local_48 = local_50;
    }
    TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraSourceShakeTraits>::
    GetOrCreateStorageIndex
              ((TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraSourceShakeTraits> *)
               &this[-1].field_0x8,&local_58);
    FBoundObjectPreAnimatedStateTraits::MakeGroupImpl
              ((FBoundObjectPreAnimatedStateTraits *)&this[-1].field_0xd0,(UObject *)&local_res8);
    local_38.GroupHandle.Value = local_res8;
    local_38.ValueHandle.TypeID.TypeID = *(uint *)&this[-1].field_0xc8;
    local_38.ValueHandle.StorageIndex.Value = local_58.ObjectIndex;
    FPreAnimatedEntityCaptureSource::BeginTrackingEntity(this_00,&local_38,param_1,param_3,param_2);
  }
  return;
}

// BeginTrackingEntity @ 14677e310

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedMobilityTraits>::
BeginTrackingEntity(TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedMobilityTraits>
                    *this,FMovieSceneEntityID param_1,bool param_2,FRootInstanceHandle param_3,
                   UObject *param_4)

{
  FPreAnimatedEntityCaptureSource *this_00;
  int local_res8;
  FObjectKey local_58;
  FWeakObjectPtr local_50;
  FWeakObjectPtr local_48;
  UObject *local_40;
  FPreAnimatedStateEntry local_38;
  
  if (((*(FPreAnimatedStateExtension **)&this[-1].field_0xb8)->NumRequestsForGlobalState != 0) ||
     (param_2)) {
    this_00 = FPreAnimatedStateExtension::GetOrCreateEntityMetaData
                        (*(FPreAnimatedStateExtension **)&this[-1].field_0xb8);
    local_48.ObjectIndex = 0;
    local_48.ObjectSerialNumber = 0;
    if (param_4 != (UObject *)0x0) {
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable(param_4);
      }
      local_50.ObjectIndex = 0;
      local_50.ObjectSerialNumber = 0;
      local_40 = param_4;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable(param_4);
      }
      FWeakObjectPtr::operator=(&local_50,(FObjectPtr)&local_40);
      local_48 = local_50;
    }
    TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedMobilityTraits>::GetOrCreateStorageIndex
              ((TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedMobilityTraits> *)
               &this[-1].field_0x8,&local_58);
    FBoundObjectPreAnimatedStateTraits::MakeGroupImpl
              ((FBoundObjectPreAnimatedStateTraits *)&this[-1].field_0xd0,(UObject *)&local_res8);
    local_38.GroupHandle.Value = local_res8;
    local_38.ValueHandle.TypeID.TypeID = *(uint *)&this[-1].field_0xc8;
    local_38.ValueHandle.StorageIndex.Value = local_58.ObjectIndex;
    FPreAnimatedEntityCaptureSource::BeginTrackingEntity(this_00,&local_38,param_1,param_3,param_2);
  }
  return;
}

// CachePreAnimatedValue @ 14677e9c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FComponentAttachmentPreAnimatedTraits>::
CachePreAnimatedValue
          (TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FComponentAttachmentPreAnimatedTraits>
           *this,FCachePreAnimatedValueParams *param_1,FPreAnimatedStateEntry *param_2,
          UObject *param_3)

{
  byte *pbVar1;
  int iVar2;
  code *pcVar3;
  EPreAnimatedStorageRequirement EVar4;
  bool bVar5;
  longlong lVar6;
  USceneComponent *pUVar7;
  FPreAnimAttachment *pFVar8;
  FPreAnimatedStorageIndex local_res10 [2];
  FPreAnimatedStorageIndex local_res18 [4];
  USceneComponent *local_78;
  FWeakObjectPtr local_70;
  FName FStack_68;
  uint local_60;
  FPreAnimAttachment local_58;
  
  iVar2 = (param_2->ValueHandle).StorageIndex.Value;
  EVar4 = FPreAnimatedStateExtension::GetStorageRequirement
                    (*(FPreAnimatedStateExtension **)&this->field_0xb0,param_2);
  local_res18[0].Value = iVar2;
  if (iVar2 == -1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("StorageIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                       ,0x1b6,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar6 = (longlong)iVar2 * 0x20 + *(longlong *)&this->field_0x68;
  if (EVar4 == Persistent) {
    bVar5 = (*(byte *)(lVar6 + 0x1c) & 1) == 0;
  }
  else {
    if ((EVar4 != Transient) || ((*(byte *)(lVar6 + 0x1c) & 3) == 1)) goto LAB_14677ebd7;
    pFVar8 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimAttachment,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
             ::Find((TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimAttachment,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                     *)&this->field_0xa0,local_res18);
    bVar5 = pFVar8 == (FPreAnimAttachment *)0x0;
  }
  if (bVar5) {
    pUVar7 = CastChecked<USceneComponent,UObject>(param_3);
    local_70.ObjectIndex = 0;
    local_70.ObjectSerialNumber = 0;
    FStack_68.ComparisonIndex.Value = 0;
    FStack_68.Number = 0;
    local_60 = local_60 & 0xff000000;
    local_78 = (pUVar7->AttachParent).field0_0x0.DebugPtr;
    if ((GC::GIsIncrementalReachabilityPending != false) && (local_78 != (USceneComponent *)0x0)) {
      GC::MarkAsReachable((UObject *)local_78);
    }
    FWeakObjectPtr::operator=(&local_70,(FObjectPtr)&local_78);
    FStack_68 = pUVar7->AttachSocketName;
    local_58._16_4_ = local_60;
    local_58.OldAttachParent.WeakPtr = local_70;
    local_res10[0].Value = iVar2;
    local_58.OldAttachSocket = FStack_68;
    if (iVar2 == -1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StorageIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                         ,0x195,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    lVar6 = (longlong)local_res10[0].Value * 0x20 + *(longlong *)&this->field_0x68;
    if (EVar4 == Persistent) {
      if ((*(byte *)(lVar6 + 0x1c) & 1) != 0) {
        bVar5 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3111672766223352219>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                           ,0x19b,"!CachedData.bInitialized");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *(FWeakObjectPtr *)(lVar6 + 8) = local_58.OldAttachParent.WeakPtr;
      *(FName *)(lVar6 + 0x10) = local_58.OldAttachSocket;
      *(byte *)(lVar6 + 0x1c) = *(byte *)(lVar6 + 0x1c) | 3;
      *(undefined4 *)(lVar6 + 0x18) = local_58._16_4_;
    }
    else if (EVar4 == Transient) {
      if ((*(byte *)(lVar6 + 0x1c) & 1) != 0) {
        pFVar8 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimAttachment,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                 ::Find((TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimAttachment,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                         *)&this->field_0xa0,local_res10);
        if (pFVar8 != (FPreAnimAttachment *)0x0) {
          bVar5 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<3111672766223352226>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                             ,0x1a2,
                             "!CachedData.bInitialized || !TransientPreAnimatedStorage.Contains(StorageIndex)"
                            );
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
      }
      if ((*(byte *)(lVar6 + 0x1c) & 1) == 0) {
        *(FWeakObjectPtr *)(lVar6 + 8) = local_58.OldAttachParent.WeakPtr;
        *(FName *)(lVar6 + 0x10) = local_58.OldAttachSocket;
        *(undefined4 *)(lVar6 + 0x18) = local_58._16_4_;
        *(byte *)(lVar6 + 0x1c) = *(byte *)(lVar6 + 0x1c) | 1;
      }
      else {
        TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimAttachment,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
        ::
        Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,UE::MovieScene::FPreAnimAttachment>
                  ((TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimAttachment,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    *)&this->field_0xa0,local_res10,&local_58);
      }
    }
  }
LAB_14677ebd7:
  if (param_1->bForcePersist != false) {
    if (iVar2 == -1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StorageIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                         ,0x200,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pbVar1 = (byte *)((longlong)iVar2 * 0x20 + 0x1c + *(longlong *)&this->field_0x68);
    *pbVar1 = *pbVar1 | 2;
  }
  return;
}

// CachePreAnimatedValue @ 14677ec30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedCameraComponentShakeTraits>::
CachePreAnimatedValue
          (TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedCameraComponentShakeTraits>
           *this,FCachePreAnimatedValueParams *param_1,FPreAnimatedStateEntry *param_2,
          UObject *param_3)

{
  longlong lVar1;
  byte *pbVar2;
  int iVar3;
  code *pcVar4;
  EPreAnimatedStorageRequirement EVar5;
  bool bVar6;
  bool *pbVar7;
  TTuple<UE::MovieScene::FPreAnimatedStorageIndex,bool> *pTVar8;
  FPreAnimatedStorageIndex local_res10 [2];
  FPreAnimatedStorageIndex local_res18 [2];
  
  iVar3 = (param_2->ValueHandle).StorageIndex.Value;
  EVar5 = FPreAnimatedStateExtension::GetStorageRequirement
                    (*(FPreAnimatedStateExtension **)&this->field_0xb0,param_2);
  local_res18[0].Value = iVar3;
  if ((iVar3 == -1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StorageIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                         ,0x1b6,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar1 = *(longlong *)&this->field_0x68 + (longlong)iVar3 * 0xc;
  if (EVar5 == Persistent) {
    if ((*(byte *)(lVar1 + 9) & 1) != 0) goto LAB_14677ee07;
  }
  else if (((EVar5 != Transient) || ((*(byte *)(lVar1 + 9) & 3) == 1)) ||
          (pbVar7 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,bool,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    ::Find((TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,bool,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                            *)&this->field_0xa0,local_res18), pbVar7 != (bool *)0x0))
  goto LAB_14677ee07;
  local_res10[0].Value = iVar3;
  if ((iVar3 == -1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StorageIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                         ,0x195,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar1 = *(longlong *)&this->field_0x68 + (longlong)local_res10[0].Value * 0xc;
  if (EVar5 == Persistent) {
    if (((*(byte *)(lVar1 + 9) & 1) != 0) &&
       (bVar6 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3111672766223352219>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                           ,0x19b,"!CachedData.bInitialized"), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(byte *)(lVar1 + 9) = *(byte *)(lVar1 + 9) | 3;
    *(undefined1 *)(lVar1 + 8) = 1;
  }
  else if (EVar5 == Transient) {
    if ((((*(byte *)(lVar1 + 9) & 1) != 0) &&
        (pbVar7 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,bool,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                  ::Find((TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,bool,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                          *)&this->field_0xa0,local_res10), pbVar7 != (bool *)0x0)) &&
       (bVar6 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3111672766223352226>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                           ,0x1a2,
                           "!CachedData.bInitialized || !TransientPreAnimatedStorage.Contains(StorageIndex)"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((*(byte *)(lVar1 + 9) & 1) == 0) {
      *(undefined1 *)(lVar1 + 8) = 1;
      *(byte *)(lVar1 + 9) = *(byte *)(lVar1 + 9) | 1;
    }
    else {
      pTVar8 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,bool,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
               ::AllocateMemoryForEmplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&>
                         ((TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,bool,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                           *)&this->field_0xa0,local_res10);
      *(int *)pTVar8 = local_res10[0].Value;
      pTVar8->field_0x4 = 1;
    }
  }
LAB_14677ee07:
  if (param_1->bForcePersist != false) {
    if ((iVar3 == -1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StorageIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                           ,0x200,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pbVar2 = (byte *)(*(longlong *)&this->field_0x68 + 9 + (longlong)iVar3 * 0xc);
    *pbVar2 = *pbVar2 | 2;
  }
  return;
}

// CachePreAnimatedValue @ 14677ee70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedCameraComponentShakeTraits>::
CachePreAnimatedValue
          (TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedCameraComponentShakeTraits>
           *this,FCachePreAnimatedValueParams *param_1,UObject *param_2,
          EPreAnimatedCaptureSourceTracking param_3)

{
  FPreAnimatedStateExtension *this_00;
  bool bVar1;
  TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex> *pTVar2;
  int local_res20 [2];
  FWeakObjectPtr local_58;
  FWeakObjectPtr local_50;
  FWeakObjectPtr local_48;
  UObject *local_40;
  FPreAnimatedStateEntry local_38;
  
  if (param_3 == CacheIfTracked) {
    if (**(int **)&this->field_0xb0 == 0) {
      local_58.ObjectIndex = 0;
      local_58.ObjectSerialNumber = 0;
      if (param_2 != (UObject *)0x0) {
        if (GC::GIsIncrementalReachabilityPending) {
          GC::MarkAsReachable(param_2);
        }
        local_58.ObjectIndex = 0;
        local_58.ObjectSerialNumber = 0;
        local_48 = (FWeakObjectPtr)param_2;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(param_2);
        }
        FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_48);
      }
      FBoundObjectPreAnimatedStateTraits::FindGroupImpl
                ((FBoundObjectPreAnimatedStateTraits *)&this->field_0xc8,(UObject *)local_res20);
      pTVar2 = TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                       *)&this->field_0x18,(FObjectKey *)&local_58);
      if (pTVar2 == (TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex> *)0x0) {
        return;
      }
      local_38.ValueHandle.StorageIndex.Value = *(int *)&pTVar2->field_0x8;
      local_38.GroupHandle.Value = local_res20[0];
      local_38.ValueHandle.TypeID.TypeID = *(uint *)&this->field_0xc0;
      if (local_38.ValueHandle.StorageIndex.Value == -1) {
        return;
      }
      bVar1 = FPreAnimatedStateExtension::MetaDataExists
                        (*(FPreAnimatedStateExtension **)&this->field_0xb0,&local_38);
      if ((!bVar1) &&
         (bVar1 = `UE::MovieScene::
                  TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraComponentShakeTraits>::
                  ShouldTrackCaptureSource<UObject_*_&>'::__l11::<lambda_1>::operator()(local_res20)
         , !bVar1)) {
        return;
      }
    }
  }
  else if (param_3 != AlwaysCache) {
    `UE::MovieScene::
    TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraComponentShakeTraits>::
    ShouldTrackCaptureSource<UObject_*_&>'::__l4::<lambda_2>::operator()(local_res20);
    return;
  }
  local_48.ObjectIndex = 0;
  local_48.ObjectSerialNumber = 0;
  if (param_2 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(param_2);
    }
    local_50.ObjectIndex = 0;
    local_50.ObjectSerialNumber = 0;
    local_40 = param_2;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(param_2);
    }
    FWeakObjectPtr::operator=(&local_50,(FObjectPtr)&local_40);
    local_48 = local_50;
  }
  TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraComponentShakeTraits>::
  GetOrCreateStorageIndex
            ((TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraComponentShakeTraits> *)
             this,(FObjectKey *)&local_58);
  FBoundObjectPreAnimatedStateTraits::MakeGroupImpl
            ((FBoundObjectPreAnimatedStateTraits *)&this->field_0xc8,(UObject *)local_res20);
  local_38.GroupHandle.Value = local_res20[0];
  local_38.ValueHandle.TypeID.TypeID = *(uint *)&this->field_0xc0;
  local_38.ValueHandle.StorageIndex.Value = local_58.ObjectIndex;
  if (param_3 == CacheIfTracked) {
    this_00 = *(FPreAnimatedStateExtension **)&this->field_0xb0;
    if (this_00->NumRequestsForGlobalState == 0) {
      if ((local_58.ObjectIndex == -1) ||
         (bVar1 = FPreAnimatedStateExtension::MetaDataExists(this_00,&local_38), !bVar1)) {
        `UE::MovieScene::
        TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraComponentShakeTraits>::
        TrackCaptureSource'::__l5::<lambda_1>::operator()(local_res20);
      }
    }
    else {
      FPreAnimatedStateExtension::EnsureMetaData(this_00,&local_38);
    }
  }
  else if (param_3 == AlwaysCache) {
    FPreAnimatedStateExtension::AddSourceMetaData
              (*(FPreAnimatedStateExtension **)&this->field_0xb0,&local_38);
  }
  else {
    `UE::MovieScene::
    TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraComponentShakeTraits>::
    TrackCaptureSource'::__l4::<lambda_2>::operator()(local_res20);
  }
  CachePreAnimatedValue(this,param_1,&local_38,param_2);
  return;
}

// CachePreAnimatedValue @ 14677f0a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedCameraShakeTraits>
::CachePreAnimatedValue
          (TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedCameraShakeTraits>
           *this,FCachePreAnimatedValueParams *param_1,FPreAnimatedStateEntry *param_2,
          UObject *param_3)

{
  longlong lVar1;
  byte *pbVar2;
  int iVar3;
  code *pcVar4;
  EPreAnimatedStorageRequirement EVar5;
  bool bVar6;
  bool *pbVar7;
  TTuple<UE::MovieScene::FPreAnimatedStorageIndex,bool> *pTVar8;
  FPreAnimatedStorageIndex local_res10 [2];
  FPreAnimatedStorageIndex local_res18 [2];
  
  iVar3 = (param_2->ValueHandle).StorageIndex.Value;
  EVar5 = FPreAnimatedStateExtension::GetStorageRequirement
                    (*(FPreAnimatedStateExtension **)&this->field_0xb0,param_2);
  local_res18[0].Value = iVar3;
  if ((iVar3 == -1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StorageIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                         ,0x1b6,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar1 = *(longlong *)&this->field_0x68 + (longlong)iVar3 * 0xc;
  if (EVar5 == Persistent) {
    if ((*(byte *)(lVar1 + 9) & 1) != 0) goto LAB_14677f277;
  }
  else if (((EVar5 != Transient) || ((*(byte *)(lVar1 + 9) & 3) == 1)) ||
          (pbVar7 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,bool,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    ::Find((TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,bool,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                            *)&this->field_0xa0,local_res18), pbVar7 != (bool *)0x0))
  goto LAB_14677f277;
  local_res10[0].Value = iVar3;
  if ((iVar3 == -1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StorageIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                         ,0x195,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar1 = *(longlong *)&this->field_0x68 + (longlong)local_res10[0].Value * 0xc;
  if (EVar5 == Persistent) {
    if (((*(byte *)(lVar1 + 9) & 1) != 0) &&
       (bVar6 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3111672766223352219>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                           ,0x19b,"!CachedData.bInitialized"), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(byte *)(lVar1 + 9) = *(byte *)(lVar1 + 9) | 3;
    *(undefined1 *)(lVar1 + 8) = 1;
  }
  else if (EVar5 == Transient) {
    if ((((*(byte *)(lVar1 + 9) & 1) != 0) &&
        (pbVar7 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,bool,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                  ::Find((TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,bool,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                          *)&this->field_0xa0,local_res10), pbVar7 != (bool *)0x0)) &&
       (bVar6 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3111672766223352226>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                           ,0x1a2,
                           "!CachedData.bInitialized || !TransientPreAnimatedStorage.Contains(StorageIndex)"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((*(byte *)(lVar1 + 9) & 1) == 0) {
      *(undefined1 *)(lVar1 + 8) = 1;
      *(byte *)(lVar1 + 9) = *(byte *)(lVar1 + 9) | 1;
    }
    else {
      pTVar8 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,bool,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
               ::AllocateMemoryForEmplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&>
                         ((TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,bool,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                           *)&this->field_0xa0,local_res10);
      *(int *)pTVar8 = local_res10[0].Value;
      pTVar8->field_0x4 = 1;
    }
  }
LAB_14677f277:
  if (param_1->bForcePersist != false) {
    if ((iVar3 == -1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StorageIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                           ,0x200,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pbVar2 = (byte *)(*(longlong *)&this->field_0x68 + 9 + (longlong)iVar3 * 0xc);
    *pbVar2 = *pbVar2 | 2;
  }
  return;
}

// CachePreAnimatedValue @ 14677f2e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedCameraShakeTraits>
::CachePreAnimatedValue
          (TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedCameraShakeTraits>
           *this,FCachePreAnimatedValueParams *param_1,UObject *param_2,
          EPreAnimatedCaptureSourceTracking param_3)

{
  FPreAnimatedStateExtension *this_00;
  bool bVar1;
  TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex> *pTVar2;
  int local_res20 [2];
  FWeakObjectPtr local_58;
  FWeakObjectPtr local_50;
  FWeakObjectPtr local_48;
  UObject *local_40;
  FPreAnimatedStateEntry local_38;
  
  if (param_3 == CacheIfTracked) {
    if (**(int **)&this->field_0xb0 == 0) {
      local_58.ObjectIndex = 0;
      local_58.ObjectSerialNumber = 0;
      if (param_2 != (UObject *)0x0) {
        if (GC::GIsIncrementalReachabilityPending) {
          GC::MarkAsReachable(param_2);
        }
        local_58.ObjectIndex = 0;
        local_58.ObjectSerialNumber = 0;
        local_48 = (FWeakObjectPtr)param_2;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(param_2);
        }
        FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_48);
      }
      FBoundObjectPreAnimatedStateTraits::FindGroupImpl
                ((FBoundObjectPreAnimatedStateTraits *)&this->field_0xc8,(UObject *)local_res20);
      pTVar2 = TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                       *)&this->field_0x18,(FObjectKey *)&local_58);
      if (pTVar2 == (TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex> *)0x0) {
        return;
      }
      local_38.ValueHandle.StorageIndex.Value = *(int *)&pTVar2->field_0x8;
      local_38.GroupHandle.Value = local_res20[0];
      local_38.ValueHandle.TypeID.TypeID = *(uint *)&this->field_0xc0;
      if (local_38.ValueHandle.StorageIndex.Value == -1) {
        return;
      }
      bVar1 = FPreAnimatedStateExtension::MetaDataExists
                        (*(FPreAnimatedStateExtension **)&this->field_0xb0,&local_38);
      if ((!bVar1) &&
         (bVar1 = `UE::MovieScene::
                  TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraShakeTraits>::
                  ShouldTrackCaptureSource<UObject_*_&>'::__l11::<lambda_1>::operator()(local_res20)
         , !bVar1)) {
        return;
      }
    }
  }
  else if (param_3 != AlwaysCache) {
    `UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraShakeTraits>::
    ShouldTrackCaptureSource<UObject_*_&>'::__l4::<lambda_2>::operator()(local_res20);
    return;
  }
  local_48.ObjectIndex = 0;
  local_48.ObjectSerialNumber = 0;
  if (param_2 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(param_2);
    }
    local_50.ObjectIndex = 0;
    local_50.ObjectSerialNumber = 0;
    local_40 = param_2;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(param_2);
    }
    FWeakObjectPtr::operator=(&local_50,(FObjectPtr)&local_40);
    local_48 = local_50;
  }
  TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraShakeTraits>::GetOrCreateStorageIndex
            ((TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraShakeTraits> *)this,
             (FObjectKey *)&local_58);
  FBoundObjectPreAnimatedStateTraits::MakeGroupImpl
            ((FBoundObjectPreAnimatedStateTraits *)&this->field_0xc8,(UObject *)local_res20);
  local_38.GroupHandle.Value = local_res20[0];
  local_38.ValueHandle.TypeID.TypeID = *(uint *)&this->field_0xc0;
  local_38.ValueHandle.StorageIndex.Value = local_58.ObjectIndex;
  if (param_3 == CacheIfTracked) {
    this_00 = *(FPreAnimatedStateExtension **)&this->field_0xb0;
    if (this_00->NumRequestsForGlobalState == 0) {
      if ((local_58.ObjectIndex == -1) ||
         (bVar1 = FPreAnimatedStateExtension::MetaDataExists(this_00,&local_38), !bVar1)) {
        `UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraShakeTraits>::
        TrackCaptureSource'::__l5::<lambda_1>::operator()(local_res20);
      }
    }
    else {
      FPreAnimatedStateExtension::EnsureMetaData(this_00,&local_38);
    }
  }
  else if (param_3 == AlwaysCache) {
    FPreAnimatedStateExtension::AddSourceMetaData
              (*(FPreAnimatedStateExtension **)&this->field_0xb0,&local_38);
  }
  else {
    `UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraShakeTraits>::
    TrackCaptureSource'::__l4::<lambda_2>::operator()(local_res20);
  }
  CachePreAnimatedValue(this,param_1,&local_38,param_2);
  return;
}

// CachePreAnimatedValue @ 14677f510

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedCameraSourceShakeTraits>::
CachePreAnimatedValue
          (TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedCameraSourceShakeTraits>
           *this,FCachePreAnimatedValueParams *param_1,FPreAnimatedStateEntry *param_2,
          UObject *param_3)

{
  longlong lVar1;
  byte *pbVar2;
  int iVar3;
  code *pcVar4;
  EPreAnimatedStorageRequirement EVar5;
  bool bVar6;
  bool *pbVar7;
  TTuple<UE::MovieScene::FPreAnimatedStorageIndex,bool> *pTVar8;
  FPreAnimatedStorageIndex local_res10 [2];
  FPreAnimatedStorageIndex local_res18 [2];
  
  iVar3 = (param_2->ValueHandle).StorageIndex.Value;
  EVar5 = FPreAnimatedStateExtension::GetStorageRequirement
                    (*(FPreAnimatedStateExtension **)&this->field_0xb0,param_2);
  local_res18[0].Value = iVar3;
  if ((iVar3 == -1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StorageIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                         ,0x1b6,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar1 = *(longlong *)&this->field_0x68 + (longlong)iVar3 * 0xc;
  if (EVar5 == Persistent) {
    if ((*(byte *)(lVar1 + 9) & 1) != 0) goto LAB_14677f6e7;
  }
  else if (((EVar5 != Transient) || ((*(byte *)(lVar1 + 9) & 3) == 1)) ||
          (pbVar7 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,bool,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    ::Find((TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,bool,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                            *)&this->field_0xa0,local_res18), pbVar7 != (bool *)0x0))
  goto LAB_14677f6e7;
  local_res10[0].Value = iVar3;
  if ((iVar3 == -1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StorageIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                         ,0x195,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar1 = *(longlong *)&this->field_0x68 + (longlong)local_res10[0].Value * 0xc;
  if (EVar5 == Persistent) {
    if (((*(byte *)(lVar1 + 9) & 1) != 0) &&
       (bVar6 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3111672766223352219>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                           ,0x19b,"!CachedData.bInitialized"), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(byte *)(lVar1 + 9) = *(byte *)(lVar1 + 9) | 3;
    *(undefined1 *)(lVar1 + 8) = 1;
  }
  else if (EVar5 == Transient) {
    if ((((*(byte *)(lVar1 + 9) & 1) != 0) &&
        (pbVar7 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,bool,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                  ::Find((TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,bool,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                          *)&this->field_0xa0,local_res10), pbVar7 != (bool *)0x0)) &&
       (bVar6 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3111672766223352226>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                           ,0x1a2,
                           "!CachedData.bInitialized || !TransientPreAnimatedStorage.Contains(StorageIndex)"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((*(byte *)(lVar1 + 9) & 1) == 0) {
      *(undefined1 *)(lVar1 + 8) = 1;
      *(byte *)(lVar1 + 9) = *(byte *)(lVar1 + 9) | 1;
    }
    else {
      pTVar8 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,bool,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
               ::AllocateMemoryForEmplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&>
                         ((TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,bool,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                           *)&this->field_0xa0,local_res10);
      *(int *)pTVar8 = local_res10[0].Value;
      pTVar8->field_0x4 = 1;
    }
  }
LAB_14677f6e7:
  if (param_1->bForcePersist != false) {
    if ((iVar3 == -1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StorageIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                           ,0x200,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pbVar2 = (byte *)(*(longlong *)&this->field_0x68 + 9 + (longlong)iVar3 * 0xc);
    *pbVar2 = *pbVar2 | 2;
  }
  return;
}

// CachePreAnimatedValue @ 14677f750

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedCameraSourceShakeTraits>::
CachePreAnimatedValue
          (TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedCameraSourceShakeTraits>
           *this,FCachePreAnimatedValueParams *param_1,UObject *param_2,
          EPreAnimatedCaptureSourceTracking param_3)

{
  FPreAnimatedStateExtension *this_00;
  bool bVar1;
  TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex> *pTVar2;
  int local_res20 [2];
  FWeakObjectPtr local_58;
  FWeakObjectPtr local_50;
  FWeakObjectPtr local_48;
  UObject *local_40;
  FPreAnimatedStateEntry local_38;
  
  if (param_3 == CacheIfTracked) {
    if (**(int **)&this->field_0xb0 == 0) {
      local_58.ObjectIndex = 0;
      local_58.ObjectSerialNumber = 0;
      if (param_2 != (UObject *)0x0) {
        if (GC::GIsIncrementalReachabilityPending) {
          GC::MarkAsReachable(param_2);
        }
        local_58.ObjectIndex = 0;
        local_58.ObjectSerialNumber = 0;
        local_48 = (FWeakObjectPtr)param_2;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(param_2);
        }
        FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_48);
      }
      FBoundObjectPreAnimatedStateTraits::FindGroupImpl
                ((FBoundObjectPreAnimatedStateTraits *)&this->field_0xc8,(UObject *)local_res20);
      pTVar2 = TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                       *)&this->field_0x18,(FObjectKey *)&local_58);
      if (pTVar2 == (TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex> *)0x0) {
        return;
      }
      local_38.ValueHandle.StorageIndex.Value = *(int *)&pTVar2->field_0x8;
      local_38.GroupHandle.Value = local_res20[0];
      local_38.ValueHandle.TypeID.TypeID = *(uint *)&this->field_0xc0;
      if (local_38.ValueHandle.StorageIndex.Value == -1) {
        return;
      }
      bVar1 = FPreAnimatedStateExtension::MetaDataExists
                        (*(FPreAnimatedStateExtension **)&this->field_0xb0,&local_38);
      if ((!bVar1) &&
         (bVar1 = `UE::MovieScene::
                  TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraSourceShakeTraits>::
                  ShouldTrackCaptureSource<UObject_*_&>'::__l11::<lambda_1>::operator()(local_res20)
         , !bVar1)) {
        return;
      }
    }
  }
  else if (param_3 != AlwaysCache) {
    `UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraSourceShakeTraits>::
    ShouldTrackCaptureSource<UObject_*_&>'::__l4::<lambda_2>::operator()(local_res20);
    return;
  }
  local_48.ObjectIndex = 0;
  local_48.ObjectSerialNumber = 0;
  if (param_2 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(param_2);
    }
    local_50.ObjectIndex = 0;
    local_50.ObjectSerialNumber = 0;
    local_40 = param_2;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(param_2);
    }
    FWeakObjectPtr::operator=(&local_50,(FObjectPtr)&local_40);
    local_48 = local_50;
  }
  TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraSourceShakeTraits>::
  GetOrCreateStorageIndex
            ((TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraSourceShakeTraits> *)this,
             (FObjectKey *)&local_58);
  FBoundObjectPreAnimatedStateTraits::MakeGroupImpl
            ((FBoundObjectPreAnimatedStateTraits *)&this->field_0xc8,(UObject *)local_res20);
  local_38.GroupHandle.Value = local_res20[0];
  local_38.ValueHandle.TypeID.TypeID = *(uint *)&this->field_0xc0;
  local_38.ValueHandle.StorageIndex.Value = local_58.ObjectIndex;
  if (param_3 == CacheIfTracked) {
    this_00 = *(FPreAnimatedStateExtension **)&this->field_0xb0;
    if (this_00->NumRequestsForGlobalState == 0) {
      if ((local_58.ObjectIndex == -1) ||
         (bVar1 = FPreAnimatedStateExtension::MetaDataExists(this_00,&local_38), !bVar1)) {
        `UE::MovieScene::
        TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraSourceShakeTraits>::
        TrackCaptureSource'::__l5::<lambda_1>::operator()(local_res20);
      }
    }
    else {
      FPreAnimatedStateExtension::EnsureMetaData(this_00,&local_38);
    }
  }
  else if (param_3 == AlwaysCache) {
    FPreAnimatedStateExtension::AddSourceMetaData
              (*(FPreAnimatedStateExtension **)&this->field_0xb0,&local_38);
  }
  else {
    `UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraSourceShakeTraits>::
    TrackCaptureSource'::__l4::<lambda_2>::operator()(local_res20);
  }
  CachePreAnimatedValue(this,param_1,&local_38,param_2);
  return;
}

// CachePreAnimatedValue @ 14677f980

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedMobilityTraits>::
CachePreAnimatedValue
          (TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedMobilityTraits> *this,
          FCachePreAnimatedValueParams *param_1,FPreAnimatedStateEntry *param_2,UObject *param_3)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  EPreAnimatedStorageRequirement EVar6;
  bool bVar7;
  longlong lVar8;
  UClass *pUVar9;
  Type *pTVar10;
  TTuple<UE::MovieScene::FPreAnimatedStorageIndex,EComponentMobility::Type> *pTVar11;
  uint uVar12;
  FPreAnimatedStorageIndex local_res10 [2];
  FPreAnimatedStorageIndex local_res18 [4];
  
  iVar3 = (param_2->ValueHandle).StorageIndex.Value;
  EVar6 = FPreAnimatedStateExtension::GetStorageRequirement
                    (*(FPreAnimatedStateExtension **)&this->field_0xb0,param_2);
  local_res18[0].Value = iVar3;
  if ((iVar3 == -1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StorageIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                         ,0x1b6,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar8 = (longlong)iVar3 * 0x10 + *(longlong *)&this->field_0x68;
  if (EVar6 == Persistent) {
    bVar7 = (*(byte *)(lVar8 + 0xc) & 1) == 0;
  }
  else {
    if ((EVar6 != Transient) ||
       ((bVar2 = *(byte *)(lVar8 + 0xc), (bVar2 & 1) != 0 && ((bVar2 & 2) == 0))))
    goto LAB_14677fb7d;
    pTVar10 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,enum_EComponentMobility::Type,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
              ::Find(&this->field_0xa0,local_res18);
    bVar7 = pTVar10 == (Type *)0x0;
  }
  if (bVar7) {
    uVar12 = 0;
    if (param_3 != (UObject *)0x0) {
      pUVar9 = Z_Construct_UClass_USceneComponent_NoRegister();
      iVar4 = (int)pUVar9->_padding_;
      uVar12 = 0;
      if ((iVar4 <= *(int *)(*(longlong *)&param_3->field_0x10 + 0x38)) &&
         (uVar12 = 0,
         (longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&param_3->field_0x10 + 0x30) + (longlong)iVar4 * 8) ==
         &pUVar9->_padding_)) {
        uVar12 = (uint)(byte)param_3[10].field_0x1b;
      }
    }
    local_res10[0].Value = iVar3;
    if ((iVar3 == -1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StorageIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                           ,0x195,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar8 = (longlong)local_res10[0].Value * 0x10 + *(longlong *)&this->field_0x68;
    if (EVar6 == Persistent) {
      if (((*(byte *)(lVar8 + 0xc) & 1) != 0) &&
         (bVar7 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<3111672766223352219>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                             ,0x19b,"!CachedData.bInitialized"), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(byte *)(lVar8 + 0xc) = *(byte *)(lVar8 + 0xc) | 3;
      *(uint *)(lVar8 + 8) = uVar12;
    }
    else if (EVar6 == Transient) {
      if ((((*(byte *)(lVar8 + 0xc) & 1) != 0) &&
          (pTVar10 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,enum_EComponentMobility::Type,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                     ::Find(&this->field_0xa0,local_res10), pTVar10 != (Type *)0x0)) &&
         (bVar7 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<3111672766223352226>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                             ,0x1a2,
                             "!CachedData.bInitialized || !TransientPreAnimatedStorage.Contains(StorageIndex)"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((*(byte *)(lVar8 + 0xc) & 1) == 0) {
        *(uint *)(lVar8 + 8) = uVar12;
        *(byte *)(lVar8 + 0xc) = *(byte *)(lVar8 + 0xc) | 1;
      }
      else {
        pTVar11 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,enum_EComponentMobility::Type,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                  ::AllocateMemoryForEmplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&>
                            (&this->field_0xa0,local_res10);
        *(int *)pTVar11 = local_res10[0].Value;
        *(uint *)&pTVar11->field_0x4 = uVar12;
      }
    }
  }
LAB_14677fb7d:
  if (param_1->bForcePersist != false) {
    if ((iVar3 == -1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StorageIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                           ,0x200,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pbVar1 = (byte *)((longlong)iVar3 * 0x10 + 0xc + *(longlong *)&this->field_0x68);
    *pbVar1 = *pbVar1 | 2;
  }
  return;
}

// CachePreAnimatedValues @ 14677fc30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedAudioStateTraits<UE::MovieScene::FBoundObjectPreAnimatedStateTraits>_>
::CachePreAnimatedValues
          (TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedAudioStateTraits<UE::MovieScene::FBoundObjectPreAnimatedStateTraits>_>
           *this,FCachePreAnimatedValueParams *param_1,TArrayView<UObject_*_const,int> *param_2)

{
  UObject **ppUVar1;
  byte *pbVar2;
  UObject *pUVar3;
  FPreAnimatedStateExtension *this_00;
  code *pcVar4;
  FPreAnimatedStorageIndex FVar5;
  bool bVar6;
  EPreAnimatedStorageRequirement EVar7;
  longlong lVar8;
  UObject **ppUVar9;
  undefined1 local_res18 [8];
  int local_res20;
  FPreAnimatedStateEntry local_88;
  FObjectKey local_78;
  FWeakObjectPtr local_70;
  FWeakObjectPtr local_68;
  FWeakObjectPtr local_60;
  UObject *local_58;
  UObject *local_50;
  UObject *local_48 [2];
  
  ppUVar9 = param_2->DataPtr;
  ppUVar1 = ppUVar9 + param_2->ArrayNum;
  do {
    if (ppUVar9 == ppUVar1) {
      return;
    }
    pUVar3 = *ppUVar9;
    if ((pUVar3 != (UObject *)0x0) &&
       (local_58 = pUVar3,
       bVar6 = TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedAudioStateTraits<UE::MovieScene::FBoundObjectPreAnimatedStateTraits>_>
               ::ShouldTrackCaptureSource<UObject_*_&>
                         ((TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedAudioStateTraits<UE::MovieScene::FBoundObjectPreAnimatedStateTraits>_>
                           *)&this[-1].field_0x8,CacheIfTracked,&local_58), bVar6)) {
      local_68.ObjectIndex = 0;
      local_68.ObjectSerialNumber = 0;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable(pUVar3);
      }
      local_70.ObjectIndex = 0;
      local_70.ObjectSerialNumber = 0;
      local_50 = pUVar3;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable(pUVar3);
      }
      FWeakObjectPtr::operator=(&local_70,(FObjectPtr)&local_50);
      local_68 = local_70;
      TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedAudioStateTraits<UE::MovieScene::FBoundObjectPreAnimatedStateTraits>_>
      ::GetOrCreateStorageIndex
                ((TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedAudioStateTraits<UE::MovieScene::FBoundObjectPreAnimatedStateTraits>_>
                  *)&this[-1].field_0x8,&local_78);
      FBoundObjectPreAnimatedStateTraits::MakeGroupImpl
                ((FBoundObjectPreAnimatedStateTraits *)&this[-1].field_0xd0,(UObject *)&local_res20)
      ;
      this_00 = *(FPreAnimatedStateExtension **)&this[-1].field_0xb8;
      local_88.GroupHandle.Value = local_res20;
      local_88.ValueHandle.TypeID.TypeID = *(uint *)&this[-1].field_0xc8;
      local_88.ValueHandle.StorageIndex.Value = local_78.ObjectIndex;
      if (this_00->NumRequestsForGlobalState == 0) {
        if ((local_78.ObjectIndex == -1) ||
           (bVar6 = FPreAnimatedStateExtension::MetaDataExists(this_00,&local_88), !bVar6)) {
          local_res18[0] = 0;
          `UE::MovieScene::
          TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedAudioStateTraits<UE::MovieScene::FBoundObjectPreAnimatedStateTraits>_>
          ::TrackCaptureSource'::__l5::<lambda_1>::operator()(local_res18);
        }
      }
      else {
        FPreAnimatedStateExtension::EnsureMetaData(this_00,&local_88);
      }
      FVar5.Value = local_88.ValueHandle.StorageIndex.Value;
      lVar8 = (longlong)local_88.ValueHandle.StorageIndex.Value;
      EVar7 = FPreAnimatedStateExtension::GetStorageRequirement
                        (*(FPreAnimatedStateExtension **)&this[-1].field_0xb8,&local_88);
      bVar6 = TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedAudioStateTraits<UE::MovieScene::FBoundObjectPreAnimatedStateTraits>_>
              ::IsStorageRequirementSatisfied
                        ((TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedAudioStateTraits<UE::MovieScene::FBoundObjectPreAnimatedStateTraits>_>
                          *)&this[-1].field_0x8,FVar5,EVar7);
      if (!bVar6) {
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar3);
        }
        local_60.ObjectIndex = 0;
        local_60.ObjectSerialNumber = 0;
        local_48[0] = pUVar3;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar3);
        }
        FWeakObjectPtr::operator=(&local_60,(FObjectPtr)local_48);
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieSceneAudioSystem.cpp"
                           ,0x69,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_78.ObjectSerialNumber = 0;
        TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedAudioStateTraits<UE::MovieScene::FBoundObjectPreAnimatedStateTraits>_>
        ::AssignPreAnimatedValue
                  ((TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedAudioStateTraits<UE::MovieScene::FBoundObjectPreAnimatedStateTraits>_>
                    *)&this[-1].field_0x8,FVar5,EVar7,
                   (EPreAnimatedAudioStateType *)&local_78.ObjectSerialNumber);
      }
      if (param_1->bForcePersist != false) {
        if ((FVar5.Value == -1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("StorageIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                               ,0x200,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pbVar2 = (byte *)(lVar8 * 0x10 + 0xc + *(longlong *)&this[-1].field_0x70);
        *pbVar2 = *pbVar2 | 2;
      }
    }
    ppUVar9 = ppUVar9 + 1;
  } while( true );
}

// CachePreAnimatedValues @ 14677fe90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FComponentAttachmentPreAnimatedTraits>::
CachePreAnimatedValues
          (TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FComponentAttachmentPreAnimatedTraits>
           *this,FCachePreAnimatedValueParams *param_1,TArrayView<UObject_*_const,int> *param_2)

{
  FWeakObjectPtr *pFVar1;
  FWeakObjectPtr FVar2;
  FPreAnimatedStateExtension *this_00;
  bool bVar3;
  bool bVar4;
  TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex> *pTVar5;
  FWeakObjectPtr *pFVar6;
  FWeakObjectPtr local_res18;
  int local_res20;
  undefined1 local_78 [8];
  FWeakObjectPtr local_70;
  FWeakObjectPtr local_68;
  FWeakObjectPtr local_60;
  FPreAnimatedStateEntry local_58;
  FPreAnimatedStateEntry local_48;
  
  pFVar6 = (FWeakObjectPtr *)param_2->DataPtr;
  pFVar1 = pFVar6 + param_2->ArrayNum;
  do {
    if (pFVar6 == pFVar1) {
      return;
    }
    FVar2 = *pFVar6;
    if (FVar2 == (FWeakObjectPtr)0x0) goto LAB_14678006f;
    if (**(int **)&this[-1].field_0xb8 == 0) {
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable((UObject *)FVar2);
      }
      local_70.ObjectIndex = 0;
      local_70.ObjectSerialNumber = 0;
      local_res18 = FVar2;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable((UObject *)FVar2);
      }
      FWeakObjectPtr::operator=(&local_70,(FObjectPtr)&local_res18);
      local_res18 = local_70;
      FBoundObjectPreAnimatedStateTraits::FindGroupImpl
                ((FBoundObjectPreAnimatedStateTraits *)&this[-1].field_0xd0,(UObject *)&local_res20)
      ;
      pTVar5 = TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                       *)&this[-1].field_0x20,(FObjectKey *)&local_res18);
      if (pTVar5 == (TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex> *)0x0) {
        local_58.GroupHandle.Value = local_res20;
        local_58.ValueHandle.TypeID.TypeID = *(uint *)&this[-1].field_0xc8;
        local_58.ValueHandle.StorageIndex.Value = -1;
      }
      else {
        local_58.ValueHandle.StorageIndex.Value = *(int *)&pTVar5->field_0x8;
        local_58.GroupHandle.Value = local_res20;
        local_58.ValueHandle.TypeID.TypeID = *(uint *)&this[-1].field_0xc8;
        if (local_58.ValueHandle.StorageIndex.Value != -1) {
          bVar3 = FPreAnimatedStateExtension::MetaDataExists
                            (*(FPreAnimatedStateExtension **)&this[-1].field_0xb8,&local_58);
          if (bVar3) {
LAB_14677ff8e:
            bVar3 = true;
          }
          else {
            bVar4 = `UE::MovieScene::
                    TPreAnimatedStateStorage<UE::MovieScene::FComponentAttachmentPreAnimatedTraits>
                    ::ShouldTrackCaptureSource<UObject_*_&>'::__l11::<lambda_1>::operator()
                              (&local_res18);
            bVar3 = false;
            if (bVar4) goto LAB_14677ff8e;
          }
          if (bVar3) goto LAB_14677ff98;
        }
      }
    }
    else {
LAB_14677ff98:
      local_60.ObjectIndex = 0;
      local_60.ObjectSerialNumber = 0;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable((UObject *)FVar2);
      }
      local_68.ObjectIndex = 0;
      local_68.ObjectSerialNumber = 0;
      local_res18 = FVar2;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable((UObject *)FVar2);
      }
      FWeakObjectPtr::operator=(&local_68,(FObjectPtr)&local_res18);
      local_60 = local_68;
      TPreAnimatedStateStorage<UE::MovieScene::FComponentAttachmentPreAnimatedTraits>::
      GetOrCreateStorageIndex
                ((TPreAnimatedStateStorage<UE::MovieScene::FComponentAttachmentPreAnimatedTraits> *)
                 &this[-1].field_0x8,(FObjectKey *)(local_78 + 4));
      FBoundObjectPreAnimatedStateTraits::MakeGroupImpl
                ((FBoundObjectPreAnimatedStateTraits *)&this[-1].field_0xd0,(UObject *)local_78);
      this_00 = *(FPreAnimatedStateExtension **)&this[-1].field_0xb8;
      local_48.GroupHandle.Value = local_78._0_4_;
      local_48.ValueHandle.TypeID.TypeID = *(uint *)&this[-1].field_0xc8;
      local_48.ValueHandle.StorageIndex.Value = local_78._4_4_;
      if (this_00->NumRequestsForGlobalState == 0) {
        if ((local_78._4_4_ == -1) ||
           (bVar3 = FPreAnimatedStateExtension::MetaDataExists(this_00,&local_48), !bVar3)) {
          `UE::MovieScene::
          TPreAnimatedStateStorage<UE::MovieScene::FComponentAttachmentPreAnimatedTraits>::
          TrackCaptureSource'::__l5::<lambda_1>::operator()(&local_res18);
        }
      }
      else {
        FPreAnimatedStateExtension::EnsureMetaData(this_00,&local_48);
      }
      CachePreAnimatedValue
                ((TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FComponentAttachmentPreAnimatedTraits>
                  *)&this[-1].field_0x8,param_1,&local_48,(UObject *)FVar2);
    }
LAB_14678006f:
    pFVar6 = pFVar6 + 1;
  } while( true );
}

// CachePreAnimatedValues @ 1467800a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedCameraComponentShakeTraits>::
CachePreAnimatedValues
          (TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedCameraComponentShakeTraits>
           *this,FCachePreAnimatedValueParams *param_1,TArrayView<UObject_*_const,int> *param_2)

{
  FWeakObjectPtr *pFVar1;
  FWeakObjectPtr FVar2;
  FPreAnimatedStateExtension *this_00;
  bool bVar3;
  bool bVar4;
  TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex> *pTVar5;
  FWeakObjectPtr *pFVar6;
  FWeakObjectPtr local_res18;
  int local_res20;
  undefined1 local_78 [8];
  FWeakObjectPtr local_70;
  FWeakObjectPtr local_68;
  FWeakObjectPtr local_60;
  FPreAnimatedStateEntry local_58;
  FPreAnimatedStateEntry local_48;
  
  pFVar6 = (FWeakObjectPtr *)param_2->DataPtr;
  pFVar1 = pFVar6 + param_2->ArrayNum;
  do {
    if (pFVar6 == pFVar1) {
      return;
    }
    FVar2 = *pFVar6;
    if (FVar2 == (FWeakObjectPtr)0x0) goto LAB_14678027f;
    if (**(int **)&this[-1].field_0xb8 == 0) {
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable((UObject *)FVar2);
      }
      local_70.ObjectIndex = 0;
      local_70.ObjectSerialNumber = 0;
      local_res18 = FVar2;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable((UObject *)FVar2);
      }
      FWeakObjectPtr::operator=(&local_70,(FObjectPtr)&local_res18);
      local_res18 = local_70;
      FBoundObjectPreAnimatedStateTraits::FindGroupImpl
                ((FBoundObjectPreAnimatedStateTraits *)&this[-1].field_0xd0,(UObject *)&local_res20)
      ;
      pTVar5 = TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                       *)&this[-1].field_0x20,(FObjectKey *)&local_res18);
      if (pTVar5 == (TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex> *)0x0) {
        local_58.GroupHandle.Value = local_res20;
        local_58.ValueHandle.TypeID.TypeID = *(uint *)&this[-1].field_0xc8;
        local_58.ValueHandle.StorageIndex.Value = -1;
      }
      else {
        local_58.ValueHandle.StorageIndex.Value = *(int *)&pTVar5->field_0x8;
        local_58.GroupHandle.Value = local_res20;
        local_58.ValueHandle.TypeID.TypeID = *(uint *)&this[-1].field_0xc8;
        if (local_58.ValueHandle.StorageIndex.Value != -1) {
          bVar3 = FPreAnimatedStateExtension::MetaDataExists
                            (*(FPreAnimatedStateExtension **)&this[-1].field_0xb8,&local_58);
          if (bVar3) {
LAB_14678019e:
            bVar3 = true;
          }
          else {
            bVar4 = `UE::MovieScene::
                    TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraComponentShakeTraits>
                    ::ShouldTrackCaptureSource<UObject_*_&>'::__l11::<lambda_1>::operator()
                              (&local_res18);
            bVar3 = false;
            if (bVar4) goto LAB_14678019e;
          }
          if (bVar3) goto LAB_1467801a8;
        }
      }
    }
    else {
LAB_1467801a8:
      local_60.ObjectIndex = 0;
      local_60.ObjectSerialNumber = 0;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable((UObject *)FVar2);
      }
      local_68.ObjectIndex = 0;
      local_68.ObjectSerialNumber = 0;
      local_res18 = FVar2;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable((UObject *)FVar2);
      }
      FWeakObjectPtr::operator=(&local_68,(FObjectPtr)&local_res18);
      local_60 = local_68;
      TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraComponentShakeTraits>::
      GetOrCreateStorageIndex
                ((TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraComponentShakeTraits> *
                 )&this[-1].field_0x8,(FObjectKey *)(local_78 + 4));
      FBoundObjectPreAnimatedStateTraits::MakeGroupImpl
                ((FBoundObjectPreAnimatedStateTraits *)&this[-1].field_0xd0,(UObject *)local_78);
      this_00 = *(FPreAnimatedStateExtension **)&this[-1].field_0xb8;
      local_48.GroupHandle.Value = local_78._0_4_;
      local_48.ValueHandle.TypeID.TypeID = *(uint *)&this[-1].field_0xc8;
      local_48.ValueHandle.StorageIndex.Value = local_78._4_4_;
      if (this_00->NumRequestsForGlobalState == 0) {
        if ((local_78._4_4_ == -1) ||
           (bVar3 = FPreAnimatedStateExtension::MetaDataExists(this_00,&local_48), !bVar3)) {
          `UE::MovieScene::
          TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraComponentShakeTraits>::
          TrackCaptureSource'::__l5::<lambda_1>::operator()(&local_res18);
        }
      }
      else {
        FPreAnimatedStateExtension::EnsureMetaData(this_00,&local_48);
      }
      CachePreAnimatedValue
                ((TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedCameraComponentShakeTraits>
                  *)&this[-1].field_0x8,param_1,&local_48,(UObject *)FVar2);
    }
LAB_14678027f:
    pFVar6 = pFVar6 + 1;
  } while( true );
}

// CachePreAnimatedValues @ 1467802b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedCameraShakeTraits>
::CachePreAnimatedValues
          (TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedCameraShakeTraits>
           *this,FCachePreAnimatedValueParams *param_1,TArrayView<UObject_*_const,int> *param_2)

{
  FWeakObjectPtr *pFVar1;
  FWeakObjectPtr FVar2;
  FPreAnimatedStateExtension *this_00;
  bool bVar3;
  bool bVar4;
  TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex> *pTVar5;
  FWeakObjectPtr *pFVar6;
  FWeakObjectPtr local_res18;
  int local_res20;
  undefined1 local_78 [8];
  FWeakObjectPtr local_70;
  FWeakObjectPtr local_68;
  FWeakObjectPtr local_60;
  FPreAnimatedStateEntry local_58;
  FPreAnimatedStateEntry local_48;
  
  pFVar6 = (FWeakObjectPtr *)param_2->DataPtr;
  pFVar1 = pFVar6 + param_2->ArrayNum;
  do {
    if (pFVar6 == pFVar1) {
      return;
    }
    FVar2 = *pFVar6;
    if (FVar2 == (FWeakObjectPtr)0x0) goto LAB_14678048f;
    if (**(int **)&this[-1].field_0xb8 == 0) {
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable((UObject *)FVar2);
      }
      local_70.ObjectIndex = 0;
      local_70.ObjectSerialNumber = 0;
      local_res18 = FVar2;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable((UObject *)FVar2);
      }
      FWeakObjectPtr::operator=(&local_70,(FObjectPtr)&local_res18);
      local_res18 = local_70;
      FBoundObjectPreAnimatedStateTraits::FindGroupImpl
                ((FBoundObjectPreAnimatedStateTraits *)&this[-1].field_0xd0,(UObject *)&local_res20)
      ;
      pTVar5 = TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                       *)&this[-1].field_0x20,(FObjectKey *)&local_res18);
      if (pTVar5 == (TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex> *)0x0) {
        local_58.GroupHandle.Value = local_res20;
        local_58.ValueHandle.TypeID.TypeID = *(uint *)&this[-1].field_0xc8;
        local_58.ValueHandle.StorageIndex.Value = -1;
      }
      else {
        local_58.ValueHandle.StorageIndex.Value = *(int *)&pTVar5->field_0x8;
        local_58.GroupHandle.Value = local_res20;
        local_58.ValueHandle.TypeID.TypeID = *(uint *)&this[-1].field_0xc8;
        if (local_58.ValueHandle.StorageIndex.Value != -1) {
          bVar3 = FPreAnimatedStateExtension::MetaDataExists
                            (*(FPreAnimatedStateExtension **)&this[-1].field_0xb8,&local_58);
          if (bVar3) {
LAB_1467803ae:
            bVar3 = true;
          }
          else {
            bVar4 = `UE::MovieScene::
                    TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraShakeTraits>::
                    ShouldTrackCaptureSource<UObject_*_&>'::__l11::<lambda_1>::operator()
                              (&local_res18);
            bVar3 = false;
            if (bVar4) goto LAB_1467803ae;
          }
          if (bVar3) goto LAB_1467803b8;
        }
      }
    }
    else {
LAB_1467803b8:
      local_60.ObjectIndex = 0;
      local_60.ObjectSerialNumber = 0;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable((UObject *)FVar2);
      }
      local_68.ObjectIndex = 0;
      local_68.ObjectSerialNumber = 0;
      local_res18 = FVar2;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable((UObject *)FVar2);
      }
      FWeakObjectPtr::operator=(&local_68,(FObjectPtr)&local_res18);
      local_60 = local_68;
      TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraShakeTraits>::
      GetOrCreateStorageIndex
                ((TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraShakeTraits> *)
                 &this[-1].field_0x8,(FObjectKey *)(local_78 + 4));
      FBoundObjectPreAnimatedStateTraits::MakeGroupImpl
                ((FBoundObjectPreAnimatedStateTraits *)&this[-1].field_0xd0,(UObject *)local_78);
      this_00 = *(FPreAnimatedStateExtension **)&this[-1].field_0xb8;
      local_48.GroupHandle.Value = local_78._0_4_;
      local_48.ValueHandle.TypeID.TypeID = *(uint *)&this[-1].field_0xc8;
      local_48.ValueHandle.StorageIndex.Value = local_78._4_4_;
      if (this_00->NumRequestsForGlobalState == 0) {
        if ((local_78._4_4_ == -1) ||
           (bVar3 = FPreAnimatedStateExtension::MetaDataExists(this_00,&local_48), !bVar3)) {
          `UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraShakeTraits>::
          TrackCaptureSource'::__l5::<lambda_1>::operator()(&local_res18);
        }
      }
      else {
        FPreAnimatedStateExtension::EnsureMetaData(this_00,&local_48);
      }
      CachePreAnimatedValue
                ((TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedCameraShakeTraits>
                  *)&this[-1].field_0x8,param_1,&local_48,(UObject *)FVar2);
    }
LAB_14678048f:
    pFVar6 = pFVar6 + 1;
  } while( true );
}

// CachePreAnimatedValues @ 1467804c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedCameraSourceShakeTraits>::
CachePreAnimatedValues
          (TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedCameraSourceShakeTraits>
           *this,FCachePreAnimatedValueParams *param_1,TArrayView<UObject_*_const,int> *param_2)

{
  FWeakObjectPtr *pFVar1;
  FWeakObjectPtr FVar2;
  FPreAnimatedStateExtension *this_00;
  bool bVar3;
  bool bVar4;
  TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex> *pTVar5;
  FWeakObjectPtr *pFVar6;
  FWeakObjectPtr local_res18;
  int local_res20;
  undefined1 local_78 [8];
  FWeakObjectPtr local_70;
  FWeakObjectPtr local_68;
  FWeakObjectPtr local_60;
  FPreAnimatedStateEntry local_58;
  FPreAnimatedStateEntry local_48;
  
  pFVar6 = (FWeakObjectPtr *)param_2->DataPtr;
  pFVar1 = pFVar6 + param_2->ArrayNum;
  do {
    if (pFVar6 == pFVar1) {
      return;
    }
    FVar2 = *pFVar6;
    if (FVar2 == (FWeakObjectPtr)0x0) goto LAB_14678069f;
    if (**(int **)&this[-1].field_0xb8 == 0) {
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable((UObject *)FVar2);
      }
      local_70.ObjectIndex = 0;
      local_70.ObjectSerialNumber = 0;
      local_res18 = FVar2;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable((UObject *)FVar2);
      }
      FWeakObjectPtr::operator=(&local_70,(FObjectPtr)&local_res18);
      local_res18 = local_70;
      FBoundObjectPreAnimatedStateTraits::FindGroupImpl
                ((FBoundObjectPreAnimatedStateTraits *)&this[-1].field_0xd0,(UObject *)&local_res20)
      ;
      pTVar5 = TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                       *)&this[-1].field_0x20,(FObjectKey *)&local_res18);
      if (pTVar5 == (TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex> *)0x0) {
        local_58.GroupHandle.Value = local_res20;
        local_58.ValueHandle.TypeID.TypeID = *(uint *)&this[-1].field_0xc8;
        local_58.ValueHandle.StorageIndex.Value = -1;
      }
      else {
        local_58.ValueHandle.StorageIndex.Value = *(int *)&pTVar5->field_0x8;
        local_58.GroupHandle.Value = local_res20;
        local_58.ValueHandle.TypeID.TypeID = *(uint *)&this[-1].field_0xc8;
        if (local_58.ValueHandle.StorageIndex.Value != -1) {
          bVar3 = FPreAnimatedStateExtension::MetaDataExists
                            (*(FPreAnimatedStateExtension **)&this[-1].field_0xb8,&local_58);
          if (bVar3) {
LAB_1467805be:
            bVar3 = true;
          }
          else {
            bVar4 = `UE::MovieScene::
                    TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraSourceShakeTraits>::
                    ShouldTrackCaptureSource<UObject_*_&>'::__l11::<lambda_1>::operator()
                              (&local_res18);
            bVar3 = false;
            if (bVar4) goto LAB_1467805be;
          }
          if (bVar3) goto LAB_1467805c8;
        }
      }
    }
    else {
LAB_1467805c8:
      local_60.ObjectIndex = 0;
      local_60.ObjectSerialNumber = 0;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable((UObject *)FVar2);
      }
      local_68.ObjectIndex = 0;
      local_68.ObjectSerialNumber = 0;
      local_res18 = FVar2;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable((UObject *)FVar2);
      }
      FWeakObjectPtr::operator=(&local_68,(FObjectPtr)&local_res18);
      local_60 = local_68;
      TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraSourceShakeTraits>::
      GetOrCreateStorageIndex
                ((TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraSourceShakeTraits> *)
                 &this[-1].field_0x8,(FObjectKey *)(local_78 + 4));
      FBoundObjectPreAnimatedStateTraits::MakeGroupImpl
                ((FBoundObjectPreAnimatedStateTraits *)&this[-1].field_0xd0,(UObject *)local_78);
      this_00 = *(FPreAnimatedStateExtension **)&this[-1].field_0xb8;
      local_48.GroupHandle.Value = local_78._0_4_;
      local_48.ValueHandle.TypeID.TypeID = *(uint *)&this[-1].field_0xc8;
      local_48.ValueHandle.StorageIndex.Value = local_78._4_4_;
      if (this_00->NumRequestsForGlobalState == 0) {
        if ((local_78._4_4_ == -1) ||
           (bVar3 = FPreAnimatedStateExtension::MetaDataExists(this_00,&local_48), !bVar3)) {
          `UE::MovieScene::
          TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCameraSourceShakeTraits>::
          TrackCaptureSource'::__l5::<lambda_1>::operator()(&local_res18);
        }
      }
      else {
        FPreAnimatedStateExtension::EnsureMetaData(this_00,&local_48);
      }
      CachePreAnimatedValue
                ((TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedCameraSourceShakeTraits>
                  *)&this[-1].field_0x8,param_1,&local_48,(UObject *)FVar2);
    }
LAB_14678069f:
    pFVar6 = pFVar6 + 1;
  } while( true );
}

// CachePreAnimatedValues @ 1467806d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedMobilityTraits>::
CachePreAnimatedValues
          (TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedMobilityTraits> *this,
          FCachePreAnimatedValueParams *param_1,TArrayView<UObject_*_const,int> *param_2)

{
  FWeakObjectPtr *pFVar1;
  FWeakObjectPtr FVar2;
  FPreAnimatedStateExtension *this_00;
  bool bVar3;
  bool bVar4;
  TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex> *pTVar5;
  FWeakObjectPtr *pFVar6;
  FWeakObjectPtr local_res18;
  int local_res20;
  undefined1 local_78 [8];
  FWeakObjectPtr local_70;
  FWeakObjectPtr local_68;
  FWeakObjectPtr local_60;
  FPreAnimatedStateEntry local_58;
  FPreAnimatedStateEntry local_48;
  
  pFVar6 = (FWeakObjectPtr *)param_2->DataPtr;
  pFVar1 = pFVar6 + param_2->ArrayNum;
  do {
    if (pFVar6 == pFVar1) {
      return;
    }
    FVar2 = *pFVar6;
    if (FVar2 == (FWeakObjectPtr)0x0) goto LAB_1467808af;
    if (**(int **)&this[-1].field_0xb8 == 0) {
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable((UObject *)FVar2);
      }
      local_70.ObjectIndex = 0;
      local_70.ObjectSerialNumber = 0;
      local_res18 = FVar2;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable((UObject *)FVar2);
      }
      FWeakObjectPtr::operator=(&local_70,(FObjectPtr)&local_res18);
      local_res18 = local_70;
      FBoundObjectPreAnimatedStateTraits::FindGroupImpl
                ((FBoundObjectPreAnimatedStateTraits *)&this[-1].field_0xd0,(UObject *)&local_res20)
      ;
      pTVar5 = TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                       *)&this[-1].field_0x20,(FObjectKey *)&local_res18);
      if (pTVar5 == (TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex> *)0x0) {
        local_58.GroupHandle.Value = local_res20;
        local_58.ValueHandle.TypeID.TypeID = *(uint *)&this[-1].field_0xc8;
        local_58.ValueHandle.StorageIndex.Value = -1;
      }
      else {
        local_58.ValueHandle.StorageIndex.Value = *(int *)&pTVar5->field_0x8;
        local_58.GroupHandle.Value = local_res20;
        local_58.ValueHandle.TypeID.TypeID = *(uint *)&this[-1].field_0xc8;
        if (local_58.ValueHandle.StorageIndex.Value != -1) {
          bVar3 = FPreAnimatedStateExtension::MetaDataExists
                            (*(FPreAnimatedStateExtension **)&this[-1].field_0xb8,&local_58);
          if (bVar3) {
LAB_1467807ce:
            bVar3 = true;
          }
          else {
            bVar4 = `UE::MovieScene::
                    TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedMobilityTraits>::
                    ShouldTrackCaptureSource<UObject_*_&>'::__l11::<lambda_1>::operator()
                              (&local_res18);
            bVar3 = false;
            if (bVar4) goto LAB_1467807ce;
          }
          if (bVar3) goto LAB_1467807d8;
        }
      }
    }
    else {
LAB_1467807d8:
      local_60.ObjectIndex = 0;
      local_60.ObjectSerialNumber = 0;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable((UObject *)FVar2);
      }
      local_68.ObjectIndex = 0;
      local_68.ObjectSerialNumber = 0;
      local_res18 = FVar2;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable((UObject *)FVar2);
      }
      FWeakObjectPtr::operator=(&local_68,(FObjectPtr)&local_res18);
      local_60 = local_68;
      TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedMobilityTraits>::GetOrCreateStorageIndex
                ((TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedMobilityTraits> *)
                 &this[-1].field_0x8,(FObjectKey *)(local_78 + 4));
      FBoundObjectPreAnimatedStateTraits::MakeGroupImpl
                ((FBoundObjectPreAnimatedStateTraits *)&this[-1].field_0xd0,(UObject *)local_78);
      this_00 = *(FPreAnimatedStateExtension **)&this[-1].field_0xb8;
      local_48.GroupHandle.Value = local_78._0_4_;
      local_48.ValueHandle.TypeID.TypeID = *(uint *)&this[-1].field_0xc8;
      local_48.ValueHandle.StorageIndex.Value = local_78._4_4_;
      if (this_00->NumRequestsForGlobalState == 0) {
        if ((local_78._4_4_ == -1) ||
           (bVar3 = FPreAnimatedStateExtension::MetaDataExists(this_00,&local_48), !bVar3)) {
          `UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedMobilityTraits>::
          TrackCaptureSource'::__l5::<lambda_1>::operator()(&local_res18);
        }
      }
      else {
        FPreAnimatedStateExtension::EnsureMetaData(this_00,&local_48);
      }
      CachePreAnimatedValue
                ((TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedMobilityTraits>
                  *)&this[-1].field_0x8,param_1,&local_48,(UObject *)FVar2);
    }
LAB_1467808af:
    pFVar6 = pFVar6 + 1;
  } while( true );
}

// AsObjectStorage @ 14681d7d0

IPreAnimatedObjectEntityStorage * __thiscall
UE::MovieScene::
TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedSkeletalAnimationAnimInstanceTraits>
::AsObjectStorage(TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedSkeletalAnimationAnimInstanceTraits>
                  *this)

{
  IPreAnimatedObjectEntityStorage *pIVar1;
  
  pIVar1 = (IPreAnimatedObjectEntityStorage *)&this->field_0xd8;
  if (this == (TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedSkeletalAnimationAnimInstanceTraits>
               *)0x0) {
    pIVar1 = (IPreAnimatedObjectEntityStorage *)0x0;
  }
  return pIVar1;
}

// AsObjectStorage @ 14681d7f0

IPreAnimatedObjectEntityStorage * __thiscall
UE::MovieScene::
TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedSkeletalAnimationMontageTraits>::
AsObjectStorage(TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedSkeletalAnimationMontageTraits>
                *this)

{
  IPreAnimatedObjectEntityStorage *pIVar1;
  
  pIVar1 = (IPreAnimatedObjectEntityStorage *)&this->field_0xd8;
  if (this == (TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedSkeletalAnimationMontageTraits>
               *)0x0) {
    pIVar1 = (IPreAnimatedObjectEntityStorage *)0x0;
  }
  return pIVar1;
}

// AsObjectStorage @ 14681d810

IPreAnimatedObjectEntityStorage * __thiscall
UE::MovieScene::
TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedSkeletalAnimationTraits>::
AsObjectStorage(TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedSkeletalAnimationTraits>
                *this)

{
  IPreAnimatedObjectEntityStorage *pIVar1;
  
  pIVar1 = (IPreAnimatedObjectEntityStorage *)&this->field_0xd8;
  if (this == (TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedSkeletalAnimationTraits>
               *)0x0) {
    pIVar1 = (IPreAnimatedObjectEntityStorage *)0x0;
  }
  return pIVar1;
}

// BeginTrackingEntities @ 14681ddb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedSkeletalAnimationAnimInstanceTraits>
::BeginTrackingEntities
          (TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedSkeletalAnimationAnimInstanceTraits>
           *this,FPreAnimatedTrackerParams *param_1,
          TRead<UE::MovieScene::FMovieSceneEntityID> param_2,
          TRead<UE::MovieScene::FRootInstanceHandle> param_3,TRead<UObject_*> param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  UObject *pUVar4;
  int iVar5;
  TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex> *pTVar6;
  longlong lVar7;
  byte bVar8;
  int local_res10 [2];
  FObjectKey local_b8;
  undefined1 local_b0 [8];
  FWeakObjectPtr local_a8;
  FWeakObjectPtr local_a0;
  undefined4 local_98;
  FPreAnimatedStateEntry local_90;
  TPairInitializer<FObjectKey_const_&,UE::MovieScene::FPreAnimatedStorageIndex_const_&> local_80;
  FPreAnimatedEntityCaptureSource *local_70;
  longlong local_68;
  FSparseArrayAllocationInfo local_60;
  FObjectKey *local_50;
  int *local_48;
  
  bVar2 = param_1->bWantsRestoreState;
  iVar5 = param_1->Num;
  if ((((*(FPreAnimatedStateExtension **)&this[-1].field_0xb8)->NumRequestsForGlobalState != 0) ||
      (bVar2 != false)) &&
     (local_70 = FPreAnimatedStateExtension::GetOrCreateEntityMetaData
                           (*(FPreAnimatedStateExtension **)&this[-1].field_0xb8), 0 < iVar5)) {
    lVar7 = 0;
    bVar8 = local_98._1_1_;
    local_68 = (longlong)iVar5;
    do {
      local_b8.ObjectIndex = 0;
      local_b8.ObjectSerialNumber = 0;
      pUVar4 = *(UObject **)((longlong)param_4 + lVar7 * 8);
      if (pUVar4 != (UObject *)0x0) {
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar4);
        }
        local_a8.ObjectIndex = 0;
        local_a8.ObjectSerialNumber = 0;
        local_80.Value = (FPreAnimatedStorageIndex *)pUVar4;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar4);
        }
        FWeakObjectPtr::operator=(&local_a8,(FObjectPtr)&local_80.Value);
        local_b8.ObjectIndex = local_a8.ObjectIndex;
        local_b8.ObjectSerialNumber = local_a8.ObjectSerialNumber;
      }
      FBoundObjectPreAnimatedStateTraits::MakeGroupImpl
                ((FBoundObjectPreAnimatedStateTraits *)&this[-1].field_0xd0,(UObject *)local_b0);
      pTVar6 = TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                       *)&this[-1].field_0x20,&local_b8);
      if ((pTVar6 == (TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex> *)0x0) ||
         (local_res10[0] = *(int *)&pTVar6->field_0x8, local_res10[0] == -1)) {
        local_res10[0] = -1;
        local_a0.ObjectIndex = local_b8.ObjectIndex;
        local_a0.ObjectSerialNumber = local_b8.ObjectSerialNumber;
        local_98 = CONCAT22(local_98._2_2_,CONCAT11(bVar8,(undefined1)local_98)) & 0xfffffcff;
        if (*(int *)&this[-1].field_0xa4 == 0) {
          iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0xc,4,1,(ForAnyElementType *)&this[-1].field_0x70,
                             (int *)&this[-1].field_0x78,(int *)&this[-1].field_0x7c);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&this[-1].field_0x80,false);
        }
        else {
          iVar5 = *(int *)&this[-1].field_0xa0;
          iVar1 = *(int *)&this[-1].field_0xa4 + -1;
          iVar3 = *(int *)(*(longlong *)&this[-1].field_0x70 + 4 + (longlong)iVar5 * 0xc);
          *(int *)&this[-1].field_0xa0 = iVar3;
          *(int *)&this[-1].field_0xa4 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)(*(longlong *)&this[-1].field_0x70 + (longlong)iVar3 * 0xc) = 0xffffffff;
          }
        }
        TSparseArrayBase<12,4,FDefaultSparseArrayAllocator>::AllocateIndex
                  ((TSparseArrayBase<12,4,FDefaultSparseArrayAllocator> *)&this[-1].field_0x70,
                   &local_60,iVar5);
        if (local_60.Pointer != (FWeakObjectPtr *)0x0) {
          *(FWeakObjectPtr *)local_60.Pointer = local_a0;
          ((FWeakObjectPtr *)((longlong)local_60.Pointer + 8))->ObjectIndex = local_98;
        }
        local_res10[0] = local_60.Index;
        local_50 = &local_b8;
        local_48 = local_res10;
        TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FObjectKey_const_&,UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                  ((TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                    *)&this[-1].field_0x20,&local_80,(bool *)&local_50);
        bVar8 = bVar8 & 0xfc;
      }
      local_90.GroupHandle.Value = local_b0._0_4_;
      local_90.ValueHandle.TypeID.TypeID = *(uint *)&this[-1].field_0xc8;
      local_90.ValueHandle.StorageIndex.Value = local_res10[0];
      FPreAnimatedEntityCaptureSource::BeginTrackingEntity
                (local_70,&local_90,(FMovieSceneEntityID)*(ushort *)param_2,
                 *(FRootInstanceHandle *)param_3,bVar2);
      lVar7 = lVar7 + 1;
      param_3 = (TRead<UE::MovieScene::FRootInstanceHandle>)((longlong)param_3 + 4);
      param_2 = (TRead<UE::MovieScene::FMovieSceneEntityID>)((longlong)param_2 + 2);
    } while (lVar7 < local_68);
  }
  return;
}

// BeginTrackingEntities @ 14681e010

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedSkeletalAnimationMontageTraits>::
BeginTrackingEntities
          (TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedSkeletalAnimationMontageTraits>
           *this,FPreAnimatedTrackerParams *param_1,
          TRead<UE::MovieScene::FMovieSceneEntityID> param_2,
          TRead<UE::MovieScene::FRootInstanceHandle> param_3,TRead<UObject_*> param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  UObject *pUVar4;
  FWeakObjectPtr FVar5;
  int iVar6;
  TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex> *pTVar7;
  longlong lVar8;
  int local_res10 [2];
  FObjectKey local_b8;
  undefined1 local_b0 [8];
  FWeakObjectPtr local_a8;
  FPreAnimatedStateEntry local_a0;
  FWeakObjectPtr local_90;
  FWeakObjectPtr FStack_88;
  int local_80;
  uint uStack_7c;
  TPairInitializer<FObjectKey_const_&,UE::MovieScene::FPreAnimatedStorageIndex_const_&> local_78;
  FPreAnimatedEntityCaptureSource *local_68;
  longlong local_60;
  FSparseArrayAllocationInfo local_58;
  FObjectKey *local_48;
  int *local_40;
  
  bVar2 = param_1->bWantsRestoreState;
  iVar6 = param_1->Num;
  if ((((*(FPreAnimatedStateExtension **)&this[-1].field_0xb8)->NumRequestsForGlobalState != 0) ||
      (bVar2 != false)) &&
     (local_68 = FPreAnimatedStateExtension::GetOrCreateEntityMetaData
                           (*(FPreAnimatedStateExtension **)&this[-1].field_0xb8), 0 < iVar6)) {
    lVar8 = 0;
    local_60 = (longlong)iVar6;
    do {
      local_b8.ObjectIndex = 0;
      local_b8.ObjectSerialNumber = 0;
      pUVar4 = *(UObject **)((longlong)param_4 + lVar8 * 8);
      if (pUVar4 != (UObject *)0x0) {
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar4);
        }
        local_a8.ObjectIndex = 0;
        local_a8.ObjectSerialNumber = 0;
        local_78.Value = (FPreAnimatedStorageIndex *)pUVar4;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar4);
        }
        FWeakObjectPtr::operator=(&local_a8,(FObjectPtr)&local_78.Value);
        local_b8.ObjectIndex = local_a8.ObjectIndex;
        local_b8.ObjectSerialNumber = local_a8.ObjectSerialNumber;
      }
      FBoundObjectPreAnimatedStateTraits::MakeGroupImpl
                ((FBoundObjectPreAnimatedStateTraits *)&this[-1].field_0xd0,(UObject *)local_b0);
      pTVar7 = TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                       *)&this[-1].field_0x20,&local_b8);
      if (pTVar7 == (TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex> *)0x0) {
        local_res10[0] = -1;
LAB_14681e117:
        uStack_7c = uStack_7c & 0xfffffffc;
        local_90.ObjectIndex = local_b8.ObjectIndex;
        local_90.ObjectSerialNumber = local_b8.ObjectSerialNumber;
        FStack_88.ObjectIndex = 0;
        FStack_88.ObjectSerialNumber = 0;
        if (*(int *)&this[-1].field_0xa4 == 0) {
          iVar6 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x18,4,1,(ForAnyElementType *)&this[-1].field_0x70,
                             (int *)&this[-1].field_0x78,(int *)&this[-1].field_0x7c);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&this[-1].field_0x80,false);
        }
        else {
          iVar6 = *(int *)&this[-1].field_0xa0;
          iVar1 = *(int *)&this[-1].field_0xa4 + -1;
          iVar3 = *(int *)(*(longlong *)&this[-1].field_0x70 + 4 + (longlong)iVar6 * 0x18);
          *(int *)&this[-1].field_0xa0 = iVar3;
          *(int *)&this[-1].field_0xa4 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)(*(longlong *)&this[-1].field_0x70 + (longlong)iVar3 * 0x18) = 0xffffffff
            ;
          }
        }
        TSparseArrayBase<24,4,FDefaultSparseArrayAllocator>::AllocateIndex
                  ((TSparseArrayBase<24,4,FDefaultSparseArrayAllocator> *)&this[-1].field_0x70,
                   &local_58,iVar6);
        if (local_58.Pointer != (FWeakObjectPtr *)0x0) {
          FVar5.ObjectSerialNumber = uStack_7c;
          FVar5.ObjectIndex = local_80;
          *(FWeakObjectPtr *)local_58.Pointer = local_90;
          *(FWeakObjectPtr *)((longlong)local_58.Pointer + 8) = FStack_88;
          *(FWeakObjectPtr *)((longlong)local_58.Pointer + 0x10) = FVar5;
        }
        local_res10[0] = local_58.Index;
        local_48 = &local_b8;
        local_40 = local_res10;
        TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FObjectKey_const_&,UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                  ((TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                    *)&this[-1].field_0x20,&local_78,(bool *)&local_48);
      }
      else {
        local_res10[0] = *(int *)&pTVar7->field_0x8;
        if (local_res10[0] == -1) goto LAB_14681e117;
      }
      local_a0.GroupHandle.Value = local_b0._0_4_;
      local_a0.ValueHandle.TypeID.TypeID = *(uint *)&this[-1].field_0xc8;
      local_a0.ValueHandle.StorageIndex.Value = local_res10[0];
      FPreAnimatedEntityCaptureSource::BeginTrackingEntity
                (local_68,&local_a0,(FMovieSceneEntityID)*(ushort *)param_2,
                 *(FRootInstanceHandle *)param_3,bVar2);
      lVar8 = lVar8 + 1;
      param_3 = (TRead<UE::MovieScene::FRootInstanceHandle>)((longlong)param_3 + 4);
      param_2 = (TRead<UE::MovieScene::FMovieSceneEntityID>)((longlong)param_2 + 2);
    } while (lVar8 < local_60);
  }
  return;
}

// BeginTrackingEntities @ 14681e270

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedSkeletalAnimationTraits>::
BeginTrackingEntities
          (TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedSkeletalAnimationTraits>
           *this,FPreAnimatedTrackerParams *param_1,
          TRead<UE::MovieScene::FMovieSceneEntityID> param_2,
          TRead<UE::MovieScene::FRootInstanceHandle> param_3,TRead<UObject_*> param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  UObject *pUVar4;
  FObjectKey FVar5;
  int iVar6;
  TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex> *pTVar7;
  longlong lVar8;
  int local_res10 [2];
  FObjectKey local_d8;
  undefined1 local_d0 [8];
  FWeakObjectPtr local_c8;
  FPreAnimatedStateEntry local_c0;
  TPairInitializer<FObjectKey_const_&,UE::MovieScene::FPreAnimatedStorageIndex_const_&> local_b0;
  FPreAnimatedEntityCaptureSource *local_a0;
  longlong local_98;
  FSparseArrayAllocationInfo local_90;
  FObjectKey *local_80;
  int *local_78;
  int local_68;
  undefined8 local_64;
  
  bVar2 = param_1->bWantsRestoreState;
  iVar6 = param_1->Num;
  if ((((*(FPreAnimatedStateExtension **)&this[-1].field_0xb8)->NumRequestsForGlobalState != 0) ||
      (bVar2 != false)) &&
     (local_a0 = FPreAnimatedStateExtension::GetOrCreateEntityMetaData
                           (*(FPreAnimatedStateExtension **)&this[-1].field_0xb8), 0 < iVar6)) {
    lVar8 = 0;
    local_98 = (longlong)iVar6;
    do {
      local_d8.ObjectIndex = 0;
      local_d8.ObjectSerialNumber = 0;
      pUVar4 = *(UObject **)((longlong)param_4 + lVar8 * 8);
      if (pUVar4 != (UObject *)0x0) {
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar4);
        }
        local_c8.ObjectIndex = 0;
        local_c8.ObjectSerialNumber = 0;
        local_b0.Value = (FPreAnimatedStorageIndex *)pUVar4;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar4);
        }
        FWeakObjectPtr::operator=(&local_c8,(FObjectPtr)&local_b0.Value);
        local_d8.ObjectIndex = local_c8.ObjectIndex;
        local_d8.ObjectSerialNumber = local_c8.ObjectSerialNumber;
      }
      FBoundObjectPreAnimatedStateTraits::MakeGroupImpl
                ((FBoundObjectPreAnimatedStateTraits *)&this[-1].field_0xd0,(UObject *)local_d0);
      pTVar7 = TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                       *)&this[-1].field_0x20,&local_d8);
      FVar5 = local_d8;
      if (pTVar7 == (TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex> *)0x0) {
        local_res10[0] = -1;
LAB_14681e386:
        local_64 = 0;
        if (*(int *)&this[-1].field_0xa4 == 0) {
          iVar6 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x30,8,1,(ForAnyElementType *)&this[-1].field_0x70,
                             (int *)&this[-1].field_0x78,(int *)&this[-1].field_0x7c);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&this[-1].field_0x80,false);
        }
        else {
          iVar6 = *(int *)&this[-1].field_0xa0;
          iVar1 = *(int *)&this[-1].field_0xa4 + -1;
          iVar3 = *(int *)(*(longlong *)&this[-1].field_0x70 + 4 + (longlong)iVar6 * 0x30);
          *(int *)&this[-1].field_0xa0 = iVar3;
          *(int *)&this[-1].field_0xa4 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)(*(longlong *)&this[-1].field_0x70 + (longlong)iVar3 * 0x30) = 0xffffffff
            ;
          }
        }
        TSparseArrayBase<48,8,FDefaultSparseArrayAllocator>::AllocateIndex
                  ((TSparseArrayBase<48,8,FDefaultSparseArrayAllocator> *)&this[-1].field_0x70,
                   &local_90,iVar6);
        if (local_90.Pointer != (FWeakObjectPtr *)0x0) {
          *(FObjectKey *)local_90.Pointer = FVar5;
          ((FWeakObjectPtr *)((longlong)local_90.Pointer + 8))->ObjectIndex = local_68;
          *(undefined8 *)&((FWeakObjectPtr *)((longlong)local_90.Pointer + 8))->ObjectSerialNumber =
               local_64;
          ((FWeakObjectPtr *)((longlong)local_90.Pointer + 0x18))->ObjectIndex = 0;
          ((FWeakObjectPtr *)((longlong)local_90.Pointer + 0x18))->ObjectSerialNumber = 0;
          ((FWeakObjectPtr *)((longlong)local_90.Pointer + 0x20))->ObjectIndex = 0;
          ((FWeakObjectPtr *)((longlong)local_90.Pointer + 0x20))->ObjectSerialNumber = 0;
          *(byte *)&((FWeakObjectPtr *)((longlong)local_90.Pointer + 0x28))->ObjectIndex =
               (byte)((FWeakObjectPtr *)((longlong)local_90.Pointer + 0x28))->ObjectIndex & 0xfc;
        }
        local_res10[0] = local_90.Index;
        local_80 = &local_d8;
        local_78 = local_res10;
        TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FObjectKey_const_&,UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                  ((TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                    *)&this[-1].field_0x20,&local_b0,(bool *)&local_80);
      }
      else {
        local_res10[0] = *(int *)&pTVar7->field_0x8;
        if (local_res10[0] == -1) goto LAB_14681e386;
      }
      local_c0.GroupHandle.Value = local_d0._0_4_;
      local_c0.ValueHandle.TypeID.TypeID = *(uint *)&this[-1].field_0xc8;
      local_c0.ValueHandle.StorageIndex.Value = local_res10[0];
      FPreAnimatedEntityCaptureSource::BeginTrackingEntity
                (local_a0,&local_c0,(FMovieSceneEntityID)*(ushort *)param_2,
                 *(FRootInstanceHandle *)param_3,bVar2);
      lVar8 = lVar8 + 1;
      param_3 = (TRead<UE::MovieScene::FRootInstanceHandle>)((longlong)param_3 + 4);
      param_2 = (TRead<UE::MovieScene::FMovieSceneEntityID>)((longlong)param_2 + 2);
    } while (lVar8 < local_98);
  }
  return;
}

// BeginTrackingEntity @ 14681e790

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedSkeletalAnimationAnimInstanceTraits>
::BeginTrackingEntity
          (TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedSkeletalAnimationAnimInstanceTraits>
           *this,FMovieSceneEntityID param_1,bool param_2,FRootInstanceHandle param_3,
          UObject *param_4)

{
  FPreAnimatedEntityCaptureSource *this_00;
  int local_res8;
  FObjectKey local_58;
  FWeakObjectPtr local_50;
  FWeakObjectPtr local_48;
  UObject *local_40;
  FPreAnimatedStateEntry local_38;
  
  if (((*(FPreAnimatedStateExtension **)&this[-1].field_0xb8)->NumRequestsForGlobalState != 0) ||
     (param_2)) {
    this_00 = FPreAnimatedStateExtension::GetOrCreateEntityMetaData
                        (*(FPreAnimatedStateExtension **)&this[-1].field_0xb8);
    local_48.ObjectIndex = 0;
    local_48.ObjectSerialNumber = 0;
    if (param_4 != (UObject *)0x0) {
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable(param_4);
      }
      local_50.ObjectIndex = 0;
      local_50.ObjectSerialNumber = 0;
      local_40 = param_4;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable(param_4);
      }
      FWeakObjectPtr::operator=(&local_50,(FObjectPtr)&local_40);
      local_48 = local_50;
    }
    TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationAnimInstanceTraits>::
    GetOrCreateStorageIndex
              ((TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationAnimInstanceTraits>
                *)&this[-1].field_0x8,&local_58);
    FBoundObjectPreAnimatedStateTraits::MakeGroupImpl
              ((FBoundObjectPreAnimatedStateTraits *)&this[-1].field_0xd0,(UObject *)&local_res8);
    local_38.GroupHandle.Value = local_res8;
    local_38.ValueHandle.TypeID.TypeID = *(uint *)&this[-1].field_0xc8;
    local_38.ValueHandle.StorageIndex.Value = local_58.ObjectIndex;
    FPreAnimatedEntityCaptureSource::BeginTrackingEntity(this_00,&local_38,param_1,param_3,param_2);
  }
  return;
}

// BeginTrackingEntity @ 14681e8c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedSkeletalAnimationMontageTraits>::
BeginTrackingEntity(TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedSkeletalAnimationMontageTraits>
                    *this,FMovieSceneEntityID param_1,bool param_2,FRootInstanceHandle param_3,
                   UObject *param_4)

{
  FPreAnimatedEntityCaptureSource *this_00;
  int local_res8;
  FObjectKey local_58;
  FWeakObjectPtr local_50;
  FWeakObjectPtr local_48;
  UObject *local_40;
  FPreAnimatedStateEntry local_38;
  
  if (((*(FPreAnimatedStateExtension **)&this[-1].field_0xb8)->NumRequestsForGlobalState != 0) ||
     (param_2)) {
    this_00 = FPreAnimatedStateExtension::GetOrCreateEntityMetaData
                        (*(FPreAnimatedStateExtension **)&this[-1].field_0xb8);
    local_48.ObjectIndex = 0;
    local_48.ObjectSerialNumber = 0;
    if (param_4 != (UObject *)0x0) {
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable(param_4);
      }
      local_50.ObjectIndex = 0;
      local_50.ObjectSerialNumber = 0;
      local_40 = param_4;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable(param_4);
      }
      FWeakObjectPtr::operator=(&local_50,(FObjectPtr)&local_40);
      local_48 = local_50;
    }
    TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationMontageTraits>::
    GetOrCreateStorageIndex
              ((TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationMontageTraits>
                *)&this[-1].field_0x8,&local_58);
    FBoundObjectPreAnimatedStateTraits::MakeGroupImpl
              ((FBoundObjectPreAnimatedStateTraits *)&this[-1].field_0xd0,(UObject *)&local_res8);
    local_38.GroupHandle.Value = local_res8;
    local_38.ValueHandle.TypeID.TypeID = *(uint *)&this[-1].field_0xc8;
    local_38.ValueHandle.StorageIndex.Value = local_58.ObjectIndex;
    FPreAnimatedEntityCaptureSource::BeginTrackingEntity(this_00,&local_38,param_1,param_3,param_2);
  }
  return;
}

// BeginTrackingEntity @ 14681e9f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedSkeletalAnimationTraits>::
BeginTrackingEntity(TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedSkeletalAnimationTraits>
                    *this,FMovieSceneEntityID param_1,bool param_2,FRootInstanceHandle param_3,
                   UObject *param_4)

{
  FPreAnimatedEntityCaptureSource *this_00;
  int local_res8;
  FObjectKey local_58;
  FWeakObjectPtr local_50;
  FWeakObjectPtr local_48;
  UObject *local_40;
  FPreAnimatedStateEntry local_38;
  
  if (((*(FPreAnimatedStateExtension **)&this[-1].field_0xb8)->NumRequestsForGlobalState != 0) ||
     (param_2)) {
    this_00 = FPreAnimatedStateExtension::GetOrCreateEntityMetaData
                        (*(FPreAnimatedStateExtension **)&this[-1].field_0xb8);
    local_48.ObjectIndex = 0;
    local_48.ObjectSerialNumber = 0;
    if (param_4 != (UObject *)0x0) {
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable(param_4);
      }
      local_50.ObjectIndex = 0;
      local_50.ObjectSerialNumber = 0;
      local_40 = param_4;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable(param_4);
      }
      FWeakObjectPtr::operator=(&local_50,(FObjectPtr)&local_40);
      local_48 = local_50;
    }
    TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationTraits>::
    GetOrCreateStorageIndex
              ((TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationTraits> *)
               &this[-1].field_0x8,&local_58);
    FBoundObjectPreAnimatedStateTraits::MakeGroupImpl
              ((FBoundObjectPreAnimatedStateTraits *)&this[-1].field_0xd0,(UObject *)&local_res8);
    local_38.GroupHandle.Value = local_res8;
    local_38.ValueHandle.TypeID.TypeID = *(uint *)&this[-1].field_0xc8;
    local_38.ValueHandle.StorageIndex.Value = local_58.ObjectIndex;
    FPreAnimatedEntityCaptureSource::BeginTrackingEntity(this_00,&local_38,param_1,param_3,param_2);
  }
  return;
}

// CachePreAnimatedValue @ 14681f660

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedSkeletalAnimationAnimInstanceTraits>
::CachePreAnimatedValue
          (TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedSkeletalAnimationAnimInstanceTraits>
           *this,FCachePreAnimatedValueParams *param_1,FPreAnimatedStateEntry *param_2,
          UObject *param_3)

{
  longlong lVar1;
  byte *pbVar2;
  int iVar3;
  code *pcVar4;
  EPreAnimatedStorageRequirement EVar5;
  bool bVar6;
  bool *pbVar7;
  TTuple<UE::MovieScene::FPreAnimatedStorageIndex,bool> *pTVar8;
  FPreAnimatedStorageIndex local_res10 [2];
  FPreAnimatedStorageIndex local_res18 [2];
  FWeakObjectPtr local_38;
  UObject *local_30;
  
  iVar3 = (param_2->ValueHandle).StorageIndex.Value;
  EVar5 = FPreAnimatedStateExtension::GetStorageRequirement
                    (*(FPreAnimatedStateExtension **)&this->field_0xb0,param_2);
  local_res18[0].Value = iVar3;
  if (iVar3 == -1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("StorageIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                       ,0x1b6,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar1 = *(longlong *)&this->field_0x68 + (longlong)iVar3 * 0xc;
  if (EVar5 == Persistent) {
    bVar6 = (*(byte *)(lVar1 + 9) & 1) == 0;
  }
  else {
    if ((EVar5 != Transient) || ((*(byte *)(lVar1 + 9) & 3) == 1)) goto LAB_14681f863;
    pbVar7 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,bool,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
             ::Find((TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,bool,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                     *)&this->field_0xa0,local_res18);
    bVar6 = pbVar7 == (bool *)0x0;
  }
  if (bVar6) {
    if (param_3 != (UObject *)0x0) {
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable(param_3);
      }
      local_38.ObjectIndex = 0;
      local_38.ObjectSerialNumber = 0;
      local_30 = param_3;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable(param_3);
      }
      FWeakObjectPtr::operator=(&local_38,(FObjectPtr)&local_30);
    }
    local_res10[0].Value = iVar3;
    if (iVar3 == -1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StorageIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                         ,0x195,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar1 = *(longlong *)&this->field_0x68 + (longlong)local_res10[0].Value * 0xc;
    if (EVar5 == Persistent) {
      if ((*(byte *)(lVar1 + 9) & 1) != 0) {
        bVar6 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3111672766223352219>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                           ,0x19b,"!CachedData.bInitialized");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      *(byte *)(lVar1 + 9) = *(byte *)(lVar1 + 9) | 3;
      *(undefined1 *)(lVar1 + 8) = 1;
    }
    else if (EVar5 == Transient) {
      if ((*(byte *)(lVar1 + 9) & 1) != 0) {
        pbVar7 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,bool,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                 ::Find((TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,bool,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                         *)&this->field_0xa0,local_res10);
        if (pbVar7 != (bool *)0x0) {
          bVar6 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<3111672766223352226>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                             ,0x1a2,
                             "!CachedData.bInitialized || !TransientPreAnimatedStorage.Contains(StorageIndex)"
                            );
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
      }
      if ((*(byte *)(lVar1 + 9) & 1) == 0) {
        *(undefined1 *)(lVar1 + 8) = 1;
        *(byte *)(lVar1 + 9) = *(byte *)(lVar1 + 9) | 1;
      }
      else {
        pTVar8 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,bool,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                 ::AllocateMemoryForEmplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&>
                           ((TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,bool,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                             *)&this->field_0xa0,local_res10);
        *(int *)pTVar8 = local_res10[0].Value;
        pTVar8->field_0x4 = 1;
      }
    }
  }
LAB_14681f863:
  if (param_1->bForcePersist != false) {
    if (iVar3 == -1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StorageIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                         ,0x200,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pbVar2 = (byte *)(*(longlong *)&this->field_0x68 + 9 + (longlong)iVar3 * 0xc);
    *pbVar2 = *pbVar2 | 2;
  }
  return;
}

// CachePreAnimatedValue @ 14681f8c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedSkeletalAnimationAnimInstanceTraits>
::CachePreAnimatedValue
          (TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedSkeletalAnimationAnimInstanceTraits>
           *this,FCachePreAnimatedValueParams *param_1,UObject *param_2,
          EPreAnimatedCaptureSourceTracking param_3)

{
  FPreAnimatedStateExtension *this_00;
  bool bVar1;
  TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex> *pTVar2;
  int local_res20 [2];
  FWeakObjectPtr local_58;
  FWeakObjectPtr local_50;
  FWeakObjectPtr local_48;
  UObject *local_40;
  FPreAnimatedStateEntry local_38;
  
  if (param_3 == CacheIfTracked) {
    if (**(int **)&this->field_0xb0 == 0) {
      local_58.ObjectIndex = 0;
      local_58.ObjectSerialNumber = 0;
      if (param_2 != (UObject *)0x0) {
        if (GC::GIsIncrementalReachabilityPending) {
          GC::MarkAsReachable(param_2);
        }
        local_58.ObjectIndex = 0;
        local_58.ObjectSerialNumber = 0;
        local_48 = (FWeakObjectPtr)param_2;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(param_2);
        }
        FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_48);
      }
      FBoundObjectPreAnimatedStateTraits::FindGroupImpl
                ((FBoundObjectPreAnimatedStateTraits *)&this->field_0xc8,(UObject *)local_res20);
      pTVar2 = TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                       *)&this->field_0x18,(FObjectKey *)&local_58);
      if (pTVar2 == (TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex> *)0x0) {
        return;
      }
      local_38.ValueHandle.StorageIndex.Value = *(int *)&pTVar2->field_0x8;
      local_38.GroupHandle.Value = local_res20[0];
      local_38.ValueHandle.TypeID.TypeID = *(uint *)&this->field_0xc0;
      if (local_38.ValueHandle.StorageIndex.Value == -1) {
        return;
      }
      bVar1 = FPreAnimatedStateExtension::MetaDataExists
                        (*(FPreAnimatedStateExtension **)&this->field_0xb0,&local_38);
      if ((!bVar1) &&
         (bVar1 = `UE::MovieScene::
                  TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationAnimInstanceTraits>
                  ::ShouldTrackCaptureSource<UObject_*_&>'::__l11::<lambda_1>::operator()
                            (local_res20), !bVar1)) {
        return;
      }
    }
  }
  else if (param_3 != AlwaysCache) {
    `UE::MovieScene::
    TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationAnimInstanceTraits>::
    ShouldTrackCaptureSource<UObject_*_&>'::__l4::<lambda_2>::operator()(local_res20);
    return;
  }
  local_48.ObjectIndex = 0;
  local_48.ObjectSerialNumber = 0;
  if (param_2 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(param_2);
    }
    local_50.ObjectIndex = 0;
    local_50.ObjectSerialNumber = 0;
    local_40 = param_2;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(param_2);
    }
    FWeakObjectPtr::operator=(&local_50,(FObjectPtr)&local_40);
    local_48 = local_50;
  }
  TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationAnimInstanceTraits>::
  GetOrCreateStorageIndex
            ((TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationAnimInstanceTraits>
              *)this,(FObjectKey *)&local_58);
  FBoundObjectPreAnimatedStateTraits::MakeGroupImpl
            ((FBoundObjectPreAnimatedStateTraits *)&this->field_0xc8,(UObject *)local_res20);
  local_38.GroupHandle.Value = local_res20[0];
  local_38.ValueHandle.TypeID.TypeID = *(uint *)&this->field_0xc0;
  local_38.ValueHandle.StorageIndex.Value = local_58.ObjectIndex;
  if (param_3 == CacheIfTracked) {
    this_00 = *(FPreAnimatedStateExtension **)&this->field_0xb0;
    if (this_00->NumRequestsForGlobalState == 0) {
      if ((local_58.ObjectIndex == -1) ||
         (bVar1 = FPreAnimatedStateExtension::MetaDataExists(this_00,&local_38), !bVar1)) {
        `UE::MovieScene::
        TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationAnimInstanceTraits>::
        TrackCaptureSource'::__l5::<lambda_1>::operator()(local_res20);
      }
    }
    else {
      FPreAnimatedStateExtension::EnsureMetaData(this_00,&local_38);
    }
  }
  else if (param_3 == AlwaysCache) {
    FPreAnimatedStateExtension::AddSourceMetaData
              (*(FPreAnimatedStateExtension **)&this->field_0xb0,&local_38);
  }
  else {
    `UE::MovieScene::
    TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationAnimInstanceTraits>::
    TrackCaptureSource'::__l4::<lambda_2>::operator()(local_res20);
  }
  CachePreAnimatedValue(this,param_1,&local_38,param_2);
  return;
}

// CachePreAnimatedValue @ 14681faf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedSkeletalAnimationTraits>::
CachePreAnimatedValue
          (TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedSkeletalAnimationTraits>
           *this,FCachePreAnimatedValueParams *param_1,UObject *param_2,
          EPreAnimatedCaptureSourceTracking param_3)

{
  byte *pbVar1;
  FPreAnimatedStateExtension *this_00;
  code *pcVar2;
  FPreAnimatedStorageIndex FVar3;
  EPreAnimatedStorageRequirement EVar4;
  bool bVar5;
  TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex> *pTVar6;
  longlong lVar7;
  undefined1 *puVar8;
  undefined1 local_res20 [8];
  undefined1 local_c8;
  undefined1 local_c7;
  undefined1 local_c6 [2];
  undefined1 local_c4 [4];
  FPreAnimatedStateEntry local_c0;
  FPreAnimatedStateEntry local_b0;
  undefined1 local_a0 [8];
  FWeakObjectPtr local_98;
  FObjectKey local_90;
  FWeakObjectPtr local_88;
  FWeakObjectPtr local_80;
  FWeakObjectPtr local_78;
  FObjectKey local_70;
  UObject *local_68;
  UObject *local_60;
  UObject *local_58;
  FPreAnimatedSkeletalAnimationState local_50;
  
  if (param_3 == CacheIfTracked) {
    if (**(int **)&this->field_0xb0 == 0) {
      local_90.ObjectIndex = 0;
      local_90.ObjectSerialNumber = 0;
      if (param_2 != (UObject *)0x0) {
        if (GC::GIsIncrementalReachabilityPending) {
          GC::MarkAsReachable(param_2);
        }
        local_98.ObjectIndex = 0;
        local_98.ObjectSerialNumber = 0;
        local_68 = param_2;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(param_2);
        }
        FWeakObjectPtr::operator=(&local_98,(FObjectPtr)&local_68);
        local_90.ObjectIndex = local_98.ObjectIndex;
        local_90.ObjectSerialNumber = local_98.ObjectSerialNumber;
      }
      FBoundObjectPreAnimatedStateTraits::FindGroupImpl
                ((FBoundObjectPreAnimatedStateTraits *)&this->field_0xc8,(UObject *)local_c4);
      pTVar6 = TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                       *)&this->field_0x18,&local_90);
      if (pTVar6 == (TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex> *)0x0) {
        return;
      }
      local_b0.ValueHandle.StorageIndex.Value = *(int *)&pTVar6->field_0x8;
      local_b0.GroupHandle.Value = (int)local_c4;
      local_b0.ValueHandle.TypeID.TypeID = *(uint *)&this->field_0xc0;
      if (local_b0.ValueHandle.StorageIndex.Value == -1) {
        return;
      }
      bVar5 = FPreAnimatedStateExtension::MetaDataExists
                        (*(FPreAnimatedStateExtension **)&this->field_0xb0,&local_b0);
      if (!bVar5) {
        local_res20[0] = 0;
        bVar5 = `UE::MovieScene::
                TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationTraits>::
                ShouldTrackCaptureSource<UObject_*_&>'::__l11::<lambda_1>::operator()(local_res20);
        if (!bVar5) {
          return;
        }
      }
    }
  }
  else if (param_3 != AlwaysCache) {
    `UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationTraits>::
    ShouldTrackCaptureSource<UObject_*_&>'::__l4::<lambda_2>::operator()(local_c6);
    return;
  }
  puVar8 = &this->field_0xb0;
  local_80.ObjectIndex = 0;
  local_80.ObjectSerialNumber = 0;
  if (param_2 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(param_2);
    }
    local_88.ObjectIndex = 0;
    local_88.ObjectSerialNumber = 0;
    local_60 = param_2;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(param_2);
    }
    FWeakObjectPtr::operator=(&local_88,(FObjectPtr)&local_60);
    local_80 = local_88;
  }
  TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationTraits>::
  GetOrCreateStorageIndex
            ((TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationTraits> *)this,
             (FObjectKey *)(local_a0 + 4));
  FBoundObjectPreAnimatedStateTraits::MakeGroupImpl
            ((FBoundObjectPreAnimatedStateTraits *)&this->field_0xc8,(UObject *)local_a0);
  local_c0.GroupHandle.Value = local_a0._0_4_;
  local_c0.ValueHandle.TypeID.TypeID = *(uint *)&this->field_0xc0;
  local_c0.ValueHandle.StorageIndex.Value = local_a0._4_4_;
  if (param_3 == CacheIfTracked) {
    this_00 = *(FPreAnimatedStateExtension **)puVar8;
    if (this_00->NumRequestsForGlobalState == 0) {
      if ((local_a0._4_4_ == -1) ||
         (bVar5 = FPreAnimatedStateExtension::MetaDataExists(this_00,&local_c0), !bVar5)) {
        local_c7 = 0;
        `UE::MovieScene::
        TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationTraits>::
        TrackCaptureSource'::__l5::<lambda_1>::operator()(&local_c7);
      }
    }
    else {
      FPreAnimatedStateExtension::EnsureMetaData(this_00,&local_c0);
    }
  }
  else if (param_3 == AlwaysCache) {
    FPreAnimatedStateExtension::AddSourceMetaData(*(FPreAnimatedStateExtension **)puVar8,&local_c0);
  }
  else {
    local_c8 = 0;
    `UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationTraits>::
    TrackCaptureSource'::__l4::<lambda_2>::operator()(&local_c8);
  }
  FVar3.Value = local_c0.ValueHandle.StorageIndex.Value;
  lVar7 = (longlong)local_c0.ValueHandle.StorageIndex.Value;
  EVar4 = FPreAnimatedStateExtension::GetStorageRequirement
                    (*(FPreAnimatedStateExtension **)puVar8,&local_c0);
  bVar5 = TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationTraits>::
          IsStorageRequirementSatisfied
                    ((TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationTraits>
                      *)this,FVar3,EVar4);
  if (!bVar5) {
    local_70.ObjectIndex = 0;
    local_70.ObjectSerialNumber = 0;
    if (param_2 != (UObject *)0x0) {
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable(param_2);
      }
      local_78.ObjectIndex = 0;
      local_78.ObjectSerialNumber = 0;
      local_58 = param_2;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable(param_2);
      }
      FWeakObjectPtr::operator=(&local_78,(FObjectPtr)&local_58);
      local_70.ObjectIndex = local_78.ObjectIndex;
      local_70.ObjectSerialNumber = local_78.ObjectSerialNumber;
    }
    FPreAnimatedSkeletalAnimationTraits::CachePreAnimatedValue
              ((FPreAnimatedSkeletalAnimationTraits *)&this->field_0xc8,&local_50,&local_70);
    TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationTraits>::
    AssignPreAnimatedValue
              ((TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationTraits> *)this
               ,FVar3,EVar4,&local_50);
    if (local_50.SkeletalMeshRestoreState.SkeletalMeshCompEditorParams.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.SkeletalMeshRestoreState.SkeletalMeshCompEditorParams.AllocatorInstance
                    .Data);
    }
  }
  if (param_1->bForcePersist != false) {
    if ((FVar3.Value == -1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StorageIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                           ,0x200,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pbVar1 = (byte *)(lVar7 * 0x30 + 0x28 + *(longlong *)&this->field_0x68);
    *pbVar1 = *pbVar1 | 2;
  }
  return;
}

// CachePreAnimatedValues @ 1468201c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedSkeletalAnimationAnimInstanceTraits>
::CachePreAnimatedValues
          (TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedSkeletalAnimationAnimInstanceTraits>
           *this,FCachePreAnimatedValueParams *param_1,TArrayView<UObject_*_const,int> *param_2)

{
  FWeakObjectPtr *pFVar1;
  FWeakObjectPtr FVar2;
  FPreAnimatedStateExtension *this_00;
  bool bVar3;
  bool bVar4;
  TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex> *pTVar5;
  FWeakObjectPtr *pFVar6;
  FWeakObjectPtr local_res18;
  int local_res20;
  undefined1 local_78 [8];
  FWeakObjectPtr local_70;
  FWeakObjectPtr local_68;
  FWeakObjectPtr local_60;
  FPreAnimatedStateEntry local_58;
  FPreAnimatedStateEntry local_48;
  
  pFVar6 = (FWeakObjectPtr *)param_2->DataPtr;
  pFVar1 = pFVar6 + param_2->ArrayNum;
  do {
    if (pFVar6 == pFVar1) {
      return;
    }
    FVar2 = *pFVar6;
    if (FVar2 == (FWeakObjectPtr)0x0) goto LAB_14682039f;
    if (**(int **)&this[-1].field_0xb8 == 0) {
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable((UObject *)FVar2);
      }
      local_70.ObjectIndex = 0;
      local_70.ObjectSerialNumber = 0;
      local_res18 = FVar2;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable((UObject *)FVar2);
      }
      FWeakObjectPtr::operator=(&local_70,(FObjectPtr)&local_res18);
      local_res18 = local_70;
      FBoundObjectPreAnimatedStateTraits::FindGroupImpl
                ((FBoundObjectPreAnimatedStateTraits *)&this[-1].field_0xd0,(UObject *)&local_res20)
      ;
      pTVar5 = TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                       *)&this[-1].field_0x20,(FObjectKey *)&local_res18);
      if (pTVar5 == (TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex> *)0x0) {
        local_58.GroupHandle.Value = local_res20;
        local_58.ValueHandle.TypeID.TypeID = *(uint *)&this[-1].field_0xc8;
        local_58.ValueHandle.StorageIndex.Value = -1;
      }
      else {
        local_58.ValueHandle.StorageIndex.Value = *(int *)&pTVar5->field_0x8;
        local_58.GroupHandle.Value = local_res20;
        local_58.ValueHandle.TypeID.TypeID = *(uint *)&this[-1].field_0xc8;
        if (local_58.ValueHandle.StorageIndex.Value != -1) {
          bVar3 = FPreAnimatedStateExtension::MetaDataExists
                            (*(FPreAnimatedStateExtension **)&this[-1].field_0xb8,&local_58);
          if (bVar3) {
LAB_1468202be:
            bVar3 = true;
          }
          else {
            bVar4 = `UE::MovieScene::
                    TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationAnimInstanceTraits>
                    ::ShouldTrackCaptureSource<UObject_*_&>'::__l11::<lambda_1>::operator()
                              (&local_res18);
            bVar3 = false;
            if (bVar4) goto LAB_1468202be;
          }
          if (bVar3) goto LAB_1468202c8;
        }
      }
    }
    else {
LAB_1468202c8:
      local_60.ObjectIndex = 0;
      local_60.ObjectSerialNumber = 0;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable((UObject *)FVar2);
      }
      local_68.ObjectIndex = 0;
      local_68.ObjectSerialNumber = 0;
      local_res18 = FVar2;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable((UObject *)FVar2);
      }
      FWeakObjectPtr::operator=(&local_68,(FObjectPtr)&local_res18);
      local_60 = local_68;
      TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationAnimInstanceTraits>::
      GetOrCreateStorageIndex
                ((TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationAnimInstanceTraits>
                  *)&this[-1].field_0x8,(FObjectKey *)(local_78 + 4));
      FBoundObjectPreAnimatedStateTraits::MakeGroupImpl
                ((FBoundObjectPreAnimatedStateTraits *)&this[-1].field_0xd0,(UObject *)local_78);
      this_00 = *(FPreAnimatedStateExtension **)&this[-1].field_0xb8;
      local_48.GroupHandle.Value = local_78._0_4_;
      local_48.ValueHandle.TypeID.TypeID = *(uint *)&this[-1].field_0xc8;
      local_48.ValueHandle.StorageIndex.Value = local_78._4_4_;
      if (this_00->NumRequestsForGlobalState == 0) {
        if ((local_78._4_4_ == -1) ||
           (bVar3 = FPreAnimatedStateExtension::MetaDataExists(this_00,&local_48), !bVar3)) {
          `UE::MovieScene::
          TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationAnimInstanceTraits>
          ::TrackCaptureSource'::__l5::<lambda_1>::operator()(&local_res18);
        }
      }
      else {
        FPreAnimatedStateExtension::EnsureMetaData(this_00,&local_48);
      }
      CachePreAnimatedValue
                ((TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedSkeletalAnimationAnimInstanceTraits>
                  *)&this[-1].field_0x8,param_1,&local_48,(UObject *)FVar2);
    }
LAB_14682039f:
    pFVar6 = pFVar6 + 1;
  } while( true );
}

// CachePreAnimatedValues @ 1468203d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedSkeletalAnimationMontageTraits>::
CachePreAnimatedValues
          (TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedSkeletalAnimationMontageTraits>
           *this,FCachePreAnimatedValueParams *param_1,TArrayView<UObject_*_const,int> *param_2)

{
  UObject **ppUVar1;
  byte *pbVar2;
  UObject *pUVar3;
  FPreAnimatedStateExtension *this_00;
  code *pcVar4;
  FPreAnimatedStorageIndex FVar5;
  bool bVar6;
  EPreAnimatedStorageRequirement EVar7;
  longlong lVar8;
  UObject **ppUVar9;
  undefined1 local_res18 [8];
  int local_res20;
  FPreAnimatedStateEntry local_98;
  FObjectKey local_88;
  FWeakObjectPtr local_80;
  FWeakObjectPtr local_78;
  FWeakObjectPtr local_70;
  FPreAnimatedSkeletalAnimationMontageState local_68;
  UObject *local_58;
  UObject *local_50;
  UObject *local_48 [2];
  
  ppUVar9 = param_2->DataPtr;
  ppUVar1 = ppUVar9 + param_2->ArrayNum;
  do {
    if (ppUVar9 == ppUVar1) {
      return;
    }
    pUVar3 = *ppUVar9;
    if ((pUVar3 != (UObject *)0x0) &&
       (local_58 = pUVar3,
       bVar6 = TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationMontageTraits>
               ::ShouldTrackCaptureSource<UObject_*_&>
                         ((TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationMontageTraits>
                           *)&this[-1].field_0x8,CacheIfTracked,&local_58), bVar6)) {
      local_78.ObjectIndex = 0;
      local_78.ObjectSerialNumber = 0;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable(pUVar3);
      }
      local_80.ObjectIndex = 0;
      local_80.ObjectSerialNumber = 0;
      local_50 = pUVar3;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable(pUVar3);
      }
      FWeakObjectPtr::operator=(&local_80,(FObjectPtr)&local_50);
      local_78 = local_80;
      TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationMontageTraits>::
      GetOrCreateStorageIndex
                ((TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationMontageTraits>
                  *)&this[-1].field_0x8,&local_88);
      FBoundObjectPreAnimatedStateTraits::MakeGroupImpl
                ((FBoundObjectPreAnimatedStateTraits *)&this[-1].field_0xd0,(UObject *)&local_res20)
      ;
      this_00 = *(FPreAnimatedStateExtension **)&this[-1].field_0xb8;
      local_98.GroupHandle.Value = local_res20;
      local_98.ValueHandle.TypeID.TypeID = *(uint *)&this[-1].field_0xc8;
      local_98.ValueHandle.StorageIndex.Value = local_88.ObjectIndex;
      if (this_00->NumRequestsForGlobalState == 0) {
        if ((local_88.ObjectIndex == -1) ||
           (bVar6 = FPreAnimatedStateExtension::MetaDataExists(this_00,&local_98), !bVar6)) {
          local_res18[0] = 0;
          `UE::MovieScene::
          TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationMontageTraits>::
          TrackCaptureSource'::__l5::<lambda_1>::operator()(local_res18);
        }
      }
      else {
        FPreAnimatedStateExtension::EnsureMetaData(this_00,&local_98);
      }
      FVar5.Value = local_98.ValueHandle.StorageIndex.Value;
      lVar8 = (longlong)local_98.ValueHandle.StorageIndex.Value;
      EVar7 = FPreAnimatedStateExtension::GetStorageRequirement
                        (*(FPreAnimatedStateExtension **)&this[-1].field_0xb8,&local_98);
      bVar6 = TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationMontageTraits>::
              IsStorageRequirementSatisfied
                        ((TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationMontageTraits>
                          *)&this[-1].field_0x8,FVar5,EVar7);
      if (!bVar6) {
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar3);
        }
        local_70.ObjectIndex = 0;
        local_70.ObjectSerialNumber = 0;
        local_48[0] = pUVar3;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar3);
        }
        FWeakObjectPtr::operator=(&local_70,(FObjectPtr)local_48);
        local_68.WeakInstance.WeakPtr.ObjectSerialNumber = 0;
        local_68.MontageInstanceId = 0;
        local_68.WeakInstance.WeakPtr.ObjectIndex = 0;
        TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationMontageTraits>::
        AssignPreAnimatedValue
                  ((TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationMontageTraits>
                    *)&this[-1].field_0x8,FVar5,EVar7,&local_68);
      }
      if (param_1->bForcePersist != false) {
        if ((FVar5.Value == -1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("StorageIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                               ,0x200,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pbVar2 = (byte *)(*(longlong *)&this[-1].field_0x70 + 0x14 + lVar8 * 0x18);
        *pbVar2 = *pbVar2 | 2;
      }
    }
    ppUVar9 = ppUVar9 + 1;
  } while( true );
}

// CachePreAnimatedValues @ 146820600

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedSkeletalAnimationTraits>::
CachePreAnimatedValues
          (TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedSkeletalAnimationTraits>
           *this,FCachePreAnimatedValueParams *param_1,TArrayView<UObject_*_const,int> *param_2)

{
  UObject **ppUVar1;
  byte *pbVar2;
  UObject *pUVar3;
  FPreAnimatedStateExtension *this_00;
  code *pcVar4;
  FPreAnimatedStorageIndex FVar5;
  bool bVar6;
  bool bVar7;
  EPreAnimatedStorageRequirement EVar8;
  TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex> *pTVar9;
  longlong lVar10;
  UObject **ppUVar11;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_d0 [8];
  FPreAnimatedStateEntry local_c8;
  FPreAnimatedStateEntry local_b8;
  undefined1 local_a8 [8];
  FWeakObjectPtr local_a0;
  FWeakObjectPtr local_98;
  FWeakObjectPtr local_90;
  FWeakObjectPtr local_88;
  UObject *local_80;
  FWeakObjectPtr local_78;
  UObject *local_70;
  UObject *local_68;
  FWeakObjectPtr local_60;
  FPreAnimatedSkeletalAnimationState local_58;
  
  ppUVar11 = param_2->DataPtr;
  ppUVar1 = ppUVar11 + param_2->ArrayNum;
  do {
    if (ppUVar11 == ppUVar1) {
      return;
    }
    pUVar3 = *ppUVar11;
    if (pUVar3 == (UObject *)0x0) goto LAB_1468208c7;
    if (**(int **)&this[-1].field_0xb8 == 0) {
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable(pUVar3);
      }
      local_a0.ObjectIndex = 0;
      local_a0.ObjectSerialNumber = 0;
      local_80 = pUVar3;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable(pUVar3);
      }
      FWeakObjectPtr::operator=(&local_a0,(FObjectPtr)&local_80);
      local_78 = local_a0;
      FBoundObjectPreAnimatedStateTraits::FindGroupImpl
                ((FBoundObjectPreAnimatedStateTraits *)&this[-1].field_0xd0,(UObject *)local_d0);
      pTVar9 = TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                       *)&this[-1].field_0x20,(FObjectKey *)&local_78);
      if (pTVar9 == (TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex> *)0x0) {
        local_b8.GroupHandle.Value = local_d0._0_4_;
        local_b8.ValueHandle.TypeID.TypeID = *(uint *)&this[-1].field_0xc8;
        local_b8.ValueHandle.StorageIndex.Value = -1;
      }
      else {
        local_b8.ValueHandle.StorageIndex.Value = *(int *)&pTVar9->field_0x8;
        local_b8.GroupHandle.Value = local_d0._0_4_;
        local_b8.ValueHandle.TypeID.TypeID = *(uint *)&this[-1].field_0xc8;
        if (local_b8.ValueHandle.StorageIndex.Value != -1) {
          bVar6 = FPreAnimatedStateExtension::MetaDataExists
                            (*(FPreAnimatedStateExtension **)&this[-1].field_0xb8,&local_b8);
          if (bVar6) {
LAB_146820715:
            bVar6 = true;
          }
          else {
            local_res18[0] = bVar6;
            bVar7 = `UE::MovieScene::
                    TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationTraits>::
                    ShouldTrackCaptureSource<UObject_*_&>'::__l11::<lambda_1>::operator()
                              (local_res18);
            bVar6 = false;
            if (bVar7) goto LAB_146820715;
          }
          if (bVar6) goto LAB_14682071f;
        }
      }
    }
    else {
LAB_14682071f:
      local_90.ObjectIndex = 0;
      local_90.ObjectSerialNumber = 0;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable(pUVar3);
      }
      local_98.ObjectIndex = 0;
      local_98.ObjectSerialNumber = 0;
      local_70 = pUVar3;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable(pUVar3);
      }
      FWeakObjectPtr::operator=(&local_98,(FObjectPtr)&local_70);
      local_90 = local_98;
      TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationTraits>::
      GetOrCreateStorageIndex
                ((TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationTraits> *)
                 &this[-1].field_0x8,(FObjectKey *)(local_a8 + 4));
      FBoundObjectPreAnimatedStateTraits::MakeGroupImpl
                ((FBoundObjectPreAnimatedStateTraits *)&this[-1].field_0xd0,(UObject *)local_a8);
      this_00 = *(FPreAnimatedStateExtension **)&this[-1].field_0xb8;
      local_c8.GroupHandle.Value = local_a8._0_4_;
      local_c8.ValueHandle.TypeID.TypeID = *(uint *)&this[-1].field_0xc8;
      local_c8.ValueHandle.StorageIndex.Value = local_a8._4_4_;
      if (this_00->NumRequestsForGlobalState == 0) {
        if ((local_a8._4_4_ == -1) ||
           (bVar6 = FPreAnimatedStateExtension::MetaDataExists(this_00,&local_c8), !bVar6)) {
          local_res20[0] = 0;
          `UE::MovieScene::
          TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationTraits>::
          TrackCaptureSource'::__l5::<lambda_1>::operator()(local_res20);
        }
      }
      else {
        FPreAnimatedStateExtension::EnsureMetaData(this_00,&local_c8);
      }
      FVar5.Value = local_c8.ValueHandle.StorageIndex.Value;
      lVar10 = (longlong)local_c8.ValueHandle.StorageIndex.Value;
      EVar8 = FPreAnimatedStateExtension::GetStorageRequirement
                        (*(FPreAnimatedStateExtension **)&this[-1].field_0xb8,&local_c8);
      bVar6 = TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationTraits>::
              IsStorageRequirementSatisfied
                        ((TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationTraits>
                          *)&this[-1].field_0x8,FVar5,EVar8);
      if (!bVar6) {
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar3);
        }
        local_88.ObjectIndex = 0;
        local_88.ObjectSerialNumber = 0;
        local_68 = pUVar3;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar3);
        }
        FWeakObjectPtr::operator=(&local_88,(FObjectPtr)&local_68);
        local_60 = local_88;
        FPreAnimatedSkeletalAnimationTraits::CachePreAnimatedValue
                  ((FPreAnimatedSkeletalAnimationTraits *)&this[-1].field_0xd0,&local_58,
                   (FObjectKey *)&local_60);
        TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationTraits>::
        AssignPreAnimatedValue
                  ((TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationTraits> *)
                   &this[-1].field_0x8,FVar5,EVar8,&local_58);
        if (local_58.SkeletalMeshRestoreState.SkeletalMeshCompEditorParams.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.SkeletalMeshRestoreState.SkeletalMeshCompEditorParams.
                        AllocatorInstance.Data);
        }
      }
      if (param_1->bForcePersist != false) {
        if ((FVar5.Value == -1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("StorageIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                               ,0x200,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pbVar2 = (byte *)(lVar10 * 0x30 + 0x28 + *(longlong *)&this[-1].field_0x70);
        *pbVar2 = *pbVar2 | 2;
      }
    }
LAB_1468208c7:
    ppUVar11 = ppUVar11 + 1;
  } while( true );
}

// AsObjectStorage @ 1468ab290

IPreAnimatedObjectEntityStorage * __thiscall
UE::MovieScene::TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedVisibilityTraits>
::AsObjectStorage(TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedVisibilityTraits>
                  *this)

{
  IPreAnimatedObjectEntityStorage *pIVar1;
  
  pIVar1 = (IPreAnimatedObjectEntityStorage *)&this->field_0xd8;
  if (this == (TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedVisibilityTraits> *
              )0x0) {
    pIVar1 = (IPreAnimatedObjectEntityStorage *)0x0;
  }
  return pIVar1;
}

// BeginTrackingEntities @ 1468ab430

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedVisibilityTraits>
::BeginTrackingEntities
          (TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedVisibilityTraits> *this
          ,FPreAnimatedTrackerParams *param_1,TRead<UE::MovieScene::FMovieSceneEntityID> param_2,
          TRead<UE::MovieScene::FRootInstanceHandle> param_3,TRead<UObject_*> param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  UObject *pUVar4;
  FObjectKey FVar5;
  int iVar6;
  TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex> *pTVar7;
  byte bVar8;
  int local_res10 [2];
  FObjectKey local_a8;
  undefined1 local_a0 [8];
  FWeakObjectPtr local_98;
  longlong local_90;
  FPreAnimatedStateEntry local_88;
  TPairInitializer<FObjectKey_const_&,UE::MovieScene::FPreAnimatedStorageIndex_const_&> local_78;
  FPreAnimatedEntityCaptureSource *local_68;
  longlong local_60;
  FSparseArrayAllocationInfo local_58;
  FObjectKey *local_48;
  int *local_40;
  
  bVar2 = param_1->bWantsRestoreState;
  iVar6 = param_1->Num;
  if ((((*(FPreAnimatedStateExtension **)&this[-1].field_0xb8)->NumRequestsForGlobalState != 0) ||
      (bVar2 != false)) &&
     (local_68 = FPreAnimatedStateExtension::GetOrCreateEntityMetaData
                           (*(FPreAnimatedStateExtension **)&this[-1].field_0xb8), 0 < iVar6)) {
    local_90 = 0;
    bVar8 = bVar2;
    local_60 = (longlong)iVar6;
    do {
      local_a8.ObjectIndex = 0;
      local_a8.ObjectSerialNumber = 0;
      pUVar4 = *(UObject **)((longlong)param_4 + local_90 * 8);
      if (pUVar4 != (UObject *)0x0) {
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar4);
        }
        local_98.ObjectIndex = 0;
        local_98.ObjectSerialNumber = 0;
        local_78.Value = (FPreAnimatedStorageIndex *)pUVar4;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar4);
        }
        FWeakObjectPtr::operator=(&local_98,(FObjectPtr)&local_78.Value);
        local_a8.ObjectIndex = local_98.ObjectIndex;
        local_a8.ObjectSerialNumber = local_98.ObjectSerialNumber;
      }
      FBoundObjectPreAnimatedStateTraits::MakeGroupImpl
                ((FBoundObjectPreAnimatedStateTraits *)&this[-1].field_0xd0,(UObject *)local_a0);
      pTVar7 = TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                       *)&this[-1].field_0x20,&local_a8);
      FVar5 = local_a8;
      if ((pTVar7 == (TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex> *)0x0) ||
         (local_res10[0] = *(int *)&pTVar7->field_0x8, local_res10[0] == -1)) {
        local_res10[0] = -1;
        bVar8 = bVar8 & 0xfc;
        if (*(int *)&this[-1].field_0xa4 == 0) {
          iVar6 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0xc,4,1,(ForAnyElementType *)&this[-1].field_0x70,
                             (int *)&this[-1].field_0x78,(int *)&this[-1].field_0x7c);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&this[-1].field_0x80,false);
        }
        else {
          iVar6 = *(int *)&this[-1].field_0xa0;
          iVar1 = *(int *)&this[-1].field_0xa4 + -1;
          iVar3 = *(int *)(*(longlong *)&this[-1].field_0x70 + 4 + (longlong)iVar6 * 0xc);
          *(int *)&this[-1].field_0xa0 = iVar3;
          *(int *)&this[-1].field_0xa4 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)(*(longlong *)&this[-1].field_0x70 + (longlong)iVar3 * 0xc) = 0xffffffff;
          }
        }
        TSparseArrayBase<12,4,FDefaultSparseArrayAllocator>::AllocateIndex
                  ((TSparseArrayBase<12,4,FDefaultSparseArrayAllocator> *)&this[-1].field_0x70,
                   &local_58,iVar6);
        if (local_58.Pointer != (FWeakObjectPtr *)0x0) {
          *(FObjectKey *)local_58.Pointer = FVar5;
          *(undefined2 *)&((FWeakObjectPtr *)((longlong)local_58.Pointer + 8))->ObjectIndex = 0;
          *(undefined1 *)
           ((longlong)&((FWeakObjectPtr *)((longlong)local_58.Pointer + 8))->ObjectIndex + 2) = 0;
          *(byte *)((longlong)&((FWeakObjectPtr *)((longlong)local_58.Pointer + 8))->ObjectIndex + 3
                   ) = bVar8;
        }
        local_res10[0] = local_58.Index;
        local_48 = &local_a8;
        local_40 = local_res10;
        TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FObjectKey_const_&,UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                  ((TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                    *)&this[-1].field_0x20,&local_78,(bool *)&local_48);
      }
      local_88.GroupHandle.Value = local_a0._0_4_;
      local_88.ValueHandle.TypeID.TypeID = *(uint *)&this[-1].field_0xc8;
      local_88.ValueHandle.StorageIndex.Value = local_res10[0];
      FPreAnimatedEntityCaptureSource::BeginTrackingEntity
                (local_68,&local_88,(FMovieSceneEntityID)*(ushort *)param_2,
                 *(FRootInstanceHandle *)param_3,bVar2);
      param_3 = (TRead<UE::MovieScene::FRootInstanceHandle>)((longlong)param_3 + 4);
      local_90 = local_90 + 1;
      param_2 = (TRead<UE::MovieScene::FMovieSceneEntityID>)((longlong)param_2 + 2);
    } while (local_90 < local_60);
  }
  return;
}

// BeginTrackingEntity @ 1468ab6a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedVisibilityTraits>
::BeginTrackingEntity
          (TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedVisibilityTraits> *this
          ,FMovieSceneEntityID param_1,bool param_2,FRootInstanceHandle param_3,UObject *param_4)

{
  FPreAnimatedEntityCaptureSource *this_00;
  int local_res8;
  FObjectKey local_58;
  FWeakObjectPtr local_50;
  FWeakObjectPtr local_48;
  UObject *local_40;
  FPreAnimatedStateEntry local_38;
  
  if (((*(FPreAnimatedStateExtension **)&this[-1].field_0xb8)->NumRequestsForGlobalState != 0) ||
     (param_2)) {
    this_00 = FPreAnimatedStateExtension::GetOrCreateEntityMetaData
                        (*(FPreAnimatedStateExtension **)&this[-1].field_0xb8);
    local_48.ObjectIndex = 0;
    local_48.ObjectSerialNumber = 0;
    if (param_4 != (UObject *)0x0) {
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable(param_4);
      }
      local_50.ObjectIndex = 0;
      local_50.ObjectSerialNumber = 0;
      local_40 = param_4;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable(param_4);
      }
      FWeakObjectPtr::operator=(&local_50,(FObjectPtr)&local_40);
      local_48 = local_50;
    }
    TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedVisibilityTraits>::GetOrCreateStorageIndex
              ((TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedVisibilityTraits> *)
               &this[-1].field_0x8,&local_58);
    FBoundObjectPreAnimatedStateTraits::MakeGroupImpl
              ((FBoundObjectPreAnimatedStateTraits *)&this[-1].field_0xd0,(UObject *)&local_res8);
    local_38.GroupHandle.Value = local_res8;
    local_38.ValueHandle.TypeID.TypeID = *(uint *)&this[-1].field_0xc8;
    local_38.ValueHandle.StorageIndex.Value = local_58.ObjectIndex;
    FPreAnimatedEntityCaptureSource::BeginTrackingEntity(this_00,&local_38,param_1,param_3,param_2);
  }
  return;
}

// CachePreAnimatedValue @ 1468ac140

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedVisibilityTraits>
::CachePreAnimatedValue
          (TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedVisibilityTraits> *this
          ,FCachePreAnimatedValueParams *param_1,FPreAnimatedStateEntry *param_2,UObject *param_3)

{
  longlong lVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  EPreAnimatedStorageRequirement EVar7;
  bool bVar8;
  byte bVar9;
  UObject *pUVar10;
  UClass *pUVar11;
  FPreAnimatedVisibilityState *pFVar12;
  TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedVisibilityState>
  *pTVar13;
  undefined1 local_res10 [2];
  undefined1 uStackX_12;
  FPreAnimatedStorageIndex local_res18 [4];
  FPreAnimatedStorageIndex local_58 [2];
  FWeakObjectPtr local_50;
  FWeakObjectPtr local_48;
  UObject *local_40;
  
  iVar4 = (param_2->ValueHandle).StorageIndex.Value;
  EVar7 = FPreAnimatedStateExtension::GetStorageRequirement
                    (*(FPreAnimatedStateExtension **)&this->field_0xb0,param_2);
  local_58[0].Value = iVar4;
  if (iVar4 == -1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("StorageIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                       ,0x1b6,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar1 = *(longlong *)&this->field_0x68 + (longlong)iVar4 * 0xc;
  if (EVar7 == Persistent) {
    bVar8 = (*(byte *)(lVar1 + 0xb) & 1) == 0;
  }
  else {
    if ((EVar7 != Transient) ||
       ((bVar3 = *(byte *)(lVar1 + 0xb), (bVar3 & 1) != 0 && ((bVar3 & 2) == 0))))
    goto LAB_1468ac40a;
    pFVar12 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedVisibilityState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
              ::Find((TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedVisibilityState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                      *)&this->field_0xa0,local_58);
    bVar8 = pFVar12 == (FPreAnimatedVisibilityState *)0x0;
  }
  if (!bVar8) goto LAB_1468ac40a;
  local_48.ObjectIndex = 0;
  local_48.ObjectSerialNumber = 0;
  if (param_3 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(param_3);
    }
    local_50.ObjectIndex = 0;
    local_50.ObjectSerialNumber = 0;
    local_40 = param_3;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(param_3);
    }
    FWeakObjectPtr::operator=(&local_50,(FObjectPtr)&local_40);
    local_48.ObjectIndex = local_50.ObjectIndex;
    local_48.ObjectSerialNumber = local_50.ObjectSerialNumber;
  }
  pUVar10 = FWeakObjectPtr::Get(&local_48);
  if (pUVar10 == (UObject *)0x0) {
LAB_1468ac28a:
    if (pUVar10 != (UObject *)0x0) {
      pUVar11 = Z_Construct_UClass_USceneComponent_NoRegister();
      iVar5 = (int)pUVar11->_padding_;
      if ((iVar5 <= *(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar5 * 8) ==
          &pUVar11->_padding_)) {
        bVar3 = pUVar10[10].field_0x19;
        bVar9 = (**(code **)(*(longlong *)pUVar10 + 0x5d0))(pUVar10);
        _local_res10 = (uint3)bVar9 << 0x10;
        _local_res10 = CONCAT21(stack0x00000011,bVar3 >> 3) & 0xffff01;
        local_res10 = (undefined1  [2])CONCAT11(0,local_res10[0]);
        goto LAB_1468ac2e1;
      }
    }
    _local_res10 = 0;
  }
  else {
    pUVar11 = Z_Construct_UClass_AActor_NoRegister();
    iVar5 = (int)pUVar11->_padding_;
    if ((*(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38) < iVar5) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar5 * 8) !=
        &pUVar11->_padding_)) goto LAB_1468ac28a;
    _local_res10 = (uint3)((byte)pUVar10[2].field_0x8 >> 7);
  }
LAB_1468ac2e1:
  local_res18[0].Value = iVar4;
  if (iVar4 == -1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("StorageIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                       ,0x195,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar1 = *(longlong *)&this->field_0x68 + (longlong)local_res18[0].Value * 0xc;
  if (EVar7 == Persistent) {
    if ((*(byte *)(lVar1 + 0xb) & 1) != 0) {
      bVar8 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3111672766223352219>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                         ,0x19b,"!CachedData.bInitialized");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    *(byte *)(lVar1 + 0xb) = *(byte *)(lVar1 + 0xb) | 3;
    *(undefined1 (*) [2])(lVar1 + 8) = local_res10;
    *(undefined1 *)(lVar1 + 10) = uStackX_12;
  }
  else if (EVar7 == Transient) {
    if ((*(byte *)(lVar1 + 0xb) & 1) != 0) {
      pFVar12 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedVisibilityState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                ::Find((TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedVisibilityState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                        *)&this->field_0xa0,local_res18);
      if (pFVar12 != (FPreAnimatedVisibilityState *)0x0) {
        bVar8 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3111672766223352226>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                           ,0x1a2,
                           "!CachedData.bInitialized || !TransientPreAnimatedStorage.Contains(StorageIndex)"
                          );
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
    }
    if ((*(byte *)(lVar1 + 0xb) & 1) == 0) {
      *(undefined1 (*) [2])(lVar1 + 8) = local_res10;
      *(undefined1 *)(lVar1 + 10) = uStackX_12;
      *(byte *)(lVar1 + 0xb) = *(byte *)(lVar1 + 0xb) | 1;
    }
    else {
      pTVar13 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedVisibilityState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                ::AllocateMemoryForEmplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&>
                          ((TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedVisibilityState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                            *)&this->field_0xa0,local_res18);
      *(int *)pTVar13 = local_res18[0].Value;
      *(undefined1 (*) [2])&pTVar13->field_0x4 = local_res10;
      pTVar13->field_0x6 = uStackX_12;
    }
  }
LAB_1468ac40a:
  if (param_1->bForcePersist != false) {
    if (iVar4 == -1) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StorageIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                         ,0x200,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pbVar2 = (byte *)(*(longlong *)&this->field_0x68 + 0xb + (longlong)iVar4 * 0xc);
    *pbVar2 = *pbVar2 | 2;
  }
  return;
}

// CachePreAnimatedValues @ 1468ac890

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedVisibilityTraits>
::CachePreAnimatedValues
          (TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedVisibilityTraits> *this
          ,FCachePreAnimatedValueParams *param_1,TArrayView<UObject_*_const,int> *param_2)

{
  FWeakObjectPtr *pFVar1;
  FWeakObjectPtr FVar2;
  FPreAnimatedStateExtension *this_00;
  bool bVar3;
  bool bVar4;
  TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex> *pTVar5;
  FWeakObjectPtr *pFVar6;
  FWeakObjectPtr local_res18;
  int local_res20;
  undefined1 local_78 [8];
  FWeakObjectPtr local_70;
  FWeakObjectPtr local_68;
  FWeakObjectPtr local_60;
  FPreAnimatedStateEntry local_58;
  FPreAnimatedStateEntry local_48;
  
  pFVar6 = (FWeakObjectPtr *)param_2->DataPtr;
  pFVar1 = pFVar6 + param_2->ArrayNum;
  do {
    if (pFVar6 == pFVar1) {
      return;
    }
    FVar2 = *pFVar6;
    if (FVar2 == (FWeakObjectPtr)0x0) goto LAB_1468aca6f;
    if (**(int **)&this[-1].field_0xb8 == 0) {
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable((UObject *)FVar2);
      }
      local_70.ObjectIndex = 0;
      local_70.ObjectSerialNumber = 0;
      local_res18 = FVar2;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable((UObject *)FVar2);
      }
      FWeakObjectPtr::operator=(&local_70,(FObjectPtr)&local_res18);
      local_res18 = local_70;
      FBoundObjectPreAnimatedStateTraits::FindGroupImpl
                ((FBoundObjectPreAnimatedStateTraits *)&this[-1].field_0xd0,(UObject *)&local_res20)
      ;
      pTVar5 = TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                       *)&this[-1].field_0x20,(FObjectKey *)&local_res18);
      if (pTVar5 == (TTuple<FObjectKey,UE::MovieScene::FPreAnimatedStorageIndex> *)0x0) {
        local_58.GroupHandle.Value = local_res20;
        local_58.ValueHandle.TypeID.TypeID = *(uint *)&this[-1].field_0xc8;
        local_58.ValueHandle.StorageIndex.Value = -1;
      }
      else {
        local_58.ValueHandle.StorageIndex.Value = *(int *)&pTVar5->field_0x8;
        local_58.GroupHandle.Value = local_res20;
        local_58.ValueHandle.TypeID.TypeID = *(uint *)&this[-1].field_0xc8;
        if (local_58.ValueHandle.StorageIndex.Value != -1) {
          bVar3 = FPreAnimatedStateExtension::MetaDataExists
                            (*(FPreAnimatedStateExtension **)&this[-1].field_0xb8,&local_58);
          if (bVar3) {
LAB_1468ac98e:
            bVar3 = true;
          }
          else {
            bVar4 = `UE::MovieScene::
                    TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedVisibilityTraits>::
                    ShouldTrackCaptureSource<UObject_*_&>'::__l11::<lambda_1>::operator()
                              (&local_res18);
            bVar3 = false;
            if (bVar4) goto LAB_1468ac98e;
          }
          if (bVar3) goto LAB_1468ac998;
        }
      }
    }
    else {
LAB_1468ac998:
      local_60.ObjectIndex = 0;
      local_60.ObjectSerialNumber = 0;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable((UObject *)FVar2);
      }
      local_68.ObjectIndex = 0;
      local_68.ObjectSerialNumber = 0;
      local_res18 = FVar2;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable((UObject *)FVar2);
      }
      FWeakObjectPtr::operator=(&local_68,(FObjectPtr)&local_res18);
      local_60 = local_68;
      TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedVisibilityTraits>::
      GetOrCreateStorageIndex
                ((TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedVisibilityTraits> *)
                 &this[-1].field_0x8,(FObjectKey *)(local_78 + 4));
      FBoundObjectPreAnimatedStateTraits::MakeGroupImpl
                ((FBoundObjectPreAnimatedStateTraits *)&this[-1].field_0xd0,(UObject *)local_78);
      this_00 = *(FPreAnimatedStateExtension **)&this[-1].field_0xb8;
      local_48.GroupHandle.Value = local_78._0_4_;
      local_48.ValueHandle.TypeID.TypeID = *(uint *)&this[-1].field_0xc8;
      local_48.ValueHandle.StorageIndex.Value = local_78._4_4_;
      if (this_00->NumRequestsForGlobalState == 0) {
        if ((local_78._4_4_ == -1) ||
           (bVar3 = FPreAnimatedStateExtension::MetaDataExists(this_00,&local_48), !bVar3)) {
          `UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedVisibilityTraits>::
          TrackCaptureSource'::__l5::<lambda_1>::operator()(&local_res18);
        }
      }
      else {
        FPreAnimatedStateExtension::EnsureMetaData(this_00,&local_48);
      }
      CachePreAnimatedValue
                ((TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedVisibilityTraits>
                  *)&this[-1].field_0x8,param_1,&local_48,(UObject *)FVar2);
    }
LAB_1468aca6f:
    pFVar6 = pFVar6 + 1;
  } while( true );
}

