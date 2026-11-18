// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 1

// FindContext<UPolyEditActivityContext> @ 14cd49220

UPolyEditActivityContext * __thiscall
UContextObjectStore::FindContext<UPolyEditActivityContext>(UContextObjectStore *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  UPolyEditActivityContext *pUVar4;
  UClass *pUVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  while( true ) {
    pFVar6 = (this->ContextObjects).AllocatorInstance.Data;
    iVar2 = (this->ContextObjects).ArrayNum;
    pFVar1 = pFVar6 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->ContextObjects).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UObject>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar6 == pFVar1) break;
      pUVar4 = *(UPolyEditActivityContext **)pFVar6;
      if (pUVar4 != (UPolyEditActivityContext *)0x0) {
        pUVar5 = Z_Construct_UClass_UPolyEditActivityContext_NoRegister();
        iVar3 = (int)pUVar5->_padding_;
        if ((iVar3 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
            &pUVar5->_padding_)) {
          return pUVar4;
        }
      }
      pFVar6 = pFVar6 + 8;
    }
    this = (UContextObjectStore *)this->_padding_;
    if (this == (UContextObjectStore *)0x0) {
      return (UPolyEditActivityContext *)0x0;
    }
    pUVar5 = Z_Construct_UClass_UContextObjectStore_NoRegister();
    iVar2 = (int)pUVar5->_padding_;
    if (*(int *)(this->_padding_ + 0x38) < iVar2) break;
    if ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar5->_padding_) {
      return (UPolyEditActivityContext *)0x0;
    }
  }
  return (UPolyEditActivityContext *)0x0;
}

