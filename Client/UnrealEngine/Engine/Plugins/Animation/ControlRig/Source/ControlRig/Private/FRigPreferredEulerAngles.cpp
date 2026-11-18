// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 11

// StaticStruct @ 14a2c7fa0

UScriptStruct * __cdecl FRigPreferredEulerAngles::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigPreferredEulerAngles.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigPreferredEulerAngles.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigPreferredEulerAngles,(UObject *)pUVar1,
                         L"RigPreferredEulerAngles");
  }
  return Z_Registration_Info_UScriptStruct_FRigPreferredEulerAngles.OuterSingleton;
}

// GetAngles @ 14a3091a0

TVector<double> * __thiscall
FRigPreferredEulerAngles::GetAngles
          (FRigPreferredEulerAngles *this,TVector<double> *__return_storage_ptr__,bool param_1,
          EEulerRotationOrder param_2)

{
  double dVar1;
  longlong lVar2;
  
  lVar2 = 0x20;
  if (this->RotationOrder == param_2) {
    lVar2 = 0x20;
    if (!param_1) {
      lVar2 = 8;
    }
    dVar1 = (((TVector<double> *)(&this->RotationOrder + lVar2 + 8))->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)(&this->RotationOrder + lVar2);
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         *(double *)((longlong)&(this->Current).field0_0x0 + lVar2 + 8);
    return __return_storage_ptr__;
  }
  if (!param_1) {
    lVar2 = 8;
  }
  AnimationCore::ChangeEulerRotationOrder
            (__return_storage_ptr__,(TVector<double> *)(&this->RotationOrder + lVar2),
             this->RotationOrder,param_2,false);
  return __return_storage_ptr__;
}

// GetQuatFromRotator @ 14a314d70

TQuat<double> * __thiscall
FRigPreferredEulerAngles::GetQuatFromRotator
          (FRigPreferredEulerAngles *this,TQuat<double> *__return_storage_ptr__,
          TRotator<double> *param_1)

{
  TVector<double> local_28;
  
  UE::Math::TRotator<double>::Euler(param_1,&local_28);
  AnimationCore::QuatFromEuler(__return_storage_ptr__,&local_28,this->RotationOrder,true);
  return __return_storage_ptr__;
}

// GetRotator @ 14a315bc0

TRotator<double> * __thiscall
FRigPreferredEulerAngles::GetRotator
          (FRigPreferredEulerAngles *this,TRotator<double> *__return_storage_ptr__,bool param_1)

{
  longlong lVar1;
  TVector<double>_u_0 local_28;
  
  lVar1 = 0x20;
  if (!param_1) {
    lVar1 = 8;
  }
  local_28._s_0.X = (double)*(undefined8 *)(&this->RotationOrder + lVar1);
  local_28._s_0.Y = (((TVector<double> *)(&this->RotationOrder + lVar1 + 8))->field0_0x0)._s_0.X;
  local_28._s_0.Z = *(double *)((longlong)&(this->Current).field0_0x0 + lVar1 + 8);
  UE::Math::TRotator<double>::MakeFromEuler
            (__return_storage_ptr__,(TVector<double> *)&local_28._s_0);
  return __return_storage_ptr__;
}

// GetRotatorFromQuat @ 14a315df0

TRotator<double> * __thiscall
FRigPreferredEulerAngles::GetRotatorFromQuat
          (FRigPreferredEulerAngles *this,TRotator<double> *__return_storage_ptr__,
          TQuat<double> *param_1)

{
  TVector<double> local_28;
  
  AnimationCore::EulerFromQuat(&local_28,param_1,this->RotationOrder,true);
  UE::Math::TRotator<double>::MakeFromEuler(__return_storage_ptr__,&local_28);
  return __return_storage_ptr__;
}

// Load @ 14a32ce80

void __thiscall FRigPreferredEulerAngles::Load(FRigPreferredEulerAngles *this,FArchive *param_1)

{
  long64 lVar1;
  FName local_res8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      RotationOrderEnum = StaticEnum<enum_EEulerRotationOrder>();
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_res8);
  lVar1 = UEnum::GetValueByName(RotationOrderEnum,local_res8,None);
  this->RotationOrder = (EEulerRotationOrder)lVar1;
  UE::Math::operator<<(param_1,&this->Current);
  UE::Math::operator<<(param_1,&this->Initial);
  return;
}

// Reset @ 14a340920

void __thiscall FRigPreferredEulerAngles::Reset(FRigPreferredEulerAngles *this)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  
  this->RotationOrder = YZX;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Current).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Current).field0_0x0._s_0.Y = (double)uVar3;
  (this->Current).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = (this->Current).field0_0x0._s_0.Y;
  dVar1 = (this->Current).field0_0x0._s_0.Z;
  (this->Initial).field0_0x0._s_0.X = (this->Current).field0_0x0._s_0.X;
  (this->Initial).field0_0x0._s_0.Y = dVar2;
  (this->Initial).field0_0x0._s_0.Z = dVar1;
  return;
}

// Save @ 14a345dd0

void __thiscall FRigPreferredEulerAngles::Save(FRigPreferredEulerAngles *this,FArchive *param_1)

{
  undefined1 local_res8 [8];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      RotationOrderEnum = StaticEnum<enum_EEulerRotationOrder>();
      _Init_thread_footer(&::_TSS0);
    }
  }
  UEnum::GetNameByValue(RotationOrderEnum,(long64)local_res8);
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,local_res8);
  UE::Math::operator<<(param_1,&this->Current);
  UE::Math::operator<<(param_1,&this->Initial);
  return;
}

// SetAngles @ 14a349c20

void __thiscall
FRigPreferredEulerAngles::SetAngles
          (FRigPreferredEulerAngles *this,TVector<double> *param_1,bool param_2,
          EEulerRotationOrder param_3,bool param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  TVector<double> *pTVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar18;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  double dVar25;
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  TVector<double>_u_0 local_e8;
  TVector<double>_u_0 local_d0;
  TRotator<double> local_b8;
  TRotator<double> local_a0;
  TRotator<double> local_88;
  TRotator<double> local_70;
  TRotator<double> local_58 [3];
  
  local_d0._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_d0._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_d0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  if (this->RotationOrder != param_3) {
    pTVar7 = AnimationCore::ChangeEulerRotationOrder
                       ((TVector<double> *)&local_e8._s_0,(TVector<double> *)&local_d0._s_0,param_3,
                        this->RotationOrder,false);
    local_d0._s_0.X = (pTVar7->field0_0x0)._s_0.X;
    local_d0._s_0.Y = (pTVar7->field0_0x0)._s_0.Y;
    local_d0._s_0.Z = (pTVar7->field0_0x0)._s_0.Z;
  }
  lVar8 = 0x20;
  if (param_4) {
    lVar8 = 0x20;
    if (!param_2) {
      lVar8 = 8;
    }
    local_e8._s_0.X = (double)*(undefined8 *)(&this->RotationOrder + lVar8);
    local_e8._s_0.Y = (((TVector<double> *)(&this->RotationOrder + lVar8 + 8))->field0_0x0)._s_0.X;
    local_e8._s_0.Z = *(double *)((longlong)&(this->Current).field0_0x0 + lVar8 + 8);
    UE::Math::TRotator<double>::MakeFromEuler(&local_b8,(TVector<double> *)&local_e8._s_0);
    UE::Math::TRotator<double>::MakeFromEuler(&local_a0,(TVector<double> *)&local_d0._s_0);
    UE::Math::TRotator<double>::GetWindingAndRemainder(&local_b8,local_58,&local_88);
    auVar14._0_8_ = local_a0.Roll - local_88.Roll;
    auVar19._0_8_ = local_a0.Yaw - local_88.Yaw;
    auVar19._8_8_ = 0;
    auVar13._8_4_ = SUB84(auVar19._0_8_,0);
    auVar13._0_8_ = local_a0.Pitch - local_88.Pitch;
    auVar13._12_4_ = (int)((ulonglong)auVar19._0_8_ >> 0x20);
    auVar13 = divpd(auVar13,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
    auVar13 = roundpd(auVar19,auVar13,3);
    dVar3 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
    auVar20._0_8_ = auVar13._0_8_ * dVar3;
    dVar4 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
    auVar20._8_8_ = auVar13._8_8_ * dVar4;
    auVar14._8_8_ = 0;
    dVar23 = (local_a0.Pitch - local_88.Pitch) - auVar20._0_8_;
    dVar25 = auVar19._0_8_ - auVar20._8_8_;
    auVar13 = divpd(auVar14,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
    auVar13 = roundpd(auVar20,auVar13,3);
    dVar5 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
    auVar15._8_4_ = SUB84(dVar25,0);
    auVar15._0_8_ = dVar23;
    auVar15._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
    dVar1 = auVar14._0_8_ - auVar13._0_8_ * dVar5;
    dVar2 = 0.0 - auVar13._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
    dVar18 = auVar15._8_8_ + dVar4;
    uVar9 = -(ulonglong)(0.0 <= dVar23);
    uVar11 = -(ulonglong)(0.0 <= dVar25);
    auVar21._0_8_ = uVar9 & (ulonglong)dVar23;
    auVar21._8_4_ = (undefined4)(uVar11 & (ulonglong)dVar25);
    auVar21._12_4_ = (undefined4)((uVar11 & (ulonglong)dVar25) >> 0x20);
    auVar26._0_4_ = ~(uint)uVar9 & SUB84(dVar23 + dVar3,0);
    auVar26._4_4_ = ~(uint)(uVar9 >> 0x20) & (uint)((ulonglong)(dVar23 + dVar3) >> 0x20);
    auVar26._8_4_ = ~(uint)uVar11 & SUB84(dVar18,0);
    auVar26._12_4_ = ~(uint)(uVar11 >> 0x20) & (uint)((ulonglong)dVar18 >> 0x20);
    auVar16._8_4_ = SUB84(dVar2,0);
    auVar16._0_8_ = dVar1;
    auVar16._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    dVar18 = auVar16._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
    auVar26 = auVar26 | auVar21;
    uVar9 = -(ulonglong)(0.0 <= dVar1);
    uVar11 = -(ulonglong)(0.0 <= dVar2);
    auVar27._0_4_ = ~(uint)uVar9 & SUB84(dVar1 + dVar5,0);
    auVar27._4_4_ = ~(uint)(uVar9 >> 0x20) & (uint)((ulonglong)(dVar1 + dVar5) >> 0x20);
    auVar27._8_4_ = ~(uint)uVar11 & SUB84(dVar18,0);
    auVar27._12_4_ = ~(uint)(uVar11 >> 0x20) & (uint)((ulonglong)dVar18 >> 0x20);
    auVar22._0_8_ = uVar9 & (ulonglong)dVar1;
    auVar22._8_4_ = (undefined4)(uVar11 & (ulonglong)dVar2);
    auVar22._12_4_ = (undefined4)((uVar11 & (ulonglong)dVar2) >> 0x20);
    auVar27 = auVar27 | auVar22;
    uVar11 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar26._0_8_);
    uVar12 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar26._8_8_);
    uVar10 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar27._0_8_);
    auVar24._0_8_ = uVar11 & (ulonglong)(auVar26._0_8_ - dVar3);
    uVar9 = uVar12 & (ulonglong)(auVar26._8_8_ - dVar4);
    auVar24._8_4_ = (undefined4)uVar9;
    auVar24._12_4_ = (undefined4)(uVar9 >> 0x20);
    auVar17._0_4_ = ~(uint)uVar11 & auVar26._0_4_;
    auVar17._4_4_ = ~(uint)(uVar11 >> 0x20) & auVar26._4_4_;
    auVar17._8_4_ = ~(uint)uVar12 & auVar26._8_4_;
    auVar17._12_4_ = ~(uint)(uVar12 >> 0x20) & auVar26._12_4_;
    local_70.Pitch = local_b8.Pitch + SUB168(auVar24 | auVar17,0);
    local_e8._s_0.Z =
         (double)(uVar10 & (ulonglong)(auVar27._0_8_ - dVar5) |
                 CONCAT44(~(uint)(uVar10 >> 0x20) & auVar27._4_4_,~(uint)uVar10 & auVar27._0_4_));
    local_70.Roll = local_b8.Roll + local_e8._s_0.Z;
    local_70.Yaw = local_b8.Yaw + SUB168(auVar24 | auVar17,8);
    pTVar7 = UE::Math::TRotator<double>::Euler(&local_70,(TVector<double> *)&local_e8._s_0);
    uVar6 = 0x20;
    if (!param_2) {
      uVar6 = 8;
    }
    dVar2 = (pTVar7->field0_0x0)._s_0.Y;
    dVar1 = (pTVar7->field0_0x0)._s_0.Z;
    *(double *)(&this->RotationOrder + uVar6) = (pTVar7->field0_0x0)._s_0.X;
    (((TVector<double> *)(&this->RotationOrder + uVar6 + 8))->field0_0x0)._s_0.X = dVar2;
    *(double *)((longlong)&(this->Current).field0_0x0 + (ulonglong)uVar6 + 8) = dVar1;
  }
  else {
    if (!param_2) {
      lVar8 = 8;
    }
    *(undefined8 *)(&this->RotationOrder + lVar8) = local_d0._s_0.X;
    (((TVector<double> *)(&this->RotationOrder + lVar8 + 8))->field0_0x0)._s_0.X = local_d0._s_0.Y;
    *(undefined8 *)((longlong)&(this->Current).field0_0x0 + lVar8 + 8) = local_d0._s_0.Z;
  }
  return;
}

// SetRotationOrder @ 14a3516c0

void __thiscall
FRigPreferredEulerAngles::SetRotationOrder
          (FRigPreferredEulerAngles *this,EEulerRotationOrder param_1)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  EEulerRotationOrder EVar4;
  double dVar5;
  TVector<double> *pTVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  TVector<double>_u_0 local_78;
  undefined8 local_60;
  undefined8 uStack_58;
  TVector<double> local_20;
  
  EVar4 = this->RotationOrder;
  if (EVar4 != param_1) {
    local_60 = *(double *)&(this->Initial).field0_0x0;
    uStack_58 = *(double *)((longlong)&(this->Initial).field0_0x0 + 8);
    local_78._s_0.X = (this->Current).field0_0x0._s_0.X;
    local_78._s_0.Y = (this->Current).field0_0x0._s_0.Y;
    local_78._s_0.Z = (this->Current).field0_0x0._s_0.Z;
    dVar1 = *(double *)((longlong)&(this->Initial).field0_0x0 + 0x10);
    this->RotationOrder = param_1;
    pTVar6 = AnimationCore::ChangeEulerRotationOrder
                       (&local_20,(TVector<double> *)&local_78._s_0,EVar4,param_1,false);
    dVar5 = (pTVar6->field0_0x0)._s_0.Y;
    dVar2 = (pTVar6->field0_0x0)._s_0.Z;
    (this->Current).field0_0x0._s_0.X = (pTVar6->field0_0x0)._s_0.X;
    (this->Current).field0_0x0._s_0.Y = dVar5;
    (this->Current).field0_0x0._s_0.Z = dVar2;
    uVar7 = SUB84(dVar1,0);
    uVar8 = (undefined4)((ulonglong)dVar1 >> 0x20);
    local_78._0_8_ = local_60;
    local_78._8_8_ = uStack_58;
    if (this->RotationOrder != EVar4) {
      local_78._16_8_ = dVar1;
      pTVar6 = AnimationCore::ChangeEulerRotationOrder
                         (&local_20,(TVector<double> *)&local_78._s_0,EVar4,this->RotationOrder,
                          false);
      local_60._0_4_ = *(undefined4 *)&pTVar6->field0_0x0;
      local_60._4_4_ = *(undefined4 *)((longlong)&pTVar6->field0_0x0 + 4);
      uStack_58._0_4_ = *(undefined4 *)((longlong)&pTVar6->field0_0x0 + 8);
      uStack_58._4_4_ = *(undefined4 *)((longlong)&pTVar6->field0_0x0 + 0xc);
      uVar3 = *(undefined8 *)((longlong)&pTVar6->field0_0x0 + 0x10);
      uVar7 = (undefined4)uVar3;
      uVar8 = (undefined4)((ulonglong)uVar3 >> 0x20);
    }
    *(undefined4 *)&(this->Initial).field0_0x0 = (undefined4)local_60;
    *(undefined4 *)((longlong)&(this->Initial).field0_0x0 + 4) = local_60._4_4_;
    *(undefined4 *)((longlong)&(this->Initial).field0_0x0 + 8) = (undefined4)uStack_58;
    *(undefined4 *)((longlong)&(this->Initial).field0_0x0 + 0xc) = uStack_58._4_4_;
    (this->Initial).field0_0x0._s_0.Z = (double)CONCAT44(uVar8,uVar7);
  }
  return;
}

// SetRotator @ 14a3517c0

TRotator<double> * __thiscall
FRigPreferredEulerAngles::SetRotator
          (FRigPreferredEulerAngles *this,TRotator<double> *__return_storage_ptr__,
          TRotator<double> *param_1,bool param_2,bool param_3)

{
  double dVar1;
  EEulerRotationOrder EVar2;
  double dVar3;
  TVector<double> *pTVar4;
  TVector<double> local_28;
  
  EVar2 = this->RotationOrder;
  pTVar4 = UE::Math::TRotator<double>::Euler(param_1,&local_28);
  SetAngles(this,pTVar4,param_2,EVar2,param_3);
  dVar3 = param_1->Yaw;
  dVar1 = param_1->Roll;
  __return_storage_ptr__->Pitch = param_1->Pitch;
  __return_storage_ptr__->Yaw = dVar3;
  __return_storage_ptr__->Roll = dVar1;
  return __return_storage_ptr__;
}

