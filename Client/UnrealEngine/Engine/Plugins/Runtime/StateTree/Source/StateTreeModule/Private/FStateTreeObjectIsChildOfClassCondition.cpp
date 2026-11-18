// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 3

// StaticStruct @ 14d49f010

UScriptStruct * __cdecl FStateTreeObjectIsChildOfClassCondition::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeObjectIsChildOfClassCondition.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeObjectIsChildOfClassCondition.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeObjectIsChildOfClassCondition,
                         (UObject *)pUVar1,L"StateTreeObjectIsChildOfClassCondition");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeObjectIsChildOfClassCondition.OuterSingleton;
}

// GetInstanceDataType @ 14d49f050

UStruct * __thiscall
FStateTreeObjectIsChildOfClassCondition::GetInstanceDataType
          (FStateTreeObjectIsChildOfClassCondition *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeObjectIsChildOfClassConditionInstanceData.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeObjectIsChildOfClassConditionInstanceData.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeObjectIsChildOfClassConditionInstanceData
                         ,(UObject *)pUVar1,L"StateTreeObjectIsChildOfClassConditionInstanceData");
  }
  return (UStruct *)
         Z_Registration_Info_UScriptStruct_FStateTreeObjectIsChildOfClassConditionInstanceData.
         OuterSingleton;
}

// TestCondition @ 14d49f090

bool __thiscall
FStateTreeObjectIsChildOfClassCondition::TestCondition
          (FStateTreeObjectIsChildOfClassCondition *this,FStateTreeExecutionContext *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  UPackage *pUVar7;
  FNodeCustomDebugData *pFVar8;
  byte bVar9;
  int iVar10;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
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
  lVar1 = *(longlong *)&param_1->CurrentNodeInstanceData;
  if (Z_Registration_Info_UScriptStruct_FStateTreeObjectIsChildOfClassConditionInstanceData.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar7 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeObjectIsChildOfClassConditionInstanceData.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeObjectIsChildOfClassConditionInstanceData
                         ,(UObject *)pUVar7,L"StateTreeObjectIsChildOfClassConditionInstanceData");
    if (Z_Registration_Info_UScriptStruct_FStateTreeObjectIsChildOfClassConditionInstanceData.
        OuterSingleton != (UScriptStruct *)0x0) goto LAB_14d49f18c;
LAB_14d49f1b0:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Struct->IsChildOf(T::StaticStruct())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                       ,0x76,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  else {
LAB_14d49f18c:
    iVar10 = (int)(
                  Z_Registration_Info_UScriptStruct_FStateTreeObjectIsChildOfClassConditionInstanceData
                  .OuterSingleton)->_padding_;
    if ((*(int *)(lVar1 + 0x38) < iVar10) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar10 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FStateTreeObjectIsChildOfClassConditionInstanceData.
         OuterSingleton)->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_14d49f1b0;
  }
  plVar2 = *(longlong **)&(param_1->CurrentNodeInstanceData).field_0x8;
  if ((*plVar2 != 0) && (lVar1 = plVar2[1], lVar1 != 0)) {
    lVar3 = *(longlong *)(*plVar2 + 0x10);
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      bVar9 = 1;
      goto LAB_14d49f20d;
    }
  }
  bVar9 = 0;
LAB_14d49f20d:
  if (-1 < StateTreeDebugChannel->Enabled) {
    if (plVar2[1] == 0) {
      ::FString::FString(&local_88,L"None");
    }
    else {
      local_res8 = *(FName *)(plVar2[1] + 0x18);
      ::FName::ToString(&local_res8,&local_88);
    }
    local_res8 = (FName)0x152b2c818;
    if (bVar9 != 0) {
      local_res8 = (FName)0x15060d16c;
    }
    if ((*plVar2 == 0) || (lVar1 = *(longlong *)(*plVar2 + 0x10), lVar1 == 0)) {
      ::FString::FString(&local_98,L"None");
    }
    else {
      local_res10 = *(FName *)(lVar1 + 0x18);
      ::FName::ToString(&local_res10,&local_98);
    }
    if (*plVar2 == 0) {
      ::FString::FString(&local_a8,L"None");
    }
    else {
      local_res18 = *(FName *)(*plVar2 + 0x18);
      ::FName::ToString(&local_res18,&local_a8);
    }
    ::FString::PrintfImpl(&local_78,L"%s of type \'%s\' is%s child of \'%s\'");
    local_58.TraceDebuggerString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.TraceDebuggerString.Data.ArrayNum = 0;
    local_58.TraceDebuggerString.Data.ArrayMax = 0;
    iVar10 = local_78.Data.ArrayNum + -1;
    if (local_78.Data.ArrayNum == 0) {
      iVar10 = 0;
    }
    pFVar8 = (FNodeCustomDebugData *)
             ::FString::ConstructFromPtrSize
                       (&local_68,(wchar_t *)local_78.Data.AllocatorInstance.Data,iVar10);
    if (&local_58 != pFVar8) {
      if (local_58.TraceDebuggerString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_58.TraceDebuggerString.Data.AllocatorInstance.Data);
      }
      local_58.TraceDebuggerString.Data.AllocatorInstance.Data =
           (pFVar8->TraceDebuggerString).Data.AllocatorInstance.Data;
      (pFVar8->TraceDebuggerString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.TraceDebuggerString.Data.ArrayNum = (pFVar8->TraceDebuggerString).Data.ArrayNum;
      local_58.TraceDebuggerString.Data.ArrayMax = (pFVar8->TraceDebuggerString).Data.ArrayMax;
      (pFVar8->TraceDebuggerString).Data.ArrayNum = 0;
      (pFVar8->TraceDebuggerString).Data.ArrayMax = 0;
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    local_58.MergePolicy = Override;
    FStateTreeReadOnlyExecutionContext::SetNodeCustomDebugTraceData
              ((FStateTreeReadOnlyExecutionContext *)param_1,&local_58);
    if (local_58.TraceDebuggerString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_58.TraceDebuggerString.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  return (bool)(bVar9 ^ this->bInvert);
}

