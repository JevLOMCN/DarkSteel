// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 1

// DestroyObject @ 142aef300

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>::DestroyObject
          (TIntrusiveReferenceController<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>
           *this)

{
  UE::AssetDataGather::Private::FDirectoryReadTaskData::~FDirectoryReadTaskData
            ((FDirectoryReadTaskData *)&this->ObjectStorage);
  return;
}

