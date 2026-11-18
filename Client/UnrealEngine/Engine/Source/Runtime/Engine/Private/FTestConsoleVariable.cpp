// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// FTestConsoleVariable @ 148806590

FTestConsoleVariable * __thiscall
FTestConsoleVariable::FTestConsoleVariable(FTestConsoleVariable *this,FTestConsoleVariable *param_1)

{
  this->bModified = param_1->bModified;
  (this->ConsoleVariableName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConsoleVariableName).Data.AllocatorInstance.Data =
       (param_1->ConsoleVariableName).Data.AllocatorInstance.Data;
  (param_1->ConsoleVariableName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConsoleVariableName).Data.ArrayNum = (param_1->ConsoleVariableName).Data.ArrayNum;
  (this->ConsoleVariableName).Data.ArrayMax = (param_1->ConsoleVariableName).Data.ArrayMax;
  (param_1->ConsoleVariableName).Data.ArrayNum = 0;
  (param_1->ConsoleVariableName).Data.ArrayMax = 0;
  (this->OriginalValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OriginalValue).Data.AllocatorInstance.Data =
       (param_1->OriginalValue).Data.AllocatorInstance.Data;
  (param_1->OriginalValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OriginalValue).Data.ArrayNum = (param_1->OriginalValue).Data.ArrayNum;
  (this->OriginalValue).Data.ArrayMax = (param_1->OriginalValue).Data.ArrayMax;
  (param_1->OriginalValue).Data.ArrayNum = 0;
  (param_1->OriginalValue).Data.ArrayMax = 0;
  param_1->bModified = false;
  return this;
}

// FTestConsoleVariable @ 1488065f0

FTestConsoleVariable * __thiscall
FTestConsoleVariable::FTestConsoleVariable(FTestConsoleVariable *this,FString *param_1)

{
  this->bModified = false;
  ::FString::FString(&this->ConsoleVariableName,param_1);
  (this->OriginalValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OriginalValue).Data.ArrayNum = 0;
  (this->OriginalValue).Data.ArrayMax = 0;
  return this;
}

// ~FTestConsoleVariable @ 14880c7e0

void __thiscall FTestConsoleVariable::~FTestConsoleVariable(FTestConsoleVariable *this)

{
  FScriptContainerElement *pFVar1;
  
  Restore(this);
  pFVar1 = (this->OriginalValue).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConsoleVariableName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// Get @ 14883c200

FString * __thiscall
FTestConsoleVariable::Get(FTestConsoleVariable *this,FString *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  longlong *plVar4;
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
        pFVar3 = (FString *)(*pcVar1)();
        return pFVar3;
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
                      (&bGEnsureHasExecuted<_261016140514328260>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\AutomationCommon.cpp"
                       ,0x13c,"ConsoleVariable");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  (**(code **)(*plVar4 + 0xd8))(plVar4,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Restore @ 148856cc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTestConsoleVariable::Restore(FTestConsoleVariable *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  undefined8 uVar5;
  wchar_t *pwVar6;
  undefined1 local_48 [16];
  uint local_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined1 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  if (this->bModified != false) {
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("Singleton != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x4fb,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((this->ConsoleVariableName).Data.ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(this->ConsoleVariableName).Data.AllocatorInstance.Data;
    }
    plVar4 = (longlong *)
             (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                       (IConsoleManager::Singleton,pwVar6,1);
    if (plVar4 == (longlong *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_261016140514328247>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\AutomationCommon.cpp"
                         ,0x149,"ConsoleVariable");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0x38))(plVar4);
      if ((this->OriginalValue).Data.ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(this->OriginalValue).Data.AllocatorInstance.Data;
      }
      local_28 = 0;
      local_30 = 0;
      local_34 = 1;
      local_20 = 0x1000000;
      local_24 = 0xf000000;
      local_38 = (**(code **)(*plVar4 + 0x18))(plVar4);
      lVar1 = *plVar4;
      local_38 = local_38 & 0xff000000;
      uVar5 = (**(code **)(lVar1 + 0xa8))(plVar4,local_48,&local_38);
      (**(code **)(lVar1 + 0xb0))(plVar4,pwVar6,uVar5);
      if (5 < (byte)LogEngineAutomationTests._0_1_) {
        UE::Logging::Private::BasicLog<6>
                  (&::LOG_Static,(FLogCategoryBase *)&LogEngineAutomationTests);
      }
    }
    this->bModified = false;
  }
  return;
}

// Set @ 148858300

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTestConsoleVariable::Set(FTestConsoleVariable *this,FString *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  wchar_t *pwVar9;
  undefined1 local_68 [16];
  void *local_58 [2];
  uint local_48;
  undefined1 local_44;
  undefined8 local_40;
  undefined1 local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((this->ConsoleVariableName).Data.ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(this->ConsoleVariableName).Data.AllocatorInstance.Data;
  }
  plVar6 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,pwVar9,1);
  if (plVar6 == (longlong *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_261016140514328279>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\AutomationCommon.cpp"
                       ,0x129,"ConsoleVariable");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    if (this->bModified == false) {
      this->bModified = true;
      puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0xd8))(plVar6,local_58);
      pFVar1 = &this->OriginalValue;
      if (pFVar1 != (FString *)puVar7) {
        pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)*puVar7;
        *puVar7 = 0;
        (this->OriginalValue).Data.ArrayNum = *(int *)(puVar7 + 1);
        (this->OriginalValue).Data.ArrayMax = *(int *)((longlong)puVar7 + 0xc);
        puVar7[1] = 0;
      }
      if (local_58[0] != (void *)0x0) {
        FMemory::Free(local_58[0]);
      }
    }
    plVar6 = (longlong *)(**(code **)(*plVar6 + 0x38))(plVar6);
    if ((param_1->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    local_40 = 0;
    local_38 = 0;
    local_44 = 1;
    local_30 = 0x1000000;
    local_34 = 0xf000000;
    local_48 = (**(code **)(*plVar6 + 0x18))(plVar6);
    lVar3 = *plVar6;
    local_48 = local_48 & 0xff000000;
    uVar8 = (**(code **)(lVar3 + 0xa8))(plVar6,local_68,&local_48);
    (**(code **)(lVar3 + 0xb0))(plVar6,pwVar9,uVar8);
    if (5 < (byte)LogEngineAutomationTests._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogEngineAutomationTests)
      ;
    }
  }
  return;
}

