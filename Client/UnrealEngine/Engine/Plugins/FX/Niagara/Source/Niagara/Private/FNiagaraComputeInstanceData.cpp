// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 4

// FindIterationInterface @ 149041d90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FNiagaraDataInterfaceProxyRW * __thiscall
FNiagaraComputeInstanceData::FindIterationInterface(FNiagaraComputeInstanceData *this,uint param_1)

{
  FNiagaraDataInterfaceProxyRW *pFVar1;
  
  pFVar1 = FNiagaraComputeExecutionContext::FindIterationInterface
                     (this->Context,&this->IterationDataInterfaceProxies,param_1);
  return pFVar1;
}

// IsInputStage @ 149059f20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FNiagaraComputeInstanceData::IsInputStage
          (FNiagaraComputeInstanceData *this,FNiagaraDataInterfaceProxy *param_1,uint param_2)

{
  FName *pFVar1;
  FNiagaraComputeExecutionContext *pFVar2;
  FNiagaraSimStageExecutionData *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  FName *pFVar9;
  
  if ((param_1 != (FNiagaraDataInterfaceProxy *)0x0) && (param_1->SourceDIName != (FName)0x0)) {
    pFVar2 = this->Context;
    if ((pFVar2->SimStageExecData).Object == (FNiagaraSimStageExecutionData *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
    pFVar3 = (pFVar2->SimStageExecData).Object;
    uVar8 = 0;
    if ((int)param_2 < (pFVar3->SimStageMetaData).ArrayNum) {
      uVar8 = ~param_2 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
    pFVar4 = (pFVar3->SimStageMetaData).AllocatorInstance.Data;
    pFVar9 = *(FName **)(pFVar4 + (longlong)(int)param_2 * 0xa8 + 0x78);
    pFVar1 = pFVar9 + *(int *)(pFVar4 + (longlong)(int)param_2 * 0xa8 + 0x80);
    if (pFVar9 != pFVar1) {
      do {
        if (*pFVar9 == param_1->SourceDIName) {
          return true;
        }
        pFVar9 = pFVar9 + 1;
      } while (pFVar9 != pFVar1);
    }
  }
  return false;
}

// IsIterationStage @ 14905a1a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FNiagaraComputeInstanceData::IsIterationStage
          (FNiagaraComputeInstanceData *this,FNiagaraDataInterfaceProxy *param_1,uint param_2)

{
  FNiagaraComputeExecutionContext *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  FNiagaraSimStageExecutionData *pFVar6;
  
  if ((param_1 == (FNiagaraDataInterfaceProxy *)0x0) || (param_1->SourceDIName == (FName)0x0)) {
    return false;
  }
  pFVar1 = this->Context;
  if (((pFVar1->SimStageExecData).Object == (FNiagaraSimStageExecutionData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pFVar6 = (pFVar1->SimStageExecData).Object;
  uVar5 = 0;
  if ((int)param_2 < (pFVar6->SimStageMetaData).ArrayNum) {
    uVar5 = ~param_2 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((pFVar6->SimStageMetaData).AllocatorInstance.Data[(longlong)(int)param_2 * 0xa8 + 0x34] ==
      (FScriptContainerElement)0x1) {
    pFVar6 = TSharedPtr<FNiagaraSimStageExecutionData,1>::operator->(&pFVar1->SimStageExecData);
    uVar5 = 0;
    if ((int)param_2 < (pFVar6->SimStageMetaData).ArrayNum) {
      uVar5 = ~param_2 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (*(FName *)((pFVar6->SimStageMetaData).AllocatorInstance.Data +
                  (longlong)(int)param_2 * 0xa8 + 0x38) == param_1->SourceDIName) {
      return true;
    }
  }
  return false;
}

// IsOutputStage @ 14905a4f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FNiagaraComputeInstanceData::IsOutputStage
          (FNiagaraComputeInstanceData *this,FNiagaraDataInterfaceProxy *param_1,uint param_2)

{
  FName *pFVar1;
  FNiagaraComputeExecutionContext *pFVar2;
  FNiagaraSimStageExecutionData *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  FName *pFVar9;
  
  if ((param_1 != (FNiagaraDataInterfaceProxy *)0x0) && (param_1->SourceDIName != (FName)0x0)) {
    pFVar2 = this->Context;
    if ((pFVar2->SimStageExecData).Object == (FNiagaraSimStageExecutionData *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
    pFVar3 = (pFVar2->SimStageExecData).Object;
    uVar8 = 0;
    if ((int)param_2 < (pFVar3->SimStageMetaData).ArrayNum) {
      uVar8 = ~param_2 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
    pFVar4 = (pFVar3->SimStageMetaData).AllocatorInstance.Data;
    pFVar9 = *(FName **)(pFVar4 + (longlong)(int)param_2 * 0xa8 + 0x68);
    pFVar1 = pFVar9 + *(int *)(pFVar4 + (longlong)(int)param_2 * 0xa8 + 0x70);
    if (pFVar9 != pFVar1) {
      do {
        if (*pFVar9 == param_1->SourceDIName) {
          return true;
        }
        pFVar9 = pFVar9 + 1;
      } while (pFVar9 != pFVar1);
    }
  }
  return false;
}

