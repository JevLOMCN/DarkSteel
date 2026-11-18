// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NISShaders
// Functions: 3

// TShaderPermutationDomain<FNISBlockHeightDim,FNISThreadGroupSizeDim,FNISViewportSupportDim> @ 14de4b9e0

TShaderPermutationDomain<FNISBlockHeightDim,FNISThreadGroupSizeDim,FNISViewportSupportDim> *
__thiscall
TShaderPermutationDomain<FNISBlockHeightDim,FNISThreadGroupSizeDim,FNISViewportSupportDim>::
TShaderPermutationDomain<FNISBlockHeightDim,FNISThreadGroupSizeDim,FNISViewportSupportDim>
          (TShaderPermutationDomain<FNISBlockHeightDim,FNISThreadGroupSizeDim,FNISViewportSupportDim>
           *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  TShaderPermutationDomain<FNISBlockHeightDim,FNISThreadGroupSizeDim,FNISViewportSupportDim> *pTVar5
  ;
  int iVar6;
  uint uVar7;
  
  uVar7 = param_1 / 2;
  iVar6 = 0;
  if (param_1 % 2 == 1) {
    iVar3 = 0x20;
  }
  else if (param_1 % 2 == 0) {
    iVar3 = 0x18;
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                       ,0x97,L"Invalid shader permutation dimension id %i.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderPermutationDomain<FNISBlockHeightDim,FNISThreadGroupSizeDim,FNISViewportSupportDim>
                *)(*pcVar1)();
      return pTVar5;
    }
    iVar3 = 0;
  }
  this->DimensionValue = iVar3;
  uVar4 = uVar7 & 0x80000001;
  if ((int)uVar4 < 0) {
    uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
  }
  if (uVar4 == 1) {
    iVar6 = 0x80;
  }
  else if (uVar4 == 0) {
    iVar6 = 0x100;
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                       ,0x97,L"Invalid shader permutation dimension id %i.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderPermutationDomain<FNISBlockHeightDim,FNISThreadGroupSizeDim,FNISViewportSupportDim>
                *)(*pcVar1)();
      return pTVar5;
    }
  }
  (this->Tail).DimensionValue = iVar6;
  uVar4 = (int)uVar7 / 2;
  iVar6 = (int)uVar4 % 2;
  if (((iVar6 != 0) && (iVar6 != 1)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId == 0 || PermutationId == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x4c,L"Invalid shader permutation dimension id %i."), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TShaderPermutationDomain<FNISBlockHeightDim,FNISThreadGroupSizeDim,FNISViewportSupportDim>
              *)(*pcVar1)();
    return pTVar5;
  }
  (this->Tail).Tail.DimensionValue = iVar6 == 1;
  if (((int)uVar4 / 2 != 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0xf6,L"Invalid shader permutation id %i."), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TShaderPermutationDomain<FNISBlockHeightDim,FNISThreadGroupSizeDim,FNISViewportSupportDim>
              *)(*pcVar1)();
    return pTVar5;
  }
  if ((1 < uVar4) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TShaderPermutationDomain<FNISBlockHeightDim,FNISThreadGroupSizeDim,FNISViewportSupportDim>
              *)(*pcVar1)();
    return pTVar5;
  }
  if ((3 < uVar7) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TShaderPermutationDomain<FNISBlockHeightDim,FNISThreadGroupSizeDim,FNISViewportSupportDim>
              *)(*pcVar1)();
    return pTVar5;
  }
  if ((7 < (uint)param_1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId >= 0 && PermutationId < PermutationCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x188,L"Invalid shader permutation id %i."), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TShaderPermutationDomain<FNISBlockHeightDim,FNISThreadGroupSizeDim,FNISViewportSupportDim>
              *)(*pcVar1)();
    return pTVar5;
  }
  return this;
}

// TShaderPermutationDomain<FNISHdrModeDim,FNISHalfPrecisionDim,FNISBlockWidthDim,FNISBlockHeightDim,FNISThreadGroupSizeDim,FNISViewportSupportDim> @ 14de4bbe0

TShaderPermutationDomain<FNISHdrModeDim,FNISHalfPrecisionDim,FNISBlockWidthDim,FNISBlockHeightDim,FNISThreadGroupSizeDim,FNISViewportSupportDim>
* __thiscall
TShaderPermutationDomain<FNISHdrModeDim,FNISHalfPrecisionDim,FNISBlockWidthDim,FNISBlockHeightDim,FNISThreadGroupSizeDim,FNISViewportSupportDim>
::
TShaderPermutationDomain<FNISHdrModeDim,FNISHalfPrecisionDim,FNISBlockWidthDim,FNISBlockHeightDim,FNISThreadGroupSizeDim,FNISViewportSupportDim>
          (TShaderPermutationDomain<FNISHdrModeDim,FNISHalfPrecisionDim,FNISBlockWidthDim,FNISBlockHeightDim,FNISThreadGroupSizeDim,FNISViewportSupportDim>
           *this,int param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  ENISHalfPrecisionPermutation EVar5;
  TShaderPermutationDomain<FNISHdrModeDim,FNISHalfPrecisionDim,FNISBlockWidthDim,FNISBlockHeightDim,FNISThreadGroupSizeDim,FNISViewportSupportDim>
  *pTVar6;
  int iVar7;
  uint uVar8;
  
  uVar2 = param_1 / 3;
  iVar7 = param_1 % 3;
  if (iVar7 != 2) {
    if (iVar7 == 1) {
      iVar7 = 1;
      goto LAB_14de4bc5d;
    }
    if (iVar7 == 0) {
      iVar7 = 2;
      goto LAB_14de4bc5d;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                       ,0x97,L"Invalid shader permutation dimension id %i.");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TShaderPermutationDomain<FNISHdrModeDim,FNISHalfPrecisionDim,FNISBlockWidthDim,FNISBlockHeightDim,FNISThreadGroupSizeDim,FNISViewportSupportDim>
                *)(*pcVar1)();
      return pTVar6;
    }
  }
  iVar7 = 0;
LAB_14de4bc5d:
  this->DimensionValue = iVar7;
  uVar8 = (int)uVar2 >> 0x1f & 3;
  uVar4 = uVar2 + uVar8;
  EVar5 = (uVar4 & 3) - uVar8;
  iVar7 = (int)uVar4 >> 2;
  if ((3 < (int)EVar5) || ((int)EVar5 < 0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("PermutationId < PermutationCount && PermutationId >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                       ,0x77,L"Invalid shader permutation dimension value id %i.");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TShaderPermutationDomain<FNISHdrModeDim,FNISHalfPrecisionDim,FNISBlockWidthDim,FNISBlockHeightDim,FNISThreadGroupSizeDim,FNISViewportSupportDim>
                *)(*pcVar1)();
      return pTVar6;
    }
  }
  (this->Tail).DimensionValue = EVar5;
  (this->Tail).Tail.DimensionValue = 0x20;
  TShaderPermutationDomain<FNISBlockHeightDim,FNISThreadGroupSizeDim,FNISViewportSupportDim>::
  TShaderPermutationDomain<FNISBlockHeightDim,FNISThreadGroupSizeDim,FNISViewportSupportDim>
            (&(this->Tail).Tail.Tail,iVar7);
  if ((iVar7 < 0) || (7 < iVar7)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("PermutationId >= 0 && PermutationId < PermutationCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                       ,0x188,L"Invalid shader permutation id %i.");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TShaderPermutationDomain<FNISHdrModeDim,FNISHalfPrecisionDim,FNISBlockWidthDim,FNISBlockHeightDim,FNISThreadGroupSizeDim,FNISViewportSupportDim>
                *)(*pcVar1)();
      return pTVar6;
    }
  }
  if (0x1f < uVar2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("PermutationId >= 0 && PermutationId < PermutationCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                       ,0x188,L"Invalid shader permutation id %i.");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TShaderPermutationDomain<FNISHdrModeDim,FNISHalfPrecisionDim,FNISBlockWidthDim,FNISBlockHeightDim,FNISThreadGroupSizeDim,FNISViewportSupportDim>
                *)(*pcVar1)();
      return pTVar6;
    }
  }
  if (0x5f < (uint)param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("PermutationId >= 0 && PermutationId < PermutationCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                       ,0x188,L"Invalid shader permutation id %i.");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TShaderPermutationDomain<FNISHdrModeDim,FNISHalfPrecisionDim,FNISBlockWidthDim,FNISBlockHeightDim,FNISThreadGroupSizeDim,FNISViewportSupportDim>
                *)(*pcVar1)();
      return pTVar6;
    }
  }
  return this;
}

// ToDimensionValueId @ 14de4e340

int __thiscall
TShaderPermutationDomain<FNISHdrModeDim,FNISHalfPrecisionDim,FNISBlockWidthDim,FNISBlockHeightDim,FNISThreadGroupSizeDim,FNISViewportSupportDim>
::ToDimensionValueId
          (TShaderPermutationDomain<FNISHdrModeDim,FNISHalfPrecisionDim,FNISBlockWidthDim,FNISBlockHeightDim,FNISThreadGroupSizeDim,FNISViewportSupportDim>
           *this)

{
  ENISHalfPrecisionPermutation EVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = this->DimensionValue;
  iVar6 = 0;
  if (iVar5 == 0) {
    iVar5 = 2;
  }
  else if (iVar5 == 1) {
    iVar5 = 1;
  }
  else {
    if ((iVar5 != 2) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                           ,0x90,L"Unknown shader permutation dimension value %i."), bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
    iVar5 = 0;
  }
  EVar1 = (this->Tail).DimensionValue;
  if (((3 < (int)EVar1) || ((int)EVar1 < 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  if (((this->Tail).Tail.DimensionValue != 0x20) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x90,L"Unknown shader permutation dimension value %i."), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  iVar2 = (this->Tail).Tail.Tail.DimensionValue;
  if (iVar2 == 0x20) {
    iVar6 = 4;
  }
  else if ((iVar2 != 0x18) &&
          (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("false",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                              ,0x90,L"Unknown shader permutation dimension value %i."), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  iVar2 = (this->Tail).Tail.Tail.Tail.DimensionValue;
  if (iVar2 == 0x80) {
    iVar7 = 8;
  }
  else {
    iVar7 = 0;
    if ((iVar2 != 0x100) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                           ,0x90,L"Unknown shader permutation dimension value %i."), iVar7 = 0,
       bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  return iVar5 + ((-(uint)((this->Tail).Tail.Tail.Tail.Tail.DimensionValue != false) & 0x10) + iVar6
                  + iVar7 + EVar1) * 3;
}

