// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 9

// GetAsBufferAccessArray @ 145db8a60

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

TRDGResourceAccessArray<FRDGBufferAccess> * __thiscall
FRDGParameter::GetAsBufferAccessArray(FRDGParameter *this)

{
  code *pcVar1;
  bool bVar2;
  TRDGResourceAccessArray<FRDGBufferAccess> *pTVar3;
  
  if (this->MemberType == UBMT_RDG_BUFFER_ACCESS_ARRAY) {
    return this->MemberPtr;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("MemberType == UBMT_RDG_BUFFER_ACCESS_ARRAY",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphParameter.h"
                     ,0x9f,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TRDGResourceAccessArray<FRDGBufferAccess> *)(*pcVar1)();
    return pTVar3;
  }
  return this->MemberPtr;
}

// GetAsBufferSRV @ 145db8ab0

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGBufferSRV * __thiscall FRDGParameter::GetAsBufferSRV(FRDGParameter *this)

{
  code *pcVar1;
  bool bVar2;
  FRDGBufferSRV *pFVar3;
  
  if (this->MemberType == UBMT_RDG_BUFFER_SRV) {
    return *(FRDGBufferSRV **)this->MemberPtr;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("MemberType == UBMT_RDG_BUFFER_SRV",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphParameter.h"
                     ,0xab,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FRDGBufferSRV *)(*pcVar1)();
    return pFVar3;
  }
  return *(FRDGBufferSRV **)this->MemberPtr;
}

// GetAsBufferUAV @ 145db8b10

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGBufferUAV * __thiscall FRDGParameter::GetAsBufferUAV(FRDGParameter *this)

{
  code *pcVar1;
  bool bVar2;
  FRDGBufferUAV *pFVar3;
  
  if (this->MemberType == UBMT_RDG_BUFFER_UAV) {
    return *(FRDGBufferUAV **)this->MemberPtr;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("MemberType == UBMT_RDG_BUFFER_UAV",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphParameter.h"
                     ,0xb7,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FRDGBufferUAV *)(*pcVar1)();
    return pFVar3;
  }
  return *(FRDGBufferUAV **)this->MemberPtr;
}

// GetAsRenderTargetBindingSlots @ 145db8b70

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FRenderTargetBindingSlots * __thiscall
FRDGParameter::GetAsRenderTargetBindingSlots(FRDGParameter *this)

{
  code *pcVar1;
  bool bVar2;
  FRenderTargetBindingSlots *pFVar3;
  
  if (this->MemberType == UBMT_RENDER_TARGET_BINDING_SLOTS) {
    return this->MemberPtr;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsRenderTargetBindingSlots()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphParameter.h"
                     ,0xbd,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FRenderTargetBindingSlots *)(*pcVar1)();
    return pFVar3;
  }
  return this->MemberPtr;
}

// GetAsTexture @ 145db8bc0

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGTexture * __thiscall FRDGParameter::GetAsTexture(FRDGParameter *this)

{
  code *pcVar1;
  bool bVar2;
  FRDGTexture *pFVar3;
  
  if ((this->MemberType != UBMT_RDG_TEXTURE) && (this->MemberType != UBMT_RDG_TEXTURE_ACCESS)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsTexture()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphParameter.h"
                       ,0x81,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRDGTexture *)(*pcVar1)();
      return pFVar3;
    }
    return *(FRDGTexture **)this->MemberPtr;
  }
  return *(FRDGTexture **)this->MemberPtr;
}

// GetAsTextureAccessArray @ 145db8c20

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

TRDGResourceAccessArray<FRDGTextureAccess> * __thiscall
FRDGParameter::GetAsTextureAccessArray(FRDGParameter *this)

{
  code *pcVar1;
  bool bVar2;
  TRDGResourceAccessArray<FRDGTextureAccess> *pTVar3;
  
  if (this->MemberType == UBMT_RDG_TEXTURE_ACCESS_ARRAY) {
    return this->MemberPtr;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("MemberType == UBMT_RDG_TEXTURE_ACCESS_ARRAY",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphParameter.h"
                     ,0x8d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TRDGResourceAccessArray<FRDGTextureAccess> *)(*pcVar1)();
    return pTVar3;
  }
  return this->MemberPtr;
}

// GetAsTextureSRV @ 145db8c70

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGTextureSRV * __thiscall FRDGParameter::GetAsTextureSRV(FRDGParameter *this)

{
  code *pcVar1;
  bool bVar2;
  FRDGTextureSRV *pFVar3;
  
  if ((this->MemberType != UBMT_RDG_TEXTURE_SRV) &&
     (this->MemberType != UBMT_RDG_TEXTURE_NON_PIXEL_SRV)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MemberType == UBMT_RDG_TEXTURE_SRV || MemberType == UBMT_RDG_TEXTURE_NON_PIXEL_SRV"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphParameter.h"
                       ,0xa5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRDGTextureSRV *)(*pcVar1)();
      return pFVar3;
    }
    return *(FRDGTextureSRV **)this->MemberPtr;
  }
  return *(FRDGTextureSRV **)this->MemberPtr;
}

// GetAsTextureUAV @ 145db8cd0

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGTextureUAV * __thiscall FRDGParameter::GetAsTextureUAV(FRDGParameter *this)

{
  code *pcVar1;
  bool bVar2;
  FRDGTextureUAV *pFVar3;
  
  if (this->MemberType == UBMT_RDG_TEXTURE_UAV) {
    return *(FRDGTextureUAV **)this->MemberPtr;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("MemberType == UBMT_RDG_TEXTURE_UAV",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphParameter.h"
                     ,0xb1,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FRDGTextureUAV *)(*pcVar1)();
    return pFVar3;
  }
  return *(FRDGTextureUAV **)this->MemberPtr;
}

// GetAsView @ 145db8d30

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FRDGView * __thiscall FRDGParameter::GetAsView(FRDGParameter *this)

{
  code *pcVar1;
  bool bVar2;
  FRDGView *pFVar3;
  
  if ((this->MemberType != UBMT_RDG_TEXTURE_SRV) &&
     ((this->MemberType - UBMT_RDG_TEXTURE_NON_PIXEL_SRV & 0xfa) != 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsView()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphParameter.h"
                       ,0x6f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRDGView *)(*pcVar1)();
      return pFVar3;
    }
    return *(FRDGView **)this->MemberPtr;
  }
  return *(FRDGView **)this->MemberPtr;
}

