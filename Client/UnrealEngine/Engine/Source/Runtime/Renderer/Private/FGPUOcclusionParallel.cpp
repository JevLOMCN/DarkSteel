// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 7

// ~FGPUOcclusionParallel @ 145520990

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FGPUOcclusionParallel::~FGPUOcclusionParallel(FGPUOcclusionParallel *this)

{
  int *piVar1;
  int iVar2;
  FTaskEvent FVar3;
  FGPUOcclusionParallelPacket **ppFVar4;
  code *pcVar5;
  bool bVar6;
  
  this->_padding_ = (longlong)&___7FGPUOcclusionParallel__6B_;
  if (this->bFinished == false) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("bFinished",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibilityPrivate.h"
                       ,0x495,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FVar3 = this->FinalizeTask;
  if (FVar3 != (FTaskEvent)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)FVar3 + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)FVar3)(FVar3,1);
    }
  }
  piVar1 = (this->NonOccludedPrimitives).AllocatorInstance.Data;
  if (piVar1 != (int *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(piVar1);
  }
  ppFVar4 = (this->Packets).AllocatorInstance.Data;
  if (ppFVar4 != (FGPUOcclusionParallelPacket **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(ppFVar4);
  }
  FGlobalDynamicVertexBuffer::Commit((FGlobalDynamicVertexBuffer *)&this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

// AddPrimitives @ 145528630

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FGPUOcclusionParallel::AddPrimitives(FGPUOcclusionParallel *this,FPrimitiveRange param_1)

{
  int *piVar1;
  byte *pbVar2;
  atomic<unsigned_int> *paVar3;
  int *piVar4;
  ulonglong uVar5;
  atomic<unsigned_int> aVar6;
  longlong lVar7;
  FVisibilityViewPacket *pFVar8;
  FVisibilityTaskConfig *pFVar9;
  TArray<FVisibilityTaskConfig::FOcclusionCull::FView,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar10;
  code *pcVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  FGPUOcclusionParallelPacket *pFVar16;
  wchar_t *pwVar17;
  FTaskBase *pFVar18;
  byte bVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  undefined8 *puVar23;
  FPrimitiveRange FVar24;
  FTaskBase *this_00;
  FGPUOcclusionParallelPacket *pFVar25;
  int iVar26;
  longlong lVar27;
  uint uVar28;
  TArray<FVisibilityTaskConfig::FOcclusionCull::FView,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar29;
  TArray<FGPUOcclusionParallelPacket_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar30;
  int iStackX_14;
  uint local_res20;
  
  FGPUOcclusion::WaitForLastOcclusionQuery((FGPUOcclusion *)this);
  uVar21 = param_1.StartIndex;
  bVar19 = (byte)param_1.StartIndex & 0x1f;
  uVar13 = 1 << bVar19;
  local_res20 = -1 << bVar19;
  uVar28 = uVar21 & 0xffffffe0;
  lVar7 = this->_padding_;
  iVar26 = (int)uVar21 >> 5;
  if ((((int)uVar21 < 0) || (*(int *)(lVar7 + 0x1c68) < (int)uVar21)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  uVar22 = *(uint *)(lVar7 + 0x1c68);
  FVar24 = param_1;
  if (uVar21 != uVar22) {
    lVar27 = *(longlong *)(lVar7 + 0x1c60);
    if (*(longlong *)(lVar7 + 0x1c60) == 0) {
      lVar27 = lVar7 + 0x1c50;
    }
    uVar21 = local_res20 & *(uint *)(lVar27 + (longlong)iVar26 * 4);
    while (uVar21 == 0) {
      lVar20 = (longlong)iVar26;
      uVar28 = uVar28 + 0x20;
      iVar26 = iVar26 + 1;
      if ((int)((uVar22 - 1) + ((int)(uVar22 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar26) {
        FVar24.EndIndex = 0;
        FVar24.StartIndex = uVar22;
        goto LAB_145528750;
      }
      uVar21 = *(uint *)(lVar27 + 4 + lVar20 * 4);
      local_res20 = 0xffffffff;
    }
    uVar13 = -uVar21 & uVar21;
    uVar5 = (ulonglong)uVar13 * 2 + 1;
    lVar27 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar27 == 0; lVar27 = lVar27 + -1) {
      }
    }
    FVar24.StartIndex = (uVar28 - 1) + (int)lVar27;
    FVar24.EndIndex = 0;
    if ((int)uVar22 < (int)FVar24.StartIndex) {
      FVar24.EndIndex = 0;
      FVar24.StartIndex = uVar22;
    }
  }
LAB_145528750:
  iStackX_14 = param_1.EndIndex;
  iVar14 = FVar24.StartIndex;
  do {
    if (iStackX_14 <= iVar14) {
      return;
    }
    pTVar30 = &this->Packets;
    pFVar25 = (FGPUOcclusionParallelPacket *)0x0;
    iVar14 = (this->Packets).ArrayNum;
    uVar22 = iVar14 - 1;
    uVar21 = 0;
    if ((int)uVar22 < iVar14) {
      uVar21 = ~uVar22 >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pFVar16 = (pTVar30->AllocatorInstance).Data[(longlong)(this->Packets).ArrayNum + -1];
    bVar12 = FGPUOcclusionParallelPacket::AddPrimitive(pFVar16,FVar24.StartIndex);
    if (bVar12) {
      if (pFVar16->MaxInputSubQueries <= pFVar16->NumInputSubQueries) {
        FGPUOcclusionParallelPacket::LaunchOcclusionCullTask(pFVar16);
        pFVar16 = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x108,8);
        if (pFVar16 != (FGPUOcclusionParallelPacket *)0x0) {
          pFVar8 = (FVisibilityViewPacket *)this->_padding_;
          FGPUOcclusionPacket::FGPUOcclusionPacket
                    ((FGPUOcclusionPacket *)pFVar16,pFVar8,(FGPUOcclusionState *)&this->_padding_);
          pFVar9 = pFVar8->TaskConfig;
          uVar21 = pFVar8->ViewIndex;
          uVar22 = 0;
          if ((int)uVar21 < (pFVar9->OcclusionCull).Views.ArrayNum) {
            uVar22 = ~uVar21 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pTVar10 = (TArray<FVisibilityTaskConfig::FOcclusionCull::FView,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                     *)(pFVar9->OcclusionCull).Views.AllocatorInstance.SecondaryData.Data;
          pTVar29 = &(pFVar9->OcclusionCull).Views;
          if (pTVar10 !=
              (TArray<FVisibilityTaskConfig::FOcclusionCull::FView,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
               *)0x0) {
            pTVar29 = pTVar10;
          }
          pFVar16->MaxInputSubQueries =
               *(uint *)((pTVar29->AllocatorInstance).InlineData + (longlong)(int)uVar21 * 4);
          pFVar16->NumInputSubQueries = 0;
          (pFVar16->Input).Chunks.Array.AllocatorInstance.Data = (void **)0x0;
          *(undefined8 *)&(pFVar16->Input).Chunks.Array.ArrayMax = 0;
          (pFVar16->Input).Chunks.Array.ArrayNum = 0;
          TChunkedArray<FPrimitiveOcclusionHistory,1024,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          ::
          TChunkedArray<FPrimitiveOcclusionHistory,1024,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                    (&(pFVar16->RecordVisitor).OcclusionHistories,0);
          (pFVar16->RecordVisitor).OcclusionQueries.AllocatorInstance.Data = (FOcclusionQuery *)0x0;
          (pFVar16->RecordVisitor).OcclusionQueries.ArrayNum = 0;
          (pFVar16->RecordVisitor).OcclusionQueries.ArrayMax = 0;
          (pFVar16->RecordVisitor).OcclusionFeedbacks.AllocatorInstance.Data =
               (FOcclusionFeedbackEntry *)0x0;
          (pFVar16->RecordVisitor).OcclusionFeedbacks.ArrayNum = 0;
          (pFVar16->RecordVisitor).OcclusionFeedbacks.ArrayMax = 0;
          (pFVar16->RecordVisitor).HZBBounds.AllocatorInstance.Data = (FHZBBound *)0x0;
          (pFVar16->RecordVisitor).HZBBounds.ArrayNum = 0;
          (pFVar16->RecordVisitor).HZBBounds.ArrayMax = 0;
          (pFVar16->RecordVisitor).VisualizeQueries.AllocatorInstance.Data =
               (TTuple<UE::Math::TBox<double>,FColor> *)0x0;
          (pFVar16->RecordVisitor).VisualizeQueries.ArrayNum = 0;
          (pFVar16->RecordVisitor).VisualizeQueries.ArrayMax = 0;
          (pFVar16->Task).Pimpl.Reference = (FTaskBase *)0x0;
          pFVar16->bTaskLaunched = false;
          pFVar25 = pFVar16;
        }
        iVar14 = (this->Packets).ArrayNum;
        piVar1 = &(this->Packets).ArrayMax;
        if (iVar14 == *piVar1) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FGPUOcclusionParallelPacket_*>_>
                             (0x808,&pTVar30->AllocatorInstance,piVar1);
        }
        (this->Packets).ArrayNum = iVar14 + 1;
        (pTVar30->AllocatorInstance).Data[iVar14] = pFVar25;
      }
    }
    else {
      iVar14 = (this->NonOccludedPrimitives).ArrayNum;
      piVar1 = &(this->NonOccludedPrimitives).ArrayMax;
      if (iVar14 == *piVar1) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<int>_>
                           (0x404,&(this->NonOccludedPrimitives).AllocatorInstance,piVar1);
      }
      (this->NonOccludedPrimitives).ArrayNum = iVar14 + 1;
      (this->NonOccludedPrimitives).AllocatorInstance.Data[iVar14] = FVar24.StartIndex;
      if ((this->NonOccludedPrimitives).ArrayNum == this->MaxNonOccludedPrimitives) {
        LOCK();
        piVar4 = (int *)(this->_padding_ + 0x1f0);
        *piVar4 = *piVar4 + 1;
        UNLOCK();
        lVar27 = this->_padding_;
        if ((*(longlong *)(lVar27 + 0x150) == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("CommandFunction",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibilityPrivate.h"
                                ,0x52,L""), bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        LOCK();
        bVar12 = *(char *)(lVar27 + 0x1b0) == '\0';
        if (bVar12) {
          *(char *)(lVar27 + 0x1b0) = '\x01';
        }
        UNLOCK();
        if (!bVar12) {
          UE::FMutex::LockSlow((FMutex *)(lVar27 + 0x1b0));
        }
        iVar14 = *(int *)(lVar27 + 0x1c0);
        iVar15 = iVar14;
        if (iVar14 == *(int *)(lVar27 + 0x1c4)) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
                             (0x810,(ForElementType<TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                                     *)(lVar27 + 0x1b8),(int *)(lVar27 + 0x1c4));
          *(int *)(lVar27 + 0x1c0) = iVar15;
        }
        *(int *)(lVar27 + 0x1c0) = iVar15 + 1;
        puVar23 = (undefined8 *)((longlong)iVar15 * 0x10 + *(longlong *)(lVar27 + 0x1b8));
        this_00 = (FTaskBase *)0x0;
        *puVar23 = 0;
        *puVar23 = (this->NonOccludedPrimitives).AllocatorInstance.Data;
        (this->NonOccludedPrimitives).AllocatorInstance.Data = (int *)0x0;
        *(int *)(puVar23 + 1) = (this->NonOccludedPrimitives).ArrayNum;
        *(int *)((longlong)puVar23 + 0xc) = (this->NonOccludedPrimitives).ArrayMax;
        (this->NonOccludedPrimitives).ArrayNum = 0;
        (this->NonOccludedPrimitives).ArrayMax = 0;
        LOCK();
        pbVar2 = (byte *)(lVar27 + 0x1b0);
        bVar19 = *pbVar2;
        *pbVar2 = *pbVar2 - 1;
        UNLOCK();
        if ((bVar19 & 2) != 0) {
          UE::FMutex::WakeWaitingThread((FMutex *)(lVar27 + 0x1b0));
        }
        if (iVar14 == 0) {
          pwVar17 = UE::Tasks::FPipe::GetDebugName((FPipe *)(lVar27 + 0x1c8));
          pFVar18 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                    ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                                *)&UE::Tasks::Private::SmallTaskAllocator);
          if (pFVar18 != (FTaskBase *)0x0) {
            UE::Tasks::Private::FTaskBase::FTaskBase(pFVar18,2,true);
            pFVar18->_padding_ =
                 (longlong)
                 &
                 ___7__TExecutableTaskBase_V<lambda_1>__M_____EnqueueCommand_V__TArray_HV__TLinearArrayAllocatorBase_UFSceneRenderingBlockAllocationTag___0A________TCommandPipe_V__TArray_HV__TLinearArrayAllocatorBase_UFSceneRenderingBlockAllocationTag___0A_______QEAAX__QEAV__TArray_HV__TLinearArrayAllocatorBase_UFSceneRenderingBlockAllocationTag___0A______Z_XX_Private_Tasks_UE__6B_
            ;
            UE::Tasks::Private::FTaskBase::Init(pFVar18,pwVar17,High,None,None);
            pFVar18[1]._padding_ = lVar27 + 0x140;
            pFVar18->_padding_ =
                 (longlong)
                 &
                 ___7__TExecutableTask_V<lambda_1>__M_____EnqueueCommand_V__TArray_HV__TLinearArrayAllocatorBase_UFSceneRenderingBlockAllocationTag___0A________TCommandPipe_V__TArray_HV__TLinearArrayAllocatorBase_UFSceneRenderingBlockAllocationTag___0A_______QEAAX__QEAV__TArray_HV__TLinearArrayAllocatorBase_UFSceneRenderingBlockAllocationTag___0A______Z__Private_Tasks_UE__6B_
            ;
            this_00 = pFVar18;
          }
          LOCK();
          *(longlong *)(lVar27 + 0x1d0) = *(longlong *)(lVar27 + 0x1d0) + 1;
          UNLOCK();
          LOCK();
          this_00->NumLocks = (atomic<unsigned_int>)((int)this_00->NumLocks + 1);
          UNLOCK();
          this_00->Pipe = (FPipe *)(lVar27 + 0x1c8);
          pFVar18 = *(FTaskBase **)(lVar27 + 0x140);
          if (pFVar18 != (FTaskBase *)0x0) {
            UE::Tasks::Private::FTaskBase::AddPrerequisites(this_00,pFVar18);
          }
          UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x100);
          LOCK();
          paVar3 = &this_00->RefCount;
          aVar6 = *paVar3;
          *paVar3 = (atomic<unsigned_int>)((int)*paVar3 + -1);
          UNLOCK();
          if (aVar6 == (atomic<unsigned_int>)0x1) {
            (**(code **)this_00->_padding_)(this_00,1);
          }
        }
        (this->NonOccludedPrimitives).ArrayNum = 0;
        if ((this->NonOccludedPrimitives).ArrayMax < 0) {
          UE::Core::Private::
          ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<int>_>
                    (4,4,0,&(this->NonOccludedPrimitives).AllocatorInstance,0,piVar1);
        }
        uVar21 = this->MaxNonOccludedPrimitives;
        if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
        }
        if ((this->NonOccludedPrimitives).ArrayMax < (int)uVar21) {
          UE::Core::Private::
          ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<int>_>
                    (4,4,uVar21,&(this->NonOccludedPrimitives).AllocatorInstance,
                     (this->NonOccludedPrimitives).ArrayNum,piVar1);
        }
      }
    }
    local_res20 = ~uVar13 & local_res20;
    uVar21 = *(uint *)(lVar7 + 0x1c68);
    lVar27 = lVar7 + 0x1c50;
    if (*(longlong *)(lVar7 + 0x1c60) != 0) {
      lVar27 = *(longlong *)(lVar7 + 0x1c60);
    }
    uVar22 = local_res20 & *(uint *)(lVar27 + (longlong)iVar26 * 4);
    while (uVar22 == 0) {
      lVar20 = (longlong)iVar26;
      uVar28 = uVar28 + 0x20;
      iVar26 = iVar26 + 1;
      if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar26) {
        FVar24.EndIndex = 0;
        FVar24.StartIndex = uVar21;
        goto LAB_145528c0a;
      }
      uVar22 = *(uint *)(lVar27 + 4 + lVar20 * 4);
      local_res20 = 0xffffffff;
    }
    uVar13 = -uVar22 & uVar22;
    uVar5 = (ulonglong)uVar13 * 2 + 1;
    lVar27 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar27 == 0; lVar27 = lVar27 + -1) {
      }
    }
    FVar24.StartIndex = (int)lVar27 + -1 + uVar28;
    FVar24.EndIndex = 0;
    if ((int)uVar21 < (int)FVar24.StartIndex) {
      FVar24.EndIndex = 0;
      FVar24.StartIndex = uVar21;
    }
LAB_145528c0a:
    iVar14 = FVar24.StartIndex;
  } while( true );
}

// CreateOcclusionPacket @ 145530710

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FGPUOcclusionParallel::CreateOcclusionPacket(FGPUOcclusionParallel *this)

{
  int *piVar1;
  uint uVar2;
  FVisibilityViewPacket *pFVar3;
  FVisibilityTaskConfig *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FGPUOcclusionParallelPacket *this_00;
  TArray<FVisibilityTaskConfig::FOcclusionCull::FView,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar9;
  
  this_00 = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x108,8);
  if (this_00 == (FGPUOcclusionParallelPacket *)0x0) {
    this_00 = (FGPUOcclusionParallelPacket *)0x0;
  }
  else {
    pFVar3 = (FVisibilityViewPacket *)this->_padding_;
    FGPUOcclusionPacket::FGPUOcclusionPacket
              ((FGPUOcclusionPacket *)this_00,pFVar3,(FGPUOcclusionState *)&this->_padding_);
    pFVar4 = pFVar3->TaskConfig;
    uVar2 = pFVar3->ViewIndex;
    uVar7 = 0;
    if ((int)uVar2 < (pFVar4->OcclusionCull).Views.ArrayNum) {
      uVar7 = ~uVar2 >> 0x1f;
    }
    if (uVar7 == 0) {
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
    pTVar9 = (TArray<FVisibilityTaskConfig::FOcclusionCull::FView,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
              *)(pFVar4->OcclusionCull).Views.AllocatorInstance.SecondaryData.Data;
    if (pTVar9 == (TArray<FVisibilityTaskConfig::FOcclusionCull::FView,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                   *)0x0) {
      pTVar9 = &(pFVar4->OcclusionCull).Views;
    }
    this_00->MaxInputSubQueries =
         *(uint *)((pTVar9->AllocatorInstance).InlineData + (longlong)(int)uVar2 * 4);
    this_00->NumInputSubQueries = 0;
    (this_00->Input).Chunks.Array.AllocatorInstance.Data = (void **)0x0;
    *(undefined8 *)&(this_00->Input).Chunks.Array.ArrayMax = 0;
    (this_00->Input).Chunks.Array.ArrayNum = 0;
    TChunkedArray<FPrimitiveOcclusionHistory,1024,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
    ::
    TChunkedArray<FPrimitiveOcclusionHistory,1024,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
              (&(this_00->RecordVisitor).OcclusionHistories,0);
    (this_00->RecordVisitor).OcclusionQueries.AllocatorInstance.Data = (FOcclusionQuery *)0x0;
    (this_00->RecordVisitor).OcclusionQueries.ArrayNum = 0;
    (this_00->RecordVisitor).OcclusionQueries.ArrayMax = 0;
    (this_00->RecordVisitor).OcclusionFeedbacks.AllocatorInstance.Data =
         (FOcclusionFeedbackEntry *)0x0;
    (this_00->RecordVisitor).OcclusionFeedbacks.ArrayNum = 0;
    (this_00->RecordVisitor).OcclusionFeedbacks.ArrayMax = 0;
    (this_00->RecordVisitor).HZBBounds.AllocatorInstance.Data = (FHZBBound *)0x0;
    (this_00->RecordVisitor).HZBBounds.ArrayNum = 0;
    (this_00->RecordVisitor).HZBBounds.ArrayMax = 0;
    (this_00->RecordVisitor).VisualizeQueries.AllocatorInstance.Data =
         (TTuple<UE::Math::TBox<double>,FColor> *)0x0;
    (this_00->RecordVisitor).VisualizeQueries.ArrayNum = 0;
    (this_00->RecordVisitor).VisualizeQueries.ArrayMax = 0;
    (this_00->Task).Pimpl.Reference = (FTaskBase *)0x0;
    this_00->bTaskLaunched = false;
  }
  iVar8 = (this->Packets).ArrayNum;
  piVar1 = &(this->Packets).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FGPUOcclusionParallelPacket_*>_>
                      (0x808,&(this->Packets).AllocatorInstance,piVar1);
  }
  (this->Packets).ArrayNum = iVar8 + 1;
  (this->Packets).AllocatorInstance.Data[iVar8] = this_00;
  return;
}

// Finalize @ 14553f0c0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FGPUOcclusionParallel::Finalize(FGPUOcclusionParallel *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<bool> aVar2;
  atomic<unsigned_int> aVar3;
  int iVar4;
  int iVar5;
  FGPUOcclusionParallelPacket *pFVar6;
  FTaskBase *pFVar7;
  FTaskEvent this_00;
  code *pcVar8;
  FPrimitiveOcclusionHistory **ppFVar9;
  float fVar10;
  FGPUOcclusionParallelPacket **ppFVar11;
  undefined8 uVar12;
  void **ppvVar13;
  bool bVar14;
  uint uVar15;
  TArray<FGPUOcclusionParallelPacket_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar16;
  FOcclusionFeedbackEntry *pFVar17;
  FOcclusionQuery *pFVar18;
  TTuple<UE::Math::TBox<double>,FColor> *pTVar19;
  FHZBBound *pFVar20;
  FOcclusionFeedbackEntry *pFVar21;
  FOcclusionQuery *pFVar22;
  TTuple<UE::Math::TBox<double>,FColor> *pTVar23;
  FHZBBound *pFVar24;
  void **ppvVar25;
  ulonglong uVar26;
  FRHIRenderQuery *pFVar27;
  FGPUOcclusionParallelPacket **ppFVar28;
  byte *pbVar29;
  ulonglong uVar30;
  FGPUOcclusionParallelPacket **local_res18;
  undefined1 local_res20 [8];
  undefined1 local_c8;
  undefined1 local_c7;
  undefined1 local_c6;
  undefined1 local_c5 [5];
  TArray<FGPUOcclusionParallelPacket_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *local_c0;
  FLinearColor_u_0 local_b8;
  undefined1 local_a8 [24];
  FRHICommandList *local_90;
  FRHIRenderQuery *local_88;
  uint local_80 [4];
  longlong local_70;
  
  if ((this->bFinished == false) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("bFinished",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
                          ,0xd58,L""), bVar14)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  this->bFinalized = true;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"FinalizeOcclusionCull");
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3419,"FinalizeOcclusionCull",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
               ,0xd5b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3419);
  }
  fVar10 = __real_3b808081;
  pFVar27 = (FRHIRenderQuery *)(this->Packets).AllocatorInstance.Data;
  local_c0 = &this->Packets;
  iVar4 = (this->Packets).ArrayNum;
  local_a8._8_8_ = (longlong)&pFVar27->field_0x0 + (longlong)iVar4 * 8;
  while( true ) {
    uVar12 = local_a8._8_8_;
    pTVar16 = local_c0;
    if (local_c0->ArrayNum != iVar4) {
      `TCheckedPointerIterator<FGPUOcclusionParallelPacket_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res18);
      pTVar16 = &this->Packets;
    }
    if (pFVar27 == (FRHIRenderQuery *)uVar12) break;
    pFVar6 = *(FGPUOcclusionParallelPacket **)pFVar27;
    local_90 = this->RHICmdList;
    local_80[0] = 0;
    local_80[1] = 0;
    iVar5 = (pFVar6->RecordVisitor).OcclusionFeedbacks.ArrayNum;
    pFVar21 = (pFVar6->RecordVisitor).OcclusionFeedbacks.AllocatorInstance.Data;
    local_70 = pFVar6->_padding_ + 0x2ae8;
    pFVar17 = pFVar21 + iVar5;
    local_80[2] = 0;
    local_80[3] = 0;
    local_a8._16_8_ = pFVar6;
    local_88 = (FRHIRenderQuery *)&this->_padding_;
    while( true ) {
      if ((pFVar6->RecordVisitor).OcclusionFeedbacks.ArrayNum != iVar5) {
        `TCheckedPointerIterator<FOcclusionFeedbackEntry_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (pFVar21 == pFVar17) break;
      FOcclusionFeedback::AddPrimitive
                ((FOcclusionFeedback *)pFVar6->_padding_,&pFVar21->PrimitiveKey,
                 &(pFVar21->Bounds).Origin,&(pFVar21->Bounds).Extent,
                 (FGlobalDynamicVertexBuffer *)&this->_padding_);
      pFVar21 = pFVar21 + 1;
    }
    iVar5 = (pFVar6->RecordVisitor).OcclusionQueries.ArrayNum;
    pFVar22 = (pFVar6->RecordVisitor).OcclusionQueries.AllocatorInstance.Data;
    pFVar18 = pFVar22 + iVar5;
    while( true ) {
      if ((pFVar6->RecordVisitor).OcclusionQueries.ArrayNum != iVar5) {
        `TCheckedPointerIterator<FOcclusionQuery_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_c8);
      }
      if (pFVar22 == pFVar18) break;
      FGPUOcclusionPacket::FProcessVisitor::AddOcclusionQuery
                ((FProcessVisitor *)(local_a8 + 0x10),pFVar22);
      pFVar22 = pFVar22 + 1;
    }
    pTVar23 = (pFVar6->RecordVisitor).VisualizeQueries.AllocatorInstance.Data;
    iVar5 = (pFVar6->RecordVisitor).VisualizeQueries.ArrayNum;
    pTVar19 = pTVar23 + iVar5;
    pbVar29 = &pTVar23->field_0x39;
    while( true ) {
      if ((pFVar6->RecordVisitor).VisualizeQueries.ArrayNum != iVar5) {
        `TCheckedPointerIterator<TTuple<UE::Math::TBox<double>,FColor>_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_c7);
      }
      if (pTVar23 == pTVar19) break;
      local_b8._s_0.R = FLinearColor::sRGBToLinearTable[pbVar29[1]];
      local_b8._s_0.G = FLinearColor::sRGBToLinearTable[*pbVar29];
      local_b8._s_0.B = FLinearColor::sRGBToLinearTable[pbVar29[-1]];
      local_b8._s_0.A = (float)pbVar29[2] * fVar10;
      DrawWireBox((FPrimitiveDrawInterface *)pFVar6->_padding_,(TBox<double> *)pTVar23,
                  (FLinearColor *)&local_b8._s_0,'\x01',0.0,0.0,false);
      pTVar23 = pTVar23 + 1;
      pbVar29 = pbVar29 + 0x40;
    }
    iVar5 = (pFVar6->RecordVisitor).HZBBounds.ArrayNum;
    pFVar24 = (pFVar6->RecordVisitor).HZBBounds.AllocatorInstance.Data;
    pFVar20 = pFVar24 + iVar5;
    while( true ) {
      if ((pFVar6->RecordVisitor).HZBBounds.ArrayNum != iVar5) {
        `TCheckedPointerIterator<FHZBBound_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_c6);
      }
      if (pFVar24 == pFVar20) break;
      uVar15 = FHZBOcclusionTester::AddBounds
                         ((FHZBOcclusionTester *)pFVar6->_padding_,&pFVar24->BoundsOrigin,
                          &pFVar24->BoundsExtent);
      ppFVar9 = &pFVar24->TargetHistory;
      pFVar24 = pFVar24 + 1;
      (*ppFVar9)->HZBTestIndex = uVar15;
    }
    pFVar27 = (FRHIRenderQuery *)&pFVar27->field_0x8;
  }
  ppFVar28 = (pTVar16->AllocatorInstance).Data;
  iVar4 = pTVar16->ArrayNum;
  local_res18 = ppFVar28 + iVar4;
  while( true ) {
    ppFVar11 = local_res18;
    if (pTVar16->ArrayNum != iVar4) {
      `TCheckedPointerIterator<FGPUOcclusionParallelPacket_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_c5);
      pTVar16 = local_c0;
    }
    if (ppFVar28 == ppFVar11) break;
    pFVar6 = *ppFVar28;
    uVar26 = 0;
    uVar15 = (pFVar6->RecordVisitor).OcclusionHistories.NumElements;
    ppvVar25 = (pFVar6->RecordVisitor).OcclusionHistories.Chunks.Array.AllocatorInstance.Data;
    if (uVar15 != 0) {
      uVar30 = (ulonglong)uVar15;
      do {
        TSet<FPrimitiveOcclusionHistory,FPrimitiveOcclusionHistoryKeyFuncs,FDefaultSetAllocator>::
        Emplace<FPrimitiveOcclusionHistory_const_&>
                  ((TSet<FPrimitiveOcclusionHistory,FPrimitiveOcclusionHistoryKeyFuncs,FDefaultSetAllocator>
                    *)(this->_padding_ + 0x2ae8),(FPrimitiveOcclusionHistory *)local_a8,
                   (bool *)(uVar26 * 0x60 + (longlong)*ppvVar25));
        uVar15 = (int)uVar26 + 1;
        uVar26 = 0;
        ppvVar13 = ppvVar25 + 1;
        if (uVar15 < 10) {
          uVar26 = (ulonglong)uVar15;
          ppvVar13 = ppvVar25;
        }
        ppvVar25 = ppvVar13;
        uVar30 = uVar30 - 1;
      } while (uVar30 != 0);
    }
    pFVar7 = (pFVar6->Task).Pimpl.Reference;
    if (pFVar7 != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &pFVar7->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar7->_padding_)(pFVar7,1);
      }
    }
    pTVar23 = (pFVar6->RecordVisitor).VisualizeQueries.AllocatorInstance.Data;
    if (pTVar23 != (TTuple<UE::Math::TBox<double>,FColor> *)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pTVar23);
    }
    pFVar24 = (pFVar6->RecordVisitor).HZBBounds.AllocatorInstance.Data;
    if (pFVar24 != (FHZBBound *)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar24);
    }
    pFVar21 = (pFVar6->RecordVisitor).OcclusionFeedbacks.AllocatorInstance.Data;
    if (pFVar21 != (FOcclusionFeedbackEntry *)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar21);
    }
    pFVar22 = (pFVar6->RecordVisitor).OcclusionQueries.AllocatorInstance.Data;
    if (pFVar22 != (FOcclusionQuery *)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar22);
    }
    TIndirectArray<TChunkedArray<FPrimitiveOcclusionHistory,1024,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::FChunk,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
    ::
    ~TIndirectArray<TChunkedArray<FPrimitiveOcclusionHistory,1024,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::FChunk,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
              ((TIndirectArray<TChunkedArray<FPrimitiveOcclusionHistory,1024,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::FChunk,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                *)&pFVar6->RecordVisitor);
    TIndirectArray<TChunkedArray<int,1024,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::FChunk,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
    ::
    ~TIndirectArray<TChunkedArray<int,1024,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::FChunk,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
              (&(pFVar6->Input).Chunks);
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar6);
    ppFVar28 = ppFVar28 + 1;
    pTVar16 = local_c0;
  }
  pTVar16->ArrayNum = 0;
  if (pTVar16->ArrayMax != 0) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FGPUOcclusionParallelPacket_*>_>
              (8,8,0,&pTVar16->AllocatorInstance,0,&pTVar16->ArrayMax);
  }
  FGlobalDynamicVertexBuffer::Commit((FGlobalDynamicVertexBuffer *)&this->_padding_);
  FRHICommandListBase::FinishRecording((FRHICommandListBase *)this->RHICmdList);
  if ((this->FinalizeTask != (FTaskEvent)0x0) &&
     (*(char *)((longlong)this->FinalizeTask + 0xd0) == '\0')) {
    this_00 = this->FinalizeTask;
    LOCK();
    aVar2 = *(atomic<bool> *)((longlong)this_00 + 0x45);
    *(atomic<bool> *)((longlong)this_00 + 0x45) = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar2 == (atomic<bool>)0x0) {
      LOCK();
      *(atomic<unsigned_int> *)((longlong)this_00 + 0x30) =
           (atomic<unsigned_int>)((int)*(atomic<unsigned_int> *)((longlong)this_00 + 0x30) + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)this_00,0xd8);
    }
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// Finish @ 1455401e0

void __thiscall FGPUOcclusionParallel::Finish(FGPUOcclusionParallel *this,FTaskEvent *param_1)

{
  int *piVar1;
  FGPUOcclusionParallelPacket **ppFVar2;
  atomic<bool> aVar3;
  int iVar4;
  FTaskBase *pFVar5;
  FTaskEvent this_00;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  FGPUOcclusionParallelPacket **ppFVar10;
  undefined1 local_res8 [8];
  
  if (this->bFinished != false) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bFinished",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
                       ,0xd3f,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  this->bFinished = true;
  iVar4 = (this->Packets).ArrayNum;
  uVar9 = iVar4 - 1;
  uVar8 = 0;
  if ((int)uVar9 < iVar4) {
    uVar8 = ~uVar9 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  FGPUOcclusionParallelPacket::LaunchOcclusionCullTask
            ((this->Packets).AllocatorInstance.Data[(longlong)(this->Packets).ArrayNum + -1]);
  if ((this->NonOccludedPrimitives).ArrayNum != 0) {
    LOCK();
    piVar1 = (int *)(this->_padding_ + 0x1f0);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    TCommandPipe<TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>::
    EnqueueCommand<TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
              ((TCommandPipe<TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                *)(this->_padding_ + 0x140),&this->NonOccludedPrimitives);
    (this->NonOccludedPrimitives).ArrayNum = 0;
    if ((this->NonOccludedPrimitives).ArrayMax < 0) {
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<int>_>
                (4,4,0,&(this->NonOccludedPrimitives).AllocatorInstance,0,
                 &(this->NonOccludedPrimitives).ArrayMax);
    }
  }
  ppFVar10 = (this->Packets).AllocatorInstance.Data;
  iVar4 = (this->Packets).ArrayNum;
  ppFVar2 = ppFVar10 + iVar4;
  while( true ) {
    if ((this->Packets).ArrayNum != iVar4) {
      `TCheckedPointerIterator<FGPUOcclusionParallelPacket_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (ppFVar10 == ppFVar2) break;
    if (((*ppFVar10)->bTaskLaunched != false) &&
       (pFVar5 = ((*ppFVar10)->Task).Pimpl.Reference, pFVar5 != (FTaskBase *)0x0)) {
      UE::Tasks::Private::FTaskBase::AddPrerequisites((FTaskBase *)*param_1,pFVar5);
    }
    ppFVar10 = ppFVar10 + 1;
  }
  if ((*param_1 != (FTaskEvent)0x0) && (*(char *)((longlong)*param_1 + 0xd0) == '\0')) {
    this_00 = *param_1;
    LOCK();
    aVar3 = *(atomic<bool> *)((longlong)this_00 + 0x45);
    *(atomic<bool> *)((longlong)this_00 + 0x45) = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar3 == (atomic<bool>)0x0) {
      LOCK();
      *(atomic<unsigned_int> *)((longlong)this_00 + 0x30) =
           (atomic<unsigned_int>)((int)*(atomic<unsigned_int> *)((longlong)this_00 + 0x30) + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)this_00,0xd8);
    }
  }
  return;
}

// Map @ 1455496a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FGPUOcclusionParallel::Map(FGPUOcclusionParallel *this,FRHICommandListImmediate *param_1)

{
  FRHICommandList *pFVar1;
  code *pcVar2;
  bool bVar3;
  FRHICommandListBase *this_00;
  
  FGPUOcclusion::Map((FGPUOcclusion *)this,param_1);
  this_00 = ::operator_new(0x1bb0);
  if (this_00 == (FRHICommandListBase *)0x0) {
    this_00 = (FRHICommandListBase *)0x0;
  }
  else {
    FRHICommandListBase::FRHICommandListBase
              (this_00,(FRHIGPUMask)*(uint *)&param_1->field_0x29c,false);
  }
  this->RHICmdList = (FRHICommandList *)this_00;
  FRHICommandListBase::SwitchPipeline(this_00,Graphics);
  pFVar1 = this->RHICmdList;
  if ((int)this->_padding_ != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("VertexBuffers.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalRenderResources.h"
                       ,0xe9,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->_padding_ = (longlong)pFVar1;
  return;
}

// Unmap @ 145554480

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FGPUOcclusionParallel::Unmap(FGPUOcclusionParallel *this,FRHICommandListImmediate *param_1)

{
  code *pcVar1;
  bool bVar2;
  FQueuedCommandList local_res8;
  TArrayView<FRHICommandListImmediate::FQueuedCommandList,int> local_18;
  
  if (this->FinalizeTask != (FTaskEvent)0x0) {
    UE::Tasks::Private::FTaskBase::Wait((FTaskBase *)this->FinalizeTask);
  }
  if (this->bFinalized == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bFinalized",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
                       ,0xd7f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res8.CmdList = (FRHICommandListBase *)this->RHICmdList;
  local_18.ArrayNum = 1;
  local_18.DataPtr = &local_res8;
  FRHICommandListImmediate::QueueAsyncCommandListSubmit(param_1,&local_18,Disabled,0);
  FGPUOcclusion::Unmap((FGPUOcclusion *)this,param_1);
  return;
}

