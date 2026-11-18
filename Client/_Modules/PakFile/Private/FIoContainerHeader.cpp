// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 3

// FIoContainerHeader @ 142a51eb0

FIoContainerHeader * __thiscall
FIoContainerHeader::FIoContainerHeader(FIoContainerHeader *this,FIoContainerHeader *param_1)

{
  long64 lVar1;
  
  (this->ContainerId).Id = (param_1->ContainerId).Id;
  (this->PackageIds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PackageIds).AllocatorInstance.Data = (param_1->PackageIds).AllocatorInstance.Data;
  (param_1->PackageIds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PackageIds).ArrayNum = (param_1->PackageIds).ArrayNum;
  (this->PackageIds).ArrayMax = (param_1->PackageIds).ArrayMax;
  (param_1->PackageIds).ArrayNum = 0;
  (param_1->PackageIds).ArrayMax = 0;
  (this->StoreEntries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StoreEntries).AllocatorInstance.Data = (param_1->StoreEntries).AllocatorInstance.Data;
  (param_1->StoreEntries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StoreEntries).ArrayNum = (param_1->StoreEntries).ArrayNum;
  (this->StoreEntries).ArrayMax = (param_1->StoreEntries).ArrayMax;
  (param_1->StoreEntries).ArrayNum = 0;
  (param_1->StoreEntries).ArrayMax = 0;
  (this->OptionalSegmentPackageIds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OptionalSegmentPackageIds).AllocatorInstance.Data =
       (param_1->OptionalSegmentPackageIds).AllocatorInstance.Data;
  (param_1->OptionalSegmentPackageIds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OptionalSegmentPackageIds).ArrayNum = (param_1->OptionalSegmentPackageIds).ArrayNum;
  (this->OptionalSegmentPackageIds).ArrayMax = (param_1->OptionalSegmentPackageIds).ArrayMax;
  (param_1->OptionalSegmentPackageIds).ArrayNum = 0;
  (param_1->OptionalSegmentPackageIds).ArrayMax = 0;
  (this->OptionalSegmentStoreEntries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OptionalSegmentStoreEntries).AllocatorInstance.Data =
       (param_1->OptionalSegmentStoreEntries).AllocatorInstance.Data;
  (param_1->OptionalSegmentStoreEntries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OptionalSegmentStoreEntries).ArrayNum = (param_1->OptionalSegmentStoreEntries).ArrayNum;
  (this->OptionalSegmentStoreEntries).ArrayMax = (param_1->OptionalSegmentStoreEntries).ArrayMax;
  (param_1->OptionalSegmentStoreEntries).ArrayNum = 0;
  (param_1->OptionalSegmentStoreEntries).ArrayMax = 0;
  (this->RedirectsNameMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RedirectsNameMap).AllocatorInstance.Data =
       (param_1->RedirectsNameMap).AllocatorInstance.Data;
  (param_1->RedirectsNameMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RedirectsNameMap).ArrayNum = (param_1->RedirectsNameMap).ArrayNum;
  (this->RedirectsNameMap).ArrayMax = (param_1->RedirectsNameMap).ArrayMax;
  (param_1->RedirectsNameMap).ArrayNum = 0;
  (param_1->RedirectsNameMap).ArrayMax = 0;
  (this->LocalizedPackages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LocalizedPackages).AllocatorInstance.Data =
       (param_1->LocalizedPackages).AllocatorInstance.Data;
  (param_1->LocalizedPackages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LocalizedPackages).ArrayNum = (param_1->LocalizedPackages).ArrayNum;
  (this->LocalizedPackages).ArrayMax = (param_1->LocalizedPackages).ArrayMax;
  (param_1->LocalizedPackages).ArrayNum = 0;
  (param_1->LocalizedPackages).ArrayMax = 0;
  (this->PackageRedirects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PackageRedirects).AllocatorInstance.Data =
       (param_1->PackageRedirects).AllocatorInstance.Data;
  (param_1->PackageRedirects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PackageRedirects).ArrayNum = (param_1->PackageRedirects).ArrayNum;
  (this->PackageRedirects).ArrayMax = (param_1->PackageRedirects).ArrayMax;
  (param_1->PackageRedirects).ArrayNum = 0;
  (param_1->PackageRedirects).ArrayMax = 0;
  lVar1 = (param_1->SoftPackageReferencesSerialInfo).Size;
  (this->SoftPackageReferencesSerialInfo).Offset = (param_1->SoftPackageReferencesSerialInfo).Offset
  ;
  (this->SoftPackageReferencesSerialInfo).Size = lVar1;
  (this->SoftPackageReferences).PackageIds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SoftPackageReferences).PackageIds.AllocatorInstance.Data =
       (param_1->SoftPackageReferences).PackageIds.AllocatorInstance.Data;
  (param_1->SoftPackageReferences).PackageIds.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SoftPackageReferences).PackageIds.ArrayNum =
       (param_1->SoftPackageReferences).PackageIds.ArrayNum;
  (this->SoftPackageReferences).PackageIds.ArrayMax =
       (param_1->SoftPackageReferences).PackageIds.ArrayMax;
  (param_1->SoftPackageReferences).PackageIds.ArrayNum = 0;
  (param_1->SoftPackageReferences).PackageIds.ArrayMax = 0;
  (this->SoftPackageReferences).PackageIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SoftPackageReferences).PackageIndices.AllocatorInstance.Data =
       (param_1->SoftPackageReferences).PackageIndices.AllocatorInstance.Data;
  (param_1->SoftPackageReferences).PackageIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SoftPackageReferences).PackageIndices.ArrayNum =
       (param_1->SoftPackageReferences).PackageIndices.ArrayNum;
  (this->SoftPackageReferences).PackageIndices.ArrayMax =
       (param_1->SoftPackageReferences).PackageIndices.ArrayMax;
  (param_1->SoftPackageReferences).PackageIndices.ArrayNum = 0;
  (param_1->SoftPackageReferences).PackageIndices.ArrayMax = 0;
  (this->SoftPackageReferences).bContainsSoftPackageReferences =
       (param_1->SoftPackageReferences).bContainsSoftPackageReferences;
  (this->SoftPackageReferences).bLoadedSoftPackageReferences =
       (param_1->SoftPackageReferences).bLoadedSoftPackageReferences;
  return this;
}

// ~FIoContainerHeader @ 142a56540

void __thiscall FIoContainerHeader::~FIoContainerHeader(FIoContainerHeader *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->SoftPackageReferences).PackageIndices.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SoftPackageReferences).PackageIds.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PackageRedirects).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LocalizedPackages).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RedirectsNameMap).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OptionalSegmentStoreEntries).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OptionalSegmentPackageIds).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StoreEntries).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PackageIds).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 142a57c10

FIoContainerHeader * __thiscall
FIoContainerHeader::operator=(FIoContainerHeader *this,FIoContainerHeader *param_1)

{
  TArray<FPackageId,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FPackageId,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<FIoContainerHeaderLocalizedPackage,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<FIoContainerHeaderLocalizedPackage,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<FIoContainerHeaderPackageRedirect,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<FIoContainerHeaderPackageRedirect,TSizedDefaultAllocator<32>_> *pTVar10;
  FIoContainerHeaderSoftPackageReferences *pFVar11;
  FScriptContainerElement *pFVar12;
  long64 lVar13;
  FIoContainerHeaderSoftPackageReferences *pFVar14;
  
  pTVar1 = &param_1->PackageIds;
  pTVar2 = &this->PackageIds;
  (this->ContainerId).Id = (param_1->ContainerId).Id;
  if (pTVar2 != pTVar1) {
    pFVar12 = (pTVar2->AllocatorInstance).Data;
    if (pFVar12 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar12);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->PackageIds).ArrayNum = (param_1->PackageIds).ArrayNum;
    (this->PackageIds).ArrayMax = (param_1->PackageIds).ArrayMax;
    (param_1->PackageIds).ArrayNum = 0;
    (param_1->PackageIds).ArrayMax = 0;
  }
  pTVar3 = &param_1->StoreEntries;
  pTVar4 = &this->StoreEntries;
  if (pTVar4 != pTVar3) {
    pFVar12 = (pTVar4->AllocatorInstance).Data;
    if (pFVar12 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar12);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->StoreEntries).ArrayNum = (param_1->StoreEntries).ArrayNum;
    (this->StoreEntries).ArrayMax = (param_1->StoreEntries).ArrayMax;
    (param_1->StoreEntries).ArrayNum = 0;
    (param_1->StoreEntries).ArrayMax = 0;
  }
  pTVar1 = &param_1->OptionalSegmentPackageIds;
  pTVar2 = &this->OptionalSegmentPackageIds;
  if (pTVar2 != pTVar1) {
    pFVar12 = (pTVar2->AllocatorInstance).Data;
    if (pFVar12 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar12);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->OptionalSegmentPackageIds).ArrayNum = (param_1->OptionalSegmentPackageIds).ArrayNum;
    (this->OptionalSegmentPackageIds).ArrayMax = (param_1->OptionalSegmentPackageIds).ArrayMax;
    (param_1->OptionalSegmentPackageIds).ArrayNum = 0;
    (param_1->OptionalSegmentPackageIds).ArrayMax = 0;
  }
  pTVar3 = &param_1->OptionalSegmentStoreEntries;
  pTVar4 = &this->OptionalSegmentStoreEntries;
  if (pTVar4 != pTVar3) {
    pFVar12 = (pTVar4->AllocatorInstance).Data;
    if (pFVar12 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar12);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->OptionalSegmentStoreEntries).ArrayNum = (param_1->OptionalSegmentStoreEntries).ArrayNum;
    (this->OptionalSegmentStoreEntries).ArrayMax = (param_1->OptionalSegmentStoreEntries).ArrayMax;
    (param_1->OptionalSegmentStoreEntries).ArrayNum = 0;
    (param_1->OptionalSegmentStoreEntries).ArrayMax = 0;
  }
  pTVar5 = &param_1->RedirectsNameMap;
  pTVar6 = &this->RedirectsNameMap;
  if (pTVar6 != pTVar5) {
    pFVar12 = (pTVar6->AllocatorInstance).Data;
    if (pFVar12 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar12);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->RedirectsNameMap).ArrayNum = (param_1->RedirectsNameMap).ArrayNum;
    (this->RedirectsNameMap).ArrayMax = (param_1->RedirectsNameMap).ArrayMax;
    (param_1->RedirectsNameMap).ArrayNum = 0;
    (param_1->RedirectsNameMap).ArrayMax = 0;
  }
  pTVar7 = &param_1->LocalizedPackages;
  pTVar8 = &this->LocalizedPackages;
  if (pTVar8 != pTVar7) {
    pFVar12 = (pTVar8->AllocatorInstance).Data;
    if (pFVar12 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar12);
    }
    (pTVar8->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
    (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->LocalizedPackages).ArrayNum = (param_1->LocalizedPackages).ArrayNum;
    (this->LocalizedPackages).ArrayMax = (param_1->LocalizedPackages).ArrayMax;
    (param_1->LocalizedPackages).ArrayNum = 0;
    (param_1->LocalizedPackages).ArrayMax = 0;
  }
  pTVar9 = &param_1->PackageRedirects;
  pTVar10 = &this->PackageRedirects;
  if (pTVar10 != pTVar9) {
    pFVar12 = (pTVar10->AllocatorInstance).Data;
    if (pFVar12 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar12);
    }
    (pTVar10->AllocatorInstance).Data = (pTVar9->AllocatorInstance).Data;
    (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->PackageRedirects).ArrayNum = (param_1->PackageRedirects).ArrayNum;
    (this->PackageRedirects).ArrayMax = (param_1->PackageRedirects).ArrayMax;
    (param_1->PackageRedirects).ArrayNum = 0;
    (param_1->PackageRedirects).ArrayMax = 0;
  }
  lVar13 = (param_1->SoftPackageReferencesSerialInfo).Size;
  pFVar14 = &param_1->SoftPackageReferences;
  pFVar11 = &this->SoftPackageReferences;
  (this->SoftPackageReferencesSerialInfo).Offset = (param_1->SoftPackageReferencesSerialInfo).Offset
  ;
  (this->SoftPackageReferencesSerialInfo).Size = lVar13;
  if (pFVar11 != pFVar14) {
    pFVar12 = (pFVar11->PackageIds).AllocatorInstance.Data;
    if (pFVar12 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar12);
    }
    (pFVar11->PackageIds).AllocatorInstance.Data = (pFVar14->PackageIds).AllocatorInstance.Data;
    (pFVar14->PackageIds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->SoftPackageReferences).PackageIds.ArrayNum =
         (param_1->SoftPackageReferences).PackageIds.ArrayNum;
    (this->SoftPackageReferences).PackageIds.ArrayMax =
         (param_1->SoftPackageReferences).PackageIds.ArrayMax;
    (param_1->SoftPackageReferences).PackageIds.ArrayNum = 0;
    (param_1->SoftPackageReferences).PackageIds.ArrayMax = 0;
  }
  pTVar3 = &(param_1->SoftPackageReferences).PackageIndices;
  pTVar4 = &(this->SoftPackageReferences).PackageIndices;
  if (pTVar4 != pTVar3) {
    pFVar12 = (pTVar4->AllocatorInstance).Data;
    if (pFVar12 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar12);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->SoftPackageReferences).PackageIndices.ArrayNum =
         (param_1->SoftPackageReferences).PackageIndices.ArrayNum;
    (this->SoftPackageReferences).PackageIndices.ArrayMax =
         (param_1->SoftPackageReferences).PackageIndices.ArrayMax;
    (param_1->SoftPackageReferences).PackageIndices.ArrayNum = 0;
    (param_1->SoftPackageReferences).PackageIndices.ArrayMax = 0;
  }
  (this->SoftPackageReferences).bContainsSoftPackageReferences =
       (param_1->SoftPackageReferences).bContainsSoftPackageReferences;
  (this->SoftPackageReferences).bLoadedSoftPackageReferences =
       (param_1->SoftPackageReferences).bLoadedSoftPackageReferences;
  return this;
}

