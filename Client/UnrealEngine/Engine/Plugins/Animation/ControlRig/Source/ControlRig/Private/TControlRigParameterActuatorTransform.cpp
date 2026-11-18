// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 3

// Actuate @ 14a3c8ba0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
TControlRigParameterActuatorTransform::Actuate
          (TControlRigParameterActuatorTransform *this,UObject *param_1,
          FControlRigTrackTokenTransform *param_2,
          TBlendableTokenStack<FControlRigTrackTokenTransform> *param_3,FMovieSceneContext *param_4,
          FPersistentEvaluationData *param_5,IMovieScenePlayer *param_6)

{
  FName *pFVar1;
  double dVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  ERigControlAnimationType EVar5;
  ERigControlType EVar6;
  EEulerRotationOrder EVar7;
  longlong *plVar8;
  FName FVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  uint uVar16;
  UMovieSceneControlRigParameterSection *pUVar17;
  UClass *pUVar18;
  longlong lVar19;
  UControlRig *pUVar20;
  FRigControlElement *pFVar21;
  TQuat<double> *pTVar22;
  int iVar23;
  URigHierarchy *this_00;
  ForElementType<FSetElementId> FVar24;
  TVector<double>_u_0 local_248;
  TVector<double>_u_0 local_230;
  URigHierarchy *local_218;
  TRotator<double> local_210;
  undefined1 local_1f8 [8];
  float fStack_1f0;
  float fStack_1ec;
  float local_1e8;
  float fStack_1e4;
  ulonglong uStack_1e0;
  undefined8 local_1d8;
  ulonglong uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  TQuat<double> local_168;
  undefined4 uStack_13c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  undefined8 local_104;
  undefined8 uStack_fc;
  undefined8 local_f4;
  undefined8 uStack_ec;
  undefined8 local_e4;
  undefined8 uStack_dc;
  undefined8 local_d4;
  undefined8 uStack_cc;
  undefined8 local_c4;
  undefined8 uStack_bc;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined1 local_a8;
  undefined2 local_a7;
  undefined1 local_a5;
  
  pUVar17 = (UMovieSceneControlRigParameterSection *)
            FWeakObjectPtr::Get(&(this->SectionData).WeakPtr);
  if (pUVar17 == (UMovieSceneControlRigParameterSection *)0x0) {
    return;
  }
  plVar8 = (longlong *)pUVar17->_padding_;
  if (plVar8 == (longlong *)0x0) goto LAB_14a3c8c5c;
  pUVar18 = Z_Construct_UClass_UMovieSceneTrack_NoRegister();
  iVar23 = (int)pUVar18->_padding_;
  if (((*(int *)(plVar8[2] + 0x38) < iVar23) ||
      ((longlong *)*(undefined1 **)(*(longlong *)(plVar8[2] + 0x30) + (longlong)iVar23 * 8) !=
       &pUVar18->_padding_)) || (lVar19 = (**(code **)(*plVar8 + 0x338))(plVar8), lVar19 == 0))
  goto LAB_14a3c8c5c;
  pUVar17 = (UMovieSceneControlRigParameterSection *)(**(code **)(*plVar8 + 0x338))(plVar8);
  if (pUVar17 == (UMovieSceneControlRigParameterSection *)0x0) {
LAB_14a3c8c51:
    pUVar17 = (UMovieSceneControlRigParameterSection *)0x0;
  }
  else {
    pUVar18 = UMovieSceneControlRigParameterSection::StaticClass();
    iVar23 = (int)pUVar18->_padding_;
    if ((*(int *)(pUVar17->_padding_ + 0x38) < iVar23) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar17->_padding_ + 0x30) + (longlong)iVar23 * 8) !=
        &pUVar18->_padding_)) goto LAB_14a3c8c51;
  }
  if (pUVar17 == (UMovieSceneControlRigParameterSection *)0x0) {
    return;
  }
LAB_14a3c8c5c:
  bVar4 = pUVar17->bDoNotKey;
  pUVar17->bDoNotKey = true;
  pUVar20 = GetControlRig(pUVar17,param_1);
  if (pUVar20 != (UControlRig *)0x0) {
    pFVar1 = &this->ParameterName;
    if (*(int *)&(pUVar17->ControlsToSet).Elements.field_0x8 ==
        *(int *)&(pUVar17->ControlsToSet).Elements.field_0x34) {
LAB_14a3c8d23:
      this_00 = (pUVar20->DynamicHierarchy).field0_0x0.DebugPtr;
      local_218 = this_00;
      pFVar21 = (FRigControlElement *)(**(code **)(pUVar20->_padding_ + 0x3c8))(pUVar20,pFVar1);
      if (((pFVar21 != (FRigControlElement *)0x0) &&
          (EVar5 = (pFVar21->Settings).AnimationType, EVar5 != ProxyControl)) &&
         (EVar5 != VisualCue)) {
        EVar6 = (pFVar21->Settings).ControlType;
        if (EVar6 == Transform) {
          local_248._s_0.Y = (param_2->Value).Rotation.Pitch;
          local_248._s_0.Z = (param_2->Value).Rotation.Yaw;
          local_248._s_0.X = (param_2->Value).Rotation.Roll;
          URigHierarchy::SetControlSpecifiedEulerAngle
                    (this_00,pFVar21,(TVector<double> *)&local_248._s_0,false);
          local_230._0_1_ = 2;
          local_230._s_0.Z = (double)((ulonglong)(uint3)local_230._21_3_ << 0x28);
          local_230._4_4_ = 0x1ff;
          local_230._s_0.Y = 1.05685337195934e-314;
          pTVar22 = UE::Math::TRotator<double>::Quaternion(&(param_2->Value).Rotation,&local_168);
          local_168.W._4_4_ = 0;
          uStack_13c = 0;
          local_178 = 1;
          local_1c8 = 0;
          uStack_1c0 = 0;
          local_1b8 = 0;
          uStack_1b0 = 0;
          local_1a8 = 0;
          uStack_1a0 = 0;
          local_198 = 0;
          uStack_190 = 0;
          local_188 = 0;
          uStack_180 = 0;
          local_1f8._4_4_ = (float)pTVar22->Y;
          local_1f8._0_4_ = (float)pTVar22->X;
          _fStack_1f0 = (double)CONCAT44((float)pTVar22->W,(float)pTVar22->Z);
          _local_1e8 = (double)CONCAT44((float)(param_2->Value).Location.field0_0x0._s_0.Y,
                                        (float)(param_2->Value).Location.field0_0x0._s_0.X);
          uStack_1e0 = (ulonglong)(uint)(float)(param_2->Value).Location.field0_0x0._s_0.Z;
          local_1d8 = CONCAT44((float)(param_2->Value).Scale.field0_0x0._s_0.Y,
                               (float)(param_2->Value).Scale.field0_0x0._s_0.X);
          uStack_1d0 = (ulonglong)(uint)(float)(param_2->Value).Scale.field0_0x0._s_0.Z;
          (**(code **)(pUVar20->_padding_ + 0x3f0))(pUVar20,pFVar1,local_1f8,1,&local_230,0,0,0);
        }
        else if (EVar6 == TransformNoScale) {
          pTVar22 = UE::Math::TRotator<double>::Quaternion(&(param_2->Value).Rotation,&local_168);
          local_248._s_0.Y = (param_2->Value).Rotation.Pitch;
          local_248._s_0.Z = (param_2->Value).Rotation.Yaw;
          local_248._s_0.X = (param_2->Value).Rotation.Roll;
          dVar10 = pTVar22->X;
          dVar11 = pTVar22->Y;
          dVar12 = pTVar22->Z;
          dVar13 = pTVar22->W;
          dVar14 = (param_2->Value).Location.field0_0x0._s_0.X;
          dVar15 = (param_2->Value).Location.field0_0x0._s_0.Y;
          dVar2 = (param_2->Value).Location.field0_0x0._s_0.Z;
          URigHierarchy::SetControlSpecifiedEulerAngle
                    (this_00,pFVar21,(TVector<double> *)&local_248._s_0,false);
          local_1d8 = 0;
          uStack_1d0 = 0;
          local_1c8 = 0;
          uStack_1c0 = 0;
          local_230._s_0.Z = (double)((ulonglong)(uint3)local_230._21_3_ << 0x28);
          local_1b8 = 0;
          uStack_1b0 = 0;
          local_1a8 = 0;
          uStack_1a0 = 0;
          local_198 = 0;
          uStack_190 = 0;
          local_188 = 0;
          uStack_180 = 0;
          local_230._0_1_ = 2;
          local_230._4_4_ = 0x1ff;
          local_230._s_0.Y = 1.05685337195934e-314;
          local_178 = 1;
          local_1f8._4_4_ = (float)dVar11;
          local_1f8._0_4_ = (float)dVar10;
          _fStack_1f0 = (double)CONCAT44((float)dVar13,(float)dVar12);
          _local_1e8 = (double)CONCAT44((float)dVar15,(float)dVar14);
          uStack_1e0 = (ulonglong)(uint)(float)dVar2;
          (**(code **)(pUVar20->_padding_ + 0x3f0))(pUVar20,pFVar1,local_1f8,1,&local_230,0,0,0);
        }
        else if (EVar6 == EulerTransform) {
          local_248._s_0.Z = (param_2->Value).Rotation.Roll;
          local_248._s_0.X = (param_2->Value).Rotation.Pitch;
          local_248._s_0.Y = (param_2->Value).Rotation.Yaw;
          local_230._s_0.X = local_248._s_0.Z;
          local_230._s_0.Y = local_248._s_0.X;
          local_230._s_0.Z = local_248._s_0.Y;
          if ((this_00->bUsePreferredEulerAngles == false) ||
             ((pFVar21->Settings).bUsePreferredRotationOrder == false)) {
            UE::Math::TRotator<double>::Quaternion((TRotator<double> *)&local_248._s_0,&local_168);
          }
          else {
            FRigPreferredEulerAngles::GetQuatFromRotator
                      (&pFVar21->PreferredEulerAngles,&local_168,(TRotator<double> *)&local_248._s_0
                      );
          }
          if ((this_00->bUsePreferredEulerAngles == false) ||
             ((pFVar21->Settings).bUsePreferredRotationOrder == false)) {
            local_248._s_0.X = local_230._s_0.Y;
            local_248._s_0.Y = local_230._s_0.Z;
            local_248._s_0.Z = local_230._s_0.X;
            FRigPreferredEulerAngles::SetRotator
                      (&pFVar21->PreferredEulerAngles,(TRotator<double> *)local_1f8,
                       (TRotator<double> *)&local_248._s_0,false,false);
          }
          else {
            EVar7 = (pFVar21->Settings).PreferredRotationOrder;
            FRigPreferredEulerAngles::SetRotationOrder(&pFVar21->PreferredEulerAngles,EVar7);
            FRigPreferredEulerAngles::SetAngles
                      (&pFVar21->PreferredEulerAngles,(TVector<double> *)&local_230._s_0,false,EVar7
                       ,false);
            this_00 = local_218;
          }
          UE::Math::TRotator<double>::TRotator<double>(&local_210,&local_168);
          auVar3 = *(undefined1 (*) [16])&(param_2->Value).Scale.field0_0x0;
          local_248._s_0.Z = (double)((ulonglong)local_248._s_0.Z & 0xffffff0000000000);
          local_128 = (float)local_210.Pitch;
          local_b4 = 0;
          local_ac = 0;
          local_a7 = 0;
          local_a5 = 0;
          fStack_11c = (float)(param_2->Value).Location.field0_0x0._s_0.X;
          local_248._0_1_ = 2;
          local_118 = (float)(param_2->Value).Location.field0_0x0._s_0.Y;
          local_248._4_4_ = 0x1ff;
          local_248._s_0.Y = 1.05685337195934e-314;
          local_a8 = 1;
          fStack_114 = (float)(param_2->Value).Location.field0_0x0._s_0.Z;
          fStack_124 = (float)local_210.Yaw;
          fStack_110 = (float)auVar3._0_8_;
          fStack_120 = (float)local_210.Roll;
          fStack_10c = (float)auVar3._8_8_;
          local_108 = (float)(param_2->Value).Scale.field0_0x0._s_0.Z;
          local_104 = 0;
          uStack_fc = 0;
          local_f4 = 0;
          uStack_ec = 0;
          local_e4 = 0;
          uStack_dc = 0;
          local_d4 = 0;
          uStack_cc = 0;
          local_c4 = 0;
          uStack_bc = 0;
          (**(code **)(pUVar20->_padding_ + 0x3f0))
                    (pUVar20,&this->ParameterName,&local_128,1,&local_248,0,0,0);
          URigHierarchy::SetControlSpecifiedEulerAngle
                    (this_00,pFVar21,(TVector<double> *)&local_230._s_0,false);
        }
      }
    }
    else {
      FVar9 = *pFVar1;
      uVar16 = ::GetTypeHash(FVar9.ComparisonIndex.Value);
      if (*(int *)&(pUVar17->ControlsToSet).Elements.field_0x8 !=
          *(int *)&(pUVar17->ControlsToSet).Elements.field_0x34) {
        FVar24 = (pUVar17->ControlsToSet).Hash.SecondaryData;
        if (FVar24 == (ForElementType<FSetElementId>)0x0) {
          FVar24 = (ForElementType<FSetElementId>)&(pUVar17->ControlsToSet).Hash;
        }
        iVar23 = *(int *)((longlong)FVar24 +
                         (ulonglong)((pUVar17->ControlsToSet).HashSize - 1U & uVar16 + FVar9.Number)
                         * 4);
        if (iVar23 != -1) {
          lVar19 = *(longlong *)&(pUVar17->ControlsToSet).Elements;
          do {
            if (*(FName *)(lVar19 + (longlong)iVar23 * 0x10) == FVar9) {
              if (iVar23 != -1) goto LAB_14a3c8d23;
              break;
            }
            iVar23 = *(int *)(lVar19 + 8 + (longlong)iVar23 * 0x10);
          } while (iVar23 != -1);
        }
      }
    }
  }
  pUVar17->bDoNotKey = bVar4;
  return;
}

// Actuate @ 14a3c9370

void __thiscall
TControlRigParameterActuatorTransform::Actuate
          (TControlRigParameterActuatorTransform *this,FMovieSceneInterrogationData *param_1,
          FControlRigTrackTokenTransform *param_2,
          TBlendableTokenStack<FControlRigTrackTokenTransform> *param_3,FMovieSceneContext *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  TVector<double>_u_0 local_a8;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  FName FStack_60;
  double local_18;
  FName FStack_10;
  
  FStack_10 = this->ParameterName;
  dVar1 = (param_2->Value).Location.field0_0x0._s_0.X;
  dVar2 = (param_2->Value).Location.field0_0x0._s_0.Y;
  dVar3 = (param_2->Value).Location.field0_0x0._s_0.Z;
  dVar4 = (param_2->Value).Rotation.Pitch;
  dVar5 = (param_2->Value).Rotation.Yaw;
  dVar6 = (param_2->Value).Rotation.Roll;
  dVar7 = (param_2->Value).Scale.field0_0x0._s_0.X;
  dVar8 = (param_2->Value).Scale.field0_0x0._s_0.Y;
  local_18 = (param_2->Value).Scale.field0_0x0._s_0.Z;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FMovieSceneAnimTypeID::Unique();
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_68 = local_18;
  FStack_60 = FStack_10;
  local_a8._s_0.X = dVar1;
  local_a8._s_0.Y = dVar2;
  local_a8._s_0.Z = dVar3;
  dStack_90 = dVar4;
  local_88 = dVar5;
  dStack_80 = dVar6;
  local_78 = dVar7;
  dStack_70 = dVar8;
  FMovieSceneInterrogationData::Add<FEulerTransformInterrogationData>
            (param_1,(FEulerTransformInterrogationData *)&local_a8._s_0,
             (FMovieSceneInterrogationKey)::TypeID.ID);
  return;
}

// RetrieveCurrentValue @ 14a453dc0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FControlRigTrackTokenTransform * __thiscall
TControlRigParameterActuatorTransform::RetrieveCurrentValue
          (TControlRigParameterActuatorTransform *this,
          FControlRigTrackTokenTransform *__return_storage_ptr__,UObject *param_1,
          IMovieScenePlayer *param_2)

{
  ERigControlAnimationType EVar1;
  ERigControlType EVar2;
  float fVar3;
  FName FVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar16;
  UMovieSceneControlRigParameterSection *pUVar17;
  UControlRig *this_00;
  FRigControlElement *pFVar18;
  FRigControlValue *pFVar19;
  ForElementType<FSetElementId> FVar20;
  int iVar21;
  double dVar22;
  double dVar23;
  ERigControlValueType local_res8 [8];
  TVector<double>_u_0 local_198;
  undefined1 local_178 [16];
  double local_168;
  TRotator<double> TStack_160;
  undefined1 local_148 [16];
  double local_138;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  FRigControlValue local_108;
  
  pUVar17 = (UMovieSceneControlRigParameterSection *)
            FWeakObjectPtr::Get(&(this->SectionData).WeakPtr);
  if ((pUVar17 != (UMovieSceneControlRigParameterSection *)0x0) &&
     (this_00 = GetControlRig(pUVar17,param_1), this_00 != (UControlRig *)0x0)) {
    if (*(int *)&(pUVar17->ControlsToSet).Elements.field_0x8 ==
        *(int *)&(pUVar17->ControlsToSet).Elements.field_0x34) {
LAB_14a453f22:
      pFVar18 = (FRigControlElement *)
                (**(code **)(this_00->_padding_ + 0x3c8))(this_00,&this->ParameterName);
      if (((pFVar18 != (FRigControlElement *)0x0) &&
          (EVar1 = (pFVar18->Settings).AnimationType, EVar1 != ProxyControl)) &&
         (EVar1 != VisualCue)) {
        EVar2 = (pFVar18->Settings).ControlType;
        if (EVar2 == Transform) {
          local_res8[0] = Current;
          pFVar19 = UControlRig::GetControlValue(this_00,&local_108,pFVar18,local_res8);
          fVar3 = (pFVar19->FloatStorage).Float20;
          fVar8 = (pFVar19->FloatStorage).Float22;
          dVar6 = (double)(pFVar19->FloatStorage).Float03;
          dVar7 = (double)(pFVar19->FloatStorage).Float01;
          dVar22 = (double)(pFVar19->FloatStorage).Float11;
          local_168 = (double)(pFVar19->FloatStorage).Float12;
          dVar23 = (double)(pFVar19->FloatStorage).Float21;
          local_178._8_4_ = SUB84(dVar22,0);
          local_178._0_8_ = (double)(pFVar19->FloatStorage).Float10;
          local_178._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
          local_128._8_4_ = SUB84(dVar7,0);
          local_128._0_8_ = (double)(pFVar19->FloatStorage).Float00;
          local_128._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
          local_118._8_4_ = SUB84(dVar6,0);
          local_118._0_8_ = (double)(pFVar19->FloatStorage).Float02;
          local_118._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
          UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_128,&TStack_160);
          local_148._8_4_ = SUB84(dVar23,0);
          local_148._0_8_ = (double)fVar3;
          local_148._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
          local_138 = (double)fVar8;
          UControlRig::GetControlSpecifiedEulerAngle
                    (this_00,(TVector<double> *)&local_198._s_0,pFVar18,false);
          (__return_storage_ptr__->Value).Location.field0_0x0._s_0.X = (double)local_178._0_8_;
          (__return_storage_ptr__->Value).Location.field0_0x0._s_0.Y = (double)local_178._8_8_;
          (__return_storage_ptr__->Value).Location.field0_0x0._s_0.Z = local_168;
          (__return_storage_ptr__->Value).Rotation.Pitch = local_198._s_0.Y;
          *(undefined4 *)&(__return_storage_ptr__->Value).Rotation.Yaw = local_198._16_4_;
          *(undefined4 *)((longlong)&(__return_storage_ptr__->Value).Rotation.Yaw + 4) =
               local_198._20_4_;
          *(int *)&(__return_storage_ptr__->Value).Rotation.Roll = SUB84(local_198._s_0.X,0);
          *(int *)((longlong)&(__return_storage_ptr__->Value).Rotation.Roll + 4) =
               (int)((ulonglong)local_198._0_8_ >> 0x20);
          (__return_storage_ptr__->Value).Scale.field0_0x0._s_0.X = (double)local_148._0_8_;
          (__return_storage_ptr__->Value).Scale.field0_0x0._s_0.Y = (double)local_148._8_8_;
          (__return_storage_ptr__->Value).Scale.field0_0x0._s_0.Z = local_138;
          return __return_storage_ptr__;
        }
        if (EVar2 == TransformNoScale) {
          local_res8[0] = Current;
          pFVar19 = UControlRig::GetControlValue(this_00,&local_108,pFVar18,local_res8);
          uVar15 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
          uVar14 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
          uVar13 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
          dVar7 = (double)(pFVar19->FloatStorage).Float01;
          local_178._0_8_ = (undefined8)(pFVar19->FloatStorage).Float10;
          local_178._8_8_ = (undefined8)(pFVar19->FloatStorage).Float11;
          dVar6 = (double)(pFVar19->FloatStorage).Float03;
          local_168 = (double)(pFVar19->FloatStorage).Float12;
          local_128._8_4_ = SUB84(dVar7,0);
          local_128._0_8_ = (double)(pFVar19->FloatStorage).Float00;
          local_128._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
          local_118._8_4_ = SUB84(dVar6,0);
          local_118._0_8_ = (double)(pFVar19->FloatStorage).Float02;
          local_118._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
          UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_128,&TStack_160);
          local_148._0_8_ = uVar13;
          local_148._8_8_ = uVar14;
          local_138 = (double)uVar15;
          UControlRig::GetControlSpecifiedEulerAngle
                    (this_00,(TVector<double> *)&local_198._s_0,pFVar18,false);
          (__return_storage_ptr__->Value).Location.field0_0x0._s_0.X = (double)local_178._0_8_;
          (__return_storage_ptr__->Value).Location.field0_0x0._s_0.Y = (double)local_178._8_8_;
          (__return_storage_ptr__->Value).Location.field0_0x0._s_0.Z = local_168;
          (__return_storage_ptr__->Value).Rotation.Pitch = local_198._s_0.Y;
          *(undefined4 *)&(__return_storage_ptr__->Value).Rotation.Yaw = local_198._16_4_;
          *(undefined4 *)((longlong)&(__return_storage_ptr__->Value).Rotation.Yaw + 4) =
               local_198._20_4_;
          *(int *)&(__return_storage_ptr__->Value).Rotation.Roll = SUB84(local_198._s_0.X,0);
          *(int *)((longlong)&(__return_storage_ptr__->Value).Rotation.Roll + 4) =
               (int)((ulonglong)local_198._0_8_ >> 0x20);
          (__return_storage_ptr__->Value).Scale.field0_0x0._s_0.X = (double)local_148._0_8_;
          (__return_storage_ptr__->Value).Scale.field0_0x0._s_0.Y = (double)local_148._8_8_;
          (__return_storage_ptr__->Value).Scale.field0_0x0._s_0.Z = local_138;
          return __return_storage_ptr__;
        }
        if (EVar2 == EulerTransform) {
          local_res8[0] = Current;
          pFVar19 = UControlRig::GetControlValue(this_00,&local_108,pFVar18,local_res8);
          fVar8 = (pFVar19->FloatStorage).Float03;
          fVar3 = (pFVar19->FloatStorage).Float20;
          fVar9 = (pFVar19->FloatStorage).Float10;
          fVar10 = (pFVar19->FloatStorage).Float11;
          fVar11 = (pFVar19->FloatStorage).Float12;
          fVar12 = (pFVar19->FloatStorage).Float13;
          UControlRig::GetControlSpecifiedEulerAngle
                    (this_00,(TVector<double> *)&local_198._s_0,pFVar18,false);
          (__return_storage_ptr__->Value).Location.field0_0x0._s_0.X = (double)fVar8;
          (__return_storage_ptr__->Value).Location.field0_0x0._s_0.Y = (double)fVar9;
          (__return_storage_ptr__->Value).Location.field0_0x0._s_0.Z = (double)fVar10;
          (__return_storage_ptr__->Value).Rotation.Pitch = local_198._s_0.Y;
          (__return_storage_ptr__->Value).Rotation.Yaw =
               (double)CONCAT44(local_198._20_4_,local_198._16_4_);
          (__return_storage_ptr__->Value).Rotation.Roll = local_198._s_0.X;
          (__return_storage_ptr__->Value).Scale.field0_0x0._s_0.X = (double)fVar11;
          (__return_storage_ptr__->Value).Scale.field0_0x0._s_0.Y = (double)fVar12;
          (__return_storage_ptr__->Value).Scale.field0_0x0._s_0.Z = (double)fVar3;
          return __return_storage_ptr__;
        }
      }
    }
    else {
      FVar4 = this->ParameterName;
      uVar16 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
      if (*(int *)&(pUVar17->ControlsToSet).Elements.field_0x8 !=
          *(int *)&(pUVar17->ControlsToSet).Elements.field_0x34) {
        FVar20 = (pUVar17->ControlsToSet).Hash.SecondaryData;
        if (FVar20 == (ForElementType<FSetElementId>)0x0) {
          FVar20 = (ForElementType<FSetElementId>)&(pUVar17->ControlsToSet).Hash;
        }
        iVar21 = *(int *)((longlong)FVar20 +
                         (ulonglong)((pUVar17->ControlsToSet).HashSize - 1U & FVar4.Number + uVar16)
                         * 4);
        if (iVar21 != -1) {
          lVar5 = *(longlong *)&(pUVar17->ControlsToSet).Elements;
          do {
            if (*(FName *)(lVar5 + (longlong)iVar21 * 0x10) == FVar4) {
              if (iVar21 != -1) goto LAB_14a453f22;
              break;
            }
            iVar21 = *(int *)(lVar5 + 8 + (longlong)iVar21 * 0x10);
          } while (iVar21 != -1);
        }
      }
    }
  }
  (__return_storage_ptr__->Value).Location.field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Value).Location.field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Value).Location.field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Value).Rotation.Pitch = 0.0;
  (__return_storage_ptr__->Value).Rotation.Yaw = 0.0;
  (__return_storage_ptr__->Value).Rotation.Roll = 0.0;
  uVar13 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->Value).Scale.field0_0x0._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->Value).Scale.field0_0x0._s_0.Y = (double)uVar13;
  (__return_storage_ptr__->Value).Scale.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

