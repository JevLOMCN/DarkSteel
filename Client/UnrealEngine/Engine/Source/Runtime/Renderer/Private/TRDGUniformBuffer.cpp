// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 122

// TRDGUniformBuffer<FDecalPassUniformParameters> @ 14472ce00

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TRDGUniformBuffer<FDecalPassUniformParameters> * __thiscall
TRDGUniformBuffer<FDecalPassUniformParameters>::TRDGUniformBuffer<FDecalPassUniformParameters>
          (TRDGUniformBuffer<FDecalPassUniformParameters> *this,FDecalPassUniformParameters *param_1
          ,wchar_t *param_2)

{
  FRHIUniformBufferLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGUniformBuffer<FDecalPassUniformParameters> *pTVar4;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGUniformBuffer__6B_;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  pFVar3 = FDecalPassUniformParameters::GetStructMetadata();
  this->_padding_ = (longlong)param_1;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGUniformBuffer<FDecalPassUniformParameters> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this_00 = (pFVar3->Layout).Reference;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)pFVar3;
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFDecalPassUniformParameters____6B_;
  this->Parameters = param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// TRDGUniformBuffer<FOpaqueBasePassUniformParameters> @ 14472cec0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TRDGUniformBuffer<FOpaqueBasePassUniformParameters> * __thiscall
TRDGUniformBuffer<FOpaqueBasePassUniformParameters>::
TRDGUniformBuffer<FOpaqueBasePassUniformParameters>
          (TRDGUniformBuffer<FOpaqueBasePassUniformParameters> *this,
          FOpaqueBasePassUniformParameters *param_1,wchar_t *param_2)

{
  FRHIUniformBufferLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGUniformBuffer<FOpaqueBasePassUniformParameters> *pTVar4;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGUniformBuffer__6B_;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  pFVar3 = FOpaqueBasePassUniformParameters::GetStructMetadata();
  this->_padding_ = (longlong)param_1;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGUniformBuffer<FOpaqueBasePassUniformParameters> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this_00 = (pFVar3->Layout).Reference;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)pFVar3;
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFOpaqueBasePassUniformParameters____6B_;
  this->Parameters = param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// ~TRDGUniformBuffer<FDecalPassUniformParameters> @ 14472ed90

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TRDGUniformBuffer<FDecalPassUniformParameters>::~TRDGUniformBuffer<FDecalPassUniformParameters>
          (TRDGUniformBuffer<FDecalPassUniformParameters> *this)

{
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFDecalPassUniformParameters____6B_;
  FRDGUniformBuffer::~FRDGUniformBuffer((FRDGUniformBuffer *)this);
  return;
}

// ~TRDGUniformBuffer<FOpaqueBasePassUniformParameters> @ 14472edb0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TRDGUniformBuffer<FOpaqueBasePassUniformParameters>::
~TRDGUniformBuffer<FOpaqueBasePassUniformParameters>
          (TRDGUniformBuffer<FOpaqueBasePassUniformParameters> *this)

{
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFOpaqueBasePassUniformParameters____6B_;
  FRDGUniformBuffer::~FRDGUniformBuffer((FRDGUniformBuffer *)this);
  return;
}

// TRDGUniformBuffer<FDebugViewModePassUniformParameters> @ 1447f24a0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRDGUniformBuffer<FDebugViewModePassUniformParameters> * __thiscall
TRDGUniformBuffer<FDebugViewModePassUniformParameters>::
TRDGUniformBuffer<FDebugViewModePassUniformParameters>
          (TRDGUniformBuffer<FDebugViewModePassUniformParameters> *this,
          FDebugViewModePassUniformParameters *param_1,wchar_t *param_2)

{
  FRHIUniformBufferLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGUniformBuffer<FDebugViewModePassUniformParameters> *pTVar4;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGUniformBuffer__6B_;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  pFVar3 = FDebugViewModePassUniformParameters::GetStructMetadata();
  this->_padding_ = (longlong)param_1;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGUniformBuffer<FDebugViewModePassUniformParameters> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this_00 = (pFVar3->Layout).Reference;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)pFVar3;
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFDebugViewModePassUniformParameters____6B_;
  this->Parameters = param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// ~TRDGUniformBuffer<FDebugViewModePassUniformParameters> @ 1447f6010

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGUniformBuffer<FDebugViewModePassUniformParameters>::
~TRDGUniformBuffer<FDebugViewModePassUniformParameters>
          (TRDGUniformBuffer<FDebugViewModePassUniformParameters> *this)

{
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFDebugViewModePassUniformParameters____6B_;
  FRDGUniformBuffer::~FRDGUniformBuffer((FRDGUniformBuffer *)this);
  return;
}

// TRDGUniformBuffer<FDistortionPassUniformParameters> @ 14485a5d0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TRDGUniformBuffer<FDistortionPassUniformParameters> * __thiscall
TRDGUniformBuffer<FDistortionPassUniformParameters>::
TRDGUniformBuffer<FDistortionPassUniformParameters>
          (TRDGUniformBuffer<FDistortionPassUniformParameters> *this,
          FDistortionPassUniformParameters *param_1,wchar_t *param_2)

{
  FRHIUniformBufferLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGUniformBuffer<FDistortionPassUniformParameters> *pTVar4;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGUniformBuffer__6B_;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  pFVar3 = FDistortionPassUniformParameters::GetStructMetadata();
  this->_padding_ = (longlong)param_1;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGUniformBuffer<FDistortionPassUniformParameters> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this_00 = (pFVar3->Layout).Reference;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)pFVar3;
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFDistortionPassUniformParameters____6B_;
  this->Parameters = param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// TRDGUniformBuffer<FFogUniformParameters> @ 14485a690

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRDGUniformBuffer<FFogUniformParameters> * __thiscall
TRDGUniformBuffer<FFogUniformParameters>::TRDGUniformBuffer<FFogUniformParameters>
          (TRDGUniformBuffer<FFogUniformParameters> *this,FFogUniformParameters *param_1,
          wchar_t *param_2)

{
  FRHIUniformBufferLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGUniformBuffer<FFogUniformParameters> *pTVar4;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGUniformBuffer__6B_;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  pFVar3 = FFogUniformParameters::GetStructMetadata();
  this->_padding_ = (longlong)param_1;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGUniformBuffer<FFogUniformParameters> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this_00 = (pFVar3->Layout).Reference;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)pFVar3;
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFFogUniformParameters____6B_;
  this->Parameters = param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// ~TRDGUniformBuffer<FDistortionPassUniformParameters> @ 14485d970

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TRDGUniformBuffer<FDistortionPassUniformParameters>::
~TRDGUniformBuffer<FDistortionPassUniformParameters>
          (TRDGUniformBuffer<FDistortionPassUniformParameters> *this)

{
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFDistortionPassUniformParameters____6B_;
  FRDGUniformBuffer::~FRDGUniformBuffer((FRDGUniformBuffer *)this);
  return;
}

// ~TRDGUniformBuffer<FFogUniformParameters> @ 14485d990

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGUniformBuffer<FFogUniformParameters>::~TRDGUniformBuffer<FFogUniformParameters>
          (TRDGUniformBuffer<FFogUniformParameters> *this)

{
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFFogUniformParameters____6B_;
  FRDGUniformBuffer::~FRDGUniformBuffer((FRDGUniformBuffer *)this);
  return;
}

// TRDGUniformBuffer<FGPUSceneWriterUniformParameters> @ 1448ec320

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRDGUniformBuffer<FGPUSceneWriterUniformParameters> * __thiscall
TRDGUniformBuffer<FGPUSceneWriterUniformParameters>::
TRDGUniformBuffer<FGPUSceneWriterUniformParameters>
          (TRDGUniformBuffer<FGPUSceneWriterUniformParameters> *this,
          FGPUSceneWriterUniformParameters *param_1,wchar_t *param_2)

{
  FRHIUniformBufferLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGUniformBuffer<FGPUSceneWriterUniformParameters> *pTVar4;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGUniformBuffer__6B_;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  pFVar3 = FGPUSceneWriterUniformParameters::GetStructMetadata();
  this->_padding_ = (longlong)param_1;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGUniformBuffer<FGPUSceneWriterUniformParameters> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this_00 = (pFVar3->Layout).Reference;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)pFVar3;
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFGPUSceneWriterUniformParameters____6B_;
  this->Parameters = param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// ~TRDGUniformBuffer<FGPUSceneWriterUniformParameters> @ 1448edfc0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGUniformBuffer<FGPUSceneWriterUniformParameters>::
~TRDGUniformBuffer<FGPUSceneWriterUniformParameters>
          (TRDGUniformBuffer<FGPUSceneWriterUniformParameters> *this)

{
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFGPUSceneWriterUniformParameters____6B_;
  FRDGUniformBuffer::~FRDGUniformBuffer((FRDGUniformBuffer *)this);
  return;
}

// TRDGUniformBuffer<FHairDeepShadowRasterUniformParameters> @ 144993230

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TRDGUniformBuffer<FHairDeepShadowRasterUniformParameters> * __thiscall
TRDGUniformBuffer<FHairDeepShadowRasterUniformParameters>::
TRDGUniformBuffer<FHairDeepShadowRasterUniformParameters>
          (TRDGUniformBuffer<FHairDeepShadowRasterUniformParameters> *this,
          FHairDeepShadowRasterUniformParameters *param_1,wchar_t *param_2)

{
  FRHIUniformBufferLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGUniformBuffer<FHairDeepShadowRasterUniformParameters> *pTVar4;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGUniformBuffer__6B_;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  pFVar3 = FHairDeepShadowRasterUniformParameters::GetStructMetadata();
  this->_padding_ = (longlong)param_1;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGUniformBuffer<FHairDeepShadowRasterUniformParameters> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this_00 = (pFVar3->Layout).Reference;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)pFVar3;
  this->_padding_ =
       (longlong)&___7__TRDGUniformBuffer_VFHairDeepShadowRasterUniformParameters____6B_;
  this->Parameters = param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// TRDGUniformBuffer<FHairStrandsViewUniformParameters> @ 1449932f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TRDGUniformBuffer<FHairStrandsViewUniformParameters> * __thiscall
TRDGUniformBuffer<FHairStrandsViewUniformParameters>::
TRDGUniformBuffer<FHairStrandsViewUniformParameters>
          (TRDGUniformBuffer<FHairStrandsViewUniformParameters> *this,
          FHairStrandsViewUniformParameters *param_1,wchar_t *param_2)

{
  FRHIUniformBufferLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGUniformBuffer<FHairStrandsViewUniformParameters> *pTVar4;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGUniformBuffer__6B_;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  pFVar3 = FHairStrandsViewUniformParameters::GetStructMetadata();
  this->_padding_ = (longlong)param_1;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGUniformBuffer<FHairStrandsViewUniformParameters> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this_00 = (pFVar3->Layout).Reference;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)pFVar3;
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFHairStrandsViewUniformParameters____6B_;
  this->Parameters = param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// TRDGUniformBuffer<FVisibilityMaterialPassUniformParameters> @ 1449933b0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TRDGUniformBuffer<FVisibilityMaterialPassUniformParameters> * __thiscall
TRDGUniformBuffer<FVisibilityMaterialPassUniformParameters>::
TRDGUniformBuffer<FVisibilityMaterialPassUniformParameters>
          (TRDGUniformBuffer<FVisibilityMaterialPassUniformParameters> *this,
          FVisibilityMaterialPassUniformParameters *param_1,wchar_t *param_2)

{
  FRHIUniformBufferLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGUniformBuffer<FVisibilityMaterialPassUniformParameters> *pTVar4;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGUniformBuffer__6B_;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  pFVar3 = FVisibilityMaterialPassUniformParameters::GetStructMetadata();
  this->_padding_ = (longlong)param_1;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGUniformBuffer<FVisibilityMaterialPassUniformParameters> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this_00 = (pFVar3->Layout).Reference;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)pFVar3;
  this->_padding_ =
       (longlong)&___7__TRDGUniformBuffer_VFVisibilityMaterialPassUniformParameters____6B_;
  this->Parameters = param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// TRDGUniformBuffer<FVisibilityPassUniformParameters> @ 144993470

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TRDGUniformBuffer<FVisibilityPassUniformParameters> * __thiscall
TRDGUniformBuffer<FVisibilityPassUniformParameters>::
TRDGUniformBuffer<FVisibilityPassUniformParameters>
          (TRDGUniformBuffer<FVisibilityPassUniformParameters> *this,
          FVisibilityPassUniformParameters *param_1,wchar_t *param_2)

{
  FRHIUniformBufferLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGUniformBuffer<FVisibilityPassUniformParameters> *pTVar4;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGUniformBuffer__6B_;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  pFVar3 = FVisibilityPassUniformParameters::GetStructMetadata();
  this->_padding_ = (longlong)param_1;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGUniformBuffer<FVisibilityPassUniformParameters> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this_00 = (pFVar3->Layout).Reference;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)pFVar3;
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFVisibilityPassUniformParameters____6B_;
  this->Parameters = param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// ~TRDGUniformBuffer<FHairDeepShadowRasterUniformParameters> @ 14499e9f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TRDGUniformBuffer<FHairDeepShadowRasterUniformParameters>::
~TRDGUniformBuffer<FHairDeepShadowRasterUniformParameters>
          (TRDGUniformBuffer<FHairDeepShadowRasterUniformParameters> *this)

{
  this->_padding_ =
       (longlong)&___7__TRDGUniformBuffer_VFHairDeepShadowRasterUniformParameters____6B_;
  FRDGUniformBuffer::~FRDGUniformBuffer((FRDGUniformBuffer *)this);
  return;
}

// ~TRDGUniformBuffer<FHairStrandsViewUniformParameters> @ 14499ea10

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TRDGUniformBuffer<FHairStrandsViewUniformParameters>::
~TRDGUniformBuffer<FHairStrandsViewUniformParameters>
          (TRDGUniformBuffer<FHairStrandsViewUniformParameters> *this)

{
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFHairStrandsViewUniformParameters____6B_;
  FRDGUniformBuffer::~FRDGUniformBuffer((FRDGUniformBuffer *)this);
  return;
}

// ~TRDGUniformBuffer<FVisibilityMaterialPassUniformParameters> @ 14499ea30

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TRDGUniformBuffer<FVisibilityMaterialPassUniformParameters>::
~TRDGUniformBuffer<FVisibilityMaterialPassUniformParameters>
          (TRDGUniformBuffer<FVisibilityMaterialPassUniformParameters> *this)

{
  this->_padding_ =
       (longlong)&___7__TRDGUniformBuffer_VFVisibilityMaterialPassUniformParameters____6B_;
  FRDGUniformBuffer::~FRDGUniformBuffer((FRDGUniformBuffer *)this);
  return;
}

// ~TRDGUniformBuffer<FVisibilityPassUniformParameters> @ 14499ea50

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TRDGUniformBuffer<FVisibilityPassUniformParameters>::
~TRDGUniformBuffer<FVisibilityPassUniformParameters>
          (TRDGUniformBuffer<FVisibilityPassUniformParameters> *this)

{
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFVisibilityPassUniformParameters____6B_;
  FRDGUniformBuffer::~FRDGUniformBuffer((FRDGUniformBuffer *)this);
  return;
}

// TRDGUniformBuffer<FAdaptiveVolumetricShadowMapUniformBufferParameters> @ 144a59300

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRDGUniformBuffer<FAdaptiveVolumetricShadowMapUniformBufferParameters> * __thiscall
TRDGUniformBuffer<FAdaptiveVolumetricShadowMapUniformBufferParameters>::
TRDGUniformBuffer<FAdaptiveVolumetricShadowMapUniformBufferParameters>
          (TRDGUniformBuffer<FAdaptiveVolumetricShadowMapUniformBufferParameters> *this,
          FAdaptiveVolumetricShadowMapUniformBufferParameters *param_1,wchar_t *param_2)

{
  FRHIUniformBufferLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGUniformBuffer<FAdaptiveVolumetricShadowMapUniformBufferParameters> *pTVar4;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGUniformBuffer__6B_;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  pFVar3 = FAdaptiveVolumetricShadowMapUniformBufferParameters::GetStructMetadata();
  this->_padding_ = (longlong)param_1;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGUniformBuffer<FAdaptiveVolumetricShadowMapUniformBufferParameters> *)(*pcVar1)()
      ;
      return pTVar4;
    }
  }
  this_00 = (pFVar3->Layout).Reference;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)pFVar3;
  this->_padding_ =
       (longlong)
       &___7__TRDGUniformBuffer_VFAdaptiveVolumetricShadowMapUniformBufferParameters____6B_;
  this->Parameters = param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// TRDGUniformBuffer<FAdaptiveVolumetricShadowMaps> @ 144a593c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRDGUniformBuffer<FAdaptiveVolumetricShadowMaps> * __thiscall
TRDGUniformBuffer<FAdaptiveVolumetricShadowMaps>::TRDGUniformBuffer<FAdaptiveVolumetricShadowMaps>
          (TRDGUniformBuffer<FAdaptiveVolumetricShadowMaps> *this,
          FAdaptiveVolumetricShadowMaps *param_1,wchar_t *param_2)

{
  FRHIUniformBufferLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGUniformBuffer<FAdaptiveVolumetricShadowMaps> *pTVar4;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGUniformBuffer__6B_;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  pFVar3 = FAdaptiveVolumetricShadowMaps::GetStructMetadata();
  this->_padding_ = (longlong)param_1;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGUniformBuffer<FAdaptiveVolumetricShadowMaps> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this_00 = (pFVar3->Layout).Reference;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)pFVar3;
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFAdaptiveVolumetricShadowMaps____6B_;
  this->Parameters = param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// TRDGUniformBuffer<FLumenTranslucencyLightingUniforms> @ 144a59480

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TRDGUniformBuffer<FLumenTranslucencyLightingUniforms> * __thiscall
TRDGUniformBuffer<FLumenTranslucencyLightingUniforms>::
TRDGUniformBuffer<FLumenTranslucencyLightingUniforms>
          (TRDGUniformBuffer<FLumenTranslucencyLightingUniforms> *this,
          FLumenTranslucencyLightingUniforms *param_1,wchar_t *param_2)

{
  FRHIUniformBufferLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGUniformBuffer<FLumenTranslucencyLightingUniforms> *pTVar4;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGUniformBuffer__6B_;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  pFVar3 = FLumenTranslucencyLightingUniforms::GetStructMetadata();
  this->_padding_ = (longlong)param_1;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGUniformBuffer<FLumenTranslucencyLightingUniforms> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this_00 = (pFVar3->Layout).Reference;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)pFVar3;
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFLumenTranslucencyLightingUniforms____6B_;
  this->Parameters = param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// TRDGUniformBuffer<FVirtualVoxelParameters> @ 144a59540

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRDGUniformBuffer<FVirtualVoxelParameters> * __thiscall
TRDGUniformBuffer<FVirtualVoxelParameters>::TRDGUniformBuffer<FVirtualVoxelParameters>
          (TRDGUniformBuffer<FVirtualVoxelParameters> *this,FVirtualVoxelParameters *param_1,
          wchar_t *param_2)

{
  FRHIUniformBufferLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGUniformBuffer<FVirtualVoxelParameters> *pTVar4;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGUniformBuffer__6B_;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  pFVar3 = FVirtualVoxelParameters::GetStructMetadata();
  this->_padding_ = (longlong)param_1;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGUniformBuffer<FVirtualVoxelParameters> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this_00 = (pFVar3->Layout).Reference;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)pFVar3;
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFVirtualVoxelParameters____6B_;
  this->Parameters = param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// ~TRDGUniformBuffer<FAdaptiveVolumetricShadowMapUniformBufferParameters> @ 144a5ab30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGUniformBuffer<FAdaptiveVolumetricShadowMapUniformBufferParameters>::
~TRDGUniformBuffer<FAdaptiveVolumetricShadowMapUniformBufferParameters>
          (TRDGUniformBuffer<FAdaptiveVolumetricShadowMapUniformBufferParameters> *this)

{
  this->_padding_ =
       (longlong)
       &___7__TRDGUniformBuffer_VFAdaptiveVolumetricShadowMapUniformBufferParameters____6B_;
  FRDGUniformBuffer::~FRDGUniformBuffer((FRDGUniformBuffer *)this);
  return;
}

// ~TRDGUniformBuffer<FAdaptiveVolumetricShadowMaps> @ 144a5ab50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGUniformBuffer<FAdaptiveVolumetricShadowMaps>::~TRDGUniformBuffer<FAdaptiveVolumetricShadowMaps>
          (TRDGUniformBuffer<FAdaptiveVolumetricShadowMaps> *this)

{
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFAdaptiveVolumetricShadowMaps____6B_;
  FRDGUniformBuffer::~FRDGUniformBuffer((FRDGUniformBuffer *)this);
  return;
}

// ~TRDGUniformBuffer<FLumenTranslucencyLightingUniforms> @ 144a5ab70

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TRDGUniformBuffer<FLumenTranslucencyLightingUniforms>::
~TRDGUniformBuffer<FLumenTranslucencyLightingUniforms>
          (TRDGUniformBuffer<FLumenTranslucencyLightingUniforms> *this)

{
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFLumenTranslucencyLightingUniforms____6B_;
  FRDGUniformBuffer::~FRDGUniformBuffer((FRDGUniformBuffer *)this);
  return;
}

// ~TRDGUniformBuffer<FVirtualVoxelParameters> @ 144a5ab90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGUniformBuffer<FVirtualVoxelParameters>::~TRDGUniformBuffer<FVirtualVoxelParameters>
          (TRDGUniformBuffer<FVirtualVoxelParameters> *this)

{
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFVirtualVoxelParameters____6B_;
  FRDGUniformBuffer::~FRDGUniformBuffer((FRDGUniformBuffer *)this);
  return;
}

// GetRHIRef @ 144a826b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TUniformBufferRef<FAdaptiveVolumetricShadowMapUniformBufferParameters> __thiscall
TRDGUniformBuffer<FAdaptiveVolumetricShadowMapUniformBufferParameters>::GetRHIRef
          (TRDGUniformBuffer<FAdaptiveVolumetricShadowMapUniformBufferParameters> *this)

{
  FRHIResource *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TUniformBufferRef<FAdaptiveVolumetricShadowMapUniformBufferParameters> TVar4;
  TUniformBufferRef<FAdaptiveVolumetricShadowMapUniformBufferParameters> in_RDX;
  
  FRDGResource::ValidateRHIAccess((FRDGResource *)this);
  this_00 = (FRHIResource *)this->_padding_;
  *(FRHIResource **)in_RDX = this_00;
  if (this_00 == (FRHIResource *)0x0) {
    return in_RDX;
  }
  FRHIResource::AddRef(this_00);
  pFVar3 = FAdaptiveVolumetricShadowMapUniformBufferParameters::GetStructMetadata();
  if (((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLayoutInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                         ,0x17c,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    TVar4 = (TUniformBufferRef<FAdaptiveVolumetricShadowMapUniformBufferParameters>)(*pcVar1)();
    return TVar4;
  }
  if ((FName)(pFVar3->Layout).Reference != this_00[2].OwnerName) {
    pFVar3 = FAdaptiveVolumetricShadowMapUniformBufferParameters::GetStructMetadata();
    if (((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsLayoutInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                           ,0x177,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      TVar4 = (TUniformBufferRef<FAdaptiveVolumetricShadowMapUniformBufferParameters>)(*pcVar1)();
      return TVar4;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InRHIRef || TUniformBufferMetadataHelper<TBufferStruct>::GetStructMetadata()->GetLayoutPtr() == InRHIRef->GetLayoutPtr()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                       ,0x96,
                       L"Attempted to create a uniform buffer of type \'%s\' from uniform buffer pointer of type \'%s\'"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar4 = (TUniformBufferRef<FAdaptiveVolumetricShadowMapUniformBufferParameters>)(*pcVar1)();
      return TVar4;
    }
  }
  return in_RDX;
}

// GetRHIRef @ 144a827e0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TUniformBufferRef<FForwardLightUniformParameters> __thiscall
TRDGUniformBuffer<FForwardLightUniformParameters>::GetRHIRef
          (TRDGUniformBuffer<FForwardLightUniformParameters> *this)

{
  FRHIResource *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TUniformBufferRef<FForwardLightUniformParameters> TVar4;
  TUniformBufferRef<FForwardLightUniformParameters> in_RDX;
  
  FRDGResource::ValidateRHIAccess((FRDGResource *)this);
  this_00 = (FRHIResource *)this->_padding_;
  *(FRHIResource **)in_RDX = this_00;
  if (this_00 == (FRHIResource *)0x0) {
    return in_RDX;
  }
  FRHIResource::AddRef(this_00);
  pFVar3 = FForwardLightUniformParameters::GetStructMetadata();
  if (((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLayoutInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                         ,0x17c,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    TVar4 = (TUniformBufferRef<FForwardLightUniformParameters>)(*pcVar1)();
    return TVar4;
  }
  if ((FName)(pFVar3->Layout).Reference != this_00[2].OwnerName) {
    pFVar3 = FForwardLightUniformParameters::GetStructMetadata();
    if (((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsLayoutInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                           ,0x177,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      TVar4 = (TUniformBufferRef<FForwardLightUniformParameters>)(*pcVar1)();
      return TVar4;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InRHIRef || TUniformBufferMetadataHelper<TBufferStruct>::GetStructMetadata()->GetLayoutPtr() == InRHIRef->GetLayoutPtr()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                       ,0x96,
                       L"Attempted to create a uniform buffer of type \'%s\' from uniform buffer pointer of type \'%s\'"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar4 = (TUniformBufferRef<FForwardLightUniformParameters>)(*pcVar1)();
      return TVar4;
    }
  }
  return in_RDX;
}

// GetRHIRef @ 144a82910

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TUniformBufferRef<FVirtualShadowMapUniformParameters> __thiscall
TRDGUniformBuffer<FVirtualShadowMapUniformParameters>::GetRHIRef
          (TRDGUniformBuffer<FVirtualShadowMapUniformParameters> *this)

{
  FRHIResource *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TUniformBufferRef<FVirtualShadowMapUniformParameters> TVar4;
  TUniformBufferRef<FVirtualShadowMapUniformParameters> in_RDX;
  
  FRDGResource::ValidateRHIAccess((FRDGResource *)this);
  this_00 = (FRHIResource *)this->_padding_;
  *(FRHIResource **)in_RDX = this_00;
  if (this_00 == (FRHIResource *)0x0) {
    return in_RDX;
  }
  FRHIResource::AddRef(this_00);
  pFVar3 = FVirtualShadowMapUniformParameters::GetStructMetadata();
  if (((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLayoutInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                         ,0x17c,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    TVar4 = (TUniformBufferRef<FVirtualShadowMapUniformParameters>)(*pcVar1)();
    return TVar4;
  }
  if ((FName)(pFVar3->Layout).Reference != this_00[2].OwnerName) {
    pFVar3 = FVirtualShadowMapUniformParameters::GetStructMetadata();
    if (((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsLayoutInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                           ,0x177,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      TVar4 = (TUniformBufferRef<FVirtualShadowMapUniformParameters>)(*pcVar1)();
      return TVar4;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InRHIRef || TUniformBufferMetadataHelper<TBufferStruct>::GetStructMetadata()->GetLayoutPtr() == InRHIRef->GetLayoutPtr()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                       ,0x96,
                       L"Attempted to create a uniform buffer of type \'%s\' from uniform buffer pointer of type \'%s\'"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar4 = (TUniformBufferRef<FVirtualShadowMapUniformParameters>)(*pcVar1)();
      return TVar4;
    }
  }
  return in_RDX;
}

// TRDGUniformBuffer<FBeerShadowMapUniformBufferParameters> @ 144afa200

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRDGUniformBuffer<FBeerShadowMapUniformBufferParameters> * __thiscall
TRDGUniformBuffer<FBeerShadowMapUniformBufferParameters>::
TRDGUniformBuffer<FBeerShadowMapUniformBufferParameters>
          (TRDGUniformBuffer<FBeerShadowMapUniformBufferParameters> *this,
          FBeerShadowMapUniformBufferParameters *param_1,wchar_t *param_2)

{
  FRHIUniformBufferLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGUniformBuffer<FBeerShadowMapUniformBufferParameters> *pTVar4;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGUniformBuffer__6B_;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  pFVar3 = FBeerShadowMapUniformBufferParameters::GetStructMetadata();
  this->_padding_ = (longlong)param_1;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGUniformBuffer<FBeerShadowMapUniformBufferParameters> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this_00 = (pFVar3->Layout).Reference;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)pFVar3;
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFBeerShadowMapUniformBufferParameters____6B_
  ;
  this->Parameters = param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// TRDGUniformBuffer<FFrustumVoxelGridUniformBufferParameters> @ 144afa2c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRDGUniformBuffer<FFrustumVoxelGridUniformBufferParameters> * __thiscall
TRDGUniformBuffer<FFrustumVoxelGridUniformBufferParameters>::
TRDGUniformBuffer<FFrustumVoxelGridUniformBufferParameters>
          (TRDGUniformBuffer<FFrustumVoxelGridUniformBufferParameters> *this,
          FFrustumVoxelGridUniformBufferParameters *param_1,wchar_t *param_2)

{
  FRHIUniformBufferLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGUniformBuffer<FFrustumVoxelGridUniformBufferParameters> *pTVar4;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGUniformBuffer__6B_;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  pFVar3 = FFrustumVoxelGridUniformBufferParameters::GetStructMetadata();
  this->_padding_ = (longlong)param_1;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGUniformBuffer<FFrustumVoxelGridUniformBufferParameters> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this_00 = (pFVar3->Layout).Reference;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)pFVar3;
  this->_padding_ =
       (longlong)&___7__TRDGUniformBuffer_VFFrustumVoxelGridUniformBufferParameters____6B_;
  this->Parameters = param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// TRDGUniformBuffer<FOrthoVoxelGridUniformBufferParameters> @ 144afa380

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRDGUniformBuffer<FOrthoVoxelGridUniformBufferParameters> * __thiscall
TRDGUniformBuffer<FOrthoVoxelGridUniformBufferParameters>::
TRDGUniformBuffer<FOrthoVoxelGridUniformBufferParameters>
          (TRDGUniformBuffer<FOrthoVoxelGridUniformBufferParameters> *this,
          FOrthoVoxelGridUniformBufferParameters *param_1,wchar_t *param_2)

{
  FRHIUniformBufferLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGUniformBuffer<FOrthoVoxelGridUniformBufferParameters> *pTVar4;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGUniformBuffer__6B_;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  pFVar3 = FOrthoVoxelGridUniformBufferParameters::GetStructMetadata();
  this->_padding_ = (longlong)param_1;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGUniformBuffer<FOrthoVoxelGridUniformBufferParameters> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this_00 = (pFVar3->Layout).Reference;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)pFVar3;
  this->_padding_ =
       (longlong)&___7__TRDGUniformBuffer_VFOrthoVoxelGridUniformBufferParameters____6B_;
  this->Parameters = param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// TRDGUniformBuffer<FReflectionUniformParameters> @ 144afa440

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRDGUniformBuffer<FReflectionUniformParameters> * __thiscall
TRDGUniformBuffer<FReflectionUniformParameters>::TRDGUniformBuffer<FReflectionUniformParameters>
          (TRDGUniformBuffer<FReflectionUniformParameters> *this,
          FReflectionUniformParameters *param_1,wchar_t *param_2)

{
  FRHIUniformBufferLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGUniformBuffer<FReflectionUniformParameters> *pTVar4;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGUniformBuffer__6B_;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  pFVar3 = FReflectionUniformParameters::GetStructMetadata();
  this->_padding_ = (longlong)param_1;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGUniformBuffer<FReflectionUniformParameters> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this_00 = (pFVar3->Layout).Reference;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)pFVar3;
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFReflectionUniformParameters____6B_;
  this->Parameters = param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// TRDGUniformBuffer<FSparseVoxelUniformBufferParameters> @ 144afa500

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TRDGUniformBuffer<FSparseVoxelUniformBufferParameters> * __thiscall
TRDGUniformBuffer<FSparseVoxelUniformBufferParameters>::
TRDGUniformBuffer<FSparseVoxelUniformBufferParameters>
          (TRDGUniformBuffer<FSparseVoxelUniformBufferParameters> *this,
          FSparseVoxelUniformBufferParameters *param_1,wchar_t *param_2)

{
  FRHIUniformBufferLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGUniformBuffer<FSparseVoxelUniformBufferParameters> *pTVar4;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGUniformBuffer__6B_;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  pFVar3 = FSparseVoxelUniformBufferParameters::GetStructMetadata();
  this->_padding_ = (longlong)param_1;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGUniformBuffer<FSparseVoxelUniformBufferParameters> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this_00 = (pFVar3->Layout).Reference;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)pFVar3;
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFSparseVoxelUniformBufferParameters____6B_;
  this->Parameters = param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// ~TRDGUniformBuffer<FBeerShadowMapUniformBufferParameters> @ 144afc340

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGUniformBuffer<FBeerShadowMapUniformBufferParameters>::
~TRDGUniformBuffer<FBeerShadowMapUniformBufferParameters>
          (TRDGUniformBuffer<FBeerShadowMapUniformBufferParameters> *this)

{
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFBeerShadowMapUniformBufferParameters____6B_
  ;
  FRDGUniformBuffer::~FRDGUniformBuffer((FRDGUniformBuffer *)this);
  return;
}

// ~TRDGUniformBuffer<FFrustumVoxelGridUniformBufferParameters> @ 144afc360

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGUniformBuffer<FFrustumVoxelGridUniformBufferParameters>::
~TRDGUniformBuffer<FFrustumVoxelGridUniformBufferParameters>
          (TRDGUniformBuffer<FFrustumVoxelGridUniformBufferParameters> *this)

{
  this->_padding_ =
       (longlong)&___7__TRDGUniformBuffer_VFFrustumVoxelGridUniformBufferParameters____6B_;
  FRDGUniformBuffer::~FRDGUniformBuffer((FRDGUniformBuffer *)this);
  return;
}

// ~TRDGUniformBuffer<FOrthoVoxelGridUniformBufferParameters> @ 144afc380

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGUniformBuffer<FOrthoVoxelGridUniformBufferParameters>::
~TRDGUniformBuffer<FOrthoVoxelGridUniformBufferParameters>
          (TRDGUniformBuffer<FOrthoVoxelGridUniformBufferParameters> *this)

{
  this->_padding_ =
       (longlong)&___7__TRDGUniformBuffer_VFOrthoVoxelGridUniformBufferParameters____6B_;
  FRDGUniformBuffer::~FRDGUniformBuffer((FRDGUniformBuffer *)this);
  return;
}

// ~TRDGUniformBuffer<FReflectionUniformParameters> @ 144afc3a0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGUniformBuffer<FReflectionUniformParameters>::~TRDGUniformBuffer<FReflectionUniformParameters>
          (TRDGUniformBuffer<FReflectionUniformParameters> *this)

{
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFReflectionUniformParameters____6B_;
  FRDGUniformBuffer::~FRDGUniformBuffer((FRDGUniformBuffer *)this);
  return;
}

// ~TRDGUniformBuffer<FSparseVoxelUniformBufferParameters> @ 144afc3c0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TRDGUniformBuffer<FSparseVoxelUniformBufferParameters>::
~TRDGUniformBuffer<FSparseVoxelUniformBufferParameters>
          (TRDGUniformBuffer<FSparseVoxelUniformBufferParameters> *this)

{
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFSparseVoxelUniformBufferParameters____6B_;
  FRDGUniformBuffer::~FRDGUniformBuffer((FRDGUniformBuffer *)this);
  return;
}

// TRDGUniformBuffer<FBatchedPrimitiveParameters> @ 144b96150

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRDGUniformBuffer<FBatchedPrimitiveParameters> * __thiscall
TRDGUniformBuffer<FBatchedPrimitiveParameters>::TRDGUniformBuffer<FBatchedPrimitiveParameters>
          (TRDGUniformBuffer<FBatchedPrimitiveParameters> *this,FBatchedPrimitiveParameters *param_1
          ,wchar_t *param_2)

{
  FRHIUniformBufferLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGUniformBuffer<FBatchedPrimitiveParameters> *pTVar4;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGUniformBuffer__6B_;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  pFVar3 = FBatchedPrimitiveParameters::GetStructMetadata();
  this->_padding_ = (longlong)param_1;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGUniformBuffer<FBatchedPrimitiveParameters> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this_00 = (pFVar3->Layout).Reference;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)pFVar3;
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFBatchedPrimitiveParameters____6B_;
  this->Parameters = param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// TRDGUniformBuffer<FDeferredLightUniformStruct> @ 144b96210

TRDGUniformBuffer<FDeferredLightUniformStruct> * __thiscall
TRDGUniformBuffer<FDeferredLightUniformStruct>::TRDGUniformBuffer<FDeferredLightUniformStruct>
          (TRDGUniformBuffer<FDeferredLightUniformStruct> *this,FDeferredLightUniformStruct *param_1
          ,wchar_t *param_2)

{
  FRHIUniformBufferLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGUniformBuffer<FDeferredLightUniformStruct> *pTVar4;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGUniformBuffer__6B_;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  pFVar3 = FDeferredLightUniformStruct::GetStructMetadata();
  this->_padding_ = (longlong)param_1;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGUniformBuffer<FDeferredLightUniformStruct> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this_00 = (pFVar3->Layout).Reference;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)pFVar3;
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFDeferredLightUniformStruct____6B_;
  this->Parameters = param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// TRDGUniformBuffer<FForwardLightUniformParameters> @ 144b962d0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TRDGUniformBuffer<FForwardLightUniformParameters> * __thiscall
TRDGUniformBuffer<FForwardLightUniformParameters>::TRDGUniformBuffer<FForwardLightUniformParameters>
          (TRDGUniformBuffer<FForwardLightUniformParameters> *this,
          FForwardLightUniformParameters *param_1,wchar_t *param_2)

{
  FRHIUniformBufferLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGUniformBuffer<FForwardLightUniformParameters> *pTVar4;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGUniformBuffer__6B_;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  pFVar3 = FForwardLightUniformParameters::GetStructMetadata();
  this->_padding_ = (longlong)param_1;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGUniformBuffer<FForwardLightUniformParameters> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this_00 = (pFVar3->Layout).Reference;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)pFVar3;
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFForwardLightUniformParameters____6B_;
  this->Parameters = param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// TRDGUniformBuffer<FInstanceCullingGlobalUniforms> @ 144b96390

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRDGUniformBuffer<FInstanceCullingGlobalUniforms> * __thiscall
TRDGUniformBuffer<FInstanceCullingGlobalUniforms>::TRDGUniformBuffer<FInstanceCullingGlobalUniforms>
          (TRDGUniformBuffer<FInstanceCullingGlobalUniforms> *this,
          FInstanceCullingGlobalUniforms *param_1,wchar_t *param_2)

{
  FRHIUniformBufferLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGUniformBuffer<FInstanceCullingGlobalUniforms> *pTVar4;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGUniformBuffer__6B_;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  pFVar3 = FInstanceCullingGlobalUniforms::GetStructMetadata();
  this->_padding_ = (longlong)param_1;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGUniformBuffer<FInstanceCullingGlobalUniforms> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this_00 = (pFVar3->Layout).Reference;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)pFVar3;
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFInstanceCullingGlobalUniforms____6B_;
  this->Parameters = param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// TRDGUniformBuffer<LightFunctionAtlas::FLightFunctionAtlasGlobalParameters> @ 144b96450

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TRDGUniformBuffer<LightFunctionAtlas::FLightFunctionAtlasGlobalParameters> * __thiscall
TRDGUniformBuffer<LightFunctionAtlas::FLightFunctionAtlasGlobalParameters>::
TRDGUniformBuffer<LightFunctionAtlas::FLightFunctionAtlasGlobalParameters>
          (TRDGUniformBuffer<LightFunctionAtlas::FLightFunctionAtlasGlobalParameters> *this,
          FLightFunctionAtlasGlobalParameters *param_1,wchar_t *param_2)

{
  FRHIUniformBufferLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGUniformBuffer<LightFunctionAtlas::FLightFunctionAtlasGlobalParameters> *pTVar4;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGUniformBuffer__6B_;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  pFVar3 = LightFunctionAtlas::FLightFunctionAtlasGlobalParameters::GetStructMetadata();
  this->_padding_ = (longlong)param_1;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGUniformBuffer<LightFunctionAtlas::FLightFunctionAtlasGlobalParameters> *)
               (*pcVar1)();
      return pTVar4;
    }
  }
  this_00 = (pFVar3->Layout).Reference;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)pFVar3;
  this->_padding_ =
       (longlong)
       &___7__TRDGUniformBuffer_VFLightFunctionAtlasGlobalParameters_LightFunctionAtlas____6B_;
  this->Parameters = param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// TRDGUniformBuffer<FLightmapDensityPassUniformParameters> @ 144b96510

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRDGUniformBuffer<FLightmapDensityPassUniformParameters> * __thiscall
TRDGUniformBuffer<FLightmapDensityPassUniformParameters>::
TRDGUniformBuffer<FLightmapDensityPassUniformParameters>
          (TRDGUniformBuffer<FLightmapDensityPassUniformParameters> *this,
          FLightmapDensityPassUniformParameters *param_1,wchar_t *param_2)

{
  FRHIUniformBufferLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGUniformBuffer<FLightmapDensityPassUniformParameters> *pTVar4;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGUniformBuffer__6B_;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  pFVar3 = FLightmapDensityPassUniformParameters::GetStructMetadata();
  this->_padding_ = (longlong)param_1;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGUniformBuffer<FLightmapDensityPassUniformParameters> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this_00 = (pFVar3->Layout).Reference;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)pFVar3;
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFLightmapDensityPassUniformParameters____6B_
  ;
  this->Parameters = param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// ~TRDGUniformBuffer<FBatchedPrimitiveParameters> @ 144b98f40

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGUniformBuffer<FBatchedPrimitiveParameters>::~TRDGUniformBuffer<FBatchedPrimitiveParameters>
          (TRDGUniformBuffer<FBatchedPrimitiveParameters> *this)

{
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFBatchedPrimitiveParameters____6B_;
  FRDGUniformBuffer::~FRDGUniformBuffer((FRDGUniformBuffer *)this);
  return;
}

// ~TRDGUniformBuffer<FDeferredLightUniformStruct> @ 144b98f60

void __thiscall
TRDGUniformBuffer<FDeferredLightUniformStruct>::~TRDGUniformBuffer<FDeferredLightUniformStruct>
          (TRDGUniformBuffer<FDeferredLightUniformStruct> *this)

{
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFDeferredLightUniformStruct____6B_;
  FRDGUniformBuffer::~FRDGUniformBuffer((FRDGUniformBuffer *)this);
  return;
}

// ~TRDGUniformBuffer<FForwardLightUniformParameters> @ 144b98f80

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TRDGUniformBuffer<FForwardLightUniformParameters>::
~TRDGUniformBuffer<FForwardLightUniformParameters>
          (TRDGUniformBuffer<FForwardLightUniformParameters> *this)

{
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFForwardLightUniformParameters____6B_;
  FRDGUniformBuffer::~FRDGUniformBuffer((FRDGUniformBuffer *)this);
  return;
}

// ~TRDGUniformBuffer<FInstanceCullingGlobalUniforms> @ 144b98fa0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGUniformBuffer<FInstanceCullingGlobalUniforms>::
~TRDGUniformBuffer<FInstanceCullingGlobalUniforms>
          (TRDGUniformBuffer<FInstanceCullingGlobalUniforms> *this)

{
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFInstanceCullingGlobalUniforms____6B_;
  FRDGUniformBuffer::~FRDGUniformBuffer((FRDGUniformBuffer *)this);
  return;
}

// ~TRDGUniformBuffer<LightFunctionAtlas::FLightFunctionAtlasGlobalParameters> @ 144b98fc0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TRDGUniformBuffer<LightFunctionAtlas::FLightFunctionAtlasGlobalParameters>::
~TRDGUniformBuffer<LightFunctionAtlas::FLightFunctionAtlasGlobalParameters>
          (TRDGUniformBuffer<LightFunctionAtlas::FLightFunctionAtlasGlobalParameters> *this)

{
  this->_padding_ =
       (longlong)
       &___7__TRDGUniformBuffer_VFLightFunctionAtlasGlobalParameters_LightFunctionAtlas____6B_;
  FRDGUniformBuffer::~FRDGUniformBuffer((FRDGUniformBuffer *)this);
  return;
}

// ~TRDGUniformBuffer<FLightmapDensityPassUniformParameters> @ 144b98fe0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGUniformBuffer<FLightmapDensityPassUniformParameters>::
~TRDGUniformBuffer<FLightmapDensityPassUniformParameters>
          (TRDGUniformBuffer<FLightmapDensityPassUniformParameters> *this)

{
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFLightmapDensityPassUniformParameters____6B_
  ;
  FRDGUniformBuffer::~FRDGUniformBuffer((FRDGUniformBuffer *)this);
  return;
}

// TRDGUniformBuffer<FLocalFogVolumeUniformParameters> @ 144c1d830

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRDGUniformBuffer<FLocalFogVolumeUniformParameters> * __thiscall
TRDGUniformBuffer<FLocalFogVolumeUniformParameters>::
TRDGUniformBuffer<FLocalFogVolumeUniformParameters>
          (TRDGUniformBuffer<FLocalFogVolumeUniformParameters> *this,
          FLocalFogVolumeUniformParameters *param_1,wchar_t *param_2)

{
  FRHIUniformBufferLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGUniformBuffer<FLocalFogVolumeUniformParameters> *pTVar4;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGUniformBuffer__6B_;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  pFVar3 = FLocalFogVolumeUniformParameters::FTypeInfo::GetStructMetadata();
  this->_padding_ = (longlong)param_1;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGUniformBuffer<FLocalFogVolumeUniformParameters> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this_00 = (pFVar3->Layout).Reference;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)pFVar3;
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFLocalFogVolumeUniformParameters____6B_;
  this->Parameters = param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// TRDGUniformBuffer<FLumenFrontLayerTranslucencyGBufferPassUniformParameters> @ 144c1d8f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRDGUniformBuffer<FLumenFrontLayerTranslucencyGBufferPassUniformParameters> * __thiscall
TRDGUniformBuffer<FLumenFrontLayerTranslucencyGBufferPassUniformParameters>::
TRDGUniformBuffer<FLumenFrontLayerTranslucencyGBufferPassUniformParameters>
          (TRDGUniformBuffer<FLumenFrontLayerTranslucencyGBufferPassUniformParameters> *this,
          FLumenFrontLayerTranslucencyGBufferPassUniformParameters *param_1,wchar_t *param_2)

{
  FRHIUniformBufferLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGUniformBuffer<FLumenFrontLayerTranslucencyGBufferPassUniformParameters> *pTVar4;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGUniformBuffer__6B_;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  pFVar3 = FLumenFrontLayerTranslucencyGBufferPassUniformParameters::GetStructMetadata();
  this->_padding_ = (longlong)param_1;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGUniformBuffer<FLumenFrontLayerTranslucencyGBufferPassUniformParameters> *)
               (*pcVar1)();
      return pTVar4;
    }
  }
  this_00 = (pFVar3->Layout).Reference;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)pFVar3;
  this->_padding_ =
       (longlong)
       &___7__TRDGUniformBuffer_VFLumenFrontLayerTranslucencyGBufferPassUniformParameters____6B_;
  this->Parameters = param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// ~TRDGUniformBuffer<FLocalFogVolumeUniformParameters> @ 144c1e920

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGUniformBuffer<FLocalFogVolumeUniformParameters>::
~TRDGUniformBuffer<FLocalFogVolumeUniformParameters>
          (TRDGUniformBuffer<FLocalFogVolumeUniformParameters> *this)

{
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFLocalFogVolumeUniformParameters____6B_;
  FRDGUniformBuffer::~FRDGUniformBuffer((FRDGUniformBuffer *)this);
  return;
}

// ~TRDGUniformBuffer<FLumenFrontLayerTranslucencyGBufferPassUniformParameters> @ 144c1e940

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGUniformBuffer<FLumenFrontLayerTranslucencyGBufferPassUniformParameters>::
~TRDGUniformBuffer<FLumenFrontLayerTranslucencyGBufferPassUniformParameters>
          (TRDGUniformBuffer<FLumenFrontLayerTranslucencyGBufferPassUniformParameters> *this)

{
  this->_padding_ =
       (longlong)
       &___7__TRDGUniformBuffer_VFLumenFrontLayerTranslucencyGBufferPassUniformParameters____6B_;
  FRDGUniformBuffer::~FRDGUniformBuffer((FRDGUniformBuffer *)this);
  return;
}

// TRDGUniformBuffer<FLumenCardPassUniformParameters> @ 144d3da20

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TRDGUniformBuffer<FLumenCardPassUniformParameters> * __thiscall
TRDGUniformBuffer<FLumenCardPassUniformParameters>::
TRDGUniformBuffer<FLumenCardPassUniformParameters>
          (TRDGUniformBuffer<FLumenCardPassUniformParameters> *this,
          FLumenCardPassUniformParameters *param_1,wchar_t *param_2)

{
  FRHIUniformBufferLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGUniformBuffer<FLumenCardPassUniformParameters> *pTVar4;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGUniformBuffer__6B_;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  pFVar3 = FLumenCardPassUniformParameters::GetStructMetadata();
  this->_padding_ = (longlong)param_1;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGUniformBuffer<FLumenCardPassUniformParameters> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this_00 = (pFVar3->Layout).Reference;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)pFVar3;
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFLumenCardPassUniformParameters____6B_;
  this->Parameters = param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// TRDGUniformBuffer<FLumenCardScene> @ 144d3dae0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRDGUniformBuffer<FLumenCardScene> * __thiscall
TRDGUniformBuffer<FLumenCardScene>::TRDGUniformBuffer<FLumenCardScene>
          (TRDGUniformBuffer<FLumenCardScene> *this,FLumenCardScene *param_1,wchar_t *param_2)

{
  FRHIUniformBufferLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGUniformBuffer<FLumenCardScene> *pTVar4;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGUniformBuffer__6B_;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  pFVar3 = FLumenCardScene::GetStructMetadata();
  this->_padding_ = (longlong)param_1;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGUniformBuffer<FLumenCardScene> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this_00 = (pFVar3->Layout).Reference;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)pFVar3;
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFLumenCardScene____6B_;
  this->Parameters = param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// TRDGUniformBuffer<FViewUniformShaderParameters> @ 144d3dba0

TRDGUniformBuffer<FViewUniformShaderParameters> * __thiscall
TRDGUniformBuffer<FViewUniformShaderParameters>::TRDGUniformBuffer<FViewUniformShaderParameters>
          (TRDGUniformBuffer<FViewUniformShaderParameters> *this,
          FViewUniformShaderParameters *param_1,wchar_t *param_2)

{
  FRHIUniformBufferLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGUniformBuffer<FViewUniformShaderParameters> *pTVar4;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGUniformBuffer__6B_;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  pFVar3 = FViewUniformShaderParameters::GetStructMetadata();
  this->_padding_ = (longlong)param_1;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGUniformBuffer<FViewUniformShaderParameters> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this_00 = (pFVar3->Layout).Reference;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)pFVar3;
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFViewUniformShaderParameters____6B_;
  this->Parameters = param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// ~TRDGUniformBuffer<FLumenCardPassUniformParameters> @ 144d423a0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TRDGUniformBuffer<FLumenCardPassUniformParameters>::
~TRDGUniformBuffer<FLumenCardPassUniformParameters>
          (TRDGUniformBuffer<FLumenCardPassUniformParameters> *this)

{
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFLumenCardPassUniformParameters____6B_;
  FRDGUniformBuffer::~FRDGUniformBuffer((FRDGUniformBuffer *)this);
  return;
}

// ~TRDGUniformBuffer<FLumenCardScene> @ 144d423c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGUniformBuffer<FLumenCardScene>::~TRDGUniformBuffer<FLumenCardScene>
          (TRDGUniformBuffer<FLumenCardScene> *this)

{
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFLumenCardScene____6B_;
  FRDGUniformBuffer::~FRDGUniformBuffer((FRDGUniformBuffer *)this);
  return;
}

// ~TRDGUniformBuffer<FViewUniformShaderParameters> @ 144d423e0

void __thiscall
TRDGUniformBuffer<FViewUniformShaderParameters>::~TRDGUniformBuffer<FViewUniformShaderParameters>
          (TRDGUniformBuffer<FViewUniformShaderParameters> *this)

{
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFViewUniformShaderParameters____6B_;
  FRDGUniformBuffer::~FRDGUniformBuffer((FRDGUniformBuffer *)this);
  return;
}

// TRDGUniformBuffer<FLumenTranslucencyRadianceCacheMarkPassUniformParameters> @ 144df20a0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRDGUniformBuffer<FLumenTranslucencyRadianceCacheMarkPassUniformParameters> * __thiscall
TRDGUniformBuffer<FLumenTranslucencyRadianceCacheMarkPassUniformParameters>::
TRDGUniformBuffer<FLumenTranslucencyRadianceCacheMarkPassUniformParameters>
          (TRDGUniformBuffer<FLumenTranslucencyRadianceCacheMarkPassUniformParameters> *this,
          FLumenTranslucencyRadianceCacheMarkPassUniformParameters *param_1,wchar_t *param_2)

{
  FRHIUniformBufferLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGUniformBuffer<FLumenTranslucencyRadianceCacheMarkPassUniformParameters> *pTVar4;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGUniformBuffer__6B_;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  pFVar3 = FLumenTranslucencyRadianceCacheMarkPassUniformParameters::GetStructMetadata();
  this->_padding_ = (longlong)param_1;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGUniformBuffer<FLumenTranslucencyRadianceCacheMarkPassUniformParameters> *)
               (*pcVar1)();
      return pTVar4;
    }
  }
  this_00 = (pFVar3->Layout).Reference;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)pFVar3;
  this->_padding_ =
       (longlong)
       &___7__TRDGUniformBuffer_VFLumenTranslucencyRadianceCacheMarkPassUniformParameters____6B_;
  this->Parameters = param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// ~TRDGUniformBuffer<FLumenTranslucencyRadianceCacheMarkPassUniformParameters> @ 144df4f50

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGUniformBuffer<FLumenTranslucencyRadianceCacheMarkPassUniformParameters>::
~TRDGUniformBuffer<FLumenTranslucencyRadianceCacheMarkPassUniformParameters>
          (TRDGUniformBuffer<FLumenTranslucencyRadianceCacheMarkPassUniformParameters> *this)

{
  this->_padding_ =
       (longlong)
       &___7__TRDGUniformBuffer_VFLumenTranslucencyRadianceCacheMarkPassUniformParameters____6B_;
  FRDGUniformBuffer::~FRDGUniformBuffer((FRDGUniformBuffer *)this);
  return;
}

// TRDGUniformBuffer<FMaterialCacheUniformParameters> @ 144e70b80

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TRDGUniformBuffer<FMaterialCacheUniformParameters> * __thiscall
TRDGUniformBuffer<FMaterialCacheUniformParameters>::
TRDGUniformBuffer<FMaterialCacheUniformParameters>
          (TRDGUniformBuffer<FMaterialCacheUniformParameters> *this,
          FMaterialCacheUniformParameters *param_1,wchar_t *param_2)

{
  FRHIUniformBufferLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGUniformBuffer<FMaterialCacheUniformParameters> *pTVar4;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGUniformBuffer__6B_;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  pFVar3 = FMaterialCacheUniformParameters::GetStructMetadata();
  this->_padding_ = (longlong)param_1;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGUniformBuffer<FMaterialCacheUniformParameters> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this_00 = (pFVar3->Layout).Reference;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)pFVar3;
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFMaterialCacheUniformParameters____6B_;
  this->Parameters = param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// TRDGUniformBuffer<FNaniteRasterUniformParameters> @ 144e70c40

TRDGUniformBuffer<FNaniteRasterUniformParameters> * __thiscall
TRDGUniformBuffer<FNaniteRasterUniformParameters>::TRDGUniformBuffer<FNaniteRasterUniformParameters>
          (TRDGUniformBuffer<FNaniteRasterUniformParameters> *this,
          FNaniteRasterUniformParameters *param_1,wchar_t *param_2)

{
  FRHIUniformBufferLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGUniformBuffer<FNaniteRasterUniformParameters> *pTVar4;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGUniformBuffer__6B_;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  pFVar3 = FNaniteRasterUniformParameters::GetStructMetadata();
  this->_padding_ = (longlong)param_1;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGUniformBuffer<FNaniteRasterUniformParameters> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this_00 = (pFVar3->Layout).Reference;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)pFVar3;
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFNaniteRasterUniformParameters____6B_;
  this->Parameters = param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// TRDGUniformBuffer<FNaniteShadingUniformParameters> @ 144e70d00

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRDGUniformBuffer<FNaniteShadingUniformParameters> * __thiscall
TRDGUniformBuffer<FNaniteShadingUniformParameters>::
TRDGUniformBuffer<FNaniteShadingUniformParameters>
          (TRDGUniformBuffer<FNaniteShadingUniformParameters> *this,
          FNaniteShadingUniformParameters *param_1,wchar_t *param_2)

{
  FRHIUniformBufferLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGUniformBuffer<FNaniteShadingUniformParameters> *pTVar4;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGUniformBuffer__6B_;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  pFVar3 = FNaniteShadingUniformParameters::GetStructMetadata();
  this->_padding_ = (longlong)param_1;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGUniformBuffer<FNaniteShadingUniformParameters> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this_00 = (pFVar3->Layout).Reference;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)pFVar3;
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFNaniteShadingUniformParameters____6B_;
  this->Parameters = param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// ~TRDGUniformBuffer<FMaterialCacheUniformParameters> @ 144e73e90

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TRDGUniformBuffer<FMaterialCacheUniformParameters>::
~TRDGUniformBuffer<FMaterialCacheUniformParameters>
          (TRDGUniformBuffer<FMaterialCacheUniformParameters> *this)

{
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFMaterialCacheUniformParameters____6B_;
  FRDGUniformBuffer::~FRDGUniformBuffer((FRDGUniformBuffer *)this);
  return;
}

// ~TRDGUniformBuffer<FNaniteRasterUniformParameters> @ 144e73eb0

void __thiscall
TRDGUniformBuffer<FNaniteRasterUniformParameters>::
~TRDGUniformBuffer<FNaniteRasterUniformParameters>
          (TRDGUniformBuffer<FNaniteRasterUniformParameters> *this)

{
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFNaniteRasterUniformParameters____6B_;
  FRDGUniformBuffer::~FRDGUniformBuffer((FRDGUniformBuffer *)this);
  return;
}

// ~TRDGUniformBuffer<FNaniteShadingUniformParameters> @ 144e73ed0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGUniformBuffer<FNaniteShadingUniformParameters>::
~TRDGUniformBuffer<FNaniteShadingUniformParameters>
          (TRDGUniformBuffer<FNaniteShadingUniformParameters> *this)

{
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFNaniteShadingUniformParameters____6B_;
  FRDGUniformBuffer::~FRDGUniformBuffer((FRDGUniformBuffer *)this);
  return;
}

// TRDGUniformBuffer<FMobileBasePassUniformParameters> @ 144f66db0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TRDGUniformBuffer<FMobileBasePassUniformParameters> * __thiscall
TRDGUniformBuffer<FMobileBasePassUniformParameters>::
TRDGUniformBuffer<FMobileBasePassUniformParameters>
          (TRDGUniformBuffer<FMobileBasePassUniformParameters> *this,
          FMobileBasePassUniformParameters *param_1,wchar_t *param_2)

{
  FRHIUniformBufferLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGUniformBuffer<FMobileBasePassUniformParameters> *pTVar4;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGUniformBuffer__6B_;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  pFVar3 = FMobileBasePassUniformParameters::GetStructMetadata();
  this->_padding_ = (longlong)param_1;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGUniformBuffer<FMobileBasePassUniformParameters> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this_00 = (pFVar3->Layout).Reference;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)pFVar3;
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFMobileBasePassUniformParameters____6B_;
  this->Parameters = param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// TRDGUniformBuffer<FMobileDistortionPassUniformParameters> @ 144f66e70

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRDGUniformBuffer<FMobileDistortionPassUniformParameters> * __thiscall
TRDGUniformBuffer<FMobileDistortionPassUniformParameters>::
TRDGUniformBuffer<FMobileDistortionPassUniformParameters>
          (TRDGUniformBuffer<FMobileDistortionPassUniformParameters> *this,
          FMobileDistortionPassUniformParameters *param_1,wchar_t *param_2)

{
  FRHIUniformBufferLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGUniformBuffer<FMobileDistortionPassUniformParameters> *pTVar4;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGUniformBuffer__6B_;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  pFVar3 = FMobileDistortionPassUniformParameters::GetStructMetadata();
  this->_padding_ = (longlong)param_1;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGUniformBuffer<FMobileDistortionPassUniformParameters> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this_00 = (pFVar3->Layout).Reference;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)pFVar3;
  this->_padding_ =
       (longlong)&___7__TRDGUniformBuffer_VFMobileDistortionPassUniformParameters____6B_;
  this->Parameters = param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// ~TRDGUniformBuffer<FMobileBasePassUniformParameters> @ 144f6cdb0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TRDGUniformBuffer<FMobileBasePassUniformParameters>::
~TRDGUniformBuffer<FMobileBasePassUniformParameters>
          (TRDGUniformBuffer<FMobileBasePassUniformParameters> *this)

{
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFMobileBasePassUniformParameters____6B_;
  FRDGUniformBuffer::~FRDGUniformBuffer((FRDGUniformBuffer *)this);
  return;
}

// ~TRDGUniformBuffer<FMobileDistortionPassUniformParameters> @ 144f6cdd0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGUniformBuffer<FMobileDistortionPassUniformParameters>::
~TRDGUniformBuffer<FMobileDistortionPassUniformParameters>
          (TRDGUniformBuffer<FMobileDistortionPassUniformParameters> *this)

{
  this->_padding_ =
       (longlong)&___7__TRDGUniformBuffer_VFMobileDistortionPassUniformParameters____6B_;
  FRDGUniformBuffer::~FRDGUniformBuffer((FRDGUniformBuffer *)this);
  return;
}

// TRDGUniformBuffer<FComputeShadingOutputs> @ 145035ca0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRDGUniformBuffer<FComputeShadingOutputs> * __thiscall
TRDGUniformBuffer<FComputeShadingOutputs>::TRDGUniformBuffer<FComputeShadingOutputs>
          (TRDGUniformBuffer<FComputeShadingOutputs> *this,FComputeShadingOutputs *param_1,
          wchar_t *param_2)

{
  FRHIUniformBufferLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGUniformBuffer<FComputeShadingOutputs> *pTVar4;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGUniformBuffer__6B_;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  pFVar3 = FComputeShadingOutputs::GetStructMetadata();
  this->_padding_ = (longlong)param_1;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGUniformBuffer<FComputeShadingOutputs> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this_00 = (pFVar3->Layout).Reference;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)pFVar3;
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFComputeShadingOutputs____6B_;
  this->Parameters = param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// TRDGUniformBuffer<FLumenCardOutputs> @ 145035d60

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRDGUniformBuffer<FLumenCardOutputs> * __thiscall
TRDGUniformBuffer<FLumenCardOutputs>::TRDGUniformBuffer<FLumenCardOutputs>
          (TRDGUniformBuffer<FLumenCardOutputs> *this,FLumenCardOutputs *param_1,wchar_t *param_2)

{
  FRHIUniformBufferLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGUniformBuffer<FLumenCardOutputs> *pTVar4;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGUniformBuffer__6B_;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  pFVar3 = FLumenCardOutputs::GetStructMetadata();
  this->_padding_ = (longlong)param_1;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGUniformBuffer<FLumenCardOutputs> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this_00 = (pFVar3->Layout).Reference;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)pFVar3;
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFLumenCardOutputs____6B_;
  this->Parameters = param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// TRDGUniformBuffer<FNaniteRayTracingUniformParameters> @ 145035e20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRDGUniformBuffer<FNaniteRayTracingUniformParameters> * __thiscall
TRDGUniformBuffer<FNaniteRayTracingUniformParameters>::
TRDGUniformBuffer<FNaniteRayTracingUniformParameters>
          (TRDGUniformBuffer<FNaniteRayTracingUniformParameters> *this,
          FNaniteRayTracingUniformParameters *param_1,wchar_t *param_2)

{
  FRHIUniformBufferLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGUniformBuffer<FNaniteRayTracingUniformParameters> *pTVar4;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGUniformBuffer__6B_;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  pFVar3 = FNaniteRayTracingUniformParameters::GetStructMetadata();
  this->_padding_ = (longlong)param_1;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGUniformBuffer<FNaniteRayTracingUniformParameters> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this_00 = (pFVar3->Layout).Reference;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)pFVar3;
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFNaniteRayTracingUniformParameters____6B_;
  this->Parameters = param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// ~TRDGUniformBuffer<FComputeShadingOutputs> @ 145037b30

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGUniformBuffer<FComputeShadingOutputs>::~TRDGUniformBuffer<FComputeShadingOutputs>
          (TRDGUniformBuffer<FComputeShadingOutputs> *this)

{
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFComputeShadingOutputs____6B_;
  FRDGUniformBuffer::~FRDGUniformBuffer((FRDGUniformBuffer *)this);
  return;
}

// ~TRDGUniformBuffer<FLumenCardOutputs> @ 145037b50

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGUniformBuffer<FLumenCardOutputs>::~TRDGUniformBuffer<FLumenCardOutputs>
          (TRDGUniformBuffer<FLumenCardOutputs> *this)

{
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFLumenCardOutputs____6B_;
  FRDGUniformBuffer::~FRDGUniformBuffer((FRDGUniformBuffer *)this);
  return;
}

// ~TRDGUniformBuffer<FNaniteRayTracingUniformParameters> @ 145037b70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGUniformBuffer<FNaniteRayTracingUniformParameters>::
~TRDGUniformBuffer<FNaniteRayTracingUniformParameters>
          (TRDGUniformBuffer<FNaniteRayTracingUniformParameters> *this)

{
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFNaniteRayTracingUniformParameters____6B_;
  FRDGUniformBuffer::~FRDGUniformBuffer((FRDGUniformBuffer *)this);
  return;
}

// TRDGUniformBuffer<FRayTracingDebugHitStatsUniformBufferParameters> @ 1452fd5c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRDGUniformBuffer<FRayTracingDebugHitStatsUniformBufferParameters> * __thiscall
TRDGUniformBuffer<FRayTracingDebugHitStatsUniformBufferParameters>::
TRDGUniformBuffer<FRayTracingDebugHitStatsUniformBufferParameters>
          (TRDGUniformBuffer<FRayTracingDebugHitStatsUniformBufferParameters> *this,
          FRayTracingDebugHitStatsUniformBufferParameters *param_1,wchar_t *param_2)

{
  FRHIUniformBufferLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGUniformBuffer<FRayTracingDebugHitStatsUniformBufferParameters> *pTVar4;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGUniformBuffer__6B_;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  pFVar3 = FRayTracingDebugHitStatsUniformBufferParameters::GetStructMetadata();
  this->_padding_ = (longlong)param_1;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGUniformBuffer<FRayTracingDebugHitStatsUniformBufferParameters> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this_00 = (pFVar3->Layout).Reference;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)pFVar3;
  this->_padding_ =
       (longlong)&___7__TRDGUniformBuffer_VFRayTracingDebugHitStatsUniformBufferParameters____6B_;
  this->Parameters = param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// TRDGUniformBuffer<FRayTracingDecals> @ 1452fd680

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TRDGUniformBuffer<FRayTracingDecals> * __thiscall
TRDGUniformBuffer<FRayTracingDecals>::TRDGUniformBuffer<FRayTracingDecals>
          (TRDGUniformBuffer<FRayTracingDecals> *this,FRayTracingDecals *param_1,wchar_t *param_2)

{
  FRHIUniformBufferLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGUniformBuffer<FRayTracingDecals> *pTVar4;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGUniformBuffer__6B_;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  pFVar3 = FRayTracingDecals::GetStructMetadata();
  this->_padding_ = (longlong)param_1;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGUniformBuffer<FRayTracingDecals> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this_00 = (pFVar3->Layout).Reference;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)pFVar3;
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFRayTracingDecals____6B_;
  this->Parameters = param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// TRDGUniformBuffer<FRayTracingLightGrid> @ 1452fd740

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRDGUniformBuffer<FRayTracingLightGrid> * __thiscall
TRDGUniformBuffer<FRayTracingLightGrid>::TRDGUniformBuffer<FRayTracingLightGrid>
          (TRDGUniformBuffer<FRayTracingLightGrid> *this,FRayTracingLightGrid *param_1,
          wchar_t *param_2)

{
  FRHIUniformBufferLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGUniformBuffer<FRayTracingLightGrid> *pTVar4;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGUniformBuffer__6B_;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  pFVar3 = FRayTracingLightGrid::GetStructMetadata();
  this->_padding_ = (longlong)param_1;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGUniformBuffer<FRayTracingLightGrid> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this_00 = (pFVar3->Layout).Reference;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)pFVar3;
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFRayTracingLightGrid____6B_;
  this->Parameters = param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// ~TRDGUniformBuffer<FRayTracingDebugHitStatsUniformBufferParameters> @ 1452ff480

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGUniformBuffer<FRayTracingDebugHitStatsUniformBufferParameters>::
~TRDGUniformBuffer<FRayTracingDebugHitStatsUniformBufferParameters>
          (TRDGUniformBuffer<FRayTracingDebugHitStatsUniformBufferParameters> *this)

{
  this->_padding_ =
       (longlong)&___7__TRDGUniformBuffer_VFRayTracingDebugHitStatsUniformBufferParameters____6B_;
  FRDGUniformBuffer::~FRDGUniformBuffer((FRDGUniformBuffer *)this);
  return;
}

// ~TRDGUniformBuffer<FRayTracingDecals> @ 1452ff4a0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TRDGUniformBuffer<FRayTracingDecals>::~TRDGUniformBuffer<FRayTracingDecals>
          (TRDGUniformBuffer<FRayTracingDecals> *this)

{
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFRayTracingDecals____6B_;
  FRDGUniformBuffer::~FRDGUniformBuffer((FRDGUniformBuffer *)this);
  return;
}

// ~TRDGUniformBuffer<FRayTracingLightGrid> @ 1452ff4c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGUniformBuffer<FRayTracingLightGrid>::~TRDGUniformBuffer<FRayTracingLightGrid>
          (TRDGUniformBuffer<FRayTracingLightGrid> *this)

{
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFRayTracingLightGrid____6B_;
  FRDGUniformBuffer::~FRDGUniformBuffer((FRDGUniformBuffer *)this);
  return;
}

// TRDGUniformBuffer<FMobileSceneTextureUniformParameters> @ 1454d0bb0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRDGUniformBuffer<FMobileSceneTextureUniformParameters> * __thiscall
TRDGUniformBuffer<FMobileSceneTextureUniformParameters>::
TRDGUniformBuffer<FMobileSceneTextureUniformParameters>
          (TRDGUniformBuffer<FMobileSceneTextureUniformParameters> *this,
          FMobileSceneTextureUniformParameters *param_1,wchar_t *param_2)

{
  FRHIUniformBufferLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGUniformBuffer<FMobileSceneTextureUniformParameters> *pTVar4;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGUniformBuffer__6B_;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  pFVar3 = FMobileSceneTextureUniformParameters::GetStructMetadata();
  this->_padding_ = (longlong)param_1;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGUniformBuffer<FMobileSceneTextureUniformParameters> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this_00 = (pFVar3->Layout).Reference;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)pFVar3;
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFMobileSceneTextureUniformParameters____6B_;
  this->Parameters = param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// TRDGUniformBuffer<FSceneTextureUniformParameters> @ 1454d0c70

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRDGUniformBuffer<FSceneTextureUniformParameters> * __thiscall
TRDGUniformBuffer<FSceneTextureUniformParameters>::TRDGUniformBuffer<FSceneTextureUniformParameters>
          (TRDGUniformBuffer<FSceneTextureUniformParameters> *this,
          FSceneTextureUniformParameters *param_1,wchar_t *param_2)

{
  FRHIUniformBufferLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGUniformBuffer<FSceneTextureUniformParameters> *pTVar4;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGUniformBuffer__6B_;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  pFVar3 = FSceneTextureUniformParameters::GetStructMetadata();
  this->_padding_ = (longlong)param_1;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGUniformBuffer<FSceneTextureUniformParameters> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this_00 = (pFVar3->Layout).Reference;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)pFVar3;
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFSceneTextureUniformParameters____6B_;
  this->Parameters = param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// TRDGUniformBuffer<FSceneUniformParameters> @ 1454d0d30

TRDGUniformBuffer<FSceneUniformParameters> * __thiscall
TRDGUniformBuffer<FSceneUniformParameters>::TRDGUniformBuffer<FSceneUniformParameters>
          (TRDGUniformBuffer<FSceneUniformParameters> *this,FSceneUniformParameters *param_1,
          wchar_t *param_2)

{
  FRHIUniformBufferLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGUniformBuffer<FSceneUniformParameters> *pTVar4;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGUniformBuffer__6B_;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  pFVar3 = FSceneUniformParameters::FTypeInfo::GetStructMetadata();
  this->_padding_ = (longlong)param_1;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGUniformBuffer<FSceneUniformParameters> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this_00 = (pFVar3->Layout).Reference;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)pFVar3;
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFSceneUniformParameters____6B_;
  this->Parameters = param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// ~TRDGUniformBuffer<FMobileSceneTextureUniformParameters> @ 1454d6b90

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGUniformBuffer<FMobileSceneTextureUniformParameters>::
~TRDGUniformBuffer<FMobileSceneTextureUniformParameters>
          (TRDGUniformBuffer<FMobileSceneTextureUniformParameters> *this)

{
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFMobileSceneTextureUniformParameters____6B_;
  FRDGUniformBuffer::~FRDGUniformBuffer((FRDGUniformBuffer *)this);
  return;
}

// ~TRDGUniformBuffer<FSceneTextureUniformParameters> @ 1454d6bb0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGUniformBuffer<FSceneTextureUniformParameters>::
~TRDGUniformBuffer<FSceneTextureUniformParameters>
          (TRDGUniformBuffer<FSceneTextureUniformParameters> *this)

{
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFSceneTextureUniformParameters____6B_;
  FRDGUniformBuffer::~FRDGUniformBuffer((FRDGUniformBuffer *)this);
  return;
}

// ~TRDGUniformBuffer<FSceneUniformParameters> @ 1454d6bd0

void __thiscall
TRDGUniformBuffer<FSceneUniformParameters>::~TRDGUniformBuffer<FSceneUniformParameters>
          (TRDGUniformBuffer<FSceneUniformParameters> *this)

{
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFSceneUniformParameters____6B_;
  FRDGUniformBuffer::~FRDGUniformBuffer((FRDGUniformBuffer *)this);
  return;
}

// TRDGUniformBuffer<FMobileShadowDepthPassUniformParameters> @ 145572800

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRDGUniformBuffer<FMobileShadowDepthPassUniformParameters> * __thiscall
TRDGUniformBuffer<FMobileShadowDepthPassUniformParameters>::
TRDGUniformBuffer<FMobileShadowDepthPassUniformParameters>
          (TRDGUniformBuffer<FMobileShadowDepthPassUniformParameters> *this,
          FMobileShadowDepthPassUniformParameters *param_1,wchar_t *param_2)

{
  FRHIUniformBufferLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGUniformBuffer<FMobileShadowDepthPassUniformParameters> *pTVar4;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGUniformBuffer__6B_;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  pFVar3 = FMobileShadowDepthPassUniformParameters::GetStructMetadata();
  this->_padding_ = (longlong)param_1;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGUniformBuffer<FMobileShadowDepthPassUniformParameters> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this_00 = (pFVar3->Layout).Reference;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)pFVar3;
  this->_padding_ =
       (longlong)&___7__TRDGUniformBuffer_VFMobileShadowDepthPassUniformParameters____6B_;
  this->Parameters = param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// TRDGUniformBuffer<FShadowDepthPassUniformParameters> @ 1455728c0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TRDGUniformBuffer<FShadowDepthPassUniformParameters> * __thiscall
TRDGUniformBuffer<FShadowDepthPassUniformParameters>::
TRDGUniformBuffer<FShadowDepthPassUniformParameters>
          (TRDGUniformBuffer<FShadowDepthPassUniformParameters> *this,
          FShadowDepthPassUniformParameters *param_1,wchar_t *param_2)

{
  FRHIUniformBufferLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGUniformBuffer<FShadowDepthPassUniformParameters> *pTVar4;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGUniformBuffer__6B_;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  pFVar3 = FShadowDepthPassUniformParameters::GetStructMetadata();
  this->_padding_ = (longlong)param_1;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGUniformBuffer<FShadowDepthPassUniformParameters> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this_00 = (pFVar3->Layout).Reference;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)pFVar3;
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFShadowDepthPassUniformParameters____6B_;
  this->Parameters = param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// ~TRDGUniformBuffer<FMobileShadowDepthPassUniformParameters> @ 145576d40

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGUniformBuffer<FMobileShadowDepthPassUniformParameters>::
~TRDGUniformBuffer<FMobileShadowDepthPassUniformParameters>
          (TRDGUniformBuffer<FMobileShadowDepthPassUniformParameters> *this)

{
  this->_padding_ =
       (longlong)&___7__TRDGUniformBuffer_VFMobileShadowDepthPassUniformParameters____6B_;
  FRDGUniformBuffer::~FRDGUniformBuffer((FRDGUniformBuffer *)this);
  return;
}

// ~TRDGUniformBuffer<FShadowDepthPassUniformParameters> @ 145576d60

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TRDGUniformBuffer<FShadowDepthPassUniformParameters>::
~TRDGUniformBuffer<FShadowDepthPassUniformParameters>
          (TRDGUniformBuffer<FShadowDepthPassUniformParameters> *this)

{
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFShadowDepthPassUniformParameters____6B_;
  FRDGUniformBuffer::~FRDGUniformBuffer((FRDGUniformBuffer *)this);
  return;
}

// GetRHIRef @ 14559e070

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TUniformBufferRef<FSubstrateGlobalUniformParameters> __thiscall
TRDGUniformBuffer<FSubstrateGlobalUniformParameters>::GetRHIRef
          (TRDGUniformBuffer<FSubstrateGlobalUniformParameters> *this)

{
  FRHIResource *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TUniformBufferRef<FSubstrateGlobalUniformParameters> TVar4;
  TUniformBufferRef<FSubstrateGlobalUniformParameters> in_RDX;
  
  FRDGResource::ValidateRHIAccess((FRDGResource *)this);
  this_00 = (FRHIResource *)this->_padding_;
  *(FRHIResource **)in_RDX = this_00;
  if (this_00 == (FRHIResource *)0x0) {
    return in_RDX;
  }
  FRHIResource::AddRef(this_00);
  pFVar3 = FSubstrateGlobalUniformParameters::GetStructMetadata();
  if (((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLayoutInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                         ,0x17c,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    TVar4 = (TUniformBufferRef<FSubstrateGlobalUniformParameters>)(*pcVar1)();
    return TVar4;
  }
  if ((FName)(pFVar3->Layout).Reference != this_00[2].OwnerName) {
    pFVar3 = FSubstrateGlobalUniformParameters::GetStructMetadata();
    if (((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsLayoutInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                           ,0x177,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      TVar4 = (TUniformBufferRef<FSubstrateGlobalUniformParameters>)(*pcVar1)();
      return TVar4;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InRHIRef || TUniformBufferMetadataHelper<TBufferStruct>::GetStructMetadata()->GetLayoutPtr() == InRHIRef->GetLayoutPtr()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                       ,0x96,
                       L"Attempted to create a uniform buffer of type \'%s\' from uniform buffer pointer of type \'%s\'"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar4 = (TUniformBufferRef<FSubstrateGlobalUniformParameters>)(*pcVar1)();
      return TVar4;
    }
  }
  return in_RDX;
}

// TRDGUniformBuffer<FSingleLayerWaterPassUniformParameters> @ 145664560

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRDGUniformBuffer<FSingleLayerWaterPassUniformParameters> * __thiscall
TRDGUniformBuffer<FSingleLayerWaterPassUniformParameters>::
TRDGUniformBuffer<FSingleLayerWaterPassUniformParameters>
          (TRDGUniformBuffer<FSingleLayerWaterPassUniformParameters> *this,
          FSingleLayerWaterPassUniformParameters *param_1,wchar_t *param_2)

{
  FRHIUniformBufferLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGUniformBuffer<FSingleLayerWaterPassUniformParameters> *pTVar4;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGUniformBuffer__6B_;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  pFVar3 = FSingleLayerWaterPassUniformParameters::GetStructMetadata();
  this->_padding_ = (longlong)param_1;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGUniformBuffer<FSingleLayerWaterPassUniformParameters> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this_00 = (pFVar3->Layout).Reference;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)pFVar3;
  this->_padding_ =
       (longlong)&___7__TRDGUniformBuffer_VFSingleLayerWaterPassUniformParameters____6B_;
  this->Parameters = param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// TRDGUniformBuffer<FVolumeShadowingShaderParametersGlobal0> @ 145664620

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRDGUniformBuffer<FVolumeShadowingShaderParametersGlobal0> * __thiscall
TRDGUniformBuffer<FVolumeShadowingShaderParametersGlobal0>::
TRDGUniformBuffer<FVolumeShadowingShaderParametersGlobal0>
          (TRDGUniformBuffer<FVolumeShadowingShaderParametersGlobal0> *this,
          FVolumeShadowingShaderParametersGlobal0 *param_1,wchar_t *param_2)

{
  FRHIUniformBufferLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGUniformBuffer<FVolumeShadowingShaderParametersGlobal0> *pTVar4;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGUniformBuffer__6B_;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  pFVar3 = FVolumeShadowingShaderParametersGlobal0::GetStructMetadata();
  this->_padding_ = (longlong)param_1;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGUniformBuffer<FVolumeShadowingShaderParametersGlobal0> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this_00 = (pFVar3->Layout).Reference;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)pFVar3;
  this->_padding_ =
       (longlong)&___7__TRDGUniformBuffer_VFVolumeShadowingShaderParametersGlobal0____6B_;
  this->Parameters = param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// TRDGUniformBuffer<FVolumeShadowingShaderParametersGlobal1> @ 1456646e0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRDGUniformBuffer<FVolumeShadowingShaderParametersGlobal1> * __thiscall
TRDGUniformBuffer<FVolumeShadowingShaderParametersGlobal1>::
TRDGUniformBuffer<FVolumeShadowingShaderParametersGlobal1>
          (TRDGUniformBuffer<FVolumeShadowingShaderParametersGlobal1> *this,
          FVolumeShadowingShaderParametersGlobal1 *param_1,wchar_t *param_2)

{
  FRHIUniformBufferLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGUniformBuffer<FVolumeShadowingShaderParametersGlobal1> *pTVar4;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGUniformBuffer__6B_;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  pFVar3 = FVolumeShadowingShaderParametersGlobal1::GetStructMetadata();
  this->_padding_ = (longlong)param_1;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGUniformBuffer<FVolumeShadowingShaderParametersGlobal1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this_00 = (pFVar3->Layout).Reference;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)pFVar3;
  this->_padding_ =
       (longlong)&___7__TRDGUniformBuffer_VFVolumeShadowingShaderParametersGlobal1____6B_;
  this->Parameters = param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// ~TRDGUniformBuffer<FSingleLayerWaterPassUniformParameters> @ 145666c40

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGUniformBuffer<FSingleLayerWaterPassUniformParameters>::
~TRDGUniformBuffer<FSingleLayerWaterPassUniformParameters>
          (TRDGUniformBuffer<FSingleLayerWaterPassUniformParameters> *this)

{
  this->_padding_ =
       (longlong)&___7__TRDGUniformBuffer_VFSingleLayerWaterPassUniformParameters____6B_;
  FRDGUniformBuffer::~FRDGUniformBuffer((FRDGUniformBuffer *)this);
  return;
}

// ~TRDGUniformBuffer<FVolumeShadowingShaderParametersGlobal0> @ 145666c60

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGUniformBuffer<FVolumeShadowingShaderParametersGlobal0>::
~TRDGUniformBuffer<FVolumeShadowingShaderParametersGlobal0>
          (TRDGUniformBuffer<FVolumeShadowingShaderParametersGlobal0> *this)

{
  this->_padding_ =
       (longlong)&___7__TRDGUniformBuffer_VFVolumeShadowingShaderParametersGlobal0____6B_;
  FRDGUniformBuffer::~FRDGUniformBuffer((FRDGUniformBuffer *)this);
  return;
}

// ~TRDGUniformBuffer<FVolumeShadowingShaderParametersGlobal1> @ 145666c80

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGUniformBuffer<FVolumeShadowingShaderParametersGlobal1>::
~TRDGUniformBuffer<FVolumeShadowingShaderParametersGlobal1>
          (TRDGUniformBuffer<FVolumeShadowingShaderParametersGlobal1> *this)

{
  this->_padding_ =
       (longlong)&___7__TRDGUniformBuffer_VFVolumeShadowingShaderParametersGlobal1____6B_;
  FRDGUniformBuffer::~FRDGUniformBuffer((FRDGUniformBuffer *)this);
  return;
}

// TRDGUniformBuffer<FSubstrateGlobalUniformParameters> @ 1456db750

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TRDGUniformBuffer<FSubstrateGlobalUniformParameters> * __thiscall
TRDGUniformBuffer<FSubstrateGlobalUniformParameters>::
TRDGUniformBuffer<FSubstrateGlobalUniformParameters>
          (TRDGUniformBuffer<FSubstrateGlobalUniformParameters> *this,
          FSubstrateGlobalUniformParameters *param_1,wchar_t *param_2)

{
  FRHIUniformBufferLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGUniformBuffer<FSubstrateGlobalUniformParameters> *pTVar4;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGUniformBuffer__6B_;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  pFVar3 = FSubstrateGlobalUniformParameters::GetStructMetadata();
  this->_padding_ = (longlong)param_1;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGUniformBuffer<FSubstrateGlobalUniformParameters> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this_00 = (pFVar3->Layout).Reference;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)pFVar3;
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFSubstrateGlobalUniformParameters____6B_;
  this->Parameters = param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// TRDGUniformBuffer<FSubstratePublicGlobalUniformParameters> @ 1456db810

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRDGUniformBuffer<FSubstratePublicGlobalUniformParameters> * __thiscall
TRDGUniformBuffer<FSubstratePublicGlobalUniformParameters>::
TRDGUniformBuffer<FSubstratePublicGlobalUniformParameters>
          (TRDGUniformBuffer<FSubstratePublicGlobalUniformParameters> *this,
          FSubstratePublicGlobalUniformParameters *param_1,wchar_t *param_2)

{
  FRHIUniformBufferLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGUniformBuffer<FSubstratePublicGlobalUniformParameters> *pTVar4;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGUniformBuffer__6B_;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  pFVar3 = FSubstratePublicGlobalUniformParameters::GetStructMetadata();
  this->_padding_ = (longlong)param_1;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGUniformBuffer<FSubstratePublicGlobalUniformParameters> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this_00 = (pFVar3->Layout).Reference;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)pFVar3;
  this->_padding_ =
       (longlong)&___7__TRDGUniformBuffer_VFSubstratePublicGlobalUniformParameters____6B_;
  this->Parameters = param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// ~TRDGUniformBuffer<FSubstrateGlobalUniformParameters> @ 1456dda60

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TRDGUniformBuffer<FSubstrateGlobalUniformParameters>::
~TRDGUniformBuffer<FSubstrateGlobalUniformParameters>
          (TRDGUniformBuffer<FSubstrateGlobalUniformParameters> *this)

{
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFSubstrateGlobalUniformParameters____6B_;
  FRDGUniformBuffer::~FRDGUniformBuffer((FRDGUniformBuffer *)this);
  return;
}

// ~TRDGUniformBuffer<FSubstratePublicGlobalUniformParameters> @ 1456dda80

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGUniformBuffer<FSubstratePublicGlobalUniformParameters>::
~TRDGUniformBuffer<FSubstratePublicGlobalUniformParameters>
          (TRDGUniformBuffer<FSubstratePublicGlobalUniformParameters> *this)

{
  this->_padding_ =
       (longlong)&___7__TRDGUniformBuffer_VFSubstratePublicGlobalUniformParameters____6B_;
  FRDGUniformBuffer::~FRDGUniformBuffer((FRDGUniformBuffer *)this);
  return;
}

// TRDGUniformBuffer<FTranslucencyDepthPassUniformParameters> @ 14574e150

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRDGUniformBuffer<FTranslucencyDepthPassUniformParameters> * __thiscall
TRDGUniformBuffer<FTranslucencyDepthPassUniformParameters>::
TRDGUniformBuffer<FTranslucencyDepthPassUniformParameters>
          (TRDGUniformBuffer<FTranslucencyDepthPassUniformParameters> *this,
          FTranslucencyDepthPassUniformParameters *param_1,wchar_t *param_2)

{
  FRHIUniformBufferLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGUniformBuffer<FTranslucencyDepthPassUniformParameters> *pTVar4;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGUniformBuffer__6B_;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  pFVar3 = FTranslucencyDepthPassUniformParameters::GetStructMetadata();
  this->_padding_ = (longlong)param_1;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGUniformBuffer<FTranslucencyDepthPassUniformParameters> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this_00 = (pFVar3->Layout).Reference;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)pFVar3;
  this->_padding_ =
       (longlong)&___7__TRDGUniformBuffer_VFTranslucencyDepthPassUniformParameters____6B_;
  this->Parameters = param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// TRDGUniformBuffer<FTranslucentBasePassUniformParameters> @ 14574e210

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TRDGUniformBuffer<FTranslucentBasePassUniformParameters> * __thiscall
TRDGUniformBuffer<FTranslucentBasePassUniformParameters>::
TRDGUniformBuffer<FTranslucentBasePassUniformParameters>
          (TRDGUniformBuffer<FTranslucentBasePassUniformParameters> *this,
          FTranslucentBasePassUniformParameters *param_1,wchar_t *param_2)

{
  FRHIUniformBufferLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGUniformBuffer<FTranslucentBasePassUniformParameters> *pTVar4;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGUniformBuffer__6B_;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  pFVar3 = FTranslucentBasePassUniformParameters::GetStructMetadata();
  this->_padding_ = (longlong)param_1;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGUniformBuffer<FTranslucentBasePassUniformParameters> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this_00 = (pFVar3->Layout).Reference;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)pFVar3;
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFTranslucentBasePassUniformParameters____6B_
  ;
  this->Parameters = param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// TRDGUniformBuffer<FVelocityClippedDepthUniformParameters> @ 14574e2d0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRDGUniformBuffer<FVelocityClippedDepthUniformParameters> * __thiscall
TRDGUniformBuffer<FVelocityClippedDepthUniformParameters>::
TRDGUniformBuffer<FVelocityClippedDepthUniformParameters>
          (TRDGUniformBuffer<FVelocityClippedDepthUniformParameters> *this,
          FVelocityClippedDepthUniformParameters *param_1,wchar_t *param_2)

{
  FRHIUniformBufferLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGUniformBuffer<FVelocityClippedDepthUniformParameters> *pTVar4;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGUniformBuffer__6B_;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  pFVar3 = FVelocityClippedDepthUniformParameters::GetStructMetadata();
  this->_padding_ = (longlong)param_1;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGUniformBuffer<FVelocityClippedDepthUniformParameters> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this_00 = (pFVar3->Layout).Reference;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)pFVar3;
  this->_padding_ =
       (longlong)&___7__TRDGUniformBuffer_VFVelocityClippedDepthUniformParameters____6B_;
  this->Parameters = param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// ~TRDGUniformBuffer<FTranslucencyDepthPassUniformParameters> @ 145750290

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGUniformBuffer<FTranslucencyDepthPassUniformParameters>::
~TRDGUniformBuffer<FTranslucencyDepthPassUniformParameters>
          (TRDGUniformBuffer<FTranslucencyDepthPassUniformParameters> *this)

{
  this->_padding_ =
       (longlong)&___7__TRDGUniformBuffer_VFTranslucencyDepthPassUniformParameters____6B_;
  FRDGUniformBuffer::~FRDGUniformBuffer((FRDGUniformBuffer *)this);
  return;
}

// ~TRDGUniformBuffer<FTranslucentBasePassUniformParameters> @ 1457502b0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TRDGUniformBuffer<FTranslucentBasePassUniformParameters>::
~TRDGUniformBuffer<FTranslucentBasePassUniformParameters>
          (TRDGUniformBuffer<FTranslucentBasePassUniformParameters> *this)

{
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFTranslucentBasePassUniformParameters____6B_
  ;
  FRDGUniformBuffer::~FRDGUniformBuffer((FRDGUniformBuffer *)this);
  return;
}

// ~TRDGUniformBuffer<FVelocityClippedDepthUniformParameters> @ 1457502d0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGUniformBuffer<FVelocityClippedDepthUniformParameters>::
~TRDGUniformBuffer<FVelocityClippedDepthUniformParameters>
          (TRDGUniformBuffer<FVelocityClippedDepthUniformParameters> *this)

{
  this->_padding_ =
       (longlong)&___7__TRDGUniformBuffer_VFVelocityClippedDepthUniformParameters____6B_;
  FRDGUniformBuffer::~FRDGUniformBuffer((FRDGUniformBuffer *)this);
  return;
}

// TRDGUniformBuffer<FVirtualShadowMapUniformParameters> @ 1457c0b90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRDGUniformBuffer<FVirtualShadowMapUniformParameters> * __thiscall
TRDGUniformBuffer<FVirtualShadowMapUniformParameters>::
TRDGUniformBuffer<FVirtualShadowMapUniformParameters>
          (TRDGUniformBuffer<FVirtualShadowMapUniformParameters> *this,
          FVirtualShadowMapUniformParameters *param_1,wchar_t *param_2)

{
  FRHIUniformBufferLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGUniformBuffer<FVirtualShadowMapUniformParameters> *pTVar4;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGUniformBuffer__6B_;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  pFVar3 = FVirtualShadowMapUniformParameters::GetStructMetadata();
  this->_padding_ = (longlong)param_1;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGUniformBuffer<FVirtualShadowMapUniformParameters> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this_00 = (pFVar3->Layout).Reference;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)pFVar3;
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFVirtualShadowMapUniformParameters____6B_;
  this->Parameters = param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// ~TRDGUniformBuffer<FVirtualShadowMapUniformParameters> @ 1457c3bb0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGUniformBuffer<FVirtualShadowMapUniformParameters>::
~TRDGUniformBuffer<FVirtualShadowMapUniformParameters>
          (TRDGUniformBuffer<FVirtualShadowMapUniformParameters> *this)

{
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFVirtualShadowMapUniformParameters____6B_;
  FRDGUniformBuffer::~FRDGUniformBuffer((FRDGUniformBuffer *)this);
  return;
}

// TRDGUniformBuffer<FRenderVolumetricCloudGlobalParameters> @ 145856920

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TRDGUniformBuffer<FRenderVolumetricCloudGlobalParameters> * __thiscall
TRDGUniformBuffer<FRenderVolumetricCloudGlobalParameters>::
TRDGUniformBuffer<FRenderVolumetricCloudGlobalParameters>
          (TRDGUniformBuffer<FRenderVolumetricCloudGlobalParameters> *this,
          FRenderVolumetricCloudGlobalParameters *param_1,wchar_t *param_2)

{
  FRHIUniformBufferLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGUniformBuffer<FRenderVolumetricCloudGlobalParameters> *pTVar4;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGUniformBuffer__6B_;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  pFVar3 = FRenderVolumetricCloudGlobalParameters::GetStructMetadata();
  this->_padding_ = (longlong)param_1;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGUniformBuffer<FRenderVolumetricCloudGlobalParameters> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this_00 = (pFVar3->Layout).Reference;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)pFVar3;
  this->_padding_ =
       (longlong)&___7__TRDGUniformBuffer_VFRenderVolumetricCloudGlobalParameters____6B_;
  this->Parameters = param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// TRDGUniformBuffer<FVoxelizeVolumePassUniformParameters> @ 1458569e0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRDGUniformBuffer<FVoxelizeVolumePassUniformParameters> * __thiscall
TRDGUniformBuffer<FVoxelizeVolumePassUniformParameters>::
TRDGUniformBuffer<FVoxelizeVolumePassUniformParameters>
          (TRDGUniformBuffer<FVoxelizeVolumePassUniformParameters> *this,
          FVoxelizeVolumePassUniformParameters *param_1,wchar_t *param_2)

{
  FRHIUniformBufferLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGUniformBuffer<FVoxelizeVolumePassUniformParameters> *pTVar4;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGUniformBuffer__6B_;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  pFVar3 = FVoxelizeVolumePassUniformParameters::GetStructMetadata();
  this->_padding_ = (longlong)param_1;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGUniformBuffer<FVoxelizeVolumePassUniformParameters> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this_00 = (pFVar3->Layout).Reference;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)pFVar3;
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFVoxelizeVolumePassUniformParameters____6B_;
  this->Parameters = param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// ~TRDGUniformBuffer<FRenderVolumetricCloudGlobalParameters> @ 145859a60

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TRDGUniformBuffer<FRenderVolumetricCloudGlobalParameters>::
~TRDGUniformBuffer<FRenderVolumetricCloudGlobalParameters>
          (TRDGUniformBuffer<FRenderVolumetricCloudGlobalParameters> *this)

{
  this->_padding_ =
       (longlong)&___7__TRDGUniformBuffer_VFRenderVolumetricCloudGlobalParameters____6B_;
  FRDGUniformBuffer::~FRDGUniformBuffer((FRDGUniformBuffer *)this);
  return;
}

// ~TRDGUniformBuffer<FVoxelizeVolumePassUniformParameters> @ 145859a80

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGUniformBuffer<FVoxelizeVolumePassUniformParameters>::
~TRDGUniformBuffer<FVoxelizeVolumePassUniformParameters>
          (TRDGUniformBuffer<FVoxelizeVolumePassUniformParameters> *this)

{
  this->_padding_ = (longlong)&___7__TRDGUniformBuffer_VFVoxelizeVolumePassUniformParameters____6B_;
  FRDGUniformBuffer::~FRDGUniformBuffer((FRDGUniformBuffer *)this);
  return;
}

// TRDGUniformBuffer<RuntimeVirtualTexture::FRuntimeVirtualTexturePassParameters> @ 1458caae0

TRDGUniformBuffer<RuntimeVirtualTexture::FRuntimeVirtualTexturePassParameters> * __thiscall
TRDGUniformBuffer<RuntimeVirtualTexture::FRuntimeVirtualTexturePassParameters>::
TRDGUniformBuffer<RuntimeVirtualTexture::FRuntimeVirtualTexturePassParameters>
          (TRDGUniformBuffer<RuntimeVirtualTexture::FRuntimeVirtualTexturePassParameters> *this,
          FRuntimeVirtualTexturePassParameters *param_1,wchar_t *param_2)

{
  FRHIUniformBufferLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGUniformBuffer<RuntimeVirtualTexture::FRuntimeVirtualTexturePassParameters> *pTVar4;
  
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGUniformBuffer__6B_;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  pFVar3 = RuntimeVirtualTexture::FRuntimeVirtualTexturePassParameters::GetStructMetadata();
  this->_padding_ = (longlong)param_1;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGUniformBuffer<RuntimeVirtualTexture::FRuntimeVirtualTexturePassParameters> *)
               (*pcVar1)();
      return pTVar4;
    }
  }
  this_00 = (pFVar3->Layout).Reference;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)pFVar3;
  this->_padding_ =
       (longlong)
       &___7__TRDGUniformBuffer_VFRuntimeVirtualTexturePassParameters_RuntimeVirtualTexture____6B_;
  this->Parameters = param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// ~TRDGUniformBuffer<RuntimeVirtualTexture::FRuntimeVirtualTexturePassParameters> @ 1458cef00

void __thiscall
TRDGUniformBuffer<RuntimeVirtualTexture::FRuntimeVirtualTexturePassParameters>::
~TRDGUniformBuffer<RuntimeVirtualTexture::FRuntimeVirtualTexturePassParameters>
          (TRDGUniformBuffer<RuntimeVirtualTexture::FRuntimeVirtualTexturePassParameters> *this)

{
  this->_padding_ =
       (longlong)
       &___7__TRDGUniformBuffer_VFRuntimeVirtualTexturePassParameters_RuntimeVirtualTexture____6B_;
  FRDGUniformBuffer::~FRDGUniformBuffer((FRDGUniformBuffer *)this);
  return;
}

