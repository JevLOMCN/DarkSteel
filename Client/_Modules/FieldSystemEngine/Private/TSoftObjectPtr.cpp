// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FieldSystemEngine
// Functions: 1

// Get @ 14632ed00

AChaosSolverActor * __thiscall
TSoftObjectPtr<AChaosSolverActor>::Get(TSoftObjectPtr<AChaosSolverActor> *this)

{
  int iVar1;
  bool bVar2;
  AChaosSolverActor *pAVar3;
  AChaosSolverActor *pAVar4;
  FUObjectItem *pFVar5;
  UClass *pUVar6;
  AChaosSolverActor *local_res8;
  
  pAVar3 = (AChaosSolverActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if ((pAVar3 != (AChaosSolverActor *)0x0) || (*(longlong *)&(this->SoftObjectPtr).field_0x8 == 0))
  goto LAB_14632edc7;
  pAVar4 = (AChaosSolverActor *)
           FSoftObjectPath::ResolveObject((FSoftObjectPath *)&(this->SoftObjectPtr).field_0x8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar4 != (AChaosSolverActor *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pAVar4);
  }
  bVar2 = (*IsInAsyncLoadingThread)();
  if (((bVar2) && (pAVar4 != (AChaosSolverActor *)0x0)) &&
     (pFVar5 = FUObjectArray::IndexToObject
                         (&GUObjectArray,*(int *)((longlong)&pAVar4->_padding_ + 4)),
     ((pFVar5->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) != 0)) {
LAB_14632edaa:
    if (((uint)pAVar4->_padding_ >> 0x1e & 1) != 0) goto LAB_14632edb8;
    bVar2 = true;
  }
  else {
    local_res8 = pAVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar4 != (AChaosSolverActor *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)pAVar4);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
    if (pAVar4 != (AChaosSolverActor *)0x0) goto LAB_14632edaa;
LAB_14632edb8:
    bVar2 = false;
  }
  pAVar3 = (AChaosSolverActor *)0x0;
  if (bVar2) {
    pAVar3 = pAVar4;
  }
LAB_14632edc7:
  if (pAVar3 != (AChaosSolverActor *)0x0) {
    pUVar6 = Z_Construct_UClass_AChaosSolverActor_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(pAVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar6->_padding_)) {
      return pAVar3;
    }
  }
  return (AChaosSolverActor *)0x0;
}

