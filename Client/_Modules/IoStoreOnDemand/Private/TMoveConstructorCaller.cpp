// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 4

// Construct @ 1445bd8c0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<void_*>::Construct(void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  return;
}

// Construct @ 1445bd8d0

void __cdecl
UE::Core::Private::
TMoveConstructorCaller<TValueOrError<__int64,UE::UnifiedError::FError>::FEmptyType>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 1445bd8e0

void __cdecl
UE::Core::Private::
TMoveConstructorCaller<TValueOrError<__int64,UE::UnifiedError::FError>::FWrapErrorType>::Construct
          (void *param_1,void *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStackX_8 [8];
  
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  *(undefined4 *)param_2 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = *(undefined4 *)((longlong)param_2 + 4);
  plVar1 = *(longlong **)((longlong)param_2 + 8);
  *(undefined4 *)((longlong)param_2 + 4) = 0;
  if (plVar1 != (longlong *)0x0) {
    plVar2 = *(longlong **)((longlong)param_1 + 8);
    if (plVar2 != plVar1) {
      *(longlong **)((longlong)param_1 + 8) = plVar1;
      (**(code **)(*plVar1 + 8))(plVar1,auStackX_8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    plVar1 = *(longlong **)((longlong)param_2 + 8);
    if (plVar1 != (longlong *)0x0) {
      *(undefined8 *)((longlong)param_2 + 8) = 0;
      (**(code **)(*plVar1 + 0x10))();
    }
  }
  return;
}

// Construct @ 1445bd8f0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::FIoHttpRequest>::Construct
          (void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)param_2 = 0;
  return;
}

