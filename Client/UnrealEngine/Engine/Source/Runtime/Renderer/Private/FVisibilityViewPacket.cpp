// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 9

// FVisibilityViewPacket @ 14551f520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

FVisibilityViewPacket * __thiscall
FVisibilityViewPacket::FVisibilityViewPacket
          (FVisibilityViewPacket *this,FVisibilityTaskData *param_1,FScene *param_2,
          FViewInfo *param_3,int param_4)

{
  FGPUOcclusionParallel *this_00;
  int *piVar1;
  FGPUOcclusionSerial *this_01;
  atomic<int> *paVar2;
  uint uVar3;
  longlong lVar4;
  FVisibilityTaskData *pFVar5;
  FTaskEvent FVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar10;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar11;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar12;
  longlong *plVar13;
  bool bVar14;
  undefined1 auStackY_88 [32];
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_88;
  this->TaskData = param_1;
  this->TaskConfig = &param_1->TaskConfig;
  this->View = param_3;
  this->Scene = param_2;
  this->ViewState = param_3->ViewState;
  this->ViewIndex = param_4;
  (this->ViewElementPDI)._padding_ = (longlong)&___7FViewElementPDI__6B_;
  (this->ViewElementPDI)._padding_ = (longlong)param_3;
  (this->ViewElementPDI).ViewInfo = param_3;
  (this->ViewElementPDI).CurrentHitProxy.Reference = (HHitProxy *)0x0;
  (this->ViewElementPDI).HitProxyConsumer = (FHitProxyConsumer *)0x0;
  (this->ViewElementPDI).DynamicPrimitiveCollector = (FGPUScenePrimitiveCollector *)0x0;
  (this->OcclusionCull).ContextIfSerial = (FGPUOcclusionSerial *)0x0;
  (this->OcclusionCull).ContextIfParallel = (FGPUOcclusionParallel *)0x0;
  (this->OcclusionCull).CommandPipe.PrerequisiteTask.Pimpl.Reference = (FTaskBase *)0x0;
  *(undefined8 *)&(this->OcclusionCull).CommandPipe.CommandFunction = 0;
  *(undefined8 *)&(this->OcclusionCull).CommandPipe.CommandFunction.field_0x28 = 0;
  *(undefined8 *)&(this->OcclusionCull).CommandPipe.EmptyFunction = 0;
  *(undefined8 *)&(this->OcclusionCull).CommandPipe.EmptyFunction.field_0x28 = 0;
  (this->OcclusionCull).CommandPipe.QueueMutex.State = (atomic<unsigned_char>)0x0;
  (this->OcclusionCull).CommandPipe.Queue.AllocatorInstance.Data = (FPrimitiveRange *)0x0;
  (this->OcclusionCull).CommandPipe.Queue.ArrayNum = 0;
  (this->OcclusionCull).CommandPipe.Queue.ArrayMax = 0;
  UE::Tasks::FPipe::FPipe(&(this->OcclusionCull).CommandPipe.Pipe,L"OcclusionCullPipe");
  (this->OcclusionCull).CommandPipe.NumCommands = (atomic<int>)0x0;
  (this->Relevance).Context = (FComputeAndMarkRelevance *)0x0;
  (this->Relevance).CommandPipe.PrerequisiteTask.Pimpl.Reference = (FTaskBase *)0x0;
  *(undefined8 *)&(this->Relevance).CommandPipe.CommandFunction = 0;
  *(undefined8 *)&(this->Relevance).CommandPipe.CommandFunction.field_0x28 = 0;
  *(undefined8 *)&(this->Relevance).CommandPipe.EmptyFunction = 0;
  *(undefined8 *)&(this->Relevance).CommandPipe.EmptyFunction.field_0x28 = 0;
  (this->Relevance).CommandPipe.QueueMutex.State = (atomic<unsigned_char>)0x0;
  (this->Relevance).CommandPipe.Queue.AllocatorInstance.Data =
       (TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *)0x0;
  (this->Relevance).CommandPipe.Queue.ArrayNum = 0;
  (this->Relevance).CommandPipe.Queue.ArrayMax = 0;
  UE::Tasks::FPipe::FPipe(&(this->Relevance).CommandPipe.Pipe,L"RelevancePipe");
  (this->Relevance).CommandPipe.NumCommands = (atomic<int>)0x0;
  UE::Tasks::FTaskEvent::FTaskEvent
            (&(this->Tasks).AlwaysVisible,
             L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibilityPrivate.h(459)"
            );
  UE::Tasks::FTaskEvent::FTaskEvent
            (&(this->Tasks).FrustumCull,
             L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibilityPrivate.h(460)"
            );
  UE::Tasks::FTaskEvent::FTaskEvent
            (&(this->Tasks).OcclusionCull,
             L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibilityPrivate.h(461)"
            );
  UE::Tasks::FTaskEvent::FTaskEvent
            (&(this->Tasks).ComputeRelevance,
             L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibilityPrivate.h(462)"
            );
  UE::Tasks::FTaskEvent::FTaskEvent
            (&(this->Tasks).LightVisibility,
             L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibilityPrivate.h(463)"
            );
  if ((((this->ViewState != (FSceneViewState *)0x0) &&
       (lVar4 = this->View->_padding_, (*(byte *)(lVar4 + 0x58) & 2) == 0)) &&
      (GOcclusionCullEnabled != false)) && (-1 < *(int *)(lVar4 + 0x5c))) {
    pFVar5 = this->TaskData;
    if (this->TaskConfig->Schedule == Parallel) {
      aVar10 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
                )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0xa0,8);
      *(undefined8 *)((longlong)aVar10 + 8) = 0;
      *(undefined ***)aVar10 =
           &
           ___7__TObject_VFGPUOcclusionParallel_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
      ;
      this_00 = (FGPUOcclusionParallel *)((longlong)aVar10 + 0x10);
      aVar11 = (pFVar5->Allocator).Next;
      do {
        *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
          *)((longlong)aVar10 + 8) = aVar11;
        LOCK();
        aVar12 = (pFVar5->Allocator).Next;
        bVar14 = aVar11 == aVar12;
        if (bVar14) {
          (pFVar5->Allocator).Next = aVar10;
          aVar12 = aVar11;
        }
        UNLOCK();
        aVar11 = aVar12;
      } while (!bVar14);
      FGPUOcclusion::FGPUOcclusion((FGPUOcclusion *)this_00,this);
      this_00->_padding_ = (longlong)&___7FGPUOcclusionParallel__6B_;
      piVar1 = (int *)((longlong)aVar10 + 0x84);
      *(undefined4 *)((longlong)aVar10 + 0x60) =
           *(undefined4 *)(*(longlong *)(*(longlong *)((longlong)aVar10 + 0x30) + 8) + 0x68);
      *(undefined8 *)((longlong)aVar10 + 0x68) = 0;
      *(undefined8 *)((longlong)aVar10 + 0x70) = 0;
      *(undefined8 *)((longlong)aVar10 + 0x78) = 0;
      *(undefined4 *)((longlong)aVar10 + 0x80) = 0;
      *piVar1 = 0;
      *(undefined8 *)((longlong)aVar10 + 0x88) = 0;
      UE::Tasks::FTaskEvent::FTaskEvent
                ((FTaskEvent *)((longlong)aVar10 + 0x90),
                 L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibilityPrivate.h(1195)"
                );
      uVar3 = *(uint *)((longlong)aVar10 + 0x60);
      *(undefined2 *)((longlong)aVar10 + 0x98) = 0;
      if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
      }
      if (*piVar1 < (int)uVar3) {
        UE::Core::Private::
        ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<int>_>
                  (4,4,uVar3,(ForElementType<int> *)((longlong)aVar10 + 0x78),
                   *(int *)((longlong)aVar10 + 0x80),piVar1);
      }
      FGPUOcclusionParallel::CreateOcclusionPacket(this_00);
      (this->OcclusionCull).ContextIfParallel = this_00;
    }
    else {
      aVar10 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
                )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x118,8);
      *(undefined8 *)((longlong)aVar10 + 8) = 0;
      *(undefined ***)aVar10 =
           &
           ___7__TObject_VFGPUOcclusionSerial_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
      ;
      this_01 = (FGPUOcclusionSerial *)((longlong)aVar10 + 0x10);
      aVar11 = (pFVar5->Allocator).Next;
      do {
        *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
          *)((longlong)aVar10 + 8) = aVar11;
        LOCK();
        aVar12 = (pFVar5->Allocator).Next;
        bVar14 = aVar11 == aVar12;
        if (bVar14) {
          (pFVar5->Allocator).Next = aVar10;
          aVar12 = aVar11;
        }
        UNLOCK();
        aVar11 = aVar12;
      } while (!bVar14);
      FGPUOcclusion::FGPUOcclusion((FGPUOcclusion *)this_01,this);
      this_01->_padding_ = (longlong)&___7FGPUOcclusionSerial__6B_;
      FGPUOcclusionPacket::FGPUOcclusionPacket
                ((FGPUOcclusionPacket *)((longlong)aVar10 + 0x60),this,
                 (FGPUOcclusionState *)((longlong)aVar10 + 0x50));
      *(FGPUOcclusionPacket **)((longlong)aVar10 + 0xe0) =
           (FGPUOcclusionPacket *)((longlong)aVar10 + 0x60);
      *(undefined8 *)((longlong)aVar10 + 0xe8) = 0x154be5ed0;
      *(undefined8 **)((longlong)aVar10 + 0xf0) = (undefined8 *)((longlong)aVar10 + 0x18);
      *(undefined8 *)((longlong)aVar10 + 0xf8) = 0;
      *(undefined8 *)((longlong)aVar10 + 0x100) = 0;
      *(undefined8 *)((longlong)aVar10 + 0x110) = 0;
      *(longlong *)((longlong)aVar10 + 0x108) = *(longlong *)((longlong)aVar10 + 0x70) + 0x2ae8;
      (this->OcclusionCull).ContextIfSerial = this_01;
    }
  }
  if (this->TaskConfig->Schedule == Parallel) {
    FVar6 = (this->Tasks).FrustumCull;
    if (FVar6 != (FTaskEvent)0x0) {
      UE::Tasks::Private::FTaskBase::AddPrerequisites
                ((FTaskBase *)(this->Tasks).ComputeRelevance,(FTaskBase *)FVar6);
    }
    lVar4 = *(longlong *)&(this->OcclusionCull).CommandPipe.CommandFunction;
    uVar8 = *(undefined8 *)&(this->OcclusionCull).CommandPipe.CommandFunction.field_0x8;
    local_48 = *(longlong *)&(this->OcclusionCull).CommandPipe.CommandFunction.field_0x10;
    uStack_40 = *(undefined8 *)&(this->OcclusionCull).CommandPipe.CommandFunction.field_0x18;
    uVar7 = *(undefined8 *)&(this->OcclusionCull).CommandPipe.CommandFunction.field_0x20;
    plStack_30 = *(longlong **)&(this->OcclusionCull).CommandPipe.CommandFunction.field_0x28;
    *(code **)&(this->OcclusionCull).CommandPipe.CommandFunction =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FVisibilityViewPacket::FVisibilityViewPacket'::__l13::<lambda_1>,void,FPrimitiveRange_&&>
         ::Call;
    *(undefined8 *)&(this->OcclusionCull).CommandPipe.CommandFunction.field_0x8 = uStack_50;
    *(undefined4 *)&(this->OcclusionCull).CommandPipe.CommandFunction.field_0x10 = 0x50fc57e8;
    *(undefined4 *)&(this->OcclusionCull).CommandPipe.CommandFunction.field_0x14 = 1;
    *(FVisibilityViewPacket **)&(this->OcclusionCull).CommandPipe.CommandFunction.field_0x18 = this;
    *(undefined4 *)&(this->OcclusionCull).CommandPipe.CommandFunction.field_0x20 =
         (undefined4)local_38;
    *(undefined4 *)&(this->OcclusionCull).CommandPipe.CommandFunction.field_0x24 = local_38._4_4_;
    *(undefined4 *)&(this->OcclusionCull).CommandPipe.CommandFunction.field_0x28 = 0;
    *(undefined4 *)&(this->OcclusionCull).CommandPipe.CommandFunction.field_0x2c = 0;
    local_38 = uVar7;
    if (lVar4 != 0) {
      plVar13 = &local_48;
      if (plStack_30 != (longlong *)0x0) {
        plVar13 = plStack_30;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    lVar4 = *(longlong *)&(this->OcclusionCull).CommandPipe.EmptyFunction;
    uVar9 = *(undefined8 *)&(this->OcclusionCull).CommandPipe.EmptyFunction.field_0x8;
    local_48 = *(longlong *)&(this->OcclusionCull).CommandPipe.EmptyFunction.field_0x10;
    uStack_40 = *(undefined8 *)&(this->OcclusionCull).CommandPipe.EmptyFunction.field_0x18;
    uVar7 = *(undefined8 *)&(this->OcclusionCull).CommandPipe.EmptyFunction.field_0x20;
    plStack_30 = *(longlong **)&(this->OcclusionCull).CommandPipe.EmptyFunction.field_0x28;
    *(code **)&(this->OcclusionCull).CommandPipe.EmptyFunction =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FVisibilityViewPacket::FVisibilityViewPacket'::__l13::<lambda_2>,void>
         ::Call;
    *(undefined8 *)&(this->OcclusionCull).CommandPipe.EmptyFunction.field_0x8 = uVar8;
    *(undefined4 *)&(this->OcclusionCull).CommandPipe.EmptyFunction.field_0x10 = 0x50fc5808;
    *(undefined4 *)&(this->OcclusionCull).CommandPipe.EmptyFunction.field_0x14 = 1;
    *(FVisibilityViewPacket **)&(this->OcclusionCull).CommandPipe.EmptyFunction.field_0x18 = this;
    *(undefined4 *)&(this->OcclusionCull).CommandPipe.EmptyFunction.field_0x20 =
         (undefined4)local_38;
    *(undefined4 *)&(this->OcclusionCull).CommandPipe.EmptyFunction.field_0x24 = local_38._4_4_;
    *(undefined4 *)&(this->OcclusionCull).CommandPipe.EmptyFunction.field_0x28 = 0;
    *(undefined4 *)&(this->OcclusionCull).CommandPipe.EmptyFunction.field_0x2c = 0;
    local_38 = uVar7;
    if (lVar4 != 0) {
      plVar13 = &local_48;
      if (plStack_30 != (longlong *)0x0) {
        plVar13 = plStack_30;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    LOCK();
    paVar2 = &(this->OcclusionCull).CommandPipe.NumCommands;
    *paVar2 = (atomic<int>)((int)*paVar2 + 1);
    UNLOCK();
    lVar4 = *(longlong *)&(this->Relevance).CommandPipe.CommandFunction;
    uVar8 = *(undefined8 *)&(this->Relevance).CommandPipe.CommandFunction.field_0x8;
    local_48 = *(longlong *)&(this->Relevance).CommandPipe.CommandFunction.field_0x10;
    uStack_40 = *(undefined8 *)&(this->Relevance).CommandPipe.CommandFunction.field_0x18;
    uVar7 = *(undefined8 *)&(this->Relevance).CommandPipe.CommandFunction.field_0x20;
    plStack_30 = *(longlong **)&(this->Relevance).CommandPipe.CommandFunction.field_0x28;
    *(code **)&(this->Relevance).CommandPipe.CommandFunction =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FVisibilityViewPacket::FVisibilityViewPacket'::__l13::<lambda_3>,void,TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&&>
         ::Call;
    *(undefined8 *)&(this->Relevance).CommandPipe.CommandFunction.field_0x8 = uVar9;
    *(undefined4 *)&(this->Relevance).CommandPipe.CommandFunction.field_0x10 = 0x50fc5828;
    *(undefined4 *)&(this->Relevance).CommandPipe.CommandFunction.field_0x14 = 1;
    *(FVisibilityViewPacket **)&(this->Relevance).CommandPipe.CommandFunction.field_0x18 = this;
    *(undefined4 *)&(this->Relevance).CommandPipe.CommandFunction.field_0x20 = (undefined4)local_38;
    *(undefined4 *)&(this->Relevance).CommandPipe.CommandFunction.field_0x24 = local_38._4_4_;
    *(undefined4 *)&(this->Relevance).CommandPipe.CommandFunction.field_0x28 = 0;
    *(undefined4 *)&(this->Relevance).CommandPipe.CommandFunction.field_0x2c = 0;
    local_38 = uVar7;
    if (lVar4 != 0) {
      plVar13 = &local_48;
      if (plStack_30 != (longlong *)0x0) {
        plVar13 = plStack_30;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    lVar4 = *(longlong *)&(this->Relevance).CommandPipe.EmptyFunction;
    local_48 = *(longlong *)&(this->Relevance).CommandPipe.EmptyFunction.field_0x10;
    uStack_40 = *(undefined8 *)&(this->Relevance).CommandPipe.EmptyFunction.field_0x18;
    uVar7 = *(undefined8 *)&(this->Relevance).CommandPipe.EmptyFunction.field_0x20;
    plStack_30 = *(longlong **)&(this->Relevance).CommandPipe.EmptyFunction.field_0x28;
    *(code **)&(this->Relevance).CommandPipe.EmptyFunction =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FVisibilityViewPacket::FVisibilityViewPacket'::__l13::<lambda_4>,void>
         ::Call;
    *(undefined8 *)&(this->Relevance).CommandPipe.EmptyFunction.field_0x8 = uVar8;
    *(undefined4 *)&(this->Relevance).CommandPipe.EmptyFunction.field_0x10 = 0x50fc5848;
    *(undefined4 *)&(this->Relevance).CommandPipe.EmptyFunction.field_0x14 = 1;
    *(FVisibilityViewPacket **)&(this->Relevance).CommandPipe.EmptyFunction.field_0x18 = this;
    *(undefined4 *)&(this->Relevance).CommandPipe.EmptyFunction.field_0x20 = (undefined4)local_38;
    *(undefined4 *)&(this->Relevance).CommandPipe.EmptyFunction.field_0x24 = local_38._4_4_;
    *(undefined4 *)&(this->Relevance).CommandPipe.EmptyFunction.field_0x28 = 0;
    *(undefined4 *)&(this->Relevance).CommandPipe.EmptyFunction.field_0x2c = 0;
    local_38 = uVar7;
    if (lVar4 != 0) {
      plVar13 = &local_48;
      if (plStack_30 != (longlong *)0x0) {
        plVar13 = plStack_30;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    LOCK();
    paVar2 = &(this->Relevance).CommandPipe.NumCommands;
    *paVar2 = (atomic<int>)((int)*paVar2 + 1);
    UNLOCK();
  }
  return this;
}

// operator() @ 1455223c0

void __thiscall
`FVisibilityViewPacket::BeginInitVisibility'::__l2::<lambda_1>::operator()(void *this)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ForElementType<unsigned_int> *pFVar9;
  ulonglong uVar10;
  ForElementType<unsigned_int> *pFVar11;
  uint uVar12;
  ForElementType<FLODMask> *pFVar13;
  ForElementType<UE::Math::TIntVector2<int>_> *pFVar14;
  bool bVar15;
  FLODMask local_28 [8];
  
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3786,"SceneVisibility_InitMaps",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
               ,0xeca);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3786);
  }
  lVar3 = *(longlong *)(*(longlong *)this + 0x18);
  pFVar14 = (ForElementType<UE::Math::TIntVector2<int>_> *)(lVar3 + 0x2010);
  iVar8 = *(int *)(lVar3 + 0x2018);
  piVar1 = (int *)(lVar3 + 0x2018);
  uVar7 = *(uint *)(*(longlong *)(*(longlong *)this + 0x10) + 0x2890);
  if (iVar8 < (int)uVar7) {
    iVar6 = UE::Core::Private::
            ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::Math::TIntVector2<int>_>_>
                      (8,4,uVar7 - iVar8,pFVar14,piVar1,(int *)(lVar3 + 0x201c));
    memset(pFVar14->Data + iVar6,0,(longlong)(int)(uVar7 - iVar8) << 3);
  }
  else {
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    if ((int)uVar7 < iVar8) {
      uVar12 = iVar8 - uVar7;
      if (((int)(uVar7 | uVar12) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar12 != 0) {
        iVar8 = (*piVar1 - uVar7) - uVar12;
        if (iVar8 != 0) {
          memmove(pFVar14->Data + (int)uVar7,pFVar14->Data + (int)uVar7 + (int)uVar12,
                  (longlong)iVar8 << 3);
        }
        *piVar1 = *piVar1 - uVar12;
        UE::Core::Private::
        ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::Math::TIntVector2<int>_>_>
                  (8,4,pFVar14,*piVar1,(int *)(lVar3 + 0x201c));
      }
    }
  }
  lVar3 = *(longlong *)(*(longlong *)this + 0x18);
  pFVar13 = (ForElementType<FLODMask> *)(lVar3 + 0x1d80);
  uVar7 = *(uint *)(*(longlong *)(*(longlong *)this + 0x10) + 0x2890);
  uVar10 = (ulonglong)uVar7;
  INSERT(0,0,0xf,1);
  INSERT(local_28[0],0,0xe,1);
  INSERT(local_28[0],0,7,7);
  INSERT(local_28[0],0,0,7);
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar10);
  }
  puVar2 = (uint *)(lVar3 + 0x1d8c);
  *(undefined4 *)(lVar3 + 0x1d88) = 0;
  if (*puVar2 != uVar7) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FLODMask>_>
              (2,2,uVar7,pFVar13,0,(int *)puVar2);
  }
  if (0 < (int)uVar7) {
    do {
      if (((pFVar13->Data <= local_28) && (local_28 < pFVar13->Data + (int)*puVar2)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar7 = *(uint *)(lVar3 + 0x1d88);
      if (uVar7 == *puVar2) {
        uVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FLODMask>_>
                          (0x202,pFVar13,(int *)puVar2);
      }
      *(uint *)(lVar3 + 0x1d88) = uVar7 + 1;
      pFVar13->Data[(int)uVar7] = local_28[0];
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  lVar3 = *(longlong *)(*(longlong *)this + 0x18);
  pFVar11 = (ForElementType<unsigned_int> *)(lVar3 + 0x1d20);
  iVar8 = *(int *)(*(longlong *)(*(longlong *)this + 0x10) + 0x46c8);
  *(int *)(lVar3 + 0x1d38) = iVar8;
  uVar7 = iVar8 + 0x1f;
  uVar12 = uVar7 >> 5;
  if (uVar7 >> 5 != 0) {
    if (*(int *)(lVar3 + 0x1d3c) + 0x1fU >> 5 < uVar12) {
      TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
      ForElementType<unsigned_int>::ResizeAllocation(pFVar11,0,uVar12,4);
      *(uint *)(lVar3 + 0x1d3c) = uVar12 << 5;
    }
    pFVar9 = *(ForElementType<unsigned_int> **)(lVar3 + 0x1d30);
    if (*(ForElementType<unsigned_int> **)(lVar3 + 0x1d30) == (ForElementType<unsigned_int> *)0x0) {
      pFVar9 = pFVar11;
    }
    memset(pFVar9,0,(ulonglong)uVar12 << 2);
    uVar12 = *(int *)(lVar3 + 0x1d38) >> 0x1f & 0x1f;
    uVar7 = *(int *)(lVar3 + 0x1d38) + uVar12;
    iVar8 = (uVar7 & 0x1f) - uVar12;
    if (iVar8 != 0) {
      pFVar9 = *(ForElementType<unsigned_int> **)(lVar3 + 0x1d30);
      if (*(ForElementType<unsigned_int> **)(lVar3 + 0x1d30) == (ForElementType<unsigned_int> *)0x0)
      {
        pFVar9 = pFVar11;
      }
      *(uint *)(pFVar9->InlineData + (longlong)((int)uVar7 >> 5) * 4) =
           *(uint *)(pFVar9->InlineData + (longlong)((int)uVar7 >> 5) * 4) &
           0xffffffffU >> (-(char)iVar8 & 0x1fU);
    }
  }
  lVar3 = *(longlong *)(*(longlong *)this + 0x18);
  pFVar11 = (ForElementType<unsigned_int> *)(lVar3 + 0x1d40);
  iVar8 = *(int *)(*(longlong *)(*(longlong *)this + 0x10) + 0x46c8);
  *(int *)(lVar3 + 0x1d58) = iVar8;
  uVar7 = iVar8 + 0x1f;
  uVar12 = uVar7 >> 5;
  if (uVar7 >> 5 != 0) {
    if (*(int *)(lVar3 + 0x1d5c) + 0x1fU >> 5 < uVar12) {
      TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
      ForElementType<unsigned_int>::ResizeAllocation(pFVar11,0,uVar12,4);
      *(uint *)(lVar3 + 0x1d5c) = uVar12 << 5;
    }
    pFVar9 = *(ForElementType<unsigned_int> **)(lVar3 + 0x1d50);
    if (*(ForElementType<unsigned_int> **)(lVar3 + 0x1d50) == (ForElementType<unsigned_int> *)0x0) {
      pFVar9 = pFVar11;
    }
    memset(pFVar9,0,(ulonglong)uVar12 << 2);
    uVar12 = *(int *)(lVar3 + 0x1d58) >> 0x1f & 0x1f;
    uVar7 = *(int *)(lVar3 + 0x1d58) + uVar12;
    iVar8 = (uVar7 & 0x1f) - uVar12;
    if (iVar8 != 0) {
      pFVar9 = *(ForElementType<unsigned_int> **)(lVar3 + 0x1d50);
      if (*(ForElementType<unsigned_int> **)(lVar3 + 0x1d50) == (ForElementType<unsigned_int> *)0x0)
      {
        pFVar9 = pFVar11;
      }
      *(uint *)(pFVar9->InlineData + (longlong)((int)uVar7 >> 5) * 4) =
           *(uint *)(pFVar9->InlineData + (longlong)((int)uVar7 >> 5) * 4) &
           0xffffffffU >> (-(char)iVar8 & 0x1fU);
    }
  }
  lVar3 = *(longlong *)(*(longlong *)this + 0x18);
  pFVar11 = (ForElementType<unsigned_int> *)(lVar3 + 0x1d60);
  iVar8 = *(int *)(*(longlong *)(*(longlong *)this + 0x10) + 0x46c8);
  *(int *)(lVar3 + 0x1d78) = iVar8;
  uVar7 = iVar8 + 0x1f;
  uVar12 = uVar7 >> 5;
  if (uVar7 >> 5 != 0) {
    if (*(int *)(lVar3 + 0x1d7c) + 0x1fU >> 5 < uVar12) {
      TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
      ForElementType<unsigned_int>::ResizeAllocation(pFVar11,0,uVar12,4);
      *(uint *)(lVar3 + 0x1d7c) = uVar12 << 5;
    }
    pFVar9 = *(ForElementType<unsigned_int> **)(lVar3 + 0x1d70);
    if (*(ForElementType<unsigned_int> **)(lVar3 + 0x1d70) == (ForElementType<unsigned_int> *)0x0) {
      pFVar9 = pFVar11;
    }
    memset(pFVar9,0,(ulonglong)uVar12 << 2);
    uVar12 = *(int *)(lVar3 + 0x1d78) >> 0x1f & 0x1f;
    uVar7 = *(int *)(lVar3 + 0x1d78) + uVar12;
    iVar8 = (uVar7 & 0x1f) - uVar12;
    if (iVar8 != 0) {
      pFVar9 = *(ForElementType<unsigned_int> **)(lVar3 + 0x1d70);
      if (*(ForElementType<unsigned_int> **)(lVar3 + 0x1d70) == (ForElementType<unsigned_int> *)0x0)
      {
        pFVar9 = pFVar11;
      }
      *(uint *)(pFVar9->InlineData + (longlong)((int)uVar7 >> 5) * 4) =
           *(uint *)(pFVar9->InlineData + (longlong)((int)uVar7 >> 5) * 4) &
           0xffffffffU >> (0x20U - (char)iVar8 & 0x1f);
    }
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 145523a80

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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
`FVisibilityViewPacket::FVisibilityViewPacket'::__l13::<lambda_1>::operator()
          (void *this,FPrimitiveRange param_1)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  FGPUOcclusionParallel *this_00;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  byte bVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  FPrimitiveRange FVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  int iStackX_14;
  
  lVar3 = *(longlong *)this;
  UpdatePrimitiveFading
            (*(FScene **)(lVar3 + 0x10),*(FViewInfo **)(lVar3 + 0x18),
             *(FSceneViewState **)(lVar3 + 0x20),param_1);
  iVar6 = PrecomputedOcclusionCull(*(FVisibilityViewPacket **)this,param_1);
  this_00 = *(FGPUOcclusionParallel **)(*(longlong *)this + 0x68);
  if (this_00 == (FGPUOcclusionParallel *)0x0) {
    lVar3 = *(longlong *)(*(longlong *)this + 0x18);
    uVar9 = param_1.StartIndex;
    bVar7 = (byte)param_1.StartIndex & 0x1f;
    uVar14 = uVar9 & 0xffffffe0;
    iVar15 = (int)uVar9 >> 5;
    uVar17 = 1 << bVar7;
    uVar13 = -1 << bVar7;
    if ((((int)uVar9 < 0) || (*(int *)(lVar3 + 0x1c68) < (int)uVar9)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar10 = *(uint *)(lVar3 + 0x1c68);
    FVar12 = param_1;
    if (uVar9 != uVar10) {
      lVar16 = lVar3 + 0x1c50;
      if (*(longlong *)(lVar3 + 0x1c60) != 0) {
        lVar16 = *(longlong *)(lVar3 + 0x1c60);
      }
      uVar9 = uVar13 & *(uint *)(lVar16 + (longlong)iVar15 * 4);
      while (uVar9 == 0) {
        lVar8 = (longlong)iVar15;
        uVar14 = uVar14 + 0x20;
        iVar15 = iVar15 + 1;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) {
          FVar12.EndIndex = 0;
          FVar12.StartIndex = uVar10;
          goto LAB_145523bbe;
        }
        uVar13 = 0xffffffff;
        uVar9 = *(uint *)(lVar16 + 4 + lVar8 * 4);
      }
      uVar17 = -uVar9 & uVar9;
      uVar2 = (ulonglong)uVar17 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      FVar12.StartIndex = (int)lVar16 + -1 + uVar14;
      FVar12.EndIndex = 0;
      if ((int)uVar10 < (int)FVar12.StartIndex) {
        FVar12.EndIndex = 0;
        FVar12.StartIndex = uVar10;
      }
    }
LAB_145523bbe:
    iStackX_14 = param_1.EndIndex;
    iVar11 = FVar12.StartIndex;
    while (iVar11 < iStackX_14) {
      FComputeAndMarkRelevance::AddPrimitive
                (*(FComputeAndMarkRelevance **)(*(longlong *)this + 0x130),FVar12.StartIndex);
      uVar9 = *(uint *)(lVar3 + 0x1c68);
      uVar13 = uVar13 & ~uVar17;
      lVar16 = lVar3 + 0x1c50;
      if (*(longlong *)(lVar3 + 0x1c60) != 0) {
        lVar16 = *(longlong *)(lVar3 + 0x1c60);
      }
      uVar10 = uVar13 & *(uint *)(lVar16 + (longlong)iVar15 * 4);
      while (uVar10 == 0) {
        lVar8 = (longlong)iVar15;
        uVar14 = uVar14 + 0x20;
        iVar15 = iVar15 + 1;
        if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) {
          FVar12.EndIndex = 0;
          FVar12.StartIndex = uVar9;
          goto LAB_145523c4e;
        }
        uVar13 = 0xffffffff;
        uVar10 = *(uint *)(lVar16 + 4 + lVar8 * 4);
      }
      uVar17 = -uVar10 & uVar10;
      uVar2 = (ulonglong)uVar17 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      FVar12.StartIndex = (uVar14 - 1) + (int)lVar16;
      FVar12.EndIndex = 0;
      if ((int)uVar9 < (int)FVar12.StartIndex) {
        FVar12.EndIndex = 0;
        FVar12.StartIndex = uVar9;
      }
LAB_145523c4e:
      iVar11 = FVar12.StartIndex;
    }
  }
  else {
    FGPUOcclusionParallel::AddPrimitives(this_00,param_1);
  }
  LOCK();
  piVar1 = (int *)(*(longlong *)(*(longlong *)this + 8) + 0x58);
  *piVar1 = *piVar1 + iVar6;
  UNLOCK();
  return;
}

// operator() @ 145523d90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
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

void __thiscall
`FVisibilityViewPacket::BeginInitVisibility'::__l38::<lambda_2>::operator()(void *this)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_UpdateAlwaysVisible> FVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar14;
  FName FVar15;
  FNameEntryId FVar16;
  bool bVar17;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FTaskTagScope local_48;
  FStatMessage local_38;
  
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3904,"SceneVisibility_AlwaysVisible",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
               ,0xf40);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3904);
  }
  FVar16.Value = 0;
  FVar13 = StatPtr_STAT_UpdateAlwaysVisible;
  if (StatPtr_STAT_UpdateAlwaysVisible == (FThreadSafeStaticStat<FStat_STAT_UpdateAlwaysVisible>)0x0
     ) {
    pFVar12 = ::FName::FName(&local_res10,"STAT_UpdateAlwaysVisible");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_UpdateAlwaysVisible>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateAlwaysVisible,*pFVar12,
                        L"Always Visible","STATGROUP_InitViews","STATCAT_Advanced",L"Init Views",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  uVar10 = local_res8.s.HighPart._3_1_;
  uVar8 = local_res8.s.HighPart._2_1_;
  uVar6 = local_res8.s.HighPart._0_2_;
  FVar15 = *(FName *)FVar13;
  bVar3 = false;
  bVar5 = false;
  FVar14 = FVar15.ComparisonIndex.Value;
  if ((FVar14.Value != 0) || (FVar15.Number != 0)) {
    local_res8.s.HighPart._2_1_ = FVar15.Number._2_1_;
    uVar9 = local_res8.s.HighPart._2_1_;
    local_res8.s.HighPart._3_1_ = FVar15.Number._3_1_;
    uVar11 = local_res8.s.HighPart._3_1_;
    local_res8.s.HighPart._0_2_ = FVar15.Number._0_2_;
    uVar7 = local_res8.s.HighPart._0_2_;
    local_res8.s.HighPart._0_2_ = uVar6;
    local_res8.s.HighPart._2_1_ = uVar8;
    local_res8.s.HighPart._3_1_ = uVar10;
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar14.Value;
        local_res8.s.HighPart._0_2_ = uVar7;
        local_res8.s.HighPart._2_1_ = uVar9;
        local_res8.s.HighPart._3_1_ = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
                   ,0xf41);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar14.Value;
      local_res8.s.HighPart._0_2_ = uVar7;
      local_res8.s.HighPart._2_1_ = uVar9;
      local_res8.s.HighPart._3_1_ = uVar11;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar4 = true;
      FVar16.Value = FVar14.Value;
      goto LAB_145523f30;
    }
  }
  bVar4 = false;
  FVar15.ComparisonIndex.Value = 0;
  FVar15.Number = 0;
LAB_145523f30:
  FTaskTagScope::FTaskTagScope(&local_48,EParallelRenderingThread);
  local_res8.s.LowPart = *(uint *)((longlong)this + 8);
  lVar2 = *(longlong *)this;
  local_res8.s.HighPart._0_2_ = *(undefined2 *)((longlong)this + 0xc);
  local_res8.s.HighPart._2_1_ = *(undefined1 *)((longlong)this + 0xe);
  UpdateAlwaysVisible(*(FScene **)(lVar2 + 0x10),*(FViewInfo **)(lVar2 + 0x18),
                      (FFrustumCullingFlags *)&local_res8.s,*(FVisibilityTaskConfig **)(lVar2 + 8),
                      *(int *)((longlong)this + 0x10),*(float *)((longlong)this + 0x14));
  FTaskTagScope::~FTaskTagScope(&local_48);
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 1455240b0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
`FVisibilityViewPacket::FVisibilityViewPacket'::__l13::<lambda_2>::operator()(void *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<bool> aVar2;
  atomic<unsigned_int> aVar3;
  ETaskPriority EVar4;
  longlong lVar5;
  FTaskBase *pFVar6;
  
  lVar5 = *(longlong *)this;
  if (*(FGPUOcclusionParallel **)(lVar5 + 0x68) == (FGPUOcclusionParallel *)0x0) {
    TCommandPipe<TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>::
    ReleaseNumCommands((TCommandPipe<TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                        *)(lVar5 + 0x140),1);
    lVar5 = *(longlong *)(*(longlong *)this + 0x210);
    if ((lVar5 != 0) && (*(char *)(lVar5 + 0xd0) == '\0')) {
      pFVar6 = *(FTaskBase **)(*(longlong *)this + 0x210);
      LOCK();
      aVar2 = pFVar6->TaskTriggered;
      pFVar6->TaskTriggered = (atomic<bool>)0x1;
      UNLOCK();
      if (aVar2 == (atomic<bool>)0x0) {
        LOCK();
        pFVar6->RefCount = (atomic<unsigned_int>)((int)pFVar6->RefCount + 1);
        UNLOCK();
        UE::Tasks::Private::FTaskBase::TryLaunch(pFVar6,0xd8);
      }
    }
  }
  else {
    FGPUOcclusionParallel::Finish
              (*(FGPUOcclusionParallel **)(lVar5 + 0x68),(FTaskEvent *)(lVar5 + 0x210));
    lVar5 = *(longlong *)this;
    EVar4 = *(ETaskPriority *)(*(longlong *)(lVar5 + 8) + 0x39);
    pFVar6 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
             ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                         *)&UE::Tasks::Private::SmallTaskAllocator);
    if (pFVar6 == (FTaskBase *)0x0) {
      pFVar6 = (FTaskBase *)0x0;
    }
    else {
      UE::Tasks::Private::FTaskBase::FTaskBase(pFVar6,2,true);
      pFVar6->_padding_ =
           (longlong)
           &UE::Tasks::Private::
            TExecutableTaskBase<``FVisibilityViewPacket::FVisibilityViewPacket'::`13'::<lambda_2>::operator()'::`5'::<lambda_1>,void,void>
            ::_vftable_;
      UE::Tasks::Private::FTaskBase::Init
                (pFVar6,
                 L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp(3732)"
                 ,EVar4,None,None);
      pFVar6[1]._padding_ = lVar5;
      pFVar6->_padding_ =
           (longlong)
           &UE::Tasks::Private::
            TExecutableTask<``FVisibilityViewPacket::FVisibilityViewPacket'::`13'::<lambda_2>::operator()'::`5'::<lambda_1>_>
            ::_vftable_;
    }
    if (*(FTaskBase **)(lVar5 + 0x210) != (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::AddPrerequisites(pFVar6,*(FTaskBase **)(lVar5 + 0x210));
    }
    UE::Tasks::Private::FTaskBase::TryLaunch(pFVar6,0x100);
    if (pFVar6 != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &pFVar6->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x00014552419c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)pFVar6->_padding_)(pFVar6,1);
        return;
      }
    }
  }
  return;
}

// operator() @ 145524200

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
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

void __thiscall
`FVisibilityViewPacket::BeginInitVisibility'::__l41::<lambda_3>::operator()(void *this)

{
  int *piVar1;
  uint *puVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  FPrimitiveBounds *pFVar8;
  byte bVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  double dVar20;
  double dVar21;
  int local_res18;
  FFrustumCullingFlags local_98 [2];
  FPrimitiveRange local_88;
  ulonglong local_80;
  FTaskTagScope local_70 [4];
  
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3927,"SceneVisibility_FrustumCull",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
               ,0xf57);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3927);
  }
  FTaskTagScope::FTaskTagScope(local_70,EParallelRenderingThread);
  local_98[0]._0_4_ = *(undefined4 *)((longlong)this + 8);
  lVar14 = *(longlong *)this;
  local_98[0]._4_2_ = *(undefined2 *)((longlong)this + 0xc);
  local_98[0].bHasShowOnlyPrimitives = *(bool *)((longlong)this + 0xe);
  local_res18 = FrustumCull(*(FScene **)(lVar14 + 0x10),*(FViewInfo **)(lVar14 + 0x18),local_98,
                            *(float *)((longlong)this + 0x10),
                            *(FHLODVisibilityState **)((longlong)this + 0x18),
                            *(TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                              **)((longlong)this + 0x20),*(FVisibilityTaskConfig **)(lVar14 + 8),
                            *(int *)((longlong)this + 0x28));
  lVar14 = *(longlong *)(*(longlong *)this + 8);
  lVar15 = *(longlong *)(*(longlong *)this + 0x18);
  iVar10 = *(int *)(lVar14 + 0x2c);
  uVar17 = iVar10 * *(int *)((longlong)this + 0x28);
  iVar4 = *(int *)(lVar14 + 0xc);
  iVar10 = iVar10 + uVar17;
  if (iVar10 < iVar4) {
    iVar4 = iVar10;
  }
  local_88.StartIndex = uVar17;
  local_88.EndIndex = iVar4;
  if (*(char *)(lVar15 + 0x11f2) != '\0') {
    bVar9 = (byte)uVar17 & 0x1f;
    iVar10 = (int)uVar17 >> 5;
    local_80 = (ulonglong)(uint)(1 << bVar9);
    uVar12 = -1 << bVar9;
    uVar13 = uVar17 & 0xffffffe0;
    if ((((int)uVar17 < 0) || (*(int *)(lVar15 + 0x1c68) < (int)uVar17)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar18 = *(uint *)(lVar15 + 0x1c68);
    uVar16 = local_80;
    if (uVar17 != uVar18) {
      lVar14 = lVar15 + 0x1c50;
      if (*(longlong *)(lVar15 + 0x1c60) != 0) {
        lVar14 = *(longlong *)(lVar15 + 0x1c60);
      }
      uVar17 = uVar12 & *(uint *)(lVar14 + (longlong)iVar10 * 4);
      while (uVar17 == 0) {
        lVar11 = (longlong)iVar10;
        uVar13 = uVar13 + 0x20;
        iVar10 = iVar10 + 1;
        uVar17 = uVar18;
        if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
        goto joined_r0x00014552442d;
        uVar12 = 0xffffffff;
        uVar17 = *(uint *)(lVar14 + 4 + lVar11 * 4);
      }
      uVar16 = (ulonglong)(-uVar17 & uVar17);
      uVar3 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      uVar17 = (int)lVar14 + -1 + uVar13;
      local_80 = uVar16;
      if ((int)uVar18 < (int)uVar17) {
        uVar17 = uVar18;
      }
    }
joined_r0x00014552442d:
    if ((int)uVar17 < iVar4) {
      lVar14 = *(longlong *)(*(longlong *)this + 0x10);
      uVar18 = 0;
      if ((int)uVar17 < *(int *)(lVar14 + 0x28b8)) {
        uVar18 = ~uVar17 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         uVar16 = local_80, bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((*(byte *)(*(longlong *)(*(longlong *)(lVar14 + 0x28b0) + (longlong)(int)uVar17 * 8) +
                    0x7a) & 0x40) == 0) {
        lVar14 = *(longlong *)(*(longlong *)(*(longlong *)this + 0x18) + 0x1c60);
        lVar11 = *(longlong *)(*(longlong *)this + 0x18) + 0x1c50;
        if (lVar14 != 0) {
          lVar11 = lVar14;
        }
        puVar2 = (uint *)(lVar11 + (longlong)iVar10 * 4);
        *puVar2 = *puVar2 & ~(uint)uVar16;
        local_res18 = local_res18 + 1;
      }
      uVar18 = *(uint *)(lVar15 + 0x1c68);
      uVar12 = uVar12 & ~(uint)uVar16;
      lVar14 = lVar15 + 0x1c50;
      if (*(longlong *)(lVar15 + 0x1c60) != 0) {
        lVar14 = *(longlong *)(lVar15 + 0x1c60);
      }
      uVar17 = uVar12 & *(uint *)(lVar14 + (longlong)iVar10 * 4);
      while (uVar17 == 0) {
        lVar11 = (longlong)iVar10;
        uVar13 = uVar13 + 0x20;
        iVar10 = iVar10 + 1;
        uVar17 = uVar18;
        if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
        goto joined_r0x00014552442d;
        uVar12 = 0xffffffff;
        uVar17 = *(uint *)(lVar14 + 4 + lVar11 * 4);
      }
      uVar16 = (ulonglong)(-uVar17 & uVar17);
      uVar3 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      uVar17 = (int)lVar14 + -1 + uVar13;
      local_80 = uVar16;
      if ((int)uVar18 < (int)uVar17) {
        uVar17 = uVar18;
      }
      goto joined_r0x00014552442d;
    }
  }
  uVar17 = local_88.StartIndex;
  lVar14 = *(longlong *)(*(longlong *)this + 0x18);
  if ((*(byte *)(*(longlong *)(lVar14 + 8) + 0x58) & 2) != 0) {
    bVar9 = (byte)local_88.StartIndex & 0x1f;
    iVar10 = local_88.StartIndex >> 5;
    uVar18 = 1 << bVar9;
    uVar12 = local_88.StartIndex & 0xffffffe0;
    uVar13 = -1 << bVar9;
    dVar21 = (double)(*(int *)(lVar14 + 0x1c3c) - *(int *)(lVar14 + 0x1c34)) *
             *(double *)(lVar14 + 0x3d8);
    dVar20 = (double)(*(int *)(lVar14 + 0x1c38) - *(int *)(lVar14 + 0x1c30)) *
             *(double *)(lVar14 + 0x3b0);
    if (dVar21 <= dVar20) {
      dVar21 = dVar20;
    }
    if (((local_88.StartIndex < 0) || (*(int *)(lVar14 + 0x1c68) < local_88.StartIndex)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar5 = *(uint *)(lVar14 + 0x1c68);
    if (uVar17 != uVar5) {
      lVar15 = lVar14 + 0x1c50;
      if (*(longlong *)(lVar14 + 0x1c60) != 0) {
        lVar15 = *(longlong *)(lVar14 + 0x1c60);
      }
      uVar17 = uVar13 & *(uint *)(lVar15 + (longlong)iVar10 * 4);
      while (uVar17 == 0) {
        lVar11 = (longlong)iVar10;
        uVar12 = uVar12 + 0x20;
        iVar10 = iVar10 + 1;
        uVar17 = uVar5;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
        goto LAB_14552469d;
        uVar13 = 0xffffffff;
        uVar17 = *(uint *)(lVar15 + 4 + lVar11 * 4);
      }
      uVar18 = -uVar17 & uVar17;
      uVar16 = (ulonglong)uVar18 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      uVar17 = (int)lVar15 + -1 + uVar12;
      if ((int)uVar5 < (int)uVar17) {
        uVar17 = uVar5;
      }
    }
LAB_14552469d:
    if ((int)uVar17 < iVar4) {
      do {
        pFVar8 = TScenePrimitiveArray<FPrimitiveBounds>::Get
                           ((TScenePrimitiveArray<FPrimitiveBounds> *)
                            (*(longlong *)(*(longlong *)this + 0x10) + 0x28c0),uVar17);
        if ((double)(float)dVar21 * (pFVar8->BoxSphereBounds).SphereRadius <=
            (double)GWireframeCullThreshold) {
          lVar15 = *(longlong *)(*(longlong *)(*(longlong *)this + 0x18) + 0x1c60);
          lVar11 = *(longlong *)(*(longlong *)this + 0x18) + 0x1c50;
          if (lVar15 != 0) {
            lVar11 = lVar15;
          }
          puVar2 = (uint *)(lVar11 + (longlong)iVar10 * 4);
          *puVar2 = *puVar2 & ~uVar18;
          local_res18 = local_res18 + 1;
        }
        uVar5 = *(uint *)(lVar14 + 0x1c68);
        uVar13 = uVar13 & ~uVar18;
        lVar15 = lVar14 + 0x1c50;
        if (*(longlong *)(lVar14 + 0x1c60) != 0) {
          lVar15 = *(longlong *)(lVar14 + 0x1c60);
        }
        uVar17 = uVar13 & *(uint *)(lVar15 + (longlong)iVar10 * 4);
        while (uVar17 == 0) {
          lVar11 = (longlong)iVar10;
          uVar12 = uVar12 + 0x20;
          iVar10 = iVar10 + 1;
          uVar17 = uVar5;
          if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
          goto LAB_14552477d;
          uVar13 = 0xffffffff;
          uVar17 = *(uint *)(lVar15 + 4 + lVar11 * 4);
        }
        uVar18 = -uVar17 & uVar17;
        uVar16 = (ulonglong)uVar18 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        uVar17 = (int)lVar15 + -1 + uVar12;
        if ((int)uVar5 < (int)uVar17) {
          uVar17 = uVar5;
        }
LAB_14552477d:
      } while ((int)uVar17 < iVar4);
    }
  }
  if (iVar4 - local_88.StartIndex == local_res18) {
    TCommandPipe<FPrimitiveRange>::ReleaseNumCommands
              ((TCommandPipe<FPrimitiveRange> *)(*(longlong *)this + 0x70),1);
  }
  else {
    TCommandPipe<FPrimitiveRange>::EnqueueCommand<FPrimitiveRange_&>
              ((TCommandPipe<FPrimitiveRange> *)(*(longlong *)this + 0x70),&local_88);
  }
  LOCK();
  piVar1 = (int *)(*(longlong *)(*(longlong *)this + 8) + 0x30);
  *piVar1 = *piVar1 + local_res18;
  UNLOCK();
  FTaskTagScope::~FTaskTagScope(local_70);
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 145524840

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
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

void __thiscall
`FVisibilityViewPacket::BeginInitVisibility'::__l43::<lambda_4>::operator()(void *this,int param_1)

{
  longlong lVar1;
  bool bVar2;
  FFrustumCullingFlags local_res8;
  FTaskTagScope local_18;
  
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3992,"SceneVisibility_AlwaysVisible",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
               ,0xf98);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3992);
  }
  FTaskTagScope::FTaskTagScope(&local_18,EParallelRenderingThread);
  lVar1 = *(longlong *)this;
  local_res8._0_4_ = *(undefined4 *)((longlong)this + 8);
  local_res8._4_2_ = *(undefined2 *)((longlong)this + 0xc);
  local_res8.bHasShowOnlyPrimitives = *(bool *)((longlong)this + 0xe);
  UpdateAlwaysVisible(*(FScene **)(lVar1 + 0x10),*(FViewInfo **)(lVar1 + 0x18),&local_res8,
                      *(FVisibilityTaskConfig **)(lVar1 + 8),param_1,
                      *(float *)((longlong)this + 0x10));
  FTaskTagScope::~FTaskTagScope(&local_18);
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 1455249e0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
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

void __thiscall
`FVisibilityViewPacket::BeginInitVisibility'::__l43::<lambda_5>::operator()(void *this,int param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  FFrustumCullingFlags local_res8;
  FTaskTagScope local_18;
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4000,"SceneVisibility_FrustumCull",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
               ,4000);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4000);
  }
  FTaskTagScope::FTaskTagScope(&local_18,EParallelRenderingThread);
  local_res8._0_4_ = *(undefined4 *)((longlong)this + 8);
  lVar2 = *(longlong *)this;
  local_res8._4_2_ = *(undefined2 *)((longlong)this + 0xc);
  local_res8.bHasShowOnlyPrimitives = *(bool *)((longlong)this + 0xe);
  iVar3 = FrustumCull(*(FScene **)(lVar2 + 0x10),*(FViewInfo **)(lVar2 + 0x18),&local_res8,
                      *(float *)((longlong)this + 0x10),
                      *(FHLODVisibilityState **)((longlong)this + 0x18),
                      *(TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                        **)((longlong)this + 0x20),*(FVisibilityTaskConfig **)(lVar2 + 8),param_1);
  LOCK();
  piVar1 = (int *)(*(longlong *)(*(longlong *)this + 8) + 0x30);
  *piVar1 = *piVar1 + iVar3;
  UNLOCK();
  FTaskTagScope::~FTaskTagScope(&local_18);
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// BeginInitVisibility @ 145529c80

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

void __thiscall FVisibilityViewPacket::BeginInitVisibility(FVisibilityViewPacket *this)

{
  TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> *pTVar1;
  atomic<unsigned_int> *paVar2;
  atomic<int> *paVar3;
  uchar *puVar4;
  atomic<bool> aVar5;
  atomic<unsigned_int> aVar6;
  float fVar7;
  double dVar8;
  ETaskPriority EVar9;
  FViewInfo *pFVar10;
  FVisibilityTaskData *pFVar11;
  FScene *pFVar12;
  FSceneViewState *pFVar13;
  longlong lVar14;
  ForElementType<FSetElementId> FVar15;
  ICustomVisibilityQuery *pIVar16;
  code *pcVar17;
  bool bVar18;
  char cVar19;
  int iVar20;
  int iVar21;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> this_00;
  FTask *pFVar22;
  undefined8 uVar23;
  FTaskBase *pFVar24;
  TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator> *pTVar25
  ;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar26;
  FCachedSystemScalabilityCVars *pFVar27;
  longlong *plVar28;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar29;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar30;
  FConvexVolume *pFVar31;
  FTaskEvent FVar32;
  FVisibilityTaskConfig *pFVar33;
  FTaskEvent FVar34;
  FTaskEvent FVar35;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar36;
  ulonglong uVar37;
  longlong lVar38;
  ForElementType<FSetElementId> FVar39;
  EExtendedTaskPriority EVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar44;
  TMap<FPrimitiveComponentId,FPrimitiveFadingState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FPrimitiveFadingState,0>_>
  *pTVar45;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar46;
  FTaskEvent this_01;
  FTaskEvent FVar47;
  FTasks *pFVar48;
  bool bVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  char local_res8;
  FFrustumCullingFlags local_res20;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *local_1a8;
  undefined1 local_1a0 [16];
  int local_190;
  FTaskHandle local_188;
  FTaskEvent local_180;
  uint uStack_178;
  bool bStack_174;
  bool bStack_173;
  undefined1 uStack_172;
  undefined1 uStack_171;
  int local_170;
  float fStack_16c;
  longlong *local_168;
  undefined1 auStack_160 [16];
  uint uStack_150;
  uint uStack_14c;
  longlong local_148;
  TSet<TTuple<FPrimitiveComponentId,FPrimitiveFadingState>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FPrimitiveFadingState,0>,FDefaultSetAllocator>
  *pTStack_140;
  TSet<TTuple<FPrimitiveComponentId,FPrimitiveFadingState>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FPrimitiveFadingState,0>,FDefaultSetAllocator>
  *local_138;
  undefined2 local_130;
  FVisibilityViewPacket *local_128;
  uint local_120;
  bool local_11c;
  bool bStack_11b;
  undefined1 local_11a;
  float local_118;
  FVisibilityViewPacket *local_110;
  uint uStack_108;
  bool bStack_104;
  bool bStack_103;
  undefined1 uStack_102;
  undefined1 uStack_101;
  float local_100;
  undefined4 uStack_fc;
  FTaskEvent FStack_f8;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *local_f0;
  int iStack_e8;
  undefined4 uStack_e4;
  FVisibilityViewPacket *local_e0;
  uint local_d8;
  bool local_d4;
  bool bStack_d3;
  undefined1 local_d2;
  float local_d0;
  FTaskEvent local_c8;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *local_c0;
  code *local_b8;
  FVisibilityViewPacket **local_b0;
  code *local_a8;
  FVisibilityViewPacket **local_a0;
  undefined1 local_98 [32];
  longlong local_78;
  TSet<TTuple<FPrimitiveComponentId,FPrimitiveFadingState>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FPrimitiveFadingState,0>,FDefaultSetAllocator>
  *pTStack_70;
  
  ::FString::PrintfImpl((FString *)(local_1a0 + 8),L"BeginInitVisibility %d");
  FVar35 = (FTaskEvent)L"";
  if (local_190 != 0) {
    FVar35 = (FTaskEvent)local_1a0._8_8_;
  }
  bVar49 = -1 < CpuChannel->Enabled;
  if (bVar49) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)FVar35,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
               ,0xebf);
  }
  if ((FTaskEvent)local_1a0._8_8_ != (FTaskEvent)0x0) {
    FMemory::Free((void *)local_1a0._8_8_);
  }
  local_res8 = GFrustumCullEnabled;
  this_00.Reference =
       TLockFreeFixedSizeAllocator_TLSCacheBase<216,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
       ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<216,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                   *)&UE::Tasks::Private::TaskEventBaseAllocator);
  if (this_00.Reference == (FTaskBase *)0x0) {
    this_00.Reference = (FTaskBase *)0x0;
  }
  else {
    UE::Tasks::Private::FTaskBase::FTaskBase(this_00.Reference,1,true);
    (this_00.Reference)->_padding_ = (longlong)&___7FTaskEventBase_Private_Tasks_UE__6B_;
    TaskTrace::Created((ulong64)(this_00.Reference)->TraceId,0xd8);
    if (((*(ulonglong *)&((this_00.Reference)->LowLevelTask).field_0x38 & 0x20) == 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsCompleted()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                            ,0x1dd,L"State: %d"), bVar18)) {
      pcVar17 = (code *)swi(3);
      (*pcVar17)();
      return;
    }
    (**(code **)(*(longlong *)&((this_00.Reference)->LowLevelTask).field_0x28 + 0x18))
              (&((this_00.Reference)->LowLevelTask).field_0x28,&(this_00.Reference)->LowLevelTask);
    *(FTaskBase **)&(this_00.Reference)->LowLevelTask = this_00.Reference;
    *(undefined ***)&((this_00.Reference)->LowLevelTask).field_0x28 =
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(FTaskBase **)&((this_00.Reference)->LowLevelTask).field_0x8 = this_00.Reference;
    pFVar22 = LowLevelTasks::FTask::GetActiveTask();
    uVar23 = 0;
    if (pFVar22 != (FTask *)0x0) {
      uVar23 = *(undefined8 *)&pFVar22->field_0x30;
    }
    *(undefined8 *)&((this_00.Reference)->LowLevelTask).field_0x30 = uVar23;
    *(undefined8 *)&((this_00.Reference)->LowLevelTask).field_0x38 = 0xc80000543f088c00;
    (this_00.Reference)->ExtendedPriority = TaskEvent;
    UE::FInheritedContextBase::CaptureInheritedContext
              ((FInheritedContextBase *)&(this_00.Reference)->_padding_);
  }
  FVar35 = (FTaskEvent)0x0;
  pFVar24 = (this->Scene->CacheMeshDrawCommandsTask).Pimpl.Reference;
  local_188.Pimpl.Reference =
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)this_00.Reference;
  if (pFVar24 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::AddPrerequisites(this_00.Reference,pFVar24);
  }
  EVar9 = this->TaskConfig->TaskPriority;
  pFVar24 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&UE::Tasks::Private::SmallTaskAllocator);
  uVar43 = 0;
  if (pFVar24 == (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x100);
  }
  else {
    UE::Tasks::Private::FTaskBase::FTaskBase(pFVar24,2,true);
    pFVar24->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTaskBase<`FVisibilityViewPacket::BeginInitVisibility'::`2'::<lambda_1>,void,void>
          ::_vftable_;
    UE::Tasks::Private::FTaskBase::Init
              (pFVar24,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp(3784)"
               ,EVar9,None,None);
    pFVar24[1]._padding_ = (longlong)this;
    pFVar24->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTask<`FVisibilityViewPacket::BeginInitVisibility'::`2'::<lambda_1>_>::_vftable_
    ;
    UE::Tasks::Private::FTaskBase::TryLaunch(pFVar24,0x100);
    UE::Tasks::Private::FTaskBase::AddPrerequisites(this_00.Reference,pFVar24);
    LOCK();
    paVar2 = &pFVar24->RefCount;
    aVar6 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar6 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar24->_padding_)(pFVar24,1);
    }
  }
  pFVar10 = this->View;
  pTVar44 = &pFVar10->PrimitiveVisibilityMap;
  iVar21 = (this->Scene->Primitives).ArrayNum;
  (pFVar10->PrimitiveVisibilityMap).NumBits = iVar21;
  uVar42 = iVar21 + 0x1f;
  uVar41 = uVar42 >> 5;
  if (uVar42 >> 5 != 0) {
    if ((pFVar10->PrimitiveVisibilityMap).MaxBits + 0x1fU >> 5 < uVar41) {
      TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
      ForElementType<unsigned_int>::ResizeAllocation(&pTVar44->AllocatorInstance,0,uVar41,4);
      (pFVar10->PrimitiveVisibilityMap).MaxBits = uVar41 << 5;
    }
    pTVar46 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
               *)(pFVar10->PrimitiveVisibilityMap).AllocatorInstance.SecondaryData.Data;
    pTVar36 = pTVar44;
    if (pTVar46 !=
        (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)0x0) {
      pTVar36 = pTVar46;
    }
    if (uVar41 < 9) {
      uVar37 = (ulonglong)uVar41;
      FVar47 = FVar35;
      if ((bool)local_res8 == false) {
        FVar47 = (FTaskEvent)&DAT_ffffffff;
      }
      for (; uVar37 != 0; uVar37 = uVar37 - 1) {
        *(int *)(pTVar36->AllocatorInstance).InlineData = FVar47._0_4_;
        pTVar36 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                   *)((pTVar36->AllocatorInstance).InlineData + 4);
      }
    }
    else {
      FVar47 = FVar35;
      if ((bool)local_res8 == false) {
        FVar47 = (FTaskEvent)0xff;
      }
      memset(pTVar36,FVar47._0_4_,(ulonglong)uVar41 << 2);
    }
    TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
    ::ClearPartialSlackBits(pTVar44);
  }
  pFVar10 = this->View;
  pTVar44 = &pFVar10->PrimitiveRayTracingVisibilityMap;
  iVar21 = (this->Scene->Primitives).ArrayNum;
  (pFVar10->PrimitiveRayTracingVisibilityMap).NumBits = iVar21;
  uVar42 = iVar21 + 0x1f;
  uVar41 = uVar42 >> 5;
  if (uVar42 >> 5 != 0) {
    if ((pFVar10->PrimitiveRayTracingVisibilityMap).MaxBits + 0x1fU >> 5 < uVar41) {
      TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
      ForElementType<unsigned_int>::ResizeAllocation(&pTVar44->AllocatorInstance,0,uVar41,4);
      (pFVar10->PrimitiveRayTracingVisibilityMap).MaxBits = uVar41 << 5;
    }
    pTVar46 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
               *)(pFVar10->PrimitiveRayTracingVisibilityMap).AllocatorInstance.SecondaryData.Data;
    pTVar36 = pTVar44;
    if (pTVar46 !=
        (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)0x0) {
      pTVar36 = pTVar46;
    }
    memset(pTVar36,0,(ulonglong)uVar41 << 2);
    TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
    ::ClearPartialSlackBits(pTVar44);
  }
  pFVar10 = this->View;
  pTVar44 = &pFVar10->PrimitiveDefinitelyUnoccludedMap;
  iVar21 = (this->Scene->Primitives).ArrayNum;
  if ((GOcclusionCullEnabled == false) || (FVar47 = FVar35, *(int *)(pFVar10->_padding_ + 0x5c) < 0)
     ) {
    FVar47 = (FTaskEvent)&DAT_00000001;
  }
  (pFVar10->PrimitiveDefinitelyUnoccludedMap).NumBits = iVar21;
  uVar42 = iVar21 + 0x1f;
  uVar41 = uVar42 >> 5;
  if (uVar42 >> 5 != 0) {
    if ((pFVar10->PrimitiveDefinitelyUnoccludedMap).MaxBits + 0x1fU >> 5 < uVar41) {
      TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
      ForElementType<unsigned_int>::ResizeAllocation(&pTVar44->AllocatorInstance,0,uVar41,4);
      (pFVar10->PrimitiveDefinitelyUnoccludedMap).MaxBits = uVar41 << 5;
    }
    pTVar46 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
               *)(pFVar10->PrimitiveDefinitelyUnoccludedMap).AllocatorInstance.SecondaryData.Data;
    pTVar36 = pTVar44;
    if (pTVar46 !=
        (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)0x0) {
      pTVar36 = pTVar46;
    }
    if (uVar41 < 9) {
      for (uVar37 = (ulonglong)uVar41; uVar37 != 0; uVar37 = uVar37 - 1) {
        *(uint *)(pTVar36->AllocatorInstance).InlineData = -(uint)(FVar47._0_4_ != 0);
        pTVar36 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                   *)((pTVar36->AllocatorInstance).InlineData + 4);
      }
    }
    else {
      memset(pTVar36,-(uint)(FVar47._0_4_ != 0) & 0xff,(ulonglong)uVar41 << 2);
    }
    TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
    ::ClearPartialSlackBits(pTVar44);
  }
  pFVar10 = this->View;
  pTVar44 = &pFVar10->PotentiallyFadingPrimitiveMap;
  iVar21 = (this->Scene->Primitives).ArrayNum;
  (pFVar10->PotentiallyFadingPrimitiveMap).NumBits = iVar21;
  uVar42 = iVar21 + 0x1f;
  uVar41 = uVar42 >> 5;
  if (uVar42 >> 5 != 0) {
    if ((pFVar10->PotentiallyFadingPrimitiveMap).MaxBits + 0x1fU >> 5 < uVar41) {
      TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
      ForElementType<unsigned_int>::ResizeAllocation(&pTVar44->AllocatorInstance,0,uVar41,4);
      (pFVar10->PotentiallyFadingPrimitiveMap).MaxBits = uVar41 << 5;
    }
    pTVar46 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
               *)(pFVar10->PotentiallyFadingPrimitiveMap).AllocatorInstance.SecondaryData.Data;
    pTVar36 = pTVar44;
    if (pTVar46 !=
        (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)0x0) {
      pTVar36 = pTVar46;
    }
    memset(pTVar36,0,(ulonglong)uVar41 << 2);
    TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
    ::ClearPartialSlackBits(pTVar44);
  }
  pFVar10 = this->View;
  iVar21 = (this->Scene->Primitives).ArrayNum;
  iVar20 = UE::Core::Private::
           ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRHIUniformBuffer_*>_>
                     (8,8,iVar21,&(pFVar10->PrimitiveFadeUniformBuffers).AllocatorInstance,
                      &(pFVar10->PrimitiveFadeUniformBuffers).ArrayNum,
                      &(pFVar10->PrimitiveFadeUniformBuffers).ArrayMax);
  memset((pFVar10->PrimitiveFadeUniformBuffers).AllocatorInstance.Data + iVar20,0,
         (longlong)iVar21 << 3);
  pFVar10 = this->View;
  pTVar44 = &pFVar10->PrimitiveFadeUniformBufferMap;
  iVar21 = (this->Scene->Primitives).ArrayNum;
  (pFVar10->PrimitiveFadeUniformBufferMap).NumBits = iVar21;
  uVar42 = iVar21 + 0x1f;
  uVar41 = uVar42 >> 5;
  if (uVar42 >> 5 != 0) {
    if ((pFVar10->PrimitiveFadeUniformBufferMap).MaxBits + 0x1fU >> 5 < uVar41) {
      TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
      ForElementType<unsigned_int>::ResizeAllocation(&pTVar44->AllocatorInstance,0,uVar41,4);
      (pFVar10->PrimitiveFadeUniformBufferMap).MaxBits = uVar41 << 5;
    }
    pTVar46 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
               *)(pFVar10->PrimitiveFadeUniformBufferMap).AllocatorInstance.SecondaryData.Data;
    pTVar36 = pTVar44;
    if (pTVar46 !=
        (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)0x0) {
      pTVar36 = pTVar46;
    }
    memset(pTVar36,0,(ulonglong)uVar41 << 2);
    iVar21 = (pFVar10->PrimitiveFadeUniformBufferMap).NumBits;
    uVar41 = iVar21 >> 0x1f & 0x1f;
    uVar42 = iVar21 + uVar41;
    iVar21 = (uVar42 & 0x1f) - uVar41;
    if (iVar21 != 0) {
      pTVar46 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                 *)(pFVar10->PrimitiveFadeUniformBufferMap).AllocatorInstance.SecondaryData.Data;
      if (pTVar46 !=
          (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
           *)0x0) {
        pTVar44 = pTVar46;
      }
      puVar4 = (pTVar44->AllocatorInstance).InlineData + (longlong)((int)uVar42 >> 5) * 4;
      *(uint *)puVar4 = *(uint *)puVar4 & 0xffffffffU >> (0x20U - (char)iVar21 & 0x1f);
    }
  }
  pFVar10 = this->View;
  uVar42 = (this->Scene->Primitives).ArrayNum;
  if ((int)uVar42 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar42);
  }
  (pFVar10->PrimitiveViewRelevanceMap).ArrayNum = 0;
  if ((pFVar10->PrimitiveViewRelevanceMap).ArrayMax < (int)uVar42) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveViewRelevance>_>
              (0x10,8,uVar42,&(pFVar10->PrimitiveViewRelevanceMap).AllocatorInstance,0,
               &(pFVar10->PrimitiveViewRelevanceMap).ArrayMax);
  }
  pFVar10 = this->View;
  iVar21 = (this->Scene->Primitives).ArrayNum;
  iVar20 = UE::Core::Private::
           ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveViewRelevance>_>
                     (0x10,8,iVar21,&(pFVar10->PrimitiveViewRelevanceMap).AllocatorInstance,
                      &(pFVar10->PrimitiveViewRelevanceMap).ArrayNum,
                      &(pFVar10->PrimitiveViewRelevanceMap).ArrayMax);
  memset((pFVar10->PrimitiveViewRelevanceMap).AllocatorInstance.Data + iVar20,0,
         (longlong)iVar21 << 4);
  if ((this_00.Reference != (FTaskBase *)0x0) &&
     (((this_00.Reference)->Subsequents).bIsClosed == (atomic<bool>)0x0)) {
    LOCK();
    aVar5 = (this_00.Reference)->TaskTriggered;
    (this_00.Reference)->TaskTriggered = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar5 == (atomic<bool>)0x0) {
      LOCK();
      (this_00.Reference)->RefCount = (atomic<unsigned_int>)((int)(this_00.Reference)->RefCount + 1)
      ;
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch(this_00.Reference,0xd8);
    }
  }
  if (*(int *)((longlong)&this->View->_padding_ + 4) != -1) {
    pTVar25 = TOptional<TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>_>
              ::operator->((TOptional<TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>_>
                            *)&this->View->_padding_);
    if (*(int *)&(pTVar25->Elements).field_0x8 == *(int *)&(pTVar25->Elements).field_0x34) {
      uVar43 = 2;
    }
    this->View->bHasNoVisiblePrimitive = uVar43 >> 1;
  }
  pFVar11 = this->TaskData;
  pFVar10 = this->View;
  pFVar12 = this->Scene;
  aVar26 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
            )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x90,8);
  *(undefined8 *)((longlong)aVar26 + 8) = 0;
  *(undefined ***)aVar26 =
       &
       ___7__TObject_VFComputeAndMarkRelevance_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  aVar29 = (pFVar11->Allocator).Next;
  do {
    *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
      *)((longlong)aVar26 + 8) = aVar29;
    LOCK();
    aVar30 = (pFVar11->Allocator).Next;
    bVar18 = aVar29 == aVar30;
    if (bVar18) {
      (pFVar11->Allocator).Next = aVar26;
      aVar30 = aVar29;
    }
    UNLOCK();
    aVar29 = aVar30;
  } while (!bVar18);
  FComputeAndMarkRelevance::FComputeAndMarkRelevance
            ((FComputeAndMarkRelevance *)((longlong)aVar26 + 0x10),pFVar11,pFVar12,pFVar10,
             (uchar)this->ViewIndex,&local_188);
  pFVar13 = this->ViewState;
  (this->Relevance).Context = (FComputeAndMarkRelevance *)((longlong)aVar26 + 0x10);
  if (pFVar13 != (FSceneViewState *)0x0) {
    uVar43 = pFVar13->PrevFrameNumber;
    pTVar45 = &pFVar13->PrimitiveFadingStates;
    dVar8 = *(double *)(this->View->_padding_ + 0x88);
    TSet<TTuple<FPrimitiveComponentId,FPrimitiveFadingState>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FPrimitiveFadingState,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_98,
               (TSet<TTuple<FPrimitiveComponentId,FPrimitiveFadingState>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FPrimitiveFadingState,0>,FDefaultSetAllocator>
                *)pTVar45);
    local_130 = 0;
    stack0xfffffffffffffea8 = local_98._16_16_;
    local_168 = (longlong *)local_98._0_8_;
    auStack_160._0_8_ = local_98._8_8_;
    local_148 = local_78;
    pTStack_140 = pTStack_70;
    uVar37 = local_98._24_8_ >> 0x20;
    local_138 = (TSet<TTuple<FPrimitiveComponentId,FPrimitiveFadingState>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FPrimitiveFadingState,0>,FDefaultSetAllocator>
                 *)pTVar45;
    if (local_98._28_4_ < *(int *)(local_98._16_8_ + 0x18)) {
      do {
        lVar38 = (longlong)(int)uVar37 * 0x38;
        lVar14 = *local_168;
        if ((*(uint *)(lVar38 + 0x20 + lVar14) != uVar43) ||
           ((*(longlong *)(lVar38 + 0x18 + lVar14) != 0 &&
            (*(float *)(lVar38 + 0x24 + lVar14) <= (float)dVar8)))) {
          TSet<TTuple<FPrimitiveComponentId,FPrimitiveFadingState>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FPrimitiveFadingState,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_140,(int)uVar37);
          local_130 = CONCAT11(local_130._1_1_,1);
        }
        uStack_150 = uStack_150 & ~auStack_160._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_160);
        uVar37 = (ulonglong)uStack_14c;
      } while ((int)uStack_14c < *(int *)(auStack_160._8_8_ + 0x18));
      if (((char)local_130 != '\0') && (local_130._1_1_ != '\0')) {
        uVar43 = *(int *)&(local_138->Elements).field_0x8 -
                 *(int *)&(local_138->Elements).field_0x34;
        if (uVar43 < 4) {
          iVar21 = 1;
        }
        else {
          uVar37 = (ulonglong)((uVar43 >> 1) + 7) * 2 + 1;
          lVar14 = 0x3f;
          if (uVar37 != 0) {
            for (; uVar37 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          iVar21 = 1 << ((byte)lVar14 & 0x1f);
        }
        if (((0 < (int)uVar43) && (local_138->HashSize < iVar21)) || (iVar21 < local_138->HashSize))
        {
          local_138->HashSize = iVar21;
          TSet<TTuple<FPrimitiveComponentId,FPrimitiveFadingState>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FPrimitiveFadingState,0>,FDefaultSetAllocator>
          ::Rehash(local_138);
        }
      }
    }
  }
  if (((this->ViewState != (FSceneViewState *)0x0) && (this->ViewState->bIsFrozen != 0)) &&
     (local_res8 = '\0', 0 < (int)this->TaskConfig->NumTestedPrimitives)) {
    uVar43 = 1;
    local_1a8 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                 *)0x0;
    FVar47 = FVar35;
    do {
      pFVar12 = this->Scene;
      uVar41 = FVar47._0_4_;
      pFVar13 = this->ViewState;
      uVar42 = 0;
      if ((int)uVar41 < (pFVar12->PrimitiveComponentIds).ArrayNum) {
        uVar42 = ~uVar41 >> 0x1f;
      }
      if ((uVar42 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
      if (*(int *)&(pFVar13->FrozenPrimitives).Elements.field_0x8 !=
          *(int *)&(pFVar13->FrozenPrimitives).Elements.field_0x34) {
        uVar42 = *(uint *)((pFVar12->PrimitiveComponentIds).AllocatorInstance.Data +
                          (longlong)local_1a8);
        FVar15 = (pFVar13->FrozenPrimitives).Hash.SecondaryData;
        FVar39 = (ForElementType<FSetElementId>)&(pFVar13->FrozenPrimitives).Hash;
        if (FVar15 != (ForElementType<FSetElementId>)0x0) {
          FVar39 = FVar15;
        }
        iVar21 = *(int *)((longlong)FVar39 +
                         (ulonglong)((pFVar13->FrozenPrimitives).HashSize - 1U & uVar42) * 4);
        if (iVar21 != -1) {
          lVar14 = *(longlong *)&(pFVar13->FrozenPrimitives).Elements;
          do {
            if (*(uint *)(lVar14 + (longlong)iVar21 * 0xc) == uVar42) {
              pFVar10 = this->View;
              if ((((int)uVar41 < 0) || ((pFVar10->PrimitiveVisibilityMap).NumBits <= (int)uVar41))
                 && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Index>=0 && Index<NumBits",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                         ,0x5be,L""), bVar18)) {
                pcVar17 = (code *)swi(3);
                (*pcVar17)();
                return;
              }
              pTVar44 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                         *)(pFVar10->PrimitiveVisibilityMap).AllocatorInstance.SecondaryData.Data;
              pTVar46 = &pFVar10->PrimitiveVisibilityMap;
              if (pTVar44 !=
                  (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                   *)0x0) {
                pTVar46 = pTVar44;
              }
              uVar42 = uVar41;
              if ((int)uVar41 < 0) {
                uVar42 = uVar41 + 0x1f;
              }
              puVar4 = (pTVar46->AllocatorInstance).InlineData + (longlong)((int)uVar42 >> 5) * 4;
              *(uint *)puVar4 = *(uint *)puVar4 | uVar43;
              break;
            }
            iVar21 = *(int *)(lVar14 + 4 + (longlong)iVar21 * 0xc);
          } while (iVar21 != -1);
        }
      }
      local_1a8 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                   *)((longlong)local_1a8 + 4);
      FVar47._0_4_ = uVar41 + 1;
      FVar47._4_4_ = 0;
      uVar43 = uVar43 << 1 | (uint)((int)uVar43 < 0);
    } while ((int)FVar47._0_4_ < (int)this->TaskConfig->NumTestedPrimitives);
  }
  pFVar27 = GetCachedScalabilityCVars();
  fVar52 = pFVar27->FieldOfViewMaxAngleScale;
  fVar50 = fVar52 - pFVar27->FieldOfViewMinAngleScale;
  if (__real_322bcc77 < (float)((uint)fVar50 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar52 = pFVar27->FieldOfViewMinAngle;
    fVar7 = pFVar27->FieldOfViewMaxAngle;
    fVar51 = *(float *)((longlong)&this->View->_padding_ + 4);
    if (fVar7 <= fVar51) {
      fVar51 = fVar7;
    }
    if (fVar51 <= fVar52) {
      fVar51 = fVar52;
    }
    fVar52 = ((fVar51 - fVar52) / (fVar7 - fVar52)) * fVar50 + pFVar27->FieldOfViewMinAngleScale;
  }
  pFVar27 = GetCachedScalabilityCVars();
  local_1a0._8_8_ = (FTaskEvent)0x0;
  fVar52 = fVar52 * pFVar27->ViewDistanceScale;
  FVar47 = FVar35;
  if (local_res8 != '\0') {
    bVar18 = -1 < CpuChannel->Enabled;
    if (bVar18) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId3841,"HLODInit",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
                 ,0xf01);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3841);
    }
    pFVar12 = this->Scene;
    if (*(int *)&(pFVar12->SceneLODHierarchy).SceneNodes.field_0x8 -
        *(int *)&(pFVar12->SceneLODHierarchy).SceneNodes.field_0x34 < 1) {
      FLODSceneTree::ClearVisibilityState(&pFVar12->SceneLODHierarchy,this->View);
    }
    else {
      FLODSceneTree::UpdateVisibilityStates
                (&pFVar12->SceneLODHierarchy,this->View,&(this->Tasks).LightVisibility);
      FVar47 = (FTaskEvent)&this->ViewState->HLODVisibilityState;
      local_1a0._8_8_ = FVar47;
      if (this->ViewState == (FSceneViewState *)0x0) {
        FVar47 = FVar35;
        local_1a0._8_8_ = FVar35;
      }
    }
    if (bVar18) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  FVar34 = (this->Tasks).LightVisibility;
  if ((FVar34 != (FTaskEvent)0x0) && (*(char *)((longlong)FVar34 + 0xd0) == '\0')) {
    FVar34 = (this->Tasks).LightVisibility;
    LOCK();
    aVar5 = *(atomic<bool> *)((longlong)FVar34 + 0x45);
    *(atomic<bool> *)((longlong)FVar34 + 0x45) = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar5 == (atomic<bool>)0x0) {
      LOCK();
      *(atomic<unsigned_int> *)((longlong)FVar34 + 0x30) =
           (atomic<unsigned_int>)((int)*(atomic<unsigned_int> *)((longlong)FVar34 + 0x30) + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)FVar34,0xd8);
    }
  }
  local_res20.bShouldVisibilityCull = (bool)local_res8;
  pIVar16 = this->View->CustomVisibilityQuery;
  if (pIVar16 != (ICustomVisibilityQuery *)0x0) {
    cVar19 = (**(code **)((longlong)*pIVar16 + 0x20))();
    local_res20.bUseCustomCulling = true;
    local_res20.bUseSphereTestFirst = false;
    local_res20.bUseFastIntersect = false;
    if (cVar19 != '\0') goto LAB_14552a7de;
  }
  local_res20._0_2_ = local_res20._0_2_ & 0xff;
LAB_14552a7de:
  pFVar10 = this->View;
  local_res20.bUseSphereTestFirst = GFrustumCullUseSphereTestFirst;
  local_res20.bUseFastIntersect = false;
  plVar28 = (longlong *)pFVar10->_padding_;
  if (plVar28 == (longlong *)0x0) {
    plVar28 = &pFVar10->_padding_;
  }
  if (((int)plVar28[0x3e] != 8) ||
     (local_res20.bUseFastIntersect = true, GFrustumCullUseFastIntersect == false)) {
    local_res20._0_4_ = local_res20._0_4_ & 0xffffff;
  }
  local_1a0._0_8_ = (FTaskEvent)0x0;
  local_res20.bHasHiddenPrimitives =
       0 < (int)pFVar10->_padding_ - *(int *)((longlong)&pFVar10->_padding_ + 4);
  local_res20.bUseVisibilityOctree = GFrustumCullUseOctree;
  local_res20.bHasShowOnlyPrimitives = *(int *)((longlong)&pFVar10->_padding_ + 4) != -1;
  FRayTracingCullingParameters::Init(&pFVar10->RayTracingCullingParameters,pFVar10);
  FVar34 = (FTaskEvent)(this->Scene->CacheRayTracingPrimitivesTask).Pimpl.Reference;
  this_01 = FVar35;
  if (FVar34 != (FTaskEvent)0x0) {
    LOCK();
    *(atomic<unsigned_int> *)((longlong)FVar34 + 0x30) =
         (atomic<unsigned_int>)((int)*(atomic<unsigned_int> *)((longlong)FVar34 + 0x30) + 1);
    UNLOCK();
    this_01 = FVar34;
    local_1a0._0_8_ = FVar34;
  }
  local_1a8 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
               *)0x0;
  if ((local_res8 != '\0') && (local_res20.bUseVisibilityOctree != false)) {
    pFVar11 = this->TaskData;
    aVar26 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
              )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x30,8);
    *(undefined8 *)((longlong)aVar26 + 8) = 0;
    local_1a8 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                 *)((longlong)aVar26 + 0x10);
    *(undefined ***)aVar26 =
         &
         ___7__TObject_V__TBitArray_V__TSizedInlineAllocator__03_0CA_V__TLinearArrayAllocatorBase_UFSceneRenderingBlockAllocationTag___0A__________TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
    ;
    aVar29 = (pFVar11->Allocator).Next;
    do {
      *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
        *)((longlong)aVar26 + 8) = aVar29;
      pTVar1 = &pFVar11->Allocator;
      LOCK();
      aVar30 = pTVar1->Next;
      bVar18 = aVar29 == aVar30;
      if (bVar18) {
        pTVar1->Next = aVar26;
        aVar30 = aVar29;
      }
      UNLOCK();
      aVar29 = aVar30;
    } while (!bVar18);
    *(undefined8 *)((longlong)aVar26 + 0x20) = 0;
    *(undefined4 *)((longlong)aVar26 + 0x28) = 0;
    *(undefined4 *)((longlong)aVar26 + 0x2c) = 0x80;
    pFVar10 = this->View;
    pFVar31 = (FConvexVolume *)pFVar10->_padding_;
    if (pFVar31 == (FConvexVolume *)0x0) {
      pFVar31 = (FConvexVolume *)&pFVar10->_padding_;
    }
    CullOctree(this->Scene,pFVar10,&local_res20,local_1a8,pFVar31);
  }
  if ((local_res20.bUseCustomCulling == false) ||
     (cVar19 = (**(code **)((longlong)*this->View->CustomVisibilityQuery + 0x30))(), cVar19 != '\0')
     ) {
    EVar40 = Inline;
  }
  else {
    EVar40 = None;
  }
  pFVar33 = this->TaskConfig;
  if (pFVar33->Schedule == Parallel) {
    uVar43 = pFVar33->NumVisiblePrimitives;
    if ((uVar43 != 0) &&
       (dVar8 = *(double *)(this->View->_padding_ + 0x90), FVar34 = FVar35,
       (pFVar33->AlwaysVisible).NumTasks != 0)) {
      do {
        EVar9 = pFVar33->TaskPriority;
        uStack_178._0_1_ = local_res20.bShouldVisibilityCull;
        uStack_178._1_1_ = local_res20.bUseCustomCulling;
        uStack_178._2_1_ = local_res20.bUseSphereTestFirst;
        uStack_178._3_1_ = local_res20.bUseFastIntersect;
        bStack_174 = local_res20.bUseVisibilityOctree;
        bStack_173 = local_res20.bHasHiddenPrimitives;
        uStack_172 = local_res20.bHasShowOnlyPrimitives;
        local_180 = (FTaskEvent)this;
        local_170 = FVar34._0_4_;
        fStack_16c = (float)dVar8;
        FVar32 = (FTaskEvent)
                 TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                 ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                             *)&UE::Tasks::Private::SmallTaskAllocator);
        FVar47 = FVar35;
        if (FVar32 != (FTaskEvent)0x0) {
          UE::Tasks::Private::FTaskBase::FTaskBase((FTaskBase *)FVar32,2,true);
          *(undefined ***)FVar32 =
               &UE::Tasks::Private::
                TExecutableTaskBase<`FVisibilityViewPacket::BeginInitVisibility'::`38'::<lambda_2>,void,void>
                ::_vftable_;
          UE::Tasks::Private::FTaskBase::Init
                    ((FTaskBase *)FVar32,
                     L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp(3902)"
                     ,EVar9,None,None);
          ((FTaskBase *)((longlong)FVar32 + 0xd8))->_padding_ = (longlong)local_180;
          ((FTaskBase *)((longlong)FVar32 + 0xd8))->_padding_ =
               CONCAT17(uStack_171,CONCAT16(uStack_172,CONCAT24(_bStack_174,uStack_178)));
          ((FTaskBase *)((longlong)FVar32 + 0xd8))->_padding_ = CONCAT44(fStack_16c,local_170);
          *(undefined ***)FVar32 =
               &UE::Tasks::Private::
                TExecutableTask<`FVisibilityViewPacket::BeginInitVisibility'::`38'::<lambda_2>_>::
                _vftable_;
          FVar47 = FVar32;
        }
        if (this_01 != (FTaskEvent)0x0) {
          UE::Tasks::Private::FTaskBase::AddPrerequisites((FTaskBase *)FVar47,(FTaskBase *)this_01);
        }
        UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)FVar47,0x100);
        if (FVar47 != (FTaskEvent)0x0) {
          UE::Tasks::Private::FTaskBase::AddPrerequisites
                    ((FTaskBase *)(this->Tasks).AlwaysVisible,(FTaskBase *)FVar47);
          LOCK();
          paVar2 = (atomic<unsigned_int> *)((longlong)FVar47 + 0x30);
          aVar6 = *paVar2;
          *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
          UNLOCK();
          if (aVar6 == (atomic<unsigned_int>)0x1) {
            (*(code *)**(undefined8 **)FVar47)(FVar47,1);
          }
        }
        pFVar33 = this->TaskConfig;
        FVar34._0_4_ = FVar34._0_4_ + 1;
        FVar34._4_4_ = 0;
      } while (FVar34._0_4_ < (pFVar33->AlwaysVisible).NumTasks);
    }
    LOCK();
    paVar3 = &(this->OcclusionCull).CommandPipe.NumCommands;
    *paVar3 = (atomic<int>)((int)*paVar3 + (pFVar33->FrustumCull).NumTasks);
    UNLOCK();
    pFVar33 = this->TaskConfig;
    FVar32 = FVar35;
    if ((pFVar33->FrustumCull).NumTasks != 0) {
      do {
        EVar9 = pFVar33->TaskPriority;
        pFVar48 = &this->Tasks;
        if (uVar43 == 0) {
          pFVar48 = (FTasks *)local_1a0;
        }
        uStack_108._0_1_ = local_res20.bShouldVisibilityCull;
        uStack_108._1_1_ = local_res20.bUseCustomCulling;
        uStack_108._2_1_ = local_res20.bUseSphereTestFirst;
        uStack_108._3_1_ = local_res20.bUseFastIntersect;
        bStack_104 = local_res20.bUseVisibilityOctree;
        bStack_103 = local_res20.bHasHiddenPrimitives;
        uStack_102 = local_res20.bHasShowOnlyPrimitives;
        FStack_f8 = (FTaskEvent)local_1a0._8_8_;
        local_f0 = local_1a8;
        local_110 = this;
        local_100 = fVar52;
        iStack_e8 = FVar32._0_4_;
        FVar34 = (FTaskEvent)FMemory::Malloc(0x140,0x40);
        FVar47 = FVar35;
        if (FVar34 != (FTaskEvent)0x0) {
          UE::Tasks::Private::FTaskBase::FTaskBase((FTaskBase *)FVar34,2,true);
          *(undefined ***)FVar34 =
               &UE::Tasks::Private::
                TExecutableTaskBase<`FVisibilityViewPacket::BeginInitVisibility'::`41'::<lambda_3>,void,void>
                ::_vftable_;
          UE::Tasks::Private::FTaskBase::Init
                    ((FTaskBase *)FVar34,
                     L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp(3925)"
                     ,EVar9,EVar40 ^ Inline,None);
          ((FTaskBase *)((longlong)FVar34 + 0xd8))->_padding_ = (longlong)local_110;
          ((FTaskBase *)((longlong)FVar34 + 0xd8))->_padding_ =
               CONCAT17(uStack_101,CONCAT16(uStack_102,CONCAT24(_bStack_104,uStack_108)));
          ((FTaskBase *)((longlong)FVar34 + 0xd8))->_padding_ = CONCAT44(uStack_fc,local_100);
          ((FTaskBase *)((longlong)FVar34 + 0xd8))->_padding_ = (longlong)FStack_f8;
          ((FTaskBase *)((longlong)FVar34 + 0xd8))->_padding_ = (longlong)local_f0;
          ((FTaskBase *)((longlong)FVar34 + 0xd8))->_padding_ = CONCAT44(uStack_e4,iStack_e8);
          *(undefined ***)FVar34 =
               &UE::Tasks::Private::
                TExecutableTask<`FVisibilityViewPacket::BeginInitVisibility'::`41'::<lambda_3>_>::
                _vftable_;
          FVar47 = FVar34;
        }
        if (pFVar48->AlwaysVisible != (FTaskEvent)0x0) {
          UE::Tasks::Private::FTaskBase::AddPrerequisites
                    ((FTaskBase *)FVar47,(FTaskBase *)pFVar48->AlwaysVisible);
        }
        UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)FVar47,0x140);
        if (FVar47 != (FTaskEvent)0x0) {
          UE::Tasks::Private::FTaskBase::AddPrerequisites
                    ((FTaskBase *)(this->Tasks).FrustumCull,(FTaskBase *)FVar47);
          LOCK();
          paVar2 = (atomic<unsigned_int> *)((longlong)FVar47 + 0x30);
          aVar6 = *paVar2;
          *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
          UNLOCK();
          if (aVar6 == (atomic<unsigned_int>)0x1) {
            (*(code *)**(undefined8 **)FVar47)(FVar47,1);
          }
        }
        pFVar33 = this->TaskConfig;
        FVar32._0_4_ = FVar32._0_4_ + 1;
        FVar32._4_4_ = 0;
        this_01 = (FTaskEvent)local_1a0._0_8_;
      } while (FVar32._0_4_ < (pFVar33->FrustumCull).NumTasks);
    }
    TCommandPipe<FPrimitiveRange>::ReleaseNumCommands(&(this->OcclusionCull).CommandPipe,1);
  }
  else {
    bVar18 = FApp::ShouldUseThreadingForPerformance();
    if ((bVar18) && (EVar40 != None)) {
      bVar18 = false;
    }
    else {
      bVar18 = true;
    }
    if (this_01 != (FTaskEvent)0x0) {
      UE::Tasks::Private::FTaskBase::Wait((FTaskBase *)this_01);
    }
    local_120._0_1_ = local_res20.bShouldVisibilityCull;
    local_120._1_1_ = local_res20.bUseCustomCulling;
    local_120._2_1_ = local_res20.bUseSphereTestFirst;
    local_120._3_1_ = local_res20.bUseFastIntersect;
    local_11c = local_res20.bUseVisibilityOctree;
    bStack_11b = local_res20.bHasHiddenPrimitives;
    local_11a = local_res20.bHasShowOnlyPrimitives;
    local_b0 = &local_128;
    local_b8 = UE::Core::Private::Function::
               TFunctionRefCaller<`FVisibilityViewPacket::BeginInitVisibility'::__l43::<lambda_4>,void,int>
               ::Call;
    local_118 = (float)*(double *)(this->View->_padding_ + 0x90);
    local_128 = this;
    ParallelFor((this->TaskConfig->AlwaysVisible).NumTasks,
                (TFunctionRef<void___cdecl(int)> *)&local_b8,bVar18,false);
    local_d8._0_1_ = local_res20.bShouldVisibilityCull;
    local_d8._1_1_ = local_res20.bUseCustomCulling;
    local_d8._2_1_ = local_res20.bUseSphereTestFirst;
    local_d8._3_1_ = local_res20.bUseFastIntersect;
    local_d4 = local_res20.bUseVisibilityOctree;
    bStack_d3 = local_res20.bHasHiddenPrimitives;
    local_d2 = local_res20.bHasShowOnlyPrimitives;
    local_a0 = &local_e0;
    local_a8 = UE::Core::Private::Function::
               TFunctionRefCaller<`FVisibilityViewPacket::BeginInitVisibility'::__l43::<lambda_5>,void,int>
               ::Call;
    local_e0 = this;
    local_d0 = fVar52;
    local_c8 = FVar47;
    local_c0 = local_1a8;
    ParallelFor((this->TaskConfig->FrustumCull).NumTasks,
                (TFunctionRef<void___cdecl(int)> *)&local_a8,bVar18,false);
  }
  FVar35 = (this->Tasks).AlwaysVisible;
  if ((FVar35 != (FTaskEvent)0x0) && (*(char *)((longlong)FVar35 + 0xd0) == '\0')) {
    FVar35 = (this->Tasks).AlwaysVisible;
    LOCK();
    aVar5 = *(atomic<bool> *)((longlong)FVar35 + 0x45);
    *(atomic<bool> *)((longlong)FVar35 + 0x45) = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar5 == (atomic<bool>)0x0) {
      LOCK();
      *(atomic<unsigned_int> *)((longlong)FVar35 + 0x30) =
           (atomic<unsigned_int>)((int)*(atomic<unsigned_int> *)((longlong)FVar35 + 0x30) + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)FVar35,0xd8);
    }
  }
  FVar35 = (this->Tasks).FrustumCull;
  if ((FVar35 != (FTaskEvent)0x0) && (*(char *)((longlong)FVar35 + 0xd0) == '\0')) {
    FVar35 = (this->Tasks).FrustumCull;
    LOCK();
    aVar5 = *(atomic<bool> *)((longlong)FVar35 + 0x45);
    *(atomic<bool> *)((longlong)FVar35 + 0x45) = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar5 == (atomic<bool>)0x0) {
      LOCK();
      *(atomic<unsigned_int> *)((longlong)FVar35 + 0x30) =
           (atomic<unsigned_int>)((int)*(atomic<unsigned_int> *)((longlong)FVar35 + 0x30) + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)FVar35,0xd8);
    }
  }
  if (this_01 != (FTaskEvent)0x0) {
    LOCK();
    paVar2 = (atomic<unsigned_int> *)((longlong)this_01 + 0x30);
    aVar6 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar6 == (atomic<unsigned_int>)0x1) {
      (*(code *)**(undefined8 **)this_01)(this_01,1);
    }
  }
  if (local_188.Pimpl.Reference != (FTaskBase *)0x0) {
    LOCK();
    paVar2 = (atomic<unsigned_int> *)((longlong)local_188.Pimpl.Reference + 0x30);
    aVar6 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar6 == (atomic<unsigned_int>)0x1) {
      (*(code *)**(undefined8 **)local_188.Pimpl.Reference)(local_188.Pimpl.Reference,1);
    }
  }
  if (bVar49) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

