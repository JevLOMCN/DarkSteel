// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 53

// FUserPtrHandler<FNDIArrayInstanceData_GameThread<FNiagaraMeshRendererMeshPropertiesBase>_> @ 148e53520

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FUserPtrHandler<FNDIArrayInstanceData_GameThread<FNiagaraMeshRendererMeshPropertiesBase>_> *
__thiscall
VectorVM::FUserPtrHandler<FNDIArrayInstanceData_GameThread<FNiagaraMeshRendererMeshPropertiesBase>_>
::FUserPtrHandler<FNDIArrayInstanceData_GameThread<FNiagaraMeshRendererMeshPropertiesBase>_>
          (FUserPtrHandler<FNDIArrayInstanceData_GameThread<FNiagaraMeshRendererMeshPropertiesBase>_>
           *this,FVectorVMExternalFunctionContext *param_1)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  FUserPtrHandler<FNDIArrayInstanceData_GameThread<FNiagaraMeshRendererMeshPropertiesBase>_> *pFVar7
  ;
  
  if (param_1->NumRegisters <= param_1->RegReadCount) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegReadCount < NumRegisters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x160,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUserPtrHandler<FNDIArrayInstanceData_GameThread<FNiagaraMeshRendererMeshPropertiesBase>_>
                *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIArrayInstanceData_GameThread<FNiagaraMeshRendererMeshPropertiesBase>_>
                *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIArrayInstanceData_GameThread<FNiagaraMeshRendererMeshPropertiesBase>_>
                *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIArrayInstanceData_GameThread<FNiagaraMeshRendererMeshPropertiesBase>_>
                *)(*pcVar5)();
      return pFVar7;
    }
  }
  this->Ptr = param_1->UserPtrTable[iVar2];
  return this;
}

// FUserPtrHandler<NDIActorComponentLocal::FInstanceData_GameThread> @ 148e53630

FUserPtrHandler<NDIActorComponentLocal::FInstanceData_GameThread> * __thiscall
VectorVM::FUserPtrHandler<NDIActorComponentLocal::FInstanceData_GameThread>::
FUserPtrHandler<NDIActorComponentLocal::FInstanceData_GameThread>
          (FUserPtrHandler<NDIActorComponentLocal::FInstanceData_GameThread> *this,
          FVectorVMExternalFunctionContext *param_1)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  FUserPtrHandler<NDIActorComponentLocal::FInstanceData_GameThread> *pFVar7;
  
  if (param_1->NumRegisters <= param_1->RegReadCount) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegReadCount < NumRegisters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x160,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUserPtrHandler<NDIActorComponentLocal::FInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<NDIActorComponentLocal::FInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<NDIActorComponentLocal::FInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<NDIActorComponentLocal::FInstanceData_GameThread> *)(*pcVar5)();
      return pFVar7;
    }
  }
  this->Ptr = param_1->UserPtrTable[iVar2];
  return this;
}

// FUserPtrHandler<NDIConsoleVariableLocal::FInstanceData_GameThread> @ 148e53740

FUserPtrHandler<NDIConsoleVariableLocal::FInstanceData_GameThread> * __thiscall
VectorVM::FUserPtrHandler<NDIConsoleVariableLocal::FInstanceData_GameThread>::
FUserPtrHandler<NDIConsoleVariableLocal::FInstanceData_GameThread>
          (FUserPtrHandler<NDIConsoleVariableLocal::FInstanceData_GameThread> *this,
          FVectorVMExternalFunctionContext *param_1)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  FUserPtrHandler<NDIConsoleVariableLocal::FInstanceData_GameThread> *pFVar7;
  
  if (param_1->NumRegisters <= param_1->RegReadCount) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegReadCount < NumRegisters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x160,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUserPtrHandler<NDIConsoleVariableLocal::FInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<NDIConsoleVariableLocal::FInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<NDIConsoleVariableLocal::FInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<NDIConsoleVariableLocal::FInstanceData_GameThread> *)(*pcVar5)();
      return pFVar7;
    }
  }
  this->Ptr = param_1->UserPtrTable[iVar2];
  return this;
}

// FUserPtrHandler<FNDIDataChannelReadInstanceData> @ 148e53850

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FUserPtrHandler<FNDIDataChannelReadInstanceData> * __thiscall
VectorVM::FUserPtrHandler<FNDIDataChannelReadInstanceData>::
FUserPtrHandler<FNDIDataChannelReadInstanceData>
          (FUserPtrHandler<FNDIDataChannelReadInstanceData> *this,
          FVectorVMExternalFunctionContext *param_1)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  FUserPtrHandler<FNDIDataChannelReadInstanceData> *pFVar7;
  
  if (param_1->NumRegisters <= param_1->RegReadCount) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegReadCount < NumRegisters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x160,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUserPtrHandler<FNDIDataChannelReadInstanceData> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIDataChannelReadInstanceData> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIDataChannelReadInstanceData> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIDataChannelReadInstanceData> *)(*pcVar5)();
      return pFVar7;
    }
  }
  this->Ptr = param_1->UserPtrTable[iVar2];
  return this;
}

// FUserPtrHandler<FNDIDataChannelWriteInstanceData> @ 148e53960

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FUserPtrHandler<FNDIDataChannelWriteInstanceData> * __thiscall
VectorVM::FUserPtrHandler<FNDIDataChannelWriteInstanceData>::
FUserPtrHandler<FNDIDataChannelWriteInstanceData>
          (FUserPtrHandler<FNDIDataChannelWriteInstanceData> *this,
          FVectorVMExternalFunctionContext *param_1)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  FUserPtrHandler<FNDIDataChannelWriteInstanceData> *pFVar7;
  
  if (param_1->NumRegisters <= param_1->RegReadCount) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegReadCount < NumRegisters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x160,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUserPtrHandler<FNDIDataChannelWriteInstanceData> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIDataChannelWriteInstanceData> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIDataChannelWriteInstanceData> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIDataChannelWriteInstanceData> *)(*pcVar5)();
      return pFVar7;
    }
  }
  this->Ptr = param_1->UserPtrTable[iVar2];
  return this;
}

// FUserPtrHandler<NDIDataTableLocal::FInstanceData_GameThread> @ 148ea1ed0

FUserPtrHandler<NDIDataTableLocal::FInstanceData_GameThread> * __thiscall
VectorVM::FUserPtrHandler<NDIDataTableLocal::FInstanceData_GameThread>::
FUserPtrHandler<NDIDataTableLocal::FInstanceData_GameThread>
          (FUserPtrHandler<NDIDataTableLocal::FInstanceData_GameThread> *this,
          FVectorVMExternalFunctionContext *param_1)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  FUserPtrHandler<NDIDataTableLocal::FInstanceData_GameThread> *pFVar7;
  
  if (param_1->NumRegisters <= param_1->RegReadCount) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegReadCount < NumRegisters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x160,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUserPtrHandler<NDIDataTableLocal::FInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<NDIDataTableLocal::FInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<NDIDataTableLocal::FInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<NDIDataTableLocal::FInstanceData_GameThread> *)(*pcVar5)();
      return pFVar7;
    }
  }
  this->Ptr = param_1->UserPtrTable[iVar2];
  return this;
}

// FUserPtrHandler<NDIEmitterPropertiesLocal::FInstanceData_GameThread> @ 148ea1fe0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FUserPtrHandler<NDIEmitterPropertiesLocal::FInstanceData_GameThread> * __thiscall
VectorVM::FUserPtrHandler<NDIEmitterPropertiesLocal::FInstanceData_GameThread>::
FUserPtrHandler<NDIEmitterPropertiesLocal::FInstanceData_GameThread>
          (FUserPtrHandler<NDIEmitterPropertiesLocal::FInstanceData_GameThread> *this,
          FVectorVMExternalFunctionContext *param_1)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  FUserPtrHandler<NDIEmitterPropertiesLocal::FInstanceData_GameThread> *pFVar7;
  
  if (param_1->NumRegisters <= param_1->RegReadCount) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegReadCount < NumRegisters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x160,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUserPtrHandler<NDIEmitterPropertiesLocal::FInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<NDIEmitterPropertiesLocal::FInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<NDIEmitterPropertiesLocal::FInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<NDIEmitterPropertiesLocal::FInstanceData_GameThread> *)(*pcVar5)();
      return pFVar7;
    }
  }
  this->Ptr = param_1->UserPtrTable[iVar2];
  return this;
}

// FUserPtrHandler<NDISimCacheReaderLocal::FInstanceData_GameThread> @ 148ea20f0

FUserPtrHandler<NDISimCacheReaderLocal::FInstanceData_GameThread> * __thiscall
VectorVM::FUserPtrHandler<NDISimCacheReaderLocal::FInstanceData_GameThread>::
FUserPtrHandler<NDISimCacheReaderLocal::FInstanceData_GameThread>
          (FUserPtrHandler<NDISimCacheReaderLocal::FInstanceData_GameThread> *this,
          FVectorVMExternalFunctionContext *param_1)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  FUserPtrHandler<NDISimCacheReaderLocal::FInstanceData_GameThread> *pFVar7;
  
  if (param_1->NumRegisters <= param_1->RegReadCount) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegReadCount < NumRegisters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x160,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUserPtrHandler<NDISimCacheReaderLocal::FInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<NDISimCacheReaderLocal::FInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<NDISimCacheReaderLocal::FInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<NDISimCacheReaderLocal::FInstanceData_GameThread> *)(*pcVar5)();
      return pFVar7;
    }
  }
  this->Ptr = param_1->UserPtrTable[iVar2];
  return this;
}

// FUserPtrHandler<FNDIDebugDrawInstanceData_GameThread> @ 148ea2200

FUserPtrHandler<FNDIDebugDrawInstanceData_GameThread> * __thiscall
VectorVM::FUserPtrHandler<FNDIDebugDrawInstanceData_GameThread>::
FUserPtrHandler<FNDIDebugDrawInstanceData_GameThread>
          (FUserPtrHandler<FNDIDebugDrawInstanceData_GameThread> *this,
          FVectorVMExternalFunctionContext *param_1)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  FUserPtrHandler<FNDIDebugDrawInstanceData_GameThread> *pFVar7;
  
  if (param_1->NumRegisters <= param_1->RegReadCount) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegReadCount < NumRegisters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x160,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUserPtrHandler<FNDIDebugDrawInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIDebugDrawInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIDebugDrawInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIDebugDrawInstanceData_GameThread> *)(*pcVar5)();
      return pFVar7;
    }
  }
  this->Ptr = param_1->UserPtrTable[iVar2];
  return this;
}

// FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread> @ 148ea2310

FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread> * __thiscall
VectorVM::FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread>::
FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread>
          (FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread> *this,
          FVectorVMExternalFunctionContext *param_1)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread> *pFVar7;
  
  if (param_1->NumRegisters <= param_1->RegReadCount) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegReadCount < NumRegisters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x160,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread> *)(*pcVar5)();
      return pFVar7;
    }
  }
  this->Ptr = param_1->UserPtrTable[iVar2];
  return this;
}

// FUserPtrHandler<NDIMemoryBufferLocal::FNDIInstanceData_GameThread> @ 148ea2420

FUserPtrHandler<NDIMemoryBufferLocal::FNDIInstanceData_GameThread> * __thiscall
VectorVM::FUserPtrHandler<NDIMemoryBufferLocal::FNDIInstanceData_GameThread>::
FUserPtrHandler<NDIMemoryBufferLocal::FNDIInstanceData_GameThread>
          (FUserPtrHandler<NDIMemoryBufferLocal::FNDIInstanceData_GameThread> *this,
          FVectorVMExternalFunctionContext *param_1)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  FUserPtrHandler<NDIMemoryBufferLocal::FNDIInstanceData_GameThread> *pFVar7;
  
  if (param_1->NumRegisters <= param_1->RegReadCount) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegReadCount < NumRegisters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x160,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUserPtrHandler<NDIMemoryBufferLocal::FNDIInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<NDIMemoryBufferLocal::FNDIInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<NDIMemoryBufferLocal::FNDIInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<NDIMemoryBufferLocal::FNDIInstanceData_GameThread> *)(*pcVar5)();
      return pFVar7;
    }
  }
  this->Ptr = param_1->UserPtrTable[iVar2];
  return this;
}

// FUserPtrHandler<NDISceneCapture2DLocal::FNDIInstanceData_GameThread> @ 148ea2530

FUserPtrHandler<NDISceneCapture2DLocal::FNDIInstanceData_GameThread> * __thiscall
VectorVM::FUserPtrHandler<NDISceneCapture2DLocal::FNDIInstanceData_GameThread>::
FUserPtrHandler<NDISceneCapture2DLocal::FNDIInstanceData_GameThread>
          (FUserPtrHandler<NDISceneCapture2DLocal::FNDIInstanceData_GameThread> *this,
          FVectorVMExternalFunctionContext *param_1)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  FUserPtrHandler<NDISceneCapture2DLocal::FNDIInstanceData_GameThread> *pFVar7;
  
  if (param_1->NumRegisters <= param_1->RegReadCount) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegReadCount < NumRegisters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x160,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUserPtrHandler<NDISceneCapture2DLocal::FNDIInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<NDISceneCapture2DLocal::FNDIInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<NDISceneCapture2DLocal::FNDIInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<NDISceneCapture2DLocal::FNDIInstanceData_GameThread> *)(*pcVar5)();
      return pFVar7;
    }
  }
  this->Ptr = param_1->UserPtrTable[iVar2];
  return this;
}

// FUserPtrHandler<FNDISimpleCounterInstanceData_GameThread> @ 148ea2640

FUserPtrHandler<FNDISimpleCounterInstanceData_GameThread> * __thiscall
VectorVM::FUserPtrHandler<FNDISimpleCounterInstanceData_GameThread>::
FUserPtrHandler<FNDISimpleCounterInstanceData_GameThread>
          (FUserPtrHandler<FNDISimpleCounterInstanceData_GameThread> *this,
          FVectorVMExternalFunctionContext *param_1)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  FUserPtrHandler<FNDISimpleCounterInstanceData_GameThread> *pFVar7;
  
  if (param_1->NumRegisters <= param_1->RegReadCount) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegReadCount < NumRegisters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x160,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUserPtrHandler<FNDISimpleCounterInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDISimpleCounterInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDISimpleCounterInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDISimpleCounterInstanceData_GameThread> *)(*pcVar5)();
      return pFVar7;
    }
  }
  this->Ptr = param_1->UserPtrTable[iVar2];
  return this;
}

// FUserPtrHandler<NDISocketReaderLocal::FInstanceData_GameThread> @ 148f7de60

FUserPtrHandler<NDISocketReaderLocal::FInstanceData_GameThread> * __thiscall
VectorVM::FUserPtrHandler<NDISocketReaderLocal::FInstanceData_GameThread>::
FUserPtrHandler<NDISocketReaderLocal::FInstanceData_GameThread>
          (FUserPtrHandler<NDISocketReaderLocal::FInstanceData_GameThread> *this,
          FVectorVMExternalFunctionContext *param_1)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  FUserPtrHandler<NDISocketReaderLocal::FInstanceData_GameThread> *pFVar7;
  
  if (param_1->NumRegisters <= param_1->RegReadCount) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegReadCount < NumRegisters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x160,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUserPtrHandler<NDISocketReaderLocal::FInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<NDISocketReaderLocal::FInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<NDISocketReaderLocal::FInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<NDISocketReaderLocal::FInstanceData_GameThread> *)(*pcVar5)();
      return pFVar7;
    }
  }
  this->Ptr = param_1->UserPtrTable[iVar2];
  return this;
}

// FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> @ 148f7df70

FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> * __thiscall
VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>
          (FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> *this,
          FVectorVMExternalFunctionContext *param_1)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> *pFVar7;
  
  if (param_1->NumRegisters <= param_1->RegReadCount) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegReadCount < NumRegisters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x160,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> *)(*pcVar5)();
      return pFVar7;
    }
  }
  this->Ptr = param_1->UserPtrTable[iVar2];
  return this;
}

// FUserPtrHandler<NDIUObjectPropertyReaderLocal::FInstanceData_GameThread> @ 148f7e080

FUserPtrHandler<NDIUObjectPropertyReaderLocal::FInstanceData_GameThread> * __thiscall
VectorVM::FUserPtrHandler<NDIUObjectPropertyReaderLocal::FInstanceData_GameThread>::
FUserPtrHandler<NDIUObjectPropertyReaderLocal::FInstanceData_GameThread>
          (FUserPtrHandler<NDIUObjectPropertyReaderLocal::FInstanceData_GameThread> *this,
          FVectorVMExternalFunctionContext *param_1)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  FUserPtrHandler<NDIUObjectPropertyReaderLocal::FInstanceData_GameThread> *pFVar7;
  
  if (param_1->NumRegisters <= param_1->RegReadCount) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegReadCount < NumRegisters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x160,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUserPtrHandler<NDIUObjectPropertyReaderLocal::FInstanceData_GameThread> *)
               (*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<NDIUObjectPropertyReaderLocal::FInstanceData_GameThread> *)
               (*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<NDIUObjectPropertyReaderLocal::FInstanceData_GameThread> *)
               (*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<NDIUObjectPropertyReaderLocal::FInstanceData_GameThread> *)
               (*pcVar5)();
      return pFVar7;
    }
  }
  this->Ptr = param_1->UserPtrTable[iVar2];
  return this;
}

// FUserPtrHandler<FNDISkeletalMesh_InstanceData> @ 148f7e190

FUserPtrHandler<FNDISkeletalMesh_InstanceData> * __thiscall
VectorVM::FUserPtrHandler<FNDISkeletalMesh_InstanceData>::
FUserPtrHandler<FNDISkeletalMesh_InstanceData>
          (FUserPtrHandler<FNDISkeletalMesh_InstanceData> *this,
          FVectorVMExternalFunctionContext *param_1)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  FUserPtrHandler<FNDISkeletalMesh_InstanceData> *pFVar7;
  
  if (param_1->NumRegisters <= param_1->RegReadCount) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegReadCount < NumRegisters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x160,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUserPtrHandler<FNDISkeletalMesh_InstanceData> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDISkeletalMesh_InstanceData> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDISkeletalMesh_InstanceData> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDISkeletalMesh_InstanceData> *)(*pcVar5)();
      return pFVar7;
    }
  }
  this->Ptr = param_1->UserPtrTable[iVar2];
  return this;
}

// FUserPtrHandler<FNDIArrayInstanceData_GameThread<unsigned_char>_> @ 1490ada30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FUserPtrHandler<FNDIArrayInstanceData_GameThread<unsigned_char>_> * __thiscall
VectorVM::FUserPtrHandler<FNDIArrayInstanceData_GameThread<unsigned_char>_>::
FUserPtrHandler<FNDIArrayInstanceData_GameThread<unsigned_char>_>
          (FUserPtrHandler<FNDIArrayInstanceData_GameThread<unsigned_char>_> *this,
          FVectorVMExternalFunctionContext *param_1)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  FUserPtrHandler<FNDIArrayInstanceData_GameThread<unsigned_char>_> *pFVar7;
  
  if (param_1->NumRegisters <= param_1->RegReadCount) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegReadCount < NumRegisters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x160,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUserPtrHandler<FNDIArrayInstanceData_GameThread<unsigned_char>_> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIArrayInstanceData_GameThread<unsigned_char>_> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIArrayInstanceData_GameThread<unsigned_char>_> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIArrayInstanceData_GameThread<unsigned_char>_> *)(*pcVar5)();
      return pFVar7;
    }
  }
  this->Ptr = param_1->UserPtrTable[iVar2];
  return this;
}

// FUserPtrHandler<FNDIArrayInstanceData_GameThread<int>_> @ 1490adb40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FUserPtrHandler<FNDIArrayInstanceData_GameThread<int>_> * __thiscall
VectorVM::FUserPtrHandler<FNDIArrayInstanceData_GameThread<int>_>::
FUserPtrHandler<FNDIArrayInstanceData_GameThread<int>_>
          (FUserPtrHandler<FNDIArrayInstanceData_GameThread<int>_> *this,
          FVectorVMExternalFunctionContext *param_1)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  FUserPtrHandler<FNDIArrayInstanceData_GameThread<int>_> *pFVar7;
  
  if (param_1->NumRegisters <= param_1->RegReadCount) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegReadCount < NumRegisters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x160,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUserPtrHandler<FNDIArrayInstanceData_GameThread<int>_> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIArrayInstanceData_GameThread<int>_> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIArrayInstanceData_GameThread<int>_> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIArrayInstanceData_GameThread<int>_> *)(*pcVar5)();
      return pFVar7;
    }
  }
  this->Ptr = param_1->UserPtrTable[iVar2];
  return this;
}

// FUserPtrHandler<FNDIArrayInstanceData_GameThread<float>_> @ 1490adc50

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FUserPtrHandler<FNDIArrayInstanceData_GameThread<float>_> * __thiscall
VectorVM::FUserPtrHandler<FNDIArrayInstanceData_GameThread<float>_>::
FUserPtrHandler<FNDIArrayInstanceData_GameThread<float>_>
          (FUserPtrHandler<FNDIArrayInstanceData_GameThread<float>_> *this,
          FVectorVMExternalFunctionContext *param_1)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  FUserPtrHandler<FNDIArrayInstanceData_GameThread<float>_> *pFVar7;
  
  if (param_1->NumRegisters <= param_1->RegReadCount) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegReadCount < NumRegisters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x160,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUserPtrHandler<FNDIArrayInstanceData_GameThread<float>_> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIArrayInstanceData_GameThread<float>_> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIArrayInstanceData_GameThread<float>_> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIArrayInstanceData_GameThread<float>_> *)(*pcVar5)();
      return pFVar7;
    }
  }
  this->Ptr = param_1->UserPtrTable[iVar2];
  return this;
}

// FUserPtrHandler<FNDIArrayInstanceData_GameThread<UE::Math::TMatrix<float>_>_> @ 1490add60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FUserPtrHandler<FNDIArrayInstanceData_GameThread<UE::Math::TMatrix<float>_>_> * __thiscall
VectorVM::FUserPtrHandler<FNDIArrayInstanceData_GameThread<UE::Math::TMatrix<float>_>_>::
FUserPtrHandler<FNDIArrayInstanceData_GameThread<UE::Math::TMatrix<float>_>_>
          (FUserPtrHandler<FNDIArrayInstanceData_GameThread<UE::Math::TMatrix<float>_>_> *this,
          FVectorVMExternalFunctionContext *param_1)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  FUserPtrHandler<FNDIArrayInstanceData_GameThread<UE::Math::TMatrix<float>_>_> *pFVar7;
  
  if (param_1->NumRegisters <= param_1->RegReadCount) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegReadCount < NumRegisters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x160,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUserPtrHandler<FNDIArrayInstanceData_GameThread<UE::Math::TMatrix<float>_>_> *)
               (*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIArrayInstanceData_GameThread<UE::Math::TMatrix<float>_>_> *)
               (*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIArrayInstanceData_GameThread<UE::Math::TMatrix<float>_>_> *)
               (*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIArrayInstanceData_GameThread<UE::Math::TMatrix<float>_>_> *)
               (*pcVar5)();
      return pFVar7;
    }
  }
  this->Ptr = param_1->UserPtrTable[iVar2];
  return this;
}

// FUserPtrHandler<FNDIArrayInstanceData_GameThread<UE::Math::TQuat<float>_>_> @ 1490ade70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FUserPtrHandler<FNDIArrayInstanceData_GameThread<UE::Math::TQuat<float>_>_> * __thiscall
VectorVM::FUserPtrHandler<FNDIArrayInstanceData_GameThread<UE::Math::TQuat<float>_>_>::
FUserPtrHandler<FNDIArrayInstanceData_GameThread<UE::Math::TQuat<float>_>_>
          (FUserPtrHandler<FNDIArrayInstanceData_GameThread<UE::Math::TQuat<float>_>_> *this,
          FVectorVMExternalFunctionContext *param_1)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  FUserPtrHandler<FNDIArrayInstanceData_GameThread<UE::Math::TQuat<float>_>_> *pFVar7;
  
  if (param_1->NumRegisters <= param_1->RegReadCount) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegReadCount < NumRegisters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x160,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUserPtrHandler<FNDIArrayInstanceData_GameThread<UE::Math::TQuat<float>_>_> *)
               (*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIArrayInstanceData_GameThread<UE::Math::TQuat<float>_>_> *)
               (*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIArrayInstanceData_GameThread<UE::Math::TQuat<float>_>_> *)
               (*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIArrayInstanceData_GameThread<UE::Math::TQuat<float>_>_> *)
               (*pcVar5)();
      return pFVar7;
    }
  }
  this->Ptr = param_1->UserPtrTable[iVar2];
  return this;
}

// FUserPtrHandler<FNDIArrayInstanceData_GameThread<UE::Math::TVector2<float>_>_> @ 1490adf80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FUserPtrHandler<FNDIArrayInstanceData_GameThread<UE::Math::TVector2<float>_>_> * __thiscall
VectorVM::FUserPtrHandler<FNDIArrayInstanceData_GameThread<UE::Math::TVector2<float>_>_>::
FUserPtrHandler<FNDIArrayInstanceData_GameThread<UE::Math::TVector2<float>_>_>
          (FUserPtrHandler<FNDIArrayInstanceData_GameThread<UE::Math::TVector2<float>_>_> *this,
          FVectorVMExternalFunctionContext *param_1)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  FUserPtrHandler<FNDIArrayInstanceData_GameThread<UE::Math::TVector2<float>_>_> *pFVar7;
  
  if (param_1->NumRegisters <= param_1->RegReadCount) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegReadCount < NumRegisters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x160,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUserPtrHandler<FNDIArrayInstanceData_GameThread<UE::Math::TVector2<float>_>_> *)
               (*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIArrayInstanceData_GameThread<UE::Math::TVector2<float>_>_> *)
               (*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIArrayInstanceData_GameThread<UE::Math::TVector2<float>_>_> *)
               (*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIArrayInstanceData_GameThread<UE::Math::TVector2<float>_>_> *)
               (*pcVar5)();
      return pFVar7;
    }
  }
  this->Ptr = param_1->UserPtrTable[iVar2];
  return this;
}

// FUserPtrHandler<FNDIArrayInstanceData_GameThread<UE::Math::TVector4<float>_>_> @ 1490ae090

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FUserPtrHandler<FNDIArrayInstanceData_GameThread<UE::Math::TVector4<float>_>_> * __thiscall
VectorVM::FUserPtrHandler<FNDIArrayInstanceData_GameThread<UE::Math::TVector4<float>_>_>::
FUserPtrHandler<FNDIArrayInstanceData_GameThread<UE::Math::TVector4<float>_>_>
          (FUserPtrHandler<FNDIArrayInstanceData_GameThread<UE::Math::TVector4<float>_>_> *this,
          FVectorVMExternalFunctionContext *param_1)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  FUserPtrHandler<FNDIArrayInstanceData_GameThread<UE::Math::TVector4<float>_>_> *pFVar7;
  
  if (param_1->NumRegisters <= param_1->RegReadCount) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegReadCount < NumRegisters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x160,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUserPtrHandler<FNDIArrayInstanceData_GameThread<UE::Math::TVector4<float>_>_> *)
               (*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIArrayInstanceData_GameThread<UE::Math::TVector4<float>_>_> *)
               (*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIArrayInstanceData_GameThread<UE::Math::TVector4<float>_>_> *)
               (*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIArrayInstanceData_GameThread<UE::Math::TVector4<float>_>_> *)
               (*pcVar5)();
      return pFVar7;
    }
  }
  this->Ptr = param_1->UserPtrTable[iVar2];
  return this;
}

// FUserPtrHandler<FNDIArrayInstanceData_GameThread<UE::Math::TVector<float>_>_> @ 1490ae1a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FUserPtrHandler<FNDIArrayInstanceData_GameThread<UE::Math::TVector<float>_>_> * __thiscall
VectorVM::FUserPtrHandler<FNDIArrayInstanceData_GameThread<UE::Math::TVector<float>_>_>::
FUserPtrHandler<FNDIArrayInstanceData_GameThread<UE::Math::TVector<float>_>_>
          (FUserPtrHandler<FNDIArrayInstanceData_GameThread<UE::Math::TVector<float>_>_> *this,
          FVectorVMExternalFunctionContext *param_1)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  FUserPtrHandler<FNDIArrayInstanceData_GameThread<UE::Math::TVector<float>_>_> *pFVar7;
  
  if (param_1->NumRegisters <= param_1->RegReadCount) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegReadCount < NumRegisters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x160,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUserPtrHandler<FNDIArrayInstanceData_GameThread<UE::Math::TVector<float>_>_> *)
               (*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIArrayInstanceData_GameThread<UE::Math::TVector<float>_>_> *)
               (*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIArrayInstanceData_GameThread<UE::Math::TVector<float>_>_> *)
               (*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIArrayInstanceData_GameThread<UE::Math::TVector<float>_>_> *)
               (*pcVar5)();
      return pFVar7;
    }
  }
  this->Ptr = param_1->UserPtrTable[iVar2];
  return this;
}

// FUserPtrHandler<FNDIArrayInstanceData_GameThread<FLinearColor>_> @ 1490ae2b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FUserPtrHandler<FNDIArrayInstanceData_GameThread<FLinearColor>_> * __thiscall
VectorVM::FUserPtrHandler<FNDIArrayInstanceData_GameThread<FLinearColor>_>::
FUserPtrHandler<FNDIArrayInstanceData_GameThread<FLinearColor>_>
          (FUserPtrHandler<FNDIArrayInstanceData_GameThread<FLinearColor>_> *this,
          FVectorVMExternalFunctionContext *param_1)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  FUserPtrHandler<FNDIArrayInstanceData_GameThread<FLinearColor>_> *pFVar7;
  
  if (param_1->NumRegisters <= param_1->RegReadCount) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegReadCount < NumRegisters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x160,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUserPtrHandler<FNDIArrayInstanceData_GameThread<FLinearColor>_> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIArrayInstanceData_GameThread<FLinearColor>_> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIArrayInstanceData_GameThread<FLinearColor>_> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIArrayInstanceData_GameThread<FLinearColor>_> *)(*pcVar5)();
      return pFVar7;
    }
  }
  this->Ptr = param_1->UserPtrTable[iVar2];
  return this;
}

// FUserPtrHandler<FNDIArrayInstanceData_GameThread<FNiagaraID>_> @ 1490ae3c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FUserPtrHandler<FNDIArrayInstanceData_GameThread<FNiagaraID>_> * __thiscall
VectorVM::FUserPtrHandler<FNDIArrayInstanceData_GameThread<FNiagaraID>_>::
FUserPtrHandler<FNDIArrayInstanceData_GameThread<FNiagaraID>_>
          (FUserPtrHandler<FNDIArrayInstanceData_GameThread<FNiagaraID>_> *this,
          FVectorVMExternalFunctionContext *param_1)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  FUserPtrHandler<FNDIArrayInstanceData_GameThread<FNiagaraID>_> *pFVar7;
  
  if (param_1->NumRegisters <= param_1->RegReadCount) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegReadCount < NumRegisters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x160,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUserPtrHandler<FNDIArrayInstanceData_GameThread<FNiagaraID>_> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIArrayInstanceData_GameThread<FNiagaraID>_> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIArrayInstanceData_GameThread<FNiagaraID>_> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIArrayInstanceData_GameThread<FNiagaraID>_> *)(*pcVar5)();
      return pFVar7;
    }
  }
  this->Ptr = param_1->UserPtrTable[iVar2];
  return this;
}

// FUserPtrHandler<FNDIArrayInstanceData_GameThread<FNiagaraPosition>_> @ 1490ae4d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FUserPtrHandler<FNDIArrayInstanceData_GameThread<FNiagaraPosition>_> * __thiscall
VectorVM::FUserPtrHandler<FNDIArrayInstanceData_GameThread<FNiagaraPosition>_>::
FUserPtrHandler<FNDIArrayInstanceData_GameThread<FNiagaraPosition>_>
          (FUserPtrHandler<FNDIArrayInstanceData_GameThread<FNiagaraPosition>_> *this,
          FVectorVMExternalFunctionContext *param_1)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  FUserPtrHandler<FNDIArrayInstanceData_GameThread<FNiagaraPosition>_> *pFVar7;
  
  if (param_1->NumRegisters <= param_1->RegReadCount) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegReadCount < NumRegisters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x160,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUserPtrHandler<FNDIArrayInstanceData_GameThread<FNiagaraPosition>_> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIArrayInstanceData_GameThread<FNiagaraPosition>_> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIArrayInstanceData_GameThread<FNiagaraPosition>_> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIArrayInstanceData_GameThread<FNiagaraPosition>_> *)(*pcVar5)();
      return pFVar7;
    }
  }
  this->Ptr = param_1->UserPtrTable[iVar2];
  return this;
}

// FUserPtrHandler<FNDIArrayInstanceData_GameThread<bool>_> @ 1490ae5e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FUserPtrHandler<FNDIArrayInstanceData_GameThread<bool>_> * __thiscall
VectorVM::FUserPtrHandler<FNDIArrayInstanceData_GameThread<bool>_>::
FUserPtrHandler<FNDIArrayInstanceData_GameThread<bool>_>
          (FUserPtrHandler<FNDIArrayInstanceData_GameThread<bool>_> *this,
          FVectorVMExternalFunctionContext *param_1)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  FUserPtrHandler<FNDIArrayInstanceData_GameThread<bool>_> *pFVar7;
  
  if (param_1->NumRegisters <= param_1->RegReadCount) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegReadCount < NumRegisters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x160,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUserPtrHandler<FNDIArrayInstanceData_GameThread<bool>_> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIArrayInstanceData_GameThread<bool>_> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIArrayInstanceData_GameThread<bool>_> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIArrayInstanceData_GameThread<bool>_> *)(*pcVar5)();
      return pFVar7;
    }
  }
  this->Ptr = param_1->UserPtrTable[iVar2];
  return this;
}

// FUserPtrHandler<CQDIPerInstanceData> @ 1490ae6f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FUserPtrHandler<CQDIPerInstanceData> * __thiscall
VectorVM::FUserPtrHandler<CQDIPerInstanceData>::FUserPtrHandler<CQDIPerInstanceData>
          (FUserPtrHandler<CQDIPerInstanceData> *this,FVectorVMExternalFunctionContext *param_1)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  FUserPtrHandler<CQDIPerInstanceData> *pFVar7;
  
  if (param_1->NumRegisters <= param_1->RegReadCount) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegReadCount < NumRegisters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x160,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUserPtrHandler<CQDIPerInstanceData> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<CQDIPerInstanceData> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<CQDIPerInstanceData> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<CQDIPerInstanceData> *)(*pcVar5)();
      return pFVar7;
    }
  }
  this->Ptr = param_1->UserPtrTable[iVar2];
  return this;
}

// FUserPtrHandler<FAudioPlayerInterface_InstanceData> @ 1490ae800

FUserPtrHandler<FAudioPlayerInterface_InstanceData> * __thiscall
VectorVM::FUserPtrHandler<FAudioPlayerInterface_InstanceData>::
FUserPtrHandler<FAudioPlayerInterface_InstanceData>
          (FUserPtrHandler<FAudioPlayerInterface_InstanceData> *this,
          FVectorVMExternalFunctionContext *param_1)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  FUserPtrHandler<FAudioPlayerInterface_InstanceData> *pFVar7;
  
  if (param_1->NumRegisters <= param_1->RegReadCount) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegReadCount < NumRegisters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x160,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUserPtrHandler<FAudioPlayerInterface_InstanceData> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FAudioPlayerInterface_InstanceData> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FAudioPlayerInterface_InstanceData> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FAudioPlayerInterface_InstanceData> *)(*pcVar5)();
      return pFVar7;
    }
  }
  this->Ptr = param_1->UserPtrTable[iVar2];
  return this;
}

// FUserPtrHandler<FCameraDataInterface_InstanceData> @ 1490ae910

FUserPtrHandler<FCameraDataInterface_InstanceData> * __thiscall
VectorVM::FUserPtrHandler<FCameraDataInterface_InstanceData>::
FUserPtrHandler<FCameraDataInterface_InstanceData>
          (FUserPtrHandler<FCameraDataInterface_InstanceData> *this,
          FVectorVMExternalFunctionContext *param_1)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  FUserPtrHandler<FCameraDataInterface_InstanceData> *pFVar7;
  
  if (param_1->NumRegisters <= param_1->RegReadCount) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegReadCount < NumRegisters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x160,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUserPtrHandler<FCameraDataInterface_InstanceData> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FCameraDataInterface_InstanceData> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FCameraDataInterface_InstanceData> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FCameraDataInterface_InstanceData> *)(*pcVar5)();
      return pFVar7;
    }
  }
  this->Ptr = param_1->UserPtrTable[iVar2];
  return this;
}

// FUserPtrHandler<FNDICubeTextureInstanceData_GameThread> @ 1490aea20

FUserPtrHandler<FNDICubeTextureInstanceData_GameThread> * __thiscall
VectorVM::FUserPtrHandler<FNDICubeTextureInstanceData_GameThread>::
FUserPtrHandler<FNDICubeTextureInstanceData_GameThread>
          (FUserPtrHandler<FNDICubeTextureInstanceData_GameThread> *this,
          FVectorVMExternalFunctionContext *param_1)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  FUserPtrHandler<FNDICubeTextureInstanceData_GameThread> *pFVar7;
  
  if (param_1->NumRegisters <= param_1->RegReadCount) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegReadCount < NumRegisters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x160,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUserPtrHandler<FNDICubeTextureInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDICubeTextureInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDICubeTextureInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDICubeTextureInstanceData_GameThread> *)(*pcVar5)();
      return pFVar7;
    }
  }
  this->Ptr = param_1->UserPtrTable[iVar2];
  return this;
}

// FUserPtrHandler<FGrid2DCollectionRWInstanceData_GameThread> @ 149167e30

FUserPtrHandler<FGrid2DCollectionRWInstanceData_GameThread> * __thiscall
VectorVM::FUserPtrHandler<FGrid2DCollectionRWInstanceData_GameThread>::
FUserPtrHandler<FGrid2DCollectionRWInstanceData_GameThread>
          (FUserPtrHandler<FGrid2DCollectionRWInstanceData_GameThread> *this,
          FVectorVMExternalFunctionContext *param_1)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  FUserPtrHandler<FGrid2DCollectionRWInstanceData_GameThread> *pFVar7;
  
  if (param_1->NumRegisters <= param_1->RegReadCount) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegReadCount < NumRegisters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x160,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUserPtrHandler<FGrid2DCollectionRWInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FGrid2DCollectionRWInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FGrid2DCollectionRWInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FGrid2DCollectionRWInstanceData_GameThread> *)(*pcVar5)();
      return pFVar7;
    }
  }
  this->Ptr = param_1->UserPtrTable[iVar2];
  return this;
}

// FUserPtrHandler<FGrid3DCollectionRWInstanceData_GameThread> @ 149167f40

FUserPtrHandler<FGrid3DCollectionRWInstanceData_GameThread> * __thiscall
VectorVM::FUserPtrHandler<FGrid3DCollectionRWInstanceData_GameThread>::
FUserPtrHandler<FGrid3DCollectionRWInstanceData_GameThread>
          (FUserPtrHandler<FGrid3DCollectionRWInstanceData_GameThread> *this,
          FVectorVMExternalFunctionContext *param_1)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  FUserPtrHandler<FGrid3DCollectionRWInstanceData_GameThread> *pFVar7;
  
  if (param_1->NumRegisters <= param_1->RegReadCount) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegReadCount < NumRegisters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x160,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUserPtrHandler<FGrid3DCollectionRWInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FGrid3DCollectionRWInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FGrid3DCollectionRWInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FGrid3DCollectionRWInstanceData_GameThread> *)(*pcVar5)();
      return pFVar7;
    }
  }
  this->Ptr = param_1->UserPtrTable[iVar2];
  return this;
}

// FUserPtrHandler<FNDIExportInstanceData_GameThread> @ 149168050

FUserPtrHandler<FNDIExportInstanceData_GameThread> * __thiscall
VectorVM::FUserPtrHandler<FNDIExportInstanceData_GameThread>::
FUserPtrHandler<FNDIExportInstanceData_GameThread>
          (FUserPtrHandler<FNDIExportInstanceData_GameThread> *this,
          FVectorVMExternalFunctionContext *param_1)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  FUserPtrHandler<FNDIExportInstanceData_GameThread> *pFVar7;
  
  if (param_1->NumRegisters <= param_1->RegReadCount) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegReadCount < NumRegisters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x160,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUserPtrHandler<FNDIExportInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIExportInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIExportInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIExportInstanceData_GameThread> *)(*pcVar5)();
      return pFVar7;
    }
  }
  this->Ptr = param_1->UserPtrTable[iVar2];
  return this;
}

// FUserPtrHandler<FNDIIntRenderTarget2DInstanceData_GameThread> @ 149168160

FUserPtrHandler<FNDIIntRenderTarget2DInstanceData_GameThread> * __thiscall
VectorVM::FUserPtrHandler<FNDIIntRenderTarget2DInstanceData_GameThread>::
FUserPtrHandler<FNDIIntRenderTarget2DInstanceData_GameThread>
          (FUserPtrHandler<FNDIIntRenderTarget2DInstanceData_GameThread> *this,
          FVectorVMExternalFunctionContext *param_1)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  FUserPtrHandler<FNDIIntRenderTarget2DInstanceData_GameThread> *pFVar7;
  
  if (param_1->NumRegisters <= param_1->RegReadCount) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegReadCount < NumRegisters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x160,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUserPtrHandler<FNDIIntRenderTarget2DInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIIntRenderTarget2DInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIIntRenderTarget2DInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIIntRenderTarget2DInstanceData_GameThread> *)(*pcVar5)();
      return pFVar7;
    }
  }
  this->Ptr = param_1->UserPtrTable[iVar2];
  return this;
}

// FUserPtrHandler<NDIMIDPrivate::FInstanceData_GT> @ 1491aaa50

FUserPtrHandler<NDIMIDPrivate::FInstanceData_GT> * __thiscall
VectorVM::FUserPtrHandler<NDIMIDPrivate::FInstanceData_GT>::
FUserPtrHandler<NDIMIDPrivate::FInstanceData_GT>
          (FUserPtrHandler<NDIMIDPrivate::FInstanceData_GT> *this,
          FVectorVMExternalFunctionContext *param_1)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  FUserPtrHandler<NDIMIDPrivate::FInstanceData_GT> *pFVar7;
  
  if (param_1->NumRegisters <= param_1->RegReadCount) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegReadCount < NumRegisters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x160,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUserPtrHandler<NDIMIDPrivate::FInstanceData_GT> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<NDIMIDPrivate::FInstanceData_GT> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<NDIMIDPrivate::FInstanceData_GT> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<NDIMIDPrivate::FInstanceData_GT> *)(*pcVar5)();
      return pFVar7;
    }
  }
  this->Ptr = param_1->UserPtrTable[iVar2];
  return this;
}

// FUserPtrHandler<NDIMPCPrivate::FInstanceData_GT> @ 1491aab60

FUserPtrHandler<NDIMPCPrivate::FInstanceData_GT> * __thiscall
VectorVM::FUserPtrHandler<NDIMPCPrivate::FInstanceData_GT>::
FUserPtrHandler<NDIMPCPrivate::FInstanceData_GT>
          (FUserPtrHandler<NDIMPCPrivate::FInstanceData_GT> *this,
          FVectorVMExternalFunctionContext *param_1)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  FUserPtrHandler<NDIMPCPrivate::FInstanceData_GT> *pFVar7;
  
  if (param_1->NumRegisters <= param_1->RegReadCount) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegReadCount < NumRegisters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x160,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUserPtrHandler<NDIMPCPrivate::FInstanceData_GT> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<NDIMPCPrivate::FInstanceData_GT> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<NDIMPCPrivate::FInstanceData_GT> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<NDIMPCPrivate::FInstanceData_GT> *)(*pcVar5)();
      return pFVar7;
    }
  }
  this->Ptr = param_1->UserPtrTable[iVar2];
  return this;
}

// FUserPtrHandler<FNDINeighborGrid3DInstanceData_GT> @ 1491aac70

FUserPtrHandler<FNDINeighborGrid3DInstanceData_GT> * __thiscall
VectorVM::FUserPtrHandler<FNDINeighborGrid3DInstanceData_GT>::
FUserPtrHandler<FNDINeighborGrid3DInstanceData_GT>
          (FUserPtrHandler<FNDINeighborGrid3DInstanceData_GT> *this,
          FVectorVMExternalFunctionContext *param_1)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  FUserPtrHandler<FNDINeighborGrid3DInstanceData_GT> *pFVar7;
  
  if (param_1->NumRegisters <= param_1->RegReadCount) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegReadCount < NumRegisters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x160,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUserPtrHandler<FNDINeighborGrid3DInstanceData_GT> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDINeighborGrid3DInstanceData_GT> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDINeighborGrid3DInstanceData_GT> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDINeighborGrid3DInstanceData_GT> *)(*pcVar5)();
      return pFVar7;
    }
  }
  this->Ptr = param_1->UserPtrTable[iVar2];
  return this;
}

// FUserPtrHandler<FNDIParticleRead_InstanceData> @ 1491aad80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FUserPtrHandler<FNDIParticleRead_InstanceData> * __thiscall
VectorVM::FUserPtrHandler<FNDIParticleRead_InstanceData>::
FUserPtrHandler<FNDIParticleRead_InstanceData>
          (FUserPtrHandler<FNDIParticleRead_InstanceData> *this,
          FVectorVMExternalFunctionContext *param_1)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  FUserPtrHandler<FNDIParticleRead_InstanceData> *pFVar7;
  
  if (param_1->NumRegisters <= param_1->RegReadCount) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegReadCount < NumRegisters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x160,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUserPtrHandler<FNDIParticleRead_InstanceData> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIParticleRead_InstanceData> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIParticleRead_InstanceData> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIParticleRead_InstanceData> *)(*pcVar5)();
      return pFVar7;
    }
  }
  this->Ptr = param_1->UserPtrTable[iVar2];
  return this;
}

// FUserPtrHandler<FNDIRigidMeshCollisionData> @ 1491aae90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FUserPtrHandler<FNDIRigidMeshCollisionData> * __thiscall
VectorVM::FUserPtrHandler<FNDIRigidMeshCollisionData>::FUserPtrHandler<FNDIRigidMeshCollisionData>
          (FUserPtrHandler<FNDIRigidMeshCollisionData> *this,
          FVectorVMExternalFunctionContext *param_1)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  FUserPtrHandler<FNDIRigidMeshCollisionData> *pFVar7;
  
  if (param_1->NumRegisters <= param_1->RegReadCount) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegReadCount < NumRegisters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x160,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUserPtrHandler<FNDIRigidMeshCollisionData> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIRigidMeshCollisionData> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIRigidMeshCollisionData> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIRigidMeshCollisionData> *)(*pcVar5)();
      return pFVar7;
    }
  }
  this->Ptr = param_1->UserPtrTable[iVar2];
  return this;
}

// FUserPtrHandler<FRenderTarget2DArrayRWInstanceData_GameThread> @ 1491aafa0

FUserPtrHandler<FRenderTarget2DArrayRWInstanceData_GameThread> * __thiscall
VectorVM::FUserPtrHandler<FRenderTarget2DArrayRWInstanceData_GameThread>::
FUserPtrHandler<FRenderTarget2DArrayRWInstanceData_GameThread>
          (FUserPtrHandler<FRenderTarget2DArrayRWInstanceData_GameThread> *this,
          FVectorVMExternalFunctionContext *param_1)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  FUserPtrHandler<FRenderTarget2DArrayRWInstanceData_GameThread> *pFVar7;
  
  if (param_1->NumRegisters <= param_1->RegReadCount) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegReadCount < NumRegisters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x160,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUserPtrHandler<FRenderTarget2DArrayRWInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FRenderTarget2DArrayRWInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FRenderTarget2DArrayRWInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FRenderTarget2DArrayRWInstanceData_GameThread> *)(*pcVar5)();
      return pFVar7;
    }
  }
  this->Ptr = param_1->UserPtrTable[iVar2];
  return this;
}

// FUserPtrHandler<FRenderTarget2DRWInstanceData_GameThread> @ 1491ab0b0

FUserPtrHandler<FRenderTarget2DRWInstanceData_GameThread> * __thiscall
VectorVM::FUserPtrHandler<FRenderTarget2DRWInstanceData_GameThread>::
FUserPtrHandler<FRenderTarget2DRWInstanceData_GameThread>
          (FUserPtrHandler<FRenderTarget2DRWInstanceData_GameThread> *this,
          FVectorVMExternalFunctionContext *param_1)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  FUserPtrHandler<FRenderTarget2DRWInstanceData_GameThread> *pFVar7;
  
  if (param_1->NumRegisters <= param_1->RegReadCount) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegReadCount < NumRegisters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x160,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUserPtrHandler<FRenderTarget2DRWInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FRenderTarget2DRWInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FRenderTarget2DRWInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FRenderTarget2DRWInstanceData_GameThread> *)(*pcVar5)();
      return pFVar7;
    }
  }
  this->Ptr = param_1->UserPtrTable[iVar2];
  return this;
}

// FUserPtrHandler<FRenderTargetCubeRWInstanceData_GameThread> @ 1491ab1c0

FUserPtrHandler<FRenderTargetCubeRWInstanceData_GameThread> * __thiscall
VectorVM::FUserPtrHandler<FRenderTargetCubeRWInstanceData_GameThread>::
FUserPtrHandler<FRenderTargetCubeRWInstanceData_GameThread>
          (FUserPtrHandler<FRenderTargetCubeRWInstanceData_GameThread> *this,
          FVectorVMExternalFunctionContext *param_1)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  FUserPtrHandler<FRenderTargetCubeRWInstanceData_GameThread> *pFVar7;
  
  if (param_1->NumRegisters <= param_1->RegReadCount) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegReadCount < NumRegisters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x160,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUserPtrHandler<FRenderTargetCubeRWInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FRenderTargetCubeRWInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FRenderTargetCubeRWInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FRenderTargetCubeRWInstanceData_GameThread> *)(*pcVar5)();
      return pFVar7;
    }
  }
  this->Ptr = param_1->UserPtrTable[iVar2];
  return this;
}

// FUserPtrHandler<FRenderTargetVolumeRWInstanceData_GameThread> @ 1491ab2d0

FUserPtrHandler<FRenderTargetVolumeRWInstanceData_GameThread> * __thiscall
VectorVM::FUserPtrHandler<FRenderTargetVolumeRWInstanceData_GameThread>::
FUserPtrHandler<FRenderTargetVolumeRWInstanceData_GameThread>
          (FUserPtrHandler<FRenderTargetVolumeRWInstanceData_GameThread> *this,
          FVectorVMExternalFunctionContext *param_1)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  FUserPtrHandler<FRenderTargetVolumeRWInstanceData_GameThread> *pFVar7;
  
  if (param_1->NumRegisters <= param_1->RegReadCount) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegReadCount < NumRegisters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x160,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUserPtrHandler<FRenderTargetVolumeRWInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FRenderTargetVolumeRWInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FRenderTargetVolumeRWInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FRenderTargetVolumeRWInstanceData_GameThread> *)(*pcVar5)();
      return pFVar7;
    }
  }
  this->Ptr = param_1->UserPtrTable[iVar2];
  return this;
}

// FUserPtrHandler<RasterizationGrid3DRWInstanceData> @ 1491ab3e0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FUserPtrHandler<RasterizationGrid3DRWInstanceData> * __thiscall
VectorVM::FUserPtrHandler<RasterizationGrid3DRWInstanceData>::
FUserPtrHandler<RasterizationGrid3DRWInstanceData>
          (FUserPtrHandler<RasterizationGrid3DRWInstanceData> *this,
          FVectorVMExternalFunctionContext *param_1)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  FUserPtrHandler<RasterizationGrid3DRWInstanceData> *pFVar7;
  
  if (param_1->NumRegisters <= param_1->RegReadCount) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegReadCount < NumRegisters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x160,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUserPtrHandler<RasterizationGrid3DRWInstanceData> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<RasterizationGrid3DRWInstanceData> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<RasterizationGrid3DRWInstanceData> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<RasterizationGrid3DRWInstanceData> *)(*pcVar5)();
      return pFVar7;
    }
  }
  this->Ptr = param_1->UserPtrTable[iVar2];
  return this;
}

// FUserPtrHandler<FNDISparseVolumeTextureInstanceData_GameThread> @ 1492117d0

FUserPtrHandler<FNDISparseVolumeTextureInstanceData_GameThread> * __thiscall
VectorVM::FUserPtrHandler<FNDISparseVolumeTextureInstanceData_GameThread>::
FUserPtrHandler<FNDISparseVolumeTextureInstanceData_GameThread>
          (FUserPtrHandler<FNDISparseVolumeTextureInstanceData_GameThread> *this,
          FVectorVMExternalFunctionContext *param_1)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  FUserPtrHandler<FNDISparseVolumeTextureInstanceData_GameThread> *pFVar7;
  
  if (param_1->NumRegisters <= param_1->RegReadCount) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegReadCount < NumRegisters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x160,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUserPtrHandler<FNDISparseVolumeTextureInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDISparseVolumeTextureInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDISparseVolumeTextureInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDISparseVolumeTextureInstanceData_GameThread> *)(*pcVar5)();
      return pFVar7;
    }
  }
  this->Ptr = param_1->UserPtrTable[iVar2];
  return this;
}

// FUserPtrHandler<FNDISpline_InstanceData> @ 1492118e0

FUserPtrHandler<FNDISpline_InstanceData> * __thiscall
VectorVM::FUserPtrHandler<FNDISpline_InstanceData>::FUserPtrHandler<FNDISpline_InstanceData>
          (FUserPtrHandler<FNDISpline_InstanceData> *this,FVectorVMExternalFunctionContext *param_1)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  FUserPtrHandler<FNDISpline_InstanceData> *pFVar7;
  
  if (param_1->NumRegisters <= param_1->RegReadCount) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegReadCount < NumRegisters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x160,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUserPtrHandler<FNDISpline_InstanceData> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDISpline_InstanceData> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDISpline_InstanceData> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDISpline_InstanceData> *)(*pcVar5)();
      return pFVar7;
    }
  }
  this->Ptr = param_1->UserPtrTable[iVar2];
  return this;
}

// FUserPtrHandler<FNDITextureInstanceData_GameThread> @ 1492119f0

FUserPtrHandler<FNDITextureInstanceData_GameThread> * __thiscall
VectorVM::FUserPtrHandler<FNDITextureInstanceData_GameThread>::
FUserPtrHandler<FNDITextureInstanceData_GameThread>
          (FUserPtrHandler<FNDITextureInstanceData_GameThread> *this,
          FVectorVMExternalFunctionContext *param_1)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  FUserPtrHandler<FNDITextureInstanceData_GameThread> *pFVar7;
  
  if (param_1->NumRegisters <= param_1->RegReadCount) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegReadCount < NumRegisters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x160,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUserPtrHandler<FNDITextureInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDITextureInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDITextureInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDITextureInstanceData_GameThread> *)(*pcVar5)();
      return pFVar7;
    }
  }
  this->Ptr = param_1->UserPtrTable[iVar2];
  return this;
}

// FUserPtrHandler<FNDIVirtualTextureInstanceData_GameThread> @ 149211b00

FUserPtrHandler<FNDIVirtualTextureInstanceData_GameThread> * __thiscall
VectorVM::FUserPtrHandler<FNDIVirtualTextureInstanceData_GameThread>::
FUserPtrHandler<FNDIVirtualTextureInstanceData_GameThread>
          (FUserPtrHandler<FNDIVirtualTextureInstanceData_GameThread> *this,
          FVectorVMExternalFunctionContext *param_1)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  FUserPtrHandler<FNDIVirtualTextureInstanceData_GameThread> *pFVar7;
  
  if (param_1->NumRegisters <= param_1->RegReadCount) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegReadCount < NumRegisters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x160,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUserPtrHandler<FNDIVirtualTextureInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIVirtualTextureInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIVirtualTextureInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIVirtualTextureInstanceData_GameThread> *)(*pcVar5)();
      return pFVar7;
    }
  }
  this->Ptr = param_1->UserPtrTable[iVar2];
  return this;
}

// FUserPtrHandler<FNDIVolumeTextureInstanceData_GameThread> @ 149211c10

FUserPtrHandler<FNDIVolumeTextureInstanceData_GameThread> * __thiscall
VectorVM::FUserPtrHandler<FNDIVolumeTextureInstanceData_GameThread>::
FUserPtrHandler<FNDIVolumeTextureInstanceData_GameThread>
          (FUserPtrHandler<FNDIVolumeTextureInstanceData_GameThread> *this,
          FVectorVMExternalFunctionContext *param_1)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  FUserPtrHandler<FNDIVolumeTextureInstanceData_GameThread> *pFVar7;
  
  if (param_1->NumRegisters <= param_1->RegReadCount) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegReadCount < NumRegisters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x160,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUserPtrHandler<FNDIVolumeTextureInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIVolumeTextureInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIVolumeTextureInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FNDIVolumeTextureInstanceData_GameThread> *)(*pcVar5)();
      return pFVar7;
    }
  }
  this->Ptr = param_1->UserPtrTable[iVar2];
  return this;
}

// FUserPtrHandler<FVolumeCacheInstanceData_GameThread> @ 149211d20

FUserPtrHandler<FVolumeCacheInstanceData_GameThread> * __thiscall
VectorVM::FUserPtrHandler<FVolumeCacheInstanceData_GameThread>::
FUserPtrHandler<FVolumeCacheInstanceData_GameThread>
          (FUserPtrHandler<FVolumeCacheInstanceData_GameThread> *this,
          FVectorVMExternalFunctionContext *param_1)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  FUserPtrHandler<FVolumeCacheInstanceData_GameThread> *pFVar7;
  
  if (param_1->NumRegisters <= param_1->RegReadCount) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegReadCount < NumRegisters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                       ,0x160,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FUserPtrHandler<FVolumeCacheInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FVolumeCacheInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FVolumeCacheInstanceData_GameThread> *)(*pcVar5)();
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
      pFVar7 = (FUserPtrHandler<FVolumeCacheInstanceData_GameThread> *)(*pcVar5)();
      return pFVar7;
    }
  }
  this->Ptr = param_1->UserPtrTable[iVar2];
  return this;
}

