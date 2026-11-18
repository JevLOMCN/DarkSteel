// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// StaticStruct @ 14a202940

UScriptStruct * __cdecl FCRSimPointConstraint::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCRSimPointConstraint.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FCRSimPointConstraint.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCRSimPointConstraint,(UObject *)pUVar1,
                         L"CRSimPointConstraint");
  }
  return Z_Registration_Info_UScriptStruct_FCRSimPointConstraint.OuterSingleton;
}

// Apply @ 14a23e810

void __thiscall
FCRSimPointConstraint::Apply
          (FCRSimPointConstraint *this,FRigVMSimPoint *param_1,FRigVMSimPoint *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  ECRSimConstraintType EVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  
  EVar4 = this->Type;
  if (((EVar4 != Distance) && (EVar4 != DistanceFromA)) && (EVar4 != DistanceFromB)) {
    if (EVar4 != Plane) {
      return;
    }
    dVar8 = (param_1->Position).field0_0x0._s_0.X;
    dVar1 = (param_1->Position).field0_0x0._s_0.Y;
    dVar2 = (param_1->Position).field0_0x0._s_0.Z;
    dVar3 = (this->DataB).field0_0x0._s_0.Y;
    dVar9 = (this->DataB).field0_0x0._s_0.Z;
    dVar11 = (dVar1 - (this->DataA).field0_0x0._s_0.Y) * dVar3 +
             (dVar8 - (this->DataA).field0_0x0._s_0.X) * (this->DataB).field0_0x0._s_0.X +
             (dVar2 - (this->DataA).field0_0x0._s_0.Z) * dVar9;
    (param_1->Position).field0_0x0._s_0.X = dVar8 - dVar11 * (this->DataB).field0_0x0._s_0.X;
    (param_1->Position).field0_0x0._s_0.Y = dVar1 - dVar11 * dVar3;
    (param_1->Position).field0_0x0._s_0.Z = dVar2 - dVar11 * dVar9;
    return;
  }
  fVar14 = __real_3f800000;
  if (EVar4 == Distance) {
    fVar7 = param_2->Mass;
    fVar13 = param_1->Mass;
    if (fVar13 <= __real_322bcc77) {
      if (__real_322bcc77 < fVar7) goto LAB_14a23e91b;
    }
    else if (fVar7 <= __real_322bcc77) {
      fVar13 = 0.0;
      goto LAB_14a23e975;
    }
    if (fVar13 + fVar7 <= __real_322bcc77) {
      return;
    }
    fVar14 = __real_3f800000 / (fVar13 + fVar7);
    fVar13 = fVar14 * fVar13;
    fVar14 = fVar14 * fVar7;
    if (__real_3f800000 <= fVar13) {
      fVar13 = __real_3f800000;
    }
    if (__real_3f800000 <= fVar14) {
      fVar14 = __real_3f800000;
    }
    if (fVar13 <= 0.0) {
      fVar13 = 0.0;
    }
    if (fVar14 <= 0.0) {
      fVar14 = 0.0;
    }
    if (fVar13 + fVar14 <= __real_322bcc77) {
      return;
    }
  }
  else {
    if (EVar4 != DistanceFromA) {
      fVar13 = 0.0;
      goto LAB_14a23e975;
    }
LAB_14a23e91b:
    fVar13 = __real_3f800000;
    fVar14 = 0.0;
  }
LAB_14a23e975:
  dVar9 = (param_1->Position).field0_0x0._s_0.X - (param_2->Position).field0_0x0._s_0.X;
  dVar8 = (param_1->Position).field0_0x0._s_0.Y;
  dVar2 = dVar8 - (param_2->Position).field0_0x0._s_0.Y;
  dVar1 = (param_1->Position).field0_0x0._s_0.Z;
  auVar5._0_8_ = dVar9 * dVar9;
  auVar5._8_8_ = 0;
  dVar3 = dVar1 - (param_2->Position).field0_0x0._s_0.Z;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = dVar2 * dVar2 + auVar5._0_8_ + dVar3 * dVar3;
  auVar6 = sqrtpd(auVar5,auVar6);
  fVar7 = (float)auVar6._0_8_;
  if (__real_322bcc77 <= fVar7) {
    dVar12 = (double)((float)(this->DataA).field0_0x0._s_0.X - fVar7);
    dVar11 = __real_3ff0000000000000 / (double)fVar7;
    dVar9 = dVar12 * dVar9 * dVar11;
    dVar10 = dVar12 * dVar2 * dVar11;
    dVar11 = dVar12 * dVar3 * dVar11;
    dVar2 = (double)fVar14;
    (param_1->Position).field0_0x0._s_0.X = dVar9 * dVar2 + (param_1->Position).field0_0x0._s_0.X;
    (param_1->Position).field0_0x0._s_0.Y = dVar10 * dVar2 + dVar8;
    dVar8 = (double)fVar13;
    (param_1->Position).field0_0x0._s_0.Z = dVar11 * dVar2 + dVar1;
    (param_2->Position).field0_0x0._s_0.X = (param_2->Position).field0_0x0._s_0.X - dVar9 * dVar8;
    (param_2->Position).field0_0x0._s_0.Y = (param_2->Position).field0_0x0._s_0.Y - dVar10 * dVar8;
    (param_2->Position).field0_0x0._s_0.Z = (param_2->Position).field0_0x0._s_0.Z - dVar11 * dVar8;
  }
  return;
}

