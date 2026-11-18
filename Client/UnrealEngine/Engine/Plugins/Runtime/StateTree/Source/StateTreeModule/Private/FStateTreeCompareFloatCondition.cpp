// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 3

// StaticStruct @ 14d4a5ef0

UScriptStruct * __cdecl FStateTreeCompareFloatCondition::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeCompareFloatCondition.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeCompareFloatCondition.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeCompareFloatCondition,(UObject *)pUVar1
                         ,L"StateTreeCompareFloatCondition");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeCompareFloatCondition.OuterSingleton;
}

// GetInstanceDataType @ 14d4a5f30

UStruct * __thiscall
FStateTreeCompareFloatCondition::GetInstanceDataType(FStateTreeCompareFloatCondition *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeCompareFloatConditionInstanceData.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeCompareFloatConditionInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeCompareFloatConditionInstanceData,
                         (UObject *)pUVar1,L"StateTreeCompareFloatConditionInstanceData");
  }
  return (UStruct *)
         Z_Registration_Info_UScriptStruct_FStateTreeCompareFloatConditionInstanceData.
         OuterSingleton;
}

// TestCondition @ 14d4a5f70

bool __thiscall
FStateTreeCompareFloatCondition::TestCondition
          (FStateTreeCompareFloatCondition *this,FStateTreeExecutionContext *param_1)

{
  longlong lVar1;
  double *pdVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UPackage *pUVar6;
  FText *pFVar7;
  FNodeCustomDebugData *pFVar8;
  int iVar9;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FText local_68;
  FText local_58;
  FNodeCustomDebugData local_48;
  
  if (((((param_1->CurrentNodeDataHandle).Source != (EStateTreeDataSourceType)this->_padding_) ||
       ((param_1->CurrentNodeDataHandle).Index != *(ushort *)((longlong)&this->_padding_ + 2))) ||
      ((param_1->CurrentNodeDataHandle).StateHandle.Index !=
       *(ushort *)((longlong)&this->_padding_ + 4))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentNodeDataHandle == Node.InstanceDataHandle",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Public\\StateTreeExecutionContext.h"
                         ,0x2b7,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if ((*(longlong *)&(param_1->CurrentNodeInstanceData).field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Memory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                         ,0x74,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if ((*(longlong *)&param_1->CurrentNodeInstanceData == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Struct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                         ,0x75,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  lVar1 = *(longlong *)&param_1->CurrentNodeInstanceData;
  if (Z_Registration_Info_UScriptStruct_FStateTreeCompareFloatConditionInstanceData.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeCompareFloatConditionInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeCompareFloatConditionInstanceData,
                         (UObject *)pUVar6,L"StateTreeCompareFloatConditionInstanceData");
    if (Z_Registration_Info_UScriptStruct_FStateTreeCompareFloatConditionInstanceData.OuterSingleton
        != (UScriptStruct *)0x0) goto LAB_14d4a606f;
  }
  else {
LAB_14d4a606f:
    iVar9 = (int)(Z_Registration_Info_UScriptStruct_FStateTreeCompareFloatConditionInstanceData.
                 OuterSingleton)->_padding_;
    if ((*(int *)(lVar1 + 0x38) < iVar9) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar9 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FStateTreeCompareFloatConditionInstanceData.
         OuterSingleton)->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_14d4a60b6;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Struct->IsChildOf(T::StaticStruct())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                     ,0x76,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
LAB_14d4a60b6:
  pdVar2 = *(double **)&(param_1->CurrentNodeInstanceData).field_0x8;
  bVar4 = UE::StateTree::Conditions::CompareNumbers<double>(*pdVar2,pdVar2[1],this->Operator);
  if (-1 < StateTreeDebugChannel->Enabled) {
    ::FString::PrintfImpl(&local_88,L"%f");
    pFVar7 = UE::StateTree::DescHelpers::GetOperatorText(&local_58,this->Operator,Text);
    FText::ToString(pFVar7);
    ::FString::PrintfImpl(&local_98,L"%f");
    pFVar7 = UE::StateTree::DescHelpers::GetInvertText(&local_68,this->bInvert,Text);
    FText::ToString(pFVar7);
    ::FString::PrintfImpl(&local_a8,L"%s%s %s %s");
    local_48.TraceDebuggerString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.TraceDebuggerString.Data.ArrayNum = 0;
    local_48.TraceDebuggerString.Data.ArrayMax = 0;
    iVar9 = local_a8.Data.ArrayNum + -1;
    if (local_a8.Data.ArrayNum == 0) {
      iVar9 = 0;
    }
    pFVar8 = (FNodeCustomDebugData *)
             ::FString::ConstructFromPtrSize
                       (&local_78,(wchar_t *)local_a8.Data.AllocatorInstance.Data,iVar9);
    if (&local_48 != pFVar8) {
      if (local_48.TraceDebuggerString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_48.TraceDebuggerString.Data.AllocatorInstance.Data);
      }
      local_48.TraceDebuggerString.Data.AllocatorInstance.Data =
           (pFVar8->TraceDebuggerString).Data.AllocatorInstance.Data;
      (pFVar8->TraceDebuggerString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.TraceDebuggerString.Data.ArrayNum = (pFVar8->TraceDebuggerString).Data.ArrayNum;
      local_48.TraceDebuggerString.Data.ArrayMax = (pFVar8->TraceDebuggerString).Data.ArrayMax;
      (pFVar8->TraceDebuggerString).Data.ArrayNum = 0;
      (pFVar8->TraceDebuggerString).Data.ArrayMax = 0;
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    local_48.MergePolicy = Override;
    FStateTreeReadOnlyExecutionContext::SetNodeCustomDebugTraceData
              ((FStateTreeReadOnlyExecutionContext *)param_1,&local_48);
    if (local_48.TraceDebuggerString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_48.TraceDebuggerString.Data.AllocatorInstance.Data);
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
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  return (bool)(bVar4 ^ this->bInvert);
}

