// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 3

// GetTypeString @ 14d4c0330

FString * __thiscall
FStateTreeTraceEvaluatorEvent::GetTypeString
          (FStateTreeTraceEvaluatorEvent *this,FString *__return_storage_ptr__,UStateTree *param_1)

{
  FStateTreeTraceNodeEvent::GetTypeString
            ((FStateTreeTraceNodeEvent *)this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetValueString @ 14d4c0b30

FString * __thiscall
FStateTreeTraceEvaluatorEvent::GetValueString
          (FStateTreeTraceEvaluatorEvent *this,FString *__return_storage_ptr__,UStateTree *param_1)

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

// ToFullString @ 14d4d1a80

FString * __thiscall
FStateTreeTraceEvaluatorEvent::ToFullString
          (FStateTreeTraceEvaluatorEvent *this,FString *__return_storage_ptr__,UStateTree *param_1)

{
  FStateTreeTraceNodeEvent::ToFullString
            ((FStateTreeTraceNodeEvent *)this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

