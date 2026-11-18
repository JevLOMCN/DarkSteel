// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 22

// BindInputs @ 14afc1f60

void __thiscall
Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float>::
BindInputs(TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float>
           *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FTrigger> *local_res18;
  undefined1 local_58 [16];
  code *local_48;
  TDataReadReference<Metasound::FTrigger> **local_40;
  undefined1 local_38 [16];
  
  FLazyName::Resolve(&ADSREnvelopeVertexNames::InputAttackTriggerName);
  local_res18 = &this->TriggerAttackIn;
  local_40 = &local_res18;
  local_58._0_8_ = &local_res8;
  local_38._8_8_ = local_58;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_58._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&ADSREnvelopeVertexNames::InputReleaseTriggerName);
  local_res18 = &this->TriggerReleaseIn;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_40 = &local_res18;
  local_38._0_8_ = &local_res8;
  local_58._8_8_ = local_38;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&ADSREnvelopeVertexNames::InputAttackTimeName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->AttackTime;
  local_40 = &local_res18;
  local_38._0_8_ = &local_res8;
  local_58._8_8_ = local_38;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTime>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTime>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&ADSREnvelopeVertexNames::InputDecayTimeName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->DecayTime;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTime>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_40 = &local_res18;
  local_38._0_8_ = &local_res8;
  local_58._8_8_ = local_38;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTime>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&ADSREnvelopeVertexNames::InputSustainLevelName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->SustainLevel;
  local_40 = &local_res18;
  local_38._0_8_ = &local_res8;
  local_58._8_8_ = local_38;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&ADSREnvelopeVertexNames::InputReleaseTimeName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->ReleaseTime;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTime>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_40 = &local_res18;
  local_38._0_8_ = &local_res8;
  local_58._8_8_ = local_38;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTime>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&ADSREnvelopeVertexNames::InputAttackCurveName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->AttackCurveFactor;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_40 = &local_res18;
  local_38._0_8_ = &local_res8;
  local_58._8_8_ = local_38;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&ADSREnvelopeVertexNames::InputDecayCurveName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->DecayCurveFactor;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_40 = &local_res18;
  local_38._0_8_ = &local_res8;
  local_58._8_8_ = local_38;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&ADSREnvelopeVertexNames::InputReleaseCurveName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->ReleaseCurveFactor;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_40 = &local_res18;
  local_38._0_8_ = &local_res8;
  local_58._8_8_ = local_38;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&ADSREnvelopeVertexNames::InputHardResetName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->bHardReset;
  local_40 = &local_res18;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_58._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  return;
}

// BindOutputs @ 14afc2320

void __thiscall
Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float>::
BindOutputs(TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float>
            *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FTrigger> *local_res18;
  undefined1 local_58 [16];
  code *local_48;
  TDataReadReference<Metasound::FTrigger> **local_40;
  undefined1 local_38 [16];
  
  FLazyName::Resolve(&ADSREnvelopeVertexNames::OutputOnAttackTriggerName);
  local_res18 = &this->TriggerAttackIn;
  local_40 = &local_res18;
  local_58._0_8_ = &local_res8;
  local_38._8_8_ = local_58;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_58._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_48
            );
  FLazyName::Resolve(&ADSREnvelopeVertexNames::OutputOnDecayTriggerName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->OnDecayTrigger;
  local_40 = &local_res18;
  local_38._0_8_ = &local_res8;
  local_58._8_8_ = local_38;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_48
            );
  FLazyName::Resolve(&ADSREnvelopeVertexNames::OutputOnSustainTriggerName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->OnSustainTrigger;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_40 = &local_res18;
  local_38._0_8_ = &local_res8;
  local_58._8_8_ = local_38;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_48
            );
  FLazyName::Resolve(&ADSREnvelopeVertexNames::OutputOnReleaseTriggerName);
  local_res18 = &this->TriggerReleaseIn;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_40 = &local_res18;
  local_38._0_8_ = &local_res8;
  local_58._8_8_ = local_38;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_48
            );
  FLazyName::Resolve(&ADSREnvelopeVertexNames::OutputOnDoneName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->OnDone;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_40 = &local_res18;
  local_38._0_8_ = &local_res8;
  local_58._8_8_ = local_38;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_48
            );
  FLazyName::Resolve(&ADSREnvelopeVertexNames::OutputEnvelopeValueName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->OutputEnvelope;
  local_40 = &local_res18;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_58._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<float>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_48
            );
  return;
}

// BindInputs @ 14afde130

void __thiscall
Metasound::
TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>
::BindInputs(TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>
             *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FTrigger> *local_res18;
  undefined1 local_58 [16];
  code *local_48;
  TDataReadReference<Metasound::FTrigger> **local_40;
  undefined1 local_38 [16];
  
  FLazyName::Resolve(&ADSREnvelopeVertexNames::InputAttackTriggerName);
  local_res18 = &this->TriggerAttackIn;
  local_40 = &local_res18;
  local_58._0_8_ = &local_res8;
  local_38._8_8_ = local_58;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_58._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&ADSREnvelopeVertexNames::InputReleaseTriggerName);
  local_res18 = &this->TriggerReleaseIn;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_40 = &local_res18;
  local_38._0_8_ = &local_res8;
  local_58._8_8_ = local_38;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&ADSREnvelopeVertexNames::InputAttackTimeName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->AttackTime;
  local_40 = &local_res18;
  local_38._0_8_ = &local_res8;
  local_58._8_8_ = local_38;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTime>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTime>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&ADSREnvelopeVertexNames::InputDecayTimeName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->DecayTime;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTime>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_40 = &local_res18;
  local_38._0_8_ = &local_res8;
  local_58._8_8_ = local_38;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTime>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&ADSREnvelopeVertexNames::InputSustainLevelName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->SustainLevel;
  local_40 = &local_res18;
  local_38._0_8_ = &local_res8;
  local_58._8_8_ = local_38;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&ADSREnvelopeVertexNames::InputReleaseTimeName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->ReleaseTime;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTime>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_40 = &local_res18;
  local_38._0_8_ = &local_res8;
  local_58._8_8_ = local_38;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTime>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&ADSREnvelopeVertexNames::InputAttackCurveName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->AttackCurveFactor;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_40 = &local_res18;
  local_38._0_8_ = &local_res8;
  local_58._8_8_ = local_38;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&ADSREnvelopeVertexNames::InputDecayCurveName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->DecayCurveFactor;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_40 = &local_res18;
  local_38._0_8_ = &local_res8;
  local_58._8_8_ = local_38;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&ADSREnvelopeVertexNames::InputReleaseCurveName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->ReleaseCurveFactor;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_40 = &local_res18;
  local_38._0_8_ = &local_res8;
  local_58._8_8_ = local_38;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&ADSREnvelopeVertexNames::InputHardResetName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->bHardReset;
  local_40 = &local_res18;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_58._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  return;
}

// BindOutputs @ 14afde4e0

void __thiscall
Metasound::
TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>
::BindOutputs(TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>
              *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FTrigger> *local_res18;
  undefined1 local_58 [16];
  code *local_48;
  TDataReadReference<Metasound::FTrigger> **local_40;
  undefined1 local_38 [16];
  
  FLazyName::Resolve(&ADSREnvelopeVertexNames::OutputOnAttackTriggerName);
  local_res18 = &this->TriggerAttackIn;
  local_40 = &local_res18;
  local_58._0_8_ = &local_res8;
  local_38._8_8_ = local_58;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_58._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_48
            );
  FLazyName::Resolve(&ADSREnvelopeVertexNames::OutputOnDecayTriggerName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->OnDecayTrigger;
  local_40 = &local_res18;
  local_38._0_8_ = &local_res8;
  local_58._8_8_ = local_38;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_48
            );
  FLazyName::Resolve(&ADSREnvelopeVertexNames::OutputOnSustainTriggerName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->OnSustainTrigger;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_40 = &local_res18;
  local_38._0_8_ = &local_res8;
  local_58._8_8_ = local_38;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_48
            );
  FLazyName::Resolve(&ADSREnvelopeVertexNames::OutputOnReleaseTriggerName);
  local_res18 = &this->TriggerReleaseIn;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_40 = &local_res18;
  local_38._0_8_ = &local_res8;
  local_58._8_8_ = local_38;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_48
            );
  FLazyName::Resolve(&ADSREnvelopeVertexNames::OutputOnDoneName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->OnDone;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_40 = &local_res18;
  local_38._0_8_ = &local_res8;
  local_58._8_8_ = local_38;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_48
            );
  FLazyName::Resolve(&ADSREnvelopeVertexNames::OutputEnvelopeValueName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->OutputEnvelope;
  local_40 = &local_res18;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_58._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_48
            );
  return;
}

// TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer> @ 14afee2d0

TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>
* __thiscall
Metasound::
TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>
::
TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>
          (TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>
           *this,FOperatorArgs *param_1)

{
  longlong lVar1;
  FBuildOperatorParams *pFVar2;
  FResetParams local_28;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TADSREnvelopeNodeOperator_UFAudioADSREnvelope_ADSREnvelopeNodePrivate_Metasound__VFAudioBuffer_3__Metasound__6B_
  ;
  *(undefined ***)&this->TriggerAttackIn =
       &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->TriggerAttackIn).field_0x8 =
       *(undefined8 *)&(param_1->TriggerAttackIn).field_0x8;
  lVar1 = *(longlong *)&(param_1->TriggerAttackIn).field_0x10;
  *(longlong *)&(this->TriggerAttackIn).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->TriggerAttackIn =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->TriggerReleaseIn =
       &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->TriggerReleaseIn).field_0x8 =
       *(undefined8 *)&(param_1->TriggerReleaseIn).field_0x8;
  lVar1 = *(longlong *)&(param_1->TriggerReleaseIn).field_0x10;
  *(longlong *)&(this->TriggerReleaseIn).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->TriggerReleaseIn =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->AttackTime = &___7__TDataReference_VFTime_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->AttackTime).field_0x8 = *(undefined8 *)&(param_1->AttackTime).field_0x8;
  lVar1 = *(longlong *)&(param_1->AttackTime).field_0x10;
  *(longlong *)&(this->AttackTime).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->AttackTime = &___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
  *(undefined ***)&this->DecayTime = &___7__TDataReference_VFTime_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->DecayTime).field_0x8 = *(undefined8 *)&(param_1->DecayTime).field_0x8;
  lVar1 = *(longlong *)&(param_1->DecayTime).field_0x10;
  *(longlong *)&(this->DecayTime).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->DecayTime = &___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
  *(undefined ***)&this->SustainLevel = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->SustainLevel).field_0x8 = *(undefined8 *)&(param_1->SustainLevel).field_0x8
  ;
  lVar1 = *(longlong *)&(param_1->SustainLevel).field_0x10;
  *(longlong *)&(this->SustainLevel).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->SustainLevel = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->ReleaseTime = &___7__TDataReference_VFTime_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->ReleaseTime).field_0x8 = *(undefined8 *)&(param_1->ReleaseTime).field_0x8;
  lVar1 = *(longlong *)&(param_1->ReleaseTime).field_0x10;
  *(longlong *)&(this->ReleaseTime).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->ReleaseTime = &___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
  *(undefined ***)&this->AttackCurveFactor = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->AttackCurveFactor).field_0x8 =
       *(undefined8 *)&(param_1->AttackCurveFactor).field_0x8;
  lVar1 = *(longlong *)&(param_1->AttackCurveFactor).field_0x10;
  *(longlong *)&(this->AttackCurveFactor).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->AttackCurveFactor = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->DecayCurveFactor = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->DecayCurveFactor).field_0x8 =
       *(undefined8 *)&(param_1->DecayCurveFactor).field_0x8;
  lVar1 = *(longlong *)&(param_1->DecayCurveFactor).field_0x10;
  *(longlong *)&(this->DecayCurveFactor).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->DecayCurveFactor = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->ReleaseCurveFactor = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->ReleaseCurveFactor).field_0x8 =
       *(undefined8 *)&(param_1->ReleaseCurveFactor).field_0x8;
  lVar1 = *(longlong *)&(param_1->ReleaseCurveFactor).field_0x10;
  *(longlong *)&(this->ReleaseCurveFactor).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->ReleaseCurveFactor = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->bHardReset = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->bHardReset).field_0x8 = *(undefined8 *)&(param_1->bInHardReset).field_0x8;
  lVar1 = *(longlong *)&(param_1->bInHardReset).field_0x10;
  *(longlong *)&(this->bHardReset).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->bHardReset = &___7__TDataReadReference__N_Metasound__6B_;
  TDataReference<Metasound::FTrigger>::
  TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FTrigger> *)&this->OnDecayTrigger,NewObject,
             param_1->BuildOperatorParams->OperatorSettings);
  *(undefined ***)&this->OnDecayTrigger =
       &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  TDataReference<Metasound::FTrigger>::
  TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FTrigger> *)&this->OnSustainTrigger,NewObject,
             param_1->BuildOperatorParams->OperatorSettings);
  *(undefined ***)&this->OnSustainTrigger =
       &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  TDataReference<Metasound::FTrigger>::
  TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FTrigger> *)&this->OnDone,NewObject,
             param_1->BuildOperatorParams->OperatorSettings);
  *(undefined ***)&this->OnDone = &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FAudioBuffer> *)&this->OutputEnvelope,NewObject,
             param_1->BuildOperatorParams->OperatorSettings);
  *(undefined ***)&this->OutputEnvelope =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  (this->EnvState).CurrentSampleIndex = -1;
  this->SampleRate = 0.0;
  this->NumFramesPerBlock = 0;
  (this->EnvState).AttackSampleCount = 0;
  (this->EnvState).DecaySampleCount = 0;
  (this->EnvState).ReleaseSampleCount = 0;
  (this->EnvState).SustainLevel = 0.0;
  (this->EnvState).AttackCurveFactor = 0.0;
  (this->EnvState).DecayCurveFactor = 0.0;
  (this->EnvState).ReleaseCurveFactor = 0.0;
  (this->EnvState).EnvEase.CurrentValue = 0.0;
  (this->EnvState).StartingEnvelopeValue = 0.0;
  (this->EnvState).CurrentEnvelopeValue = 0.0;
  (this->EnvState).EnvelopeValueAtReleaseStart = 0.0;
  (this->EnvState).bHardReset = false;
  (this->EnvState).bIsInRelease = false;
  pFVar2 = param_1->BuildOperatorParams;
  (this->EnvState).EnvEase.Threshold = 0.0001;
  (this->EnvState).EnvEase.TargetValue = 0.0;
  (this->EnvState).EnvEase.EaseFactor = 0.001;
  (this->EnvState).EnvEase.OneMinusEase = 0.999;
  (this->EnvState).EnvEase.EaseTimesTarget = 0.0;
  local_28.OperatorSettings = pFVar2->OperatorSettings;
  local_28.Environment = pFVar2->Environment;
  local_28.GraphRenderCost = pFVar2->GraphRenderCost;
  Reset(this,&local_28);
  return this;
}

// TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float> @ 14afee610

TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float> * __thiscall
Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float>::
TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float>
          (TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float>
           *this,FOperatorArgs *param_1)

{
  longlong lVar1;
  FBuildOperatorParams *pFVar2;
  FResetParams local_28;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TADSREnvelopeNodeOperator_UFFloatADSREnvelope_ADSREnvelopeNodePrivate_Metasound__M_Metasound__6B_
  ;
  *(undefined ***)&this->TriggerAttackIn =
       &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->TriggerAttackIn).field_0x8 =
       *(undefined8 *)&(param_1->TriggerAttackIn).field_0x8;
  lVar1 = *(longlong *)&(param_1->TriggerAttackIn).field_0x10;
  *(longlong *)&(this->TriggerAttackIn).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->TriggerAttackIn =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->TriggerReleaseIn =
       &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->TriggerReleaseIn).field_0x8 =
       *(undefined8 *)&(param_1->TriggerReleaseIn).field_0x8;
  lVar1 = *(longlong *)&(param_1->TriggerReleaseIn).field_0x10;
  *(longlong *)&(this->TriggerReleaseIn).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->TriggerReleaseIn =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->AttackTime = &___7__TDataReference_VFTime_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->AttackTime).field_0x8 = *(undefined8 *)&(param_1->AttackTime).field_0x8;
  lVar1 = *(longlong *)&(param_1->AttackTime).field_0x10;
  *(longlong *)&(this->AttackTime).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->AttackTime = &___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
  *(undefined ***)&this->DecayTime = &___7__TDataReference_VFTime_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->DecayTime).field_0x8 = *(undefined8 *)&(param_1->DecayTime).field_0x8;
  lVar1 = *(longlong *)&(param_1->DecayTime).field_0x10;
  *(longlong *)&(this->DecayTime).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->DecayTime = &___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
  *(undefined ***)&this->SustainLevel = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->SustainLevel).field_0x8 = *(undefined8 *)&(param_1->SustainLevel).field_0x8
  ;
  lVar1 = *(longlong *)&(param_1->SustainLevel).field_0x10;
  *(longlong *)&(this->SustainLevel).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->SustainLevel = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->ReleaseTime = &___7__TDataReference_VFTime_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->ReleaseTime).field_0x8 = *(undefined8 *)&(param_1->ReleaseTime).field_0x8;
  lVar1 = *(longlong *)&(param_1->ReleaseTime).field_0x10;
  *(longlong *)&(this->ReleaseTime).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->ReleaseTime = &___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
  *(undefined ***)&this->AttackCurveFactor = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->AttackCurveFactor).field_0x8 =
       *(undefined8 *)&(param_1->AttackCurveFactor).field_0x8;
  lVar1 = *(longlong *)&(param_1->AttackCurveFactor).field_0x10;
  *(longlong *)&(this->AttackCurveFactor).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->AttackCurveFactor = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->DecayCurveFactor = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->DecayCurveFactor).field_0x8 =
       *(undefined8 *)&(param_1->DecayCurveFactor).field_0x8;
  lVar1 = *(longlong *)&(param_1->DecayCurveFactor).field_0x10;
  *(longlong *)&(this->DecayCurveFactor).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->DecayCurveFactor = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->ReleaseCurveFactor = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->ReleaseCurveFactor).field_0x8 =
       *(undefined8 *)&(param_1->ReleaseCurveFactor).field_0x8;
  lVar1 = *(longlong *)&(param_1->ReleaseCurveFactor).field_0x10;
  *(longlong *)&(this->ReleaseCurveFactor).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->ReleaseCurveFactor = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->bHardReset = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->bHardReset).field_0x8 = *(undefined8 *)&(param_1->bInHardReset).field_0x8;
  lVar1 = *(longlong *)&(param_1->bInHardReset).field_0x10;
  *(longlong *)&(this->bHardReset).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->bHardReset = &___7__TDataReadReference__N_Metasound__6B_;
  TDataReference<Metasound::FTrigger>::
  TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FTrigger> *)&this->OnDecayTrigger,NewObject,
             param_1->BuildOperatorParams->OperatorSettings);
  *(undefined ***)&this->OnDecayTrigger =
       &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  TDataReference<Metasound::FTrigger>::
  TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FTrigger> *)&this->OnSustainTrigger,NewObject,
             param_1->BuildOperatorParams->OperatorSettings);
  *(undefined ***)&this->OnSustainTrigger =
       &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  TDataReference<Metasound::FTrigger>::
  TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FTrigger> *)&this->OnDone,NewObject,
             param_1->BuildOperatorParams->OperatorSettings);
  *(undefined ***)&this->OnDone = &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  TDataReference<float>::TDataReference<float><>
            ((TDataReference<float> *)&this->OutputEnvelope,NewObject);
  *(undefined ***)&this->OutputEnvelope = &___7__TDataWriteReference_M_Metasound__6B_;
  (this->EnvState).CurrentSampleIndex = -1;
  this->SampleRate = 0.0;
  this->NumFramesPerBlock = 0;
  (this->EnvState).AttackSampleCount = 0;
  (this->EnvState).DecaySampleCount = 0;
  (this->EnvState).ReleaseSampleCount = 0;
  (this->EnvState).SustainLevel = 0.0;
  (this->EnvState).AttackCurveFactor = 0.0;
  (this->EnvState).DecayCurveFactor = 0.0;
  (this->EnvState).ReleaseCurveFactor = 0.0;
  (this->EnvState).EnvEase.CurrentValue = 0.0;
  (this->EnvState).StartingEnvelopeValue = 0.0;
  (this->EnvState).CurrentEnvelopeValue = 0.0;
  (this->EnvState).EnvelopeValueAtReleaseStart = 0.0;
  (this->EnvState).bHardReset = false;
  (this->EnvState).bIsInRelease = false;
  pFVar2 = param_1->BuildOperatorParams;
  (this->EnvState).EnvEase.Threshold = 0.0001;
  (this->EnvState).EnvEase.TargetValue = 0.0;
  (this->EnvState).EnvEase.EaseFactor = 0.001;
  (this->EnvState).EnvEase.OneMinusEase = 0.999;
  (this->EnvState).EnvEase.EaseTimesTarget = 0.0;
  local_28.OperatorSettings = pFVar2->OperatorSettings;
  local_28.Environment = pFVar2->Environment;
  local_28.GraphRenderCost = pFVar2->GraphRenderCost;
  Reset(this,&local_28);
  return this;
}

// ~TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer> @ 14affb2e0

void __thiscall
Metasound::
TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>
::
~TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>
          (TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>
           *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputEnvelope).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OnDone).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OnSustainTrigger).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OnDecayTrigger).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->bHardReset).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->ReleaseCurveFactor).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->DecayCurveFactor).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->AttackCurveFactor).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->ReleaseTime).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SustainLevel).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->DecayTime).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->AttackTime).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerReleaseIn).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerAttackIn).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float> @ 14affb3a0

void __thiscall
Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float>::
~TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float>
          (TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float>
           *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputEnvelope).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OnDone).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OnSustainTrigger).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OnDecayTrigger).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->bHardReset).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->ReleaseCurveFactor).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->DecayCurveFactor).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->AttackCurveFactor).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->ReleaseTime).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SustainLevel).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->DecayTime).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->AttackTime).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerReleaseIn).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerAttackIn).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// operator() @ 14b001740

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::
TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>
::GetNodeInfo'::__l2::<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  ForAnyElementType _Src;
  FName *pFVar1;
  FVertexInterface *pFVar2;
  FNodeClassName *pFVar3;
  longlong lVar4;
  undefined1 local_res10 [8];
  FName local_res18;
  FName local_res20;
  FNodeClassName local_1b8;
  FString local_198;
  TArray<FText,TSizedDefaultAllocator<32>_> local_188;
  FName local_178 [2];
  FNodeDisplayStyle local_168;
  TArray<FText,TSizedDefaultAllocator<32>_> local_158;
  FText local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  FText local_f8;
  FNodeClassName local_e8;
  FVertexInterface local_c8;
  FVertexInterface local_78;
  
  pFVar1 = Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  local_res18 = *pFVar1;
  ::FName::FName(&local_res20,"ADSR Envelope");
  FText::FText(&local_128);
  FText::FText(&local_138);
  pFVar2 = Metasound::
           TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>
           ::GetDefaultInterface();
  Metasound::FVertexInterface::FVertexInterface(&local_c8,pFVar2);
  local_1b8.Namespace.ComparisonIndex.Value = 0;
  local_1b8.Namespace.Number = 0;
  local_1b8.Name.ComparisonIndex.Value = 0x1010101;
  local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.ArrayNum = 0;
  local_158.ArrayMax = 0;
  local_148.TextData.Reference = Metasound::NodeCategories::Envelopes.TextData.Reference;
  if (Metasound::NodeCategories::Envelopes.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::NodeCategories::Envelopes.TextData.Reference + 8))
              (Metasound::NodeCategories::Envelopes.TextData.Reference,local_res10);
  }
  local_148.Flags = Metasound::NodeCategories::Envelopes.Flags;
  local_188.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_188.AllocatorInstance,1,&local_188.ArrayMax);
  ConstructItems<FText,FText,int>(local_188.AllocatorInstance.Data,&local_148,1);
  pFVar2 = Metasound::FVertexInterface::FVertexInterface(&local_78,&local_c8);
  local_118.TextData.Reference = Metasound::PluginNodeMissingPrompt.TextData.Reference;
  if (Metasound::PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::PluginNodeMissingPrompt.TextData.Reference + 8))
              (Metasound::PluginNodeMissingPrompt.TextData.Reference,local_res10);
  }
  _Src.Data = Metasound::PluginAuthor.Data.AllocatorInstance.Data;
  lVar4 = (longlong)Metasound::PluginAuthor.Data.ArrayNum;
  local_118.Flags = Metasound::PluginNodeMissingPrompt.Flags;
  local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_198.Data.ArrayNum = Metasound::PluginAuthor.Data.ArrayNum;
  if (Metasound::PluginAuthor.Data.ArrayNum == 0) {
    local_198.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,Metasound::PluginAuthor.Data.ArrayNum,0,(ForAnyElementType *)&local_198,
               Metasound::PluginAuthor.Data.ArrayNum,&local_198.Data.ArrayMax);
    memcpy(local_198.Data.AllocatorInstance.Data,_Src.Data,lVar4 * 2);
  }
  local_108.TextData.Reference = local_138.TextData.Reference;
  if (local_138.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_138.TextData.Reference + 8))
              (local_138.TextData.Reference,local_res10);
  }
  local_108.Flags = local_138.Flags;
  local_f8.TextData.Reference = local_128.TextData.Reference;
  if (local_128.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_128.TextData.Reference + 8))
              (local_128.TextData.Reference,local_res10);
  }
  local_f8.Flags = local_128.Flags;
  ::FName::FName(local_178,"ADSR Envelope");
  pFVar3 = Metasound::FNodeClassName::FNodeClassName(&local_e8,local_178,&local_res20,&local_res18);
  local_168.ImageName = local_1b8.Namespace;
  local_1b8.Namespace = pFVar3->Namespace;
  local_168.bShowName = (bool)(undefined1)local_1b8.Name.ComparisonIndex.Value;
  local_168.bShowInputNames = (bool)local_1b8.Name.ComparisonIndex.Value._1_1_;
  local_168.bShowOutputNames = (bool)local_1b8.Name.ComparisonIndex.Value._2_1_;
  local_168.bShowLiterals = (bool)local_1b8.Name.ComparisonIndex.Value._3_1_;
  local_1b8.Variant = pFVar3->Variant;
  local_1b8.Name = pFVar3->Name;
  Metasound::FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,&local_1b8,1,0,&local_f8,&local_108,&local_198,&local_118,pFVar2
             ,&local_188,&local_158,&local_168);
  if (local_148.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
  }
  Metasound::FVertexInterface::~FVertexInterface(&local_c8);
  if (local_138.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
  }
  if (local_128.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// operator() @ 14b001a10

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float>
::GetNodeInfo'::__l2::<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  ForAnyElementType _Src;
  FName *pFVar1;
  FVertexInterface *pFVar2;
  FNodeClassName *pFVar3;
  longlong lVar4;
  undefined1 local_res10 [8];
  FName local_res18;
  FName local_res20;
  FNodeClassName local_1b8;
  FString local_198;
  TArray<FText,TSizedDefaultAllocator<32>_> local_188;
  FName local_178 [2];
  FNodeDisplayStyle local_168;
  TArray<FText,TSizedDefaultAllocator<32>_> local_158;
  FText local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  FText local_f8;
  FNodeClassName local_e8;
  FVertexInterface local_c8;
  FVertexInterface local_78;
  
  pFVar1 = Metasound::GetMetasoundDataTypeName<float>();
  local_res18 = *pFVar1;
  ::FName::FName(&local_res20,"ADSR Envelope");
  FText::FText(&local_128);
  FText::FText(&local_138);
  pFVar2 = Metasound::
           TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float>::
           GetDefaultInterface();
  Metasound::FVertexInterface::FVertexInterface(&local_c8,pFVar2);
  local_1b8.Namespace.ComparisonIndex.Value = 0;
  local_1b8.Namespace.Number = 0;
  local_1b8.Name.ComparisonIndex.Value = 0x1010101;
  local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.ArrayNum = 0;
  local_158.ArrayMax = 0;
  local_148.TextData.Reference = Metasound::NodeCategories::Envelopes.TextData.Reference;
  if (Metasound::NodeCategories::Envelopes.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::NodeCategories::Envelopes.TextData.Reference + 8))
              (Metasound::NodeCategories::Envelopes.TextData.Reference,local_res10);
  }
  local_148.Flags = Metasound::NodeCategories::Envelopes.Flags;
  local_188.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_188.AllocatorInstance,1,&local_188.ArrayMax);
  ConstructItems<FText,FText,int>(local_188.AllocatorInstance.Data,&local_148,1);
  pFVar2 = Metasound::FVertexInterface::FVertexInterface(&local_78,&local_c8);
  local_118.TextData.Reference = Metasound::PluginNodeMissingPrompt.TextData.Reference;
  if (Metasound::PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::PluginNodeMissingPrompt.TextData.Reference + 8))
              (Metasound::PluginNodeMissingPrompt.TextData.Reference,local_res10);
  }
  _Src.Data = Metasound::PluginAuthor.Data.AllocatorInstance.Data;
  lVar4 = (longlong)Metasound::PluginAuthor.Data.ArrayNum;
  local_118.Flags = Metasound::PluginNodeMissingPrompt.Flags;
  local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_198.Data.ArrayNum = Metasound::PluginAuthor.Data.ArrayNum;
  if (Metasound::PluginAuthor.Data.ArrayNum == 0) {
    local_198.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,Metasound::PluginAuthor.Data.ArrayNum,0,(ForAnyElementType *)&local_198,
               Metasound::PluginAuthor.Data.ArrayNum,&local_198.Data.ArrayMax);
    memcpy(local_198.Data.AllocatorInstance.Data,_Src.Data,lVar4 * 2);
  }
  local_108.TextData.Reference = local_138.TextData.Reference;
  if (local_138.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_138.TextData.Reference + 8))
              (local_138.TextData.Reference,local_res10);
  }
  local_108.Flags = local_138.Flags;
  local_f8.TextData.Reference = local_128.TextData.Reference;
  if (local_128.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_128.TextData.Reference + 8))
              (local_128.TextData.Reference,local_res10);
  }
  local_f8.Flags = local_128.Flags;
  ::FName::FName(local_178,"ADSR Envelope");
  pFVar3 = Metasound::FNodeClassName::FNodeClassName(&local_e8,local_178,&local_res20,&local_res18);
  local_168.ImageName = local_1b8.Namespace;
  local_1b8.Namespace = pFVar3->Namespace;
  local_168.bShowName = (bool)(undefined1)local_1b8.Name.ComparisonIndex.Value;
  local_168.bShowInputNames = (bool)local_1b8.Name.ComparisonIndex.Value._1_1_;
  local_168.bShowOutputNames = (bool)local_1b8.Name.ComparisonIndex.Value._2_1_;
  local_168.bShowLiterals = (bool)local_1b8.Name.ComparisonIndex.Value._3_1_;
  local_1b8.Variant = pFVar3->Variant;
  local_1b8.Name = pFVar3->Name;
  Metasound::FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,&local_1b8,1,0,&local_f8,&local_108,&local_198,&local_118,pFVar2
             ,&local_188,&local_158,&local_168);
  if (local_148.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
  }
  Metasound::FVertexInterface::~FVertexInterface(&local_c8);
  if (local_138.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
  }
  if (local_128.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// CreateOperator @ 14b00cd90

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::
TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>
::CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>
  *this_00;
  TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>
  *pTVar2;
  FName local_res8;
  undefined1 local_168 [40];
  undefined1 local_140 [32];
  undefined1 local_120 [32];
  undefined1 local_100 [32];
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  undefined1 local_a0 [32];
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  undefined1 local_40 [40];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  local_168._0_8_ = param_2;
  FLazyName::Resolve(&ADSREnvelopeVertexNames::InputAttackTriggerName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)(local_168 + 8),&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ADSREnvelopeVertexNames::InputReleaseTriggerName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_140,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ADSREnvelopeVertexNames::InputAttackTimeName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTime>
            (this,(TDataReadReference<Metasound::FTime> *)local_120,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ADSREnvelopeVertexNames::InputDecayTimeName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTime>
            (this,(TDataReadReference<Metasound::FTime> *)local_100,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ADSREnvelopeVertexNames::InputSustainLevelName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_e0,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ADSREnvelopeVertexNames::InputReleaseTimeName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTime>
            (this,(TDataReadReference<Metasound::FTime> *)local_c0,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ADSREnvelopeVertexNames::InputAttackCurveName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_a0,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ADSREnvelopeVertexNames::InputDecayCurveName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_80,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ADSREnvelopeVertexNames::InputReleaseCurveName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_60,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ADSREnvelopeVertexNames::InputHardResetName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this,(TDataReadReference<bool> *)local_40,&local_res8,pFVar1);
  this_00 = ::operator_new(0x218);
  pTVar2 = (TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>
            *)0x0;
  if (this_00 !=
      (TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>
       *)0x0) {
    pTVar2 = TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>
                       (this_00,(FOperatorArgs *)local_168);
  }
  param_1->Node = (INode *)pTVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_40._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_60._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_80._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_a0._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_c0._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_e0._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_100._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_120._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_140._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_168._24_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b00d020

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float> *this_00;
  TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float> *pTVar2;
  FName local_res8;
  undefined1 local_168 [40];
  undefined1 local_140 [32];
  undefined1 local_120 [32];
  undefined1 local_100 [32];
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  undefined1 local_a0 [32];
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  undefined1 local_40 [40];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  local_168._0_8_ = param_2;
  FLazyName::Resolve(&ADSREnvelopeVertexNames::InputAttackTriggerName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)(local_168 + 8),&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ADSREnvelopeVertexNames::InputReleaseTriggerName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_140,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ADSREnvelopeVertexNames::InputAttackTimeName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTime>
            (this,(TDataReadReference<Metasound::FTime> *)local_120,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ADSREnvelopeVertexNames::InputDecayTimeName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTime>
            (this,(TDataReadReference<Metasound::FTime> *)local_100,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ADSREnvelopeVertexNames::InputSustainLevelName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_e0,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ADSREnvelopeVertexNames::InputReleaseTimeName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTime>
            (this,(TDataReadReference<Metasound::FTime> *)local_c0,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ADSREnvelopeVertexNames::InputAttackCurveName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_a0,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ADSREnvelopeVertexNames::InputDecayCurveName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_80,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ADSREnvelopeVertexNames::InputReleaseCurveName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_60,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ADSREnvelopeVertexNames::InputHardResetName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this,(TDataReadReference<bool> *)local_40,&local_res8,pFVar1);
  this_00 = ::operator_new(0x218);
  pTVar2 = (TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float>
            *)0x0;
  if (this_00 !=
      (TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float> *)0x0
     ) {
    pTVar2 = TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float>
                       (this_00,(FOperatorArgs *)local_168);
  }
  param_1->Node = (INode *)pTVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_40._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_60._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_80._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_a0._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_c0._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_e0._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_100._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_120._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_140._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_168._24_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// Execute @ 14b01ace0

void __thiscall
Metasound::
TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>
::Execute(TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>
          *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FTrigger *this_00;
  FTrigger *this_01;
  float *pfVar3;
  char *pcVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  char cVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  char local_res8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_c8;
  int local_c4;
  int local_c0;
  TArray<int,TSizedDefaultAllocator<32>_> local_a8;
  TArray<int,TSizedDefaultAllocator<32>_> local_98;
  TArray<int,TSizedDefaultAllocator<32>_> local_88 [4];
  
  FTrigger::AdvanceBlock(*(FTrigger **)&(this->OnDecayTrigger).field_0x8);
  FTrigger::AdvanceBlock(*(FTrigger **)&(this->OnSustainTrigger).field_0x8);
  FTrigger::AdvanceBlock(*(FTrigger **)&(this->OnDone).field_0x8);
  this_00 = *(FTrigger **)&(this->TriggerAttackIn).field_0x8;
  this_01 = *(FTrigger **)&(this->TriggerReleaseIn).field_0x8;
  iVar2 = this->NumFramesPerBlock;
  iVar9 = FTrigger::NumTriggeredInBlock(this_00);
  cVar16 = '\x01';
  iVar10 = iVar2;
  if (0 < iVar9) {
    iVar10 = FTrigger::operator[](this_00,0);
  }
  local_c8 = (uint)(0 < iVar9);
  iVar11 = FTrigger::NumTriggeredInBlock(this_01);
  iVar9 = iVar2;
  if (0 < iVar11) {
    iVar9 = FTrigger::operator[](this_01,0);
  }
  uVar15 = (uint)(0 < iVar11);
  iVar11 = iVar9;
  local_c4 = iVar10;
  if (iVar10 == iVar9) {
    if (((this->EnvState).CurrentSampleIndex == -1) || (iVar2 <= iVar9)) {
LAB_14b01adc9:
      if (iVar10 < iVar2) {
        cVar16 = '\0';
        iVar9 = FTrigger::NumTriggeredInBlock(this_00);
        local_c4 = iVar2;
        if ((int)local_c8 < iVar9) {
          local_c4 = FTrigger::operator[](this_00,local_c8);
          local_c8 = local_c8 + 1;
        }
        goto LAB_14b01ae0d;
      }
      goto LAB_14b01ae02;
    }
  }
  else {
    if (iVar10 <= iVar9) goto LAB_14b01adc9;
LAB_14b01ae02:
    if (iVar2 <= iVar9) {
      cVar16 = '\x02';
      iVar10 = iVar2;
      goto LAB_14b01ae0d;
    }
  }
  iVar12 = FTrigger::NumTriggeredInBlock(this_01);
  iVar11 = iVar2;
  iVar10 = iVar9;
  if ((int)uVar15 < iVar12) {
    iVar11 = FTrigger::operator[](this_01,uVar15);
    uVar15 = uVar15 + 1;
  }
LAB_14b01ae0d:
  fVar19 = __real_38d1b717;
  fVar18 = __real_3f800000;
  iVar9 = local_c4;
  fVar6 = __real_3f800000;
  fVar7 = __real_38d1b717;
  if (0 < iVar10) {
    ProcessEnvelopeOutput(this,0,iVar10);
    fVar19 = __real_38d1b717;
    fVar18 = __real_3f800000;
    fVar6 = __real_3f800000;
    fVar7 = __real_38d1b717;
  }
  do {
    __real_38d1b717 = fVar7;
    __real_3f800000 = fVar6;
    fVar6 = __real_3f800000;
    fVar7 = __real_38d1b717;
    if (cVar16 == '\x02') {
      __real_38d1b717 = fVar19;
      __real_3f800000 = fVar18;
      return;
    }
    iVar12 = iVar11;
    __real_38d1b717 = fVar19;
    __real_3f800000 = fVar18;
    local_c4 = iVar9;
    if (iVar9 == iVar11) {
      if (((this->EnvState).CurrentSampleIndex != -1) && (iVar11 < iVar2)) goto LAB_14b01ae6e;
LAB_14b01aeaf:
      if (iVar2 <= iVar9) goto LAB_14b01aef0;
      local_res8 = '\0';
      iVar11 = FTrigger::NumTriggeredInBlock(this_00);
      local_c4 = iVar2;
      local_c0 = iVar9;
      if ((int)local_c8 < iVar11) {
        local_c4 = FTrigger::operator[](this_00,local_c8);
        local_c8 = local_c8 + 1;
      }
    }
    else {
      if (iVar9 <= iVar11) goto LAB_14b01aeaf;
LAB_14b01aef0:
      if (iVar11 < iVar2) {
LAB_14b01ae6e:
        local_res8 = '\x01';
        iVar9 = FTrigger::NumTriggeredInBlock(this_01);
        iVar12 = iVar2;
        local_c0 = iVar11;
        if ((int)uVar15 < iVar9) {
          iVar12 = FTrigger::operator[](this_01,uVar15);
          uVar15 = uVar15 + 1;
        }
      }
      else {
        local_res8 = '\x02';
        local_c0 = iVar2;
      }
    }
    if (cVar16 == '\0') {
      fVar19 = this->SampleRate;
      fVar18 = (float)**(double **)&(this->DecayTime).field_0x8;
      if (fVar18 <= 0.0) {
        fVar18 = 0.0;
      }
      fVar20 = (float)**(double **)&(this->ReleaseTime).field_0x8;
      fVar17 = (float)**(double **)&(this->AttackTime).field_0x8;
      if (fVar20 <= 0.0) {
        fVar20 = 0.0;
      }
      if (fVar17 <= 0.0) {
        fVar17 = 0.0;
      }
      iVar9 = (int)(fVar17 * fVar19);
      if (iVar9 < 1) {
        iVar9 = 1;
      }
      (this->EnvState).AttackSampleCount = iVar9;
      iVar9 = (int)(fVar18 * fVar19);
      if (iVar9 < 0) {
        iVar9 = 0;
      }
      (this->EnvState).DecaySampleCount = iVar9;
      fVar18 = **(float **)&(this->SustainLevel).field_0x8;
      if (fVar6 <= fVar18) {
        fVar18 = fVar6;
      }
      iVar9 = (int)(fVar20 * fVar19);
      if (fVar18 <= 0.0) {
        fVar18 = 0.0;
      }
      if (iVar9 < 0) {
        iVar9 = 0;
      }
      (this->EnvState).ReleaseSampleCount = iVar9;
      pfVar3 = *(float **)&(this->AttackCurveFactor).field_0x8;
      (this->EnvState).SustainLevel = fVar18;
      fVar19 = *pfVar3;
      pfVar3 = *(float **)&(this->DecayCurveFactor).field_0x8;
      if (fVar19 <= fVar7) {
        fVar19 = fVar7;
      }
      (this->EnvState).AttackCurveFactor = fVar19;
      fVar19 = *pfVar3;
      pfVar3 = *(float **)&(this->ReleaseCurveFactor).field_0x8;
      if (fVar19 <= fVar7) {
        fVar19 = fVar7;
      }
      (this->EnvState).DecayCurveFactor = fVar19;
      fVar19 = *pfVar3;
      pcVar4 = *(char **)&(this->bHardReset).field_0x8;
      if (fVar19 <= fVar7) {
        fVar19 = fVar7;
      }
      (this->EnvState).ReleaseCurveFactor = fVar19;
      bVar8 = (bool)*pcVar4;
      (this->EnvState).bHardReset = bVar8;
      (this->EnvState).CurrentSampleIndex = 0;
      if (bVar8 == false) {
        fVar19 = (this->EnvState).CurrentEnvelopeValue;
      }
      else {
        fVar19 = 0.0;
      }
      (this->EnvState).StartingEnvelopeValue = fVar19;
      fVar18 = (this->EnvState).EnvEase.EaseFactor;
      (this->EnvState).EnvEase.TargetValue = fVar19;
      (this->EnvState).EnvEase.CurrentValue = fVar19;
      (this->EnvState).EnvEase.EaseTimesTarget = fVar19 * fVar18;
      (this->EnvState).bIsInRelease = false;
    }
    else if (cVar16 == '\x01') {
      (this->EnvState).bIsInRelease = true;
    }
    else {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundADSREnvelopeNode.cpp"
                         ,0x2ec,L"");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    local_88[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88[0].ArrayNum = 0;
    local_88[0].ArrayMax = 0;
    local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.ArrayNum = 0;
    local_98.ArrayMax = 0;
    local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.ArrayNum = 0;
    local_a8.ArrayMax = 0;
    ADSREnvelopeNodePrivate::FAudioADSREnvelope::GetNextEnvelopeOutput
              (&this->EnvState,iVar10,local_c0,local_88,&local_98,&local_a8,
               *(FAudioBuffer **)&(this->OutputEnvelope).field_0x8);
    iVar10 = local_88[0].ArrayNum;
    uVar13 = (ulonglong)local_88[0].ArrayNum;
    pFVar1 = local_88[0].AllocatorInstance.Data + uVar13 * 4;
    FVar14.Data = local_88[0].AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar13 != iVar10) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (FVar14.Data == pFVar1) break;
      FTrigger::TriggerFrame(*(FTrigger **)&(this->OnDecayTrigger).field_0x8,*(int *)FVar14.Data);
      uVar13 = local_88[0]._8_8_ & 0xffffffff;
      FVar14.Data = FVar14.Data + 4;
    }
    iVar10 = local_98.ArrayNum;
    uVar13 = (ulonglong)local_98.ArrayNum;
    pFVar1 = local_98.AllocatorInstance.Data + uVar13 * 4;
    FVar14.Data = local_98.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar13 != iVar10) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (FVar14.Data == pFVar1) break;
      FTrigger::TriggerFrame(*(FTrigger **)&(this->OnSustainTrigger).field_0x8,*(int *)FVar14.Data);
      uVar13 = local_98._8_8_ & 0xffffffff;
      FVar14.Data = FVar14.Data + 4;
    }
    iVar10 = local_a8.ArrayNum;
    uVar13 = (ulonglong)local_a8.ArrayNum;
    pFVar1 = local_a8.AllocatorInstance.Data + uVar13 * 4;
    FVar14.Data = local_a8.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar13 != iVar10) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (FVar14.Data == pFVar1) break;
      FTrigger::TriggerFrame(*(FTrigger **)&(this->OnDone).field_0x8,*(int *)FVar14.Data);
      uVar13 = local_a8._8_8_ & 0xffffffff;
      FVar14.Data = FVar14.Data + 4;
    }
    if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.AllocatorInstance.Data);
    }
    if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.AllocatorInstance.Data);
    }
    iVar11 = iVar12;
    fVar19 = __real_38d1b717;
    fVar18 = __real_3f800000;
    iVar9 = local_c4;
    iVar10 = local_c0;
    cVar16 = local_res8;
    if (local_88[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88[0].AllocatorInstance.Data);
      fVar19 = __real_38d1b717;
      fVar18 = __real_3f800000;
    }
  } while( true );
}

// Execute @ 14b01b220

void __thiscall
Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float>::
Execute(TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float>
        *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FTrigger *this_00;
  FTrigger *this_01;
  float *pfVar3;
  char *pcVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  char cVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  char local_res8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_c8;
  int local_c4;
  int local_c0;
  TArray<int,TSizedDefaultAllocator<32>_> local_a8;
  TArray<int,TSizedDefaultAllocator<32>_> local_98;
  TArray<int,TSizedDefaultAllocator<32>_> local_88 [4];
  
  FTrigger::AdvanceBlock(*(FTrigger **)&(this->OnDecayTrigger).field_0x8);
  FTrigger::AdvanceBlock(*(FTrigger **)&(this->OnSustainTrigger).field_0x8);
  FTrigger::AdvanceBlock(*(FTrigger **)&(this->OnDone).field_0x8);
  this_00 = *(FTrigger **)&(this->TriggerAttackIn).field_0x8;
  this_01 = *(FTrigger **)&(this->TriggerReleaseIn).field_0x8;
  iVar2 = this->NumFramesPerBlock;
  iVar9 = FTrigger::NumTriggeredInBlock(this_00);
  cVar16 = '\x01';
  iVar10 = iVar2;
  if (0 < iVar9) {
    iVar10 = FTrigger::operator[](this_00,0);
  }
  local_c8 = (uint)(0 < iVar9);
  iVar11 = FTrigger::NumTriggeredInBlock(this_01);
  iVar9 = iVar2;
  if (0 < iVar11) {
    iVar9 = FTrigger::operator[](this_01,0);
  }
  uVar15 = (uint)(0 < iVar11);
  iVar11 = iVar9;
  local_c4 = iVar10;
  if (iVar10 == iVar9) {
    if (((this->EnvState).CurrentSampleIndex == -1) || (iVar2 <= iVar9)) {
LAB_14b01b309:
      if (iVar10 < iVar2) {
        cVar16 = '\0';
        iVar9 = FTrigger::NumTriggeredInBlock(this_00);
        local_c4 = iVar2;
        if ((int)local_c8 < iVar9) {
          local_c4 = FTrigger::operator[](this_00,local_c8);
          local_c8 = local_c8 + 1;
        }
        goto LAB_14b01b34d;
      }
      goto LAB_14b01b342;
    }
  }
  else {
    if (iVar10 <= iVar9) goto LAB_14b01b309;
LAB_14b01b342:
    if (iVar2 <= iVar9) {
      cVar16 = '\x02';
      iVar10 = iVar2;
      goto LAB_14b01b34d;
    }
  }
  iVar12 = FTrigger::NumTriggeredInBlock(this_01);
  iVar11 = iVar2;
  iVar10 = iVar9;
  if ((int)uVar15 < iVar12) {
    iVar11 = FTrigger::operator[](this_01,uVar15);
    uVar15 = uVar15 + 1;
  }
LAB_14b01b34d:
  fVar19 = __real_38d1b717;
  fVar18 = __real_3f800000;
  iVar9 = local_c4;
  fVar6 = __real_3f800000;
  fVar7 = __real_38d1b717;
  if (0 < iVar10) {
    ProcessEnvelopeOutput(this,0,iVar10);
    fVar19 = __real_38d1b717;
    fVar18 = __real_3f800000;
    fVar6 = __real_3f800000;
    fVar7 = __real_38d1b717;
  }
  do {
    __real_38d1b717 = fVar7;
    __real_3f800000 = fVar6;
    fVar6 = __real_3f800000;
    fVar7 = __real_38d1b717;
    if (cVar16 == '\x02') {
      __real_38d1b717 = fVar19;
      __real_3f800000 = fVar18;
      return;
    }
    iVar12 = iVar11;
    __real_38d1b717 = fVar19;
    __real_3f800000 = fVar18;
    local_c4 = iVar9;
    if (iVar9 == iVar11) {
      if (((this->EnvState).CurrentSampleIndex != -1) && (iVar11 < iVar2)) goto LAB_14b01b3ae;
LAB_14b01b3ef:
      if (iVar2 <= iVar9) goto LAB_14b01b430;
      local_res8 = '\0';
      iVar11 = FTrigger::NumTriggeredInBlock(this_00);
      local_c4 = iVar2;
      local_c0 = iVar9;
      if ((int)local_c8 < iVar11) {
        local_c4 = FTrigger::operator[](this_00,local_c8);
        local_c8 = local_c8 + 1;
      }
    }
    else {
      if (iVar9 <= iVar11) goto LAB_14b01b3ef;
LAB_14b01b430:
      if (iVar11 < iVar2) {
LAB_14b01b3ae:
        local_res8 = '\x01';
        iVar9 = FTrigger::NumTriggeredInBlock(this_01);
        iVar12 = iVar2;
        local_c0 = iVar11;
        if ((int)uVar15 < iVar9) {
          iVar12 = FTrigger::operator[](this_01,uVar15);
          uVar15 = uVar15 + 1;
        }
      }
      else {
        local_res8 = '\x02';
        local_c0 = iVar2;
      }
    }
    if (cVar16 == '\0') {
      fVar19 = this->SampleRate;
      fVar18 = (float)**(double **)&(this->DecayTime).field_0x8;
      if (fVar18 <= 0.0) {
        fVar18 = 0.0;
      }
      fVar20 = (float)**(double **)&(this->ReleaseTime).field_0x8;
      fVar17 = (float)**(double **)&(this->AttackTime).field_0x8;
      if (fVar20 <= 0.0) {
        fVar20 = 0.0;
      }
      if (fVar17 <= 0.0) {
        fVar17 = 0.0;
      }
      iVar9 = (int)(fVar17 * fVar19);
      if (iVar9 < 1) {
        iVar9 = 1;
      }
      (this->EnvState).AttackSampleCount = iVar9;
      iVar9 = (int)(fVar18 * fVar19);
      if (iVar9 < 0) {
        iVar9 = 0;
      }
      (this->EnvState).DecaySampleCount = iVar9;
      fVar18 = **(float **)&(this->SustainLevel).field_0x8;
      if (fVar6 <= fVar18) {
        fVar18 = fVar6;
      }
      iVar9 = (int)(fVar20 * fVar19);
      if (fVar18 <= 0.0) {
        fVar18 = 0.0;
      }
      if (iVar9 < 0) {
        iVar9 = 0;
      }
      (this->EnvState).ReleaseSampleCount = iVar9;
      pfVar3 = *(float **)&(this->AttackCurveFactor).field_0x8;
      (this->EnvState).SustainLevel = fVar18;
      fVar19 = *pfVar3;
      pfVar3 = *(float **)&(this->DecayCurveFactor).field_0x8;
      if (fVar19 <= fVar7) {
        fVar19 = fVar7;
      }
      (this->EnvState).AttackCurveFactor = fVar19;
      fVar19 = *pfVar3;
      pfVar3 = *(float **)&(this->ReleaseCurveFactor).field_0x8;
      if (fVar19 <= fVar7) {
        fVar19 = fVar7;
      }
      (this->EnvState).DecayCurveFactor = fVar19;
      fVar19 = *pfVar3;
      pcVar4 = *(char **)&(this->bHardReset).field_0x8;
      if (fVar19 <= fVar7) {
        fVar19 = fVar7;
      }
      (this->EnvState).ReleaseCurveFactor = fVar19;
      bVar8 = (bool)*pcVar4;
      (this->EnvState).bHardReset = bVar8;
      (this->EnvState).CurrentSampleIndex = 0;
      if (bVar8 == false) {
        fVar19 = (this->EnvState).CurrentEnvelopeValue;
      }
      else {
        fVar19 = 0.0;
      }
      (this->EnvState).StartingEnvelopeValue = fVar19;
      fVar18 = (this->EnvState).EnvEase.EaseFactor;
      (this->EnvState).EnvEase.TargetValue = fVar19;
      (this->EnvState).EnvEase.CurrentValue = fVar19;
      (this->EnvState).EnvEase.EaseTimesTarget = fVar19 * fVar18;
      (this->EnvState).bIsInRelease = false;
    }
    else if (cVar16 == '\x01') {
      (this->EnvState).bIsInRelease = true;
    }
    else {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundADSREnvelopeNode.cpp"
                         ,0x2ec,L"");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    local_88[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88[0].ArrayNum = 0;
    local_88[0].ArrayMax = 0;
    local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.ArrayNum = 0;
    local_98.ArrayMax = 0;
    local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.ArrayNum = 0;
    local_a8.ArrayMax = 0;
    ADSREnvelopeNodePrivate::FFloatADSREnvelope::GetNextEnvelopeOutput
              (&this->EnvState,iVar10,local_c0,local_88,&local_98,&local_a8,
               *(float **)&(this->OutputEnvelope).field_0x8);
    iVar10 = local_88[0].ArrayNum;
    uVar13 = (ulonglong)local_88[0].ArrayNum;
    pFVar1 = local_88[0].AllocatorInstance.Data + uVar13 * 4;
    FVar14.Data = local_88[0].AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar13 != iVar10) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (FVar14.Data == pFVar1) break;
      FTrigger::TriggerFrame(*(FTrigger **)&(this->OnDecayTrigger).field_0x8,*(int *)FVar14.Data);
      uVar13 = local_88[0]._8_8_ & 0xffffffff;
      FVar14.Data = FVar14.Data + 4;
    }
    iVar10 = local_98.ArrayNum;
    uVar13 = (ulonglong)local_98.ArrayNum;
    pFVar1 = local_98.AllocatorInstance.Data + uVar13 * 4;
    FVar14.Data = local_98.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar13 != iVar10) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (FVar14.Data == pFVar1) break;
      FTrigger::TriggerFrame(*(FTrigger **)&(this->OnSustainTrigger).field_0x8,*(int *)FVar14.Data);
      uVar13 = local_98._8_8_ & 0xffffffff;
      FVar14.Data = FVar14.Data + 4;
    }
    iVar10 = local_a8.ArrayNum;
    uVar13 = (ulonglong)local_a8.ArrayNum;
    pFVar1 = local_a8.AllocatorInstance.Data + uVar13 * 4;
    FVar14.Data = local_a8.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar13 != iVar10) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (FVar14.Data == pFVar1) break;
      FTrigger::TriggerFrame(*(FTrigger **)&(this->OnDone).field_0x8,*(int *)FVar14.Data);
      uVar13 = local_a8._8_8_ & 0xffffffff;
      FVar14.Data = FVar14.Data + 4;
    }
    if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.AllocatorInstance.Data);
    }
    if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.AllocatorInstance.Data);
    }
    iVar11 = iVar12;
    fVar19 = __real_38d1b717;
    fVar18 = __real_3f800000;
    iVar9 = local_c4;
    iVar10 = local_c0;
    cVar16 = local_res8;
    if (local_88[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88[0].AllocatorInstance.Data);
      fVar19 = __real_38d1b717;
      fVar18 = __real_3f800000;
    }
  } while( true );
}

// GetDefaultInterface @ 14b022850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::
TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>
::GetDefaultInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar3;
  TOutputDataVertex<Metasound::FTrigger> *pTVar4;
  TOutputDataVertex<Metasound::FTrigger> *pTVar5;
  TOutputDataVertex<Metasound::FTrigger> *pTVar6;
  TOutputDataVertex<Metasound::FTrigger> *pTVar7;
  TOutputDataVertex<Metasound::FTrigger> *pTVar8;
  TInputDataVertex<float> *pTVar9;
  TInputDataVertex<float> *pTVar10;
  TInputDataVertex<Metasound::FTime> *pTVar11;
  TInputDataVertex<float> *pTVar12;
  TInputDataVertex<Metasound::FTime> *pTVar13;
  TInputDataVertex<Metasound::FTime> *pTVar14;
  TInputDataVertex<Metasound::FTrigger> *pTVar15;
  TInputDataVertex<Metasound::FTrigger> *pTVar16;
  FInputVertexInterface *pFVar17;
  FVertexInterface *pFVar18;
  undefined1 auStackY_418 [32];
  bool local_3b8 [4];
  float local_3b4;
  float local_3b0;
  float local_3ac;
  float local_3a8;
  float local_3a4;
  float local_3a0;
  float local_39c;
  TInputDataVertex<bool> *local_398;
  TInputDataVertex<float> *local_390;
  FOutputVertexInterface local_388;
  FOutputVertexInterfaceDeclarationBuilder local_368;
  FInputVertexInterface local_340;
  TOutputDataVertex<Metasound::FAudioBuffer> local_320;
  TOutputDataVertex<Metasound::FTrigger> local_300;
  TOutputDataVertex<Metasound::FTrigger> local_2e0;
  TOutputDataVertex<Metasound::FTrigger> local_2c0;
  TOutputDataVertex<Metasound::FTrigger> local_2a0;
  TOutputDataVertex<Metasound::FTrigger> local_280;
  TInputDataVertex<Metasound::FTrigger> local_260;
  TInputDataVertex<Metasound::FTrigger> local_228;
  TInputDataVertex<Metasound::FTime> local_1f0;
  TInputDataVertex<Metasound::FTime> local_1b8;
  TInputDataVertex<float> local_180;
  TInputDataVertex<Metasound::FTime> local_148;
  TInputDataVertex<float> local_110;
  TInputDataVertex<float> local_d8;
  TInputDataVertex<float> local_a0;
  TInputDataVertex<bool> local_68;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_418;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>::GetDefaultInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>::GetDefaultInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pTVar3 = TOutputDataVertex<Metasound::FAudioBuffer>::
             TOutputDataVertex<Metasound::FAudioBuffer><>
                       (&local_320,&ADSREnvelopeVertexNames::OutputEnvelopeValueName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar4 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_300,&ADSREnvelopeVertexNames::OutputOnDoneName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar5 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_2e0,&ADSREnvelopeVertexNames::OutputOnReleaseTriggerName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar6 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_2c0,&ADSREnvelopeVertexNames::OutputOnSustainTriggerName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar7 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_2a0,&ADSREnvelopeVertexNames::OutputOnDecayTriggerName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar8 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_280,&ADSREnvelopeVertexNames::OutputOnAttackTriggerName,
                        &FDataVertexMetadata::EmptyBasic);
    FOutputVertexInterface::FOutputVertexInterface(&local_388);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_368,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_388,
               &local_388.SubInterfaces);
    if ((local_368.Vertices)->ArrayMax < 6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,6,&(local_368.Vertices)->AllocatorInstance,(local_368.Vertices)->ArrayNum,
                 &(local_368.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_368,(FOutputDataVertex *)pTVar8);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_368,(FOutputDataVertex *)pTVar7);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_368,(FOutputDataVertex *)pTVar6);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_368,(FOutputDataVertex *)pTVar5);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_368,(FOutputDataVertex *)pTVar4);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_368,(FOutputDataVertex *)pTVar3);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_368);
    local_3b8[0] = false;
    local_398 = TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                          (&local_68,&ADSREnvelopeVertexNames::InputHardResetName,
                           &FDataVertexMetadata::EmptyBasic,local_3b8);
    local_3b4 = 1.0;
    local_390 = TInputDataVertex<float>::TInputDataVertex<float><float>
                          (&local_a0,&ADSREnvelopeVertexNames::InputReleaseCurveName,
                           &FDataVertexMetadata::EmptyBasic,&local_3b4);
    local_3b0 = 1.0;
    pTVar9 = TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_d8,&ADSREnvelopeVertexNames::InputDecayCurveName,
                        &FDataVertexMetadata::EmptyBasic,&local_3b0);
    local_3ac = 1.0;
    pTVar10 = TInputDataVertex<float>::TInputDataVertex<float><float>
                        (&local_110,&ADSREnvelopeVertexNames::InputAttackCurveName,
                         &FDataVertexMetadata::EmptyBasic,&local_3ac);
    local_3a8 = 1.0;
    pTVar11 = TInputDataVertex<Metasound::FTime>::TInputDataVertex<Metasound::FTime><float>
                        (&local_148,&ADSREnvelopeVertexNames::InputReleaseTimeName,
                         &FDataVertexMetadata::EmptyBasic,&local_3a8);
    local_3a4 = 0.5;
    pTVar12 = TInputDataVertex<float>::TInputDataVertex<float><float>
                        (&local_180,&ADSREnvelopeVertexNames::InputSustainLevelName,
                         &FDataVertexMetadata::EmptyBasic,&local_3a4);
    local_3a0 = 0.2;
    pTVar13 = TInputDataVertex<Metasound::FTime>::TInputDataVertex<Metasound::FTime><float>
                        (&local_1b8,&ADSREnvelopeVertexNames::InputDecayTimeName,
                         &FDataVertexMetadata::EmptyBasic,&local_3a0);
    local_39c = 0.01;
    pTVar14 = TInputDataVertex<Metasound::FTime>::TInputDataVertex<Metasound::FTime><float>
                        (&local_1f0,&ADSREnvelopeVertexNames::InputAttackTimeName,
                         &FDataVertexMetadata::EmptyBasic,&local_39c);
    pTVar15 = TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                        (&local_228,&ADSREnvelopeVertexNames::InputReleaseTriggerName,
                         &FDataVertexMetadata::EmptyBasic);
    pTVar16 = TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                        (&local_260,&ADSREnvelopeVertexNames::InputAttackTriggerName,
                         &FDataVertexMetadata::EmptyBasic);
    pFVar17 = FInputVertexInterface::
              FInputVertexInterface<Metasound::TInputDataVertex<Metasound::FTrigger>,Metasound::TInputDataVertex<Metasound::FTrigger>,Metasound::TInputDataVertex<Metasound::FTime>,Metasound::TInputDataVertex<Metasound::FTime>,Metasound::TInputDataVertex<float>,Metasound::TInputDataVertex<Metasound::FTime>,Metasound::TInputDataVertex<float>,Metasound::TInputDataVertex<float>,Metasound::TInputDataVertex<float>,Metasound::TInputDataVertex<bool>_>
                        (&local_340,pTVar16,pTVar15,pTVar14,pTVar13,pTVar12,pTVar11,pTVar10,pTVar9,
                         local_390,local_398);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>::GetDefaultInterface(void)'
                ::__l2::DefaultInterface,pFVar17,&local_388);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_340.SubInterfaces.AllocatorInstance.Data,
               local_340.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_340.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_340.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_340._padding_,(int)local_340._padding_);
    if ((FInputDataVertex *)local_340._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_340._padding_);
    }
    if ((0xc < (byte)local_260._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar18 = (FVertexInterface *)(*pcVar1)();
      return pFVar18;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_260._48_1_])(&local_260.field_0x20);
    if ((0xc < (byte)local_228._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar18 = (FVertexInterface *)(*pcVar1)();
      return pFVar18;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_228._48_1_])(&local_228.field_0x20);
    if ((0xc < (byte)local_1f0._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar18 = (FVertexInterface *)(*pcVar1)();
      return pFVar18;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_1f0._48_1_])(&local_1f0.field_0x20);
    if ((0xc < (byte)local_1b8._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar18 = (FVertexInterface *)(*pcVar1)();
      return pFVar18;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_1b8._48_1_])(&local_1b8.field_0x20);
    if ((0xc < (byte)local_180._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar18 = (FVertexInterface *)(*pcVar1)();
      return pFVar18;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_180._48_1_])(&local_180.field_0x20);
    if ((0xc < (byte)local_148._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar18 = (FVertexInterface *)(*pcVar1)();
      return pFVar18;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_148._48_1_])(&local_148.field_0x20);
    if ((0xc < (byte)local_110._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar18 = (FVertexInterface *)(*pcVar1)();
      return pFVar18;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_110._48_1_])(&local_110.field_0x20);
    if ((0xc < (byte)local_d8._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar18 = (FVertexInterface *)(*pcVar1)();
      return pFVar18;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_d8._48_1_])(&local_d8.field_0x20);
    if ((0xc < (byte)local_a0._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar18 = (FVertexInterface *)(*pcVar1)();
      return pFVar18;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_a0._48_1_])(&local_a0.field_0x20);
    if ((0xc < (byte)local_68._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar18 = (FVertexInterface *)(*pcVar1)();
      return pFVar18;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_68._48_1_])(&local_68.field_0x20);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_388.SubInterfaces.AllocatorInstance.Data,
               local_388.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_388.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_388.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_388._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_388._padding_);
    }
    atexit(`Metasound::
           TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>
           ::GetDefaultInterface'::__l2::_dynamic_atexit_destructor_for__DefaultInterface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>::GetDefaultInterface(void)'
          ::__l2::DefaultInterface;
}

// GetDefaultInterface @ 14b022f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float>::
GetDefaultInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<float> *pTVar3;
  TOutputDataVertex<Metasound::FTrigger> *pTVar4;
  TOutputDataVertex<Metasound::FTrigger> *pTVar5;
  TOutputDataVertex<Metasound::FTrigger> *pTVar6;
  TOutputDataVertex<Metasound::FTrigger> *pTVar7;
  TOutputDataVertex<Metasound::FTrigger> *pTVar8;
  TInputDataVertex<float> *pTVar9;
  TInputDataVertex<float> *pTVar10;
  TInputDataVertex<Metasound::FTime> *pTVar11;
  TInputDataVertex<float> *pTVar12;
  TInputDataVertex<Metasound::FTime> *pTVar13;
  TInputDataVertex<Metasound::FTime> *pTVar14;
  TInputDataVertex<Metasound::FTrigger> *pTVar15;
  TInputDataVertex<Metasound::FTrigger> *pTVar16;
  FInputVertexInterface *pFVar17;
  FVertexInterface *pFVar18;
  undefined1 auStackY_418 [32];
  bool local_3b8 [4];
  float local_3b4;
  float local_3b0;
  float local_3ac;
  float local_3a8;
  float local_3a4;
  float local_3a0;
  float local_39c;
  TInputDataVertex<bool> *local_398;
  TInputDataVertex<float> *local_390;
  FOutputVertexInterface local_388;
  FOutputVertexInterfaceDeclarationBuilder local_368;
  FInputVertexInterface local_340;
  TOutputDataVertex<float> local_320;
  TOutputDataVertex<Metasound::FTrigger> local_300;
  TOutputDataVertex<Metasound::FTrigger> local_2e0;
  TOutputDataVertex<Metasound::FTrigger> local_2c0;
  TOutputDataVertex<Metasound::FTrigger> local_2a0;
  TOutputDataVertex<Metasound::FTrigger> local_280;
  TInputDataVertex<Metasound::FTrigger> local_260;
  TInputDataVertex<Metasound::FTrigger> local_228;
  TInputDataVertex<Metasound::FTime> local_1f0;
  TInputDataVertex<Metasound::FTime> local_1b8;
  TInputDataVertex<float> local_180;
  TInputDataVertex<Metasound::FTime> local_148;
  TInputDataVertex<float> local_110;
  TInputDataVertex<float> local_d8;
  TInputDataVertex<float> local_a0;
  TInputDataVertex<bool> local_68;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_418;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float>::GetDefaultInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float>::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float>::GetDefaultInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pTVar3 = TOutputDataVertex<float>::TOutputDataVertex<float><>
                       (&local_320,&ADSREnvelopeVertexNames::OutputEnvelopeValueName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar4 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_300,&ADSREnvelopeVertexNames::OutputOnDoneName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar5 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_2e0,&ADSREnvelopeVertexNames::OutputOnReleaseTriggerName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar6 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_2c0,&ADSREnvelopeVertexNames::OutputOnSustainTriggerName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar7 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_2a0,&ADSREnvelopeVertexNames::OutputOnDecayTriggerName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar8 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_280,&ADSREnvelopeVertexNames::OutputOnAttackTriggerName,
                        &FDataVertexMetadata::EmptyBasic);
    FOutputVertexInterface::FOutputVertexInterface(&local_388);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_368,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_388,
               &local_388.SubInterfaces);
    if ((local_368.Vertices)->ArrayMax < 6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,6,&(local_368.Vertices)->AllocatorInstance,(local_368.Vertices)->ArrayNum,
                 &(local_368.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_368,(FOutputDataVertex *)pTVar8);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_368,(FOutputDataVertex *)pTVar7);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_368,(FOutputDataVertex *)pTVar6);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_368,(FOutputDataVertex *)pTVar5);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_368,(FOutputDataVertex *)pTVar4);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_368,(FOutputDataVertex *)pTVar3);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_368);
    local_3b8[0] = false;
    local_398 = TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                          (&local_68,&ADSREnvelopeVertexNames::InputHardResetName,
                           &FDataVertexMetadata::EmptyBasic,local_3b8);
    local_3b4 = 1.0;
    local_390 = TInputDataVertex<float>::TInputDataVertex<float><float>
                          (&local_a0,&ADSREnvelopeVertexNames::InputReleaseCurveName,
                           &FDataVertexMetadata::EmptyBasic,&local_3b4);
    local_3b0 = 1.0;
    pTVar9 = TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_d8,&ADSREnvelopeVertexNames::InputDecayCurveName,
                        &FDataVertexMetadata::EmptyBasic,&local_3b0);
    local_3ac = 1.0;
    pTVar10 = TInputDataVertex<float>::TInputDataVertex<float><float>
                        (&local_110,&ADSREnvelopeVertexNames::InputAttackCurveName,
                         &FDataVertexMetadata::EmptyBasic,&local_3ac);
    local_3a8 = 1.0;
    pTVar11 = TInputDataVertex<Metasound::FTime>::TInputDataVertex<Metasound::FTime><float>
                        (&local_148,&ADSREnvelopeVertexNames::InputReleaseTimeName,
                         &FDataVertexMetadata::EmptyBasic,&local_3a8);
    local_3a4 = 0.5;
    pTVar12 = TInputDataVertex<float>::TInputDataVertex<float><float>
                        (&local_180,&ADSREnvelopeVertexNames::InputSustainLevelName,
                         &FDataVertexMetadata::EmptyBasic,&local_3a4);
    local_3a0 = 0.2;
    pTVar13 = TInputDataVertex<Metasound::FTime>::TInputDataVertex<Metasound::FTime><float>
                        (&local_1b8,&ADSREnvelopeVertexNames::InputDecayTimeName,
                         &FDataVertexMetadata::EmptyBasic,&local_3a0);
    local_39c = 0.01;
    pTVar14 = TInputDataVertex<Metasound::FTime>::TInputDataVertex<Metasound::FTime><float>
                        (&local_1f0,&ADSREnvelopeVertexNames::InputAttackTimeName,
                         &FDataVertexMetadata::EmptyBasic,&local_39c);
    pTVar15 = TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                        (&local_228,&ADSREnvelopeVertexNames::InputReleaseTriggerName,
                         &FDataVertexMetadata::EmptyBasic);
    pTVar16 = TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                        (&local_260,&ADSREnvelopeVertexNames::InputAttackTriggerName,
                         &FDataVertexMetadata::EmptyBasic);
    pFVar17 = FInputVertexInterface::
              FInputVertexInterface<Metasound::TInputDataVertex<Metasound::FTrigger>,Metasound::TInputDataVertex<Metasound::FTrigger>,Metasound::TInputDataVertex<Metasound::FTime>,Metasound::TInputDataVertex<Metasound::FTime>,Metasound::TInputDataVertex<float>,Metasound::TInputDataVertex<Metasound::FTime>,Metasound::TInputDataVertex<float>,Metasound::TInputDataVertex<float>,Metasound::TInputDataVertex<float>,Metasound::TInputDataVertex<bool>_>
                        (&local_340,pTVar16,pTVar15,pTVar14,pTVar13,pTVar12,pTVar11,pTVar10,pTVar9,
                         local_390,local_398);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float>::GetDefaultInterface(void)'
                ::__l2::DefaultInterface,pFVar17,&local_388);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_340.SubInterfaces.AllocatorInstance.Data,
               local_340.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_340.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_340.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_340._padding_,(int)local_340._padding_);
    if ((FInputDataVertex *)local_340._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_340._padding_);
    }
    if ((0xc < (byte)local_260._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar18 = (FVertexInterface *)(*pcVar1)();
      return pFVar18;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_260._48_1_])(&local_260.field_0x20);
    if ((0xc < (byte)local_228._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar18 = (FVertexInterface *)(*pcVar1)();
      return pFVar18;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_228._48_1_])(&local_228.field_0x20);
    if ((0xc < (byte)local_1f0._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar18 = (FVertexInterface *)(*pcVar1)();
      return pFVar18;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_1f0._48_1_])(&local_1f0.field_0x20);
    if ((0xc < (byte)local_1b8._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar18 = (FVertexInterface *)(*pcVar1)();
      return pFVar18;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_1b8._48_1_])(&local_1b8.field_0x20);
    if ((0xc < (byte)local_180._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar18 = (FVertexInterface *)(*pcVar1)();
      return pFVar18;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_180._48_1_])(&local_180.field_0x20);
    if ((0xc < (byte)local_148._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar18 = (FVertexInterface *)(*pcVar1)();
      return pFVar18;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_148._48_1_])(&local_148.field_0x20);
    if ((0xc < (byte)local_110._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar18 = (FVertexInterface *)(*pcVar1)();
      return pFVar18;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_110._48_1_])(&local_110.field_0x20);
    if ((0xc < (byte)local_d8._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar18 = (FVertexInterface *)(*pcVar1)();
      return pFVar18;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_d8._48_1_])(&local_d8.field_0x20);
    if ((0xc < (byte)local_a0._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar18 = (FVertexInterface *)(*pcVar1)();
      return pFVar18;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_a0._48_1_])(&local_a0.field_0x20);
    if ((0xc < (byte)local_68._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar18 = (FVertexInterface *)(*pcVar1)();
      return pFVar18;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_68._48_1_])(&local_68.field_0x20);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_388.SubInterfaces.AllocatorInstance.Data,
               local_388.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_388.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_388.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_388._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_388._padding_);
    }
    atexit(`Metasound::
           TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float>::
           GetDefaultInterface'::__l2::_dynamic_atexit_destructor_for__DefaultInterface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float>::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float>::GetDefaultInterface(void)'
          ::__l2::DefaultInterface;
}

// GetNodeInfo @ 14b026240

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::
TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>
::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::
      TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>
      ::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::
             TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b0262d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float>::
GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::
      TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float>::
      GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::
             TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float>
             ::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// ProcessEnvelopeOutput @ 14b02e110

void __thiscall
Metasound::
TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>
::ProcessEnvelopeOutput
          (TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>
           *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ulonglong uVar3;
  ForAnyElementType FVar4;
  undefined1 local_res8 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_48;
  TArray<int,TSizedDefaultAllocator<32>_> local_38;
  TArray<int,TSizedDefaultAllocator<32>_> local_28;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  ADSREnvelopeNodePrivate::FAudioADSREnvelope::GetNextEnvelopeOutput
            (&this->EnvState,param_1,param_2,&local_28,&local_38,&local_48,
             *(FAudioBuffer **)&(this->OutputEnvelope).field_0x8);
  iVar2 = local_28.ArrayNum;
  uVar3 = (ulonglong)local_28.ArrayNum;
  pFVar1 = local_28.AllocatorInstance.Data + uVar3 * 4;
  FVar4.Data = local_28.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar3 != iVar2) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar4.Data == pFVar1) break;
    FTrigger::TriggerFrame(*(FTrigger **)&(this->OnDecayTrigger).field_0x8,*(int *)FVar4.Data);
    uVar3 = local_28._8_8_ & 0xffffffff;
    FVar4.Data = FVar4.Data + 4;
  }
  iVar2 = local_38.ArrayNum;
  uVar3 = (ulonglong)local_38.ArrayNum;
  pFVar1 = local_38.AllocatorInstance.Data + uVar3 * 4;
  FVar4.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar3 != iVar2) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar4.Data == pFVar1) break;
    FTrigger::TriggerFrame(*(FTrigger **)&(this->OnSustainTrigger).field_0x8,*(int *)FVar4.Data);
    uVar3 = local_38._8_8_ & 0xffffffff;
    FVar4.Data = FVar4.Data + 4;
  }
  iVar2 = local_48.ArrayNum;
  uVar3 = (ulonglong)local_48.ArrayNum;
  pFVar1 = local_48.AllocatorInstance.Data + uVar3 * 4;
  FVar4.Data = local_48.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar3 != iVar2) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar4.Data == pFVar1) break;
    FTrigger::TriggerFrame(*(FTrigger **)&(this->OnDone).field_0x8,*(int *)FVar4.Data);
    uVar3 = local_48._8_8_ & 0xffffffff;
    FVar4.Data = FVar4.Data + 4;
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// ProcessEnvelopeOutput @ 14b02e260

void __thiscall
Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float>::
ProcessEnvelopeOutput
          (TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float>
           *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ulonglong uVar3;
  ForAnyElementType FVar4;
  undefined1 local_res8 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_48;
  TArray<int,TSizedDefaultAllocator<32>_> local_38;
  TArray<int,TSizedDefaultAllocator<32>_> local_28;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  ADSREnvelopeNodePrivate::FFloatADSREnvelope::GetNextEnvelopeOutput
            (&this->EnvState,param_1,param_2,&local_28,&local_38,&local_48,
             *(float **)&(this->OutputEnvelope).field_0x8);
  iVar2 = local_28.ArrayNum;
  uVar3 = (ulonglong)local_28.ArrayNum;
  pFVar1 = local_28.AllocatorInstance.Data + uVar3 * 4;
  FVar4.Data = local_28.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar3 != iVar2) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar4.Data == pFVar1) break;
    FTrigger::TriggerFrame(*(FTrigger **)&(this->OnDecayTrigger).field_0x8,*(int *)FVar4.Data);
    uVar3 = local_28._8_8_ & 0xffffffff;
    FVar4.Data = FVar4.Data + 4;
  }
  iVar2 = local_38.ArrayNum;
  uVar3 = (ulonglong)local_38.ArrayNum;
  pFVar1 = local_38.AllocatorInstance.Data + uVar3 * 4;
  FVar4.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar3 != iVar2) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar4.Data == pFVar1) break;
    FTrigger::TriggerFrame(*(FTrigger **)&(this->OnSustainTrigger).field_0x8,*(int *)FVar4.Data);
    uVar3 = local_38._8_8_ & 0xffffffff;
    FVar4.Data = FVar4.Data + 4;
  }
  iVar2 = local_48.ArrayNum;
  uVar3 = (ulonglong)local_48.ArrayNum;
  pFVar1 = local_48.AllocatorInstance.Data + uVar3 * 4;
  FVar4.Data = local_48.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar3 != iVar2) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar4.Data == pFVar1) break;
    FTrigger::TriggerFrame(*(FTrigger **)&(this->OnDone).field_0x8,*(int *)FVar4.Data);
    uVar3 = local_48._8_8_ & 0xffffffff;
    FVar4.Data = FVar4.Data + 4;
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// Reset @ 14b02f040

void __thiscall
Metasound::
TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>
::Reset(TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FAudioADSREnvelope,Metasound::FAudioBuffer>
        *this,FResetParams *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  FTrigger *this_00;
  
  this->NumFramesPerBlock = param_1->OperatorSettings->NumFramesPerBlock;
  this->SampleRate = (float)param_1->OperatorSettings->SampleRate;
  puVar2 = *(undefined8 **)&(this->OutputEnvelope).field_0x8;
  iVar1 = *(int *)(puVar2 + 1);
  if (0 < iVar1) {
    memset((void *)*puVar2,0,(longlong)iVar1 << 2);
  }
  this_00 = *(FTrigger **)&(this->OnDecayTrigger).field_0x8;
  (this->EnvState).AttackSampleCount = 0;
  (this->EnvState).DecaySampleCount = 0;
  (this->EnvState).ReleaseSampleCount = 0;
  (this->EnvState).SustainLevel = 0.0;
  (this->EnvState).AttackCurveFactor = 0.0;
  (this->EnvState).DecayCurveFactor = 0.0;
  (this->EnvState).ReleaseCurveFactor = 0.0;
  (this->EnvState).EnvEase.CurrentValue = 0.0;
  (this->EnvState).StartingEnvelopeValue = 0.0;
  (this->EnvState).CurrentEnvelopeValue = 0.0;
  (this->EnvState).EnvelopeValueAtReleaseStart = 0.0;
  (this->EnvState).bHardReset = false;
  (this->EnvState).bIsInRelease = false;
  (this->EnvState).EnvEase.TargetValue = 0.0;
  (this->EnvState).CurrentSampleIndex = -1;
  (this->EnvState).EnvEase.EaseFactor = 0.1;
  (this->EnvState).EnvEase.OneMinusEase = 0.9;
  (this->EnvState).EnvEase.EaseTimesTarget = 0.0;
  FTrigger::Reset(this_00);
  FTrigger::Reset(*(FTrigger **)&(this->OnSustainTrigger).field_0x8);
  FTrigger::Reset(*(FTrigger **)&(this->OnDone).field_0x8);
  return;
}

// Reset @ 14b02f110

void __thiscall
Metasound::TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float>::
Reset(TADSREnvelopeNodeOperator<Metasound::ADSREnvelopeNodePrivate::FFloatADSREnvelope,float> *this,
     FResetParams *param_1)

{
  undefined4 *puVar1;
  FTrigger *this_00;
  float fVar2;
  
  this->NumFramesPerBlock = param_1->OperatorSettings->NumFramesPerBlock;
  fVar2 = FOperatorSettings::GetActualBlockRate(param_1->OperatorSettings);
  puVar1 = *(undefined4 **)&(this->OutputEnvelope).field_0x8;
  this->SampleRate = fVar2;
  *puVar1 = 0;
  (this->EnvState).AttackSampleCount = 0;
  (this->EnvState).DecaySampleCount = 0;
  (this->EnvState).ReleaseSampleCount = 0;
  (this->EnvState).SustainLevel = 0.0;
  (this->EnvState).AttackCurveFactor = 0.0;
  (this->EnvState).DecayCurveFactor = 0.0;
  (this->EnvState).ReleaseCurveFactor = 0.0;
  (this->EnvState).EnvEase.CurrentValue = 0.0;
  (this->EnvState).StartingEnvelopeValue = 0.0;
  (this->EnvState).CurrentEnvelopeValue = 0.0;
  (this->EnvState).EnvelopeValueAtReleaseStart = 0.0;
  (this->EnvState).bHardReset = false;
  (this->EnvState).bIsInRelease = false;
  (this->EnvState).EnvEase.TargetValue = 0.0;
  this_00 = *(FTrigger **)&(this->OnDecayTrigger).field_0x8;
  (this->EnvState).CurrentSampleIndex = -1;
  (this->EnvState).EnvEase.EaseFactor = 0.1;
  (this->EnvState).EnvEase.OneMinusEase = 0.9;
  (this->EnvState).EnvEase.EaseTimesTarget = 0.0;
  FTrigger::Reset(this_00);
  FTrigger::Reset(*(FTrigger **)&(this->OnSustainTrigger).field_0x8);
  FTrigger::Reset(*(FTrigger **)&(this->OnDone).field_0x8);
  return;
}

