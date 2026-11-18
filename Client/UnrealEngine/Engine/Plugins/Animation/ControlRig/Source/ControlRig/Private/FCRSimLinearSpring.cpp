// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// StaticStruct @ 14a2025f0

UScriptStruct * __cdecl FCRSimLinearSpring::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCRSimLinearSpring.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FCRSimLinearSpring.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCRSimLinearSpring,(UObject *)pUVar1,
                         L"CRSimLinearSpring");
  }
  return Z_Registration_Info_UScriptStruct_FCRSimLinearSpring.OuterSingleton;
}

// CalculateForPoints @ 14a243aa0

void __thiscall
FCRSimLinearSpring::CalculateForPoints
          (FCRSimLinearSpring *this,FRigVMSimPoint *param_1,FRigVMSimPoint *param_2,
          TVector<double> *param_3,TVector<double> *param_4)

{
  double dVar1;
  float fVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar7;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  fVar2 = __real_322bcc77;
  (param_4->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_4->field0_0x0)._s_0.Y = (double)uVar3;
  (param_4->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar1 = (param_4->field0_0x0)._s_0.Y;
  (param_3->field0_0x0)._s_0.X = (param_4->field0_0x0)._s_0.X;
  (param_3->field0_0x0)._s_0.Y = dVar1;
  (param_3->field0_0x0)._s_0.Z = (param_4->field0_0x0)._s_0.Z;
  fVar8 = param_2->Mass;
  fVar15 = param_1->Mass;
  if (fVar15 <= fVar2) {
    if (fVar2 < fVar8) {
      fVar14 = 0.0;
      fVar15 = __real_3f800000;
      goto LAB_14a243b65;
    }
  }
  else if (fVar8 <= fVar2) {
    fVar15 = 0.0;
    fVar14 = __real_3f800000;
    goto LAB_14a243b65;
  }
  if (fVar15 + fVar8 <= fVar2) {
    return;
  }
  fVar14 = __real_3f800000 / (fVar15 + fVar8);
  fVar15 = fVar14 * fVar15;
  fVar14 = fVar14 * fVar8;
  if (__real_3f800000 <= fVar15) {
    fVar15 = __real_3f800000;
  }
  if (__real_3f800000 <= fVar14) {
    fVar14 = __real_3f800000;
  }
  if (fVar15 <= 0.0) {
    fVar15 = 0.0;
  }
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  if (fVar15 + fVar14 <= fVar2) {
    return;
  }
LAB_14a243b65:
  dVar11 = (param_1->Position).field0_0x0._s_0.X - (param_2->Position).field0_0x0._s_0.X;
  dVar1 = (param_1->Position).field0_0x0._s_0.Y - (param_2->Position).field0_0x0._s_0.Y;
  dVar13 = (param_1->Position).field0_0x0._s_0.Z - (param_2->Position).field0_0x0._s_0.Z;
  auVar5._0_8_ = dVar11 * dVar11;
  auVar5._8_8_ = 0;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = dVar1 * dVar1 + auVar5._0_8_ + dVar13 * dVar13;
  auVar6 = sqrtpd(auVar5,auVar6);
  fVar8 = (float)auVar6._0_8_;
  if (fVar2 <= fVar8) {
    dVar9 = (double)(this->Equilibrium - fVar8);
    dVar12 = __real_3ff0000000000000 / (double)fVar8;
    dVar10 = dVar9 * dVar11 * dVar12;
    dVar11 = dVar9 * dVar13 * dVar12;
    dVar12 = dVar9 * dVar1 * dVar12;
    dVar1 = (double)this->Coefficient;
    dVar9 = (double)fVar14;
    (param_3->field0_0x0)._s_0.X = dVar10 * dVar1 * dVar9;
    (param_3->field0_0x0)._s_0.Y = dVar12 * dVar1 * dVar9;
    dVar13 = (double)fVar15;
    (param_3->field0_0x0)._s_0.Z = dVar11 * dVar1 * dVar9;
    dVar9 = (double)this->Coefficient;
    dVar1 = dVar11 * dVar9 * dVar13;
    dVar11 = dVar10 * dVar9 * dVar13;
    dVar13 = dVar12 * dVar9 * dVar13;
    uVar4 = (uint)__xmm_80000000000000008000000000000000;
    uVar7 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    (param_4->field0_0x0)._s_0.X =
         (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) ^ uVar7,SUB84(dVar11,0) ^ uVar4);
    (param_4->field0_0x0)._s_0.Y =
         (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) ^ uVar7,SUB84(dVar13,0) ^ uVar4);
    (param_4->field0_0x0)._s_0.Z =
         (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^ uVar7,SUB84(dVar1,0) ^ uVar4);
  }
  return;
}

