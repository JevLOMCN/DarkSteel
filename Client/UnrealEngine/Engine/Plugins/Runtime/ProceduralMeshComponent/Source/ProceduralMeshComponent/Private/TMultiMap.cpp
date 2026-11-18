// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralMeshComponent
// Functions: 1

// EmplaceUnique<int_const_&,int_const_&> @ 14d2636d0

int * __thiscall
TMultiMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,1>_>::
EmplaceUnique<int_const_&,int_const_&>
          (TMultiMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,1>_> *this,
          int *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 *puVar6;
  int local_res8;
  int *local_18;
  int *local_10;
  
  iVar1 = *param_1;
  if (*(int *)&this->field_0x48 != 0) {
    puVar6 = *(undefined1 **)&this->field_0x40;
    if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
      puVar6 = &this->field_0x38;
    }
    iVar3 = *(int *)(puVar6 + ((longlong)*(int *)&this->field_0x48 - 1U & (longlong)iVar1) * 4);
    iVar4 = iVar3;
    if (iVar3 != -1) {
      do {
        iVar3 = *(int *)(*(longlong *)this + 8 + (longlong)iVar4 * 0x10);
        if (*(int *)(*(longlong *)this + (longlong)iVar4 * 0x10) == iVar1) break;
        iVar4 = iVar3;
      } while (iVar3 != -1);
    }
    if (iVar4 != -1) {
      lVar2 = *(longlong *)this;
      while (piVar5 = (int *)((longlong)iVar4 * 0x10 + 4 + lVar2), *piVar5 != *param_2) {
        do {
          iVar4 = iVar3;
          if (iVar4 == -1) goto LAB_14d263788;
          iVar3 = *(int *)(lVar2 + 8 + (longlong)iVar4 * 0x10);
        } while (*(int *)(lVar2 + (longlong)iVar4 * 0x10) != iVar1);
      }
      if (piVar5 != (int *)0x0) {
        return piVar5;
      }
    }
  }
LAB_14d263788:
  local_18 = param_1;
  local_10 = param_2;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_const_&,int_const_&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> *)
             this,(TPairInitializer<int_const_&,int_const_&> *)&local_res8,(bool *)&local_18);
  return (int *)(*(longlong *)this + (longlong)local_res8 * 0x10 + 4);
}

