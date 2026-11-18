// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// operator= @ 141ed5ec0

FSoftObjectPtr * __thiscall FSoftObjectPtr::operator=(FSoftObjectPtr *this,FObjectPtr param_1)

{
  undefined1 *puVar1;
  FUtf8String *pFVar2;
  UObject *pUVar3;
  uint uVar4;
  FNameEntryId FVar5;
  uint uVar6;
  bool bVar7;
  FSoftObjectPath *pFVar8;
  FUObjectItem *pFVar9;
  UObject *local_res8;
  FSoftObjectPath local_38;
  
  pUVar3 = *(UObject **)param_1.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  if (pUVar3 != (UObject *)0x0) {
    local_res8 = pUVar3;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    pFVar8 = FSoftObjectPath::GetOrCreateIDForObject(&local_38,(FObjectPtr)&local_res8);
    puVar1 = &this->field_0x18;
    uVar4 = (pFVar8->AssetPath).PackageName.Number;
    FVar5.Value = (pFVar8->AssetPath).AssetName.ComparisonIndex.Value;
    uVar6 = (pFVar8->AssetPath).AssetName.Number;
    pFVar2 = &pFVar8->SubPathString;
    *(uint *)&this->field_0x8 = (pFVar8->AssetPath).PackageName.ComparisonIndex.Value;
    *(uint *)&this->field_0xc = uVar4;
    *(uint *)&this->field_0x10 = FVar5.Value;
    *(uint *)&this->field_0x14 = uVar6;
    if ((FUtf8String *)puVar1 != pFVar2) {
      if (*(void **)puVar1 != (void *)0x0) {
        FMemory::Free(*(void **)puVar1);
      }
      *(FScriptContainerElement **)puVar1 = (pFVar2->Data).AllocatorInstance.Data;
      (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)&this->field_0x20 = (pFVar8->SubPathString).Data.ArrayNum;
      *(int *)&this->field_0x24 = (pFVar8->SubPathString).Data.ArrayMax;
      (pFVar8->SubPathString).Data.ArrayNum = 0;
      (pFVar8->SubPathString).Data.ArrayMax = 0;
    }
    if (local_38.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.SubPathString.Data.AllocatorInstance.Data);
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    bVar7 = (*IsInAsyncLoadingThread)();
    if (bVar7) {
      pFVar9 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar3->field_0xc);
      if (((pFVar9->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) != 0) {
        *(undefined8 *)this = 0;
        return this;
      }
    }
    local_res8 = pUVar3;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
    return this;
  }
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)&this->field_0x18,0);
  return this;
}

