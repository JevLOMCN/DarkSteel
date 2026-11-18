// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 3

// TShaderPermutationDomain<TOneColorPixelShaderMRT::TOneColorPixelShaderNumOutputs,TOneColorPixelShaderMRT::TOneColorPixelShader128bitRT,TOneColorPixelShaderMRT::TOneColorPixelNumUintOutputs> @ 145d09030

TShaderPermutationDomain<TOneColorPixelShaderMRT::TOneColorPixelShaderNumOutputs,TOneColorPixelShaderMRT::TOneColorPixelShader128bitRT,TOneColorPixelShaderMRT::TOneColorPixelNumUintOutputs>
* __thiscall
TShaderPermutationDomain<TOneColorPixelShaderMRT::TOneColorPixelShaderNumOutputs,TOneColorPixelShaderMRT::TOneColorPixelShader128bitRT,TOneColorPixelShaderMRT::TOneColorPixelNumUintOutputs>
::
TShaderPermutationDomain<TOneColorPixelShaderMRT::TOneColorPixelShaderNumOutputs,TOneColorPixelShaderMRT::TOneColorPixelShader128bitRT,TOneColorPixelShaderMRT::TOneColorPixelNumUintOutputs>
          (TShaderPermutationDomain<TOneColorPixelShaderMRT::TOneColorPixelShaderNumOutputs,TOneColorPixelShaderMRT::TOneColorPixelShader128bitRT,TOneColorPixelShaderMRT::TOneColorPixelNumUintOutputs>
           *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  TShaderPermutationDomain<TOneColorPixelShaderMRT::TOneColorPixelShaderNumOutputs,TOneColorPixelShaderMRT::TOneColorPixelShader128bitRT,TOneColorPixelShaderMRT::TOneColorPixelNumUintOutputs>
  *pTVar6;
  uint uVar7;
  uint uVar8;
  
  uVar7 = param_1 >> 0x1f & 7;
  uVar3 = param_1 + uVar7;
  iVar4 = (uVar3 & 7) - uVar7;
  uVar3 = (int)uVar3 >> 3;
  if (((7 < iVar4) || (iVar4 < 0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x77,L"Invalid shader permutation dimension value id %i."), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TShaderPermutationDomain<TOneColorPixelShaderMRT::TOneColorPixelShaderNumOutputs,TOneColorPixelShaderMRT::TOneColorPixelShader128bitRT,TOneColorPixelShaderMRT::TOneColorPixelNumUintOutputs>
              *)(*pcVar1)();
    return pTVar6;
  }
  this->DimensionValue = iVar4 + 1;
  uVar7 = uVar3 & 0x80000001;
  if ((int)uVar7 < 0) {
    uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
  }
  if (((uVar7 != 0) && (uVar7 != 1)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId == 0 || PermutationId == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x4c,L"Invalid shader permutation dimension id %i."), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TShaderPermutationDomain<TOneColorPixelShaderMRT::TOneColorPixelShaderNumOutputs,TOneColorPixelShaderMRT::TOneColorPixelShader128bitRT,TOneColorPixelShaderMRT::TOneColorPixelNumUintOutputs>
              *)(*pcVar1)();
    return pTVar6;
  }
  (this->Tail).DimensionValue = uVar7 == 1;
  uVar7 = (int)uVar3 / 2;
  uVar8 = (int)uVar7 >> 0x1f & 7;
  uVar5 = uVar7 + uVar8;
  iVar4 = (uVar5 & 7) - uVar8;
  if (((7 < iVar4) || (iVar4 < 0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x77,L"Invalid shader permutation dimension value id %i."), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TShaderPermutationDomain<TOneColorPixelShaderMRT::TOneColorPixelShaderNumOutputs,TOneColorPixelShaderMRT::TOneColorPixelShader128bitRT,TOneColorPixelShaderMRT::TOneColorPixelNumUintOutputs>
              *)(*pcVar1)();
    return pTVar6;
  }
  (this->Tail).Tail.DimensionValue = iVar4;
  if (((int)uVar5 >> 3 != 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0xf6,L"Invalid shader permutation id %i."), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TShaderPermutationDomain<TOneColorPixelShaderMRT::TOneColorPixelShaderNumOutputs,TOneColorPixelShaderMRT::TOneColorPixelShader128bitRT,TOneColorPixelShaderMRT::TOneColorPixelNumUintOutputs>
              *)(*pcVar1)();
    return pTVar6;
  }
  if ((7 < uVar7) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TShaderPermutationDomain<TOneColorPixelShaderMRT::TOneColorPixelShaderNumOutputs,TOneColorPixelShaderMRT::TOneColorPixelShader128bitRT,TOneColorPixelShaderMRT::TOneColorPixelNumUintOutputs>
              *)(*pcVar1)();
    return pTVar6;
  }
  if ((0xf < uVar3) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TShaderPermutationDomain<TOneColorPixelShaderMRT::TOneColorPixelShaderNumOutputs,TOneColorPixelShaderMRT::TOneColorPixelShader128bitRT,TOneColorPixelShaderMRT::TOneColorPixelNumUintOutputs>
              *)(*pcVar1)();
    return pTVar6;
  }
  if ((0x7f < (uint)param_1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TShaderPermutationDomain<TOneColorPixelShaderMRT::TOneColorPixelShaderNumOutputs,TOneColorPixelShaderMRT::TOneColorPixelShader128bitRT,TOneColorPixelShaderMRT::TOneColorPixelNumUintOutputs>
              *)(*pcVar1)();
    return pTVar6;
  }
  return this;
}

// TShaderPermutationDomain<FByteBufferShader::ResourceTypeDim,FByteBufferShader::StructuredElementSizeDim> @ 145e80830

TShaderPermutationDomain<FByteBufferShader::ResourceTypeDim,FByteBufferShader::StructuredElementSizeDim>
* __thiscall
TShaderPermutationDomain<FByteBufferShader::ResourceTypeDim,FByteBufferShader::StructuredElementSizeDim>
::
TShaderPermutationDomain<FByteBufferShader::ResourceTypeDim,FByteBufferShader::StructuredElementSizeDim>
          (TShaderPermutationDomain<FByteBufferShader::ResourceTypeDim,FByteBufferShader::StructuredElementSizeDim>
           *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TShaderPermutationDomain<FByteBufferShader::ResourceTypeDim,FByteBufferShader::StructuredElementSizeDim>
  *pTVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = param_1 >> 0x1f & 3;
  uVar3 = param_1 + uVar6;
  iVar4 = (uVar3 & 3) - uVar6;
  uVar6 = (int)uVar3 >> 2;
  if ((3 < iVar4) || (iVar4 < 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PermutationId < PermutationCount && PermutationId >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                       ,0x77,L"Invalid shader permutation dimension value id %i.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderPermutationDomain<FByteBufferShader::ResourceTypeDim,FByteBufferShader::StructuredElementSizeDim>
                *)(*pcVar1)();
      return pTVar5;
    }
  }
  this->DimensionValue = iVar4;
  uVar7 = uVar6 & 0x80000003;
  if ((int)uVar7 < 0) {
    uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
  }
  if ((3 < (int)uVar7) || ((int)uVar7 < 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PermutationId < PermutationCount && PermutationId >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                       ,0x77,L"Invalid shader permutation dimension value id %i.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderPermutationDomain<FByteBufferShader::ResourceTypeDim,FByteBufferShader::StructuredElementSizeDim>
                *)(*pcVar1)();
      return pTVar5;
    }
  }
  (this->Tail).DimensionValue = uVar7;
  if ((int)(uVar6 + ((int)uVar3 >> 0x1f & 3U)) >> 2 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PermutationId == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                       ,0xf6,L"Invalid shader permutation id %i.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderPermutationDomain<FByteBufferShader::ResourceTypeDim,FByteBufferShader::StructuredElementSizeDim>
                *)(*pcVar1)();
      return pTVar5;
    }
  }
  if (3 < uVar6) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PermutationId >= 0 && PermutationId < PermutationCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                       ,0x188,L"Invalid shader permutation id %i.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderPermutationDomain<FByteBufferShader::ResourceTypeDim,FByteBufferShader::StructuredElementSizeDim>
                *)(*pcVar1)();
      return pTVar5;
    }
  }
  if (0xf < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PermutationId >= 0 && PermutationId < PermutationCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                       ,0x188,L"Invalid shader permutation id %i.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderPermutationDomain<FByteBufferShader::ResourceTypeDim,FByteBufferShader::StructuredElementSizeDim>
                *)(*pcVar1)();
      return pTVar5;
    }
  }
  return this;
}

// ToDimensionValueId @ 145eba070

int __thiscall
TShaderPermutationDomain<FByteBufferShader::ResourceTypeDim,FByteBufferShader::StructuredElementSizeDim>
::ToDimensionValueId
          (TShaderPermutationDomain<FByteBufferShader::ResourceTypeDim,FByteBufferShader::StructuredElementSizeDim>
           *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = this->DimensionValue;
  if ((3 < iVar4) || (iVar4 < 0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("PermutationId < PermutationCount && PermutationId >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                       ,0x6a,L"Unknown shader permutation dimension value id %i.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar1 = (this->Tail).DimensionValue;
  if ((3 < iVar1) || (iVar1 < 0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("PermutationId < PermutationCount && PermutationId >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                       ,0x6a,L"Unknown shader permutation dimension value id %i.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  return iVar4 + iVar1 * 4;
}

