// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 1

// Get @ 144302f40

UScriptStruct * __thiscall TSoftObjectPtr<UScriptStruct>::Get(TSoftObjectPtr<UScriptStruct> *this)

{
  int iVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  UScriptStruct *pUVar4;
  FUObjectItem *pFVar5;
  UClass *pUVar6;
  UScriptStruct *local_res8;
  
  pUVar3 = (UScriptStruct *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if ((pUVar3 != (UScriptStruct *)0x0) || (*(longlong *)&(this->SoftObjectPtr).field_0x8 == 0))
  goto LAB_144303007;
  pUVar4 = (UScriptStruct *)
           FSoftObjectPath::ResolveObject((FSoftObjectPath *)&(this->SoftObjectPtr).field_0x8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  bVar2 = (*IsInAsyncLoadingThread)();
  if (((bVar2) && (pUVar4 != (UScriptStruct *)0x0)) &&
     (pFVar5 = FUObjectArray::IndexToObject
                         (&GUObjectArray,*(int *)((longlong)&pUVar4->_padding_ + 4)),
     ((pFVar5->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) != 0)) {
LAB_144302fea:
    if (((uint)pUVar4->_padding_ >> 0x1e & 1) != 0) goto LAB_144302ff8;
    bVar2 = true;
  }
  else {
    local_res8 = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
    if (pUVar4 != (UScriptStruct *)0x0) goto LAB_144302fea;
LAB_144302ff8:
    bVar2 = false;
  }
  pUVar3 = (UScriptStruct *)0x0;
  if (bVar2) {
    pUVar3 = pUVar4;
  }
LAB_144303007:
  if (pUVar3 != (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar6->_padding_)) {
      return pUVar3;
    }
  }
  return (UScriptStruct *)0x0;
}

