// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 2

// GetAllocatedSize @ 142afaf10

ulong64 __thiscall
UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanData::GetAllocatedSize
          (FDirToScanData *this)

{
  ulong64 uVar1;
  ulong64 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = 0;
  lVar4 = lVar3;
  if ((this->DirLocalAbsPath).bIsDynamic != false) {
    lVar4 = ((longlong)(this->DirLocalAbsPath).End - (longlong)(this->DirLocalAbsPath).Base >> 1) *
            2;
  }
  if ((this->DirLongPackageName).bIsDynamic != false) {
    lVar3 = ((longlong)(this->DirLongPackageName).End - (longlong)(this->DirLongPackageName).Base >>
            1) * 2;
  }
  uVar1 = GetArrayRecursiveAllocatedSize<TArray<UE::AssetDataGather::Private::FDiscoveredPathData,TSizedDefaultAllocator<32>_>_>
                    (&this->IteratedSubDirs);
  uVar2 = GetArrayRecursiveAllocatedSize<TArray<UE::AssetDataGather::Private::FDiscoveredPathData,TSizedDefaultAllocator<32>_>_>
                    (&this->IteratedFiles);
  return uVar2 + lVar3 + uVar1 + lVar4;
}

// Reset @ 142b18000

void __thiscall
UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanData::Reset(FDirToScanData *this)

{
  (this->DirLocalAbsPath).CurPos = (this->DirLocalAbsPath).Base;
  (this->DirLongPackageName).CurPos = (this->DirLongPackageName).Base;
  this->NumIteratedDirs = 0;
  this->NumIteratedFiles = 0;
  this->bScanned = false;
  return;
}

