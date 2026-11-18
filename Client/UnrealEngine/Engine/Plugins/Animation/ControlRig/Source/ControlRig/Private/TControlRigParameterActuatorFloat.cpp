// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 3

// Actuate @ 14a3c88c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
TControlRigParameterActuatorFloat::Actuate
          (TControlRigParameterActuatorFloat *this,UObject *param_1,
          FControlRigTrackTokenFloat *param_2,
          TBlendableTokenStack<FControlRigTrackTokenFloat> *param_3,FMovieSceneContext *param_4,
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
  ulonglong local_a0 [16];
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
LAB_14a3c89c6:
        lVar7 = (**(code **)(pUVar6->_padding_ + 0x3c8))(pUVar6,pFVar1);
        if ((((lVar7 != 0) && (*(char *)(lVar7 + 0x230) != '\x02')) &&
            (*(char *)(lVar7 + 0x230) != '\x03')) &&
           ((*(char *)(lVar7 + 0x231) == '\x01' || (*(char *)(lVar7 + 0x231) == '\n')))) {
          local_a0[1] = 0;
          local_a8 = 0;
          local_a4 = 0;
          local_a0[2] = 0;
          local_a0[3] = 0;
          local_a0[4] = 0;
          local_a0[5] = 0;
          local_a0[6] = 0;
          local_a0[7] = 0;
          local_b8[0] = 2;
          local_a0[8] = 0;
          local_a0[9] = 0;
          local_b4 = 0x1ff;
          local_a0[10] = 0;
          local_a0[0xb] = 0;
          local_b0 = 0x7f7fffff;
          local_a0[0xc] = 0;
          local_a0[0xd] = 0;
          local_20 = 1;
          local_a0[0xe] = 0;
          local_a0[0xf] = 0;
          local_a0[0] = (ulonglong)(uint)param_2->Value;
          (**(code **)(pUVar6->_padding_ + 0x3f0))(pUVar6,pFVar1,local_a0,1,local_b8,0,0,0);
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
                if (iVar9 != -1) goto LAB_14a3c89c6;
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

// Actuate @ 14a3c8af0

void __thiscall
TControlRigParameterActuatorFloat::Actuate
          (TControlRigParameterActuatorFloat *this,FMovieSceneInterrogationData *param_1,
          FControlRigTrackTokenFloat *param_2,
          TBlendableTokenStack<FControlRigTrackTokenFloat> *param_3,FMovieSceneContext *param_4)

{
  float fVar1;
  FNameEntryId FStack_24;
  uint uStack_20;
  FFloatInterrogationData local_18;
  
  fVar1 = param_2->Value;
  FStack_24 = (this->ParameterName).ComparisonIndex;
  uStack_20 = (this->ParameterName).Number;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FMovieSceneAnimTypeID::Unique();
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_18.ParameterName.ComparisonIndex.Value = FStack_24.Value;
  local_18.Val = fVar1;
  local_18.ParameterName.Number = uStack_20;
  FMovieSceneInterrogationData::Add<FFloatInterrogationData>
            (param_1,&local_18,(FMovieSceneInterrogationKey)::TypeID.ID);
  return;
}

// RetrieveCurrentValue @ 14a453d00

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FControlRigTrackTokenFloat __thiscall
TControlRigParameterActuatorFloat::RetrieveCurrentValue
          (TControlRigParameterActuatorFloat *this,UObject *param_1,IMovieScenePlayer *param_2)

{
  ERigControlAnimationType EVar1;
  ERigControlType EVar2;
  UMovieSceneControlRigParameterSection *pUVar3;
  UControlRig *this_00;
  FRigControlElement *pFVar4;
  FRigControlValue *pFVar5;
  ERigControlValueType local_res8 [8];
  FRigControlValue local_98;
  
  pUVar3 = (UMovieSceneControlRigParameterSection *)
           FWeakObjectPtr::Get(&(this->SectionData).WeakPtr);
  if (pUVar3 != (UMovieSceneControlRigParameterSection *)0x0) {
    this_00 = GetControlRig(pUVar3,(UObject *)param_2);
    if (this_00 != (UControlRig *)0x0) {
      pFVar4 = (FRigControlElement *)
               (**(code **)(this_00->_padding_ + 0x3c8))(this_00,&this->ParameterName);
      if ((((pFVar4 != (FRigControlElement *)0x0) &&
           (EVar1 = (pFVar4->Settings).AnimationType, EVar1 != ProxyControl)) &&
          (EVar1 != VisualCue)) &&
         ((EVar2 = (pFVar4->Settings).ControlType, EVar2 == Float || (EVar2 == ScaleFloat)))) {
        local_res8[0] = Current;
        pFVar5 = UControlRig::GetControlValue(this_00,&local_98,pFVar4,local_res8);
        *(float *)param_1 = (pFVar5->FloatStorage).Float00;
      }
    }
  }
  return (FControlRigTrackTokenFloat)SUB84(param_1,0);
}

