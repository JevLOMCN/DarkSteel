// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelViewViewModel
// Functions: 7

// StartupModule @ 14a737530

void __thiscall FModelViewViewModelModule::StartupModule(FModelViewViewModelModule *this)

{
  code *pcVar1;
  bool bVar2;
  IConsoleVariable *pIVar3;
  TMulticastDelegateRegistration<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
  *this_00;
  FModelViewViewModelModule local_res10 [3];
  
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar3 = (IConsoleVariable *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"MVVM.DefaultExecutionMode",1);
  if (pIVar3 == (IConsoleVariable *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2464865045226455022>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\ModelViewViewModelModule.cpp"
                       ,0x12,"CVarDefaultExecutionMode");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    HandleDefaultExecutionModeChanged(this,pIVar3);
    this_00 = (TMulticastDelegateRegistration<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
               *)(**(code **)(*(longlong *)pIVar3 + 0xe8))(pIVar3);
    TMulticastDelegateRegistration<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>::
    AddRaw<FModelViewViewModelModule>(this_00,local_res10,(pmf_0a13da5c)this);
  }
  return;
}

// ShutdownModule @ 14a737620

void __thiscall FModelViewViewModelModule::ShutdownModule(FModelViewViewModelModule *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  
  if (!GIsRequestingExit) {
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      IConsoleManager::SetupSingleton();
      if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Singleton != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x4fb,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    plVar3 = (longlong *)
             (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                       (IConsoleManager::Singleton,L"MVVM.DefaultExecutionMode",1);
    if (plVar3 != (longlong *)0x0) {
      this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                (**(code **)(*plVar3 + 0xe8))(plVar3);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(this_00,this);
      return;
    }
  }
  return;
}

// HandleBlueprintCompiled @ 14a754c80

void __thiscall FModelViewViewModelModule::HandleBlueprintCompiled(FModelViewViewModelModule *this)

{
  return;
}

// HandleBlueprintPreCompile @ 14a754c90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FModelViewViewModelModule::HandleBlueprintPreCompile
          (FModelViewViewModelModule *this,UBlueprint *param_1)

{
  return;
}

// HandleDefaultExecutionModeChanged @ 14a754ca0

void __thiscall
FModelViewViewModelModule::HandleDefaultExecutionModeChanged
          (FModelViewViewModelModule *this,IConsoleVariable *param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  ForAnyElementType FVar4;
  undefined8 local_res10;
  undefined1 local_48 [16];
  FString local_38;
  uint local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined1 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar2 = (**(code **)(*(longlong *)param_1 + 200))(param_1);
  if ((((iVar2 != 0) && (iVar2 != 1)) && (iVar2 != 2)) && (iVar2 != 3)) {
    `FModelViewViewModelModule::HandleDefaultExecutionModeChanged'::__l4::<lambda_1>::operator()
              (&local_res10);
    local_res10 = 0;
    local_28 = (**(code **)(*(longlong *)param_1 + 0x18))(param_1);
    local_24 = 0;
    local_28 = local_28 & 0xff000000;
    local_18 = 0;
    local_20 = local_res10;
    local_14 = 0xf000000;
    local_10 = 0x1000000;
    ::FString::PrintfImpl(&local_38,L"%d");
    lVar1 = *(longlong *)param_1;
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar4.Data = local_38.Data.AllocatorInstance.Data;
    }
    uVar3 = (**(code **)(lVar1 + 0xa8))(param_1,local_48,&local_28);
    (**(code **)(lVar1 + 0xb0))(param_1,FVar4.Data,uVar3);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// OnPostEngineInit @ 14a75b8d0

void __thiscall FModelViewViewModelModule::OnPostEngineInit(FModelViewViewModelModule *this)

{
  return;
}

// operator() @ 150553bc0

bool __thiscall
`FModelViewViewModelModule::HandleDefaultExecutionModeChanged'::__l4::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2464865045226454947>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2464865045226454947>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

