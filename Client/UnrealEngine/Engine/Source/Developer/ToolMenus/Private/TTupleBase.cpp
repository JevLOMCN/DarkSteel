// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolMenus
// Functions: 1

// ApplyAfter<void_(__cdecl*const_&)(FToolMenuStringCommand,FName,FToolMenuContext)> @ 142c30f80

void __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,FToolMenuStringCommand,FName,FToolMenuContext>::
ApplyAfter<void_(__cdecl*const_&)(FToolMenuStringCommand,FName,FToolMenuContext)>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,FToolMenuStringCommand,FName,FToolMenuContext>
           *this,_func___cdecl_void_FToolMenuStringCommand_FName_FToolMenuContext **param_1)

{
  _func___cdecl_void_FToolMenuStringCommand_FName_FToolMenuContext *p_Var1;
  FName FVar2;
  FToolMenuContext *pFVar3;
  FToolMenuStringCommand local_98;
  FToolMenuContext local_78;
  
  p_Var1 = *param_1;
  pFVar3 = FToolMenuContext::FToolMenuContext(&local_78,(FToolMenuContext *)&this->field_0x28);
  local_98.Type = *(EToolMenuStringCommandType *)this;
  FVar2.ComparisonIndex.Value = *(uint *)&this->field_0x20;
  FVar2.Number = *(uint *)&this->field_0x24;
  local_98.CustomType.ComparisonIndex.Value = *(uint *)&this->field_0x4;
  local_98.CustomType.Number = *(uint *)&this->field_0x8;
  ::FString::FString(&local_98.String,(FString *)&this->field_0x10);
  (*p_Var1)(&local_98,FVar2,pFVar3);
  return;
}

