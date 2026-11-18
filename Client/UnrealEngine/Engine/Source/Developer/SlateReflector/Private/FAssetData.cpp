// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 2

// GetAsset @ 142e97980

UObject * __thiscall
FAssetData::GetAsset
          (FAssetData *this,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1)

{
  ForElementType<FSetElementId> FVar1;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar2;
  UObject *pUVar3;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_58;
  
  pTVar2 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
           TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>(&local_58,param_1);
  pUVar3 = FastGetAsset(this,true,pTVar2);
  param_1->HashSize = 0;
  FVar1 = (param_1->Hash).SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&param_1->Elements);
  return pUVar3;
}

// GetPackage @ 142ea47a0

UPackage * __thiscall FAssetData::GetPackage(FAssetData *this)

{
  FString *pFVar1;
  UPackage *pUVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  FString local_18;
  
  if (this->PackageName == (FName)0x0) {
    return (UPackage *)0x0;
  }
  pFVar1 = ::FName::ToString(&this->PackageName,&local_18);
  pwVar4 = L"";
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
  pUVar2 = FindPackage((UObject *)0x0,pwVar3);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (pUVar2 != (UPackage *)0x0) {
    UPackage::FullyLoad(pUVar2);
    return pUVar2;
  }
  pFVar1 = ::FName::ToString(&this->PackageName,&local_18);
  if ((pFVar1->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
  pUVar2 = LoadPackage((UPackage *)0x0,pwVar4,0,(FArchive *)0x0,(FLinkerInstancingContext *)0x0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return pUVar2;
}

