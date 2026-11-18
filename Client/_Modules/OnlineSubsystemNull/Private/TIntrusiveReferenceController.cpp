// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemNull
// Functions: 2

// DestroyObject @ 14ed21fc0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FOnlineStoreOffer,1>::DestroyObject
          (TIntrusiveReferenceController<FOnlineStoreOffer,1> *this)

{
  FOnlineStoreOffer::~FOnlineStoreOffer((FOnlineStoreOffer *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ed21fd0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FOnlineSubsystemNull,1>::DestroyObject
          (TIntrusiveReferenceController<FOnlineSubsystemNull,1> *this)

{
  FOnlineSubsystemNull::~FOnlineSubsystemNull((FOnlineSubsystemNull *)&this->ObjectStorage);
  return;
}

