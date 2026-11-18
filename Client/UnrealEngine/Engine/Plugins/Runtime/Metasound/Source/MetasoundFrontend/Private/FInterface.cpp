// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 3

// FInterface @ 14ad987f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInterface * __thiscall
`Metasound::Frontend::SourceInterface::CreateInterface'::__l2::FInterface::FInterface
          (void *this,FTopLevelAssetPath *param_1)

{
  ForAnyElementType *pFVar1;
  longlong *plVar2;
  FName FVar3;
  FName FVar4;
  FMetasoundFrontendVersion *pFVar5;
  FName *pFVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStackY_228 [32];
  ForAnyElementType local_1e8;
  undefined8 local_1e0;
  initializer_list<Audio::FParameterInterface::FInput> local_1d8;
  uint local_1c8;
  undefined1 local_1b8 [64];
  TObjectPtr<UObject>_u_0 local_178;
  FText FStack_170;
  FName local_160;
  FName local_158;
  ForAnyElementType local_150;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  FName local_128;
  FName local_120;
  ulonglong local_118;
  FText local_110;
  FText local_100;
  undefined1 local_f0 [16];
  uint local_e0;
  undefined1 local_d8 [72];
  FText local_90;
  ForAnyElementType local_80;
  FName local_78;
  undefined1 local_70;
  FText local_68;
  FText local_58;
  undefined8 local_48;
  FName local_40;
  undefined1 local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_228;
  pFVar5 = Metasound::Frontend::SourceInterface::GetVersion();
  local_1d8._First = *(FInput **)&pFVar5->Number;
  pFVar5 = Metasound::Frontend::SourceInterface::GetVersion();
  Audio::FParameterInterface::FParameterInterface(this,pFVar5->Name,(FVersion *)&local_1d8);
  FVar3 = param_1->PackageName;
  FVar4 = param_1->AssetName;
  local_1c8 = CONCAT22(local_1c8._2_2_,0x100);
  local_1e8.Data = (FScriptContainerElement *)0x0;
  local_1e0 = CONCAT44(local_1e0._4_4_,1);
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x14,4,1,0,&local_1e8,1,(int *)((longlong)&local_1e0 + 4));
  pFVar1 = (ForAnyElementType *)((longlong)this + 0x40);
  *(FName *)local_1e8.Data = FVar3;
  *(FName *)(local_1e8.Data + 8) = FVar4;
  (((FName *)(local_1e8.Data + 0x10))->ComparisonIndex).Value = local_1c8;
  local_1d8._First = (FInput *)FVar3;
  local_1d8._Last = (FInput *)FVar4;
  if (pFVar1 != &local_1e8) {
    if (pFVar1->Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1->Data);
    }
    pFVar1->Data = local_1e8.Data;
    *(undefined4 *)((longlong)this + 0x48) = (undefined4)local_1e0;
    *(undefined4 *)((longlong)this + 0x4c) = local_1e0._4_4_;
    local_1e0 = 0;
    local_1e8.Data = (FScriptContainerElement *)0x0;
  }
  if ((FName *)local_1e8.Data != (FName *)0x0) {
    FMemory::Free(local_1e8.Data);
  }
  FText::AsLocalizable_Advanced_LocText((FText *)local_1b8,L"Metasound",L"OnPlay",L"On Play");
  FText::AsLocalizable_Advanced_LocText
            ((FText *)(local_1b8 + 0x10),L"Metasound",L"OnPlayDescription",
             L"Trigger executed when the source is played.");
  pFVar6 = Metasound::GetMetasoundDataTypeName<Metasound::FTrigger>();
  local_1b8._32_8_ = *pFVar6;
  local_1b8._40_4_ = Metasound::Frontend::SourceInterface::Inputs::OnPlay.ComparisonIndex.Value;
  local_1b8._44_4_ = Metasound::Frontend::SourceInterface::Inputs::OnPlay.Number;
  local_1b8._48_4_ = 0.0;
  local_1b8[0x34] = false;
  local_1b8._56_4_ = 0;
  local_178.DebugPtr = (UObject *)0x0;
  FStack_170.TextData.Reference = (ITextData *)0x0;
  FStack_170.Flags = 0;
  FStack_170._12_4_ = 0;
  local_160 = (FName)0x0;
  local_158.ComparisonIndex.Value = 0;
  local_158.Number = 0;
  local_150.Data = (FScriptContainerElement *)0x0;
  local_148._0_8_ = (ITextData *)0x0;
  local_148._8_8_ = (FScriptContainerElement *)0x0;
  local_138._0_8_ = (ITextData *)0x0;
  local_138._8_8_ = (FScriptContainerElement *)0x0;
  local_128.ComparisonIndex.Value = 0;
  local_128.Number = 0;
  local_120 = (FName)0x0;
  local_118 = 0;
  local_110.TextData.Reference._0_1_ = Boolean;
  local_110._4_8_ = (FName)0x0;
  local_100.TextData.Reference = (ITextData *)0x0;
  local_100.Flags = 0;
  local_100._12_4_ = 0;
  FText::FText((FText *)local_f0);
  local_1d8._First = (FInput *)local_1b8;
  local_e0 = 0;
  local_1d8._Last = (FInput *)local_d8;
  TArray<Audio::FParameterInterface::FInput,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<Audio::FParameterInterface::FInput,TSizedDefaultAllocator<32>_> *)
             ((longlong)this + 0x10),&local_1d8);
  if ((ITextData *)local_f0._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_f0._0_8_ + 0x10))();
  }
  FAudioParameter::~FAudioParameter((FAudioParameter *)(local_1b8 + 0x28));
  if ((ITextData *)local_1b8._16_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_1b8._16_8_ + 0x10))();
  }
  if ((ITextData *)local_1b8._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_1b8._0_8_ + 0x10))();
  }
  FText::AsLocalizable_Advanced_LocText
            ((FText *)local_1b8,L"Metasound",L"AudioDeviceIDDisplayName1",L"Audio Device ID");
  FText::AsLocalizable_Advanced_LocText
            ((FText *)(local_1b8 + 0x10),L"Metasound",L"AudioDeviceIDDescription2",
             L"ID of AudioDevice source is played from.");
  local_1b8._40_4_ =
       Metasound::Frontend::SourceInterface::Environment::DeviceID.ComparisonIndex.Value;
  local_1b8._44_4_ = Metasound::Frontend::SourceInterface::Environment::DeviceID.Number;
  local_1b8._32_4_ = 0;
  local_1b8._36_4_ = 0;
  local_1b8._48_4_ = local_1b8._48_4_ & 0xffffff00;
  FText::AsLocalizable_Advanced_LocText
            ((FText *)(local_1b8 + 0x38),L"Metasound",L"GraphNameDisplayName",L"Graph Name");
  FText::AsLocalizable_Advanced_LocText
            ((FText *)(local_1b8 + 0x48),L"Metasound",L"AudioDeviceIDDescription3",
             L"Name of source graph (for debugging/logging).");
  pFVar6 = Metasound::GetMetasoundDataTypeName<FString>();
  local_160 = *pFVar6;
  local_158 = Metasound::Frontend::SourceInterface::Environment::GraphName;
  local_150.Data = local_150.Data & 0xffffffffffffff00;
  FText::AsLocalizable_Advanced_LocText
            ((FText *)local_148,L"Metasound",L"IsPreviewSoundDisplayName",L"Is Preview Sound");
  FText::AsLocalizable_Advanced_LocText
            ((FText *)local_138,L"Metasound",L"IsPreviewSoundDescription4",
             L"Whether source is being played as a previewed sound.");
  pFVar6 = Metasound::GetMetasoundDataTypeName<bool>();
  local_128 = *pFVar6;
  local_120 = Metasound::Frontend::SourceInterface::Environment::IsPreview;
  local_118 = local_118 & 0xffffffffffffff00;
  FText::AsLocalizable_Advanced_LocText
            (&local_110,L"Metasound",L"TransmitterIDDisplayName",L"Transmitter ID");
  FText::AsLocalizable_Advanced_LocText
            (&local_100,L"Metasound",L"TransmitterIDDescription",
             L"ID used by Transmission System to generate a unique send address for each source instance."
            );
  local_f0._8_4_ =
       Metasound::Frontend::SourceInterface::Environment::TransmitterID.ComparisonIndex.Value;
  local_f0._12_4_ = Metasound::Frontend::SourceInterface::Environment::TransmitterID.Number;
  local_f0._0_8_ = (ITextData *)0x0;
  local_e0 = local_e0 & 0xffffff00;
  FText::AsLocalizable_Advanced_LocText
            ((FText *)local_d8,L"Metasound",L"SoundUniqueDisplayName",L"Sound Unique ID");
  FText::AsLocalizable_Advanced_LocText
            ((FText *)(local_d8 + 0x10),L"Metasound",L"SoundUniqueDescription",
             L"ID of unique source instance.");
  local_d8._40_4_ =
       Metasound::Frontend::SourceInterface::Environment::SoundUniqueID.ComparisonIndex.Value;
  local_d8._44_4_ = Metasound::Frontend::SourceInterface::Environment::SoundUniqueID.Number;
  local_d8._32_4_ = 0;
  local_d8._36_4_ = 0;
  local_d8[0x30] = 0;
  FText::AsLocalizable_Advanced_LocText
            ((FText *)(local_d8 + 0x38),L"Metasound",L"AudioMixerOutputFramesDisplayName",
             L"Audio Mixer Output Frames");
  FText::AsLocalizable_Advanced_LocText
            (&local_90,L"Metasound",L"AudioMixerOutputFramesDescription",
             L"The number of output frames rendered per buffer in the audio mixer.");
  local_78 = Metasound::Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames;
  local_80.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  FText::AsLocalizable_Advanced_LocText
            (&local_68,L"Metasound",L"AudioMixerSampleRateDisplayName",L"Audio Mixer Sample Rate");
  FText::AsLocalizable_Advanced_LocText
            (&local_58,L"Metasound",L"AudioMixerSampleRateDescription",
             L"The sample rate of the audio mixer.");
  local_40 = Metasound::Frontend::SourceInterface::Environment::AudioMixerSampleRate;
  local_1d8._First = (FInput *)local_1b8;
  local_48._0_4_ = 0;
  local_48._4_4_ = 0;
  local_1d8._Last = (FInput *)&stack0xffffffffffffffd0;
  local_38 = 0;
  TArray<Audio::FParameterInterface::FEnvironmentVariable,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<Audio::FParameterInterface::FEnvironmentVariable,TSizedDefaultAllocator<32>_> *
             )((longlong)this + 0x30),
             (initializer_list<Audio::FParameterInterface::FEnvironmentVariable> *)&local_1d8);
  plVar7 = (longlong *)&stack0xffffffffffffffd0;
  lVar8 = 7;
  do {
    plVar2 = plVar7 + -5;
    plVar7 = plVar7 + -7;
    lVar8 = lVar8 + -1;
    if ((longlong *)*plVar2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar2 + 0x10))();
    }
    if ((longlong *)*plVar7 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar7 + 0x10))();
    }
  } while (lVar8 != 0);
  return this;
}

// FInterface @ 14ad98d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInterface * __thiscall
`Metasound::Frontend::SourceInterfaceV1_0::CreateInterface'::__l2::FInterface::FInterface
          (void *this,FTopLevelAssetPath *param_1)

{
  ForAnyElementType *pFVar1;
  longlong *plVar2;
  FName FVar3;
  FName FVar4;
  FMetasoundFrontendVersion *pFVar5;
  FName *pFVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStackY_208 [32];
  ForAnyElementType local_1c8;
  undefined8 local_1c0;
  initializer_list<Audio::FParameterInterface::FInput> local_1b8;
  undefined4 local_1a8;
  undefined1 local_198 [48];
  FText local_168;
  TObjectPtr<UObject>_u_0 local_158;
  undefined1 local_150 [8];
  undefined1 local_148 [56];
  undefined1 local_110 [16];
  undefined1 auStack_100 [16];
  FName local_f0;
  FName local_e8;
  ForAnyElementType local_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  FName local_b8;
  FName local_b0;
  ulonglong local_a8;
  FText local_a0;
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  uint local_70;
  undefined1 local_68 [64];
  TObjectPtr<UObject>_u_0 local_28;
  
  local_28.DebugPtr = (UObject *)(__security_cookie.value ^ (ulonglong)auStackY_208);
  pFVar5 = Metasound::Frontend::SourceInterfaceV1_0::GetVersion();
  local_1b8._First = *(FInput **)&pFVar5->Number;
  pFVar5 = Metasound::Frontend::SourceInterfaceV1_0::GetVersion();
  Audio::FParameterInterface::FParameterInterface(this,pFVar5->Name,(FVersion *)&local_1b8);
  FVar3 = param_1->PackageName;
  FVar4 = param_1->AssetName;
  local_1a8 = (uint)local_1a8._2_2_ << 0x10;
  local_1c8.Data = (FScriptContainerElement *)0x0;
  local_1c0 = CONCAT44(local_1c0._4_4_,1);
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x14,4,1,0,&local_1c8,1,(int *)((longlong)&local_1c0 + 4));
  pFVar1 = (ForAnyElementType *)((longlong)this + 0x40);
  *(FName *)local_1c8.Data = FVar3;
  *(FName *)(local_1c8.Data + 8) = FVar4;
  (((FName *)(local_1c8.Data + 0x10))->ComparisonIndex).Value = local_1a8;
  local_1b8._First = (FInput *)FVar3;
  local_1b8._Last = (FInput *)FVar4;
  if (pFVar1 != &local_1c8) {
    if (pFVar1->Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1->Data);
    }
    pFVar1->Data = local_1c8.Data;
    *(undefined4 *)((longlong)this + 0x48) = (undefined4)local_1c0;
    *(undefined4 *)((longlong)this + 0x4c) = local_1c0._4_4_;
    local_1c0 = 0;
    local_1c8.Data = (FScriptContainerElement *)0x0;
  }
  if ((FName *)local_1c8.Data != (FName *)0x0) {
    FMemory::Free(local_1c8.Data);
  }
  FText::AsLocalizable_Advanced_LocText((FText *)local_148,L"Metasound",L"OnPlay",L"On Play");
  FText::AsLocalizable_Advanced_LocText
            ((FText *)(local_148 + 0x10),L"Metasound",L"OnPlayDescription",
             L"Trigger executed when the source is played.");
  pFVar6 = Metasound::GetMetasoundDataTypeName<Metasound::FTrigger>();
  local_148._32_8_ = *pFVar6;
  local_148._40_4_ = Metasound::Frontend::SourceInterfaceV1_0::Inputs::OnPlay.ComparisonIndex.Value;
  local_148._44_4_ = Metasound::Frontend::SourceInterfaceV1_0::Inputs::OnPlay.Number;
  local_148._48_4_ = 0.0;
  local_148[0x34] = false;
  local_110._0_4_ = 0;
  local_110._8_8_ = (UObject *)0x0;
  auStack_100._0_8_ = (FScriptContainerElement *)0x0;
  auStack_100._8_8_ = (FScriptContainerElement *)0x0;
  local_f0 = (FName)0x0;
  local_e8 = (FName)0x0;
  local_e0.Data = (FScriptContainerElement *)0x0;
  local_d8._0_8_ = (FScriptContainerElement *)0x0;
  local_d8._8_8_ = (FScriptContainerElement *)0x0;
  local_c8._0_8_ = (FScriptContainerElement *)0x0;
  local_c8._8_8_ = (FScriptContainerElement *)0x0;
  local_b8 = (FName)0x0;
  local_b0 = (FName)0x0;
  local_a8 = 0;
  local_a0.TextData.Reference._0_1_ = Boolean;
  local_a0._4_8_ = (FName)0x0;
  local_90._0_8_ = (FScriptContainerElement *)0x0;
  local_90._8_8_ = (ITextData *)0x0;
  FText::FText((FText *)local_80);
  local_1b8._First = (FInput *)local_148;
  local_70 = 0;
  local_1b8._Last = (FInput *)local_68;
  TArray<Audio::FParameterInterface::FInput,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<Audio::FParameterInterface::FInput,TSizedDefaultAllocator<32>_> *)
             ((longlong)this + 0x10),&local_1b8);
  if ((ITextData *)local_80._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_80._0_8_ + 0x10))();
  }
  FAudioParameter::~FAudioParameter((FAudioParameter *)(local_148 + 0x28));
  if ((ITextData *)local_148._16_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_148._16_8_ + 0x10))();
  }
  if ((ITextData *)local_148._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_148._0_8_ + 0x10))();
  }
  FText::AsLocalizable_Advanced_LocText
            ((FText *)local_198,L"Metasound",L"OnFinished",L"On Finished");
  FText::AsLocalizable_Advanced_LocText
            ((FText *)(local_198 + 0x10),L"Metasound",L"OnFinishedDescription",
             L"Trigger executed to initiate stopping the source.");
  pFVar6 = Metasound::GetMetasoundDataTypeName<Metasound::FTrigger>();
  local_198._32_8_ = *pFVar6;
  local_198._40_4_ =
       Metasound::Frontend::SourceInterfaceV1_0::Outputs::OnFinished.ComparisonIndex.Value;
  local_198._44_4_ = Metasound::Frontend::SourceInterfaceV1_0::Outputs::OnFinished.Number;
  FText::FText(&local_168);
  local_1b8._First = (FInput *)local_198;
  local_158._0_1_ = 0;
  local_1b8._Last = (FInput *)local_150;
  local_158._4_4_ = 0;
  TArray<Audio::FParameterInterface::FOutput,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<Audio::FParameterInterface::FOutput,TSizedDefaultAllocator<32>_> *)
             ((longlong)this + 0x20),
             (initializer_list<Audio::FParameterInterface::FOutput> *)&local_1b8);
  if (local_168.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
  }
  if ((ITextData *)local_198._16_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_198._16_8_ + 0x10))();
  }
  if ((ITextData *)local_198._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_198._0_8_ + 0x10))();
  }
  FText::AsLocalizable_Advanced_LocText
            ((FText *)local_148,L"Metasound",L"AudioDeviceIDDisplayName",L"Audio Device ID");
  FText::AsLocalizable_Advanced_LocText
            ((FText *)(local_148 + 0x10),L"Metasound",L"AudioDeviceIDDescription",
             L"ID of AudioDevice source is played from.");
  local_148._40_4_ =
       Metasound::Frontend::SourceInterfaceV1_0::Environment::DeviceID.ComparisonIndex.Value;
  local_148._44_4_ = Metasound::Frontend::SourceInterfaceV1_0::Environment::DeviceID.Number;
  local_148._32_4_ = 0;
  local_148._36_4_ = 0;
  local_148._48_4_ = local_148._48_4_ & 0xffffff00;
  FText::AsLocalizable_Advanced_LocText
            ((FText *)(local_148 + 0x38),L"Metasound",L"GraphNameDisplayName",L"Graph Name");
  FText::AsLocalizable_Advanced_LocText
            ((FText *)auStack_100,L"Metasound",L"GraphNameDescription",
             L"Name of source graph (for debugging/logging).");
  pFVar6 = Metasound::GetMetasoundDataTypeName<FString>();
  local_f0 = *pFVar6;
  local_e8 = Metasound::Frontend::SourceInterfaceV1_0::Environment::GraphName;
  local_e0.Data = local_e0.Data & 0xffffffffffffff00;
  FText::AsLocalizable_Advanced_LocText
            ((FText *)local_d8,L"Metasound",L"IsPreviewSoundDisplayName",L"Is Preview Sound");
  FText::AsLocalizable_Advanced_LocText
            ((FText *)local_c8,L"Metasound",L"IsPreviewSoundDescription",
             L"Whether source is being played as a previewed sound.");
  pFVar6 = Metasound::GetMetasoundDataTypeName<bool>();
  local_b8 = *pFVar6;
  local_b0 = Metasound::Frontend::SourceInterfaceV1_0::Environment::IsPreview;
  local_a8 = local_a8 & 0xffffffffffffff00;
  FText::AsLocalizable_Advanced_LocText
            (&local_a0,L"Metasound",L"TransmitterIDDisplayName",L"Transmitter ID");
  FText::AsLocalizable_Advanced_LocText
            ((FText *)local_90,L"Metasound",L"TransmitterIDDescription",
             L"ID used by Transmission System to generate a unique send address for each source instance."
            );
  local_80._8_4_ =
       Metasound::Frontend::SourceInterfaceV1_0::Environment::TransmitterID.ComparisonIndex.Value;
  local_80._12_4_ = Metasound::Frontend::SourceInterfaceV1_0::Environment::TransmitterID.Number;
  local_80._0_8_ = (ITextData *)0x0;
  local_70 = local_70 & 0xffffff00;
  FText::AsLocalizable_Advanced_LocText
            ((FText *)local_68,L"Metasound",L"SoundUniqueIdDisplayName",L"Sound Unique ID");
  FText::AsLocalizable_Advanced_LocText
            ((FText *)(local_68 + 0x10),L"Metasound",L"SoundUniqueIdDescription",
             L"ID of unique source instance.");
  local_68._40_4_ =
       Metasound::Frontend::SourceInterfaceV1_0::Environment::SoundUniqueID.ComparisonIndex.Value;
  local_68._44_4_ = Metasound::Frontend::SourceInterfaceV1_0::Environment::SoundUniqueID.Number;
  local_1b8._First = (FInput *)local_148;
  local_68._32_4_ = 0;
  local_68._36_4_ = 0;
  local_1b8._Last = (FInput *)(local_68 + 0x38);
  local_68[0x30] = 0;
  TArray<Audio::FParameterInterface::FEnvironmentVariable,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<Audio::FParameterInterface::FEnvironmentVariable,TSizedDefaultAllocator<32>_> *
             )((longlong)this + 0x30),
             (initializer_list<Audio::FParameterInterface::FEnvironmentVariable> *)&local_1b8);
  plVar7 = (longlong *)(local_68 + 0x38);
  lVar8 = 5;
  do {
    plVar2 = plVar7 + -5;
    plVar7 = plVar7 + -7;
    lVar8 = lVar8 + -1;
    if ((longlong *)*plVar2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar2 + 0x10))();
    }
    if ((longlong *)*plVar7 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar7 + 0x10))();
    }
  } while (lVar8 != 0);
  return this;
}

// FInterface @ 14ad99220

FInterface * __thiscall
`Metasound::Frontend::SourceStartTimeInterface::CreateInterface'::__l2::FInterface::FInterface
          (void *this,FTopLevelAssetPath *param_1)

{
  ForAnyElementType *pFVar1;
  FName FVar2;
  FName FVar3;
  FMetasoundFrontendVersion *pFVar4;
  FName *pFVar5;
  int local_res8;
  int local_resc;
  ForAnyElementType local_128;
  undefined8 local_120;
  initializer_list<Audio::FParameterInterface::FInput> local_118;
  uint local_108;
  FInput local_f8;
  
  pFVar4 = Metasound::Frontend::SourceStartTimeInterface::GetVersion();
  local_res8 = (pFVar4->Number).Major;
  local_resc = (pFVar4->Number).Minor;
  pFVar4 = Metasound::Frontend::SourceStartTimeInterface::GetVersion();
  Audio::FParameterInterface::FParameterInterface(this,pFVar4->Name,(FVersion *)&stack0x00000008);
  FVar2 = param_1->PackageName;
  FVar3 = param_1->AssetName;
  local_108 = CONCAT22(local_108._2_2_,1);
  local_128.Data = (FScriptContainerElement *)0x0;
  local_120 = CONCAT44(local_120._4_4_,1);
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x14,4,1,0,&local_128,1,(int *)((longlong)&local_120 + 4));
  pFVar1 = (ForAnyElementType *)((longlong)this + 0x40);
  *(FName *)local_128.Data = FVar2;
  *(FName *)(local_128.Data + 8) = FVar3;
  (((FName *)(local_128.Data + 0x10))->ComparisonIndex).Value = local_108;
  local_118._First = (FInput *)FVar2;
  local_118._Last = (FInput *)FVar3;
  if (pFVar1 != &local_128) {
    if (pFVar1->Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1->Data);
    }
    pFVar1->Data = local_128.Data;
    *(undefined4 *)((longlong)this + 0x48) = (undefined4)local_120;
    *(undefined4 *)((longlong)this + 0x4c) = local_120._4_4_;
    local_120 = 0;
    local_128.Data = (FScriptContainerElement *)0x0;
  }
  if ((FName *)local_128.Data != (FName *)0x0) {
    FMemory::Free(local_128.Data);
  }
  FText::AsLocalizable_Advanced_LocText
            (&local_f8.DisplayName,L"Metasound",L"StartTime",L"Start Time");
  FText::AsLocalizable_Advanced_LocText
            (&local_f8.Description,L"Metasound",L"StartTime Description",
             L"The StartTime of the source passed into the MetaSound from the Gameplay API.");
  pFVar5 = Metasound::GetMetasoundDataTypeName<Metasound::FTime>();
  local_f8.DataType = *pFVar5;
  local_f8.InitValue.ParamName = Metasound::Frontend::SourceStartTimeInterface::Inputs::StartTime;
  local_f8.InitValue.FloatParam = 0.0;
  local_f8.InitValue.BoolParam = false;
  local_f8.InitValue.IntParam = 0;
  local_f8.InitValue.ObjectParam.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  local_f8.InitValue.StringParam.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.InitValue.StringParam.Data.ArrayNum = 0;
  local_f8.InitValue.StringParam.Data.ArrayMax = 0;
  local_f8.InitValue.ArrayFloatParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.InitValue.ArrayFloatParam.ArrayNum = 0;
  local_f8.InitValue.ArrayFloatParam.ArrayMax = 0;
  local_f8.InitValue.ArrayBoolParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.InitValue.ArrayBoolParam.ArrayNum = 0;
  local_f8.InitValue.ArrayBoolParam.ArrayMax = 0;
  local_f8.InitValue.ArrayIntParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.InitValue.ArrayIntParam.ArrayNum = 0;
  local_f8.InitValue.ArrayIntParam.ArrayMax = 0;
  local_f8.InitValue.ArrayObjectParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.InitValue.ArrayObjectParam.ArrayNum = 0;
  local_f8.InitValue.ArrayObjectParam.ArrayMax = 0;
  local_f8.InitValue.ArrayStringParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.InitValue.ArrayStringParam.ArrayNum = 0;
  local_f8.InitValue.ArrayStringParam.ArrayMax = 0;
  local_f8.InitValue.ParamType = None;
  local_f8.InitValue.TypeName.ComparisonIndex.Value = 0;
  local_f8.InitValue.TypeName.Number = 0;
  local_f8.InitValue.ObjectProxies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.InitValue.ObjectProxies.ArrayNum = 0;
  local_f8.InitValue.ObjectProxies.ArrayMax = 0;
  FText::FText(&local_f8.RequiredText);
  local_118._First = &local_f8;
  local_f8.SortOrderIndex = 0;
  local_118._Last = (FInput *)&stack0xffffffffffffffe8;
  TArray<Audio::FParameterInterface::FInput,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<Audio::FParameterInterface::FInput,TSizedDefaultAllocator<32>_> *)
             ((longlong)this + 0x10),&local_118);
  if (local_f8.RequiredText.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_f8.RequiredText.TextData.Reference + 0x10))();
  }
  FAudioParameter::~FAudioParameter(&local_f8.InitValue);
  if (local_f8.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_f8.Description.TextData.Reference + 0x10))();
  }
  if (local_f8.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_f8.DisplayName.TextData.Reference + 0x10))();
  }
  return this;
}

