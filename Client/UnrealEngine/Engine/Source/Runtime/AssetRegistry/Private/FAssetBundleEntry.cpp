// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 1

// FAssetBundleEntry @ 142ad4210

FAssetBundleEntry * __thiscall
FAssetBundleEntry::FAssetBundleEntry(FAssetBundleEntry *this,FAssetBundleEntry *param_1)

{
  TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  pTVar1 = &this->AssetPaths;
  this->BundleName = param_1->BundleName;
  piVar2 = &(this->AssetPaths).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->AssetPaths).ArrayNum;
  _Src = (param_1->AssetPaths).AllocatorInstance.Data;
  (this->AssetPaths).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 4);
  }
  return this;
}

