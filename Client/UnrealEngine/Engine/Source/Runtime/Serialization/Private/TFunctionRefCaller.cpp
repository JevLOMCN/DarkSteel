// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Serialization
// Functions: 1

// Call @ 148ba29f0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<bool_(__cdecl*)(FProperty_const_*,FProperty_const_*),bool,FProperty_const_*,FProperty_const_*>
::Call(void *param_1,FProperty **param_2,FProperty **param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000148ba29fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)param_1)(*param_2,*param_3);
  return (bool)uVar1;
}

