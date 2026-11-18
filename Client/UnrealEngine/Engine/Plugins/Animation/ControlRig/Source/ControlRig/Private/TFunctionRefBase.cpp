// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 1

// operator() @ 14a234080

void __thiscall
UE::Core::Private::Function::
TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(enum_EMessageSeverity::Type,FString_const_&)>
::operator()(void *this,Type param_1,FString *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  Type local_res10 [2];
  
  local_res10[0] = param_1;
  CheckCallable(*(void **)this);
  pcVar1 = *(code **)this;
  plVar3 = (longlong *)((longlong)this + 0x10);
  if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)this + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,local_res10,param_2);
  return;
}

