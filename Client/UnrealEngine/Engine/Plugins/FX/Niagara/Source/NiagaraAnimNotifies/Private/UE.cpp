// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraAnimNotifies
// Functions: 4

// Construct<FCurveParameterPair> @ 14a067ef0

void __cdecl UE::CoreUObject::Private::Construct<FCurveParameterPair>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FCurveParameterPair> @ 14a067f00

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCurveParameterPair>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FCurveParameterPair> @ 14a067f10

void __cdecl UE::CoreUObject::Private::Destruct<FCurveParameterPair>(void *param_1)

{
  return;
}

// Copy<FCurveParameterPair> @ 14a067f20

bool __cdecl
UE::CoreUObject::Private::Copy<FCurveParameterPair>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

