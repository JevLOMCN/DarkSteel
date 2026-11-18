// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 12

// BindInputs @ 14b15dfd0

void __thiscall
Metasound::
TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  longlong local_res18;
  undefined1 local_58 [16];
  code *local_48;
  longlong *local_40;
  undefined1 local_38 [16];
  
  FLazyName::Resolve(&OscillatorCommonVertexNames::EnabledPinName);
  local_res18 = (longlong)this + 0x20;
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
  local_res18 = (longlong)this + 0x40;
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
  local_res18 = (longlong)this + 0x80;
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
  local_res18 = (longlong)this + 0x60;
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
  local_res18 = (longlong)this + 0xa0;
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
  local_res18 = (longlong)this + 0xc0;
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
  FLazyName::Resolve(&OscillatorCommonVertexNames::TypePinName);
  local_res18 = (longlong)this + 0x120;
  local_40 = &local_res18;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_58._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&OscillatorCommonVertexNames::FrequencyModPinName);
  local_res18 = (longlong)this + 0x100;
  local_40 = &local_res18;
  local_58._8_8_ = local_38;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
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
  return;
}

// BindInputs @ 14b15e2f0

void __thiscall
Metasound::
TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  longlong local_res18;
  undefined1 local_58 [16];
  code *local_48;
  longlong *local_40;
  undefined1 local_38 [16];
  
  FLazyName::Resolve(&OscillatorCommonVertexNames::EnabledPinName);
  local_res18 = (longlong)this + 0x20;
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
  local_res18 = (longlong)this + 0x40;
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
  local_res18 = (longlong)this + 0x80;
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
  local_res18 = (longlong)this + 0x60;
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
  local_res18 = (longlong)this + 0xa0;
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
  local_res18 = (longlong)this + 0xc0;
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
  FLazyName::Resolve(&OscillatorCommonVertexNames::TypePinName);
  local_res18 = (longlong)this + 0x120;
  local_40 = &local_res18;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_58._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&OscillatorCommonVertexNames::FrequencyModPinName);
  local_res18 = (longlong)this + 0x100;
  local_40 = &local_res18;
  local_58._8_8_ = local_38;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
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
  return;
}

// BindInputs @ 14b15e610

void __thiscall
Metasound::
TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  longlong local_res18;
  undefined1 local_58 [16];
  code *local_48;
  longlong *local_40;
  undefined1 local_38 [16];
  
  FLazyName::Resolve(&OscillatorCommonVertexNames::EnabledPinName);
  local_res18 = (longlong)this + 0x20;
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
  local_res18 = (longlong)this + 0x40;
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
  local_res18 = (longlong)this + 0x80;
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
  local_res18 = (longlong)this + 0x60;
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
  local_res18 = (longlong)this + 0xa0;
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
  local_res18 = (longlong)this + 0xc0;
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
  FLazyName::Resolve(&OscillatorCommonVertexNames::TypePinName);
  local_res18 = (longlong)this + 0x120;
  local_40 = &local_res18;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_58._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&OscillatorCommonVertexNames::FrequencyModPinName);
  local_res18 = (longlong)this + 0x100;
  local_40 = &local_res18;
  local_58._8_8_ = local_38;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
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
  return;
}

// BindInputs @ 14b15e930

void __thiscall
Metasound::
TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  longlong local_res18;
  undefined1 local_58 [16];
  code *local_48;
  longlong *local_40;
  undefined1 local_38 [16];
  
  FLazyName::Resolve(&OscillatorCommonVertexNames::EnabledPinName);
  local_res18 = (longlong)this + 0x20;
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
  local_res18 = (longlong)this + 0x40;
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
  local_res18 = (longlong)this + 0x80;
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
  local_res18 = (longlong)this + 0x60;
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
  local_res18 = (longlong)this + 0xa0;
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
  local_res18 = (longlong)this + 0xc0;
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
  FLazyName::Resolve(&OscillatorCommonVertexNames::TypePinName);
  local_res18 = (longlong)this + 0x120;
  local_40 = &local_res18;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_58._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&OscillatorCommonVertexNames::FrequencyModPinName);
  local_res18 = (longlong)this + 0x100;
  local_40 = &local_res18;
  local_58._8_8_ = local_38;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
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
  return;
}

// BindInputs @ 14b15ec50

void __thiscall
Metasound::
TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  longlong local_res18;
  undefined1 local_58 [16];
  code *local_48;
  longlong *local_40;
  undefined1 local_38 [16];
  
  FLazyName::Resolve(&OscillatorCommonVertexNames::EnabledPinName);
  local_res18 = (longlong)this + 0x20;
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
  local_res18 = (longlong)this + 0x40;
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
  local_res18 = (longlong)this + 0x80;
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
  local_res18 = (longlong)this + 0x60;
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
  local_res18 = (longlong)this + 0xa0;
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
  local_res18 = (longlong)this + 0xc0;
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
  FLazyName::Resolve(&OscillatorCommonVertexNames::TypePinName);
  local_res18 = (longlong)this + 0x120;
  local_40 = &local_res18;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_58._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&OscillatorCommonVertexNames::FrequencyModPinName);
  local_res18 = (longlong)this + 0x100;
  local_40 = &local_res18;
  local_58._8_8_ = local_38;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
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
  return;
}

// BindInputs @ 14b15ef70

void __thiscall
Metasound::
TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  longlong local_res18;
  undefined1 local_58 [16];
  code *local_48;
  longlong *local_40;
  undefined1 local_38 [16];
  
  FLazyName::Resolve(&OscillatorCommonVertexNames::EnabledPinName);
  local_res18 = (longlong)this + 0x20;
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
  local_res18 = (longlong)this + 0x40;
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
  local_res18 = (longlong)this + 0x80;
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
  local_res18 = (longlong)this + 0x60;
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
  local_res18 = (longlong)this + 0xa0;
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
  local_res18 = (longlong)this + 0xc0;
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
  FLazyName::Resolve(&OscillatorCommonVertexNames::TypePinName);
  local_res18 = (longlong)this + 0x120;
  local_40 = &local_res18;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_58._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&OscillatorCommonVertexNames::FrequencyModPinName);
  local_res18 = (longlong)this + 0x100;
  local_40 = &local_res18;
  local_58._8_8_ = local_38;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
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
  return;
}

// Generate @ 14b18d6b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::
TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
::Generate(void *this,int param_1,int param_2,float param_3,float param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  FGeneratorArgs local_48;
  
  iVar3 = param_2 - param_1;
  if ((**(char **)((longlong)this + 0x28) != '\0') && (0 < iVar3)) {
    local_48.SampleRate = *(float *)((longlong)this + 0x14);
    local_48.BiPolar = (bool)**(undefined1 **)((longlong)this + 200);
    plVar1 = *(longlong **)((longlong)this + 0xe8);
    local_48.GlideEaseFactor = param_4;
    local_48.PulseWidth = 0.0;
    local_48.FrequencyHz = param_3;
    if ((1 < (byte)LogMetaSound._0_1_) && ((int)plVar1[2] != (int)plVar1[1])) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                  __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    plVar2 = *(longlong **)((longlong)this + 0x108);
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
    TGenerateBlockFM<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>::
    operator()((TGenerateBlockFM<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>
                *)((longlong)this + 8),&local_48);
  }
  return;
}

// Generate @ 14b18d7d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::
TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
::Generate(void *this,int param_1,int param_2,float param_3,float param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  FGeneratorArgs local_48;
  
  iVar3 = param_2 - param_1;
  if ((**(char **)((longlong)this + 0x28) != '\0') && (0 < iVar3)) {
    local_48.SampleRate = *(float *)((longlong)this + 0x14);
    local_48.BiPolar = (bool)**(undefined1 **)((longlong)this + 200);
    plVar1 = *(longlong **)((longlong)this + 0xe8);
    local_48.GlideEaseFactor = param_4;
    local_48.PulseWidth = 0.0;
    local_48.FrequencyHz = param_3;
    if ((1 < (byte)LogMetaSound._0_1_) && ((int)plVar1[2] != (int)plVar1[1])) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                  __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    plVar2 = *(longlong **)((longlong)this + 0x108);
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
    TGenerateBlockFM<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>::
    operator()((TGenerateBlockFM<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>
                *)((longlong)this + 8),&local_48);
  }
  return;
}

// Generate @ 14b18d8f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::
TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
::Generate(void *this,int param_1,int param_2,float param_3,float param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  FGeneratorArgs local_48;
  
  iVar3 = param_2 - param_1;
  if ((**(char **)((longlong)this + 0x28) != '\0') && (0 < iVar3)) {
    local_48.SampleRate = *(float *)((longlong)this + 0x14);
    local_48.BiPolar = (bool)**(undefined1 **)((longlong)this + 200);
    plVar1 = *(longlong **)((longlong)this + 0xe8);
    local_48.GlideEaseFactor = param_4;
    local_48.PulseWidth = 0.0;
    local_48.FrequencyHz = param_3;
    if ((1 < (byte)LogMetaSound._0_1_) && ((int)plVar1[2] != (int)plVar1[1])) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                  __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    plVar2 = *(longlong **)((longlong)this + 0x108);
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
    TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>
    ::operator()((TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>
                  *)((longlong)this + 8),&local_48);
  }
  return;
}

// Generate @ 14b18da10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::
TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
::Generate(void *this,int param_1,int param_2,float param_3,float param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  FGeneratorArgs local_48;
  
  iVar3 = param_2 - param_1;
  if ((**(char **)((longlong)this + 0x28) != '\0') && (0 < iVar3)) {
    local_48.SampleRate = *(float *)((longlong)this + 0x14);
    local_48.BiPolar = (bool)**(undefined1 **)((longlong)this + 200);
    plVar1 = *(longlong **)((longlong)this + 0xe8);
    local_48.GlideEaseFactor = param_4;
    local_48.PulseWidth = 0.0;
    local_48.FrequencyHz = param_3;
    if ((1 < (byte)LogMetaSound._0_1_) && ((int)plVar1[2] != (int)plVar1[1])) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                  __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    plVar2 = *(longlong **)((longlong)this + 0x108);
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
    TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>
    ::operator()((TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>
                  *)((longlong)this + 8),&local_48);
  }
  return;
}

// Generate @ 14b18db30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::
TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
::Generate(void *this,int param_1,int param_2,float param_3,float param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  FGeneratorArgs local_48;
  
  iVar3 = param_2 - param_1;
  if ((**(char **)((longlong)this + 0x28) != '\0') && (0 < iVar3)) {
    local_48.SampleRate = *(float *)((longlong)this + 0x14);
    local_48.BiPolar = (bool)**(undefined1 **)((longlong)this + 200);
    plVar1 = *(longlong **)((longlong)this + 0xe8);
    local_48.GlideEaseFactor = param_4;
    local_48.PulseWidth = 0.0;
    local_48.FrequencyHz = param_3;
    if ((1 < (byte)LogMetaSound._0_1_) && ((int)plVar1[2] != (int)plVar1[1])) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                  __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    plVar2 = *(longlong **)((longlong)this + 0x108);
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
    TGenerateBlockFM<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>::
    operator()((TGenerateBlockFM<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>
                *)((longlong)this + 8),&local_48);
  }
  return;
}

// Generate @ 14b18dc50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::
TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
::Generate(void *this,int param_1,int param_2,float param_3,float param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  FGeneratorArgs local_48;
  
  iVar3 = param_2 - param_1;
  if ((**(char **)((longlong)this + 0x28) != '\0') && (0 < iVar3)) {
    local_48.SampleRate = *(float *)((longlong)this + 0x14);
    local_48.BiPolar = (bool)**(undefined1 **)((longlong)this + 200);
    plVar1 = *(longlong **)((longlong)this + 0xe8);
    local_48.GlideEaseFactor = param_4;
    local_48.PulseWidth = 0.0;
    local_48.FrequencyHz = param_3;
    if ((1 < (byte)LogMetaSound._0_1_) && ((int)plVar1[2] != (int)plVar1[1])) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                  __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    plVar2 = *(longlong **)((longlong)this + 0x108);
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
    TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>::
    operator()((TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>
                *)((longlong)this + 8),&local_48);
  }
  return;
}

