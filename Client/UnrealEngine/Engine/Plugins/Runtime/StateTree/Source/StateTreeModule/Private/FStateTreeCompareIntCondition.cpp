// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 3

// StaticStruct @ 14d4a58d0

UScriptStruct * __cdecl FStateTreeCompareIntCondition::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeCompareIntCondition.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeCompareIntCondition.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeCompareIntCondition,(UObject *)pUVar1,
                         L"StateTreeCompareIntCondition");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeCompareIntCondition.OuterSingleton;
}

// GetInstanceDataType @ 14d4a5910

UStruct * __thiscall
FStateTreeCompareIntCondition::GetInstanceDataType(FStateTreeCompareIntCondition *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeCompareIntConditionInstanceData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeCompareIntConditionInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeCompareIntConditionInstanceData,
                         (UObject *)pUVar1,L"StateTreeCompareIntConditionInstanceData");
  }
  return (UStruct *)
         Z_Registration_Info_UScriptStruct_FStateTreeCompareIntConditionInstanceData.OuterSingleton;
}

// TestCondition @ 14d4a5950

bool __thiscall
FStateTreeCompareIntCondition::TestCondition
          (FStateTreeCompareIntCondition *this,FStateTreeExecutionContext *param_1)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  UPackage *pUVar7;
  FText *pFVar8;
  FNodeCustomDebugData *pFVar9;
  int iVar10;
  EGenericAICheck local_res8 [8];
  EGenericAICheck *local_res10;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FText local_78;
  FText local_68;
  FNodeCustomDebugData local_58;
  
  if (((((param_1->CurrentNodeDataHandle).Source != (EStateTreeDataSourceType)this->_padding_) ||
       ((param_1->CurrentNodeDataHandle).Index != *(ushort *)((longlong)&this->_padding_ + 2))) ||
      ((param_1->CurrentNodeDataHandle).StateHandle.Index !=
       *(ushort *)((longlong)&this->_padding_ + 4))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentNodeDataHandle == Node.InstanceDataHandle",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Public\\StateTreeExecutionContext.h"
                         ,0x2b7,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  if ((*(longlong *)&(param_1->CurrentNodeInstanceData).field_0x8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Memory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                         ,0x74,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  if ((*(longlong *)&param_1->CurrentNodeInstanceData == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Struct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                         ,0x75,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  lVar2 = *(longlong *)&param_1->CurrentNodeInstanceData;
  if (Z_Registration_Info_UScriptStruct_FStateTreeCompareIntConditionInstanceData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar7 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeCompareIntConditionInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeCompareIntConditionInstanceData,
                         (UObject *)pUVar7,L"StateTreeCompareIntConditionInstanceData");
    if (Z_Registration_Info_UScriptStruct_FStateTreeCompareIntConditionInstanceData.OuterSingleton
        != (UScriptStruct *)0x0) goto LAB_14d4a5a4c;
  }
  else {
LAB_14d4a5a4c:
    iVar10 = (int)(Z_Registration_Info_UScriptStruct_FStateTreeCompareIntConditionInstanceData.
                  OuterSingleton)->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar10) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar10 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FStateTreeCompareIntConditionInstanceData.OuterSingleton
         )->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_14d4a5a92;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Struct->IsChildOf(T::StaticStruct())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                     ,0x76,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
LAB_14d4a5a92:
  piVar3 = *(int **)&(param_1->CurrentNodeInstanceData).field_0x8;
  local_res8[0] = this->Operator;
  iVar10 = piVar3[1];
  iVar1 = *piVar3;
  switch(local_res8[0]) {
  case Less:
    bVar5 = iVar1 < iVar10;
    break;
  case LessOrEqual:
    bVar5 = iVar1 <= iVar10;
    break;
  case Equal:
    bVar5 = iVar1 == iVar10;
    break;
  case NotEqual:
    bVar5 = iVar1 != iVar10;
    break;
  case GreaterOrEqual:
    bVar5 = iVar10 <= iVar1;
    break;
  case Greater:
    bVar5 = iVar10 < iVar1;
    break;
  default:
    local_res10 = local_res8;
    `UE::StateTree::Conditions::CompareNumbers<int>'::__l4::<lambda_1>::operator()(&local_res10);
    bVar5 = false;
  }
  if (-1 < StateTreeDebugChannel->Enabled) {
    ::FString::PrintfImpl(&local_98,L"%d");
    pFVar8 = UE::StateTree::DescHelpers::GetOperatorText(&local_68,this->Operator,Text);
    FText::ToString(pFVar8);
    ::FString::PrintfImpl(&local_a8,L"%d");
    pFVar8 = UE::StateTree::DescHelpers::GetInvertText(&local_78,this->bInvert,Text);
    FText::ToString(pFVar8);
    ::FString::PrintfImpl(&local_b8,L"%s%s %s %s");
    local_58.TraceDebuggerString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.TraceDebuggerString.Data.ArrayNum = 0;
    local_58.TraceDebuggerString.Data.ArrayMax = 0;
    iVar10 = local_b8.Data.ArrayNum + -1;
    if (local_b8.Data.ArrayNum == 0) {
      iVar10 = 0;
    }
    pFVar9 = (FNodeCustomDebugData *)
             ::FString::ConstructFromPtrSize
                       (&local_88,(wchar_t *)local_b8.Data.AllocatorInstance.Data,iVar10);
    if (&local_58 != pFVar9) {
      if (local_58.TraceDebuggerString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_58.TraceDebuggerString.Data.AllocatorInstance.Data);
      }
      local_58.TraceDebuggerString.Data.AllocatorInstance.Data =
           (pFVar9->TraceDebuggerString).Data.AllocatorInstance.Data;
      (pFVar9->TraceDebuggerString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.TraceDebuggerString.Data.ArrayNum = (pFVar9->TraceDebuggerString).Data.ArrayNum;
      local_58.TraceDebuggerString.Data.ArrayMax = (pFVar9->TraceDebuggerString).Data.ArrayMax;
      (pFVar9->TraceDebuggerString).Data.ArrayNum = 0;
      (pFVar9->TraceDebuggerString).Data.ArrayMax = 0;
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    local_58.MergePolicy = Override;
    FStateTreeReadOnlyExecutionContext::SetNodeCustomDebugTraceData
              ((FStateTreeReadOnlyExecutionContext *)param_1,&local_58);
    if (local_58.TraceDebuggerString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_58.TraceDebuggerString.Data.AllocatorInstance.Data);
    }
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  return (bool)(bVar5 ^ this->bInvert);
}

