// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Messaging
// Functions: 4

// DestroyObject @ 142d37150

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMessageBridge,1>::DestroyObject
          (TIntrusiveReferenceController<FMessageBridge,1> *this)

{
  FMessageBridge::~FMessageBridge((FMessageBridge *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142d371a0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMessageBus,1>::DestroyObject
          (TIntrusiveReferenceController<FMessageBus,1> *this)

{
  FMessageBus::~FMessageBus((FMessageBus *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142d440c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMessageContext,1>::DestroyObject
          (TIntrusiveReferenceController<FMessageContext,1> *this)

{
  FMessageContext::~FMessageContext((FMessageContext *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142d440d0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMessageTracer,1>::DestroyObject
          (TIntrusiveReferenceController<FMessageTracer,1> *this)

{
  FMessageTracer::~FMessageTracer((FMessageTracer *)&this->ObjectStorage);
  return;
}

