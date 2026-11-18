// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// ~FPrimaryAssetData @ 1475a9c60

void __thiscall FPrimaryAssetData::~FPrimaryAssetData(FPrimaryAssetData *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  if ((this->PendingState).Storage != (uchar *)0x0) {
    FPrimaryAssetLoadState::DestroyStoredItems(&this->PendingState);
    FMemory::Free((this->PendingState).Storage);
    (this->PendingState).Storage = (uchar *)0x0;
  }
  if ((this->CurrentState).Storage != (uchar *)0x0) {
    FPrimaryAssetLoadState::DestroyStoredItems(&this->CurrentState);
    FMemory::Free((this->CurrentState).Storage);
    (this->CurrentState).Storage = (uchar *)0x0;
  }
  pFVar1 = (this->ARLookupPath).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->AssetPtr).field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  return;
}

