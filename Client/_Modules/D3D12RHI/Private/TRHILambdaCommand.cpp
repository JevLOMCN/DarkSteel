// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 25

// ExecuteAndDestruct @ 1459bf560

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListBase,``CreateBufferInitializerForWriting'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x98),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    ``CreateBufferInitializerForWriting'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::
    operator()((void *)((longlong)this + 0x10),param_1);
    FD3D12ResourceLocation::~FD3D12ResourceLocation
              ((FD3D12ResourceLocation *)((longlong)this + 0x20));
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  ``CreateBufferInitializerForWriting'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),param_1);
  FD3D12ResourceLocation::~FD3D12ResourceLocation((FD3D12ResourceLocation *)((longlong)this + 0x20))
  ;
  return;
}

// ExecuteAndDestruct @ 1459bf600

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListBase,`FD3D12DynamicRHI::UnlockBuffer'::__l18::<lambda_1>_>::
ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0xb8),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    `FD3D12DynamicRHI::UnlockBuffer'::__l18::<lambda_1>::operator()
              ((void *)((longlong)this + 0x10),param_1);
    FD3D12ResourceLocation::~FD3D12ResourceLocation
              ((FD3D12ResourceLocation *)((longlong)this + 0x20));
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  `FD3D12DynamicRHI::UnlockBuffer'::__l18::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),param_1);
  FD3D12ResourceLocation::~FD3D12ResourceLocation((FD3D12ResourceLocation *)((longlong)this + 0x20))
  ;
  return;
}

// ExecuteAndDestruct @ 1459bf6a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListBase,`FD3D12DynamicRHI::LockBuffer'::__l51::<lambda_2>_>::
ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x38),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    `FD3D12DynamicRHI::LockBuffer'::__l51::<lambda_2>::operator()
              ((void *)((longlong)this + 0x10),param_1);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  `FD3D12DynamicRHI::LockBuffer'::__l51::<lambda_2>::operator()
            ((void *)((longlong)this + 0x10),param_1);
  return;
}

// ExecuteAndDestruct @ 145a15100

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListBase,`FD3D12DynamicRHI::RHIWriteGPUFence_TopOfPipe'::__l2::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  bool bVar1;
  TRefCountPtr<FD3D12SyncPoint> *pTVar2;
  
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x68),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
  }
  `FD3D12DynamicRHI::RHIWriteGPUFence_TopOfPipe'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),param_1);
  pTVar2 = *(TRefCountPtr<FD3D12SyncPoint> **)((longlong)this + 0x58);
  if (*(TRefCountPtr<FD3D12SyncPoint> **)((longlong)this + 0x58) ==
      (TRefCountPtr<FD3D12SyncPoint> *)0x0) {
    pTVar2 = (TRefCountPtr<FD3D12SyncPoint> *)((longlong)this + 0x18);
  }
  DestructItems<TRefCountPtr<FD3D12SyncPoint>,int>(pTVar2,*(int *)((longlong)this + 0x60));
  if (*(void **)((longlong)this + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x58));
  }
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ExecuteAndDestruct @ 145a151b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListBase,`FD3D12DynamicRHI::RHIEndRenderQueryBatch_TopOfPipe'::__l6::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  bool bVar4;
  
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x28),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
  }
  `FD3D12DynamicRHI::RHIEndRenderQueryBatch_TopOfPipe'::__l6::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),param_1);
  puVar3 = *(undefined8 **)((longlong)this + 0x18);
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ExecuteAndDestruct @ 145a15260

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListBase,`FD3D12DynamicRHI::RHIBeginRenderQueryBatch_TopOfPipe'::__l18::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x18),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    `FD3D12DynamicRHI::RHIBeginRenderQueryBatch_TopOfPipe'::__l18::<lambda_1>::operator()
              ((void *)((longlong)this + 0x10),param_1);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  `FD3D12DynamicRHI::RHIBeginRenderQueryBatch_TopOfPipe'::__l18::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),param_1);
  return;
}

// ExecuteAndDestruct @ 145a152f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListBase,`FD3D12RayTracingGeometry::FD3D12RayTracingGeometry'::__l116::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x98),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    `FD3D12RayTracingGeometry::FD3D12RayTracingGeometry'::__l116::<lambda_1>::operator()
              ((void *)((longlong)this + 0x10),param_1);
    FD3D12ResourceLocation::~FD3D12ResourceLocation
              ((FD3D12ResourceLocation *)((longlong)this + 0x18));
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  `FD3D12RayTracingGeometry::FD3D12RayTracingGeometry'::__l116::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),param_1);
  FD3D12ResourceLocation::~FD3D12ResourceLocation((FD3D12ResourceLocation *)((longlong)this + 0x18))
  ;
  return;
}

// ExecuteAndDestruct @ 145a15390

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListBase,`FD3D12DynamicRHI::RHIEndRenderQuery_TopOfPipe'::__l11::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  FD3D12CommandContext *pFVar4;
  
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x20),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
  }
  pFVar4 = FD3D12CommandContext::Get(param_1,*(uint *)((longlong)this + 0x18));
  iVar3 = *(int *)&pFVar4->field_0x30;
  if (iVar3 == *(int *)&pFVar4->field_0x34) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&pFVar4->field_0x28,(int *)&pFVar4->field_0x34);
  }
  *(int *)&pFVar4->field_0x30 = iVar3 + 1;
  puVar1 = (undefined8 *)(*(longlong *)&pFVar4->field_0x28 + (longlong)iVar3 * 8);
  *puVar1 = 0;
  *puVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)((longlong)this + 0x10) = 0;
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ExecuteAndDestruct @ 145a651a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
TRHICommandList_RecursiveHazardous<FD3D12CommandContext>::
TRHILambdaCommand<``FD3D12CommandContext::ResolveTextureUsingShader<FResolveDepthPS>'::__l20::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>'::__l2::<lambda_2>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  IRHICommandContext *pIVar1;
  longlong lVar2;
  FD3D12StateCache *this_00;
  
  pIVar1 = FRHICommandListBase::GetContext(param_1);
  lVar2 = (**(code **)(pIVar1->_padding_ + 0x148))(pIVar1);
  this_00 = (FD3D12StateCache *)(lVar2 + 0x1f0);
  if (lVar2 == 0) {
    this_00 = (FD3D12StateCache *)0x3b0;
  }
  FD3D12StateCache::SetShaderResourceView
            (this_00,SF_Pixel,
             *(FD3D12ShaderResourceView **)(*(longlong *)((longlong)this + 0x18) + 0x240),
             *(uint *)((longlong)this + 0x10));
  return;
}

// ExecuteAndDestruct @ 145a65200

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
TRHICommandList_RecursiveHazardous<FD3D12CommandContext>::
TRHILambdaCommand<``FD3D12CommandContext::ResolveTextureUsingShader<FResolveSingleSamplePS>'::__l20::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>'::__l2::<lambda_2>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  IRHICommandContext *pIVar1;
  longlong lVar2;
  FD3D12StateCache *this_00;
  
  pIVar1 = FRHICommandListBase::GetContext(param_1);
  lVar2 = (**(code **)(pIVar1->_padding_ + 0x148))(pIVar1);
  this_00 = (FD3D12StateCache *)(lVar2 + 0x1f0);
  if (lVar2 == 0) {
    this_00 = (FD3D12StateCache *)0x3b0;
  }
  FD3D12StateCache::SetShaderResourceView
            (this_00,SF_Pixel,
             *(FD3D12ShaderResourceView **)(*(longlong *)((longlong)this + 0x18) + 0x240),
             *(uint *)((longlong)this + 0x10));
  return;
}

// ExecuteAndDestruct @ 145a65260

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListBase,`FD3D12DeferredInitView<FD3D12ShaderResourceView_RHI>::CreateViews'::__l2::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x18),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    `FD3D12DeferredInitView<FD3D12ShaderResourceView_RHI>::CreateViews'::__l2::<lambda_1>::
    operator()((void *)((longlong)this + 0x10),param_1);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  `FD3D12DeferredInitView<FD3D12ShaderResourceView_RHI>::CreateViews'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),param_1);
  return;
}

// ExecuteAndDestruct @ 145a652f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListBase,`FD3D12DynamicRHI::RHIUpdateResourceCollection'::__l2::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x30),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    `FD3D12DynamicRHI::RHIUpdateResourceCollection'::__l2::<lambda_1>::operator()
              ((void *)((longlong)this + 0x10),param_1);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  `FD3D12DynamicRHI::RHIUpdateResourceCollection'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),param_1);
  return;
}

// ExecuteAndDestruct @ 145a65380

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListBase,`FD3D12Texture::UpdateTexture2D'::__l2::<lambda_1>_>::
ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x68),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    `FD3D12Texture::UpdateTexture2D'::__l2::<lambda_1>::operator()
              ((void *)((longlong)this + 0x10),param_1);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  `FD3D12Texture::UpdateTexture2D'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),param_1);
  return;
}

// ExecuteAndDestruct @ 145a65410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListBase,`FD3D12Texture::UploadInitialData'::__l2::<lambda_1>_>::
ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x98),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    `FD3D12Texture::UploadInitialData'::__l2::<lambda_1>::operator()
              ((void *)((longlong)this + 0x10),param_1);
    FD3D12ResourceLocation::ReleaseResource((FD3D12ResourceLocation *)((longlong)this + 0x18));
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  `FD3D12Texture::UploadInitialData'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),param_1);
  FD3D12ResourceLocation::ReleaseResource((FD3D12ResourceLocation *)((longlong)this + 0x18));
  return;
}

// ExecuteAndDestruct @ 145a654b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListBase,`UE::D3D12RHI::TextureUtils::ReconcileInitialState'::__l5::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x20),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    `UE::D3D12RHI::TextureUtils::ReconcileInitialState'::__l5::<lambda_1>::operator()
              ((void *)((longlong)this + 0x10),param_1);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  `UE::D3D12RHI::TextureUtils::ReconcileInitialState'::__l5::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),param_1);
  return;
}

// ExecuteAndDestruct @ 145a65540

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListBase,`FD3D12DynamicRHI::EndUpdateTexture3D_Internal'::__l21::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x50),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    `FD3D12DynamicRHI::EndUpdateTexture3D_Internal'::__l21::<lambda_1>::operator()
              ((void *)((longlong)this + 0x10),param_1);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  `FD3D12DynamicRHI::EndUpdateTexture3D_Internal'::__l21::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),param_1);
  return;
}

// ExecuteAndDestruct @ 145a655d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListBase,`FD3D12Texture::Unlock'::__l23::<lambda_1>_>::
ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  void *pvVar1;
  bool bVar2;
  
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x28),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
  }
  `FD3D12Texture::Unlock'::__l23::<lambda_1>::operator()((void *)((longlong)this + 0x10),param_1);
  pvVar1 = *(void **)((longlong)this + 0x20);
  if (pvVar1 != (void *)0x0) {
    FD3D12ResourceLocation::ReleaseResource((FD3D12ResourceLocation *)((longlong)pvVar1 + 8));
    ::operator_delete(pvVar1,0xa0);
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ExecuteAndDestruct @ 145a65680

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListBase,`FD3D12Texture::Lock'::__l54::<lambda_1>_>::ExecuteAndDestruct
          (void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x78),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    `FD3D12Texture::Lock'::__l54::<lambda_1>::operator()((void *)((longlong)this + 0x10),param_1);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  `FD3D12Texture::Lock'::__l54::<lambda_1>::operator()((void *)((longlong)this + 0x10),param_1);
  return;
}

// ExecuteAndDestruct @ 145a65710

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListImmediate,`FD3D12DynamicRHI::AsyncReallocateTexture2D_RenderThread'::__l2::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x28),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    `FD3D12DynamicRHI::AsyncReallocateTexture2D_RenderThread'::__l2::<lambda_1>::operator()
              ((void *)((longlong)this + 0x10),param_1);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  `FD3D12DynamicRHI::AsyncReallocateTexture2D_RenderThread'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),param_1);
  return;
}

// ExecuteAndDestruct @ 145a657a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListImmediate,`FD3D12DynamicRHI::RHIRead3DSurfaceFloatData'::__l2::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x38),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    `FD3D12DynamicRHI::RHIRead3DSurfaceFloatData'::__l2::<lambda_1>::operator()
              ((void *)((longlong)this + 0x10),param_1);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  `FD3D12DynamicRHI::RHIRead3DSurfaceFloatData'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),param_1);
  return;
}

// ExecuteAndDestruct @ 145a65830

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListImmediate,`FD3D12DynamicRHI::RHIReadSurfaceFloatData'::__l2::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x38),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    `FD3D12DynamicRHI::RHIReadSurfaceFloatData'::__l2::<lambda_1>::operator()
              ((void *)((longlong)this + 0x10),param_1);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  `FD3D12DynamicRHI::RHIReadSurfaceFloatData'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),param_1);
  return;
}

// ExecuteAndDestruct @ 145a658c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListImmediate,`FD3D12DynamicRHI::GetStagingTexture'::__l7::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x38),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    `FD3D12DynamicRHI::GetStagingTexture'::__l7::<lambda_1>::operator()
              ((void *)((longlong)this + 0x10),(FRHICommandList *)param_1);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  `FD3D12DynamicRHI::GetStagingTexture'::__l7::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),(FRHICommandList *)param_1);
  return;
}

// ExecuteAndDestruct @ 145a65950

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListImmediate,`FD3D12DynamicRHI::ReadSurfaceDataMSAARaw'::__l24::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x80),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    `FD3D12DynamicRHI::ReadSurfaceDataMSAARaw'::__l24::<lambda_1>::operator()
              ((void *)((longlong)this + 0x10),param_1);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  `FD3D12DynamicRHI::ReadSurfaceDataMSAARaw'::__l24::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),param_1);
  return;
}

// ExecuteAndDestruct @ 145aa6d10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
TRHICommandList_RecursiveHazardous<FD3D12CommandContext>::
TRHILambdaCommand<`FD3D12CommandContext::ClearUAV'::__l17::<lambda_2>_>::ExecuteAndDestruct
          (void *this,FRHICommandListBase *param_1)

{
  IRHICommandContext *pIVar1;
  longlong lVar2;
  FD3D12CommandContext *pFVar3;
  
  pIVar1 = FRHICommandListBase::GetContext(param_1);
  lVar2 = (**(code **)(pIVar1->_padding_ + 0x148))();
  pFVar3 = (FD3D12CommandContext *)(lVar2 + -0x1c0);
  if (lVar2 == 0) {
    pFVar3 = (FD3D12CommandContext *)0x0;
  }
  `FD3D12CommandContext::ClearUAV'::__l17::<lambda_2>::operator()
            ((void *)((longlong)this + 0x10),pFVar3);
  return;
}

// ExecuteAndDestruct @ 145aa6d60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListBase,`FD3D12DeferredInitView<FD3D12UnorderedAccessView_RHI>::CreateViews'::__l2::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x18),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    `FD3D12DeferredInitView<FD3D12UnorderedAccessView_RHI>::CreateViews'::__l2::<lambda_1>::
    operator()((void *)((longlong)this + 0x10),param_1);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  `FD3D12DeferredInitView<FD3D12UnorderedAccessView_RHI>::CreateViews'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),param_1);
  return;
}

