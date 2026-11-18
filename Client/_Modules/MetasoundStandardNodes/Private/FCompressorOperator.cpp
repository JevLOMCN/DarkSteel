// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 9

// BindInputs @ 14b035820

void __thiscall
Metasound::FCompressorOperator::BindInputs
          (FCompressorOperator *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<bool> *local_res18 [2];
  undefined1 local_68 [16];
  code *local_58;
  TDataReadReference<bool> **local_50;
  undefined1 local_48 [16];
  
  FLazyName::Resolve(&CompressorVertexNames::InputIsBypassedName);
  local_res18[0] = &this->bIsBypassedInput;
  local_50 = local_res18;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._8_8_ = local_68;
  local_68._0_8_ = &local_res8;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_68._8_8_ = local_res18[0];
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_58)
  ;
  FLazyName::Resolve(&CompressorVertexNames::InputAudioName);
  local_res18[0] = (TDataReadReference<bool> *)&this->AudioInput;
  local_50 = local_res18;
  local_48._0_8_ = &local_res8;
  local_68._8_8_ = local_48;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_48._8_8_ = local_res18[0];
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_68,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_58)
  ;
  FLazyName::Resolve(&CompressorVertexNames::InputRatioName);
  local_res18[0] = (TDataReadReference<bool> *)&this->RatioInput;
  local_50 = local_res18;
  local_48._0_8_ = &local_res8;
  local_68._8_8_ = local_48;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_48._8_8_ = local_res18[0];
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_68,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_58)
  ;
  FLazyName::Resolve(&CompressorVertexNames::InputThresholdName);
  local_res18[0] = (TDataReadReference<bool> *)&this->ThresholdDbInput;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_50 = local_res18;
  local_48._0_8_ = &local_res8;
  local_68._8_8_ = local_48;
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_48._8_8_ = local_res18[0];
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_68,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_58)
  ;
  FLazyName::Resolve(&CompressorVertexNames::InputAttackTimeName);
  local_res18[0] = (TDataReadReference<bool> *)&this->AttackTimeInput;
  local_50 = local_res18;
  local_48._0_8_ = &local_res8;
  local_68._8_8_ = local_48;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTime>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTime>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_48._8_8_ = local_res18[0];
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_68,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_58)
  ;
  FLazyName::Resolve(&CompressorVertexNames::InputReleaseTimeName);
  local_res18[0] = (TDataReadReference<bool> *)&this->ReleaseTimeInput;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTime>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_50 = local_res18;
  local_48._0_8_ = &local_res8;
  local_68._8_8_ = local_48;
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTime>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_48._8_8_ = local_res18[0];
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_68,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_58)
  ;
  FLazyName::Resolve(&CompressorVertexNames::InputLookaheadTimeName);
  local_res18[0] = (TDataReadReference<bool> *)&this->LookaheadTimeInput;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTime>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_50 = local_res18;
  local_48._0_8_ = &local_res8;
  local_68._8_8_ = local_48;
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTime>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_48._8_8_ = local_res18[0];
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_68,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_58)
  ;
  FLazyName::Resolve(&CompressorVertexNames::InputKneeName);
  local_res18[0] = (TDataReadReference<bool> *)&this->KneeInput;
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_50 = local_res18;
  local_48._0_8_ = &local_res8;
  local_68._8_8_ = local_48;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._8_8_ = local_res18[0];
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_68,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_58)
  ;
  FLazyName::Resolve(&CompressorVertexNames::InputSidechainName);
  local_res18[0] = (TDataReadReference<bool> *)&this->SidechainInput;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_50 = local_res18;
  local_48._0_8_ = &local_res8;
  local_68._8_8_ = local_48;
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_48._8_8_ = local_res18[0];
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_68,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_58)
  ;
  FLazyName::Resolve(&CompressorVertexNames::InputEnvelopeModeName);
  local_res18[0] = (TDataReadReference<bool> *)&this->EnvelopeModeInput;
  local_50 = local_res18;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_68._8_8_ = local_48;
  local_48._0_8_ = &local_res8;
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_48._8_8_ = local_res18[0];
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_68,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_58)
  ;
  FLazyName::Resolve(&CompressorVertexNames::InputIsUpwardsName);
  local_res18[0] = &this->bIsUpwardsInput;
  local_50 = local_res18;
  local_48._0_8_ = &local_res8;
  local_68._8_8_ = local_48;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_48._8_8_ = local_res18[0];
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_68,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_58)
  ;
  FLazyName::Resolve(&CompressorVertexNames::InputIsAnalogName);
  local_res18[0] = &this->bIsAnalogInput;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_50 = local_res18;
  local_48._0_8_ = &local_res8;
  local_68._8_8_ = local_48;
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_48._8_8_ = local_res18[0];
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_68,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_58)
  ;
  FLazyName::Resolve(&CompressorVertexNames::InputWetDryMixName);
  local_res18[0] = (TDataReadReference<bool> *)&this->WetDryMixInput;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_50 = local_res18;
  local_48._0_8_ = &local_res8;
  local_68._8_8_ = local_48;
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_48._8_8_ = local_res18[0];
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_68,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_58)
  ;
  return;
}

// BindOutputs @ 14b035cf0

void __thiscall
Metasound::FCompressorOperator::BindOutputs
          (FCompressorOperator *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FAudioBuffer> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataWriteReference<Metasound::FAudioBuffer> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&CompressorVertexNames::OutputAudioName);
  local_res18 = &this->AudioOutput;
  local_30 = &local_res18;
  local_48._0_8_ = &local_res8;
  local_28._8_8_ = local_48;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_48._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_28,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_38
            );
  FLazyName::Resolve(&CompressorVertexNames::OutputEnvelopeName);
  local_res18 = &this->EnvelopeOutput;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
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

// FCompressorOperator @ 14b051c30

FCompressorOperator * __thiscall
Metasound::FCompressorOperator::FCompressorOperator
          (FCompressorOperator *this,FOperatorSettings *param_1,TDataReadReference<bool> *param_2,
          TDataReadReference<Metasound::FAudioBuffer> *param_3,TDataReadReference<float> *param_4,
          TDataReadReference<float> *param_5,TDataReadReference<Metasound::FTime> *param_6,
          TDataReadReference<Metasound::FTime> *param_7,
          TDataReadReference<Metasound::FTime> *param_8,TDataReadReference<float> *param_9,
          bool *param_10,TDataReadReference<Metasound::FAudioBuffer> *param_11,
          TDataReadReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *param_12,
          TDataReadReference<bool> *param_13,TDataReadReference<bool> *param_14,
          TDataReadReference<float> *param_15)

{
  FDynamicsProcessor *this_00;
  int iVar1;
  longlong lVar2;
  float *pfVar3;
  EEnvelopePeakMode *pEVar4;
  undefined1 *puVar5;
  Type TVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  
  this->_padding_ = (longlong)&___7FCompressorOperator_Metasound__6B_;
  *(undefined ***)&this->bIsBypassedInput = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->bIsBypassedInput).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar2 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->bIsBypassedInput).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->bIsBypassedInput = &___7__TDataReadReference__N_Metasound__6B_;
  *(undefined ***)&this->AudioInput = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_
  ;
  *(undefined8 *)&(this->AudioInput).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar2 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->AudioInput).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->AudioInput =
       &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined ***)&this->RatioInput = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->RatioInput).field_0x8 = *(undefined8 *)&param_4->field_0x8;
  lVar2 = *(longlong *)&param_4->field_0x10;
  *(longlong *)&(this->RatioInput).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->RatioInput = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->ThresholdDbInput = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->ThresholdDbInput).field_0x8 = *(undefined8 *)&param_5->field_0x8;
  lVar2 = *(longlong *)&param_5->field_0x10;
  *(longlong *)&(this->ThresholdDbInput).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->ThresholdDbInput = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->AttackTimeInput = &___7__TDataReference_VFTime_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->AttackTimeInput).field_0x8 = *(undefined8 *)&param_6->field_0x8;
  lVar2 = *(longlong *)&param_6->field_0x10;
  *(longlong *)&(this->AttackTimeInput).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->AttackTimeInput =
       &___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
  *(undefined ***)&this->ReleaseTimeInput = &___7__TDataReference_VFTime_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->ReleaseTimeInput).field_0x8 = *(undefined8 *)&param_7->field_0x8;
  lVar2 = *(longlong *)&param_7->field_0x10;
  *(longlong *)&(this->ReleaseTimeInput).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->ReleaseTimeInput =
       &___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
  *(undefined ***)&this->LookaheadTimeInput =
       &___7__TDataReference_VFTime_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->LookaheadTimeInput).field_0x8 = *(undefined8 *)&param_8->field_0x8;
  lVar2 = *(longlong *)&param_8->field_0x10;
  *(longlong *)&(this->LookaheadTimeInput).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->LookaheadTimeInput =
       &___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
  *(undefined ***)&this->KneeInput = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->KneeInput).field_0x8 = *(undefined8 *)&param_9->field_0x8;
  lVar2 = *(longlong *)&param_9->field_0x10;
  *(longlong *)&(this->KneeInput).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->KneeInput = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->SidechainInput =
       &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->SidechainInput).field_0x8 = *(undefined8 *)&param_11->field_0x8;
  lVar2 = *(longlong *)&param_11->field_0x10;
  *(longlong *)&(this->SidechainInput).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->SidechainInput =
       &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined ***)&this->EnvelopeModeInput =
       &___7__TDataReference_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)&(this->EnvelopeModeInput).field_0x8 = *(undefined8 *)&param_12->field_0x8;
  lVar2 = *(longlong *)&param_12->field_0x10;
  *(longlong *)&(this->EnvelopeModeInput).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->EnvelopeModeInput =
       &
       ___7__TDataReadReference_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined ***)&this->bIsAnalogInput = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->bIsAnalogInput).field_0x8 = *(undefined8 *)&param_13->field_0x8;
  lVar2 = *(longlong *)&param_13->field_0x10;
  *(longlong *)&(this->bIsAnalogInput).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->bIsAnalogInput = &___7__TDataReadReference__N_Metasound__6B_;
  *(undefined ***)&this->bIsUpwardsInput = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->bIsUpwardsInput).field_0x8 = *(undefined8 *)&param_14->field_0x8;
  lVar2 = *(longlong *)&param_14->field_0x10;
  *(longlong *)&(this->bIsUpwardsInput).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->bIsUpwardsInput = &___7__TDataReadReference__N_Metasound__6B_;
  *(undefined ***)&this->WetDryMixInput = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->WetDryMixInput).field_0x8 = *(undefined8 *)&param_15->field_0x8;
  lVar2 = *(longlong *)&param_15->field_0x10;
  *(longlong *)&(this->WetDryMixInput).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->WetDryMixInput = &___7__TDataReadReference_M_Metasound__6B_;
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FAudioBuffer> *)&this->AudioOutput,NewObject,param_1);
  *(undefined ***)&this->AudioOutput =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FAudioBuffer> *)&this->EnvelopeOutput,NewObject,param_1);
  this_00 = &this->Compressor;
  *(undefined ***)&this->EnvelopeOutput =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  Audio::FDynamicsProcessor::FDynamicsProcessor(this_00);
  iVar1 = param_1->SampleRate;
  fVar7 = (float)iVar1 * __real_3c23d70b;
  fVar8 = Audio::FDynamicsProcessor::GetMaxLookaheadMsec(this_00);
  TVar6 = RootMeanSquared;
  Audio::FIntegerDelay::FIntegerDelay
            (&this->InputDelay,
             1 - ((int)ROUND(__real_bf000000 - fVar8 * (float)iVar1 * __real_3b03126f) >> 1),
             (int)fVar7,0x100);
  FAudioBuffer::FAudioBuffer(&this->DelayedInputSignal,param_1->NumFramesPerBlock);
  dVar10 = __real_408f400000000000;
  this->bEnvelopeOutputIsZero = false;
  this->bUseSidechain = *param_10;
  this->MsToSamples = (float)param_1->SampleRate * __real_3a83126f;
  dVar9 = **(double **)&param_6->field_0x8 * dVar10;
  if (dVar9 <= 0.0) {
    dVar9 = 0.0;
  }
  this->PrevAttackTime = (float)dVar9;
  dVar9 = **(double **)&param_7->field_0x8 * dVar10;
  if (dVar9 <= 0.0) {
    dVar9 = 0.0;
  }
  this->PrevReleaseTime = (float)dVar9;
  pfVar3 = *(float **)&(this->KneeInput).field_0x8;
  dVar10 = **(double **)&param_8->field_0x8 * dVar10;
  if (dVar10 <= 0.0) {
    dVar10 = 0.0;
  }
  this->PrevLookaheadTime = (float)dVar10;
  pEVar4 = *(EEnvelopePeakMode **)&(this->EnvelopeModeInput).field_0x8;
  this->PrevKneeInput = *pfVar3;
  puVar5 = *(undefined1 **)&(this->bIsUpwardsInput).field_0x8;
  this->PrevPeakMode = *pEVar4;
  pfVar3 = *(float **)&(this->RatioInput).field_0x8;
  this->bPrevIsUpwardsInput = (bool)*puVar5;
  fVar7 = *pfVar3;
  if (fVar7 <= __real_3f800000) {
    fVar7 = __real_3f800000;
  }
  pfVar3 = *(float **)&(this->ThresholdDbInput).field_0x8;
  this->PrevClampedRatio = fVar7;
  this->PrevThreshold = *pfVar3;
  Audio::FDynamicsProcessor::Init(this_00,(float)param_1->SampleRate,1);
  Audio::FDynamicsProcessor::SetKeyNumChannels(this_00,1);
  fVar7 = **(float **)&(this->RatioInput).field_0x8;
  if (fVar7 <= __real_3f800000) {
    fVar7 = __real_3f800000;
  }
  Audio::FDynamicsProcessor::SetRatio(this_00,fVar7);
  Audio::FDynamicsProcessor::SetThreshold(this_00,**(float **)&(this->ThresholdDbInput).field_0x8);
  Audio::FDynamicsProcessor::SetAttackTime(this_00,this->PrevAttackTime);
  Audio::FDynamicsProcessor::SetReleaseTime(this_00,this->PrevReleaseTime);
  Audio::FDynamicsProcessor::SetLookaheadMsec(this_00,this->PrevLookaheadTime);
  Audio::FDynamicsProcessor::SetKneeBandwidth(this_00,**(float **)&(this->KneeInput).field_0x8);
  Audio::FDynamicsProcessor::SetProcessingMode
            (this_00,-(uint)(**(char **)&(this->bIsUpwardsInput).field_0x8 != '\0') &
                     UpwardsCompressor);
  iVar1 = **(int **)&(this->EnvelopeModeInput).field_0x8;
  if (iVar1 == 0) {
    TVar6 = Peak;
  }
  else if ((iVar1 == 1) || (iVar1 != 2)) {
    TVar6 = MeanSquared;
  }
  Audio::FDynamicsProcessor::SetPeakMode(this_00,TVar6);
  return this;
}

// operator() @ 14b05a0b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::FCompressorOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  ITextData *pIVar1;
  ForAnyElementType _Src;
  FVertexInterface *pFVar2;
  FText *pFVar3;
  FText *pFVar4;
  FNodeClassName *pFVar5;
  longlong lVar6;
  FText *this_00;
  longlong lVar7;
  undefined1 local_res10 [8];
  FName local_res18;
  FNodeClassName local_1a8;
  FString local_188;
  TArray<FText,TSizedDefaultAllocator<32>_> local_178;
  TArray<FText,TSizedDefaultAllocator<32>_> local_168;
  FNodeDisplayStyle local_158;
  FText local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  FText local_f8;
  FNodeClassName local_e8;
  FVertexInterface local_c8;
  FVertexInterface local_78;
  
  this_00 = &local_108;
  pFVar2 = Metasound::FCompressorOperator::DeclareVertexInterface();
  Metasound::FVertexInterface::FVertexInterface(&local_c8,pFVar2);
  local_1a8.Name.ComparisonIndex.Value = 0x1010101;
  local_1a8.Namespace.ComparisonIndex.Value = 0;
  local_1a8.Namespace.Number = 0;
  FText::FText(&local_128);
  FText::FText(&local_118);
  lVar7 = 2;
  local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,2,0,&local_178.AllocatorInstance,2,&local_178.ArrayMax);
  ConstructItems<FText,FText,int>(local_178.AllocatorInstance.Data,&local_128,2);
  local_148.TextData.Reference = Metasound::NodeCategories::Dynamics.TextData.Reference;
  if (Metasound::NodeCategories::Dynamics.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::NodeCategories::Dynamics.TextData.Reference + 8))
              (Metasound::NodeCategories::Dynamics.TextData.Reference,local_res10);
  }
  local_148.Flags = Metasound::NodeCategories::Dynamics.Flags;
  local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_168.AllocatorInstance,1,&local_168.ArrayMax);
  ConstructItems<FText,FText,int>(local_168.AllocatorInstance.Data,&local_148,1);
  pFVar2 = Metasound::FVertexInterface::FVertexInterface(&local_78,&local_c8);
  local_138.TextData.Reference = Metasound::PluginNodeMissingPrompt.TextData.Reference;
  if (Metasound::PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::PluginNodeMissingPrompt.TextData.Reference + 8))
              (Metasound::PluginNodeMissingPrompt.TextData.Reference,local_res10);
  }
  _Src.Data = Metasound::PluginAuthor.Data.AllocatorInstance.Data;
  lVar6 = (longlong)Metasound::PluginAuthor.Data.ArrayNum;
  local_138.Flags = Metasound::PluginNodeMissingPrompt.Flags;
  local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.Data.ArrayNum = Metasound::PluginAuthor.Data.ArrayNum;
  if (Metasound::PluginAuthor.Data.ArrayNum == 0) {
    local_188.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,Metasound::PluginAuthor.Data.ArrayNum,0,(ForAnyElementType *)&local_188,
               Metasound::PluginAuthor.Data.ArrayNum,&local_188.Data.ArrayMax);
    memcpy(local_188.Data.AllocatorInstance.Data,_Src.Data,lVar6 * 2);
  }
  pFVar3 = FText::FText(this_00);
  pFVar4 = FText::FText(&local_f8);
  ::FName::FName(&local_res18,"Compressor");
  pFVar5 = Metasound::FNodeClassName::FNodeClassName
                     (&local_e8,&Metasound::StandardNodes::Namespace,&local_res18,
                      &Metasound::StandardNodes::AudioVariant);
  local_158.ImageName = local_1a8.Namespace;
  local_1a8.Namespace = pFVar5->Namespace;
  local_158.bShowName = (bool)(undefined1)local_1a8.Name.ComparisonIndex.Value;
  local_158.bShowInputNames = (bool)local_1a8.Name.ComparisonIndex.Value._1_1_;
  local_158.bShowOutputNames = (bool)local_1a8.Name.ComparisonIndex.Value._2_1_;
  local_158.bShowLiterals = (bool)local_1a8.Name.ComparisonIndex.Value._3_1_;
  local_1a8.Variant = pFVar5->Variant;
  local_1a8.Name = pFVar5->Name;
  Metasound::FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,&local_1a8,1,0,pFVar4,pFVar3,&local_188,&local_138,pFVar2,
             &local_168,&local_178,&local_158);
  if (local_148.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
  }
  do {
    pIVar1 = this_00[-1].TextData.Reference;
    this_00 = this_00 + -1;
    lVar7 = lVar7 + -1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))();
    }
  } while (lVar7 != 0);
  Metasound::FVertexInterface::~FVertexInterface(&local_c8);
  return __return_storage_ptr__;
}

// CreateOperator @ 14b066a70

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::FCompressorOperator::CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  FCompressorOperator *this_00;
  FCompressorOperator *pFVar2;
  FName local_res8;
  undefined1 local_1b8 [32];
  undefined1 local_198 [32];
  undefined1 local_178 [32];
  undefined1 local_158 [32];
  undefined1 local_138 [32];
  undefined1 local_118 [32];
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&CompressorVertexNames::InputIsBypassedName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this,(TDataReadReference<bool> *)local_38,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&CompressorVertexNames::InputAudioName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>
            (this,(TDataReadReference<Metasound::FAudioBuffer> *)local_58,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&CompressorVertexNames::InputRatioName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_78,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&CompressorVertexNames::InputThresholdName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_98,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&CompressorVertexNames::InputAttackTimeName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTime>
            (this,(TDataReadReference<Metasound::FTime> *)local_b8,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&CompressorVertexNames::InputReleaseTimeName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTime>
            (this,(TDataReadReference<Metasound::FTime> *)local_d8,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&CompressorVertexNames::InputLookaheadTimeName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTime>
            (this,(TDataReadReference<Metasound::FTime> *)local_f8,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&CompressorVertexNames::InputKneeName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_118,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&CompressorVertexNames::InputSidechainName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>
            (this,(TDataReadReference<Metasound::FAudioBuffer> *)local_138,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&CompressorVertexNames::InputEnvelopeModeName);
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>
            (this,(TDataReadReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)local_158
             ,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&CompressorVertexNames::InputIsAnalogName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this,(TDataReadReference<bool> *)local_178,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&CompressorVertexNames::InputIsUpwardsName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this,(TDataReadReference<bool> *)local_198,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&CompressorVertexNames::InputWetDryMixName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_1b8,&local_res8,pFVar1);
  FLazyName::Resolve(&CompressorVertexNames::InputSidechainName);
  local_res8.ComparisonIndex.Value._0_1_ =
       FInputVertexInterfaceData::IsVertexBound(this,&local_res8);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x340);
  pFVar2 = (FCompressorOperator *)0x0;
  if (this_00 != (FCompressorOperator *)0x0) {
    pFVar2 = FCompressorOperator(this_00,pFVar1,(TDataReadReference<bool> *)local_38,
                                 (TDataReadReference<Metasound::FAudioBuffer> *)local_58,
                                 (TDataReadReference<float> *)local_78,
                                 (TDataReadReference<float> *)local_98,
                                 (TDataReadReference<Metasound::FTime> *)local_b8,
                                 (TDataReadReference<Metasound::FTime> *)local_d8,
                                 (TDataReadReference<Metasound::FTime> *)local_f8,
                                 (TDataReadReference<float> *)local_118,(bool *)&local_res8,
                                 (TDataReadReference<Metasound::FAudioBuffer> *)local_138,
                                 (TDataReadReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>
                                  *)local_158,(TDataReadReference<bool> *)local_178,
                                 (TDataReadReference<bool> *)local_198,
                                 (TDataReadReference<float> *)local_1b8);
  }
  param_1->Node = (INode *)pFVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_1b8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_198._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_178._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_158._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_138._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_118._16_8_);
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

// DeclareVertexInterface @ 14b068d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::FCompressorOperator::DeclareVertexInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar3;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar4;
  FInputDataVertex *pFVar5;
  FInputDataVertex *pFVar6;
  FInputDataVertex *pFVar7;
  FInputDataVertex *pFVar8;
  FInputDataVertex *pFVar9;
  FInputDataVertex *pFVar10;
  FInputDataVertex *pFVar11;
  FVertexInterface *pFVar12;
  undefined1 auStackY_468 [32];
  bool local_438;
  bool local_437;
  bool local_436 [2];
  float local_434;
  int local_430;
  float local_42c;
  float local_428;
  float local_424;
  float local_420;
  float local_41c;
  float local_418 [2];
  FInputVertexInterface local_410;
  FInputVertexInterfaceDeclarationBuilder local_3f0;
  FInputDataVertex *local_3c8;
  FInputDataVertex *local_3c0;
  FInputDataVertex *local_3b8;
  FInputDataVertex *local_3b0;
  FInputDataVertex *local_3a8;
  FOutputVertexInterface local_3a0;
  FInputDataVertex *local_380;
  FOutputVertexInterfaceDeclarationBuilder local_378;
  TOutputDataVertex<Metasound::FAudioBuffer> local_350;
  TOutputDataVertex<Metasound::FAudioBuffer> local_330;
  TInputDataVertex<bool> local_310;
  TInputDataVertex<Metasound::FAudioBuffer> local_2d8;
  TInputDataVertex<float> local_2a0;
  TInputDataVertex<float> local_268;
  TInputDataVertex<Metasound::FTime> local_230;
  TInputDataVertex<Metasound::FTime> local_1f8;
  TInputDataVertex<Metasound::FTime> local_1c0;
  TInputDataVertex<float> local_188;
  TInputDataVertex<Metasound::FAudioBuffer> local_150;
  undefined1 local_118 [32];
  undefined1 local_f8 [16];
  byte local_e8;
  TInputDataVertex<bool> local_e0;
  TInputDataVertex<bool> local_a8;
  TInputDataVertex<float> local_70;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_468;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FCompressorOperator::DeclareVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FCompressorOperator::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FCompressorOperator::DeclareVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pTVar3 = TOutputDataVertex<Metasound::FAudioBuffer>::
             TOutputDataVertex<Metasound::FAudioBuffer><>
                       (&local_330,&CompressorVertexNames::OutputEnvelopeName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar4 = TOutputDataVertex<Metasound::FAudioBuffer>::
             TOutputDataVertex<Metasound::FAudioBuffer><>
                       (&local_350,&CompressorVertexNames::OutputAudioName,
                        &FDataVertexMetadata::EmptyBasic);
    FOutputVertexInterface::FOutputVertexInterface(&local_3a0);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_378,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_3a0,
               &local_3a0.SubInterfaces);
    if ((local_378.Vertices)->ArrayMax < 2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,&(local_378.Vertices)->AllocatorInstance,(local_378.Vertices)->ArrayNum,
                 &(local_378.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_378,(FOutputDataVertex *)pTVar4);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_378,(FOutputDataVertex *)pTVar3);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_378);
    local_434 = 1.0;
    pFVar5 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_70,&CompressorVertexNames::InputWetDryMixName,
                        &FDataVertexMetadata::EmptyBasic,&local_434);
    local_438 = false;
    pFVar6 = (FInputDataVertex *)
             TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                       (&local_a8,&CompressorVertexNames::InputIsUpwardsName,
                        &FDataVertexMetadata::EmptyBasic,&local_438);
    local_437 = true;
    pFVar7 = (FInputDataVertex *)
             TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                       (&local_e0,&CompressorVertexNames::InputIsAnalogName,
                        &FDataVertexMetadata::EmptyBasic,&local_437);
    local_430 = 0;
    pFVar8 = (FInputDataVertex *)
             TInputDataVertex<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
             TInputDataVertex<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_><int>
                       (local_118,&CompressorVertexNames::InputEnvelopeModeName,
                        &FDataVertexMetadata::EmptyBasic,&local_430);
    pFVar9 = (FInputDataVertex *)
             TInputDataVertex<Metasound::FAudioBuffer>::TInputDataVertex<Metasound::FAudioBuffer><>
                       (&local_150,&CompressorVertexNames::InputSidechainName,
                        &FDataVertexMetadata::EmptyBasic);
    local_42c = 10.0;
    pFVar10 = (FInputDataVertex *)
              TInputDataVertex<float>::TInputDataVertex<float><float>
                        (&local_188,&CompressorVertexNames::InputKneeName,
                         &FDataVertexMetadata::EmptyBasic,&local_42c);
    local_428 = 0.01;
    pFVar11 = (FInputDataVertex *)
              TInputDataVertex<Metasound::FTime>::TInputDataVertex<Metasound::FTime><float>
                        (&local_1c0,&CompressorVertexNames::InputLookaheadTimeName,
                         &FDataVertexMetadata::EmptyBasic,&local_428);
    local_424 = 0.1;
    local_3a8 = (FInputDataVertex *)
                TInputDataVertex<Metasound::FTime>::TInputDataVertex<Metasound::FTime><float>
                          (&local_1f8,&CompressorVertexNames::InputReleaseTimeName,
                           &FDataVertexMetadata::EmptyBasic,&local_424);
    local_420 = 0.01;
    local_3b0 = (FInputDataVertex *)
                TInputDataVertex<Metasound::FTime>::TInputDataVertex<Metasound::FTime><float>
                          (&local_230,&CompressorVertexNames::InputAttackTimeName,
                           &FDataVertexMetadata::EmptyBasic,&local_420);
    local_41c = -6.0;
    local_3b8 = (FInputDataVertex *)
                TInputDataVertex<float>::TInputDataVertex<float><float>
                          (&local_268,&CompressorVertexNames::InputThresholdName,
                           &FDataVertexMetadata::EmptyBasic,&local_41c);
    local_418[0] = 1.5;
    local_3c0 = (FInputDataVertex *)
                TInputDataVertex<float>::TInputDataVertex<float><float>
                          (&local_2a0,&CompressorVertexNames::InputRatioName,
                           &FDataVertexMetadata::EmptyBasic,local_418);
    local_3c8 = (FInputDataVertex *)
                TInputDataVertex<Metasound::FAudioBuffer>::
                TInputDataVertex<Metasound::FAudioBuffer><>
                          (&local_2d8,&CompressorVertexNames::InputAudioName,
                           &FDataVertexMetadata::EmptyBasic);
    local_436[0] = false;
    local_380 = (FInputDataVertex *)
                TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                          (&local_310,&CompressorVertexNames::InputIsBypassedName,
                           &FDataVertexMetadata::EmptyBasic,local_436);
    local_410._padding_ = 0;
    local_410._padding_ = 0;
    local_410.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_410.SubInterfaces.ArrayNum = 0;
    local_410.SubInterfaces.ArrayMax = 0;
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
              (&local_3f0,
               (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_410,
               &local_410.SubInterfaces);
    if ((local_3f0.Vertices)->ArrayMax < 0xd) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,0xd,&(local_3f0.Vertices)->AllocatorInstance,(local_3f0.Vertices)->ArrayNum,
                 &(local_3f0.Vertices)->ArrayMax);
    }
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_3f0,local_380);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_3f0,local_3c8);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_3f0,local_3c0);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_3f0,local_3b8);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_3f0,local_3b0);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_3f0,local_3a8);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_3f0,pFVar11);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_3f0,pFVar10);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_3f0,pFVar9);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_3f0,pFVar8);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_3f0,pFVar7);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_3f0,pFVar6);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_3f0,pFVar5);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_3f0);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FCompressorOperator::DeclareVertexInterface(void)'
                ::__l2::Interface,&local_410,&local_3a0);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_410.SubInterfaces.AllocatorInstance.Data,
               local_410.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_410.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_410.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_410._padding_,(int)local_410._padding_);
    if ((FInputDataVertex *)local_410._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_410._padding_);
    }
    if ((0xc < (byte)local_310._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar12 = (FVertexInterface *)(*pcVar1)();
      return pFVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_310._48_1_])(&local_310.field_0x20);
    if ((0xc < (byte)local_2d8._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar12 = (FVertexInterface *)(*pcVar1)();
      return pFVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_2d8._48_1_])(&local_2d8.field_0x20);
    if ((0xc < (byte)local_2a0._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar12 = (FVertexInterface *)(*pcVar1)();
      return pFVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_2a0._48_1_])(&local_2a0.field_0x20);
    if ((0xc < (byte)local_268._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar12 = (FVertexInterface *)(*pcVar1)();
      return pFVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_268._48_1_])(&local_268.field_0x20);
    if ((0xc < (byte)local_230._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar12 = (FVertexInterface *)(*pcVar1)();
      return pFVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_230._48_1_])(&local_230.field_0x20);
    if ((0xc < (byte)local_1f8._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar12 = (FVertexInterface *)(*pcVar1)();
      return pFVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_1f8._48_1_])(&local_1f8.field_0x20);
    if ((0xc < (byte)local_1c0._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar12 = (FVertexInterface *)(*pcVar1)();
      return pFVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_1c0._48_1_])(&local_1c0.field_0x20);
    if ((0xc < (byte)local_188._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar12 = (FVertexInterface *)(*pcVar1)();
      return pFVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_188._48_1_])(&local_188.field_0x20);
    if ((0xc < (byte)local_150._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar12 = (FVertexInterface *)(*pcVar1)();
      return pFVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_150._48_1_])(&local_150.field_0x20);
    if ((0xc < local_e8) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar12 = (FVertexInterface *)(*pcVar1)();
      return pFVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_e8])(local_f8);
    if ((0xc < (byte)local_e0._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar12 = (FVertexInterface *)(*pcVar1)();
      return pFVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_e0._48_1_])(&local_e0.field_0x20);
    if ((0xc < (byte)local_a8._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar12 = (FVertexInterface *)(*pcVar1)();
      return pFVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_a8._48_1_])(&local_a8.field_0x20);
    if ((0xc < (byte)local_70._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar12 = (FVertexInterface *)(*pcVar1)();
      return pFVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_70._48_1_])(&local_70.field_0x20);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_3a0.SubInterfaces.AllocatorInstance.Data,
               local_3a0.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_3a0.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_3a0.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_3a0._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_3a0._padding_);
    }
    atexit(`Metasound::FCompressorOperator::DeclareVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__Interface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FCompressorOperator::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FCompressorOperator::DeclareVertexInterface(void)'
          ::__l2::Interface;
}

// Execute @ 14b06a0c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Metasound::FCompressorOperator::Execute(FCompressorOperator *this)

{
  FDynamicsProcessor *this_00;
  char cVar1;
  int iVar2;
  EEnvelopePeakMode EVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  void *_Src;
  FScriptContainerElement *pFVar7;
  float *pfVar8;
  code *pcVar9;
  float fVar10;
  undefined4 uVar11;
  bool bVar12;
  Type TVar13;
  float **ppfVar14;
  uint uVar15;
  double dVar16;
  float fVar17;
  float *local_res8;
  float *local_res10;
  float *local_res18;
  float *local_res20;
  undefined4 uStack_bc;
  TArrayView<float,int> local_b8;
  TArrayView<float_const_,int> local_a8;
  TArrayView<float,int> local_98;
  TArrayView<float,int> local_88;
  TArrayView<float_const_,int> local_78 [4];
  
  fVar10 = __real_3f800000;
  if (**(char **)&(this->bIsBypassedInput).field_0x8 == '\0') {
    this_00 = &this->Compressor;
    fVar17 = **(float **)&(this->RatioInput).field_0x8;
    if (fVar17 <= __real_3f800000) {
      fVar17 = __real_3f800000;
    }
    if (fVar17 != this->PrevClampedRatio) {
      Audio::FDynamicsProcessor::SetRatio(this_00,fVar17);
      this->PrevClampedRatio = fVar17;
    }
    fVar17 = **(float **)&(this->ThresholdDbInput).field_0x8;
    if (fVar17 != this->PrevThreshold) {
      Audio::FDynamicsProcessor::SetThreshold(this_00,fVar17);
      this->PrevThreshold = **(float **)&(this->ThresholdDbInput).field_0x8;
    }
    dVar16 = **(double **)&(this->AttackTimeInput).field_0x8 * __real_408f400000000000;
    if (dVar16 <= 0.0) {
      dVar16 = 0.0;
    }
    fVar17 = (float)dVar16;
    uVar15 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    if (__real_322bcc77 <
        (float)((uint)(fVar17 - this->PrevAttackTime) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      Audio::FDynamicsProcessor::SetAttackTime(this_00,fVar17);
      uVar15 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      this->PrevAttackTime = fVar17;
    }
    dVar16 = **(double **)&(this->ReleaseTimeInput).field_0x8 * __real_408f400000000000;
    if (dVar16 <= 0.0) {
      dVar16 = 0.0;
    }
    fVar17 = (float)dVar16;
    if (__real_322bcc77 < (float)((uint)(fVar17 - this->PrevReleaseTime) & uVar15)) {
      Audio::FDynamicsProcessor::SetReleaseTime(this_00,fVar17);
      this->PrevReleaseTime = fVar17;
    }
    fVar17 = Audio::FDynamicsProcessor::GetMaxLookaheadMsec(this_00);
    dVar16 = **(double **)&(this->LookaheadTimeInput).field_0x8 * __real_408f400000000000;
    if ((double)fVar17 <= dVar16) {
      dVar16 = (double)fVar17;
    }
    if (dVar16 <= 0.0) {
      dVar16 = 0.0;
    }
    fVar17 = (float)dVar16;
    if (__real_322bcc77 <
        (float)((uint)(fVar17 - this->PrevLookaheadTime) & __xmm_7fffffff7fffffff7fffffff7fffffff))
    {
      Audio::FDynamicsProcessor::SetLookaheadMsec(this_00,fVar17);
      this->PrevLookaheadTime = fVar17;
    }
    Audio::FIntegerDelay::SetDelayLengthSamples(&this->InputDelay,(int)(fVar17 * this->MsToSamples))
    ;
    fVar17 = **(float **)&(this->KneeInput).field_0x8;
    if (fVar17 != this->PrevKneeInput) {
      Audio::FDynamicsProcessor::SetKneeBandwidth(this_00,fVar17);
      this->PrevKneeInput = **(float **)&(this->KneeInput).field_0x8;
    }
    cVar1 = **(char **)&(this->bIsUpwardsInput).field_0x8;
    if ((bool)cVar1 != this->bPrevIsUpwardsInput) {
      Audio::FDynamicsProcessor::SetProcessingMode
                (this_00,-(uint)(cVar1 != '\0') & UpwardsCompressor);
      this->bPrevIsUpwardsInput = (bool)**(undefined1 **)&(this->bIsUpwardsInput).field_0x8;
    }
    EVar3 = **(EEnvelopePeakMode **)&(this->EnvelopeModeInput).field_0x8;
    if (EVar3 != this->PrevPeakMode) {
      if (EVar3 == Peak) {
        TVar13 = Peak;
      }
      else if ((EVar3 == MeanSquared) || (EVar3 != RootMeanSquared)) {
        TVar13 = MeanSquared;
      }
      else {
        TVar13 = RootMeanSquared;
      }
      Audio::FDynamicsProcessor::SetPeakMode(this_00,TVar13);
      this->PrevPeakMode = **(EEnvelopePeakMode **)&(this->EnvelopeModeInput).field_0x8;
    }
    if ((1 < (byte)LogMetaSound._0_1_) &&
       ((this->DelayedInputSignal).InitialNum != (this->DelayedInputSignal).Buffer.ArrayNum)) {
      UE::Logging::Private::BasicLog<2>
                ((FStaticBasicLogRecord *)
                 &`public:___cdecl_Metasound::FAudioBuffer::operator_class_TArrayView<float,int>(void)___ptr64'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    iVar2 = (this->DelayedInputSignal).Buffer.ArrayNum;
    pFVar7 = (this->DelayedInputSignal).Buffer.AllocatorInstance.Data;
    if (iVar2 < 0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L"");
      if (bVar12) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    uVar11 = local_78[0]._12_4_;
    puVar6 = *(undefined8 **)&(this->AudioInput).field_0x8;
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar6 + 2) != *(int *)(puVar6 + 1))) {
      UE::Logging::Private::BasicLog<2>
                ((FStaticBasicLogRecord *)
                 &`public:___cdecl_Metasound::FAudioBuffer::operator_class_TArrayView<float_const_,int>(void)const___ptr64'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    pfVar8 = (float *)*puVar6;
    iVar4 = *(int *)(puVar6 + 1);
    if (iVar4 < 0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L"");
      if (bVar12) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    local_b8._12_4_ = uVar11;
    local_b8.ArrayNum = iVar2;
    local_a8._12_4_ = uStack_bc;
    local_a8.ArrayNum = iVar4;
    local_b8.DataPtr = (float *)pFVar7;
    local_a8.DataPtr = pfVar8;
    Audio::FIntegerDelay::ProcessAudio(&this->InputDelay,&local_a8,&local_b8);
    puVar6 = *(undefined8 **)&(this->AudioInput).field_0x8;
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar6 + 2) != *(int *)(puVar6 + 1))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    local_res20 = (float *)*puVar6;
    puVar6 = *(undefined8 **)&(this->AudioOutput).field_0x8;
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar6 + 2) != *(int *)(puVar6 + 1))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                  __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    local_res18 = (float *)*puVar6;
    puVar6 = *(undefined8 **)&(this->SidechainInput).field_0x8;
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar6 + 2) != *(int *)(puVar6 + 1))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    local_res8 = (float *)*puVar6;
    puVar6 = *(undefined8 **)&(this->EnvelopeOutput).field_0x8;
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar6 + 2) != *(int *)(puVar6 + 1))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                  __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    local_res10 = (float *)*puVar6;
    lVar5 = *(longlong *)&(this->AudioInput).field_0x8;
    ppfVar14 = &local_res8;
    if (this->bUseSidechain == false) {
      ppfVar14 = (float **)0x0;
    }
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar5 + 0x10) != *(int *)(lVar5 + 8))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                  LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    Audio::FDynamicsProcessor::ProcessAudio
              (this_00,&local_res20,*(int *)(lVar5 + 8),&local_res18,ppfVar14,&local_res10);
    pfVar8 = *(float **)&(this->WetDryMixInput).field_0x8;
    puVar6 = *(undefined8 **)&(this->AudioOutput).field_0x8;
    this->bEnvelopeOutputIsZero = false;
    fVar17 = *pfVar8;
    if (fVar10 <= fVar17) {
      fVar17 = fVar10;
    }
    if (fVar17 <= 0.0) {
      fVar17 = 0.0;
    }
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar6 + 2) != *(int *)(puVar6 + 1))) {
      UE::Logging::Private::BasicLog<2>
                ((FStaticBasicLogRecord *)
                 &`public:___cdecl_Metasound::FAudioBuffer::operator_class_TArrayView<float,int>(void)___ptr64'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    pfVar8 = (float *)*puVar6;
    iVar2 = *(int *)(puVar6 + 1);
    if (iVar2 < 0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L"");
      if (bVar12) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    local_98._12_4_ = uStack_bc;
    local_98.ArrayNum = iVar2;
    local_98.DataPtr = pfVar8;
    Audio::ArrayMultiplyByConstantInPlace(&local_98,fVar17);
    puVar6 = *(undefined8 **)&(this->AudioOutput).field_0x8;
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar6 + 2) != *(int *)(puVar6 + 1))) {
      UE::Logging::Private::BasicLog<2>
                ((FStaticBasicLogRecord *)
                 &`public:___cdecl_Metasound::FAudioBuffer::operator_class_TArrayView<float,int>(void)___ptr64'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    pfVar8 = (float *)*puVar6;
    iVar2 = *(int *)(puVar6 + 1);
    if (iVar2 < 0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L"");
      if (bVar12) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    if ((1 < (byte)LogMetaSound._0_1_) &&
       ((this->DelayedInputSignal).InitialNum != (this->DelayedInputSignal).Buffer.ArrayNum)) {
      UE::Logging::Private::BasicLog<2>
                ((FStaticBasicLogRecord *)
                 &`public:___cdecl_Metasound::FAudioBuffer::operator_class_TArrayView<float_const_,int>(void)const___ptr64'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    pFVar7 = (this->DelayedInputSignal).Buffer.AllocatorInstance.Data;
    iVar4 = (this->DelayedInputSignal).Buffer.ArrayNum;
    if (iVar4 < 0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L"");
      if (bVar12) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    local_88._12_4_ = local_78[0]._12_4_;
    local_88.ArrayNum = iVar2;
    local_78[0]._12_4_ = uStack_bc;
    local_78[0].ArrayNum = iVar4;
    local_88.DataPtr = pfVar8;
    local_78[0].DataPtr = (float *)pFVar7;
    Audio::ArrayMultiplyAddInPlace(local_78,fVar10 - fVar17,&local_88);
  }
  else {
    lVar5 = *(longlong *)&(this->AudioInput).field_0x8;
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar5 + 0x10) != *(int *)(lVar5 + 8))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                  LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    iVar2 = *(int *)(lVar5 + 8);
    puVar6 = *(undefined8 **)&(this->AudioInput).field_0x8;
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar6 + 2) != *(int *)(puVar6 + 1))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    _Src = (void *)*puVar6;
    puVar6 = *(undefined8 **)&(this->AudioOutput).field_0x8;
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar6 + 2) != *(int *)(puVar6 + 1))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                  __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    memcpy((void *)*puVar6,_Src,(longlong)iVar2 << 2);
    if (this->bEnvelopeOutputIsZero == false) {
      puVar6 = *(undefined8 **)&(this->EnvelopeOutput).field_0x8;
      iVar2 = *(int *)(puVar6 + 1);
      if (0 < iVar2) {
        memset((void *)*puVar6,0,(longlong)iVar2 << 2);
      }
      this->bEnvelopeOutputIsZero = true;
      return;
    }
  }
  return;
}

// GetNodeInfo @ 14b075aa0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::FCompressorOperator::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FCompressorOperator::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FCompressorOperator::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FCompressorOperator::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::FCompressorOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FCompressorOperator::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::FCompressorOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FCompressorOperator::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FCompressorOperator::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FCompressorOperator::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// Reset @ 14b07a9b0

void __thiscall
Metasound::FCompressorOperator::Reset(FCompressorOperator *this,FResetParams *param_1)

{
  FDynamicsProcessor *this_00;
  float fVar1;
  int iVar2;
  undefined8 *puVar3;
  double *pdVar4;
  double *pdVar5;
  char *pcVar6;
  Type TVar7;
  double dVar8;
  double dVar9;
  
  puVar3 = *(undefined8 **)&(this->AudioOutput).field_0x8;
  iVar2 = *(int *)(puVar3 + 1);
  if (0 < iVar2) {
    memset((void *)*puVar3,0,(longlong)iVar2 << 2);
  }
  puVar3 = *(undefined8 **)&(this->EnvelopeOutput).field_0x8;
  iVar2 = *(int *)(puVar3 + 1);
  if (0 < iVar2) {
    memset((void *)*puVar3,0,(longlong)iVar2 << 2);
  }
  this->bEnvelopeOutputIsZero = true;
  Audio::FIntegerDelay::Reset(&this->InputDelay);
  iVar2 = (this->DelayedInputSignal).Buffer.ArrayNum;
  if (0 < iVar2) {
    memset((this->DelayedInputSignal).Buffer.AllocatorInstance.Data,0,(longlong)iVar2 << 2);
  }
  dVar9 = __real_408f400000000000;
  this_00 = &this->Compressor;
  pdVar4 = *(double **)&(this->ReleaseTimeInput).field_0x8;
  dVar8 = **(double **)&(this->AttackTimeInput).field_0x8 * __real_408f400000000000;
  if (dVar8 <= 0.0) {
    dVar8 = 0.0;
  }
  this->PrevAttackTime = (float)dVar8;
  pdVar5 = *(double **)&(this->LookaheadTimeInput).field_0x8;
  dVar8 = *pdVar4 * dVar9;
  if (dVar8 <= 0.0) {
    dVar8 = 0.0;
  }
  this->PrevReleaseTime = (float)dVar8;
  dVar9 = *pdVar5 * dVar9;
  if (dVar9 <= 0.0) {
    dVar9 = 0.0;
  }
  this->PrevLookaheadTime = (float)dVar9;
  TVar7 = RootMeanSquared;
  Audio::FDynamicsProcessor::Init(this_00,(float)param_1->OperatorSettings->SampleRate,1);
  Audio::FDynamicsProcessor::SetKeyNumChannels(this_00,1);
  fVar1 = **(float **)&(this->RatioInput).field_0x8;
  if (fVar1 <= __real_3f800000) {
    fVar1 = __real_3f800000;
  }
  this->PrevClampedRatio = fVar1;
  Audio::FDynamicsProcessor::SetRatio(this_00,fVar1);
  Audio::FDynamicsProcessor::SetThreshold(this_00,**(float **)&(this->ThresholdDbInput).field_0x8);
  this->PrevThreshold = **(float **)&(this->ThresholdDbInput).field_0x8;
  Audio::FDynamicsProcessor::SetAttackTime(this_00,this->PrevAttackTime);
  Audio::FDynamicsProcessor::SetReleaseTime(this_00,this->PrevReleaseTime);
  Audio::FDynamicsProcessor::SetLookaheadMsec(this_00,this->PrevLookaheadTime);
  Audio::FDynamicsProcessor::SetKneeBandwidth(this_00,**(float **)&(this->KneeInput).field_0x8);
  pcVar6 = *(char **)&(this->bIsUpwardsInput).field_0x8;
  this->PrevKneeInput = **(float **)&(this->KneeInput).field_0x8;
  Audio::FDynamicsProcessor::SetProcessingMode(this_00,-(uint)(*pcVar6 != '\0') & UpwardsCompressor)
  ;
  this->bPrevIsUpwardsInput = (bool)**(undefined1 **)&(this->bIsUpwardsInput).field_0x8;
  iVar2 = **(int **)&(this->EnvelopeModeInput).field_0x8;
  if (iVar2 == 0) {
    TVar7 = Peak;
  }
  else if ((iVar2 == 1) || (iVar2 != 2)) {
    TVar7 = MeanSquared;
  }
  Audio::FDynamicsProcessor::SetPeakMode(this_00,TVar7);
  this->PrevPeakMode = **(EEnvelopePeakMode **)&(this->EnvelopeModeInput).field_0x8;
  return;
}

