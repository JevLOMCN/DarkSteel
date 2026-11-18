// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 5

// StaticStruct @ 14a476e70

UScriptStruct * __cdecl FRigUnit_HierarchyAddControlElement::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControlElement.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControlElement.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlElement,
                         (UObject *)pUVar1,L"RigUnit_HierarchyAddControlElement");
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControlElement.OuterSingleton;
}

// GetElementTypeToSpawn @ 14a476ef0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

ERigElementType __thiscall
FRigUnit_HierarchyAddControlElement::GetElementTypeToSpawn
          (FRigUnit_HierarchyAddControlElement *this)

{
  return Control;
}

// GetControlTypeToSpawn @ 14a476f00

ERigControlType __thiscall
FRigUnit_HierarchyAddControlElement::GetControlTypeToSpawn
          (FRigUnit_HierarchyAddControlElement *this)

{
  return Bool;
}

// FRigUnit_HierarchyAddControlElement @ 14a5107a0

FRigUnit_HierarchyAddControlElement * __thiscall
FRigUnit_HierarchyAddControlElement::FRigUnit_HierarchyAddControlElement
          (FRigUnit_HierarchyAddControlElement *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FName local_res8 [4];
  uint local_18;
  
  local_18 = CONCAT31(local_18._1_3_,1);
  *(undefined ***)&this->field_0x8 = &___7FRigVMExecutePin__6B_;
  *(undefined8 *)&this->field_0x1c = 0;
  *(ulonglong *)&this->field_0x24 = (ulonglong)local_18;
  *(ulonglong *)&this->field_0x10 = (ulonglong)local_18;
  *(undefined4 *)&this->field_0x2c = 0;
  *(undefined4 *)&this->field_0x18 = 0;
  local_res8[0].ComparisonIndex.Value = 0;
  local_res8[0].Number = 0;
  *(undefined ***)this = &___7FRigUnit_HierarchyAddControlElement__6B_;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->OffsetTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->OffsetTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->OffsetTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->OffsetTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->OffsetTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->OffsetTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->OffsetTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->OffsetTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->OffsetTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->OffsetTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->OffsetTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->OffsetTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  ::FName::FName(local_res8,L"NewControl");
  *(uint *)&this->field_0x1c = local_res8[0].ComparisonIndex.Value;
  *(uint *)&this->field_0x20 = local_res8[0].Number;
  this->OffsetSpace = LocalSpace;
  return this;
}

// ProjectOffsetTransform @ 14a533480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TTransform<double> * __cdecl
FRigUnit_HierarchyAddControlElement::ProjectOffsetTransform
          (TTransform<double> *__return_storage_ptr__,TTransform<double> *param_1,
          ERigVMTransformSpace param_2,FRigElementKey *param_3,URigHierarchy *param_4)

{
  ulonglong uVar1;
  double dVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auStack_128 [32];
  FRigElementKey local_108;
  TTransform<double> local_f8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_128;
  if (param_2 == GlobalSpace) {
    bVar3 = ::FName::IsWithinBounds((FNameEntryId)(param_3->Name).ComparisonIndex.Value);
    if (((bVar3) && (param_3->Name != (FName)0x0)) && (param_3->Type != None)) {
      local_108.Type = param_3->Type;
      local_108._1_3_ = *(undefined3 *)&param_3->field_0x1;
      local_108.Name.ComparisonIndex.Value = (param_3->Name).ComparisonIndex.Value;
      local_108.Name.Number = (param_3->Name).Number;
      iVar4 = URigHierarchy::GetIndex(param_4,&local_108,true);
      URigHierarchy::GetGlobalTransformByIndex(param_4,&local_98,iVar4,false);
      UE::Math::TTransform<double>::GetRelativeTransform(param_1,&local_f8,&local_98);
      auVar12._0_8_ =
           local_f8.Rotation.XY.m128d_f64[0] * local_f8.Rotation.XY.m128d_f64[0] +
           local_f8.Rotation.ZW.m128d_f64[0] * local_f8.Rotation.ZW.m128d_f64[0];
      auVar12._8_8_ =
           local_f8.Rotation.XY.m128d_f64[1] * local_f8.Rotation.XY.m128d_f64[1] +
           local_f8.Rotation.ZW.m128d_f64[1] * local_f8.Rotation.ZW.m128d_f64[1];
      auVar14._8_4_ = SUB84(auVar12._8_8_,0);
      auVar14._0_8_ = auVar12._0_8_;
      auVar14._12_4_ = (int)((ulonglong)auVar12._8_8_ >> 0x20);
      auVar9._0_8_ = auVar14._8_8_ + auVar12._0_8_;
      auVar9._8_8_ = auVar12._0_8_ + auVar12._8_8_;
      auVar13 = sqrtpd(auVar12,auVar9);
      uVar5 = -(ulonglong)
               (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar9._0_8_);
      uVar7 = -(ulonglong)
               (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar9._8_8_);
      uVar6 = -(ulonglong)
               (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar9._0_8_);
      uVar8 = -(ulonglong)
               (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar9._8_8_);
      auVar10 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar13);
      auVar14 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar13);
      auVar11._0_8_ = uVar6 & (ulonglong)(auVar10._0_8_ * local_f8.Rotation.ZW.m128d_f64[0]);
      uVar1 = uVar8 & (ulonglong)(auVar10._8_8_ * local_f8.Rotation.ZW.m128d_f64[1]);
      auVar11._8_4_ = (undefined4)uVar1;
      auVar11._12_4_ = (undefined4)(uVar1 >> 0x20);
      auVar13._4_4_ =
           ~(uint)(uVar6 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
      auVar13._0_4_ = ~(uint)uVar6 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
      auVar13._8_4_ = ~(uint)uVar8 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
      auVar13._12_4_ =
           ~(uint)(uVar8 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
      auVar15._0_8_ = uVar5 & (ulonglong)(auVar14._0_8_ * local_f8.Rotation.XY.m128d_f64[0]);
      uVar1 = uVar7 & (ulonglong)(auVar14._8_8_ * local_f8.Rotation.XY.m128d_f64[1]);
      auVar15._8_4_ = (undefined4)uVar1;
      auVar15._12_4_ = (undefined4)(uVar1 >> 0x20);
      auVar10._4_4_ =
           ~(uint)(uVar5 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
      auVar10._0_4_ = ~(uint)uVar5 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
      auVar10._8_4_ = ~(uint)uVar7 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
      auVar10._12_4_ =
           ~(uint)(uVar7 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
      *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar15 | auVar10;
      *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar11 | auVar13;
      (__return_storage_ptr__->Translation).XY.m128d_f64[0] = local_f8.Translation.XY.m128d_f64[0];
      (__return_storage_ptr__->Translation).XY.m128d_f64[1] = local_f8.Translation.XY.m128d_f64[1];
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_f8.Translation.ZW.m128d_f64[0];
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = local_f8.Translation.ZW.m128d_f64[1];
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = local_f8.Scale3D.XY.m128d_f64[0];
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = local_f8.Scale3D.XY.m128d_f64[1];
      goto LAB_14a53360f;
    }
  }
  dVar2 = (param_1->Rotation).XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Rotation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Translation).XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Translation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Scale3D).XY.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar2;
  local_f8.Scale3D.ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
  local_f8.Scale3D.ZW.m128d_f64[1] = (param_1->Scale3D).ZW.m128d_f64[1];
LAB_14a53360f:
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = local_f8.Scale3D.ZW.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = local_f8.Scale3D.ZW.m128d_f64[1];
  return __return_storage_ptr__;
}

