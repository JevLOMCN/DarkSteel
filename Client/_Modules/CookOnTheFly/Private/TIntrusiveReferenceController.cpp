// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CookOnTheFly
// Functions: 1

// DestroyObject @ 14311d460

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TFutureState<UE::Cook::FCookOnTheFlyResponse>,1>::DestroyObject
          (TIntrusiveReferenceController<TFutureState<UE::Cook::FCookOnTheFlyResponse>,1> *this)

{
  TFutureState<UE::Cook::FCookOnTheFlyResponse>::~TFutureState<UE::Cook::FCookOnTheFlyResponse>
            ((TFutureState<UE::Cook::FCookOnTheFlyResponse> *)&this->ObjectStorage);
  return;
}

