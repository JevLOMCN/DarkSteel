// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 5

// Construct<FChaosClothWeightedValue> @ 14db7a040

void __cdecl UE::CoreUObject::Private::Construct<FChaosClothWeightedValue>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f800000;
  return;
}

// ConstructForTests<FChaosClothWeightedValue> @ 14db7a060

void __cdecl UE::CoreUObject::Private::ConstructForTests<FChaosClothWeightedValue>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f800000;
  return;
}

// Destruct<FChaosClothWeightedValue> @ 14db7a080

void __cdecl UE::CoreUObject::Private::Destruct<FChaosClothWeightedValue>(void *param_1)

{
  return;
}

// Copy<FChaosClothWeightedValue> @ 14db7a090

bool __cdecl
UE::CoreUObject::Private::Copy<FChaosClothWeightedValue>(void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      uVar1 = *(undefined4 *)((longlong)param_2 + 4);
      *(undefined4 *)(lVar2 + (longlong)param_2) = *(undefined4 *)param_2;
      *(undefined4 *)(lVar2 + 4 + (longlong)param_2) = uVar1;
      param_2 = (void *)((longlong)param_2 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// DereferenceIfNecessary<Chaos::ClothingSimulationConsole::FCommand,Chaos::ClothingSimulationConsole::FCommand_*_&> @ 14db7fe50

FCommand * __cdecl
UE::Core::Private::
DereferenceIfNecessary<Chaos::ClothingSimulationConsole::FCommand,Chaos::ClothingSimulationConsole::FCommand_*_&>
          (FCommand **param_1)

{
  return *param_1;
}

