// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NullDrv
// Functions: 18

// ~IRHICommandContext @ 1446c4790

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall IRHICommandContext::~IRHICommandContext(IRHICommandContext *this)

{
  FRHITexture *this_00;
  
  this->_padding_ = (longlong)&___7IRHICommandContext__6B_;
  this_00 = (this->RenderPassInfo).ShadingRateTexture.Reference;
  if (this_00 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)&___7IRHIComputeContext__6B_;
  return;
}

// GetPipeline @ 1446c5f10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ERHIPipeline __thiscall IRHICommandContext::GetPipeline(IRHICommandContext *this)

{
  return Graphics;
}

// RHIBeginParallelRenderPass @ 1446c6620

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
IRHICommandContext::RHIBeginParallelRenderPass
          (IRHICommandContext *this,TSharedPtr<FRHIParallelRenderPassInfo,1> *param_1,
          wchar_t *param_2)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// RHIClearShaderBindingTable @ 1446c6890

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
IRHICommandContext::RHIClearShaderBindingTable
          (IRHICommandContext *this,FRHIShaderBindingTable *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                     ,0x364,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// RHICommitShaderBindingTable @ 1446c6910

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
IRHICommandContext::RHICommitShaderBindingTable
          (IRHICommandContext *this,FRHIShaderBindingTable *param_1,FRHIBuffer *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                     ,0x36e,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// RHIDispatchIndirectMeshShader @ 1446c7ec0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
IRHICommandContext::RHIDispatchIndirectMeshShader
          (IRHICommandContext *this,FRHIBuffer *param_1,uint param_2)

{
  return;
}

// RHIDispatchMeshShader @ 1446c7ed0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
IRHICommandContext::RHIDispatchMeshShader
          (IRHICommandContext *this,uint param_1,uint param_2,uint param_3)

{
  return;
}

// RHIEndParallelRenderPass @ 1446c8260

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall IRHICommandContext::RHIEndParallelRenderPass(IRHICommandContext *this)

{
  return;
}

// RHIGpuHangCommandListCorruption @ 1446c8800

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall IRHICommandContext::RHIGpuHangCommandListCorruption(IRHICommandContext *this)

{
  return;
}

// RHIMultiDrawIndexedPrimitiveIndirect @ 1446c8910

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
IRHICommandContext::RHIMultiDrawIndexedPrimitiveIndirect
          (IRHICommandContext *this,FRHIBuffer *param_1,FRHIBuffer *param_2,uint param_3,
          FRHIBuffer *param_4,uint param_5,uint param_6)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                     ,0x32d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// RHINextSubpass @ 1446c8950

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall IRHICommandContext::RHINextSubpass(IRHICommandContext *this)

{
  return;
}

// RHIResummarizeHTile @ 1446c8b20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
IRHICommandContext::RHIResummarizeHTile(IRHICommandContext *this,FRHITexture *param_1)

{
  return;
}

// RHISetBindingsOnShaderBindingTable @ 1446c8b80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
IRHICommandContext::RHISetBindingsOnShaderBindingTable
          (IRHICommandContext *this,FRHIShaderBindingTable *param_1,
          FRHIRayTracingPipelineState *param_2,uint param_3,FRayTracingLocalShaderBindings *param_4,
          ERayTracingBindingType param_5)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                     ,0x369,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// RHISetBlendFactor @ 1446c8bc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
IRHICommandContext::RHISetBlendFactor(IRHICommandContext *this,FLinearColor *param_1)

{
  return;
}

// RHISetShaderUnbinds @ 1446c8d40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
IRHICommandContext::RHISetShaderUnbinds
          (IRHICommandContext *this,FRHIGraphicsShader *param_1,
          TArrayView<FRHIShaderParameterUnbind_const_,int> *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                     ,0x30f,
                     L"RHISetShaderUnbinds called when the active RHI hasn\'t overridden it and GRHIGlobals.NeedsShaderUnbinds is set."
                    );
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// RHISetShadingRate @ 1446c8dd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

void __thiscall
IRHICommandContext::RHISetShadingRate
          (IRHICommandContext *this,EVRSShadingRate param_1,EVRSRateCombiner param_2)

{
  return;
}

// RHISetStencilRef @ 1446c8e00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall IRHICommandContext::RHISetStencilRef(IRHICommandContext *this,uint param_1)

{
  return;
}

// RHISetStereoViewport @ 1446c8e10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
IRHICommandContext::RHISetStereoViewport
          (IRHICommandContext *this,float param_1,float param_2,float param_3,float param_4,
          float param_5,float param_6,float param_7,float param_8,float param_9,float param_10)

{
  return;
}

