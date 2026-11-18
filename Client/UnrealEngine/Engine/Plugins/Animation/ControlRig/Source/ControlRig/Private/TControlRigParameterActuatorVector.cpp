// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 3

// Actuate @ 14a3c9760

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
TControlRigParameterActuatorVector::Actuate
          (TControlRigParameterActuatorVector *this,UObject *param_1,
          FControlRigTrackTokenVector *param_2,
          TBlendableTokenStack<FControlRigTrackTokenVector> *param_3,FMovieSceneContext *param_4,
          FPersistentEvaluationData *param_5,IMovieScenePlayer *param_6)

{
  FName *pFVar1;
  bool bVar2;
  ERigControlAnimationType EVar3;
  ERigControlType EVar4;
  FName FVar5;
  longlong lVar6;
  URigHierarchy *this_00;
  uint uVar7;
  UMovieSceneControlRigParameterSection *pUVar8;
  UControlRig *this_01;
  FRigControlElement *pFVar9;
  ForElementType<FSetElementId> FVar10;
  int iVar11;
  undefined1 local_108 [8];
  double dStack_100;
  undefined8 local_f8;
  TQuat<double> local_e8;
  TRotator<double> local_c8;
  float local_b0;
  float fStack_ac;
  ulonglong uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  
  pUVar8 = (UMovieSceneControlRigParameterSection *)
           FWeakObjectPtr::Get(&(this->SectionData).WeakPtr);
  if (pUVar8 != (UMovieSceneControlRigParameterSection *)0x0) {
    bVar2 = pUVar8->bDoNotKey;
    pUVar8->bDoNotKey = true;
    this_01 = GetControlRig(pUVar8,param_1);
    if (this_01 != (UControlRig *)0x0) {
      pFVar1 = &this->ParameterName;
      if (*(int *)&(pUVar8->ControlsToSet).Elements.field_0x8 ==
          *(int *)&(pUVar8->ControlsToSet).Elements.field_0x34) {
LAB_14a3c9866:
        pFVar9 = (FRigControlElement *)(**(code **)(this_01->_padding_ + 0x3c8))(this_01,pFVar1);
        if ((((pFVar9 != (FRigControlElement *)0x0) &&
             (EVar3 = (pFVar9->Settings).AnimationType, EVar3 != ProxyControl)) &&
            (EVar3 != VisualCue)) &&
           ((EVar4 = (pFVar9->Settings).ControlType, EVar4 == Position ||
            ((byte)(EVar4 - Scale) < 2)))) {
          if (EVar4 == Rotator) {
            local_108 = (undefined1  [8])(param_2->Value).field0_0x0._s_0.Y;
            dStack_100 = (param_2->Value).field0_0x0._s_0.Z;
            this_00 = (this_01->DynamicHierarchy).field0_0x0.DebugPtr;
            local_f8 = (param_2->Value).field0_0x0._s_0.X;
            if ((this_00->bUsePreferredEulerAngles == false) ||
               ((pFVar9->Settings).bUsePreferredRotationOrder == false)) {
              UE::Math::TRotator<double>::Quaternion((TRotator<double> *)local_108,&local_e8);
            }
            else {
              FRigPreferredEulerAngles::GetQuatFromRotator
                        (&pFVar9->PreferredEulerAngles,&local_e8,(TRotator<double> *)local_108);
            }
            UE::Math::TRotator<double>::TRotator<double>(&local_c8,&local_e8);
            URigHierarchy::SetControlSpecifiedEulerAngle(this_00,pFVar9,&param_2->Value,false);
            local_f8 = (double)((ulonglong)local_f8 & 0xffffff0000000000);
            local_108[0] = 2;
            local_108._4_4_ = 0x1ff;
            dStack_100 = 1.05685337195934e-314;
            local_e8.X = local_c8.Pitch;
            local_e8.Y = local_c8.Yaw;
            local_e8.Z = local_c8.Roll;
            UControlRig::SetControlValue<UE::Math::TRotator<double>_>
                      (this_01,pFVar1,(TRotator<double> *)&local_e8,true,
                       (FRigControlModifiedContext *)local_108,false,false,false);
          }
          else {
            local_a0 = 0;
            uStack_98 = 0;
            local_90 = 0;
            uStack_88 = 0;
            local_80 = 0;
            uStack_78 = 0;
            local_f8 = (double)((ulonglong)local_f8._5_3_ << 0x28);
            local_70 = 0;
            uStack_68 = 0;
            local_60 = 0;
            uStack_58 = 0;
            local_50 = 0;
            uStack_48 = 0;
            local_108[0] = 2;
            local_40 = 0;
            uStack_38 = 0;
            local_108._4_4_ = 0x1ff;
            dStack_100 = 1.05685337195934e-314;
            local_30 = 1;
            _local_b0 = CONCAT44((float)(param_2->Value).field0_0x0._s_0.Y,
                                 (float)(param_2->Value).field0_0x0._s_0.X);
            uStack_a8 = (ulonglong)(uint)(float)(param_2->Value).field0_0x0._s_0.Z;
            (**(code **)(this_01->_padding_ + 0x3f0))(this_01,pFVar1,&local_b0,1,local_108,0,0,0);
          }
        }
      }
      else {
        FVar5 = *pFVar1;
        uVar7 = ::GetTypeHash(FVar5.ComparisonIndex.Value);
        if (*(int *)&(pUVar8->ControlsToSet).Elements.field_0x8 !=
            *(int *)&(pUVar8->ControlsToSet).Elements.field_0x34) {
          FVar10 = (pUVar8->ControlsToSet).Hash.SecondaryData;
          if (FVar10 == (ForElementType<FSetElementId>)0x0) {
            FVar10 = (ForElementType<FSetElementId>)&(pUVar8->ControlsToSet).Hash;
          }
          iVar11 = *(int *)((longlong)FVar10 +
                           (ulonglong)((pUVar8->ControlsToSet).HashSize - 1U & FVar5.Number + uVar7)
                           * 4);
          if (iVar11 != -1) {
            lVar6 = *(longlong *)&(pUVar8->ControlsToSet).Elements;
            do {
              if (*(FName *)(lVar6 + (longlong)iVar11 * 0x10) == FVar5) {
                if (iVar11 != -1) goto LAB_14a3c9866;
                break;
              }
              iVar11 = *(int *)(lVar6 + 8 + (longlong)iVar11 * 0x10);
            } while (iVar11 != -1);
          }
        }
      }
    }
    pUVar8->bDoNotKey = bVar2;
  }
  return;
}

// Actuate @ 14a3c9a70

void __thiscall
TControlRigParameterActuatorVector::Actuate
          (TControlRigParameterActuatorVector *this,FMovieSceneInterrogationData *param_1,
          FControlRigTrackTokenVector *param_2,
          TBlendableTokenStack<FControlRigTrackTokenVector> *param_3,FMovieSceneContext *param_4)

{
  TVector<double>_u_0 local_48;
  FName FStack_30;
  double local_18;
  FName FStack_10;
  
  FStack_10 = this->ParameterName;
  local_48._s_0.X = (param_2->Value).field0_0x0._s_0.X;
  local_48._s_0.Y = (param_2->Value).field0_0x0._s_0.Y;
  local_18 = (param_2->Value).field0_0x0._s_0.Z;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FMovieSceneAnimTypeID::Unique();
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_48._s_0.Z = local_18;
  FStack_30 = FStack_10;
  FMovieSceneInterrogationData::Add<FVectorInterrogationData>
            (param_1,(FVectorInterrogationData *)&local_48._s_0,
             (FMovieSceneInterrogationKey)::TypeID.ID);
  return;
}

// RetrieveCurrentValue @ 14a454390

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FControlRigTrackTokenVector * __thiscall
TControlRigParameterActuatorVector::RetrieveCurrentValue
          (TControlRigParameterActuatorVector *this,
          FControlRigTrackTokenVector *__return_storage_ptr__,UObject *param_1,
          IMovieScenePlayer *param_2)

{
  double dVar1;
  ERigControlAnimationType EVar2;
  ERigControlType EVar3;
  UMovieSceneControlRigParameterSection *pUVar4;
  UControlRig *this_00;
  FRigControlElement *pFVar5;
  FRigControlValue *pFVar6;
  ERigControlValueType local_res8 [8];
  TVector<double>_u_0 local_a8;
  FRigControlValue local_90;
  
  pUVar4 = (UMovieSceneControlRigParameterSection *)
           FWeakObjectPtr::Get(&(this->SectionData).WeakPtr);
  if (pUVar4 != (UMovieSceneControlRigParameterSection *)0x0) {
    this_00 = GetControlRig(pUVar4,param_1);
    if (this_00 != (UControlRig *)0x0) {
      pFVar5 = (FRigControlElement *)
               (**(code **)(this_00->_padding_ + 0x3c8))(this_00,&this->ParameterName);
      if ((((pFVar5 != (FRigControlElement *)0x0) &&
           (EVar2 = (pFVar5->Settings).AnimationType, EVar2 != ProxyControl)) &&
          (EVar2 != VisualCue)) &&
         ((EVar3 = (pFVar5->Settings).ControlType, EVar3 == Position || ((byte)(EVar3 - Scale) < 2))
         )) {
        local_res8[0] = Current;
        pFVar6 = UControlRig::GetControlValue(this_00,&local_90,pFVar5,local_res8);
        dVar1 = *(double *)&pFVar6->FloatStorage;
        local_a8._8_4_ = (pFVar6->FloatStorage).Float02;
        if ((pFVar5->Settings).ControlType == Rotator) {
          local_a8._0_8_ = dVar1;
          UControlRig::GetControlSpecifiedEulerAngle
                    (this_00,(TVector<double> *)&local_a8._s_0,pFVar5,false);
          local_a8._0_4_ = (undefined4)local_a8._s_0.X;
          local_a8._4_4_ = (undefined4)(double)CONCAT44(local_a8._12_4_,local_a8._8_4_);
          local_a8._8_4_ = (undefined4)local_a8._s_0.Z;
        }
        else {
          local_a8._4_4_ = (undefined4)((ulonglong)dVar1 >> 0x20);
          local_a8._0_4_ = SUB84(dVar1,0);
        }
        (__return_storage_ptr__->Value).field0_0x0._s_0.X = (double)(float)local_a8._0_4_;
        (__return_storage_ptr__->Value).field0_0x0._s_0.Y = (double)(float)local_a8._4_4_;
        (__return_storage_ptr__->Value).field0_0x0._s_0.Z = (double)(float)local_a8._8_4_;
      }
    }
  }
  return __return_storage_ptr__;
}

