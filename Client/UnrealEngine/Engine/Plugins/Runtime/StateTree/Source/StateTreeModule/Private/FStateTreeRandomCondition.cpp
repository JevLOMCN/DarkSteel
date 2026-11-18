// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 3

// StaticStruct @ 14d4a8370

UScriptStruct * __cdecl FStateTreeRandomCondition::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeRandomCondition.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeRandomCondition.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeRandomCondition,(UObject *)pUVar1,
                         L"StateTreeRandomCondition");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeRandomCondition.OuterSingleton;
}

// GetInstanceDataType @ 14d4a83b0

UStruct * __thiscall FStateTreeRandomCondition::GetInstanceDataType(FStateTreeRandomCondition *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeRandomConditionInstanceData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeRandomConditionInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeRandomConditionInstanceData,
                         (UObject *)pUVar1,L"StateTreeRandomConditionInstanceData");
  }
  return (UStruct *)
         Z_Registration_Info_UScriptStruct_FStateTreeRandomConditionInstanceData.OuterSingleton;
}

// TestCondition @ 14d4a83f0

bool __thiscall
FStateTreeRandomCondition::TestCondition
          (FStateTreeRandomCondition *this,FStateTreeExecutionContext *param_1)

{
  longlong lVar1;
  float *pfVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  UPackage *pUVar7;
  FNodeCustomDebugData *pFVar8;
  int iVar9;
  float fVar10;
  FString local_68;
  FString local_58;
  FString local_48;
  FNodeCustomDebugData local_38 [2];
  
  if (((((param_1->CurrentNodeDataHandle).Source != this->field_0x18) ||
       ((param_1->CurrentNodeDataHandle).Index != *(ushort *)&this->field_0x1a)) ||
      ((param_1->CurrentNodeDataHandle).StateHandle.Index != *(ushort *)&this->field_0x1c)) &&
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
  if (Z_Registration_Info_UScriptStruct_FStateTreeRandomConditionInstanceData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar7 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeRandomConditionInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeRandomConditionInstanceData,
                         (UObject *)pUVar7,L"StateTreeRandomConditionInstanceData");
    if (Z_Registration_Info_UScriptStruct_FStateTreeRandomConditionInstanceData.OuterSingleton !=
        (UScriptStruct *)0x0) goto LAB_14d4a84eb;
  }
  else {
LAB_14d4a84eb:
    iVar9 = (int)(Z_Registration_Info_UScriptStruct_FStateTreeRandomConditionInstanceData.
                 OuterSingleton)->_padding_;
    if ((*(int *)(lVar1 + 0x38) < iVar9) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar9 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FStateTreeRandomConditionInstanceData.OuterSingleton)->
         _padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_14d4a8531;
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
LAB_14d4a8531:
  pfVar2 = *(float **)&(param_1->CurrentNodeInstanceData).field_0x8;
  uVar6 = rand();
  fVar10 = (float)(uVar6 & 0x7fff) * __real_38000100;
  if (-1 < StateTreeDebugChannel->Enabled) {
    ::FString::PrintfImpl(&local_58,L"%f");
    ::FString::PrintfImpl(&local_68,L"Random value %f < %s");
    local_38[0].TraceDebuggerString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38[0].TraceDebuggerString.Data.ArrayNum = 0;
    local_38[0].TraceDebuggerString.Data.ArrayMax = 0;
    iVar9 = local_68.Data.ArrayNum + -1;
    if (local_68.Data.ArrayNum == 0) {
      iVar9 = 0;
    }
    pFVar8 = (FNodeCustomDebugData *)
             ::FString::ConstructFromPtrSize
                       (&local_48,(wchar_t *)local_68.Data.AllocatorInstance.Data,iVar9);
    if (local_38 != pFVar8) {
      if (local_38[0].TraceDebuggerString.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38[0].TraceDebuggerString.Data.AllocatorInstance.Data);
      }
      local_38[0].TraceDebuggerString.Data.AllocatorInstance.Data =
           (pFVar8->TraceDebuggerString).Data.AllocatorInstance.Data;
      (pFVar8->TraceDebuggerString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38[0].TraceDebuggerString.Data.ArrayNum = (pFVar8->TraceDebuggerString).Data.ArrayNum;
      local_38[0].TraceDebuggerString.Data.ArrayMax = (pFVar8->TraceDebuggerString).Data.ArrayMax;
      (pFVar8->TraceDebuggerString).Data.ArrayNum = 0;
      (pFVar8->TraceDebuggerString).Data.ArrayMax = 0;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    local_38[0].MergePolicy = Override;
    FStateTreeReadOnlyExecutionContext::SetNodeCustomDebugTraceData
              ((FStateTreeReadOnlyExecutionContext *)param_1,local_38);
    if (local_38[0].TraceDebuggerString.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].TraceDebuggerString.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  return fVar10 < *pfVar2;
}

