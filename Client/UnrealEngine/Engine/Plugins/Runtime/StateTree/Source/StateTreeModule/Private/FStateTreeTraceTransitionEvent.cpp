// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 3

// GetTypeString @ 14d4c05d0

FString * __thiscall
FStateTreeTraceTransitionEvent::GetTypeString
          (FStateTreeTraceTransitionEvent *this,FString *__return_storage_ptr__,UStateTree *param_1)

{
  EStateTreeTransitionSourceType EVar1;
  EStateTreeTransitionTrigger EVar2;
  code *pcVar3;
  bool bVar4;
  FCompactStateTransition *pFVar5;
  UEnum *pUVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  FString local_48;
  FText local_38;
  FText local_28;
  FString local_18;
  
  EVar1 = (this->TransitionSource).SourceType;
  if (EVar1 == Asset) {
    pFVar5 = UStateTree::GetTransitionFromIndex
                       (param_1,(FStateTreeIndex16)(this->TransitionSource).TransitionIndex.Value);
    if (pFVar5 == (FCompactStateTransition *)0x0) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_18,(UObject *)0x0,None);
      ::FString::PrintfImpl(&local_48,L"%u");
      ::FString::PrintfImpl(__return_storage_ptr__,L"Invalid Transition Index %s for \'%s\'");
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
    EVar2 = pFVar5->Trigger;
    pUVar6 = StaticEnum<enum_EStateTreeTransitionTrigger>();
    pwVar8 = L"";
    if ((pUVar6 == (UEnum *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumClass != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xd13,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FString *)(*pcVar3)();
      return pFVar7;
    }
    UEnum::GetDisplayNameTextByValue(pUVar6,&local_38,(ulonglong)EVar2);
    pFVar7 = FText::ToString(&local_38);
    if ((pFVar7->Data).ArrayNum != 0) {
      pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
    ::FString::FString(__return_storage_ptr__,pwVar8);
  }
  else {
    pUVar6 = StaticEnum<enum_EStateTreeTransitionSourceType>();
    pwVar8 = L"";
    if ((pUVar6 == (UEnum *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumClass != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xd13,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FString *)(*pcVar3)();
      return pFVar7;
    }
    UEnum::GetDisplayNameTextByValue(pUVar6,&local_28,(ulonglong)EVar1);
    pFVar7 = FText::ToString(&local_28);
    if ((pFVar7->Data).ArrayNum != 0) {
      pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
    ::FString::FString(__return_storage_ptr__,pwVar8);
    local_38.TextData.Reference = local_28.TextData.Reference;
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetValueString @ 14d4c17f0

/* WARNING: Enum "EStateTreeStateSelectionBehavior": Some values do not have unique names */

FString * __thiscall
FStateTreeTraceTransitionEvent::GetValueString
          (FStateTreeTraceTransitionEvent *this,FString *__return_storage_ptr__,UStateTree *param_1)

{
  EStateTreeTransitionPriority EVar1;
  FName FVar2;
  UScriptStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  FCompactStateTreeState *pFVar6;
  FCompactStateTransition *pFVar7;
  FString *pFVar8;
  UEnum *this_00;
  FName local_res8;
  FString *local_res10;
  TStringBuilderBase<wchar_t> local_c8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FText local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  local_res10 = __return_storage_ptr__;
  pFVar6 = UStateTree::GetStateFromHandle
                     (param_1,(FStateTreeStateHandle)(this->TransitionSource).TargetState.Index);
  local_c8.Base = (wchar_t *)0x0;
  local_c8.CurPos = (wchar_t *)0x0;
  local_c8.End = (wchar_t *)0x0;
  local_c8.bIsDynamic = false;
  local_c8.bIsExternal = false;
  if ((this->TransitionSource).SourceType != Asset) goto LAB_14d4c19bb;
  pFVar7 = UStateTree::GetTransitionFromIndex
                     (param_1,(FStateTreeIndex16)(this->TransitionSource).TransitionIndex.Value);
  if (pFVar7 == (FCompactStateTransition *)0x0) {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_68,(UObject *)0x0,None);
    ::FString::PrintfImpl(&local_88,L"%u");
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_c8,L"[Invalid Transition Index %s for \'%s\']");
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    goto LAB_14d4c19bb;
  }
  if ((pFVar7->Priority != (this->TransitionSource).Priority) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<182356464482910348>,true,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\Debugger\\StateTreeTraceTypes.cpp"
                         ,0x8c,"Transition->Priority == TransitionSource.Priority"), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FString *)(*pcVar4)();
    return pFVar8;
  }
  if (((pFVar7->State).Index != (this->TransitionSource).TargetState.Index) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<182356464482910349>,true,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\Debugger\\StateTreeTraceTypes.cpp"
                         ,0x8d,"Transition->State == TransitionSource.TargetState"), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FString *)(*pcVar4)();
    return pFVar8;
  }
  FVar2 = (pFVar7->RequiredEvent).Tag.TagName;
  pUVar3 = (pFVar7->RequiredEvent).PayloadStruct.field0_0x0.DebugPtr;
  if ((FVar2 == (FName)0x0) &&
     (__return_storage_ptr__ = local_res10, pUVar3 == (UScriptStruct *)0x0)) goto LAB_14d4c19bb;
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_c8,L"(");
  if (FVar2 == (FName)0x0) {
    if (pUVar3 != (UScriptStruct *)0x0) goto LAB_14d4c1961;
  }
  else {
    ::FName::ToString(&(pFVar7->RequiredEvent).Tag.TagName,&local_a8);
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_c8,L"Tag: \'%s\'");
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (pUVar3 != (UScriptStruct *)0x0) {
      TStringBuilderBase<wchar_t>::AppendfImpl(&local_c8,L", ");
LAB_14d4c1961:
      local_res8 = (FName)((pFVar7->RequiredEvent).PayloadStruct.field0_0x0.DebugPtr)->_padding_;
      ::FName::ToString(&local_res8,&local_98);
      TStringBuilderBase<wchar_t>::AppendfImpl(&local_c8,L" Payload: \'%s\'");
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
    }
  }
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_c8,L") ");
  __return_storage_ptr__ = local_res10;
LAB_14d4c19bb:
  if (pFVar6 == (FCompactStateTreeState *)0x0) {
    FStateTreeStateHandle::Describe(&(this->TransitionSource).TargetState,&local_48);
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_c8,L"go to State \'%s\'");
    local_58.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
  }
  else {
    UE::StateTreeTrace::GetStateName(&local_58,param_1,pFVar6);
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_c8,L"go to State \'%s\'");
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  EVar1 = (this->TransitionSource).Priority;
  if (EVar1 != None) {
    this_00 = StaticEnum<enum_EStateTreeTransitionPriority>();
    if ((this_00 == (UEnum *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumClass != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xd13,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FString *)(*pcVar4)();
      return pFVar8;
    }
    UEnum::GetDisplayNameTextByValue(this_00,&local_78,(ulonglong)EVar1);
    FText::ToString(&local_78);
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_c8,L" (Priority: %s)");
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
    }
  }
  if (local_c8.End < local_c8.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_c8,1);
  }
  *local_c8.CurPos = L'\0';
  ::FString::FString(__return_storage_ptr__,local_c8.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_c8);
  return __return_storage_ptr__;
}

// ToFullString @ 14d4d22e0

FString * __thiscall
FStateTreeTraceTransitionEvent::ToFullString
          (FStateTreeTraceTransitionEvent *this,FString *__return_storage_ptr__,UStateTree *param_1)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  UPackage *pUVar4;
  UEnum *this_00;
  FString *pFVar5;
  FText local_48;
  FString local_38;
  FString local_28;
  
  GetValueString(this,&local_28,param_1);
  GetTypeString(this,&local_38,param_1);
  lVar2 = this->_padding_;
  this_00 = Z_Registration_Info_UEnum_EStateTreeTraceEventType.OuterSingleton;
  if (Z_Registration_Info_UEnum_EStateTreeTraceEventType.OuterSingleton == (UEnum *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_StateTreeModule();
    this_00 = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeTraceEventType,
                            (UObject *)pUVar4,L"EStateTreeTraceEventType");
    Z_Registration_Info_UEnum_EStateTreeTraceEventType.OuterSingleton = this_00;
    if ((this_00 == (UEnum *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumClass != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xd13,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar1)();
      return pFVar5;
    }
  }
  UEnum::GetDisplayNameTextByValue(this_00,&local_48,(ulonglong)(byte)lVar2);
  FText::ToString(&local_48);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s \'%s\': %s");
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

