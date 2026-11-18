// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 3

// Construct @ 145dfe3d0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<TUniqueFunction<void___cdecl(FRHICommandList_&)>_>::
Construct(void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 0x28) = *(undefined8 *)((longlong)param_2 + 0x28);
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x18);
  *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
  if (*(longlong *)param_1 != 0) {
    *(undefined8 *)param_2 = 0;
  }
  return;
}

// Construct @ 145dfe410

void __cdecl
UE::Core::Private::
TMoveConstructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Construct
          (void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 0x28) = *(undefined8 *)((longlong)param_2 + 0x28);
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x18);
  *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
  if (*(longlong *)param_1 != 0) {
    *(undefined8 *)param_2 = 0;
  }
  return;
}

// Construct @ 145dfe450

void __cdecl
UE::Core::Private::TMoveConstructorCaller<TUniqueFunction<void___cdecl(void)>_>::Construct
          (void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 0x28) = *(undefined8 *)((longlong)param_2 + 0x28);
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x18);
  *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
  if (*(longlong *)param_1 != 0) {
    *(undefined8 *)param_2 = 0;
  }
  return;
}

