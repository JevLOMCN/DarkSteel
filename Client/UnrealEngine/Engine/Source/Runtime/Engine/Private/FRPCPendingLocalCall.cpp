// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// CountBytes @ 147a3adc0

void __thiscall
FObjectReplicator::FRPCPendingLocalCall::CountBytes(FRPCPendingLocalCall *this,FArchive *param_1)

{
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)(this->Buffer).ArrayNum,(longlong)(this->Buffer).ArrayMax);
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::CountBytes
            (&this->UnmappedGuids,param_1);
  return;
}

