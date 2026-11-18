// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryFramework
// Functions: 1

// Get @ 14970e4a0

UDynamicMesh * __thiscall TSoftObjectPtr<UDynamicMesh>::Get(TSoftObjectPtr<UDynamicMesh> *this)

{
  int iVar1;
  bool bVar2;
  UDynamicMesh *pUVar3;
  UDynamicMesh *pUVar4;
  FUObjectItem *pFVar5;
  UClass *pUVar6;
  UDynamicMesh *local_res8;
  
  pUVar3 = (UDynamicMesh *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if ((pUVar3 != (UDynamicMesh *)0x0) || (*(longlong *)&(this->SoftObjectPtr).field_0x8 == 0))
  goto LAB_14970e567;
  pUVar4 = (UDynamicMesh *)
           FSoftObjectPath::ResolveObject((FSoftObjectPath *)&(this->SoftObjectPtr).field_0x8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UDynamicMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  bVar2 = (*IsInAsyncLoadingThread)();
  if (((bVar2) && (pUVar4 != (UDynamicMesh *)0x0)) &&
     (pFVar5 = FUObjectArray::IndexToObject
                         (&GUObjectArray,*(int *)((longlong)&pUVar4->_padding_ + 4)),
     ((pFVar5->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) != 0)) {
LAB_14970e54a:
    if (((uint)pUVar4->_padding_ >> 0x1e & 1) != 0) goto LAB_14970e558;
    bVar2 = true;
  }
  else {
    local_res8 = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UDynamicMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
    if (pUVar4 != (UDynamicMesh *)0x0) goto LAB_14970e54a;
LAB_14970e558:
    bVar2 = false;
  }
  pUVar3 = (UDynamicMesh *)0x0;
  if (bVar2) {
    pUVar3 = pUVar4;
  }
LAB_14970e567:
  if (pUVar3 != (UDynamicMesh *)0x0) {
    pUVar6 = UDynamicMesh::StaticClass();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar6->_padding_)) {
      return pUVar3;
    }
  }
  return (UDynamicMesh *)0x0;
}

