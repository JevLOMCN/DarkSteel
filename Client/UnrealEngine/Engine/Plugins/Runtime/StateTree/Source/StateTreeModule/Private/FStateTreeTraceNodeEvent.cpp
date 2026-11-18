// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 3

// GetTypeString @ 14d4c03b0

FString * __thiscall
FStateTreeTraceNodeEvent::GetTypeString
          (FStateTreeTraceNodeEvent *this,FString *__return_storage_ptr__,UStateTree *param_1)

{
  ushort uVar1;
  FConstStructView *pFVar2;
  bool bVar3;
  FName local_res8;
  FConstStructView local_18;
  
  bVar3 = false;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  uVar1 = (this->Index).Value;
  if (uVar1 == 0xffff) {
    pFVar2 = &local_18;
    local_18.ScriptStruct = (UScriptStruct *)0x0;
    local_18.StructMemory = (uchar *)0x0;
  }
  else {
    pFVar2 = UStateTree::GetNode(param_1,&local_18,(uint)uVar1);
  }
  if ((pFVar2->StructMemory != (uchar *)0x0) && (pFVar2->ScriptStruct != (UScriptStruct *)0x0)) {
    local_res8 = (FName)pFVar2->ScriptStruct->_padding_;
    ::FName::ToString(&local_res8,(FString *)&local_18);
    bVar3 = true;
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s");
  if ((bVar3) && (local_18.ScriptStruct != (UScriptStruct *)0x0)) {
    FMemory::Free(local_18.ScriptStruct);
  }
  return __return_storage_ptr__;
}

// GetValueString @ 14d4c0cd0

FString * __thiscall
FStateTreeTraceNodeEvent::GetValueString
          (FStateTreeTraceNodeEvent *this,FString *__return_storage_ptr__,UStateTree *param_1)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  bool bVar6;
  FConstStructView *pFVar7;
  FStateTreeNodeBase *pFVar8;
  FString *pFVar9;
  UPackage *pUVar10;
  UEnum *this_00;
  FString local_78;
  FText local_68;
  FConstStructView local_58;
  FConstStructView local_48;
  FString local_38;
  FConstStructView local_28;
  
  uVar1 = (this->Index).Value;
  if (uVar1 == 0xffff) {
    pFVar7 = &local_58;
    local_58.ScriptStruct = (UScriptStruct *)0x0;
    local_58.StructMemory = (uchar *)0x0;
  }
  else {
    pFVar7 = UStateTree::GetNode(param_1,&local_28,(uint)uVar1);
  }
  local_48.ScriptStruct = pFVar7->ScriptStruct;
  local_48.StructMemory = pFVar7->StructMemory;
  pFVar8 = FConstStructView::GetPtr<FStateTreeNodeBase_const_>(&local_48);
  if (pFVar8 == (FStateTreeNodeBase *)0x0) {
    ::FString::PrintfImpl(&local_78,L"%u");
    bVar4 = false;
    bVar3 = true;
  }
  else {
    pFVar9 = ::FName::ToString(&pFVar8->Name,&local_38);
    if ((pFVar9->Data).ArrayNum == 0) {
      bVar4 = true;
      bVar3 = false;
    }
    else {
      bVar4 = true;
      bVar3 = false;
    }
  }
  lVar5 = this->_padding_;
  this_00 = Z_Registration_Info_UEnum_EStateTreeTraceEventType.OuterSingleton;
  if (Z_Registration_Info_UEnum_EStateTreeTraceEventType.OuterSingleton == (UEnum *)0x0) {
    pUVar10 = Z_Construct_UPackage__Script_StateTreeModule();
    this_00 = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeTraceEventType,
                            (UObject *)pUVar10,L"EStateTreeTraceEventType");
    Z_Registration_Info_UEnum_EStateTreeTraceEventType.OuterSingleton = this_00;
    if ((this_00 == (UEnum *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumClass != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xd13,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FString *)(*pcVar2)();
      return pFVar9;
    }
  }
  UEnum::GetDisplayNameTextByValue(this_00,&local_68,(ulonglong)(byte)lVar5);
  FText::ToString(&local_68);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s \'%s\'");
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if ((bVar3) && (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ToFullString @ 14d4d1c20

FString * __thiscall
FStateTreeTraceNodeEvent::ToFullString
          (FStateTreeTraceNodeEvent *this,FString *__return_storage_ptr__,UStateTree *param_1)

{
  ushort uVar1;
  code *pcVar2;
  UScriptStruct *pUVar3;
  uchar *puVar4;
  bool bVar5;
  longlong lVar6;
  bool bVar7;
  FConstStructView *pFVar8;
  FStateTreeNodeBase *pFVar9;
  UPackage *pUVar10;
  UEnum *this_00;
  FString *pFVar11;
  bool bVar12;
  FName local_res8;
  FString local_a8;
  FString local_98;
  FText local_88;
  FConstStructView local_78;
  FConstStructView local_68;
  FString local_58;
  FConstStructView local_48 [2];
  
  bVar5 = false;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  uVar1 = (this->Index).Value;
  if (uVar1 == 0xffff) {
    pFVar8 = &local_78;
    local_78.ScriptStruct = (UScriptStruct *)0x0;
    local_78.StructMemory = (uchar *)0x0;
  }
  else {
    pFVar8 = UStateTree::GetNode(param_1,local_48,(uint)uVar1);
  }
  pUVar3 = pFVar8->ScriptStruct;
  puVar4 = pFVar8->StructMemory;
  local_68.ScriptStruct = pUVar3;
  local_68.StructMemory = puVar4;
  pFVar9 = FConstStructView::GetPtr<FStateTreeNodeBase_const_>(&local_68);
  if ((puVar4 != (uchar *)0x0) && (pUVar3 != (UScriptStruct *)0x0)) {
    local_res8 = (FName)pUVar3->_padding_;
    ::FName::ToString(&local_res8,&local_98);
    bVar5 = true;
  }
  bVar12 = pFVar9 == (FStateTreeNodeBase *)0x0;
  if (bVar12) {
    ::FString::PrintfImpl(&local_a8,L"%u");
  }
  else {
    ::FName::ToString(&pFVar9->Name,&local_58);
  }
  lVar6 = this->_padding_;
  this_00 = Z_Registration_Info_UEnum_EStateTreeTraceEventType.OuterSingleton;
  if (Z_Registration_Info_UEnum_EStateTreeTraceEventType.OuterSingleton == (UEnum *)0x0) {
    pUVar10 = Z_Construct_UPackage__Script_StateTreeModule();
    this_00 = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeTraceEventType,
                            (UObject *)pUVar10,L"EStateTreeTraceEventType");
    Z_Registration_Info_UEnum_EStateTreeTraceEventType.OuterSingleton = this_00;
    if ((this_00 == (UEnum *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumClass != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xd13,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      pFVar11 = (FString *)(*pcVar2)();
      return pFVar11;
    }
  }
  UEnum::GetDisplayNameTextByValue(this_00,&local_88,(ulonglong)(byte)lVar6);
  FText::ToString(&local_88);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s \'%s (%s)\'");
  if (local_88.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
  }
  if ((bVar12) && (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if ((!bVar12) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((bVar5) && (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

