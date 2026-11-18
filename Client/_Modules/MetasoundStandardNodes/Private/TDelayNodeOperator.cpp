// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 18

// BindInputs @ 14b038c80

void __thiscall
Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>::BindInputs
          (TDelayNodeOperator<Metasound::FAudioBuffer> *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8 [2];
  TDataReadReference<Metasound::FAudioBuffer> *local_res18;
  TDataReadReference<Metasound::FAudioBuffer> **local_res20;
  undefined1 local_58 [16];
  code *local_48;
  TDataReadReference<Metasound::FAudioBuffer> **local_40;
  undefined1 local_38 [16];
  
  FLazyName::Resolve(&DelayNodePrivate::InParamAudioInputName);
  local_res18 = &this->AudioInput;
  local_40 = &local_res18;
  local_58._0_8_ = local_res8;
  local_38._8_8_ = local_58;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_58._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&DelayNodePrivate::InParamDelayTimeName);
  local_res18 = &this->DelayTime;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_40 = &local_res18;
  local_38._0_8_ = local_res8;
  local_58._8_8_ = local_38;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&DelayNodePrivate::InParamDryLevelName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->DryLevel;
  local_40 = &local_res18;
  local_38._0_8_ = local_res8;
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
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&DelayNodePrivate::InParamWetLevelName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->WetLevel;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_40 = &local_res18;
  local_38._0_8_ = local_res8;
  local_58._8_8_ = local_38;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&DelayNodePrivate::InParamFeedbackAmountName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->Feedback;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_40 = &local_res18;
  local_38._0_8_ = local_res8;
  local_58._8_8_ = local_38;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)(double)this->MaxDelayTimeSeconds;
  FLazyName::Resolve(&DelayNodePrivate::InParamMaxDelayTimeName);
  local_58._0_8_ = local_res8;
  local_res20 = &local_res18;
  local_38._8_8_ = &local_res20;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::SetValue<Metasound::FTime>'::__l2::<lambda_2>,void,Metasound::VertexDataPrivate::FInputBinding_&>
       ::Call;
  local_40 = (TDataReadReference<Metasound::FAudioBuffer> **)local_58;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::SetValue<Metasound::FTime>'::__l2::<lambda_1>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)local_38);
  FLazyName::Resolve(&DelayNodePrivate::InputResetDelayName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->TriggerReset;
  local_40 = &local_res18;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_58._8_8_ = local_38;
  local_38._0_8_ = local_res8;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  return;
}

// BindOutputs @ 14b038f20

void __thiscall
Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>::BindOutputs
          (TDelayNodeOperator<Metasound::FAudioBuffer> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FAudioBuffer> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FAudioBuffer> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FAudioBuffer> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&DelayNodePrivate::OutParamAudioName);
  local_res18[0] = &this->AudioOutput;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b039350

void __thiscall
Metasound::TDelayNodeOperator<Metasound::FTime>::BindInputs
          (TDelayNodeOperator<Metasound::FTime> *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8 [2];
  TDataReadReference<Metasound::FAudioBuffer> *local_res18;
  TDataReadReference<Metasound::FAudioBuffer> **local_res20;
  undefined1 local_58 [16];
  code *local_48;
  TDataReadReference<Metasound::FAudioBuffer> **local_40;
  undefined1 local_38 [16];
  
  FLazyName::Resolve(&DelayNodePrivate::InParamAudioInputName);
  local_res18 = &this->AudioInput;
  local_40 = &local_res18;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_58;
  local_58._0_8_ = local_res8;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_58._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&DelayNodePrivate::InParamDelayTimeName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->DelayTime;
  local_40 = &local_res18;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTime>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_58._8_8_ = local_38;
  local_38._0_8_ = local_res8;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTime>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&DelayNodePrivate::InParamDryLevelName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->DryLevel;
  local_40 = &local_res18;
  local_38._0_8_ = local_res8;
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
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&DelayNodePrivate::InParamWetLevelName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->WetLevel;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_40 = &local_res18;
  local_38._0_8_ = local_res8;
  local_58._8_8_ = local_38;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&DelayNodePrivate::InParamFeedbackAmountName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->Feedback;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_40 = &local_res18;
  local_38._0_8_ = local_res8;
  local_58._8_8_ = local_38;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)(double)this->MaxDelayTimeSeconds;
  FLazyName::Resolve(&DelayNodePrivate::InParamMaxDelayTimeName);
  local_58._0_8_ = local_res8;
  local_res20 = &local_res18;
  local_38._8_8_ = &local_res20;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::SetValue<Metasound::FTime>'::__l2::<lambda_2>,void,Metasound::VertexDataPrivate::FInputBinding_&>
       ::Call;
  local_40 = (TDataReadReference<Metasound::FAudioBuffer> **)local_58;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::SetValue<Metasound::FTime>'::__l2::<lambda_1>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)local_38);
  FLazyName::Resolve(&DelayNodePrivate::InputResetDelayName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->TriggerReset;
  local_40 = &local_res18;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_58._8_8_ = local_38;
  local_38._0_8_ = local_res8;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  return;
}

// BindOutputs @ 14b039600

void __thiscall
Metasound::TDelayNodeOperator<Metasound::FTime>::BindOutputs
          (TDelayNodeOperator<Metasound::FTime> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FAudioBuffer> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FAudioBuffer> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FAudioBuffer> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&DelayNodePrivate::OutParamAudioName);
  local_res18[0] = &this->AudioOutput;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// ~TDelayNodeOperator<Metasound::FAudioBuffer> @ 14b053f20

void __thiscall
Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>::~TDelayNodeOperator<Metasound::FAudioBuffer>
          (TDelayNodeOperator<Metasound::FAudioBuffer> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerReset).field_0x10);
  Audio::FDelay::~FDelay(&this->DelayBuffer);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->AudioOutput).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Feedback).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->WetLevel).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->DryLevel).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->DelayTime).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->AudioInput).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TDelayNodeOperator<Metasound::FTime> @ 14b053fa0

void __thiscall
Metasound::TDelayNodeOperator<Metasound::FTime>::~TDelayNodeOperator<Metasound::FTime>
          (TDelayNodeOperator<Metasound::FTime> *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerReset).field_0x10);
  Audio::FDelay::~FDelay(&this->DelayBuffer);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->AudioOutput).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Feedback).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->WetLevel).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->DryLevel).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->DelayTime).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->AudioInput).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// operator() @ 14b0595e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  ForAnyElementType _Src;
  FVertexInterface *pFVar1;
  FText *pFVar2;
  FText *pFVar3;
  longlong lVar4;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FNodeClassName local_138;
  FString local_118;
  TArray<FText,TSizedDefaultAllocator<32>_> local_108;
  FNodeDisplayStyle local_f8;
  TArray<FText,TSizedDefaultAllocator<32>_> local_e8;
  FText local_d8;
  FText local_c8;
  FNodeClassName local_b8;
  FText local_a0;
  FText local_90;
  FVertexInterface local_80;
  
  local_138.Namespace.ComparisonIndex.Value = 0;
  local_138.Namespace.Number = 0;
  local_138.Name.ComparisonIndex.Value = 0x1010101;
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 0;
  local_d8.TextData.Reference = Metasound::NodeCategories::Delays.TextData.Reference;
  if (Metasound::NodeCategories::Delays.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::NodeCategories::Delays.TextData.Reference + 8))
              (Metasound::NodeCategories::Delays.TextData.Reference,&local_res10);
  }
  local_d8.Flags = Metasound::NodeCategories::Delays.Flags;
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_108.AllocatorInstance,1,&local_108.ArrayMax);
  ConstructItems<FText,FText,int>(local_108.AllocatorInstance.Data,&local_d8,1);
  pFVar1 = Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>::GetDefaultInterface();
  pFVar1 = Metasound::FVertexInterface::FVertexInterface(&local_80,pFVar1);
  local_c8.TextData.Reference = Metasound::PluginNodeMissingPrompt.TextData.Reference;
  if (Metasound::PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::PluginNodeMissingPrompt.TextData.Reference + 8))
              (Metasound::PluginNodeMissingPrompt.TextData.Reference,&local_res10);
  }
  _Src.Data = Metasound::PluginAuthor.Data.AllocatorInstance.Data;
  lVar4 = (longlong)Metasound::PluginAuthor.Data.ArrayNum;
  local_c8.Flags = Metasound::PluginNodeMissingPrompt.Flags;
  local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.Data.ArrayNum = Metasound::PluginAuthor.Data.ArrayNum;
  if (Metasound::PluginAuthor.Data.ArrayNum == 0) {
    local_118.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,Metasound::PluginAuthor.Data.ArrayNum,0,(ForAnyElementType *)&local_118,
               Metasound::PluginAuthor.Data.ArrayNum,&local_118.Data.ArrayMax);
    memcpy(local_118.Data.AllocatorInstance.Data,_Src.Data,lVar4 * 2);
  }
  pFVar2 = FText::FText(&local_a0);
  pFVar3 = FText::FText(&local_90);
  ::FName::FName(&local_res18,L"Delay");
  ::FName::FName(&local_res20,"Delay");
  ::FName::FName(&local_res10,"AudioBufferDelayTime");
  Metasound::FNodeClassName::FNodeClassName(&local_b8,&local_res20,&local_res18,&local_res10);
  local_f8.bShowName = (bool)(undefined1)local_138.Name.ComparisonIndex.Value;
  local_f8.bShowInputNames = (bool)local_138.Name.ComparisonIndex.Value._1_1_;
  local_f8.bShowOutputNames = (bool)local_138.Name.ComparisonIndex.Value._2_1_;
  local_f8.bShowLiterals = (bool)local_138.Name.ComparisonIndex.Value._3_1_;
  local_f8.ImageName = local_138.Namespace;
  local_138.Namespace = local_b8.Namespace;
  local_138.Name = local_b8.Name;
  local_138.Variant = local_b8.Variant;
  Metasound::FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,&local_138,1,1,pFVar3,pFVar2,&local_118,&local_c8,pFVar1,
             &local_108,&local_e8,&local_f8);
  if (local_d8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// operator() @ 14b059840

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TDelayNodeOperator<Metasound::FTime>::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  ForAnyElementType _Src;
  FVertexInterface *pFVar1;
  FText *pFVar2;
  FText *pFVar3;
  longlong lVar4;
  undefined1 local_res10 [8];
  FName local_res18 [2];
  FNodeClassName local_138;
  FString local_118;
  TArray<FText,TSizedDefaultAllocator<32>_> local_108;
  FNodeDisplayStyle local_f8;
  TArray<FText,TSizedDefaultAllocator<32>_> local_e8;
  FText local_d8;
  FText local_c8;
  FNodeClassName local_b8;
  FText local_a0;
  FText local_90;
  FVertexInterface local_80;
  
  local_138.Namespace.ComparisonIndex.Value = 0;
  local_138.Namespace.Number = 0;
  local_138.Name.ComparisonIndex.Value = 0x1010101;
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 0;
  local_d8.TextData.Reference = Metasound::NodeCategories::Delays.TextData.Reference;
  if (Metasound::NodeCategories::Delays.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::NodeCategories::Delays.TextData.Reference + 8))
              (Metasound::NodeCategories::Delays.TextData.Reference,local_res10);
  }
  local_d8.Flags = Metasound::NodeCategories::Delays.Flags;
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_108.AllocatorInstance,1,&local_108.ArrayMax);
  ConstructItems<FText,FText,int>(local_108.AllocatorInstance.Data,&local_d8,1);
  pFVar1 = Metasound::TDelayNodeOperator<Metasound::FTime>::GetDefaultInterface();
  pFVar1 = Metasound::FVertexInterface::FVertexInterface(&local_80,pFVar1);
  local_c8.TextData.Reference = Metasound::PluginNodeMissingPrompt.TextData.Reference;
  if (Metasound::PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::PluginNodeMissingPrompt.TextData.Reference + 8))
              (Metasound::PluginNodeMissingPrompt.TextData.Reference,local_res10);
  }
  _Src.Data = Metasound::PluginAuthor.Data.AllocatorInstance.Data;
  lVar4 = (longlong)Metasound::PluginAuthor.Data.ArrayNum;
  local_c8.Flags = Metasound::PluginNodeMissingPrompt.Flags;
  local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.Data.ArrayNum = Metasound::PluginAuthor.Data.ArrayNum;
  if (Metasound::PluginAuthor.Data.ArrayNum == 0) {
    local_118.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,Metasound::PluginAuthor.Data.ArrayNum,0,(ForAnyElementType *)&local_118,
               Metasound::PluginAuthor.Data.ArrayNum,&local_118.Data.ArrayMax);
    memcpy(local_118.Data.AllocatorInstance.Data,_Src.Data,lVar4 * 2);
  }
  pFVar2 = FText::FText(&local_a0);
  pFVar3 = FText::FText(&local_90);
  ::FName::FName(local_res18,L"Delay");
  Metasound::FNodeClassName::FNodeClassName
            (&local_b8,&Metasound::StandardNodes::Namespace,local_res18,
             &Metasound::StandardNodes::AudioVariant);
  local_f8.ImageName = local_138.Namespace;
  local_f8.bShowName = (bool)(undefined1)local_138.Name.ComparisonIndex.Value;
  local_f8.bShowInputNames = (bool)local_138.Name.ComparisonIndex.Value._1_1_;
  local_f8.bShowOutputNames = (bool)local_138.Name.ComparisonIndex.Value._2_1_;
  local_f8.bShowLiterals = (bool)local_138.Name.ComparisonIndex.Value._3_1_;
  local_138.Namespace = local_b8.Namespace;
  local_138.Name = local_b8.Name;
  local_138.Variant = local_b8.Variant;
  Metasound::FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,&local_138,1,1,pFVar3,pFVar2,&local_118,&local_c8,pFVar1,
             &local_108,&local_e8,&local_f8);
  if (local_d8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// CreateOperator @ 14b064e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  int iVar1;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar2;
  FInputVertexInterfaceData *this_00;
  FLiteral *pFVar3;
  int *piVar4;
  code *pcVar5;
  FBuildOperatorParams *pFVar6;
  bool bVar7;
  FInputBinding *pFVar8;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar9;
  INode *pIVar10;
  float fVar11;
  undefined1 auStack_198 [32];
  double local_178;
  FBuildResults *local_170;
  FName local_168;
  FName local_160;
  FName local_158;
  FName local_150;
  FName local_148;
  FName local_140;
  FName local_138;
  FBuildOperatorParams *local_130;
  undefined1 local_128 [16];
  INode local_118;
  undefined1 local_108 [16];
  INode local_f8;
  undefined1 local_e8 [16];
  INode local_d8;
  undefined1 local_c8 [16];
  INode local_b8;
  undefined1 local_a8 [16];
  INode local_98;
  undefined1 local_88 [16];
  INode local_78;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_68;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_198;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  local_170 = param_2;
  local_130 = param_1;
  FLazyName::Resolve(&DelayNodePrivate::InParamAudioInputName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>
            (this,(TDataReadReference<Metasound::FAudioBuffer> *)local_108,&local_168,pFVar2);
  this_00 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&DelayNodePrivate::InParamDelayTimeName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>
            (this_00,(TDataReadReference<Metasound::FAudioBuffer> *)local_e8,&local_160,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&DelayNodePrivate::InParamDryLevelName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_c8,&local_158,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&DelayNodePrivate::InParamWetLevelName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_a8,&local_150,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&DelayNodePrivate::InParamFeedbackAmountName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_88,&local_148,pFVar2);
  pFVar3 = *(FLiteral **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&DelayNodePrivate::InParamMaxDelayTimeName);
  pFVar8 = FInputVertexInterfaceData::FindChecked(this,&local_140);
  if ((pFVar8->Data).bIsSet == false) {
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_68,&(pFVar8->Vertex).Literal.Value);
    TDataLiteralFactory<Metasound::FTime,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::FTime>_>
    ::CreateExplicitArgs((FOperatorSettings *)&local_178,pFVar3);
    if (0xc < local_68.TypeIndex) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        TVar9.Ptr = (IOperator *)(*pcVar5)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar9.Ptr;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_68.TypeIndex])(&local_68);
  }
  else {
    if ((pFVar8->Data).bIsSet == false) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        TVar9.Ptr = (IOperator *)(*pcVar5)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar9.Ptr;
      }
    }
    FAnyDataReference::GetAs<Metasound::FTime>(&(pFVar8->Data).TypedValue);
  }
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&DelayNodePrivate::InputResetDelayName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_128,&local_138,pFVar2);
  pIVar10 = ::operator_new(0x150);
  if (pIVar10 == (INode *)0x0) {
    pIVar10 = (INode *)0x0;
  }
  else {
    *pIVar10 = (INode)&___7__TDelayNodeOperator_VFAudioBuffer_Metasound___Metasound__6B_;
    pIVar10[1] = (INode)&___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
    pIVar10[2] = (INode)local_108._8_8_;
    pIVar10[3] = local_f8;
    if (local_f8 != (INode)0x0) {
      *(int *)((longlong)local_f8 + 8) = *(int *)((longlong)local_f8 + 8) + 1;
    }
    pIVar10[1] = (INode)&___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
    pIVar10[5] = (INode)&___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
    pIVar10[6] = (INode)local_e8._8_8_;
    pIVar10[7] = local_d8;
    if (local_d8 != (INode)0x0) {
      *(int *)((longlong)local_d8 + 8) = *(int *)((longlong)local_d8 + 8) + 1;
    }
    pIVar10[5] = (INode)&___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
    pIVar10[9] = (INode)&___7__TDataReference_M_Metasound__6B_;
    pIVar10[10] = (INode)local_c8._8_8_;
    pIVar10[0xb] = local_b8;
    if (local_b8 != (INode)0x0) {
      *(int *)((longlong)local_b8 + 8) = *(int *)((longlong)local_b8 + 8) + 1;
    }
    pIVar10[9] = (INode)&___7__TDataReadReference_M_Metasound__6B_;
    pIVar10[0xd] = (INode)&___7__TDataReference_M_Metasound__6B_;
    pIVar10[0xe] = (INode)local_a8._8_8_;
    pIVar10[0xf] = local_98;
    if (local_98 != (INode)0x0) {
      *(int *)((longlong)local_98 + 8) = *(int *)((longlong)local_98 + 8) + 1;
    }
    pIVar10[0xd] = (INode)&___7__TDataReadReference_M_Metasound__6B_;
    pIVar10[0x11] = (INode)&___7__TDataReference_M_Metasound__6B_;
    pIVar10[0x12] = (INode)local_88._8_8_;
    pIVar10[0x13] = local_78;
    if (local_78 != (INode)0x0) {
      *(int *)((longlong)local_78 + 8) = *(int *)((longlong)local_78 + 8) + 1;
    }
    pIVar10[0x11] = (INode)&___7__TDataReadReference_M_Metasound__6B_;
    TDataReference<Metasound::FAudioBuffer>::
    TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
              ((TDataReference<Metasound::FAudioBuffer> *)(pIVar10 + 0x15),NewObject,
               *(FOperatorSettings **)&(local_170->Errors).ArrayNum);
    pIVar10[0x15] = (INode)&___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
    Audio::FDelay::FDelay((FDelay *)(pIVar10 + 0x19));
    *(undefined4 *)(pIVar10 + 0x24) = 0xbf800000;
    *(undefined4 *)&pIVar10[0x24].field_0x4 = 0;
    *(undefined4 *)(pIVar10 + 0x25) = 0x40a00000;
    pIVar10[0x26] = (INode)&___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    pIVar10[0x27] = (INode)local_128._8_8_;
    pIVar10[0x28] = local_118;
    if (local_118 != (INode)0x0) {
      *(int *)((longlong)local_118 + 8) = *(int *)((longlong)local_118 + 8) + 1;
    }
    fVar11 = (float)local_178;
    if (__real_447a0000 <= (float)local_178) {
      fVar11 = __real_447a0000;
    }
    pIVar10[0x26] = (INode)&___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    if (fVar11 <= __real_3a83126f) {
      fVar11 = __real_3a83126f;
    }
    *(float *)(pIVar10 + 0x25) = fVar11;
    piVar4 = *(int **)&(local_170->Errors).ArrayNum;
    *(undefined4 *)&pIVar10[0x24].field_0x4 = 0;
    *(undefined4 *)(pIVar10 + 0x24) = 0xbf800000;
    Audio::FDelay::Init((FDelay *)(pIVar10 + 0x19),(float)*piVar4,fVar11);
    iVar1 = *(int *)((longlong)pIVar10[0x16] + 8);
    if (0 < iVar1) {
      memset(*(void **)pIVar10[0x16],0,(longlong)iVar1 << 2);
    }
  }
  pFVar6 = local_130;
  local_130->Node = pIVar10;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_118);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_78);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_98);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_b8);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_d8);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_f8);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)(IOperator *)pFVar6
  ;
}

// CreateOperator @ 14b065270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TDelayNodeOperator<Metasound::FTime>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  int iVar1;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar2;
  FInputVertexInterfaceData *this_00;
  FLiteral *pFVar3;
  int *piVar4;
  code *pcVar5;
  FBuildOperatorParams *pFVar6;
  bool bVar7;
  FInputBinding *pFVar8;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar9;
  INode *pIVar10;
  float fVar11;
  undefined1 auStack_198 [32];
  double local_178;
  FBuildResults *local_170;
  FName local_168;
  FName local_160;
  FName local_158;
  FName local_150;
  FName local_148;
  FName local_140;
  FName local_138;
  FBuildOperatorParams *local_130;
  undefined1 local_128 [16];
  INode local_118;
  undefined1 local_108 [16];
  INode local_f8;
  undefined1 local_e8 [16];
  INode local_d8;
  undefined1 local_c8 [16];
  INode local_b8;
  undefined1 local_a8 [16];
  INode local_98;
  undefined1 local_88 [16];
  INode local_78;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_68;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_198;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  local_170 = param_2;
  local_130 = param_1;
  FLazyName::Resolve(&DelayNodePrivate::InParamAudioInputName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>
            (this,(TDataReadReference<Metasound::FAudioBuffer> *)local_108,&local_168,pFVar2);
  this_00 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&DelayNodePrivate::InParamDelayTimeName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTime>
            (this_00,(TDataReadReference<Metasound::FTime> *)local_e8,&local_160,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&DelayNodePrivate::InParamDryLevelName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_c8,&local_158,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&DelayNodePrivate::InParamWetLevelName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_a8,&local_150,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&DelayNodePrivate::InParamFeedbackAmountName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_88,&local_148,pFVar2);
  pFVar3 = *(FLiteral **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&DelayNodePrivate::InParamMaxDelayTimeName);
  pFVar8 = FInputVertexInterfaceData::FindChecked(this,&local_140);
  if ((pFVar8->Data).bIsSet == false) {
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_68,&(pFVar8->Vertex).Literal.Value);
    TDataLiteralFactory<Metasound::FTime,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::FTime>_>
    ::CreateExplicitArgs((FOperatorSettings *)&local_178,pFVar3);
    if (0xc < local_68.TypeIndex) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        TVar9.Ptr = (IOperator *)(*pcVar5)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar9.Ptr;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_68.TypeIndex])(&local_68);
  }
  else {
    if ((pFVar8->Data).bIsSet == false) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        TVar9.Ptr = (IOperator *)(*pcVar5)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar9.Ptr;
      }
    }
    FAnyDataReference::GetAs<Metasound::FTime>(&(pFVar8->Data).TypedValue);
  }
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&DelayNodePrivate::InputResetDelayName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_128,&local_138,pFVar2);
  pIVar10 = ::operator_new(0x150);
  if (pIVar10 == (INode *)0x0) {
    pIVar10 = (INode *)0x0;
  }
  else {
    *pIVar10 = (INode)&___7__TDelayNodeOperator_VFTime_Metasound___Metasound__6B_;
    pIVar10[1] = (INode)&___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
    pIVar10[2] = (INode)local_108._8_8_;
    pIVar10[3] = local_f8;
    if (local_f8 != (INode)0x0) {
      *(int *)((longlong)local_f8 + 8) = *(int *)((longlong)local_f8 + 8) + 1;
    }
    pIVar10[1] = (INode)&___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
    pIVar10[5] = (INode)&___7__TDataReference_VFTime_Metasound___Metasound__6B_;
    pIVar10[6] = (INode)local_e8._8_8_;
    pIVar10[7] = local_d8;
    if (local_d8 != (INode)0x0) {
      *(int *)((longlong)local_d8 + 8) = *(int *)((longlong)local_d8 + 8) + 1;
    }
    pIVar10[5] = (INode)&___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
    pIVar10[9] = (INode)&___7__TDataReference_M_Metasound__6B_;
    pIVar10[10] = (INode)local_c8._8_8_;
    pIVar10[0xb] = local_b8;
    if (local_b8 != (INode)0x0) {
      *(int *)((longlong)local_b8 + 8) = *(int *)((longlong)local_b8 + 8) + 1;
    }
    pIVar10[9] = (INode)&___7__TDataReadReference_M_Metasound__6B_;
    pIVar10[0xd] = (INode)&___7__TDataReference_M_Metasound__6B_;
    pIVar10[0xe] = (INode)local_a8._8_8_;
    pIVar10[0xf] = local_98;
    if (local_98 != (INode)0x0) {
      *(int *)((longlong)local_98 + 8) = *(int *)((longlong)local_98 + 8) + 1;
    }
    pIVar10[0xd] = (INode)&___7__TDataReadReference_M_Metasound__6B_;
    pIVar10[0x11] = (INode)&___7__TDataReference_M_Metasound__6B_;
    pIVar10[0x12] = (INode)local_88._8_8_;
    pIVar10[0x13] = local_78;
    if (local_78 != (INode)0x0) {
      *(int *)((longlong)local_78 + 8) = *(int *)((longlong)local_78 + 8) + 1;
    }
    pIVar10[0x11] = (INode)&___7__TDataReadReference_M_Metasound__6B_;
    TDataReference<Metasound::FAudioBuffer>::
    TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
              ((TDataReference<Metasound::FAudioBuffer> *)(pIVar10 + 0x15),NewObject,
               *(FOperatorSettings **)&(local_170->Errors).ArrayNum);
    pIVar10[0x15] = (INode)&___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
    Audio::FDelay::FDelay((FDelay *)(pIVar10 + 0x19));
    *(undefined4 *)(pIVar10 + 0x24) = 0xbf800000;
    *(undefined4 *)&pIVar10[0x24].field_0x4 = 0;
    *(undefined4 *)(pIVar10 + 0x25) = 0x40a00000;
    pIVar10[0x26] = (INode)&___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    pIVar10[0x27] = (INode)local_128._8_8_;
    pIVar10[0x28] = local_118;
    if (local_118 != (INode)0x0) {
      *(int *)((longlong)local_118 + 8) = *(int *)((longlong)local_118 + 8) + 1;
    }
    fVar11 = (float)local_178;
    if (__real_447a0000 <= (float)local_178) {
      fVar11 = __real_447a0000;
    }
    pIVar10[0x26] = (INode)&___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    if (fVar11 <= __real_3a83126f) {
      fVar11 = __real_3a83126f;
    }
    *(float *)(pIVar10 + 0x25) = fVar11;
    piVar4 = *(int **)&(local_170->Errors).ArrayNum;
    *(undefined4 *)&pIVar10[0x24].field_0x4 = 0;
    *(undefined4 *)(pIVar10 + 0x24) = 0xbf800000;
    Audio::FDelay::Init((FDelay *)(pIVar10 + 0x19),(float)*piVar4,fVar11);
    iVar1 = *(int *)((longlong)pIVar10[0x16] + 8);
    if (0 < iVar1) {
      memset(*(void **)pIVar10[0x16],0,(longlong)iVar1 << 2);
    }
  }
  pFVar6 = local_130;
  local_130->Node = pIVar10;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_118);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_78);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_98);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_b8);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_d8);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_f8);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)(IOperator *)pFVar6
  ;
}

// ExecuteInternal @ 14b06c780

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>::ExecuteInternal
          (TDelayNodeOperator<Metasound::FAudioBuffer> *this,int param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float *pfVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  plVar1 = *(longlong **)&(this->AudioInput).field_0x8;
  uVar7 = (ulonglong)param_1;
  if ((1 < (byte)LogMetaSound._0_1_) && ((int)plVar1[2] != (int)plVar1[1])) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  lVar2 = *plVar1;
  plVar1 = *(longlong **)&(this->AudioOutput).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && ((int)plVar1[2] != (int)plVar1[1])) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  lVar3 = *plVar1;
  if ((1 < (byte)LogMetaSound._0_1_) &&
     (lVar4 = *(longlong *)&(this->AudioInput).field_0x8,
     *(int *)(lVar4 + 0x10) != *(int *)(lVar4 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  fVar9 = __real_447a0000;
  fVar11 = **(float **)&(this->Feedback).field_0x8;
  if (__real_3f800000 <= fVar11) {
    fVar11 = __real_3f800000;
  }
  fVar12 = **(float **)&(this->DryLevel).field_0x8;
  if (__real_3f800000 <= fVar12) {
    fVar12 = __real_3f800000;
  }
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  fVar13 = **(float **)&(this->WetLevel).field_0x8;
  if (__real_3f800000 <= fVar13) {
    fVar13 = __real_3f800000;
  }
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  if (__real_322bcc77 < (float)((uint)fVar11 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    if (param_1 < param_2) {
      pfVar5 = (float *)(lVar2 + uVar7 * 4);
      do {
        iVar6 = (int)uVar7;
        if (iVar6 < 0) {
LAB_14b06ca49:
          fVar10 = 0.0;
        }
        else {
          lVar4 = *(longlong *)&(this->DelayTime).field_0x8;
          if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar4 + 0x10) != *(int *)(lVar4 + 8))) {
            UE::Logging::Private::BasicLog<2>
                      (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3
                        ::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
          }
          if (*(int *)(lVar4 + 8) <= iVar6) goto LAB_14b06ca49;
          plVar1 = *(longlong **)&(this->DelayTime).field_0x8;
          if ((1 < (byte)LogMetaSound._0_1_) && ((int)plVar1[2] != (int)plVar1[1])) {
            UE::Logging::Private::BasicLog<2>
                      (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                        ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
          }
          fVar10 = *(float *)((*plVar1 - lVar2) + (longlong)pfVar5);
        }
        if (this->MaxDelayTimeSeconds <= fVar10) {
          fVar10 = this->MaxDelayTimeSeconds;
        }
        if (fVar10 <= 0.0) {
          fVar10 = 0.0;
        }
        Audio::FDelay::SetDelayMsec(&this->DelayBuffer,fVar10 * fVar9);
        fVar10 = (float)(**(code **)((this->DelayBuffer)._padding_ + 8))
                                  (&this->DelayBuffer,fVar11 * this->FeedbackSample + *pfVar5);
        uVar7 = (ulonglong)(iVar6 + 1U);
        fVar10 = fVar12 * *pfVar5 + fVar10 * fVar13;
        *(float *)((lVar3 - lVar2) + (longlong)pfVar5) = fVar10;
        pfVar5 = pfVar5 + 1;
        this->FeedbackSample = fVar10;
      } while ((int)(iVar6 + 1U) < param_2);
    }
  }
  else {
    this->FeedbackSample = 0.0;
    fVar11 = __real_447a0000;
    if ((longlong)uVar7 < (longlong)param_2) {
      pfVar5 = (float *)(lVar2 + uVar7 * 4);
      uVar8 = uVar7;
      do {
        if ((longlong)uVar7 < 0) {
LAB_14b06c950:
          fVar9 = 0.0;
        }
        else {
          lVar4 = *(longlong *)&(this->DelayTime).field_0x8;
          if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar4 + 0x10) != *(int *)(lVar4 + 8))) {
            UE::Logging::Private::BasicLog<2>
                      (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3
                        ::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
          }
          if (*(int *)(lVar4 + 8) <= (int)uVar8) goto LAB_14b06c950;
          plVar1 = *(longlong **)&(this->DelayTime).field_0x8;
          if ((1 < (byte)LogMetaSound._0_1_) && ((int)plVar1[2] != (int)plVar1[1])) {
            UE::Logging::Private::BasicLog<2>
                      (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                        ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
          }
          fVar9 = *(float *)((longlong)pfVar5 + (*plVar1 - lVar2));
        }
        if (this->MaxDelayTimeSeconds <= fVar9) {
          fVar9 = this->MaxDelayTimeSeconds;
        }
        if (fVar9 <= 0.0) {
          fVar9 = 0.0;
        }
        Audio::FDelay::SetDelayMsec(&this->DelayBuffer,fVar9 * fVar11);
        fVar9 = (float)(**(code **)((this->DelayBuffer)._padding_ + 8))(&this->DelayBuffer,*pfVar5);
        uVar8 = (ulonglong)((int)uVar8 + 1);
        uVar7 = uVar7 + 1;
        *(float *)((lVar3 - lVar2) + (longlong)pfVar5) = fVar12 * *pfVar5 + fVar9 * fVar13;
        pfVar5 = pfVar5 + 1;
      } while ((longlong)uVar7 < (longlong)param_2);
    }
  }
  return;
}

// ExecuteInternal @ 14b06cb10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::TDelayNodeOperator<Metasound::FTime>::ExecuteInternal
          (TDelayNodeOperator<Metasound::FTime> *this,int param_1,int param_2)

{
  FDelay *this_00;
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float *pfVar5;
  longlong lVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  plVar1 = *(longlong **)&(this->AudioInput).field_0x8;
  lVar6 = (longlong)param_1;
  if ((1 < (byte)LogMetaSound._0_1_) && ((int)plVar1[2] != (int)plVar1[1])) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  lVar2 = *plVar1;
  plVar1 = *(longlong **)&(this->AudioOutput).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && ((int)plVar1[2] != (int)plVar1[1])) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  lVar3 = *plVar1;
  if ((1 < (byte)LogMetaSound._0_1_) &&
     (lVar4 = *(longlong *)&(this->AudioInput).field_0x8,
     *(int *)(lVar4 + 0x10) != *(int *)(lVar4 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  this_00 = &this->DelayBuffer;
  fVar8 = **(float **)&(this->Feedback).field_0x8;
  if (__real_3f800000 <= fVar8) {
    fVar8 = __real_3f800000;
  }
  fVar11 = **(float **)&(this->DryLevel).field_0x8;
  if (__real_3f800000 <= fVar11) {
    fVar11 = __real_3f800000;
  }
  fVar9 = 0.0;
  if (fVar8 <= 0.0) {
    fVar8 = fVar9;
  }
  fVar12 = **(float **)&(this->WetLevel).field_0x8;
  if (__real_3f800000 <= fVar12) {
    fVar12 = __real_3f800000;
  }
  if (fVar11 <= 0.0) {
    fVar11 = fVar9;
  }
  fVar10 = (float)**(double **)&(this->DelayTime).field_0x8;
  if (fVar12 <= 0.0) {
    fVar12 = fVar9;
  }
  if (this->MaxDelayTimeSeconds <= fVar10) {
    fVar10 = this->MaxDelayTimeSeconds;
  }
  if (fVar10 <= 0.0) {
    fVar10 = fVar9;
  }
  fVar10 = fVar10 * __real_447a0000;
  if (__real_322bcc77 <
      (float)((uint)(this->PrevDelayTimeMsec - fVar10) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    this->PrevDelayTimeMsec = fVar10;
    Audio::FDelay::SetEasedDelayMsec(this_00,fVar10,false);
  }
  if (__real_322bcc77 < (float)((uint)fVar8 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    if (param_1 < param_2) {
      pfVar5 = (float *)(lVar6 * 4 + lVar2);
      uVar7 = (ulonglong)(uint)(param_2 - param_1);
      do {
        fVar9 = (float)(**(code **)(this_00->_padding_ + 8))
                                 (this_00,fVar8 * this->FeedbackSample + *pfVar5);
        fVar9 = fVar11 * *pfVar5 + fVar9 * fVar12;
        *(float *)((longlong)pfVar5 + (lVar3 - lVar2)) = fVar9;
        pfVar5 = pfVar5 + 1;
        this->FeedbackSample = fVar9;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
  else {
    this->FeedbackSample = 0.0;
    if (lVar6 < param_2) {
      pfVar5 = (float *)(lVar6 * 4 + lVar2);
      lVar6 = param_2 - lVar6;
      do {
        fVar8 = (float)(**(code **)(this_00->_padding_ + 8))(this_00);
        *(float *)((longlong)pfVar5 + (lVar3 - lVar2)) = fVar11 * *pfVar5 + fVar8 * fVar12;
        pfVar5 = pfVar5 + 1;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
  }
  return;
}

// GetDefaultInterface @ 14b0720d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>::GetDefaultInterface(void)

{
  code *pcVar1;
  TRefCountPtr<ITextData> TVar2;
  TRefCountPtr<ITextData> TVar3;
  bool bVar4;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar5;
  FInputDataVertex *pFVar6;
  FName *pFVar7;
  FInputDataVertex *pFVar8;
  FInputDataVertex *pFVar9;
  FInputDataVertex *pFVar10;
  FVertexInterface *pFVar11;
  ulonglong uVar12;
  undefined1 auStackY_2c8 [32];
  float local_298;
  float local_294;
  float local_290;
  float local_28c;
  FInputVertexInterface local_288;
  undefined1 local_268 [4];
  undefined1 local_264 [4];
  longlong local_260;
  FInputDataVertex *local_258;
  FInputDataVertex *local_250;
  FOutputVertexInterface local_248;
  FInputVertexInterfaceDeclarationBuilder local_228;
  FOutputVertexInterfaceDeclarationBuilder local_200;
  TOutputDataVertex<Metasound::FAudioBuffer> local_1d8;
  FInputDataVertex local_1b8;
  TInputDataVertex<Metasound::FAudioBuffer> local_180;
  TInputDataVertex<Metasound::FAudioBuffer> local_148;
  TInputDataVertex<float> local_110;
  TInputDataVertex<float> local_d8;
  TInputDataVertex<float> local_a0;
  TInputDataVertex<Metasound::FTrigger> local_68;
  ulonglong local_30;
  
  TVar2.Reference = FDataVertexMetadata::EmptyBasic.Description.TextData.Reference;
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  if (FDataVertexMetadata::EmptyBasic.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FDataVertexMetadata::EmptyBasic.Description.TextData.Reference + 8))
              (FDataVertexMetadata::EmptyBasic.Description.TextData.Reference,local_268);
  }
  TVar3.Reference = FDataVertexMetadata::EmptyBasic.DisplayName.TextData.Reference;
  if (FDataVertexMetadata::EmptyBasic.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FDataVertexMetadata::EmptyBasic.DisplayName.TextData.Reference + 8))
              (FDataVertexMetadata::EmptyBasic.DisplayName.TextData.Reference,local_264);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>::GetDefaultInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>::GetDefaultInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pTVar5 = TOutputDataVertex<Metasound::FAudioBuffer>::
               TOutputDataVertex<Metasound::FAudioBuffer><>
                         (&local_1d8,&DelayNodePrivate::OutParamAudioName,
                          &FDataVertexMetadata::EmptyBasic);
      FOutputVertexInterface::FOutputVertexInterface(&local_248);
      VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
      FOutputVertexInterfaceDeclarationBuilder
                (&local_200,
                 (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_248,
                 &local_248.SubInterfaces);
      if ((local_200.Vertices)->ArrayMax < 1) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,1,&(local_200.Vertices)->AllocatorInstance,(local_200.Vertices)->ArrayNum,
                   &(local_200.Vertices)->ArrayMax);
      }
      VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
                (&local_200,(FOutputDataVertex *)pTVar5);
      VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
                ((FSubInterfaceDeclarationBuilder *)&local_200);
      pFVar6 = (FInputDataVertex *)
               TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                         (&local_68,&DelayNodePrivate::InputResetDelayName,
                          &FDataVertexMetadata::EmptyBasic);
      FLazyName::Resolve(&DelayNodePrivate::InParamMaxDelayTimeName);
      pFVar7 = GetMetasoundDataTypeName<Metasound::FTime>();
      local_1b8._padding_ = local_260;
      local_298 = 0.0;
      local_1b8._padding_ = *(longlong *)pFVar7;
      local_1b8._padding_._0_4_ = 1;
      local_1b8.Literal.Value._padding_._0_4_ = 0x40a00000;
      local_1b8.Literal.Value.TypeIndex = 3;
      local_1b8._padding_ =
           (longlong)&___7__TInputConstructorVertex_VFTime_Metasound___Metasound__6B_;
      pFVar8 = (FInputDataVertex *)
               TInputDataVertex<float>::TInputDataVertex<float><float>
                         (&local_a0,&DelayNodePrivate::InParamFeedbackAmountName,
                          &FDataVertexMetadata::EmptyBasic,&local_298);
      local_294 = 1.0;
      pFVar9 = (FInputDataVertex *)
               TInputDataVertex<float>::TInputDataVertex<float><float>
                         (&local_d8,&DelayNodePrivate::InParamWetLevelName,
                          &FDataVertexMetadata::EmptyBasic,&local_294);
      local_290 = 0.0;
      pFVar10 = (FInputDataVertex *)
                TInputDataVertex<float>::TInputDataVertex<float><float>
                          (&local_110,&DelayNodePrivate::InParamDryLevelName,
                           &FDataVertexMetadata::EmptyBasic,&local_290);
      local_28c = 1.0;
      local_250 = (FInputDataVertex *)
                  TInputDataVertex<Metasound::FAudioBuffer>::
                  TInputDataVertex<Metasound::FAudioBuffer><float>
                            (&local_148,&DelayNodePrivate::InParamDelayTimeName,
                             &FDataVertexMetadata::EmptyBasic,&local_28c);
      local_258 = (FInputDataVertex *)
                  TInputDataVertex<Metasound::FAudioBuffer>::
                  TInputDataVertex<Metasound::FAudioBuffer><>
                            (&local_180,&DelayNodePrivate::InParamAudioInputName,
                             &FDataVertexMetadata::EmptyBasic);
      local_288._padding_ = 0;
      local_288._padding_ = 0;
      local_288.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_288.SubInterfaces.ArrayNum = 0;
      local_288.SubInterfaces.ArrayMax = 0;
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::
      FInputVertexInterfaceDeclarationBuilder
                (&local_228,
                 (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_288,
                 &local_288.SubInterfaces);
      if ((local_228.Vertices)->ArrayMax < 7) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,7,&(local_228.Vertices)->AllocatorInstance,(local_228.Vertices)->ArrayNum,
                   &(local_228.Vertices)->ArrayMax);
      }
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_228,local_258);
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_228,local_250);
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_228,pFVar10);
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_228,pFVar9);
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_228,pFVar8);
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_228,&local_1b8);
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_228,pFVar6);
      VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
                ((FSubInterfaceDeclarationBuilder *)&local_228);
      FVertexInterface::FVertexInterface
                (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>::GetDefaultInterface(void)'
                  ::__l2::DefaultInterface,&local_288,&local_248);
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_288.SubInterfaces.AllocatorInstance.Data,
                 local_288.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_288.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_288.SubInterfaces.AllocatorInstance.Data);
      }
      DestructItems<Metasound::FInputDataVertex,int>
                ((FInputDataVertex *)local_288._padding_,(int)local_288._padding_);
      if ((FInputDataVertex *)local_288._padding_ != (FInputDataVertex *)0x0) {
        FMemory::Free((void *)local_288._padding_);
      }
      if (0xc < (byte)local_180._48_1_) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          pFVar11 = (FVertexInterface *)(*pcVar1)();
          return pFVar11;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[(byte)local_180._48_1_])(&local_180.field_0x20);
      if (0xc < (byte)local_148._48_1_) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          pFVar11 = (FVertexInterface *)(*pcVar1)();
          return pFVar11;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[(byte)local_148._48_1_])(&local_148.field_0x20);
      if (0xc < (byte)local_110._48_1_) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          pFVar11 = (FVertexInterface *)(*pcVar1)();
          return pFVar11;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[(byte)local_110._48_1_])(&local_110.field_0x20);
      if (0xc < (byte)local_d8._48_1_) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          pFVar11 = (FVertexInterface *)(*pcVar1)();
          return pFVar11;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[(byte)local_d8._48_1_])(&local_d8.field_0x20);
      if (0xc < (byte)local_a0._48_1_) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          pFVar11 = (FVertexInterface *)(*pcVar1)();
          return pFVar11;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[(byte)local_a0._48_1_])(&local_a0.field_0x20);
      uVar12 = (ulonglong)local_1b8.Literal.Value.TypeIndex;
      if (0xc < local_1b8.Literal.Value.TypeIndex) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          pFVar11 = (FVertexInterface *)(*pcVar1)();
          return pFVar11;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar12] !=
          UE::Core::Private::TDestructorCaller<float>::Destruct) {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar12])(&local_1b8.Literal);
      }
      if (0xc < (byte)local_68._48_1_) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          pFVar11 = (FVertexInterface *)(*pcVar1)();
          return pFVar11;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[(byte)local_68._48_1_])(&local_68.field_0x20);
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_248.SubInterfaces.AllocatorInstance.Data,
                 local_248.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_248.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_248.SubInterfaces.AllocatorInstance.Data);
      }
      if ((void *)local_248._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_248._padding_);
      }
      atexit(`Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>::GetDefaultInterface'::__l2::
             _dynamic_atexit_destructor_for__DefaultInterface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (TVar3.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar3.Reference + 0x10))(TVar3.Reference);
  }
  if (TVar2.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar2.Reference + 0x10))(TVar2.Reference);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>::GetDefaultInterface(void)'
          ::__l2::DefaultInterface;
}

// GetDefaultInterface @ 14b0726c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::TDelayNodeOperator<Metasound::FTime>::GetDefaultInterface(void)

{
  code *pcVar1;
  TRefCountPtr<ITextData> TVar2;
  TRefCountPtr<ITextData> TVar3;
  bool bVar4;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar5;
  FInputDataVertex *pFVar6;
  FName *pFVar7;
  FInputDataVertex *pFVar8;
  FInputDataVertex *pFVar9;
  FInputDataVertex *pFVar10;
  FVertexInterface *pFVar11;
  ulonglong uVar12;
  undefined1 auStackY_2c8 [32];
  float local_298;
  float local_294;
  float local_290;
  float local_28c;
  FInputVertexInterface local_288;
  undefined1 local_268 [4];
  undefined1 local_264 [4];
  longlong local_260;
  FInputDataVertex *local_258;
  FInputDataVertex *local_250;
  FOutputVertexInterface local_248;
  FInputVertexInterfaceDeclarationBuilder local_228;
  FOutputVertexInterfaceDeclarationBuilder local_200;
  TOutputDataVertex<Metasound::FAudioBuffer> local_1d8;
  FInputDataVertex local_1b8;
  TInputDataVertex<Metasound::FAudioBuffer> local_180;
  TInputDataVertex<Metasound::FTime> local_148;
  TInputDataVertex<float> local_110;
  TInputDataVertex<float> local_d8;
  TInputDataVertex<float> local_a0;
  TInputDataVertex<Metasound::FTrigger> local_68;
  ulonglong local_30;
  
  TVar2.Reference = FDataVertexMetadata::EmptyBasic.Description.TextData.Reference;
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  if (FDataVertexMetadata::EmptyBasic.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FDataVertexMetadata::EmptyBasic.Description.TextData.Reference + 8))
              (FDataVertexMetadata::EmptyBasic.Description.TextData.Reference,local_268);
  }
  TVar3.Reference = FDataVertexMetadata::EmptyBasic.DisplayName.TextData.Reference;
  if (FDataVertexMetadata::EmptyBasic.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FDataVertexMetadata::EmptyBasic.DisplayName.TextData.Reference + 8))
              (FDataVertexMetadata::EmptyBasic.DisplayName.TextData.Reference,local_264);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TDelayNodeOperator<Metasound::FTime>::GetDefaultInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TDelayNodeOperator<Metasound::FTime>::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TDelayNodeOperator<Metasound::FTime>::GetDefaultInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pTVar5 = TOutputDataVertex<Metasound::FAudioBuffer>::
               TOutputDataVertex<Metasound::FAudioBuffer><>
                         (&local_1d8,&DelayNodePrivate::OutParamAudioName,
                          &FDataVertexMetadata::EmptyBasic);
      FOutputVertexInterface::FOutputVertexInterface(&local_248);
      VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
      FOutputVertexInterfaceDeclarationBuilder
                (&local_200,
                 (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_248,
                 &local_248.SubInterfaces);
      if ((local_200.Vertices)->ArrayMax < 1) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,1,&(local_200.Vertices)->AllocatorInstance,(local_200.Vertices)->ArrayNum,
                   &(local_200.Vertices)->ArrayMax);
      }
      VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
                (&local_200,(FOutputDataVertex *)pTVar5);
      VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
                ((FSubInterfaceDeclarationBuilder *)&local_200);
      pFVar6 = (FInputDataVertex *)
               TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                         (&local_68,&DelayNodePrivate::InputResetDelayName,
                          &FDataVertexMetadata::EmptyBasic);
      FLazyName::Resolve(&DelayNodePrivate::InParamMaxDelayTimeName);
      pFVar7 = GetMetasoundDataTypeName<Metasound::FTime>();
      local_1b8._padding_ = local_260;
      local_298 = 0.0;
      local_1b8._padding_ = *(longlong *)pFVar7;
      local_1b8._padding_._0_4_ = 1;
      local_1b8.Literal.Value._padding_._0_4_ = 0x40a00000;
      local_1b8.Literal.Value.TypeIndex = 3;
      local_1b8._padding_ =
           (longlong)&___7__TInputConstructorVertex_VFTime_Metasound___Metasound__6B_;
      pFVar8 = (FInputDataVertex *)
               TInputDataVertex<float>::TInputDataVertex<float><float>
                         (&local_a0,&DelayNodePrivate::InParamFeedbackAmountName,
                          &FDataVertexMetadata::EmptyBasic,&local_298);
      local_294 = 1.0;
      pFVar9 = (FInputDataVertex *)
               TInputDataVertex<float>::TInputDataVertex<float><float>
                         (&local_d8,&DelayNodePrivate::InParamWetLevelName,
                          &FDataVertexMetadata::EmptyBasic,&local_294);
      local_290 = 0.0;
      pFVar10 = (FInputDataVertex *)
                TInputDataVertex<float>::TInputDataVertex<float><float>
                          (&local_110,&DelayNodePrivate::InParamDryLevelName,
                           &FDataVertexMetadata::EmptyBasic,&local_290);
      local_28c = 1.0;
      local_250 = (FInputDataVertex *)
                  TInputDataVertex<Metasound::FTime>::TInputDataVertex<Metasound::FTime><float>
                            (&local_148,&DelayNodePrivate::InParamDelayTimeName,
                             &FDataVertexMetadata::EmptyBasic,&local_28c);
      local_258 = (FInputDataVertex *)
                  TInputDataVertex<Metasound::FAudioBuffer>::
                  TInputDataVertex<Metasound::FAudioBuffer><>
                            (&local_180,&DelayNodePrivate::InParamAudioInputName,
                             &FDataVertexMetadata::EmptyBasic);
      local_288._padding_ = 0;
      local_288._padding_ = 0;
      local_288.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_288.SubInterfaces.ArrayNum = 0;
      local_288.SubInterfaces.ArrayMax = 0;
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::
      FInputVertexInterfaceDeclarationBuilder
                (&local_228,
                 (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_288,
                 &local_288.SubInterfaces);
      if ((local_228.Vertices)->ArrayMax < 7) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,7,&(local_228.Vertices)->AllocatorInstance,(local_228.Vertices)->ArrayNum,
                   &(local_228.Vertices)->ArrayMax);
      }
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_228,local_258);
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_228,local_250);
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_228,pFVar10);
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_228,pFVar9);
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_228,pFVar8);
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_228,&local_1b8);
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_228,pFVar6);
      VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
                ((FSubInterfaceDeclarationBuilder *)&local_228);
      FVertexInterface::FVertexInterface
                (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TDelayNodeOperator<Metasound::FTime>::GetDefaultInterface(void)'
                  ::__l2::DefaultInterface,&local_288,&local_248);
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_288.SubInterfaces.AllocatorInstance.Data,
                 local_288.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_288.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_288.SubInterfaces.AllocatorInstance.Data);
      }
      DestructItems<Metasound::FInputDataVertex,int>
                ((FInputDataVertex *)local_288._padding_,(int)local_288._padding_);
      if ((FInputDataVertex *)local_288._padding_ != (FInputDataVertex *)0x0) {
        FMemory::Free((void *)local_288._padding_);
      }
      if (0xc < (byte)local_180._48_1_) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          pFVar11 = (FVertexInterface *)(*pcVar1)();
          return pFVar11;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[(byte)local_180._48_1_])(&local_180.field_0x20);
      if (0xc < (byte)local_148._48_1_) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          pFVar11 = (FVertexInterface *)(*pcVar1)();
          return pFVar11;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[(byte)local_148._48_1_])(&local_148.field_0x20);
      if (0xc < (byte)local_110._48_1_) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          pFVar11 = (FVertexInterface *)(*pcVar1)();
          return pFVar11;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[(byte)local_110._48_1_])(&local_110.field_0x20);
      if (0xc < (byte)local_d8._48_1_) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          pFVar11 = (FVertexInterface *)(*pcVar1)();
          return pFVar11;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[(byte)local_d8._48_1_])(&local_d8.field_0x20);
      if (0xc < (byte)local_a0._48_1_) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          pFVar11 = (FVertexInterface *)(*pcVar1)();
          return pFVar11;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[(byte)local_a0._48_1_])(&local_a0.field_0x20);
      uVar12 = (ulonglong)local_1b8.Literal.Value.TypeIndex;
      if (0xc < local_1b8.Literal.Value.TypeIndex) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          pFVar11 = (FVertexInterface *)(*pcVar1)();
          return pFVar11;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar12] !=
          UE::Core::Private::TDestructorCaller<float>::Destruct) {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar12])(&local_1b8.Literal);
      }
      if (0xc < (byte)local_68._48_1_) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          pFVar11 = (FVertexInterface *)(*pcVar1)();
          return pFVar11;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[(byte)local_68._48_1_])(&local_68.field_0x20);
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_248.SubInterfaces.AllocatorInstance.Data,
                 local_248.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_248.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_248.SubInterfaces.AllocatorInstance.Data);
      }
      if ((void *)local_248._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_248._padding_);
      }
      atexit(`Metasound::TDelayNodeOperator<Metasound::FTime>::GetDefaultInterface'::__l2::
             _dynamic_atexit_destructor_for__DefaultInterface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TDelayNodeOperator<Metasound::FTime>::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (TVar3.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar3.Reference + 0x10))(TVar3.Reference);
  }
  if (TVar2.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar2.Reference + 0x10))(TVar2.Reference);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TDelayNodeOperator<Metasound::FTime>::GetDefaultInterface(void)'
          ::__l2::DefaultInterface;
}

// GetNodeInfo @ 14b074c30

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>::GetNodeInfo'::__l2::<lambda_1>::
      operator()(local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b074cc0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TDelayNodeOperator<Metasound::FTime>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TDelayNodeOperator<Metasound::FTime>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TDelayNodeOperator<Metasound::FTime>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TDelayNodeOperator<Metasound::FTime>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TDelayNodeOperator<Metasound::FTime>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TDelayNodeOperator<Metasound::FTime>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::TDelayNodeOperator<Metasound::FTime>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TDelayNodeOperator<Metasound::FTime>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TDelayNodeOperator<Metasound::FTime>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TDelayNodeOperator<Metasound::FTime>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// Reset @ 14b079e10

void __thiscall
Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>::Reset
          (TDelayNodeOperator<Metasound::FAudioBuffer> *this,FResetParams *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  this->FeedbackSample = 0.0;
  this->PrevDelayTimeMsec = -1.0;
  Audio::FDelay::Init(&this->DelayBuffer,(float)param_1->OperatorSettings->SampleRate,
                      this->MaxDelayTimeSeconds);
  puVar2 = *(undefined8 **)&(this->AudioOutput).field_0x8;
  iVar1 = *(int *)(puVar2 + 1);
  if (0 < iVar1) {
    memset((void *)*puVar2,0,(longlong)iVar1 << 2);
    return;
  }
  return;
}

// Reset @ 14b079e80

void __thiscall
Metasound::TDelayNodeOperator<Metasound::FTime>::Reset
          (TDelayNodeOperator<Metasound::FTime> *this,FResetParams *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  this->FeedbackSample = 0.0;
  this->PrevDelayTimeMsec = -1.0;
  Audio::FDelay::Init(&this->DelayBuffer,(float)param_1->OperatorSettings->SampleRate,
                      this->MaxDelayTimeSeconds);
  puVar2 = *(undefined8 **)&(this->AudioOutput).field_0x8;
  iVar1 = *(int *)(puVar2 + 1);
  if (0 < iVar1) {
    memset((void *)*puVar2,0,(longlong)iVar1 << 2);
    return;
  }
  return;
}

