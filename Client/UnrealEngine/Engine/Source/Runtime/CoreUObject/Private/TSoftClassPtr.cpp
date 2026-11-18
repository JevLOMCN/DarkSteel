// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// Get @ 14220cd20

/* WARNING: Removing unreachable block (ram,0x00014220ce71) */

UClass * __thiscall TSoftClassPtr<UObject>::Get(TSoftClassPtr<UObject> *this)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  FUObjectItem *pFVar4;
  UClass *pUVar5;
  UClass *local_res8;
  
  pUVar3 = (UClass *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if ((pUVar3 != (UClass *)0x0) || (*(longlong *)&(this->SoftObjectPtr).field_0x8 == 0))
  goto LAB_14220ce06;
  bVar2 = IsInGameThread();
  if ((!bVar2) || (pUVar5 = (UClass *)0x0, GIsSavingPackage == false)) {
    pUVar5 = (UClass *)
             FSoftObjectPath::ResolveObjectInternal
                       ((FSoftObjectPath *)&(this->SoftObjectPtr).field_0x8);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  bVar2 = (*IsInAsyncLoadingThread)();
  if (((bVar2) && (pUVar5 != (UClass *)0x0)) &&
     (pFVar4 = FUObjectArray::IndexToObject
                         (&GUObjectArray,*(int *)((longlong)&pUVar5->_padding_ + 4)),
     ((pFVar4->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) != 0)) {
LAB_14220cde8:
    if (((uint)pUVar5->_padding_ >> 0x1e & 1) != 0) goto LAB_14220cdf6;
    bVar2 = true;
  }
  else {
    local_res8 = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
    if (pUVar5 != (UClass *)0x0) goto LAB_14220cde8;
LAB_14220cdf6:
    bVar2 = false;
  }
  pUVar3 = (UClass *)0x0;
  if (bVar2) {
    pUVar3 = pUVar5;
  }
LAB_14220ce06:
  if (pUVar3 != (UClass *)0x0) {
    pUVar5 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if (((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
        ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
         == &pUVar5->_padding_)) &&
       (pUVar5 = Z_Construct_UClass_UObject_NoRegister(), pUVar5 != (UClass *)0x0)) {
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= (int)pUVar3->_padding_) &&
         ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        return pUVar3;
      }
      return (UClass *)0x0;
    }
  }
  return (UClass *)0x0;
}

