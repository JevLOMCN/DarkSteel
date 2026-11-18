// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 2

// FChunkedDataStreamExportWriteScope @ 144228a90

FChunkedDataStreamExportWriteScope * __thiscall
FChunkedDataStreamExportWriteScope::FChunkedDataStreamExportWriteScope
          (FChunkedDataStreamExportWriteScope *this,UChunkedDataStream *param_1)

{
  if ((param_1 != (UChunkedDataStream *)0x0) &&
     (param_1->ChunkedWriter != (FChunkedDataWriter *)0x0)) {
    UE::Net::FIrisObjectReferencePackageMapWriteScope::FIrisObjectReferencePackageMapWriteScope
              (&this->WriteScope,(param_1->PackageMap).field0_0x0.DebugPtr,
               &param_1->ChunkedWriter->PackageMapExports);
    return this;
  }
  if (param_1 != (UChunkedDataStream *)0x0) {
    UE::Net::FIrisObjectReferencePackageMapWriteScope::FIrisObjectReferencePackageMapWriteScope
              (&this->WriteScope,(param_1->PackageMap).field0_0x0.DebugPtr,
               (FIrisPackageMapExports *)0x0);
    return this;
  }
  UE::Net::FIrisObjectReferencePackageMapWriteScope::FIrisObjectReferencePackageMapWriteScope
            (&this->WriteScope,(UIrisObjectReferencePackageMap *)0x0,(FIrisPackageMapExports *)0x0);
  return this;
}

// GetPackageMap @ 14423dab0

UIrisObjectReferencePackageMap * __thiscall
FChunkedDataStreamExportWriteScope::GetPackageMap(FChunkedDataStreamExportWriteScope *this)

{
  return (this->WriteScope).PackageMap;
}

