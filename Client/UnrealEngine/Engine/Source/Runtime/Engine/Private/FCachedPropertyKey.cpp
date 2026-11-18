// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// SyncCache @ 1488e2340

FName __thiscall
UE::Transaction::FDiffableObjectDataWriter::FCachedPropertyKey::SyncCache
          (FCachedPropertyKey *this,FArchiveSerializedPropertyChain *param_1)

{
  uint uVar1;
  void *pvVar2;
  bool bVar3;
  FName FVar4;
  undefined8 *in_R8;
  
  uVar1 = *(uint *)(in_R8 + 10);
  if (uVar1 != this->LastUpdateCount) {
    if (*(int *)(in_R8 + 9) < 1) {
      FVar4.ComparisonIndex.Value = 0;
      FVar4.Number = 0;
    }
    else {
      if ((undefined8 *)in_R8[8] != (undefined8 *)0x0) {
        in_R8 = (undefined8 *)in_R8[8];
      }
      pvVar2 = (void *)*in_R8;
      bVar3 = IsThisNotNull(pvVar2,"FField::GetFName");
      if (bVar3) {
        FVar4 = *(FName *)((longlong)pvVar2 + 0x20);
      }
      else {
        FVar4.ComparisonIndex.Value = 0;
        FVar4.Number = 0;
      }
    }
    this->CachedKey = FVar4;
    this->LastUpdateCount = uVar1;
  }
  *(FName *)(param_1->SerializedPropertyChain).AllocatorInstance.InlineData = this->CachedKey;
  return (FName)param_1;
}

