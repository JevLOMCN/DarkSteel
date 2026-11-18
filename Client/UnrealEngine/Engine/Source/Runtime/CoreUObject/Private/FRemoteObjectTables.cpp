// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// Serialize @ 1421e6ca0

void __thiscall FRemoteObjectTables::Serialize(FRemoteObjectTables *this,FArchive *param_1)

{
  TArrayPrivateFriend::Serialize<FName,TSizedDefaultAllocator<32>_>(param_1,&this->Names);
  TArrayPrivateFriend::Serialize<FRemoteObjectId,TSizedDefaultAllocator<32>_>
            (param_1,&this->RemoteIds);
  return;
}

