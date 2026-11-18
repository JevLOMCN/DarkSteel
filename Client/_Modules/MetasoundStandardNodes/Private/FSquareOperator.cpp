// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 4

// BindInputs @ 14b159730

void __thiscall
Metasound::
FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>
::BindInputs(FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>
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

// BindInputs @ 14b159a40

void __thiscall
Metasound::
FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>
::BindInputs(FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>
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

// Generate @ 14b18cbd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::
FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>
::Generate(FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>
           *this,int param_1,int param_2,float param_3,float param_4)

{
  longlong *plVar1;
  FGeneratorArgs local_48;
  
  if ((*(char *)this->_padding_ != '\0') && (0 < param_2 - param_1)) {
    local_48.SampleRate = *(float *)((longlong)&this->_padding_ + 4);
    local_48.PulseWidth = **(float **)&(this->PulseWidth).field_0x8;
    if (__real_3f800000 <= local_48.PulseWidth) {
      local_48.PulseWidth = __real_3f800000;
    }
    plVar1 = (longlong *)this->_padding_;
    local_48.BiPolar = *(bool *)this->_padding_;
    if (local_48.PulseWidth <= 0.0) {
      local_48.PulseWidth = 0.0;
    }
    local_48.GlideEaseFactor = param_4;
    local_48.FrequencyHz = param_3;
    if ((1 < (byte)LogMetaSound._0_1_) && ((int)plVar1[2] != (int)plVar1[1])) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                  __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    local_48.AlignedBuffer.DataPtr = (float *)(*plVar1 + (longlong)param_1 * 4);
    local_48.FM.DataPtr = (float *)0x0;
    local_48.FM.ArrayNum = 0;
    local_48.AlignedBuffer.ArrayNum = param_2 - param_1;
    Generators::
    TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>::
    operator()((TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>
                *)&this->_padding_,&local_48);
  }
  return;
}

// Generate @ 14b18ccd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::
FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>
::Generate(FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>
           *this,int param_1,int param_2,float param_3,float param_4)

{
  longlong *plVar1;
  FGeneratorArgs local_48;
  
  if ((*(char *)this->_padding_ != '\0') && (0 < param_2 - param_1)) {
    local_48.SampleRate = *(float *)((longlong)&this->_padding_ + 4);
    local_48.PulseWidth = **(float **)&(this->PulseWidth).field_0x8;
    if (__real_3f800000 <= local_48.PulseWidth) {
      local_48.PulseWidth = __real_3f800000;
    }
    plVar1 = (longlong *)this->_padding_;
    local_48.BiPolar = *(bool *)this->_padding_;
    if (local_48.PulseWidth <= 0.0) {
      local_48.PulseWidth = 0.0;
    }
    local_48.GlideEaseFactor = param_4;
    local_48.FrequencyHz = param_3;
    if ((1 < (byte)LogMetaSound._0_1_) && ((int)plVar1[2] != (int)plVar1[1])) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                  __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    local_48.AlignedBuffer.DataPtr = (float *)(*plVar1 + (longlong)param_1 * 4);
    local_48.FM.DataPtr = (float *)0x0;
    local_48.FM.ArrayNum = 0;
    local_48.AlignedBuffer.ArrayNum = param_2 - param_1;
    Generators::
    TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>
    ::operator()((TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>
                  *)&this->_padding_,&local_48);
  }
  return;
}

