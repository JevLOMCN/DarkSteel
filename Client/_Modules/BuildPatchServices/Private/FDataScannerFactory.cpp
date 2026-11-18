// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// Create @ 143247be0

IDataScanner * __cdecl
BuildPatchServices::FDataScannerFactory::Create
          (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2,ICloudEnumeration *param_3,
          FStatsCollector *param_4)

{
  FDataScanner *this;
  FDataScanner *pFVar1;
  
  this = ::operator_new(0x108);
  pFVar1 = (FDataScanner *)0x0;
  if (this != (FDataScanner *)0x0) {
    pFVar1 = FDataScanner::FDataScanner(this,param_1,param_2,param_3,param_4);
  }
  return (IDataScanner *)pFVar1;
}

