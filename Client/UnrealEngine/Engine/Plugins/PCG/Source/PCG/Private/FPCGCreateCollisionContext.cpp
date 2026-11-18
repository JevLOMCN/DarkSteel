// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// AddExtraStructReferencedObjects @ 149b669d0

void __thiscall
FPCGCreateCollisionContext::AddExtraStructReferencedObjects
          (FPCGCreateCollisionContext *this,FReferenceCollector *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PerInputData).ArrayNum;
  pFVar2 = (this->PerInputData).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x20;
  while( true ) {
    if ((this->PerInputData).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FPCGCreateCollisionContext::InputMeshData,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    (**(code **)(param_1->_padding_ + 0x88))(param_1,pFVar2 + 0x18,0,0);
    pFVar2 = pFVar2 + 0x20;
  }
  return;
}

