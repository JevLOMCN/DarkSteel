// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FindIndex @ 1476a8f40

int __thiscall
TScriptSparseSet<FDefaultSetAllocator>::FindIndex
          (TScriptSparseSet<FDefaultSetAllocator> *this,void *param_1,
          FScriptSparseSetLayout *param_2,TFunctionRef<unsigned_int___cdecl(void_const_*)> *param_3,
          TFunctionRef<bool___cdecl(void_const_*,void_const_*)> *param_4)

{
  uint uVar1;
  int iVar2;
  void *local_res8;
  TFunctionRef<bool___cdecl(void_const_*,void_const_*)> local_18;
  
  if ((this->Elements).Data.ArrayNum != (this->Elements).NumFreeIndices) {
    local_18._0_8_ = *(undefined8 *)param_4;
    local_18._8_8_ = *(undefined8 *)&param_4->field_0x8;
    local_res8 = param_1;
    uVar1 = (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,&local_res8);
    iVar2 = FindIndexImpl(this,param_1,param_2,uVar1,&local_18);
    return iVar2;
  }
  return -1;
}

