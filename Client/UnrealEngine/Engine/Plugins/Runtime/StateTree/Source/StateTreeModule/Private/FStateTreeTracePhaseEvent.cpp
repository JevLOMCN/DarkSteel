// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 3

// GetTypeString @ 14d4c0470

FString * __thiscall
FStateTreeTracePhaseEvent::GetTypeString
          (FStateTreeTracePhaseEvent *this,FString *__return_storage_ptr__,UStateTree *param_1)

{
  code *pcVar1;
  longlong lVar2;
  UEnum *this_00;
  bool bVar3;
  UPackage *pUVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  FText local_18;
  
  lVar2 = this->_padding_;
  if (Z_Registration_Info_UEnum_EStateTreeTraceEventType.OuterSingleton == (UEnum *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UEnum_EStateTreeTraceEventType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeTraceEventType,(UObject *)pUVar4,
                       L"EStateTreeTraceEventType");
  }
  this_00 = Z_Registration_Info_UEnum_EStateTreeTraceEventType.OuterSingleton;
  pwVar6 = L"";
  if (Z_Registration_Info_UEnum_EStateTreeTraceEventType.OuterSingleton == (UEnum *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumClass != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                       ,0xd13,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar1)();
      return pFVar5;
    }
  }
  UEnum::GetDisplayNameTextByValue(this_00,&local_18,(ulonglong)(byte)lVar2);
  pFVar5 = FText::ToString(&local_18);
  if ((pFVar5->Data).ArrayNum != 0) {
    pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  ::FString::FString(__return_storage_ptr__,pwVar6);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetValueString @ 14d4c0ea0

/* WARNING: Enum "EStateTreeStateSelectionBehavior": Some values do not have unique names */

FString * __thiscall
FStateTreeTracePhaseEvent::GetValueString
          (FStateTreeTracePhaseEvent *this,FString *__return_storage_ptr__,UStateTree *param_1)

{
  EStateTreeUpdatePhase EVar1;
  EStateTreeStateSelectionBehavior EVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  FCompactStateTreeState *pFVar7;
  UEnum *pUVar8;
  FString *pFVar9;
  void *pvVar10;
  ulong64 uVar11;
  int iVar12;
  TStringBuilderBase<wchar_t> local_c8;
  FText local_a8;
  FText local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  EVar1 = this->Phase;
  local_c8.End = (wchar_t *)0x0;
  local_c8.bIsDynamic = false;
  local_c8.bIsExternal = false;
  local_c8.Base = (wchar_t *)0x0;
  local_c8.CurPos = (wchar_t *)0x0;
  if (EVar1 == TrySelectBehavior) {
    if ((this->StateHandle).Index != 0xffff) {
      pFVar7 = UStateTree::GetStateFromHandle
                         (param_1,(FStateTreeStateHandle)(this->StateHandle).Index);
      if (pFVar7 == (FCompactStateTreeState *)0x0) {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_78,(UObject *)0x0,None)
        ;
        FStateTreeStateHandle::Describe(&this->StateHandle,&local_88);
        ::FString::PrintfImpl(__return_storage_ptr__,L"Invalid State Index %s for \'%s\'");
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
      }
      else {
        EVar2 = pFVar7->SelectionBehavior;
        pUVar8 = StaticEnum<enum_EStateTreeStateSelectionBehavior>();
        if ((pUVar8 == (UEnum *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("EnumClass != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                               ,0xd13,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar9 = (FString *)(*pcVar5)();
          return pFVar9;
        }
        UEnum::GetDisplayNameTextByValue(pUVar8,&local_a8,(ulonglong)EVar2);
        pFVar9 = FText::ToString(&local_a8);
        ::FString::FString(__return_storage_ptr__,pFVar9);
        if (local_a8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
        }
      }
      goto LAB_14d4c11e1;
    }
LAB_14d4c1006:
    pUVar8 = StaticEnum<enum_EStateTreeUpdatePhase>();
    if ((pUVar8 == (UEnum *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumClass != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xd13,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FString *)(*pcVar5)();
      return pFVar9;
    }
    UEnum::GetDisplayNameTextByValue(pUVar8,&local_98,(ulonglong)EVar1);
    pFVar9 = FText::ToString(&local_98);
    iVar3 = (pFVar9->Data).ArrayNum;
    pFVar4 = (pFVar9->Data).AllocatorInstance.Data;
    iVar12 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar12 = 0;
    }
    uVar11 = (ulong64)iVar12;
    if (local_c8.End < local_c8.CurPos + uVar11) {
      TStringBuilderBase<wchar_t>::Extend(&local_c8,uVar11);
    }
    if (iVar12 != 0) {
      pvVar10 = FGenericPlatformString::Memcpy(local_c8.CurPos,pFVar4,uVar11 * 2);
      local_c8.CurPos = (wchar_t *)((longlong)pvVar10 + uVar11 * 2);
    }
    if (local_98.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
    }
  }
  else if (EVar1 != Unset) goto LAB_14d4c1006;
  pFVar7 = UStateTree::GetStateFromHandle(param_1,(FStateTreeStateHandle)(this->StateHandle).Index);
  if ((pFVar7 != (FCompactStateTreeState *)0x0) || ((this->StateHandle).Index != 0xffff)) {
    if ((int)((longlong)local_c8.CurPos - (longlong)local_c8.Base >> 1) == 0) {
      if (pFVar7 == (FCompactStateTreeState *)0x0) {
        FStateTreeStateHandle::Describe(&this->StateHandle,&local_38);
        TStringBuilderBase<wchar_t>::AppendfImpl(&local_c8,L"%s");
        local_68.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
      }
      else {
        UE::StateTreeTrace::GetStateName(&local_48,param_1,pFVar7);
        TStringBuilderBase<wchar_t>::AppendfImpl(&local_c8,L"%s");
        local_68.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
      }
    }
    else if (pFVar7 == (FCompactStateTreeState *)0x0) {
      FStateTreeStateHandle::Describe(&this->StateHandle,&local_58);
      TStringBuilderBase<wchar_t>::AppendfImpl(&local_c8,L" \'%s\'");
      local_68.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
    }
    else {
      UE::StateTreeTrace::GetStateName(&local_68,param_1,pFVar7);
      TStringBuilderBase<wchar_t>::AppendfImpl(&local_c8,L" \'%s\'");
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  if (local_c8.End < local_c8.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_c8,1);
  }
  *local_c8.CurPos = L'\0';
  ::FString::FString(__return_storage_ptr__,local_c8.Base);
LAB_14d4c11e1:
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_c8);
  return __return_storage_ptr__;
}

// ToFullString @ 14d4d1e70

FString * __thiscall
FStateTreeTracePhaseEvent::ToFullString
          (FStateTreeTracePhaseEvent *this,FString *__return_storage_ptr__,UStateTree *param_1)

{
  GetValueString(this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

