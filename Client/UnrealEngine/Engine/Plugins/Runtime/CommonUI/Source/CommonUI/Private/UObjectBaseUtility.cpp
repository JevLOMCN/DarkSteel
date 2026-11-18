// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 1

// IsA<TSubclassOf<UWidget>_> @ 14a7a20f0

bool __thiscall
UObjectBaseUtility::IsA<TSubclassOf<UWidget>_>
          (UObjectBaseUtility *this,TSubclassOf<UWidget> param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 != 0) {
    pUVar3 = Z_Construct_UClass_UWidget_NoRegister();
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
        goto LAB_14a7a2142;
      }
    }
  }
  lVar4 = 0;
LAB_14a7a2142:
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)&this->field_0x10 + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)&this->field_0x10 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
      == lVar4 + 0x30)) {
    return true;
  }
  return false;
}

