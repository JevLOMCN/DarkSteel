// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NullDrv
// Functions: 34

// ~IRHIComputeContext @ 1446c47d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall IRHIComputeContext::~IRHIComputeContext(IRHIComputeContext *this)

{
  this->_padding_ = (longlong)&___7IRHIComputeContext__6B_;
  return;
}

// GetLowestLevelContext @ 1446c5e70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

IRHIComputeContext * __thiscall IRHIComputeContext::GetLowestLevelContext(IRHIComputeContext *this)

{
  return this;
}

// GetPipeline @ 1446c5f20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

ERHIPipeline __thiscall IRHIComputeContext::GetPipeline(IRHIComputeContext *this)

{
  return AsyncCompute;
}

// RHIBeginUAVOverlap @ 1446c6680

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
IRHIComputeContext::RHIBeginUAVOverlap
          (IRHIComputeContext *this,TArrayView<FRHIUnorderedAccessView_*_const,int> *param_1)

{
  return;
}

// RHIBeginUAVOverlap @ 1446c6690

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall IRHIComputeContext::RHIBeginUAVOverlap(IRHIComputeContext *this)

{
  return;
}

// RHIBindAccelerationStructureMemory @ 1446c66a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
IRHIComputeContext::RHIBindAccelerationStructureMemory
          (IRHIComputeContext *this,FRHIRayTracingScene *param_1,FRHIBuffer *param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                     ,0x1e8,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// RHIBuildAccelerationStructures @ 1446c6700

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __thiscall
IRHIComputeContext::RHIBuildAccelerationStructures
          (IRHIComputeContext *this,TArrayView<FRayTracingGeometryBuildParams_const_,int> *param_1,
          FRHIBufferRange *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                     ,0x1de,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// RHIBuildAccelerationStructures @ 1446c6740

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
IRHIComputeContext::RHIBuildAccelerationStructures
          (IRHIComputeContext *this,TArrayView<FRayTracingSceneBuildParams_const_,int> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                     ,0x1e3,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// RHICopyToStagingBuffer @ 1446c6980

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
IRHIComputeContext::RHICopyToStagingBuffer
          (IRHIComputeContext *this,FRHIBuffer *param_1,FRHIStagingBuffer *param_2,uint param_3,
          uint param_4)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                     ,0x181,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// RHICrossGPUTransfer @ 1446c7dd0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
IRHIComputeContext::RHICrossGPUTransfer
          (IRHIComputeContext *this,TArrayView<FTransferResourceParams_const_,int> *param_1,
          TArrayView<FCrossGPUTransferFence_*_const,int> *param_2,
          TArrayView<FCrossGPUTransferFence_*_const,int> *param_3)

{
  return;
}

// RHICrossGPUTransferSignal @ 1446c7de0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
IRHIComputeContext::RHICrossGPUTransferSignal
          (IRHIComputeContext *this,TArrayView<FTransferResourceParams_const_,int> *param_1,
          TArrayView<FCrossGPUTransferFence_*_const,int> *param_2)

{
  FCrossGPUTransferFence **ppFVar1;
  FCrossGPUTransferFence **ppFVar2;
  
  ppFVar2 = param_2->DataPtr;
  ppFVar1 = ppFVar2 + param_2->ArrayNum;
  for (; ppFVar2 != ppFVar1; ppFVar2 = ppFVar2 + 1) {
    ::operator_delete(*ppFVar2,0x10);
  }
  return;
}

// RHICrossGPUTransferWait @ 1446c7e30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
IRHIComputeContext::RHICrossGPUTransferWait
          (IRHIComputeContext *this,TArrayView<FCrossGPUTransferFence_*_const,int> *param_1)

{
  FCrossGPUTransferFence **ppFVar1;
  FCrossGPUTransferFence **ppFVar2;
  
  ppFVar2 = param_1->DataPtr;
  ppFVar1 = ppFVar2 + param_1->ArrayNum;
  for (; ppFVar2 != ppFVar1; ppFVar2 = ppFVar2 + 1) {
    ::operator_delete(*ppFVar2,0x10);
  }
  return;
}

// RHIDispatchComputeShaderBundle @ 1446c7e90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
IRHIComputeContext::RHIDispatchComputeShaderBundle
          (IRHIComputeContext *this,FRHIShaderBundle *param_1,FRHIBuffer *param_2,
          TArrayView<FRHIShaderParameterResource_const_,int> *param_3,
          TArrayView<FRHIShaderBundleComputeDispatch_const_,int> *param_4,bool param_5)

{
  return;
}

// RHIDispatchGraphicsShaderBundle @ 1446c7ea0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

void __thiscall
IRHIComputeContext::RHIDispatchGraphicsShaderBundle
          (IRHIComputeContext *this,FRHIShaderBundle *param_1,FRHIBuffer *param_2,
          FRHIShaderBundleGraphicsState *param_3,
          TArrayView<FRHIShaderParameterResource_const_,int> *param_4,
          TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int> *param_5,bool param_6)

{
  return;
}

// RHIEndUAVOverlap @ 1446c82b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
IRHIComputeContext::RHIEndUAVOverlap
          (IRHIComputeContext *this,TArrayView<FRHIUnorderedAccessView_*_const,int> *param_1)

{
  return;
}

// RHIEndUAVOverlap @ 1446c82c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall IRHIComputeContext::RHIEndUAVOverlap(IRHIComputeContext *this)

{
  return;
}

// RHIExecuteMultiIndirectClusterOperation @ 1446c82d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __thiscall
IRHIComputeContext::RHIExecuteMultiIndirectClusterOperation
          (IRHIComputeContext *this,FRayTracingClusterOperationParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                     ,0x1d9,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// RHIGetGPUMask @ 1446c84b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRHIGPUMask __thiscall IRHIComputeContext::RHIGetGPUMask(IRHIComputeContext *this)

{
  undefined4 *in_RDX;
  
  *in_RDX = 1;
  return (FRHIGPUMask)(uint)in_RDX;
}

// RHIGetNativeCommandBuffer @ 1446c84f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void * __thiscall IRHIComputeContext::RHIGetNativeCommandBuffer(IRHIComputeContext *this)

{
  return (void *)0x0;
}

// RHIPostExternalCommandsReset @ 1446c8960

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall IRHIComputeContext::RHIPostExternalCommandsReset(IRHIComputeContext *this)

{
  return;
}

// RHIRayTraceDispatch @ 1446c8990

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
IRHIComputeContext::RHIRayTraceDispatch
          (IRHIComputeContext *this,FRHIRayTracingPipelineState *param_1,
          FRHIRayTracingShader *param_2,FRHIShaderBindingTable *param_3,
          FRayTracingShaderBindings *param_4,uint param_5,uint param_6)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                     ,0x114,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// RHIRayTraceDispatchIndirect @ 1446c89d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
IRHIComputeContext::RHIRayTraceDispatchIndirect
          (IRHIComputeContext *this,FRHIRayTracingPipelineState *param_1,
          FRHIRayTracingShader *param_2,FRHIShaderBindingTable *param_3,
          FRayTracingShaderBindings *param_4,FRHIBuffer *param_5,uint param_6)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                     ,0x11b,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// RHISetAsyncComputeBudget @ 1446c8b70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
IRHIComputeContext::RHISetAsyncComputeBudget(IRHIComputeContext *this,EAsyncComputeBudget param_1)

{
  return;
}

// RHISetComputeBudget @ 1446c8bf0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
IRHIComputeContext::RHISetComputeBudget(IRHIComputeContext *this,ESyncComputeBudget param_1)

{
  return;
}

// RHISetGPUMask @ 1446c8c50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall IRHIComputeContext::RHISetGPUMask(IRHIComputeContext *this,FRHIGPUMask param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1.GPUMask != 1) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5267325184322306447>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                       ,399,"GPUMask == FRHIGPUMask::GPU0()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// RHISetShaderRootConstants @ 1446c8d00

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
IRHIComputeContext::RHISetShaderRootConstants
          (IRHIComputeContext *this,TIntVector4<unsigned_int> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                     ,0x13f,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// RHISetShaderUnbinds @ 1446c8d80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
IRHIComputeContext::RHISetShaderUnbinds
          (IRHIComputeContext *this,FRHIComputeShader *param_1,
          TArrayView<FRHIShaderParameterUnbind_const_,int> *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                     ,0x167,
                     L"RHISetShaderUnbinds called when the active RHI hasn\'t overridden it and GRHIGlobals.NeedsShaderUnbinds is set."
                    );
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// RHISetUniformBufferDynamicOffset @ 1446c8e30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
IRHIComputeContext::RHISetUniformBufferDynamicOffset
          (IRHIComputeContext *this,uchar param_1,uint param_2)

{
  return;
}

// RHITransferResourceSignal @ 1446c8e90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
IRHIComputeContext::RHITransferResourceSignal
          (IRHIComputeContext *this,TArrayView<FTransferResourceFenceData_*_const,int> *param_1,
          FRHIGPUMask param_2)

{
  FTransferResourceFenceData **ppFVar1;
  FTransferResourceFenceData **ppFVar2;
  
  ppFVar2 = param_1->DataPtr;
  ppFVar1 = ppFVar2 + param_1->ArrayNum;
  for (; ppFVar2 != ppFVar1; ppFVar2 = ppFVar2 + 1) {
    ::operator_delete(*ppFVar2,0x48);
  }
  return;
}

// RHITransferResourceWait @ 1446c8ee0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
IRHIComputeContext::RHITransferResourceWait
          (IRHIComputeContext *this,TArrayView<FTransferResourceFenceData_*_const,int> *param_1)

{
  FTransferResourceFenceData **ppFVar1;
  FTransferResourceFenceData **ppFVar2;
  
  ppFVar2 = param_1->DataPtr;
  ppFVar1 = ppFVar2 + param_1->ArrayNum;
  for (; ppFVar2 != ppFVar1; ppFVar2 = ppFVar2 + 1) {
    ::operator_delete(*ppFVar2,0x48);
  }
  return;
}

// RHITransferResources @ 1446c8f30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
IRHIComputeContext::RHITransferResources
          (IRHIComputeContext *this,TArrayView<FTransferResourceParams_const_,int> *param_1)

{
  return;
}

// RHIWriteGPUFence @ 1446c9010

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall IRHIComputeContext::RHIWriteGPUFence(IRHIComputeContext *this,FRHIGPUFence *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                     ,0x18a,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// SetExecutingCommandList @ 1446c9250

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
IRHIComputeContext::SetExecutingCommandList(IRHIComputeContext *this,FRHICommandListBase *param_1)

{
  this->ExecutingCmdList = param_1;
  return;
}

// SetTrackedAccess @ 1446c9260

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
IRHIComputeContext::SetTrackedAccess(IRHIComputeContext *this,FRHITrackedAccessInfo *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001446c926a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->Resource->_padding_ + 0x18))(param_1->Resource,param_1->_padding_);
  return;
}

