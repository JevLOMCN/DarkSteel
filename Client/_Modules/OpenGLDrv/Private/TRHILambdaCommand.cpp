// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 37

// ExecuteAndDestruct @ 145bfdc30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListBase,`FOpenGLShaderResourceView::FOpenGLShaderResourceView'::__l2::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x18),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    `FOpenGLShaderResourceView::FOpenGLShaderResourceView'::__l2::<lambda_1>::operator()
              ((void *)((longlong)this + 0x10),param_1);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  `FOpenGLShaderResourceView::FOpenGLShaderResourceView'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),param_1);
  return;
}

// ExecuteAndDestruct @ 145bfdcc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListBase,`FOpenGLUnorderedAccessView::FOpenGLUnorderedAccessView'::__l2::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x18),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    `FOpenGLUnorderedAccessView::FOpenGLUnorderedAccessView'::__l2::<lambda_1>::operator()
              ((void *)((longlong)this + 0x10),param_1);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  `FOpenGLUnorderedAccessView::FOpenGLUnorderedAccessView'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),param_1);
  return;
}

// ExecuteAndDestruct @ 145bfdd50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListBase,``CreateWritableTextureInitializer'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  bool bVar1;
  
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x28),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
  }
  ``CreateWritableTextureInitializer'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),param_1);
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  if (*(FRHIResource **)((longlong)this + 0x10) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x10));
  }
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ExecuteAndDestruct @ 145bfddf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListBase,`FOpenGLTexture::Initialize'::__l2::<lambda_1>_>::
ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x18),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    FOpenGLDynamicRHI::InitializeGLTexture
              (FOpenGLDynamicRHI::Singleton,*(FOpenGLTexture **)((longlong)this + 0x10),(void *)0x0,
               0);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  FOpenGLDynamicRHI::InitializeGLTexture
            (FOpenGLDynamicRHI::Singleton,*(FOpenGLTexture **)((longlong)this + 0x10),(void *)0x0,0)
  ;
  return;
}

// ExecuteAndDestruct @ 145bfde80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListBase,`FOpenGLDynamicRHI::RHIBindDebugLabelName'::__l2::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  bool bVar1;
  FOpenGLTexture *pFVar2;
  char *pcVar3;
  
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x28),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
  }
  if (*(int *)((longlong)this + 0x20) == 0) {
    pcVar3 = "";
  }
  else {
    pcVar3 = *(char **)((longlong)this + 0x18);
  }
  if (*(longlong **)((longlong)this + 0x10) == (longlong *)0x0) {
    pFVar2 = (FOpenGLTexture *)0x0;
  }
  else {
    pFVar2 = (FOpenGLTexture *)(**(code **)(**(longlong **)((longlong)this + 0x10) + 0x48))();
  }
  SetOpenGLResourceName(pFVar2,pcVar3);
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ExecuteAndDestruct @ 145bfdf30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListBase,`FOpenGLDynamicRHI::RHIReplaceResources'::__l2::<lambda_1>_>::
ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  bool bVar1;
  
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x20),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
  }
  `FOpenGLDynamicRHI::RHIReplaceResources'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),param_1);
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ExecuteAndDestruct @ 145bfdfc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListBase,`FOpenGLDynamicRHI::RHIUpdateTexture2D'::__l2::<lambda_1>_>::
ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x50),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    `FOpenGLDynamicRHI::RHIUpdateTexture2D'::__l2::<lambda_1>::operator()
              ((void *)((longlong)this + 0x10),param_1);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  `FOpenGLDynamicRHI::RHIUpdateTexture2D'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),param_1);
  return;
}

// ExecuteAndDestruct @ 145bfe050

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListBase,`FOpenGLDynamicRHI::RHIUpdateTexture3D'::__l2::<lambda_1>_>::
ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x60),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    `FOpenGLDynamicRHI::RHIUpdateTexture3D'::__l2::<lambda_1>::operator()
              ((void *)((longlong)this + 0x10),param_1);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  `FOpenGLDynamicRHI::RHIUpdateTexture3D'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),param_1);
  return;
}

// ExecuteAndDestruct @ 145bfe0e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListBase,`FOpenGLGPUFence::WriteGPUFence_TopOfPipe'::__l2::<lambda_1>_>
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
              (*(wchar_t **)((longlong)this + 0x18),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
  }
  `FOpenGLGPUFence::WriteGPUFence_TopOfPipe'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),param_1);
  puVar3 = *(undefined8 **)((longlong)this + 0x10);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ExecuteAndDestruct @ 145bfe190

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListBase,`FOpenGLDynamicRHI::RHIUpdateUniformBuffer'::__l16::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x38),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    `FOpenGLDynamicRHI::RHIUpdateUniformBuffer'::__l16::<lambda_1>::operator()
              ((void *)((longlong)this + 0x10),param_1);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  `FOpenGLDynamicRHI::RHIUpdateUniformBuffer'::__l16::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),param_1);
  return;
}

// ExecuteAndDestruct @ 145bfe220

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListBase,`TOpenGLBuffer<FOpenGLBaseBuffer>::TOpenGLBuffer<FOpenGLBaseBuffer>'::__l11::<lambda_2>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x20),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    `TOpenGLBuffer<FOpenGLBaseBuffer>::TOpenGLBuffer<FOpenGLBaseBuffer>'::__l2::<lambda_1>::
    operator()((void *)((longlong)this + 0x10));
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  `TOpenGLBuffer<FOpenGLBaseBuffer>::TOpenGLBuffer<FOpenGLBaseBuffer>'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10));
  return;
}

// ExecuteAndDestruct @ 145bfe290

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListBase,`TOpenGLBuffer<FOpenGLBasePixelBuffer>::TOpenGLBuffer<FOpenGLBasePixelBuffer>'::__l11::<lambda_2>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x20),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    `TOpenGLBuffer<FOpenGLBasePixelBuffer>::TOpenGLBuffer<FOpenGLBasePixelBuffer>'::__l2::<lambda_1>
    ::operator()((void *)((longlong)this + 0x10));
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  `TOpenGLBuffer<FOpenGLBasePixelBuffer>::TOpenGLBuffer<FOpenGLBasePixelBuffer>'::__l2::<lambda_1>::
  operator()((void *)((longlong)this + 0x10));
  return;
}

// ExecuteAndDestruct @ 145bfe300

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListImmediate,`FOpenGLTexture::FOpenGLTexture'::__l2::<lambda_1>_>::
ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x20),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    FOpenGLTexture::AliasResources
              (*(FOpenGLTexture **)((longlong)this + 0x10),
               *(FOpenGLTexture **)((longlong)this + 0x18));
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  FOpenGLTexture::AliasResources
            (*(FOpenGLTexture **)((longlong)this + 0x10),*(FOpenGLTexture **)((longlong)this + 0x18)
            );
  return;
}

// ExecuteAndDestruct @ 145bfe380

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListImmediate,``FOpenGLViewport::FOpenGLViewport'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x18),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    ``FOpenGLViewport::FOpenGLViewport'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
              ((void *)((longlong)this + 0x10),(FRHICommandListImmediate *)param_1);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  ``FOpenGLViewport::FOpenGLViewport'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),(FRHICommandListImmediate *)param_1);
  return;
}

// ExecuteAndDestruct @ 145bfe410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListImmediate,``FOpenGLViewport::Resize'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x28),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    ``FOpenGLViewport::Resize'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
              ((void *)((longlong)this + 0x10),(FRHICommandListImmediate *)param_1);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  ``FOpenGLViewport::Resize'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),(FRHICommandListImmediate *)param_1);
  return;
}

// ExecuteAndDestruct @ 145bfe4a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListImmediate,`FOpenGLRenderQuery_RHI::GetResult'::__l2::<lambda_1>_>::
ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x18),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    FOpenGLRenderQuery::CacheResult
              ((FOpenGLRenderQuery *)(*(longlong *)((longlong)this + 0x10) + 0x18),true);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  FOpenGLRenderQuery::CacheResult
            ((FOpenGLRenderQuery *)(*(longlong *)((longlong)this + 0x10) + 0x18),true);
  return;
}

// ExecuteAndDestruct @ 145bfe520

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListImmediate,`FOpenGLStagingBuffer::Initialize'::__l2::<lambda_1>_>::
ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x18),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    `FOpenGLStagingBuffer::Initialize'::__l2::<lambda_1>::operator()
              ((void *)((longlong)this + 0x10),(FRHICommandListImmediate *)param_1);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  `FOpenGLStagingBuffer::Initialize'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),(FRHICommandListImmediate *)param_1);
  return;
}

// ExecuteAndDestruct @ 145bfe5b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListImmediate,`FOpenGLDynamicRHI::RHIAsyncReallocateTexture2D'::__l2::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x30),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    `FOpenGLDynamicRHI::RHIAsyncReallocateTexture2D'::__l2::<lambda_1>::operator()
              ((void *)((longlong)this + 0x10),(FRHICommandListImmediate *)param_1);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  `FOpenGLDynamicRHI::RHIAsyncReallocateTexture2D'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),(FRHICommandListImmediate *)param_1);
  return;
}

// ExecuteAndDestruct @ 145bfe640

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListImmediate,`FOpenGLDynamicRHI::RHIBlockUntilGPUIdle'::__l2::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x18),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    (*glFlush)();
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000145bfe690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*glFlush)();
  return;
}

// ExecuteAndDestruct @ 145bfe6a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListImmediate,`FOpenGLDynamicRHI::RHICreateSamplerState'::__l2::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x18),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    `FOpenGLDynamicRHI::RHICreateSamplerState'::__l2::<lambda_1>::operator()
              ((void *)((longlong)this + 0x10),(FRHICommandListImmediate *)param_1);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  `FOpenGLDynamicRHI::RHICreateSamplerState'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),(FRHICommandListImmediate *)param_1);
  return;
}

// ExecuteAndDestruct @ 145bfe730

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListImmediate,`FOpenGLDynamicRHI::RHIMapStagingSurface_RenderThread'::__l2::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x30),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    `FOpenGLDynamicRHI::RHIMapStagingSurface_RenderThread'::__l2::<lambda_1>::operator()
              ((void *)((longlong)this + 0x10),(FRHICommandListImmediate *)param_1);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  `FOpenGLDynamicRHI::RHIMapStagingSurface_RenderThread'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),(FRHICommandListImmediate *)param_1);
  return;
}

// ExecuteAndDestruct @ 145bfe7c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListImmediate,`FOpenGLDynamicRHI::RHIRead3DSurfaceFloatData'::__l2::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x38),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    `FOpenGLDynamicRHI::RHIRead3DSurfaceFloatData'::__l2::<lambda_1>::operator()
              ((void *)((longlong)this + 0x10),(FRHICommandListImmediate *)param_1);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  `FOpenGLDynamicRHI::RHIRead3DSurfaceFloatData'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),(FRHICommandListImmediate *)param_1);
  return;
}

// ExecuteAndDestruct @ 145bfe850

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListImmediate,`FOpenGLDynamicRHI::RHIReadSurfaceData'::__l2::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x40),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    `FOpenGLDynamicRHI::RHIReadSurfaceData'::__l2::<lambda_1>::operator()
              ((void *)((longlong)this + 0x10),(FRHICommandListImmediate *)param_1);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  `FOpenGLDynamicRHI::RHIReadSurfaceData'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),(FRHICommandListImmediate *)param_1);
  return;
}

// ExecuteAndDestruct @ 145bfe8e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListImmediate,`FOpenGLDynamicRHI::RHIReadSurfaceData'::__l2::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x38),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    `FOpenGLDynamicRHI::RHIReadSurfaceData'::__l2::<lambda_1>::operator()
              ((void *)((longlong)this + 0x10),(FRHICommandListImmediate *)param_1);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  `FOpenGLDynamicRHI::RHIReadSurfaceData'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),(FRHICommandListImmediate *)param_1);
  return;
}

// ExecuteAndDestruct @ 145bfe970

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListImmediate,`FOpenGLDynamicRHI::RHIReadSurfaceFloatData'::__l2::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x48),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    `FOpenGLDynamicRHI::RHIReadSurfaceFloatData'::__l2::<lambda_1>::operator()
              ((void *)((longlong)this + 0x10),(FRHICommandListImmediate *)param_1);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  `FOpenGLDynamicRHI::RHIReadSurfaceFloatData'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),(FRHICommandListImmediate *)param_1);
  return;
}

// ExecuteAndDestruct @ 145bfea00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListImmediate,`FOpenGLDynamicRHI::RHIUnmapStagingSurface_RenderThread'::__l2::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x18),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    `FOpenGLDynamicRHI::RHIUnmapStagingSurface_RenderThread'::__l2::<lambda_1>::operator()
              ((void *)((longlong)this + 0x10),(FRHICommandListImmediate *)param_1);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  `FOpenGLDynamicRHI::RHIUnmapStagingSurface_RenderThread'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),(FRHICommandListImmediate *)param_1);
  return;
}

// ExecuteAndDestruct @ 145bfea90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListImmediate,`CreateUniformBufferView'::__l5::<lambda_1>_>::
ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x20),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    `CreateUniformBufferView'::__l5::<lambda_1>::operator()
              ((void *)((longlong)this + 0x10),(FRHICommandListImmediate *)param_1);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  `CreateUniformBufferView'::__l5::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),(FRHICommandListImmediate *)param_1);
  return;
}

// ExecuteAndDestruct @ 145bfeb20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListImmediate,`FOpenGLStagingBuffer::Lock'::__l5::<lambda_1>_>::
ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x30),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    `FOpenGLStagingBuffer::Lock'::__l5::<lambda_1>::operator()
              ((void *)((longlong)this + 0x10),(FRHICommandListImmediate *)param_1);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  `FOpenGLStagingBuffer::Lock'::__l5::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),(FRHICommandListImmediate *)param_1);
  return;
}

// ExecuteAndDestruct @ 145bfebb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListImmediate,`FOpenGLStagingBuffer::Unlock'::__l5::<lambda_1>_>::
ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  bool bVar1;
  
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x18),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
  }
  (*glUnmapBuffer)(0x8f37);
  *(undefined8 *)(*(longlong *)((longlong)this + 0x10) + 0x28) = 0;
  (*glBindBuffer)(0x8f37,0);
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ExecuteAndDestruct @ 145bfec40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListImmediate,`FOpenGLGPUFence::Wait'::__l5::<lambda_1>_>::
ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

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
              (*(wchar_t **)((longlong)this + 0x18),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
  }
  if (*(char *)(*(longlong *)((longlong)this + 0x10) + 0xd0) == '\0') {
    FOpenGLGPUFence::PollFencesUntil(*(FBaseGraphTask **)((longlong)this + 0x10));
  }
  puVar3 = *(undefined8 **)((longlong)this + 0x10);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ExecuteAndDestruct @ 145bfecf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListImmediate,`CreateUniformBuffer'::__l17::<lambda_1>_>::
ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x38),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    `CreateUniformBuffer'::__l17::<lambda_1>::operator()
              ((void *)((longlong)this + 0x10),(FRHICommandListImmediate *)param_1);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  `CreateUniformBuffer'::__l17::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),(FRHICommandListImmediate *)param_1);
  return;
}

// ExecuteAndDestruct @ 145bfed80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListImmediate,`FOpenGLDynamicRHI::RHILockTexture'::__l19::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  bool bVar1;
  void *pvVar2;
  
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x30),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
  }
  pvVar2 = FOpenGLTexture::Lock
                     (*(FOpenGLTexture **)((longlong)this + 0x20),*(uint *)((longlong)this + 0x28),
                      *(uint *)((longlong)this + 0x2c),RLM_ReadOnly,
                      (uint *)(*(longlong *)((longlong)this + 0x18) + 0x10));
  **(undefined8 **)((longlong)this + 0x18) = pvVar2;
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ExecuteAndDestruct @ 145bfee10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListImmediate,`FOpenGLDynamicRHI::RHICreateUniformBuffer'::__l49::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x18),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    `FOpenGLDynamicRHI::RHICreateUniformBuffer'::__l49::<lambda_1>::operator()
              ((void *)((longlong)this + 0x10),(FRHICommandListImmediate *)param_1);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  `FOpenGLDynamicRHI::RHICreateUniformBuffer'::__l49::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),(FRHICommandListImmediate *)param_1);
  return;
}

// ExecuteAndDestruct @ 145bfeea0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListImmediate,`CopyDataToUniformBuffer'::__l11::<lambda_1>_>::
ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x20),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    `CopyDataToUniformBuffer'::__l11::<lambda_1>::operator()
              ((void *)((longlong)this + 0x10),(FRHICommandListImmediate *)param_1);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  `CopyDataToUniformBuffer'::__l11::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),(FRHICommandListImmediate *)param_1);
  return;
}

// ExecuteAndDestruct @ 145bfef30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListImmediate,`FOpenGLDynamicRHI::RHIUnlockTexture'::__l12::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  bool bVar1;
  
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x28),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
  }
  FOpenGLTexture::Unlock
            (*(FOpenGLTexture **)((longlong)this + 0x18),*(uint *)((longlong)this + 0x20),
             *(uint *)((longlong)this + 0x24));
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ExecuteAndDestruct @ 145bfefb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListImmediate,`CreateUniformBuffer'::__l19::<lambda_2>_>::
ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  bool bVar3;
  
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x38),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
  }
  `CreateUniformBuffer'::__l19::<lambda_2>::operator()
            ((void *)((longlong)this + 0x10),(FRHICommandListImmediate *)param_1);
  puVar2 = *(undefined8 **)((longlong)this + 0x28);
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ExecuteAndDestruct @ 145bff050

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListImmediate,`FOpenGLDynamicRHI::RHIUnlockTexture'::__l14::<lambda_2>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x50),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    `FOpenGLDynamicRHI::RHIUnlockTexture'::__l14::<lambda_2>::operator()
              ((void *)((longlong)this + 0x10),(FRHICommandListImmediate *)param_1);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  `FOpenGLDynamicRHI::RHIUnlockTexture'::__l14::<lambda_2>::operator()
            ((void *)((longlong)this + 0x10),(FRHICommandListImmediate *)param_1);
  return;
}

