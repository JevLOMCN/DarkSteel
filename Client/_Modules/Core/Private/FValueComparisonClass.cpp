// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// operator() @ 1419d66b0

bool __thiscall
TSortableMapBase<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
::FValueComparisonClass<FStatCallCountComparer<FRawStatStackNode>_>::operator()
          (FValueComparisonClass<FStatCallCountComparer<FRawStatStackNode>_> *this,
          TTuple<FName,FRawStatStackNode_*> *param_1,TTuple<FName,FRawStatStackNode_*> *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  FName local_res8;
  FName local_res10 [3];
  
  puVar1 = *(undefined8 **)&param_1->field_0x8;
  uVar4 = (uint)((ulonglong)**(undefined8 **)&param_2->field_0x8 >> 0x20);
  uVar3 = (uint)((ulonglong)*puVar1 >> 0x20);
  if (uVar3 == uVar4) {
    local_res10[0].ComparisonIndex.Value = *(uint *)(puVar1 + 1);
    local_res10[0].Number = *(uint *)((longlong)puVar1 + 0xc) & 0x1ff;
    local_res8 = (FName)((*(undefined8 **)&param_2->field_0x8)[1] & 0x1ffffffffff);
    iVar2 = ::FName::Compare(local_res10,&local_res8);
    return SUB41((uint)iVar2 >> 0x1f,0);
  }
  return uVar4 < uVar3;
}

