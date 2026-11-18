// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 3

// Actuate @ 14a3c9470

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
TControlRigParameterActuatorVector2D::Actuate
          (TControlRigParameterActuatorVector2D *this,UObject *param_1,
          FControlRigTrackTokenVector2D *param_2,
          TBlendableTokenStack<FControlRigTrackTokenVector2D> *param_3,FMovieSceneContext *param_4,
          FPersistentEvaluationData *param_5,IMovieScenePlayer *param_6)

{
  FName *pFVar1;
  bool bVar2;
  FName FVar3;
  uint uVar4;
  UMovieSceneControlRigParameterSection *pUVar5;
  UControlRig *pUVar6;
  longlong lVar7;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  undefined1 local_b8 [4];
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined1 local_a4;
  float local_a0;
  float fStack_9c;
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
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 local_20;
  
  pUVar5 = (UMovieSceneControlRigParameterSection *)
           FWeakObjectPtr::Get(&(this->SectionData).WeakPtr);
  if (pUVar5 != (UMovieSceneControlRigParameterSection *)0x0) {
    bVar2 = pUVar5->bDoNotKey;
    pUVar5->bDoNotKey = true;
    pUVar6 = GetControlRig(pUVar5,param_1);
    if (pUVar6 != (UControlRig *)0x0) {
      pFVar1 = &this->ParameterName;
      if (*(int *)&(pUVar5->ControlsToSet).Elements.field_0x8 ==
          *(int *)&(pUVar5->ControlsToSet).Elements.field_0x34) {
LAB_14a3c9576:
        lVar7 = (**(code **)(pUVar6->_padding_ + 0x3c8))(pUVar6,pFVar1);
        if ((((lVar7 != 0) && (*(char *)(lVar7 + 0x230) != '\x02')) &&
            (*(char *)(lVar7 + 0x230) != '\x03')) && (*(char *)(lVar7 + 0x231) == '\x03')) {
          local_90 = 0;
          uStack_88 = 0;
          local_80 = 0;
          uStack_78 = 0;
          local_a8 = 0;
          local_70 = 0;
          uStack_68 = 0;
          local_a4 = 0;
          local_60 = 0;
          uStack_58 = 0;
          uStack_98 = 0;
          local_50 = 0;
          uStack_48 = 0;
          local_40 = 0;
          uStack_38 = 0;
          local_30 = 0;
          uStack_28 = 0;
          local_b8[0] = 2;
          local_b4 = 0x1ff;
          local_b0 = 0x7f7fffff;
          local_20 = 1;
          _local_a0 = CONCAT44((float)(param_2->Value).field0_0x0._s_0.Y,
                               (float)(param_2->Value).field0_0x0._s_0.X);
          (**(code **)(pUVar6->_padding_ + 0x3f0))(pUVar6,pFVar1,&local_a0,1,local_b8,0,0,0);
        }
      }
      else {
        FVar3 = *pFVar1;
        uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
        if (*(int *)&(pUVar5->ControlsToSet).Elements.field_0x8 !=
            *(int *)&(pUVar5->ControlsToSet).Elements.field_0x34) {
          FVar8 = (pUVar5->ControlsToSet).Hash.SecondaryData;
          if (FVar8 == (ForElementType<FSetElementId>)0x0) {
            FVar8 = (ForElementType<FSetElementId>)&(pUVar5->ControlsToSet).Hash;
          }
          iVar9 = *(int *)((longlong)FVar8 +
                          (ulonglong)((pUVar5->ControlsToSet).HashSize - 1U & FVar3.Number + uVar4)
                          * 4);
          if (iVar9 != -1) {
            lVar7 = *(longlong *)&(pUVar5->ControlsToSet).Elements;
            do {
              if (*(FName *)(lVar7 + (longlong)iVar9 * 0x10) == FVar3) {
                if (iVar9 != -1) goto LAB_14a3c9576;
                break;
              }
              iVar9 = *(int *)(lVar7 + 8 + (longlong)iVar9 * 0x10);
            } while (iVar9 != -1);
          }
        }
      }
    }
    pUVar5->bDoNotKey = bVar2;
  }
  return;
}

// Actuate @ 14a3c96b0

void __thiscall
TControlRigParameterActuatorVector2D::Actuate
          (TControlRigParameterActuatorVector2D *this,FMovieSceneInterrogationData *param_1,
          FControlRigTrackTokenVector2D *param_2,
          TBlendableTokenStack<FControlRigTrackTokenVector2D> *param_3,FMovieSceneContext *param_4)

{
  TVector2<double>_u_0 local_38;
  FName local_28;
  FName local_10;
  
  local_10 = this->ParameterName;
  local_38._0_4_ = *(undefined4 *)&(param_2->Value).field0_0x0;
  local_38._4_4_ = *(undefined4 *)((longlong)&(param_2->Value).field0_0x0 + 4);
  local_38._8_4_ = *(undefined4 *)((longlong)&(param_2->Value).field0_0x0 + 8);
  local_38._12_4_ = *(undefined4 *)((longlong)&(param_2->Value).field0_0x0 + 0xc);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    FMovieSceneAnimTypeID::Unique();
    _Init_thread_footer(&::_TSS0);
  }
  local_28 = local_10;
  FMovieSceneInterrogationData::Add<FVector2DInterrogationData>
            (param_1,(FVector2DInterrogationData *)&local_38._s_0,
             (FMovieSceneInterrogationKey)::TypeID.ID);
  return;
}

// RetrieveCurrentValue @ 14a4542b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FControlRigTrackTokenVector2D * __thiscall
TControlRigParameterActuatorVector2D::RetrieveCurrentValue
          (TControlRigParameterActuatorVector2D *this,
          FControlRigTrackTokenVector2D *__return_storage_ptr__,UObject *param_1,
          IMovieScenePlayer *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ERigControlAnimationType EVar3;
  UMovieSceneControlRigParameterSection *pUVar4;
  UControlRig *this_00;
  FRigControlElement *pFVar5;
  FRigControlValue *pFVar6;
  ERigControlValueType local_res8 [8];
  float fStack_a4;
  FRigControlValue local_98;
  
  pUVar4 = (UMovieSceneControlRigParameterSection *)
           FWeakObjectPtr::Get(&(this->SectionData).WeakPtr);
  if (pUVar4 != (UMovieSceneControlRigParameterSection *)0x0) {
    this_00 = GetControlRig(pUVar4,param_1);
    if (this_00 != (UControlRig *)0x0) {
      pFVar5 = (FRigControlElement *)
               (**(code **)(this_00->_padding_ + 0x3c8))(this_00,&this->ParameterName);
      if ((((pFVar5 != (FRigControlElement *)0x0) &&
           (EVar3 = (pFVar5->Settings).AnimationType, EVar3 != ProxyControl)) &&
          (EVar3 != VisualCue)) && ((pFVar5->Settings).ControlType == Vector2D)) {
        local_res8[0] = Current;
        pFVar6 = UControlRig::GetControlValue(this_00,&local_98,pFVar5,local_res8);
        uVar1 = (pFVar6->FloatStorage).Float00;
        uVar2 = (pFVar6->FloatStorage).Float01;
        (__return_storage_ptr__->Value).field0_0x0._s_0.X = (double)(float)uVar1;
        (__return_storage_ptr__->Value).field0_0x0._s_0.Y = (double)(float)uVar2;
      }
    }
  }
  return __return_storage_ptr__;
}

