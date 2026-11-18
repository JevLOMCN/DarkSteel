// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 28

// Call @ 1459b4190

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(float,unsigned_int),void,float,unsigned_int>::Call
          (void *param_1,float *param_2,uint *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001459b419e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(*param_2,*param_3);
  return;
}

// Call @ 1459b41b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHIBuffer> __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`CreateBufferInitializerForWriting'::__l2::<lambda_1>,TRefCountPtr<FRHIBuffer>,FRHICommandListBase_&>
::Call(void *param_1,FRHICommandListBase *param_2)

{
  `CreateBufferInitializerForWriting'::__l2::<lambda_1>::operator()(param_2,param_1);
  return (TRefCountPtr<FRHIBuffer>)param_1;
}

// Call @ 1459b41e0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FTlsAutoCleanup * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FD3D12Adapter::GetTransientUniformBufferAllocator'::__l2::<lambda_1>,FTlsAutoCleanup_*>
::Call(void *param_1)

{
  FTlsAutoCleanup FVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  DWORD DVar5;
  int iVar6;
  FTlsAutoCleanup *pFVar7;
  LPCRITICAL_SECTION lpCriticalSection;
  ForAnyElementType *pFVar8;
  FTlsAutoCleanup *apFStack_18 [2];
  
  apFStack_18[0] = ::operator_new(0xa8);
  if (apFStack_18[0] == (FTlsAutoCleanup *)0x0) {
    apFStack_18[0] = (FTlsAutoCleanup *)0x0;
  }
  else {
    FVar1 = *(FTlsAutoCleanup *)param_1;
    FD3D12FastConstantAllocator::FD3D12FastConstantAllocator
              ((FD3D12FastConstantAllocator *)(apFStack_18[0] + 2),
               *(FD3D12Device **)((longlong)FVar1 + 0x800),
               (FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1));
    *apFStack_18[0] =
         (FTlsAutoCleanup)&___7__TThreadSingleton_VFTransientUniformBufferAllocator____6B_;
    DVar5 = GetCurrentThreadId();
    *(DWORD *)(apFStack_18[0] + 1) = DVar5;
    *apFStack_18[0] = (FTlsAutoCleanup)&FTransientUniformBufferAllocator::_vftable_;
    apFStack_18[0][0x14] = FVar1;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(*(longlong *)param_1 + 2000);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(lpCriticalSection);
    lVar2 = *(longlong *)param_1;
    pFVar8 = (ForAnyElementType *)(lVar2 + 0x7c0);
    if ((pFVar8->Data <= (FScriptContainerElement *)apFStack_18) &&
       ((FScriptContainerElement *)apFStack_18 <
        pFVar8->Data + (longlong)*(int *)(lVar2 + 0x7cc) * 8)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FTlsAutoCleanup *)(*pcVar3)();
        return pFVar7;
      }
    }
    iVar6 = *(int *)(lVar2 + 0x7c8);
    if (iVar6 == *(int *)(lVar2 + 0x7cc)) {
      iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar8,(int *)(lVar2 + 0x7cc));
      *(int *)(lVar2 + 0x7c8) = iVar6 + 1;
    }
    else {
      *(int *)(lVar2 + 0x7c8) = iVar6 + 1;
    }
    *(FTlsAutoCleanup **)(pFVar8->Data + (longlong)iVar6 * 8) = apFStack_18[0];
    LeaveCriticalSection(lpCriticalSection);
    return apFStack_18[0];
  }
                    /* WARNING: Subroutine does not return */
  ReportNotNullPtr();
}

// Call @ 1459b41f0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FD3D12CommandContext::RHIEndRenderPass'::__l2::<lambda_1>,void,UE::RHICore::FResolveTextureInfo>
::Call(void *param_1,FResolveTextureInfo *param_2)

{
  FResolveTextureInfo local_38;
  
  local_38.SourceTexture = param_2->SourceTexture;
  local_38.DestTexture = param_2->DestTexture;
  local_38.MipLevel = param_2->MipLevel;
  local_38._17_3_ = *(undefined3 *)&param_2->field_0x11;
  local_38.ArraySlice = param_2->ArraySlice;
  local_38.ResolveRect.X1 = (param_2->ResolveRect).X1;
  local_38.ResolveRect.Y1 = (param_2->ResolveRect).Y1;
  local_38.ResolveRect.X2 = (param_2->ResolveRect).X2;
  local_38.ResolveRect.Y2 = (param_2->ResolveRect).Y2;
  FD3D12CommandContext::ResolveTexture(*(FD3D12CommandContext **)param_1,&local_38);
  return;
}

// Call @ 1459b4230

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHIBuffer> __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::RHICore::FDefaultBufferInitializer::FDefaultBufferInitializer'::__l1::<lambda_28_>,TRefCountPtr<FRHIBuffer>,FRHICommandListBase_&>
::Call(void *param_1,FRHICommandListBase *param_2)

{
  *(uchar **)param_1 = (param_2->MemManager).Top;
  (param_2->MemManager).Top = (uchar *)0x0;
  return (TRefCountPtr<FRHIBuffer>)param_1;
}

// Call @ 145a05760

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FD3D12PipelineStateCacheBase::CreateAndAddToLowLevelCache'::__l2::<lambda_1>,void,FD3D12PipelineState_*,FD3D12ComputePipelineStateDesc_const_&>
::Call(void *param_1,FD3D12PipelineState **param_2,FD3D12ComputePipelineStateDesc *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000145a05769. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)param_1)(*(undefined8 **)param_1,*param_2);
  return;
}

// Call @ 145a05780

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FD3D12PipelineStateCacheBase::CreateAndAddToLowLevelCache'::__l2::<lambda_1>,void,FD3D12PipelineState_*_*,FD3D12LowLevelGraphicsPipelineStateDesc_const_&>
::Call(void *param_1,FD3D12PipelineState ***param_2,FD3D12LowLevelGraphicsPipelineStateDesc *param_3
      )

{
                    /* WARNING: Could not recover jumptable at 0x000145a0578c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)param_1 + 8))(*(longlong **)param_1,**param_2);
  return;
}

// Call @ 145a057a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::RHICore::Nvidia::Aftermath::D3D12::CreateShaderAssociations'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::RHICore::Nvidia::Aftermath::D3D12::CreateShaderAssociations'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 145a057b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FD3D12ExplicitDescriptorHeapCache::DeferredReleaseHeap'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  FD3D12ExplicitDescriptorHeapCache::ReleaseHeap
            (*(FD3D12ExplicitDescriptorHeapCache **)param_1,(FEntry *)((longlong)param_1 + 8));
  return;
}

// Call @ 145a057d0

uint __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::RHICore::Nvidia::Aftermath::D3D12::InitializeDevice'::__l2::<lambda_1>,unsigned_int,unsigned_int>
::Call(void *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = GFSDK_Aftermath_DX12_Initialize(0x217,*param_2,**(undefined8 **)param_1);
  return uVar1;
}

// Call @ 145a542f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHITexture> __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`CreateTextureInitializerForWriting'::__l2::<lambda_1>,TRefCountPtr<FRHITexture>,FRHICommandListBase_&>
::Call(void *param_1,FRHICommandListBase *param_2)

{
  `CreateTextureInitializerForWriting'::__l2::<lambda_1>::operator()(param_2,param_1);
  return (TRefCountPtr<FRHITexture>)param_1;
}

// Call @ 145a54320

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FD3D12DynamicRHI::EnqueueEndOfPipeTask'::__l2::<lambda_1>,void,FD3D12Queue_&>::
Call(void *param_1,FD3D12Queue *param_2)

{
  ED3D12QueueType EVar1;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar2;
  undefined8 *puVar3;
  ForAnyElementType *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FD3D12Payload *pFVar8;
  undefined8 uVar9;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar10;
  longlong *plVar11;
  int *piVar12;
  undefined8 *puStackX_8;
  FD3D12Payload *pFStack_28;
  longlong lStack_20;
  
  pFVar8 = ::operator_new(0x360);
  pFStack_28 = (FD3D12Payload *)0x0;
  if (pFVar8 != (FD3D12Payload *)0x0) {
    pFStack_28 = FD3D12Payload::FD3D12Payload(pFVar8,param_2);
  }
  EVar1 = param_2->QueueType;
  if ((((EVar1 != Direct) && (EVar1 != Copy)) && (EVar1 != Async)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Queue.h"
                         ,0x23,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FD3D12SyncPoint::Create((ED3D12SyncPointType)&puStackX_8,(wchar_t *)&DAT_00000001);
  pFVar8 = pFStack_28;
  iVar7 = *(int *)&pFStack_28->field_0x238;
  if (iVar7 == *(int *)&pFStack_28->field_0x23c) {
    iVar7 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&pFStack_28->field_0x230,
                       (int *)&pFStack_28->field_0x23c);
  }
  *(int *)&pFVar8->field_0x238 = iVar7 + 1;
  *(undefined8 **)(*(longlong *)&pFVar8->field_0x230 + (longlong)iVar7 * 8) = puStackX_8;
  if (puStackX_8 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puStackX_8 + 1) = *(int *)(puStackX_8 + 1) + 1;
    UNLOCK();
  }
  FVar2 = *(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)param_1;
  if ((puStackX_8[5] == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("GraphEvent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Submission.h"
                         ,0x75,L"This sync point was not created with a CPU event."), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lStack_20 = puStackX_8[5];
  if (lStack_20 != 0) {
    LOCK();
    *(int *)(lStack_20 + 0x30) = *(int *)(lStack_20 + 0x30) + 1;
    UNLOCK();
  }
  FVar10 = *(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)FVar2 + 0x20);
  if (*(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)FVar2 + 0x20) ==
      (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar10 = FVar2;
  }
  if ((((ulonglong)FVar10 <= &lStack_20) &&
      (&lStack_20 < (longlong *)((longlong)FVar10 + (longlong)*(int *)((longlong)FVar2 + 0x2c) * 8))
      ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar7 = *(int *)((longlong)FVar2 + 0x28);
  if (iVar7 == *(int *)((longlong)FVar2 + 0x2c)) {
    iVar7 = ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                      (0x808,(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)FVar2,
                       (int *)((longlong)FVar2 + 0x2c));
  }
  pFVar8 = pFStack_28;
  *(int *)((longlong)FVar2 + 0x28) = iVar7 + 1;
  FVar10 = *(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)FVar2 + 0x20);
  if (*(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)FVar2 + 0x20) ==
      (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar10 = FVar2;
  }
  *(undefined8 *)((longlong)FVar10 + (longlong)iVar7 * 8) = 0;
  *(longlong *)((longlong)FVar10 + (longlong)iVar7 * 8) = lStack_20;
  puVar3 = *(undefined8 **)((longlong)param_1 + 8);
  lStack_20 = 0;
  if ((void *)*puVar3 != (void *)0x0) {
    CheckCallable((void *)*puVar3);
    pcVar5 = (code *)*puVar3;
    plVar11 = puVar3 + 2;
    if ((longlong *)puVar3[5] != (longlong *)0x0) {
      plVar11 = (longlong *)puVar3[5];
    }
    uVar9 = (**(code **)(*plVar11 + 8))();
    (*pcVar5)(uVar9,pFVar8);
  }
  pFVar4 = *(ForAnyElementType **)((longlong)param_1 + 0x10);
  if (((pFVar4->Data <= (FScriptContainerElement *)&pFStack_28) &&
      ((FScriptContainerElement *)&pFStack_28 <
       pFVar4->Data + (longlong)*(int *)((longlong)&pFVar4[1].Data + 4) * 8)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar7 = *(int *)&pFVar4[1].Data;
  piVar12 = (int *)((longlong)&pFVar4[1].Data + 4);
  if (iVar7 == *piVar12) {
    iVar7 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar4,piVar12);
  }
  *(int *)&pFVar4[1].Data = iVar7 + 1;
  *(FD3D12Payload **)(pFVar4->Data + (longlong)iVar7 * 8) = pFStack_28;
  if (puStackX_8 != (undefined8 *)0x0) {
    piVar12 = (int *)(puStackX_8 + 1);
    LOCK();
    iVar7 = *piVar12;
    *piVar12 = *piVar12 + -1;
    UNLOCK();
    if (iVar7 == 1) {
      if (piVar12 == (int *)0x0) {
        puStackX_8 = (undefined8 *)0x0;
      }
      if (puStackX_8 != (undefined8 *)0x0) {
        (**(code **)*puStackX_8)(puStackX_8,1);
      }
    }
  }
  return;
}

// Call @ 145a54330

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FD3D12DynamicRHI::RHIEndFrame'::__l2::<lambda_1>,void>::Call(void *param_1)

{
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Orange,"EndOfPipeTask_RHIEndFrame");
  if (CpuChannel->Enabled < 0) {
    FD3D12DynamicRHI::ProcessTimestamps
              (*(FD3D12DynamicRHI **)param_1,(FD3D12TimingArray *)((longlong)param_1 + 8));
    FGenericPlatformMisc::EndNamedEvent();
    return;
  }
  FCpuProfilerTrace::GetOrCreateSpecId
            (&__CpuProfilerEventSpecId599,"EndOfPipeTask_RHIEndFrame",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHI.cpp"
             ,599);
  FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId599);
  FD3D12DynamicRHI::ProcessTimestamps
            (*(FD3D12DynamicRHI **)param_1,(FD3D12TimingArray *)((longlong)param_1 + 8));
  FCpuProfilerTrace::OutputEndEvent();
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// Call @ 145a54340

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FD3D12DynamicRHI::RHIProcessDeleteQueue'::__l6::<lambda_1>,void>::Call
          (void *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  void *pvVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  bool bVar15;
  undefined1 auStackX_8 [8];
  uint auStackX_10 [2];
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Silver,"EndOfPipeTask_RHIProcessDeleteQueue");
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId447,"EndOfPipeTask_RHIProcessDeleteQueue",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHI.cpp"
               ,0x1bf);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId447);
  }
  iVar2 = *(int *)((longlong)param_1 + 8);
  puVar14 = *(undefined4 **)param_1;
  puVar13 = puVar14 + (longlong)iVar2 * 0xc;
LAB_145a4c600:
  if (*(int *)((longlong)param_1 + 8) != iVar2) {
    auStackX_8[0] = 0;
    `TCheckedPointerIterator<FD3D12DeferredDeleteObject_const_,int,0>::operator!='::__l2::<lambda_1>
    ::operator()(auStackX_8);
  }
  if (puVar14 == puVar13) {
    if (bVar15) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
    return;
  }
  switch(*puVar14) {
  case 0:
    if ((*(int *)(*(longlong *)(puVar14 + 2) + 8) != 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ObjectToDelete.RHIObject->GetRefCount() == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHI.cpp"
                           ,0x1c7,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  case 2:
    puVar9 = *(undefined8 **)(puVar14 + 2);
    piVar1 = (int *)(puVar9 + 1);
    LOCK();
    iVar7 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar7 == 1) {
      if (piVar1 == (int *)0x0) {
        puVar9 = (undefined8 *)0x0;
      }
      if (puVar9 != (undefined8 *)0x0) {
        (**(code **)*puVar9)(puVar9,1);
        puVar14 = puVar14 + 0xc;
        goto LAB_145a4c600;
      }
    }
    break;
  case 1:
    (**(code **)(**(longlong **)(puVar14 + 2) + 0x10))();
    puVar14 = puVar14 + 0xc;
    goto LAB_145a4c600;
  case 3:
    lVar3 = *(longlong *)(puVar14 + 2);
    if ((*(longlong *)(lVar3 + 0x10) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Parent != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                           ,0x59,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FD3D12DescriptorHeapManager::ImmediateFreeHeap
              ((FD3D12DescriptorHeapManager *)(*(longlong *)(lVar3 + 0x10) + 0x610),
               *(FD3D12DescriptorHeap **)(puVar14 + 2));
    puVar14 = puVar14 + 0xc;
    goto LAB_145a4c600;
  case 4:
    FD3D12BindlessDescriptorManager::ImmediateFree
              ((FD3D12BindlessDescriptorManager *)(*(longlong *)(puVar14 + 4) + 0x730),
               *(FRHIDescriptorHandle *)(puVar14 + 2));
    puVar14 = puVar14 + 0xc;
    goto LAB_145a4c600;
  case 5:
    lVar3 = *(longlong *)(puVar14 + 2);
    if ((*(longlong *)(lVar3 + 0x10) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Parent != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                           ,0x59,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FD3D12BindlessDescriptorManager::Recycle
              ((FD3D12BindlessDescriptorManager *)(*(longlong *)(lVar3 + 0x10) + 0x730),
               *(FD3D12DescriptorHeap **)(puVar14 + 2));
    puVar14 = puVar14 + 0xc;
    goto LAB_145a4c600;
  case 6:
    FMemory::Free(*(void **)(puVar14 + 2));
    puVar14 = puVar14 + 0xc;
    goto LAB_145a4c600;
  case 7:
    FD3D12OnlineDescriptorManager::Recycle
              (*(FD3D12OnlineDescriptorManager **)(puVar14 + 4),
               *(FD3D12OnlineDescriptorBlock **)(puVar14 + 2));
    puVar14 = puVar14 + 0xc;
    goto LAB_145a4c600;
  default:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHI.cpp"
                       ,0x1f7,L"Unknown ED3D12DeferredDeleteObjectType");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    break;
  case 9:
    puVar9 = *(undefined8 **)(puVar14 + 2);
    CheckCallable((void *)*puVar9);
    pcVar5 = (code *)*puVar9;
    plVar10 = (longlong *)puVar9[5];
    if ((longlong *)puVar9[5] == (longlong *)0x0) {
      plVar10 = puVar9 + 2;
    }
    uVar8 = (**(code **)(*plVar10 + 8))();
    (*pcVar5)(uVar8);
    plVar10 = *(longlong **)(puVar14 + 2);
    if (plVar10 != (longlong *)0x0) {
      if (*plVar10 != 0) {
        plVar11 = (longlong *)plVar10[5];
        if ((longlong *)plVar10[5] == (longlong *)0x0) {
          plVar11 = plVar10 + 2;
        }
        (**(code **)(*plVar11 + 0x10))();
      }
      ::operator_delete(plVar10,0x30);
    }
    break;
  case 10:
    goto switchD_145a4c635_caseD_a;
  }
  puVar14 = puVar14 + 0xc;
  goto LAB_145a4c600;
switchD_145a4c635_caseD_a:
  lVar3 = *(longlong *)(puVar14 + 2);
  auStackX_10[0] = puVar14[6];
  if (*(int *)(lVar3 + 0x2c0) != *(int *)(lVar3 + 0x2ec)) {
    lVar12 = lVar3 + 0x2f0;
    if (*(longlong *)(lVar3 + 0x2f8) != 0) {
      lVar12 = *(longlong *)(lVar3 + 0x2f8);
    }
    iVar7 = *(int *)(lVar12 + (ulonglong)(*(int *)(lVar3 + 0x300) - 1U & auStackX_10[0]) * 4);
    if (iVar7 != -1) {
      lVar12 = *(longlong *)
                &(((TMapBase<unsigned_int,TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_>,0>_>
                    *)(lVar3 + 0x2b8))->Pairs).Elements;
      do {
        if (*(uint *)(lVar12 + (longlong)iVar7 * 0x18) == auStackX_10[0]) {
          pvVar4 = *(void **)(puVar14 + 4);
          *(undefined8 *)(puVar14 + 4) = 0;
          if (pvVar4 != (void *)0x0) {
            FD3D12ResourceLocation::ReleaseResource
                      ((FD3D12ResourceLocation *)((longlong)pvVar4 + 8));
            ::operator_delete(pvVar4,0xa0);
          }
          goto LAB_145a4c866;
        }
        iVar7 = *(int *)(lVar12 + 0x10 + (longlong)iVar7 * 0x18);
      } while (iVar7 != -1);
    }
  }
  TMapBase<unsigned_int,TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_>,0>_>
  ::Emplace<unsigned_int_&,TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_>_>
            ((TMapBase<unsigned_int,TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_>,0>_>
              *)(lVar3 + 0x2b8),auStackX_10,
             (TUniquePtr<FD3D12LockedResource,TDefaultDelete<FD3D12LockedResource>_> *)(puVar14 + 4)
            );
LAB_145a4c866:
  (**(code **)(*(longlong *)(*(longlong *)(puVar14 + 2) + 0x138) + 0x10))();
  puVar14 = puVar14 + 0xc;
  goto LAB_145a4c600;
}

// Call @ 145a54350

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FD3D12DynamicRHI::InitializeSubmissionPipe'::__l11::<lambda_1>,void,FD3D12Queue_&>
::Call(void *param_1,FD3D12Queue *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FQueue FVar6;
  FD3D12Payload *pFVar7;
  FD3D12Timing *pFVar8;
  undefined4 extraout_var;
  undefined8 auStack_18 [2];
  FScriptContainerElement *pFVar9;
  
  pFVar2 = *(ForAnyElementType **)param_1;
  pFVar7 = ::operator_new(0x360);
  if (pFVar7 == (FD3D12Payload *)0x0) {
    pFVar7 = (FD3D12Payload *)0x0;
  }
  else {
    pFVar7 = FD3D12Payload::FD3D12Payload(pFVar7,param_2);
  }
  iVar5 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar5 == *piVar1) {
    iVar5 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar5 + 1;
  *(FD3D12Payload **)(pFVar2->Data + (longlong)iVar5 * 8) = pFVar7;
  pFVar8 = FD3D12DynamicRHI::FD3D12TimingArray::CreateNew
                     ((FD3D12TimingArray *)(*(longlong *)((longlong)param_1 + 8) + 0xd8),param_2);
  if (auStack_18 != (undefined8 *)&pFVar7->field_0x260) {
    *(FD3D12Timing **)&pFVar7->field_0x260 = pFVar8;
    pFVar7->field_0x268 = 1;
  }
  pFVar2 = *(ForAnyElementType **)((longlong)param_1 + 0x10);
  FVar6 = FD3D12Queue::GetProfilerQueue(param_2);
  pFVar9 = (FScriptContainerElement *)CONCAT44(extraout_var,FVar6.field0_0x0);
  if ((pFVar2->Data <= pFVar9) &&
     (pFVar9 < pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar5 == *piVar1) {
    iVar5 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar5 + 1;
  *(undefined4 *)(pFVar2->Data + (longlong)iVar5 * 4) = *(undefined4 *)pFVar9;
  return;
}

// Call @ 145a54360

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

TRefCountPtr<FRHITexture> __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FD3D12DynamicRHI::RHICreateTextureInitializer'::__l11::<lambda_1>,TRefCountPtr<FRHITexture>,FRHICommandListBase_&>
::Call(void *param_1,FRHICommandListBase *param_2)

{
  FRHICommandListBase *in_R8;
  
  D3D12RHI::TextureUtils::ReconcileInitialState
            (in_R8,(FD3D12Texture *)(param_2->MemManager).Top,
             *(ED3D12Access *)&(param_2->MemManager).End,
             *(ED3D12Access *)((longlong)&(param_2->MemManager).End + 4));
  *(uchar **)param_1 = (param_2->MemManager).Top;
  (param_2->MemManager).Top = (uchar *)0x0;
  return (TRefCountPtr<FRHITexture>)param_1;
}

// Call @ 145a543b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHITexture> __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::RHICore::FDefaultTextureInitializer::FDefaultTextureInitializer'::__l1::<lambda_25_>,TRefCountPtr<FRHITexture>,FRHICommandListBase_&>
::Call(void *param_1,FRHICommandListBase *param_2)

{
  *(uchar **)param_1 = (param_2->MemManager).Top;
  (param_2->MemManager).Top = (uchar *)0x0;
  return (TRefCountPtr<FRHITexture>)param_1;
}

// Call @ 145a543d0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

FRHITextureSubresourceInitializer * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`CreateTextureInitializerForWriting'::__l2::<lambda_2>,FRHITextureSubresourceInitializer,FRHITextureInitializer::FSubresourceIndex>
::Call(FRHITextureSubresourceInitializer *__return_storage_ptr__,void *param_1,
      FSubresourceIndex *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  D3D12_PLACED_SUBRESOURCE_FOOTPRINT *pDVar10;
  uint local_res8 [2];
  D3D12_PLACED_SUBRESOURCE_FOOTPRINT local_38;
  
  uVar1 = param_2->FaceIndex;
  uVar2 = param_2->ArrayIndex;
  iVar4 = param_2->MipIndex;
  lVar5 = (*(longlong **)param_1)[0x32];
  lVar9 = (**(code **)(**(longlong **)param_1 + 0x20))();
  cVar3 = *(char *)(lVar9 + 0x32);
  if ((cVar3 == '\x03') || (cVar3 == '\x04')) {
    iVar8 = uVar1 + uVar2 * 6;
  }
  else {
    iVar8 = 0;
    if (cVar3 == '\x01') {
      iVar8 = uVar2;
    }
  }
  local_res8[0] = 0;
  pDVar10 = D3D12RHI::TextureUtils::GetInitializerSubresourceFootprint
                      (&local_38,*(FD3D12Texture **)param_1,
                       (uint)*(ushort *)(lVar5 + 0x6e) * iVar8 + iVar4,local_res8);
  uVar6 = (pDVar10->Footprint).Depth;
  uVar7 = (pDVar10->Footprint).RowPitch;
  __return_storage_ptr__->Data = (void *)(*(longlong *)((longlong)param_1 + 8) + pDVar10->Offset);
  __return_storage_ptr__->Size = (ulonglong)(uVar6 * uVar7 * local_res8[0]);
  __return_storage_ptr__->Stride = (ulonglong)uVar7;
  return __return_storage_ptr__;
}

// Call @ 145a544c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FD3D12DynamicRHI::EnqueueEndOfPipeTask'::__l2::<lambda_2>,void>::Call
          (void *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  bool bVar4;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Red,"EndOfPipeTask");
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId425,"EndOfPipeTask",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHI.cpp"
               ,0x1a9);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId425);
  }
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// Call @ 145a544d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FD3D12DynamicRHI::ProcessInterruptQueue'::__l2::<lambda_2>,void,FD3D12Queue_&>::
Call(void *param_1,FD3D12Queue *param_2)

{
  ulong64 *puVar1;
  FScriptContainerElement *pFVar2;
  FD3D12QueryLocation *pFVar3;
  atomic<int> *paVar4;
  int iVar5;
  D3D12_QUERY_TYPE DVar6;
  int iVar7;
  longlong lVar8;
  FD3D12PayloadBase *this;
  atomic<unsigned___int64> aVar9;
  atomic<TSpscQueue<FD3D12Payload_*,FMemory>::FNode_*> aVar10;
  void *pvVar11;
  FD3D12Timing *pFVar12;
  FChunk *pFVar13;
  FTaskBase *this_00;
  ID3D12Fence *pIVar14;
  undefined8 *puVar15;
  code *pcVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  ulonglong uVar20;
  ID3D12Device *pIVar21;
  ulong64 uVar22;
  uint uVar23;
  undefined8 *puVar24;
  FD3D12QueryLocation *this_01;
  FScriptContainerElement *pFVar25;
  void *_Src;
  uchar *_Src_00;
  size_t _Size;
  double dVar26;
  undefined1 auStackY_128 [32];
  undefined1 uStack_f8;
  undefined1 uStack_f7;
  undefined1 uStack_f6;
  undefined1 auStack_f5 [5];
  undefined8 *puStack_f0;
  FString FStack_e8;
  undefined8 auStack_d8 [2];
  longlong lStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  longlong lStack_88;
  longlong lStack_80;
  longlong lStack_78;
  ulonglong uStack_68;
  
  dVar26 = __real_412e848000000000;
  uStack_68 = __security_cookie.value ^ (ulonglong)auStackY_128;
  puStack_f0 = param_1;
LAB_145a4ec26:
  puVar15 = puStack_f0;
  lVar8 = *(longlong *)(param_2->PendingInterrupt).Tail;
  puVar24 = (undefined8 *)0x0;
  if (lVar8 != 0) {
    puVar24 = (undefined8 *)(lVar8 + 8);
  }
  if ((puVar24 == (undefined8 *)0x0) ||
     (this = (FD3D12PayloadBase *)*puVar24, this->bSubmitted == (atomic<bool>)0x0))
  goto LAB_145a4f6d9;
  uVar20 = (**(code **)((longlong)*(param_2->Fence).D3DFence.Reference + 0x40))();
  aVar9 = (param_2->Fence).LastSignaledValue;
  if (uVar20 == 0xffffffffffffffff) {
    puVar24 = (undefined8 *)*puVar15;
    pIVar21 = FD3D12Device::GetDevice(param_2->Device);
    iVar18 = (**(code **)((longlong)*pIVar21 + 0x128))(pIVar21);
    if (iVar18 != 0) {
      FD3D12DynamicRHI::TerminateOnGPUCrash((FD3D12DynamicRHI *)*puVar24);
    }
  }
  if (this->CompletionFenceValue <= uVar20) {
    (param_2->Fence).bInterruptAwaited = false;
    aVar10 = *(atomic<TSpscQueue<FD3D12Payload_*,FMemory>::FNode_*> *)
              (param_2->PendingInterrupt).Tail;
    if (aVar10 != (atomic<TSpscQueue<FD3D12Payload_*,FMemory>::FNode_*>)0x0) {
      (param_2->PendingInterrupt).Tail = aVar10;
      LOCK();
      paVar4 = &(param_2->PendingInterrupt).NumElems;
      *paVar4 = (atomic<int>)((int)*paVar4 + -1);
      UNLOCK();
    }
    *(uint *)puVar15[2] = *(uint *)puVar15[2] | 1;
    iVar18 = (this->BatchedObjects).OcclusionQueries.ArrayNum;
    pFVar25 = (this->BatchedObjects).OcclusionQueries.AllocatorInstance.Data;
    pFVar2 = pFVar25 + (longlong)iVar18 * 0x18;
    while( true ) {
      if ((this->BatchedObjects).OcclusionQueries.ArrayNum != iVar18) {
        uStack_f8 = 0;
        `TCheckedPointerIterator<FD3D12QueryLocation,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&uStack_f8);
      }
      if (pFVar25 == pFVar2) break;
      if ((*(longlong *)(pFVar25 + 0x10) == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Query.Target",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Submission.cpp"
                              ,0x4c5,L""), bVar17)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      pvVar11 = *(void **)(pFVar25 + 0x10);
      if ((pvVar11 == (void *)0x0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Dst",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Query.h"
                              ,0xa0,L""), bVar17)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      if ((*(uint *)(*(longlong *)pFVar25 + 0x20) <= *(uint *)(pFVar25 + 8)) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index < Heap->NumQueries",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Query.h"
                              ,0xa1,L""), bVar17)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      if ((*(longlong *)(*(longlong *)pFVar25 + 0x30) == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Heap->ResultPtr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Query.h"
                              ,0xa2,L""), bVar17)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      iVar19 = *(int *)(*(longlong *)pFVar25 + 0x18);
      if ((iVar19 == 0) || (iVar19 == 2)) {
LAB_145a4ee01:
        iVar19 = 8;
      }
      else {
        if (iVar19 != 3) {
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("!\"Enclosing block should never be called\"",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Query.h"
                              ,0x4b,L"");
          if (bVar17) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          goto LAB_145a4ee01;
        }
        iVar19 = 0x58;
      }
      iVar5 = *(int *)(*(longlong *)pFVar25 + 0x18);
      _Src = (void *)((ulonglong)(uint)(iVar19 * *(int *)(pFVar25 + 8)) +
                     *(longlong *)(*(longlong *)pFVar25 + 0x30));
      if ((iVar5 == 0) || (iVar5 == 2)) {
LAB_145a4ee4a:
        memcpy(pvVar11,_Src,8);
        pFVar25 = pFVar25 + 0x18;
      }
      else {
        if (iVar5 != 3) {
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("!\"Enclosing block should never be called\"",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Query.h"
                              ,0x4b,L"");
          if (bVar17) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          goto LAB_145a4ee4a;
        }
        memcpy(pvVar11,_Src,0x58);
        pFVar25 = pFVar25 + 0x18;
      }
    }
    iVar18 = (this->BatchedObjects).PipelineStatsQueries.ArrayNum;
    this_01 = (FD3D12QueryLocation *)
              (this->BatchedObjects).PipelineStatsQueries.AllocatorInstance.Data;
    pFVar3 = this_01 + iVar18;
LAB_145a4eea0:
    do {
      if ((this->BatchedObjects).PipelineStatsQueries.ArrayNum != iVar18) {
        uStack_f7 = 0;
        `TCheckedPointerIterator<FD3D12QueryLocation,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&uStack_f7);
      }
      if (this_01 == pFVar3) goto LAB_145a4f09d;
      pvVar11 = this_01->Target;
      if (pvVar11 == (void *)0x0) {
        DVar6 = this_01->Heap->QueryType;
        if ((((DVar6 != D3D12_QUERY_TYPE_OCCLUSION) && (DVar6 != D3D12_QUERY_TYPE_TIMESTAMP)) &&
            (DVar6 != D3D12_QUERY_TYPE_PIPELINE_STATISTICS)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("!\"Enclosing block should never be called\"",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Query.h"
                                ,0x4b,L""), bVar17)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        FD3D12QueryLocation::CopyResultTo(this_01,&lStack_c8);
        pFVar12 = param_2->Timing;
        (pFVar12->PipelineStats).IAVertices = (pFVar12->PipelineStats).IAVertices + lStack_c8;
        puVar1 = &(pFVar12->PipelineStats).IAPrimitives;
        *puVar1 = *puVar1 + lStack_c0;
        puVar1 = &(pFVar12->PipelineStats).VSInvocations;
        *puVar1 = *puVar1 + lStack_b8;
        puVar1 = &(pFVar12->PipelineStats).GSInvocations;
        *puVar1 = *puVar1 + lStack_b0;
        puVar1 = &(pFVar12->PipelineStats).GSPrimitives;
        *puVar1 = *puVar1 + lStack_a8;
        puVar1 = &(pFVar12->PipelineStats).CInvocations;
        *puVar1 = *puVar1 + lStack_a0;
        puVar1 = &(pFVar12->PipelineStats).CPrimitives;
        *puVar1 = *puVar1 + lStack_98;
        puVar1 = &(pFVar12->PipelineStats).PSInvocations;
        *puVar1 = *puVar1 + lStack_90;
        puVar1 = &(pFVar12->PipelineStats).HSInvocations;
        *puVar1 = *puVar1 + lStack_88;
        puVar1 = &(pFVar12->PipelineStats).DSInvocations;
        *puVar1 = *puVar1 + lStack_80;
        puVar1 = &(pFVar12->PipelineStats).CSInvocations;
        *puVar1 = *puVar1 + lStack_78;
        this_01 = this_01 + 1;
        goto LAB_145a4eea0;
      }
      if ((this_01->Heap->NumQueries <= this_01->Index) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index < Heap->NumQueries",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Query.h"
                              ,0xa1,L""), bVar17)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      if ((this_01->Heap->ResultPtr == (uchar *)0x0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Heap->ResultPtr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Query.h"
                              ,0xa2,L""), bVar17)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      DVar6 = this_01->Heap->QueryType;
      if ((DVar6 == D3D12_QUERY_TYPE_OCCLUSION) || (DVar6 == D3D12_QUERY_TYPE_TIMESTAMP)) {
LAB_145a4ef6d:
        iVar19 = 8;
      }
      else {
        if (DVar6 != D3D12_QUERY_TYPE_PIPELINE_STATISTICS) {
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("!\"Enclosing block should never be called\"",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Query.h"
                              ,0x4b,L"");
          if (bVar17) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          goto LAB_145a4ef6d;
        }
        iVar19 = 0x58;
      }
      DVar6 = this_01->Heap->QueryType;
      _Src_00 = this_01->Heap->ResultPtr + iVar19 * this_01->Index;
      if ((DVar6 != D3D12_QUERY_TYPE_OCCLUSION) && (DVar6 != D3D12_QUERY_TYPE_TIMESTAMP)) {
        if (DVar6 == D3D12_QUERY_TYPE_PIPELINE_STATISTICS) {
          memcpy(pvVar11,_Src_00,0x58);
          this_01 = this_01 + 1;
          goto LAB_145a4eea0;
        }
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("!\"Enclosing block should never be called\"",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Query.h"
                            ,0x4b,L"");
        if (bVar17) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
      }
      memcpy(pvVar11,_Src_00,8);
      this_01 = this_01 + 1;
    } while( true );
  }
  if ((*(longlong *)(puVar15[1] + 0x28) != 0) && ((param_2->Fence).bInterruptAwaited == false)) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Red,"SetEventOnCompletion");
    bVar17 = -1 < CpuChannel->Enabled;
    if (bVar17) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1166,"SetEventOnCompletion",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Submission.cpp"
                 ,0x48e);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1166);
    }
    pIVar14 = (param_2->Fence).D3DFence.Reference;
    iVar18 = (**(code **)((longlong)*pIVar14 + 0x48))
                       (pIVar14,this->CompletionFenceValue,
                        *(undefined8 *)(*(longlong *)(puVar15[1] + 0x28) + 0x20));
    if (iVar18 < 0) {
      FStack_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_e8.Data.ArrayNum = 0;
      FStack_e8.Data.ArrayMax = 0;
      ::D3D12RHI::VerifyD3D12Result
                (iVar18,
                 "CurrentQueue.Fence.D3DFence->SetEventOnCompletion(Payload->CompletionFenceValue, InterruptThread->Event)"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Submission.cpp"
                 ,0x48f,(ID3D12Device *)0x0,&FStack_e8);
    }
    (param_2->Fence).bInterruptAwaited = true;
    if (bVar17) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
  }
  *(uint *)puVar15[2] = *(uint *)puVar15[2] | 2;
  bVar17 = (this->SubmissionTime).bIsSet;
  if (bVar17 == false) {
    if (((ulonglong)aVar9 < this->CompletionFenceValue) ||
       ((FTimer *)&this->SubmissionTime == &Timer)) goto LAB_145a4f6d9;
    (this->SubmissionTime).TypedValue = Timer.Elapsed;
    (this->SubmissionTime).bIsSet = true;
LAB_145a4f590:
    bVar17 = (this->SubmissionTime).TypedValue != 0xffffffffffffffff;
  }
  else {
    if (bVar17 == true) goto LAB_145a4f590;
    bVar17 = true;
  }
  if (bVar17) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      CyclesPerSecond = __real_3ff0000000000000 / FGenericPlatformTime::SecondsPerCycle64;
      _Init_thread_footer(&::_TSS0);
    }
    dVar26 = (double)GD3D12SubmissionTimeout * CyclesPerSecond;
    if (((this->SubmissionTime).bIsSet == false) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar17)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    uVar20 = Timer.Elapsed - (this->SubmissionTime).TypedValue;
    if ((ulonglong)(longlong)dVar26 < uVar20) {
      (**(code **)(*(longlong *)puVar15[1] + 0x5d0))
                ((longlong *)puVar15[1],this,
                 (double)uVar20 * FGenericPlatformTime::SecondsPerCycle64);
      if ((TOptional<unsigned___int64> *)auStack_d8 != &this->SubmissionTime) {
        (this->SubmissionTime).TypedValue = 0xffffffffffffffff;
        (this->SubmissionTime).bIsSet = true;
      }
    }
    else {
      lVar8 = puVar15[2];
      uVar23 = (uint)(longlong)
                     ((double)((longlong)dVar26 - uVar20) * FGenericPlatformTime::SecondsPerCycle64
                     * __real_408f400000000000);
      if (*(uint *)(lVar8 + 4) < uVar23) {
        uVar23 = *(uint *)(lVar8 + 4);
      }
      *(uint *)(lVar8 + 4) = uVar23;
    }
  }
LAB_145a4f6d9:
  puVar15 = (undefined8 *)*puVar15;
  pIVar21 = FD3D12Device::GetDevice(param_2->Device);
  iVar18 = (**(code **)((longlong)*pIVar21 + 0x128))(pIVar21);
  if (iVar18 != 0) {
    FD3D12DynamicRHI::TerminateOnGPUCrash((FD3D12DynamicRHI *)*puVar15);
  }
  return;
LAB_145a4f09d:
  if ((this->BatchedObjects).TimestampQueries.ArrayNum != 0) {
    uVar22 = FD3D12Device::GetTimestampFrequency(param_2->Device,param_2->QueueType);
    iVar18 = (this->BatchedObjects).TimestampQueries.ArrayNum;
    pFVar25 = (this->BatchedObjects).TimestampQueries.AllocatorInstance.Data;
    pFVar2 = pFVar25 + (longlong)iVar18 * 0x18;
LAB_145a4f100:
    do {
      if ((this->BatchedObjects).TimestampQueries.ArrayNum != iVar18) {
        uStack_f6 = 0;
        `TCheckedPointerIterator<FD3D12QueryLocation,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&uStack_f6);
      }
      if (pFVar25 == pFVar2) break;
      pvVar11 = *(void **)(pFVar25 + 0x10);
      if (pvVar11 != (void *)0x0) {
        if ((*(uint *)(*(longlong *)pFVar25 + 0x20) <= *(uint *)(pFVar25 + 8)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index < Heap->NumQueries",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Query.h"
                                ,0xa1,L""), bVar17)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        if ((*(longlong *)(*(longlong *)pFVar25 + 0x30) == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Heap->ResultPtr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Query.h"
                                ,0xa2,L""), bVar17)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        iVar19 = *(int *)(*(longlong *)pFVar25 + 0x18);
        if ((iVar19 == 0) || (iVar19 == 2)) {
LAB_145a4f1cd:
          iVar19 = 8;
        }
        else {
          if (iVar19 != 3) {
            bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("!\"Enclosing block should never be called\"",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Query.h"
                                ,0x4b,L"");
            if (bVar17) {
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
            goto LAB_145a4f1cd;
          }
          iVar19 = 0x58;
        }
        iVar5 = *(int *)(pFVar25 + 8);
        iVar7 = *(int *)(*(longlong *)pFVar25 + 0x18);
        lVar8 = *(longlong *)(*(longlong *)pFVar25 + 0x30);
        if ((iVar7 == 0) || (iVar7 == 2)) {
LAB_145a4f21a:
          _Size = 8;
        }
        else {
          if (iVar7 != 3) {
            bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("!\"Enclosing block should never be called\"",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Query.h"
                                ,0x4b,L"");
            if (bVar17) {
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
            goto LAB_145a4f21a;
          }
          _Size = 0x58;
        }
        memcpy(pvVar11,(void *)((ulonglong)(uint)(iVar19 * iVar5) + lVar8),_Size);
      }
      iVar19 = *(int *)(pFVar25 + 0xc);
      if ((iVar19 == 2) || (iVar19 == 3)) {
        if ((*(longlong *)(pFVar25 + 0x10) == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Query.Target",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Submission.cpp"
                                ,0x4e6,L""), bVar17)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        if (*(int *)(pFVar25 + 0xc) == 2) {
          **(ulonglong **)(pFVar25 + 0x10) =
               (longlong)((double)**(ulonglong **)(pFVar25 + 0x10) * (dVar26 / (double)uVar22));
        }
      }
      else if ((iVar19 == 4) || (iVar19 == 5)) {
        pFVar12 = param_2->Timing;
        **(longlong **)(pFVar25 + 0x10) =
             ((**(longlong **)(pFVar25 + 0x10) - pFVar12->GPUTimestamp) * pFVar12->CPUFrequency) /
             pFVar12->GPUFrequency + pFVar12->CPUTimestamp;
        pFVar25 = pFVar25 + 0x18;
        goto LAB_145a4f100;
      }
      pFVar25 = pFVar25 + 0x18;
    } while( true );
  }
  if ((this->EventStream).First != (FChunk *)0x0) {
    if ((param_2->Timing == (FD3D12Timing *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("CurrentQueue.Timing",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Submission.cpp"
                            ,0x50c,L""), bVar17)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    pFVar12 = param_2->Timing;
    if (((pFVar12->EventStream).Queue.field0_0x0.Value != (this->EventStream).Queue.field0_0x0.Value
        ) && (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Queue == Other.Queue",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\GPUProfiler.h"
                                  ,0x1c1,L""), bVar17)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    if ((pFVar12->EventStream).First == (FChunk *)0x0) {
      (pFVar12->EventStream).Current = (this->EventStream).Current;
      (pFVar12->EventStream).First = (this->EventStream).First;
    }
    else {
      pFVar13 = (this->EventStream).First;
      if (pFVar13 != (FChunk *)0x0) {
        (((pFVar12->EventStream).Current)->Header).Next = pFVar13;
        (pFVar12->EventStream).Current = (this->EventStream).Current;
      }
    }
    (this->EventStream).Current = (FChunk *)0x0;
    (this->EventStream).First = (FChunk *)0x0;
  }
  if ((this->Timing).bIsSet != false) {
    param_2->Timing = (this->Timing).TypedValue;
  }
  pFVar25 = (this->SyncPointsToSignal).AllocatorInstance.Data;
  iVar18 = (this->SyncPointsToSignal).ArrayNum;
  pFVar2 = pFVar25 + (longlong)iVar18 * 8;
  while( true ) {
    if ((this->SyncPointsToSignal).ArrayNum != iVar18) {
      auStack_f5[0] = 0;
      `TCheckedPointerIterator<TRefCountPtr<FD3D12SyncPoint>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(auStack_f5);
    }
    if (pFVar25 == pFVar2) break;
    this_00 = *(FTaskBase **)(*(longlong *)pFVar25 + 0x28);
    if (this_00 != (FTaskBase *)0x0) {
      if (this_00->ExtendedPriority == TaskEvent) {
        LOCK();
        this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
        UNLOCK();
      }
      Tasks::Private::FTaskBase::TryLaunch(this_00,0);
    }
    pFVar25 = pFVar25 + 8;
  }
  FD3D12PayloadBase::~FD3D12PayloadBase(this);
  ::operator_delete(this,0x360);
  goto LAB_145a4ec26;
}

// Call @ 145a544e0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FD3D12DynamicRHI::RHIEndFrame'::__l2::<lambda_2>,void,FD3D12Payload_&>::Call
          (void *param_1,FD3D12Payload *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  FD3D12Timing *pFVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lStackX_8;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_24;
  
  pFVar8 = FD3D12DynamicRHI::FD3D12TimingArray::CreateNew
                     ((FD3D12TimingArray *)(*(longlong *)param_1 + 0xd8),
                      *(FD3D12Queue **)&param_2->field_0x8);
  if (&uStack_38 != (undefined8 *)&param_2->field_0x260) {
    *(FD3D12Timing **)&param_2->field_0x260 = pFVar8;
    param_2->field_0x268 = 1;
  }
  iVar2 = *(int *)(*(longlong *)&param_2->field_0x8 + 8);
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      cVar7 = '\0';
      goto LAB_145a4f7f9;
    }
    if (iVar2 == 2) {
      cVar7 = '\x02';
      goto LAB_145a4f7f9;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHI.cpp"
                       ,0x266,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  cVar7 = '\x01';
LAB_145a4f7f9:
  puVar4 = *(undefined4 **)((longlong)param_1 + 8);
  cVar1 = *(char *)(puVar4 + 6);
  if (cVar1 != '\0') {
    lStackX_8 = *(longlong *)(puVar4 + 4);
  }
  lVar10 = 0;
  lVar9 = lVar10;
  if (cVar7 != '\0') {
    if ((cVar7 == '\x01') || (lVar9 = 8, cVar7 != '\x02')) {
      lVar9 = lVar10;
    }
    lVar9 = *(longlong *)(lVar9 + *(longlong *)(puVar4 + 2));
  }
  uVar3 = *puVar4;
  if (cVar1 != '\0') {
    lVar10 = lStackX_8;
  }
  uStack_24 = CONCAT31(uStack_24._1_3_,cVar1);
  if (&uStack_30 != (undefined8 *)&param_2->field_0x338) {
    *(undefined8 *)&param_2->field_0x338 = 0;
    *(ulonglong *)&param_2->field_0x340 = CONCAT44(uStack_24,uVar3);
    *(longlong *)&param_2->field_0x348 = lVar10;
    *(longlong *)&param_2->field_0x350 = lVar9;
    param_2->field_0x358 = 1;
  }
  return;
}

// Call @ 145a544f0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FD3D12DynamicRHI::ProcessSubmissionQueue'::__l4::<lambda_2>,void,FD3D12Queue_&>
::Call(void *param_1,FD3D12Queue *param_2)

{
  undefined1 *puVar1;
  atomic<TMpscQueue<FD3D12Payload_*,FMemory>::FNode_*> aVar2;
  FD3D12Payload *pFVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  FD3D12Queue *pFVar10;
  longlong *plVar11;
  uint uVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 auStackX_18 [8];
  longlong *plStackX_20;
  longlong lStack_70;
  ulonglong uStack_68;
  longlong alStack_60 [4];
  
  do {
    aVar2 = ((param_2->PendingSubmission).Tail)->Next;
    plVar11 = (longlong *)0x0;
    if (aVar2 != (atomic<TMpscQueue<FD3D12Payload_*,FMemory>::FNode_*>)0x0) {
      plVar11 = (longlong *)((longlong)aVar2 + 8);
    }
    if (plVar11 == (longlong *)0x0) {
      return;
    }
    pFVar3 = (FD3D12Payload *)*plVar11;
    uVar12 = *(uint *)&pFVar3->field_0x20;
    plStackX_20 = (longlong *)&pFVar3->field_0x10;
    if ((int)uVar12 < *(int *)&pFVar3->field_0x18) {
      do {
        plVar11 = plStackX_20;
        uVar7 = 0;
        if ((int)uVar12 < (int)plStackX_20[1]) {
          uVar7 = ~uVar12 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar15 = *(longlong *)(*plVar11 + (longlong)(int)uVar12 * 8);
        if (*(char *)(lVar15 + 0x20) == '\0') {
          **(uint **)param_1 = **(uint **)param_1 | 2;
          return;
        }
        uVar14 = *(ulonglong *)(lVar15 + 0x18);
        puVar1 = &pFVar3->field_0x1b0;
        iVar8 = *(int *)puVar1;
        puVar13 = &pFVar3->field_0x28;
        lVar15 = *(longlong *)(lVar15 + 0x10);
        plVar11 = (longlong *)puVar13;
        if (*(longlong **)&pFVar3->field_0x1a8 != (longlong *)0x0) {
          plVar11 = *(longlong **)&pFVar3->field_0x1a8;
        }
        plVar9 = plVar11 + (longlong)iVar8 * 2;
        while( true ) {
          if (*(int *)puVar1 != iVar8) {
            auStackX_18[0] = 0;
            `TCheckedPointerIterator<FD3D12PayloadBase::FQueueFence,int,0>::operator!='::__l2::
            <lambda_1>::operator()(auStackX_18);
          }
          if (plVar11 == plVar9) {
            plVar11 = *(longlong **)&pFVar3->field_0x1a8;
            plVar9 = (longlong *)puVar13;
            if (plVar11 != (longlong *)0x0) {
              plVar9 = plVar11;
            }
            lStack_70 = lVar15;
            uStack_68 = uVar14;
            if (plVar9 <= &lStack_70) {
              plVar9 = (longlong *)puVar13;
              if (plVar11 != (longlong *)0x0) {
                plVar9 = plVar11;
              }
              if ((&lStack_70 < plVar9 + (longlong)*(int *)&pFVar3->field_0x1b4 * 2) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            iVar8 = *(int *)puVar1;
            if (iVar8 == *(int *)&pFVar3->field_0x1b4) {
              iVar8 = ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12PayloadBase::FQueueFence>_>
                                (0x810,(ForElementType<FD3D12PayloadBase::FQueueFence> *)puVar13,
                                 (int *)&pFVar3->field_0x1b4);
              *(int *)puVar1 = iVar8;
            }
            *(int *)puVar1 = iVar8 + 1;
            if (*(undefined1 **)&pFVar3->field_0x1a8 != (undefined1 *)0x0) {
              puVar13 = *(undefined1 **)&pFVar3->field_0x1a8;
            }
            *(longlong *)(puVar13 + (longlong)iVar8 * 0x10) = lStack_70;
            *(ulonglong *)((longlong)(puVar13 + (longlong)iVar8 * 0x10) + 8) = uStack_68;
            goto LAB_145a4fabf;
          }
          if (*plVar11 == lVar15) break;
          plVar11 = plVar11 + 2;
        }
        if (uVar14 < (ulonglong)plVar11[1]) {
          uVar14 = plVar11[1];
        }
        plVar11[1] = uVar14;
LAB_145a4fabf:
        *(int *)&pFVar3->field_0x20 = *(int *)&pFVar3->field_0x20 + 1;
        **(undefined1 **)((longlong)param_1 + 8) = 1;
        uVar12 = *(uint *)&pFVar3->field_0x20;
      } while ((int)uVar12 < *(int *)&pFVar3->field_0x18);
    }
    plVar11 = plStackX_20;
    if (plStackX_20 != alStack_60) {
      DestructItems<TRefCountPtr<FD3D12SyncPoint>,int>
                ((TRefCountPtr<FD3D12SyncPoint> *)*plStackX_20,(int)plStackX_20[1]);
      if ((void *)*plVar11 != (void *)0x0) {
        FMemory::Free((void *)*plVar11);
      }
      *plVar11 = 0;
      plVar11[1] = 0;
    }
    *(undefined4 *)(plVar11 + 2) = 0;
    DestructItems<TRefCountPtr<FD3D12SyncPoint>,int>((TRefCountPtr<FD3D12SyncPoint> *)0x0,0);
    aVar2 = ((param_2->PendingSubmission).Tail)->Next;
    if (aVar2 != (atomic<TMpscQueue<FD3D12Payload_*,FMemory>::FNode_*>)0x0) {
      FMemory::Free((param_2->PendingSubmission).Tail);
      (param_2->PendingSubmission).Tail = (FNode *)aVar2;
    }
    **(undefined1 **)((longlong)param_1 + 8) = 1;
    if ((param_2->PayloadToSubmit != (FD3D12Payload *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!CurrentQueue.PayloadToSubmit",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Submission.cpp"
                           ,0x1d4,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    param_2->PayloadToSubmit = pFVar3;
    uVar12 = 0;
    **(uint **)param_1 = **(uint **)param_1 | 1;
    **(undefined1 **)((longlong)param_1 + 0x10) = 1;
    if (0 < *(int *)&pFVar3->field_0x218) {
      lVar15 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar12 < *(int *)&pFVar3->field_0x218) {
          uVar7 = ~uVar12 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        puVar4 = *(undefined8 **)(lVar15 + *(longlong *)&pFVar3->field_0x210);
        pFVar10 = FD3D12Device::GetQueue((FD3D12Device *)*puVar4,*(ED3D12QueueType *)(puVar4 + 1));
        GetMaxExecuteBatchSize(pFVar10->QueueType);
        TArray<FD3D12QueryLocation,TSizedDefaultAllocator<32>_>::
        Append<FD3D12QueryLocation,TSizedDefaultAllocator<32>_>
                  (&(pFVar10->BatchedObjects).OcclusionQueries,
                   (TArray<FD3D12QueryLocation,TSizedDefaultAllocator<32>_> *)(puVar4 + 0x1f));
        TArray<FD3D12QueryLocation,TSizedDefaultAllocator<32>_>::
        Append<FD3D12QueryLocation,TSizedDefaultAllocator<32>_>
                  (&(pFVar10->BatchedObjects).PipelineStatsQueries,
                   (TArray<FD3D12QueryLocation,TSizedDefaultAllocator<32>_> *)(puVar4 + 0x21));
        TArray<FD3D12QueryLocation,TSizedDefaultAllocator<32>_>::
        Append<FD3D12QueryLocation,TSizedDefaultAllocator<32>_>
                  (&(pFVar10->BatchedObjects).TimestampQueries,
                   (TArray<FD3D12QueryLocation,TSizedDefaultAllocator<32>_> *)(puVar4 + 0x1d));
        uVar12 = uVar12 + 1;
        lVar15 = lVar15 + 8;
      } while ((int)uVar12 < *(int *)&pFVar3->field_0x218);
    }
    plVar11 = *(longlong **)((longlong)param_1 + 0x18);
    if (0x7f < *(int *)(*plVar11 + 0x408)) {
      *(uint *)plVar11[1] = *(uint *)plVar11[1] | 1;
      FD3D12DynamicRHI::FlushBatchedPayloads
                ((FD3D12DynamicRHI *)plVar11[2],
                 (TArray<FD3D12Payload_*,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
                  *)*plVar11);
    }
    FD3D12Queue::FinalizePayload
              (param_2,false,
               *(TArray<FD3D12Payload_*,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
                 **)((longlong)param_1 + 0x20));
    plVar11 = *(longlong **)((longlong)param_1 + 0x18);
    if (0x7f < *(int *)(*plVar11 + 0x408)) {
      *(uint *)plVar11[1] = *(uint *)plVar11[1] | 1;
      FD3D12DynamicRHI::FlushBatchedPayloads
                ((FD3D12DynamicRHI *)plVar11[2],
                 (TArray<FD3D12Payload_*,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
                  *)*plVar11);
    }
  } while( true );
}

// Call @ 145a9cd00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FRHITransientBuffer * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FD3D12TransientResourceHeapAllocator::CreateBuffer'::__l2::<lambda_1>,FRHITransientBuffer_*,FRHITransientHeap::FResourceInitializer_const_&>
::Call(void *param_1,FResourceInitializer *param_2)

{
  FRHITransientResourceHeapAllocator *this;
  FD3D12TransientHeap *pFVar1;
  FRHIBufferCreateDesc *pFVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  FRHITransientHeapAllocation *pFVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  code *pcVar8;
  bool bVar9;
  FRHITransientBuffer *pFVar10;
  undefined1 auStackY_118 [32];
  <lambda_1> <Stack_e8;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  this = *(FRHITransientResourceHeapAllocator **)param_1;
  pFVar1 = (FD3D12TransientHeap *)param_2->Heap;
  pFVar2 = *(FRHIBufferCreateDesc **)((longlong)param_1 + 0x10);
  uVar3 = **(ulong64 **)((longlong)param_1 + 0x20);
  uVar4 = param_2->Hash;
  if (this[1]._padding_ == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentAdapter != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x41,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pFVar10 = (FRHITransientBuffer *)(*pcVar8)();
      return pFVar10;
    }
  }
  <Stack_e8.Adapter = (FD3D12Adapter *)this[1]._padding_;
  pFVar5 = param_2->Allocation;
  <Stack_e8.Allocation.Heap = pFVar5->Heap;
  <Stack_e8.Allocation.Size = pFVar5->Size;
  <Stack_e8.Allocation.Offset = pFVar5->Offset;
  <Stack_e8.Allocation.AlignmentPad = pFVar5->AlignmentPad;
  <Stack_e8.Allocation._28_4_ = *(undefined4 *)&pFVar5->field_0x1c;
  puVar6 = *(undefined8 **)((longlong)param_1 + 8);
  <Stack_e8.Desc._0_8_ = *puVar6;
  <Stack_e8.Desc.Alignment = puVar6[1];
  <Stack_e8.Desc.Width = puVar6[2];
  <Stack_e8.Desc._24_8_ = puVar6[3];
  <Stack_e8.Desc._32_8_ = puVar6[4];
  <Stack_e8.Desc._40_8_ = puVar6[5];
  <Stack_e8.Desc._48_8_ = puVar6[6];
  plVar7 = *(longlong **)((longlong)param_1 + 0x10);
  <Stack_e8.CreateDesc._padding_ = *plVar7;
  <Stack_e8.CreateDesc._padding_ = plVar7[1];
  <Stack_e8.CreateDesc.DebugName = (wchar_t *)plVar7[2];
  <Stack_e8.CreateDesc.InitialData = (FResourceArrayUploadInterface *)plVar7[3];
  <Stack_e8.CreateDesc._32_8_ = plVar7[4];
  <Stack_e8.CreateDesc.ClassName = *(FName *)(plVar7 + 5);
  <Stack_e8.CreateDesc.OwnerName = *(FName *)(plVar7 + 6);
  <Stack_e8.InDebugName = (wchar_t *)**(undefined8 **)((longlong)param_1 + 0x18);
  <Stack_e8.Heap = pFVar1;
  pFVar10 = FRHITransientResourceHeapAllocator::
            CreateTransientResource<FRHITransientBuffer,__FD3D12TransientResourceHeapAllocator::CreateBuffer_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>,FRHIBufferCreateDesc>
                      (this,&<Stack_e8,uVar4,uVar3,pFVar2);
  return pFVar10;
}

// Call @ 145a9cd10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FRHITransientTexture * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FD3D12TransientResourceHeapAllocator::CreateTexture'::__l2::<lambda_1>,FRHITransientTexture_*,FRHITransientHeap::FResourceInitializer_const_&>
::Call(void *param_1,FResourceInitializer *param_2)

{
  FRHITransientResourceHeapAllocator *this;
  FRHITextureDesc *pFVar1;
  undefined8 *puVar2;
  FD3D12TransientHeap *pFVar3;
  ulong64 uVar4;
  ulong64 uVar5;
  undefined8 *puVar6;
  FRHITransientHeapAllocation *pFVar7;
  longlong *plVar8;
  code *pcVar9;
  bool bVar10;
  FRHITransientTexture *pFVar11;
  undefined1 auStackY_158 [32];
  <lambda_1> <Stack_118;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  this = *(FRHITransientResourceHeapAllocator **)param_1;
  pFVar1 = *(FRHITextureDesc **)((longlong)param_1 + 0x18);
  puVar2 = *(undefined8 **)((longlong)param_1 + 8);
  pFVar3 = (FD3D12TransientHeap *)param_2->Heap;
  uVar4 = **(ulong64 **)((longlong)param_1 + 0x28);
  uVar5 = param_2->Hash;
  if (this[1]._padding_ == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("ParentAdapter != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                        ,0x41,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      pFVar11 = (FRHITransientTexture *)(*pcVar9)();
      return pFVar11;
    }
  }
  <Stack_118.Adapter = (FD3D12Adapter *)this[1]._padding_;
  puVar6 = *(undefined8 **)((longlong)param_1 + 0x20);
  <Stack_118.DynamicRHI = (FD3D12DynamicRHI *)*puVar2;
  pFVar7 = param_2->Allocation;
  <Stack_118.Allocation.Heap = pFVar7->Heap;
  <Stack_118.Allocation.Size = pFVar7->Size;
  <Stack_118.Allocation.Offset = pFVar7->Offset;
  <Stack_118.Allocation.AlignmentPad = pFVar7->AlignmentPad;
  <Stack_118.Allocation._28_4_ = *(undefined4 *)&pFVar7->field_0x1c;
  plVar8 = *(longlong **)((longlong)param_1 + 0x10);
  <Stack_118.Desc._padding_ = *plVar8;
  <Stack_118.Desc._padding_ = plVar8[1];
  <Stack_118.Desc._padding_ = plVar8[2];
  <Stack_118.Desc._padding_ = plVar8[3];
  <Stack_118.Desc._padding_ = plVar8[4];
  <Stack_118.Desc._padding_ = plVar8[5];
  <Stack_118.Desc._padding_ = plVar8[6];
  <Stack_118.Desc._56_8_ = plVar8[7];
  <Stack_118.Heap = pFVar3;
  FRHITextureDesc::FRHITextureDesc
            (&<Stack_118.InCreateInfo,*(FRHITextureDesc **)((longlong)param_1 + 0x18));
  <Stack_118.InDebugName = (wchar_t *)*puVar6;
  pFVar11 = FRHITransientResourceHeapAllocator::
            CreateTransientResource<FRHITransientTexture,__FD3D12TransientResourceHeapAllocator::CreateTexture_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>,FRHITextureDesc>
                      (this,&<Stack_118,uVar5,uVar4,pFVar1);
  if (<Stack_118.InCreateInfo.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)<Stack_118.InCreateInfo.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  return pFVar11;
}

// Call @ 145a9cd20

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FD3D12DynamicRHI::OutputGPUCrashReport'::__l29::<lambda_1>,void,FD3D12Queue_&>::
Call(void *param_1,FD3D12Queue *param_2)

{
  ED3D12QueueType EVar1;
  int iVar2;
  FD3D12DiagnosticBuffer *this;
  code *pcVar3;
  bool bVar4;
  wchar_t *pwVar5;
  FString *pFVar6;
  int iVar7;
  FString FStack_18;
  
  this = (param_2->DiagnosticBuffer).Ptr;
  if (this == (FD3D12DiagnosticBuffer *)0x0) {
    return;
  }
  EVar1 = param_2->QueueType;
  if (EVar1 != Direct) {
    if (EVar1 == Copy) {
      pwVar5 = L"Copy";
      goto LAB_145a9857f;
    }
    if (EVar1 == Async) {
      pwVar5 = L"Compute";
      goto LAB_145a9857f;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Queue.h"
                       ,0x23,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pwVar5 = L"3D";
LAB_145a9857f:
  pFVar6 = FRHIDiagnosticBuffer::GetShaderDiagnosticMessages
                     ((FRHIDiagnosticBuffer *)this,&FStack_18,*(uint *)&param_2->Device->field_0x8,
                      param_2->QueueIndex,pwVar5);
  iVar2 = (pFVar6->Data).ArrayNum;
  iVar7 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar7 = 0;
  }
  ::FString::AppendChars
            (*(FString **)param_1,(wchar_t *)(pFVar6->Data).AllocatorInstance.Data,iVar7);
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
  return;
}

// Call @ 145a9cd30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FD3D12PipelineStateCache::RebuildFromDiskCache'::__l61::<lambda_1>,void,FD3D12PipelineState_*_*,FD3D12LowLevelGraphicsPipelineStateDesc_const_&>
::Call(void *param_1,FD3D12PipelineState ***param_2,FD3D12LowLevelGraphicsPipelineStateDesc *param_3
      )

{
  `FD3D12PipelineStateCache::RebuildFromDiskCache'::__l61::<lambda_1>::operator()
            (param_1,*param_2,param_3);
  return;
}

// Call @ 145a9cd40

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FD3D12DynamicRHI::DumpActiveBreadcrumbs'::__l12::<lambda_1>,void,FD3D12Queue_&>
::Call(void *param_1,FD3D12Queue *param_2)

{
  TSet<TTuple<FRHIBreadcrumbState::FQueueID,TArray<FRHIBreadcrumbRange,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRHIBreadcrumbState::FQueueID,TArray<FRHIBreadcrumbRange,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *this;
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  TKeyInitializer<FRHIBreadcrumbState::FQueueID_&&> TStackX_10;
  uint uStackX_18;
  char cStackX_1c;
  uint *puStackX_20;
  
  if ((param_2->DiagnosticBuffer).Ptr != (FD3D12DiagnosticBuffer *)0x0) {
    uStackX_18 = *(uint *)&param_2->Device->field_0x8;
    uVar6 = (ulonglong)uStackX_18;
    if (param_2->QueueType == Direct) {
      cVar3 = '\x01';
    }
    else {
      if (param_2->QueueType != Async) {
        return;
      }
      cVar3 = '\x02';
    }
    puStackX_20 = &uStackX_18;
    this = *(TSet<TTuple<FRHIBreadcrumbState::FQueueID,TArray<FRHIBreadcrumbRange,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRHIBreadcrumbState::FQueueID,TArray<FRHIBreadcrumbRange,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
             **)param_1;
    cStackX_1c = cVar3;
    TSet<TTuple<FRHIBreadcrumbState::FQueueID,TArray<FRHIBreadcrumbRange,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRHIBreadcrumbState::FQueueID,TArray<FRHIBreadcrumbRange,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<FRHIBreadcrumbState::FQueueID_&&>_>
              (this,&TStackX_10,(bool *)&puStackX_20);
    lVar5 = *(longlong *)&this->Elements;
    for (puVar1 = *(undefined8 **)(param_2->PendingInterrupt).Tail; puVar1 != (undefined8 *)0x0;
        puVar1 = (undefined8 *)*puVar1) {
      if (((FRHIBreadcrumbRange *)(puVar1[1] + 0x300))->First != (FRHIBreadcrumbNode *)0x0) {
        TArray<FRHIBreadcrumbRange,TSizedDefaultAllocator<32>_>::
        AddUniqueImpl<FRHIBreadcrumbRange_const_&>
                  ((TArray<FRHIBreadcrumbRange,TSizedDefaultAllocator<32>_> *)
                   ((longlong)(int)TStackX_10.Key * 0x20 + lVar5 + 8),
                   (FRHIBreadcrumbRange *)(puVar1[1] + 0x300));
      }
    }
    lVar5 = uVar6 * 0x10;
    uVar4 = *(undefined4 *)(((param_2->DiagnosticBuffer).Ptr)->_padding_ + 0x604);
    if ((cVar3 == '\x01') || (cVar3 != '\x02')) {
      *(undefined4 *)(*(longlong *)((longlong)param_1 + 8) + 4 + lVar5) = uVar4;
      uVar4 = *(undefined4 *)(((param_2->DiagnosticBuffer).Ptr)->_padding_ + 0x600);
      lVar5 = *(longlong *)((longlong)param_1 + 8) + lVar5;
      if ((cVar3 == '\x01') || (cVar3 != '\x02')) {
        lVar2 = 0;
      }
      else {
        lVar2 = 8;
      }
    }
    else {
      *(undefined4 *)(*(longlong *)((longlong)param_1 + 8) + 0xc + lVar5) = uVar4;
      lVar2 = 8;
      uVar4 = *(undefined4 *)(((param_2->DiagnosticBuffer).Ptr)->_padding_ + 0x600);
      lVar5 = *(longlong *)((longlong)param_1 + 8) + lVar5;
    }
    *(undefined4 *)(lVar2 + lVar5) = uVar4;
  }
  return;
}

// Call @ 145a9cd50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FD3D12PipelineStateCache::RebuildFromDiskCache'::__l120::<lambda_2>,void,FD3D12PipelineState_*,FD3D12ComputePipelineStateDesc_const_&>
::Call(void *param_1,FD3D12PipelineState **param_2,FD3D12ComputePipelineStateDesc *param_3)

{
  ComputePipelineCreationArgs local_78;
  
  local_78.Args.Desc.pRootSignature = param_3->pRootSignature;
  local_78.Args.Desc.Desc._0_8_ = *(undefined8 *)&param_3->Desc;
  local_78.Args.Desc.Desc._8_8_ = *(undefined8 *)&(param_3->Desc).field_0x8;
  local_78.Args.Desc.Desc._16_8_ = *(undefined8 *)&(param_3->Desc).field_0x10;
  local_78.Args.Desc.Desc._24_8_ = *(undefined8 *)&(param_3->Desc).field_0x18;
  local_78.Args.Desc.Desc._32_8_ = *(undefined8 *)&(param_3->Desc).field_0x20;
  local_78.Args.Library = *(ID3D12PipelineLibrary **)(*(longlong *)param_1 + 0x200);
  local_78.Args.Desc.Desc._40_8_ = *(undefined8 *)&(param_3->Desc).field_0x28;
  local_78.Args.Desc.Desc._48_8_ = *(undefined8 *)&(param_3->Desc).field_0x30;
  local_78.Args.Desc.CSHash.Hash[0] = (param_3->CSHash).Hash[0];
  local_78.Args.Desc.CSHash.Hash[1] = (param_3->CSHash).Hash[1];
  local_78.Args.Desc.CombinedHash = param_3->CombinedHash;
  local_78.Args.Desc.Extensions = param_3->Extensions;
  FD3D12PipelineState::Create(*param_2,&local_78);
  return;
}

