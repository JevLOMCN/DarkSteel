// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 1

// Get @ 145f0e7a0

ALandscape * __thiscall TSoftObjectPtr<ALandscape>::Get(TSoftObjectPtr<ALandscape> *this)

{
  int iVar1;
  bool bVar2;
  ALandscape *pAVar3;
  ALandscape *pAVar4;
  FUObjectItem *pFVar5;
  UClass *pUVar6;
  ALandscape *local_res8;
  
  pAVar3 = (ALandscape *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if ((pAVar3 != (ALandscape *)0x0) || (*(longlong *)&(this->SoftObjectPtr).field_0x8 == 0))
  goto LAB_145f0e867;
  pAVar4 = (ALandscape *)
           FSoftObjectPath::ResolveObject((FSoftObjectPath *)&(this->SoftObjectPtr).field_0x8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar4 != (ALandscape *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar4);
  }
  bVar2 = (*IsInAsyncLoadingThread)();
  if (((bVar2) && (pAVar4 != (ALandscape *)0x0)) &&
     (pFVar5 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pAVar4->field_0xc),
     ((pFVar5->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) != 0)) {
LAB_145f0e84a:
    if ((*(uint *)&pAVar4->field_0x8 >> 0x1e & 1) != 0) goto LAB_145f0e858;
    bVar2 = true;
  }
  else {
    local_res8 = pAVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar4 != (ALandscape *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar4);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
    if (pAVar4 != (ALandscape *)0x0) goto LAB_145f0e84a;
LAB_145f0e858:
    bVar2 = false;
  }
  pAVar3 = (ALandscape *)0x0;
  if (bVar2) {
    pAVar3 = pAVar4;
  }
LAB_145f0e867:
  if (pAVar3 != (ALandscape *)0x0) {
    pUVar6 = ALandscape::StaticClass();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pAVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pAVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) {
      return pAVar3;
    }
  }
  return (ALandscape *)0x0;
}

