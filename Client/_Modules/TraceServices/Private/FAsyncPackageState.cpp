// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 1

// FAsyncPackageState @ 14d3cbd10

FAsyncPackageState * __thiscall
TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState::FAsyncPackageState
          (FAsyncPackageState *this)

{
  this->PackageInfo = (FPackageInfo *)0x0;
  this->Request = (FRequestState *)0x0;
  this->Linker = (FLinkerLoadState *)0x0;
  *(undefined8 *)&(this->ImportedAsyncPackages).Elements = 0;
  *(undefined8 *)&(this->ImportedAsyncPackages).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ImportedAsyncPackages).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ImportedAsyncPackages).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ImportedAsyncPackages).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ImportedAsyncPackages).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->ImportedAsyncPackages).Elements.field_0x30 = 0xffffffff;
  (this->ImportedAsyncPackages).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ImportedAsyncPackages).HashSize = 0;
  *(undefined8 *)&(this->ImportedByAsyncPackages).Elements = 0;
  *(undefined8 *)&(this->ImportedByAsyncPackages).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ImportedByAsyncPackages).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ImportedByAsyncPackages).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ImportedByAsyncPackages).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ImportedByAsyncPackages).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->ImportedByAsyncPackages).Elements.field_0x30 = 0xffffffff;
  (this->ImportedByAsyncPackages).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ImportedByAsyncPackages).HashSize = 0;
  return this;
}

