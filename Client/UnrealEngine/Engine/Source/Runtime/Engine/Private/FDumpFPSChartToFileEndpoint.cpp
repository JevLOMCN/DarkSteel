// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// PrintToEndpoint @ 147721b70

void __thiscall
FDumpFPSChartToFileEndpoint::PrintToEndpoint(FDumpFPSChartToFileEndpoint *this,FString *param_1)

{
  FArchive::LogfImpl(this->MyArchive,L"%s");
  return;
}

