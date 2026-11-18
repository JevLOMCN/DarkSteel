// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UniversalObjectLocator
// Functions: 2

// Destruct @ 144347600

void __cdecl
UE::Core::Private::TDestructorCaller<UE::UniversalObjectLocator::FResolveResultData>::Destruct
          (void *param_1)

{
  return;
}

// Destruct @ 144347610

void __cdecl
UE::Core::Private::TDestructorCaller<TFuture<UE::UniversalObjectLocator::FResolveResultData>_>::
Destruct(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
  return;
}

