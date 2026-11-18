// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 1

// ~FCachePayload @ 142ada760

/* WARNING: Enum "EOptionalBool": Some values do not have unique names */

void __thiscall UE::AssetDataGather::Private::FCachePayload::~FCachePayload(FCachePayload *this)

{
  bool *pbVar1;
  TArray<FAssetData,TSizedDefaultAllocator<32>_> *pTVar2;
  FDiskCachedAssetData *pFVar3;
  FScriptContainerElement *pFVar4;
  TArray<FAssetData,TSizedDefaultAllocator<32>_> *pTVar5;
  longlong lVar6;
  
  pFVar3 = (this->AssetDatas).Ptr;
  if (pFVar3 != (FDiskCachedAssetData *)0x0) {
    lVar6 = *(longlong *)&pFVar3[-1].DependencyData.bHasPackageData;
    pbVar1 = &pFVar3[-1].DependencyData.bHasPackageData;
    if (lVar6 != 0) {
      pTVar5 = &pFVar3[lVar6].AssetDataList;
      do {
        pTVar2 = pTVar5 + -0x11;
        lVar6 = lVar6 + -1;
        FPackageDependencyData::~FPackageDependencyData((FPackageDependencyData *)(pTVar5 + -0x10));
        DestructItems<FAssetData,int>
                  ((FAssetData *)(pTVar2->AllocatorInstance).Data,
                   *(int *)((longlong)(pTVar5 + -0x11) + 8));
        pFVar4 = (pTVar2->AllocatorInstance).Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        pTVar5 = pTVar2;
      } while (lVar6 != 0);
    }
    operator_delete__(pbVar1,*(longlong *)pbVar1 * 0x110 + 8);
  }
  operator_delete__((this->PackageNames).Ptr);
  return;
}

