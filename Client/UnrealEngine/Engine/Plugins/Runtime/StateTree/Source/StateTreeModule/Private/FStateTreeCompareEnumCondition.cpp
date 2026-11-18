// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 3

// StaticStruct @ 14d4a7220

UScriptStruct * __cdecl FStateTreeCompareEnumCondition::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeCompareEnumCondition.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeCompareEnumCondition.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeCompareEnumCondition,(UObject *)pUVar1,
                         L"StateTreeCompareEnumCondition");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeCompareEnumCondition.OuterSingleton;
}

// GetInstanceDataType @ 14d4a7260

UStruct * __thiscall
FStateTreeCompareEnumCondition::GetInstanceDataType(FStateTreeCompareEnumCondition *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeCompareEnumConditionInstanceData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeCompareEnumConditionInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeCompareEnumConditionInstanceData,
                         (UObject *)pUVar1,L"StateTreeCompareEnumConditionInstanceData");
  }
  return (UStruct *)
         Z_Registration_Info_UScriptStruct_FStateTreeCompareEnumConditionInstanceData.OuterSingleton
  ;
}

// TestCondition @ 14d4a72e0

bool __thiscall
FStateTreeCompareEnumCondition::TestCondition
          (FStateTreeCompareEnumCondition *this,FStateTreeExecutionContext *param_1)

{
  longlong lVar1;
  uint *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UPackage *pUVar6;
  FText *this_00;
  FNodeCustomDebugData *pFVar7;
  int iVar8;
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
  if (Z_Registration_Info_UScriptStruct_FStateTreeCompareEnumConditionInstanceData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeCompareEnumConditionInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeCompareEnumConditionInstanceData,
                         (UObject *)pUVar6,L"StateTreeCompareEnumConditionInstanceData");
    if (Z_Registration_Info_UScriptStruct_FStateTreeCompareEnumConditionInstanceData.OuterSingleton
        != (UScriptStruct *)0x0) goto LAB_14d4a73db;
  }
  else {
LAB_14d4a73db:
    iVar8 = (int)(Z_Registration_Info_UScriptStruct_FStateTreeCompareEnumConditionInstanceData.
                 OuterSingleton)->_padding_;
    if ((*(int *)(lVar1 + 0x38) < iVar8) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar8 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FStateTreeCompareEnumConditionInstanceData.
         OuterSingleton)->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_14d4a7421;
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
LAB_14d4a7421:
  puVar2 = *(uint **)&(param_1->CurrentNodeInstanceData).field_0x8;
  if (-1 < StateTreeDebugChannel->Enabled) {
    UEnum::GetNameStringByValue(*(UEnum **)(puVar2 + 6),&local_48,(ulonglong)puVar2[4]);
    UEnum::GetNameStringByValue(*(UEnum **)(puVar2 + 2),&local_58,(ulonglong)*puVar2);
    this_00 = UE::StateTree::DescHelpers::GetInvertText(&local_68,this->bInvert,Text);
    FText::ToString(this_00);
    ::FString::PrintfImpl(&local_88,L"%s%s is %s");
    local_38.TraceDebuggerString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.TraceDebuggerString.Data.ArrayNum = 0;
    local_38.TraceDebuggerString.Data.ArrayMax = 0;
    iVar8 = local_88.Data.ArrayNum + -1;
    if (local_88.Data.ArrayNum == 0) {
      iVar8 = 0;
    }
    pFVar7 = (FNodeCustomDebugData *)
             ::FString::ConstructFromPtrSize
                       (&local_78,(wchar_t *)local_88.Data.AllocatorInstance.Data,iVar8);
    if (&local_38 != pFVar7) {
      if (local_38.TraceDebuggerString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_38.TraceDebuggerString.Data.AllocatorInstance.Data);
      }
      local_38.TraceDebuggerString.Data.AllocatorInstance.Data =
           (pFVar7->TraceDebuggerString).Data.AllocatorInstance.Data;
      (pFVar7->TraceDebuggerString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.TraceDebuggerString.Data.ArrayNum = (pFVar7->TraceDebuggerString).Data.ArrayNum;
      local_38.TraceDebuggerString.Data.ArrayMax = (pFVar7->TraceDebuggerString).Data.ArrayMax;
      (pFVar7->TraceDebuggerString).Data.ArrayNum = 0;
      (pFVar7->TraceDebuggerString).Data.ArrayMax = 0;
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
  if ((*puVar2 == puVar2[4]) && (*(longlong *)(puVar2 + 2) == *(longlong *)(puVar2 + 6))) {
    return (bool)(this->bInvert ^ 1);
  }
  return this->bInvert;
}

