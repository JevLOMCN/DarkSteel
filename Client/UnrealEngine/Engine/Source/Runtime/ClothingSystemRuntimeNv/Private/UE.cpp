// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ClothingSystemRuntimeNv
// Functions: 4

// Construct<FClothConstraintSetupNv> @ 148c35a10

void __cdecl UE::CoreUObject::Private::Construct<FClothConstraintSetupNv>(void *param_1)

{
  *(undefined4 *)param_1 = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
  return;
}

// ConstructForTests<FClothConstraintSetupNv> @ 148c35a40

void __cdecl UE::CoreUObject::Private::ConstructForTests<FClothConstraintSetupNv>(void *param_1)

{
  *(undefined4 *)param_1 = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
  return;
}

// Destruct<FClothConstraintSetupNv> @ 148c35a70

void __cdecl UE::CoreUObject::Private::Destruct<FClothConstraintSetupNv>(void *param_1)

{
  return;
}

// Copy<FClothConstraintSetupNv> @ 148c35a80

bool __cdecl
UE::CoreUObject::Private::Copy<FClothConstraintSetupNv>(void *param_1,void *param_2,int param_3)

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

