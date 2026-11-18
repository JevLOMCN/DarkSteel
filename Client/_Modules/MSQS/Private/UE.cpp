// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSQS
// Functions: 4

// Construct<FMaterialQualityOverrides> @ 1446f0540

void __cdecl UE::CoreUObject::Private::Construct<FMaterialQualityOverrides>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x2000000;
  return;
}

// ConstructForTests<FMaterialQualityOverrides> @ 1446f0560

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMaterialQualityOverrides>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x2000000;
  return;
}

// Destruct<FMaterialQualityOverrides> @ 1446f0580

void __cdecl UE::CoreUObject::Private::Destruct<FMaterialQualityOverrides>(void *param_1)

{
  return;
}

// Copy<FMaterialQualityOverrides> @ 1446f0590

bool __cdecl
UE::CoreUObject::Private::Copy<FMaterialQualityOverrides>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

