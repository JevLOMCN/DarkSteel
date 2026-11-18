// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 9

// Destruct @ 142c7c3b0

void __cdecl UE::Core::Private::TDestructorCaller<void_const_*>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 142c7c3c0

void __cdecl UE::Core::Private::TDestructorCaller<UObject_const_*>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 142c7c3d0

void __cdecl UE::Core::Private::TDestructorCaller<__int64>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 142c7c400

void __cdecl UE::Core::Private::TDestructorCaller<FName>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 142c7c410

void __cdecl
UE::Core::Private::TDestructorCaller<TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
::Destruct(void *param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 != (void *)0x0) {
    if (*(void **)((longlong)pvVar1 + 0x10) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)pvVar1 + 0x10));
    }
    ::operator_delete(pvVar1,0x20);
    return;
  }
  return;
}

// Destruct @ 142caacd0

void __cdecl UE::Core::Private::TDestructorCaller<FString_const_*>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 142caace0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Editor::DataStorage::Private::TConvertibleProperty<FText>_>
::Destruct(void *param_1)

{
  longlong *plVar1;
  
  if (*(longlong **)((longlong)param_1 + 0x30) != (longlong *)0x0) {
    (**(code **)(**(longlong **)((longlong)param_1 + 0x30) + 0x10))();
  }
  if (*(longlong *)param_1 != 0) {
    plVar1 = (longlong *)((longlong)param_1 + 0x10);
    if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)param_1 + 0x28);
    }
                    /* WARNING: Could not recover jumptable at 0x000142caad15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// Destruct @ 142caad30

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Editor::DataStorage::Private::TDirectProperty<FText>_>::
Destruct(void *param_1)

{
  return;
}

// Destruct @ 142caad40

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Editor::DataStorage::Private::TEmptyProperty<FText>_>::
Destruct(void *param_1)

{
  return;
}

