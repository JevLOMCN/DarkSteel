// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Icmp
// Functions: 2

// DestroyObject @ 144555e90

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TFutureState<FIcmpEchoManyCompleteResult>,1>::
DestroyObject(TIntrusiveReferenceController<TFutureState<FIcmpEchoManyCompleteResult>,1> *this)

{
  TFutureState<FIcmpEchoManyCompleteResult>::~TFutureState<FIcmpEchoManyCompleteResult>
            ((TFutureState<FIcmpEchoManyCompleteResult> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 144555ea0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TFutureState<FIcmpEchoResult>,1>::
DestroyObject(TIntrusiveReferenceController<TFutureState<FIcmpEchoResult>,1> *this)

{
  TFutureState<FIcmpEchoResult>::~TFutureState<FIcmpEchoResult>
            ((TFutureState<FIcmpEchoResult> *)&this->ObjectStorage);
  return;
}

