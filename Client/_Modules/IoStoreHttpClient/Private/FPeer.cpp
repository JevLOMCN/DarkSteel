// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreHttpClient
// Functions: 1

// FPeer @ 14456b5c0

FPeer * __thiscall UE::IoStore::HTTP::FPeer::FPeer(FPeer *this,FSocket param_1)

{
  (this->Socket).Socket = 0xffffffffffffffff;
                    /* WARNING: Load size is inaccurate */
  (this->Socket).Socket = *param_1.Socket;
  *(undefined8 *)param_1.Socket = 0xffffffffffffffff;
  return this;
}

