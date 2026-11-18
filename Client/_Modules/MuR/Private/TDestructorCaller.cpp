// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 11

// Destruct @ 14a9a2ba0

void __cdecl
UE::Core::Private::TDestructorCaller<TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>::Destruct
          (void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
  return;
}

// Destruct @ 14aac34b0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Math::TVector4<float>_>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 14aac34c0

void __cdecl
UE::Core::Private::
TDestructorCaller<UE::Mutable::Private::Private::TIndirectObject<UE::Math::TMatrix<float>_>_>::
Destruct(void *param_1)

{
  ::operator_delete(*(void **)param_1,0x40);
  return;
}

// Destruct @ 14aac34e0

void __cdecl
UE::Core::Private::
TDestructorCaller<UE::Mutable::Private::Private::TIndirectObject<UE::Mutable::Private::FProjector>_>
::Destruct(void *param_1)

{
  ::operator_delete(*(void **)param_1,0x38);
  return;
}

// Destruct @ 14aac3500

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Mutable::Private::Private::TIndirectObject<FString>_>::
Destruct(void *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)param_1;
  if (puVar1 != (undefined8 *)0x0) {
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
    ::operator_delete(puVar1,0x10);
    return;
  }
  return;
}

// Destruct @ 14aac3540

void __cdecl
UE::Core::Private::TDestructorCaller<TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1>_>::
Destruct(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
  return;
}

// Destruct @ 14aac3550

void __cdecl
UE::Core::Private::TDestructorCaller<TSharedPtr<UE::Mutable::Private::FInstance_const_,1>_>::
Destruct(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
  return;
}

// Destruct @ 14aac3560

void __cdecl
UE::Core::Private::TDestructorCaller<TSharedPtr<UE::Mutable::Private::String_const_,1>_>::Destruct
          (void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
  return;
}

// Destruct @ 14aac3570

void __cdecl
UE::Core::Private::
TDestructorCaller<TStrongObjectPtr<UMaterialInterface,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
::Destruct(void *param_1)

{
  if (*(UObject **)param_1 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(*(UObject **)param_1);
    *(undefined8 *)param_1 = 0;
  }
  return;
}

// Destruct @ 14aac35a0

void __cdecl
UE::Core::Private::
TDestructorCaller<TStrongObjectPtr<USkeletalMesh,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
::Destruct(void *param_1)

{
  if (*(UObject **)param_1 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(*(UObject **)param_1);
    *(undefined8 *)param_1 = 0;
  }
  return;
}

// Destruct @ 14aac35d0

void __cdecl
UE::Core::Private::
TDestructorCaller<TStrongObjectPtr<UTexture,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>_>
::Destruct(void *param_1)

{
  if (*(UObject **)param_1 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(*(UObject **)param_1);
    *(undefined8 *)param_1 = 0;
  }
  return;
}

