// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 26

// BindInputs @ 14afc2a50

void __thiscall
Metasound::TADEnvelopeNodeOperator<Metasound::FAudioBuffer>::BindInputs
          (TADEnvelopeNodeOperator<Metasound::FAudioBuffer> *this,FInputVertexInterfaceData *param_1
          )

{
  FName local_res8;
  TDataReadReference<Metasound::FTrigger> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataReadReference<Metasound::FTrigger> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&ADEnvelopeVertexNames::InputTriggerName);
  local_res18 = &this->TriggerAttackIn;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_28._8_8_ = local_48;
  local_48._0_8_ = &local_res8;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_48._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_28,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&ADEnvelopeVertexNames::InputAttackTimeName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->AttackTime;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTime>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTime>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&ADEnvelopeVertexNames::InputDecayTimeName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->DecayTime;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTime>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTime>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&ADEnvelopeVertexNames::InputAttackCurveName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->AttackCurveFactor;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&ADEnvelopeVertexNames::InputDecayCurveName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->DecayCurveFactor;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&ADEnvelopeVertexNames::InputLoopingName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->bLooping;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&ADEnvelopeVertexNames::InputHardResetName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->bHardReset;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  return;
}

// BindOutputs @ 14afc2d00

void __thiscall
Metasound::TADEnvelopeNodeOperator<Metasound::FAudioBuffer>::BindOutputs
          (TADEnvelopeNodeOperator<Metasound::FAudioBuffer> *this,
          FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FTrigger> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataWriteReference<Metasound::FTrigger> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&ADEnvelopeVertexNames::OutputOnTriggerName);
  local_res18 = &this->OnAttackTrigger;
  local_30 = &local_res18;
  local_48._0_8_ = &local_res8;
  local_28._8_8_ = local_48;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_48._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_28,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_38
            );
  FLazyName::Resolve(&ADEnvelopeVertexNames::OutputOnDoneName);
  local_res18 = &this->OnDone;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_38
            );
  FLazyName::Resolve(&ADEnvelopeVertexNames::OutputEnvelopeValueName);
  local_res18 = (TDataWriteReference<Metasound::FTrigger> *)&this->OutputEnvelope;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_48._8_8_ = local_28;
  local_28._0_8_ = &local_res8;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_38
            );
  return;
}

// BindInputs @ 14afc3140

void __thiscall
Metasound::TADEnvelopeNodeOperator<float>::BindInputs
          (TADEnvelopeNodeOperator<float> *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FTrigger> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataReadReference<Metasound::FTrigger> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&ADEnvelopeVertexNames::InputTriggerName);
  local_res18 = &this->TriggerAttackIn;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_28._8_8_ = local_48;
  local_48._0_8_ = &local_res8;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_48._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_28,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&ADEnvelopeVertexNames::InputAttackTimeName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->AttackTime;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTime>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTime>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&ADEnvelopeVertexNames::InputDecayTimeName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->DecayTime;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTime>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTime>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&ADEnvelopeVertexNames::InputAttackCurveName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->AttackCurveFactor;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&ADEnvelopeVertexNames::InputDecayCurveName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->DecayCurveFactor;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&ADEnvelopeVertexNames::InputLoopingName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->bLooping;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&ADEnvelopeVertexNames::InputHardResetName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->bHardReset;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  return;
}

// BindOutputs @ 14afc33f0

void __thiscall
Metasound::TADEnvelopeNodeOperator<float>::BindOutputs
          (TADEnvelopeNodeOperator<float> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FTrigger> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataWriteReference<Metasound::FTrigger> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&ADEnvelopeVertexNames::OutputOnTriggerName);
  local_res18 = &this->OnAttackTrigger;
  local_30 = &local_res18;
  local_48._0_8_ = &local_res8;
  local_28._8_8_ = local_48;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_48._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_28,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_38
            );
  FLazyName::Resolve(&ADEnvelopeVertexNames::OutputOnDoneName);
  local_res18 = &this->OnDone;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_38
            );
  FLazyName::Resolve(&ADEnvelopeVertexNames::OutputEnvelopeValueName);
  local_res18 = (TDataWriteReference<Metasound::FTrigger> *)&this->OutputEnvelope;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_48._8_8_ = local_28;
  local_28._0_8_ = &local_res8;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<float>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_38
            );
  return;
}

// TADEnvelopeNodeOperator<float> @ 14afedd70

TADEnvelopeNodeOperator<float> * __thiscall
Metasound::TADEnvelopeNodeOperator<float>::TADEnvelopeNodeOperator<float>
          (TADEnvelopeNodeOperator<float> *this,FBuildOperatorParams *param_1,
          TDataReadReference<Metasound::FTrigger> *param_2,
          TDataReadReference<Metasound::FTime> *param_3,
          TDataReadReference<Metasound::FTime> *param_4,TDataReadReference<float> *param_5,
          TDataReadReference<float> *param_6,TDataReadReference<bool> *param_7,
          TDataReadReference<bool> *param_8)

{
  longlong lVar1;
  FOperatorSettings *this_00;
  FTrigger *this_01;
  float fVar2;
  
  this->_padding_ = (longlong)&___7__TADEnvelopeNodeOperator_M_Metasound__6B_;
  *(undefined ***)&this->TriggerAttackIn =
       &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->TriggerAttackIn).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->TriggerAttackIn).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->TriggerAttackIn =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->AttackTime = &___7__TDataReference_VFTime_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->AttackTime).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar1 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->AttackTime).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->AttackTime = &___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
  *(undefined ***)&this->DecayTime = &___7__TDataReference_VFTime_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->DecayTime).field_0x8 = *(undefined8 *)&param_4->field_0x8;
  lVar1 = *(longlong *)&param_4->field_0x10;
  *(longlong *)&(this->DecayTime).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->DecayTime = &___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
  *(undefined ***)&this->AttackCurveFactor = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->AttackCurveFactor).field_0x8 = *(undefined8 *)&param_5->field_0x8;
  lVar1 = *(longlong *)&param_5->field_0x10;
  *(longlong *)&(this->AttackCurveFactor).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->AttackCurveFactor = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->DecayCurveFactor = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->DecayCurveFactor).field_0x8 = *(undefined8 *)&param_6->field_0x8;
  lVar1 = *(longlong *)&param_6->field_0x10;
  *(longlong *)&(this->DecayCurveFactor).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->DecayCurveFactor = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->bLooping = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->bLooping).field_0x8 = *(undefined8 *)&param_7->field_0x8;
  lVar1 = *(longlong *)&param_7->field_0x10;
  *(longlong *)&(this->bLooping).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->bLooping = &___7__TDataReadReference__N_Metasound__6B_;
  *(undefined ***)&this->bHardReset = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->bHardReset).field_0x8 = *(undefined8 *)&param_8->field_0x8;
  lVar1 = *(longlong *)&param_8->field_0x10;
  *(longlong *)&(this->bHardReset).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->bHardReset = &___7__TDataReadReference__N_Metasound__6B_;
  TDataReference<Metasound::FTrigger>::
  TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FTrigger> *)&this->OnAttackTrigger,NewObject,
             param_1->OperatorSettings);
  *(undefined ***)&this->OnAttackTrigger =
       &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  TDataReference<Metasound::FTrigger>::
  TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FTrigger> *)&this->OnDone,NewObject,
             param_1->OperatorSettings);
  *(undefined ***)&this->OnDone = &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  TDataReference<float>::TDataReference<float><>
            ((TDataReference<float> *)&this->OutputEnvelope,NewObject);
  *(undefined ***)&this->OutputEnvelope = &___7__TDataWriteReference_M_Metasound__6B_;
  this->SampleRate = 0.0;
  this->NumFramesPerBlock = 0;
  (this->EnvState).CurrentSampleIndex = -1;
  (this->EnvState).AttackSampleCount = 1;
  (this->EnvState).DecaySampleCount = 1;
  (this->EnvState).AttackCurveFactor = 0.0;
  (this->EnvState).DecayCurveFactor = 0.0;
  (this->EnvState).EnvEase.CurrentValue = 0.0;
  (this->EnvState).StartingEnvelopeValue = 0.0;
  (this->EnvState).CurrentEnvelopeValue = 0.0;
  (this->EnvState).bLooping = false;
  (this->EnvState).bHardReset = false;
  this_00 = param_1->OperatorSettings;
  (this->EnvState).EnvEase.Threshold = 0.0001;
  (this->EnvState).EnvEase.TargetValue = 0.0;
  (this->EnvState).EnvEase.EaseFactor = 0.001;
  (this->EnvState).EnvEase.OneMinusEase = 0.999;
  (this->EnvState).EnvEase.EaseTimesTarget = 0.0;
  this->NumFramesPerBlock = this_00->NumFramesPerBlock;
  fVar2 = FOperatorSettings::GetActualBlockRate(this_00);
  this_01 = *(FTrigger **)&(this->OnAttackTrigger).field_0x8;
  this->SampleRate = fVar2;
  FTrigger::Reset(this_01);
  FTrigger::Reset(*(FTrigger **)&(this->OnDone).field_0x8);
  **(undefined4 **)&(this->OutputEnvelope).field_0x8 = 0;
  (this->EnvState).DecayCurveFactor = 0.0;
  (this->EnvState).EnvEase.CurrentValue = 0.0;
  (this->EnvState).StartingEnvelopeValue = 0.0;
  (this->EnvState).CurrentEnvelopeValue = 0.0;
  (this->EnvState).bLooping = false;
  (this->EnvState).bHardReset = false;
  (this->EnvState).EnvEase.TargetValue = 0.0;
  (this->EnvState).CurrentSampleIndex = -1;
  (this->EnvState).AttackSampleCount = 1;
  (this->EnvState).DecaySampleCount = 1;
  (this->EnvState).AttackCurveFactor = 0.0;
  (this->EnvState).EnvEase.EaseFactor = 0.01;
  (this->EnvState).EnvEase.OneMinusEase = 0.99;
  (this->EnvState).EnvEase.EaseTimesTarget = 0.0;
  return this;
}

// TADEnvelopeNodeOperator<Metasound::FAudioBuffer> @ 14afee050

TADEnvelopeNodeOperator<Metasound::FAudioBuffer> * __thiscall
Metasound::TADEnvelopeNodeOperator<Metasound::FAudioBuffer>::
TADEnvelopeNodeOperator<Metasound::FAudioBuffer>
          (TADEnvelopeNodeOperator<Metasound::FAudioBuffer> *this,FBuildOperatorParams *param_1,
          TDataReadReference<Metasound::FTrigger> *param_2,
          TDataReadReference<Metasound::FTime> *param_3,
          TDataReadReference<Metasound::FTime> *param_4,TDataReadReference<float> *param_5,
          TDataReadReference<float> *param_6,TDataReadReference<bool> *param_7,
          TDataReadReference<bool> *param_8)

{
  longlong lVar1;
  FResetParams local_28;
  
  this->_padding_ =
       (longlong)&___7__TADEnvelopeNodeOperator_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined ***)&this->TriggerAttackIn =
       &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->TriggerAttackIn).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->TriggerAttackIn).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->TriggerAttackIn =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->AttackTime = &___7__TDataReference_VFTime_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->AttackTime).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar1 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->AttackTime).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->AttackTime = &___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
  *(undefined ***)&this->DecayTime = &___7__TDataReference_VFTime_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->DecayTime).field_0x8 = *(undefined8 *)&param_4->field_0x8;
  lVar1 = *(longlong *)&param_4->field_0x10;
  *(longlong *)&(this->DecayTime).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->DecayTime = &___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
  *(undefined ***)&this->AttackCurveFactor = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->AttackCurveFactor).field_0x8 = *(undefined8 *)&param_5->field_0x8;
  lVar1 = *(longlong *)&param_5->field_0x10;
  *(longlong *)&(this->AttackCurveFactor).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->AttackCurveFactor = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->DecayCurveFactor = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->DecayCurveFactor).field_0x8 = *(undefined8 *)&param_6->field_0x8;
  lVar1 = *(longlong *)&param_6->field_0x10;
  *(longlong *)&(this->DecayCurveFactor).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->DecayCurveFactor = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->bLooping = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->bLooping).field_0x8 = *(undefined8 *)&param_7->field_0x8;
  lVar1 = *(longlong *)&param_7->field_0x10;
  *(longlong *)&(this->bLooping).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->bLooping = &___7__TDataReadReference__N_Metasound__6B_;
  *(undefined ***)&this->bHardReset = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->bHardReset).field_0x8 = *(undefined8 *)&param_8->field_0x8;
  lVar1 = *(longlong *)&param_8->field_0x10;
  *(longlong *)&(this->bHardReset).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->bHardReset = &___7__TDataReadReference__N_Metasound__6B_;
  TDataReference<Metasound::FTrigger>::
  TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FTrigger> *)&this->OnAttackTrigger,NewObject,
             param_1->OperatorSettings);
  *(undefined ***)&this->OnAttackTrigger =
       &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  TDataReference<Metasound::FTrigger>::
  TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FTrigger> *)&this->OnDone,NewObject,
             param_1->OperatorSettings);
  *(undefined ***)&this->OnDone = &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FAudioBuffer> *)&this->OutputEnvelope,NewObject,
             param_1->OperatorSettings);
  *(undefined ***)&this->OutputEnvelope =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  (this->EnvState).CurrentSampleIndex = -1;
  this->SampleRate = 0.0;
  this->NumFramesPerBlock = 0;
  (this->EnvState).DecayCurveFactor = 0.0;
  (this->EnvState).EnvEase.CurrentValue = 0.0;
  (this->EnvState).StartingEnvelopeValue = 0.0;
  (this->EnvState).CurrentEnvelopeValue = 0.0;
  (this->EnvState).bLooping = false;
  (this->EnvState).bHardReset = false;
  (this->EnvState).AttackSampleCount = 1;
  (this->EnvState).DecaySampleCount = 1;
  (this->EnvState).AttackCurveFactor = 0.0;
  local_28.OperatorSettings = param_1->OperatorSettings;
  local_28.Environment = param_1->Environment;
  local_28.GraphRenderCost = param_1->GraphRenderCost;
  (this->EnvState).EnvEase.Threshold = 0.0001;
  (this->EnvState).EnvEase.TargetValue = 0.0;
  (this->EnvState).EnvEase.EaseFactor = 0.001;
  (this->EnvState).EnvEase.OneMinusEase = 0.999;
  (this->EnvState).EnvEase.EaseTimesTarget = 0.0;
  Reset(this,&local_28);
  return this;
}

// ~TADEnvelopeNodeOperator<float> @ 14affb1c0

void __thiscall
Metasound::TADEnvelopeNodeOperator<float>::~TADEnvelopeNodeOperator<float>
          (TADEnvelopeNodeOperator<float> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputEnvelope).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OnDone).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OnAttackTrigger).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->bHardReset).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->bLooping).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->DecayCurveFactor).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->AttackCurveFactor).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->DecayTime).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->AttackTime).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerAttackIn).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TADEnvelopeNodeOperator<Metasound::FAudioBuffer> @ 14affb250

void __thiscall
Metasound::TADEnvelopeNodeOperator<Metasound::FAudioBuffer>::
~TADEnvelopeNodeOperator<Metasound::FAudioBuffer>
          (TADEnvelopeNodeOperator<Metasound::FAudioBuffer> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputEnvelope).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OnDone).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OnAttackTrigger).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->bHardReset).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->bLooping).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->DecayCurveFactor).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->AttackCurveFactor).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->DecayTime).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->AttackTime).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerAttackIn).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// operator() @ 14affddb0

void __thiscall
`Metasound::TADEnvelopeNodeOperator<float>::Execute'::__l2::<lambda_1>::operator()
          (void *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ulonglong uVar3;
  ForAnyElementType FVar4;
  undefined1 local_res8 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  Metasound::ADEnvelopeNodePrivate::TADEnvelope<float>::GetNextEnvelopeOutput
            ((FEnvState *)(*(longlong *)this + 0x150),param_1,param_2,&local_18,
             *(float **)(*(longlong *)this + 0x130));
  iVar2 = local_18.ArrayNum;
  uVar3 = (ulonglong)local_18.ArrayNum;
  pFVar1 = local_18.AllocatorInstance.Data + uVar3 * 4;
  FVar4.Data = local_18.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar3 != iVar2) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar4.Data == pFVar1) break;
    Metasound::FTrigger::TriggerFrame(*(FTrigger **)(*(longlong *)this + 0x110),*(int *)FVar4.Data);
    uVar3 = local_18._8_8_ & 0xffffffff;
    FVar4.Data = FVar4.Data + 4;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14affde60

void __thiscall
`Metasound::TADEnvelopeNodeOperator<Metasound::FAudioBuffer>::Execute'::__l2::<lambda_1>::operator()
          (void *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ulonglong uVar3;
  ForAnyElementType FVar4;
  undefined1 local_res8 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  Metasound::ADEnvelopeNodePrivate::TADEnvelope<Metasound::FAudioBuffer>::GetNextEnvelopeOutput
            ((FEnvState *)(*(longlong *)this + 0x150),param_1,param_2,&local_18,
             *(FAudioBuffer **)(*(longlong *)this + 0x130));
  iVar2 = local_18.ArrayNum;
  uVar3 = (ulonglong)local_18.ArrayNum;
  pFVar1 = local_18.AllocatorInstance.Data + uVar3 * 4;
  FVar4.Data = local_18.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar3 != iVar2) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar4.Data == pFVar1) break;
    Metasound::FTrigger::TriggerFrame(*(FTrigger **)(*(longlong *)this + 0x110),*(int *)FVar4.Data);
    uVar3 = local_18._8_8_ & 0xffffffff;
    FVar4.Data = FVar4.Data + 4;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14b0011a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TADEnvelopeNodeOperator<float>::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

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
  ::FName::FName(&local_res20,"AD Envelope");
  FText::FText(&local_128);
  FText::FText(&local_138);
  pFVar2 = Metasound::TADEnvelopeNodeOperator<float>::GetDefaultInterface();
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
  ::FName::FName(local_178,"AD Envelope");
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

// operator() @ 14b001470

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TADEnvelopeNodeOperator<Metasound::FAudioBuffer>::GetNodeInfo'::__l2::<lambda_1>::
operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

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
  ::FName::FName(&local_res20,"AD Envelope");
  FText::FText(&local_128);
  FText::FText(&local_138);
  pFVar2 = Metasound::TADEnvelopeNodeOperator<Metasound::FAudioBuffer>::GetDefaultInterface();
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
  ::FName::FName(local_178,"AD Envelope");
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

// operator() @ 14b0036f0

void __thiscall
`Metasound::TADEnvelopeNodeOperator<float>::Execute'::__l2::<lambda_2>::operator()
          (void *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  ForAnyElementType FVar6;
  undefined4 uVar7;
  undefined1 local_res8 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_28;
  
  Metasound::TADEnvelopeNodeOperator<float>::UpdateParams(*(TADEnvelopeNodeOperator<float> **)this);
  *(undefined4 *)(*(longlong *)this + 0x150) = 0;
  lVar3 = *(longlong *)this;
  if (*(char *)(lVar3 + 0x185) == '\0') {
    uVar7 = *(undefined4 *)(lVar3 + 0x180);
  }
  else {
    uVar7 = 0;
  }
  *(undefined4 *)(lVar3 + 0x17c) = uVar7;
  lVar3 = *(longlong *)this;
  fVar2 = *(float *)(lVar3 + 0x17c);
  *(float *)(lVar3 + 0x16c) = fVar2;
  *(float *)(lVar3 + 0x164) = fVar2;
  *(float *)(lVar3 + 0x178) = fVar2 * *(float *)(lVar3 + 0x170);
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  Metasound::ADEnvelopeNodePrivate::TADEnvelope<float>::GetNextEnvelopeOutput
            ((FEnvState *)(lVar3 + 0x150),param_1,param_2,&local_28,*(float **)(lVar3 + 0x130));
  iVar4 = local_28.ArrayNum;
  uVar5 = (ulonglong)local_28.ArrayNum;
  pFVar1 = local_28.AllocatorInstance.Data + uVar5 * 4;
  FVar6.Data = local_28.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar5 != iVar4) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar6.Data == pFVar1) break;
    Metasound::FTrigger::TriggerFrame(*(FTrigger **)(*(longlong *)this + 0x110),*(int *)FVar6.Data);
    uVar5 = local_28._8_8_ & 0xffffffff;
    FVar6.Data = FVar6.Data + 4;
  }
  Metasound::FTrigger::TriggerFrame(*(FTrigger **)(*(longlong *)this + 0xf0),param_1);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14b003810

void __thiscall
`Metasound::TADEnvelopeNodeOperator<Metasound::FAudioBuffer>::Execute'::__l2::<lambda_2>::operator()
          (void *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  ForAnyElementType FVar6;
  undefined4 uVar7;
  undefined1 local_res8 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_28;
  
  Metasound::TADEnvelopeNodeOperator<Metasound::FAudioBuffer>::UpdateParams
            (*(TADEnvelopeNodeOperator<Metasound::FAudioBuffer> **)this);
  *(undefined4 *)(*(longlong *)this + 0x150) = 0;
  lVar3 = *(longlong *)this;
  if (*(char *)(lVar3 + 0x185) == '\0') {
    uVar7 = *(undefined4 *)(lVar3 + 0x180);
  }
  else {
    uVar7 = 0;
  }
  *(undefined4 *)(lVar3 + 0x17c) = uVar7;
  lVar3 = *(longlong *)this;
  fVar2 = *(float *)(lVar3 + 0x17c);
  *(float *)(lVar3 + 0x16c) = fVar2;
  *(float *)(lVar3 + 0x164) = fVar2;
  *(float *)(lVar3 + 0x178) = fVar2 * *(float *)(lVar3 + 0x170);
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  Metasound::ADEnvelopeNodePrivate::TADEnvelope<Metasound::FAudioBuffer>::GetNextEnvelopeOutput
            ((FEnvState *)(lVar3 + 0x150),param_1,param_2,&local_28,
             *(FAudioBuffer **)(lVar3 + 0x130));
  iVar4 = local_28.ArrayNum;
  uVar5 = (ulonglong)local_28.ArrayNum;
  pFVar1 = local_28.AllocatorInstance.Data + uVar5 * 4;
  FVar6.Data = local_28.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar5 != iVar4) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar6.Data == pFVar1) break;
    Metasound::FTrigger::TriggerFrame(*(FTrigger **)(*(longlong *)this + 0x110),*(int *)FVar6.Data);
    uVar5 = local_28._8_8_ & 0xffffffff;
    FVar6.Data = FVar6.Data + 4;
  }
  Metasound::FTrigger::TriggerFrame(*(FTrigger **)(*(longlong *)this + 0xf0),param_1);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// CreateOperator @ 14b00c9b0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TADEnvelopeNodeOperator<float>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  TADEnvelopeNodeOperator<float> *this_00;
  TADEnvelopeNodeOperator<float> *pTVar2;
  FName local_res8;
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ADEnvelopeVertexNames::InputTriggerName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_38,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ADEnvelopeVertexNames::InputAttackTimeName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTime>
            (this,(TDataReadReference<Metasound::FTime> *)local_58,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ADEnvelopeVertexNames::InputDecayTimeName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTime>
            (this,(TDataReadReference<Metasound::FTime> *)local_78,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ADEnvelopeVertexNames::InputAttackCurveName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_98,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ADEnvelopeVertexNames::InputDecayCurveName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_b8,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ADEnvelopeVertexNames::InputLoopingName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this,(TDataReadReference<bool> *)local_d8,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ADEnvelopeVertexNames::InputHardResetName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this,(TDataReadReference<bool> *)local_f8,&local_res8,pFVar1);
  this_00 = ::operator_new(0x188);
  pTVar2 = (TADEnvelopeNodeOperator<float> *)0x0;
  if (this_00 != (TADEnvelopeNodeOperator<float> *)0x0) {
    pTVar2 = TADEnvelopeNodeOperator<float>
                       (this_00,(FBuildOperatorParams *)param_2,
                        (TDataReadReference<Metasound::FTrigger> *)local_38,
                        (TDataReadReference<Metasound::FTime> *)local_58,
                        (TDataReadReference<Metasound::FTime> *)local_78,
                        (TDataReadReference<float> *)local_98,(TDataReadReference<float> *)local_b8,
                        (TDataReadReference<bool> *)local_d8,(TDataReadReference<bool> *)local_f8);
  }
  param_1->Node = (INode *)pTVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_f8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_d8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_b8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_98._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_78._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_58._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b00cba0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TADEnvelopeNodeOperator<Metasound::FAudioBuffer>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  TADEnvelopeNodeOperator<Metasound::FAudioBuffer> *this_00;
  TADEnvelopeNodeOperator<Metasound::FAudioBuffer> *pTVar2;
  FName local_res8;
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ADEnvelopeVertexNames::InputTriggerName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_38,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ADEnvelopeVertexNames::InputAttackTimeName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTime>
            (this,(TDataReadReference<Metasound::FTime> *)local_58,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ADEnvelopeVertexNames::InputDecayTimeName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTime>
            (this,(TDataReadReference<Metasound::FTime> *)local_78,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ADEnvelopeVertexNames::InputAttackCurveName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_98,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ADEnvelopeVertexNames::InputDecayCurveName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_b8,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ADEnvelopeVertexNames::InputLoopingName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this,(TDataReadReference<bool> *)local_d8,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ADEnvelopeVertexNames::InputHardResetName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this,(TDataReadReference<bool> *)local_f8,&local_res8,pFVar1);
  this_00 = ::operator_new(0x188);
  pTVar2 = (TADEnvelopeNodeOperator<Metasound::FAudioBuffer> *)0x0;
  if (this_00 != (TADEnvelopeNodeOperator<Metasound::FAudioBuffer> *)0x0) {
    pTVar2 = TADEnvelopeNodeOperator<Metasound::FAudioBuffer>
                       (this_00,(FBuildOperatorParams *)param_2,
                        (TDataReadReference<Metasound::FTrigger> *)local_38,
                        (TDataReadReference<Metasound::FTime> *)local_58,
                        (TDataReadReference<Metasound::FTime> *)local_78,
                        (TDataReadReference<float> *)local_98,(TDataReadReference<float> *)local_b8,
                        (TDataReadReference<bool> *)local_d8,(TDataReadReference<bool> *)local_f8);
  }
  param_1->Node = (INode *)pTVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_f8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_d8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_b8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_98._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_78._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_58._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// Execute @ 14b01a8e0

void __thiscall
Metasound::TADEnvelopeNodeOperator<float>::Execute(TADEnvelopeNodeOperator<float> *this)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  int *piVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  longlong lVar10;
  float fVar11;
  TADEnvelopeNodeOperator<float> *local_res8;
  int local_res10;
  TADEnvelopeNodeOperator<float> *local_res18;
  TArray<int,TSizedDefaultAllocator<32>_> local_48;
  
  FTrigger::AdvanceBlock(*(FTrigger **)&(this->OnAttackTrigger).field_0x8);
  FTrigger::AdvanceBlock(*(FTrigger **)&(this->OnDone).field_0x8);
  UpdateParams(this);
  puVar6 = *(undefined8 **)&(this->TriggerAttackIn).field_0x8;
  iVar4 = *(int *)((longlong)puVar6 + 0x1c);
  local_res10 = *(int *)((longlong)puVar6 + 0x14);
  local_res8 = this;
  local_res18 = this;
  if (0 < iVar4) {
    piVar7 = (int *)*puVar6;
    if (0 < *piVar7) {
      `Metasound::TADEnvelopeNodeOperator<float>::Execute'::__l2::<lambda_1>::operator()
                (&local_res8,0,*piVar7);
    }
    lVar1 = (longlong)iVar4 + -1;
    if (0 < lVar1) {
      lVar10 = 0;
      do {
        iVar4 = piVar7[lVar10 + 1];
        iVar5 = piVar7[lVar10];
        UpdateParams(this);
        (this->EnvState).CurrentSampleIndex = 0;
        if ((this->EnvState).bHardReset == false) {
          fVar11 = (this->EnvState).CurrentEnvelopeValue;
        }
        else {
          fVar11 = 0.0;
        }
        (this->EnvState).StartingEnvelopeValue = fVar11;
        (this->EnvState).EnvEase.TargetValue = fVar11;
        fVar3 = (this->EnvState).EnvEase.EaseFactor;
        (this->EnvState).EnvEase.CurrentValue = fVar11;
        (this->EnvState).EnvEase.EaseTimesTarget = fVar11 * fVar3;
        local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_48.ArrayNum = 0;
        local_48.ArrayMax = 0;
        ADEnvelopeNodePrivate::TADEnvelope<float>::GetNextEnvelopeOutput
                  (&this->EnvState,iVar5,iVar4,&local_48,
                   *(float **)&(this->OutputEnvelope).field_0x8);
        iVar4 = local_48.ArrayNum;
        uVar8 = (ulonglong)local_48.ArrayNum;
        pFVar2 = local_48.AllocatorInstance.Data + uVar8 * 4;
        FVar9.Data = local_48.AllocatorInstance.Data;
        while( true ) {
          if ((int)uVar8 != iVar4) {
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_res8);
          }
          if (FVar9.Data == pFVar2) break;
          FTrigger::TriggerFrame(*(FTrigger **)&(this->OnDone).field_0x8,*(int *)FVar9.Data);
          uVar8 = local_48._8_8_ & 0xffffffff;
          FVar9.Data = FVar9.Data + 4;
        }
        FTrigger::TriggerFrame(*(FTrigger **)&(this->OnAttackTrigger).field_0x8,iVar5);
        if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.AllocatorInstance.Data);
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 < lVar1);
    }
    `Metasound::TADEnvelopeNodeOperator<float>::Execute'::__l2::<lambda_2>::operator()
              (&local_res18,piVar7[lVar1],local_res10);
    return;
  }
  `Metasound::TADEnvelopeNodeOperator<float>::Execute'::__l2::<lambda_1>::operator()
            (&local_res8,0,local_res10);
  return;
}

// Execute @ 14b01aae0

void __thiscall
Metasound::TADEnvelopeNodeOperator<Metasound::FAudioBuffer>::Execute
          (TADEnvelopeNodeOperator<Metasound::FAudioBuffer> *this)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  int *piVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  longlong lVar10;
  float fVar11;
  TADEnvelopeNodeOperator<Metasound::FAudioBuffer> *local_res8;
  int local_res10;
  TADEnvelopeNodeOperator<Metasound::FAudioBuffer> *local_res18;
  TArray<int,TSizedDefaultAllocator<32>_> local_48;
  
  FTrigger::AdvanceBlock(*(FTrigger **)&(this->OnAttackTrigger).field_0x8);
  FTrigger::AdvanceBlock(*(FTrigger **)&(this->OnDone).field_0x8);
  UpdateParams(this);
  puVar6 = *(undefined8 **)&(this->TriggerAttackIn).field_0x8;
  iVar4 = *(int *)((longlong)puVar6 + 0x1c);
  local_res10 = *(int *)((longlong)puVar6 + 0x14);
  local_res8 = this;
  local_res18 = this;
  if (0 < iVar4) {
    piVar7 = (int *)*puVar6;
    if (0 < *piVar7) {
      `Metasound::TADEnvelopeNodeOperator<Metasound::FAudioBuffer>::Execute'::__l2::<lambda_1>::
      operator()(&local_res8,0,*piVar7);
    }
    lVar1 = (longlong)iVar4 + -1;
    if (0 < lVar1) {
      lVar10 = 0;
      do {
        iVar4 = piVar7[lVar10 + 1];
        iVar5 = piVar7[lVar10];
        UpdateParams(this);
        (this->EnvState).CurrentSampleIndex = 0;
        if ((this->EnvState).bHardReset == false) {
          fVar11 = (this->EnvState).CurrentEnvelopeValue;
        }
        else {
          fVar11 = 0.0;
        }
        (this->EnvState).StartingEnvelopeValue = fVar11;
        (this->EnvState).EnvEase.TargetValue = fVar11;
        fVar3 = (this->EnvState).EnvEase.EaseFactor;
        (this->EnvState).EnvEase.CurrentValue = fVar11;
        (this->EnvState).EnvEase.EaseTimesTarget = fVar11 * fVar3;
        local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_48.ArrayNum = 0;
        local_48.ArrayMax = 0;
        ADEnvelopeNodePrivate::TADEnvelope<Metasound::FAudioBuffer>::GetNextEnvelopeOutput
                  (&this->EnvState,iVar5,iVar4,&local_48,
                   *(FAudioBuffer **)&(this->OutputEnvelope).field_0x8);
        iVar4 = local_48.ArrayNum;
        uVar8 = (ulonglong)local_48.ArrayNum;
        pFVar2 = local_48.AllocatorInstance.Data + uVar8 * 4;
        FVar9.Data = local_48.AllocatorInstance.Data;
        while( true ) {
          if ((int)uVar8 != iVar4) {
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_res8);
          }
          if (FVar9.Data == pFVar2) break;
          FTrigger::TriggerFrame(*(FTrigger **)&(this->OnDone).field_0x8,*(int *)FVar9.Data);
          uVar8 = local_48._8_8_ & 0xffffffff;
          FVar9.Data = FVar9.Data + 4;
        }
        FTrigger::TriggerFrame(*(FTrigger **)&(this->OnAttackTrigger).field_0x8,iVar5);
        if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.AllocatorInstance.Data);
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 < lVar1);
    }
    `Metasound::TADEnvelopeNodeOperator<Metasound::FAudioBuffer>::Execute'::__l2::<lambda_2>::
    operator()(&local_res18,piVar7[lVar1],local_res10);
    return;
  }
  `Metasound::TADEnvelopeNodeOperator<Metasound::FAudioBuffer>::Execute'::__l2::<lambda_1>::
  operator()(&local_res8,0,local_res10);
  return;
}

// GetDefaultInterface @ 14b021df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::TADEnvelopeNodeOperator<float>::GetDefaultInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<float> *pTVar3;
  TOutputDataVertex<Metasound::FTrigger> *pTVar4;
  TOutputDataVertex<Metasound::FTrigger> *pTVar5;
  TInputDataVertex<bool> *pTVar6;
  TInputDataVertex<bool> *pTVar7;
  TInputDataVertex<float> *pTVar8;
  TInputDataVertex<float> *pTVar9;
  TInputDataVertex<Metasound::FTime> *pTVar10;
  TInputDataVertex<Metasound::FTime> *pTVar11;
  TInputDataVertex<Metasound::FTrigger> *pTVar12;
  FInputVertexInterface *pFVar13;
  FVertexInterface *pFVar14;
  undefined1 auStackY_2c8 [32];
  bool local_288;
  bool local_287 [3];
  float local_284;
  float local_280;
  float local_27c;
  float local_278 [2];
  FOutputVertexInterface local_270;
  FInputVertexInterface local_250;
  FOutputVertexInterfaceDeclarationBuilder local_230;
  TOutputDataVertex<float> local_208;
  TOutputDataVertex<Metasound::FTrigger> local_1e8;
  TOutputDataVertex<Metasound::FTrigger> local_1c8;
  TInputDataVertex<Metasound::FTrigger> local_1a8;
  TInputDataVertex<Metasound::FTime> local_170;
  TInputDataVertex<Metasound::FTime> local_138;
  TInputDataVertex<float> local_100;
  TInputDataVertex<float> local_c8;
  TInputDataVertex<bool> local_90;
  TInputDataVertex<bool> local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TADEnvelopeNodeOperator<float>::GetDefaultInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TADEnvelopeNodeOperator<float>::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TADEnvelopeNodeOperator<float>::GetDefaultInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pTVar3 = TOutputDataVertex<float>::TOutputDataVertex<float><>
                       (&local_208,&ADEnvelopeVertexNames::OutputEnvelopeValueName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar4 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_1e8,&ADEnvelopeVertexNames::OutputOnDoneName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar5 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_1c8,&ADEnvelopeVertexNames::OutputOnTriggerName,
                        &FDataVertexMetadata::EmptyBasic);
    FOutputVertexInterface::FOutputVertexInterface(&local_270);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_230,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_270,
               &local_270.SubInterfaces);
    if ((local_230.Vertices)->ArrayMax < 3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,3,&(local_230.Vertices)->AllocatorInstance,(local_230.Vertices)->ArrayNum,
                 &(local_230.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_230,(FOutputDataVertex *)pTVar5);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_230,(FOutputDataVertex *)pTVar4);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_230,(FOutputDataVertex *)pTVar3);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_230);
    local_288 = false;
    pTVar6 = TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                       (&local_58,&ADEnvelopeVertexNames::InputHardResetName,
                        &FDataVertexMetadata::EmptyBasic,&local_288);
    local_287[0] = false;
    pTVar7 = TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                       (&local_90,&ADEnvelopeVertexNames::InputLoopingName,
                        &FDataVertexMetadata::EmptyBasic,local_287);
    local_284 = 1.0;
    pTVar8 = TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_c8,&ADEnvelopeVertexNames::InputDecayCurveName,
                        &FDataVertexMetadata::EmptyBasic,&local_284);
    local_280 = 1.0;
    pTVar9 = TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_100,&ADEnvelopeVertexNames::InputAttackCurveName,
                        &FDataVertexMetadata::EmptyBasic,&local_280);
    local_27c = 1.0;
    pTVar10 = TInputDataVertex<Metasound::FTime>::TInputDataVertex<Metasound::FTime><float>
                        (&local_138,&ADEnvelopeVertexNames::InputDecayTimeName,
                         &FDataVertexMetadata::EmptyBasic,&local_27c);
    local_278[0] = 0.01;
    pTVar11 = TInputDataVertex<Metasound::FTime>::TInputDataVertex<Metasound::FTime><float>
                        (&local_170,&ADEnvelopeVertexNames::InputAttackTimeName,
                         &FDataVertexMetadata::EmptyBasic,local_278);
    pTVar12 = TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                        (&local_1a8,&ADEnvelopeVertexNames::InputTriggerName,
                         &FDataVertexMetadata::EmptyBasic);
    pFVar13 = FInputVertexInterface::
              FInputVertexInterface<Metasound::TInputDataVertex<Metasound::FTrigger>,Metasound::TInputDataVertex<Metasound::FTime>,Metasound::TInputDataVertex<Metasound::FTime>,Metasound::TInputDataVertex<float>,Metasound::TInputDataVertex<float>,Metasound::TInputDataVertex<bool>,Metasound::TInputDataVertex<bool>_>
                        (&local_250,pTVar12,pTVar11,pTVar10,pTVar9,pTVar8,pTVar7,pTVar6);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TADEnvelopeNodeOperator<float>::GetDefaultInterface(void)'
                ::__l2::DefaultInterface,pFVar13,&local_270);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_250.SubInterfaces.AllocatorInstance.Data,
               local_250.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_250.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_250.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_250._padding_,(int)local_250._padding_);
    if ((FInputDataVertex *)local_250._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_250._padding_);
    }
    if ((0xc < (byte)local_1a8._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_1a8._48_1_])(&local_1a8.field_0x20);
    if ((0xc < (byte)local_170._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_170._48_1_])(&local_170.field_0x20);
    if ((0xc < (byte)local_138._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_138._48_1_])(&local_138.field_0x20);
    if ((0xc < (byte)local_100._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_100._48_1_])(&local_100.field_0x20);
    if ((0xc < (byte)local_c8._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_c8._48_1_])(&local_c8.field_0x20);
    if ((0xc < (byte)local_90._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_90._48_1_])(&local_90.field_0x20);
    if ((0xc < (byte)local_58._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_58._48_1_])(&local_58.field_0x20);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_270.SubInterfaces.AllocatorInstance.Data,
               local_270.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_270.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_270.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_270._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_270._padding_);
    }
    atexit(`Metasound::TADEnvelopeNodeOperator<float>::GetDefaultInterface'::__l2::
           _dynamic_atexit_destructor_for__DefaultInterface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TADEnvelopeNodeOperator<float>::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TADEnvelopeNodeOperator<float>::GetDefaultInterface(void)'
          ::__l2::DefaultInterface;
}

// GetDefaultInterface @ 14b022320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::TADEnvelopeNodeOperator<Metasound::FAudioBuffer>::GetDefaultInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar3;
  TOutputDataVertex<Metasound::FTrigger> *pTVar4;
  TOutputDataVertex<Metasound::FTrigger> *pTVar5;
  TInputDataVertex<bool> *pTVar6;
  TInputDataVertex<bool> *pTVar7;
  TInputDataVertex<float> *pTVar8;
  TInputDataVertex<float> *pTVar9;
  TInputDataVertex<Metasound::FTime> *pTVar10;
  TInputDataVertex<Metasound::FTime> *pTVar11;
  TInputDataVertex<Metasound::FTrigger> *pTVar12;
  FInputVertexInterface *pFVar13;
  FVertexInterface *pFVar14;
  undefined1 auStackY_2c8 [32];
  bool local_288;
  bool local_287 [3];
  float local_284;
  float local_280;
  float local_27c;
  float local_278 [2];
  FOutputVertexInterface local_270;
  FInputVertexInterface local_250;
  FOutputVertexInterfaceDeclarationBuilder local_230;
  TOutputDataVertex<Metasound::FAudioBuffer> local_208;
  TOutputDataVertex<Metasound::FTrigger> local_1e8;
  TOutputDataVertex<Metasound::FTrigger> local_1c8;
  TInputDataVertex<Metasound::FTrigger> local_1a8;
  TInputDataVertex<Metasound::FTime> local_170;
  TInputDataVertex<Metasound::FTime> local_138;
  TInputDataVertex<float> local_100;
  TInputDataVertex<float> local_c8;
  TInputDataVertex<bool> local_90;
  TInputDataVertex<bool> local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TADEnvelopeNodeOperator<Metasound::FAudioBuffer>::GetDefaultInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TADEnvelopeNodeOperator<Metasound::FAudioBuffer>::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TADEnvelopeNodeOperator<Metasound::FAudioBuffer>::GetDefaultInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pTVar3 = TOutputDataVertex<Metasound::FAudioBuffer>::
             TOutputDataVertex<Metasound::FAudioBuffer><>
                       (&local_208,&ADEnvelopeVertexNames::OutputEnvelopeValueName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar4 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_1e8,&ADEnvelopeVertexNames::OutputOnDoneName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar5 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_1c8,&ADEnvelopeVertexNames::OutputOnTriggerName,
                        &FDataVertexMetadata::EmptyBasic);
    FOutputVertexInterface::FOutputVertexInterface(&local_270);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_230,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_270,
               &local_270.SubInterfaces);
    if ((local_230.Vertices)->ArrayMax < 3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,3,&(local_230.Vertices)->AllocatorInstance,(local_230.Vertices)->ArrayNum,
                 &(local_230.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_230,(FOutputDataVertex *)pTVar5);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_230,(FOutputDataVertex *)pTVar4);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_230,(FOutputDataVertex *)pTVar3);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_230);
    local_288 = false;
    pTVar6 = TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                       (&local_58,&ADEnvelopeVertexNames::InputHardResetName,
                        &FDataVertexMetadata::EmptyBasic,&local_288);
    local_287[0] = false;
    pTVar7 = TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                       (&local_90,&ADEnvelopeVertexNames::InputLoopingName,
                        &FDataVertexMetadata::EmptyBasic,local_287);
    local_284 = 1.0;
    pTVar8 = TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_c8,&ADEnvelopeVertexNames::InputDecayCurveName,
                        &FDataVertexMetadata::EmptyBasic,&local_284);
    local_280 = 1.0;
    pTVar9 = TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_100,&ADEnvelopeVertexNames::InputAttackCurveName,
                        &FDataVertexMetadata::EmptyBasic,&local_280);
    local_27c = 1.0;
    pTVar10 = TInputDataVertex<Metasound::FTime>::TInputDataVertex<Metasound::FTime><float>
                        (&local_138,&ADEnvelopeVertexNames::InputDecayTimeName,
                         &FDataVertexMetadata::EmptyBasic,&local_27c);
    local_278[0] = 0.01;
    pTVar11 = TInputDataVertex<Metasound::FTime>::TInputDataVertex<Metasound::FTime><float>
                        (&local_170,&ADEnvelopeVertexNames::InputAttackTimeName,
                         &FDataVertexMetadata::EmptyBasic,local_278);
    pTVar12 = TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                        (&local_1a8,&ADEnvelopeVertexNames::InputTriggerName,
                         &FDataVertexMetadata::EmptyBasic);
    pFVar13 = FInputVertexInterface::
              FInputVertexInterface<Metasound::TInputDataVertex<Metasound::FTrigger>,Metasound::TInputDataVertex<Metasound::FTime>,Metasound::TInputDataVertex<Metasound::FTime>,Metasound::TInputDataVertex<float>,Metasound::TInputDataVertex<float>,Metasound::TInputDataVertex<bool>,Metasound::TInputDataVertex<bool>_>
                        (&local_250,pTVar12,pTVar11,pTVar10,pTVar9,pTVar8,pTVar7,pTVar6);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TADEnvelopeNodeOperator<Metasound::FAudioBuffer>::GetDefaultInterface(void)'
                ::__l2::DefaultInterface,pFVar13,&local_270);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_250.SubInterfaces.AllocatorInstance.Data,
               local_250.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_250.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_250.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_250._padding_,(int)local_250._padding_);
    if ((FInputDataVertex *)local_250._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_250._padding_);
    }
    if ((0xc < (byte)local_1a8._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_1a8._48_1_])(&local_1a8.field_0x20);
    if ((0xc < (byte)local_170._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_170._48_1_])(&local_170.field_0x20);
    if ((0xc < (byte)local_138._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_138._48_1_])(&local_138.field_0x20);
    if ((0xc < (byte)local_100._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_100._48_1_])(&local_100.field_0x20);
    if ((0xc < (byte)local_c8._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_c8._48_1_])(&local_c8.field_0x20);
    if ((0xc < (byte)local_90._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_90._48_1_])(&local_90.field_0x20);
    if ((0xc < (byte)local_58._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_58._48_1_])(&local_58.field_0x20);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_270.SubInterfaces.AllocatorInstance.Data,
               local_270.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_270.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_270.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_270._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_270._padding_);
    }
    atexit(`Metasound::TADEnvelopeNodeOperator<Metasound::FAudioBuffer>::GetDefaultInterface'::__l2
           ::_dynamic_atexit_destructor_for__DefaultInterface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TADEnvelopeNodeOperator<Metasound::FAudioBuffer>::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TADEnvelopeNodeOperator<Metasound::FAudioBuffer>::GetDefaultInterface(void)'
          ::__l2::DefaultInterface;
}

// GetNodeInfo @ 14b026120

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TADEnvelopeNodeOperator<float>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TADEnvelopeNodeOperator<float>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TADEnvelopeNodeOperator<float>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TADEnvelopeNodeOperator<float>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TADEnvelopeNodeOperator<float>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TADEnvelopeNodeOperator<float>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::TADEnvelopeNodeOperator<float>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TADEnvelopeNodeOperator<float>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TADEnvelopeNodeOperator<float>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TADEnvelopeNodeOperator<float>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b0261b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TADEnvelopeNodeOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TADEnvelopeNodeOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TADEnvelopeNodeOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TADEnvelopeNodeOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TADEnvelopeNodeOperator<Metasound::FAudioBuffer>::GetNodeInfo'::__l2::<lambda_1>::
      operator()(local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TADEnvelopeNodeOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::TADEnvelopeNodeOperator<Metasound::FAudioBuffer>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TADEnvelopeNodeOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TADEnvelopeNodeOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TADEnvelopeNodeOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// Reset @ 14b02eed0

void __thiscall
Metasound::TADEnvelopeNodeOperator<float>::Reset
          (TADEnvelopeNodeOperator<float> *this,FResetParams *param_1)

{
  FTrigger *this_00;
  float fVar1;
  
  this->NumFramesPerBlock = param_1->OperatorSettings->NumFramesPerBlock;
  fVar1 = FOperatorSettings::GetActualBlockRate(param_1->OperatorSettings);
  this_00 = *(FTrigger **)&(this->OnAttackTrigger).field_0x8;
  this->SampleRate = fVar1;
  FTrigger::Reset(this_00);
  FTrigger::Reset(*(FTrigger **)&(this->OnDone).field_0x8);
  **(undefined4 **)&(this->OutputEnvelope).field_0x8 = 0;
  (this->EnvState).CurrentSampleIndex = -1;
  (this->EnvState).AttackSampleCount = 1;
  (this->EnvState).DecaySampleCount = 1;
  (this->EnvState).AttackCurveFactor = 0.0;
  (this->EnvState).DecayCurveFactor = 0.0;
  (this->EnvState).EnvEase.CurrentValue = 0.0;
  (this->EnvState).StartingEnvelopeValue = 0.0;
  (this->EnvState).CurrentEnvelopeValue = 0.0;
  (this->EnvState).bLooping = false;
  (this->EnvState).bHardReset = false;
  (this->EnvState).EnvEase.TargetValue = 0.0;
  (this->EnvState).EnvEase.EaseFactor = 0.01;
  (this->EnvState).EnvEase.OneMinusEase = 0.99;
  (this->EnvState).EnvEase.EaseTimesTarget = 0.0;
  return;
}

// Reset @ 14b02ef80

void __thiscall
Metasound::TADEnvelopeNodeOperator<Metasound::FAudioBuffer>::Reset
          (TADEnvelopeNodeOperator<Metasound::FAudioBuffer> *this,FResetParams *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  this->NumFramesPerBlock = param_1->OperatorSettings->NumFramesPerBlock;
  this->SampleRate = (float)param_1->OperatorSettings->SampleRate;
  FTrigger::Reset(*(FTrigger **)&(this->OnAttackTrigger).field_0x8);
  FTrigger::Reset(*(FTrigger **)&(this->OnDone).field_0x8);
  puVar2 = *(undefined8 **)&(this->OutputEnvelope).field_0x8;
  iVar1 = *(int *)(puVar2 + 1);
  if (0 < iVar1) {
    memset((void *)*puVar2,0,(longlong)iVar1 << 2);
  }
  (this->EnvState).CurrentSampleIndex = -1;
  (this->EnvState).DecayCurveFactor = 0.0;
  (this->EnvState).EnvEase.CurrentValue = 0.0;
  (this->EnvState).StartingEnvelopeValue = 0.0;
  (this->EnvState).CurrentEnvelopeValue = 0.0;
  (this->EnvState).bLooping = false;
  (this->EnvState).bHardReset = false;
  (this->EnvState).EnvEase.TargetValue = 0.0;
  (this->EnvState).AttackSampleCount = 1;
  (this->EnvState).DecaySampleCount = 1;
  (this->EnvState).AttackCurveFactor = 0.0;
  (this->EnvState).EnvEase.EaseFactor = 0.01;
  (this->EnvState).EnvEase.OneMinusEase = 0.99;
  (this->EnvState).EnvEase.EaseTimesTarget = 0.0;
  return;
}

// UpdateParams @ 14b0340f0

void __thiscall
Metasound::TADEnvelopeNodeOperator<float>::UpdateParams(TADEnvelopeNodeOperator<float> *this)

{
  float *pfVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = (float)**(double **)&(this->AttackTime).field_0x8 * this->SampleRate;
  fVar6 = this->SampleRate * (float)**(double **)&(this->DecayTime).field_0x8;
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  iVar4 = (int)fVar5;
  (this->EnvState).AttackSampleCount = iVar4;
  fVar5 = (float)(iVar4 == 0);
  if ((float)(iVar4 == 0) <= fVar6) {
    fVar5 = fVar6;
  }
  (this->EnvState).DecaySampleCount = (int)fVar5;
  fVar5 = **(float **)&(this->AttackCurveFactor).field_0x8;
  pfVar1 = *(float **)&(this->DecayCurveFactor).field_0x8;
  if (fVar5 <= __real_38d1b717) {
    fVar5 = __real_38d1b717;
  }
  (this->EnvState).AttackCurveFactor = fVar5;
  fVar5 = *pfVar1;
  puVar2 = *(undefined1 **)&(this->bLooping).field_0x8;
  if (fVar5 <= __real_38d1b717) {
    fVar5 = __real_38d1b717;
  }
  (this->EnvState).DecayCurveFactor = fVar5;
  puVar3 = *(undefined1 **)&(this->bHardReset).field_0x8;
  (this->EnvState).bLooping = (bool)*puVar2;
  (this->EnvState).bHardReset = (bool)*puVar3;
  if (iVar4 == 0) {
    (this->EnvState).CurrentEnvelopeValue = 1.0;
  }
  return;
}

// UpdateParams @ 14b0341c0

void __thiscall
Metasound::TADEnvelopeNodeOperator<Metasound::FAudioBuffer>::UpdateParams
          (TADEnvelopeNodeOperator<Metasound::FAudioBuffer> *this)

{
  float *pfVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = (float)**(double **)&(this->AttackTime).field_0x8 * this->SampleRate;
  fVar6 = this->SampleRate * (float)**(double **)&(this->DecayTime).field_0x8;
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  iVar4 = (int)fVar5;
  (this->EnvState).AttackSampleCount = iVar4;
  fVar5 = (float)(iVar4 == 0);
  if ((float)(iVar4 == 0) <= fVar6) {
    fVar5 = fVar6;
  }
  (this->EnvState).DecaySampleCount = (int)fVar5;
  fVar5 = **(float **)&(this->AttackCurveFactor).field_0x8;
  pfVar1 = *(float **)&(this->DecayCurveFactor).field_0x8;
  if (fVar5 <= __real_38d1b717) {
    fVar5 = __real_38d1b717;
  }
  (this->EnvState).AttackCurveFactor = fVar5;
  fVar5 = *pfVar1;
  puVar2 = *(undefined1 **)&(this->bLooping).field_0x8;
  if (fVar5 <= __real_38d1b717) {
    fVar5 = __real_38d1b717;
  }
  (this->EnvState).DecayCurveFactor = fVar5;
  puVar3 = *(undefined1 **)&(this->bHardReset).field_0x8;
  (this->EnvState).bLooping = (bool)*puVar2;
  (this->EnvState).bHardReset = (bool)*puVar3;
  if (iVar4 == 0) {
    (this->EnvState).CurrentEnvelopeValue = 1.0;
  }
  return;
}

