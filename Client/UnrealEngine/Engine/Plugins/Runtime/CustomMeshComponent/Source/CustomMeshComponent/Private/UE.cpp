// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CustomMeshComponent
// Functions: 4

// Construct<FCustomMeshTriangle> @ 14f02f730

void __cdecl UE::CoreUObject::Private::Construct<FCustomMeshTriangle>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)param_1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x18) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x20) = uVar1;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x38) = uVar1;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// ConstructForTests<FCustomMeshTriangle> @ 14f02f7a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCustomMeshTriangle>(void *param_1)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)param_1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x18) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x20) = uVar1;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x38) = uVar1;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// Destruct<FCustomMeshTriangle> @ 14f02f7f0

void __cdecl UE::CoreUObject::Private::Destruct<FCustomMeshTriangle>(void *param_1)

{
  return;
}

// Copy<FCustomMeshTriangle> @ 14f02f800

bool __cdecl
UE::CoreUObject::Private::Copy<FCustomMeshTriangle>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  
  if (param_3 != 0) {
    lVar10 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined8 *)(lVar10 + 0x40 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar10 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar10 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      puVar1 = (undefined8 *)(lVar10 + 0x20 + (longlong)param_1);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      puVar1 = (undefined8 *)(lVar10 + 0x30 + (longlong)param_1);
      uVar8 = *puVar1;
      uVar9 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar10 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar8;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar9;
      *(undefined8 *)((longlong)param_1 + 0x40) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x48);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

