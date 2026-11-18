// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 2

// FChunkedDataStreamExportReadScope @ 1442289f0

FChunkedDataStreamExportReadScope * __thiscall
FChunkedDataStreamExportReadScope::FChunkedDataStreamExportReadScope
          (FChunkedDataStreamExportReadScope *this,UChunkedDataStream *param_1)

{
  if ((param_1 != (UChunkedDataStream *)0x0) &&
     (param_1->ChunkedReader != (FChunkedDataReader *)0x0)) {
    UE::Net::FIrisObjectReferencePackageMapReadScope::FIrisObjectReferencePackageMapReadScope
              (&this->ReadScope,(param_1->PackageMap).field0_0x0.DebugPtr,
               &param_1->ChunkedReader->PackageMapExports,
               &param_1->ChunkedReader->NetTokenResolveContext);
    return this;
  }
  if ((param_1 != (UChunkedDataStream *)0x0) &&
     (param_1->ChunkedReader != (FChunkedDataReader *)0x0)) {
    UE::Net::FIrisObjectReferencePackageMapReadScope::FIrisObjectReferencePackageMapReadScope
              (&this->ReadScope,(param_1->PackageMap).field0_0x0.DebugPtr,
               &param_1->ChunkedReader->PackageMapExports,(FNetTokenResolveContext *)0x0);
    return this;
  }
  if (param_1 != (UChunkedDataStream *)0x0) {
    UE::Net::FIrisObjectReferencePackageMapReadScope::FIrisObjectReferencePackageMapReadScope
              (&this->ReadScope,(param_1->PackageMap).field0_0x0.DebugPtr,
               (FIrisPackageMapExports *)0x0,(FNetTokenResolveContext *)0x0);
    return this;
  }
  UE::Net::FIrisObjectReferencePackageMapReadScope::FIrisObjectReferencePackageMapReadScope
            (&this->ReadScope,(UIrisObjectReferencePackageMap *)0x0,(FIrisPackageMapExports *)0x0,
             (FNetTokenResolveContext *)0x0);
  return this;
}

// GetPackageMap @ 14423daa0

UIrisObjectReferencePackageMap * __thiscall
FChunkedDataStreamExportReadScope::GetPackageMap(FChunkedDataStreamExportReadScope *this)

{
  return (this->ReadScope).PackageMap;
}

