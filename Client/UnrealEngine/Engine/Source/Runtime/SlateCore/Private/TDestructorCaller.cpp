// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 19

// Destruct @ 14257c9c0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Slate::Private::FConstructionCounter>::Destruct
          (void *param_1)

{
  return;
}

// Destruct @ 14257c9d0

void __cdecl UE::Core::Private::TDestructorCaller<FMargin>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 14257c9e0

void __cdecl
UE::Core::Private::
TDestructorCaller<TDelegate<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy>_>
::Destruct(void *param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(param_1);
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(param_1);
  return;
}

// Destruct @ 14257ca10

void __cdecl
UE::Core::Private::TDestructorCaller<TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>_>::
Destruct(void *param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(param_1);
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(param_1);
  return;
}

// Destruct @ 14257ca40

void __cdecl
UE::Core::Private::TDestructorCaller<TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>_>::
Destruct(void *param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(param_1);
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(param_1);
  return;
}

// Destruct @ 1425da620

void __cdecl UE::Core::Private::TDestructorCaller<FSlateBrush_const_*>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 1425da630

void __cdecl
UE::Core::Private::TDestructorCaller<TOptional<UE::Math::TVector2<double>_>_>::Destruct
          (void *param_1)

{
  return;
}

// Destruct @ 1425da640

void __cdecl
UE::Core::Private::TDestructorCaller<TOptional<TTransform2<float>_>_>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 1425da650

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Math::TVector2<double>_>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 1425da660

void __cdecl UE::Core::Private::TDestructorCaller<EVisibility>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 1425da670

void __cdecl UE::Core::Private::TDestructorCaller<FSlateColor>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 1425da680

void __cdecl
UE::Core::Private::
TDestructorCaller<TDelegate<TOptional<UE::Math::TVector2<double>_>___cdecl(void),FDefaultDelegateUserPolicy>_>
::Destruct(void *param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(param_1);
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(param_1);
  return;
}

// Destruct @ 1425da6b0

void __cdecl
UE::Core::Private::
TDestructorCaller<TDelegate<TOptional<TTransform2<float>_>___cdecl(void),FDefaultDelegateUserPolicy>_>
::Destruct(void *param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(param_1);
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(param_1);
  return;
}

// Destruct @ 1425da6e0

void __cdecl
UE::Core::Private::
TDestructorCaller<TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>_>::
Destruct(void *param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(param_1);
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(param_1);
  return;
}

// Destruct @ 1425da710

void __cdecl
UE::Core::Private::
TDestructorCaller<TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct
          (void *param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(param_1);
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(param_1);
  return;
}

// Destruct @ 1425da740

void __cdecl
UE::Core::Private::
TDestructorCaller<TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct
          (void *param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(param_1);
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(param_1);
  return;
}

// Destruct @ 1425da770

void __cdecl
UE::Core::Private::TDestructorCaller<TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>_>::
Destruct(void *param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(param_1);
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(param_1);
  return;
}

// Destruct @ 1425da7a0

void __cdecl
UE::Core::Private::
TDestructorCaller<TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>_>::
Destruct(void *param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(param_1);
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(param_1);
  return;
}

// Destruct @ 1425da7d0

void __cdecl
UE::Core::Private::TDestructorCaller<TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>::
Destruct(void *param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(param_1);
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(param_1);
  return;
}

