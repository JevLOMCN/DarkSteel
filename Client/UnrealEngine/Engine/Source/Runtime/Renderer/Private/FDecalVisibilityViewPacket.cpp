// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// FDecalVisibilityViewPacket @ 1447f2fc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FDecalVisibilityViewPacket * __thiscall
FDecalVisibilityViewPacket::FDecalVisibilityViewPacket
          (FDecalVisibilityViewPacket *this,FDecalVisibilityTaskData *param_1,FScene *param_2,
          FViewInfo *param_3)

{
  TMap<EDecalRenderStage,FDecalVisibilityViewPacket::FRelevantDecals,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDecalRenderStage,FDecalVisibilityViewPacket::FRelevantDecals,0>_>
  *this_00;
  undefined1 *puVar1;
  FTaskHandle *pFVar2;
  atomic<unsigned_int> *paVar3;
  atomic<unsigned_int> aVar4;
  int iVar5;
  undefined1 *puVar6;
  FViewInfo *pFVar7;
  FTaskBase *pFVar8;
  code *pcVar9;
  int *piVar10;
  bool bVar11;
  FTaskEvent FVar12;
  ulonglong uVar13;
  FTaskBase *pFVar14;
  undefined8 *puVar15;
  FDecalVisibilityViewPacket *pFVar16;
  undefined1 *puVar17;
  EDecalRenderStage EVar18;
  ulonglong uVar19;
  longlong lVar20;
  EExtendedTaskPriority EVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  int iVar25;
  uint *puVar26;
  TArray<FDeferredDecalProxy_*,TSizedDefaultAllocator<32>_> *pTVar27;
  FScene *local_res18;
  int *local_res20;
  longlong local_98;
  int local_90;
  uint uStack_8c;
  undefined1 *puStack_88;
  undefined4 local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  TMap<EDecalRenderStage,FDecalVisibilityViewPacket::FRelevantDecals,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDecalRenderStage,FDecalVisibilityViewPacket::FRelevantDecals,0>_>
  *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_68;
  
  this->TaskData = param_1;
  this->View = param_3;
  this_00 = &this->RelevantDecalsMap;
  puVar1 = &(this->RelevantDecalsMap).field_0x48;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined8 *)&(this->RelevantDecalsMap).field_0x8 = 0;
  *(undefined8 *)&(this->RelevantDecalsMap).field_0x20 = 0;
  (this->VisibleDecals).List.AllocatorInstance.Data = (FVisibleDecal *)0x0;
  (this->VisibleDecals).List.ArrayNum = 0;
  (this->VisibleDecals).List.ArrayMax = 0;
  (this->VisibleDecals).Task.Pimpl.Reference = (FTaskBase *)0x0;
  *(undefined4 *)&(this->RelevantDecalsMap).field_0x28 = 0;
  *(undefined4 *)&(this->RelevantDecalsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->RelevantDecalsMap).field_0x34 = 0;
  *(undefined4 *)&(this->RelevantDecalsMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->RelevantDecalsMap).field_0x40 = 0;
  *(undefined4 *)puVar1 = 0;
  local_res18 = param_2;
  local_res20 = (int *)puVar1;
  FVar12 = (FTaskEvent)
           UE::Tasks::Private::FTaskEventBase::Create
                     (
                     L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DecalRenderingShared.h(90)"
                     );
  this->AllTasksEvent = FVar12;
  this->bFinishCalled = false;
  if ((uint)(*(int *)&(this->RelevantDecalsMap).field_0x8 -
            *(int *)&(this->RelevantDecalsMap).field_0x34) < 7) {
    TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this_00,7);
    for (lVar20 = 0x3f; 0x15UL >> lVar20 == 0; lVar20 = lVar20 + -1) {
    }
    uVar22 = 1 << ((byte)lVar20 & 0x1f);
    uVar24 = (ulonglong)uVar22;
    if ((*(int *)puVar1 == 0) || (*(int *)puVar1 < (int)uVar22)) {
      *(uint *)puVar1 = uVar22;
      puVar1 = &(this->RelevantDecalsMap).field_0x38;
      if (*(longlong *)&(this->RelevantDecalsMap).field_0x40 != 0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&(this->RelevantDecalsMap).field_0x40,0,0,4);
      }
      if (uVar22 != 0) {
        uVar23 = uVar22;
        if (uVar22 < 2) {
          if (*(longlong *)&(this->RelevantDecalsMap).field_0x40 != 0) {
            uVar23 = 0;
            goto LAB_1447f30bd;
          }
        }
        else {
LAB_1447f30bd:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&(this->RelevantDecalsMap).field_0x40,0,uVar23,4);
        }
        if (0 < (int)uVar22) {
          uVar19 = 0;
          do {
            puVar6 = *(undefined1 **)&(this->RelevantDecalsMap).field_0x40;
            puVar17 = puVar1;
            if (puVar6 != (undefined1 *)0x0) {
              puVar17 = puVar6;
            }
            uVar13 = uVar19 & (longlong)(int)uVar22 - 1U;
            uVar19 = uVar19 + 1;
            *(undefined4 *)(puVar17 + uVar13 * 4) = 0xffffffff;
            uVar24 = uVar24 - 1;
          } while (uVar24 != 0);
        }
      }
      piVar10 = local_res20;
      if (*local_res20 != 0) {
        iVar5 = *(int *)&(this->RelevantDecalsMap).field_0x28;
        puStack_88 = &(this->RelevantDecalsMap).field_0x10;
        uStack_8c = 1;
        local_90 = 0;
        iStack_7c = 0;
        iStack_78 = 0;
        if (iVar5 != 0) {
          puVar26 = *(uint **)&(this->RelevantDecalsMap).field_0x20;
          if (puVar26 == (uint *)0x0) {
            puVar26 = (uint *)puStack_88;
          }
          uVar22 = *puVar26;
          iStack_78 = 0;
          local_90 = 0;
          while (uVar22 == 0) {
            iStack_78 = iStack_78 + 0x20;
            lVar20 = (longlong)local_90;
            local_90 = local_90 + 1;
            if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < local_90)
            goto LAB_1447f31ad;
            uVar22 = puVar26[lVar20 + 1];
          }
          uStack_8c = -uVar22 & uVar22;
          uVar24 = (ulonglong)uStack_8c * 2 + 1;
          lVar20 = 0x3f;
          if (uVar24 != 0) {
            for (; uVar24 >> lVar20 == 0; lVar20 = lVar20 + -1) {
            }
          }
          iStack_7c = (int)lVar20 + -1 + iStack_78;
          if (iVar5 < iStack_7c) {
LAB_1447f31ad:
            iStack_7c = iVar5;
          }
        }
        local_80 = 0xffffffff;
        local_68._padding_ = CONCAT44(uStack_8c,local_90);
        local_68.CurrentBitIndex = iStack_7c;
        local_68.UnvisitedBitMask = 0xffffffff;
        local_68._28_4_ = uStack_74;
        local_68.BaseBitIndex = iStack_78;
        iVar25 = iStack_7c;
        local_70 = this_00;
        local_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_88;
        if (iStack_7c < iVar5) {
          do {
            lVar20 = *(longlong *)&local_70->field_0x0 + (longlong)iVar25 * 0x28;
            uVar22 = *piVar10 - 1U &
                     (uint)*(byte *)(*(longlong *)&local_70->field_0x0 + (longlong)iVar25 * 0x28);
            *(uint *)(lVar20 + 0x24) = uVar22;
            puVar6 = *(undefined1 **)&(this->RelevantDecalsMap).field_0x40;
            puVar17 = puVar1;
            if (puVar6 != (undefined1 *)0x0) {
              puVar17 = puVar6;
            }
            uVar24 = (longlong)*piVar10 - 1U & (ulonglong)uVar22;
            *(undefined4 *)(lVar20 + 0x20) = *(undefined4 *)(puVar17 + uVar24 * 4);
            *(int *)(puVar17 + uVar24 * 4) = iVar25;
            local_68.UnvisitedBitMask = local_68.UnvisitedBitMask & ~local_68._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_68);
            iVar25 = local_68.CurrentBitIndex;
          } while (local_68.CurrentBitIndex < (local_68.Array)->NumBits);
        }
      }
    }
  }
  pFVar7 = this->View;
  pTVar27 = &local_res18->Decals;
  bVar11 = FApp::ShouldUseThreadingForPerformance();
  if ((bVar11) && (GIsThreadedRendering != false)) {
    EVar21 = None;
  }
  else {
    EVar21 = Inline;
  }
  pFVar14 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&UE::Tasks::Private::SmallTaskAllocator);
  if (pFVar14 == (FTaskBase *)0x0) {
    pFVar14 = (FTaskBase *)0x0;
  }
  else {
    UE::Tasks::Private::FTaskBase::FTaskBase(pFVar14,2,true);
    pFVar14->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTaskBase<`LaunchSceneRenderTask<`FDecalVisibilityViewPacket::FDecalVisibilityViewPacket'::`2'::<lambda_1>_>'::`2'::<lambda_1>,void,void>
          ::_vftable_;
    UE::Tasks::Private::FTaskBase::Init(pFVar14,L"BuildVisibleDecalList",High,EVar21,None);
    pFVar14[1]._padding_ = (longlong)&this->VisibleDecals;
    pFVar14[1]._padding_ = (longlong)pTVar27;
    pFVar14[1]._padding_ = (longlong)pFVar7;
    pFVar14->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTask<`LaunchSceneRenderTask<`FDecalVisibilityViewPacket::FDecalVisibilityViewPacket'::`2'::<lambda_1>_>'::`2'::<lambda_1>_>
          ::_vftable_;
  }
  UE::Tasks::Private::FTaskBase::TryLaunch(pFVar14,0x100);
  pFVar2 = &(this->VisibleDecals).Task;
  if (pFVar2 == (FTaskHandle *)&local_98) {
    if (pFVar14 == (FTaskBase *)0x0) goto LAB_1447f3340;
    LOCK();
    paVar3 = &pFVar14->RefCount;
    aVar4 = *paVar3;
    *paVar3 = (atomic<unsigned_int>)((int)*paVar3 + -1);
    UNLOCK();
    if (aVar4 != (atomic<unsigned_int>)0x1) goto LAB_1447f3340;
    puVar15 = (undefined8 *)pFVar14->_padding_;
  }
  else {
    pFVar8 = (pFVar2->Pimpl).Reference;
    (pFVar2->Pimpl).Reference = pFVar14;
    if (pFVar8 == (FTaskBase *)0x0) goto LAB_1447f3340;
    LOCK();
    paVar3 = &pFVar8->RefCount;
    aVar4 = *paVar3;
    *paVar3 = (atomic<unsigned_int>)((int)*paVar3 + -1);
    UNLOCK();
    if (aVar4 != (atomic<unsigned_int>)0x1) goto LAB_1447f3340;
    puVar15 = (undefined8 *)pFVar8->_padding_;
    pFVar14 = pFVar8;
  }
  (*(code *)*puVar15)(pFVar14,1);
LAB_1447f3340:
  pFVar14 = (pFVar2->Pimpl).Reference;
  FVar12 = this->AllTasksEvent;
  if (pFVar14 != (FTaskBase *)0x0) {
    if (((*(atomic<unsigned_int> *)((longlong)FVar12 + 0x34) == (atomic<unsigned_int>)0x0) ||
        (0x7fffffff < (uint)*(atomic<unsigned_int> *)((longlong)FVar12 + 0x34))) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("NumLocks.load(std::memory_order_relaxed) >= NumInitialLocks && NumLocks.load(std::memory_order_relaxed) < ExecutionFlag"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                            ,0xe3,L"Prerequisites can be added only before the task is launched"),
       bVar11)) {
      pcVar9 = (code *)swi(3);
      pFVar16 = (FDecalVisibilityViewPacket *)(*pcVar9)();
      return pFVar16;
    }
    LOCK();
    paVar3 = (atomic<unsigned_int> *)((longlong)FVar12 + 0x34);
    aVar4 = *paVar3;
    *paVar3 = (atomic<unsigned_int>)((int)*paVar3 + 1);
    UNLOCK();
    if ((0x7fffffff < (int)aVar4 + 1U) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("PrevNumLocks + 1 < ExecutionFlag",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                            ,0xea,L"Max number of task prerequisites reached: %d"), bVar11)) {
      pcVar9 = (code *)swi(3);
      pFVar16 = (FDecalVisibilityViewPacket *)(*pcVar9)();
      return pFVar16;
    }
    bVar11 = UE::Tasks::Private::FTaskBase::AddSubsequent(pFVar14,(FTaskBase *)FVar12);
    if (bVar11) {
      LOCK();
      pFVar14->RefCount = (atomic<unsigned_int>)((int)pFVar14->RefCount + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::
      FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Push
                ((FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
                 ((longlong)FVar12 + 0x58),pFVar14);
    }
    else {
      LOCK();
      *(atomic<unsigned_int> *)((longlong)FVar12 + 0x34) =
           (atomic<unsigned_int>)((int)*(atomic<unsigned_int> *)((longlong)FVar12 + 0x34) + -1);
      UNLOCK();
    }
  }
  local_res18 = (FScene *)this;
  if (this->TaskData->bDBufferEnabled == false) {
    if (this->TaskData->bGBufferEnabled == false) {
      return this;
    }
    EVar18 = BeforeLighting;
  }
  else {
    `FDecalVisibilityViewPacket::FDecalVisibilityViewPacket'::__l2::<lambda_2>::operator()
              (&local_res18,BeforeBasePass);
    EVar18 = Emissive;
  }
  `FDecalVisibilityViewPacket::FDecalVisibilityViewPacket'::__l2::<lambda_2>::operator()
            (&local_res18,EVar18);
  return this;
}

// operator() @ 1447fcf20

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
`FDecalVisibilityViewPacket::FDecalVisibilityViewPacket'::__l2::<lambda_2>::operator()
          (void *this,EDecalRenderStage param_1)

{
  longlong *plVar1;
  atomic<unsigned_int> *paVar2;
  atomic<unsigned_int> aVar3;
  longlong lVar4;
  longlong lVar5;
  FTaskBase *pFVar6;
  code *pcVar7;
  bool bVar8;
  FTaskBase *pFVar9;
  undefined8 *puVar10;
  EExtendedTaskPriority EVar11;
  TKeyInitializer<EDecalRenderStage_&> local_res8;
  EDecalRenderStage local_res10 [8];
  EDecalRenderStage *local_res18 [2];
  longlong local_48;
  longlong local_40;
  longlong lStack_38;
  EDecalRenderStage local_30;
  undefined7 uStack_2f;
  
  lVar4 = *(longlong *)this;
  local_res18[0] = local_res10;
  local_res10[0] = param_1;
  TSet<TTuple<enum_EDecalRenderStage,FDecalVisibilityViewPacket::FRelevantDecals>,TDefaultMapHashableKeyFuncs<enum_EDecalRenderStage,FDecalVisibilityViewPacket::FRelevantDecals,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<enum_EDecalRenderStage_&>_>
            ((void *)(lVar4 + 0x28),&local_res8,(bool *)local_res18);
  lVar5 = *(longlong *)this;
  lStack_38 = lVar5 + 0x10;
  lVar4 = *(longlong *)(lVar4 + 0x28) + (longlong)(int)local_res8.Key * 0x28;
  local_40 = lVar4 + 8;
  local_30 = local_res10[0];
  bVar8 = FApp::ShouldUseThreadingForPerformance();
  if ((bVar8) && (GIsThreadedRendering != false)) {
    EVar11 = None;
  }
  else {
    EVar11 = Inline;
  }
  pFVar9 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
           ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                       *)&UE::Tasks::Private::SmallTaskAllocator);
  if (pFVar9 == (FTaskBase *)0x0) {
    pFVar9 = (FTaskBase *)0x0;
  }
  else {
    UE::Tasks::Private::FTaskBase::FTaskBase(pFVar9,2,true);
    pFVar9->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTaskBase<`LaunchSceneRenderTask<``FDecalVisibilityViewPacket::FDecalVisibilityViewPacket'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>,UE::Tasks::Private::FTaskHandle_&>'::`2'::<lambda_1>,void,void>
          ::_vftable_;
    UE::Tasks::Private::FTaskBase::Init(pFVar9,L"BuildRelevantDecalList",High,EVar11,None);
    pFVar9[1]._padding_ = local_40;
    pFVar9[1]._padding_ = lStack_38;
    pFVar9[1]._padding_ = CONCAT71(uStack_2f,local_30);
    pFVar9->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTask<`LaunchSceneRenderTask<``FDecalVisibilityViewPacket::FDecalVisibilityViewPacket'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>,UE::Tasks::Private::FTaskHandle_&>'::`2'::<lambda_1>_>
          ::_vftable_;
  }
  UE::Tasks::Private::FTaskBase::AddPrerequisites<UE::Tasks::Private::FTaskHandle,0>
            (pFVar9,(FTaskHandle *)(lVar5 + 0x20));
  UE::Tasks::Private::FTaskBase::TryLaunch(pFVar9,0x100);
  plVar1 = (longlong *)(lVar4 + 0x18);
  if (plVar1 == &local_48) {
    if (pFVar9 == (FTaskBase *)0x0) goto LAB_1447fd07d;
    LOCK();
    paVar2 = &pFVar9->RefCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 != (atomic<unsigned_int>)0x1) goto LAB_1447fd07d;
    puVar10 = (undefined8 *)pFVar9->_padding_;
  }
  else {
    pFVar6 = (FTaskBase *)*plVar1;
    *plVar1 = (longlong)pFVar9;
    if (pFVar6 == (FTaskBase *)0x0) goto LAB_1447fd07d;
    LOCK();
    paVar2 = &pFVar6->RefCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 != (atomic<unsigned_int>)0x1) goto LAB_1447fd07d;
    puVar10 = (undefined8 *)pFVar6->_padding_;
    pFVar9 = pFVar6;
  }
  (*(code *)*puVar10)(pFVar9,1);
LAB_1447fd07d:
  pFVar9 = (FTaskBase *)*plVar1;
  pFVar6 = *(FTaskBase **)(*(longlong *)this + 0x78);
  if (pFVar9 != (FTaskBase *)0x0) {
    if ((pFVar6->NumLocks == (atomic<unsigned_int>)0x0) || (0x7fffffff < (uint)pFVar6->NumLocks)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumLocks.load(std::memory_order_relaxed) >= NumInitialLocks && NumLocks.load(std::memory_order_relaxed) < ExecutionFlag"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                         ,0xe3,L"Prerequisites can be added only before the task is launched");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    LOCK();
    paVar2 = &pFVar6->NumLocks;
    aVar3 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + 1);
    UNLOCK();
    if (0x7fffffff < (int)aVar3 + 1U) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("PrevNumLocks + 1 < ExecutionFlag",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                         ,0xea,L"Max number of task prerequisites reached: %d");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    bVar8 = UE::Tasks::Private::FTaskBase::AddSubsequent(pFVar9,pFVar6);
    if (!bVar8) {
      LOCK();
      pFVar6->NumLocks = (atomic<unsigned_int>)((int)pFVar6->NumLocks + -1);
      UNLOCK();
      return;
    }
    LOCK();
    pFVar9->RefCount = (atomic<unsigned_int>)((int)pFVar9->RefCount + 1);
    UNLOCK();
    UE::Tasks::Private::FTaskBase::
    FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Push
              (&pFVar6->Prerequisites,pFVar9);
  }
  return;
}

// FinishRelevantDecals @ 144813020

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

TArrayView<FVisibleDecal_const_*_const,int> * __thiscall
FDecalVisibilityViewPacket::FinishRelevantDecals
          (FDecalVisibilityViewPacket *this,
          TArrayView<FVisibleDecal_const_*_const,int> *__return_storage_ptr__,
          EDecalRenderStage param_1)

{
  FTaskHandle *pFVar1;
  atomic<unsigned_int> *paVar2;
  FVisibleDecal **ppFVar3;
  longlong lVar4;
  atomic<unsigned_int> aVar5;
  FTaskBase *pFVar6;
  FVisibleDecal **ppFVar7;
  code *pcVar8;
  EDecalRenderStage EVar9;
  bool bVar10;
  int iVar11;
  TArrayView<FVisibleDecal_const_*_const,int> *pTVar12;
  TArray<FVisibleDecal_const_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar13;
  undefined1 *puVar14;
  TArray<FVisibleDecal_const_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar15;
  TKeyInitializer<EDecalRenderStage_&> local_res8;
  EDecalRenderStage *local_res10;
  EDecalRenderStage local_res18 [8];
  TArray<FVisibleDecal_const_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  local_68;
  FVisibleDecal *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  TArrayView<FVisibleDecal_const_,int> local_48;
  TArray<FVisibleDecal_const_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  local_38;
  
  local_res18[0] = param_1;
  bVar10 = IsInRenderingThread();
  if (!bVar10) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsInRenderingThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DecalRenderingShared.cpp"
                        ,0x80,L"");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      pTVar12 = (TArrayView<FVisibleDecal_const_*_const,int> *)(*pcVar8)();
      return pTVar12;
    }
  }
  if (*(int *)&(this->RelevantDecalsMap).field_0x8 != *(int *)&(this->RelevantDecalsMap).field_0x34)
  {
    puVar14 = *(undefined1 **)&(this->RelevantDecalsMap).field_0x40;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = &(this->RelevantDecalsMap).field_0x38;
    }
    iVar11 = *(int *)(puVar14 +
                     ((ulonglong)(*(int *)&(this->RelevantDecalsMap).field_0x48 - 1) &
                     (ulonglong)local_res18[0]) * 4);
    if (iVar11 != -1) {
      do {
        lVar4 = *(longlong *)&this->RelevantDecalsMap + (longlong)iVar11 * 0x28;
        if (*(EDecalRenderStage *)(*(longlong *)&this->RelevantDecalsMap + (longlong)iVar11 * 0x28)
            == local_res18[0]) {
          pTVar15 = (TArray<FVisibleDecal_const_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                     *)(lVar4 + 8);
          if (lVar4 == 0) {
            pTVar15 = (TArray<FVisibleDecal_const_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                       *)0x0;
          }
          if (pTVar15 !=
              (TArray<FVisibleDecal_const_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
               *)0x0) {
            pFVar6 = (FTaskBase *)pTVar15[1].AllocatorInstance.Data;
            pTVar13 = pTVar15 + 1;
            if (pFVar6 != (FTaskBase *)0x0) {
              UE::Tasks::Private::FTaskBase::Wait(pFVar6);
              if (pTVar13 != &local_68) {
                ppFVar7 = (pTVar13->AllocatorInstance).Data;
                (pTVar13->AllocatorInstance).Data = (FVisibleDecal **)0x0;
                if (ppFVar7 != (FVisibleDecal **)0x0) {
                  LOCK();
                  ppFVar3 = ppFVar7 + 6;
                  iVar11 = *(int *)ppFVar3;
                  *(int *)ppFVar3 = *(int *)ppFVar3 + -1;
                  UNLOCK();
                  if (iVar11 == 1) {
                    (*(code *)(*ppFVar7)->MaterialProxy)(ppFVar7,1);
                  }
                }
              }
            }
            goto LAB_144813227;
          }
          break;
        }
        iVar11 = *(int *)(lVar4 + 0x20);
      } while (iVar11 != -1);
    }
  }
  local_res10 = local_res18;
  TSet<TTuple<enum_EDecalRenderStage,FDecalVisibilityViewPacket::FRelevantDecals>,TDefaultMapHashableKeyFuncs<enum_EDecalRenderStage,FDecalVisibilityViewPacket::FRelevantDecals,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<enum_EDecalRenderStage_&>_>
            (&this->RelevantDecalsMap,&local_res8,(bool *)&local_res10);
  EVar9 = local_res18[0];
  pTVar15 = (TArray<FVisibleDecal_const_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
             *)(*(longlong *)&this->RelevantDecalsMap + ((longlong)(int)local_res8.Key * 5 + 1) * 8)
  ;
  bVar10 = IsInRenderingThread();
  if (!bVar10) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsInRenderingThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DecalRenderingShared.cpp"
                        ,0x75,L"");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      pTVar12 = (TArrayView<FVisibleDecal_const_*_const,int> *)(*pcVar8)();
      return pTVar12;
    }
  }
  pFVar6 = (this->VisibleDecals).Task.Pimpl.Reference;
  pFVar1 = &(this->VisibleDecals).Task;
  if (pFVar6 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::Wait(pFVar6);
    if (pFVar1 != (FTaskHandle *)&local_68.ArrayNum) {
      pFVar6 = (pFVar1->Pimpl).Reference;
      (pFVar1->Pimpl).Reference = (FTaskBase *)0x0;
      if (pFVar6 != (FTaskBase *)0x0) {
        LOCK();
        paVar2 = &pFVar6->RefCount;
        aVar5 = *paVar2;
        *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar5 == (atomic<unsigned_int>)0x1) {
          (**(code **)pFVar6->_padding_)(pFVar6,1);
        }
      }
    }
  }
  local_58 = (this->VisibleDecals).List.AllocatorInstance.Data;
  iVar11 = (this->VisibleDecals).List.ArrayNum;
  if (iVar11 < 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      pTVar12 = (TArrayView<FVisibleDecal_const_*_const,int> *)(*pcVar8)();
      return pTVar12;
    }
  }
  local_48._12_4_ = uStack_4c;
  local_48.ArrayNum = iVar11;
  local_48.DataPtr = local_58;
  iStack_50 = iVar11;
  pTVar13 = DecalRendering::BuildRelevantDecalList(&local_38,&local_48,EVar9);
  if (pTVar15 != pTVar13) {
    ppFVar7 = (pTVar15->AllocatorInstance).Data;
    if (ppFVar7 != (FVisibleDecal **)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(ppFVar7);
    }
    (pTVar15->AllocatorInstance).Data = (pTVar13->AllocatorInstance).Data;
    (pTVar13->AllocatorInstance).Data = (FVisibleDecal **)0x0;
    pTVar15->ArrayNum = pTVar13->ArrayNum;
    pTVar15->ArrayMax = pTVar13->ArrayMax;
    pTVar13->ArrayNum = 0;
    pTVar13->ArrayMax = 0;
  }
  if (local_38.AllocatorInstance.Data != (FVisibleDecal **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(local_38.AllocatorInstance.Data)
    ;
  }
LAB_144813227:
  iVar11 = pTVar15->ArrayNum;
  __return_storage_ptr__->DataPtr = (pTVar15->AllocatorInstance).Data;
  if (iVar11 < 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      pTVar12 = (TArrayView<FVisibleDecal_const_*_const,int> *)(*pcVar8)();
      return pTVar12;
    }
  }
  __return_storage_ptr__->ArrayNum = iVar11;
  return __return_storage_ptr__;
}

// FinishVisibleDecals @ 1448132f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

TArrayView<FVisibleDecal_const_,int> * __thiscall
FDecalVisibilityViewPacket::FinishVisibleDecals
          (FDecalVisibilityViewPacket *this,
          TArrayView<FVisibleDecal_const_,int> *__return_storage_ptr__)

{
  FTaskHandle *pFVar1;
  atomic<unsigned_int> *paVar2;
  atomic<unsigned_int> aVar3;
  int iVar4;
  FTaskBase *pFVar5;
  code *pcVar6;
  bool bVar7;
  TArrayView<FVisibleDecal_const_,int> *pTVar8;
  longlong local_18 [2];
  
  bVar7 = IsInRenderingThread();
  if (!bVar7) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DecalRenderingShared.cpp"
                       ,0x75,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar8 = (TArrayView<FVisibleDecal_const_,int> *)(*pcVar6)();
      return pTVar8;
    }
  }
  pFVar5 = (this->VisibleDecals).Task.Pimpl.Reference;
  pFVar1 = &(this->VisibleDecals).Task;
  if (pFVar5 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::Wait(pFVar5);
    if (pFVar1 != (FTaskHandle *)local_18) {
      pFVar5 = (pFVar1->Pimpl).Reference;
      (pFVar1->Pimpl).Reference = (FTaskBase *)0x0;
      if (pFVar5 != (FTaskBase *)0x0) {
        LOCK();
        paVar2 = &pFVar5->RefCount;
        aVar3 = *paVar2;
        *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar3 == (atomic<unsigned_int>)0x1) {
          (**(code **)pFVar5->_padding_)(pFVar5,1);
        }
      }
    }
  }
  iVar4 = (this->VisibleDecals).List.ArrayNum;
  __return_storage_ptr__->DataPtr = (this->VisibleDecals).List.AllocatorInstance.Data;
  if (iVar4 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar8 = (TArrayView<FVisibleDecal_const_,int> *)(*pcVar6)();
      return pTVar8;
    }
  }
  __return_storage_ptr__->ArrayNum = iVar4;
  return __return_storage_ptr__;
}

