// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 4

// operator== @ 14dd6c860

bool __thiscall MoviePipeline::FTileWeight1D::operator==(FTileWeight1D *this,FTileWeight1D *param_1)

{
  if ((((this->X0 == param_1->X0) && (this->X1 == param_1->X1)) && (this->X2 == param_1->X2)) &&
     (this->X3 == param_1->X3)) {
    return true;
  }
  return false;
}

// CalculateArrayWeight @ 14dd79bd0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
MoviePipeline::FTileWeight1D::CalculateArrayWeight
          (FTileWeight1D *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  TArray<float,TSizedDefaultAllocator<32>_>::SetNum(param_1,param_2,Default);
  uVar6 = this->X0;
  uVar5 = 0;
  if (0 < (int)uVar6) {
    lVar7 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar5 < param_1->ArrayNum) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar5 = uVar5 + 1;
      *(undefined4 *)((param_1->AllocatorInstance).Data + lVar7) = 0;
      lVar7 = lVar7 + 4;
      uVar6 = this->X0;
    } while ((int)uVar5 < (int)uVar6);
  }
  fVar3 = __real_3f000000;
  fVar2 = __real_3f800000;
  uVar5 = this->X1;
  if (uVar6 == uVar5) {
    fVar9 = 0.0;
  }
  else {
    fVar9 = __real_3f800000 / (float)(int)(uVar5 - uVar6);
  }
  if (this->X2 == this->X3) {
    fVar10 = 0.0;
  }
  else {
    fVar10 = __real_3f800000 / (float)(this->X3 - this->X2);
  }
  if ((int)uVar6 < (int)uVar5) {
    lVar7 = (longlong)(int)uVar6 * 4;
    do {
      uVar5 = 0;
      if ((int)uVar6 < param_1->ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      fVar8 = (((float)(int)uVar6 + fVar3) - (float)this->X0) * fVar9;
      if (fVar2 <= fVar8) {
        fVar8 = fVar2;
      }
      if (fVar8 <= 0.0) {
        fVar8 = 0.0;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar6 = uVar6 + 1;
      *(float *)((param_1->AllocatorInstance).Data + lVar7) = fVar8;
      lVar7 = lVar7 + 4;
      uVar5 = this->X1;
    } while ((int)uVar6 < (int)uVar5);
  }
  uVar6 = this->X2;
  if ((int)uVar5 < (int)uVar6) {
    lVar7 = (longlong)(int)uVar5 * 4;
    do {
      uVar6 = 0;
      if ((int)uVar5 < param_1->ArrayNum) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar5 = uVar5 + 1;
      *(undefined4 *)((param_1->AllocatorInstance).Data + lVar7) = 0x3f800000;
      lVar7 = lVar7 + 4;
      uVar6 = this->X2;
    } while ((int)uVar5 < (int)uVar6);
  }
  uVar5 = this->X3;
  if ((int)uVar6 < (int)uVar5) {
    lVar7 = (longlong)(int)uVar6 * 4;
    do {
      uVar5 = 0;
      if ((int)uVar6 < param_1->ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      fVar9 = fVar2 - (((float)(int)uVar6 + fVar3) - (float)this->X2) * fVar10;
      if (fVar2 <= fVar9) {
        fVar9 = fVar2;
      }
      if (fVar9 <= 0.0) {
        fVar9 = 0.0;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar6 = uVar6 + 1;
      *(float *)((param_1->AllocatorInstance).Data + lVar7) = fVar9;
      lVar7 = lVar7 + 4;
      uVar5 = this->X3;
    } while ((int)uVar6 < (int)uVar5);
  }
  if ((int)uVar5 < param_2) {
    lVar7 = (longlong)(int)uVar5 * 4;
    do {
      uVar6 = 0;
      if ((int)uVar5 < param_1->ArrayNum) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar5 = uVar5 + 1;
      *(undefined4 *)((param_1->AllocatorInstance).Data + lVar7) = 0;
      lVar7 = lVar7 + 4;
    } while ((int)uVar5 < param_2);
  }
  return;
}

// CalculateWeight @ 14dd7a220

float __thiscall MoviePipeline::FTileWeight1D::CalculateWeight(FTileWeight1D *this,int param_1)

{
  int iVar1;
  
  iVar1 = this->X0;
  if (iVar1 <= param_1) {
    if (param_1 < this->X1) {
      return (float)(param_1 - iVar1) / (float)(this->X1 - iVar1);
    }
    if (param_1 < this->X2) {
      return __real_3f800000;
    }
    iVar1 = this->X3;
    if (param_1 < iVar1) {
      return (float)(iVar1 - param_1) / (float)(iVar1 - this->X2);
    }
  }
  return 0.0;
}

// InitHelper @ 14dd8ed80

void __thiscall
MoviePipeline::FTileWeight1D::InitHelper(FTileWeight1D *this,int param_1,int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (param_1 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PadLeft >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Public\\MovieRenderPipelineDataTypes.cpp"
                       ,0x70,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SizeCenter > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Public\\MovieRenderPipelineDataTypes.cpp"
                       ,0x71,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_3 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PadRight >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Public\\MovieRenderPipelineDataTypes.cpp"
                       ,0x72,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar4 = param_1 + param_2 + param_3;
  iVar6 = param_2 / 2 + param_1;
  this->X0 = param_1 / 2;
  iVar3 = (param_1 * 3) / 2;
  iVar5 = iVar4 - iVar3;
  this->X3 = iVar4 - param_3 / 2;
  iVar4 = iVar6;
  if (iVar3 < iVar6) {
    iVar4 = iVar3;
  }
  this->X1 = iVar4;
  if (iVar6 < iVar5) {
    iVar6 = iVar5;
  }
  this->X2 = iVar6;
  return;
}

