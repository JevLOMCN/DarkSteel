// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 6

// FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_> @ 14b12e1c0

/* WARNING: Enum "Type": Some values do not have unique names */

FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>
* __thiscall
Metasound::
FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>
::
FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>
          (FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>
           *this,FOscillatorOperatorConstructParams *param_1,TDataReadReference<float> *param_2,
          TDataReadReference<Metasound::FAudioBuffer> *param_3,
          TDataReadReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>
  *pFVar5;
  
  TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>
  ::
  TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>
            ((TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>
              *)this,param_1);
  this->_padding_ =
       (longlong)
       &
       ___7__FSquareOperatorFM_U__TGenerateBlockFM_UFSquareGenerator_Generators_Metasound__UFWrapPhase_23__Generators_Metasound___Metasound__6B_
  ;
  *(undefined ***)&this->PulseWidth = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->PulseWidth).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->PulseWidth).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->PulseWidth = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->FM = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->FM).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar1 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->FM).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->FM = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined ***)&this->GeneratorType =
       &
       ___7__TDataReference_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)&(this->GeneratorType).field_0x8 = *(undefined8 *)&param_4->field_0x8;
  lVar1 = *(longlong *)&param_4->field_0x10;
  *(longlong *)&(this->GeneratorType).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->GeneratorType =
       &
       ___7__TDataReadReference_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  plVar2 = *(longlong **)&param_3->field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && ((int)plVar2[2] != (int)plVar2[1])) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  if (*plVar2 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InFm->GetData()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundOscillatorNodes.cpp"
                       ,0x274,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>
                *)(*pcVar3)();
      return pFVar5;
    }
  }
  lVar1 = *(longlong *)&param_3->field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar1 + 0x10) != *(int *)(lVar1 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  if (param_1->Settings->NumFramesPerBlock != *(int *)(lVar1 + 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InConstructParams.Settings.GetNumFramesPerBlock() == InFm->Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundOscillatorNodes.cpp"
                       ,0x275,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>
                *)(*pcVar3)();
      return pFVar5;
    }
  }
  return this;
}

// FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_> @ 14b12e370

/* WARNING: Enum "Type": Some values do not have unique names */

FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>
* __thiscall
Metasound::
FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>
::
FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>
          (FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>
           *this,FOscillatorOperatorConstructParams *param_1,TDataReadReference<float> *param_2,
          TDataReadReference<Metasound::FAudioBuffer> *param_3,
          TDataReadReference<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>
  *pFVar5;
  
  TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
  ::
  TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
            ((TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
              *)this,param_1);
  this->_padding_ =
       (longlong)
       &
       ___7__FSquareOperatorFM_U__TGenerateBlockFM_UFSquarePolysmoothGenerator_Generators_Metasound__UFWrapPhase_23__Generators_Metasound___Metasound__6B_
  ;
  *(undefined ***)&this->PulseWidth = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->PulseWidth).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->PulseWidth).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->PulseWidth = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->FM = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->FM).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar1 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->FM).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->FM = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined ***)&this->GeneratorType =
       &
       ___7__TDataReference_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)&(this->GeneratorType).field_0x8 = *(undefined8 *)&param_4->field_0x8;
  lVar1 = *(longlong *)&param_4->field_0x10;
  *(longlong *)&(this->GeneratorType).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->GeneratorType =
       &
       ___7__TDataReadReference_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  plVar2 = *(longlong **)&param_3->field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && ((int)plVar2[2] != (int)plVar2[1])) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  if (*plVar2 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InFm->GetData()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundOscillatorNodes.cpp"
                       ,0x274,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>
                *)(*pcVar3)();
      return pFVar5;
    }
  }
  lVar1 = *(longlong *)&param_3->field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar1 + 0x10) != *(int *)(lVar1 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  if (param_1->Settings->NumFramesPerBlock != *(int *)(lVar1 + 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InConstructParams.Settings.GetNumFramesPerBlock() == InFm->Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundOscillatorNodes.cpp"
                       ,0x275,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>
                *)(*pcVar3)();
      return pFVar5;
    }
  }
  return this;
}

// BindInputs @ 14b159d50

void __thiscall
Metasound::
FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>
::BindInputs(FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>
             *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<float> *local_res18;
  undefined1 local_58 [16];
  code *local_48;
  TDataReadReference<float> **local_40;
  undefined1 local_38 [16];
  
  FLazyName::Resolve(&OscillatorCommonVertexNames::EnabledPinName);
  local_res18 = (TDataReadReference<float> *)&this->_padding_;
  local_40 = &local_res18;
  local_58._0_8_ = &local_res8;
  local_38._8_8_ = local_58;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_58._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&OscillatorCommonVertexNames::OscBaseFrequencyPinName);
  local_res18 = (TDataReadReference<float> *)&this->_padding_;
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
  FLazyName::Resolve(&OscillatorCommonVertexNames::PhaseOffsetPinName);
  local_res18 = (TDataReadReference<float> *)&this->_padding_;
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
  FLazyName::Resolve(&OscillatorCommonVertexNames::OscPhaseResetPinName);
  local_res18 = (TDataReadReference<float> *)&this->_padding_;
  local_40 = &local_res18;
  local_58._8_8_ = local_38;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._0_8_ = &local_res8;
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
  FLazyName::Resolve(&OscillatorCommonVertexNames::GlideFactorPinName);
  local_res18 = (TDataReadReference<float> *)&this->_padding_;
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
  FLazyName::Resolve(&OscillatorCommonVertexNames::BiPolarPinName);
  local_res18 = (TDataReadReference<float> *)&this->_padding_;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_40 = &local_res18;
  local_38._0_8_ = &local_res8;
  local_58._8_8_ = local_38;
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
  FLazyName::Resolve(&SquareOscillatorVertexNames::SquarePulseWidthPinName);
  local_res18 = &this->PulseWidth;
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
  FLazyName::Resolve(&OscillatorCommonVertexNames::FrequencyModPinName);
  local_res18 = (TDataReadReference<float> *)&this->FM;
  local_40 = &local_res18;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_58._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&OscillatorCommonVertexNames::TypePinName);
  local_res18 = (TDataReadReference<float> *)&this->GeneratorType;
  local_40 = &local_res18;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_58._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  return;
}

// BindInputs @ 14b15a0c0

void __thiscall
Metasound::
FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>
::BindInputs(FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>
             *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<float> *local_res18;
  undefined1 local_58 [16];
  code *local_48;
  TDataReadReference<float> **local_40;
  undefined1 local_38 [16];
  
  FLazyName::Resolve(&OscillatorCommonVertexNames::EnabledPinName);
  local_res18 = (TDataReadReference<float> *)&this->_padding_;
  local_40 = &local_res18;
  local_58._0_8_ = &local_res8;
  local_38._8_8_ = local_58;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_58._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&OscillatorCommonVertexNames::OscBaseFrequencyPinName);
  local_res18 = (TDataReadReference<float> *)&this->_padding_;
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
  FLazyName::Resolve(&OscillatorCommonVertexNames::PhaseOffsetPinName);
  local_res18 = (TDataReadReference<float> *)&this->_padding_;
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
  FLazyName::Resolve(&OscillatorCommonVertexNames::OscPhaseResetPinName);
  local_res18 = (TDataReadReference<float> *)&this->_padding_;
  local_40 = &local_res18;
  local_58._8_8_ = local_38;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._0_8_ = &local_res8;
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
  FLazyName::Resolve(&OscillatorCommonVertexNames::GlideFactorPinName);
  local_res18 = (TDataReadReference<float> *)&this->_padding_;
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
  FLazyName::Resolve(&OscillatorCommonVertexNames::BiPolarPinName);
  local_res18 = (TDataReadReference<float> *)&this->_padding_;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_40 = &local_res18;
  local_38._0_8_ = &local_res8;
  local_58._8_8_ = local_38;
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
  FLazyName::Resolve(&SquareOscillatorVertexNames::SquarePulseWidthPinName);
  local_res18 = &this->PulseWidth;
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
  FLazyName::Resolve(&OscillatorCommonVertexNames::FrequencyModPinName);
  local_res18 = (TDataReadReference<float> *)&this->FM;
  local_40 = &local_res18;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_58._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&OscillatorCommonVertexNames::TypePinName);
  local_res18 = (TDataReadReference<float> *)&this->GeneratorType;
  local_40 = &local_res18;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_58._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  return;
}

// Generate @ 14b18cdd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::
FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>
::Generate(FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>
           *this,int param_1,int param_2,float param_3,float param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  FGeneratorArgs local_48;
  
  iVar3 = param_2 - param_1;
  if ((*(char *)this->_padding_ != '\0') && (0 < iVar3)) {
    local_48.SampleRate = *(float *)((longlong)&this->_padding_ + 4);
    local_48.PulseWidth = **(float **)&(this->PulseWidth).field_0x8;
    plVar1 = (longlong *)this->_padding_;
    local_48.BiPolar = *(bool *)this->_padding_;
    local_48.GlideEaseFactor = param_4;
    if (__real_3f800000 <= local_48.PulseWidth) {
      local_48.PulseWidth = __real_3f800000;
    }
    if (local_48.PulseWidth <= 0.0) {
      local_48.PulseWidth = 0.0;
    }
    local_48.FrequencyHz = param_3;
    if ((1 < (byte)LogMetaSound._0_1_) && ((int)plVar1[2] != (int)plVar1[1])) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                  __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    plVar2 = *(longlong **)&(this->FM).field_0x8;
    local_48.AlignedBuffer.DataPtr = (float *)(*plVar1 + (longlong)param_1 * 4);
    local_48.AlignedBuffer.ArrayNum = iVar3;
    if ((1 < (byte)LogMetaSound._0_1_) && ((int)plVar2[2] != (int)plVar2[1])) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    local_48.FM.DataPtr = (float *)(*plVar2 + (longlong)param_1 * 4);
    local_48.FM.ArrayNum = iVar3;
    Generators::
    TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>::
    operator()((TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>
                *)&this->_padding_,&local_48);
  }
  return;
}

// Generate @ 14b18cf00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::
FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>
::Generate(FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>
           *this,int param_1,int param_2,float param_3,float param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  FGeneratorArgs local_48;
  
  iVar3 = param_2 - param_1;
  if ((*(char *)this->_padding_ != '\0') && (0 < iVar3)) {
    local_48.SampleRate = *(float *)((longlong)&this->_padding_ + 4);
    local_48.PulseWidth = **(float **)&(this->PulseWidth).field_0x8;
    plVar1 = (longlong *)this->_padding_;
    local_48.BiPolar = *(bool *)this->_padding_;
    local_48.GlideEaseFactor = param_4;
    if (__real_3f800000 <= local_48.PulseWidth) {
      local_48.PulseWidth = __real_3f800000;
    }
    if (local_48.PulseWidth <= 0.0) {
      local_48.PulseWidth = 0.0;
    }
    local_48.FrequencyHz = param_3;
    if ((1 < (byte)LogMetaSound._0_1_) && ((int)plVar1[2] != (int)plVar1[1])) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                  __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    plVar2 = *(longlong **)&(this->FM).field_0x8;
    local_48.AlignedBuffer.DataPtr = (float *)(*plVar1 + (longlong)param_1 * 4);
    local_48.AlignedBuffer.ArrayNum = iVar3;
    if ((1 < (byte)LogMetaSound._0_1_) && ((int)plVar2[2] != (int)plVar2[1])) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    local_48.FM.DataPtr = (float *)(*plVar2 + (longlong)param_1 * 4);
    local_48.FM.ArrayNum = iVar3;
    Generators::
    TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>
    ::operator()((TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>
                  *)&this->_padding_,&local_48);
  }
  return;
}

