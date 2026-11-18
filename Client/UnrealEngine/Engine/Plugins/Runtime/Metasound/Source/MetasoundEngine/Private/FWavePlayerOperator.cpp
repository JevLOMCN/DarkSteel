// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 13

// BindInputs @ 14b2f47e0

void __thiscall
Metasound::FWavePlayerOperator::BindInputs
          (FWavePlayerOperator *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8 [2];
  TDataReadReference<Metasound::FTrigger> *local_res18;
  FName *local_res20;
  undefined1 local_58 [16];
  code *local_48;
  TDataReadReference<Metasound::FTrigger> **local_40;
  undefined1 local_38 [16];
  
  FLazyName::Resolve(&WavePlayerVertexNames::InputTriggerPlayName);
  local_res18 = &this->PlayTrigger;
  local_40 = &local_res18;
  local_58._0_8_ = local_res8;
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
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&WavePlayerVertexNames::InputTriggerStopName);
  local_res18 = &this->StopTrigger;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_40 = &local_res18;
  local_38._0_8_ = local_res8;
  local_58._8_8_ = local_38;
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
  FLazyName::Resolve(&WavePlayerVertexNames::InputWaveAssetName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->WaveAsset;
  local_40 = &local_res18;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FWaveAsset>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_58._8_8_ = local_38;
  local_38._0_8_ = local_res8;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FWaveAsset>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&WavePlayerVertexNames::InputStartTimeName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->StartTime;
  local_40 = &local_res18;
  local_38._0_8_ = local_res8;
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
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&WavePlayerVertexNames::InputPitchShiftName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->PitchShift;
  local_40 = &local_res18;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_58._8_8_ = local_38;
  local_38._0_8_ = local_res8;
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
  FLazyName::Resolve(&WavePlayerVertexNames::InputLoopName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->bLoop;
  local_40 = &local_res18;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_58._8_8_ = local_38;
  local_38._0_8_ = local_res8;
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
  FLazyName::Resolve(&WavePlayerVertexNames::InputLoopStartName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->LoopStartTime;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTime>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_40 = &local_res18;
  local_38._0_8_ = local_res8;
  local_58._8_8_ = local_38;
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
  FLazyName::Resolve(&WavePlayerVertexNames::InputLoopDurationName);
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->LoopDuration;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTime>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_40 = &local_res18;
  local_38._0_8_ = local_res8;
  local_58._8_8_ = local_38;
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
  FLazyName::Resolve(&WavePlayerVertexNames::InputMaintainAudioSyncName);
  local_res20 = local_res8;
  local_res18 = (TDataReadReference<Metasound::FTrigger> *)&this->bMaintainAudioSync;
  local_38._8_8_ = &local_res18;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::SetValue<bool>'::__l2::<lambda_2>,void,Metasound::VertexDataPrivate::FInputBinding_&>
       ::Call;
  local_40 = (TDataReadReference<Metasound::FTrigger> **)&local_res20;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::SetValue<bool>'::__l2::<lambda_1>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)local_38);
  return;
}

// BindOutputs @ 14b2f4ba0

void __thiscall
Metasound::FWavePlayerOperator::BindOutputs
          (FWavePlayerOperator *this,FOutputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  FName local_res8;
  FName local_res18;
  FName local_res20;
  FName local_2d8;
  FName local_2d0;
  FName local_2c8;
  FName local_2c0;
  FName local_2b8;
  FName local_2b0;
  FName local_2a8;
  TDataReadReference<Metasound::FTrigger> *local_2a0;
  TDataWriteReference<Metasound::FTrigger> *local_298;
  TDataWriteReference<Metasound::FTrigger> *local_290;
  TDataWriteReference<Metasound::FTrigger> *local_288;
  TDataWriteReference<Metasound::FTrigger> *local_280;
  TDataWriteReference<int> *local_278;
  TDataWriteReference<FString> *local_270;
  TDataWriteReference<float> *local_268;
  TDataWriteReference<float> *local_260;
  TDataWriteReference<Metasound::FTime> *local_258;
  FScriptContainerElement *local_250;
  FName *local_248;
  TDataReadReference<Metasound::FTrigger> *local_240;
  code *local_238;
  TDataReadReference<Metasound::FTrigger> **local_230;
  code *local_228;
  FName **local_220;
  FName *local_218;
  TDataWriteReference<Metasound::FTrigger> *local_210;
  code *local_208;
  TDataWriteReference<Metasound::FTrigger> **local_200;
  code *local_1f8;
  FName **local_1f0;
  FName *local_1e8;
  TDataWriteReference<Metasound::FTrigger> *local_1e0;
  code *local_1d8;
  TDataWriteReference<Metasound::FTrigger> **local_1d0;
  code *local_1c8;
  FName **local_1c0;
  FName *local_1b8;
  TDataWriteReference<Metasound::FTrigger> *local_1b0;
  code *local_1a8;
  TDataWriteReference<Metasound::FTrigger> **local_1a0;
  code *local_198;
  FName **local_190;
  FName *local_188;
  TDataWriteReference<Metasound::FTrigger> *local_180;
  code *local_178;
  TDataWriteReference<Metasound::FTrigger> **local_170;
  code *local_168;
  FName **local_160;
  FName *local_158;
  TDataWriteReference<int> *local_150;
  code *local_148;
  TDataWriteReference<int> **local_140;
  code *local_138;
  FName **local_130;
  FName *local_128;
  TDataWriteReference<FString> *local_120;
  code *local_118;
  TDataWriteReference<FString> **local_110;
  code *local_108;
  FName **local_100;
  FName *local_f8;
  TDataWriteReference<float> *local_f0;
  code *local_e8;
  TDataWriteReference<float> **local_e0;
  code *local_d8;
  FName **local_d0;
  FName *local_c8;
  TDataWriteReference<float> *local_c0;
  code *local_b8;
  TDataWriteReference<float> **local_b0;
  code *local_a8;
  FName **local_a0;
  FName *local_98;
  TDataWriteReference<Metasound::FTime> *local_90;
  code *local_88;
  TDataWriteReference<Metasound::FTime> **local_80;
  code *local_78;
  FName **local_70;
  FName *local_68;
  FScriptContainerElement *local_60;
  code *local_58;
  FScriptContainerElement **local_50;
  code *local_48;
  FName **local_40;
  
  FLazyName::Resolve(&WavePlayerVertexNames::OutputTriggerOnPlayName);
  local_2a0 = &this->PlayTrigger;
  local_230 = &local_2a0;
  local_238 = UE::Core::Private::Function::
              TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
              ::Call;
  local_220 = &local_248;
  local_248 = &local_res8;
  local_228 = UE::Core::Private::Function::
              TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
              ::Call;
  local_240 = local_2a0;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_228,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)
             &local_238);
  FLazyName::Resolve(&WavePlayerVertexNames::OutputTriggerOnDoneName);
  local_298 = &this->TriggerOnDone;
  local_200 = &local_298;
  local_218 = &local_res18;
  local_1f0 = &local_218;
  local_208 = UE::Core::Private::Function::
              TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
              ::Call;
  local_1f8 = UE::Core::Private::Function::
              TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
              ::Call;
  local_210 = local_298;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_1f8,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)
             &local_208);
  FLazyName::Resolve(&WavePlayerVertexNames::OutputTriggerOnNearlyDoneName);
  local_290 = &this->TriggerOnNearlyDone;
  local_1d8 = UE::Core::Private::Function::
              TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
              ::Call;
  local_1d0 = &local_290;
  local_1e8 = &local_res20;
  local_1c0 = &local_1e8;
  local_1c8 = UE::Core::Private::Function::
              TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
              ::Call;
  local_1e0 = local_290;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res20,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_1c8,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)
             &local_1d8);
  FLazyName::Resolve(&WavePlayerVertexNames::OutputTriggerOnLoopedName);
  local_288 = &this->TriggerOnLooped;
  local_1a8 = UE::Core::Private::Function::
              TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
              ::Call;
  local_1a0 = &local_288;
  local_1b8 = &local_2d8;
  local_190 = &local_1b8;
  local_198 = UE::Core::Private::Function::
              TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
              ::Call;
  local_1b0 = local_288;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_2d8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_198,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)
             &local_1a8);
  FLazyName::Resolve(&WavePlayerVertexNames::OutputTriggerOnCuePointName);
  local_280 = &this->TriggerOnCuePoint;
  local_178 = UE::Core::Private::Function::
              TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
              ::Call;
  local_170 = &local_280;
  local_188 = &local_2d0;
  local_160 = &local_188;
  local_168 = UE::Core::Private::Function::
              TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
              ::Call;
  local_180 = local_280;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_2d0,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_168,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)
             &local_178);
  FLazyName::Resolve(&WavePlayerVertexNames::OutputCuePointIDName);
  local_278 = &this->CuePointID;
  local_140 = &local_278;
  local_148 = UE::Core::Private::Function::
              TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
              ::Call;
  local_130 = &local_158;
  local_158 = &local_2c8;
  local_138 = UE::Core::Private::Function::
              TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<int>_>,Metasound::VertexDataPrivate::FOutputBinding>
              ::Call;
  local_150 = local_278;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_2c8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_138,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)
             &local_148);
  FLazyName::Resolve(&WavePlayerVertexNames::OutputCuePointLabelName);
  local_270 = &this->CuePointLabel;
  local_110 = &local_270;
  local_118 = UE::Core::Private::Function::
              TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<FString>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
              ::Call;
  local_100 = &local_128;
  local_128 = &local_2c0;
  local_108 = UE::Core::Private::Function::
              TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<FString>_>,Metasound::VertexDataPrivate::FOutputBinding>
              ::Call;
  local_120 = local_270;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_2c0,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_108,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)
             &local_118);
  FLazyName::Resolve(&WavePlayerVertexNames::OutputLoopRatioName);
  local_268 = &this->LoopPercent;
  local_e0 = &local_268;
  local_f8 = &local_2b8;
  local_d0 = &local_f8;
  local_e8 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_d8 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<float>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_f0 = local_268;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_2b8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_d8,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_e8
            );
  FLazyName::Resolve(&WavePlayerVertexNames::OutputPlaybackLocationName);
  local_260 = &this->PlaybackLocation;
  local_b8 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_b0 = &local_260;
  local_c8 = &local_2b0;
  local_a0 = &local_c8;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<float>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_c0 = local_260;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_2b0,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_a8,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_b8
            );
  FLazyName::Resolve(&WavePlayerVertexNames::OutputPlaybackTimeName);
  local_258 = &this->PlaybackTime;
  local_80 = &local_258;
  local_88 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTime>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_70 = &local_98;
  local_98 = &local_2a8;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTime>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_90 = local_258;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_2a8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_78,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_88
            );
  if (((this->OutputAudioBuffers).ArrayNum != (this->OutputAudioBufferVertexNames).ArrayNum) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutputAudioBuffers.Num() == OutputAudioBufferVertexNames.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundWavePlayerNode.cpp"
                         ,0x1f8,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar4 = 0;
  if (0 < (this->OutputAudioBuffers).ArrayNum) {
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->OutputAudioBuffers).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar5 = (this->OutputAudioBuffers).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x20;
      uVar3 = 0;
      if ((int)uVar4 < (this->OutputAudioBufferVertexNames).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_58 = UE::Core::Private::Function::
                 TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
                 ::Call;
      local_68 = (FName *)((this->OutputAudioBufferVertexNames).AllocatorInstance.Data +
                          (longlong)(int)uVar4 * 8);
      local_50 = &local_250;
      local_40 = &local_68;
      local_48 = UE::Core::Private::Function::
                 TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FOutputBinding>
                 ::Call;
      local_250 = pFVar5;
      local_60 = pFVar5;
      FOutputVertexInterfaceData::Apply
                (param_1,local_68,
                 (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)
                 &local_48,
                 (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)
                 &local_58);
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (this->OutputAudioBuffers).ArrayNum);
  }
  return;
}

// FWavePlayerOperator @ 14b34b650

/* WARNING: Enum "Type": Some values do not have unique names */

FWavePlayerOperator * __thiscall
Metasound::FWavePlayerOperator::FWavePlayerOperator
          (FWavePlayerOperator *this,FWavePlayerOpArgs *param_1)

{
  TArray<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  TDataReference<Metasound::FAudioBuffer> *pTVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  float fVar9;
  float fVar10;
  FAudioBuffer *pFVar11;
  FAudioBuffer *pFVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  undefined8 *puVar16;
  FWavePlayerOperator *pFVar17;
  ulonglong uVar18;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  FScriptContainerElement *pFVar21;
  FScriptContainerElement *pFVar22;
  undefined1 local_res10 [8];
  uint local_res18;
  TArray<TArrayView<float,int>,TSizedDefaultAllocator<32>_> *local_res20;
  TDataReference<Metasound::FAudioBuffer> local_70;
  
  this->_padding_ = (longlong)&___7FWavePlayerOperator_Metasound__6B_;
  fVar9 = (param_1->Settings).TargetBlockRate;
  fVar10 = (param_1->Settings).ActualBlockRate;
  iVar14 = (param_1->Settings).NumFramesPerBlock;
  (this->OperatorSettings).SampleRate = (param_1->Settings).SampleRate;
  (this->OperatorSettings).TargetBlockRate = fVar9;
  (this->OperatorSettings).ActualBlockRate = fVar10;
  (this->OperatorSettings).NumFramesPerBlock = iVar14;
  *(undefined ***)&this->PlayTrigger = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->PlayTrigger).field_0x8 = *(undefined8 *)&(param_1->PlayTrigger).field_0x8;
  lVar19 = *(longlong *)&(param_1->PlayTrigger).field_0x10;
  *(longlong *)&(this->PlayTrigger).field_0x10 = lVar19;
  if (lVar19 != 0) {
    *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
  }
  *(undefined ***)&this->PlayTrigger =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->StopTrigger = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->StopTrigger).field_0x8 = *(undefined8 *)&(param_1->StopTrigger).field_0x8;
  lVar19 = *(longlong *)&(param_1->StopTrigger).field_0x10;
  *(longlong *)&(this->StopTrigger).field_0x10 = lVar19;
  if (lVar19 != 0) {
    *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
  }
  *(undefined ***)&this->StopTrigger =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->WaveAsset = &___7__TDataReference_VFWaveAsset_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->WaveAsset).field_0x8 = *(undefined8 *)&(param_1->WaveAsset).field_0x8;
  lVar19 = *(longlong *)&(param_1->WaveAsset).field_0x10;
  *(longlong *)&(this->WaveAsset).field_0x10 = lVar19;
  if (lVar19 != 0) {
    *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
  }
  *(undefined ***)&this->WaveAsset =
       &___7__TDataReadReference_VFWaveAsset_Metasound___Metasound__6B_;
  *(undefined ***)&this->StartTime = &___7__TDataReference_VFTime_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->StartTime).field_0x8 = *(undefined8 *)&(param_1->StartTime).field_0x8;
  lVar19 = *(longlong *)&(param_1->StartTime).field_0x10;
  *(longlong *)&(this->StartTime).field_0x10 = lVar19;
  if (lVar19 != 0) {
    *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
  }
  *(undefined ***)&this->StartTime = &___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
  *(undefined ***)&this->PitchShift = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->PitchShift).field_0x8 = *(undefined8 *)&(param_1->PitchShift).field_0x8;
  lVar19 = *(longlong *)&(param_1->PitchShift).field_0x10;
  *(longlong *)&(this->PitchShift).field_0x10 = lVar19;
  if (lVar19 != 0) {
    *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
  }
  *(undefined ***)&this->PitchShift = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->bLoop = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->bLoop).field_0x8 = *(undefined8 *)&(param_1->bLoop).field_0x8;
  lVar19 = *(longlong *)&(param_1->bLoop).field_0x10;
  *(longlong *)&(this->bLoop).field_0x10 = lVar19;
  if (lVar19 != 0) {
    *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
  }
  *(undefined ***)&this->bLoop = &___7__TDataReadReference__N_Metasound__6B_;
  *(undefined ***)&this->LoopStartTime = &___7__TDataReference_VFTime_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->LoopStartTime).field_0x8 =
       *(undefined8 *)&(param_1->LoopStartTime).field_0x8;
  lVar19 = *(longlong *)&(param_1->LoopStartTime).field_0x10;
  *(longlong *)&(this->LoopStartTime).field_0x10 = lVar19;
  if (lVar19 != 0) {
    *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
  }
  *(undefined ***)&this->LoopStartTime = &___7__TDataReadReference_VFTime_Metasound___Metasound__6B_
  ;
  *(undefined ***)&this->LoopDuration = &___7__TDataReference_VFTime_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->LoopDuration).field_0x8 = *(undefined8 *)&(param_1->LoopDuration).field_0x8
  ;
  lVar19 = *(longlong *)&(param_1->LoopDuration).field_0x10;
  *(longlong *)&(this->LoopDuration).field_0x10 = lVar19;
  if (lVar19 != 0) {
    *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
  }
  *(undefined ***)&this->LoopDuration = &___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
  this->bMaintainAudioSync = param_1->bMaintainAudioSync;
  TDataReference<Metasound::FTrigger>::
  TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FTrigger> *)&this->TriggerOnDone,NewObject,
             &param_1->Settings);
  *(undefined ***)&this->TriggerOnDone =
       &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  TDataReference<Metasound::FTrigger>::
  TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FTrigger> *)&this->TriggerOnNearlyDone,NewObject,
             &param_1->Settings);
  *(undefined ***)&this->TriggerOnNearlyDone =
       &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  TDataReference<Metasound::FTrigger>::
  TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FTrigger> *)&this->TriggerOnLooped,NewObject,
             &param_1->Settings);
  *(undefined ***)&this->TriggerOnLooped =
       &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  TDataReference<Metasound::FTrigger>::
  TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FTrigger> *)&this->TriggerOnCuePoint,NewObject,
             &param_1->Settings);
  *(undefined ***)&this->TriggerOnCuePoint =
       &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->CuePointID = &___7__TDataReference_H_Metasound__6B_;
  puVar16 = ::operator_new(0x18);
  if (puVar16 == (undefined8 *)0x0) {
    *(undefined8 *)&(this->CuePointID).field_0x8 = 0x10;
    *(undefined8 *)&(this->CuePointID).field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar16 + 1) = 1;
    *(undefined4 *)((longlong)puVar16 + 0xc) = 1;
    *puVar16 = &___7__TIntrusiveReferenceController_H_0A__SharedPointerInternals__6B_;
    *(undefined4 *)(puVar16 + 2) = 0;
    *(undefined8 **)&(this->CuePointID).field_0x8 = puVar16 + 2;
    *(undefined8 **)&(this->CuePointID).field_0x10 = puVar16;
    if (puVar16 + 2 == (undefined8 *)0x0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InObject != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x246,L"");
      if (bVar13) {
        pcVar8 = (code *)swi(3);
        pFVar17 = (FWavePlayerOperator *)(*pcVar8)();
        return pFVar17;
      }
    }
  }
  *(undefined ***)&this->CuePointID = &___7__TDataWriteReference_H_Metasound__6B_;
  TDataWriteReference<FString>::CreateNew<wchar_t_const_(&)[1]>
            (&this->CuePointLabel,(wchar_t (*) [1])L"");
  *(undefined ***)&this->LoopPercent = &___7__TDataReference_M_Metasound__6B_;
  puVar16 = ::operator_new(0x18);
  if (puVar16 == (undefined8 *)0x0) {
    *(undefined8 *)&(this->LoopPercent).field_0x8 = 0x10;
    *(undefined8 *)&(this->LoopPercent).field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar16 + 1) = 1;
    *(undefined8 *)((longlong)puVar16 + 0xc) = 1;
    *puVar16 = &___7__TIntrusiveReferenceController_M_0A__SharedPointerInternals__6B_;
    *(undefined8 **)&(this->LoopPercent).field_0x8 = puVar16 + 2;
    *(undefined8 **)&(this->LoopPercent).field_0x10 = puVar16;
    if (puVar16 + 2 == (undefined8 *)0x0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InObject != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x246,L"");
      if (bVar13) {
        pcVar8 = (code *)swi(3);
        pFVar17 = (FWavePlayerOperator *)(*pcVar8)();
        return pFVar17;
      }
    }
  }
  *(undefined ***)&this->LoopPercent = &___7__TDataWriteReference_M_Metasound__6B_;
  *(undefined ***)&this->PlaybackLocation = &___7__TDataReference_M_Metasound__6B_;
  puVar16 = ::operator_new(0x18);
  if (puVar16 == (undefined8 *)0x0) {
    *(undefined8 *)&(this->PlaybackLocation).field_0x8 = 0x10;
    *(undefined8 *)&(this->PlaybackLocation).field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar16 + 1) = 1;
    *(undefined8 *)((longlong)puVar16 + 0xc) = 1;
    *puVar16 = &___7__TIntrusiveReferenceController_M_0A__SharedPointerInternals__6B_;
    *(undefined8 **)&(this->PlaybackLocation).field_0x8 = puVar16 + 2;
    *(undefined8 **)&(this->PlaybackLocation).field_0x10 = puVar16;
    if (puVar16 + 2 == (undefined8 *)0x0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InObject != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x246,L"");
      if (bVar13) {
        pcVar8 = (code *)swi(3);
        pFVar17 = (FWavePlayerOperator *)(*pcVar8)();
        return pFVar17;
      }
    }
  }
  *(undefined ***)&this->PlaybackLocation = &___7__TDataWriteReference_M_Metasound__6B_;
  *(undefined ***)&this->PlaybackTime = &___7__TDataReference_VFTime_Metasound___Metasound__6B_;
  puVar16 = ::operator_new(0x18);
  if (puVar16 == (undefined8 *)0x0) {
    *(undefined8 *)&(this->PlaybackTime).field_0x8 = 0x10;
    *(undefined8 *)&(this->PlaybackTime).field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar16 + 1) = 1;
    *puVar16 = &
               ___7__TIntrusiveReferenceController_VFTime_Metasound___0A__SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)puVar16 + 0xc) = 1;
    puVar16[2] = 0;
    *(undefined8 **)&(this->PlaybackTime).field_0x8 = puVar16 + 2;
    *(undefined8 **)&(this->PlaybackTime).field_0x10 = puVar16;
    if (puVar16 + 2 == (undefined8 *)0x0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InObject != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x246,L"");
      if (bVar13) {
        pcVar8 = (code *)swi(3);
        pFVar17 = (FWavePlayerOperator *)(*pcVar8)();
        return pFVar17;
      }
    }
  }
  *(undefined ***)&this->PlaybackTime = &___7__TDataWriteReference_VFTime_Metasound___Metasound__6B_
  ;
  pTVar1 = &this->OutputAudioBuffers;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pTVar2 = &this->OutputAudioBufferVertexNames;
  (this->OutputAudioBuffers).ArrayNum = 0;
  (this->OutputAudioBuffers).ArrayMax = 0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->OutputAudioBufferVertexNames).ArrayNum = 0;
  (this->OutputAudioBufferVertexNames).ArrayMax = 0;
  (this->CostReporter).NodeIndex = (param_1->CostReporter).NodeIndex;
  (this->CostReporter).GraphRenderCost.Object = (param_1->CostReporter).GraphRenderCost.Object;
  pTVar4 = (param_1->CostReporter).GraphRenderCost.SharedReferenceCount.ReferenceController;
  (this->CostReporter).GraphRenderCost.SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->WaveProxyReader).Ptr = (FSoundWaveProxyReader *)0x0;
  local_res20 = &this->OutputAudioView;
  piVar3 = &(this->OutputAudioView).ArrayMax;
  (this->ConvertDeinterleave).Ptr = (IConvertDeinterleave *)0x0;
  (this->Resampler).Ptr = (FMultichannelLinearResampler *)0x0;
  (this->CurrentWaveAsset).SoundWaveProxy.Object = (FSoundWaveProxy *)0x0;
  (this->CurrentWaveAsset).SoundWaveProxy.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->SortedCuePoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SortedCuePoints).ArrayNum = 0;
  (this->SortedCuePoints).ArrayMax = 0;
  (this->InterleavedBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InterleavedBuffer).ArrayNum = 0;
  (this->InterleavedBuffer).ArrayMax = 0;
  (this->DeinterleavedBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeinterleavedBuffer).ArrayNum = 0;
  (this->DeinterleavedBuffer).ArrayMax = 0;
  (this->SourceCircularBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceCircularBuffer).ArrayNum = 0;
  (this->SourceCircularBuffer).ArrayMax = 0;
  (this->OutputAudioView).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputAudioView).ArrayNum = 0;
  (this->OutputAudioView).ArrayMax = 0;
  (this->SourceState).StartFrameIndex = -1;
  (this->SourceState).EndFrameIndex = -1;
  (this->SourceState).EOFFrameIndexInBuffer = -1;
  (this->SourceState).LoopEndFrameIndexInBuffer = -1;
  (this->SourceState).EOFFrameIndexInWave = -1;
  (this->SourceState).LoopStartFrameIndexInWave = -1;
  (this->SourceState).LoopEndFrameIndexInWave = -1;
  this->SampleRateFrameRatio = 1.0;
  this->bOnNearlyDoneTriggeredForWave = false;
  this->bIsPlaying = false;
  this->bDidWaveRenderThisBlock = false;
  this->NumOutputChannels = (param_1->OutputAudioVertices).ArrayNum;
  local_res18 = (param_1->OutputAudioVertices).ArrayNum;
  uVar18 = (ulonglong)(int)local_res18;
  pFVar20 = (param_1->OutputAudioVertices).AllocatorInstance.Data;
  pFVar21 = pFVar20 + uVar18 * 0x20;
  pFVar22 = pFVar20 + 8;
  while( true ) {
    if ((param_1->OutputAudioVertices).ArrayNum != (int)uVar18) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<Metasound::FOutputDataVertex_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar20 == pFVar21) break;
    pFVar5 = (pTVar2->AllocatorInstance).Data;
    if ((pFVar5 <= pFVar22) &&
       (pFVar22 < pFVar5 + (longlong)(this->OutputAudioBufferVertexNames).ArrayMax * 8)) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar13) {
        pcVar8 = (code *)swi(3);
        pFVar17 = (FWavePlayerOperator *)(*pcVar8)();
        return pFVar17;
      }
    }
    iVar14 = (this->OutputAudioBufferVertexNames).ArrayNum;
    if (iVar14 == (this->OutputAudioBufferVertexNames).ArrayMax) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,&pTVar2->AllocatorInstance,
                          &(this->OutputAudioBufferVertexNames).ArrayMax);
    }
    (this->OutputAudioBufferVertexNames).ArrayNum = iVar14 + 1;
    *(undefined8 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar14 * 8) =
         *(undefined8 *)pFVar22;
    TDataReference<Metasound::FAudioBuffer>::
    TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
              (&local_70,NewObject,&param_1->Settings);
    pTVar6 = (TDataReference<Metasound::FAudioBuffer> *)(pTVar1->AllocatorInstance).Data;
    local_70._padding_ =
         (longlong)&___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
    if ((pTVar6 <= &local_70) && (&local_70 < pTVar6 + (this->OutputAudioBuffers).ArrayMax)) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar13) {
        pcVar8 = (code *)swi(3);
        pFVar17 = (FWavePlayerOperator *)(*pcVar8)();
        return pFVar17;
      }
    }
    iVar14 = (this->OutputAudioBuffers).ArrayNum;
    if (iVar14 == (this->OutputAudioBuffers).ArrayMax) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&pTVar1->AllocatorInstance,&(this->OutputAudioBuffers).ArrayMax);
    }
    pFVar11 = local_70.ObjectReference.Object;
    pFVar5 = (pTVar1->AllocatorInstance).Data;
    (this->OutputAudioBuffers).ArrayNum = iVar14 + 1;
    lVar19 = (longlong)iVar14 * 0x20;
    *(undefined ***)(pFVar5 + lVar19) =
         &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
    *(FAudioBuffer **)(pFVar5 + lVar19 + 8) = local_70.ObjectReference.Object;
    *(TReferenceControllerBase<0> **)(pFVar5 + lVar19 + 0x10) =
         local_70.ObjectReference.SharedReferenceCount.ReferenceController;
    if (local_70.ObjectReference.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<0> *)0x0) {
      (local_70.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (local_70.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1;
    }
    *(undefined ***)(pFVar5 + lVar19) =
         &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
    if ((1 < (byte)LogMetaSound._0_1_) &&
       ((local_70.ObjectReference.Object)->InitialNum !=
        ((local_70.ObjectReference.Object)->Buffer).ArrayNum)) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                  LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    pFVar12 = local_70.ObjectReference.Object;
    iVar14 = (pFVar11->Buffer).ArrayNum;
    if ((1 < (byte)LogMetaSound._0_1_) &&
       ((local_70.ObjectReference.Object)->InitialNum !=
        ((local_70.ObjectReference.Object)->Buffer).ArrayNum)) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                  __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    pFVar5 = (pFVar12->Buffer).AllocatorInstance.Data;
    iVar15 = local_res20->ArrayNum;
    if (iVar15 == *piVar3) {
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_res20->AllocatorInstance,piVar3);
    }
    local_res20->ArrayNum = iVar15 + 1;
    pFVar7 = (local_res20->AllocatorInstance).Data;
    *(FScriptContainerElement **)(pFVar7 + (longlong)iVar15 * 0x10) = pFVar5;
    *(int *)(pFVar7 + (longlong)iVar15 * 0x10 + 8) = iVar14;
    if (iVar14 < 0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L"");
      if (bVar13) {
        pcVar8 = (code *)swi(3);
        pFVar17 = (FWavePlayerOperator *)(*pcVar8)();
        return pFVar17;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (local_70.ObjectReference.SharedReferenceCount.ReferenceController);
    pFVar20 = pFVar20 + 0x20;
    uVar18 = (ulonglong)local_res18;
    pFVar22 = pFVar22 + 0x20;
  }
  return this;
}

// ~FWavePlayerOperator @ 14b352130

void __thiscall Metasound::FWavePlayerOperator::~FWavePlayerOperator(FWavePlayerOperator *this)

{
  FScriptContainerElement *pFVar1;
  FMultichannelLinearResampler *pFVar2;
  IConvertDeinterleave *pIVar3;
  FSoundWaveProxyReader *pFVar4;
  ICompressedAudioInfo *pIVar5;
  
  pFVar1 = (this->OutputAudioView).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Audio::TCircularAudioBuffer<float,16>,int>
            ((TCircularAudioBuffer<float,16> *)(this->SourceCircularBuffer).AllocatorInstance.Data,
             (this->SourceCircularBuffer).ArrayNum);
  pFVar1 = (this->SourceCircularBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<float,TAlignedHeapAllocator<16>_>,int>
            ((TArray<float,TAlignedHeapAllocator<16>_> *)
             (this->DeinterleavedBuffer).AllocatorInstance.Data,(this->DeinterleavedBuffer).ArrayNum
            );
  pFVar1 = (this->DeinterleavedBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InterleavedBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FSoundWaveCuePoint,int>
            ((FSoundWaveCuePoint *)(this->SortedCuePoints).AllocatorInstance.Data,
             (this->SortedCuePoints).ArrayNum);
  pFVar1 = (this->SortedCuePoints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CurrentWaveAsset).SoundWaveProxy.SharedReferenceCount.ReferenceController);
  pFVar2 = (this->Resampler).Ptr;
  if (pFVar2 != (FMultichannelLinearResampler *)0x0) {
    pFVar1 = (pFVar2->WorkBuffer).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    ::operator_delete(pFVar2,0x28);
  }
  pIVar3 = (this->ConvertDeinterleave).Ptr;
  if (pIVar3 != (IConvertDeinterleave *)0x0) {
    (**(code **)*pIVar3)(pIVar3,1);
  }
  pFVar4 = (this->WaveProxyReader).Ptr;
  if (pFVar4 != (FSoundWaveProxyReader *)0x0) {
    pFVar1 = (pFVar4->SampleConversionBuffer).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (pFVar4->ResidualBuffer).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (pFVar4->DecoderOutput).InternalBuffer.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pIVar5 = (pFVar4->CompressedAudioInfo).Ptr;
    if (pIVar5 != (ICompressedAudioInfo *)0x0) {
      (**(code **)pIVar5->_padding_)(pIVar5,1);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar4->WaveProxy).SharedReferenceCount.ReferenceController);
    ::operator_delete(pFVar4,0xa8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CostReporter).GraphRenderCost.SharedReferenceCount.ReferenceController);
  pFVar1 = (this->OutputAudioBufferVertexNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,int>
            ((TDataWriteReference<Metasound::FAudioBuffer> *)
             (this->OutputAudioBuffers).AllocatorInstance.Data,(this->OutputAudioBuffers).ArrayNum);
  pFVar1 = (this->OutputAudioBuffers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->PlaybackTime).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->PlaybackLocation).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->LoopPercent).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->CuePointLabel).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->CuePointID).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerOnCuePoint).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerOnLooped).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerOnNearlyDone).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerOnDone).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->LoopDuration).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->LoopStartTime).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->bLoop).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->PitchShift).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->StartTime).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->WaveAsset).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->StopTrigger).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->PlayTrigger).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// Execute @ 14b3a0ea0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Metasound::FWavePlayerOperator::Execute(FWavePlayerOperator *this)

{
  FSoundWaveProxyReader *pFVar1;
  FMultichannelLinearResampler *this_00;
  undefined8 *puVar2;
  bool bVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  float fVar10;
  undefined1 local_res8 [8];
  
  bVar3 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar3) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"Metasound::FWavePlayerOperator::Execute");
  }
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Metasound::FWavePlayerOperator::Execute(void)___ptr64'::__l2::
                __CpuProfilerEventSpecId516,"Metasound::FWavePlayerOperator::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundWavePlayerNode.cpp"
               ,0x204);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Metasound::FWavePlayerOperator::Execute(void)___ptr64'::__l2::
               __CpuProfilerEventSpecId516);
  }
  FTrigger::AdvanceBlock(*(FTrigger **)&(this->TriggerOnDone).field_0x8);
  FTrigger::AdvanceBlock(*(FTrigger **)&(this->TriggerOnNearlyDone).field_0x8);
  FTrigger::AdvanceBlock(*(FTrigger **)&(this->TriggerOnCuePoint).field_0x8);
  FTrigger::AdvanceBlock(*(FTrigger **)&(this->TriggerOnLooped).field_0x8);
  pFVar1 = (this->WaveProxyReader).Ptr;
  this->bDidWaveRenderThisBlock = false;
  if (pFVar1 != (FSoundWaveProxyReader *)0x0) {
    FSoundWaveProxyReader::SetIsLooping(pFVar1,*(bool *)*(undefined8 *)&(this->bLoop).field_0x8);
    FSoundWaveProxyReader::SetLoopStartTime
              ((this->WaveProxyReader).Ptr,(float)**(double **)&(this->LoopStartTime).field_0x8);
    FSoundWaveProxyReader::SetLoopDuration
              ((this->WaveProxyReader).Ptr,(float)**(double **)&(this->LoopDuration).field_0x8);
    pFVar1 = (this->WaveProxyReader).Ptr;
    iVar6 = pFVar1->LoopEndFrameIndex;
    iVar5 = pFVar1->LoopStartFrameIndex;
    (this->SourceState).LoopEndFrameIndexInWave = iVar6;
    (this->SourceState).LoopEndFrameIndexInBuffer = iVar6 - (this->SourceState).StartFrameIndex;
    (this->SourceState).LoopStartFrameIndexInWave = iVar5;
  }
  this_00 = (this->Resampler).Ptr;
  if (this_00 != (FMultichannelLinearResampler *)0x0) {
    iVar6 = 0x80;
    if ((this->OperatorSettings).NumFramesPerBlock < 0x80) {
      iVar6 = (this->OperatorSettings).NumFramesPerBlock;
    }
    fVar10 = **(float **)&(this->PitchShift).field_0x8;
    if (__real_42900000 <= fVar10) {
      fVar10 = __real_42900000;
    }
    if (fVar10 <= __real_c2900000) {
      fVar10 = __real_c2900000;
    }
    fVar10 = powf(__real_40000000,fVar10 * __real_3daaaaab);
    fVar10 = fVar10 * this->SampleRateFrameRatio;
    if (Audio::FMultichannelLinearResampler::MaxFrameRatio <= fVar10) {
      fVar10 = Audio::FMultichannelLinearResampler::MaxFrameRatio;
    }
    if (fVar10 <= Audio::FMultichannelLinearResampler::MinFrameRatio) {
      fVar10 = Audio::FMultichannelLinearResampler::MinFrameRatio;
    }
    Audio::FMultichannelLinearResampler::SetFrameRatio(this_00,fVar10,iVar6);
  }
  iVar6 = (this->OutputAudioBuffers).ArrayNum;
  pFVar7 = (this->OutputAudioBuffers).AllocatorInstance.Data;
  pFVar8 = pFVar7 + (longlong)iVar6 * 0x20;
  while( true ) {
    if ((this->OutputAudioBuffers).ArrayNum != iVar6) {
      `TCheckedPointerIterator<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar8) break;
    iVar5 = (this->OperatorSettings).NumFramesPerBlock;
    puVar2 = *(undefined8 **)(pFVar7 + 8);
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar2 + 2) != *(int *)(puVar2 + 1))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                  __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    memset((void *)*puVar2,0,(longlong)iVar5 << 2);
    pFVar7 = pFVar7 + 0x20;
  }
  ExecuteSubblocks(this);
  fVar4 = __real_3f800000;
  fVar10 = (float)(this->SourceState).EOFFrameIndexInWave;
  if (fVar10 <= __real_3f800000) {
    fVar10 = __real_3f800000;
  }
  fVar10 = (float)(this->SourceState).StartFrameIndex / fVar10;
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  **(float **)&(this->PlaybackLocation).field_0x8 = fVar10;
  pFVar1 = (this->WaveProxyReader).Ptr;
  if (pFVar1 == (FSoundWaveProxyReader *)0x0) {
    **(undefined8 **)&(this->PlaybackTime).field_0x8 = 0;
  }
  else {
    fVar10 = pFVar1->SampleRate;
    if (fVar10 <= __real_322bcc77) {
      fVar10 = __real_322bcc77;
    }
    **(double **)&(this->PlaybackTime).field_0x8 =
         (double)(this->SourceState).StartFrameIndex / (double)fVar10;
  }
  if (**(char **)&(this->bLoop).field_0x8 == '\0') {
    **(undefined4 **)&(this->LoopPercent).field_0x8 = 0;
  }
  else {
    iVar6 = (this->SourceState).LoopStartFrameIndexInWave;
    iVar5 = (this->SourceState).LoopEndFrameIndexInWave - iVar6;
    if (iVar5 < 1) {
      iVar5 = 1;
    }
    **(float **)&(this->LoopPercent).field_0x8 =
         (float)((this->SourceState).StartFrameIndex - iVar6) / (float)iVar5;
  }
  if (this->bDidWaveRenderThisBlock != false) {
    FNodeRenderCost::SetRenderCost(&this->CostReporter,fVar4);
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (!bVar3) {
    return;
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// ExecuteSubblocks @ 14b3a43c0

void __thiscall Metasound::FWavePlayerOperator::ExecuteSubblocks(FWavePlayerOperator *this)

{
  int iVar1;
  int iVar2;
  FTrigger *this_00;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  int local_res10;
  int local_res18;
  TArray<TArrayView<float,int>,TSizedDefaultAllocator<32>_> local_58;
  
  iVar14 = 0;
  local_res10 = 0;
  iVar7 = FTrigger::NumTriggeredInBlock(*(FTrigger **)&(this->PlayTrigger).field_0x8);
  iVar11 = 0;
  local_res18 = 0;
  iVar8 = FTrigger::NumTriggeredInBlock(*(FTrigger **)&(this->StopTrigger).field_0x8);
  iVar2 = (this->OperatorSettings).NumFramesPerBlock;
  iVar13 = 0;
  iVar1 = iVar2 + -1;
  iVar2 = iVar2 * 2;
  if (0 < iVar1) {
    do {
      iVar9 = iVar2;
      if (iVar14 < iVar7) {
        iVar9 = FTrigger::operator[](*(FTrigger **)&(this->PlayTrigger).field_0x8,iVar14);
      }
      iVar10 = iVar2;
      if (iVar11 < iVar8) {
        iVar10 = FTrigger::operator[](*(FTrigger **)&(this->StopTrigger).field_0x8,iVar11);
      }
      iVar12 = iVar10;
      if (iVar9 < iVar10) {
        iVar12 = iVar9;
      }
      if (iVar12 == iVar2) {
        iVar12 = (this->OperatorSettings).NumFramesPerBlock;
      }
      iVar4 = iVar13;
      if ((iVar13 != iVar12) && (iVar4 = iVar12, this->bIsPlaying != false)) {
        bVar6 = 0 < GCycleStatsShouldEmitNamedEvents;
        if (bVar6) {
          FGenericPlatformMisc::BeginNamedEvent
                    (&FColor::Green,"Metasound::FWavePlayerOperator::RenderFrameRange");
        }
        bVar15 = -1 < CpuChannel->Enabled;
        if (bVar15) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&`private:_void___cdecl_Metasound::FWavePlayerOperator::RenderFrameRange(int,int)___ptr64'
                      ::__l2::__CpuProfilerEventSpecId681,
                     "Metasound::FWavePlayerOperator::RenderFrameRange",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundWavePlayerNode.cpp"
                     ,0x2a9);
          FCpuProfilerTrace::OutputBeginEvent
                    (`private:_void___cdecl_Metasound::FWavePlayerOperator::RenderFrameRange(int,int)___ptr64'
                     ::__l2::__CpuProfilerEventSpecId681);
        }
        this->bDidWaveRenderThisBlock = true;
        if ((this->bIsPlaying == false) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("bIsPlaying",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundWavePlayerNode.cpp"
                               ,0x2af,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar11 = iVar12 - iVar13;
        if (0 < iVar11) {
          TriggerUpcomingEvents(this,iVar13,iVar11,&this->SourceState);
          Audio::SliceMultichannelBufferView(&local_58,&this->OutputAudioView,iVar13,iVar11);
          GeneratePitchedAudio(this,&local_58);
          if (**(char **)&(this->bLoop).field_0x8 == '\0') {
            this->bIsPlaying =
                 (this->SourceState).StartFrameIndex <= (this->SourceState).EOFFrameIndexInWave;
          }
          iVar14 = local_res10;
          if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.AllocatorInstance.Data);
          }
        }
        if (bVar15) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        iVar11 = local_res18;
        if (bVar6) {
          FGenericPlatformMisc::EndNamedEvent();
        }
      }
      iVar13 = iVar4;
      if (iVar13 == iVar9) {
        bVar6 = StartPlaying(this);
        if (!bVar6) {
          FTrigger::TriggerFrame(*(FTrigger **)&(this->TriggerOnDone).field_0x8,iVar13);
        }
        iVar14 = iVar14 + 1;
        local_res10 = iVar14;
      }
      if (iVar13 == iVar10) {
        this_00 = *(FTrigger **)&(this->TriggerOnDone).field_0x8;
        this->bIsPlaying = false;
        FTrigger::TriggerFrame(this_00,iVar13);
        iVar11 = iVar11 + 1;
        local_res18 = iVar11;
      }
    } while (iVar12 < iVar1);
  }
  return;
}

// FindCuePoint @ 14b3a6eb0

/* WARNING: Enum "Type": Some values do not have unique names */

FSoundWaveCuePoint * __thiscall
Metasound::FWavePlayerOperator::FindCuePoint(FWavePlayerOperator *this,int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  FSoundWaveCuePoint *pFVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  uVar7 = (this->SortedCuePoints).ArrayNum;
  pFVar2 = (this->SortedCuePoints).AllocatorInstance.Data;
  uVar9 = 0;
  uVar10 = uVar7;
  if (0 < (int)uVar7) {
    do {
      iVar11 = (uVar10 >> 1) + uVar9;
      if (*(int *)(pFVar2 + (longlong)iVar11 * 0x30 + 0x18) < param_1) {
        uVar9 = iVar11 + (uVar10 & 1);
      }
      uVar4 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar4 != 0);
    iVar11 = 0;
    do {
      iVar1 = (uVar7 >> 1) + iVar11;
      if (*(int *)(pFVar2 + (longlong)iVar1 * 0x30 + 0x18) < param_2) {
        iVar11 = iVar1 + (uVar7 & 1);
      }
      uVar10 = uVar7 >> 1;
      uVar7 = uVar7 >> 1;
    } while (uVar10 != 0);
    if ((int)uVar9 < iVar11) {
      uVar7 = uVar9 + 1;
      if ((longlong)(int)uVar7 < (longlong)iVar11) {
        lVar8 = (longlong)iVar11 - (longlong)(int)uVar7;
        do {
          uVar10 = 0;
          if ((int)uVar7 < (this->SortedCuePoints).ArrayNum) {
            uVar10 = ~uVar7 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            pFVar6 = (FSoundWaveCuePoint *)(*pcVar3)();
            return pFVar6;
          }
          if (5 < (byte)LogMetaSound._0_1_) {
            UE::Logging::Private::BasicLog<6>
                      (&`private:_struct_FSoundWaveCuePoint_const*___ptr64___cdecl_Metasound::FWavePlayerOperator::FindCuePoint(int,int)___ptr64'
                        ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
          }
          uVar7 = uVar7 + 1;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      uVar7 = 0;
      if ((int)uVar9 < (this->SortedCuePoints).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FSoundWaveCuePoint *)(*pcVar3)();
        return pFVar6;
      }
      return (FSoundWaveCuePoint *)
             ((this->SortedCuePoints).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x30);
    }
  }
  return (FSoundWaveCuePoint *)0x0;
}

// GeneratePitchedAudio @ 14b3aa4b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::FWavePlayerOperator::GeneratePitchedAudio
          (FWavePlayerOperator *this,
          TArray<TArrayView<float,int>,TSizedDefaultAllocator<32>_> *param_1)

{
  FSourceBufferState *pFVar1;
  char cVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  FName *this_00;
  int iVar9;
  float fVar10;
  FString local_48 [2];
  
  if ((this->bIsPlaying == false) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsPlaying",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundWavePlayerNode.cpp"
                         ,0x445,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = Audio::GetMultichannelBufferNumFrames(param_1);
  iVar6 = Audio::GetMultichannelBufferNumFrames(&this->SourceCircularBuffer);
  if (0 < iVar5) {
    pFVar1 = &this->SourceState;
    while( true ) {
      iVar7 = Audio::FMultichannelLinearResampler::GetNumInputFramesNeededToProduceOutputFrames
                        ((this->Resampler).Ptr,iVar5 + 1);
      if (iVar6 < iVar7) {
        GenerateSourceAudio(this,&this->SourceCircularBuffer,pFVar1);
      }
      iVar7 = Audio::GetMultichannelBufferNumFrames(&this->SourceCircularBuffer);
      iVar8 = Audio::FMultichannelLinearResampler::ProcessAndConsumeAudio
                        ((this->Resampler).Ptr,&this->SourceCircularBuffer,param_1);
      if (iVar8 < 1) break;
      iVar6 = Audio::GetMultichannelBufferNumFrames(&this->SourceCircularBuffer);
      iVar5 = iVar5 - iVar8;
      cVar2 = **(char **)&(this->bLoop).field_0x8;
      if ((iVar7 - iVar6 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InNumFrames >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundWavePlayerNode.cpp"
                             ,0x80,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar7 = pFVar1->StartFrameIndex + (iVar7 - iVar6);
      pFVar1->StartFrameIndex = iVar7;
      if (cVar2 != '\0') {
        iVar9 = iVar7 - (this->SourceState).LoopEndFrameIndexInWave;
        if (0 < iVar9) {
          iVar7 = (this->SourceState).LoopStartFrameIndexInWave + iVar9;
        }
        pFVar1->StartFrameIndex = iVar7;
      }
      (this->SourceState).EOFFrameIndexInBuffer = (this->SourceState).EOFFrameIndexInWave - iVar7;
      (this->SourceState).LoopEndFrameIndexInBuffer =
           (this->SourceState).LoopEndFrameIndexInWave - iVar7;
      if (iVar5 < 1) {
        return;
      }
      Audio::ShiftMultichannelBufferView(iVar8,param_1);
    }
    if (1 < (byte)LogMetaSound._0_1_) {
      fVar10 = **(float **)&(this->PitchShift).field_0x8;
      if (__real_42900000 <= fVar10) {
        fVar10 = __real_42900000;
      }
      if (fVar10 <= __real_c2900000) {
        fVar10 = __real_c2900000;
      }
      powf(__real_40000000,fVar10 * __real_3daaaaab);
      this_00 = FSoundWaveProxy::GetFName((this->CurrentWaveAsset).SoundWaveProxy.Object);
      ::FName::ToString(this_00,local_48);
      UE::Logging::Private::BasicLog<2>
                (&`private:_void___cdecl_Metasound::FWavePlayerOperator::GeneratePitchedAudio(TArray<TArrayView<float,int>,TSizedDefaultAllocator<32>_>&___ptr64)___ptr64'
                  ::__l18::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
      }
    }
    this->bIsPlaying = false;
  }
  return;
}

// GenerateSourceAudio @ 14b3aa720

void __thiscall
Metasound::FWavePlayerOperator::GenerateSourceAudio
          (FWavePlayerOperator *this,
          TArray<Audio::TCircularAudioBuffer<float,16>,TSizedDefaultAllocator<32>_> *param_1,
          FSourceBufferState *param_2)

{
  FSoundWaveProxyReader *this_00;
  IConvertDeinterleave *pIVar1;
  FScriptContainerElement *pFVar2;
  void *_Src;
  void *_Dst;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TArrayView<float_const_,int> *pTVar7;
  uint uVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  longlong local_70;
  longlong local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TArrayView<float_const_,int> local_48;
  
  if (this->bIsPlaying == false) {
    param_2->StartFrameIndex = -1;
    param_2->EndFrameIndex = -1;
    param_2->EOFFrameIndexInBuffer = -1;
    param_2->LoopEndFrameIndexInBuffer = -1;
    param_2->EOFFrameIndexInWave = -1;
    param_2->LoopStartFrameIndexInWave = -1;
    param_2->LoopEndFrameIndexInWave = -1;
    return;
  }
  Audio::GetMultichannelBufferNumFrames(param_1);
  if ((((this->WaveProxyReader).Ptr)->NumChannels * this->DeinterleaveBufferBlockSizeInFrames !=
       (this->InterleavedBuffer).ArrayNum) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumSamplesToGenerate == InterleavedBuffer.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundWavePlayerNode.cpp"
                         ,0x38d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_00 = (this->WaveProxyReader).Ptr;
  if (this_00->DecodeResult == Fail) {
    memset((this->InterleavedBuffer).AllocatorInstance.Data,0,
           (longlong)(this->InterleavedBuffer).ArrayNum << 2);
  }
  else {
    FSoundWaveProxyReader::PopAudio(this_00,&this->InterleavedBuffer);
  }
  pIVar1 = (this->ConvertDeinterleave).Ptr;
  pcVar3 = *(code **)((longlong)*pIVar1 + 8);
  pTVar7 = TArrayView<float_const_,int>::
           TArrayView<float_const_,int><TArray<float,TAlignedHeapAllocator<16>_>_&,TArray<float,TAlignedHeapAllocator<16>_>_>
                     (&local_48,&this->InterleavedBuffer);
  local_58 = *(undefined4 *)&pTVar7->DataPtr;
  uStack_54 = *(undefined4 *)((longlong)&pTVar7->DataPtr + 4);
  iStack_50 = pTVar7->ArrayNum;
  uStack_4c = *(undefined4 *)&pTVar7->field_0xc;
  (*pcVar3)(pIVar1,&local_58,&this->DeinterleavedBuffer);
  uVar8 = 0;
  if (0 < this->NumDeinterleaveChannels) {
    local_68 = 0;
    local_70 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < param_1->ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar10 = (param_1->AllocatorInstance).Data + local_70;
      uVar5 = 0;
      if ((int)uVar8 < (this->DeinterleavedBuffer).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->DeinterleavedBuffer).AllocatorInstance.Data;
      _Src = *(void **)(pFVar2 + local_68);
      iVar9 = *(int *)(pFVar2 + local_68 + 8);
      if ((iVar9 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      _Dst = *(void **)pFVar10;
      uVar5 = *(uint *)(pFVar10 + 0x18);
      iVar6 = *(int *)(pFVar10 + 0x14);
      if (*(int *)(pFVar10 + 0x18) < iVar6) {
        iVar6 = *(int *)(pFVar10 + 0x10) - iVar6;
      }
      else {
        iVar6 = -iVar6;
      }
      iVar6 = ~(*(int *)(pFVar10 + 0x18) + iVar6) + *(int *)(pFVar10 + 0x10);
      if (iVar9 < iVar6) {
        iVar6 = iVar9;
      }
      iVar9 = *(int *)(pFVar10 + 0x10) - uVar5;
      if (iVar6 < iVar9) {
        iVar9 = iVar6;
      }
      memcpy((void *)((longlong)_Dst + (ulonglong)uVar5 * 4),_Src,(longlong)iVar9 * 4);
      memcpy(_Dst,(void *)((longlong)_Src + (longlong)iVar9 * 4),(longlong)(iVar6 - iVar9) << 2);
      local_68 = local_68 + 0x10;
      LOCK();
      *(uint *)(pFVar10 + 0x18) = (uVar5 + iVar6) % *(uint *)(pFVar10 + 0x10);
      UNLOCK();
      local_70 = local_70 + 0x20;
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < this->NumDeinterleaveChannels);
  }
  WavePlayerNodePrivate::FSourceBufferState::Append
            (param_2,this->DeinterleaveBufferBlockSizeInFrames,
             *(bool *)*(undefined8 *)&(this->bLoop).field_0x8);
  return;
}

// MapSourceEventsIfInRange @ 14b3c95b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::FWavePlayerOperator::MapSourceEventsIfInRange
          (FWavePlayerOperator *this,FSourceBufferState *param_1,int param_2,FSourceEvents *param_3)

{
  int iVar1;
  int iVar2;
  FSoundWaveCuePoint *pFVar3;
  float fVar4;
  
  param_3->OnLoopFrameIndex = -1;
  param_3->OnEOFFrameIndex = -1;
  param_3->OnCuePointFrameIndex = -1;
  param_3->CuePoint = (FSoundWaveCuePoint *)0x0;
  if (((**(char **)&(this->bLoop).field_0x8 != '\0') &&
      (iVar1 = (this->SourceState).LoopEndFrameIndexInBuffer, -1 < iVar1)) && (iVar1 < param_2)) {
    fVar4 = Audio::FMultichannelLinearResampler::MapInputFrameToOutputFrame
                      ((this->Resampler).Ptr,(float)iVar1);
    param_3->OnLoopFrameIndex = (int)ROUND(fVar4 + fVar4 + __real_3f000000) >> 1;
  }
  iVar1 = (this->SourceState).EOFFrameIndexInBuffer;
  if ((-1 < iVar1) && (iVar1 < param_2)) {
    fVar4 = Audio::FMultichannelLinearResampler::MapInputFrameToOutputFrame
                      ((this->Resampler).Ptr,(float)iVar1);
    param_3->OnEOFFrameIndex = (int)ROUND(fVar4 + fVar4 + __real_3f000000) >> 1;
  }
  iVar1 = param_1->StartFrameIndex;
  if ((**(char **)&(this->bLoop).field_0x8 == '\0') || (param_3->OnLoopFrameIndex == -1)) {
    pFVar3 = FindCuePoint(this,iVar1,iVar1 + param_2);
  }
  else {
    pFVar3 = FindCuePoint(this,iVar1,(this->SourceState).LoopEndFrameIndexInBuffer + iVar1);
    param_3->CuePoint = pFVar3;
    pFVar3 = FindCuePoint(this,(this->SourceState).LoopStartFrameIndexInWave,
                          param_2 - (this->SourceState).LoopEndFrameIndexInBuffer);
    if (pFVar3 == (FSoundWaveCuePoint *)0x0) goto LAB_14b3c96f2;
    if (param_3->CuePoint != (FSoundWaveCuePoint *)0x0) {
      if (5 < (byte)LogMetaSound._0_1_) {
        UE::Logging::Private::BasicLog<6>
                  (&`private:_void___cdecl_Metasound::FWavePlayerOperator::MapSourceEventsIfInRange(Metasound::WavePlayerNodePrivate::FSourceBufferState_const&___ptr64,int,Metasound::WavePlayerNodePrivate::FSourceEvents&___ptr64)___ptr64'
                    ::__l23::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
      goto LAB_14b3c96f2;
    }
  }
  param_3->CuePoint = pFVar3;
LAB_14b3c96f2:
  if (param_3->CuePoint != (FSoundWaveCuePoint *)0x0) {
    iVar1 = (int)param_3->CuePoint->FramePosition;
    if ((**(char **)&(this->bLoop).field_0x8 == '\0') ||
       (iVar2 = (this->SourceState).StartFrameIndex, iVar2 <= iVar1)) {
      iVar2 = -(this->SourceState).StartFrameIndex;
    }
    else {
      iVar2 = ((this->SourceState).LoopEndFrameIndexInWave -
              (this->SourceState).LoopStartFrameIndexInWave) - iVar2;
    }
    fVar4 = Audio::FMultichannelLinearResampler::MapInputFrameToOutputFrame
                      ((this->Resampler).Ptr,(float)(iVar2 + iVar1));
    param_3->OnCuePointFrameIndex = (int)ROUND(fVar4 + fVar4 + __real_3f000000) >> 1;
  }
  return;
}

// Reset @ 14b3daf60

void __thiscall
Metasound::FWavePlayerOperator::Reset(FWavePlayerOperator *this,FResetParams *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  IConvertDeinterleave *pIVar4;
  FMultichannelLinearResampler *pFVar5;
  FSoundWaveCuePoint *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  FTrigger::Reset(*(FTrigger **)&(this->TriggerOnDone).field_0x8);
  FTrigger::Reset(*(FTrigger **)&(this->TriggerOnNearlyDone).field_0x8);
  FTrigger::Reset(*(FTrigger **)&(this->TriggerOnLooped).field_0x8);
  FTrigger::Reset(*(FTrigger **)&(this->TriggerOnCuePoint).field_0x8);
  **(undefined4 **)&(this->CuePointID).field_0x8 = 0;
  ::FString::operator=(*(FString **)&(this->CuePointLabel).field_0x8,L"");
  **(undefined4 **)&(this->LoopPercent).field_0x8 = 0;
  **(undefined4 **)&(this->PlaybackLocation).field_0x8 = 0;
  **(undefined8 **)&(this->PlaybackTime).field_0x8 = 0;
  iVar2 = (this->OutputAudioBuffers).ArrayNum;
  pFVar7 = (this->OutputAudioBuffers).AllocatorInstance.Data;
  pFVar8 = pFVar7 + (longlong)iVar2 * 0x20;
  while( true ) {
    if ((this->OutputAudioBuffers).ArrayNum != iVar2) {
      `TCheckedPointerIterator<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar8) break;
    iVar3 = *(int *)(*(undefined8 **)(pFVar7 + 8) + 1);
    if (0 < iVar3) {
      memset((void *)**(undefined8 **)(pFVar7 + 8),0,(longlong)iVar3 << 2);
    }
    pFVar7 = pFVar7 + 0x20;
  }
  TUniquePtr<FSoundWaveProxyReader,TDefaultDelete<FSoundWaveProxyReader>_>::Reset
            (&this->WaveProxyReader,(FSoundWaveProxyReader *)0x0);
  pIVar4 = (this->ConvertDeinterleave).Ptr;
  if (pIVar4 != (IConvertDeinterleave *)0x0) {
    (this->ConvertDeinterleave).Ptr = (IConvertDeinterleave *)0x0;
    (**(code **)*pIVar4)(pIVar4,1);
  }
  pFVar5 = (this->Resampler).Ptr;
  if (pFVar5 != (FMultichannelLinearResampler *)0x0) {
    (this->Resampler).Ptr = (FMultichannelLinearResampler *)0x0;
    pFVar7 = (pFVar5->WorkBuffer).AllocatorInstance.Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    ::operator_delete(pFVar5,0x28);
  }
  piVar1 = &(this->SortedCuePoints).ArrayMax;
  pFVar6 = (FSoundWaveCuePoint *)(this->SortedCuePoints).AllocatorInstance.Data;
  iVar2 = (this->SortedCuePoints).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<FSoundWaveCuePoint,int>(pFVar6,iVar2);
    (this->SortedCuePoints).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,&(this->SortedCuePoints).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FSoundWaveCuePoint,int>(pFVar6,iVar2);
    (this->SortedCuePoints).ArrayNum = 0;
  }
  piVar1 = &(this->InterleavedBuffer).ArrayMax;
  (this->InterleavedBuffer).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&(this->InterleavedBuffer).AllocatorInstance,0,piVar1);
  }
  DestructItems<TArray<float,TAlignedHeapAllocator<16>_>,int>
            ((TArray<float,TAlignedHeapAllocator<16>_> *)
             (this->DeinterleavedBuffer).AllocatorInstance.Data,(this->DeinterleavedBuffer).ArrayNum
            );
  piVar1 = &(this->DeinterleavedBuffer).ArrayMax;
  (this->DeinterleavedBuffer).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->DeinterleavedBuffer).AllocatorInstance,0,piVar1);
  }
  iVar2 = (this->SourceCircularBuffer).ArrayNum;
  pFVar7 = (this->SourceCircularBuffer).AllocatorInstance.Data;
  pFVar8 = pFVar7 + (longlong)iVar2 * 0x20;
  while( true ) {
    if ((this->SourceCircularBuffer).ArrayNum != iVar2) {
      `TCheckedPointerIterator<Audio::TCircularAudioBuffer<float,16>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar8) break;
    LOCK();
    *(undefined4 *)(pFVar7 + 0x14) = 0;
    UNLOCK();
    LOCK();
    *(undefined4 *)&pFVar7[0x18].field_0x0 = 0;
    UNLOCK();
    *(undefined4 *)&pFVar7[8].field_0x0 = 0;
    if (*(int *)(pFVar7 + 0xc) != 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)pFVar7,0,(int *)(pFVar7 + 0xc));
    }
    pFVar7 = pFVar7 + 0x20;
  }
  (this->SourceState).StartFrameIndex = -1;
  (this->SourceState).EndFrameIndex = -1;
  (this->SourceState).EOFFrameIndexInBuffer = -1;
  (this->SourceState).LoopEndFrameIndexInBuffer = -1;
  (this->SourceState).EOFFrameIndexInWave = -1;
  (this->SourceState).LoopStartFrameIndexInWave = -1;
  (this->SourceState).LoopEndFrameIndexInWave = -1;
  this->SampleRateFrameRatio = 1.0;
  this->bOnNearlyDoneTriggeredForWave = false;
  this->bIsPlaying = false;
  return;
}

// StartPlaying @ 14b3e0370

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall Metasound::FWavePlayerOperator::StartPlaying(FWavePlayerOperator *this)

{
  int *piVar1;
  TArray<FSoundWaveCuePoint,TSizedDefaultAllocator<32>_> *pTVar2;
  TUniquePtr<FSoundWaveProxyReader,TDefaultDelete<FSoundWaveProxyReader>_> *pTVar3;
  TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_> *pTVar4;
  TUniquePtr<Audio::FMultichannelLinearResampler,TDefaultDelete<Audio::FMultichannelLinearResampler>_>
  *pTVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  FSoundWaveProxy *pFVar8;
  IConvertDeinterleave *pIVar9;
  FSoundWaveCuePoint *pFVar10;
  FSoundWaveProxyReader *pFVar11;
  ICompressedAudioInfo *pIVar12;
  FSoundWaveData *pFVar13;
  bool bVar14;
  longlong lVar15;
  code *pcVar16;
  int iVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  bool bVar20;
  undefined1 uVar21;
  FName *this_00;
  TArray<FSoundWaveCuePoint,TSizedDefaultAllocator<32>_> *pTVar22;
  TUniquePtr<FSoundWaveProxyReader,TDefaultDelete<FSoundWaveProxyReader>_> TVar23;
  TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_> TVar24;
  FSourceBufferState *pFVar25;
  FMultichannelLinearResampler *pFVar26;
  FMultichannelLinearResampler *pFVar27;
  int iVar28;
  FScriptContainerElement *pFVar29;
  int iVar30;
  TReferenceControllerBase<1> *pTVar31;
  FScriptContainerElement *pFVar32;
  bool bVar33;
  float fVar34;
  TLess<void> local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res18;
  TReferenceControllerBase<1> *local_res20;
  float *local_118;
  undefined1 local_e8 [16];
  TArray<FSoundWaveCuePoint,TSizedDefaultAllocator<32>_> local_d8;
  FSoundWaveProxy *local_c8;
  TReferenceControllerBase<1> *local_c0;
  float local_b8;
  bool bStack_b4;
  undefined3 uStack_b3;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  longlong local_98;
  FSoundWaveProxy *local_90;
  TReferenceControllerBase<1> *pTStack_88;
  FString local_80;
  FSourceBufferState local_70;
  
  bVar14 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar14) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::FWavePlayerOperator::StartPlaying");
  }
  bVar33 = -1 < CpuChannel->Enabled;
  if (bVar33) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_bool___cdecl_Metasound::FWavePlayerOperator::StartPlaying(void)___ptr64'::
                __l2::__CpuProfilerEventSpecId786,"Metasound::FWavePlayerOperator::StartPlaying",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundWavePlayerNode.cpp"
               ,0x312);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_bool___cdecl_Metasound::FWavePlayerOperator::StartPlaying(void)___ptr64'::
               __l2::__CpuProfilerEventSpecId786);
  }
  puVar7 = *(undefined8 **)&(this->WaveAsset).field_0x8;
  pTVar31 = (TReferenceControllerBase<1> *)puVar7[1];
  pFVar8 = (FSoundWaveProxy *)*puVar7;
  if (pTVar31 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar31->SharedReferenceCount = (atomic<int>)((int)pTVar31->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_90 = (this->CurrentWaveAsset).SoundWaveProxy.Object;
  pTStack_88 = (this->CurrentWaveAsset).SoundWaveProxy.SharedReferenceCount.ReferenceController;
  (this->CurrentWaveAsset).SoundWaveProxy.Object = pFVar8;
  (this->CurrentWaveAsset).SoundWaveProxy.SharedReferenceCount.ReferenceController = pTVar31;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_88);
  pTVar31 = (this->CurrentWaveAsset).SoundWaveProxy.SharedReferenceCount.ReferenceController;
  pFVar8 = (this->CurrentWaveAsset).SoundWaveProxy.Object;
  if (pTVar31 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar31->SharedReferenceCount = (atomic<int>)((int)pTVar31->SharedReferenceCount + 1);
    UNLOCK();
  }
  uStack_b0 = _UNK_15060db28;
  uVar18 = ___xmm_ffffffffffffffffffffffffffffffff;
  this->bOnNearlyDoneTriggeredForWave = false;
  uVar19 = ___xmm_ffffffffffffffffffffffffffffffff;
  this->bIsPlaying = false;
  ___xmm_ffffffffffffffffffffffffffffffff = (float)uVar18;
  UNK_15060db24 = SUB81(uVar18,4);
  _UNK_15060db25 = SUB83(uVar18,5);
  local_b8 = ___xmm_ffffffffffffffffffffffffffffffff;
  bStack_b4 = UNK_15060db24;
  uStack_b3 = _UNK_15060db25;
  local_a8 = 0xffffffffffffffff;
  local_a0 = 0xffffffff;
  ___xmm_ffffffffffffffffffffffffffffffff = uVar19;
  (this->SourceState).StartFrameIndex = -1;
  (this->SourceState).EndFrameIndex = -1;
  (this->SourceState).EOFFrameIndexInBuffer = -1;
  (this->SourceState).LoopEndFrameIndexInBuffer = -1;
  (this->SourceState).EOFFrameIndexInWave = -1;
  (this->SourceState).LoopStartFrameIndexInWave = -1;
  (this->SourceState).LoopEndFrameIndexInWave = -1;
  iVar30 = (this->SourceCircularBuffer).ArrayNum;
  pFVar29 = (this->SourceCircularBuffer).AllocatorInstance.Data;
  pFVar32 = pFVar29 + (longlong)iVar30 * 0x20;
  local_res20 = pTVar31;
  while( true ) {
    if ((this->SourceCircularBuffer).ArrayNum != iVar30) {
      local_res8[0] = (TLess<void>)0x0;
      `TCheckedPointerIterator<Audio::TCircularAudioBuffer<float,16>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar29 == pFVar32) break;
    if ((*(int *)(pFVar29 + 0x10) == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("NumSamples < Capacity",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                            ,0x45b,L""), bVar20)) {
      pcVar16 = (code *)swi(3);
      uVar21 = (*pcVar16)();
      return (bool)uVar21;
    }
    iVar28 = *(int *)(pFVar29 + 0x18);
    if (iVar28 < 0) {
      iVar28 = iVar28 + *(int *)(pFVar29 + 0x10);
    }
    LOCK();
    *(int *)(pFVar29 + 0x14) = iVar28;
    UNLOCK();
    pFVar29 = pFVar29 + 0x20;
  }
  TUniquePtr<FSoundWaveProxyReader,TDefaultDelete<FSoundWaveProxyReader>_>::Reset
            (&this->WaveProxyReader,(FSoundWaveProxyReader *)0x0);
  pIVar9 = (this->ConvertDeinterleave).Ptr;
  pFVar27 = (FMultichannelLinearResampler *)0x0;
  if (pIVar9 != (IConvertDeinterleave *)0x0) {
    (this->ConvertDeinterleave).Ptr = (IConvertDeinterleave *)0x0;
    (**(code **)*pIVar9)(pIVar9,1);
  }
  pFVar26 = (this->Resampler).Ptr;
  if (pFVar26 != (FMultichannelLinearResampler *)0x0) {
    (this->Resampler).Ptr = (FMultichannelLinearResampler *)0x0;
    pFVar29 = (pFVar26->WorkBuffer).AllocatorInstance.Data;
    if (pFVar29 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar29);
    }
    ::operator_delete(pFVar26,0x28);
  }
  piVar1 = &(this->SortedCuePoints).ArrayMax;
  pFVar10 = (FSoundWaveCuePoint *)(this->SortedCuePoints).AllocatorInstance.Data;
  iVar30 = (this->SortedCuePoints).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<FSoundWaveCuePoint,int>(pFVar10,iVar30);
    (this->SortedCuePoints).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,&(this->SortedCuePoints).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FSoundWaveCuePoint,int>(pFVar10,iVar30);
    (this->SortedCuePoints).ArrayNum = 0;
  }
  if (pFVar8 == (FSoundWaveProxy *)0x0) goto LAB_14b3e0b90;
  if (5 < (byte)LogMetaSound._0_1_) {
    this_00 = FSoundWaveProxy::GetFName((this->CurrentWaveAsset).SoundWaveProxy.Object);
    ::FName::ToString(this_00,&local_80);
    UE::Logging::Private::BasicLog<6>
              (&`private:_bool___cdecl_Metasound::FWavePlayerOperator::StartPlaying(void)___ptr64'::
                __l6::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
  }
  pTVar22 = FSoundWaveProxy::GetCuePointsAndLoopRegions(pFVar8,&local_d8);
  pTVar2 = &this->SortedCuePoints;
  if (pTVar2 != pTVar22) {
    DestructItems<FSoundWaveCuePoint,int>
              ((FSoundWaveCuePoint *)(pTVar2->AllocatorInstance).Data,
               (this->SortedCuePoints).ArrayNum);
    iVar30 = pTVar22->ArrayNum;
    pFVar10 = (FSoundWaveCuePoint *)(pTVar22->AllocatorInstance).Data;
    iVar28 = (this->SortedCuePoints).ArrayMax;
    (this->SortedCuePoints).ArrayNum = iVar30;
    if ((iVar30 == 0) && (iVar28 == 0)) {
      (this->SortedCuePoints).ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,iVar30,iVar28,&pTVar2->AllocatorInstance,iVar30,
                 &(this->SortedCuePoints).ArrayMax);
      ConstructItems<FSoundWaveCuePoint,FSoundWaveCuePoint,int>
                ((pTVar2->AllocatorInstance).Data,pFVar10,iVar30);
    }
  }
  DestructItems<FSoundWaveCuePoint,int>
            ((FSoundWaveCuePoint *)local_d8.AllocatorInstance.Data,local_d8.ArrayNum);
  if ((FSoundWaveCuePoint *)local_d8.AllocatorInstance.Data != (FSoundWaveCuePoint *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  AlgoImpl::
  IntroSortInternal<FSoundWaveCuePoint,int,int_(__cdecl*)(FSoundWaveCuePoint_const_&),TLess<void>_>
            ((FSoundWaveCuePoint *)(this->SortedCuePoints).AllocatorInstance.Data,
             (this->SortedCuePoints).ArrayNum,WavePlayerNodePrivate::GetCuePointFrame,local_res8[0])
  ;
  if ((MaxDecodeSizeInFrames & MaxDecodeSizeInFrames - 1U) != 0) {
    iVar30 = 1;
    if (MaxDecodeSizeInFrames != 0) {
      iVar30 = MaxDecodeSizeInFrames;
    }
    uVar6 = (ulonglong)(iVar30 - 1) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_res10 = (undefined4)lVar15;
  }
  local_c0 = local_res20;
  if (local_res20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_res20->SharedReferenceCount = (atomic<int>)((int)local_res20->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_c8 = pFVar8;
  if ((pFVar8 == (FSoundWaveProxy *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar20)) {
    pcVar16 = (code *)swi(3);
    uVar21 = (*pcVar16)();
    return (bool)uVar21;
  }
  TVar23 = FSoundWaveProxyReader::Create
                     ((TSharedRef<FSoundWaveProxy,1> *)local_e8,(FSettings *)&local_c8);
  pTVar3 = &this->WaveProxyReader;
  if ((FSoundWaveProxyReader *)pTVar3 != TVar23.Ptr) {
    pFVar11 = pTVar3->Ptr;
    pTVar3->Ptr = (FSoundWaveProxyReader *)((TVar23.Ptr)->WaveProxy).Object;
    ((TVar23.Ptr)->WaveProxy).Object = (FSoundWaveProxy *)0x0;
    if (pFVar11 != (FSoundWaveProxyReader *)0x0) {
      pFVar29 = (pFVar11->SampleConversionBuffer).AllocatorInstance.Data;
      if (pFVar29 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar29);
      }
      pFVar29 = (pFVar11->ResidualBuffer).AllocatorInstance.Data;
      if (pFVar29 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar29);
      }
      pFVar29 = (pFVar11->DecoderOutput).InternalBuffer.AllocatorInstance.Data;
      if (pFVar29 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar29);
      }
      pIVar12 = (pFVar11->CompressedAudioInfo).Ptr;
      if (pIVar12 != (ICompressedAudioInfo *)0x0) {
        (**(code **)pIVar12->_padding_)(pIVar12,1);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar11->WaveProxy).SharedReferenceCount.ReferenceController);
      ::operator_delete(pFVar11,0xa8);
    }
  }
  if ((FSoundWaveProxy *)local_e8._0_8_ != (FSoundWaveProxy *)0x0) {
    pTVar31 = (((FSoundWaveProxy *)(local_e8._0_8_ + 0x78))->SoundWaveDataPtr).SharedReferenceCount.
              ReferenceController;
    if (pTVar31 != (TReferenceControllerBase<1> *)0x0) {
      FMemory::Free(pTVar31);
    }
    if ((void *)((FSoundWaveProxy *)(local_e8._0_8_ + 0x78))->_padding_ != (void *)0x0) {
      FMemory::Free((void *)((FSoundWaveProxy *)(local_e8._0_8_ + 0x78))->_padding_);
    }
    pFVar13 = (((FSoundWaveProxy *)(local_e8._0_8_ + 0x50))->SoundWaveDataPtr).Object;
    if (pFVar13 != (FSoundWaveData *)0x0) {
      FMemory::Free(pFVar13);
    }
    puVar7 = (undefined8 *)((FSoundWaveProxy *)(local_e8._0_8_ + 0x50))->_padding_;
    if (puVar7 != (undefined8 *)0x0) {
      (**(code **)*puVar7)(puVar7,1);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)(local_e8._0_8_ + 8));
    ::operator_delete((void *)local_e8._0_8_,0xa8);
  }
  iVar30 = DeinterleaveBlockSizeInFrames;
  if ((DeinterleaveBlockSizeInFrames & DeinterleaveBlockSizeInFrames - 1U) != 0) {
    iVar30 = 1;
    if (DeinterleaveBlockSizeInFrames != 0) {
      iVar30 = DeinterleaveBlockSizeInFrames;
    }
    uVar6 = (ulonglong)(iVar30 - 1) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_res18 = (undefined4)lVar15;
    iVar30 = 1 << ((byte)lVar15 & 0x1f);
  }
  pFVar11 = (this->WaveProxyReader).Ptr;
  this->DeinterleaveBufferBlockSizeInFrames = iVar30;
  pTVar31 = local_res20;
  if (pFVar11 == (FSoundWaveProxyReader *)0x0) goto LAB_14b3e0b90;
  this->SampleRateFrameRatio = 1.0;
  if ((0.0 < pFVar11->SampleRate) &&
     (fVar34 = (float)(this->OperatorSettings).SampleRate, 0.0 < fVar34)) {
    this->SampleRateFrameRatio = pFVar11->SampleRate / fVar34;
  }
  local_118 = &this->SampleRateFrameRatio;
  if (pFVar11->NumChannels < 1) goto LAB_14b3e0b90;
  iVar30 = iVar30 * pFVar11->NumChannels;
  TArray<float,TAlignedHeapAllocator<16>_>::Reset(&this->InterleavedBuffer,iVar30);
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,iVar30,&(this->InterleavedBuffer).AllocatorInstance,
             &(this->InterleavedBuffer).ArrayNum,&(this->InterleavedBuffer).ArrayMax);
  this->NumDeinterleaveChannels = this->NumOutputChannels;
  TVar24 = Audio::IConvertDeinterleave::Create((FConvertDeinterleaveParams *)(local_e8 + 8));
  pTVar4 = &this->ConvertDeinterleave;
  if ((IConvertDeinterleave *)pTVar4 != TVar24.Ptr) {
    pIVar9 = pTVar4->Ptr;
    pTVar4->Ptr = (IConvertDeinterleave *)*TVar24.Ptr;
    *TVar24.Ptr = (IConvertDeinterleave)0x0;
    if (pIVar9 != (IConvertDeinterleave *)0x0) {
      (**(code **)*pIVar9)(pIVar9,1);
    }
  }
  if ((TReferenceControllerBase<1> *)local_e8._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    (**(code **)*(longlong *)local_e8._8_8_)(local_e8._8_8_,1);
  }
  Audio::SetMultichannelBufferSize
            (this->NumDeinterleaveChannels,this->DeinterleaveBufferBlockSizeInFrames,
             &this->DeinterleavedBuffer);
  Audio::SetMultichannelCircularBufferCapacity
            (this->NumOutputChannels,
             this->DeinterleaveBufferBlockSizeInFrames -
             ((int)ROUND(__real_bf000000 -
                         (float)(this->OperatorSettings).NumFramesPerBlock * *local_118 *
                         __real_43000000) >> 1),&this->SourceCircularBuffer);
  pFVar25 = WavePlayerNodePrivate::FSourceBufferState::FSourceBufferState
                      (&local_70,(this->WaveProxyReader).Ptr,&this->SourceCircularBuffer);
  iVar30 = pFVar25->EndFrameIndex;
  iVar28 = pFVar25->EOFFrameIndexInBuffer;
  iVar17 = pFVar25->LoopEndFrameIndexInBuffer;
  (this->SourceState).StartFrameIndex = pFVar25->StartFrameIndex;
  (this->SourceState).EndFrameIndex = iVar30;
  (this->SourceState).EOFFrameIndexInBuffer = iVar28;
  (this->SourceState).LoopEndFrameIndexInBuffer = iVar17;
  iVar30 = pFVar25->LoopStartFrameIndexInWave;
  (this->SourceState).EOFFrameIndexInWave = pFVar25->EOFFrameIndexInWave;
  (this->SourceState).LoopStartFrameIndexInWave = iVar30;
  (this->SourceState).LoopEndFrameIndexInWave = pFVar25->LoopEndFrameIndexInWave;
  pFVar26 = ::operator_new(0x28);
  if (pFVar26 != (FMultichannelLinearResampler *)0x0) {
    pFVar27 = Audio::FMultichannelLinearResampler::FMultichannelLinearResampler
                        (pFVar26,this->NumDeinterleaveChannels);
  }
  pTVar5 = &this->Resampler;
  if (pTVar5 == (TUniquePtr<Audio::FMultichannelLinearResampler,TDefaultDelete<Audio::FMultichannelLinearResampler>_>
                 *)&local_98) {
    if (pFVar27 != (FMultichannelLinearResampler *)0x0) {
      pFVar29 = (pFVar27->WorkBuffer).AllocatorInstance.Data;
      pFVar26 = pFVar27;
      if (pFVar29 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar29);
      }
      goto LAB_14b3e0af1;
    }
  }
  else {
    pFVar26 = pTVar5->Ptr;
    pTVar5->Ptr = pFVar27;
    if (pFVar26 != (FMultichannelLinearResampler *)0x0) {
      pFVar29 = (pFVar26->WorkBuffer).AllocatorInstance.Data;
      if (pFVar29 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar29);
      }
LAB_14b3e0af1:
      ::operator_delete(pFVar26,0x28);
    }
  }
  fVar34 = **(float **)&(this->PitchShift).field_0x8;
  if (__real_42900000 <= fVar34) {
    fVar34 = __real_42900000;
  }
  if (fVar34 <= __real_c2900000) {
    fVar34 = __real_c2900000;
  }
  fVar34 = powf(__real_40000000,fVar34 * __real_3daaaaab);
  fVar34 = fVar34 * this->SampleRateFrameRatio;
  if (Audio::FMultichannelLinearResampler::MaxFrameRatio <= fVar34) {
    fVar34 = Audio::FMultichannelLinearResampler::MaxFrameRatio;
  }
  if (fVar34 <= Audio::FMultichannelLinearResampler::MinFrameRatio) {
    fVar34 = Audio::FMultichannelLinearResampler::MinFrameRatio;
  }
  Audio::FMultichannelLinearResampler::SetFrameRatio((this->Resampler).Ptr,fVar34,0);
  pTVar31 = local_res20;
  if ((this->NumDeinterleaveChannels != this->NumOutputChannels) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumDeinterleaveChannels == NumOutputChannels",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundWavePlayerNode.cpp"
                          ,0x368,L""), pTVar31 = local_res20, bVar20)) {
    pcVar16 = (code *)swi(3);
    uVar21 = (*pcVar16)();
    return (bool)uVar21;
  }
LAB_14b3e0b90:
  if ((((this->WaveProxyReader).Ptr == (FSoundWaveProxyReader *)0x0) ||
      ((this->ConvertDeinterleave).Ptr == (IConvertDeinterleave *)0x0)) ||
     ((this->Resampler).Ptr == (FMultichannelLinearResampler *)0x0)) {
    bVar20 = false;
  }
  else {
    bVar20 = true;
  }
  this->bIsPlaying = bVar20;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar31);
  if (bVar33) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar14) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return bVar20;
}

// TriggerUpcomingEvents @ 14b3e2f10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::FWavePlayerOperator::TriggerUpcomingEvents
          (FWavePlayerOperator *this,int param_1,int param_2,FSourceBufferState *param_3)

{
  int iVar1;
  FSoundWaveCuePoint *pFVar2;
  bool bVar3;
  float fVar4;
  FSourceEvents local_28;
  
  local_28.OnLoopFrameIndex = -1;
  local_28.OnEOFFrameIndex = -1;
  local_28.OnCuePointFrameIndex = -1;
  local_28.CuePoint = (FSoundWaveCuePoint *)0x0;
  fVar4 = Audio::FMultichannelLinearResampler::MapOutputFrameToInputFrame
                    ((this->Resampler).Ptr,
                     (float)(((this->OperatorSettings).NumFramesPerBlock * 2 - param_1) + 1));
  MapSourceEventsIfInRange
            (this,&this->SourceState,-((int)ROUND(__real_bf000000 - (fVar4 + fVar4)) >> 1),&local_28
            );
  if (**(char **)&(this->bLoop).field_0x8 == '\0') {
    iVar1 = (this->OperatorSettings).NumFramesPerBlock;
    if (((longlong)local_28._0_8_ < 0) || (param_2 <= local_28.OnEOFFrameIndex)) {
      if ((iVar1 - param_1 <= local_28.OnEOFFrameIndex) &&
         ((local_28.OnEOFFrameIndex < (iVar1 - param_1) + iVar1 &&
          (this->bOnNearlyDoneTriggeredForWave == false)))) {
        FTrigger::TriggerFrame
                  (*(FTrigger **)&(this->TriggerOnNearlyDone).field_0x8,
                   (local_28.OnEOFFrameIndex - iVar1) + param_1);
        this->bOnNearlyDoneTriggeredForWave = true;
      }
    }
    else {
      FTrigger::TriggerFrame
                (*(FTrigger **)&(this->TriggerOnDone).field_0x8,local_28.OnEOFFrameIndex + param_1);
    }
  }
  else if ((-1 < local_28.OnLoopFrameIndex) && (local_28.OnLoopFrameIndex < param_2)) {
    FTrigger::TriggerFrame
              (*(FTrigger **)&(this->TriggerOnLooped).field_0x8,local_28.OnLoopFrameIndex + param_1)
    ;
  }
  pFVar2 = local_28.CuePoint;
  iVar1 = local_28.OnCuePointFrameIndex;
  if (((local_28.CuePoint != (FSoundWaveCuePoint *)0x0) && (-1 < local_28.OnCuePointFrameIndex)) &&
     (local_28.OnCuePointFrameIndex < param_2)) {
    bVar3 = FTrigger::IsTriggeredInBlock(*(FTrigger **)&(this->TriggerOnCuePoint).field_0x8);
    if (bVar3) {
      if (5 < (byte)LogMetaSound._0_1_) {
        UE::Logging::Private::BasicLog<6>
                  (&`private:_void___cdecl_Metasound::FWavePlayerOperator::TriggerUpcomingEvents(int,int,Metasound::WavePlayerNodePrivate::FSourceBufferState_const&___ptr64)___ptr64'
                    ::__l32::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
    }
    else {
      **(int **)&(this->CuePointID).field_0x8 = pFVar2->CuePointID;
      ::FString::operator=(*(FString **)&(this->CuePointLabel).field_0x8,&pFVar2->Label);
      FTrigger::TriggerFrame(*(FTrigger **)&(this->TriggerOnCuePoint).field_0x8,iVar1 + param_1);
    }
  }
  return;
}

