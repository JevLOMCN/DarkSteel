// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 1

// Get @ 14bbbaf50

USoundBase * __thiscall TSoftObjectPtr<USoundBase>::Get(TSoftObjectPtr<USoundBase> *this)

{
  int iVar1;
  bool bVar2;
  USoundBase *pUVar3;
  USoundBase *pUVar4;
  FUObjectItem *pFVar5;
  UClass *pUVar6;
  USoundBase *local_res8;
  
  pUVar3 = (USoundBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if ((pUVar3 != (USoundBase *)0x0) || (*(longlong *)&(this->SoftObjectPtr).field_0x8 == 0))
  goto LAB_14bbbb017;
  pUVar4 = (USoundBase *)
           FSoftObjectPath::ResolveObject((FSoftObjectPath *)&(this->SoftObjectPtr).field_0x8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (USoundBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  bVar2 = (*IsInAsyncLoadingThread)();
  if (((bVar2) && (pUVar4 != (USoundBase *)0x0)) &&
     (pFVar5 = FUObjectArray::IndexToObject
                         (&GUObjectArray,*(int *)((longlong)&pUVar4->_padding_ + 4)),
     ((pFVar5->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) != 0)) {
LAB_14bbbaffa:
    if (((uint)pUVar4->_padding_ >> 0x1e & 1) != 0) goto LAB_14bbbb008;
    bVar2 = true;
  }
  else {
    local_res8 = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (USoundBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
    if (pUVar4 != (USoundBase *)0x0) goto LAB_14bbbaffa;
LAB_14bbbb008:
    bVar2 = false;
  }
  pUVar3 = (USoundBase *)0x0;
  if (bVar2) {
    pUVar3 = pUVar4;
  }
LAB_14bbbb017:
  if (pUVar3 != (USoundBase *)0x0) {
    pUVar6 = Z_Construct_UClass_USoundBase_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar6->_padding_)) {
      return pUVar3;
    }
  }
  return (USoundBase *)0x0;
}

