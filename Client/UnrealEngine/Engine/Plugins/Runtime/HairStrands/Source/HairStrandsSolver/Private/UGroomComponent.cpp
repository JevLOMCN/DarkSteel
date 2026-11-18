// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsSolver
// Functions: 1

// GetGroomSolver @ 14e253a20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UMeshComponent * __thiscall UGroomComponent::GetGroomSolver(UGroomComponent *this)

{
  int iVar1;
  bool bVar2;
  UMeshComponent *pUVar3;
  UMeshComponent *pUVar4;
  FUObjectItem *pFVar5;
  UClass *pUVar6;
  UMeshComponent *local_res8;
  
  pUVar3 = (UMeshComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->GroomSolver);
  if ((pUVar3 != (UMeshComponent *)0x0) ||
     (*(longlong *)&(this->GroomSolver).SoftObjectPtr.field_0x8 == 0)) goto LAB_14e253aee;
  pUVar4 = (UMeshComponent *)
           FSoftObjectPath::ResolveObject
                     ((FSoftObjectPath *)&(this->GroomSolver).SoftObjectPtr.field_0x8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  bVar2 = (*IsInAsyncLoadingThread)();
  if (((bVar2) && (pUVar4 != (UMeshComponent *)0x0)) &&
     (pFVar5 = FUObjectArray::IndexToObject
                         (&GUObjectArray,*(int *)((longlong)&pUVar4->_padding_ + 4)),
     ((pFVar5->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) != 0)) {
LAB_14e253ad1:
    if (((uint)pUVar4->_padding_ >> 0x1e & 1) != 0) goto LAB_14e253adf;
    bVar2 = true;
  }
  else {
    local_res8 = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UMeshComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->GroomSolver,(FObjectPtr)&local_res8);
    if (pUVar4 != (UMeshComponent *)0x0) goto LAB_14e253ad1;
LAB_14e253adf:
    bVar2 = false;
  }
  pUVar3 = (UMeshComponent *)0x0;
  if (bVar2) {
    pUVar3 = pUVar4;
  }
LAB_14e253aee:
  if (pUVar3 != (UMeshComponent *)0x0) {
    pUVar6 = Z_Construct_UClass_UMeshComponent_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar6->_padding_)) {
      return pUVar3;
    }
  }
  return (UMeshComponent *)0x0;
}

