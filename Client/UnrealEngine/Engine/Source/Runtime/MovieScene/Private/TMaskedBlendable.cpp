// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// Resolve<int> @ 146287820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
UE::MovieScene::TMaskedBlendable<double,1>::Resolve<int>
          (TMaskedBlendable<double,1> *this,TMovieSceneInitialValueStore<int> *param_1)

{
  double dVar1;
  code *pcVar2;
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  bool bVar5;
  int iVar6;
  undefined8 in_XMM1_Qb;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  double local_70;
  ulonglong uStack_68;
  double local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  bVar5 = false;
  if (((this->Override).Mask & 1) == 0) {
    if (((this->Absolute).Mask & 1) == 0) {
      if (((this->Additive).Mask & 1) != 0) goto LAB_146287895;
    }
    else if (this->AbsoluteWeights[0] == 0.0) {
LAB_146287895:
      if ((this->InitialValue).bIsSet == false) {
        (this->InitialValue).TypedValue.Mask = 0;
        (this->InitialValue).bIsSet = true;
        uStack_40._0_4_ = 1;
        iVar6 = TMovieSceneInitialValueStore<int>::GetInitialValue(param_1);
        auVar3._4_8_ = in_XMM1_Qb;
        auVar3._0_4_ = local_48._4_4_;
        auVar7._0_8_ = auVar3._0_8_ << 0x20;
        auVar7._8_4_ = (undefined4)uStack_40;
        auVar7._12_4_ = uStack_40._4_4_;
        local_48 = (double)iVar6;
        in_XMM1_Qb = auVar7._8_8_;
        (this->InitialValue).TypedValue.Channels[0] = local_48;
        *(undefined8 *)&(this->InitialValue).TypedValue.Mask = in_XMM1_Qb;
        uStack_40 = in_XMM1_Qb;
      }
      if (((this->InitialValue).bIsSet == false) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
      if ((((this->InitialValue).TypedValue.Mask & 1) == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index < N && IsSet(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\MovieSceneMultiChannelBlending.h"
                             ,0x5d,L"Attempting to access an invalid channel."), bVar5)) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
      local_58 = (this->InitialValue).TypedValue.Channels[0];
      bVar5 = true;
    }
    else {
      bVar5 = true;
      local_58 = (this->Absolute).Channels[0] / (double)this->AbsoluteWeights[0];
    }
    if (((this->Additive).Mask & 1) == 0) goto LAB_146287953;
    dVar1 = (this->Additive).Channels[0];
    if (bVar5) {
      dVar1 = local_58 + dVar1;
    }
  }
  else {
    dVar1 = (this->Override).Channels[0];
  }
  local_58 = dVar1;
  bVar5 = true;
LAB_146287953:
  dVar1 = local_58;
  if (!bVar5) {
    uStack_30._0_4_ = 1;
    iVar6 = (**(code **)(param_1->Actuator->_padding_ + 0x28))
                      (param_1->Actuator,param_1->AnimatingObject,param_1->Player);
    auVar4._4_8_ = in_XMM1_Qb;
    auVar4._0_4_ = local_38._4_4_;
    auVar8._0_8_ = auVar4._0_8_ << 0x20;
    auVar8._8_4_ = (undefined4)uStack_30;
    auVar8._12_4_ = uStack_30._4_4_;
    local_70 = (double)iVar6;
    uStack_68 = auVar8._8_8_;
    local_38 = local_70;
    uStack_30 = uStack_68;
    if (((uStack_68 & 1) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < N && IsSet(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\MovieSceneMultiChannelBlending.h"
                           ,0x5d,L"Attempting to access an invalid channel."), bVar5)) {
      pcVar2 = (code *)swi(3);
      iVar6 = (*pcVar2)();
      return iVar6;
    }
    bVar5 = true;
    dVar1 = local_70;
  }
  if (!bVar5) {
    local_78[0] = 0;
    `UE::MovieScene::TMaskedBlendable<double,1>::Resolve<int>'::__l2::<lambda_1>::operator()
              (local_78);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < N && IsSet(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\MovieSceneMultiChannelBlending.h"
                       ,0x5d,L"Attempting to access an invalid channel.");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      iVar6 = (*pcVar2)();
      return iVar6;
    }
  }
  return (int)dVar1;
}

// operator() @ 1504e76a0

bool __thiscall
`UE::MovieScene::TMaskedBlendable<double,1>::Resolve<int>'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1879571989031551230>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1879571989031551230>,
                       &`public:___cdecl_`public:_int___cdecl_UE::MovieScene::TMaskedBlendable<double,1>::Resolve<int>(TMovieSceneInitialValueStore<int>&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

