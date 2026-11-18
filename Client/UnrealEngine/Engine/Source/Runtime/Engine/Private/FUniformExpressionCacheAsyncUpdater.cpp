// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// operator() @ 147f6acf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FUniformExpressionCacheAsyncUpdater::Update'::__l2::<lambda_1>::operator()(void *this)

{
  int *piVar1;
  ERHIPipeline EVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  FRHIUniformBufferLayout *pFVar6;
  FUniformExpressionSet *this_00;
  FRHICommandListBase *this_01;
  undefined8 uVar7;
  code *pcVar8;
  bool bVar9;
  uint *puVar10;
  FTlsAutoCleanup *pFVar11;
  ulonglong uVar12;
  uchar *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  bool bVar16;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FMemMark local_100;
  FRHICommandListScopedFence local_d8;
  undefined8 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  code *local_a8;
  undefined1 *local_a0;
  IAllocatedVirtualTexture **local_98;
  int iStack_90;
  undefined4 uStack_8c;
  FTaskTagScope local_88;
  FMaterialRenderContext local_78;
  TArrayView<IAllocatedVirtualTexture_*_const,int> local_58;
  
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:___cdecl_`public:_void___cdecl_FUniformExpressionCacheAsyncUpdater::Update(FRHICommandListBase&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId133,"FUniformExpressionCacheAsyncUpdater::Update",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialRenderProxy.cpp"
               ,0x85);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:___cdecl_`public:_void___cdecl_FUniformExpressionCacheAsyncUpdater::Update(FRHICommandListBase&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId133);
  }
  FTaskTagScope::FTaskTagScope(&local_88,EParallelRenderingThread);
  local_d8.RHICmdList = *(FRHICommandListBase **)((longlong)this + 0x10);
  local_d8.Previous = ((local_d8.RHICmdList)->PersistentState).CurrentFenceScope;
  local_d8.bFenceRequested = false;
  ((local_d8.RHICmdList)->PersistentState).CurrentFenceScope = &local_d8;
  puVar10 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_b0 = local_res18;
  local_b8 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar11 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_b8,puVar10);
  local_100.Mem = (FMemStackBase *)(pFVar11 + 2);
  local_100.Top = (local_100.Mem)->Top;
  local_100.SavedChunk = *(FTaggedMemory **)(pFVar11 + 4);
  local_100.bPopped = false;
  local_100.NextTopmostMark = *(FMemMark **)(pFVar11 + 5);
  pFVar11[5] = (FTlsAutoCleanup)&local_100;
  *(int *)(pFVar11 + 6) = *(int *)(pFVar11 + 6) + 1;
  uVar3 = *(uint *)((longlong)this + 8);
  uVar12 = (ulonglong)(int)uVar3;
  puVar15 = *(undefined8 **)this;
  puVar14 = puVar15 + uVar12 * 8;
  while( true ) {
    if (*(int *)((longlong)this + 8) != (int)uVar12) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FUniformExpressionCacheAsyncUpdater::FItem_const_,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res10);
    }
    if (puVar15 == puVar14) {
      if (local_100.bPopped == false) {
        if (((local_100.Mem)->TopMark != &local_100) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Mem.TopMark == this",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                               ,0x215,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_100.bPopped = true;
        (local_100.Mem)->NumMarks = (local_100.Mem)->NumMarks + -1;
        if (local_100.SavedChunk != (local_100.Mem)->TopChunk) {
          FMemStackBase::FreeChunks(local_100.Mem,local_100.SavedChunk);
        }
        (local_100.Mem)->Top = local_100.Top;
        (local_100.Mem)->TopMark = local_100.NextTopmostMark;
        local_100.Top = (uchar *)0x0;
      }
      if (local_d8.bFenceRequested != false) {
        ((local_d8.RHICmdList)->PersistentState).CurrentFenceScope =
             (FRHICommandListScopedFence *)0x0;
        FRHICommandListBase::RHIThreadFence(local_d8.RHICmdList,SUB81(&local_c0,0));
        if (local_c0 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(local_c0 + 6);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar4 == 1) && (local_c0 != (undefined8 *)0x0)) {
            (**(code **)*local_c0)(local_c0,1);
          }
        }
      }
      ((local_d8.RHICmdList)->PersistentState).CurrentFenceScope = local_d8.Previous;
      FRHICommandListBase::FinishRecording(*(FRHICommandListBase **)((longlong)this + 0x10));
      FTaskTagScope::~FTaskTagScope(&local_88);
      if (bVar16) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    puVar10 = TThreadSingleton<FMemStack>::GetTlsSlot();
    local_a0 = local_res20;
    local_a8 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar11 = FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_a8,puVar10);
    puVar13 = FMemStackBase::Alloc
                        ((FMemStackBase *)(pFVar11 + 2),(ulonglong)*(uint *)(puVar15[4] + 0x8c),0x10
                        );
    local_78.MaterialRenderProxy = (FMaterialRenderProxy *)puVar15[5];
    pFVar6 = (FRHIUniformBufferLayout *)puVar15[4];
    iVar4 = *(int *)(puVar15 + 2);
    this_00 = (FUniformExpressionSet *)puVar15[3];
    local_78.Material = (FMaterial *)puVar15[6];
    local_78.bShowSelection = *(bool *)(puVar15 + 7);
    uVar5 = pFVar6->ConstantBufferSize;
    local_98 = (IAllocatedVirtualTexture **)puVar15[1];
    if ((iVar4 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_58._12_4_ = uStack_8c;
    local_58.ArrayNum = iVar4;
    local_58.DataPtr = local_98;
    iStack_90 = iVar4;
    FUniformExpressionSet::FillUniformBuffer(this_00,&local_78,&local_58,pFVar6,puVar13,uVar5);
    this_01 = *(FRHICommandListBase **)((longlong)this + 0x10);
    uVar7 = *puVar15;
    EVar2 = this_01->ActivePipelines;
    if (((EVar2 != None) && ((EVar2 & EVar2 - Graphics) != None)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x2a5,L""), bVar9)) break;
    if (this_01->ActivePipelines == None) {
      FRHICommandListBase::SwitchPipeline(this_01,Graphics);
      (**(code **)(GDynamicRHI->_padding_ + 0x130))(GDynamicRHI,this_01,uVar7,puVar13);
      FRHICommandListBase::SwitchPipeline(this_01,None);
      uVar12 = (ulonglong)uVar3;
      puVar15 = puVar15 + 8;
    }
    else {
      (**(code **)(GDynamicRHI->_padding_ + 0x130))(GDynamicRHI,this_01,uVar7,puVar13);
      uVar12 = (ulonglong)uVar3;
      puVar15 = puVar15 + 8;
    }
  }
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

// Update @ 147f8ccd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FUniformExpressionCacheAsyncUpdater::Update
          (FUniformExpressionCacheAsyncUpdater *this,FRHICommandListBase *param_1)

{
  int *piVar1;
  atomic<unsigned_int> *paVar2;
  int iVar3;
  atomic<unsigned_int> aVar4;
  longlong lVar5;
  code *pcVar6;
  FTaskHandle FVar7;
  FTaskHandle FVar8;
  ForElementType<FUniformExpressionCacheAsyncUpdater::FItem> FVar9;
  bool bVar10;
  FLowLevelMemTracker *this_00;
  FPageAllocator *this_01;
  bool *pbVar11;
  FTaskHandle local_res8;
  <lambda_1> local_28;
  
  if ((param_1->PersistentState).bImmediate != '\0') {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("!RHICmdList.IsImmediate()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialRenderProxy.cpp"
                        ,0x79,L"");
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  local_28.Items.ArrayNum = (this->Items).ArrayNum;
  if (local_28.Items.ArrayNum == 0) {
    FRHICommandListBase::FinishRecording(param_1);
    return;
  }
  local_28.Items.AllocatorInstance.Data = (this->Items).AllocatorInstance.Data;
  (this->Items).AllocatorInstance.Data = (FItem *)0x0;
  local_28.Items.ArrayMax = (this->Items).ArrayMax;
  (this->Items).ArrayNum = 0;
  (this->Items).ArrayMax = 0;
  local_res8.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(FTaskBase *)0x0;
  local_28.RHICmdList = param_1;
  UE::Tasks::Private::FTaskHandle::
  Launch<_FUniformExpressionCacheAsyncUpdater::Update_::__l2::<lambda_1>,UE::Tasks::Private::FTaskHandle_const_&>
            (&local_res8,
             L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialRenderProxy.cpp(130)"
             ,&local_28,&GUniformExpressionCacheAsyncUpdateTask.Task,Default,None,None);
  FVar9.Data = local_28.Items.AllocatorInstance.Data;
  FVar8.Pimpl.Reference = local_res8.Pimpl.Reference;
  local_res8.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(FTaskBase *)0x0;
  DestructItems<FUniformExpressionCacheAsyncUpdater::FItem,int>
            (local_28.Items.AllocatorInstance.Data,local_28.Items.ArrayNum);
  if (FVar9.Data != (FItem *)0x0) {
    pbVar11 = &FVar9.Data[-1].bShowSelection;
    MemoryTrace_Free((ulong64)pbVar11,0,0);
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pbVar11,FMalloc,true);
    }
    pbVar11 = pbVar11 + -(ulonglong)*(uint *)pbVar11;
    LOCK();
    iVar3 = *(int *)pbVar11;
    *(int *)pbVar11 = *(int *)pbVar11 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      lVar5 = *(longlong *)(pbVar11 + 0x40);
      MemoryTrace_UnmarkAllocAsHeap((ulong64)pbVar11,0,0);
      if (lVar5 - (longlong)pbVar11 == 0x10000) {
        this_01 = FPageAllocator::Get();
        FPageAllocator::Free(this_01,pbVar11);
      }
      else {
        (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pbVar11);
      }
    }
  }
  if (((GUniformExpressionCacheAsyncUpdateTask.ReferenceCount < 1) ||
      (GUniformExpressionCacheAsyncUpdates < 1)) || (GRHICommandList.bLatchedBypass != false)) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsEnabled()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialRenderProxy.cpp"
                        ,0x47,L"");
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  FVar7.Pimpl.Reference = GUniformExpressionCacheAsyncUpdateTask.Task.Pimpl.Reference;
  if (GUniformExpressionCacheAsyncUpdateTask.Task.Pimpl.Reference != FVar8.Pimpl.Reference) {
    GUniformExpressionCacheAsyncUpdateTask.Task.Pimpl.Reference =
         (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
         (TRefCountPtr<UE::Tasks::Private::FTaskBase>)FVar8;
    if (FVar8.Pimpl.Reference != (FTaskBase *)0x0) {
      LOCK();
      *(atomic<unsigned_int> *)((longlong)FVar8.Pimpl.Reference + 0x30) =
           (atomic<unsigned_int>)
           ((int)*(atomic<unsigned_int> *)((longlong)FVar8.Pimpl.Reference + 0x30) + 1);
      UNLOCK();
    }
    if (FVar7.Pimpl.Reference != (FTaskBase *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)FVar7.Pimpl.Reference + 0x30);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (*(code *)**(undefined8 **)FVar7.Pimpl.Reference)(FVar7.Pimpl.Reference,1);
      }
    }
  }
  if (FVar8.Pimpl.Reference != (FTaskBase *)0x0) {
    LOCK();
    paVar2 = (atomic<unsigned_int> *)((longlong)FVar8.Pimpl.Reference + 0x30);
    aVar4 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<unsigned_int>)0x1) {
      (*(code *)**(undefined8 **)FVar8.Pimpl.Reference)(FVar8.Pimpl.Reference,1);
    }
  }
  return;
}

