// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 56

// Reset<enum_FNiagaraSystemInstance::EResetMode> @ 148f43d00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstanceController::Reset<enum_FNiagaraSystemInstance::EResetMode>
          (FNiagaraSystemInstanceController *this,EResetMode param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4531953176097587065>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemInstanceController.h"
                       ,0x87,"IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FNiagaraSystemInstance::Reset((this->SystemInstance).Object,param_1);
  return;
}

// SetRequestedExecutionState_Deferred<enum_ENiagaraExecutionState> @ 148f43eb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstanceController::SetRequestedExecutionState_Deferred<enum_ENiagaraExecutionState>
          (FNiagaraSystemInstanceController *this,ENiagaraExecutionState param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4531953176097587015>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemInstanceController.h"
                       ,0xb9,"IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FNiagaraSystemInstance::SetRequestedExecutionState((this->SystemInstance).Object,param_1);
  return;
}

// AdvanceSimulation<int,float> @ 148fe9250

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstanceController::AdvanceSimulation<int,float>
          (FNiagaraSystemInstanceController *this,int param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4531953176097587059>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemInstanceController.h"
                       ,0x8d,"IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FNiagaraSystemInstance::AdvanceSimulation((this->SystemInstance).Object,param_1,param_2);
  return;
}

// Deactivate<bool> @ 148feea90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstanceController::Deactivate<bool>
          (FNiagaraSystemInstanceController *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4531953176097587054>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemInstanceController.h"
                       ,0x92,"IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FNiagaraSystemInstance::Deactivate((this->SystemInstance).Object,param_1);
  return;
}

// GetActualExecutionState<> @ 148ff3db0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

ENiagaraExecutionState __thiscall
FNiagaraSystemInstanceController::GetActualExecutionState<>(FNiagaraSystemInstanceController *this)

{
  code *pcVar1;
  bool bVar2;
  ENiagaraExecutionState EVar3;
  
  if ((this->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4531953176097587078>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemInstanceController.h"
                       ,0x7a,"IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  if ((this->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  return ((this->SystemInstance).Object)->ActualExecutionState;
}

// GetAge<> @ 148ff3e40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

float __thiscall FNiagaraSystemInstanceController::GetAge<>(FNiagaraSystemInstanceController *this)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if ((this->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4531953176097587071>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemInstanceController.h"
                       ,0x81,"IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  if ((this->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  return ((this->SystemInstance).Object)->Age;
}

// GetRequestedExecutionState<> @ 148ff59d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

ENiagaraExecutionState __thiscall
FNiagaraSystemInstanceController::GetRequestedExecutionState<>
          (FNiagaraSystemInstanceController *this)

{
  code *pcVar1;
  bool bVar2;
  ENiagaraExecutionState EVar3;
  
  if ((this->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4531953176097587079>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemInstanceController.h"
                       ,0x79,"IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  if ((this->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  return ((this->SystemInstance).Object)->RequestedExecutionState;
}

// IsComplete<> @ 14901eae0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FNiagaraSystemInstanceController::IsComplete<>(FNiagaraSystemInstanceController *this)

{
  ENiagaraExecutionState EVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if ((this->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4531953176097587067>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemInstanceController.h"
                       ,0x85,"IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if ((this->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  EVar1 = ((this->SystemInstance).Object)->ActualExecutionState;
  if ((EVar1 != Complete) && (EVar1 != Disabled)) {
    return false;
  }
  return true;
}

// IsSolo<> @ 14901ec00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall FNiagaraSystemInstanceController::IsSolo<>(FNiagaraSystemInstanceController *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((this->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4531953176097587069>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemInstanceController.h"
                       ,0x83,"IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if ((this->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return ((this->SystemInstance).Object)->bSolo;
}

// ManualTick<float,TRefCountPtr<FBaseGraphTask>_> @ 14901f3e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstanceController::ManualTick<float,TRefCountPtr<FBaseGraphTask>_>
          (FNiagaraSystemInstanceController *this,float param_1,TRefCountPtr<FBaseGraphTask> param_2
          )

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  
  if ((this->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4531953176097587064>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemInstanceController.h"
                       ,0x88,"IsValid()");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((this->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FNiagaraSystemInstance::ManualTick
            ((this->SystemInstance).Object,param_1,(TRefCountPtr<FBaseGraphTask> *)param_2.Reference
            );
  puVar3 = *(undefined8 **)param_2.Reference;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  return;
}

// SetEmitterEnable<FName,bool> @ 1490207c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstanceController::SetEmitterEnable<FName,bool>
          (FNiagaraSystemInstanceController *this,FName param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4531953176097587077>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemInstanceController.h"
                       ,0x7b,"IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FNiagaraSystemInstance::SetEmitterEnable((this->SystemInstance).Object,param_1,param_2);
  return;
}

// SetGpuComputeDebug<bool> @ 149020870

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstanceController::SetGpuComputeDebug<bool>
          (FNiagaraSystemInstanceController *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4531953176097587080>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemInstanceController.h"
                       ,0x78,"IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FNiagaraSystemInstance::SetGpuComputeDebug((this->SystemInstance).Object,param_1);
  return;
}

// SetLODDistance<float,float,bool> @ 149020910

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstanceController::SetLODDistance<float,float,bool>
          (FNiagaraSystemInstanceController *this,float param_1,float param_2,bool param_3)

{
  FNiagaraSystemInstance *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4531953176097587075>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemInstanceController.h"
                       ,0x7d,"IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->SystemInstance).Object;
  pFVar1->bLODDistanceIsOverridden = '\0';
  pFVar1->field_0x841 = pFVar1->field_0x841 | param_3 << 3 | 4U;
  pFVar1->LODDistance = param_1;
  pFVar1->MaxLODDistance = param_2;
  return;
}

// SetLastRenderTime<float> @ 1490209e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstanceController::SetLastRenderTime<float>
          (FNiagaraSystemInstanceController *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4531953176097587056>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemInstanceController.h"
                       ,0x90,"IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ((this->SystemInstance).Object)->LastRenderTime = param_1;
  return;
}

// SetSystemFixedBounds<UE::Math::TBox<double>_> @ 149020a80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstanceController::SetSystemFixedBounds<UE::Math::TBox<double>_>
          (FNiagaraSystemInstanceController *this,TBox<double> *param_1)

{
  FNiagaraSystemInstance *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  bool bVar15;
  
  if ((this->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
    bVar15 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_4531953176097587051>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemInstanceController.h"
                        ,0x95,"IsValid()");
    if (bVar15) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar15) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->SystemInstance).Object;
  dVar3 = (param_1->Min).field0_0x0._s_0.Y;
  dVar4 = (param_1->Min).field0_0x0._s_0.Z;
  dVar5 = (param_1->Max).field0_0x0._s_0.X;
  (pFVar1->FixedBounds_GT).Min.field0_0x0._s_0.X = (param_1->Min).field0_0x0._s_0.X;
  (pFVar1->FixedBounds_GT).Min.field0_0x0._s_0.Y = dVar3;
  dVar3 = (param_1->Max).field0_0x0._s_0.Y;
  dVar6 = (param_1->Max).field0_0x0._s_0.Z;
  (pFVar1->FixedBounds_GT).Min.field0_0x0._s_0.Z = dVar4;
  (pFVar1->FixedBounds_GT).Max.field0_0x0._s_0.X = dVar5;
  uVar7 = param_1->IsValid;
  uVar8 = param_1->Pad[0];
  uVar9 = param_1->Pad[1];
  uVar10 = param_1->Pad[2];
  uVar11 = param_1->Pad[3];
  uVar12 = param_1->Pad[4];
  uVar13 = param_1->Pad[5];
  uVar14 = param_1->Pad[6];
  (pFVar1->FixedBounds_GT).Max.field0_0x0._s_0.Y = dVar3;
  (pFVar1->FixedBounds_GT).Max.field0_0x0._s_0.Z = dVar6;
  (pFVar1->FixedBounds_GT).IsValid = uVar7;
  (pFVar1->FixedBounds_GT).Pad[0] = uVar8;
  (pFVar1->FixedBounds_GT).Pad[1] = uVar9;
  (pFVar1->FixedBounds_GT).Pad[2] = uVar10;
  (pFVar1->FixedBounds_GT).Pad[3] = uVar11;
  (pFVar1->FixedBounds_GT).Pad[4] = uVar12;
  (pFVar1->FixedBounds_GT).Pad[5] = uVar13;
  (pFVar1->FixedBounds_GT).Pad[6] = uVar14;
  return;
}

// WaitForConcurrentTickAndFinalize<> @ 149021610

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstanceController::WaitForConcurrentTickAndFinalize<>
          (FNiagaraSystemInstanceController *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4531953176097587047>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemInstanceController.h"
                       ,0x99,"IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FNiagaraSystemInstance::WaitForConcurrentTickAndFinalize((this->SystemInstance).Object,false);
  return;
}

// ~FNiagaraSystemInstanceController @ 149026190

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstanceController::~FNiagaraSystemInstanceController
          (FNiagaraSystemInstanceController *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  this->_padding_ = (longlong)&___7FNiagaraSystemInstanceController__6B_;
  Release(this);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnMaterialsUpdatedDelegate);
  pFVar3 = (this->EmitterMaterials).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SystemInstance).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)this);
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001490261ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// GetReferencerName @ 149048780

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FString * __thiscall
FNiagaraSystemInstanceController::GetReferencerName
          (FNiagaraSystemInstanceController *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"FNiagaraSystemInstanceController");
  return __return_storage_ptr__;
}

// GetSoloSystemSimulation @ 149049460

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TSharedPtr<FNiagaraSystemSimulation,1> * __thiscall
FNiagaraSystemInstanceController::GetSoloSystemSimulation
          (FNiagaraSystemInstanceController *this,
          TSharedPtr<FNiagaraSystemSimulation,1> *__return_storage_ptr__)

{
  FNiagaraSystemInstance *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FNiagaraSystemSimulation *pFVar3;
  code *pcVar4;
  bool bVar5;
  TSharedPtr<FNiagaraSystemSimulation,1> *pTVar6;
  
  pFVar1 = (this->SystemInstance).Object;
  if ((pFVar1 != (FNiagaraSystemInstance *)0x0) && (pFVar1->bSolo != '\0')) {
    pTVar2 = (pFVar1->SystemSimulation).SharedReferenceCount.ReferenceController;
    pFVar3 = (pFVar1->SystemSimulation).Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    __return_storage_ptr__->Object = pFVar3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    return __return_storage_ptr__;
  }
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_4531953176097587112>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemInstanceController.h"
                     ,0x58,"IsValid() && SystemInstance->IsSolo()");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TSharedPtr<FNiagaraSystemSimulation,1> *)(*pcVar4)();
    return pTVar6;
  }
  __return_storage_ptr__->Object = (FNiagaraSystemSimulation *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// GetSystemInstanceID @ 1491806e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

ulong64 __thiscall
FNiagaraSystemInstanceController::GetSystemInstanceID(FNiagaraSystemInstanceController *this)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  
  if ((this->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4531953176097587110>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemInstanceController.h"
                       ,0x5a,"IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  if ((this->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return ((this->SystemInstance).Object)->ID;
}

// FNiagaraSystemInstanceController @ 1493cda80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FNiagaraSystemInstanceController * __thiscall
FNiagaraSystemInstanceController::FNiagaraSystemInstanceController
          (FNiagaraSystemInstanceController *this)

{
  undefined1 *puVar1;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  *(undefined2 *)&this->_padding_ = 0;
  FGCObject::RegisterGCObject((FGCObject *)this);
  this->bNeedsRendererRecache = 0;
  this->bNeedsUpdateEmitterMaterials = 0;
  this->bNeedsOverrideParametersTicked = 0;
  this->_padding_ = (longlong)&___7FNiagaraSystemInstanceController__6B_;
  (this->SystemInstance).Object = (FNiagaraSystemInstance *)0x0;
  (this->SystemInstance).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->EmitterMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EmitterMaterials).ArrayNum = 0;
  (this->EmitterMaterials).ArrayMax = 0;
  *(undefined8 *)&this->OnMaterialsUpdatedDelegate = 0;
  *(undefined8 *)&(this->OnMaterialsUpdatedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnMaterialsUpdatedDelegate).field_0x10 = 0;
  this->WorldManager = (FNiagaraWorldManager *)0x0;
  this->OverrideParameters = (FNiagaraUserRedirectionParameterStore *)0x0;
  return this;
}

// operator() @ 1493d3700

void __thiscall
`FNiagaraSystemInstanceController::GetUsedMaterials'::__l9::<lambda_1>::operator()
          (void *this,UNiagaraRendererProperties *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  ForAnyElementType *pFVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined1 local_res8 [8];
  ForAnyElementType local_38;
  undefined8 local_30;
  
  (**(code **)(param_1->_padding_ + 0x330))(param_1);
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  (**(code **)(param_1->_padding_ + 0x2c0))(param_1,**(undefined8 **)this,&local_38);
  cVar6 = (**(code **)(param_1->_padding_ + 0x330))(param_1);
  if (cVar6 != '\0') {
    lVar11 = *(longlong *)((longlong)this + 8);
    iVar9 = *(int *)(lVar11 + 0x48);
    puVar10 = *(undefined8 **)(lVar11 + 0x40);
    puVar1 = puVar10 + (longlong)iVar9 * 3;
    while( true ) {
      if (*(int *)(lVar11 + 0x48) != iVar9) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FNiagaraSystemRenderData::FMaterialOverride,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res8);
      }
      if (puVar10 == puVar1) break;
      if ((UNiagaraRendererProperties *)puVar10[1] == param_1) {
        uVar2 = *(uint *)(puVar10 + 2);
        if ((-1 < (int)uVar2) && ((int)uVar2 < (int)local_30)) {
          uVar3 = *puVar10;
          uVar8 = 0;
          if ((int)uVar2 < (int)local_30) {
            uVar8 = ~uVar2 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(undefined8 *)(local_38.Data + (longlong)(int)uVar2 * 8) = uVar3;
        }
      }
      puVar10 = puVar10 + 3;
    }
  }
  pFVar4 = *(ForAnyElementType **)((longlong)this + 0x10);
  if ((pFVar4 == &local_38) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar11 = (longlong)(int)local_30;
  if ((int)local_30 != 0) {
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,(int)local_30,pFVar4,(int *)(pFVar4 + 1),
                       (int *)((longlong)&pFVar4[1].Data + 4));
    memcpy(pFVar4->Data + (longlong)iVar9 * 8,local_38.Data,lVar11 << 3);
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return;
}

// operator() @ 1493d3d20

void __thiscall
`FNiagaraSystemInstanceController::GetMaterialStreamingInfo'::__l12::<lambda_1>::operator()
          (void *this,UNiagaraRendererProperties *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  ForElementType<FNiagaraMaterialAndScale> FVar11;
  ForElementType<FNiagaraMaterialAndScale> FVar12;
  longlong *plVar13;
  ForElementType<FNiagaraMaterialAndScale> FVar14;
  float fVar15;
  float fVar16;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  longlong *local_58;
  undefined8 local_50;
  
  local_58 = (longlong *)0x0;
  local_50 = 0;
  (**(code **)(param_1->_padding_ + 0x2c0))(param_1,**(undefined8 **)this,&local_58);
  if ((int)local_50 != 0) {
    cVar7 = (**(code **)(param_1->_padding_ + 0x330))(param_1);
    if (cVar7 != '\0') {
      lVar4 = *(longlong *)((longlong)this + 8);
      iVar2 = *(int *)(lVar4 + 0x48);
      plVar13 = *(longlong **)(lVar4 + 0x40);
      plVar1 = plVar13 + (longlong)iVar2 * 3;
      iVar10 = (int)local_50;
      while( true ) {
        if (*(int *)(lVar4 + 0x48) != iVar2) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FNiagaraSystemRenderData::FMaterialOverride_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res8);
          iVar10 = (int)local_50;
        }
        if (plVar13 == plVar1) break;
        if ((UNiagaraRendererProperties *)plVar13[1] == param_1) {
          uVar3 = *(uint *)(plVar13 + 2);
          if ((-1 < (int)uVar3) && ((int)uVar3 < iVar10)) {
            lVar5 = *plVar13;
            uVar9 = 0;
            if ((int)uVar3 < iVar10) {
              uVar9 = ~uVar3 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            local_58[(int)uVar3] = lVar5;
            iVar10 = (int)local_50;
          }
        }
        plVar13 = plVar13 + 3;
      }
    }
    fVar15 = (float)(**(code **)(param_1->_padding_ + 0x2d8))(param_1);
    iVar2 = (int)local_50;
    plVar1 = local_58 + (int)local_50;
    plVar13 = local_58;
LAB_1493d3e80:
    if ((int)local_50 != iVar2) {
      `TCheckedPointerIterator<UMaterialInterface_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (plVar13 != plVar1) {
      lVar4 = *plVar13;
      if (lVar4 != 0) {
        FVar14 = *(ForElementType<FNiagaraMaterialAndScale> *)((longlong)this + 0x10);
        iVar10 = *(int *)((longlong)FVar14 + 0x108);
        FVar12 = FVar14;
        if (*(ForElementType<FNiagaraMaterialAndScale> *)((longlong)FVar14 + 0x100) !=
            (ForElementType<FNiagaraMaterialAndScale>)0x0) {
          FVar12 = *(ForElementType<FNiagaraMaterialAndScale> *)((longlong)FVar14 + 0x100);
        }
        FVar11 = (ForElementType<FNiagaraMaterialAndScale>)
                 ((longlong)iVar10 * 0x10 + (longlong)FVar12);
        for (; FVar12 != FVar11;
            FVar12 = (ForElementType<FNiagaraMaterialAndScale>)((longlong)FVar12 + 0x10)) {
          if (*(longlong *)FVar12 == lVar4) {
            plVar13 = plVar13 + 1;
            fVar16 = *(float *)((longlong)FVar12 + 8);
            if (*(float *)((longlong)FVar12 + 8) <= fVar15) {
              fVar16 = fVar15;
            }
            *(float *)((longlong)FVar12 + 8) = fVar16;
            goto LAB_1493d3e80;
          }
        }
        if (iVar10 == *(int *)((longlong)FVar14 + 0x10c)) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FNiagaraMaterialAndScale>_>
                             (0x810,(ForElementType<FNiagaraMaterialAndScale> *)FVar14,
                              (int *)((longlong)FVar14 + 0x10c));
        }
        *(int *)((longlong)FVar14 + 0x108) = iVar10 + 1;
        if (*(ForElementType<FNiagaraMaterialAndScale> *)((longlong)FVar14 + 0x100) !=
            (ForElementType<FNiagaraMaterialAndScale>)0x0) {
          FVar14 = *(ForElementType<FNiagaraMaterialAndScale> *)((longlong)FVar14 + 0x100);
        }
        *(float *)((longlong)FVar14 + 8 + (longlong)iVar10 * 0x10) = fVar15;
        *(longlong *)((longlong)FVar14 + (longlong)iVar10 * 0x10) = lVar4;
      }
      plVar13 = plVar13 + 1;
      goto LAB_1493d3e80;
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// operator() @ 1493d3f90

void __thiscall
`FNiagaraSystemInstanceController::UpdateEmitterMaterials'::__l14::<lambda_1>::operator()
          (void *this,UNiagaraRendererProperties *param_1)

{
  int *piVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  FScriptContainerElement *pFVar4;
  ForAnyElementType *pFVar5;
  code *pcVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  UClass *pUVar10;
  ulonglong *puVar11;
  UMaterialInstanceDynamic *pUVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong *puVar16;
  bool bVar17;
  undefined1 local_res18 [8];
  undefined8 local_res20;
  ulonglong *local_68;
  undefined8 local_60;
  UMaterialInstanceDynamic *local_58;
  UNiagaraRendererProperties *pUStack_50;
  int local_48;
  
  cVar8 = (**(code **)(param_1->_padding_ + 0x330))(param_1);
  if (cVar8 == '\0') {
    return;
  }
  local_68 = (ulonglong *)0x0;
  local_60 = 0;
  (**(code **)(param_1->_padding_ + 0x2c0))(param_1,**(undefined8 **)this,&local_68);
  iVar7 = (int)local_60;
  puVar2 = local_68 + (int)local_60;
  uVar15 = 0;
  puVar16 = local_68;
  do {
    while( true ) {
      if ((int)local_60 != iVar7) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<UMaterialInterface_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (puVar16 == puVar2) {
        if (local_68 == (ulonglong *)0x0) {
          return;
        }
        FMemory::Free(local_68);
        return;
      }
      uVar13 = *puVar16;
      iVar14 = (int)uVar15;
      if (uVar13 != 0) break;
LAB_1493d41fa:
      uVar15 = (ulonglong)(iVar14 + 1);
LAB_1493d41fc:
      puVar16 = puVar16 + 1;
    }
    pUVar10 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
    iVar9 = (int)pUVar10->_padding_;
    if ((*(int *)(*(longlong *)(uVar13 + 0x10) + 0x38) < iVar9) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(uVar13 + 0x10) + 0x30) + (longlong)iVar9 * 8)
        != &pUVar10->_padding_)) {
      uVar13 = 0;
    }
    if (uVar13 == 0) {
LAB_1493d40de:
      local_res20 = 0;
      pUVar12 = UMaterialInstanceDynamic::Create
                          ((UMaterialInterface *)*puVar16,(UObject *)0x0,(FName)0x0);
      *puVar16 = (ulonglong)pUVar12;
      local_58 = (UMaterialInstanceDynamic *)0x0;
      pUStack_50 = (UNiagaraRendererProperties *)0x0;
      local_48 = 0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar12 != (UMaterialInstanceDynamic *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar12);
      }
      pFVar5 = *(ForAnyElementType **)((longlong)this + 0x10);
      local_58 = pUVar12;
      pUStack_50 = param_1;
      local_48 = iVar14;
      if (((pFVar5->Data <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 <
           pFVar5->Data + (longlong)*(int *)((longlong)&pFVar5[1].Data + 4) * 0x18)) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar17)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = *(int *)&pFVar5[1].Data;
      piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,pFVar5,piVar1);
      }
      *(int *)&pFVar5[1].Data = iVar9 + 1;
      pFVar4 = pFVar5->Data + (longlong)iVar9 * 0x18;
      *(UMaterialInstanceDynamic **)pFVar4 = local_58;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_58 != (UMaterialInstanceDynamic *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_58);
      }
      *(UNiagaraRendererProperties **)(pFVar4 + 8) = pUStack_50;
      *(int *)(pFVar4 + 0x10) = local_48;
      goto LAB_1493d41fa;
    }
    puVar11 = *(ulonglong **)(*(longlong *)((longlong)this + 8) + 0x40);
    puVar3 = puVar11 + (longlong)*(int *)(*(longlong *)((longlong)this + 8) + 0x48) * 3;
    if (puVar11 == puVar3) goto LAB_1493d41fc;
    do {
      if (*puVar11 == 0) {
        bVar17 = *puVar16 == 0;
      }
      else {
        bVar17 = *puVar11 == *puVar16;
      }
      if (((bVar17) && ((UNiagaraRendererProperties *)puVar11[1] == param_1)) &&
         ((int)puVar11[2] == iVar14)) {
        *puVar16 = *(ulonglong *)(uVar13 + 0x130);
        goto LAB_1493d40de;
      }
      puVar11 = puVar11 + 3;
    } while (puVar11 != puVar3);
    puVar16 = puVar16 + 1;
  } while( true );
}

// AddReferencedObjects @ 1493d6710

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstanceController::AddReferencedObjects
          (FNiagaraSystemInstanceController *this,FReferenceCollector *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar2 = (this->EmitterMaterials).ArrayNum;
  pFVar3 = (this->EmitterMaterials).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0x18;
  while( true ) {
    if ((this->EmitterMaterials).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FNiagaraSystemRenderData::FMaterialOverride,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(param_1->_padding_ + 0x88))(param_1,pFVar3,0,0);
    pFVar3 = pFVar3 + 0x18;
  }
  return;
}

// CollectPSOPrecacheData @ 1493daec0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstanceController::CollectPSOPrecacheData
          (FNiagaraSystemInstanceController *this,FPSOPrecacheParams *param_1,
          TArray<FMaterialInterfacePSOPrecacheParams,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  FNiagaraSystemInstance *pFVar3;
  longlong *plVar4;
  UNiagaraRendererProperties *this_00;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  undefined8 *puVar10;
  FScriptContainerElement *pFVar11;
  undefined8 *local_28;
  int local_20;
  
  pFVar3 = (this->SystemInstance).Object;
  if (pFVar3 != (FNiagaraSystemInstance *)0x0) {
    iVar2 = (pFVar3->Emitters).ArrayNum;
    pFVar9 = (pFVar3->Emitters).AllocatorInstance.Data;
    if ((iVar2 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar11 = pFVar9 + (longlong)iVar2 * 0x10;
    for (; pFVar9 != pFVar11; pFVar9 = pFVar9 + 0x10) {
      plVar4 = *(longlong **)pFVar9;
      (**(code **)(*plVar4 + 0x78))(plVar4,&local_28);
      puVar10 = local_28;
      lVar8 = (longlong)local_20;
      if ((local_20 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      puVar1 = puVar10 + lVar8;
      for (; puVar10 != puVar1; puVar10 = puVar10 + 1) {
        this_00 = (UNiagaraRendererProperties *)*puVar10;
        if (((this_00 != (UNiagaraRendererProperties *)0x0) &&
            (cVar7 = (**(code **)(this_00->_padding_ + 0x318))(this_00), cVar7 != '\0')) &&
           (cVar7 = (**(code **)(this_00->_padding_ + 0x2e8))
                              (this_00,*(undefined1 *)((longlong)plVar4 + 0xd1)), cVar7 != '\0')) {
          UNiagaraRendererProperties::CollectPSOPrecacheData
                    (this_00,*(FNiagaraEmitterInstance **)pFVar9,param_2);
        }
      }
    }
  }
  return;
}

// CreateSystemRenderData @ 1493dcfc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FNiagaraSystemRenderData * __thiscall
FNiagaraSystemInstanceController::CreateSystemRenderData
          (FNiagaraSystemInstanceController *this,Type param_1)

{
  FNiagaraSystemInstance *pFVar1;
  FNiagaraSystemRenderData *pFVar2;
  
  pFVar1 = (this->SystemInstance).Object;
  if (pFVar1 != (FNiagaraSystemInstance *)0x0) {
    pFVar2 = ::operator_new(0x48);
    if (pFVar2 != (FNiagaraSystemRenderData *)0x0) {
      pFVar2 = FNiagaraSystemRenderData::FNiagaraSystemRenderData(pFVar2,this,pFVar1,param_1);
      return pFVar2;
    }
  }
  return (FNiagaraSystemRenderData *)0x0;
}

// DebugDump @ 1493dd640

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstanceController::DebugDump(FNiagaraSystemInstanceController *this,bool param_1)

{
  ENiagaraExecutionState EVar1;
  int iVar2;
  FNiagaraSystemInstance *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FNiagaraSystemSimulation *pFVar5;
  code *pcVar6;
  bool bVar7;
  UEnum *this_00;
  FNiagaraEmitterHandle *this_01;
  FNiagaraEmitterInstanceImpl *this_02;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  if ((this->SystemInstance).Object != (FNiagaraSystemInstance *)0x0) {
    this_00 = StaticEnum<enum_ENiagaraExecutionState>();
    if (4 < (byte)LogNiagara._0_1_) {
      if (((this->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      UEnum::GetNameStringByIndex
                (this_00,&local_58,((this->SystemInstance).Object)->RequestedExecutionState);
      if (((this->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      UEnum::GetNameStringByIndex
                (this_00,&local_68,((this->SystemInstance).Object)->ActualExecutionState);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    if (((this->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar3 = (this->SystemInstance).Object;
    EVar1 = pFVar3->ActualExecutionState;
    if ((EVar1 != Complete) && (EVar1 != Disabled)) {
      if ((pFVar3 == (FNiagaraSystemInstance *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar3 = (this->SystemInstance).Object;
      iVar2 = (pFVar3->Emitters).ArrayNum;
      pFVar8 = (pFVar3->Emitters).AllocatorInstance.Data;
      if ((iVar2 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar9 = pFVar8 + (longlong)iVar2 * 0x10;
      for (; pFVar8 != pFVar9; pFVar8 = pFVar8 + 0x10) {
        if (((*(longlong **)pFVar8)[5] != 0) && (4 < (byte)LogNiagara._0_1_)) {
          (**(code **)(**(longlong **)pFVar8 + 0x58))();
          UEnum::GetNameStringByIndex(this_00,&local_38,*(int *)(*(longlong *)pFVar8 + 0xd4));
          this_01 = FNiagaraEmitterInstance::GetEmitterHandle(*(FNiagaraEmitterInstance **)pFVar8);
          FNiagaraEmitterHandle::GetUniqueInstanceName(this_01,&local_48);
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
        }
      }
    }
    if (param_1) {
      if (4 < (byte)LogNiagara._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      }
      if (((this->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar3 = (this->SystemInstance).Object;
      pTVar4 = (pFVar3->SystemSimulation).SharedReferenceCount.ReferenceController;
      pFVar5 = (pFVar3->SystemSimulation).Object;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      if (pFVar5 != (FNiagaraSystemSimulation *)0x0) {
        pTVar4 = (pFVar3->SystemSimulation).SharedReferenceCount.ReferenceController;
        pFVar5 = (pFVar3->SystemSimulation).Object;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((pFVar5 == (FNiagaraSystemSimulation *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FNiagaraSystemSimulation::DumpInstance(pFVar5,pFVar3);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        iVar2 = (pFVar3->Emitters).ArrayNum;
        pFVar8 = (pFVar3->Emitters).AllocatorInstance.Data;
        pFVar9 = pFVar8 + (longlong)iVar2 * 0x10;
        while( true ) {
          if ((pFVar3->Emitters).ArrayNum != iVar2) {
            `TCheckedPointerIterator<TSharedRef<FNiagaraEmitterInstance,1>_const_,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_res8);
          }
          if (pFVar8 == pFVar9) break;
          this_02 = (FNiagaraEmitterInstanceImpl *)(**(code **)(**(longlong **)pFVar8 + 0x68))();
          if (this_02 != (FNiagaraEmitterInstanceImpl *)0x0) {
            FNiagaraEmitterInstanceImpl::Dump(this_02);
          }
          pFVar8 = pFVar8 + 0x10;
        }
      }
      if (4 < (byte)LogNiagara._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      }
    }
  }
  return;
}

// GenerateSetDynamicDataCommands @ 1493e4580

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstanceController::GenerateSetDynamicDataCommands
          (FNiagaraSystemInstanceController *this,
          TArray<FNiagaraSystemRenderData::FSetDynamicDataCommand,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          *param_1,FNiagaraSystemRenderData *param_2,FNiagaraSceneProxy *param_3)

{
  int iVar1;
  FMaterialOverride *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uStack_1c;
  TArrayView<FNiagaraSystemRenderData::FMaterialOverride_const_,int> local_18;
  
  pFVar2 = (FMaterialOverride *)(this->EmitterMaterials).AllocatorInstance.Data;
  iVar1 = (this->EmitterMaterials).ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar1;
  local_18.DataPtr = pFVar2;
  FNiagaraSystemRenderData::GenerateSetDynamicDataCommands
            (param_2,param_1,param_3,(this->SystemInstance).Object,&local_18);
  return;
}

// GetGpuComputeTickStage @ 1493e7a50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

Type __thiscall
FNiagaraSystemInstanceController::GetGpuComputeTickStage(FNiagaraSystemInstanceController *this)

{
  FNiagaraSystemInstance *pFVar1;
  FNiagaraSystemGpuComputeProxy *pFVar2;
  
  pFVar1 = (this->SystemInstance).Object;
  if ((pFVar1 != (FNiagaraSystemInstance *)0x0) &&
     (pFVar2 = (pFVar1->SystemGpuComputeProxy).Ptr, pFVar2 != (FNiagaraSystemGpuComputeProxy *)0x0))
  {
    return pFVar2->ComputeTickStage;
  }
  return First;
}

// GetMaterialOverride @ 1493e7e10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UMaterialInterface * __thiscall
FNiagaraSystemInstanceController::GetMaterialOverride
          (FNiagaraSystemInstanceController *this,UNiagaraRendererProperties *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar2 = (this->EmitterMaterials).ArrayNum;
  pFVar3 = (this->EmitterMaterials).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0x18;
  while( true ) {
    if ((this->EmitterMaterials).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FNiagaraSystemRenderData::FMaterialOverride_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if ((*(UNiagaraRendererProperties **)(pFVar3 + 8) == param_1) &&
       (param_2 == *(int *)(pFVar3 + 0x10))) {
      return *(UMaterialInterface **)pFVar3;
    }
    pFVar3 = pFVar3 + 0x18;
  }
  return (UMaterialInterface *)0x0;
}

// GetMaterialStreamingInfo @ 1493e7e90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstanceController::GetMaterialStreamingInfo
          (FNiagaraSystemInstanceController *this,
          TArray<FNiagaraMaterialAndScale,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  FNiagaraSystemInstance *pFVar3;
  longlong *plVar4;
  UNiagaraRendererProperties *pUVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  undefined8 *puVar11;
  FScriptContainerElement *pFVar12;
  undefined8 *local_58;
  int local_50;
  FScriptContainerElement *local_48;
  FNiagaraSystemInstanceController *local_40;
  TArray<FNiagaraMaterialAndScale,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  *local_38;
  
  if ((this->SystemInstance).Object != (FNiagaraSystemInstance *)0x0) {
    if (this->OverrideParameters != (FNiagaraUserRedirectionParameterStore *)0x0) {
      FNiagaraParameterStore::Tick((FNiagaraParameterStore *)this->OverrideParameters);
    }
    if (((this->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FNiagaraParameterStore::Tick(&((this->SystemInstance).Object)->InstanceParameters);
    if (((this->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar3 = (this->SystemInstance).Object;
    iVar2 = (pFVar3->Emitters).ArrayNum;
    pFVar12 = (pFVar3->Emitters).AllocatorInstance.Data;
    if ((iVar2 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar10 = pFVar12 + (longlong)iVar2 * 0x10;
    for (; pFVar12 != pFVar10; pFVar12 = pFVar12 + 0x10) {
      FNiagaraParameterStore::Tick((FNiagaraParameterStore *)(*(longlong *)pFVar12 + 0x40));
      plVar4 = *(longlong **)pFVar12;
      local_48 = pFVar12;
      local_40 = this;
      local_38 = param_1;
      (**(code **)(*plVar4 + 0x78))(plVar4,&local_58);
      puVar11 = local_58;
      lVar9 = (longlong)local_50;
      if ((local_50 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      puVar1 = puVar11 + lVar9;
      for (; puVar11 != puVar1; puVar11 = puVar11 + 1) {
        pUVar5 = (UNiagaraRendererProperties *)*puVar11;
        if (((pUVar5 != (UNiagaraRendererProperties *)0x0) &&
            (cVar8 = (**(code **)(pUVar5->_padding_ + 0x318))(pUVar5), cVar8 != '\0')) &&
           (cVar8 = (**(code **)(pUVar5->_padding_ + 0x2e8))
                              (pUVar5,*(undefined1 *)((longlong)plVar4 + 0xd1)), cVar8 != '\0')) {
          `FNiagaraSystemInstanceController::GetMaterialStreamingInfo'::__l12::<lambda_1>::
          operator()(&local_48,pUVar5);
        }
      }
    }
  }
  return;
}

// GetStreamingMeshInfo @ 1493e9790

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstanceController::GetStreamingMeshInfo
          (FNiagaraSystemInstanceController *this,TBoxSphereBounds<double,double> *param_1,
          FStreamingTextureLevelContext *param_2,
          TArray<FStreamingRenderAssetPrimitiveInfo,TSizedDefaultAllocator<32>_> *param_3)

{
  longlong *plVar1;
  int iVar2;
  FNiagaraSystemInstance *pFVar3;
  longlong *plVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  longlong *plVar11;
  FScriptContainerElement *pFVar12;
  longlong *local_38;
  int local_30;
  
  pFVar3 = (this->SystemInstance).Object;
  if (pFVar3 != (FNiagaraSystemInstance *)0x0) {
    iVar2 = (pFVar3->Emitters).ArrayNum;
    pFVar10 = (pFVar3->Emitters).AllocatorInstance.Data;
    if ((iVar2 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar12 = pFVar10 + (longlong)iVar2 * 0x10;
    for (; pFVar10 != pFVar12; pFVar10 = pFVar10 + 0x10) {
      plVar4 = *(longlong **)pFVar10;
      (**(code **)(*plVar4 + 0x78))(plVar4,&local_38);
      plVar11 = local_38;
      lVar9 = (longlong)local_30;
      if ((local_30 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      plVar1 = plVar11 + lVar9;
      for (; plVar11 != plVar1; plVar11 = plVar11 + 1) {
        plVar5 = (longlong *)*plVar11;
        if (((plVar5 != (longlong *)0x0) &&
            (cVar8 = (**(code **)(*plVar5 + 0x318))(plVar5), cVar8 != '\0')) &&
           (cVar8 = (**(code **)(*plVar5 + 0x2e8))(plVar5,*(undefined1 *)((longlong)plVar4 + 0xd1)),
           cVar8 != '\0')) {
          (**(code **)(*plVar5 + 0x2e0))(plVar5,param_1,*(longlong *)pFVar10,param_3);
        }
      }
    }
  }
  return;
}

// GetTotalBytesUsed @ 1493e9e60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

ulong64 __thiscall
FNiagaraSystemInstanceController::GetTotalBytesUsed(FNiagaraSystemInstanceController *this)

{
  int iVar1;
  FNiagaraSystemInstance *pFVar2;
  code *pcVar3;
  bool bVar4;
  ulong64 uVar5;
  long64 lVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  
  pFVar2 = (this->SystemInstance).Object;
  uVar5 = 0;
  if (pFVar2 == (FNiagaraSystemInstance *)0x0) {
    return 0;
  }
  pFVar7 = (pFVar2->Emitters).AllocatorInstance.Data;
  iVar1 = (pFVar2->Emitters).ArrayNum;
  if ((iVar1 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return uVar5;
  }
  pFVar8 = pFVar7 + (longlong)iVar1 * 0x10;
  for (; pFVar7 != pFVar8; pFVar7 = pFVar7 + 0x10) {
    lVar6 = FNiagaraEmitterInstance::GetTotalBytesUsed(*(FNiagaraEmitterInstance **)pFVar7);
    uVar5 = uVar5 + lVar6;
  }
  return uVar5;
}

// GetUsedMaterials @ 1493ea2c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstanceController::GetUsedMaterials
          (FNiagaraSystemInstanceController *this,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  FNiagaraSystemInstance *pFVar3;
  longlong *plVar4;
  UNiagaraRendererProperties *pUVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  undefined8 *puVar11;
  FScriptContainerElement *pFVar12;
  undefined8 *local_58;
  int local_50;
  FScriptContainerElement *local_48;
  FNiagaraSystemInstanceController *local_40;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *local_38;
  
  pFVar3 = (this->SystemInstance).Object;
  if (pFVar3 != (FNiagaraSystemInstance *)0x0) {
    iVar2 = (pFVar3->Emitters).ArrayNum;
    pFVar12 = (pFVar3->Emitters).AllocatorInstance.Data;
    if ((iVar2 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar10 = pFVar12 + (longlong)iVar2 * 0x10;
    for (; pFVar12 != pFVar10; pFVar12 = pFVar12 + 0x10) {
      plVar4 = *(longlong **)pFVar12;
      local_48 = pFVar12;
      local_40 = this;
      local_38 = param_1;
      (**(code **)(*plVar4 + 0x78))(plVar4,&local_58);
      puVar11 = local_58;
      lVar9 = (longlong)local_50;
      if ((local_50 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      puVar1 = puVar11 + lVar9;
      for (; puVar11 != puVar1; puVar11 = puVar11 + 1) {
        pUVar5 = (UNiagaraRendererProperties *)*puVar11;
        if (((pUVar5 != (UNiagaraRendererProperties *)0x0) &&
            (cVar8 = (**(code **)(pUVar5->_padding_ + 0x318))(pUVar5), cVar8 != '\0')) &&
           (cVar8 = (**(code **)(pUVar5->_padding_ + 0x2e8))
                              (pUVar5,*(undefined1 *)((longlong)plVar4 + 0xd1)), cVar8 != '\0')) {
          `FNiagaraSystemInstanceController::GetUsedMaterials'::__l9::<lambda_1>::operator()
                    (&local_48,pUVar5);
        }
      }
    }
  }
  return;
}

// HasValidSimulation @ 1493ea7d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FNiagaraSystemInstanceController::HasValidSimulation(FNiagaraSystemInstanceController *this)

{
  FNiagaraSystemInstance *pFVar1;
  FNiagaraSystemSimulation *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pFVar1 = (this->SystemInstance).Object;
  if (pFVar1 != (FNiagaraSystemInstance *)0x0) {
    pFVar2 = (pFVar1->SystemSimulation).Object;
    pTVar3 = (pFVar1->SystemSimulation).SharedReferenceCount.ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    return pFVar2 != (FNiagaraSystemSimulation *)0x0;
  }
  return false;
}

// Initialize @ 1493ee580

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstanceController::Initialize
          (FNiagaraSystemInstanceController *this,UWorld *param_1,UNiagaraSystem *param_2,
          FNiagaraUserRedirectionParameterStore *param_3,USceneComponent *param_4,
          ENiagaraTickBehavior param_5,bool param_6,int param_7,bool param_8,int param_9,
          float param_10)

{
  TSharedPtr<FNiagaraSystemInstance,1> *pTVar1;
  UNiagaraSystem *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  FNiagaraWorldManager *pFVar7;
  FNiagaraSystemInstance *pFVar8;
  FNiagaraSystemInstance *local_28;
  FSharedReferencer<1> FStack_20;
  
  this->OverrideParameters = param_3;
  pTVar1 = &this->SystemInstance;
  pTVar6 = ::operator_new(0xa40);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    local_28 = ___xmm_00000000000000000000000000000010;
    pFVar8 = (FNiagaraSystemInstance *)&DAT_00000010;
    FStack_20.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFNiagaraSystemInstance___00_SharedPointerInternals__6B_
    ;
    FNiagaraSystemInstance::FNiagaraSystemInstance
              ((FNiagaraSystemInstance *)(pTVar6 + 1),param_1,param_2,param_3,param_4,param_5,
               param_6);
    pFVar8 = (FNiagaraSystemInstance *)(pTVar6 + 1);
    if (pFVar8 == (FNiagaraSystemInstance *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    FStack_20.ReferenceController = pTVar6;
    local_28 = pFVar8;
  }
  if (pTVar1 != (TSharedPtr<FNiagaraSystemInstance,1> *)&local_28) {
    pTVar1->Object = pFVar8;
    local_28 = (FNiagaraSystemInstance *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SystemInstance).SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if (pTVar1->Object == (FNiagaraSystemInstance *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar1->Object->RandomSeedOffset = param_7;
  if (pTVar1->Object == (FNiagaraSystemInstance *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar8 = pTVar1->Object;
  pFVar8->WarmupTickDelta = param_10;
  pFVar8->WarmupTickCount = param_9;
  if (pTVar1->Object == (FNiagaraSystemInstance *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar8 = pTVar1->Object;
  FNiagaraSystemInstance::WaitForConcurrentTickDoNotFinalize(pFVar8,true);
  if ((pFVar8->FinalizeRef).TaskEntry != (FNiagaraSystemInstance **)0x0) {
    FNiagaraSystemInstance::FinalizeTick_GameThread(pFVar8,true);
  }
  pFVar8->bForceSolo = '\0';
  pFVar8->bAlreadyBound = '\0';
  pFVar8->field_0x840 = pFVar8->field_0x840 | param_8 << 3;
  pUVar2 = pFVar8->System;
  pFVar8->ActualExecutionState = Inactive;
  pFVar8->RequestedExecutionState = Inactive;
  if (pUVar2 != (UNiagaraSystem *)0x0) {
    if (pUVar2->bDeterminism == false) {
      iVar5 = rand();
    }
    else {
      iVar5 = pUVar2->RandomSeed;
    }
    pFVar8->RandomSeed = iVar5;
  }
  FNiagaraSystemInstance::Reset(pFVar8,ReInit);
  pFVar7 = FNiagaraWorldManager::Get(param_1);
  this->WorldManager = pFVar7;
  if (pFVar7 == (FNiagaraWorldManager *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("WorldManager",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstanceController.cpp"
                       ,0x1e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  UpdateEmitterMaterials(this);
  return;
}

// NotifyRenderersComplete @ 1493f0c30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstanceController::NotifyRenderersComplete
          (FNiagaraSystemInstanceController *this,FNiagaraSystemRenderData *param_1)

{
  FNiagaraSystemInstance *pFVar1;
  
  pFVar1 = (this->SystemInstance).Object;
  if (pFVar1 != (FNiagaraSystemInstance *)0x0) {
    FNiagaraSystemRenderData::OnSystemComplete(param_1,pFVar1);
    return;
  }
  return;
}

// PostTickRenderers @ 1493f1f20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstanceController::PostTickRenderers
          (FNiagaraSystemInstanceController *this,FNiagaraSystemRenderData *param_1)

{
  FNiagaraSystemInstance *pFVar1;
  FNiagaraUserRedirectionParameterStore *this_00;
  double dVar2;
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_28;
  
  dVar2 = __real_4140000000000000;
  pFVar1 = (this->SystemInstance).Object;
  if (pFVar1 != (FNiagaraSystemInstance *)0x0) {
    if (ZPULL(*(undefined4 *)&this->field_0x68,1,1) != 0) {
      this_00 = this->OverrideParameters;
      *(uint *)&this->field_0x68 = *(undefined4 *)&this->field_0x68 & 0xfffffffd;
      local_48._s_0.X = (double)(pFVar1->LWCTile).field0_0x0._s_0.X * dVar2;
      local_48._s_0.Z = (double)(pFVar1->LWCTile).field0_0x0._s_0.Z * dVar2;
      local_48._s_0.Y = (double)(pFVar1->LWCTile).field0_0x0._s_0.Y * dVar2;
      FNiagaraLWCConverter::FNiagaraLWCConverter
                ((FNiagaraLWCConverter *)&local_28._s_0,(TVector<double> *)&local_48._s_0);
      local_48._s_0.X = local_28._s_0.X;
      local_48._s_0.Y = local_28._s_0.Y;
      local_48._s_0.Z = local_28._s_0.Z;
      FNiagaraParameterStore::ResolvePositions
                ((FNiagaraParameterStore *)this_00,(FNiagaraLWCConverter *)&local_48._s_0);
      FNiagaraParameterStore::Tick((FNiagaraParameterStore *)this->OverrideParameters);
    }
    if (ZPULL(*(undefined4 *)&this->field_0x68,2,1) != 0) {
      *(uint *)&this->field_0x68 = *(undefined4 *)&this->field_0x68 & 0xfffffffb;
      UpdateEmitterMaterials(this);
    }
    if (this->bNeedsRendererRecache != 0) {
      FNiagaraSystemRenderData::RecacheRenderers(param_1,pFVar1,this);
      this->bNeedsRendererRecache = 0;
    }
    FNiagaraSystemRenderData::PostTickRenderers(param_1,pFVar1);
  }
  return;
}

// Release @ 1493f5100

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FNiagaraSystemInstanceController::Release(FNiagaraSystemInstanceController *this)

{
  ENiagaraExecutionState EVar1;
  FNiagaraSystemInstance *pFVar2;
  UNiagaraSystem *pUVar3;
  code *pcVar4;
  bool bVar5;
  UObject *this_00;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  pFVar2 = (this->SystemInstance).Object;
  if (((pFVar2 != (FNiagaraSystemInstance *)0x0) &&
      (EVar1 = pFVar2->ActualExecutionState, EVar1 != Complete)) && (EVar1 != Disabled)) {
    this_00 = FWeakObjectPtr::Get(&(((this->SystemInstance).Object)->AttachComponent).WeakPtr);
    if ((this_00 == (UObject *)0x0) || (*(longlong *)&this_00->field_0x10 == 0)) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_00,&local_18,(UObject *)0x0,None);
    }
    if (((this->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pUVar3 = ((this->SystemInstance).Object)->System;
    if (pUVar3 == (UNiagaraSystem *)0x0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      local_res8 = (FName)pUVar3->_padding_;
      ::FName::ToString(&local_res8,&local_28);
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!SystemInstance.IsValid() || SystemInstance->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstanceController.cpp"
                       ,0x25,
                       L"NiagraSystemInstance must be complete when releasing the controller.  System(%s) Component(%s)"
                      );
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FNiagaraSystemInstance::DeallocateSystemInstance(&this->SystemInstance);
  this->WorldManager = (FNiagaraWorldManager *)0x0;
  this->OverrideParameters = (FNiagaraUserRedirectionParameterStore *)0x0;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnMaterialsUpdatedDelegate);
  return;
}

// SetVariable @ 1493fa770

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstanceController::SetVariable
          (FNiagaraSystemInstanceController *this,FName param_1,TMatrix<float> *param_2)

{
  FNiagaraUserRedirectionParameterStore *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  FNiagaraTypeDefinition *this_01;
  int *piVar6;
  longlong lVar7;
  int local_res8 [2];
  FName local_28;
  FNiagaraTypeDefinitionHandle local_20 [2];
  void *local_18;
  undefined8 local_10;
  
  if (this->OverrideParameters == (FNiagaraUserRedirectionParameterStore *)0x0) {
    return;
  }
  local_28 = param_1;
  local_20[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_20,&FNiagaraTypeDefinition::Matrix4Def);
  this_00 = this->OverrideParameters;
  local_18 = (void *)0x0;
  local_10 = 0;
  this_01 = FNiagaraTypeDefinitionHandle::Resolve(local_20);
  iVar5 = FNiagaraTypeDefinition::GetSize(this_01);
  if ((iVar5 != 0x40) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Param.GetSizeInBytes() == sizeof(T)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                         ,0x232,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  piVar6 = (int *)(**(code **)(this_00->_padding_ + 0x58))(this_00,&local_28,0);
  if (piVar6 == (int *)0x0) {
    local_res8[0] = -1;
  }
  else {
    local_res8[0] = *piVar6;
    if (local_res8[0] != -1) {
      uVar3 = *(undefined8 *)(param_2->M[0] + 2);
      pFVar1 = (((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&this_00->_padding_)->
               AllocatorInstance).Data;
      *(undefined8 *)(pFVar1 + local_res8[0]) = *(undefined8 *)param_2->M[0];
      *(undefined8 *)(pFVar1 + local_res8[0] + 8) = uVar3;
      uVar3 = *(undefined8 *)(param_2->M[1] + 2);
      *(undefined8 *)(pFVar1 + (longlong)local_res8[0] + 0x10) = *(undefined8 *)param_2->M[1];
      *(undefined8 *)(pFVar1 + (longlong)local_res8[0] + 0x10 + 8) = uVar3;
      uVar3 = *(undefined8 *)(param_2->M[2] + 2);
      *(undefined8 *)(pFVar1 + (longlong)local_res8[0] + 0x20) = *(undefined8 *)param_2->M[2];
      *(undefined8 *)(pFVar1 + (longlong)local_res8[0] + 0x20 + 8) = uVar3;
      uVar3 = *(undefined8 *)(param_2->M[3] + 2);
      *(undefined8 *)(pFVar1 + (longlong)local_res8[0] + 0x30) = *(undefined8 *)param_2->M[3];
      *(undefined8 *)(pFVar1 + (longlong)local_res8[0] + 0x30 + 8) = uVar3;
      *(uint *)&this_00->_padding_ = (uint)this_00->_padding_ | 1;
      goto LAB_1493fa8cf;
    }
  }
  (**(code **)(this_00->_padding_ + 0x10))(this_00,&local_28,0,0,local_res8);
  if ((local_res8[0] == -1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offset != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                         ,0x249,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar3 = *(undefined8 *)(param_2->M[0] + 2);
  lVar7 = (longlong)local_res8[0];
  pFVar1 = (((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&this_00->_padding_)->
           AllocatorInstance).Data;
  *(undefined8 *)(pFVar1 + lVar7) = *(undefined8 *)param_2->M[0];
  *(undefined8 *)(pFVar1 + lVar7 + 8) = uVar3;
  uVar3 = *(undefined8 *)(param_2->M[1] + 2);
  *(undefined8 *)(pFVar1 + lVar7 + 0x10) = *(undefined8 *)param_2->M[1];
  *(undefined8 *)(pFVar1 + lVar7 + 0x10 + 8) = uVar3;
  uVar3 = *(undefined8 *)(param_2->M[2] + 2);
  *(undefined8 *)(pFVar1 + lVar7 + 0x20) = *(undefined8 *)param_2->M[2];
  *(undefined8 *)(pFVar1 + lVar7 + 0x20 + 8) = uVar3;
  uVar3 = *(undefined8 *)(param_2->M[3] + 2);
  *(undefined8 *)(pFVar1 + lVar7 + 0x30) = *(undefined8 *)param_2->M[3];
  *(undefined8 *)(pFVar1 + lVar7 + 0x30 + 8) = uVar3;
  FNiagaraParameterStore::OnLayoutChange((FNiagaraParameterStore *)this_00);
LAB_1493fa8cf:
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// SetVariable @ 1493fa8f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstanceController::SetVariable
          (FNiagaraSystemInstanceController *this,FName param_1,int param_2)

{
  FNiagaraUserRedirectionParameterStore *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FNiagaraTypeDefinition *this_01;
  int *piVar4;
  int local_res8 [2];
  FName local_28;
  FNiagaraTypeDefinitionHandle local_20 [2];
  void *local_18;
  undefined8 local_10;
  
  if (this->OverrideParameters == (FNiagaraUserRedirectionParameterStore *)0x0) {
    return;
  }
  local_28 = param_1;
  local_20[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_20,&FNiagaraTypeDefinition::IntDef);
  this_00 = this->OverrideParameters;
  local_18 = (void *)0x0;
  local_10 = 0;
  this_01 = FNiagaraTypeDefinitionHandle::Resolve(local_20);
  iVar3 = FNiagaraTypeDefinition::GetSize(this_01);
  if ((iVar3 != 4) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Param.GetSizeInBytes() == sizeof(T)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                         ,0x232,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  piVar4 = (int *)(**(code **)(this_00->_padding_ + 0x58))(this_00,&local_28,0);
  if (piVar4 == (int *)0x0) {
    local_res8[0] = -1;
  }
  else {
    local_res8[0] = *piVar4;
    if (local_res8[0] != -1) {
      *(int *)((((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&this_00->_padding_)->
               AllocatorInstance).Data + local_res8[0]) = param_2;
      *(uint *)&this_00->_padding_ = (uint)this_00->_padding_ | 1;
      goto LAB_1493faa0e;
    }
  }
  (**(code **)(this_00->_padding_ + 0x10))(this_00,&local_28,0,0,local_res8);
  if ((local_res8[0] == -1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offset != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                         ,0x249,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(int *)((((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&this_00->_padding_)->
           AllocatorInstance).Data + local_res8[0]) = param_2;
  FNiagaraParameterStore::OnLayoutChange((FNiagaraParameterStore *)this_00);
LAB_1493faa0e:
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// SetVariable @ 1493faa30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstanceController::SetVariable
          (FNiagaraSystemInstanceController *this,FName param_1,float param_2)

{
  FNiagaraUserRedirectionParameterStore *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FNiagaraTypeDefinition *this_01;
  int *piVar4;
  int local_res8 [4];
  float local_res18;
  FName local_28;
  FNiagaraTypeDefinitionHandle local_20 [2];
  void *local_18;
  undefined8 local_10;
  
  if (this->OverrideParameters == (FNiagaraUserRedirectionParameterStore *)0x0) {
    return;
  }
  local_res18 = param_2;
  local_28 = param_1;
  local_20[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_20,&FNiagaraTypeDefinition::FloatDef);
  this_00 = this->OverrideParameters;
  local_18 = (void *)0x0;
  local_10 = 0;
  this_01 = FNiagaraTypeDefinitionHandle::Resolve(local_20);
  iVar3 = FNiagaraTypeDefinition::GetSize(this_01);
  if ((iVar3 != 4) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Param.GetSizeInBytes() == sizeof(T)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                         ,0x232,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  piVar4 = (int *)(**(code **)(this_00->_padding_ + 0x58))(this_00,&local_28,0);
  if (piVar4 == (int *)0x0) {
    local_res8[0] = -1;
  }
  else {
    local_res8[0] = *piVar4;
    if (local_res8[0] != -1) {
      *(float *)((((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&this_00->_padding_)->
                 AllocatorInstance).Data + local_res8[0]) = local_res18;
      *(uint *)&this_00->_padding_ = (uint)this_00->_padding_ | 1;
      goto LAB_1493fab5a;
    }
  }
  (**(code **)(this_00->_padding_ + 0x10))(this_00,&local_28,0,0,local_res8);
  if ((local_res8[0] == -1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offset != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                         ,0x249,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(float *)((((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&this_00->_padding_)->
             AllocatorInstance).Data + local_res8[0]) = local_res18;
  FNiagaraParameterStore::OnLayoutChange((FNiagaraParameterStore *)this_00);
LAB_1493fab5a:
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// SetVariable @ 1493fab80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstanceController::SetVariable
          (FNiagaraSystemInstanceController *this,FName param_1,TQuat<float> *param_2)

{
  FScriptContainerElement *pFVar1;
  FNiagaraUserRedirectionParameterStore *this_00;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  FNiagaraTypeDefinition *this_01;
  int *piVar6;
  int local_res8 [2];
  FName local_28;
  FNiagaraTypeDefinitionHandle local_20 [2];
  void *local_18;
  undefined8 local_10;
  
  if (this->OverrideParameters == (FNiagaraUserRedirectionParameterStore *)0x0) {
    return;
  }
  local_28 = param_1;
  local_20[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_20,&FNiagaraTypeDefinition::QuatDef);
  this_00 = this->OverrideParameters;
  local_18 = (void *)0x0;
  local_10 = 0;
  this_01 = FNiagaraTypeDefinitionHandle::Resolve(local_20);
  iVar5 = FNiagaraTypeDefinition::GetSize(this_01);
  if ((iVar5 != 0x10) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Param.GetSizeInBytes() == sizeof(T)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                         ,0x232,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  piVar6 = (int *)(**(code **)(this_00->_padding_ + 0x58))(this_00,&local_28,0);
  if (piVar6 == (int *)0x0) {
    local_res8[0] = -1;
  }
  else {
    local_res8[0] = *piVar6;
    if (local_res8[0] != -1) {
      uVar3 = *(undefined8 *)&param_2->Z;
      pFVar1 = (((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&this_00->_padding_)->
               AllocatorInstance).Data + local_res8[0];
      *(undefined8 *)pFVar1 = *(undefined8 *)param_2;
      *(undefined8 *)(pFVar1 + 8) = uVar3;
      *(uint *)&this_00->_padding_ = (uint)this_00->_padding_ | 1;
      goto LAB_1493faca6;
    }
  }
  (**(code **)(this_00->_padding_ + 0x10))(this_00,&local_28,0,0,local_res8);
  if ((local_res8[0] == -1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offset != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                         ,0x249,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar3 = *(undefined8 *)&param_2->Z;
  pFVar1 = (((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&this_00->_padding_)->
           AllocatorInstance).Data + local_res8[0];
  *(undefined8 *)pFVar1 = *(undefined8 *)param_2;
  *(undefined8 *)(pFVar1 + 8) = uVar3;
  FNiagaraParameterStore::OnLayoutChange((FNiagaraParameterStore *)this_00);
LAB_1493faca6:
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// SetVariable @ 1493facd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstanceController::SetVariable
          (FNiagaraSystemInstanceController *this,FName param_1,TVector2<float> param_2)

{
  FNiagaraUserRedirectionParameterStore *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FNiagaraTypeDefinition *this_01;
  int *piVar4;
  int local_res8 [2];
  FName local_28;
  FNiagaraTypeDefinitionHandle local_20 [2];
  void *local_18;
  undefined8 local_10;
  
  if (this->OverrideParameters == (FNiagaraUserRedirectionParameterStore *)0x0) {
    return;
  }
  local_28 = param_1;
  local_20[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_20,&FNiagaraTypeDefinition::Vec2Def);
  this_00 = this->OverrideParameters;
  local_18 = (void *)0x0;
  local_10 = 0;
  this_01 = FNiagaraTypeDefinitionHandle::Resolve(local_20);
  iVar3 = FNiagaraTypeDefinition::GetSize(this_01);
  if ((iVar3 != 8) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Param.GetSizeInBytes() == sizeof(T)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                         ,0x232,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  piVar4 = (int *)(**(code **)(this_00->_padding_ + 0x58))(this_00,&local_28,0);
  if (piVar4 == (int *)0x0) {
    local_res8[0] = -1;
  }
  else {
    local_res8[0] = *piVar4;
    if (local_res8[0] != -1) {
      ((TVector2<float>_u_0 *)
      ((((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&this_00->_padding_)->
       AllocatorInstance).Data + local_res8[0]))->_s_0 = (TVector2<float>_u_0_s_0)param_2.field0_0x0
      ;
      *(uint *)&this_00->_padding_ = (uint)this_00->_padding_ | 1;
      goto LAB_1493fadf0;
    }
  }
  (**(code **)(this_00->_padding_ + 0x10))(this_00,&local_28,0,0,local_res8);
  if ((local_res8[0] == -1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offset != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                         ,0x249,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ((TVector2<float>_u_0 *)
  ((((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&this_00->_padding_)->AllocatorInstance).
   Data + local_res8[0]))->_s_0 = (TVector2<float>_u_0_s_0)param_2.field0_0x0;
  FNiagaraParameterStore::OnLayoutChange((FNiagaraParameterStore *)this_00);
LAB_1493fadf0:
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// SetVariable @ 1493fae10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstanceController::SetVariable
          (FNiagaraSystemInstanceController *this,FName param_1,TVector4<float> *param_2)

{
  FScriptContainerElement *pFVar1;
  FNiagaraUserRedirectionParameterStore *this_00;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  FNiagaraTypeDefinition *this_01;
  int *piVar6;
  int local_res8 [2];
  FName local_28;
  FNiagaraTypeDefinitionHandle local_20 [2];
  void *local_18;
  undefined8 local_10;
  
  if (this->OverrideParameters == (FNiagaraUserRedirectionParameterStore *)0x0) {
    return;
  }
  local_28 = param_1;
  local_20[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_20,&FNiagaraTypeDefinition::Vec4Def);
  this_00 = this->OverrideParameters;
  local_18 = (void *)0x0;
  local_10 = 0;
  this_01 = FNiagaraTypeDefinitionHandle::Resolve(local_20);
  iVar5 = FNiagaraTypeDefinition::GetSize(this_01);
  if ((iVar5 != 0x10) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Param.GetSizeInBytes() == sizeof(T)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                         ,0x232,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  piVar6 = (int *)(**(code **)(this_00->_padding_ + 0x58))(this_00,&local_28,0);
  if (piVar6 == (int *)0x0) {
    local_res8[0] = -1;
  }
  else {
    local_res8[0] = *piVar6;
    if (local_res8[0] != -1) {
      uVar3 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
      pFVar1 = (((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&this_00->_padding_)->
               AllocatorInstance).Data + local_res8[0];
      *(undefined8 *)pFVar1 = *(undefined8 *)&param_2->field0_0x0;
      *(undefined8 *)(pFVar1 + 8) = uVar3;
      *(uint *)&this_00->_padding_ = (uint)this_00->_padding_ | 1;
      goto LAB_1493faf36;
    }
  }
  (**(code **)(this_00->_padding_ + 0x10))(this_00,&local_28,0,0,local_res8);
  if ((local_res8[0] == -1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offset != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                         ,0x249,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar3 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
  pFVar1 = (((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&this_00->_padding_)->
           AllocatorInstance).Data + local_res8[0];
  *(undefined8 *)pFVar1 = *(undefined8 *)&param_2->field0_0x0;
  *(undefined8 *)(pFVar1 + 8) = uVar3;
  FNiagaraParameterStore::OnLayoutChange((FNiagaraParameterStore *)this_00);
LAB_1493faf36:
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// SetVariable @ 1493faf60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstanceController::SetVariable
          (FNiagaraSystemInstanceController *this,FName param_1,TVector<float> *param_2)

{
  float fVar1;
  FNiagaraUserRedirectionParameterStore *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FNiagaraTypeDefinition *this_01;
  int *piVar6;
  int local_res8 [2];
  FName local_28;
  FNiagaraTypeDefinitionHandle local_20 [2];
  void *local_18;
  undefined8 local_10;
  
  if (this->OverrideParameters == (FNiagaraUserRedirectionParameterStore *)0x0) {
    return;
  }
  local_28 = param_1;
  local_20[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_20,&FNiagaraTypeDefinition::Vec3Def);
  this_00 = this->OverrideParameters;
  local_18 = (void *)0x0;
  local_10 = 0;
  this_01 = FNiagaraTypeDefinitionHandle::Resolve(local_20);
  iVar5 = FNiagaraTypeDefinition::GetSize(this_01);
  if ((iVar5 != 0xc) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Param.GetSizeInBytes() == sizeof(T)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                         ,0x232,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  piVar6 = (int *)(**(code **)(this_00->_padding_ + 0x58))(this_00,&local_28,0);
  if (piVar6 == (int *)0x0) {
    local_res8[0] = -1;
  }
  else {
    local_res8[0] = *piVar6;
    if (local_res8[0] != -1) {
      pFVar2 = (((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&this_00->_padding_)->
               AllocatorInstance).Data;
      *(undefined8 *)(pFVar2 + local_res8[0]) = *(undefined8 *)&param_2->field0_0x0;
      *(float *)(pFVar2 + (longlong)local_res8[0] + 8) = (param_2->field0_0x0)._s_0.Z;
      *(uint *)&this_00->_padding_ = (uint)this_00->_padding_ | 1;
      goto LAB_1493fb09a;
    }
  }
  (**(code **)(this_00->_padding_ + 0x10))(this_00,&local_28,0,0,local_res8);
  if ((local_res8[0] == -1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offset != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                         ,0x249,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&this_00->_padding_)->
           AllocatorInstance).Data;
  fVar1 = (param_2->field0_0x0)._s_0.Z;
  *(undefined8 *)(pFVar2 + local_res8[0]) = *(undefined8 *)&param_2->field0_0x0;
  *(float *)(pFVar2 + (longlong)local_res8[0] + 8) = fVar1;
  FNiagaraParameterStore::OnLayoutChange((FNiagaraParameterStore *)this_00);
LAB_1493fb09a:
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// SetVariable @ 1493fb0c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstanceController::SetVariable
          (FNiagaraSystemInstanceController *this,FName param_1,TVector<double> *param_2)

{
  FNiagaraUserRedirectionParameterStore *pFVar1;
  FName local_res10 [3];
  
  pFVar1 = this->OverrideParameters;
  if (pFVar1 != (FNiagaraUserRedirectionParameterStore *)0x0) {
    local_res10[0] = param_1;
    (**(code **)(pFVar1->_padding_ + 0x60))(pFVar1,param_2,local_res10,1);
  }
  return;
}

// SetVariable @ 1493fb100

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstanceController::SetVariable
          (FNiagaraSystemInstanceController *this,FName param_1,
          TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr> param_2)

{
  uint uVar1;
  FNiagaraUserRedirectionParameterStore *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint *puVar5;
  UObject *pUVar6;
  uint uVar7;
  UObject *pUVar8;
  UObject *local_res8;
  FWeakObjectPtr local_res18;
  undefined1 local_38 [8];
  FNiagaraTypeDefinitionHandle local_30 [2];
  ForAnyElementType local_28;
  undefined8 local_20;
  
  if (this->OverrideParameters != (FNiagaraUserRedirectionParameterStore *)0x0) {
    local_res18 = param_2.WeakPtr;
    local_38 = (undefined1  [8])param_1;
    local_30[0].RegisteredTypeIndex =
         FNiagaraTypeDefinitionHandle::Register(local_30,&FNiagaraTypeDefinition::UMaterialDef);
    pFVar2 = this->OverrideParameters;
    pUVar8 = (UObject *)0x0;
    local_28.Data = (FScriptContainerElement *)0x0;
    local_20._0_4_ = 0;
    local_20._4_4_ = 0;
    puVar5 = (uint *)(**(code **)(pFVar2->_padding_ + 0x58))(pFVar2,local_38,0);
    if (puVar5 != (uint *)0x0) {
      uVar1 = *puVar5;
      if ((-1 < (int)uVar1) && ((int)uVar1 < (int)pFVar2->_padding_)) {
        uVar7 = 0;
        if ((int)uVar1 < (int)pFVar2->_padding_) {
          uVar7 = ~uVar1 >> 0x1f;
        }
        if (uVar7 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        pUVar8 = *(UObject **)(pFVar2->_padding_ + (longlong)(int)uVar1 * 8);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar8);
        }
      }
    }
    pUVar6 = FWeakObjectPtr::Get(&local_res18);
    pFVar2 = this->OverrideParameters;
    local_res8 = pUVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    FNiagaraParameterStore::SetUObject
              ((FNiagaraParameterStore *)pFVar2,(TObjectPtr<UObject>)&local_res8,
               (FNiagaraVariable *)local_38);
    if (pUVar8 == (UObject *)0x0) {
      bVar4 = pUVar6 == (UObject *)0x0;
    }
    else {
      bVar4 = pUVar8 == pUVar6;
    }
    if (!bVar4) {
      this->bNeedsUpdateEmitterMaterials = 1;
    }
    if (local_28.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data);
    }
  }
  return;
}

// SetVariable @ 1493fb270

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstanceController::SetVariable
          (FNiagaraSystemInstanceController *this,FName param_1,
          TWeakObjectPtr<UObject,FWeakObjectPtr> param_2)

{
  FNiagaraUserRedirectionParameterStore *this_00;
  UObject *local_res8 [2];
  FWeakObjectPtr local_res18 [2];
  undefined1 local_28 [8];
  FNiagaraTypeDefinitionHandle local_20 [2];
  ForAnyElementType local_18;
  undefined8 local_10;
  
  if (this->OverrideParameters != (FNiagaraUserRedirectionParameterStore *)0x0) {
    local_res18[0] = param_2.WeakPtr;
    local_28 = (undefined1  [8])param_1;
    local_20[0].RegisteredTypeIndex =
         FNiagaraTypeDefinitionHandle::Register(local_20,&FNiagaraTypeDefinition::UObjectDef);
    this_00 = this->OverrideParameters;
    local_18.Data = (FScriptContainerElement *)0x0;
    local_10._0_4_ = 0;
    local_10._4_4_ = 0;
    local_res8[0] = FWeakObjectPtr::Get(local_res18);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8[0]);
    }
    FNiagaraParameterStore::SetUObject
              ((FNiagaraParameterStore *)this_00,(TObjectPtr<UObject>)local_res8,
               (FNiagaraVariable *)local_28);
    if (local_18.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data);
    }
  }
  return;
}

// SetVariable @ 1493fb300

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstanceController::SetVariable
          (FNiagaraSystemInstanceController *this,FName param_1,
          TWeakObjectPtr<UStaticMesh,FWeakObjectPtr> param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  FNiagaraUserRedirectionParameterStore *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint *puVar6;
  UObject *pUVar7;
  uint uVar8;
  UObject *pUVar9;
  UObject *local_res8;
  FWeakObjectPtr local_res18;
  undefined1 local_38 [8];
  FNiagaraTypeDefinitionHandle local_30 [2];
  ForAnyElementType local_28;
  undefined8 local_20;
  
  if (this->OverrideParameters != (FNiagaraUserRedirectionParameterStore *)0x0) {
    local_res18 = param_2.WeakPtr;
    local_38 = (undefined1  [8])param_1;
    local_30[0].RegisteredTypeIndex =
         FNiagaraTypeDefinitionHandle::Register(local_30,&FNiagaraTypeDefinition::UStaticMeshDef);
    pFVar3 = this->OverrideParameters;
    pUVar9 = (UObject *)0x0;
    local_28.Data = (FScriptContainerElement *)0x0;
    local_20._0_4_ = 0;
    local_20._4_4_ = 0;
    puVar6 = (uint *)(**(code **)(pFVar3->_padding_ + 0x58))(pFVar3,local_38,0);
    if (puVar6 != (uint *)0x0) {
      uVar2 = *puVar6;
      if ((-1 < (int)uVar2) && ((int)uVar2 < (int)pFVar3->_padding_)) {
        uVar8 = 0;
        if ((int)uVar2 < (int)pFVar3->_padding_) {
          uVar8 = ~uVar2 >> 0x1f;
        }
        if (uVar8 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        pUVar9 = *(UObject **)(pFVar3->_padding_ + (longlong)(int)uVar2 * 8);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar9);
        }
      }
    }
    pUVar7 = FWeakObjectPtr::Get(&local_res18);
    pFVar3 = this->OverrideParameters;
    local_res8 = pUVar7;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar7);
    }
    FNiagaraParameterStore::SetUObject
              ((FNiagaraParameterStore *)pFVar3,(TObjectPtr<UObject>)&local_res8,
               (FNiagaraVariable *)local_38);
    if (pUVar9 == (UObject *)0x0) {
      bVar5 = pUVar7 == (UObject *)0x0;
    }
    else {
      bVar5 = pUVar9 == pUVar7;
    }
    if (!bVar5) {
      this->bNeedsRendererRecache = 1;
      this->bNeedsUpdateEmitterMaterials = 1;
      this->bNeedsOverrideParametersTicked = 1;
    }
    if (local_28.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data);
    }
  }
  return;
}

// SetVariable @ 1493fb470

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstanceController::SetVariable
          (FNiagaraSystemInstanceController *this,FName param_1,
          TWeakObjectPtr<UTexture,FWeakObjectPtr> param_2)

{
  FNiagaraUserRedirectionParameterStore *this_00;
  UObject *local_res8 [2];
  FWeakObjectPtr local_res18 [2];
  undefined1 local_28 [8];
  FNiagaraTypeDefinitionHandle local_20 [2];
  ForAnyElementType local_18;
  undefined8 local_10;
  
  if (this->OverrideParameters != (FNiagaraUserRedirectionParameterStore *)0x0) {
    local_res18[0] = param_2.WeakPtr;
    local_28 = (undefined1  [8])param_1;
    local_20[0].RegisteredTypeIndex =
         FNiagaraTypeDefinitionHandle::Register(local_20,&FNiagaraTypeDefinition::UTextureDef);
    this_00 = this->OverrideParameters;
    local_18.Data = (FScriptContainerElement *)0x0;
    local_10._0_4_ = 0;
    local_10._4_4_ = 0;
    local_res8[0] = FWeakObjectPtr::Get(local_res18);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8[0]);
    }
    FNiagaraParameterStore::SetUObject
              ((FNiagaraParameterStore *)this_00,(TObjectPtr<UObject>)local_res8,
               (FNiagaraVariable *)local_28);
    if (local_18.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data);
    }
  }
  return;
}

// SetVariable @ 1493fb500

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstanceController::SetVariable
          (FNiagaraSystemInstanceController *this,FName param_1,
          TWeakObjectPtr<UTextureRenderTarget,FWeakObjectPtr> param_2)

{
  FNiagaraUserRedirectionParameterStore *this_00;
  UObject *local_res8 [2];
  FWeakObjectPtr local_res18 [2];
  undefined1 local_28 [8];
  FNiagaraTypeDefinitionHandle local_20 [2];
  ForAnyElementType local_18;
  undefined8 local_10;
  
  if (this->OverrideParameters != (FNiagaraUserRedirectionParameterStore *)0x0) {
    local_res18[0] = param_2.WeakPtr;
    local_28 = (undefined1  [8])param_1;
    local_20[0].RegisteredTypeIndex =
         FNiagaraTypeDefinitionHandle::Register
                   (local_20,&FNiagaraTypeDefinition::UTextureRenderTargetDef);
    this_00 = this->OverrideParameters;
    local_18.Data = (FScriptContainerElement *)0x0;
    local_10._0_4_ = 0;
    local_10._4_4_ = 0;
    local_res8[0] = FWeakObjectPtr::Get(local_res18);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8[0]);
    }
    FNiagaraParameterStore::SetUObject
              ((FNiagaraParameterStore *)this_00,(TObjectPtr<UObject>)local_res8,
               (FNiagaraVariable *)local_28);
    if (local_18.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data);
    }
  }
  return;
}

// SetVariable @ 1493fb590

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstanceController::SetVariable
          (FNiagaraSystemInstanceController *this,FName param_1,FLinearColor *param_2)

{
  FScriptContainerElement *pFVar1;
  FNiagaraUserRedirectionParameterStore *this_00;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  FNiagaraTypeDefinition *this_01;
  int *piVar6;
  int local_res8 [2];
  FName local_28;
  FNiagaraTypeDefinitionHandle local_20 [2];
  void *local_18;
  undefined8 local_10;
  
  if (this->OverrideParameters == (FNiagaraUserRedirectionParameterStore *)0x0) {
    return;
  }
  local_28 = param_1;
  local_20[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_20,&FNiagaraTypeDefinition::ColorDef);
  this_00 = this->OverrideParameters;
  local_18 = (void *)0x0;
  local_10 = 0;
  this_01 = FNiagaraTypeDefinitionHandle::Resolve(local_20);
  iVar5 = FNiagaraTypeDefinition::GetSize(this_01);
  if ((iVar5 != 0x10) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Param.GetSizeInBytes() == sizeof(T)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                         ,0x232,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  piVar6 = (int *)(**(code **)(this_00->_padding_ + 0x58))(this_00,&local_28,0);
  if (piVar6 == (int *)0x0) {
    local_res8[0] = -1;
  }
  else {
    local_res8[0] = *piVar6;
    if (local_res8[0] != -1) {
      uVar3 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
      pFVar1 = (((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&this_00->_padding_)->
               AllocatorInstance).Data + local_res8[0];
      *(undefined8 *)pFVar1 = *(undefined8 *)&param_2->field0_0x0;
      *(undefined8 *)(pFVar1 + 8) = uVar3;
      *(uint *)&this_00->_padding_ = (uint)this_00->_padding_ | 1;
      goto LAB_1493fb6b6;
    }
  }
  (**(code **)(this_00->_padding_ + 0x10))(this_00,&local_28,0,0,local_res8);
  if ((local_res8[0] == -1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offset != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                         ,0x249,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar3 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
  pFVar1 = (((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&this_00->_padding_)->
           AllocatorInstance).Data + local_res8[0];
  *(undefined8 *)pFVar1 = *(undefined8 *)&param_2->field0_0x0;
  *(undefined8 *)(pFVar1 + 8) = uVar3;
  FNiagaraParameterStore::OnLayoutChange((FNiagaraParameterStore *)this_00);
LAB_1493fb6b6:
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// SetVariable @ 1493fb6e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstanceController::SetVariable
          (FNiagaraSystemInstanceController *this,FName param_1,bool param_2)

{
  FNiagaraUserRedirectionParameterStore *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FNiagaraTypeDefinition *this_01;
  int *piVar4;
  int iVar5;
  int local_res8 [2];
  FName local_28;
  FNiagaraTypeDefinitionHandle local_20 [2];
  void *local_18;
  undefined8 local_10;
  
  if (this->OverrideParameters == (FNiagaraUserRedirectionParameterStore *)0x0) {
    return;
  }
  local_28 = param_1;
  local_20[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_20,&FNiagaraTypeDefinition::BoolDef);
  this_00 = this->OverrideParameters;
  iVar5 = (param_2 ^ 1) - 1;
  local_18 = (void *)0x0;
  local_10 = 0;
  this_01 = FNiagaraTypeDefinitionHandle::Resolve(local_20);
  iVar3 = FNiagaraTypeDefinition::GetSize(this_01);
  if ((iVar3 != 4) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Param.GetSizeInBytes() == sizeof(T)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                         ,0x232,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  piVar4 = (int *)(**(code **)(this_00->_padding_ + 0x58))(this_00,&local_28,0);
  if (piVar4 == (int *)0x0) {
    local_res8[0] = -1;
  }
  else {
    local_res8[0] = *piVar4;
    if (local_res8[0] != -1) {
      *(int *)((((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&this_00->_padding_)->
               AllocatorInstance).Data + local_res8[0]) = iVar5;
      *(uint *)&this_00->_padding_ = (uint)this_00->_padding_ | 1;
      goto LAB_1493fb804;
    }
  }
  (**(code **)(this_00->_padding_ + 0x10))(this_00,&local_28,0,0,local_res8);
  if ((local_res8[0] == -1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offset != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                         ,0x249,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(int *)((((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&this_00->_padding_)->
           AllocatorInstance).Data + local_res8[0]) = iVar5;
  FNiagaraParameterStore::OnLayoutChange((FNiagaraParameterStore *)this_00);
LAB_1493fb804:
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// UpdateEmitterMaterials @ 149406060

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstanceController::UpdateEmitterMaterials(FNiagaraSystemInstanceController *this)

{
  TArray<FNiagaraSystemRenderData::FMaterialOverride,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined8 *puVar2;
  int iVar3;
  FNiagaraSystemInstance *pFVar4;
  FScriptContainerElement *pFVar5;
  longlong *plVar6;
  UNiagaraRendererProperties *pUVar7;
  code *pcVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong *local_res8;
  ForAnyElementType local_88;
  undefined8 local_80;
  undefined8 *local_78;
  int local_70;
  longlong **local_68;
  FNiagaraSystemInstanceController *local_60;
  ForAnyElementType *local_58;
  FReadAccessScope local_48;
  
  bVar9 = IsInRenderingThread();
  if ((((!bVar9) && (bVar9 = IsInGameThread(), !bVar9)) && (bVar9 = (*IsAsyncLoading)(), !bVar9)) &&
     ((GIsSavingPackage == false &&
      (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInRenderingThread() || IsInGameThread() || IsAsyncLoading() || GIsSavingPackage"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstanceController.cpp"
                          ,0x13b,L""), bVar9)))) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar14 = 0;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  uVar16 = uVar14;
  if ((this->SystemInstance).Object != (FNiagaraSystemInstance *)0x0) {
    while( true ) {
      if (((this->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar3 = (((this->SystemInstance).Object)->Emitters).ArrayNum;
      if ((iVar3 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar15 = (uint)uVar16;
      if (iVar3 <= (int)uVar15) break;
      if (((this->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar4 = (this->SystemInstance).Object;
      iVar3 = (pFVar4->Emitters).ArrayNum;
      pFVar5 = (pFVar4->Emitters).AllocatorInstance.Data;
      if ((iVar3 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar11 = 0;
      if ((int)uVar15 < iVar3) {
        uVar11 = ~uVar15 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      plVar6 = *(longlong **)(pFVar5 + uVar14);
      local_68 = &local_res8;
      local_58 = &local_88;
      local_res8 = plVar6;
      local_60 = this;
      (**(code **)(*plVar6 + 0x78))(plVar6,&local_78);
      puVar13 = local_78;
      lVar12 = (longlong)local_70;
      if ((local_70 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      puVar2 = puVar13 + lVar12;
      for (; puVar13 != puVar2; puVar13 = puVar13 + 1) {
        pUVar7 = (UNiagaraRendererProperties *)*puVar13;
        if (((pUVar7 != (UNiagaraRendererProperties *)0x0) &&
            (cVar10 = (**(code **)(pUVar7->_padding_ + 0x318))(pUVar7), cVar10 != '\0')) &&
           (cVar10 = (**(code **)(pUVar7->_padding_ + 0x2e8))
                               (pUVar7,*(undefined1 *)((longlong)plVar6 + 0xd1)), cVar10 != '\0')) {
          `FNiagaraSystemInstanceController::UpdateEmitterMaterials'::__l14::<lambda_1>::operator()
                    (&local_68,pUVar7);
        }
      }
      uVar14 = uVar14 + 0x10;
      uVar16 = (ulonglong)(uVar15 + 1);
    }
  }
  pTVar1 = &this->EmitterMaterials;
  if (pTVar1 != (TArray<FNiagaraSystemRenderData::FMaterialOverride,TSizedDefaultAllocator<32>_> *)
                &local_88) {
    pFVar5 = (pTVar1->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar1->AllocatorInstance).Data = local_88.Data;
    (this->EmitterMaterials).ArrayNum = (int)local_80;
    (this->EmitterMaterials).ArrayMax = local_80._4_4_;
    local_80 = 0;
    local_88.Data = (FScriptContainerElement *)0x0;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnMaterialsUpdatedDelegate,&local_48);
  if ((*(int *)&(this->OnMaterialsUpdatedDelegate).field_0x10 != 0) &&
     (plVar6 = *(longlong **)&(this->OnMaterialsUpdatedDelegate).field_0x8,
     plVar6 != (longlong *)0x0)) {
    (**(code **)(*plVar6 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  return;
}

