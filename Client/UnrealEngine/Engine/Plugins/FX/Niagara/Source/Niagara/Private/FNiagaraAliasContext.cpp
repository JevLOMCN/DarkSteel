// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 9

// ~FNiagaraAliasContext @ 149025470

void __thiscall FNiagaraAliasContext::~FNiagaraAliasContext(FNiagaraAliasContext *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  if ((this->StackContextMapping).bIsSet != false) {
    pvVar1 = *(void **)&(this->StackContextMapping).TypedValue.field_0x10;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    pvVar1 = *(void **)&(this->StackContextMapping).TypedValue;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
  }
  if ((*(int *)((longlong)&(this->StackContextName).field0_0x0 + 0xc) != -1) &&
     (pFVar2 = (this->StackContextName).field0_0x0.TypedValue.Data.AllocatorInstance.Data,
     pFVar2 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar2);
  }
  if ((this->ModuleMapping).bIsSet != false) {
    pvVar1 = *(void **)&(this->ModuleMapping).TypedValue.field_0x10;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    pvVar1 = *(void **)&(this->ModuleMapping).TypedValue;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
  }
  if ((*(int *)((longlong)&(this->ModuleName).field0_0x0 + 0xc) != -1) &&
     (pFVar2 = (this->ModuleName).field0_0x0.TypedValue.Data.AllocatorInstance.Data,
     pFVar2 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar2);
  }
  if ((this->EmitterMapping).bIsSet != false) {
    pvVar1 = *(void **)&(this->EmitterMapping).TypedValue.field_0x10;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    pvVar1 = *(void **)&(this->EmitterMapping).TypedValue;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
  }
  if ((*(int *)((longlong)&(this->EmitterName).field0_0x0 + 0xc) != -1) &&
     (pFVar2 = (this->EmitterName).field0_0x0.TypedValue.Data.AllocatorInstance.Data,
     pFVar2 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

// ChangeEmitterName @ 149031cb0

FNiagaraAliasContext * __thiscall
FNiagaraAliasContext::ChangeEmitterName
          (FNiagaraAliasContext *this,FString *param_1,FString *param_2)

{
  TOptional<FString> *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FNiagaraAliasContext *pFVar4;
  undefined1 local_28 [16];
  FString local_18;
  
  ::FString::FString((FString *)local_28,param_1);
  ::FString::FString(&local_18,param_2);
  TOptional<TTuple<FString,FString>_>::operator=
            (&this->EmitterMapping,(TTuple<FString,FString> *)local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  this_00 = &this->EmitterName;
  if (param_2 != (FString *)this_00) {
    pFVar1 = (this_00->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    ::FString::FString((FString *)this_00,param_2);
    if (*(int *)((longlong)&(this->EmitterName).field0_0x0 + 0xc) == -1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x171,
                         L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FNiagaraAliasContext *)(*pcVar2)();
        return pFVar4;
      }
    }
  }
  return this;
}

// ChangeEmitterNameToEmitter @ 149031d70

FNiagaraAliasContext * __thiscall
FNiagaraAliasContext::ChangeEmitterNameToEmitter(FNiagaraAliasContext *this,FString *param_1)

{
  TOptional<FString> *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FNiagaraAliasContext *pFVar4;
  longlong lVar5;
  undefined1 local_28 [16];
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  ::FString::FString((FString *)local_28,param_1);
  _Src = FNiagaraConstants::EmitterNamespaceString.Data.AllocatorInstance;
  lVar5 = (longlong)FNiagaraConstants::EmitterNamespaceString.Data.ArrayNum;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = FNiagaraConstants::EmitterNamespaceString.Data.ArrayNum;
  if (FNiagaraConstants::EmitterNamespaceString.Data.ArrayNum == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,FNiagaraConstants::EmitterNamespaceString.Data.ArrayNum,0,&local_18,
               FNiagaraConstants::EmitterNamespaceString.Data.ArrayNum,&local_c);
    memcpy(local_18.Data,_Src.Data,lVar5 * 2);
  }
  TOptional<TTuple<FString,FString>_>::operator=
            (&this->EmitterMapping,(TTuple<FString,FString> *)local_28);
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  this_00 = &this->EmitterName;
  if (param_1 != (FString *)this_00) {
    pFVar1 = (this_00->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    ::FString::FString((FString *)this_00,param_1);
    if (*(int *)((longlong)&(this->EmitterName).field0_0x0 + 0xc) == -1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x171,
                         L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FNiagaraAliasContext *)(*pcVar2)();
        return pFVar4;
      }
    }
  }
  return this;
}

// ChangeEmitterToEmitterName @ 149031e90

FNiagaraAliasContext * __thiscall
FNiagaraAliasContext::ChangeEmitterToEmitterName(FNiagaraAliasContext *this,FString *param_1)

{
  TOptional<FString> *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FNiagaraAliasContext *pFVar4;
  longlong lVar5;
  undefined1 local_28 [16];
  FString local_18;
  
  _Src.Data = FNiagaraConstants::EmitterNamespaceString.Data.AllocatorInstance.Data;
  lVar5 = (longlong)FNiagaraConstants::EmitterNamespaceString.Data.ArrayNum;
  local_28._0_8_ = (FScriptContainerElement *)0x0;
  local_28._8_4_ = FNiagaraConstants::EmitterNamespaceString.Data.ArrayNum;
  if (FNiagaraConstants::EmitterNamespaceString.Data.ArrayNum == 0) {
    local_28._12_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,FNiagaraConstants::EmitterNamespaceString.Data.ArrayNum,0,
               (ForAnyElementType *)local_28,FNiagaraConstants::EmitterNamespaceString.Data.ArrayNum
               ,(int *)(local_28 + 0xc));
    memcpy((void *)local_28._0_8_,_Src.Data,lVar5 * 2);
  }
  ::FString::FString(&local_18,param_1);
  TOptional<TTuple<FString,FString>_>::operator=
            (&this->EmitterMapping,(TTuple<FString,FString> *)local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  this_00 = &this->EmitterName;
  if (param_1 != (FString *)this_00) {
    pFVar1 = (this_00->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    ::FString::FString((FString *)this_00,param_1);
    if (*(int *)((longlong)&(this->EmitterName).field0_0x0 + 0xc) == -1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x171,
                         L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FNiagaraAliasContext *)(*pcVar2)();
        return pFVar4;
      }
    }
  }
  return this;
}

// ChangeModuleName @ 149031fc0

FNiagaraAliasContext * __thiscall
FNiagaraAliasContext::ChangeModuleName(FNiagaraAliasContext *this,FString *param_1,FString *param_2)

{
  TOptional<FString> *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FNiagaraAliasContext *pFVar4;
  undefined1 local_28 [16];
  FString local_18;
  
  ::FString::FString((FString *)local_28,param_1);
  ::FString::FString(&local_18,param_2);
  TOptional<TTuple<FString,FString>_>::operator=
            (&this->ModuleMapping,(TTuple<FString,FString> *)local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  this_00 = &this->ModuleName;
  if (param_2 != (FString *)this_00) {
    pFVar1 = (this_00->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    ::FString::FString((FString *)this_00,param_2);
    if (*(int *)((longlong)&(this->ModuleName).field0_0x0 + 0xc) == -1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x171,
                         L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FNiagaraAliasContext *)(*pcVar2)();
        return pFVar4;
      }
    }
  }
  return this;
}

// ChangeModuleNameToModule @ 149032080

FNiagaraAliasContext * __thiscall
FNiagaraAliasContext::ChangeModuleNameToModule(FNiagaraAliasContext *this,FString *param_1)

{
  TOptional<FString> *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FNiagaraAliasContext *pFVar4;
  longlong lVar5;
  undefined1 local_28 [16];
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  ::FString::FString((FString *)local_28,param_1);
  _Src = FNiagaraConstants::ModuleNamespaceString.Data.AllocatorInstance;
  lVar5 = (longlong)FNiagaraConstants::ModuleNamespaceString.Data.ArrayNum;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = FNiagaraConstants::ModuleNamespaceString.Data.ArrayNum;
  if (FNiagaraConstants::ModuleNamespaceString.Data.ArrayNum == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,FNiagaraConstants::ModuleNamespaceString.Data.ArrayNum,0,&local_18,
               FNiagaraConstants::ModuleNamespaceString.Data.ArrayNum,&local_c);
    memcpy(local_18.Data,_Src.Data,lVar5 * 2);
  }
  TOptional<TTuple<FString,FString>_>::operator=
            (&this->ModuleMapping,(TTuple<FString,FString> *)local_28);
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  this_00 = &this->ModuleName;
  if (param_1 != (FString *)this_00) {
    pFVar1 = (this_00->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    ::FString::FString((FString *)this_00,param_1);
    if (*(int *)((longlong)&(this->ModuleName).field0_0x0 + 0xc) == -1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x171,
                         L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FNiagaraAliasContext *)(*pcVar2)();
        return pFVar4;
      }
    }
  }
  return this;
}

// ChangeModuleToModuleName @ 1490321a0

FNiagaraAliasContext * __thiscall
FNiagaraAliasContext::ChangeModuleToModuleName(FNiagaraAliasContext *this,FString *param_1)

{
  TOptional<FString> *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FNiagaraAliasContext *pFVar4;
  longlong lVar5;
  undefined1 local_28 [16];
  FString local_18;
  
  _Src.Data = FNiagaraConstants::ModuleNamespaceString.Data.AllocatorInstance.Data;
  lVar5 = (longlong)FNiagaraConstants::ModuleNamespaceString.Data.ArrayNum;
  local_28._0_8_ = (FScriptContainerElement *)0x0;
  local_28._8_4_ = FNiagaraConstants::ModuleNamespaceString.Data.ArrayNum;
  if (FNiagaraConstants::ModuleNamespaceString.Data.ArrayNum == 0) {
    local_28._12_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,FNiagaraConstants::ModuleNamespaceString.Data.ArrayNum,0,
               (ForAnyElementType *)local_28,FNiagaraConstants::ModuleNamespaceString.Data.ArrayNum,
               (int *)(local_28 + 0xc));
    memcpy((void *)local_28._0_8_,_Src.Data,lVar5 * 2);
  }
  ::FString::FString(&local_18,param_1);
  TOptional<TTuple<FString,FString>_>::operator=
            (&this->ModuleMapping,(TTuple<FString,FString> *)local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  this_00 = &this->ModuleName;
  if (param_1 != (FString *)this_00) {
    pFVar1 = (this_00->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    ::FString::FString((FString *)this_00,param_1);
    if (*(int *)((longlong)&(this->ModuleName).field0_0x0 + 0xc) == -1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x171,
                         L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FNiagaraAliasContext *)(*pcVar2)();
        return pFVar4;
      }
    }
  }
  return this;
}

// ChangeRapidIterationParameterMode @ 1490322d0

FNiagaraAliasContext * __thiscall
FNiagaraAliasContext::ChangeRapidIterationParameterMode
          (FNiagaraAliasContext *this,ERapidIterationParameterMode param_1)

{
  this->RapidIterationParameterMode = param_1;
  return this;
}

// ChangeStackContext @ 1490322e0

FNiagaraAliasContext * __thiscall
FNiagaraAliasContext::ChangeStackContext(FNiagaraAliasContext *this,FString *param_1)

{
  TOptional<FString> *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FNiagaraAliasContext *pFVar4;
  longlong lVar5;
  undefined1 local_28 [16];
  FString local_18;
  
  _Src.Data = FNiagaraConstants::StackContextNamespaceString.Data.AllocatorInstance.Data;
  lVar5 = (longlong)FNiagaraConstants::StackContextNamespaceString.Data.ArrayNum;
  local_28._0_8_ = (FScriptContainerElement *)0x0;
  local_28._8_4_ = FNiagaraConstants::StackContextNamespaceString.Data.ArrayNum;
  if (FNiagaraConstants::StackContextNamespaceString.Data.ArrayNum == 0) {
    local_28._12_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,FNiagaraConstants::StackContextNamespaceString.Data.ArrayNum,0,
               (ForAnyElementType *)local_28,
               FNiagaraConstants::StackContextNamespaceString.Data.ArrayNum,(int *)(local_28 + 0xc))
    ;
    memcpy((void *)local_28._0_8_,_Src.Data,lVar5 * 2);
  }
  ::FString::FString(&local_18,param_1);
  TOptional<TTuple<FString,FString>_>::operator=
            (&this->StackContextMapping,(TTuple<FString,FString> *)local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  this_00 = &this->StackContextName;
  if (param_1 != (FString *)this_00) {
    pFVar1 = (this_00->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    ::FString::FString((FString *)this_00,param_1);
    if (*(int *)((longlong)&(this->StackContextName).field0_0x0 + 0xc) == -1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x171,
                         L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FNiagaraAliasContext *)(*pcVar2)();
        return pFVar4;
      }
    }
  }
  return this;
}

