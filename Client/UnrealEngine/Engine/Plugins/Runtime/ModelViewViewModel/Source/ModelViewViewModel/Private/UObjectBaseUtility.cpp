// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelViewViewModel
// Functions: 1

// IsA<TSubclassOf<UMVVMViewModelBase>_> @ 14a73e840

bool __thiscall
UObjectBaseUtility::IsA<TSubclassOf<UMVVMViewModelBase>_>
          (UObjectBaseUtility *this,TSubclassOf<UMVVMViewModelBase> param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 != 0) {
    pUVar3 = UMVVMViewModelBase::StaticClass();
    if (pUVar3 != (UClass *)0x0) {
      iVar1 = (int)pUVar3->_padding_;
      if ((*(int *)(lVar4 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        lVar4 = *(longlong *)param_1.Class.field0_0x0;
        goto LAB_14a73e892;
      }
    }
  }
  lVar4 = 0;
LAB_14a73e892:
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)&this->field_0x10 + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)&this->field_0x10 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
      == lVar4 + 0x30)) {
    return true;
  }
  return false;
}

