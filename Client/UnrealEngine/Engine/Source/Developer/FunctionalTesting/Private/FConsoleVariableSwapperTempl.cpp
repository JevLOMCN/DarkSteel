// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FunctionalTesting
// Functions: 6

// FConsoleVariableSwapperTempl<int> @ 148c7e260

FConsoleVariableSwapperTempl<int> * __thiscall
FConsoleVariableSwapperTempl<int>::FConsoleVariableSwapperTempl<int>
          (FConsoleVariableSwapperTempl<int> *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->bModified = false;
  ::FString::FString(&this->ConsoleVariableName,param_1);
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

// FConsoleVariableSwapperTempl<float> @ 148c7e2a0

FConsoleVariableSwapperTempl<float> * __thiscall
FConsoleVariableSwapperTempl<float>::FConsoleVariableSwapperTempl<float>
          (FConsoleVariableSwapperTempl<float> *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->bModified = false;
  ::FString::FString(&this->ConsoleVariableName,param_1);
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

// Restore @ 148c98a10

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall FConsoleVariableSwapperTempl<int>::Restore(FConsoleVariableSwapperTempl<int> *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  IConsoleVariable *this_00;
  wchar_t *pwVar4;
  
  if (this->bModified != false) {
    pwVar4 = L"";
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
    if ((this->ConsoleVariableName).Data.ArrayNum != 0) {
      pwVar4 = (wchar_t *)(this->ConsoleVariableName).Data.AllocatorInstance.Data;
    }
    plVar3 = (longlong *)
             (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                       (IConsoleManager::Singleton,pwVar4,1);
    if (plVar3 == (longlong *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1924657347364389009>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\FunctionalTesting\\Private\\AutomationBlueprintFunctionLibrary.cpp"
                         ,0x91,"ConsoleVariable");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      this_00 = (IConsoleVariable *)(**(code **)(*plVar3 + 0x38))();
      IConsoleVariable::SetWithCurrentPriority<int>
                (this_00,this->OriginalValue,(FName)0x0,ECVF_SetByConsole,0x1000000);
    }
    this->bModified = false;
  }
  return;
}

// Restore @ 148c98b10

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
FConsoleVariableSwapperTempl<float>::Restore(FConsoleVariableSwapperTempl<float> *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  IConsoleVariable *this_00;
  wchar_t *pwVar4;
  
  if (this->bModified != false) {
    pwVar4 = L"";
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
    if ((this->ConsoleVariableName).Data.ArrayNum != 0) {
      pwVar4 = (wchar_t *)(this->ConsoleVariableName).Data.AllocatorInstance.Data;
    }
    plVar3 = (longlong *)
             (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                       (IConsoleManager::Singleton,pwVar4,1);
    if (plVar3 == (longlong *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1924657347364389009>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\FunctionalTesting\\Private\\AutomationBlueprintFunctionLibrary.cpp"
                         ,0x91,"ConsoleVariable");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      this_00 = (IConsoleVariable *)(**(code **)(*plVar3 + 0x38))();
      IConsoleVariable::SetWithCurrentPriority<float>
                (this_00,this->OriginalValue,(FName)0x0,ECVF_SetByConsole,0x1000000);
    }
    this->bModified = false;
  }
  return;
}

// Set @ 148c9b710

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
FConsoleVariableSwapperTempl<int>::Set(FConsoleVariableSwapperTempl<int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  longlong *plVar4;
  IConsoleVariable *this_00;
  wchar_t *pwVar5;
  
  pwVar5 = L"";
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
  if ((this->ConsoleVariableName).Data.ArrayNum != 0) {
    pwVar5 = (wchar_t *)(this->ConsoleVariableName).Data.AllocatorInstance.Data;
  }
  plVar4 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,pwVar5,1);
  if (plVar4 == (longlong *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1924657347364388974>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\FunctionalTesting\\Private\\AutomationBlueprintFunctionLibrary.cpp"
                       ,0x6e,"ConsoleVariable");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    if (this->bModified == false) {
      this->bModified = true;
      iVar3 = (**(code **)(*plVar4 + 200))(plVar4);
      this->OriginalValue = iVar3;
    }
    this_00 = (IConsoleVariable *)(**(code **)(*plVar4 + 0x38))();
    IConsoleVariable::SetWithCurrentPriority<int>
              (this_00,param_1,(FName)0x0,ECVF_SetByConsole,0x1000000);
  }
  return;
}

// Set @ 148c9b830

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
FConsoleVariableSwapperTempl<float>::Set(FConsoleVariableSwapperTempl<float> *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  IConsoleVariable *this_00;
  wchar_t *pwVar4;
  float fVar5;
  
  pwVar4 = L"";
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
  if ((this->ConsoleVariableName).Data.ArrayNum != 0) {
    pwVar4 = (wchar_t *)(this->ConsoleVariableName).Data.AllocatorInstance.Data;
  }
  plVar3 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,pwVar4,1);
  if (plVar3 == (longlong *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1924657347364388990>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\FunctionalTesting\\Private\\AutomationBlueprintFunctionLibrary.cpp"
                       ,0x7e,"ConsoleVariable");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    if (this->bModified == false) {
      this->bModified = true;
      fVar5 = (float)(**(code **)(*plVar3 + 0xd0))(plVar3);
      this->OriginalValue = fVar5;
    }
    this_00 = (IConsoleVariable *)(**(code **)(*plVar3 + 0x38))();
    IConsoleVariable::SetWithCurrentPriority<float>
              (this_00,param_1,(FName)0x0,ECVF_SetByConsole,0x1000000);
  }
  return;
}

