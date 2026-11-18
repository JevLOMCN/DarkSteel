// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 3

// GetTypeString @ 14d4c05b0

FString * __thiscall
FStateTreeTraceTaskEvent::GetTypeString
          (FStateTreeTraceTaskEvent *this,FString *__return_storage_ptr__,UStateTree *param_1)

{
  FStateTreeTraceNodeEvent::GetTypeString
            ((FStateTreeTraceNodeEvent *)this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetValueString @ 14d4c1700

FString * __thiscall
FStateTreeTraceTaskEvent::GetValueString
          (FStateTreeTraceTaskEvent *this,FString *__return_storage_ptr__,UStateTree *param_1)

{
  ushort uVar1;
  FConstStructView *pFVar2;
  FStateTreeNodeBase *pFVar3;
  FConstStructView local_28;
  FConstStructView local_18;
  
  uVar1 = (ushort)this->_padding_;
  if (uVar1 == 0xffff) {
    pFVar2 = &local_28;
    local_28.ScriptStruct = (UScriptStruct *)0x0;
    local_28.StructMemory = (uchar *)0x0;
  }
  else {
    pFVar2 = UStateTree::GetNode(param_1,&local_18,(uint)uVar1);
  }
  local_28.ScriptStruct = pFVar2->ScriptStruct;
  local_28.StructMemory = pFVar2->StructMemory;
  pFVar3 = FConstStructView::GetPtr<FStateTreeNodeBase_const_>(&local_28);
  if (pFVar3 == (FStateTreeNodeBase *)0x0) {
    ::FString::PrintfImpl((FString *)&local_28,L"%u");
    ::FString::PrintfImpl(__return_storage_ptr__,L"%s");
    local_18.ScriptStruct = local_28.ScriptStruct;
  }
  else {
    ::FName::ToString(&pFVar3->Name,(FString *)&local_18);
    ::FString::PrintfImpl(__return_storage_ptr__,L"%s");
  }
  if (local_18.ScriptStruct != (UScriptStruct *)0x0) {
    FMemory::Free(local_18.ScriptStruct);
  }
  return __return_storage_ptr__;
}

// ToFullString @ 14d4d21e0

FString * __thiscall
FStateTreeTraceTaskEvent::ToFullString
          (FStateTreeTraceTaskEvent *this,FString *__return_storage_ptr__,UStateTree *param_1)

{
  EStateTreeRunStatus EVar1;
  code *pcVar2;
  bool bVar3;
  UEnum *this_00;
  FString *pFVar4;
  FText local_38;
  FString local_28;
  
  EVar1 = this->Status;
  this_00 = StaticEnum<enum_EStateTreeRunStatus>();
  if ((this_00 == (UEnum *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("EnumClass != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0xd13,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar2)();
    return pFVar4;
  }
  UEnum::GetDisplayNameTextByValue(this_00,&local_38,(ulonglong)EVar1);
  FText::ToString(&local_38);
  FStateTreeTraceNodeEvent::ToFullString((FStateTreeTraceNodeEvent *)this,&local_28,param_1);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s -> %s");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

