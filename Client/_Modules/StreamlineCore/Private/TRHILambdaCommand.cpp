// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StreamlineCore
// Functions: 7

// ExecuteAndDestruct @ 14de79b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListImmediate,``AddStreamlineStateRenderPass<`AddStreamlineDLSSGStateRenderPass'::__l2::<lambda_1>,`AddStreamlineDLSSGStateRenderPass'::__l2::<lambda_2>_>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  bool bVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [24];
  longlong local_20;
  uint local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0xa0),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
  }
  local_18 = *(uint *)((longlong)this + 0x10);
  local_38._0_8_ = 0;
  local_20 = 1;
  local_38._8_4_ = sl::ViewportHandle::s_structType.data1;
  local_38._12_2_ = sl::ViewportHandle::s_structType.data2;
  local_38._14_2_ = sl::ViewportHandle::s_structType.data3;
  local_38[0x10] = sl::ViewportHandle::s_structType.data4[0];
  local_38[0x11] = sl::ViewportHandle::s_structType.data4[1];
  local_38[0x12] = sl::ViewportHandle::s_structType.data4[2];
  local_38[0x13] = sl::ViewportHandle::s_structType.data4[3];
  local_38[0x14] = sl::ViewportHandle::s_structType.data4[4];
  local_38[0x15] = sl::ViewportHandle::s_structType.data4[5];
  local_38[0x16] = sl::ViewportHandle::s_structType.data4[6];
  local_38[0x17] = sl::ViewportHandle::s_structType.data4[7];
  CallSLFeatureFn<enum_sl::Result_(__cdecl*)(sl::ViewportHandle_const_&,sl::DLSSGOptions_const_&),sl::ViewportHandle,sl::DLSSGOptions_const_&>
            (1000,"slDLSSGSetOptions",(ViewportHandle *)local_38,
             (DLSSGOptions *)((longlong)this + 0x28));
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ExecuteAndDestruct @ 14de79c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListImmediate,``AddStreamlineStateRenderPass<`AddStreamlineDeepDVCStateRenderPass'::__l2::<lambda_1>,`AddStreamlineDeepDVCStateRenderPass'::__l2::<lambda_2>_>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  bool bVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [24];
  longlong local_20;
  uint local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x60),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
  }
  local_18 = *(uint *)((longlong)this + 0x10);
  local_38._0_8_ = 0;
  local_20 = 1;
  local_38._8_4_ = sl::ViewportHandle::s_structType.data1;
  local_38._12_2_ = sl::ViewportHandle::s_structType.data2;
  local_38._14_2_ = sl::ViewportHandle::s_structType.data3;
  local_38[0x10] = sl::ViewportHandle::s_structType.data4[0];
  local_38[0x11] = sl::ViewportHandle::s_structType.data4[1];
  local_38[0x12] = sl::ViewportHandle::s_structType.data4[2];
  local_38[0x13] = sl::ViewportHandle::s_structType.data4[3];
  local_38[0x14] = sl::ViewportHandle::s_structType.data4[4];
  local_38[0x15] = sl::ViewportHandle::s_structType.data4[5];
  local_38[0x16] = sl::ViewportHandle::s_structType.data4[6];
  local_38[0x17] = sl::ViewportHandle::s_structType.data4[7];
  CallSLFeatureFn<enum_sl::Result_(__cdecl*)(sl::ViewportHandle_const_&,sl::DeepDVCOptions_const_&),sl::ViewportHandle,sl::DeepDVCOptions_const_&>
            (5,"slDeepDVCSetOptions",(ViewportHandle *)local_38,
             (DeepDVCOptions *)((longlong)this + 0x28));
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ExecuteAndDestruct @ 14de79d10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EStreamlineResource": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListImmediate,``AddStreamlineDeepDVCEvaluateRenderPass'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  bool bVar1;
  FStreamlineRHI *this_00;
  FrameToken *pFVar2;
  
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x58),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
  }
  this_00 = GetPlatformStreamlineRHI();
  pFVar2 = FStreamlineRHI::GetFrameToken(this_00,*(ulong64 *)((longlong)this + 0x50));
  FStreamlineRHI::StreamlineEvaluateDeepDVC
            (*(FStreamlineRHI **)((longlong)this + 0x10),(FRHICommandList *)param_1,
             (FRHIStreamlineResource *)((longlong)this + 0x18),pFVar2,
             *(uint *)((longlong)this + 0x38));
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ExecuteAndDestruct @ 14de79dc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListImmediate,``FStreamlineViewExtension::PostProcessPassAtEnd_RenderThread'::__l40::<lambda_3>::operator()'::__l2::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  bool bVar1;
  
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x1d0),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
  }
  (**(code **)(**(longlong **)((longlong)this + 0x10) + 8))
            (*(longlong **)((longlong)this + 0x10),param_1,(longlong)this + 0x20);
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ExecuteAndDestruct @ 14de79e50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListImmediate,``AddStreamlineUIHintTagPass'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  bool bVar1;
  
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x78),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
  }
  ``AddStreamlineUIHintTagPass'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>::operator()
            ((void *)((longlong)this + 0x10),(FRHICommandListImmediate *)param_1);
  if (*(void **)((longlong)this + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x58));
  }
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ExecuteAndDestruct @ 14de79ee0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListImmediate,``FStreamlineViewExtension::PostProcessPassAtEnd_RenderThread'::__l40::<lambda_3>::operator()'::__l2::<lambda_2>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  bool bVar1;
  
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0xb8),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
  }
  ``FStreamlineViewExtension::PostProcessPassAtEnd_RenderThread'::__l40::<lambda_3>::operator()'::
  __l2::<lambda_2>::operator()((void *)((longlong)this + 0x10),(FRHICommandListImmediate *)param_1);
  if (*(void **)((longlong)this + 0xa0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xa0));
  }
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ExecuteAndDestruct @ 14de79f80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListImmediate,`FStreamlineViewExtension::PreRenderViewFamily_RenderThread'::__l21::<lambda_3>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x20),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    `FStreamlineViewExtension::PreRenderViewFamily_RenderThread'::__l21::<lambda_3>::operator()
              ((void *)((longlong)this + 0x10),(FRHICommandList *)param_1);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  `FStreamlineViewExtension::PreRenderViewFamily_RenderThread'::__l21::<lambda_3>::operator()
            ((void *)((longlong)this + 0x10),(FRHICommandList *)param_1);
  return;
}

