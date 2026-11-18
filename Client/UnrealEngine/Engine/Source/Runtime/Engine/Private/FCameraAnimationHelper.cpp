// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// ApplyOffset @ 147694610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
FCameraAnimationHelper::ApplyOffset
          (TMatrix<double> *param_1,FMinimalViewInfo *param_2,FCameraAnimationHelperOffset *param_3,
          TVector<double> *param_4,TRotator<double> *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  TMatrix<double> *pTVar14;
  TRotator<double> *pTVar15;
  undefined1 auStack_398 [32];
  TRotator<double> local_378;
  TMatrix<double> local_358;
  TMatrix<double> local_2d8;
  TMatrix<double> local_258;
  TMatrix<double> local_1d8;
  TMatrix<double> local_158;
  TMatrix<double> local_d8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_398;
  UE::Math::TRotationMatrix<double>::TRotationMatrix<double>
            ((TRotationMatrix<double> *)&local_258,&param_2->Rotation);
  UE::Math::TRotationMatrix<double>::TRotationMatrix<double>
            ((TRotationMatrix<double> *)&local_1d8,&param_3->Rotation);
  dVar4 = (param_3->Location).field0_0x0._s_0.X;
  dVar5 = (param_3->Location).field0_0x0._s_0.Y;
  dVar1 = (param_3->Location).field0_0x0._s_0.Z;
  dVar6 = param_1->M[1][1];
  dVar7 = param_1->M[0][1];
  dVar8 = param_1->M[0][2];
  dVar9 = param_1->M[2][1];
  dVar10 = param_1->M[3][1];
  dVar11 = param_1->M[1][2];
  dVar12 = param_1->M[2][2];
  dVar13 = param_1->M[3][2];
  dVar2 = (param_2->Location).field0_0x0._s_0.Z;
  dVar3 = (param_2->Location).field0_0x0._s_0.Y;
  (param_4->field0_0x0)._s_0.X =
       dVar5 * param_1->M[1][0] + dVar4 * param_1->M[0][0] + dVar1 * param_1->M[2][0] +
       param_1->M[3][0] * 0.0 + (param_2->Location).field0_0x0._s_0.X;
  (param_4->field0_0x0)._s_0.Y =
       dVar5 * dVar6 + dVar4 * dVar7 + dVar1 * dVar9 + dVar10 * 0.0 + dVar3;
  (param_4->field0_0x0)._s_0.Z =
       dVar8 * dVar4 + dVar11 * dVar5 + dVar12 * dVar1 + dVar13 * 0.0 + dVar2;
  pTVar14 = UE::Math::TMatrix<double>::Inverse(param_1,&local_358);
  VectorMatrixMultiply(&local_2d8,&local_258,pTVar14);
  pTVar14 = UE::Math::TMatrix<double>::Inverse(&local_2d8,&local_358);
  VectorMatrixMultiply(&local_158,&local_1d8,pTVar14);
  VectorMatrixMultiply(&local_d8,&local_2d8,&local_158);
  VectorMatrixMultiply(&local_358,&local_d8,&local_258);
  pTVar15 = UE::Math::TMatrix<double>::Rotator(&local_358,&local_378);
  dVar1 = pTVar15->Yaw;
  param_5->Pitch = pTVar15->Pitch;
  param_5->Yaw = dVar1;
  param_5->Roll = pTVar15->Roll;
  return;
}

// ApplyOffset @ 147694800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
FCameraAnimationHelper::ApplyOffset
          (FMinimalViewInfo *param_1,FCameraAnimationHelperOffset *param_2,TVector<double> *param_3,
          TRotator<double> *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  TRotator<double> *pTVar6;
  undefined1 auStack_208 [32];
  TRotator<double> local_1e8;
  TMatrix<double> local_1c8;
  TMatrix<double> local_148;
  TMatrix<double> local_c8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_208;
  UE::Math::TRotationMatrix<double>::TRotationMatrix<double>
            ((TRotationMatrix<double> *)&local_1c8,&param_1->Rotation);
  UE::Math::TRotationMatrix<double>::TRotationMatrix<double>
            ((TRotationMatrix<double> *)&local_148,&param_2->Rotation);
  dVar4 = (param_2->Location).field0_0x0._s_0.X;
  dVar5 = (param_2->Location).field0_0x0._s_0.Y;
  dVar1 = (param_2->Location).field0_0x0._s_0.Z;
  dVar2 = (param_1->Location).field0_0x0._s_0.Z;
  dVar3 = (param_1->Location).field0_0x0._s_0.Y;
  (param_3->field0_0x0)._s_0.X =
       dVar5 * local_1c8.M[1][0] + dVar4 * local_1c8.M[0][0] + dVar1 * local_1c8.M[2][0] +
       local_1c8.M[3][0] * 0.0 + (param_1->Location).field0_0x0._s_0.X;
  (param_3->field0_0x0)._s_0.Y =
       dVar5 * local_1c8.M[1][1] + dVar4 * local_1c8.M[0][1] + dVar1 * local_1c8.M[2][1] +
       local_1c8.M[3][1] * 0.0 + dVar3;
  (param_3->field0_0x0)._s_0.Z =
       dVar5 * local_1c8.M[1][2] + dVar4 * local_1c8.M[0][2] + dVar1 * local_1c8.M[2][2] +
       local_1c8.M[3][2] * 0.0 + dVar2;
  VectorMatrixMultiply(&local_c8,&local_148,&local_1c8);
  pTVar6 = UE::Math::TMatrix<double>::Rotator(&local_c8,&local_1e8);
  dVar1 = pTVar6->Yaw;
  param_4->Pitch = pTVar6->Pitch;
  param_4->Yaw = dVar1;
  param_4->Roll = pTVar6->Roll;
  return;
}

