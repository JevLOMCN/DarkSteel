// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 8

// Resolve<FControlRigTrackTokenFloat> @ 14a3a9a50

/* WARNING: Removing unreachable block (ram,0x00014a3a9bad) */
/* WARNING: Removing unreachable block (ram,0x00014a3a9bd2) */

FControlRigTrackTokenFloat __thiscall
UE::MovieScene::TMaskedBlendable<float,1>::Resolve<FControlRigTrackTokenFloat>
          (TMaskedBlendable<float,1> *this,
          TMovieSceneInitialValueStore<FControlRigTrackTokenFloat> *param_1)

{
  code *pcVar1;
  TMultiChannelValue<float,1> TVar2;
  bool bVar3;
  FControlRigTrackTokenFloat FVar4;
  float fVar5;
  undefined4 extraout_var;
  TMovieSceneInitialValueStore<FControlRigTrackTokenFloat> *in_R8;
  undefined1 local_68 [4];
  float local_64 [3];
  undefined8 local_58;
  float local_48;
  float local_40;
  undefined4 uStack_3c;
  undefined4 uStack_34;
  
  bVar3 = false;
  if (((this->Override).Mask & 1) == 0) {
    if (((this->Absolute).Mask & 1) == 0) {
      if (((this->Additive).Mask & 1) != 0) goto LAB_14a3a9ab2;
    }
    else if (this->AbsoluteWeights[0] == 0.0) {
LAB_14a3a9ab2:
      if ((this->InitialValue).bIsSet == false) {
        (this->InitialValue).TypedValue.Mask = 0;
        (this->InitialValue).bIsSet = true;
        FVar4 = TMovieSceneInitialValueStore<FControlRigTrackTokenFloat>::GetInitialValue(in_R8);
        uStack_3c = 1;
        local_40 = *(float *)CONCAT44(extraout_var,FVar4.Value);
        TVar2.Mask = 1;
        TVar2.Channels[0] = local_40;
        (this->InitialValue).TypedValue = TVar2;
      }
      if (((this->InitialValue).bIsSet == false) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar3)) {
        pcVar1 = (code *)swi(3);
        fVar5 = (float)(*pcVar1)();
        return (FControlRigTrackTokenFloat)fVar5;
      }
      if ((((this->InitialValue).TypedValue.Mask & 1) == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index < N && IsSet(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\MovieSceneMultiChannelBlending.h"
                             ,0x5d,L"Attempting to access an invalid channel."), bVar3)) {
        pcVar1 = (code *)swi(3);
        fVar5 = (float)(*pcVar1)();
        return (FControlRigTrackTokenFloat)fVar5;
      }
      local_48 = (this->InitialValue).TypedValue.Channels[0];
      bVar3 = true;
    }
    else {
      bVar3 = true;
      local_48 = (this->Absolute).Channels[0] / this->AbsoluteWeights[0];
    }
    if (((this->Additive).Mask & 1) == 0) goto LAB_14a3a9b6e;
    fVar5 = (this->Additive).Channels[0];
    if (bVar3) {
      fVar5 = local_48 + fVar5;
    }
  }
  else {
    fVar5 = (this->Override).Channels[0];
  }
  bVar3 = true;
  local_48 = fVar5;
LAB_14a3a9b6e:
  if (!bVar3) {
    (**(code **)(in_R8->Actuator->_padding_ + 0x28))
              (in_R8->Actuator,local_64,in_R8->AnimatingObject,in_R8->Player);
    local_58 = CONCAT44(1,local_64[0]);
    uStack_34 = 1;
    bVar3 = true;
    local_48 = local_64[0];
  }
  if (!bVar3) {
    local_68[0] = 0;
    `UE::MovieScene::TMaskedBlendable<float,1>::Resolve<FControlRigTrackTokenFloat>'::__l2::
    <lambda_1>::operator()(local_68);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < N && IsSet(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\MovieSceneMultiChannelBlending.h"
                       ,0x5d,L"Attempting to access an invalid channel.");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      fVar5 = (float)(*pcVar1)();
      return (FControlRigTrackTokenFloat)fVar5;
    }
  }
  *(float *)&param_1->Actuator = local_48;
  return (FControlRigTrackTokenFloat)SUB84(param_1,0);
}

// Resolve<FControlRigTrackTokenTransform> @ 14a3a9c50

FControlRigTrackTokenTransform * __thiscall
UE::MovieScene::TMaskedBlendable<float,9>::Resolve<FControlRigTrackTokenTransform>
          (TMaskedBlendable<float,9> *this,FControlRigTrackTokenTransform *__return_storage_ptr__,
          TMovieSceneInitialValueStore<FControlRigTrackTokenTransform> *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  float *pfVar4;
  FControlRigTrackTokenTransform *pFVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  byte bVar10;
  longlong lVar11;
  float fVar12;
  undefined1 local_158 [8];
  TMultiChannelValue<float,9> local_150;
  float afStack_128 [2];
  longlong local_120;
  FControlRigTrackTokenTransform *local_118;
  TMultiChannelValue<float,9> local_110;
  char local_e8;
  FControlRigTrackTokenTransform local_e0;
  FControlRigTrackTokenTransform local_98;
  
  uVar7 = 0;
  local_118 = __return_storage_ptr__;
  local_e8 = '\0';
  local_120 = (longlong)&local_110 - (longlong)this;
  bVar10 = 0;
  local_150.Mask = 0;
  lVar11 = 0;
  lVar9 = (longlong)this - (longlong)&local_150;
  do {
    uVar8 = 1 << (bVar10 & 0x1f);
    if (((this->Override).Mask & uVar8) == 0) {
      if (((this->Absolute).Mask & uVar8) == 0) {
        if (((this->Additive).Mask & uVar8) != 0) goto LAB_14a3a9d1c;
      }
      else {
        if (*(float *)((longlong)afStack_128 + lVar11 + lVar9) == 0.0) {
LAB_14a3a9d1c:
          if ((this->InitialValue).bIsSet == false) {
            (this->InitialValue).TypedValue.Mask = 0;
            (this->InitialValue).bIsSet = true;
            pFVar5 = TMovieSceneInitialValueStore<FControlRigTrackTokenTransform>::GetInitialValue
                               (param_1,&local_98);
            MultiChannelFromData(pFVar5,&(this->InitialValue).TypedValue);
            if ((this->InitialValue).bIsSet == false) {
              bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x1bd,
                                 L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                );
              if (bVar3) {
                pcVar1 = (code *)swi(3);
                pFVar5 = (FControlRigTrackTokenTransform *)(*pcVar1)();
                return pFVar5;
              }
            }
          }
          if (((this->InitialValue).TypedValue.Mask & uVar8) == 0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index < N && IsSet(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\MovieSceneMultiChannelBlending.h"
                               ,0x5d,L"Attempting to access an invalid channel.");
            if (bVar3) {
              pcVar1 = (code *)swi(3);
              pFVar5 = (FControlRigTrackTokenTransform *)(*pcVar1)();
              return pFVar5;
            }
          }
          *(undefined4 *)((longlong)local_150.Channels + lVar11) =
               *(undefined4 *)((longlong)(this->InitialValue).TypedValue.Channels + lVar11);
          uVar7 = local_150.Mask | uVar8;
        }
        else {
          pfVar4 = (float *)((longlong)local_150.Channels + lVar11);
          *pfVar4 = *(float *)((longlong)pfVar4 + lVar9) /
                    *(float *)((longlong)afStack_128 + lVar9 + lVar11);
          uVar7 = local_150.Mask | 1 << (bVar10 & 0x1f);
        }
        local_150.Mask = uVar7;
      }
      uVar8 = (this->Additive).Mask;
      if ((uVar8 >> (bVar10 & 0x1f) & 1) != 0) {
        if ((uVar8 >> (bVar10 & 0x1f) & 1) == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index < N && IsSet(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\MovieSceneMultiChannelBlending.h"
                             ,0x5d,L"Attempting to access an invalid channel.");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            pFVar5 = (FControlRigTrackTokenTransform *)(*pcVar1)();
            return pFVar5;
          }
        }
        fVar12 = *(float *)((longlong)(this->Additive).Channels + lVar11);
        if ((uVar7 >> (bVar10 & 0x1f) & 1) != 0) {
          fVar12 = fVar12 + *(float *)((longlong)local_150.Channels + lVar11);
        }
        *(float *)((longlong)local_150.Channels + lVar11) = fVar12;
        uVar7 = local_150.Mask | 1 << (bVar10 & 0x1f);
        goto LAB_14a3a9e33;
      }
    }
    else {
      *(undefined4 *)((longlong)local_150.Channels + lVar11) =
           *(undefined4 *)((longlong)(this->Override).Channels + lVar11);
      uVar7 = local_150.Mask | uVar8;
LAB_14a3a9e33:
      local_150.Mask = uVar7;
    }
    if ((uVar7 >> (bVar10 & 0x1f) & 1) == 0) {
      if (local_e8 == '\0') {
        local_110.Mask = 0;
        local_e8 = '\x01';
        (**(code **)(param_1->Actuator->_padding_ + 0x28))
                  (param_1->Actuator,&local_e0,param_1->AnimatingObject,param_1->Player);
        MultiChannelFromData(&local_e0,&local_110);
        if (local_e8 == '\0') {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            );
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            pFVar5 = (FControlRigTrackTokenTransform *)(*pcVar1)();
            return pFVar5;
          }
        }
      }
      if ((local_110.Mask >> (bVar10 & 0x1f) & 1) == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < N && IsSet(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\MovieSceneMultiChannelBlending.h"
                           ,0x5d,L"Attempting to access an invalid channel.");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          pFVar5 = (FControlRigTrackTokenTransform *)(*pcVar1)();
          return pFVar5;
        }
      }
      puVar6 = (undefined4 *)((longlong)local_150.Channels + lVar11);
      *puVar6 = *(undefined4 *)(local_120 + lVar9 + (longlong)puVar6);
      uVar7 = local_150.Mask | 1 << (bVar10 & 0x1f);
      local_150.Mask = uVar7;
    }
    pFVar5 = local_118;
    bVar10 = bVar10 + 1;
    lVar11 = lVar11 + 4;
    if (8 < bVar10) {
      if (uVar7 != 0x1ff) {
        `UE::MovieScene::TMaskedBlendable<float,9>::Resolve<FControlRigTrackTokenTransform>'::__l2::
        <lambda_1>::operator()(local_158);
      }
      (pFVar5->Value).Location.field0_0x0._s_0.X = 0.0;
      (pFVar5->Value).Location.field0_0x0._s_0.Y = 0.0;
      (pFVar5->Value).Location.field0_0x0._s_0.Z = 0.0;
      (pFVar5->Value).Rotation.Pitch = 0.0;
      (pFVar5->Value).Rotation.Yaw = 0.0;
      (pFVar5->Value).Rotation.Roll = 0.0;
      uVar2 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
      (pFVar5->Value).Scale.field0_0x0._s_0.X =
           UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
      (pFVar5->Value).Scale.field0_0x0._s_0.Y = (double)uVar2;
      (pFVar5->Value).Scale.field0_0x0._s_0.Z =
           UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
      ResolveChannelsToData(&local_150,pFVar5);
      return pFVar5;
    }
  } while( true );
}

// Resolve<FControlRigTrackTokenVector2D> @ 14a3a9fc0

FControlRigTrackTokenVector2D * __thiscall
UE::MovieScene::TMaskedBlendable<float,2>::Resolve<FControlRigTrackTokenVector2D>
          (TMaskedBlendable<float,2> *this,FControlRigTrackTokenVector2D *__return_storage_ptr__,
          TMovieSceneInitialValueStore<FControlRigTrackTokenVector2D> *param_1)

{
  code *pcVar1;
  bool bVar2;
  float *pfVar3;
  FControlRigTrackTokenVector2D *pFVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  byte bVar8;
  longlong lVar9;
  float fVar10;
  undefined1 local_a8 [8];
  float local_a0 [2];
  uint local_98;
  float fStack_94;
  TMultiChannelValue<float,2> local_90;
  char local_84;
  longlong local_80;
  FControlRigTrackTokenVector2D *local_78;
  FControlRigTrackTokenVector2D local_70;
  FControlRigTrackTokenVector2D local_60 [2];
  
  uVar5 = 0;
  local_78 = __return_storage_ptr__;
  local_84 = '\0';
  local_80 = (longlong)&local_90 - (longlong)this;
  bVar8 = 0;
  local_98 = 0;
  lVar9 = 0;
  lVar7 = (longlong)this - (longlong)local_a0;
  do {
    uVar6 = 1 << (bVar8 & 0x1f);
    if (((this->Override).Mask & uVar6) == 0) {
      if (((this->Absolute).Mask & uVar6) == 0) {
        if (((this->Additive).Mask & uVar6) != 0) goto LAB_14a3aa086;
      }
      else {
        if (*(float *)((longlong)&fStack_94 + lVar7 + lVar9) == 0.0) {
LAB_14a3aa086:
          if ((this->InitialValue).bIsSet == false) {
            (this->InitialValue).TypedValue.Mask = 0;
            (this->InitialValue).bIsSet = true;
            pFVar4 = TMovieSceneInitialValueStore<FControlRigTrackTokenVector2D>::GetInitialValue
                               (param_1,local_60);
            MultiChannelFromData(pFVar4,&(this->InitialValue).TypedValue);
            if ((this->InitialValue).bIsSet == false) {
              bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x1bd,
                                 L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                );
              if (bVar2) {
                pcVar1 = (code *)swi(3);
                pFVar4 = (FControlRigTrackTokenVector2D *)(*pcVar1)();
                return pFVar4;
              }
            }
          }
          if (((this->InitialValue).TypedValue.Mask & uVar6) == 0) {
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index < N && IsSet(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\MovieSceneMultiChannelBlending.h"
                               ,0x5d,L"Attempting to access an invalid channel.");
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              pFVar4 = (FControlRigTrackTokenVector2D *)(*pcVar1)();
              return pFVar4;
            }
          }
          *(undefined4 *)((longlong)local_a0 + lVar9) =
               *(undefined4 *)((longlong)(this->InitialValue).TypedValue.Channels + lVar9);
          uVar5 = local_98 | uVar6;
        }
        else {
          pfVar3 = (float *)((longlong)local_a0 + lVar9);
          *pfVar3 = *(float *)(lVar7 + (longlong)pfVar3) /
                    *(float *)(lVar7 + 0xc + (longlong)pfVar3);
          uVar5 = local_98 | 1 << (bVar8 & 0x1f);
        }
        local_98 = uVar5;
      }
      uVar6 = (this->Additive).Mask;
      if ((uVar6 >> (bVar8 & 0x1f) & 1) != 0) {
        if ((uVar6 >> (bVar8 & 0x1f) & 1) == 0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index < N && IsSet(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\MovieSceneMultiChannelBlending.h"
                             ,0x5d,L"Attempting to access an invalid channel.");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            pFVar4 = (FControlRigTrackTokenVector2D *)(*pcVar1)();
            return pFVar4;
          }
        }
        fVar10 = *(float *)((longlong)(this->Additive).Channels + lVar9);
        if ((uVar5 >> (bVar8 & 0x1f) & 1) != 0) {
          fVar10 = fVar10 + *(float *)((longlong)local_a0 + lVar9);
        }
        *(float *)((longlong)local_a0 + lVar9) = fVar10;
        uVar5 = local_98 | 1 << (bVar8 & 0x1f);
        goto LAB_14a3aa184;
      }
    }
    else {
      *(undefined4 *)((longlong)local_a0 + lVar9) =
           *(undefined4 *)((longlong)(this->Override).Channels + lVar9);
      uVar5 = local_98 | uVar6;
LAB_14a3aa184:
      local_98 = uVar5;
    }
    if ((uVar5 >> (bVar8 & 0x1f) & 1) == 0) {
      if (local_84 == '\0') {
        local_90.Mask = 0;
        local_84 = '\x01';
        (**(code **)(param_1->Actuator->_padding_ + 0x28))
                  (param_1->Actuator,&local_70,param_1->AnimatingObject,param_1->Player);
        MultiChannelFromData(&local_70,&local_90);
        if (local_84 == '\0') {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            );
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            pFVar4 = (FControlRigTrackTokenVector2D *)(*pcVar1)();
            return pFVar4;
          }
        }
      }
      if ((local_90.Mask >> (bVar8 & 0x1f) & 1) == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < N && IsSet(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\MovieSceneMultiChannelBlending.h"
                           ,0x5d,L"Attempting to access an invalid channel.");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FControlRigTrackTokenVector2D *)(*pcVar1)();
          return pFVar4;
        }
      }
      *(undefined4 *)((longlong)local_a0 + lVar9) =
           *(undefined4 *)(local_80 + lVar7 + (longlong)local_a0 + lVar9);
      uVar5 = local_98 | 1 << (bVar8 & 0x1f);
      local_98 = uVar5;
    }
    bVar8 = bVar8 + 1;
    lVar9 = lVar9 + 4;
    if (1 < bVar8) {
      if (uVar5 != 3) {
        local_a8[0] = 0;
        `UE::MovieScene::TMaskedBlendable<float,2>::Resolve<FControlRigTrackTokenVector2D>'::__l2::
        <lambda_1>::operator()(local_a8);
      }
      if ((uVar5 & 2) == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < N && IsSet(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\MovieSceneMultiChannelBlending.h"
                           ,0x5d,L"Attempting to access an invalid channel.");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FControlRigTrackTokenVector2D *)(*pcVar1)();
          return pFVar4;
        }
      }
      if ((local_98 & 1) == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < N && IsSet(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\MovieSceneMultiChannelBlending.h"
                           ,0x5d,L"Attempting to access an invalid channel.");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FControlRigTrackTokenVector2D *)(*pcVar1)();
          return pFVar4;
        }
      }
      (local_78->Value).field0_0x0._s_0.X = (double)local_a0[0];
      (local_78->Value).field0_0x0._s_0.Y = (double)local_a0[1];
      return local_78;
    }
  } while( true );
}

// Resolve<FControlRigTrackTokenVector> @ 14a3aa310

FControlRigTrackTokenVector * __thiscall
UE::MovieScene::TMaskedBlendable<float,3>::Resolve<FControlRigTrackTokenVector>
          (TMaskedBlendable<float,3> *this,FControlRigTrackTokenVector *__return_storage_ptr__,
          TMovieSceneInitialValueStore<FControlRigTrackTokenVector> *param_1)

{
  code *pcVar1;
  bool bVar2;
  float *pfVar3;
  FControlRigTrackTokenVector *pFVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  byte bVar8;
  longlong lVar9;
  float fVar10;
  undefined1 local_c8 [8];
  float local_c0 [3];
  uint local_b4;
  TMultiChannelValue<float,3> local_b0;
  char local_a0;
  longlong local_98;
  FControlRigTrackTokenVector *local_90;
  FControlRigTrackTokenVector local_88;
  FControlRigTrackTokenVector local_70 [2];
  
  uVar5 = 0;
  bVar8 = 0;
  local_90 = __return_storage_ptr__;
  local_a0 = '\0';
  local_98 = (longlong)&local_b0 - (longlong)this;
  lVar9 = 0;
  local_b4 = 0;
  lVar7 = (longlong)this - (longlong)local_c0;
  do {
    uVar6 = 1 << (bVar8 & 0x1f);
    if (((this->Override).Mask & uVar6) == 0) {
      if (((this->Absolute).Mask & uVar6) == 0) {
        if (((this->Additive).Mask & uVar6) != 0) goto LAB_14a3aa3d6;
      }
      else {
        if (*(float *)((longlong)&local_b0 + lVar7 + lVar9) == 0.0) {
LAB_14a3aa3d6:
          if ((this->InitialValue).bIsSet == false) {
            (this->InitialValue).TypedValue.Mask = 0;
            (this->InitialValue).bIsSet = true;
            pFVar4 = TMovieSceneInitialValueStore<FControlRigTrackTokenVector>::GetInitialValue
                               (param_1,local_70);
            MultiChannelFromData(pFVar4,&(this->InitialValue).TypedValue);
            if ((this->InitialValue).bIsSet == false) {
              bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x1bd,
                                 L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                );
              if (bVar2) {
                pcVar1 = (code *)swi(3);
                pFVar4 = (FControlRigTrackTokenVector *)(*pcVar1)();
                return pFVar4;
              }
            }
          }
          if (((this->InitialValue).TypedValue.Mask & uVar6) == 0) {
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index < N && IsSet(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\MovieSceneMultiChannelBlending.h"
                               ,0x5d,L"Attempting to access an invalid channel.");
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              pFVar4 = (FControlRigTrackTokenVector *)(*pcVar1)();
              return pFVar4;
            }
          }
          *(undefined4 *)((longlong)local_c0 + lVar9) =
               *(undefined4 *)((longlong)(this->InitialValue).TypedValue.Channels + lVar9);
          uVar5 = local_b4 | uVar6;
        }
        else {
          pfVar3 = (float *)((longlong)local_c0 + lVar9);
          *pfVar3 = *(float *)(lVar7 + (longlong)pfVar3) /
                    *(float *)(lVar7 + 0x10 + (longlong)pfVar3);
          uVar5 = local_b4 | 1 << (bVar8 & 0x1f);
        }
        local_b4 = uVar5;
      }
      uVar6 = (this->Additive).Mask;
      if ((uVar6 >> (bVar8 & 0x1f) & 1) != 0) {
        if ((uVar6 >> (bVar8 & 0x1f) & 1) == 0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index < N && IsSet(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\MovieSceneMultiChannelBlending.h"
                             ,0x5d,L"Attempting to access an invalid channel.");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            pFVar4 = (FControlRigTrackTokenVector *)(*pcVar1)();
            return pFVar4;
          }
        }
        fVar10 = *(float *)((longlong)(this->Additive).Channels + lVar9);
        if ((uVar5 >> (bVar8 & 0x1f) & 1) != 0) {
          fVar10 = fVar10 + *(float *)((longlong)local_c0 + lVar9);
        }
        *(float *)((longlong)local_c0 + lVar9) = fVar10;
        uVar5 = local_b4 | 1 << (bVar8 & 0x1f);
        goto LAB_14a3aa4d4;
      }
    }
    else {
      *(undefined4 *)((longlong)local_c0 + lVar9) =
           *(undefined4 *)((longlong)(this->Override).Channels + lVar9);
      uVar5 = local_b4 | uVar6;
LAB_14a3aa4d4:
      local_b4 = uVar5;
    }
    if ((uVar5 >> (bVar8 & 0x1f) & 1) == 0) {
      if (local_a0 == '\0') {
        local_b0.Mask = 0;
        local_a0 = '\x01';
        (**(code **)(param_1->Actuator->_padding_ + 0x28))
                  (param_1->Actuator,&local_88,param_1->AnimatingObject,param_1->Player);
        MultiChannelFromData(&local_88,&local_b0);
        if (local_a0 == '\0') {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            );
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            pFVar4 = (FControlRigTrackTokenVector *)(*pcVar1)();
            return pFVar4;
          }
        }
      }
      if ((local_b0.Mask >> (bVar8 & 0x1f) & 1) == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < N && IsSet(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\MovieSceneMultiChannelBlending.h"
                           ,0x5d,L"Attempting to access an invalid channel.");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FControlRigTrackTokenVector *)(*pcVar1)();
          return pFVar4;
        }
      }
      *(undefined4 *)((longlong)local_c0 + lVar9) =
           *(undefined4 *)(local_98 + lVar7 + (longlong)local_c0 + lVar9);
      uVar5 = local_b4 | 1 << (bVar8 & 0x1f);
      local_b4 = uVar5;
    }
    bVar8 = bVar8 + 1;
    lVar9 = lVar9 + 4;
    if (2 < bVar8) {
      if (uVar5 != 7) {
        local_c8[0] = 0;
        `UE::MovieScene::TMaskedBlendable<float,3>::Resolve<FControlRigTrackTokenVector>'::__l2::
        <lambda_1>::operator()(local_c8);
      }
      if ((uVar5 & 4) == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < N && IsSet(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\MovieSceneMultiChannelBlending.h"
                           ,0x5d,L"Attempting to access an invalid channel.");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FControlRigTrackTokenVector *)(*pcVar1)();
          return pFVar4;
        }
      }
      if ((uVar5 & 2) == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < N && IsSet(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\MovieSceneMultiChannelBlending.h"
                           ,0x5d,L"Attempting to access an invalid channel.");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FControlRigTrackTokenVector *)(*pcVar1)();
          return pFVar4;
        }
      }
      if ((local_b4 & 1) == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < N && IsSet(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\MovieSceneMultiChannelBlending.h"
                           ,0x5d,L"Attempting to access an invalid channel.");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FControlRigTrackTokenVector *)(*pcVar1)();
          return pFVar4;
        }
      }
      (local_90->Value).field0_0x0._s_0.X = (double)local_c0[0];
      (local_90->Value).field0_0x0._s_0.Y = (double)local_c0[1];
      (local_90->Value).field0_0x0._s_0.Z = (double)local_c0[2];
      return local_90;
    }
  } while( true );
}

// operator() @ 15054dc50

bool __thiscall
`UE::MovieScene::TMaskedBlendable<float,1>::Resolve<FControlRigTrackTokenFloat>'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1879571989031551230>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1879571989031551230>,
                       &`public:___cdecl_`public:_struct_FControlRigTrackTokenFloat___cdecl_UE::MovieScene::TMaskedBlendable<float,1>::Resolve<FControlRigTrackTokenFloat>(TMovieSceneInitialValueStore<FControlRigTrackTokenFloat>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15054dc90

bool __thiscall
`UE::MovieScene::TMaskedBlendable<float,9>::Resolve<FControlRigTrackTokenTransform>'::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1879571989031551230>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1879571989031551230>,
                       &`public:___cdecl_`public:_struct_FControlRigTrackTokenTransform___cdecl_UE::MovieScene::TMaskedBlendable<float,9>::Resolve<FControlRigTrackTokenTransform>(TMovieSceneInitialValueStore<FControlRigTrackTokenTransform>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15054dcd0

bool __thiscall
`UE::MovieScene::TMaskedBlendable<float,2>::Resolve<FControlRigTrackTokenVector2D>'::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1879571989031551230>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1879571989031551230>,
                       &`public:___cdecl_`public:_struct_FControlRigTrackTokenVector2D___cdecl_UE::MovieScene::TMaskedBlendable<float,2>::Resolve<FControlRigTrackTokenVector2D>(TMovieSceneInitialValueStore<FControlRigTrackTokenVector2D>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15054dd10

bool __thiscall
`UE::MovieScene::TMaskedBlendable<float,3>::Resolve<FControlRigTrackTokenVector>'::__l2::<lambda_1>
::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1879571989031551230>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1879571989031551230>,
                       &`public:___cdecl_`public:_struct_FControlRigTrackTokenVector___cdecl_UE::MovieScene::TMaskedBlendable<float,3>::Resolve<FControlRigTrackTokenVector>(TMovieSceneInitialValueStore<FControlRigTrackTokenVector>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

