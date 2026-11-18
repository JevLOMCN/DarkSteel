// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommonEngineUtils
// Functions: 2

// DestroyObject @ 14f0062f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FLANSession,1>::DestroyObject
          (TIntrusiveReferenceController<FLANSession,1> *this)

{
  FLANSession::~FLANSession((FLANSession *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14f006300

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Online::FSessionLAN,1>::DestroyObject
          (TIntrusiveReferenceController<UE::Online::FSessionLAN,1> *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0xe8));
  UE::Online::FSessionCommon::~FSessionCommon((FSessionCommon *)&this->ObjectStorage);
  return;
}

