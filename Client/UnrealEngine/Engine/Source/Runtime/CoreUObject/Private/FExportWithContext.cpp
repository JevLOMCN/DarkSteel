// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// operator= @ 142201680

FExportWithContext * __thiscall
FPackageHarvester::FExportWithContext::operator=
          (FExportWithContext *this,FExportWithContext *param_1)

{
  ForElementType<ESaveRealm> FVar1;
  
  this->Export = param_1->Export;
  this->CellExport = param_1->CellExport;
  if (&this->HarvestedFromRealms != &param_1->HarvestedFromRealms) {
    if ((param_1->HarvestedFromRealms).AllocatorInstance.SecondaryData ==
        (ForElementType<ESaveRealm>)0x0) {
      *(undefined8 *)(this->HarvestedFromRealms).AllocatorInstance.InlineData =
           *(undefined8 *)(param_1->HarvestedFromRealms).AllocatorInstance.InlineData;
    }
    FVar1 = (this->HarvestedFromRealms).AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<ESaveRealm>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    (this->HarvestedFromRealms).AllocatorInstance.SecondaryData =
         (param_1->HarvestedFromRealms).AllocatorInstance.SecondaryData;
    (param_1->HarvestedFromRealms).AllocatorInstance.SecondaryData = (ForElementType<ESaveRealm>)0x0
    ;
    (this->HarvestedFromRealms).ArrayNum = (param_1->HarvestedFromRealms).ArrayNum;
    (this->HarvestedFromRealms).ArrayMax = (param_1->HarvestedFromRealms).ArrayMax;
    (param_1->HarvestedFromRealms).ArrayNum = 0;
    (param_1->HarvestedFromRealms).ArrayMax = 2;
  }
  return this;
}

