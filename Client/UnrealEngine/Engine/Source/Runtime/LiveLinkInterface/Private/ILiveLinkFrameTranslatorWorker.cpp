// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkInterface
// Functions: 1

// CanTranslate @ 14cfb7cd0

bool __thiscall
ILiveLinkFrameTranslatorWorker::CanTranslate
          (ILiveLinkFrameTranslatorWorker *this,TSubclassOf<ULiveLinkRole> param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  longlong lVar5;
  longlong local_res8;
  
  (**(code **)((longlong)*this + 8))(this,&local_res8);
  lVar5 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar5 == 0) {
    return false;
  }
  pUVar4 = ULiveLinkRole::StaticClass();
  lVar2 = local_res8;
  if (pUVar4 == (UClass *)0x0) {
    return false;
  }
  iVar1 = (int)pUVar4->_padding_;
  if ((*(int *)(lVar5 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar4->_padding_)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return false;
  }
  if (*(longlong *)param_1.Class.field0_0x0 == 0) {
    return false;
  }
  if (local_res8 == 0) {
    return false;
  }
  pUVar4 = ULiveLinkRole::StaticClass();
  lVar5 = local_res8;
  if (pUVar4 == (UClass *)0x0) {
    return false;
  }
  iVar1 = (int)pUVar4->_padding_;
  if ((*(int *)(lVar2 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar4->_padding_)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return false;
  }
  if (local_res8 == 0) {
    return false;
  }
  pUVar4 = ULiveLinkRole::StaticClass();
  if (pUVar4 != (UClass *)0x0) {
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar5 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    lVar5 = local_res8;
    if (bVar3) goto LAB_14cfb7dc2;
  }
  lVar5 = 0;
LAB_14cfb7dc2:
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if ((lVar2 != 0) && (pUVar4 = ULiveLinkRole::StaticClass(), pUVar4 != (UClass *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (lVar2 = *(longlong *)param_1.Class.field0_0x0, lVar2 != 0)) {
      if ((*(int *)(lVar5 + 0x38) < *(int *)(lVar2 + 0x38)) ||
         (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return true;
      }
    }
  }
  return false;
}

