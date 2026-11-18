// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HttpReplayStreaming
// Functions: 2

// Destruct @ 146cbb240

void __cdecl
UE::Core::Private::
TDestructorCaller<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct
          (void *param_1)

{
  return;
}

// Destruct @ 146cbb250

void __cdecl
UE::Core::Private::TDestructorCaller<TSharedPtr<FUniqueNetId_const_,1>_>::Destruct(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
  return;
}

