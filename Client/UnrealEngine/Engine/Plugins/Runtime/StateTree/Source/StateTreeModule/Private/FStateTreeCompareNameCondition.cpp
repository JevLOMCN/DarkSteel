// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 3

// StaticStruct @ 14d4a7f10

UScriptStruct * __cdecl FStateTreeCompareNameCondition::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeCompareNameCondition.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeCompareNameCondition.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeCompareNameCondition,(UObject *)pUVar1,
                         L"StateTreeCompareNameCondition");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeCompareNameCondition.OuterSingleton;
}

// GetInstanceDataType @ 14d4a7f50

UStruct * __thiscall
FStateTreeCompareNameCondition::GetInstanceDataType(FStateTreeCompareNameCondition *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeCompareNameConditionInstanceData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeCompareNameConditionInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeCompareNameConditionInstanceData,
                         (UObject *)pUVar1,L"StateTreeCompareNameConditionInstanceData");
  }
  return (UStruct *)
         Z_Registration_Info_UScriptStruct_FStateTreeCompareNameConditionInstanceData.OuterSingleton
  ;
}

// TestCondition @ 14d4a7f90

bool __thiscall
FStateTreeCompareNameCondition::TestCondition
          (FStateTreeCompareNameCondition *this,FStateTreeExecutionContext *param_1)

{
  longlong lVar1;
  FName *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UPackage *pUVar5;
  FText *this_01;
  FNodeCustomDebugData *pFVar6;
  int iVar7;
  FString local_88;
  FString local_78;
  FText local_68;
  FString local_58;
  FString local_48;
  FNodeCustomDebugData local_38;
  
  if (((((param_1->CurrentNodeDataHandle).Source != (EStateTreeDataSourceType)this->_padding_) ||
       ((param_1->CurrentNodeDataHandle).Index != *(ushort *)((longlong)&this->_padding_ + 2))) ||
      ((param_1->CurrentNodeDataHandle).StateHandle.Index !=
       *(ushort *)((longlong)&this->_padding_ + 4))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentNodeDataHandle == Node.InstanceDataHandle",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Public\\StateTreeExecutionContext.h"
                         ,0x2b7,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((*(longlong *)&(param_1->CurrentNodeInstanceData).field_0x8 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Memory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                         ,0x74,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((*(longlong *)&param_1->CurrentNodeInstanceData == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Struct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                         ,0x75,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  lVar1 = *(longlong *)&param_1->CurrentNodeInstanceData;
  if (Z_Registration_Info_UScriptStruct_FStateTreeCompareNameConditionInstanceData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeCompareNameConditionInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeCompareNameConditionInstanceData,
                         (UObject *)pUVar5,L"StateTreeCompareNameConditionInstanceData");
    if (Z_Registration_Info_UScriptStruct_FStateTreeCompareNameConditionInstanceData.OuterSingleton
        != (UScriptStruct *)0x0) goto LAB_14d4a808b;
  }
  else {
LAB_14d4a808b:
    iVar7 = (int)(Z_Registration_Info_UScriptStruct_FStateTreeCompareNameConditionInstanceData.
                 OuterSingleton)->_padding_;
    if ((*(int *)(lVar1 + 0x38) < iVar7) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar7 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FStateTreeCompareNameConditionInstanceData.
         OuterSingleton)->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_14d4a80d1;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Struct->IsChildOf(T::StaticStruct())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                     ,0x76,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
LAB_14d4a80d1:
  this_00 = *(FName **)&(param_1->CurrentNodeInstanceData).field_0x8;
  if (-1 < StateTreeDebugChannel->Enabled) {
    ::FName::ToString(this_00 + 1,&local_48);
    ::FName::ToString(this_00,&local_58);
    this_01 = UE::StateTree::DescHelpers::GetInvertText(&local_68,this->bInvert,Text);
    FText::ToString(this_01);
    ::FString::PrintfImpl(&local_88,L"%s%s is %s");
    local_38.TraceDebuggerString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.TraceDebuggerString.Data.ArrayNum = 0;
    local_38.TraceDebuggerString.Data.ArrayMax = 0;
    iVar7 = local_88.Data.ArrayNum + -1;
    if (local_88.Data.ArrayNum == 0) {
      iVar7 = 0;
    }
    pFVar6 = (FNodeCustomDebugData *)
             ::FString::ConstructFromPtrSize
                       (&local_78,(wchar_t *)local_88.Data.AllocatorInstance.Data,iVar7);
    if (&local_38 != pFVar6) {
      if (local_38.TraceDebuggerString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_38.TraceDebuggerString.Data.AllocatorInstance.Data);
      }
      local_38.TraceDebuggerString.Data.AllocatorInstance.Data =
           (pFVar6->TraceDebuggerString).Data.AllocatorInstance.Data;
      (pFVar6->TraceDebuggerString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.TraceDebuggerString.Data.ArrayNum = (pFVar6->TraceDebuggerString).Data.ArrayNum;
      local_38.TraceDebuggerString.Data.ArrayMax = (pFVar6->TraceDebuggerString).Data.ArrayMax;
      (pFVar6->TraceDebuggerString).Data.ArrayNum = 0;
      (pFVar6->TraceDebuggerString).Data.ArrayMax = 0;
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    local_38.MergePolicy = Override;
    FStateTreeReadOnlyExecutionContext::SetNodeCustomDebugTraceData
              ((FStateTreeReadOnlyExecutionContext *)param_1,&local_38);
    if (local_38.TraceDebuggerString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_38.TraceDebuggerString.Data.AllocatorInstance.Data);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (((this_00->ComparisonIndex).Value == this_00[1].ComparisonIndex.Value) &&
     (this_00->Number == this_00[1].Number)) {
    return (bool)(this->bInvert ^ 1);
  }
  return this->bInvert;
}

