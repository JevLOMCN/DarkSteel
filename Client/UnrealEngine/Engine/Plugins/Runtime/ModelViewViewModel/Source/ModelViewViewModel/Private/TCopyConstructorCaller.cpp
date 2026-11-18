// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelViewViewModel
// Functions: 3

// Construct @ 14a744ca0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UObject_*>::Construct(void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  return;
}

// Construct @ 14a744cb0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<FEmptyVariantState>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14a744cc0

void __cdecl
UE::Core::Private::
TCopyConstructorCaller<UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer>::Construct
          (void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  return;
}

