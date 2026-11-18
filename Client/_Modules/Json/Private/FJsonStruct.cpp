// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Json
// Functions: 1

// Serialize @ 141de2480

void __thiscall
`FJsonSerializerMacrosTest::TestBody'::__l2::FJsonStruct::Serialize
          (void *this,FJsonSerializerBase *param_1,bool param_2)

{
  wchar_t *local_18;
  undefined4 uStack_10;
  
  if (!param_2) {
    (**(code **)((longlong)*param_1 + 0x18))(param_1);
  }
  local_18 = L"var_int";
  uStack_10 = 7;
  (**(code **)((longlong)*param_1 + 0x90))(param_1,&local_18,(longlong)this + 8);
  (**(code **)(*(longlong *)((longlong)this + 0x10) + 0x50))((longlong)this + 0x10,param_1,1);
  if (!param_2) {
    (**(code **)((longlong)*param_1 + 0x20))(param_1);
  }
  return;
}

