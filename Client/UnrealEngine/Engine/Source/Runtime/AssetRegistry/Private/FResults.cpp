// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 2

// ~FResults @ 142b7d860

void __thiscall UE::AssetDataGather::FResults::~FResults(FResults *this)

{
  TRingBuffer<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  
  DestructItems<FString,int>
            ((FString *)(this->BlockedFiles).AllocatorInstance.Data,(this->BlockedFiles).ArrayNum);
  pFVar2 = (this->BlockedFiles).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TRingBuffer<FName,TSizedDefaultAllocator<32>_>::~TRingBuffer<FName,TSizedDefaultAllocator<32>_>
            (&this->VerseFiles);
  pTVar1 = &this->CookedPackageNamesWithoutAssetData;
  TRingBuffer<FString,TSizedDefaultAllocator<32>_>::DestructRange
            (pTVar1,(this->CookedPackageNamesWithoutAssetData).Front,
             (this->CookedPackageNamesWithoutAssetData).AfterBack);
  (this->CookedPackageNamesWithoutAssetData).Front = 0;
  (this->CookedPackageNamesWithoutAssetData).AfterBack = 0;
  TRingBuffer<FString,TSizedDefaultAllocator<32>_>::Reallocate(pTVar1,0);
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->DependenciesForGameThread).field_0x48 = 0;
  pvVar3 = *(void **)&(this->DependenciesForGameThread).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FPackageDependencyData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FPackageDependencyData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FPackageDependencyData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DependenciesForGameThread);
  *(undefined4 *)&(this->Dependencies).field_0x48 = 0;
  pvVar3 = *(void **)&(this->Dependencies).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FPackageDependencyData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FPackageDependencyData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FPackageDependencyData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Dependencies);
  pTVar1 = &this->Paths;
  TRingBuffer<FString,TSizedDefaultAllocator<32>_>::DestructRange
            (pTVar1,(this->Paths).Front,(this->Paths).AfterBack);
  (this->Paths).Front = 0;
  (this->Paths).AfterBack = 0;
  TRingBuffer<FString,TSizedDefaultAllocator<32>_>::Reallocate(pTVar1,0);
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->AssetsForGameThread).field_0x48 = 0;
  pvVar3 = *(void **)&(this->AssetsForGameThread).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AssetsForGameThread);
  *(undefined4 *)&(this->Assets).field_0x48 = 0;
  pvVar3 = *(void **)&(this->Assets).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// GetAllocatedSize @ 142b93660

ulong64 __thiscall UE::AssetDataGather::FResults::GetAllocatedSize(FResults *this)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar1 = *(uint *)&(this->Assets).field_0x48;
  lVar4 = 0;
  lVar5 = lVar4;
  if (1 < uVar1) {
    lVar5 = (longlong)(int)uVar1 << 2;
  }
  uVar1 = *(uint *)&(this->AssetsForGameThread).field_0x48;
  lVar3 = lVar4;
  if (1 < uVar1) {
    lVar3 = (longlong)(int)uVar1 << 2;
  }
  uVar1 = *(uint *)&(this->Dependencies).field_0x48;
  lVar2 = lVar4;
  if (1 < uVar1) {
    lVar2 = (longlong)(int)uVar1 << 2;
  }
  uVar1 = *(uint *)&(this->DependenciesForGameThread).field_0x48;
  if (1 < uVar1) {
    lVar4 = (longlong)(int)uVar1 << 2;
  }
  return (ulonglong)((*(int *)&(this->DependenciesForGameThread).field_0x2c + 0x1fU >> 5) << 2) +
         (ulonglong)((*(int *)&(this->AssetsForGameThread).field_0x2c + 0x1fU >> 5) << 2) +
         (((longlong)*(int *)&(this->AssetsForGameThread).field_0xc +
           (longlong)*(int *)&(this->DependenciesForGameThread).field_0xc * 10 +
          (longlong)*(int *)&(this->Assets).field_0xc) * 3 +
          ((longlong)(int)((this->CookedPackageNamesWithoutAssetData).IndexMask + 1) +
          (longlong)(this->BlockedFiles).ArrayMax) * 2 +
         (longlong)(int)((this->VerseFiles).IndexMask + 1)) * 8 +
         (ulonglong)((*(int *)&(this->Assets).field_0x2c + 0x1fU >> 5) << 2) + lVar4 +
         (longlong)*(int *)&(this->Dependencies).field_0xc * 0xf0 +
         lVar2 + (ulonglong)((*(int *)&(this->Dependencies).field_0x2c + 0x1fU >> 5) << 2) +
         (longlong)(int)((this->Paths).IndexMask + 1) * 0x10 + lVar3 + lVar5;
}

