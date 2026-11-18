// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// Get @ 1460c8ee0

UMovieSceneCondition * __thiscall
TSoftObjectPtr<UMovieSceneCondition_const_>::Get(TSoftObjectPtr<UMovieSceneCondition_const_> *this)

{
  int iVar1;
  UMovieSceneCondition *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UMovieSceneCondition *)
           TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if (pUVar2 != (UMovieSceneCondition *)0x0) {
    pUVar3 = UMovieSceneCondition::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UMovieSceneCondition *)0x0;
}

// Get @ 1460c8f30

UObject * __thiscall TSoftObjectPtr<UObject>::Get(TSoftObjectPtr<UObject> *this)

{
  bool bVar1;
  UObject *pUVar2;
  FUObjectItem *pFVar3;
  UObject *pUVar4;
  UObject *pUStackX_8;
  
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pUVar2 != (UObject *)0x0) {
    return pUVar2;
  }
  if (*(longlong *)&(this->SoftObjectPtr).field_0x8 == 0) {
    return (UObject *)0x0;
  }
  pUVar2 = FSoftObjectPath::ResolveObject((FSoftObjectPath *)&(this->SoftObjectPtr).field_0x8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  bVar1 = (*IsInAsyncLoadingThread)();
  if (((bVar1) && (pUVar2 != (UObject *)0x0)) &&
     (pFVar3 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar2->field_0xc),
     ((pFVar3->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) != 0)) {
LAB_1421790a9:
    bVar1 = true;
    if ((*(uint *)&pUVar2->field_0x8 >> 0x1e & 1) == 0) goto LAB_1421790b9;
  }
  else {
    pUStackX_8 = pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&pUStackX_8);
    if (pUVar2 != (UObject *)0x0) goto LAB_1421790a9;
  }
  bVar1 = false;
LAB_1421790b9:
  pUVar4 = (UObject *)0x0;
  if (bVar1) {
    pUVar4 = pUVar2;
  }
  return pUVar4;
}

