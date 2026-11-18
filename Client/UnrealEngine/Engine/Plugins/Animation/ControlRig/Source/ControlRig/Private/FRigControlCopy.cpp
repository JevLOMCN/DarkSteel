// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 3

// StaticStruct @ 14a3811e0

UScriptStruct * __cdecl FRigControlCopy::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigControlCopy.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigControlCopy.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigControlCopy,(UObject *)pUVar1,
                         L"RigControlCopy");
  }
  return Z_Registration_Info_UScriptStruct_FRigControlCopy.OuterSingleton;
}

// FRigControlCopy @ 14a3b7860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigControlCopy * __thiscall
FRigControlCopy::FRigControlCopy
          (FRigControlCopy *this,FRigControlElement *param_1,URigHierarchy *param_2)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  undefined4 uVar28;
  float fVar29;
  undefined3 uVar30;
  FNameEntryId FVar31;
  FRigControlValue *pFVar32;
  FRigElementKey *pFVar33;
  TTransform<double> *pTVar34;
  undefined1 auStack_108 [32];
  FRigElementKey local_d8;
  FRigElementKey local_c8;
  FRigControlValue local_b8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  (this->Name).ComparisonIndex = 0;
  (this->Name).Number = 0;
  (this->ParentKey).Type = None;
  (this->ParentKey).Name.ComparisonIndex = 0;
  (this->ParentKey).Name.Number = 0;
  (this->Value).FloatStorage.Float00 = 0.0;
  (this->Value).FloatStorage.Float01 = 0.0;
  (this->Value).FloatStorage.Float02 = 0.0;
  (this->Value).FloatStorage.Float03 = 0.0;
  (this->Value).FloatStorage.Float10 = 0.0;
  (this->Value).FloatStorage.Float11 = 0.0;
  (this->Value).FloatStorage.Float12 = 0.0;
  (this->Value).FloatStorage.Float13 = 0.0;
  (this->Value).FloatStorage.Float20 = 0.0;
  (this->Value).FloatStorage.Float21 = 0.0;
  (this->Value).FloatStorage.Float22 = 0.0;
  (this->Value).FloatStorage.Float23 = 0.0;
  (this->Value).FloatStorage.Float30 = 0.0;
  (this->Value).FloatStorage.Float31 = 0.0;
  (this->Value).FloatStorage.Float32 = 0.0;
  (this->Value).FloatStorage.Float33 = 0.0;
  (this->Value).FloatStorage.Float00_2 = 0.0;
  (this->Value).FloatStorage.Float01_2 = 0.0;
  (this->Value).FloatStorage.Float02_2 = 0.0;
  (this->Value).FloatStorage.Float03_2 = 0.0;
  (this->Value).FloatStorage.Float10_2 = 0.0;
  (this->Value).FloatStorage.Float11_2 = 0.0;
  (this->Value).FloatStorage.Float12_2 = 0.0;
  (this->Value).FloatStorage.Float13_2 = 0.0;
  (this->Value).FloatStorage.Float20_2 = 0.0;
  (this->Value).FloatStorage.Float21_2 = 0.0;
  (this->Value).FloatStorage.Float22_2 = 0.0;
  (this->Value).FloatStorage.Float23_2 = 0.0;
  (this->Value).FloatStorage.Float30_2 = 0.0;
  (this->Value).FloatStorage.Float31_2 = 0.0;
  (this->Value).FloatStorage.Float32_2 = 0.0;
  (this->Value).FloatStorage.Float33_2 = 0.0;
  *(undefined4 *)&(this->Value).FloatStorage.bValid = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->OffsetTransform).Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->OffsetTransform).Rotation.ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->OffsetTransform).Translation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->OffsetTransform).Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->OffsetTransform).Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->OffsetTransform).Scale3D.ZW.m128d_f64 = auVar8;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar9._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar9._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ParentTransform).Rotation.XY.m128d_f64 = auVar9;
  auVar10._8_4_ = SUB84((double)fVar2,0);
  auVar10._0_8_ = (double)fVar1;
  auVar10._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->ParentTransform).Rotation.ZW.m128d_f64 = auVar10;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar11._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar11._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar11._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ParentTransform).Translation.XY.m128d_f64 = auVar11;
  auVar12._8_4_ = SUB84((double)fVar2,0);
  auVar12._0_8_ = (double)fVar1;
  auVar12._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->ParentTransform).Translation.ZW.m128d_f64 = auVar12;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar13._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar13._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar13._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ParentTransform).Scale3D.XY.m128d_f64 = auVar13;
  auVar14._8_4_ = SUB84((double)fVar2,0);
  auVar14._0_8_ = (double)fVar1;
  auVar14._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->ParentTransform).Scale3D.ZW.m128d_f64 = auVar14;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar15._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar15._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar15._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->LocalTransform).Rotation.XY.m128d_f64 = auVar15;
  auVar16._8_4_ = SUB84((double)fVar2,0);
  auVar16._0_8_ = (double)fVar1;
  auVar16._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->LocalTransform).Rotation.ZW.m128d_f64 = auVar16;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar17._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar17._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar17._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->LocalTransform).Translation.XY.m128d_f64 = auVar17;
  auVar18._8_4_ = SUB84((double)fVar2,0);
  auVar18._0_8_ = (double)fVar1;
  auVar18._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->LocalTransform).Translation.ZW.m128d_f64 = auVar18;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar19._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar19._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar19._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->LocalTransform).Scale3D.XY.m128d_f64 = auVar19;
  auVar20._8_4_ = SUB84((double)fVar2,0);
  auVar20._0_8_ = (double)fVar1;
  auVar20._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->LocalTransform).Scale3D.ZW.m128d_f64 = auVar20;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar21._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar21._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar21._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->GlobalTransform).Rotation.XY.m128d_f64 = auVar21;
  auVar22._8_4_ = SUB84((double)fVar2,0);
  auVar22._0_8_ = (double)fVar1;
  auVar22._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->GlobalTransform).Rotation.ZW.m128d_f64 = auVar22;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar23._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar23._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar23._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->GlobalTransform).Translation.XY.m128d_f64 = auVar23;
  auVar24._8_4_ = SUB84((double)fVar2,0);
  auVar24._0_8_ = (double)fVar1;
  auVar24._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->GlobalTransform).Translation.ZW.m128d_f64 = auVar24;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar25._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar25._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar25._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->GlobalTransform).Scale3D.XY.m128d_f64 = auVar25;
  auVar26._8_4_ = SUB84((double)fVar2,0);
  auVar26._0_8_ = (double)fVar1;
  auVar26._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->GlobalTransform).Scale3D.ZW.m128d_f64 = auVar26;
  uVar28 = *(undefined4 *)&param_1->field_0x18;
  (this->Name).ComparisonIndex = (FNameEntryId)*(undefined4 *)&param_1->field_0x14;
  (this->Name).Number = uVar28;
  this->ControlType = (param_1->Settings).ControlType;
  pFVar32 = URigHierarchy::GetControlValue(param_2,&local_b8,param_1,Current,true);
  fVar1 = (pFVar32->FloatStorage).Float01;
  fVar2 = (pFVar32->FloatStorage).Float02;
  fVar29 = (pFVar32->FloatStorage).Float03;
  (this->Value).FloatStorage.Float00 = (pFVar32->FloatStorage).Float00;
  (this->Value).FloatStorage.Float01 = fVar1;
  (this->Value).FloatStorage.Float02 = fVar2;
  (this->Value).FloatStorage.Float03 = fVar29;
  fVar1 = (pFVar32->FloatStorage).Float11;
  fVar2 = (pFVar32->FloatStorage).Float12;
  fVar29 = (pFVar32->FloatStorage).Float13;
  (this->Value).FloatStorage.Float10 = (pFVar32->FloatStorage).Float10;
  (this->Value).FloatStorage.Float11 = fVar1;
  (this->Value).FloatStorage.Float12 = fVar2;
  (this->Value).FloatStorage.Float13 = fVar29;
  fVar1 = (pFVar32->FloatStorage).Float21;
  fVar2 = (pFVar32->FloatStorage).Float22;
  fVar29 = (pFVar32->FloatStorage).Float23;
  (this->Value).FloatStorage.Float20 = (pFVar32->FloatStorage).Float20;
  (this->Value).FloatStorage.Float21 = fVar1;
  (this->Value).FloatStorage.Float22 = fVar2;
  (this->Value).FloatStorage.Float23 = fVar29;
  fVar1 = (pFVar32->FloatStorage).Float31;
  fVar2 = (pFVar32->FloatStorage).Float32;
  fVar29 = (pFVar32->FloatStorage).Float33;
  (this->Value).FloatStorage.Float30 = (pFVar32->FloatStorage).Float30;
  (this->Value).FloatStorage.Float31 = fVar1;
  (this->Value).FloatStorage.Float32 = fVar2;
  (this->Value).FloatStorage.Float33 = fVar29;
  fVar1 = (pFVar32->FloatStorage).Float01_2;
  fVar2 = (pFVar32->FloatStorage).Float02_2;
  fVar29 = (pFVar32->FloatStorage).Float03_2;
  (this->Value).FloatStorage.Float00_2 = (pFVar32->FloatStorage).Float00_2;
  (this->Value).FloatStorage.Float01_2 = fVar1;
  (this->Value).FloatStorage.Float02_2 = fVar2;
  (this->Value).FloatStorage.Float03_2 = fVar29;
  fVar1 = (pFVar32->FloatStorage).Float11_2;
  fVar2 = (pFVar32->FloatStorage).Float12_2;
  fVar29 = (pFVar32->FloatStorage).Float13_2;
  (this->Value).FloatStorage.Float10_2 = (pFVar32->FloatStorage).Float10_2;
  (this->Value).FloatStorage.Float11_2 = fVar1;
  (this->Value).FloatStorage.Float12_2 = fVar2;
  (this->Value).FloatStorage.Float13_2 = fVar29;
  fVar1 = (pFVar32->FloatStorage).Float21_2;
  fVar2 = (pFVar32->FloatStorage).Float22_2;
  fVar29 = (pFVar32->FloatStorage).Float23_2;
  (this->Value).FloatStorage.Float20_2 = (pFVar32->FloatStorage).Float20_2;
  (this->Value).FloatStorage.Float21_2 = fVar1;
  (this->Value).FloatStorage.Float22_2 = fVar2;
  (this->Value).FloatStorage.Float23_2 = fVar29;
  fVar1 = (pFVar32->FloatStorage).Float31_2;
  fVar2 = (pFVar32->FloatStorage).Float32_2;
  fVar29 = (pFVar32->FloatStorage).Float33_2;
  (this->Value).FloatStorage.Float30_2 = (pFVar32->FloatStorage).Float30_2;
  (this->Value).FloatStorage.Float31_2 = fVar1;
  (this->Value).FloatStorage.Float32_2 = fVar2;
  (this->Value).FloatStorage.Float33_2 = fVar29;
  uVar30 = *(undefined3 *)&(pFVar32->FloatStorage).field_0x81;
  (this->Value).FloatStorage.bValid = (pFVar32->FloatStorage).bValid;
  *(undefined3 *)&(this->Value).FloatStorage.field_0x81 = uVar30;
  local_d8.Type = param_1->field_0x10;
  local_d8._1_3_ = *(undefined3 *)&param_1->field_0x11;
  local_d8.Name.ComparisonIndex.Value = *(uint *)&param_1->field_0x14;
  local_d8.Name.Number = *(uint *)&param_1->field_0x18;
  pFVar33 = URigHierarchy::GetFirstParent(param_2,&local_c8,&local_d8);
  uVar30 = *(undefined3 *)&pFVar33->field_0x1;
  FVar31.Value = (pFVar33->Name).ComparisonIndex.Value;
  (this->ParentKey).Type = pFVar33->Type;
  *(undefined3 *)&(this->ParentKey).field_0x1 = uVar30;
  (this->ParentKey).Name.ComparisonIndex = (FNameEntryId)FVar31.Value;
  (this->ParentKey).Name.Number = (pFVar33->Name).Number;
  pTVar34 = URigHierarchy::GetControlOffsetTransform
                      (param_2,(TTransform<double> *)&local_b8,param_1,CurrentLocal);
  dVar27 = (pTVar34->Rotation).XY.m128d_f64[1];
  (this->OffsetTransform).Rotation.XY.m128d_f64[0] = (pTVar34->Rotation).XY.m128d_f64[0];
  (this->OffsetTransform).Rotation.XY.m128d_f64[1] = dVar27;
  dVar27 = (pTVar34->Rotation).ZW.m128d_f64[1];
  (this->OffsetTransform).Rotation.ZW.m128d_f64[0] = (pTVar34->Rotation).ZW.m128d_f64[0];
  (this->OffsetTransform).Rotation.ZW.m128d_f64[1] = dVar27;
  dVar27 = (pTVar34->Translation).XY.m128d_f64[1];
  (this->OffsetTransform).Translation.XY.m128d_f64[0] = (pTVar34->Translation).XY.m128d_f64[0];
  (this->OffsetTransform).Translation.XY.m128d_f64[1] = dVar27;
  dVar27 = (pTVar34->Translation).ZW.m128d_f64[1];
  (this->OffsetTransform).Translation.ZW.m128d_f64[0] = (pTVar34->Translation).ZW.m128d_f64[0];
  (this->OffsetTransform).Translation.ZW.m128d_f64[1] = dVar27;
  dVar27 = (pTVar34->Scale3D).XY.m128d_f64[1];
  (this->OffsetTransform).Scale3D.XY.m128d_f64[0] = (pTVar34->Scale3D).XY.m128d_f64[0];
  (this->OffsetTransform).Scale3D.XY.m128d_f64[1] = dVar27;
  dVar27 = (pTVar34->Scale3D).ZW.m128d_f64[1];
  (this->OffsetTransform).Scale3D.ZW.m128d_f64[0] = (pTVar34->Scale3D).ZW.m128d_f64[0];
  (this->OffsetTransform).Scale3D.ZW.m128d_f64[1] = dVar27;
  pTVar34 = URigHierarchy::GetParentTransform
                      (param_2,(TTransform<double> *)&local_b8,(FRigBaseElement *)param_1,
                       CurrentGlobal);
  dVar27 = (pTVar34->Rotation).XY.m128d_f64[1];
  (this->ParentTransform).Rotation.XY.m128d_f64[0] = (pTVar34->Rotation).XY.m128d_f64[0];
  (this->ParentTransform).Rotation.XY.m128d_f64[1] = dVar27;
  dVar27 = (pTVar34->Rotation).ZW.m128d_f64[1];
  (this->ParentTransform).Rotation.ZW.m128d_f64[0] = (pTVar34->Rotation).ZW.m128d_f64[0];
  (this->ParentTransform).Rotation.ZW.m128d_f64[1] = dVar27;
  dVar27 = (pTVar34->Translation).XY.m128d_f64[1];
  (this->ParentTransform).Translation.XY.m128d_f64[0] = (pTVar34->Translation).XY.m128d_f64[0];
  (this->ParentTransform).Translation.XY.m128d_f64[1] = dVar27;
  dVar27 = (pTVar34->Translation).ZW.m128d_f64[1];
  (this->ParentTransform).Translation.ZW.m128d_f64[0] = (pTVar34->Translation).ZW.m128d_f64[0];
  (this->ParentTransform).Translation.ZW.m128d_f64[1] = dVar27;
  dVar27 = (pTVar34->Scale3D).XY.m128d_f64[1];
  (this->ParentTransform).Scale3D.XY.m128d_f64[0] = (pTVar34->Scale3D).XY.m128d_f64[0];
  (this->ParentTransform).Scale3D.XY.m128d_f64[1] = dVar27;
  dVar27 = (pTVar34->Scale3D).ZW.m128d_f64[1];
  (this->ParentTransform).Scale3D.ZW.m128d_f64[0] = (pTVar34->Scale3D).ZW.m128d_f64[0];
  (this->ParentTransform).Scale3D.ZW.m128d_f64[1] = dVar27;
  pTVar34 = URigHierarchy::GetTransform
                      (param_2,(TTransform<double> *)&local_b8,(FRigTransformElement *)param_1,
                       CurrentLocal);
  dVar27 = (pTVar34->Rotation).XY.m128d_f64[1];
  (this->LocalTransform).Rotation.XY.m128d_f64[0] = (pTVar34->Rotation).XY.m128d_f64[0];
  (this->LocalTransform).Rotation.XY.m128d_f64[1] = dVar27;
  dVar27 = (pTVar34->Rotation).ZW.m128d_f64[1];
  (this->LocalTransform).Rotation.ZW.m128d_f64[0] = (pTVar34->Rotation).ZW.m128d_f64[0];
  (this->LocalTransform).Rotation.ZW.m128d_f64[1] = dVar27;
  dVar27 = (pTVar34->Translation).XY.m128d_f64[1];
  (this->LocalTransform).Translation.XY.m128d_f64[0] = (pTVar34->Translation).XY.m128d_f64[0];
  (this->LocalTransform).Translation.XY.m128d_f64[1] = dVar27;
  dVar27 = (pTVar34->Translation).ZW.m128d_f64[1];
  (this->LocalTransform).Translation.ZW.m128d_f64[0] = (pTVar34->Translation).ZW.m128d_f64[0];
  (this->LocalTransform).Translation.ZW.m128d_f64[1] = dVar27;
  dVar27 = (pTVar34->Scale3D).XY.m128d_f64[1];
  (this->LocalTransform).Scale3D.XY.m128d_f64[0] = (pTVar34->Scale3D).XY.m128d_f64[0];
  (this->LocalTransform).Scale3D.XY.m128d_f64[1] = dVar27;
  dVar27 = (pTVar34->Scale3D).ZW.m128d_f64[1];
  (this->LocalTransform).Scale3D.ZW.m128d_f64[0] = (pTVar34->Scale3D).ZW.m128d_f64[0];
  (this->LocalTransform).Scale3D.ZW.m128d_f64[1] = dVar27;
  pTVar34 = URigHierarchy::GetTransform
                      (param_2,(TTransform<double> *)&local_b8,(FRigTransformElement *)param_1,
                       CurrentGlobal);
  dVar27 = (pTVar34->Rotation).XY.m128d_f64[1];
  (this->GlobalTransform).Rotation.XY.m128d_f64[0] = (pTVar34->Rotation).XY.m128d_f64[0];
  (this->GlobalTransform).Rotation.XY.m128d_f64[1] = dVar27;
  dVar27 = (pTVar34->Rotation).ZW.m128d_f64[1];
  (this->GlobalTransform).Rotation.ZW.m128d_f64[0] = (pTVar34->Rotation).ZW.m128d_f64[0];
  (this->GlobalTransform).Rotation.ZW.m128d_f64[1] = dVar27;
  dVar27 = (pTVar34->Translation).XY.m128d_f64[1];
  (this->GlobalTransform).Translation.XY.m128d_f64[0] = (pTVar34->Translation).XY.m128d_f64[0];
  (this->GlobalTransform).Translation.XY.m128d_f64[1] = dVar27;
  dVar27 = (pTVar34->Translation).ZW.m128d_f64[1];
  (this->GlobalTransform).Translation.ZW.m128d_f64[0] = (pTVar34->Translation).ZW.m128d_f64[0];
  (this->GlobalTransform).Translation.ZW.m128d_f64[1] = dVar27;
  dVar27 = (pTVar34->Scale3D).XY.m128d_f64[1];
  (this->GlobalTransform).Scale3D.XY.m128d_f64[0] = (pTVar34->Scale3D).XY.m128d_f64[0];
  (this->GlobalTransform).Scale3D.XY.m128d_f64[1] = dVar27;
  dVar27 = (pTVar34->Scale3D).ZW.m128d_f64[1];
  (this->GlobalTransform).Scale3D.ZW.m128d_f64[0] = (pTVar34->Scale3D).ZW.m128d_f64[0];
  (this->GlobalTransform).Scale3D.ZW.m128d_f64[1] = dVar27;
  return this;
}

// FRigControlCopy @ 14a3b7c50

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigControlCopy * __thiscall FRigControlCopy::FRigControlCopy(FRigControlCopy *this)

{
  (this->Name).ComparisonIndex = 0;
  (this->Name).Number = 0;
  (this->ParentKey).Type = None;
  this->ControlType = Transform;
  (this->ParentKey).Name.ComparisonIndex = 0;
  (this->ParentKey).Name.Number = 0;
  (this->Value).FloatStorage.Float00 = 0.0;
  (this->Value).FloatStorage.Float01 = 0.0;
  (this->Value).FloatStorage.Float02 = 0.0;
  (this->Value).FloatStorage.Float03 = 0.0;
  (this->Value).FloatStorage.Float10 = 0.0;
  (this->Value).FloatStorage.Float11 = 0.0;
  (this->Value).FloatStorage.Float12 = 0.0;
  (this->Value).FloatStorage.Float13 = 0.0;
  (this->Value).FloatStorage.Float20 = 0.0;
  (this->Value).FloatStorage.Float21 = 0.0;
  (this->Value).FloatStorage.Float22 = 0.0;
  (this->Value).FloatStorage.Float23 = 0.0;
  (this->Value).FloatStorage.Float30 = 0.0;
  (this->Value).FloatStorage.Float31 = 0.0;
  (this->Value).FloatStorage.Float32 = 0.0;
  (this->Value).FloatStorage.Float33 = 0.0;
  (this->Value).FloatStorage.Float00_2 = 0.0;
  (this->Value).FloatStorage.Float01_2 = 0.0;
  (this->Value).FloatStorage.Float02_2 = 0.0;
  (this->Value).FloatStorage.Float03_2 = 0.0;
  (this->Value).FloatStorage.Float10_2 = 0.0;
  (this->Value).FloatStorage.Float11_2 = 0.0;
  (this->Value).FloatStorage.Float12_2 = 0.0;
  (this->Value).FloatStorage.Float13_2 = 0.0;
  (this->Value).FloatStorage.Float20_2 = 0.0;
  (this->Value).FloatStorage.Float21_2 = 0.0;
  (this->Value).FloatStorage.Float22_2 = 0.0;
  (this->Value).FloatStorage.Float23_2 = 0.0;
  (this->Value).FloatStorage.Float30_2 = 0.0;
  (this->Value).FloatStorage.Float31_2 = 0.0;
  (this->Value).FloatStorage.Float32_2 = 0.0;
  (this->Value).FloatStorage.Float33_2 = 0.0;
  *(undefined4 *)&(this->Value).FloatStorage.bValid = 0;
  *&(this->OffsetTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->OffsetTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->OffsetTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->OffsetTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->OffsetTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->OffsetTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *&(this->ParentTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->ParentTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->ParentTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->ParentTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->ParentTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->ParentTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *&(this->LocalTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->LocalTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->LocalTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->LocalTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->LocalTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->LocalTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *&(this->GlobalTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->GlobalTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->GlobalTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->GlobalTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->GlobalTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->GlobalTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  return this;
}

