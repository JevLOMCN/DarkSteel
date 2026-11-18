// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 11

// BindInputs @ 14b1aca60

void __thiscall
Metasound::FSuperOscillatorOperator::BindInputs
          (FSuperOscillatorOperator *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8 [2];
  TDataReadReference<bool> *local_res18;
  FName *local_res20;
  undefined1 local_58 [16];
  code *local_48;
  TDataReadReference<bool> **local_40;
  undefined1 local_38 [16];
  
  FLazyName::Resolve(&SuperOscillatorVertexNames::EnabledPinName);
  local_res18 = &this->bEnabled;
  local_40 = &local_res18;
  local_58._0_8_ = local_res8;
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
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&SuperOscillatorVertexNames::LimitOutputPinName);
  local_res18 = &this->bLimit;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_40 = &local_res18;
  local_38._0_8_ = local_res8;
  local_58._8_8_ = local_38;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&SuperOscillatorVertexNames::BaseFrequencyPinName);
  local_res18 = (TDataReadReference<bool> *)&this->BaseFrequency;
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
  FLazyName::Resolve(&SuperOscillatorVertexNames::NumVoicesPinName);
  local_res20 = local_res8;
  local_res18 = (TDataReadReference<bool> *)&this->NumVoices;
  local_38._8_8_ = &local_res18;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::SetValue<int>'::__l2::<lambda_2>,void,Metasound::VertexDataPrivate::FInputBinding_&>
       ::Call;
  local_40 = (TDataReadReference<bool> **)&local_res20;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::SetValue<int>'::__l2::<lambda_1>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)local_38);
  FLazyName::Resolve(&SuperOscillatorVertexNames::MaxDetunePinName);
  local_res18 = (TDataReadReference<bool> *)&this->MaxDetune;
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
  FLazyName::Resolve(&SuperOscillatorVertexNames::DetuneVolumePinName);
  local_res18 = (TDataReadReference<bool> *)&this->DetuneDb;
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
  FLazyName::Resolve(&SuperOscillatorVertexNames::GlideFactorPinName);
  local_res18 = (TDataReadReference<bool> *)&this->GlideFactor;
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
  FLazyName::Resolve(&SuperOscillatorVertexNames::PulseWidthPinName);
  local_res18 = (TDataReadReference<bool> *)&this->PulseWidth;
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
  FLazyName::Resolve(&SuperOscillatorVertexNames::FrequencyModPinName);
  local_res18 = (TDataReadReference<bool> *)&this->Fm;
  local_40 = &local_res18;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_58._8_8_ = local_38;
  local_38._0_8_ = local_res8;
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
  FLazyName::Resolve(&SuperOscillatorVertexNames::EntropyPinName);
  local_res18 = (TDataReadReference<bool> *)&this->Entropy;
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
  FLazyName::Resolve(&SuperOscillatorVertexNames::WaveTypePinName);
  local_res20 = local_res8;
  local_res18 = (TDataReadReference<bool> *)&this->OscType;
  local_38._8_8_ = &local_res18;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::SetValue<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>'::__l2::<lambda_2>,void,Metasound::VertexDataPrivate::FInputBinding_&>
       ::Call;
  local_40 = (TDataReadReference<bool> **)&local_res20;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::SetValue<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>'::__l2::<lambda_1>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)local_38);
  return;
}

// FillOutputs @ 14b1ace50

void __thiscall
Metasound::FSuperOscillatorOperator::FillOutputs
          (FSuperOscillatorOperator *this,float param_1,float param_2)

{
  return;
}

// ZeroOutputs @ 14b1ace60

void __thiscall Metasound::FSuperOscillatorOperator::ZeroOutputs(FSuperOscillatorOperator *this)

{
  return;
}

// GetStereoWidth @ 14b1ace70

float __thiscall Metasound::FSuperOscillatorOperator::GetStereoWidth(FSuperOscillatorOperator *this)

{
  return 0.0;
}

// LimitOutput @ 14b1ace80

void __thiscall Metasound::FSuperOscillatorOperator::LimitOutput(FSuperOscillatorOperator *this)

{
  return;
}

// FSuperOscillatorOperator @ 14b1cef70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FSuperOscillatorOperator * __thiscall
Metasound::FSuperOscillatorOperator::FSuperOscillatorOperator
          (FSuperOscillatorOperator *this,FSuperOscillatorOperatorConstructParams *param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  this->_padding_ = (longlong)&___7FSuperOscillatorOperator_Metasound__6B_;
  this->SampleRate = (float)param_1->Settings->SampleRate;
  this->Nyquist = (float)param_1->Settings->SampleRate * __real_3f000000;
  *(undefined ***)&this->bEnabled = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->bEnabled).field_0x8 = *(undefined8 *)&(param_1->Enabled).field_0x8;
  lVar1 = *(longlong *)&(param_1->Enabled).field_0x10;
  *(longlong *)&(this->bEnabled).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->bEnabled = &___7__TDataReadReference__N_Metasound__6B_;
  *(undefined ***)&this->bLimit = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->bLimit).field_0x8 = *(undefined8 *)&(param_1->Limiter).field_0x8;
  lVar1 = *(longlong *)&(param_1->Limiter).field_0x10;
  *(longlong *)&(this->bLimit).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->bLimit = &___7__TDataReadReference__N_Metasound__6B_;
  iVar3 = 0x10;
  if (param_1->NumVoices < 0x10) {
    iVar3 = param_1->NumVoices;
  }
  iVar2 = 1;
  if (1 < iVar3) {
    iVar2 = iVar3;
  }
  this->NumVoices = iVar2;
  *(undefined ***)&this->BaseFrequency = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->BaseFrequency).field_0x8 =
       *(undefined8 *)&(param_1->BaseFrequency).field_0x8;
  lVar1 = *(longlong *)&(param_1->BaseFrequency).field_0x10;
  *(longlong *)&(this->BaseFrequency).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->BaseFrequency = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->MaxDetune = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->MaxDetune).field_0x8 =
       *(undefined8 *)&(param_1->MaxDetuneSemitones).field_0x8;
  lVar1 = *(longlong *)&(param_1->MaxDetuneSemitones).field_0x10;
  *(longlong *)&(this->MaxDetune).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->MaxDetune = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->Entropy = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->Entropy).field_0x8 = *(undefined8 *)&(param_1->Entropy).field_0x8;
  lVar1 = *(longlong *)&(param_1->Entropy).field_0x10;
  *(longlong *)&(this->Entropy).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Entropy = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->DetuneDb = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->DetuneDb).field_0x8 =
       *(undefined8 *)&(param_1->DetunedVoiceVolumeDb).field_0x8;
  lVar1 = *(longlong *)&(param_1->DetunedVoiceVolumeDb).field_0x10;
  *(longlong *)&(this->DetuneDb).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->DetuneDb = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->GlideFactor = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->GlideFactor).field_0x8 = *(undefined8 *)&(param_1->GlideFactor).field_0x8;
  lVar1 = *(longlong *)&(param_1->GlideFactor).field_0x10;
  *(longlong *)&(this->GlideFactor).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->GlideFactor = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->PulseWidth = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->PulseWidth).field_0x8 = *(undefined8 *)&(param_1->PulseWidth).field_0x8;
  lVar1 = *(longlong *)&(param_1->PulseWidth).field_0x10;
  *(longlong *)&(this->PulseWidth).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->PulseWidth = &___7__TDataReadReference_M_Metasound__6B_;
  this->bUseModulation = param_1->bUseModulation;
  *(undefined ***)&this->Fm = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->Fm).field_0x8 = *(undefined8 *)&(param_1->Fm).field_0x8;
  lVar1 = *(longlong *)&(param_1->Fm).field_0x10;
  *(longlong *)&(this->Fm).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Fm = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  (this->OscType).EnumValue = (param_1->OscType).EnumValue;
  (this->ScratchBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScratchBuffer).ArrayNum = 0;
  (this->ScratchBuffer).ArrayMax = 0;
  (this->Generators).AllocatorInstance.SecondaryData =
       (ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
        )0x0;
  (this->Generators).ArrayNum = 0;
  (this->Generators).ArrayMax = 0x10;
  TArray<float,TAlignedHeapAllocator<16>_>::SetNumZeroed
            (&this->ScratchBuffer,param_1->Settings->NumFramesPerBlock,Default);
  InitializeGenerators(this);
  return this;
}

// ~FSuperOscillatorOperator @ 14b1d0070

void __thiscall
Metasound::FSuperOscillatorOperator::~FSuperOscillatorOperator(FSuperOscillatorOperator *this)

{
  ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
  FVar1;
  FScriptContainerElement *pFVar2;
  
  FVar1 = (this->Generators).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
                )0x0) {
    FMemory::Free((void *)FVar1);
  }
  pFVar2 = (this->ScratchBuffer).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Fm).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->PulseWidth).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->GlideFactor).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->DetuneDb).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Entropy).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->MaxDetune).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->BaseFrequency).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->bLimit).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->bEnabled).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// Execute @ 14b1df920

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall Metasound::FSuperOscillatorOperator::Execute(FSuperOscillatorOperator *this)

{
  int iVar1;
  double _X;
  bool bVar2;
  float fVar3;
  int iVar4;
  ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
  FVar5;
  ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
  FVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 local_res8 [8];
  <lambda_1> local_res10;
  FVoiceGeneratorArgs local_d8 [2];
  
  fVar3 = __real_3f800000;
  if ((this->Generators).ArrayNum != 0) {
    fVar7 = this->Nyquist;
    fVar9 = **(float **)&(this->BaseFrequency).field_0x8;
    if (fVar7 <= fVar9) {
      fVar9 = fVar7;
    }
    fVar11 = **(float **)&(this->Entropy).field_0x8;
    if (__real_3f800000 <= fVar11) {
      fVar11 = __real_3f800000;
    }
    if (fVar9 <= (float)((uint)fVar7 ^ __xmm_80000000800000008000000080000000)) {
      fVar9 = (float)((uint)fVar7 ^ __xmm_80000000800000008000000080000000);
    }
    _X = (double)**(float **)&(this->GlideFactor).field_0x8;
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    fVar7 = fVar3;
    if (((0.0 < _X) && (fVar7 = __real_38d1b717, _X < __real_3ff0000000000000)) &&
       (iVar4 = _isnan(_X), fVar7 = fVar3, iVar4 == 0)) {
      fVar7 = expf((float)(__real_3e45798ee0000000 - _X * ___real_40226bb1bce43b52));
    }
    fVar10 = **(float **)&(this->MaxDetune).field_0x8;
    if (__real_42400000 <= fVar10) {
      fVar10 = __real_42400000;
    }
    if (fVar10 <= __real_c2400000) {
      fVar10 = __real_c2400000;
    }
    fVar8 = fVar3;
    if (fVar10 != 0.0) {
      fVar8 = powf(__real_40000000,fVar10 * __real_3daaaaab);
    }
    fVar10 = **(float **)&(this->DetuneDb).field_0x8;
    if (__real_41c00000 <= fVar10) {
      fVar10 = __real_41c00000;
    }
    if (fVar10 <= __real_c3200000) {
      fVar10 = __real_c3200000;
    }
    local_d8[0].BlendGain = powf(__real_41200000,fVar10 * __real_3d4ccccd);
    iVar4 = (this->ScratchBuffer).ArrayNum;
    local_d8[0].PulseWidth = **(float **)&(this->PulseWidth).field_0x8;
    if (__real_3f7d70a4 <= local_d8[0].PulseWidth) {
      local_d8[0].PulseWidth = __real_3f7d70a4;
    }
    if (local_d8[0].PulseWidth <= __real_3c23d70a) {
      local_d8[0].PulseWidth = __real_3c23d70a;
    }
    TArray<float,TAlignedHeapAllocator<16>_>::SetNumZeroed(&this->ScratchBuffer,iVar4,Default);
    (**(code **)(this->_padding_ + 0x50))(this);
    if ((**(char **)&(this->bEnabled).field_0x8 != '\0') && (0 < iVar4)) {
      local_d8[0].SampleRate = this->SampleRate;
      local_d8[0].FrequencyHz = fVar9;
      local_d8[0].DetuneMultiplier = fVar8;
      local_d8[0].Entropy = fVar11;
      local_d8[0].GlideEaseFactor = fVar7;
      local_d8[0].StereoWidth = (float)(**(code **)(this->_padding_ + 0x58))(this);
      local_d8[0].AlignedBuffer.DataPtr = (float *)(this->ScratchBuffer).AllocatorInstance.Data;
      local_d8[0].AlignedBuffer.ArrayNum = iVar4;
      local_d8[0].Fm.DataPtr = FAudioBuffer::GetData(*(FAudioBuffer **)&(this->Fm).field_0x8);
      iVar1 = (this->Generators).ArrayNum;
      FVar5 = (this->Generators).AllocatorInstance.SecondaryData;
      bVar2 = false;
      local_res10.Args = local_d8;
      if (FVar5 == (ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
                    )0x0) {
        FVar5 = (ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
                 )&this->Generators;
      }
      FVar6 = (ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
               )((longlong)iVar1 * 0x1c + (longlong)FVar5);
      local_d8[0].Fm.ArrayNum = iVar4;
      while( true ) {
        if ((this->Generators).ArrayNum != iVar1) {
          `TCheckedPointerIterator<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (FVar5 == FVar6) break;
        fVar7 = fVar3;
        if (bVar2) {
          fVar7 = local_d8[0].BlendGain;
        }
        fVar9 = (*switchD_14b1c9b8f::switchdataD_15238a780[*(byte *)((longlong)FVar5 + 0x18)])
                          (&local_res10,
                           (TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
                            *)FVar5);
        (**(code **)(this->_padding_ + 0x48))(this,fVar7,fVar9 * local_d8[0].StereoWidth);
        FVar5 = (ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
                 )((longlong)FVar5 + 0x1c);
        bVar2 = true;
      }
      if (**(char **)&(this->bLimit).field_0x8 != '\0') {
        (**(code **)(this->_padding_ + 0x68))(this);
      }
    }
  }
  return;
}

// InitializeGenerators @ 14b1e8470

void __thiscall
Metasound::FSuperOscillatorOperator::InitializeGenerators(FSuperOscillatorOperator *this)

{
  ELfoWaveshapeType EVar1;
  code *pcVar2;
  bool bVar3;
  
  EVar1 = (this->OscType).EnumValue;
  if (this->bUseModulation == false) {
    if (EVar1 == Sine) {
      Generators::
      FillGeneratorsArray<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>_>
                (&this->Generators,this->NumVoices,this->SampleRate);
      return;
    }
    if (EVar1 == Saw) {
      Generators::
      FillGeneratorsArray<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
                (&this->Generators,this->NumVoices,this->SampleRate);
      return;
    }
    if (EVar1 == Triangle) {
      Generators::
      FillGeneratorsArray<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>_>
                (&this->Generators,this->NumVoices,this->SampleRate);
      return;
    }
    if (EVar1 == Square) {
      Generators::
      FillGeneratorsArray<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
                (&this->Generators,this->NumVoices,this->SampleRate);
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Unsupported Wave Shape in FSuperOscillatorOperator\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundSuperOscillatorNode.cpp"
                       ,0x17a,L"");
    if (!bVar3) {
      return;
    }
  }
  else {
    if (EVar1 == Sine) {
      Generators::
      FillGeneratorsArray<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>_>
                (&this->Generators,this->NumVoices,this->SampleRate);
      return;
    }
    if (EVar1 == Saw) {
      Generators::
      FillGeneratorsArray<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
                (&this->Generators,this->NumVoices,this->SampleRate);
      return;
    }
    if (EVar1 == Triangle) {
      Generators::
      FillGeneratorsArray<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>_>
                (&this->Generators,this->NumVoices,this->SampleRate);
      return;
    }
    if (EVar1 == Square) {
      Generators::
      FillGeneratorsArray<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
                (&this->Generators,this->NumVoices,this->SampleRate);
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Unsupported Wave Shape in FSuperOscillatorOperator\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundSuperOscillatorNode.cpp"
                       ,0x164,L"");
    if (!bVar3) {
      return;
    }
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// Reset @ 14b1ea150

void __thiscall
Metasound::FSuperOscillatorOperator::Reset(FSuperOscillatorOperator *this,FResetParams *param_1)

{
  (**(code **)(this->_padding_ + 0x50))();
  (**(code **)(this->_padding_ + 0x60))(this);
  InitializeGenerators(this);
  return;
}

// SetLimiterSettings @ 14b1eb3d0

void __thiscall
Metasound::FSuperOscillatorOperator::SetLimiterSettings
          (FSuperOscillatorOperator *this,FDynamicsProcessor *param_1)

{
  Audio::FDynamicsProcessor::Init(param_1,this->SampleRate,1);
  Audio::FDynamicsProcessor::SetLookaheadMsec(param_1,__real_40a00000);
  Audio::FDynamicsProcessor::SetAttackTime(param_1,__real_41a00000);
  Audio::FDynamicsProcessor::SetReleaseTime(param_1,__real_43480000);
  Audio::FDynamicsProcessor::SetThreshold(param_1,__real_c0c00000);
  Audio::FDynamicsProcessor::SetRatio(param_1,__real_41200000);
  Audio::FDynamicsProcessor::SetOutputGain(param_1,0.0);
  Audio::FDynamicsProcessor::SetAnalogMode(param_1,true);
  Audio::FDynamicsProcessor::SetPeakMode(param_1,Peak);
  Audio::FDynamicsProcessor::SetProcessingMode(param_1,Compressor);
  return;
}

