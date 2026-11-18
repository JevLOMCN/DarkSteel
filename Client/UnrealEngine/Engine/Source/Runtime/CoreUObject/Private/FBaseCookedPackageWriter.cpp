// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// CreateLinkerArchive @ 141f2c420

TUniquePtr<FLargeMemoryWriter,TDefaultDelete<FLargeMemoryWriter>_> __thiscall
FBaseCookedPackageWriter::CreateLinkerArchive
          (FBaseCookedPackageWriter *this,FName param_1,UObject *param_2,ushort param_3)

{
  UE::PackageWriter::Private::BaseCreateLinkerArchive(param_1,param_2,param_3);
  return (TUniquePtr<FLargeMemoryWriter,TDefaultDelete<FLargeMemoryWriter>_>)param_1;
}

// CreateLinkerExportsArchive @ 141f2c4a0

TUniquePtr<FLargeMemoryWriter,TDefaultDelete<FLargeMemoryWriter>_> __thiscall
FBaseCookedPackageWriter::CreateLinkerExportsArchive
          (FBaseCookedPackageWriter *this,FName param_1,UObject *param_2,ushort param_3)

{
  UE::PackageWriter::Private::BaseCreateLinkerExportsArchive(param_1,param_2,param_3);
  return (TUniquePtr<FLargeMemoryWriter,TDefaultDelete<FLargeMemoryWriter>_>)param_1;
}

