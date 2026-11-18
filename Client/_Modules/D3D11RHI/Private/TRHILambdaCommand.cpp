// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D11RHI
// Functions: 17

// ExecuteAndDestruct @ 14597d290

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHICommandList_RecursiveHazardous<FD3D11DynamicRHI>::
TRHILambdaCommand<`FD3D11DynamicRHI::ResolveTextureUsingShader<FResolveDepthPS>'::__l9::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  IRHICommandContext *pIVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  
  pIVar1 = FRHICommandListBase::GetContext(param_1);
  lVar2 = (**(code **)(pIVar1->_padding_ + 0x148))(pIVar1);
  if (*(char *)((longlong)this + 0x10) != '\0') {
    puVar4 = (undefined8 *)(lVar2 + 0x148);
    if (lVar2 == 0) {
      puVar4 = (undefined8 *)&DAT_00000160;
    }
    (**(code **)(*(longlong *)*puVar4 + 0x1a8))
              ((longlong *)*puVar4,*(undefined8 *)((longlong)this + 0x18),3,0,0);
  }
  puVar3 = (undefined4 *)(lVar2 + 0x4470);
  if (lVar2 == 0) {
    puVar3 = (undefined4 *)&DAT_00004488;
  }
  *puVar3 = 0x22;
  return;
}

// ExecuteAndDestruct @ 14597d320

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHICommandList_RecursiveHazardous<FD3D11DynamicRHI>::
TRHILambdaCommand<`FD3D11DynamicRHI::ResolveTextureUsingShader<FResolveSingleSamplePS>'::__l9::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  IRHICommandContext *pIVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  
  pIVar1 = FRHICommandListBase::GetContext(param_1);
  lVar2 = (**(code **)(pIVar1->_padding_ + 0x148))(pIVar1);
  if (*(char *)((longlong)this + 0x10) != '\0') {
    puVar4 = (undefined8 *)(lVar2 + 0x148);
    if (lVar2 == 0) {
      puVar4 = (undefined8 *)&DAT_00000160;
    }
    (**(code **)(*(longlong *)*puVar4 + 0x1a8))
              ((longlong *)*puVar4,*(undefined8 *)((longlong)this + 0x18),3,0,0);
  }
  puVar3 = (undefined4 *)(lVar2 + 0x4470);
  if (lVar2 == 0) {
    puVar3 = (undefined4 *)&DAT_00004488;
  }
  *puVar3 = 0x22;
  return;
}

// ExecuteAndDestruct @ 14597d3b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHICommandList_RecursiveHazardous<FD3D11DynamicRHI>::
TRHILambdaCommand<`FD3D11DynamicRHI::ClearUAV'::__l17::<lambda_2>_>::ExecuteAndDestruct
          (void *this,FRHICommandListBase *param_1)

{
  IRHICommandContext *pIVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  pIVar1 = FRHICommandListBase::GetContext(param_1);
  lVar2 = (**(code **)(pIVar1->_padding_ + 0x148))(pIVar1);
  puVar3 = (undefined8 *)(lVar2 + 0x148);
  if (lVar2 == 0) {
    puVar3 = (undefined8 *)&DAT_00000160;
  }
                    /* WARNING: Could not recover jumptable at 0x00014597d3f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*puVar3 + 0x198))
            ((longlong *)*puVar3,*(undefined8 *)(*(longlong *)((longlong)this + 0x10) + 0x48),
             *(undefined8 *)((longlong)this + 0x18));
  return;
}

// ExecuteAndDestruct @ 14597d410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHICommandList_RecursiveHazardous<FD3D11DynamicRHI>::
TRHILambdaCommand<`FD3D11DynamicRHI::ResolveTextureUsingShader<FResolveDepthPS>'::__l18::<lambda_2>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  IRHICommandContext *pIVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  
  pIVar1 = FRHICommandListBase::GetContext(param_1);
  lVar2 = (**(code **)(pIVar1->_padding_ + 0x148))(pIVar1);
  if (*(char *)((longlong)this + 0x10) != '\0') {
    puVar3 = (undefined8 *)(lVar2 + 0x148);
    if (lVar2 == 0) {
      puVar3 = (undefined8 *)&DAT_00000160;
    }
    local_18 = 0;
    uStack_10 = 0;
    (**(code **)(*(longlong *)*puVar3 + 400))
              ((longlong *)*puVar3,*(undefined8 *)((longlong)this + 0x18),&local_18);
  }
  return;
}

// ExecuteAndDestruct @ 14597d470

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHICommandList_RecursiveHazardous<FD3D11DynamicRHI>::
TRHILambdaCommand<`FD3D11DynamicRHI::ResolveTextureUsingShader<FResolveSingleSamplePS>'::__l18::<lambda_2>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  IRHICommandContext *pIVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  
  pIVar1 = FRHICommandListBase::GetContext(param_1);
  lVar2 = (**(code **)(pIVar1->_padding_ + 0x148))(pIVar1);
  if (*(char *)((longlong)this + 0x10) != '\0') {
    puVar3 = (undefined8 *)(lVar2 + 0x148);
    if (lVar2 == 0) {
      puVar3 = (undefined8 *)&DAT_00000160;
    }
    local_18 = 0;
    uStack_10 = 0;
    (**(code **)(*(longlong *)*puVar3 + 400))
              ((longlong *)*puVar3,*(undefined8 *)((longlong)this + 0x18),&local_18);
  }
  return;
}

// ExecuteAndDestruct @ 14597d4d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHICommandList_RecursiveHazardous<FD3D11DynamicRHI>::
TRHILambdaCommand<`FD3D11DynamicRHI::ResolveTextureUsingShader<FResolveDepthPS>'::__l6::<lambda_3>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  FRHIResource *this_00;
  FRHIResource *this_01;
  IRHICommandContext *pIVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  pIVar1 = FRHICommandListBase::GetContext(param_1);
  lVar2 = (**(code **)(pIVar1->_padding_ + 0x148))(pIVar1);
  this_00 = *(FRHIResource **)((longlong)this + 0x10);
  puVar3 = (undefined8 *)(lVar2 + 0x27b8);
  if (lVar2 == 0) {
    puVar3 = (undefined8 *)&DAT_000027d0;
  }
  this_01 = (FRHIResource *)*puVar3;
  if (this_01 != this_00) {
    *puVar3 = this_00;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(this_00);
    }
    if (this_01 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_01);
      return;
    }
  }
  return;
}

// ExecuteAndDestruct @ 14597d540

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHICommandList_RecursiveHazardous<FD3D11DynamicRHI>::
TRHILambdaCommand<`FD3D11DynamicRHI::ResolveTextureUsingShader<FResolveSingleSamplePS>'::__l6::<lambda_3>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  FRHIResource *this_00;
  FRHIResource *this_01;
  IRHICommandContext *pIVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  pIVar1 = FRHICommandListBase::GetContext(param_1);
  lVar2 = (**(code **)(pIVar1->_padding_ + 0x148))(pIVar1);
  this_00 = *(FRHIResource **)((longlong)this + 0x10);
  puVar3 = (undefined8 *)(lVar2 + 0x27b8);
  if (lVar2 == 0) {
    puVar3 = (undefined8 *)&DAT_000027d0;
  }
  this_01 = (FRHIResource *)*puVar3;
  if (this_01 != this_00) {
    *puVar3 = this_00;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(this_00);
    }
    if (this_01 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_01);
      return;
    }
  }
  return;
}

// ExecuteAndDestruct @ 14597d5b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
TRHICommandList_RecursiveHazardous<FD3D11DynamicRHI>::
TRHILambdaCommand<`FD3D11DynamicRHI::ResolveTextureUsingShader<FResolveDepthPS>'::__l21::<lambda_4>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  IRHICommandContext *pIVar1;
  longlong lVar2;
  FD3D11DynamicRHI *pFVar3;
  
  pIVar1 = FRHICommandListBase::GetContext(param_1);
  lVar2 = (**(code **)(pIVar1->_padding_ + 0x148))();
  pFVar3 = (FD3D11DynamicRHI *)(lVar2 + -0x18);
  if (lVar2 == 0) {
    pFVar3 = (FD3D11DynamicRHI *)0x0;
  }
  `FD3D11DynamicRHI::ResolveTextureUsingShader<FResolveDepthPS>'::__l21::<lambda_4>::operator()
            ((void *)((longlong)this + 0x10),pFVar3);
  return;
}

// ExecuteAndDestruct @ 14597d5f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
TRHICommandList_RecursiveHazardous<FD3D11DynamicRHI>::
TRHILambdaCommand<`FD3D11DynamicRHI::ResolveTextureUsingShader<FResolveSingleSamplePS>'::__l21::<lambda_4>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  IRHICommandContext *pIVar1;
  longlong lVar2;
  FD3D11DynamicRHI *pFVar3;
  
  pIVar1 = FRHICommandListBase::GetContext(param_1);
  lVar2 = (**(code **)(pIVar1->_padding_ + 0x148))();
  pFVar3 = (FD3D11DynamicRHI *)(lVar2 + -0x18);
  if (lVar2 == 0) {
    pFVar3 = (FD3D11DynamicRHI *)0x0;
  }
  `FD3D11DynamicRHI::ResolveTextureUsingShader<FResolveSingleSamplePS>'::__l21::<lambda_4>::
  operator()((void *)((longlong)this + 0x10),pFVar3);
  return;
}

// ExecuteAndDestruct @ 14597d630

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListBase,`FD3D11ShaderResourceView::FD3D11ShaderResourceView'::__l2::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  longlong *plVar1;
  FD3D11ShaderResourceView *this_00;
  bool bVar2;
  FD3D11ViewableResource *pFVar3;
  FD3D11View *pFVar4;
  
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x18),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
  }
  this_00 = *(FD3D11ShaderResourceView **)((longlong)this + 0x10);
  plVar1 = &this_00->_padding_;
  pFVar3 = FD3D11ShaderResourceView::GetBaseResource(this_00);
  if (pFVar3->LinkedViews != (FD3D11View *)0x0) {
    *(longlong **)&pFVar3->LinkedViews->field_0x10 = plVar1;
  }
  *plVar1 = (longlong)pFVar3->LinkedViews;
  this_00->_padding_ = (longlong)pFVar3;
  pFVar4 = (FD3D11View *)&this_00->_padding_;
  if (plVar1 == (longlong *)0x0) {
    pFVar4 = (FD3D11View *)0x0;
  }
  pFVar3->LinkedViews = pFVar4;
  FD3D11ShaderResourceView::UpdateView
            ((FD3D11ShaderResourceView *)(*(longlong *)((longlong)this + 0x10) + 0x30));
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ExecuteAndDestruct @ 14597d6e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListBase,`FD3D11UnorderedAccessView::FD3D11UnorderedAccessView'::__l2::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  longlong *plVar1;
  FD3D11UnorderedAccessView *this_00;
  bool bVar2;
  FD3D11ViewableResource *pFVar3;
  FD3D11View *pFVar4;
  
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x18),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
  }
  this_00 = *(FD3D11UnorderedAccessView **)((longlong)this + 0x10);
  plVar1 = &this_00->_padding_;
  pFVar3 = FD3D11UnorderedAccessView::GetBaseResource(this_00);
  if (pFVar3->LinkedViews != (FD3D11View *)0x0) {
    *(longlong **)&pFVar3->LinkedViews->field_0x10 = plVar1;
  }
  *plVar1 = (longlong)pFVar3->LinkedViews;
  this_00->_padding_ = (longlong)pFVar3;
  pFVar4 = (FD3D11View *)&this_00->_padding_;
  if (plVar1 == (longlong *)0x0) {
    pFVar4 = (FD3D11View *)0x0;
  }
  pFVar3->LinkedViews = pFVar4;
  FD3D11UnorderedAccessView::UpdateView
            ((FD3D11UnorderedAccessView *)(*(longlong *)((longlong)this + 0x10) + 0x30));
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ExecuteAndDestruct @ 14597d790

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListBase,`FD3D11DynamicRHI::RHIReplaceResources'::__l2::<lambda_1>_>::
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
  `FD3D11DynamicRHI::RHIReplaceResources'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),param_1);
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ExecuteAndDestruct @ 14597d820

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListBase,`FD3D11DynamicRHI::RHIUpdateTexture2D'::__l2::<lambda_1>_>::
ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x50),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    `FD3D11DynamicRHI::RHIUpdateTexture2D'::__l2::<lambda_1>::operator()
              ((void *)((longlong)this + 0x10),param_1);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  `FD3D11DynamicRHI::RHIUpdateTexture2D'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),param_1);
  return;
}

// ExecuteAndDestruct @ 14597d8b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListBase,`FD3D11DynamicRHI::RHIUpdateTexture3D'::__l2::<lambda_1>_>::
ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x58),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    `FD3D11DynamicRHI::RHIUpdateTexture3D'::__l2::<lambda_1>::operator()
              ((void *)((longlong)this + 0x10),param_1);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  `FD3D11DynamicRHI::RHIUpdateTexture3D'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),param_1);
  return;
}

// ExecuteAndDestruct @ 14597d940

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListBase,`FD3D11GPUFence::WriteGPUFence_TopOfPipe'::__l2::<lambda_1>_>
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
  `FD3D11GPUFence::WriteGPUFence_TopOfPipe'::__l2::<lambda_1>::operator()
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

// ExecuteAndDestruct @ 14597d9f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListBase,`FD3D11DynamicRHI::RHIUpdateUniformBuffer'::__l23::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x48),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    `FD3D11DynamicRHI::RHIUpdateUniformBuffer'::__l23::<lambda_1>::operator()
              ((void *)((longlong)this + 0x10),param_1);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  `FD3D11DynamicRHI::RHIUpdateUniformBuffer'::__l23::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),param_1);
  return;
}

// ExecuteAndDestruct @ 14597da80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListImmediate,`FD3D11GPUFence::Wait'::__l6::<lambda_1>_>::
ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  bool bVar5;
  
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x28),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
  }
  `FD3D11GPUFence::Wait'::__l6::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),(FRHICommandListImmediate *)param_1);
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  puVar4 = *(undefined8 **)((longlong)this + 0x10);
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

