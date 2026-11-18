// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolMenus
// Functions: 3

// Construct @ 142c504a0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<TAttribute<EVisibility>_>::Construct
          (void *param_1,void *param_2)

{
  *(undefined1 *)param_1 = *(undefined1 *)param_2;
  *(undefined1 *)((longlong)param_1 + 1) = *(undefined1 *)((longlong)param_2 + 1);
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)
             ((longlong)param_1 + 8),
             (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)
             ((longlong)param_2 + 8));
  return;
}

// Construct @ 142c504c0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<TAttribute<bool>_>::Construct(void *param_1,void *param_2)

{
  *(undefined1 *)param_1 = *(undefined1 *)param_2;
  *(undefined1 *)((longlong)param_1 + 1) = *(undefined1 *)((longlong)param_2 + 1);
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)param_1 + 8),
             (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)param_2 + 8));
  return;
}

// Construct @ 142c504f0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>
::Construct(void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (param_1,param_2);
  return;
}

