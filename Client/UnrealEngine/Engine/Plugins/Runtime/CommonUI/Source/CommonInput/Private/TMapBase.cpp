// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonInput
// Functions: 1

// FindOrAddImpl<FName_const_&> @ 14a76f400

ECommonInputType * __thiscall
TMapBase<FName,enum_ECommonInputType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_ECommonInputType,0>_>
::FindOrAddImpl<FName_const_&>(void *this,uint param_1,FName *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [6];
  FName *local_res20;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar2 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar2 = (longlong)this + 0x38;
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *(longlong *)this + (longlong)iVar1 * 0x14;
        if (*(FName *)(*(longlong *)this + (longlong)iVar1 * 0x14) == *param_2) {
          if (lVar2 != 0) goto LAB_14a76f492;
          break;
        }
        iVar1 = *(int *)(lVar2 + 0xc);
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,enum_ECommonInputType>,TDefaultMapHashableKeyFuncs<FName,enum_ECommonInputType,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (this,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar2 = *(longlong *)this + (longlong)local_res8[0] * 0x14;
LAB_14a76f492:
  return (ECommonInputType *)(lVar2 + 8);
}

