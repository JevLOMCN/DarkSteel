// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// CreateLinkerArchive @ 141f2c460

TUniquePtr<FLargeMemoryWriter,TDefaultDelete<FLargeMemoryWriter>_> __thiscall
FBasePackageWriter::CreateLinkerArchive
          (FBasePackageWriter *this,FName param_1,UObject *param_2,ushort param_3)

{
  UE::PackageWriter::Private::BaseCreateLinkerArchive(param_1,param_2,param_3);
  return (TUniquePtr<FLargeMemoryWriter,TDefaultDelete<FLargeMemoryWriter>_>)param_1;
}

// CreateLinkerExportsArchive @ 141f2c4e0

TUniquePtr<FLargeMemoryWriter,TDefaultDelete<FLargeMemoryWriter>_> __thiscall
FBasePackageWriter::CreateLinkerExportsArchive
          (FBasePackageWriter *this,FName param_1,UObject *param_2,ushort param_3)

{
  UE::PackageWriter::Private::BaseCreateLinkerExportsArchive(param_1,param_2,param_3);
  return (TUniquePtr<FLargeMemoryWriter,TDefaultDelete<FLargeMemoryWriter>_>)param_1;
}

