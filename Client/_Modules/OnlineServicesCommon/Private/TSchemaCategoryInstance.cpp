// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 1

// GetMutableClientSnapshot @ 14eee0b00

TMap<FName,UE::Online::FSchemaVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>_>
* __thiscall
UE::Online::TSchemaCategoryInstance<UE::Online::FSchemaCategoryInstanceLobbySnapshotAccessor>::
GetMutableClientSnapshot
          (TSchemaCategoryInstance<UE::Online::FSchemaCategoryInstanceLobbySnapshotAccessor> *this)

{
  return (this->SnapshotAccessor).ClientSnapshot;
}

