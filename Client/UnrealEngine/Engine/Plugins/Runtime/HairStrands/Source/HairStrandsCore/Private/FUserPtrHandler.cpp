// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 2

// FUserPtrHandler<FNDIHairStrandsData> @ 14e0d0a10

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FUserPtrHandler<FNDIHairStrandsData> * __thiscall
VectorVM::FUserPtrHandler<FNDIHairStrandsData>::FUserPtrHandler<FNDIHairStrandsData>
          (FUserPtrHandler<FNDIHairStrandsData> *this,FVectorVMExternalFunctionContext *param_1)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  FUserPtrHandler<FNDIHairStrandsData> *pFVar7;
  
  if (param_1->NumRegisters <= param_1->RegReadCount) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegReadCount < NumRegisters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x160,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUserPtrHandler<FNDIHairStrandsData> *)(*pcVar5)();
      return pFVar7;
    }
  }
  iVar2 = param_1->RegReadCount;
  uVar1 = param_1->RegInc[iVar2];
  puVar4 = param_1->RegisterData[iVar2];
  param_1->RegReadCount = iVar2 + 1;
  if (uVar1 != '\0') {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("AdvanceOffset == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x19e,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUserPtrHandler<FNDIHairStrandsData> *)(*pcVar5)();
      return pFVar7;
    }
  }
  uVar3 = *puVar4;
  this->UserPtrIdx = uVar3;
  if (uVar3 == 0xffffffff) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("UserPtrIdx != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x1a0,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUserPtrHandler<FNDIHairStrandsData> *)(*pcVar5)();
      return pFVar7;
    }
  }
  iVar2 = this->UserPtrIdx;
  if (param_1->NumUserPtrs <= iVar2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("UserPtrIdx < NumUserPtrs",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x15b,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUserPtrHandler<FNDIHairStrandsData> *)(*pcVar5)();
      return pFVar7;
    }
  }
  this->Ptr = param_1->UserPtrTable[iVar2];
  return this;
}

// FUserPtrHandler<FNDIVelocityGridData> @ 14e0d0b20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FUserPtrHandler<FNDIVelocityGridData> * __thiscall
VectorVM::FUserPtrHandler<FNDIVelocityGridData>::FUserPtrHandler<FNDIVelocityGridData>
          (FUserPtrHandler<FNDIVelocityGridData> *this,FVectorVMExternalFunctionContext *param_1)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  FUserPtrHandler<FNDIVelocityGridData> *pFVar7;
  
  if (param_1->NumRegisters <= param_1->RegReadCount) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegReadCount < NumRegisters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x160,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUserPtrHandler<FNDIVelocityGridData> *)(*pcVar5)();
      return pFVar7;
    }
  }
  iVar2 = param_1->RegReadCount;
  uVar1 = param_1->RegInc[iVar2];
  puVar4 = param_1->RegisterData[iVar2];
  param_1->RegReadCount = iVar2 + 1;
  if (uVar1 != '\0') {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("AdvanceOffset == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x19e,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUserPtrHandler<FNDIVelocityGridData> *)(*pcVar5)();
      return pFVar7;
    }
  }
  uVar3 = *puVar4;
  this->UserPtrIdx = uVar3;
  if (uVar3 == 0xffffffff) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("UserPtrIdx != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x1a0,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUserPtrHandler<FNDIVelocityGridData> *)(*pcVar5)();
      return pFVar7;
    }
  }
  iVar2 = this->UserPtrIdx;
  if (param_1->NumUserPtrs <= iVar2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("UserPtrIdx < NumUserPtrs",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x15b,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUserPtrHandler<FNDIVelocityGridData> *)(*pcVar5)();
      return pFVar7;
    }
  }
  this->Ptr = param_1->UserPtrTable[iVar2];
  return this;
}

