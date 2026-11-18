// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 5

// FBoundObjectTask @ 14608f390

/* WARNING: Enum "Type": Some values do not have unique names */

FBoundObjectTask * __thiscall
UE::MovieScene::FBoundObjectTask::FBoundObjectTask
          (FBoundObjectTask *this,UMovieSceneEntitySystemLinker *param_1)

{
  *(undefined8 *)&this->StaleEntitiesToPreserve = 0;
  *(undefined8 *)&(this->StaleEntitiesToPreserve).field_0x8 = 0;
  *(undefined8 *)&(this->StaleEntitiesToPreserve).field_0x20 = 0;
  *(undefined4 *)&(this->StaleEntitiesToPreserve).field_0x28 = 0;
  *(undefined4 *)&(this->StaleEntitiesToPreserve).field_0x2c = 0x80;
  *(undefined4 *)&(this->StaleEntitiesToPreserve).field_0x34 = 0;
  *(undefined4 *)&(this->StaleEntitiesToPreserve).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->StaleEntitiesToPreserve).field_0x40 = 0;
  *(undefined4 *)&(this->StaleEntitiesToPreserve).field_0x48 = 0;
  *(undefined8 *)&this->Batches = 0;
  *(undefined8 *)&(this->Batches).field_0x8 = 0;
  *(undefined8 *)&(this->Batches).field_0x20 = 0;
  *(undefined4 *)&(this->Batches).field_0x28 = 0;
  *(undefined4 *)&(this->Batches).field_0x2c = 0x80;
  *(undefined4 *)&(this->Batches).field_0x34 = 0;
  *(undefined4 *)&(this->Batches).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Batches).field_0x40 = 0;
  *(undefined4 *)&(this->Batches).field_0x48 = 0;
  (this->EntitiesToDiscard).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EntitiesToDiscard).ArrayNum = 0;
  (this->EntitiesToDiscard).ArrayMax = 0;
  (this->EntityMutations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EntityMutations).ArrayNum = 0;
  (this->EntityMutations).ArrayMax = 0;
  this->Linker = param_1;
  return this;
}

// Apply @ 1460aab10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::MovieScene::FBoundObjectTask::Apply(FBoundObjectTask *this)

{
  undefined1 *puVar1;
  TMap<UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::FObjectFactoryBatch,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::FObjectFactoryBatch,0>_>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  TMap<UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::FObjectFactoryBatch,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::FObjectFactoryBatch,0>_>
  *pTVar7;
  bool bVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  int local_res10;
  FEntityAllocationProxy local_a8;
  TMap<UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::FObjectFactoryBatch,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::FObjectFactoryBatch,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::FObjectFactoryBatch,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::FObjectFactoryBatch,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar4 = *(int *)&(this->Batches).field_0x28;
  puVar1 = &(this->Batches).field_0x10;
  iStack_90 = 0;
  pTVar2 = &this->Batches;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar4 != 0) {
    puVar15 = *(uint **)&(this->Batches).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar13 = *puVar15;
    while (uVar13 == 0) {
      lVar9 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_1460aabad;
      uVar13 = puVar15[lVar9 + 1];
    }
    uStack_8c = -uVar13 & uVar13;
    uVar3 = (ulonglong)uStack_8c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iStack_7c = local_res10 + -1 + local_78;
    if (iVar4 < iStack_7c) {
      iStack_7c = iVar4;
    }
  }
LAB_1460aabad:
  uVar13 = *(uint *)&(this->Batches).field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  iStack_70 = *(int *)&(this->Batches).field_0x8 - *(int *)&(this->Batches).field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar13 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = pTVar2;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = pTVar2;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(uint *)&(this->Batches).field_0x28;
  if (uVar13 != uVar5) {
    puVar14 = *(undefined1 **)&(this->Batches).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar11 * 4);
    while (uVar13 == 0) {
      lVar9 = (longlong)iVar11;
      uVar12 = uVar12 + 0x20;
      iVar11 = iVar11 + 1;
      uVar13 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1460aacb0;
      uVar13 = *(uint *)(puVar14 + lVar9 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar13 = (int)lVar9 + -1 + uVar12;
    if ((int)uVar5 < (int)uVar13) {
      uVar13 = uVar5;
    }
  }
LAB_1460aacb0:
  while( true ) {
    pTVar7 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::FObjectFactoryBatch>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar13) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar2))
    break;
    lVar10 = (longlong)TStack_60.CurrentBitIndex * 0x68;
    lVar9 = *(longlong *)pTVar7;
    if (*(int *)(lVar10 + 0x30 + lVar9) != 0) {
      local_a8.Manager = *(FEntityManager **)(lVar10 + lVar9);
      local_a8._8_8_ = ((undefined8 *)(lVar10 + lVar9))[1];
      FChildEntityFactory::Apply
                ((FChildEntityFactory *)(lVar10 + lVar9 + 0x10),this->Linker,&local_a8);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEachAllocation @ 1460c6670

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FBoundObjectTask::ForEachAllocation
          (FBoundObjectTask *this,FEntityAllocationProxy *param_1,
          TRead<UE::MovieScene::FMovieSceneEntityID> param_2,
          TRead<UE::MovieScene::FInstanceHandle> param_3,TRead<FGuid> param_4,
          TReadOptional<UObject_*_(__cdecl*)(UObject_*)> param_5)

{
  int *piVar1;
  FWeakObjectPtr *pFVar2;
  FGuid *pFVar3;
  UMovieSceneEntitySystemLinker *pUVar4;
  TReferenceControllerBase<1> *pTVar5;
  FSharedPlaybackState *this_00;
  UObjectBaseUtility *this_01;
  code *pcVar6;
  bool bVar7;
  FEntityManager *this_02;
  FGuid *pFVar8;
  bool bVar9;
  EEntityThreadingModel EVar10;
  bool bVar11;
  char cVar12;
  bool bVar13;
  ushort uVar14;
  uint uVar15;
  int iVar16;
  FEntityAllocation *pFVar17;
  FBuiltInComponentTypes *pFVar18;
  undefined8 *puVar19;
  FUObjectItem *pFVar20;
  UClass *pUVar21;
  UObject *pUVar22;
  FScriptContainerElement *pFVar23;
  ulonglong uVar24;
  longlong lVar25;
  TArray<UE::MovieScene::FBoundObjectTask::FEntityMutationData,TSizedDefaultAllocator<32>_> *pTVar26
  ;
  FComponentHeader *pFVar27;
  FMovieSceneEntityID FVar28;
  EComponentHeaderLockMode EVar29;
  TComponentTypeID<UObject_*> TVar30;
  longlong lVar31;
  ushort uVar32;
  longlong lVar33;
  FWeakObjectPtr *pFVar34;
  uint local_res10;
  undefined1 local_157;
  ushort local_156;
  undefined4 local_154;
  ushort local_150;
  undefined4 local_14e;
  ushort local_14a;
  int local_148 [2];
  int local_140;
  FEntityManager *local_138;
  ushort local_130 [2];
  TComponentTypeID<UObject_*> local_12c;
  ushort local_12a;
  longlong local_128;
  FEntityManager *local_120;
  FComponentHeader *local_118;
  undefined8 local_110;
  FMovieSceneSequenceID local_108;
  undefined4 local_104;
  undefined2 local_100;
  longlong local_f8;
  FGuid *local_f0;
  FComponentHeader *local_e8;
  undefined8 local_e0;
  uchar *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  TPairInitializer<TTuple<UObject_*,UE::MovieScene::FMovieSceneEntityID>_&&,UE::MovieScene::FMovieSceneEntityID_const_&>
  local_b8;
  FInstanceRegistry *local_a8;
  FWeakObjectPtr local_98;
  longlong local_90;
  ulonglong local_88;
  undefined8 local_80;
  ushort local_78;
  undefined8 *local_70;
  ushort *local_68;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_60 [2];
  
  pFVar17 = FEntityAllocationProxy::GetAllocation(param_1);
  pFVar18 = FBuiltInComponentTypes::Get();
  uVar32 = (pFVar18->Tags).HasUnresolvedBinding.Value;
  local_118 = pFVar17->ComponentHeaders;
  pFVar27 = local_118 + pFVar17->NumComponents;
  for (; local_118 != pFVar27; local_118 = local_118 + 1) {
    if ((local_118->ComponentType).Value == uVar32) goto LAB_1460c66f2;
  }
  local_118 = (FComponentHeader *)0x0;
LAB_1460c66f2:
  local_156 = uVar32;
  local_b8.Value = (FMovieSceneEntityID *)param_1;
  TSet<TTuple<UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::FObjectFactoryBatch>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::FObjectFactoryBatch,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<UE::MovieScene::FEntityAllocationProxy_&>_>
            ((TSet<TTuple<UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::FObjectFactoryBatch>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::FObjectFactoryBatch,0>,FDefaultSetAllocator>
              *)&this->Batches,
             (TKeyInitializer<UE::MovieScene::FEntityAllocationProxy_&> *)&local_110,
             (bool *)&local_b8.Value);
  local_90 = (longlong)(int)local_110 * 0x68 + *(longlong *)&this->Batches;
  *(FBoundObjectTask **)(local_90 + 0x38) = this;
  uVar24 = (ulonglong)pFVar17->Size;
  pFVar18 = FBuiltInComponentTypes::Get();
  local_e8 = pFVar17->ComponentHeaders;
  pFVar27 = local_e8 + pFVar17->NumComponents;
  for (; local_e8 != pFVar27; local_e8 = local_e8 + 1) {
    if ((TComponentTypeID<TObjectPtr<UMovieSceneCondition_const_>_>)(local_e8->ComponentType).Value
        == pFVar18->Condition) {
      EVar29 = pFVar17->LockMode;
      if (EVar29 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&local_e8->ReadWriteLock);
      }
      LOCK();
      local_e8->ScheduledAccessCount = (atomic<int>)((int)local_e8->ScheduledAccessCount + 1);
      UNLOCK();
      local_d8 = local_e8->Components;
      local_e0 = CONCAT44(local_e0._4_4_,EVar29);
      goto LAB_1460c6766;
    }
  }
  local_d8 = (uchar *)0x0;
  EVar29 = LockFree;
  local_e0 = 0;
  local_e8 = (FComponentHeader *)0x0;
LAB_1460c6766:
  pFVar27 = local_e8;
  pUVar4 = this->Linker;
  if (((pUVar4->InstanceRegistry).Ptr == (FInstanceRegistry *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstanceRegistry.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                         ,0x96,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_a8 = (pUVar4->InstanceRegistry).Ptr;
  pFVar18 = FBuiltInComponentTypes::Get();
  local_140 = 0;
  TVar30 = pFVar18->BoundObject;
  local_12c = TVar30;
  local_88 = uVar24;
  if (uVar24 != 0) {
    local_128 = 0;
    do {
      FVar28.Value = *(ushort *)((longlong)param_2 + local_128 * 2);
      local_res10 = (this->EntitiesToDiscard).ArrayNum;
      uVar24 = (ulonglong)(int)local_res10;
      local_12a = FVar28.Value;
      FEntityManager::GetImmediateChildren
                (&this->Linker->EntityManager,FVar28,&this->EntitiesToDiscard);
      if ((int)local_res10 < (this->EntitiesToDiscard).ArrayNum) {
        lVar33 = uVar24 * 2;
        do {
          uVar15 = 0;
          if ((int)(uint)uVar24 < (this->EntitiesToDiscard).ArrayNum) {
            uVar15 = ~(uint)uVar24 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_138 = &this->Linker->EntityManager;
          local_130[0] = *(ushort *)((this->EntitiesToDiscard).AllocatorInstance.Data + lVar33);
          uVar24 = (ulonglong)local_130[0];
          if ((local_130[0] == 0xffff) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Entity",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityManager.h"
                                 ,0x1a8,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (TVar30 != (TComponentTypeID<UObject_*>)0xffff) {
            local_104 = *(uint *)(*(longlong *)&local_138->EntityLocations + uVar24 * 8);
            local_100 = *(undefined2 *)(*(longlong *)&local_138->EntityLocations + 4 + uVar24 * 8);
            if ((short)local_104 != -1) {
              lVar31 = (ulonglong)(local_104 & 0xffff) * 0x38 +
                       *(longlong *)&local_138->EntityAllocationMasks;
              if (((int)(uint)(ushort)TVar30 < *(int *)(lVar31 + 0x30)) &&
                 ((*(uint *)(lVar31 + (ulonglong)((ushort)TVar30 >> 5) * 4) >>
                   ((ushort)TVar30 & 0x1f) & 1) != 0)) {
                lVar31 = *(longlong *)
                          (*(longlong *)&local_138->EntityAllocations +
                          (ulonglong)(local_104 & 0xffff) * 8);
                EVar10 = FEntityManager::GetThreadingModel(local_138);
                local_138 = (FEntityManager *)
                            CONCAT44(local_138._4_4_,(uint)(EVar10 != NoThreading));
                local_f8 = *(longlong *)(lVar31 + 0x28);
                for (lVar25 = local_f8;
                    lVar25 != (ulonglong)*(ushort *)(lVar31 + 0xc) * 0x38 + local_f8;
                    lVar25 = lVar25 + 0x38) {
                  if (*(TComponentTypeID<UObject_*> *)(lVar25 + 0x36) == TVar30) {
                    if (EVar10 != NoThreading) {
                      AcquireSRWLockShared((PSRWLOCK)(lVar25 + 0x20));
                    }
                    LOCK();
                    *(int *)(lVar25 + 0x30) = *(int *)(lVar25 + 0x30) + 1;
                    UNLOCK();
                    uStack_c8 = CONCAT44(uStack_c8._4_4_,local_138._0_4_);
                    puVar19 = (undefined8 *)
                              (*(longlong *)(lVar25 + 0x18) + (ulonglong)local_104._2_2_ * 8);
                    goto LAB_1460c6996;
                  }
                }
              }
            }
          }
          puVar19 = (undefined8 *)0x0;
          local_d0 = 0;
          uStack_c8 = 0;
          local_c0 = 0;
          lVar25 = 0;
LAB_1460c6996:
          if (puVar19 != (undefined8 *)0x0) {
            local_80 = *puVar19;
            local_70 = &local_80;
            local_68 = local_130;
            local_78 = FVar28.Value;
            TSet<TTuple<TTuple<UObject_*,UE::MovieScene::FMovieSceneEntityID>,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<TTuple<UObject_*,UE::MovieScene::FMovieSceneEntityID>,UE::MovieScene::FMovieSceneEntityID,0>,FDefaultSetAllocator>
            ::
            Emplace<TPairInitializer<TTuple<UObject_*,UE::MovieScene::FMovieSceneEntityID>_&&,UE::MovieScene::FMovieSceneEntityID_const_&>_>
                      ((TSet<TTuple<TTuple<UObject_*,UE::MovieScene::FMovieSceneEntityID>,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<TTuple<UObject_*,UE::MovieScene::FMovieSceneEntityID>,UE::MovieScene::FMovieSceneEntityID,0>,FDefaultSetAllocator>
                        *)this,&local_b8,(bool *)&local_70);
          }
          if (lVar25 != 0) {
            LOCK();
            *(int *)(lVar25 + 0x30) = *(int *)(lVar25 + 0x30) + -1;
            UNLOCK();
            if ((int)uStack_c8 == 1) {
              ReleaseSRWLockShared((PSRWLOCK)(lVar25 + 0x20));
            }
          }
          lVar33 = lVar33 + 2;
          local_res10 = local_res10 + 1;
          uVar24 = (ulonglong)local_res10;
          uVar32 = local_156;
        } while ((int)local_res10 < (this->EntitiesToDiscard).ArrayNum);
      }
      local_138 = (FEntityManager *)
                  ((ulonglong)*(ushort *)((longlong)param_3 + local_128 * 4) * 0x140 +
                  *(longlong *)&local_a8->Instances);
      pTVar5 = *(TReferenceControllerBase<1> **)&local_138->InstancedChildInitializers;
      this_00 = *(FSharedPlaybackState **)&(local_138->ParentToChild).field_0x48;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_110._4_4_ = *(undefined4 *)&(local_138->InstancedChildInitializers).field_0x8;
      local_f0 = (FGuid *)((longlong)local_140 * 0x10 + (longlong)param_4);
      FSharedPlaybackState::FindBoundObjects
                (this_00,local_60,local_f0,(FMovieSceneSequenceID *)((longlong)&local_110 + 4));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      pFVar8 = local_f0;
      this_02 = local_138;
      bVar9 = false;
      bVar13 = false;
      pFVar2 = &local_60[0].DataPtr[local_60[0].ArrayNum].WeakPtr;
      if (&(local_60[0].DataPtr)->WeakPtr == pFVar2) {
LAB_1460c6e70:
        if (local_118 == (FComponentHeader *)0x0) {
          pTVar26 = &this->EntityMutations;
          local_14e = CONCAT22(uVar32,FVar28.Value);
          local_14a = CONCAT11(local_14a._1_1_,1);
          pFVar23 = (pTVar26->AllocatorInstance).Data;
          if (((pFVar23 <= (FScriptContainerElement *)&local_14e) &&
              ((FScriptContainerElement *)&local_14e <
               pFVar23 + (longlong)(this->EntityMutations).ArrayMax * 6)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar16 = (this->EntityMutations).ArrayNum;
          piVar1 = &(this->EntityMutations).ArrayMax;
          if (iVar16 == *piVar1) {
            iVar16 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x206,&pTVar26->AllocatorInstance,piVar1);
          }
          (this->EntityMutations).ArrayNum = iVar16 + 1;
          pFVar23 = (pTVar26->AllocatorInstance).Data + (longlong)iVar16 * 6;
          *(undefined4 *)pFVar23 = local_14e;
          uVar14 = local_14a;
LAB_1460c6f3f:
          *(ushort *)(pFVar23 + 4) = uVar14;
        }
      }
      else {
        bVar7 = false;
        pFVar34 = &(local_60[0].DataPtr)->WeakPtr;
        do {
          local_98 = *pFVar34;
          local_138 = (FEntityManager *)FWeakObjectPtr::Get(&local_98);
          if (param_5 == (TReadOptional<UObject_*_(__cdecl*)(UObject_*)>)0x0) {
LAB_1460c6af8:
            if (local_138 != (FEntityManager *)0x0) {
              if (((*(uint *)&local_138->EntityAllocationMasks >> 0x1e & 1) != 0) ||
                 (pFVar20 = FUObjectArray::IndexToObject
                                      (&GUObjectArray,
                                       *(int *)&(local_138->EntityAllocationMasks).field_0x4),
                 ((uint)((ulonglong)(pFVar20->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) != 0)) {
                local_157 = 0;
                bVar11 = `UE::MovieScene::FBoundObjectTask::ForEachAllocation'::__l20::<lambda_1>::
                         operator()(&local_157);
                if (!bVar11) goto LAB_1460c6d18;
              }
              bVar11 = !bVar9;
              bVar9 = bVar13;
              if ((bVar11) && (local_d8 != (uchar *)0x0)) {
                pFVar3 = (FGuid *)(local_d8 + local_128 * 8);
                local_f0 = pFVar3;
                if ((*(longlong **)(local_d8 + local_128 * 8) != (longlong *)0x0) &&
                   (cVar12 = (**(code **)(**(longlong **)(local_d8 + local_128 * 8) + 0x2d8))(),
                   cVar12 != '\0')) {
                  this_01 = *(UObjectBaseUtility **)pFVar3;
                  bVar9 = true;
                  pUVar21 = Z_Construct_UClass_UMovieSceneSignedObject_NoRegister();
                  pUVar22 = UObjectBaseUtility::GetTypedOuter(this_01,pUVar21);
                  local_108.Value = *(uint *)&(this_02->InstancedChildInitializers).field_0x8;
                  bVar13 = FSequenceInstance::EvaluateCondition
                                     ((FSequenceInstance *)this_02,pFVar8,&local_108,
                                      *(UMovieSceneCondition **)local_f0,pUVar22);
                  if (!bVar13) break;
                }
              }
              lVar33 = local_90;
              local_120 = local_138;
              local_148[0] = local_140;
              if (((*(int **)(local_90 + 0x28) <= local_148) &&
                  (local_148 < *(int **)(local_90 + 0x28) + *(int *)(local_90 + 0x34))) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar13)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iVar16 = *(int *)(lVar33 + 0x30);
              if (iVar16 == *(int *)(lVar33 + 0x34)) {
                iVar16 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,(ForAnyElementType *)(lVar33 + 0x28),
                                    (int *)(lVar33 + 0x34));
              }
              *(int *)(lVar33 + 0x30) = iVar16 + 1;
              *(int *)(*(longlong *)(lVar33 + 0x28) + (longlong)iVar16 * 4) = local_148[0];
              if (((*(FEntityManager ***)(lVar33 + 0x50) <= &local_120) &&
                  (&local_120 < *(FEntityManager ***)(lVar33 + 0x50) + *(int *)(lVar33 + 0x5c))) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar13)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iVar16 = *(int *)(lVar33 + 0x58);
              if (iVar16 == *(int *)(lVar33 + 0x5c)) {
                iVar16 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,(ForAnyElementType *)(lVar33 + 0x50),
                                    (int *)(lVar33 + 0x5c));
              }
              *(int *)(lVar33 + 0x58) = iVar16 + 1;
              bVar7 = true;
              *(FEntityManager **)(*(longlong *)(lVar33 + 0x50) + (longlong)iVar16 * 8) = local_120;
              bVar13 = bVar9;
            }
          }
          else if (local_138 != (FEntityManager *)0x0) {
            local_138 = (FEntityManager *)(**(code **)((longlong)param_5 + local_128 * 8))();
            goto LAB_1460c6af8;
          }
LAB_1460c6d18:
          pFVar34 = pFVar34 + 1;
        } while (pFVar34 != pFVar2);
        TVar30 = local_12c;
        uVar32 = local_156;
        FVar28.Value = local_12a;
        if (!bVar7) goto LAB_1460c6e70;
        if (local_118 != (FComponentHeader *)0x0) {
          pTVar26 = &this->EntityMutations;
          local_154 = CONCAT22(local_156,local_12a);
          local_150 = local_150 & 0xff00;
          pFVar23 = (pTVar26->AllocatorInstance).Data;
          if (((pFVar23 <= (FScriptContainerElement *)&local_154) &&
              ((FScriptContainerElement *)&local_154 <
               pFVar23 + (longlong)(this->EntityMutations).ArrayMax * 6)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar16 = (this->EntityMutations).ArrayNum;
          piVar1 = &(this->EntityMutations).ArrayMax;
          if (iVar16 == *piVar1) {
            iVar16 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x206,&pTVar26->AllocatorInstance,piVar1);
          }
          (this->EntityMutations).ArrayNum = iVar16 + 1;
          pFVar23 = (pTVar26->AllocatorInstance).Data + (longlong)iVar16 * 6;
          *(undefined4 *)pFVar23 = local_154;
          uVar14 = local_150;
          goto LAB_1460c6f3f;
        }
      }
      local_128 = local_128 + 1;
      local_140 = local_140 + 1;
    } while (local_128 < (longlong)local_88);
    pFVar27 = local_e8;
    EVar29 = (EComponentHeaderLockMode)local_e0;
  }
  if (pFVar27 != (FComponentHeader *)0x0) {
    LOCK();
    pFVar27->ScheduledAccessCount = (atomic<int>)((int)pFVar27->ScheduledAccessCount + -1);
    UNLOCK();
    if (EVar29 == Mutex) {
      ReleaseSRWLockShared((PSRWLOCK)&pFVar27->ReadWriteLock);
    }
  }
  return;
}

// PostTask @ 1460e0c00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::MovieScene::FBoundObjectTask::PostTask(FBoundObjectTask *this)

{
  FScriptContainerElement *pFVar1;
  FComponentTypeID FVar2;
  int iVar3;
  undefined4 uVar4;
  FBuiltInComponentTypes *pFVar5;
  FEntityManager *this_00;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  
  Apply(this);
  pFVar5 = FBuiltInComponentTypes::Get();
  pFVar6 = (this->EntitiesToDiscard).AllocatorInstance.Data;
  iVar3 = (this->EntitiesToDiscard).ArrayNum;
  FVar2.Value = (pFVar5->Tags).NeedsUnlink.Value;
  pFVar1 = pFVar6 + (longlong)iVar3 * 2;
  while( true ) {
    if ((this->EntitiesToDiscard).ArrayNum != iVar3) {
      `TCheckedPointerIterator<UE::MovieScene::FMovieSceneEntityID,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar1) break;
    FEntityManager::AddComponent
              (&this->Linker->EntityManager,(FMovieSceneEntityID)*(ushort *)pFVar6,FVar2,Full);
    pFVar6 = pFVar6 + 2;
  }
  iVar3 = (this->EntityMutations).ArrayNum;
  pFVar6 = (this->EntityMutations).AllocatorInstance.Data;
  pFVar1 = pFVar6 + (longlong)iVar3 * 6;
  while( true ) {
    if ((this->EntityMutations).ArrayNum != iVar3) {
      `TCheckedPointerIterator<UE::MovieScene::FBoundObjectTask::FEntityMutationData,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar1) break;
    uVar4 = *(undefined4 *)pFVar6;
    this_00 = &this->Linker->EntityManager;
    local_res10._2_2_ = (ushort)((uint)uVar4 >> 0x10);
    FVar2.Value = local_res10._2_2_;
    local_res10 = uVar4;
    if (pFVar6[4] == (FScriptContainerElement)0x0) {
      FEntityManager::RemoveComponent(this_00,(FMovieSceneEntityID)(ushort)uVar4,FVar2);
      pFVar6 = pFVar6 + 6;
    }
    else {
      FEntityManager::AddComponent(this_00,(FMovieSceneEntityID)(ushort)uVar4,FVar2);
      pFVar6 = pFVar6 + 6;
    }
  }
  return;
}

// operator() @ 1504e2da0

bool __thiscall
`UE::MovieScene::FBoundObjectTask::ForEachAllocation'::__l20::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1836295383160979228>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1836295383160979228>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

