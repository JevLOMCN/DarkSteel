// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 19

// Destruct @ 14272bed0

void __cdecl UE::Core::Private::TDestructorCaller<FLinearColor>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 14272bee0

void __cdecl
UE::Core::Private::
TDestructorCaller<TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct
          (void *param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(param_1);
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(param_1);
  return;
}

// Destruct @ 142801a60

void __cdecl
UE::Core::Private::
TDestructorCaller<TDelegate<enum_UE::Slate::PrioritizedWrapBox::EWrapMode___cdecl(void),FDefaultDelegateUserPolicy>_>
::Destruct(void *param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(param_1);
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(param_1);
  return;
}

// Destruct @ 142801a90

void __cdecl
UE::Core::Private::TDestructorCaller<enum_UE::Slate::PrioritizedWrapBox::EWrapMode>::Destruct
          (void *param_1)

{
  return;
}

// Destruct @ 1429251e0

void __cdecl UE::Core::Private::TDestructorCaller<TOptional<int>_>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 1429251f0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Math::TVector4<double>_>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 142925200

void __cdecl
UE::Core::Private::
TDestructorCaller<TDelegate<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct
          (void *param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(param_1);
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(param_1);
  return;
}

// Destruct @ 142925230

void __cdecl
UE::Core::Private::
TDestructorCaller<TDelegate<UE::Math::TVector4<double>___cdecl(void),FDefaultDelegateUserPolicy>_>::
Destruct(void *param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(param_1);
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(param_1);
  return;
}

// Destruct @ 1429e3f40

void __cdecl UE::Core::Private::TDestructorCaller<FSlateFontInfo>::Destruct(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x38));
  return;
}

// Destruct @ 1429e3f50

void __cdecl
UE::Core::Private::
TDestructorCaller<TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct
          (void *param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(param_1);
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(param_1);
  return;
}

// Destruct @ 1429e3f80

void __cdecl
UE::Core::Private::TDestructorCaller<TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>_>::
Destruct(void *param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(param_1);
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(param_1);
  return;
}

// Destruct @ 1429e3fb0

void __cdecl
UE::Core::Private::
TDestructorCaller<TDelegate<enum_EHorizontalAlignment___cdecl(void),FDefaultDelegateUserPolicy>_>::
Destruct(void *param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(param_1);
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(param_1);
  return;
}

// Destruct @ 1429e3fe0

void __cdecl
UE::Core::Private::
TDestructorCaller<TDelegate<enum_ETextTransformPolicy___cdecl(void),FDefaultDelegateUserPolicy>_>::
Destruct(void *param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(param_1);
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(param_1);
  return;
}

// Destruct @ 1429e4010

void __cdecl
UE::Core::Private::
TDestructorCaller<TDelegate<enum_ETextWrappingPolicy___cdecl(void),FDefaultDelegateUserPolicy>_>::
Destruct(void *param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(param_1);
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(param_1);
  return;
}

// Destruct @ 1429e4040

void __cdecl
UE::Core::Private::
TDestructorCaller<TDelegate<enum_ETextJustify::Type___cdecl(void),FDefaultDelegateUserPolicy>_>::
Destruct(void *param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(param_1);
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(param_1);
  return;
}

// Destruct @ 1429e4070

void __cdecl
UE::Core::Private::TDestructorCaller<enum_EHorizontalAlignment>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 1429e4080

void __cdecl
UE::Core::Private::TDestructorCaller<enum_ETextTransformPolicy>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 1429e4090

void __cdecl UE::Core::Private::TDestructorCaller<enum_ETextWrappingPolicy>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 1429e40a0

void __cdecl UE::Core::Private::TDestructorCaller<enum_ETextJustify::Type>::Destruct(void *param_1)

{
  return;
}

