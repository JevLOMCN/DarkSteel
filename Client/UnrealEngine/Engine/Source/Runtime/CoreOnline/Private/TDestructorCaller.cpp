// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreOnline
// Functions: 2

// Destruct @ 144616b10

void __cdecl
UE::Core::Private::
TDestructorCaller<TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>_>::Destruct
          (void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
  return;
}

// Destruct @ 144616b20

void __cdecl
UE::Core::Private::
TDestructorCaller<TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>::Destruct
          (void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
  return;
}

