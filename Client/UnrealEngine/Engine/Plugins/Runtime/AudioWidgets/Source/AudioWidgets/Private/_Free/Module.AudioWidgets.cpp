// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 1074

// ContextMenuExtensionHook'' @ 1413e1440

void __cdecl `dynamic_initializer_for_'SAudioSpectrogram::ContextMenuExtensionHook__(void)

{
  ::FName::FName(&SAudioSpectrogram::ContextMenuExtensionHook,"SpectrogramDisplayOptions");
  return;
}

// ContextMenuExtensionHook'' @ 1413e1460

void __cdecl `dynamic_initializer_for_'SAudioSpectrumPlot::ContextMenuExtensionHook__(void)

{
  ::FName::FName(&SAudioSpectrumPlot::ContextMenuExtensionHook,"SpectrumPlotDisplayOptions");
  return;
}

// NumericInterface'' @ 1413e1490

void __cdecl `dynamic_initializer_for_'SAudioTextBox::NumericInterface__(void)

{
  atexit(`dynamic_atexit_destructor_for_'SAudioTextBox::NumericInterface__);
  return;
}

// OnNewTimeRulerStyle'' @ 1413e14b0

void __cdecl `dynamic_initializer_for_'FAudioOscilloscopePanelStyle::OnNewTimeRulerStyle__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FAudioOscilloscopePanelStyle::OnNewTimeRulerStyle__);
  return;
}

// OnNewValueGridOverlayStyle'' @ 1413e14d0

void __cdecl
`dynamic_initializer_for_'FAudioOscilloscopePanelStyle::OnNewValueGridOverlayStyle__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FAudioOscilloscopePanelStyle::OnNewValueGridOverlayStyle__)
  ;
  return;
}

// OnNewValueGridOverlayStyle'' @ 1413e14f0

void __cdecl
`dynamic_initializer_for_'FAudioVectorscopePanelStyle::OnNewValueGridOverlayStyle__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FAudioVectorscopePanelStyle::OnNewValueGridOverlayStyle__);
  return;
}

// OnNewVectorViewerStyle'' @ 1413e1510

void __cdecl `dynamic_initializer_for_'FAudioVectorscopePanelStyle::OnNewVectorViewerStyle__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FAudioVectorscopePanelStyle::OnNewVectorViewerStyle__);
  return;
}

// OnNewWaveformViewerStyle'' @ 1413e1530

void __cdecl
`dynamic_initializer_for_'FAudioOscilloscopePanelStyle::OnNewWaveformViewerStyle__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FAudioOscilloscopePanelStyle::OnNewWaveformViewerStyle__);
  return;
}

// RackUnitTypeInfo'' @ 1413e1550

void __cdecl `dynamic_initializer_for_'AudioWidgets::FAudioLoudnessMeter::RackUnitTypeInfo__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FDestructionSentinel local_28;
  undefined8 local_10;
  
  ::FName::FName(&AudioWidgets::FAudioLoudnessMeter::RackUnitTypeInfo.TypeName,
                 L"FAudioLoudnessMeter");
  FText::AsLocalizable_Advanced_LocText
            (&AudioWidgets::FAudioLoudnessMeter::RackUnitTypeInfo.DisplayName,L"FAudioLoudnessMeter"
             ,L"AudioLoudnessMeterDisplayName",L"Loudness");
  FSlateIcon::FSlateIcon(&AudioWidgets::FAudioLoudnessMeter::RackUnitTypeInfo.Icon);
  AudioWidgets::FAudioLoudnessMeter::RackUnitTypeInfo.OnMakeAudioAnalyzerRackUnit._0_8_ = 0;
  AudioWidgets::FAudioLoudnessMeter::RackUnitTypeInfo.OnMakeAudioAnalyzerRackUnit._8_8_ = 0;
  AudioWidgets::FAudioLoudnessMeter::RackUnitTypeInfo.OnMakeAudioAnalyzerRackUnit._16_4_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &AudioWidgets::FAudioLoudnessMeter::RackUnitTypeInfo.OnMakeAudioAnalyzerRackUnit,
             (FWriteAccessScope *)&local_28);
  local_10 = 0x15536e488;
  puVar1 = UE::Core::Private::DelegateAllocate
                     (0x20,(FDelegateAllocation *)
                           &AudioWidgets::FAudioLoudnessMeter::RackUnitTypeInfo.
                            OnMakeAudioAnalyzerRackUnit.field_0x8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VIAudioAnalyzerRackUnit_AudioWidgets___00__AEBUFAudioAnalyzerRackUnitConstructParams_AudioWidgets___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedRef_VIAudioAnalyzerRackUnit_AudioWidgets___00__AEBUFAudioAnalyzerRackUnitConstructParams_AudioWidgets___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = AudioWidgets::FAudioLoudnessMeter::MakeRackUnit;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  AudioWidgets::FAudioLoudnessMeter::RackUnitTypeInfo.VerticalSizeCoefficient = 0.5;
  atexit(`dynamic_atexit_destructor_for_'AudioWidgets::FAudioLoudnessMeter::RackUnitTypeInfo__);
  return;
}

// RackUnitTypeInfo'' @ 1413e1640

void __cdecl `dynamic_initializer_for_'AudioWidgets::FAudioMeter::RackUnitTypeInfo__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FDestructionSentinel local_28;
  undefined8 local_10;
  
  ::FName::FName(&AudioWidgets::FAudioMeter::RackUnitTypeInfo.TypeName,L"FAudioMeter");
  FText::AsLocalizable_Advanced_LocText
            (&AudioWidgets::FAudioMeter::RackUnitTypeInfo.DisplayName,L"AUDIO_UMG",
             L"AudioMeterDisplayName",L"Meter");
  FSlateIcon::FSlateIcon(&AudioWidgets::FAudioMeter::RackUnitTypeInfo.Icon);
  AudioWidgets::FAudioMeter::RackUnitTypeInfo.OnMakeAudioAnalyzerRackUnit._0_8_ = 0;
  AudioWidgets::FAudioMeter::RackUnitTypeInfo.OnMakeAudioAnalyzerRackUnit._8_8_ = 0;
  AudioWidgets::FAudioMeter::RackUnitTypeInfo.OnMakeAudioAnalyzerRackUnit._16_4_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &AudioWidgets::FAudioMeter::RackUnitTypeInfo.OnMakeAudioAnalyzerRackUnit,
             (FWriteAccessScope *)&local_28);
  local_10 = 0x15536e510;
  puVar1 = UE::Core::Private::DelegateAllocate
                     (0x20,(FDelegateAllocation *)
                           &AudioWidgets::FAudioMeter::RackUnitTypeInfo.OnMakeAudioAnalyzerRackUnit.
                            field_0x8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VIAudioAnalyzerRackUnit_AudioWidgets___00__AEBUFAudioAnalyzerRackUnitConstructParams_AudioWidgets___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedRef_VIAudioAnalyzerRackUnit_AudioWidgets___00__AEBUFAudioAnalyzerRackUnitConstructParams_AudioWidgets___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = AudioWidgets::FAudioMeter::MakeRackUnit;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  AudioWidgets::FAudioMeter::RackUnitTypeInfo.VerticalSizeCoefficient = 0.5;
  atexit(`dynamic_atexit_destructor_for_'AudioWidgets::FAudioMeter::RackUnitTypeInfo__);
  return;
}

// RackUnitTypeInfo'' @ 1413e1730

void __cdecl `dynamic_initializer_for_'AudioWidgets::FAudioOscilloscope::RackUnitTypeInfo__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FDestructionSentinel local_28;
  undefined8 local_10;
  
  ::FName::FName(&AudioWidgets::FAudioOscilloscope::RackUnitTypeInfo.TypeName,L"FAudioOscilloscope")
  ;
  FText::AsLocalizable_Advanced_LocText
            (&AudioWidgets::FAudioOscilloscope::RackUnitTypeInfo.DisplayName,L"FAudioOscilloscope",
             L"AudioOscilloscopeDisplayName",L"Oscilloscope");
  FSlateIcon::FSlateIcon(&AudioWidgets::FAudioOscilloscope::RackUnitTypeInfo.Icon);
  AudioWidgets::FAudioOscilloscope::RackUnitTypeInfo.OnMakeAudioAnalyzerRackUnit._0_8_ = 0;
  AudioWidgets::FAudioOscilloscope::RackUnitTypeInfo.OnMakeAudioAnalyzerRackUnit._8_8_ = 0;
  AudioWidgets::FAudioOscilloscope::RackUnitTypeInfo.OnMakeAudioAnalyzerRackUnit._16_4_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &AudioWidgets::FAudioOscilloscope::RackUnitTypeInfo.OnMakeAudioAnalyzerRackUnit,
             (FWriteAccessScope *)&local_28);
  local_10 = 0x15536e568;
  puVar1 = UE::Core::Private::DelegateAllocate
                     (0x20,(FDelegateAllocation *)
                           &AudioWidgets::FAudioOscilloscope::RackUnitTypeInfo.
                            OnMakeAudioAnalyzerRackUnit.field_0x8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VIAudioAnalyzerRackUnit_AudioWidgets___00__AEBUFAudioAnalyzerRackUnitConstructParams_AudioWidgets___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedRef_VIAudioAnalyzerRackUnit_AudioWidgets___00__AEBUFAudioAnalyzerRackUnitConstructParams_AudioWidgets___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = AudioWidgets::FAudioOscilloscope::MakeRackUnit;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  AudioWidgets::FAudioOscilloscope::RackUnitTypeInfo.VerticalSizeCoefficient = 0.25;
  atexit(`dynamic_atexit_destructor_for_'AudioWidgets::FAudioOscilloscope::RackUnitTypeInfo__);
  return;
}

// RackUnitTypeInfo'' @ 1413e1820

void __cdecl `dynamic_initializer_for_'AudioWidgets::FAudioSpectrogram::RackUnitTypeInfo__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FDestructionSentinel local_28;
  undefined8 local_10;
  
  ::FName::FName(&AudioWidgets::FAudioSpectrogram::RackUnitTypeInfo.TypeName,L"FAudioSpectrogram");
  FText::AsLocalizable_Advanced_LocText
            (&AudioWidgets::FAudioSpectrogram::RackUnitTypeInfo.DisplayName,L"FAudioSpectrogram",
             L"AudioSpectrogramDisplayName",L"Spectrogram");
  FSlateIcon::FSlateIcon(&AudioWidgets::FAudioSpectrogram::RackUnitTypeInfo.Icon);
  AudioWidgets::FAudioSpectrogram::RackUnitTypeInfo.OnMakeAudioAnalyzerRackUnit._0_8_ = 0;
  AudioWidgets::FAudioSpectrogram::RackUnitTypeInfo.OnMakeAudioAnalyzerRackUnit._8_8_ = 0;
  AudioWidgets::FAudioSpectrogram::RackUnitTypeInfo.OnMakeAudioAnalyzerRackUnit._16_4_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &AudioWidgets::FAudioSpectrogram::RackUnitTypeInfo.OnMakeAudioAnalyzerRackUnit,
             (FWriteAccessScope *)&local_28);
  local_10 = 0x15536e5c0;
  puVar1 = UE::Core::Private::DelegateAllocate
                     (0x20,(FDelegateAllocation *)
                           &AudioWidgets::FAudioSpectrogram::RackUnitTypeInfo.
                            OnMakeAudioAnalyzerRackUnit.field_0x8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VIAudioAnalyzerRackUnit_AudioWidgets___00__AEBUFAudioAnalyzerRackUnitConstructParams_AudioWidgets___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedRef_VIAudioAnalyzerRackUnit_AudioWidgets___00__AEBUFAudioAnalyzerRackUnitConstructParams_AudioWidgets___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = AudioWidgets::FAudioSpectrogram::MakeRackUnit;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  AudioWidgets::FAudioSpectrogram::RackUnitTypeInfo.VerticalSizeCoefficient = 0.25;
  atexit(`dynamic_atexit_destructor_for_'AudioWidgets::FAudioSpectrogram::RackUnitTypeInfo__);
  return;
}

// RackUnitTypeInfo'' @ 1413e1910

void __cdecl
`dynamic_initializer_for_'AudioWidgets::FAudioSpectrumAnalyzer::RackUnitTypeInfo__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FDestructionSentinel local_28;
  undefined8 local_10;
  
  ::FName::FName(&AudioWidgets::FAudioSpectrumAnalyzer::RackUnitTypeInfo.TypeName,
                 L"FAudioSpectrumAnalyzer");
  FText::AsLocalizable_Advanced_LocText
            (&AudioWidgets::FAudioSpectrumAnalyzer::RackUnitTypeInfo.DisplayName,
             L"FAudioSpectrumAnalyzer",L"AudioSpectrumAnalyzerDisplayName",L"Spectrum Analyzer");
  FSlateIcon::FSlateIcon(&AudioWidgets::FAudioSpectrumAnalyzer::RackUnitTypeInfo.Icon);
  AudioWidgets::FAudioSpectrumAnalyzer::RackUnitTypeInfo.OnMakeAudioAnalyzerRackUnit._0_8_ = 0;
  AudioWidgets::FAudioSpectrumAnalyzer::RackUnitTypeInfo.OnMakeAudioAnalyzerRackUnit._8_8_ = 0;
  AudioWidgets::FAudioSpectrumAnalyzer::RackUnitTypeInfo.OnMakeAudioAnalyzerRackUnit._16_4_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &AudioWidgets::FAudioSpectrumAnalyzer::RackUnitTypeInfo.OnMakeAudioAnalyzerRackUnit,
             (FWriteAccessScope *)&local_28);
  local_10 = 0x15536e620;
  puVar1 = UE::Core::Private::DelegateAllocate
                     (0x20,(FDelegateAllocation *)
                           &AudioWidgets::FAudioSpectrumAnalyzer::RackUnitTypeInfo.
                            OnMakeAudioAnalyzerRackUnit.field_0x8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VIAudioAnalyzerRackUnit_AudioWidgets___00__AEBUFAudioAnalyzerRackUnitConstructParams_AudioWidgets___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedRef_VIAudioAnalyzerRackUnit_AudioWidgets___00__AEBUFAudioAnalyzerRackUnitConstructParams_AudioWidgets___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  AudioWidgets::FAudioSpectrumAnalyzer::RackUnitTypeInfo.VerticalSizeCoefficient = 0.25;
  atexit(`dynamic_atexit_destructor_for_'AudioWidgets::FAudioSpectrumAnalyzer::RackUnitTypeInfo__);
  return;
}

// RackUnitTypeInfo'' @ 1413e1a00

void __cdecl `dynamic_initializer_for_'AudioWidgets::FAudioVectorscope::RackUnitTypeInfo__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FDestructionSentinel local_28;
  undefined8 local_10;
  
  ::FName::FName(&AudioWidgets::FAudioVectorscope::RackUnitTypeInfo.TypeName,L"FAudioVectorscope");
  FText::AsLocalizable_Advanced_LocText
            (&AudioWidgets::FAudioVectorscope::RackUnitTypeInfo.DisplayName,L"FAudioVectorscope",
             L"AudioVectorscopeDisplayName",L"Vectorscope");
  FSlateIcon::FSlateIcon(&AudioWidgets::FAudioVectorscope::RackUnitTypeInfo.Icon);
  AudioWidgets::FAudioVectorscope::RackUnitTypeInfo.OnMakeAudioAnalyzerRackUnit._0_8_ = 0;
  AudioWidgets::FAudioVectorscope::RackUnitTypeInfo.OnMakeAudioAnalyzerRackUnit._8_8_ = 0;
  AudioWidgets::FAudioVectorscope::RackUnitTypeInfo.OnMakeAudioAnalyzerRackUnit._16_4_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &AudioWidgets::FAudioVectorscope::RackUnitTypeInfo.OnMakeAudioAnalyzerRackUnit,
             (FWriteAccessScope *)&local_28);
  local_10 = 0x15536e680;
  puVar1 = UE::Core::Private::DelegateAllocate
                     (0x20,(FDelegateAllocation *)
                           &AudioWidgets::FAudioVectorscope::RackUnitTypeInfo.
                            OnMakeAudioAnalyzerRackUnit.field_0x8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VIAudioAnalyzerRackUnit_AudioWidgets___00__AEBUFAudioAnalyzerRackUnitConstructParams_AudioWidgets___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedRef_VIAudioAnalyzerRackUnit_AudioWidgets___00__AEBUFAudioAnalyzerRackUnitConstructParams_AudioWidgets___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = AudioWidgets::FAudioVectorscope::MakeRackUnit;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  AudioWidgets::FAudioVectorscope::RackUnitTypeInfo.VerticalSizeCoefficient = 0.25;
  atexit(`dynamic_atexit_destructor_for_'AudioWidgets::FAudioVectorscope::RackUnitTypeInfo__);
  return;
}

// StyleName'' @ 1413e1af0

void __cdecl `dynamic_initializer_for_'FAudioWidgetsStyle::StyleName__(void)

{
  ::FName::FName(&FAudioWidgetsStyle::StyleName,"AudioWidgetsStyle");
  return;
}

// TypeName'' @ 1413e1b10

void __cdecl `dynamic_initializer_for_'FAudioMaterialButtonStyle::TypeName__(void)

{
  ::FName::FName(&FAudioMaterialButtonStyle::TypeName,L"FAudioMaterialButtonStyle");
  return;
}

// TypeName'' @ 1413e1b30

void __cdecl `dynamic_initializer_for_'FAudioMaterialEnvelopeStyle::TypeName__(void)

{
  ::FName::FName(&FAudioMaterialEnvelopeStyle::TypeName,L"FAudioMaterialEnvelopeStyle");
  return;
}

// TypeName'' @ 1413e1b50

void __cdecl `dynamic_initializer_for_'FAudioMaterialKnobStyle::TypeName__(void)

{
  ::FName::FName(&FAudioMaterialKnobStyle::TypeName,L"FAudioMaterialKnobStyle");
  return;
}

// TypeName'' @ 1413e1b70

void __cdecl `dynamic_initializer_for_'FAudioMaterialMeterStyle::TypeName__(void)

{
  ::FName::FName(&FAudioMaterialMeterStyle::TypeName,L"FAudioMaterialMeterStyle");
  return;
}

// TypeName'' @ 1413e1b90

void __cdecl `dynamic_initializer_for_'FAudioMaterialSliderStyle::TypeName__(void)

{
  ::FName::FName(&FAudioMaterialSliderStyle::TypeName,L"FAudioMaterialSliderStyle");
  return;
}

// TypeName'' @ 1413e1bb0

void __cdecl `dynamic_initializer_for_'FAudioMeterDefaultColorStyle::TypeName__(void)

{
  ::FName::FName(&FAudioMeterDefaultColorStyle::TypeName,"FAudioMeterDefaultColorStyle");
  return;
}

// TypeName'' @ 1413e1bd0

void __cdecl `dynamic_initializer_for_'FAudioMeterDefaultColorWidgetStyle::TypeName__(void)

{
  ::FName::FName(&FAudioMeterDefaultColorWidgetStyle::TypeName,"FAudioMeterDefaultColorWidgetStyle")
  ;
  return;
}

// TypeName'' @ 1413e1bf0

void __cdecl `dynamic_initializer_for_'FAudioMeterStyle::TypeName__(void)

{
  ::FName::FName(&FAudioMeterStyle::TypeName,"FAudioMeterStyle");
  return;
}

// TypeName'' @ 1413e1c10

void __cdecl `dynamic_initializer_for_'FAudioMeterWidgetStyle::TypeName__(void)

{
  ::FName::FName(&FAudioMeterWidgetStyle::TypeName,"FAudioMeterWidgetStyle");
  return;
}

// TypeName'' @ 1413e1c30

void __cdecl `dynamic_initializer_for_'FAudioOscilloscopePanelStyle::TypeName__(void)

{
  ::FName::FName(&FAudioOscilloscopePanelStyle::TypeName,"FAudioOscilloscopePanelStyle");
  return;
}

// TypeName'' @ 1413e1c50

void __cdecl `dynamic_initializer_for_'FAudioRadialSliderStyle::TypeName__(void)

{
  ::FName::FName(&FAudioRadialSliderStyle::TypeName,"FAudioRadialSliderStyle");
  return;
}

// TypeName'' @ 1413e1c70

void __cdecl `dynamic_initializer_for_'FAudioSliderStyle::TypeName__(void)

{
  ::FName::FName(&FAudioSliderStyle::TypeName,"FAudioSliderStyle");
  return;
}

// TypeName'' @ 1413e1c90

void __cdecl `dynamic_initializer_for_'FAudioSpectrumPlotStyle::TypeName__(void)

{
  ::FName::FName(&FAudioSpectrumPlotStyle::TypeName,"FAudioSpectrumPlotStyle");
  return;
}

// TypeName'' @ 1413e1cb0

void __cdecl `dynamic_initializer_for_'FAudioTextBoxStyle::TypeName__(void)

{
  ::FName::FName(&FAudioTextBoxStyle::TypeName,"FAudioTextBoxStyle");
  return;
}

// TypeName'' @ 1413e1cd0

void __cdecl `dynamic_initializer_for_'FAudioVectorscopePanelStyle::TypeName__(void)

{
  ::FName::FName(&FAudioVectorscopePanelStyle::TypeName,"FAudioVectorscopePanelStyle");
  return;
}

// TypeName'' @ 1413e1cf0

void __cdecl `dynamic_initializer_for_'FFixedSampleSequenceRulerStyle::TypeName__(void)

{
  ::FName::FName(&FFixedSampleSequenceRulerStyle::TypeName,"FFixedSampleSequenceRulerStyle");
  return;
}

// TypeName'' @ 1413e1d10

void __cdecl `dynamic_initializer_for_'FPlayheadOverlayStyle::TypeName__(void)

{
  ::FName::FName(&FPlayheadOverlayStyle::TypeName,"FPlayheadOverlayStyle");
  return;
}

// TypeName'' @ 1413e1d30

void __cdecl `dynamic_initializer_for_'FSampledSequenceValueGridOverlayStyle::TypeName__(void)

{
  ::FName::FName(&FSampledSequenceValueGridOverlayStyle::TypeName,
                 "FSampledSequenceValueGridOverlayStyle");
  return;
}

// TypeName'' @ 1413e1d50

void __cdecl `dynamic_initializer_for_'FSampledSequenceVectorViewerStyle::TypeName__(void)

{
  ::FName::FName(&FSampledSequenceVectorViewerStyle::TypeName,"FSampledSequenceVectorViewerStyle");
  return;
}

// TypeName'' @ 1413e1d70

void __cdecl `dynamic_initializer_for_'FSampledSequenceViewerStyle::TypeName__(void)

{
  ::FName::FName(&FSampledSequenceViewerStyle::TypeName,"FSampledSequenceViewerStyle");
  return;
}

// TypeName'' @ 1413e1d90

void __cdecl `dynamic_initializer_for_'FTriggerThresholdLineStyle::TypeName__(void)

{
  ::FName::FName(&FTriggerThresholdLineStyle::TypeName,"FTriggerThresholdLineStyle");
  return;
}

// `dynamic_initializer_for_'DefaultLabelGenerator'' @ 1413e1db0

void __cdecl
SampledSequenceValueGridOverlayPrivate::_dynamic_initializer_for__DefaultLabelGenerator__(void)

{
  atexit(_dynamic_atexit_destructor_for__DefaultLabelGenerator__);
  return;
}

// `dynamic_initializer_for_'LogAudioWidgets'' @ 1413e1dd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAudioWidgets__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogAudioWidgets,L"LogAudioWidgets",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogAudioWidgets__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantAudioWidgets'' @ 1413e1e10

void __cdecl _dynamic_initializer_for__ModuleRegistrantAudioWidgets__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "AudioWidgets";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"AudioWidgets",0xc);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FAudioWidgetsModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'YAxisValueGeneratorDb'' @ 1413e1e60

void __cdecl
AudioOscilloscopePanelWidgetPrivate::_dynamic_initializer_for__YAxisValueGeneratorDb__(void)

{
  atexit(_dynamic_atexit_destructor_for__YAxisValueGeneratorDb__);
  return;
}

// `dynamic_initializer_for_'YAxisValueGeneratorLinear'' @ 1413e1e80

void __cdecl
AudioOscilloscopePanelWidgetPrivate::_dynamic_initializer_for__YAxisValueGeneratorLinear__(void)

{
  atexit(_dynamic_atexit_destructor_for__YAxisValueGeneratorLinear__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioColorMapper_h__Script_AudioWidgets_143060716'' @ 1413e1ea0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioColorMapper_h__Script_AudioWidgets_143060716__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioWidgets",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioColorMapper_h__Script_AudioWidgets_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialButton_h__Script_AudioWidgets_413798390'' @ 1413e1ef0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialButton_h__Script_AudioWidgets_413798390__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioWidgets",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialButton_h__Script_AudioWidgets_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialEnvelopeSettings_h__Script_AudioWidgets_263679240'' @ 1413e1f30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialEnvelopeSettings_h__Script_AudioWidgets_263679240__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioWidgets",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialEnvelopeSettings_h__Script_AudioWidgets_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialEnvelopeSettings_h__Script_AudioWidgets_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialEnvelope_h__Script_AudioWidgets_2959625673'' @ 1413e1f80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialEnvelope_h__Script_AudioWidgets_2959625673__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioWidgets",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialEnvelope_h__Script_AudioWidgets_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialKnob_h__Script_AudioWidgets_1751617044'' @ 1413e1fc0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialKnob_h__Script_AudioWidgets_1751617044__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioWidgets",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialKnob_h__Script_AudioWidgets_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialMeter_h__Script_AudioWidgets_3200349885'' @ 1413e2000

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialMeter_h__Script_AudioWidgets_3200349885__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioWidgets",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialMeter_h__Script_AudioWidgets_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialSlateTypes_h__Script_AudioWidgets_1168028361'' @ 1413e2040

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialSlateTypes_h__Script_AudioWidgets_1168028361__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioWidgets",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialSlateTypes_h__Script_AudioWidgets_Statics
             ::ScriptStructInfo,6,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialSlider_h__Script_AudioWidgets_990692124'' @ 1413e2080

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialSlider_h__Script_AudioWidgets_990692124__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioWidgets",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialSlider_h__Script_AudioWidgets_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialStyleContainers_h__Script_AudioWidgets_1439910271'' @ 1413e20c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialStyleContainers_h__Script_AudioWidgets_1439910271__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioWidgets",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialStyleContainers_h__Script_AudioWidgets_Statics
             ::ClassInfo,4,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMeterStyle_h__Script_AudioWidgets_1410864183'' @ 1413e2100

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMeterStyle_h__Script_AudioWidgets_1410864183__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioWidgets",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMeterStyle_h__Script_AudioWidgets_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMeterTypes_h__Script_AudioWidgets_3614237397'' @ 1413e2140

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMeterTypes_h__Script_AudioWidgets_3614237397__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioWidgets",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMeterTypes_h__Script_AudioWidgets_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMeter_h__Script_AudioWidgets_6346935'' @ 1413e2180

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMeter_h__Script_AudioWidgets_6346935__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioWidgets",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMeter_h__Script_AudioWidgets_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMeter_h__Script_AudioWidgets_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioOscilloscopeEnums_h__Script_AudioWidgets_3806810402'' @ 1413e21d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioOscilloscopeEnums_h__Script_AudioWidgets_3806810402__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioWidgets",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioOscilloscopeEnums_h__Script_AudioWidgets_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioOscilloscopePanelStyle_h__Script_AudioWidgets_3582301390'' @ 1413e2220

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioOscilloscopePanelStyle_h__Script_AudioWidgets_3582301390__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioWidgets",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioOscilloscopePanelStyle_h__Script_AudioWidgets_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioOscilloscopeUMG_h__Script_AudioWidgets_867947663'' @ 1413e2260

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioOscilloscopeUMG_h__Script_AudioWidgets_867947663__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioWidgets",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioOscilloscopeUMG_h__Script_AudioWidgets_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h__Script_AudioWidgets_476946495'' @ 1413e22a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h__Script_AudioWidgets_476946495__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioWidgets",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h__Script_AudioWidgets_Statics
             ::ClassInfo,3,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h__Script_AudioWidgets_2964872373'' @ 1413e22e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h__Script_AudioWidgets_2964872373__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioWidgets",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSlider_h__Script_AudioWidgets_Statics
             ::ClassInfo,4,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSpectrogramViewport_h__Script_AudioWidgets_3824719876'' @ 1413e2320

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSpectrogramViewport_h__Script_AudioWidgets_3824719876__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioWidgets",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSpectrogramViewport_h__Script_AudioWidgets_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSpectrogram_h__Script_AudioWidgets_2447402692'' @ 1413e2370

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSpectrogram_h__Script_AudioWidgets_2447402692__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioWidgets",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSpectrogram_h__Script_AudioWidgets_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSpectrumAnalyzer_h__Script_AudioWidgets_1536079156'' @ 1413e23b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSpectrumAnalyzer_h__Script_AudioWidgets_1536079156__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioWidgets",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSpectrumAnalyzer_h__Script_AudioWidgets_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSpectrumAnalyzer_h__Script_AudioWidgets_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSpectrumPlotStyle_h__Script_AudioWidgets_2436494466'' @ 1413e2400

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSpectrumPlotStyle_h__Script_AudioWidgets_2436494466__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioWidgets",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSpectrumPlotStyle_h__Script_AudioWidgets_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioVectorscopePanelStyle_h__Script_AudioWidgets_1678649770'' @ 1413e2440

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioVectorscopePanelStyle_h__Script_AudioWidgets_1678649770__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioWidgets",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioVectorscopePanelStyle_h__Script_AudioWidgets_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioVectorscopeUMG_h__Script_AudioWidgets_43870039'' @ 1413e2480

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioVectorscopeUMG_h__Script_AudioWidgets_43870039__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioWidgets",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioVectorscopeUMG_h__Script_AudioWidgets_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioWidgetsEnums_h__Script_AudioWidgets_1782437345'' @ 1413e24c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioWidgetsEnums_h__Script_AudioWidgets_1782437345__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioWidgets",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioWidgetsEnums_h__Script_AudioWidgets_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioWidgetsSlateTypes_h__Script_AudioWidgets_1489332173'' @ 1413e2510

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioWidgetsSlateTypes_h__Script_AudioWidgets_1489332173__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioWidgets",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioWidgetsSlateTypes_h__Script_AudioWidgets_Statics
             ::ScriptStructInfo,7,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_LoudnessMeterRackUnitSettings_h__Script_AudioWidgets_2429841907'' @ 1413e2550

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_LoudnessMeterRackUnitSettings_h__Script_AudioWidgets_2429841907__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioWidgets",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_LoudnessMeterRackUnitSettings_h__Script_AudioWidgets_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_SAudioOscilloscopePanelWidget_h__Script_AudioWidgets_973905287'' @ 1413e2590

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_SAudioOscilloscopePanelWidget_h__Script_AudioWidgets_973905287__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioWidgets",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_SAudioOscilloscopePanelWidget_h__Script_AudioWidgets_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_SAudioRadialSlider_h__Script_AudioWidgets_282297842'' @ 1413e25e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_SAudioRadialSlider_h__Script_AudioWidgets_282297842__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioWidgets",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_SAudioRadialSlider_h__Script_AudioWidgets_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_SAudioSpectrumPlot_h__Script_AudioWidgets_965865581'' @ 1413e2630

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_SAudioSpectrumPlot_h__Script_AudioWidgets_965865581__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioWidgets",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_SAudioSpectrumPlot_h__Script_AudioWidgets_Statics
             ::EnumInfo,3);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_SampledSequenceVectorViewerStyle_h__Script_AudioWidgets_1651359491'' @ 1413e2680

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_SampledSequenceVectorViewerStyle_h__Script_AudioWidgets_1651359491__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioWidgets",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_SampledSequenceVectorViewerStyle_h__Script_AudioWidgets_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_TriggerThresholdLineStyle_h__Script_AudioWidgets_3538618904'' @ 1413e26c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_TriggerThresholdLineStyle_h__Script_AudioWidgets_3538618904__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioWidgets",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_TriggerThresholdLineStyle_h__Script_AudioWidgets_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_AudioWidgets'' @ 1413e2700

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_AudioWidgets__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xd68f1760;
  local_res8[0].DeclarationsHash = 0x86cdde8a;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_AudioWidgets,L"/Script/AudioWidgets",
             &Z_Registration_Info_UPackage__Script_AudioWidgets,local_res8);
  return;
}

// NewStructOps @ 14d88dd60

void * __cdecl Z_Construct_UScriptStruct_FSampledSequenceViewerStyle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x140;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSampledSequenceViewerStyle,&UE::CoreUObject::Private::Construct<FSampledSequenceViewerStyle>,&UE::CoreUObject::Private::ConstructForTests<FSampledSequenceViewerStyle>,&UE::CoreUObject::Private::Destruct<FSampledSequenceViewerStyle>,&UE::CoreUObject::Private::Copy<FSampledSequenceViewerStyle>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d88dda0

void * __cdecl Z_Construct_UScriptStruct_FPlayheadOverlayStyle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPlayheadOverlayStyle,&UE::CoreUObject::Private::Construct<FPlayheadOverlayStyle>,&UE::CoreUObject::Private::ConstructForTests<FPlayheadOverlayStyle>,&UE::CoreUObject::Private::Destruct<FPlayheadOverlayStyle>,&UE::CoreUObject::Private::Copy<FPlayheadOverlayStyle>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UAudioMaterialSlider @ 14d88dde0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAudioMaterialSlider(void)

{
  if (Z_Registration_Info_UClass_UAudioMaterialSlider.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAudioMaterialSlider.OuterSingleton,
               &Z_Construct_UClass_UAudioMaterialSlider_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAudioMaterialSlider.OuterSingleton;
}

// NewStructOps @ 14d88de70

void * __cdecl Z_Construct_UScriptStruct_FFixedSampleSequenceRulerStyle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x230;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FFixedSampleSequenceRulerStyle,&UE::CoreUObject::Private::Construct<FFixedSampleSequenceRulerStyle>,&UE::CoreUObject::Private::ConstructForTests<FFixedSampleSequenceRulerStyle>,&UE::CoreUObject::Private::Destruct<FFixedSampleSequenceRulerStyle>,&UE::CoreUObject::Private::Copy<FFixedSampleSequenceRulerStyle>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UAudioMaterialSlider_GetFineTuneSpeed @ 14d88def0

UFunction * __cdecl Z_Construct_UFunction_UAudioMaterialSlider_GetFineTuneSpeed(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMaterialSlider_GetFineTuneSpeed_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14d88df30

void __cdecl
Z_Construct_UFunction_UAudioMaterialSlider_GetIsLocked_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UAudioMaterialSlider_GetIsLocked @ 14d88df40

UFunction * __cdecl Z_Construct_UFunction_UAudioMaterialSlider_GetIsLocked(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMaterialSlider_GetIsLocked_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14d88df80

void __cdecl
Z_Construct_UFunction_UAudioMaterialSlider_GetMouseUsesStep_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UAudioMaterialSlider_GetMouseUsesStep @ 14d88df90

UFunction * __cdecl Z_Construct_UFunction_UAudioMaterialSlider_GetMouseUsesStep(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMaterialSlider_GetMouseUsesStep_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioMaterialSlider_GetStepSize @ 14d88dfd0

UFunction * __cdecl Z_Construct_UFunction_UAudioMaterialSlider_GetStepSize(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMaterialSlider_GetStepSize_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14d88e010

void * __cdecl
Z_Construct_UScriptStruct_FSampledSequenceValueGridOverlayStyle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSampledSequenceValueGridOverlayStyle,&UE::CoreUObject::Private::Construct<FSampledSequenceValueGridOverlayStyle>,&UE::CoreUObject::Private::ConstructForTests<FSampledSequenceValueGridOverlayStyle>,&UE::CoreUObject::Private::Destruct<FSampledSequenceValueGridOverlayStyle>,&UE::CoreUObject::Private::Copy<FSampledSequenceValueGridOverlayStyle>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UAudioMaterialSlider_GetTuneSpeed @ 14d88e050

UFunction * __cdecl Z_Construct_UFunction_UAudioMaterialSlider_GetTuneSpeed(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMaterialSlider_GetTuneSpeed_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UAudioMaterialKnob @ 14d88e090

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAudioMaterialKnob(void)

{
  if (Z_Registration_Info_UClass_UAudioMaterialKnob.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAudioMaterialKnob.OuterSingleton,
               &Z_Construct_UClass_UAudioMaterialKnob_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAudioMaterialKnob.OuterSingleton;
}

// Z_Construct_UFunction_UAudioMaterialSlider_GetValue @ 14d88e0d0

UFunction * __cdecl Z_Construct_UFunction_UAudioMaterialSlider_GetValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMaterialSlider_GetValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioMaterialSlider_SetFineTuneSpeed @ 14d88e110

UFunction * __cdecl Z_Construct_UFunction_UAudioMaterialSlider_SetFineTuneSpeed(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMaterialSlider_SetFineTuneSpeed_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInLocked_SetBit @ 14d88e150

void __cdecl
Z_Construct_UFunction_UAudioMaterialSlider_SetLocked_Statics::NewProp_bInLocked_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UAudioMaterialKnob_GetFineTuneSpeed @ 14d88e160

UFunction * __cdecl Z_Construct_UFunction_UAudioMaterialKnob_GetFineTuneSpeed(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMaterialKnob_GetFineTuneSpeed_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioMaterialSlider_SetLocked @ 14d88e1a0

UFunction * __cdecl Z_Construct_UFunction_UAudioMaterialSlider_SetLocked(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMaterialSlider_SetLocked_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14d88e1e0

void __cdecl
Z_Construct_UFunction_UAudioMaterialKnob_GetIsLocked_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bInUsesStep_SetBit @ 14d88e1f0

void __cdecl
Z_Construct_UFunction_UAudioMaterialSlider_SetMouseUsesStep_Statics::NewProp_bInUsesStep_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UAudioMaterialKnob_GetIsLocked @ 14d88e200

UFunction * __cdecl Z_Construct_UFunction_UAudioMaterialKnob_GetIsLocked(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMaterialKnob_GetIsLocked_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioMaterialSlider_SetMouseUsesStep @ 14d88e240

UFunction * __cdecl Z_Construct_UFunction_UAudioMaterialSlider_SetMouseUsesStep(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMaterialSlider_SetMouseUsesStep_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14d88e280

void __cdecl
Z_Construct_UFunction_UAudioMaterialKnob_GetMouseUsesStep_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UAudioMaterialKnob_GetMouseUsesStep @ 14d88e290

UFunction * __cdecl Z_Construct_UFunction_UAudioMaterialKnob_GetMouseUsesStep(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMaterialKnob_GetMouseUsesStep_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioMaterialSlider_SetStepSize @ 14d88e2d0

UFunction * __cdecl Z_Construct_UFunction_UAudioMaterialSlider_SetStepSize(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMaterialSlider_SetStepSize_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioMaterialKnob_GetStepSize @ 14d88e310

UFunction * __cdecl Z_Construct_UFunction_UAudioMaterialKnob_GetStepSize(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMaterialKnob_GetStepSize_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioMaterialSlider_SetTuneSpeed @ 14d88e350

UFunction * __cdecl Z_Construct_UFunction_UAudioMaterialSlider_SetTuneSpeed(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMaterialSlider_SetTuneSpeed_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioMaterialKnob_GetTuneSpeed @ 14d88e390

UFunction * __cdecl Z_Construct_UFunction_UAudioMaterialKnob_GetTuneSpeed(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMaterialKnob_GetTuneSpeed_Statics::FuncParams);
  }
  return ReturnFunction;
}

// EAudioSpectrogramFrequencyAxisScale_StaticEnum @ 14d88e3d0

UEnum * __cdecl EAudioSpectrogramFrequencyAxisScale_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAudioSpectrogramFrequencyAxisScale.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_AudioWidgets();
    Z_Registration_Info_UEnum_EAudioSpectrogramFrequencyAxisScale.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioWidgets_EAudioSpectrogramFrequencyAxisScale,
                       (UObject *)pUVar1,L"EAudioSpectrogramFrequencyAxisScale");
  }
  return Z_Registration_Info_UEnum_EAudioSpectrogramFrequencyAxisScale.OuterSingleton;
}

// Z_Construct_UFunction_UAudioMaterialSlider_SetValue @ 14d88e410

UFunction * __cdecl Z_Construct_UFunction_UAudioMaterialSlider_SetValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMaterialSlider_SetValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// EAudioSpectrogramFrequencyAxisPixelBucketMode_StaticEnum @ 14d88e450

UEnum * __cdecl EAudioSpectrogramFrequencyAxisPixelBucketMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAudioSpectrogramFrequencyAxisPixelBucketMode.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioWidgets();
    Z_Registration_Info_UEnum_EAudioSpectrogramFrequencyAxisPixelBucketMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioWidgets_EAudioSpectrogramFrequencyAxisPixelBucketMode,
                       (UObject *)pUVar1,L"EAudioSpectrogramFrequencyAxisPixelBucketMode");
  }
  return Z_Registration_Info_UEnum_EAudioSpectrogramFrequencyAxisPixelBucketMode.OuterSingleton;
}

// Z_Construct_UFunction_UAudioMaterialKnob_GetValue @ 14d88e490

UFunction * __cdecl Z_Construct_UFunction_UAudioMaterialKnob_GetValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMaterialKnob_GetValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bLocked_SetBit @ 14d88e4d0

void __cdecl Z_Construct_UClass_UAudioMaterialSlider_Statics::NewProp_bLocked_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x328) = 1;
  return;
}

// NewProp_bMouseUsesStep_SetBit @ 14d88e4e0

void __cdecl
Z_Construct_UClass_UAudioMaterialSlider_Statics::NewProp_bMouseUsesStep_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x329) = 1;
  return;
}

// EXAxisLabelsUnit_StaticEnum @ 14d88e4f0

UEnum * __cdecl EXAxisLabelsUnit_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EXAxisLabelsUnit.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioWidgets();
    Z_Registration_Info_UEnum_EXAxisLabelsUnit.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioWidgets_EXAxisLabelsUnit,(UObject *)pUVar1,
                       L"EXAxisLabelsUnit");
  }
  return Z_Registration_Info_UEnum_EXAxisLabelsUnit.OuterSingleton;
}

// Z_Construct_UFunction_UAudioMaterialKnob_SetFineTuneSpeed @ 14d88e530

UFunction * __cdecl Z_Construct_UFunction_UAudioMaterialKnob_SetFineTuneSpeed(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMaterialKnob_SetFineTuneSpeed_Statics::FuncParams);
  }
  return ReturnFunction;
}

// EYAxisLabelsUnit_StaticEnum @ 14d88e570

UEnum * __cdecl EYAxisLabelsUnit_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EYAxisLabelsUnit.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioWidgets();
    Z_Registration_Info_UEnum_EYAxisLabelsUnit.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioWidgets_EYAxisLabelsUnit,(UObject *)pUVar1,
                       L"EYAxisLabelsUnit");
  }
  return Z_Registration_Info_UEnum_EYAxisLabelsUnit.OuterSingleton;
}

// NewProp_InLocked_SetBit @ 14d88e5b0

void __cdecl
Z_Construct_UFunction_UAudioMaterialKnob_SetLocked_Statics::NewProp_InLocked_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UAudioMaterialKnob_SetLocked @ 14d88e5c0

UFunction * __cdecl Z_Construct_UFunction_UAudioMaterialKnob_SetLocked(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMaterialKnob_SetLocked_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_InUsesStep_SetBit @ 14d88e600

void __cdecl
Z_Construct_UFunction_UAudioMaterialKnob_SetMouseUsesStep_Statics::NewProp_InUsesStep_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UAudioMaterialKnob_SetMouseUsesStep @ 14d88e610

UFunction * __cdecl Z_Construct_UFunction_UAudioMaterialKnob_SetMouseUsesStep(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMaterialKnob_SetMouseUsesStep_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UAudioFrequencyRadialSlider @ 14d88e690

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAudioFrequencyRadialSlider(void)

{
  if (Z_Registration_Info_UClass_UAudioFrequencyRadialSlider.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAudioFrequencyRadialSlider.OuterSingleton,
               &Z_Construct_UClass_UAudioFrequencyRadialSlider_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAudioFrequencyRadialSlider.OuterSingleton;
}

// Z_Construct_UClass_UAudioRadialSlider @ 14d88e6d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAudioRadialSlider(void)

{
  if (Z_Registration_Info_UClass_UAudioRadialSlider.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAudioRadialSlider.OuterSingleton,
               &Z_Construct_UClass_UAudioRadialSlider_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAudioRadialSlider.OuterSingleton;
}

// Z_Construct_UClass_UAudioVolumeRadialSlider @ 14d88e710

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAudioVolumeRadialSlider(void)

{
  if (Z_Registration_Info_UClass_UAudioVolumeRadialSlider.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAudioVolumeRadialSlider.OuterSingleton,
               &Z_Construct_UClass_UAudioVolumeRadialSlider_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAudioVolumeRadialSlider.OuterSingleton;
}

// Z_Construct_UEnum_AudioWidgets_EAudioRadialSliderLayout @ 14d88e750

UEnum * __cdecl Z_Construct_UEnum_AudioWidgets_EAudioRadialSliderLayout(void)

{
  if (Z_Registration_Info_UEnum_EAudioRadialSliderLayout.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAudioRadialSliderLayout.InnerSingleton,
               &Z_Construct_UEnum_AudioWidgets_EAudioRadialSliderLayout_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EAudioRadialSliderLayout.InnerSingleton;
}

// Z_Construct_UEnum_AudioWidgets_EAudioMaterialEnvelopeType @ 14d88e790

UEnum * __cdecl Z_Construct_UEnum_AudioWidgets_EAudioMaterialEnvelopeType(void)

{
  if (Z_Registration_Info_UEnum_EAudioMaterialEnvelopeType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAudioMaterialEnvelopeType.InnerSingleton,
               &Z_Construct_UEnum_AudioWidgets_EAudioMaterialEnvelopeType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EAudioMaterialEnvelopeType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FAudioMaterialEnvelopeSettings @ 14d88e7d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAudioMaterialEnvelopeSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAudioMaterialEnvelopeSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAudioMaterialEnvelopeSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FAudioMaterialEnvelopeSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAudioMaterialEnvelopeSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAudioMaterialEnvelopeSettings.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UPackage__Script_AudioWidgets @ 14d88e850

UPackage * __cdecl Z_Construct_UPackage__Script_AudioWidgets(void)

{
  if (Z_Registration_Info_UPackage__Script_AudioWidgets.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_AudioWidgets.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_AudioWidgets.OuterSingleton;
}

// Z_Construct_UFunction_UAudioMaterialKnob_SetStepSize @ 14d88e890

UFunction * __cdecl Z_Construct_UFunction_UAudioMaterialKnob_SetStepSize(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMaterialKnob_SetStepSize_Statics::FuncParams);
  }
  return ReturnFunction;
}

// EAudioMaterialEnvelopeType_StaticEnum @ 14d88e910

UEnum * __cdecl EAudioMaterialEnvelopeType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAudioMaterialEnvelopeType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioWidgets();
    Z_Registration_Info_UEnum_EAudioMaterialEnvelopeType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioWidgets_EAudioMaterialEnvelopeType,(UObject *)pUVar1,
                       L"EAudioMaterialEnvelopeType");
  }
  return Z_Registration_Info_UEnum_EAudioMaterialEnvelopeType.OuterSingleton;
}

// Z_Construct_UFunction_UAudioMaterialKnob_SetTuneSpeed @ 14d88e960

UFunction * __cdecl Z_Construct_UFunction_UAudioMaterialKnob_SetTuneSpeed(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMaterialKnob_SetTuneSpeed_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14d88eb10

void * __cdecl Z_Construct_UScriptStruct_FAudioMaterialEnvelopeSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x24;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAudioMaterialEnvelopeSettings,&UE::CoreUObject::Private::Construct<FAudioMaterialEnvelopeSettings>,&UE::CoreUObject::Private::ConstructForTests<FAudioMaterialEnvelopeSettings>,&UE::CoreUObject::Private::Destruct<FAudioMaterialEnvelopeSettings>,&UE::CoreUObject::Private::Copy<FAudioMaterialEnvelopeSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UAudioRadialSlider_GetOutputValue @ 14d88eb50

UFunction * __cdecl Z_Construct_UFunction_UAudioRadialSlider_GetOutputValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioRadialSlider_GetOutputValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioMaterialKnob_SetValue @ 14d88eb90

UFunction * __cdecl Z_Construct_UFunction_UAudioMaterialKnob_SetValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMaterialKnob_SetValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// EAudioRadialSliderLayout_StaticEnum @ 14d88ebd0

UEnum * __cdecl EAudioRadialSliderLayout_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAudioRadialSliderLayout.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioWidgets();
    Z_Registration_Info_UEnum_EAudioRadialSliderLayout.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioWidgets_EAudioRadialSliderLayout,(UObject *)pUVar1,
                       L"EAudioRadialSliderLayout");
  }
  return Z_Registration_Info_UEnum_EAudioRadialSliderLayout.OuterSingleton;
}

// NewProp_bLocked_SetBit @ 14d88ec10

void __cdecl Z_Construct_UClass_UAudioMaterialKnob_Statics::NewProp_bLocked_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x394) = 1;
  return;
}

// Z_Construct_UFunction_UAudioRadialSlider_GetSliderValue @ 14d88ec20

UFunction * __cdecl Z_Construct_UFunction_UAudioRadialSlider_GetSliderValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioRadialSlider_GetSliderValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bMouseUsesStep_SetBit @ 14d88ec60

void __cdecl
Z_Construct_UClass_UAudioMaterialKnob_Statics::NewProp_bMouseUsesStep_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x395) = 1;
  return;
}

// Z_Construct_UFunction_UAudioRadialSlider_SetCenterBackgroundColor @ 14d88ec70

UFunction * __cdecl Z_Construct_UFunction_UAudioRadialSlider_SetCenterBackgroundColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioRadialSlider_SetCenterBackgroundColor_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioRadialSlider_SetHandStartEndRatio @ 14d88ecb0

UFunction * __cdecl Z_Construct_UFunction_UAudioRadialSlider_SetHandStartEndRatio(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioRadialSlider_SetHandStartEndRatio_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioRadialSlider_SetOutputRange @ 14d88ecf0

UFunction * __cdecl Z_Construct_UFunction_UAudioRadialSlider_SetOutputRange(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioRadialSlider_SetOutputRange_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bShowLabelOnlyOnHover_SetBit @ 14d88ed90

void __cdecl
Z_Construct_UFunction_UAudioRadialSlider_SetShowLabelOnlyOnHover_Statics::
NewProp_bShowLabelOnlyOnHover_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UAudioRadialSlider_SetShowLabelOnlyOnHover @ 14d88edf0

UFunction * __cdecl Z_Construct_UFunction_UAudioRadialSlider_SetShowLabelOnlyOnHover(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioRadialSlider_SetShowLabelOnlyOnHover_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_bShowUnitsText_SetBit @ 14d88eeb0

void __cdecl
Z_Construct_UFunction_UAudioRadialSlider_SetShowUnitsText_Statics::NewProp_bShowUnitsText_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// `scalar_deleting_destructor' @ 14d88eec0

void * __thiscall
IBaseDelegateInstance<TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1>___cdecl(AudioWidgets::FAudioAnalyzerRackUnitConstructParams_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1>___cdecl(AudioWidgets::FAudioAnalyzerRackUnitConstructParams_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d88ef10

void * __thiscall
TCommonDelegateInstanceState<TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1>___cdecl(AudioWidgets::FAudioAnalyzerRackUnitConstructParams_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1>___cdecl(AudioWidgets::FAudioAnalyzerRackUnitConstructParams_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// Z_Construct_UFunction_UAudioRadialSlider_SetShowUnitsText @ 14d88ef40

UFunction * __cdecl Z_Construct_UFunction_UAudioRadialSlider_SetShowUnitsText(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioRadialSlider_SetShowUnitsText_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14d88f1b0

void * __thiscall
TBaseStaticDelegateInstance<TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1>___cdecl(AudioWidgets::FAudioAnalyzerRackUnitConstructParams_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1>___cdecl(AudioWidgets::FAudioAnalyzerRackUnitConstructParams_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UFunction_UAudioRadialSlider_SetSliderBarColor @ 14d88f220

UFunction * __cdecl Z_Construct_UFunction_UAudioRadialSlider_SetSliderBarColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioRadialSlider_SetSliderBarColor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioRadialSlider_SetSliderProgressColor @ 14d88f2b0

UFunction * __cdecl Z_Construct_UFunction_UAudioRadialSlider_SetSliderProgressColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioRadialSlider_SetSliderProgressColor_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioRadialSlider_SetSliderThickness @ 14d88f3a0

UFunction * __cdecl Z_Construct_UFunction_UAudioRadialSlider_SetSliderThickness(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioRadialSlider_SetSliderThickness_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioRadialSlider_SetTextLabelBackgroundColor @ 14d88f420

UFunction * __cdecl Z_Construct_UFunction_UAudioRadialSlider_SetTextLabelBackgroundColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioRadialSlider_SetTextLabelBackgroundColor_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioRadialSlider_SetUnitsText @ 14d88f4a0

UFunction * __cdecl Z_Construct_UFunction_UAudioRadialSlider_SetUnitsText(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioRadialSlider_SetUnitsText_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsReadOnly_SetBit @ 14d88f4e0

void __cdecl
Z_Construct_UFunction_UAudioRadialSlider_SetUnitsTextReadOnly_Statics::NewProp_bIsReadOnly_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UAudioRadialSlider_SetUnitsTextReadOnly @ 14d88f4f0

UFunction * __cdecl Z_Construct_UFunction_UAudioRadialSlider_SetUnitsTextReadOnly(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioRadialSlider_SetUnitsTextReadOnly_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsReadOnly_SetBit @ 14d88f630

void __cdecl
Z_Construct_UFunction_UAudioRadialSlider_SetValueTextReadOnly_Statics::NewProp_bIsReadOnly_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UAudioRadialSlider_SetValueTextReadOnly @ 14d88f6a0

UFunction * __cdecl Z_Construct_UFunction_UAudioRadialSlider_SetValueTextReadOnly(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioRadialSlider_SetValueTextReadOnly_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioRadialSlider_SetWidgetLayout @ 14d88f8b0

UFunction * __cdecl Z_Construct_UFunction_UAudioRadialSlider_SetWidgetLayout(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioRadialSlider_SetWidgetLayout_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ShowLabelOnlyOnHover_SetBit @ 14d88f930

void __cdecl
Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_ShowLabelOnlyOnHover_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x238) = 1;
  return;
}

// NewProp_ShowUnitsText_SetBit @ 14d88f940

void __cdecl
Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_ShowUnitsText_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x239) = 1;
  return;
}

// NewProp_IsUnitsTextReadOnly_SetBit @ 14d88f950

void __cdecl
Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_IsUnitsTextReadOnly_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x23a) = 1;
  return;
}

// NewProp_IsValueTextReadOnly_SetBit @ 14d88f960

void __cdecl
Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_IsValueTextReadOnly_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x23b) = 1;
  return;
}

// Z_Construct_UEnum_AudioWidgets_EAudioSpectrumAnalyzerBallistics @ 14d88fc40

UEnum * __cdecl Z_Construct_UEnum_AudioWidgets_EAudioSpectrumAnalyzerBallistics(void)

{
  if (Z_Registration_Info_UEnum_EAudioSpectrumAnalyzerBallistics.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAudioSpectrumAnalyzerBallistics.InnerSingleton,
               &Z_Construct_UEnum_AudioWidgets_EAudioSpectrumAnalyzerBallistics_Statics::EnumParams)
    ;
  }
  return Z_Registration_Info_UEnum_EAudioSpectrumAnalyzerBallistics.InnerSingleton;
}

// Z_Construct_UEnum_AudioWidgets_EAudioSpectrumPlotFrequencyAxisPixelBucketMode @ 14d88fc80

UEnum * __cdecl Z_Construct_UEnum_AudioWidgets_EAudioSpectrumPlotFrequencyAxisPixelBucketMode(void)

{
  if (Z_Registration_Info_UEnum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode.InnerSingleton ==
      (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode.
                InnerSingleton,
               &Z_Construct_UEnum_AudioWidgets_EAudioSpectrumPlotFrequencyAxisPixelBucketMode_Statics
                ::EnumParams);
  }
  return Z_Registration_Info_UEnum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode.InnerSingleton;
}

// Z_Construct_UEnum_AudioWidgets_EAudioSpectrumPlotFrequencyAxisScale @ 14d88fcc0

UEnum * __cdecl Z_Construct_UEnum_AudioWidgets_EAudioSpectrumPlotFrequencyAxisScale(void)

{
  if (Z_Registration_Info_UEnum_EAudioSpectrumPlotFrequencyAxisScale.InnerSingleton == (UEnum *)0x0)
  {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAudioSpectrumPlotFrequencyAxisScale.InnerSingleton,
               &Z_Construct_UEnum_AudioWidgets_EAudioSpectrumPlotFrequencyAxisScale_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EAudioSpectrumPlotFrequencyAxisScale.InnerSingleton;
}

// Z_Construct_UEnum_AudioWidgets_EAudioSpectrumPlotTilt @ 14d88fd00

UEnum * __cdecl Z_Construct_UEnum_AudioWidgets_EAudioSpectrumPlotTilt(void)

{
  if (Z_Registration_Info_UEnum_EAudioSpectrumPlotTilt.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAudioSpectrumPlotTilt.InnerSingleton,
               &Z_Construct_UEnum_AudioWidgets_EAudioSpectrumPlotTilt_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EAudioSpectrumPlotTilt.InnerSingleton;
}

// EAudioSpectrumAnalyzerBallistics_StaticEnum @ 14d88fd40

UEnum * __cdecl EAudioSpectrumAnalyzerBallistics_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAudioSpectrumAnalyzerBallistics.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioWidgets();
    Z_Registration_Info_UEnum_EAudioSpectrumAnalyzerBallistics.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioWidgets_EAudioSpectrumAnalyzerBallistics,
                       (UObject *)pUVar1,L"EAudioSpectrumAnalyzerBallistics");
  }
  return Z_Registration_Info_UEnum_EAudioSpectrumAnalyzerBallistics.OuterSingleton;
}

// EAudioSpectrumAnalyzerType_StaticEnum @ 14d88fd80

UEnum * __cdecl EAudioSpectrumAnalyzerType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAudioSpectrumAnalyzerType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioWidgets();
    Z_Registration_Info_UEnum_EAudioSpectrumAnalyzerType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioWidgets_EAudioSpectrumAnalyzerType,(UObject *)pUVar1,
                       L"EAudioSpectrumAnalyzerType");
  }
  return Z_Registration_Info_UEnum_EAudioSpectrumAnalyzerType.OuterSingleton;
}

// NewProp_bDisplayFrequencyAxisLabels_SetBit @ 14d88fe80

void __cdecl
Z_Construct_UScriptStruct_FSpectrumAnalyzerRackUnitSettings_Statics::
NewProp_bDisplayFrequencyAxisLabels_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 7) = 1;
  return;
}

// NewProp_bDisplaySoundLevelAxisLabels_SetBit @ 14d88fea0

void __cdecl
Z_Construct_UScriptStruct_FSpectrumAnalyzerRackUnitSettings_Statics::
NewProp_bDisplaySoundLevelAxisLabels_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewStructOps @ 14d88fec0

void * __cdecl
Z_Construct_UScriptStruct_FSpectrumAnalyzerRackUnitSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 9;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSpectrumAnalyzerRackUnitSettings,&UE::CoreUObject::Private::Construct<FSpectrumAnalyzerRackUnitSettings>,&UE::CoreUObject::Private::ConstructForTests<FSpectrumAnalyzerRackUnitSettings>,&UE::CoreUObject::Private::Destruct<FSpectrumAnalyzerRackUnitSettings>,&UE::CoreUObject::Private::Copy<FSpectrumAnalyzerRackUnitSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UAudioMeter @ 14d88ff10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAudioMeter(void)

{
  if (Z_Registration_Info_UClass_UAudioMeter.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAudioMeter.OuterSingleton,
               &Z_Construct_UClass_UAudioMeter_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAudioMeter.OuterSingleton;
}

// Z_Construct_UScriptStruct_FAudioMeterStyle @ 14d88ff50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAudioMeterStyle(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAudioMeterStyle.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAudioMeterStyle.InnerSingleton,
               &Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAudioMeterStyle.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAudioMeterStyle.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewStructOps @ 14d88ffd0

void * __cdecl Z_Construct_UScriptStruct_FAudioMeterDefaultColorStyle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAudioMeterDefaultColorStyle,&UE::CoreUObject::Private::Construct<FAudioMeterDefaultColorStyle>,&UE::CoreUObject::Private::ConstructForTests<FAudioMeterDefaultColorStyle>,&UE::CoreUObject::Private::Destruct<FAudioMeterDefaultColorStyle>,&UE::CoreUObject::Private::Copy<FAudioMeterDefaultColorStyle>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UAudioMaterialButton @ 14d8900c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAudioMaterialButton(void)

{
  if (Z_Registration_Info_UClass_UAudioMaterialButton.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAudioMaterialButton.OuterSingleton,
               &Z_Construct_UClass_UAudioMaterialButton_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAudioMaterialButton.OuterSingleton;
}

// NewProp_bIsPressed_SetBit @ 14d890100

void __cdecl
Z_Construct_UDelegateFunction_AudioWidgets_OnButtonPressedChangedEvent__DelegateSignature_Statics::
NewProp_bIsPressed_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14d8901d0

void __cdecl
Z_Construct_UFunction_UAudioMaterialButton_GetIsPressed_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UClass_UAudioMaterialButtonWidgetStyle @ 14d8901e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAudioMaterialButtonWidgetStyle(void)

{
  if (Z_Registration_Info_UClass_UAudioMaterialButtonWidgetStyle.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAudioMaterialButtonWidgetStyle.OuterSingleton,
               &Z_Construct_UClass_UAudioMaterialButtonWidgetStyle_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAudioMaterialButtonWidgetStyle.OuterSingleton;
}

// Z_Construct_UClass_UAudioMaterialKnobWidgetStyle @ 14d890220

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAudioMaterialKnobWidgetStyle(void)

{
  if (Z_Registration_Info_UClass_UAudioMaterialKnobWidgetStyle.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAudioMaterialKnobWidgetStyle.OuterSingleton,
               &Z_Construct_UClass_UAudioMaterialKnobWidgetStyle_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAudioMaterialKnobWidgetStyle.OuterSingleton;
}

// Z_Construct_UClass_UAudioMaterialMeterWidgetStyle @ 14d890260

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAudioMaterialMeterWidgetStyle(void)

{
  if (Z_Registration_Info_UClass_UAudioMaterialMeterWidgetStyle.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAudioMaterialMeterWidgetStyle.OuterSingleton,
               &Z_Construct_UClass_UAudioMaterialMeterWidgetStyle_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAudioMaterialMeterWidgetStyle.OuterSingleton;
}

// Z_Construct_UFunction_UAudioMaterialButton_GetIsPressed @ 14d8902a0

UFunction * __cdecl Z_Construct_UFunction_UAudioMaterialButton_GetIsPressed(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMaterialButton_GetIsPressed_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UAudioMaterialSliderWidgetStyle @ 14d8902e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAudioMaterialSliderWidgetStyle(void)

{
  if (Z_Registration_Info_UClass_UAudioMaterialSliderWidgetStyle.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAudioMaterialSliderWidgetStyle.OuterSingleton,
               &Z_Construct_UClass_UAudioMaterialSliderWidgetStyle_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAudioMaterialSliderWidgetStyle.OuterSingleton;
}

// Z_Construct_UScriptStruct_FAudioMaterialButtonStyle @ 14d890320

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAudioMaterialButtonStyle(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAudioMaterialButtonStyle.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAudioMaterialButtonStyle.InnerSingleton,
               &Z_Construct_UScriptStruct_FAudioMaterialButtonStyle_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAudioMaterialButtonStyle.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAudioMaterialButtonStyle.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FAudioMaterialKnobStyle @ 14d8903a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAudioMaterialKnobStyle(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAudioMaterialKnobStyle.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAudioMaterialKnobStyle.InnerSingleton,
               &Z_Construct_UScriptStruct_FAudioMaterialKnobStyle_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAudioMaterialKnobStyle.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAudioMaterialKnobStyle.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FAudioMaterialMeterStyle @ 14d890420

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAudioMaterialMeterStyle(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAudioMaterialMeterStyle.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAudioMaterialMeterStyle.InnerSingleton,
               &Z_Construct_UScriptStruct_FAudioMaterialMeterStyle_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAudioMaterialMeterStyle.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAudioMaterialMeterStyle.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FAudioMaterialSliderStyle @ 14d8904a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAudioMaterialSliderStyle(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAudioMaterialSliderStyle.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAudioMaterialSliderStyle.InnerSingleton,
               &Z_Construct_UScriptStruct_FAudioMaterialSliderStyle_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAudioMaterialSliderStyle.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAudioMaterialSliderStyle.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewProp_InPressed_SetBit @ 14d890520

void __cdecl
Z_Construct_UFunction_UAudioMaterialButton_SetIsPressed_Statics::NewProp_InPressed_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UAudioMaterialButton_SetIsPressed @ 14d890560

UFunction * __cdecl Z_Construct_UFunction_UAudioMaterialButton_SetIsPressed(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMaterialButton_SetIsPressed_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsPressed_SetBit @ 14d8905d0

void __cdecl
Z_Construct_UClass_UAudioMaterialButton_Statics::NewProp_bIsPressed_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x250) = 1;
  return;
}

// Z_Construct_UFunction_UAudioMeter_GetMeterChannelInfo @ 14d8905e0

UFunction * __cdecl Z_Construct_UFunction_UAudioMeter_GetMeterChannelInfo(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMeter_GetMeterChannelInfo_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioMeter_SetBackgroundColor @ 14d890620

UFunction * __cdecl Z_Construct_UFunction_UAudioMeter_SetBackgroundColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMeter_SetBackgroundColor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioMeter_SetMeterBackgroundColor @ 14d890660

UFunction * __cdecl Z_Construct_UFunction_UAudioMeter_SetMeterBackgroundColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMeter_SetMeterBackgroundColor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UEnum_AudioWidgets_EAudioColorGradient @ 14d8906b0

UEnum * __cdecl Z_Construct_UEnum_AudioWidgets_EAudioColorGradient(void)

{
  if (Z_Registration_Info_UEnum_EAudioColorGradient.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAudioColorGradient.InnerSingleton,
               &Z_Construct_UEnum_AudioWidgets_EAudioColorGradient_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EAudioColorGradient.InnerSingleton;
}

// EAudioColorGradient_StaticEnum @ 14d8906f0

UEnum * __cdecl EAudioColorGradient_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAudioColorGradient.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioWidgets();
    Z_Registration_Info_UEnum_EAudioColorGradient.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioWidgets_EAudioColorGradient,(UObject *)pUVar1,
                       L"EAudioColorGradient");
  }
  return Z_Registration_Info_UEnum_EAudioColorGradient.OuterSingleton;
}

// Z_Construct_UFunction_UAudioMeter_SetMeterChannelInfo @ 14d890820

UFunction * __cdecl Z_Construct_UFunction_UAudioMeter_SetMeterChannelInfo(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMeter_SetMeterChannelInfo_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioMeter_SetMeterClippingColor @ 14d8909b0

UFunction * __cdecl Z_Construct_UFunction_UAudioMeter_SetMeterClippingColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMeter_SetMeterClippingColor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioMeter_SetMeterPeakColor @ 14d8909f0

UFunction * __cdecl Z_Construct_UFunction_UAudioMeter_SetMeterPeakColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMeter_SetMeterPeakColor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioMeter_SetMeterScaleColor @ 14d890a30

UFunction * __cdecl Z_Construct_UFunction_UAudioMeter_SetMeterScaleColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMeter_SetMeterScaleColor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioMeter_SetMeterScaleLabelColor @ 14d890a70

UFunction * __cdecl Z_Construct_UFunction_UAudioMeter_SetMeterScaleLabelColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMeter_SetMeterScaleLabelColor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FMeterChannelInfo @ 14d890b20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMeterChannelInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMeterChannelInfo.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMeterChannelInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FMeterChannelInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMeterChannelInfo.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMeterChannelInfo.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewStructOps @ 14d890ba0

void * __cdecl Z_Construct_UScriptStruct_FMeterChannelInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMeterChannelInfo,&UE::CoreUObject::Private::Construct<FMeterChannelInfo>,&UE::CoreUObject::Private::ConstructForTests<FMeterChannelInfo>,&UE::CoreUObject::Private::Destruct<FMeterChannelInfo>,&UE::CoreUObject::Private::Copy<FMeterChannelInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UAudioMeter_SetMeterValueColor @ 14d890be0

UFunction * __cdecl Z_Construct_UFunction_UAudioMeter_SetMeterValueColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMeter_SetMeterValueColor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UEnum_AudioWidgets_EAudioOscilloscopeTriggerMode @ 14d890d30

UEnum * __cdecl Z_Construct_UEnum_AudioWidgets_EAudioOscilloscopeTriggerMode(void)

{
  if (Z_Registration_Info_UEnum_EAudioOscilloscopeTriggerMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAudioOscilloscopeTriggerMode.InnerSingleton,
               &Z_Construct_UEnum_AudioWidgets_EAudioOscilloscopeTriggerMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EAudioOscilloscopeTriggerMode.InnerSingleton;
}

// EAudioOscilloscopeTriggerMode_StaticEnum @ 14d890d80

UEnum * __cdecl EAudioOscilloscopeTriggerMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAudioOscilloscopeTriggerMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioWidgets();
    Z_Registration_Info_UEnum_EAudioOscilloscopeTriggerMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioWidgets_EAudioOscilloscopeTriggerMode,
                       (UObject *)pUVar1,L"EAudioOscilloscopeTriggerMode");
  }
  return Z_Registration_Info_UEnum_EAudioOscilloscopeTriggerMode.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14d8910e0

void * __thiscall
FVariablePrecisionNumericInterface::_scalar_deleting_destructor_
          (FVariablePrecisionNumericInterface *this,uint param_1)

{
  *(undefined ***)this = &___7__INumericTypeInterface_M__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// Z_Construct_UScriptStruct_FAudioOscilloscopePanelStyle @ 14d891210

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAudioOscilloscopePanelStyle(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAudioOscilloscopePanelStyle.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAudioOscilloscopePanelStyle.InnerSingleton,
               &Z_Construct_UScriptStruct_FAudioOscilloscopePanelStyle_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAudioOscilloscopePanelStyle.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAudioOscilloscopePanelStyle.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FFixedSampleSequenceRulerStyle @ 14d891290

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FFixedSampleSequenceRulerStyle(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FFixedSampleSequenceRulerStyle.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FFixedSampleSequenceRulerStyle.InnerSingleton,
               &Z_Construct_UScriptStruct_FFixedSampleSequenceRulerStyle_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FFixedSampleSequenceRulerStyle.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FFixedSampleSequenceRulerStyle.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FSampledSequenceValueGridOverlayStyle @ 14d891310

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSampledSequenceValueGridOverlayStyle(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSampledSequenceValueGridOverlayStyle.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSampledSequenceValueGridOverlayStyle.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FSampledSequenceValueGridOverlayStyle_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSampledSequenceValueGridOverlayStyle.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSampledSequenceValueGridOverlayStyle.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FSampledSequenceViewerStyle @ 14d891560

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSampledSequenceViewerStyle(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSampledSequenceViewerStyle.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSampledSequenceViewerStyle.InnerSingleton,
               &Z_Construct_UScriptStruct_FSampledSequenceViewerStyle_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSampledSequenceViewerStyle.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSampledSequenceViewerStyle.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FTriggerThresholdLineStyle @ 14d8915e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTriggerThresholdLineStyle(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTriggerThresholdLineStyle.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTriggerThresholdLineStyle.InnerSingleton,
               &Z_Construct_UScriptStruct_FTriggerThresholdLineStyle_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTriggerThresholdLineStyle.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTriggerThresholdLineStyle.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewStructOps @ 14d891660

void * __cdecl Z_Construct_UScriptStruct_FAudioOscilloscopePanelStyle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x440;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAudioOscilloscopePanelStyle,&UE::CoreUObject::Private::Construct<FAudioOscilloscopePanelStyle>,&UE::CoreUObject::Private::ConstructForTests<FAudioOscilloscopePanelStyle>,&UE::CoreUObject::Private::Destruct<FAudioOscilloscopePanelStyle>,&UE::CoreUObject::Private::Copy<FAudioOscilloscopePanelStyle>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UAudioMaterialMeter @ 14d891cc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAudioMaterialMeter(void)

{
  if (Z_Registration_Info_UClass_UAudioMaterialMeter.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAudioMaterialMeter.OuterSingleton,
               &Z_Construct_UClass_UAudioMaterialMeter_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAudioMaterialMeter.OuterSingleton;
}

// EAudioSpectrumPlotTilt_StaticEnum @ 14d891e80

UEnum * __cdecl EAudioSpectrumPlotTilt_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAudioSpectrumPlotTilt.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioWidgets();
    Z_Registration_Info_UEnum_EAudioSpectrumPlotTilt.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioWidgets_EAudioSpectrumPlotTilt,(UObject *)pUVar1,
                       L"EAudioSpectrumPlotTilt");
  }
  return Z_Registration_Info_UEnum_EAudioSpectrumPlotTilt.OuterSingleton;
}

// EAudioSpectrumPlotFrequencyAxisScale_StaticEnum @ 14d891ef0

UEnum * __cdecl EAudioSpectrumPlotFrequencyAxisScale_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAudioSpectrumPlotFrequencyAxisScale.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_AudioWidgets();
    Z_Registration_Info_UEnum_EAudioSpectrumPlotFrequencyAxisScale.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioWidgets_EAudioSpectrumPlotFrequencyAxisScale,
                       (UObject *)pUVar1,L"EAudioSpectrumPlotFrequencyAxisScale");
  }
  return Z_Registration_Info_UEnum_EAudioSpectrumPlotFrequencyAxisScale.OuterSingleton;
}

// Z_Construct_UFunction_UAudioMaterialMeter_GetMeterChannelInfo @ 14d891f30

UFunction * __cdecl Z_Construct_UFunction_UAudioMaterialMeter_GetMeterChannelInfo(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMaterialMeter_GetMeterChannelInfo_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14d892040

void * __cdecl Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x430;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAudioMeterStyle,&UE::CoreUObject::Private::Construct<FAudioMeterStyle>,&UE::CoreUObject::Private::ConstructForTests<FAudioMeterStyle>,&UE::CoreUObject::Private::Destruct<FAudioMeterStyle>,&UE::CoreUObject::Private::Copy<FAudioMeterStyle>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// EAudioSpectrumPlotFrequencyAxisPixelBucketMode_StaticEnum @ 14d892080

UEnum * __cdecl EAudioSpectrumPlotFrequencyAxisPixelBucketMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioWidgets();
    Z_Registration_Info_UEnum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioWidgets_EAudioSpectrumPlotFrequencyAxisPixelBucketMode
                       ,(UObject *)pUVar1,L"EAudioSpectrumPlotFrequencyAxisPixelBucketMode");
  }
  return Z_Registration_Info_UEnum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode.OuterSingleton;
}

// Z_Construct_UFunction_UAudioMaterialMeter_SetMeterChannelInfo @ 14d8920c0

UFunction * __cdecl Z_Construct_UFunction_UAudioMaterialMeter_SetMeterChannelInfo(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioMaterialMeter_SetMeterChannelInfo_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FAudioVectorscopePanelStyle @ 14d892370

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAudioVectorscopePanelStyle(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAudioVectorscopePanelStyle.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAudioVectorscopePanelStyle.InnerSingleton,
               &Z_Construct_UScriptStruct_FAudioVectorscopePanelStyle_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAudioVectorscopePanelStyle.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAudioVectorscopePanelStyle.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FSampledSequenceVectorViewerStyle @ 14d8923f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSampledSequenceVectorViewerStyle(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSampledSequenceVectorViewerStyle.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSampledSequenceVectorViewerStyle.InnerSingleton,
               &Z_Construct_UScriptStruct_FSampledSequenceVectorViewerStyle_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSampledSequenceVectorViewerStyle.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSampledSequenceVectorViewerStyle.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewStructOps @ 14d892470

void * __cdecl Z_Construct_UScriptStruct_FAudioVectorscopePanelStyle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1a0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAudioVectorscopePanelStyle,&UE::CoreUObject::Private::Construct<FAudioVectorscopePanelStyle>,&UE::CoreUObject::Private::ConstructForTests<FAudioVectorscopePanelStyle>,&UE::CoreUObject::Private::Destruct<FAudioVectorscopePanelStyle>,&UE::CoreUObject::Private::Copy<FAudioVectorscopePanelStyle>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d8924f0

void * __cdecl Z_Construct_UScriptStruct_FAudioSpectrumPlotStyle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x130;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAudioSpectrumPlotStyle,&UE::CoreUObject::Private::Construct<FAudioSpectrumPlotStyle>,&UE::CoreUObject::Private::ConstructForTests<FAudioSpectrumPlotStyle>,&UE::CoreUObject::Private::Destruct<FAudioSpectrumPlotStyle>,&UE::CoreUObject::Private::Copy<FAudioSpectrumPlotStyle>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UDelegateFunction_AudioWidgets_OnAudioRadialSliderValueChangedEvent__DelegateSignature @ 14d892680

UFunction * __cdecl
Z_Construct_UDelegateFunction_AudioWidgets_OnAudioRadialSliderValueChangedEvent__DelegateSignature
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_AudioWidgets_OnAudioRadialSliderValueChangedEvent__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_AudioWidgets_OnButtonPressedChangedEvent__DelegateSignature @ 14d8926c0

UFunction * __cdecl
Z_Construct_UDelegateFunction_AudioWidgets_OnButtonPressedChangedEvent__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_AudioWidgets_OnButtonPressedChangedEvent__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_AudioWidgets_OnKnobValueChangedEvent__DelegateSignature @ 14d892700

UFunction * __cdecl
Z_Construct_UDelegateFunction_AudioWidgets_OnKnobValueChangedEvent__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_AudioWidgets_OnKnobValueChangedEvent__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_AudioWidgets_OnSliderFloatValueChangedEvent__DelegateSignature @ 14d892740

UFunction * __cdecl
Z_Construct_UDelegateFunction_AudioWidgets_OnSliderFloatValueChangedEvent__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_AudioWidgets_OnSliderFloatValueChangedEvent__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_UAudioMaterialMeter_GetMeterChannelInfo__DelegateSignature @ 14d892780

UFunction * __cdecl
Z_Construct_UDelegateFunction_UAudioMaterialMeter_GetMeterChannelInfo__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_UAudioMaterialMeter_GetMeterChannelInfo__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_UAudioMeter_GetMeterChannelInfo__DelegateSignature @ 14d8927c0

UFunction * __cdecl
Z_Construct_UDelegateFunction_UAudioMeter_GetMeterChannelInfo__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_UAudioMeter_GetMeterChannelInfo__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_UAudioOscilloscope_GetOscilloscopeAudioSamples__DelegateSignature @ 14d892800

UFunction * __cdecl
Z_Construct_UDelegateFunction_UAudioOscilloscope_GetOscilloscopeAudioSamples__DelegateSignature
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_UAudioOscilloscope_GetOscilloscopeAudioSamples__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_UAudioVectorscope_GetVectorscopeAudioSamples__DelegateSignature @ 14d892840

UFunction * __cdecl
Z_Construct_UDelegateFunction_UAudioVectorscope_GetVectorscopeAudioSamples__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_UAudioVectorscope_GetVectorscopeAudioSamples__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FAudioMaterialWidgetStyle @ 14d8929a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAudioMaterialWidgetStyle(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAudioMaterialWidgetStyle.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAudioMaterialWidgetStyle.InnerSingleton,
               &Z_Construct_UScriptStruct_FAudioMaterialWidgetStyle_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAudioMaterialWidgetStyle.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAudioMaterialWidgetStyle.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FAudioTextBoxStyle @ 14d892a20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAudioTextBoxStyle(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAudioTextBoxStyle.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAudioTextBoxStyle.InnerSingleton,
               &Z_Construct_UScriptStruct_FAudioTextBoxStyle_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAudioTextBoxStyle.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAudioTextBoxStyle.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewStructOps @ 14d892aa0

void * __cdecl Z_Construct_UScriptStruct_FAudioMaterialWidgetStyle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAudioMaterialWidgetStyle,&UE::CoreUObject::Private::Construct<FAudioMaterialWidgetStyle>,&UE::CoreUObject::Private::ConstructForTests<FAudioMaterialWidgetStyle>,&UE::CoreUObject::Private::Destruct<FAudioMaterialWidgetStyle>,&UE::CoreUObject::Private::Copy<FAudioMaterialWidgetStyle>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UEnum_AudioWidgets_EAudioPanelLayoutType @ 14d892ae0

UEnum * __cdecl Z_Construct_UEnum_AudioWidgets_EAudioPanelLayoutType(void)

{
  if (Z_Registration_Info_UEnum_EAudioPanelLayoutType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAudioPanelLayoutType.InnerSingleton,
               &Z_Construct_UEnum_AudioWidgets_EAudioPanelLayoutType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EAudioPanelLayoutType.InnerSingleton;
}

// EAudioPanelLayoutType_StaticEnum @ 14d892b20

UEnum * __cdecl EAudioPanelLayoutType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAudioPanelLayoutType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioWidgets();
    Z_Registration_Info_UEnum_EAudioPanelLayoutType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioWidgets_EAudioPanelLayoutType,(UObject *)pUVar1,
                       L"EAudioPanelLayoutType");
  }
  return Z_Registration_Info_UEnum_EAudioPanelLayoutType.OuterSingleton;
}

// EAudioUnitsValueType_StaticEnum @ 14d892b60

UEnum * __cdecl EAudioUnitsValueType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAudioUnitsValueType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioWidgets();
    Z_Registration_Info_UEnum_EAudioUnitsValueType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioWidgets_EAudioUnitsValueType,(UObject *)pUVar1,
                       L"EAudioUnitsValueType");
  }
  return Z_Registration_Info_UEnum_EAudioUnitsValueType.OuterSingleton;
}

// NewStructOps @ 14d892c20

void * __cdecl Z_Construct_UScriptStruct_FAudioMaterialButtonStyle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x88;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAudioMaterialButtonStyle,&UE::CoreUObject::Private::Construct<FAudioMaterialButtonStyle>,&UE::CoreUObject::Private::ConstructForTests<FAudioMaterialButtonStyle>,&UE::CoreUObject::Private::Destruct<FAudioMaterialButtonStyle>,&UE::CoreUObject::Private::Copy<FAudioMaterialButtonStyle>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FLoudnessMetricDisplayOptions @ 14d892c60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLoudnessMetricDisplayOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLoudnessMetricDisplayOptions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLoudnessMetricDisplayOptions.InnerSingleton,
               &Z_Construct_UScriptStruct_FLoudnessMetricDisplayOptions_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLoudnessMetricDisplayOptions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLoudnessMetricDisplayOptions.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewProp_bShowValue_SetBit @ 14d892ce0

void __cdecl
Z_Construct_UScriptStruct_FLoudnessMetricDisplayOptions_Statics::NewProp_bShowValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bShowMeter_SetBit @ 14d892cf0

void __cdecl
Z_Construct_UScriptStruct_FLoudnessMetricDisplayOptions_Statics::NewProp_bShowMeter_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// NewStructOps @ 14d892d00

void * __cdecl Z_Construct_UScriptStruct_FLoudnessMetricDisplayOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 2;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLoudnessMetricDisplayOptions,&UE::CoreUObject::Private::Construct<FLoudnessMetricDisplayOptions>,&UE::CoreUObject::Private::ConstructForTests<FLoudnessMetricDisplayOptions>,&UE::CoreUObject::Private::Destruct<FLoudnessMetricDisplayOptions>,&UE::CoreUObject::Private::Copy<FLoudnessMetricDisplayOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bDisplayAnalysisTimer_SetBit @ 14d892dc0

void __cdecl
Z_Construct_UScriptStruct_FLoudnessMeterRackUnitSettings_Statics::
NewProp_bDisplayAnalysisTimer_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 14d892dd0

void * __cdecl Z_Construct_UScriptStruct_FLoudnessMeterRackUnitSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 7;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLoudnessMeterRackUnitSettings,&UE::CoreUObject::Private::Construct<FLoudnessMeterRackUnitSettings>,&UE::CoreUObject::Private::ConstructForTests<FLoudnessMeterRackUnitSettings>,&UE::CoreUObject::Private::Destruct<FLoudnessMeterRackUnitSettings>,&UE::CoreUObject::Private::Copy<FLoudnessMeterRackUnitSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d892f20

void * __cdecl Z_Construct_UScriptStruct_FAudioMaterialSliderStyle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x150;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAudioMaterialSliderStyle,&UE::CoreUObject::Private::Construct<FAudioMaterialSliderStyle>,&UE::CoreUObject::Private::ConstructForTests<FAudioMaterialSliderStyle>,&UE::CoreUObject::Private::Destruct<FAudioMaterialSliderStyle>,&UE::CoreUObject::Private::Copy<FAudioMaterialSliderStyle>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14d892fa0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<FText_(__cdecl*)(double),0,0>::
_scalar_deleting_destructor_(TFunction_OwnedObject<FText_(__cdecl*)(double),0,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)&___7__TFunction_OwnedObject_P6A_AVFText__N_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// NewStructOps @ 14d8930a0

void * __cdecl
Z_Construct_UScriptStruct_FSampledSequenceVectorViewerStyle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xf0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSampledSequenceVectorViewerStyle,&UE::CoreUObject::Private::Construct<FSampledSequenceVectorViewerStyle>,&UE::CoreUObject::Private::ConstructForTests<FSampledSequenceVectorViewerStyle>,&UE::CoreUObject::Private::Destruct<FSampledSequenceVectorViewerStyle>,&UE::CoreUObject::Private::Copy<FSampledSequenceVectorViewerStyle>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d8930e0

void * __cdecl Z_Construct_UScriptStruct_FAudioMaterialKnobStyle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1c0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAudioMaterialKnobStyle,&UE::CoreUObject::Private::Construct<FAudioMaterialKnobStyle>,&UE::CoreUObject::Private::ConstructForTests<FAudioMaterialKnobStyle>,&UE::CoreUObject::Private::Destruct<FAudioMaterialKnobStyle>,&UE::CoreUObject::Private::Copy<FAudioMaterialKnobStyle>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UAudioOscilloscope @ 14d893120

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAudioOscilloscope(void)

{
  if (Z_Registration_Info_UClass_UAudioOscilloscope.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAudioOscilloscope.OuterSingleton,
               &Z_Construct_UClass_UAudioOscilloscope_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAudioOscilloscope.OuterSingleton;
}

// Z_Construct_UEnum_AudioWidgets_EXAxisLabelsUnit @ 14d893160

UEnum * __cdecl Z_Construct_UEnum_AudioWidgets_EXAxisLabelsUnit(void)

{
  if (Z_Registration_Info_UEnum_EXAxisLabelsUnit.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EXAxisLabelsUnit.InnerSingleton,
               &Z_Construct_UEnum_AudioWidgets_EXAxisLabelsUnit_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EXAxisLabelsUnit.InnerSingleton;
}

// Z_Construct_UEnum_AudioWidgets_EYAxisLabelsUnit @ 14d8931a0

UEnum * __cdecl Z_Construct_UEnum_AudioWidgets_EYAxisLabelsUnit(void)

{
  if (Z_Registration_Info_UEnum_EYAxisLabelsUnit.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EYAxisLabelsUnit.InnerSingleton,
               &Z_Construct_UEnum_AudioWidgets_EYAxisLabelsUnit_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EYAxisLabelsUnit.InnerSingleton;
}

// NewStructOps @ 14d8931e0

void * __cdecl Z_Construct_UScriptStruct_FTriggerThresholdLineStyle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTriggerThresholdLineStyle,&UE::CoreUObject::Private::Construct<FTriggerThresholdLineStyle>,&UE::CoreUObject::Private::ConstructForTests<FTriggerThresholdLineStyle>,&UE::CoreUObject::Private::Destruct<FTriggerThresholdLineStyle>,&UE::CoreUObject::Private::Copy<FTriggerThresholdLineStyle>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UAudioFrequencySlider @ 14d893220

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAudioFrequencySlider(void)

{
  if (Z_Registration_Info_UClass_UAudioFrequencySlider.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAudioFrequencySlider.OuterSingleton,
               &Z_Construct_UClass_UAudioFrequencySlider_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAudioFrequencySlider.OuterSingleton;
}

// Z_Construct_UClass_UAudioSlider @ 14d893260

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAudioSlider(void)

{
  if (Z_Registration_Info_UClass_UAudioSlider.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAudioSlider.OuterSingleton,
               &Z_Construct_UClass_UAudioSlider_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAudioSlider.OuterSingleton;
}

// Z_Construct_UClass_UAudioSliderBase @ 14d8932a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAudioSliderBase(void)

{
  if (Z_Registration_Info_UClass_UAudioSliderBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAudioSliderBase.OuterSingleton,
               &Z_Construct_UClass_UAudioSliderBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAudioSliderBase.OuterSingleton;
}

// Z_Construct_UClass_UAudioVolumeSlider @ 14d8932e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAudioVolumeSlider(void)

{
  if (Z_Registration_Info_UClass_UAudioVolumeSlider.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAudioVolumeSlider.OuterSingleton,
               &Z_Construct_UClass_UAudioVolumeSlider_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAudioVolumeSlider.OuterSingleton;
}

// NewProp_bShowScale_SetBit @ 14d893320

void __cdecl
Z_Construct_UScriptStruct_FAudioMaterialMeterStyle_Statics::NewProp_bShowScale_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x78) = 1;
  return;
}

// NewProp_bScaleSide_SetBit @ 14d893330

void __cdecl
Z_Construct_UScriptStruct_FAudioMaterialMeterStyle_Statics::NewProp_bScaleSide_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x79) = 1;
  return;
}

// NewStructOps @ 14d893340

void * __cdecl Z_Construct_UScriptStruct_FAudioMaterialMeterStyle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xf0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAudioMaterialMeterStyle,&UE::CoreUObject::Private::Construct<FAudioMaterialMeterStyle>,&UE::CoreUObject::Private::ConstructForTests<FAudioMaterialMeterStyle>,&UE::CoreUObject::Private::Destruct<FAudioMaterialMeterStyle>,&UE::CoreUObject::Private::Copy<FAudioMaterialMeterStyle>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UAudioSliderBase_GetLinValue @ 14d8933b0

UFunction * __cdecl Z_Construct_UFunction_UAudioSliderBase_GetLinValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioSliderBase_GetLinValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14d8933f0

void __cdecl
Z_Construct_UFunction_UAudioOscilloscope_CanTriggeringBeSet_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UAudioOscilloscope_CanTriggeringBeSet @ 14d893600

UFunction * __cdecl Z_Construct_UFunction_UAudioOscilloscope_CanTriggeringBeSet(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioOscilloscope_CanTriggeringBeSet_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioSliderBase_GetOutputValue @ 14d893640

UFunction * __cdecl Z_Construct_UFunction_UAudioSliderBase_GetOutputValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioSliderBase_GetOutputValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UEnum_AudioWidgets_EAudioSpectrogramFrequencyAxisPixelBucketMode @ 14d893680

UEnum * __cdecl Z_Construct_UEnum_AudioWidgets_EAudioSpectrogramFrequencyAxisPixelBucketMode(void)

{
  if (Z_Registration_Info_UEnum_EAudioSpectrogramFrequencyAxisPixelBucketMode.InnerSingleton ==
      (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAudioSpectrogramFrequencyAxisPixelBucketMode.
                InnerSingleton,
               &Z_Construct_UEnum_AudioWidgets_EAudioSpectrogramFrequencyAxisPixelBucketMode_Statics
                ::EnumParams);
  }
  return Z_Registration_Info_UEnum_EAudioSpectrogramFrequencyAxisPixelBucketMode.InnerSingleton;
}

// Z_Construct_UEnum_AudioWidgets_EAudioSpectrogramFrequencyAxisScale @ 14d8936c0

UEnum * __cdecl Z_Construct_UEnum_AudioWidgets_EAudioSpectrogramFrequencyAxisScale(void)

{
  if (Z_Registration_Info_UEnum_EAudioSpectrogramFrequencyAxisScale.InnerSingleton == (UEnum *)0x0)
  {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAudioSpectrogramFrequencyAxisScale.InnerSingleton,
               &Z_Construct_UEnum_AudioWidgets_EAudioSpectrogramFrequencyAxisScale_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EAudioSpectrogramFrequencyAxisScale.InnerSingleton;
}

// Z_Construct_UEnum_AudioWidgets_EAudioSpectrumAnalyzerType @ 14d893700

UEnum * __cdecl Z_Construct_UEnum_AudioWidgets_EAudioSpectrumAnalyzerType(void)

{
  if (Z_Registration_Info_UEnum_EAudioSpectrumAnalyzerType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAudioSpectrumAnalyzerType.InnerSingleton,
               &Z_Construct_UEnum_AudioWidgets_EAudioSpectrumAnalyzerType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EAudioSpectrumAnalyzerType.InnerSingleton;
}

// Z_Construct_UFunction_UAudioOscilloscope_StartProcessing @ 14d893740

UFunction * __cdecl Z_Construct_UFunction_UAudioOscilloscope_StartProcessing(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioOscilloscope_StartProcessing_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14d893780

void * __cdecl Z_Construct_UScriptStruct_FSpectrogramRackUnitSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 7;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSpectrogramRackUnitSettings,&UE::CoreUObject::Private::Construct<FSpectrogramRackUnitSettings>,&UE::CoreUObject::Private::ConstructForTests<FSpectrogramRackUnitSettings>,&UE::CoreUObject::Private::Destruct<FSpectrogramRackUnitSettings>,&UE::CoreUObject::Private::Copy<FSpectrogramRackUnitSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UAudioOscilloscope_StopProcessing @ 14d8937c0

UFunction * __cdecl Z_Construct_UFunction_UAudioOscilloscope_StopProcessing(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioOscilloscope_StopProcessing_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioSliderBase_GetSliderValue @ 14d893800

UFunction * __cdecl Z_Construct_UFunction_UAudioSliderBase_GetSliderValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioSliderBase_GetSliderValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bShowLabelOnlyOnHover_SetBit @ 14d893840

void __cdecl
Z_Construct_UFunction_UAudioSliderBase_SetShowLabelOnlyOnHover_Statics::
NewProp_bShowLabelOnlyOnHover_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bShowTimeGrid_SetBit @ 14d893850

void __cdecl
Z_Construct_UClass_UAudioOscilloscope_Statics::NewProp_bShowTimeGrid_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x604) = 1;
  return;
}

// NewProp_bShowAmplitudeGrid_SetBit @ 14d893860

void __cdecl
Z_Construct_UClass_UAudioOscilloscope_Statics::NewProp_bShowAmplitudeGrid_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x606) = 1;
  return;
}

// NewProp_bShowAmplitudeLabels_SetBit @ 14d893870

void __cdecl
Z_Construct_UClass_UAudioOscilloscope_Statics::NewProp_bShowAmplitudeLabels_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x607) = 1;
  return;
}

// Z_Construct_UFunction_UAudioSliderBase_SetShowLabelOnlyOnHover @ 14d893880

UFunction * __cdecl Z_Construct_UFunction_UAudioSliderBase_SetShowLabelOnlyOnHover(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioSliderBase_SetShowLabelOnlyOnHover_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14d8938c0

void * __cdecl Z_Construct_UScriptStruct_FAudioMaterialEnvelopeStyle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAudioMaterialEnvelopeStyle,&UE::CoreUObject::Private::Construct<FAudioMaterialEnvelopeStyle>,&UE::CoreUObject::Private::ConstructForTests<FAudioMaterialEnvelopeStyle>,&UE::CoreUObject::Private::Destruct<FAudioMaterialEnvelopeStyle>,&UE::CoreUObject::Private::Copy<FAudioMaterialEnvelopeStyle>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bShowUnitsText_SetBit @ 14d893900

void __cdecl
Z_Construct_UFunction_UAudioSliderBase_SetShowUnitsText_Statics::NewProp_bShowUnitsText_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UAudioSliderBase_SetShowUnitsText @ 14d893910

UFunction * __cdecl Z_Construct_UFunction_UAudioSliderBase_SetShowUnitsText(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioSliderBase_SetShowUnitsText_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioSliderBase_SetSliderBackgroundColor @ 14d893950

UFunction * __cdecl Z_Construct_UFunction_UAudioSliderBase_SetSliderBackgroundColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioSliderBase_SetSliderBackgroundColor_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioSliderBase_SetSliderBarColor @ 14d893990

UFunction * __cdecl Z_Construct_UFunction_UAudioSliderBase_SetSliderBarColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioSliderBase_SetSliderBarColor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioSliderBase_SetSliderThumbColor @ 14d8939d0

UFunction * __cdecl Z_Construct_UFunction_UAudioSliderBase_SetSliderThumbColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioSliderBase_SetSliderThumbColor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioSliderBase_SetTextLabelBackgroundColor @ 14d893a10

UFunction * __cdecl Z_Construct_UFunction_UAudioSliderBase_SetTextLabelBackgroundColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioSliderBase_SetTextLabelBackgroundColor_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioSliderBase_SetUnitsText @ 14d893b70

UFunction * __cdecl Z_Construct_UFunction_UAudioSliderBase_SetUnitsText(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioSliderBase_SetUnitsText_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsReadOnly_SetBit @ 14d893c40

void __cdecl
Z_Construct_UFunction_UAudioSliderBase_SetUnitsTextReadOnly_Statics::NewProp_bIsReadOnly_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UAudioSliderBase_SetUnitsTextReadOnly @ 14d893c50

UFunction * __cdecl Z_Construct_UFunction_UAudioSliderBase_SetUnitsTextReadOnly(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioSliderBase_SetUnitsTextReadOnly_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsReadOnly_SetBit @ 14d893c90

void __cdecl
Z_Construct_UFunction_UAudioSliderBase_SetValueTextReadOnly_Statics::NewProp_bIsReadOnly_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UClass_UAudioVectorscope @ 14d893ca0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAudioVectorscope(void)

{
  if (Z_Registration_Info_UClass_UAudioVectorscope.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAudioVectorscope.OuterSingleton,
               &Z_Construct_UClass_UAudioVectorscope_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAudioVectorscope.OuterSingleton;
}

// Z_Construct_UFunction_UAudioSliderBase_SetValueTextReadOnly @ 14d893ce0

UFunction * __cdecl Z_Construct_UFunction_UAudioSliderBase_SetValueTextReadOnly(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioSliderBase_SetValueTextReadOnly_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioSliderBase_SetWidgetBackgroundColor @ 14d893d20

UFunction * __cdecl Z_Construct_UFunction_UAudioSliderBase_SetWidgetBackgroundColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioSliderBase_SetWidgetBackgroundColor_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioVectorscope_StartProcessing @ 14d893d60

UFunction * __cdecl Z_Construct_UFunction_UAudioVectorscope_StartProcessing(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioVectorscope_StartProcessing_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ShowLabelOnlyOnHover_SetBit @ 14d893da0

void __cdecl
Z_Construct_UClass_UAudioSliderBase_Statics::NewProp_ShowLabelOnlyOnHover_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1f0) = 1;
  return;
}

// NewProp_ShowUnitsText_SetBit @ 14d893df0

void __cdecl
Z_Construct_UClass_UAudioSliderBase_Statics::NewProp_ShowUnitsText_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1f1) = 1;
  return;
}

// NewProp_IsUnitsTextReadOnly_SetBit @ 14d893e00

void __cdecl
Z_Construct_UClass_UAudioSliderBase_Statics::NewProp_IsUnitsTextReadOnly_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1f2) = 1;
  return;
}

// NewProp_IsValueTextReadOnly_SetBit @ 14d893e10

void __cdecl
Z_Construct_UClass_UAudioSliderBase_Statics::NewProp_IsValueTextReadOnly_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 499) = 1;
  return;
}

// Z_Construct_UFunction_UAudioVectorscope_StopProcessing @ 14d893e20

UFunction * __cdecl Z_Construct_UFunction_UAudioVectorscope_StopProcessing(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioVectorscope_StopProcessing_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bShowGrid_SetBit @ 14d893e60

void __cdecl Z_Construct_UClass_UAudioVectorscope_Statics::NewProp_bShowGrid_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x358) = 1;
  return;
}

// Z_Construct_UClass_UAudioMaterialEnvelope @ 14d893eb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAudioMaterialEnvelope(void)

{
  if (Z_Registration_Info_UClass_UAudioMaterialEnvelope.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAudioMaterialEnvelope.OuterSingleton,
               &Z_Construct_UClass_UAudioMaterialEnvelope_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAudioMaterialEnvelope.OuterSingleton;
}

// Z_Construct_UScriptStruct_FAudioMaterialEnvelopeStyle @ 14d893ef0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAudioMaterialEnvelopeStyle(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAudioMaterialEnvelopeStyle.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAudioMaterialEnvelopeStyle.InnerSingleton,
               &Z_Construct_UScriptStruct_FAudioMaterialEnvelopeStyle_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAudioMaterialEnvelopeStyle.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAudioMaterialEnvelopeStyle.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewStructOps @ 14d8943c0

void * __cdecl Z_Construct_UScriptStruct_FAudioTextBoxStyle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xe0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAudioTextBoxStyle,&UE::CoreUObject::Private::Construct<FAudioTextBoxStyle>,&UE::CoreUObject::Private::ConstructForTests<FAudioTextBoxStyle>,&UE::CoreUObject::Private::Destruct<FAudioTextBoxStyle>,&UE::CoreUObject::Private::Copy<FAudioTextBoxStyle>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14d8946e0

void * __thiscall
FAudioWidgetsModule::_scalar_deleting_destructor_(FAudioWidgetsModule *this,uint param_1)

{
  *this = (FAudioWidgetsModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// NewStructOps @ 14d8947b0

void * __cdecl Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x650;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAudioSliderStyle,&UE::CoreUObject::Private::Construct<FAudioSliderStyle>,&UE::CoreUObject::Private::ConstructForTests<FAudioSliderStyle>,&UE::CoreUObject::Private::Destruct<FAudioSliderStyle>,&UE::CoreUObject::Private::Copy<FAudioSliderStyle>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d8947f0

void * __cdecl Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x140;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAudioRadialSliderStyle,&UE::CoreUObject::Private::Construct<FAudioRadialSliderStyle>,&UE::CoreUObject::Private::ConstructForTests<FAudioRadialSliderStyle>,&UE::CoreUObject::Private::Destruct<FAudioRadialSliderStyle>,&UE::CoreUObject::Private::Copy<FAudioRadialSliderStyle>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// <lambda_invoker_cdecl> @ 14d894830

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
AudioOscilloscopePanelWidgetPrivate::<lambda_27>::<lambda_invoker_cdecl>
          (FText *__return_storage_ptr__,double param_1)

{
  FNumberFormattingOptions *pFVar1;
  undefined1 local_48 [8];
  FSharedReferencer<1> FStack_40;
  FNumberFormattingOptions local_30;
  
  pFVar1 = FNumberFormattingOptions::FNumberFormattingOptions((FNumberFormattingOptions *)local_48);
  pFVar1->MaximumFractionalDigits = 2;
  local_30.AlwaysSign = pFVar1->AlwaysSign;
  local_30.UseGrouping = pFVar1->UseGrouping;
  local_30.IndicateNearlyInteger = pFVar1->IndicateNearlyInteger;
  local_30._3_1_ = pFVar1->field_0x3;
  local_30.RoundingMode = pFVar1->RoundingMode;
  local_30.MinimumIntegralDigits = pFVar1->MinimumIntegralDigits;
  local_30.MaximumIntegralDigits = pFVar1->MaximumIntegralDigits;
  local_30.MinimumFractionalDigits = pFVar1->MinimumFractionalDigits;
  local_30.MaximumFractionalDigits = pFVar1->MaximumFractionalDigits;
  local_48 = (undefined1  [8])0x0;
  FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FText::AsNumber(__return_storage_ptr__,(float)(__real_3ff0000000000000 - (param_1 + param_1)),
                  &local_30,(TSharedPtr<FCulture,1> *)local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_40.ReferenceController);
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 14d8948c0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
AudioOscilloscopePanelWidgetPrivate::<lambda_28>::<lambda_invoker_cdecl>
          (FText *__return_storage_ptr__,double param_1)

{
  FNumberFormattingOptions *pFVar1;
  FText *pFVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  TSharedPtr<FCulture,1> local_68;
  FText local_58;
  longlong *local_48 [3];
  FNumberFormattingOptions local_30;
  
  dVar5 = (param_1 + param_1) - __real_3ff0000000000000;
  fVar3 = (float)(double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  if (fVar3 <= __real_322bcc77) {
    fVar3 = __real_322bcc77;
  }
  fVar4 = logf(fVar3);
  fVar4 = fVar4 * __real_410af967;
  pFVar1 = FNumberFormattingOptions::FNumberFormattingOptions((FNumberFormattingOptions *)local_48);
  fVar3 = __real_c3200000;
  pFVar1->MaximumFractionalDigits = 1;
  local_30.AlwaysSign = pFVar1->AlwaysSign;
  local_30.UseGrouping = pFVar1->UseGrouping;
  local_30.IndicateNearlyInteger = pFVar1->IndicateNearlyInteger;
  local_30._3_1_ = pFVar1->field_0x3;
  local_30.RoundingMode = pFVar1->RoundingMode;
  local_30.MinimumIntegralDigits = pFVar1->MinimumIntegralDigits;
  local_30.MaximumIntegralDigits = pFVar1->MaximumIntegralDigits;
  local_30.MinimumFractionalDigits = pFVar1->MinimumFractionalDigits;
  local_30.MaximumFractionalDigits = pFVar1->MaximumFractionalDigits;
  if (fVar3 < fVar4) {
    local_68.Object = (FCulture *)0x0;
    local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar2 = FText::AsNumber((FText *)local_48,fVar4,&local_30,&local_68);
    FText::FText(__return_storage_ptr__,pFVar2);
    if ((ITextData *)local_48[0] != (ITextData *)0x0) {
      (**(code **)(*local_48[0] + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
  }
  else {
    pFVar2 = FText::FromString(&local_58,"-inf");
    FText::FText(__return_storage_ptr__,pFVar2);
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 14d8949d0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
SampledSequenceValueGridOverlayPrivate::<lambda_29>::<lambda_invoker_cdecl>
          (FText *__return_storage_ptr__,double param_1)

{
  TSharedPtr<FCulture,1> local_48;
  FNumberFormattingOptions local_38 [2];
  
  FNumberFormattingOptions::FNumberFormattingOptions(local_38);
  local_48.Object = (FCulture *)0x0;
  local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FText::AsNumber(__return_storage_ptr__,param_1,local_38,&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// TFunctionRef<float___cdecl(UE::Math::TVector2<float>_const_&)><`SAudioSpectrumPlot::DrawPowerSpectrum'::__l10::<lambda_1>_const_&> @ 14d894be0

TFunctionRef<float___cdecl(UE::Math::TVector2<float>_const_&)> * __thiscall
TFunctionRef<float___cdecl(UE::Math::TVector2<float>_const_&)>::
TFunctionRef<float___cdecl(UE::Math::TVector2<float>_const_&)><_SAudioSpectrumPlot::DrawPowerSpectrum_::__l10::<lambda_1>_const_&>
          (TFunctionRef<float___cdecl(UE::Math::TVector2<float>_const_&)> *this,<lambda_1> *param_1)

{
  *(<lambda_1> **)&this->field_0x8 = param_1;
  *(code **)this =
       UE::Core::Private::Function::
       TFunctionRefCaller<`SAudioSpectrumPlot::DrawPowerSpectrum'::__l10::<lambda_1>_const_,float,UE::Math::TVector2<float>_const_&>
       ::Call;
  return this;
}

// TFunction<EVisibility___cdecl(void)><`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_2>_const_&> @ 14d894c00

TFunction<EVisibility___cdecl(void)> * __thiscall
TFunction<EVisibility___cdecl(void)>::
TFunction<EVisibility___cdecl(void)><_AudioWidgets::FLoudnessMeterWidgetView::MakeWidget_::__l2::<lambda_2>_const_&>
          (TFunction<EVisibility___cdecl(void)> *this,<lambda_2> *param_1)

{
  undefined8 *puVar1;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  puVar1 = FMemory::Malloc(0x28,8);
  *(undefined8 **)&this->field_0x28 = puVar1;
  *puVar1 = &UE::Core::Private::Function::
             TFunction_OwnedObject<`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::`2'::<lambda_2>,0,1>
             ::_vftable_;
  *(bool *)(puVar1 + 1) = (param_1->bIsVisible).Value;
  *(bool *)((longlong)puVar1 + 9) = (param_1->bIsVisible).bIsSet;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar1 + 2),
             &(param_1->bIsVisible).Getter);
  if (puVar1 + 1 != (undefined8 *)0x0) {
    *(code **)this =
         UE::Core::Private::Function::
         TFunctionRefCaller<`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_2>,EVisibility>
         ::Call;
  }
  return this;
}

// TFunctionRef<float___cdecl(UE::Math::TVector2<float>_const_&)><`SAudioSpectrumPlot::DrawPowerSpectrum'::__l11::<lambda_2>_const_&> @ 14d894ca0

TFunctionRef<float___cdecl(UE::Math::TVector2<float>_const_&)> * __thiscall
TFunctionRef<float___cdecl(UE::Math::TVector2<float>_const_&)>::
TFunctionRef<float___cdecl(UE::Math::TVector2<float>_const_&)><_SAudioSpectrumPlot::DrawPowerSpectrum_::__l11::<lambda_2>_const_&>
          (TFunctionRef<float___cdecl(UE::Math::TVector2<float>_const_&)> *this,<lambda_2> *param_1)

{
  *(<lambda_2> **)&this->field_0x8 = param_1;
  *(code **)this =
       UE::Core::Private::Function::
       TFunctionRefCaller<`SAudioSpectrumPlot::DrawPowerSpectrum'::__l11::<lambda_2>_const_,float,UE::Math::TVector2<float>_const_&>
       ::Call;
  return this;
}

// CompareItems<FMeterChannelInfo,int> @ 14d8983f0

bool __cdecl
CompareItems<FMeterChannelInfo,int>
          (FMeterChannelInfo *param_1,FMeterChannelInfo *param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  
  if (param_3 != 0) {
    pfVar2 = (float *)&param_2->field_0x8;
    pfVar1 = (float *)&param_1->field_0x8;
    do {
      if (((__real_322bcc77 <
            (float)((uint)(pfVar1[-2] -
                          *(float *)((longlong)param_2 + (-8 - (longlong)param_1) + (longlong)pfVar1
                                    )) & __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
          (__real_322bcc77 <
           (float)((uint)(pfVar1[-1] - pfVar2[-1]) & __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
         (__real_322bcc77 <
          (float)((uint)(*pfVar1 - *pfVar2) & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
        return false;
      }
      pfVar1 = pfVar1 + 3;
      pfVar2 = pfVar2 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructItems<FMeterChannelInfo,FAudioMeterChannelInfo,int> @ 14d8984a0

void __cdecl
ConstructItems<FMeterChannelInfo,FAudioMeterChannelInfo,int>
          (void *param_1,FAudioMeterChannelInfo *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(float *)((longlong)param_1 + 8) = param_2->ClippingValue;
    param_1 = (undefined8 *)((longlong)param_1 + 0xc);
    param_2 = param_2 + 1;
  }
  return;
}

// ConstructItems<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,int> @ 14d8984e0

void __cdecl
ConstructItems<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,int>
          (void *param_1,TSharedPtr<EAudioOscilloscopeTriggerMode,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(EAudioOscilloscopeTriggerMode **)(lVar2 + (longlong)param_2) = param_2->Object;
      pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(lVar2 + 8 + (longlong)param_2) = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,int> @ 14d898520

void __cdecl
ConstructItems<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,int>
          (void *param_1,
          TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *param_2,
          int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FLoudnessMetric **)(lVar2 + (longlong)param_2) = param_2->Object;
      pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(lVar2 + 8 + (longlong)param_2) = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// CreateLambda<`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_4>_> @ 14d8991c0

TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::
CreateLambda<_AudioWidgets::FLoudnessMeterWidgetView::MakeWidget_::__l2::<lambda_4>_>
          (TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          <lambda_4> *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_28);
  local_10 = puVar1;
  puVar2 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::`2'::<lambda_4>_>
               ::_vftable_;
    puVar2[3] = param_1->TileView;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return __return_storage_ptr__;
}

// CreateSPLambda<UE::Slate::Containers::TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1,`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_3>_> @ 14d899ad0

TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
CreateSPLambda<UE::Slate::Containers::TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1,_AudioWidgets::FLoudnessMeterWidgetView::MakeWidget_::__l2::<lambda_3>_>
          (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          TSharedRef<UE::Slate::Containers::TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
          *param_1,<lambda_3> *param_2)

{
  undefined1 *puVar1;
  atomic<int> aVar2;
  TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
  *pTVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  atomic<int> *paVar8;
  uint uStackX_c;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  bVar7 = false;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_48);
  local_30 = puVar1;
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puVar1);
  if (puVar4 == (undefined8 *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar6 = (param_1->SharedReferenceCount).ReferenceController;
    pTVar3 = param_1->Object;
    if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
      paVar8 = (atomic<int> *)&DAT_0000000c;
    }
    else {
      paVar8 = &pTVar6->WeakReferenceCount;
      LOCK();
      *paVar8 = (atomic<int>)((int)*paVar8 + 1);
      UNLOCK();
    }
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &TBaseSPLambdaDelegateInstance<1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar4[3] = pTVar3;
    puVar4[4] = pTVar6;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar8 = (atomic<int>)((int)*paVar8 + 1);
      UNLOCK();
    }
    bVar7 = true;
    puVar4[5] = param_2->InNumericValues;
  }
  if ((bVar7) && (pTVar6 != (TReferenceControllerBase<1> *)0x0)) {
    LOCK();
    paVar8 = &pTVar6->WeakReferenceCount;
    aVar2 = *paVar8;
    *paVar8 = (atomic<int>)((int)*paVar8 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
    }
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return __return_storage_ptr__;
}

// CreateSPLambda<AudioWidgets::FAudioLoudnessMeter,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l2::<lambda_1>_> @ 14d899c10

TDelegate<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>::
CreateSPLambda<AudioWidgets::FAudioLoudnessMeter,_AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView_::__l2::<lambda_1>_>
          (TDelegate<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>
           *__return_storage_ptr__,FAudioLoudnessMeter *param_1,<lambda_1> *param_2)

{
  undefined1 *puVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  IAudioAnalyzerRackUnit *pIVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TWeakPtr<AudioWidgets::IAudioAnalyzerRackUnit,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TWeakPtr<AudioWidgets::IAudioAnalyzerRackUnit,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  bVar6 = false;
  bVar5 = false;
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar7 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puVar1);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<AudioWidgets::IAudioAnalyzerRackUnit,1>::AsWeak
                       ((TSharedFromThis<AudioWidgets::IAudioAnalyzerRackUnit,1> *)
                        &param_1->_padding_,&local_48);
    pIVar4 = pTVar8->Object;
    pTVar10 = (pTVar8->WeakReferenceCount).ReferenceController;
    (pTVar8->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar8->Object = (IAudioAnalyzerRackUnit *)0x0;
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_M__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &TBaseSPLambdaDelegateInstance<1,TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar7[3] = pIVar4;
    puVar7[4] = pTVar10;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = true;
    puVar7[5] = param_2->__this;
  }
  if ((bVar5) && (pTVar10 != (TReferenceControllerBase<1> *)0x0)) {
    LOCK();
    paVar2 = &pTVar10->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar10->_padding_ + 8))(pTVar10,1);
    }
  }
  if ((bVar6) &&
     (local_48.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)) {
    LOCK();
    paVar2 = &(local_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)((local_48.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_48.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// CreateSPLambda<AudioWidgets::FAudioLoudnessMeter,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l2::<lambda_2>_> @ 14d899d50

TDelegate<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>::
CreateSPLambda<AudioWidgets::FAudioLoudnessMeter,_AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView_::__l2::<lambda_2>_>
          (TDelegate<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>
           *__return_storage_ptr__,FAudioLoudnessMeter *param_1,<lambda_2> *param_2)

{
  undefined1 *puVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  IAudioAnalyzerRackUnit *pIVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TWeakPtr<AudioWidgets::IAudioAnalyzerRackUnit,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TWeakPtr<AudioWidgets::IAudioAnalyzerRackUnit,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  bVar6 = false;
  bVar5 = false;
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar7 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puVar1);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<AudioWidgets::IAudioAnalyzerRackUnit,1>::AsWeak
                       ((TSharedFromThis<AudioWidgets::IAudioAnalyzerRackUnit,1> *)
                        &param_1->_padding_,&local_48);
    pIVar4 = pTVar8->Object;
    pTVar10 = (pTVar8->WeakReferenceCount).ReferenceController;
    (pTVar8->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar8->Object = (IAudioAnalyzerRackUnit *)0x0;
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_M__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &TBaseSPLambdaDelegateInstance<1,TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar7[3] = pIVar4;
    puVar7[4] = pTVar10;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = true;
    puVar7[5] = param_2->__this;
  }
  if ((bVar5) && (pTVar10 != (TReferenceControllerBase<1> *)0x0)) {
    LOCK();
    paVar2 = &pTVar10->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar10->_padding_ + 8))(pTVar10,1);
    }
  }
  if ((bVar6) &&
     (local_48.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)) {
    LOCK();
    paVar2 = &(local_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)((local_48.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_48.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// CreateSPLambda<AudioWidgets::FAudioLoudnessMeter,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l2::<lambda_3>_> @ 14d899e90

TDelegate<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>::
CreateSPLambda<AudioWidgets::FAudioLoudnessMeter,_AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView_::__l2::<lambda_3>_>
          (TDelegate<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>
           *__return_storage_ptr__,FAudioLoudnessMeter *param_1,<lambda_3> *param_2)

{
  undefined1 *puVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  IAudioAnalyzerRackUnit *pIVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TWeakPtr<AudioWidgets::IAudioAnalyzerRackUnit,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TWeakPtr<AudioWidgets::IAudioAnalyzerRackUnit,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  bVar6 = false;
  bVar5 = false;
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar7 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puVar1);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<AudioWidgets::IAudioAnalyzerRackUnit,1>::AsWeak
                       ((TSharedFromThis<AudioWidgets::IAudioAnalyzerRackUnit,1> *)
                        &param_1->_padding_,&local_48);
    pIVar4 = pTVar8->Object;
    pTVar10 = (pTVar8->WeakReferenceCount).ReferenceController;
    (pTVar8->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar8->Object = (IAudioAnalyzerRackUnit *)0x0;
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_M__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &TBaseSPLambdaDelegateInstance<1,TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar7[3] = pIVar4;
    puVar7[4] = pTVar10;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = true;
    puVar7[5] = param_2->__this;
  }
  if ((bVar5) && (pTVar10 != (TReferenceControllerBase<1> *)0x0)) {
    LOCK();
    paVar2 = &pTVar10->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar10->_padding_ + 8))(pTVar10,1);
    }
  }
  if ((bVar6) &&
     (local_48.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)) {
    LOCK();
    paVar2 = &(local_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)((local_48.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_48.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// CreateSPLambda<SAudioSpectrumPlot,`SAudioSpectrumPlot::BuildFrequencyAxisPixelBucketModeSubMenu'::__l4::<lambda_1>_> @ 14d899fd0

TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateSPLambda<SAudioSpectrumPlot,_SAudioSpectrumPlot::BuildFrequencyAxisPixelBucketModeSubMenu_::__l4::<lambda_1>_>
          (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          SAudioSpectrumPlot *param_1,<lambda_1> *param_2)

{
  undefined1 *puVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  SWidget *pSVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  bool bVar9;
  undefined8 *puVar10;
  TWeakPtr<SWidget,1> *pTVar11;
  ulong64 uVar12;
  TReferenceControllerBase<1> *pTVar13;
  uint uStackX_c;
  TWeakPtr<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  bVar9 = false;
  bVar8 = false;
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar10 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)puVar1);
  if (puVar10 == (undefined8 *)0x0) {
    pTVar13 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar11 = TSharedFromThis<SWidget,1>::AsWeak
                        ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    pSVar4 = pTVar11->Object;
    pTVar13 = (pTVar11->WeakReferenceCount).ReferenceController;
    (pTVar11->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar11->Object = (SWidget *)0x0;
    *puVar10 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar12;
    *puVar10 = &TBaseSPLambdaDelegateInstance<1,void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioSpectrumPlot::BuildFrequencyAxisPixelBucketModeSubMenu'::`4'::<lambda_1>_>
                ::_vftable_;
    puVar10[3] = pSVar4;
    puVar10[4] = pTVar13;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar5 = *(undefined4 *)((longlong)&param_2->__this + 4);
    uVar6 = *(undefined4 *)&param_2->EnumValue;
    uVar7 = *(undefined4 *)&param_2->field_0xc;
    bVar9 = true;
    bVar8 = true;
    *(undefined4 *)(puVar10 + 5) = *(undefined4 *)&param_2->__this;
    *(undefined4 *)((longlong)puVar10 + 0x2c) = uVar5;
    *(undefined4 *)(puVar10 + 6) = uVar6;
    *(undefined4 *)((longlong)puVar10 + 0x34) = uVar7;
  }
  if ((bVar8) && (pTVar13 != (TReferenceControllerBase<1> *)0x0)) {
    LOCK();
    paVar2 = &pTVar13->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar13->_padding_ + 8))(pTVar13,1);
    }
  }
  if ((bVar9) &&
     (local_48.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)) {
    LOCK();
    paVar2 = &(local_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)((local_48.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_48.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// CreateSPLambda<SAudioSpectrumPlot,`SAudioSpectrumPlot::BuildFrequencyAxisScaleSubMenu'::__l4::<lambda_1>_> @ 14d89a110

TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateSPLambda<SAudioSpectrumPlot,_SAudioSpectrumPlot::BuildFrequencyAxisScaleSubMenu_::__l4::<lambda_1>_>
          (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          SAudioSpectrumPlot *param_1,<lambda_1> *param_2)

{
  undefined1 *puVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  SWidget *pSVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  bool bVar9;
  undefined8 *puVar10;
  TWeakPtr<SWidget,1> *pTVar11;
  ulong64 uVar12;
  TReferenceControllerBase<1> *pTVar13;
  uint uStackX_c;
  TWeakPtr<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  bVar9 = false;
  bVar8 = false;
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar10 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)puVar1);
  if (puVar10 == (undefined8 *)0x0) {
    pTVar13 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar11 = TSharedFromThis<SWidget,1>::AsWeak
                        ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    pSVar4 = pTVar11->Object;
    pTVar13 = (pTVar11->WeakReferenceCount).ReferenceController;
    (pTVar11->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar11->Object = (SWidget *)0x0;
    *puVar10 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar12;
    *puVar10 = &TBaseSPLambdaDelegateInstance<1,void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioSpectrumPlot::BuildFrequencyAxisScaleSubMenu'::`4'::<lambda_1>_>
                ::_vftable_;
    puVar10[3] = pSVar4;
    puVar10[4] = pTVar13;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar5 = *(undefined4 *)((longlong)&param_2->__this + 4);
    uVar6 = *(undefined4 *)&param_2->EnumValue;
    uVar7 = *(undefined4 *)&param_2->field_0xc;
    bVar9 = true;
    bVar8 = true;
    *(undefined4 *)(puVar10 + 5) = *(undefined4 *)&param_2->__this;
    *(undefined4 *)((longlong)puVar10 + 0x2c) = uVar5;
    *(undefined4 *)(puVar10 + 6) = uVar6;
    *(undefined4 *)((longlong)puVar10 + 0x34) = uVar7;
  }
  if ((bVar8) && (pTVar13 != (TReferenceControllerBase<1> *)0x0)) {
    LOCK();
    paVar2 = &pTVar13->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar13->_padding_ + 8))(pTVar13,1);
    }
  }
  if ((bVar9) &&
     (local_48.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)) {
    LOCK();
    paVar2 = &(local_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)((local_48.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_48.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// CreateSPLambda<SAudioSpectrumPlot,`SAudioSpectrumPlot::BuildTiltSpectrumSubMenu'::__l4::<lambda_1>_> @ 14d89a250

TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateSPLambda<SAudioSpectrumPlot,_SAudioSpectrumPlot::BuildTiltSpectrumSubMenu_::__l4::<lambda_1>_>
          (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          SAudioSpectrumPlot *param_1,<lambda_1> *param_2)

{
  undefined1 *puVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  SWidget *pSVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  bool bVar8;
  bool bVar9;
  undefined8 *puVar10;
  TWeakPtr<SWidget,1> *pTVar11;
  ulong64 uVar12;
  TReferenceControllerBase<1> *pTVar13;
  uint uStackX_c;
  TWeakPtr<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  bVar9 = false;
  bVar8 = false;
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar10 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)puVar1);
  if (puVar10 == (undefined8 *)0x0) {
    pTVar13 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar11 = TSharedFromThis<SWidget,1>::AsWeak
                        ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    pSVar4 = pTVar11->Object;
    pTVar13 = (pTVar11->WeakReferenceCount).ReferenceController;
    (pTVar11->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar11->Object = (SWidget *)0x0;
    *puVar10 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar12;
    *puVar10 = &TBaseSPLambdaDelegateInstance<1,void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioSpectrumPlot::BuildTiltSpectrumSubMenu'::`4'::<lambda_1>_>
                ::_vftable_;
    puVar10[3] = pSVar4;
    puVar10[4] = pTVar13;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar5 = *(undefined4 *)((longlong)&param_2->__this + 4);
    uVar6 = *(undefined4 *)&param_2->EnumValue;
    fVar7 = param_2->TiltExponentValue;
    bVar9 = true;
    bVar8 = true;
    *(undefined4 *)(puVar10 + 5) = *(undefined4 *)&param_2->__this;
    *(undefined4 *)((longlong)puVar10 + 0x2c) = uVar5;
    *(undefined4 *)(puVar10 + 6) = uVar6;
    *(float *)((longlong)puVar10 + 0x34) = fVar7;
  }
  if ((bVar8) && (pTVar13 != (TReferenceControllerBase<1> *)0x0)) {
    LOCK();
    paVar2 = &pTVar13->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar13->_padding_ + 8))(pTVar13,1);
    }
  }
  if ((bVar9) &&
     (local_48.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)) {
    LOCK();
    paVar2 = &(local_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)((local_48.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_48.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// CreateSPLambda<SAudioSpectrumPlot,`SAudioSpectrumPlot::BuildDefaultContextMenu'::__l14::<lambda_1>_> @ 14d89a390

TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateSPLambda<SAudioSpectrumPlot,_SAudioSpectrumPlot::BuildDefaultContextMenu_::__l14::<lambda_1>_>
          (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          SAudioSpectrumPlot *param_1,<lambda_1> *param_2)

{
  undefined1 *puVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  SWidget *pSVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TWeakPtr<SWidget,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TWeakPtr<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  bVar6 = false;
  bVar5 = false;
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar7 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puVar1);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsWeak
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    pSVar4 = pTVar8->Object;
    pTVar10 = (pTVar8->WeakReferenceCount).ReferenceController;
    (pTVar8->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar8->Object = (SWidget *)0x0;
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &TBaseSPLambdaDelegateInstance<1,void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioSpectrumPlot::BuildDefaultContextMenu'::`14'::<lambda_1>_>
               ::_vftable_;
    puVar7[3] = pSVar4;
    puVar7[4] = pTVar10;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = true;
    puVar7[5] = param_2->__this;
  }
  if ((bVar5) && (pTVar10 != (TReferenceControllerBase<1> *)0x0)) {
    LOCK();
    paVar2 = &pTVar10->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar10->_padding_ + 8))(pTVar10,1);
    }
  }
  if ((bVar6) &&
     (local_48.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)) {
    LOCK();
    paVar2 = &(local_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)((local_48.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_48.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// CreateSPLambda<SAudioSpectrumPlot,`SAudioSpectrumPlot::BuildFrequencyAxisPixelBucketModeSubMenu'::__l4::<lambda_2>_> @ 14d89a4d0

TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
CreateSPLambda<SAudioSpectrumPlot,_SAudioSpectrumPlot::BuildFrequencyAxisPixelBucketModeSubMenu_::__l4::<lambda_2>_>
          (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          SAudioSpectrumPlot *param_1,<lambda_2> *param_2)

{
  undefined1 *puVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  SWidget *pSVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  bool bVar9;
  undefined8 *puVar10;
  TWeakPtr<SWidget,1> *pTVar11;
  ulong64 uVar12;
  TReferenceControllerBase<1> *pTVar13;
  uint uStackX_c;
  TWeakPtr<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  bVar9 = false;
  bVar8 = false;
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar10 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)puVar1);
  if (puVar10 == (undefined8 *)0x0) {
    pTVar13 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar11 = TSharedFromThis<SWidget,1>::AsWeak
                        ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    pSVar4 = pTVar11->Object;
    pTVar13 = (pTVar11->WeakReferenceCount).ReferenceController;
    (pTVar11->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar11->Object = (SWidget *)0x0;
    *puVar10 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar12;
    *puVar10 = &TBaseSPLambdaDelegateInstance<1,bool___cdecl(void),FDefaultDelegateUserPolicy,`SAudioSpectrumPlot::BuildFrequencyAxisPixelBucketModeSubMenu'::`4'::<lambda_2>_>
                ::_vftable_;
    puVar10[3] = pSVar4;
    puVar10[4] = pTVar13;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar5 = *(undefined4 *)((longlong)&param_2->__this + 4);
    uVar6 = *(undefined4 *)&param_2->EnumValue;
    uVar7 = *(undefined4 *)&param_2->field_0xc;
    bVar9 = true;
    bVar8 = true;
    *(undefined4 *)(puVar10 + 5) = *(undefined4 *)&param_2->__this;
    *(undefined4 *)((longlong)puVar10 + 0x2c) = uVar5;
    *(undefined4 *)(puVar10 + 6) = uVar6;
    *(undefined4 *)((longlong)puVar10 + 0x34) = uVar7;
  }
  if ((bVar8) && (pTVar13 != (TReferenceControllerBase<1> *)0x0)) {
    LOCK();
    paVar2 = &pTVar13->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar13->_padding_ + 8))(pTVar13,1);
    }
  }
  if ((bVar9) &&
     (local_48.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)) {
    LOCK();
    paVar2 = &(local_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)((local_48.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_48.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// CreateSPLambda<SAudioSpectrumPlot,`SAudioSpectrumPlot::BuildFrequencyAxisScaleSubMenu'::__l4::<lambda_2>_> @ 14d89a610

TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
CreateSPLambda<SAudioSpectrumPlot,_SAudioSpectrumPlot::BuildFrequencyAxisScaleSubMenu_::__l4::<lambda_2>_>
          (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          SAudioSpectrumPlot *param_1,<lambda_2> *param_2)

{
  undefined1 *puVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  SWidget *pSVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  bool bVar9;
  undefined8 *puVar10;
  TWeakPtr<SWidget,1> *pTVar11;
  ulong64 uVar12;
  TReferenceControllerBase<1> *pTVar13;
  uint uStackX_c;
  TWeakPtr<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  bVar9 = false;
  bVar8 = false;
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar10 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)puVar1);
  if (puVar10 == (undefined8 *)0x0) {
    pTVar13 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar11 = TSharedFromThis<SWidget,1>::AsWeak
                        ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    pSVar4 = pTVar11->Object;
    pTVar13 = (pTVar11->WeakReferenceCount).ReferenceController;
    (pTVar11->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar11->Object = (SWidget *)0x0;
    *puVar10 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar12;
    *puVar10 = &TBaseSPLambdaDelegateInstance<1,bool___cdecl(void),FDefaultDelegateUserPolicy,`SAudioSpectrumPlot::BuildFrequencyAxisScaleSubMenu'::`4'::<lambda_2>_>
                ::_vftable_;
    puVar10[3] = pSVar4;
    puVar10[4] = pTVar13;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar5 = *(undefined4 *)((longlong)&param_2->__this + 4);
    uVar6 = *(undefined4 *)&param_2->EnumValue;
    uVar7 = *(undefined4 *)&param_2->field_0xc;
    bVar9 = true;
    bVar8 = true;
    *(undefined4 *)(puVar10 + 5) = *(undefined4 *)&param_2->__this;
    *(undefined4 *)((longlong)puVar10 + 0x2c) = uVar5;
    *(undefined4 *)(puVar10 + 6) = uVar6;
    *(undefined4 *)((longlong)puVar10 + 0x34) = uVar7;
  }
  if ((bVar8) && (pTVar13 != (TReferenceControllerBase<1> *)0x0)) {
    LOCK();
    paVar2 = &pTVar13->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar13->_padding_ + 8))(pTVar13,1);
    }
  }
  if ((bVar9) &&
     (local_48.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)) {
    LOCK();
    paVar2 = &(local_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)((local_48.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_48.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// CreateSPLambda<SAudioSpectrumPlot,`SAudioSpectrumPlot::BuildTiltSpectrumSubMenu'::__l4::<lambda_2>_> @ 14d89a750

TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
CreateSPLambda<SAudioSpectrumPlot,_SAudioSpectrumPlot::BuildTiltSpectrumSubMenu_::__l4::<lambda_2>_>
          (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          SAudioSpectrumPlot *param_1,<lambda_2> *param_2)

{
  undefined1 *puVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  SWidget *pSVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  bool bVar8;
  bool bVar9;
  undefined8 *puVar10;
  TWeakPtr<SWidget,1> *pTVar11;
  ulong64 uVar12;
  TReferenceControllerBase<1> *pTVar13;
  uint uStackX_c;
  TWeakPtr<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  bVar9 = false;
  bVar8 = false;
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar10 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)puVar1);
  if (puVar10 == (undefined8 *)0x0) {
    pTVar13 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar11 = TSharedFromThis<SWidget,1>::AsWeak
                        ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    pSVar4 = pTVar11->Object;
    pTVar13 = (pTVar11->WeakReferenceCount).ReferenceController;
    (pTVar11->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar11->Object = (SWidget *)0x0;
    *puVar10 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar12;
    *puVar10 = &TBaseSPLambdaDelegateInstance<1,bool___cdecl(void),FDefaultDelegateUserPolicy,`SAudioSpectrumPlot::BuildTiltSpectrumSubMenu'::`4'::<lambda_2>_>
                ::_vftable_;
    puVar10[3] = pSVar4;
    puVar10[4] = pTVar13;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar5 = *(undefined4 *)((longlong)&param_2->__this + 4);
    fVar6 = param_2->TiltExponentValue;
    uVar7 = *(undefined4 *)&param_2->field_0xc;
    bVar9 = true;
    bVar8 = true;
    *(undefined4 *)(puVar10 + 5) = *(undefined4 *)&param_2->__this;
    *(undefined4 *)((longlong)puVar10 + 0x2c) = uVar5;
    *(float *)(puVar10 + 6) = fVar6;
    *(undefined4 *)((longlong)puVar10 + 0x34) = uVar7;
  }
  if ((bVar8) && (pTVar13 != (TReferenceControllerBase<1> *)0x0)) {
    LOCK();
    paVar2 = &pTVar13->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar13->_padding_ + 8))(pTVar13,1);
    }
  }
  if ((bVar9) &&
     (local_48.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)) {
    LOCK();
    paVar2 = &(local_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)((local_48.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_48.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// CreateSPLambda<SAudioSpectrumPlot,`SAudioSpectrumPlot::BuildDefaultContextMenu'::__l14::<lambda_2>_> @ 14d89a890

TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
CreateSPLambda<SAudioSpectrumPlot,_SAudioSpectrumPlot::BuildDefaultContextMenu_::__l14::<lambda_2>_>
          (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          SAudioSpectrumPlot *param_1,<lambda_2> *param_2)

{
  undefined1 *puVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  SWidget *pSVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TWeakPtr<SWidget,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TWeakPtr<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  bVar6 = false;
  bVar5 = false;
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar7 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puVar1);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsWeak
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    pSVar4 = pTVar8->Object;
    pTVar10 = (pTVar8->WeakReferenceCount).ReferenceController;
    (pTVar8->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar8->Object = (SWidget *)0x0;
    *puVar7 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &TBaseSPLambdaDelegateInstance<1,bool___cdecl(void),FDefaultDelegateUserPolicy,`SAudioSpectrumPlot::BuildDefaultContextMenu'::`14'::<lambda_2>_>
               ::_vftable_;
    puVar7[3] = pSVar4;
    puVar7[4] = pTVar10;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = true;
    puVar7[5] = param_2->__this;
  }
  if ((bVar5) && (pTVar10 != (TReferenceControllerBase<1> *)0x0)) {
    LOCK();
    paVar2 = &pTVar10->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar10->_padding_ + 8))(pTVar10,1);
    }
  }
  if ((bVar6) &&
     (local_48.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)) {
    LOCK();
    paVar2 = &(local_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)((local_48.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_48.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// CreateSPLambda<SAudioSpectrumPlot,`SAudioSpectrumPlot::BuildDefaultContextMenu'::__l17::<lambda_3>_> @ 14d89a9d0

TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateSPLambda<SAudioSpectrumPlot,_SAudioSpectrumPlot::BuildDefaultContextMenu_::__l17::<lambda_3>_>
          (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          SAudioSpectrumPlot *param_1,<lambda_3> *param_2)

{
  undefined1 *puVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  SWidget *pSVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TWeakPtr<SWidget,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TWeakPtr<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  bVar6 = false;
  bVar5 = false;
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar7 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puVar1);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsWeak
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    pSVar4 = pTVar8->Object;
    pTVar10 = (pTVar8->WeakReferenceCount).ReferenceController;
    (pTVar8->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar8->Object = (SWidget *)0x0;
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &TBaseSPLambdaDelegateInstance<1,void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioSpectrumPlot::BuildDefaultContextMenu'::`17'::<lambda_3>_>
               ::_vftable_;
    puVar7[3] = pSVar4;
    puVar7[4] = pTVar10;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = true;
    puVar7[5] = param_2->__this;
  }
  if ((bVar5) && (pTVar10 != (TReferenceControllerBase<1> *)0x0)) {
    LOCK();
    paVar2 = &pTVar10->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar10->_padding_ + 8))(pTVar10,1);
    }
  }
  if ((bVar6) &&
     (local_48.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)) {
    LOCK();
    paVar2 = &(local_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)((local_48.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_48.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// CreateSPLambda<SAudioSpectrumPlot,`SAudioSpectrumPlot::BuildDefaultContextMenu'::__l17::<lambda_4>_> @ 14d89ab10

TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
CreateSPLambda<SAudioSpectrumPlot,_SAudioSpectrumPlot::BuildDefaultContextMenu_::__l17::<lambda_4>_>
          (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          SAudioSpectrumPlot *param_1,<lambda_4> *param_2)

{
  undefined1 *puVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  SWidget *pSVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TWeakPtr<SWidget,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TWeakPtr<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  bVar6 = false;
  bVar5 = false;
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar7 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puVar1);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsWeak
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    pSVar4 = pTVar8->Object;
    pTVar10 = (pTVar8->WeakReferenceCount).ReferenceController;
    (pTVar8->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar8->Object = (SWidget *)0x0;
    *puVar7 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &TBaseSPLambdaDelegateInstance<1,bool___cdecl(void),FDefaultDelegateUserPolicy,`SAudioSpectrumPlot::BuildDefaultContextMenu'::`17'::<lambda_4>_>
               ::_vftable_;
    puVar7[3] = pSVar4;
    puVar7[4] = pTVar10;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = true;
    puVar7[5] = param_2->__this;
  }
  if ((bVar5) && (pTVar10 != (TReferenceControllerBase<1> *)0x0)) {
    LOCK();
    paVar2 = &pTVar10->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar10->_padding_ + 8))(pTVar10,1);
    }
  }
  if ((bVar6) &&
     (local_48.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)) {
    LOCK();
    paVar2 = &(local_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)((local_48.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_48.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// DestructItems<SampledSequenceDrawingUtils::FGridData,int> @ 14d89aff0

void __cdecl
DestructItems<SampledSequenceDrawingUtils::FGridData,int>(FGridData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->PositionRatios).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->DrawCoordinates).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<SSampledSequenceValueGridOverlay::FGridLabelData,int> @ 14d89b040

void __cdecl
DestructItems<SSampledSequenceValueGridOverlay::FGridLabelData,int>
          (FGridLabelData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->LabelCoordinates).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    DestructItems<FText,int>
              ((FText *)(param_1->LabelTexts).AllocatorInstance.Data,(param_1->LabelTexts).ArrayNum)
    ;
    pFVar1 = (param_1->LabelTexts).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,int> @ 14d89b0a0

void __cdecl
DestructItems<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,int>
          (TSharedPtr<EAudioOscilloscopeTriggerMode,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,int> @ 14d89b0e0

void __cdecl
DestructItems<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,int>
          (TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *param_1,
          int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FAudioSpectrogramViewport::FHistoryFrameData,unsigned_int> @ 14d89b120

void __cdecl
DestructItems<FAudioSpectrogramViewport::FHistoryFrameData,unsigned_int>
          (FHistoryFrameData *param_1,uint param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->SoundLevelsMipChain;
    do {
      pFVar1 = (((TArray<FColor,TSizedDefaultAllocator<32>_> *)((longlong)(pTVar2 + 1) + 8))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<float,TSizedDefaultAllocator<32>_> *)((longlong)(pTVar2 + 3) + 8);
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return;
}

// FindByPredicate<`FAudioSpectrumPlotGridAndLabelDrawingHelper::IsOverlappingPreviouslyDrawnLabel'::__l2::<lambda_1>_> @ 14d89c760

FSlateRect * __thiscall
TArray<FSlateRect,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FAudioSpectrumPlotGridAndLabelDrawingHelper::IsOverlappingPreviouslyDrawnLabel_::__l2::<lambda_1>_>
          (TArray<FSlateRect,TSizedDefaultAllocator<32>_> *this,<lambda_1> param_1)

{
  bool bVar1;
  FSlateRect *pFVar2;
  FSlateRect *pFVar3;
  FSlateRect *local_res10 [3];
  
  pFVar2 = (FSlateRect *)(this->AllocatorInstance).Data;
  pFVar3 = pFVar2 + this->ArrayNum;
  local_res10[0] = param_1.LabelRect;
  while( true ) {
    if (pFVar2 == pFVar3) {
      return (FSlateRect *)0x0;
    }
    bVar1 = `FAudioSpectrumPlotGridAndLabelDrawingHelper::IsOverlappingPreviouslyDrawnLabel'::__l2::
            <lambda_1>::operator()(local_res10,pFVar2);
    if (bVar1) break;
    pFVar2 = pFVar2 + 1;
  }
  return pFVar2;
}

// FindLastByPredicate<`SAudioSpectrumPlot::DrawCrosshairAndAxisLabels'::__l8::<lambda_1>_> @ 14d89cb40

int __thiscall
TArrayView<UE::Math::TVector2<float>_const_,int>::
FindLastByPredicate<_SAudioSpectrumPlot::DrawCrosshairAndAxisLabels_::__l8::<lambda_1>_>
          (TArrayView<UE::Math::TVector2<float>_const_,int> *this,<lambda_1> param_1,int param_2)

{
  TVector2<float>_u_0 *pTVar1;
  TVector2<float> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TVector2<float> *pTVar6;
  float local_18 [4];
  
  local_18[0] = param_1.CrosshairPosX;
  if (((param_2 < 0) || (this->ArrayNum < param_2)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= this->Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x24b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  pTVar2 = this->DataPtr;
  pTVar6 = pTVar2 + param_2;
  do {
    if (pTVar6 == pTVar2) {
      return -1;
    }
    pTVar1 = &pTVar6[-1].field0_0x0;
    pTVar6 = pTVar6 + -1;
    bVar4 = `SAudioSpectrumPlot::DrawCrosshairAndAxisLabels'::__l8::<lambda_1>::operator()
                      (local_18,(TVector2<float>)pTVar1->_s_0);
  } while (!bVar4);
  return (int)((longlong)pTVar6 - (longlong)pTVar2 >> 3);
}

// GetTypeHash<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> @ 14d89d090

uint __cdecl
GetTypeHash<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>
          (TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)((ulonglong)param_1->Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->Object >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// GetTypeHash<enum_EAudioOscilloscopeTriggerMode_const_,1> @ 14d89d0c0

uint __cdecl
GetTypeHash<enum_EAudioOscilloscopeTriggerMode_const_,1>
          (TSharedPtr<EAudioOscilloscopeTriggerMode_const_,1> *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)((ulonglong)param_1->Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->Object >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// GroupInterleavedSampledTSIntoMinMaxBins<float> @ 14d89d1e0

void __cdecl
SampledSequenceDrawingUtils::GroupInterleavedSampledTSIntoMinMaxBins<float>
          (TArray<TRange<float>,TSizedDefaultAllocator<32>_> *param_1,uint param_2,float *param_3,
          uint param_4,uint param_5,ushort param_6,float param_7,float param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = __real_3ff0000000000000 / (double)((float)param_4 / ((float)param_5 * (float)param_6));
  dVar2 = (double)param_7 * dVar3;
  dVar1 = __real_3ff0000000000000;
  if (0.0 <= param_8) {
    dVar1 = (double)param_8 * dVar3;
    if (__real_3ff0000000000000 <= dVar1) {
      dVar1 = __real_3ff0000000000000;
    }
    if (dVar1 <= dVar2) {
      dVar1 = dVar2;
    }
  }
  GroupInterleavedSamplesIntoMinMaxBins<float>(param_1,param_2,param_3,param_4,param_6,dVar2,dVar1);
  return;
}

// GroupInterleavedSamplesIntoMinMaxBins<float> @ 14d89d270

void __cdecl
SampledSequenceDrawingUtils::GroupInterleavedSamplesIntoMinMaxBins<float>
          (TArray<TRange<float>,TSizedDefaultAllocator<32>_> *param_1,uint param_2,float *param_3,
          uint param_4,ushort param_5,double param_6,double param_7)

{
  int *piVar1;
  float fVar2;
  code *pcVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  ushort uVar19;
  uint uVar20;
  float fVar21;
  uint local_res10;
  undefined4 local_b0;
  uint uStack_a8;
  
  if (((param_6 < 0.0) || (param_7 <= param_6)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartRatio >= 0.f && StartRatio < EndRatio",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Public\\SampledSequenceDrawingUtils.h"
                          ,0x1f,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((__real_3ff0000000000000 < param_7) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("EndRatio <= 1.f",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Public\\SampledSequenceDrawingUtils.h"
                          ,0x20,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar18 = (uint)param_5;
  piVar1 = &param_1->ArrayNum;
  iVar11 = *piVar1;
  uVar16 = uVar18 * param_2;
  if (iVar11 < (int)uVar16) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,uVar16 - iVar11,&param_1->AllocatorInstance,piVar1,&param_1->ArrayMax);
  }
  else {
    if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
    }
    if ((int)uVar16 < iVar11) {
      uVar20 = iVar11 - uVar16;
      if (((int)(uVar20 | uVar16) < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar20 != 0) {
        pFVar14 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar16 * 0x10;
        iVar11 = (*piVar1 - uVar20) - uVar16;
        if (iVar11 != 0) {
          memmove(pFVar14,pFVar14 + (longlong)(int)uVar20 * 0x10,(longlong)iVar11 << 4);
        }
        *piVar1 = *piVar1 - uVar20;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,&param_1->AllocatorInstance,*piVar1,&param_1->ArrayMax);
      }
    }
  }
  fVar8 = __real_7f7fffff;
  fVar7 = __real_ff7fffff;
  local_res10 = 0;
  dVar4 = (double)((ulonglong)param_4 / (ulonglong)param_5) * param_6;
  uVar13 = (longlong)ROUND(dVar4 + dVar4 + __real_3fe0000000000000) >> 1;
  if (uVar16 != 0) {
    do {
      dVar4 = dVar4 + ((param_7 - param_6) * (double)((ulonglong)param_4 / (ulonglong)param_5)) /
                      (double)param_2;
      uVar20 = 0;
      if (param_5 != 0) {
        do {
          uVar9 = uStack_a8;
          uVar17 = (uint)uVar13;
          uVar15 = uVar13 & 0xffffffff;
          fVar5 = fVar7;
          fVar2 = fVar8;
          while (fVar6 = fVar2, uVar17 < (uint)(longlong)dVar4) {
            uVar17 = uVar18 * (int)uVar15 + uVar20;
            if ((param_4 <= uVar17) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("SampleIndex < TotalNumSamples",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Public\\SampledSequenceDrawingUtils.h"
                                    ,0x37,L""), bVar10)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            fVar2 = param_3[uVar17];
            uVar17 = (int)uVar15 + 1;
            uVar15 = (ulonglong)uVar17;
            fVar21 = fVar2;
            if (fVar2 <= fVar5) {
              fVar21 = fVar5;
            }
            fVar5 = fVar21;
            if (fVar6 <= fVar2) {
              fVar2 = fVar6;
            }
          }
          uVar17 = uVar20 + local_res10;
          local_b0 = CONCAT31(local_b0._1_3_,1);
          uStack_a8 = uStack_a8 & 0xffffff00;
          uVar12 = 0;
          if ((int)uVar17 < *piVar1) {
            uVar12 = ~uVar17 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar19 = (short)uVar20 + 1;
          uVar20 = (uint)uVar19;
          pFVar14 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar17 * 0x10;
          *(ulonglong *)pFVar14 = CONCAT44(fVar6,local_b0);
          *(ulonglong *)(pFVar14 + 8) = CONCAT44(fVar5,uVar9) & 0xffffffffffffff00;
        } while (uVar19 < param_5);
      }
      local_res10 = local_res10 + uVar18;
      uVar13 = (longlong)dVar4 & 0xffffffff;
    } while (local_res10 < uVar16);
  }
  return;
}

// HeapSortInternal<FName,int,FIdentityFunctor,TDereferenceWrapper<FName,`AudioWidgets::FAudioAnalyzerRack::FAudioAnalyzerRack'::__l6::<lambda_1>_>_> @ 14d89d670

void __cdecl
AlgoImpl::
HeapSortInternal<FName,int,FIdentityFunctor,TDereferenceWrapper<FName,_AudioWidgets::FAudioAnalyzerRack::FAudioAnalyzerRack_::__l6::<lambda_1>_>_>
          (FName *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FName,_public:___cdecl_AudioWidgets::FAudioAnalyzerRack::FAudioAnalyzerRack(AudioWidgets::FAudioAnalyzerRack::FRackConstructParams_const_&)_::_6_::<lambda_1>_>
          param_4)

{
  FName *pFVar1;
  FName *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar8 = iVar6 * 2 + 1;
  iVar9 = iVar8;
  iVar11 = iVar6;
  do {
    while (param_2 <= iVar8) {
LAB_14d89d772:
      if (iVar11 == 0) {
        iVar8 = param_2 + -1;
        lVar12 = (longlong)iVar8;
        if (0 < iVar8) {
          do {
            iVar9 = 0;
            FVar3 = *param_1;
            *param_1 = param_1[lVar12];
            param_1[lVar12] = FVar3;
            if (1 < iVar8) {
              do {
                iVar11 = iVar9 * 2;
                iVar6 = iVar11 + 1;
                if (iVar11 + 2 < iVar8) {
                  iVar10 = ::FName::Compare(param_1 + (iVar11 + 2),param_1 + iVar6);
                  if (iVar10 < 0) {
                    iVar6 = iVar11;
                  }
                  iVar6 = iVar6 + 1;
                }
                pFVar1 = param_1 + iVar6;
                pFVar2 = param_1 + iVar9;
                iVar9 = ::FName::Compare(pFVar2,pFVar1);
                if (-1 < iVar9) break;
                FVar3 = *pFVar2;
                *pFVar2 = *pFVar1;
                *pFVar1 = FVar3;
                iVar9 = iVar6;
              } while (iVar6 * 2 + 1 < iVar8);
            }
            iVar8 = iVar8 + -1;
            lVar12 = lVar12 + -1;
          } while (0 < lVar12);
        }
        return;
      }
      iVar6 = iVar11 + -1;
      iVar8 = iVar9 + -2;
      iVar9 = iVar8;
      iVar11 = iVar6;
    }
    iVar8 = iVar6 * 2;
    iVar10 = iVar8 + 1;
    if (iVar8 + 2 < param_2) {
      iVar7 = ::FName::Compare(param_1 + (iVar8 + 2),param_1 + iVar10);
      if (iVar7 < 0) {
        iVar10 = iVar8;
      }
      iVar10 = iVar10 + 1;
    }
    pFVar1 = param_1 + iVar10;
    pFVar2 = param_1 + iVar6;
    iVar8 = ::FName::Compare(pFVar2,pFVar1);
    if (-1 < iVar8) goto LAB_14d89d772;
    FVar3 = *pFVar2;
    *pFVar2 = *pFVar1;
    iVar8 = iVar10 * 2 + 1;
    *pFVar1 = FVar3;
    iVar6 = iVar10;
  } while( true );
}

// InternalConstructor<UAudioFrequencyRadialSlider> @ 14d89d850

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InternalConstructor<UAudioFrequencyRadialSlider>(FObjectInitializer *param_1)

{
  UAudioRadialSlider *this;
  FText *pFVar1;
  FText local_18;
  
  this = (UAudioRadialSlider *)param_1->Obj;
  if (this != (UAudioRadialSlider *)0x0) {
    UAudioRadialSlider::UAudioRadialSlider(this,param_1);
    this->_padding_ = (longlong)&UAudioFrequencyRadialSlider::_vftable__for__UVisual__;
    this->_padding_ =
         (longlong)&UAudioFrequencyRadialSlider::_vftable__for__INotifyFieldValueChanged__;
    pFVar1 = FText::FromString(&local_18,"Hz");
    UAudioRadialSlider::SetUnitsText(this,pFVar1);
    (this->OutputRange).field0_0x0._s_0.X = 20.0;
    (this->OutputRange).field0_0x0._s_0.Y = 20000.0;
  }
  return;
}

// InternalConstructor<UAudioFrequencySlider> @ 14d89d8d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InternalConstructor<UAudioFrequencySlider>(FObjectInitializer *param_1)

{
  UAudioSliderBase *this;
  FText *pFVar1;
  FText local_18;
  
  this = (UAudioSliderBase *)param_1->Obj;
  if (this != (UAudioSliderBase *)0x0) {
    UAudioSliderBase::UAudioSliderBase(this,param_1);
    this->_padding_ = (longlong)&UAudioFrequencySlider::_vftable__for__UVisual__;
    this->_padding_ = (longlong)&UAudioFrequencySlider::_vftable__for__INotifyFieldValueChanged__;
    this[1]._padding_ = 0x4034000000000000;
    this[1]._padding_ = 0x40d3880000000000;
    pFVar1 = FText::FromString(&local_18,"Hz");
    UAudioSliderBase::SetUnitsText(this,pFVar1);
  }
  return;
}

// InternalConstructor<UAudioMaterialButton> @ 14d89d950

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InternalConstructor<UAudioMaterialButton>(FObjectInitializer *param_1)

{
  UWidget *this;
  FObjectInitializer *pFVar1;
  FAudioWidgetsStyle *pFVar2;
  FName *pFVar3;
  FAudioMaterialButtonStyle *pFVar4;
  FName local_res8;
  
  this = (UWidget *)param_1->Obj;
  if (this != (UWidget *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    UWidget::UWidget(this,pFVar1);
    this->_padding_ = (longlong)&UAudioMaterialButton::_vftable__for__UVisual__;
    this->_padding_ = (longlong)&UAudioMaterialButton::_vftable__for__INotifyFieldValueChanged__;
    FAudioMaterialButtonStyle::FAudioMaterialButtonStyle((FAudioMaterialButtonStyle *)(this + 1));
    *(undefined8 *)&this[1].ToolTipWidgetDelegate.field_0x8 = 0;
    *(undefined8 *)&this[1].ToolTipWidgetDelegate.field_0x10 = 0;
    *(undefined8 *)&this[1].VisibilityDelegate = 0;
    this[1].VisibilityDelegate.field_0x8 = 0;
    *(undefined8 *)&this[1].VisibilityDelegate.field_0x10 = 0;
    this[1].RenderTransform.Translation.field0_0x0._s_0.X = 0.0;
    pFVar2 = FAudioWidgetsStyle::Get();
    pFVar3 = FName::FName(&local_res8,"AudioMaterialButton.Style");
    pFVar4 = (FAudioMaterialButtonStyle *)
             (**(code **)(*(longlong *)pFVar2 + 0xa0))
                       (pFVar2,FAudioMaterialButtonStyle::TypeName,*pFVar3,0,1);
    if ((pFVar4 == (FAudioMaterialButtonStyle *)0x0) &&
       (pFVar4 = &Default,
       *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0)) {
      _Init_thread_header(&_TSS0);
      if (_TSS0 == -1) {
        FAudioMaterialButtonStyle::FAudioMaterialButtonStyle(&Default);
        atexit(`FAudioMaterialButtonStyle::GetDefault'::__l2::
               _dynamic_atexit_destructor_for__Default__);
        _Init_thread_footer(&_TSS0);
      }
    }
    FAudioMaterialButtonStyle::operator=((FAudioMaterialButtonStyle *)(this + 1),pFVar4);
  }
  return;
}

// InternalConstructor<UAudioMaterialButtonWidgetStyle> @ 14d89da90

void __cdecl InternalConstructor<UAudioMaterialButtonWidgetStyle>(FObjectInitializer *param_1)

{
  USlateWidgetStyleContainerBase *this;
  
  this = (USlateWidgetStyleContainerBase *)param_1->Obj;
  if (this != (USlateWidgetStyleContainerBase *)0x0) {
    USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase(this,param_1);
    *(undefined ***)this = &UAudioMaterialButtonWidgetStyle::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UAudioMaterialButtonWidgetStyle::_vftable__for__ISlateWidgetStyleContainerInterface__;
    FAudioMaterialButtonStyle::FAudioMaterialButtonStyle((FAudioMaterialButtonStyle *)(this + 1));
    return;
  }
  return;
}

// InternalConstructor<UAudioMaterialEnvelope> @ 14d89dae0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InternalConstructor<UAudioMaterialEnvelope>(FObjectInitializer *param_1)

{
  UWidget *this;
  longlong lVar1;
  TObjectPtr<UPanelSlot>_u_0 TVar2;
  undefined8 uVar3;
  FObjectInitializer *pFVar4;
  FAudioWidgetsStyle *pFVar5;
  FName *pFVar6;
  FAudioMaterialEnvelopeStyle *pFVar7;
  FName local_res10;
  
  this = (UWidget *)param_1->Obj;
  if (this != (UWidget *)0x0) {
    pFVar4 = FObjectInitializer::Get();
    UWidget::UWidget(this,pFVar4);
    this->_padding_ = (longlong)&UAudioMaterialEnvelope::_vftable__for__UVisual__;
    this->_padding_ = (longlong)&UAudioMaterialEnvelope::_vftable__for__INotifyFieldValueChanged__;
    FAudioMaterialEnvelopeStyle::FAudioMaterialEnvelopeStyle
              ((FAudioMaterialEnvelopeStyle *)(this + 1));
    this[1].bIsEnabledDelegate.field_0x10 = 1;
    *(undefined4 *)&this[1].bIsEnabledDelegate.field_0x14 = 0x3f800000;
    *(undefined4 *)&this[1].ToolTipTextDelegate = 0x3f800000;
    *(undefined4 *)&this[1].ToolTipTextDelegate.field_0x4 = 0x3f800000;
    *(undefined4 *)&this[1].ToolTipTextDelegate.field_0x8 = 0x3f800000;
    *(undefined4 *)&this[1].ToolTipTextDelegate.field_0xc = 0x3f800000;
    *(undefined4 *)&this[1].ToolTipTextDelegate.field_0x10 = 0x3f800000;
    *(undefined4 *)&this[1].ToolTipTextDelegate.field_0x14 = 0x3f800000;
    *(undefined4 *)&this[1].ToolTipText.TextData.Reference = 0x3f800000;
    *(undefined8 *)&this[1].ToolTipText.Flags = 0;
    this[1].ToolTipWidget.field0_0x0.DebugPtr = (UWidget *)0x0;
    pFVar5 = FAudioWidgetsStyle::Get();
    pFVar6 = FName::FName(&local_res10,"AudioMaterialEnvelope.Style");
    pFVar7 = (FAudioMaterialEnvelopeStyle *)
             (**(code **)(*(longlong *)pFVar5 + 0xa0))
                       (pFVar5,FAudioMaterialEnvelopeStyle::TypeName,*pFVar6,0,1);
    if ((pFVar7 == (FAudioMaterialEnvelopeStyle *)0x0) &&
       (pFVar7 = &Default,
       *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0)) {
      _Init_thread_header(&_TSS0);
      if (_TSS0 == -1) {
        FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)&Default);
        Default._padding_ = (longlong)&___7FAudioMaterialEnvelopeStyle__6B_;
        Default.CurveColor = FLinearColor::White;
        Default._padding_ = 0x4380000043800000;
        Default._padding_ = 0;
        Default.OutlineColor = FLinearColor::Gray;
        Default.BackgroundColor = FLinearColor::Black;
        atexit(`FAudioMaterialEnvelopeStyle::GetDefault'::__l2::
               _dynamic_atexit_destructor_for__Default__);
        _Init_thread_footer(&_TSS0);
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UObject *)pFVar7->_padding_ != (UObject *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pFVar7->_padding_);
    }
    this[1]._padding_ = pFVar7->_padding_;
    this[1]._padding_ = pFVar7->_padding_;
    lVar1 = *(longlong *)((longlong)&(pFVar7->CurveColor).field0_0x0 + 8);
    this[1]._padding_ = *(longlong *)&(pFVar7->CurveColor).field0_0x0;
    this[1]._padding_ = lVar1;
    TVar2 = *(TObjectPtr<UPanelSlot>_u_0 *)((longlong)&(pFVar7->BackgroundColor).field0_0x0 + 8);
    this[1]._padding_ = *(longlong *)&(pFVar7->BackgroundColor).field0_0x0;
    this[1].Slot.field0_0x0 = TVar2;
    uVar3 = *(undefined8 *)((longlong)&(pFVar7->OutlineColor).field0_0x0 + 8);
    *(undefined8 *)&this[1].bIsEnabledDelegate = *(undefined8 *)&(pFVar7->OutlineColor).field0_0x0;
    *(undefined8 *)&this[1].bIsEnabledDelegate.field_0x8 = uVar3;
  }
  return;
}

// InternalConstructor<UAudioMaterialKnob> @ 14d89dd00

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InternalConstructor<UAudioMaterialKnob>(FObjectInitializer *param_1)

{
  UWidget *this;
  FAudioWidgetsStyle *pFVar1;
  FName *pFVar2;
  FAudioMaterialKnobStyle *pFVar3;
  FName local_res8;
  
  this = (UWidget *)param_1->Obj;
  if (this != (UWidget *)0x0) {
    UWidget::UWidget(this,param_1);
    this->_padding_ = (longlong)&UAudioMaterialKnob::_vftable__for__UVisual__;
    this->_padding_ = (longlong)&UAudioMaterialKnob::_vftable__for__INotifyFieldValueChanged__;
    FAudioMaterialKnobStyle::FAudioMaterialKnobStyle((FAudioMaterialKnobStyle *)(this + 1));
    *(undefined4 *)&this[2]._padding_ = 0x3f800000;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined2 *)((longlong)&this[2].Slot.field0_0x0 + 4) = 0;
    *(undefined8 *)&this[2].bIsEnabledDelegate.field_0x8 = 0;
    *(undefined8 *)&this[2].bIsEnabledDelegate.field_0x10 = 0;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0x3e4ccccd;
    *(undefined4 *)&this[2].Slot.field0_0x0 = 0x3d4ccccd;
    *(undefined4 *)&this[2].bIsEnabledDelegate = 0x3c23d70a;
    pFVar1 = FAudioWidgetsStyle::Get();
    pFVar2 = FName::FName(&local_res8,"AudioMaterialKnob.Style");
    pFVar3 = (FAudioMaterialKnobStyle *)
             (**(code **)(*(longlong *)pFVar1 + 0xa0))
                       (pFVar1,FAudioMaterialKnobStyle::TypeName,*pFVar2,0,1);
    if ((pFVar3 == (FAudioMaterialKnobStyle *)0x0) &&
       (pFVar3 = &Default,
       *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0)) {
      _Init_thread_header(&_TSS0);
      if (_TSS0 == -1) {
        FAudioMaterialKnobStyle::FAudioMaterialKnobStyle(&Default);
        atexit(`FAudioMaterialKnobStyle::GetDefault'::__l2::
               _dynamic_atexit_destructor_for__Default__);
        _Init_thread_footer(&_TSS0);
      }
    }
    FAudioMaterialKnobStyle::operator=((FAudioMaterialKnobStyle *)(this + 1),pFVar3);
  }
  return;
}

// InternalConstructor<UAudioMaterialKnobWidgetStyle> @ 14d89de60

void __cdecl InternalConstructor<UAudioMaterialKnobWidgetStyle>(FObjectInitializer *param_1)

{
  USlateWidgetStyleContainerBase *this;
  
  this = (USlateWidgetStyleContainerBase *)param_1->Obj;
  if (this != (USlateWidgetStyleContainerBase *)0x0) {
    USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase(this,param_1);
    *(undefined ***)this = &UAudioMaterialKnobWidgetStyle::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UAudioMaterialKnobWidgetStyle::_vftable__for__ISlateWidgetStyleContainerInterface__;
    FAudioMaterialKnobStyle::FAudioMaterialKnobStyle((FAudioMaterialKnobStyle *)(this + 1));
    return;
  }
  return;
}

// InternalConstructor<UAudioMaterialMeter> @ 14d89deb0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InternalConstructor<UAudioMaterialMeter>(FObjectInitializer *param_1)

{
  TWeakPtr<SWidget,1> *pTVar1;
  UWidget *this;
  SWidget *pSVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FObjectInitializer *pFVar6;
  FAudioWidgetsStyle *pFVar7;
  FName *pFVar8;
  FAudioMaterialMeterStyle *pFVar9;
  undefined1 auStack_28 [16];
  
  this = (UWidget *)param_1->Obj;
  if (this == (UWidget *)0x0) {
    return;
  }
  pFVar6 = FObjectInitializer::Get();
  UWidget::UWidget(this,pFVar6);
  this->_padding_ = (longlong)&UAudioMaterialMeter::_vftable__for__UVisual__;
  this->_padding_ = (longlong)&UAudioMaterialMeter::_vftable__for__INotifyFieldValueChanged__;
  FAudioMaterialMeterStyle::FAudioMaterialMeterStyle((FAudioMaterialMeterStyle *)(this + 1));
  pTVar1 = &this[1].MyWidget;
  this[1].FlowDirectionPreference = Inherit;
  *(undefined2 *)&this[1].field_0xf9 = 0;
  this[1].Cursor = '\0';
  this[1].Clipping = Inherit;
  this[1].Visibility = Visible;
  this[1].PixelSnapping = Inherit;
  this[1].field_0xff = 0;
  *(undefined8 *)&this[1].RenderOpacity = 0;
  this[1].AccessibleWidgetData.field0_0x0.DebugPtr = (USlateAccessibleWidgetData *)0x0;
  this[1].Navigation.field0_0x0.DebugPtr = (UWidgetNavigation *)0x0;
  this[1].WidgetGeneratedByClass.WeakPtr = (FWeakObjectPtr)0x0;
  pTVar1->Object = (SWidget *)0x0;
  this[1].MyWidget.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined1 *)((longlong)&this[1].RenderTransformPivot.field0_0x0 + 8) = 1;
  pFVar7 = FAudioWidgetsStyle::Get();
  pFVar8 = FName::FName((FName *)&stack0x00000008,"AudioMaterialMeter.Style");
  pFVar9 = (FAudioMaterialMeterStyle *)
           (**(code **)(*(longlong *)pFVar7 + 0xa0))
                     (pFVar7,FAudioMaterialMeterStyle::TypeName,*pFVar8,0,1);
  if ((pFVar9 == (FAudioMaterialMeterStyle *)0x0) &&
     (pFVar9 = &Default,
     *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
             0x9d4c) < _TSS0)) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      FAudioMaterialMeterStyle::FAudioMaterialMeterStyle(&Default);
      atexit(`FAudioMaterialMeterStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__
            );
      _Init_thread_footer(&_TSS0);
    }
  }
  FAudioMaterialMeterStyle::operator=((FAudioMaterialMeterStyle *)(this + 1),pFVar9);
  auStack_28._8_4_ = 0;
  auStack_28._0_4_ = 0xc0c00000;
  auStack_28._4_4_ = 0xc0400000;
  if ((pTVar1->Object <= (SWidget *)auStack_28) &&
     (auStack_28 <
      (undefined1 *)
      ((longlong)&pTVar1->Object->_padding_ +
      (longlong)*(int *)((longlong)&this[1].MyWidget.WeakReferenceCount.ReferenceController + 4) *
      0xc))) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)&this[1].MyWidget.WeakReferenceCount.ReferenceController;
  if (iVar5 == *(int *)((longlong)&this[1].MyWidget.WeakReferenceCount.ReferenceController + 4)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,(ForAnyElementType *)pTVar1,
                       (int *)((longlong)&this[1].MyWidget.WeakReferenceCount.ReferenceController +
                              4));
  }
  *(int *)&this[1].MyWidget.WeakReferenceCount.ReferenceController = iVar5 + 1;
  pSVar2 = pTVar1->Object;
  *(ulonglong *)((longlong)&pSVar2->_padding_ + (longlong)iVar5 * 0xc) =
       CONCAT44(auStack_28._4_4_,auStack_28._0_4_);
  *(undefined4 *)((longlong)&pSVar2->_padding_ + (longlong)iVar5 * 0xc) = auStack_28._8_4_;
  return;
}

// InternalConstructor<UAudioMaterialMeterWidgetStyle> @ 14d89ded0

void __cdecl InternalConstructor<UAudioMaterialMeterWidgetStyle>(FObjectInitializer *param_1)

{
  USlateWidgetStyleContainerBase *this;
  
  this = (USlateWidgetStyleContainerBase *)param_1->Obj;
  if (this != (USlateWidgetStyleContainerBase *)0x0) {
    USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase(this,param_1);
    *(undefined ***)this = &UAudioMaterialMeterWidgetStyle::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UAudioMaterialMeterWidgetStyle::_vftable__for__ISlateWidgetStyleContainerInterface__;
    FAudioMaterialMeterStyle::FAudioMaterialMeterStyle((FAudioMaterialMeterStyle *)(this + 1));
    return;
  }
  return;
}

// InternalConstructor<UAudioMaterialSlider> @ 14d89df20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InternalConstructor<UAudioMaterialSlider>(FObjectInitializer *param_1)

{
  UWidget *this;
  UWidget *pUVar1;
  FAudioWidgetsStyle *pFVar2;
  FName *pFVar3;
  FAudioMaterialSliderStyle *pFVar4;
  FName local_res8;
  
  this = (UWidget *)param_1->Obj;
  if (this != (UWidget *)0x0) {
    UWidget::UWidget(this,param_1);
    this->_padding_ = (longlong)&UAudioMaterialSlider::_vftable__for__UVisual__;
    this->_padding_ = (longlong)&UAudioMaterialSlider::_vftable__for__INotifyFieldValueChanged__;
    FAudioMaterialSliderStyle::FAudioMaterialSliderStyle((FAudioMaterialSliderStyle *)(this + 1));
    *(undefined4 *)&this[1].PostWidgetStateChanged.field_0x10 = 0x3f800000;
    this[1].MyWidgetStateBitfield.BinaryStates = 0;
    *(undefined8 *)&this[1].PostWidgetStateChanged = 0;
    *(undefined8 *)&this[1].PostWidgetStateChanged.field_0x8 = 0;
    this[1].PostWidgetStateChanged.field_0x14 = 0;
    *(undefined2 *)&this[1].NativeBindings.AllocatorInstance.Data = 0;
    this[1].NativeBindings.ArrayNum = 0;
    this[1].NativeBindings.ArrayMax = 0;
    pUVar1 = this + 1;
    (pUVar1->EnabledFieldNotifications).AllocatorInstance.InlineData[0] = '\0';
    (pUVar1->EnabledFieldNotifications).AllocatorInstance.InlineData[1] = '\0';
    (pUVar1->EnabledFieldNotifications).AllocatorInstance.InlineData[2] = '\0';
    (pUVar1->EnabledFieldNotifications).AllocatorInstance.InlineData[3] = '\0';
    (pUVar1->EnabledFieldNotifications).AllocatorInstance.InlineData[4] = '\0';
    (pUVar1->EnabledFieldNotifications).AllocatorInstance.InlineData[5] = '\0';
    (pUVar1->EnabledFieldNotifications).AllocatorInstance.InlineData[6] = '\0';
    (pUVar1->EnabledFieldNotifications).AllocatorInstance.InlineData[7] = '\0';
    *(undefined4 *)&this[1].PostWidgetStateChanged.field_0x18 = 0x3e4ccccd;
    *(undefined4 *)&this[1].PostWidgetStateChanged.field_0x1c = 0x3d4ccccd;
    *(undefined4 *)((longlong)&this[1].NativeBindings.AllocatorInstance.Data + 4) = 0x3c23d70a;
    pFVar2 = FAudioWidgetsStyle::Get();
    pFVar3 = FName::FName(&local_res8,"AudioMaterialSlider.Style");
    pFVar4 = (FAudioMaterialSliderStyle *)
             (**(code **)(*(longlong *)pFVar2 + 0xa0))
                       (pFVar2,FAudioMaterialSliderStyle::TypeName,*pFVar3,0,1);
    if ((pFVar4 == (FAudioMaterialSliderStyle *)0x0) &&
       (pFVar4 = &Default,
       *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0)) {
      _Init_thread_header(&_TSS0);
      if (_TSS0 == -1) {
        FAudioMaterialSliderStyle::FAudioMaterialSliderStyle(&Default);
        atexit(`FAudioMaterialSliderStyle::GetDefault'::__l2::
               _dynamic_atexit_destructor_for__Default__);
        _Init_thread_footer(&_TSS0);
      }
    }
    FAudioMaterialSliderStyle::operator=((FAudioMaterialSliderStyle *)(this + 1),pFVar4);
  }
  return;
}

// InternalConstructor<UAudioMaterialSliderWidgetStyle> @ 14d89e080

void __cdecl InternalConstructor<UAudioMaterialSliderWidgetStyle>(FObjectInitializer *param_1)

{
  USlateWidgetStyleContainerBase *this;
  
  this = (USlateWidgetStyleContainerBase *)param_1->Obj;
  if (this != (USlateWidgetStyleContainerBase *)0x0) {
    USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase(this,param_1);
    *(undefined ***)this = &UAudioMaterialSliderWidgetStyle::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UAudioMaterialSliderWidgetStyle::_vftable__for__ISlateWidgetStyleContainerInterface__;
    FAudioMaterialSliderStyle::FAudioMaterialSliderStyle((FAudioMaterialSliderStyle *)(this + 1));
    return;
  }
  return;
}

// InternalConstructor<UAudioMeter> @ 14d89e0d0

void __cdecl InternalConstructor<UAudioMeter>(FObjectInitializer *param_1)

{
  if ((UAudioMeter *)param_1->Obj != (UAudioMeter *)0x0) {
    UAudioMeter::UAudioMeter((UAudioMeter *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UAudioOscilloscope> @ 14d89e0f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InternalConstructor<UAudioOscilloscope>(FObjectInitializer *param_1)

{
  if ((UAudioOscilloscope *)param_1->Obj != (UAudioOscilloscope *)0x0) {
    UAudioOscilloscope::UAudioOscilloscope((UAudioOscilloscope *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UAudioRadialSlider> @ 14d89e110

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InternalConstructor<UAudioRadialSlider>(FObjectInitializer *param_1)

{
  if ((UAudioRadialSlider *)param_1->Obj != (UAudioRadialSlider *)0x0) {
    UAudioRadialSlider::UAudioRadialSlider((UAudioRadialSlider *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UAudioSlider> @ 14d89e130

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InternalConstructor<UAudioSlider>(FObjectInitializer *param_1)

{
  UAudioSliderBase *this;
  
  this = (UAudioSliderBase *)param_1->Obj;
  if (this != (UAudioSliderBase *)0x0) {
    UAudioSliderBase::UAudioSliderBase(this,param_1);
    this->_padding_ = (longlong)&UAudioSlider::_vftable__for__UVisual__;
    this->_padding_ = (longlong)&UAudioSlider::_vftable__for__INotifyFieldValueChanged__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UAudioSliderBase> @ 14d89e180

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InternalConstructor<UAudioSliderBase>(FObjectInitializer *param_1)

{
  if ((UAudioSliderBase *)param_1->Obj != (UAudioSliderBase *)0x0) {
    UAudioSliderBase::UAudioSliderBase((UAudioSliderBase *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UAudioVectorscope> @ 14d89e1a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InternalConstructor<UAudioVectorscope>(FObjectInitializer *param_1)

{
  if ((UAudioVectorscope *)param_1->Obj != (UAudioVectorscope *)0x0) {
    UAudioVectorscope::UAudioVectorscope((UAudioVectorscope *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UAudioVolumeRadialSlider> @ 14d89e1c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InternalConstructor<UAudioVolumeRadialSlider>(FObjectInitializer *param_1)

{
  UAudioRadialSlider *this;
  FText *pFVar1;
  FText local_18;
  
  this = (UAudioRadialSlider *)param_1->Obj;
  if (this != (UAudioRadialSlider *)0x0) {
    UAudioRadialSlider::UAudioRadialSlider(this,param_1);
    this->_padding_ = (longlong)&UAudioVolumeRadialSlider::_vftable__for__UVisual__;
    this->_padding_ = (longlong)&UAudioVolumeRadialSlider::_vftable__for__INotifyFieldValueChanged__
    ;
    pFVar1 = FText::FromString(&local_18,"dB");
    UAudioRadialSlider::SetUnitsText(this,pFVar1);
    (this->OutputRange).field0_0x0._s_0.X = -12.0;
    (this->OutputRange).field0_0x0._s_0.Y = 0.0;
  }
  return;
}

// InternalConstructor<UAudioVolumeSlider> @ 14d89e240

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InternalConstructor<UAudioVolumeSlider>(FObjectInitializer *param_1)

{
  UAudioSliderBase *this;
  FText *pFVar1;
  FText local_18;
  
  this = (UAudioSliderBase *)param_1->Obj;
  if (this != (UAudioSliderBase *)0x0) {
    UAudioSliderBase::UAudioSliderBase(this,param_1);
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UAudioVolumeSlider::_vftable__for__UVisual__;
    this->_padding_ = (longlong)&UAudioVolumeSlider::_vftable__for__INotifyFieldValueChanged__;
    pFVar1 = FText::FromString(&local_18,"dB");
    UAudioSliderBase::SetUnitsText(this,pFVar1);
  }
  return;
}

// InternalVTableHelperCtorCaller<UAudioFrequencyRadialSlider> @ 14d89e2b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAudioFrequencyRadialSlider>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAudioRadialSlider *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAudioFrequencyRadialSlider::GetPrivateStaticClass();
  this = (UAudioRadialSlider *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAudioRadialSlider *)0x0) {
    UAudioRadialSlider::UAudioRadialSlider(this,param_1);
    this->_padding_ = (longlong)&UAudioFrequencyRadialSlider::_vftable__for__UVisual__;
    this->_padding_ =
         (longlong)&UAudioFrequencyRadialSlider::_vftable__for__INotifyFieldValueChanged__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAudioFrequencySlider> @ 14d89e370

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAudioFrequencySlider>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAudioSliderBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAudioFrequencySlider::GetPrivateStaticClass();
  this = (UAudioSliderBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAudioSliderBase *)0x0) {
    UAudioSliderBase::UAudioSliderBase(this,param_1);
    this->_padding_ = (longlong)&UAudioFrequencySlider::_vftable__for__UVisual__;
    this->_padding_ = (longlong)&UAudioFrequencySlider::_vftable__for__INotifyFieldValueChanged__;
    this[1]._padding_ = 0x4034000000000000;
    this[1]._padding_ = 0x40d3880000000000;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAudioMaterialButton> @ 14d89e450

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAudioMaterialButton>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UWidget *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAudioMaterialButton::GetPrivateStaticClass();
  this = (UWidget *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UWidget *)0x0) {
    UWidget::UWidget(this,param_1);
    this->_padding_ = (longlong)&UAudioMaterialButton::_vftable__for__UVisual__;
    this->_padding_ = (longlong)&UAudioMaterialButton::_vftable__for__INotifyFieldValueChanged__;
    FAudioMaterialButtonStyle::FAudioMaterialButtonStyle((FAudioMaterialButtonStyle *)(this + 1));
    *(undefined8 *)&this[1].ToolTipWidgetDelegate.field_0x8 = 0;
    *(undefined8 *)&this[1].ToolTipWidgetDelegate.field_0x10 = 0;
    *(undefined8 *)&this[1].VisibilityDelegate = 0;
    this[1].VisibilityDelegate.field_0x8 = 0;
    *(undefined8 *)&this[1].VisibilityDelegate.field_0x10 = 0;
    this[1].RenderTransform.Translation.field0_0x0._s_0.X = 0.0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAudioMaterialButtonWidgetStyle> @ 14d89e540

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAudioMaterialButtonWidgetStyle>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USlateWidgetStyleContainerBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAudioMaterialButtonWidgetStyle::GetPrivateStaticClass();
  this = (USlateWidgetStyleContainerBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USlateWidgetStyleContainerBase *)0x0) {
    USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase(this,param_1);
    *(undefined ***)this = &UAudioMaterialButtonWidgetStyle::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UAudioMaterialButtonWidgetStyle::_vftable__for__ISlateWidgetStyleContainerInterface__;
    FAudioMaterialButtonStyle::FAudioMaterialButtonStyle((FAudioMaterialButtonStyle *)(this + 1));
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAudioMaterialEnvelope> @ 14d89e600

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAudioMaterialEnvelope>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UWidget *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAudioMaterialEnvelope::GetPrivateStaticClass();
  this = (UWidget *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UWidget *)0x0) {
    UWidget::UWidget(this,param_1);
    this->_padding_ = (longlong)&UAudioMaterialEnvelope::_vftable__for__UVisual__;
    this->_padding_ = (longlong)&UAudioMaterialEnvelope::_vftable__for__INotifyFieldValueChanged__;
    FAudioMaterialEnvelopeStyle::FAudioMaterialEnvelopeStyle
              ((FAudioMaterialEnvelopeStyle *)(this + 1));
    this[1].bIsEnabledDelegate.field_0x10 = 1;
    *(undefined4 *)&this[1].bIsEnabledDelegate.field_0x14 = 0x3f800000;
    *(undefined4 *)&this[1].ToolTipTextDelegate = 0x3f800000;
    *(undefined4 *)&this[1].ToolTipTextDelegate.field_0x4 = 0x3f800000;
    *(undefined4 *)&this[1].ToolTipTextDelegate.field_0x8 = 0x3f800000;
    *(undefined4 *)&this[1].ToolTipTextDelegate.field_0xc = 0x3f800000;
    *(undefined4 *)&this[1].ToolTipTextDelegate.field_0x10 = 0x3f800000;
    *(undefined4 *)&this[1].ToolTipTextDelegate.field_0x14 = 0x3f800000;
    *(undefined4 *)&this[1].ToolTipText.TextData.Reference = 0x3f800000;
    *(undefined8 *)&this[1].ToolTipText.Flags = 0;
    this[1].ToolTipWidget.field0_0x0.DebugPtr = (UWidget *)0x0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAudioMaterialKnob> @ 14d89e730

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAudioMaterialKnob>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UWidget *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAudioMaterialKnob::GetPrivateStaticClass();
  this = (UWidget *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UWidget *)0x0) {
    UWidget::UWidget(this,param_1);
    this->_padding_ = (longlong)&UAudioMaterialKnob::_vftable__for__UVisual__;
    this->_padding_ = (longlong)&UAudioMaterialKnob::_vftable__for__INotifyFieldValueChanged__;
    FAudioMaterialKnobStyle::FAudioMaterialKnobStyle((FAudioMaterialKnobStyle *)(this + 1));
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0x3f800000;
    *(undefined8 *)&this[2].bIsEnabledDelegate.field_0x8 = 0;
    *(undefined8 *)&this[2].bIsEnabledDelegate.field_0x10 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAudioMaterialKnobWidgetStyle> @ 14d89e820

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAudioMaterialKnobWidgetStyle>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USlateWidgetStyleContainerBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAudioMaterialKnobWidgetStyle::GetPrivateStaticClass();
  this = (USlateWidgetStyleContainerBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USlateWidgetStyleContainerBase *)0x0) {
    USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase(this,param_1);
    *(undefined ***)this = &UAudioMaterialKnobWidgetStyle::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UAudioMaterialKnobWidgetStyle::_vftable__for__ISlateWidgetStyleContainerInterface__;
    FAudioMaterialKnobStyle::FAudioMaterialKnobStyle((FAudioMaterialKnobStyle *)(this + 1));
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAudioMaterialMeter> @ 14d89e8e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAudioMaterialMeter>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UWidget *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAudioMaterialMeter::GetPrivateStaticClass();
  this = (UWidget *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UWidget *)0x0) {
    UWidget::UWidget(this,param_1);
    this->_padding_ = (longlong)&UAudioMaterialMeter::_vftable__for__UVisual__;
    this->_padding_ = (longlong)&UAudioMaterialMeter::_vftable__for__INotifyFieldValueChanged__;
    FAudioMaterialMeterStyle::FAudioMaterialMeterStyle((FAudioMaterialMeterStyle *)(this + 1));
    this[1].FlowDirectionPreference = Inherit;
    *(undefined2 *)&this[1].field_0xf9 = 0;
    this[1].Cursor = '\0';
    this[1].Clipping = Inherit;
    this[1].Visibility = Visible;
    this[1].PixelSnapping = Inherit;
    this[1].field_0xff = 0;
    *(undefined8 *)&this[1].RenderOpacity = 0;
    this[1].AccessibleWidgetData.field0_0x0.DebugPtr = (USlateAccessibleWidgetData *)0x0;
    this[1].Navigation.field0_0x0.DebugPtr = (UWidgetNavigation *)0x0;
    this[1].WidgetGeneratedByClass.WeakPtr = (FWeakObjectPtr)0x0;
    this[1].MyWidget.Object = (SWidget *)0x0;
    this[1].MyWidget.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAudioMaterialMeterWidgetStyle> @ 14d89e9e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAudioMaterialMeterWidgetStyle>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USlateWidgetStyleContainerBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAudioMaterialMeterWidgetStyle::GetPrivateStaticClass();
  this = (USlateWidgetStyleContainerBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USlateWidgetStyleContainerBase *)0x0) {
    USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase(this,param_1);
    *(undefined ***)this = &UAudioMaterialMeterWidgetStyle::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UAudioMaterialMeterWidgetStyle::_vftable__for__ISlateWidgetStyleContainerInterface__;
    FAudioMaterialMeterStyle::FAudioMaterialMeterStyle((FAudioMaterialMeterStyle *)(this + 1));
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAudioMaterialSlider> @ 14d89eaa0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAudioMaterialSlider>(FVTableHelper *param_1)

{
  UWidget *pUVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UWidget *this;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UAudioMaterialSlider::GetPrivateStaticClass();
  this = (UWidget *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UWidget *)0x0) {
    UWidget::UWidget(this,param_1);
    this->_padding_ = (longlong)&UAudioMaterialSlider::_vftable__for__UVisual__;
    this->_padding_ = (longlong)&UAudioMaterialSlider::_vftable__for__INotifyFieldValueChanged__;
    FAudioMaterialSliderStyle::FAudioMaterialSliderStyle((FAudioMaterialSliderStyle *)(this + 1));
    this[1].MyWidgetStateBitfield.BinaryStates = 0;
    *(undefined8 *)&this[1].PostWidgetStateChanged = 0;
    *(undefined8 *)&this[1].PostWidgetStateChanged.field_0x8 = 0;
    *(undefined4 *)&this[1].PostWidgetStateChanged.field_0x10 = 0x3f800000;
    this[1].PostWidgetStateChanged.field_0x14 = 0;
    this[1].NativeBindings.ArrayNum = 0;
    this[1].NativeBindings.ArrayMax = 0;
    pUVar1 = this + 1;
    (pUVar1->EnabledFieldNotifications).AllocatorInstance.InlineData[0] = '\0';
    (pUVar1->EnabledFieldNotifications).AllocatorInstance.InlineData[1] = '\0';
    (pUVar1->EnabledFieldNotifications).AllocatorInstance.InlineData[2] = '\0';
    (pUVar1->EnabledFieldNotifications).AllocatorInstance.InlineData[3] = '\0';
    (pUVar1->EnabledFieldNotifications).AllocatorInstance.InlineData[4] = '\0';
    (pUVar1->EnabledFieldNotifications).AllocatorInstance.InlineData[5] = '\0';
    (pUVar1->EnabledFieldNotifications).AllocatorInstance.InlineData[6] = '\0';
    (pUVar1->EnabledFieldNotifications).AllocatorInstance.InlineData[7] = '\0';
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAudioMaterialSliderWidgetStyle> @ 14d89eba0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAudioMaterialSliderWidgetStyle>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USlateWidgetStyleContainerBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAudioMaterialSliderWidgetStyle::GetPrivateStaticClass();
  this = (USlateWidgetStyleContainerBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USlateWidgetStyleContainerBase *)0x0) {
    USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase(this,param_1);
    *(undefined ***)this = &UAudioMaterialSliderWidgetStyle::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UAudioMaterialSliderWidgetStyle::_vftable__for__ISlateWidgetStyleContainerInterface__;
    FAudioMaterialSliderStyle::FAudioMaterialSliderStyle((FAudioMaterialSliderStyle *)(this + 1));
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAudioMeter> @ 14d89ec60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAudioMeter>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UWidget *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAudioMeter::GetPrivateStaticClass();
  this = (UWidget *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UWidget *)0x0) {
    UWidget::UWidget(this,param_1);
    this->_padding_ = (longlong)&UAudioMeter::_vftable__for__UVisual__;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UAudioMeter::_vftable__for__INotifyFieldValueChanged__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FAudioMeterStyle::FAudioMeterStyle((FAudioMeterStyle *)&this[1].Slot);
    this[3].NativeBindings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[3].NativeBindings.ArrayNum = 0;
    this[3].NativeBindings.ArrayMax = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAudioOscilloscope> @ 14d89ed60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAudioOscilloscope>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UWidget *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAudioOscilloscope::GetPrivateStaticClass();
  this = (UWidget *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UWidget *)0x0) {
    UWidget::UWidget(this,param_1);
    this->_padding_ = (longlong)&UAudioOscilloscope::_vftable__for__UVisual__;
    this->_padding_ = (longlong)&UAudioOscilloscope::_vftable__for__INotifyFieldValueChanged__;
    FAudioOscilloscopePanelStyle::FAudioOscilloscopePanelStyle
              ((FAudioOscilloscopePanelStyle *)(this + 1));
    *(undefined8 *)&this[3].RenderTransform.Angle = 0;
    *(undefined4 *)&this[3].RenderTransformPivot.field0_0x0 = 0x459c4000;
    *(undefined4 *)((longlong)&this[3].RenderTransformPivot.field0_0x0 + 4) = 0x41200000;
    *(undefined4 *)((longlong)&this[3].RenderTransformPivot.field0_0x0 + 8) = 0x41200000;
    *(undefined4 *)((longlong)&this[3].RenderTransformPivot.field0_0x0 + 0xc) = 0x1010001;
    *(undefined2 *)&this[3].FlowDirectionPreference = 0;
    this[3].Clipping = Inherit;
    this[3].Visibility = Visible;
    this[3].PixelSnapping = Inherit;
    this[3].field_0xff = 0;
    *(undefined1 *)&this[3].RenderOpacity = 0;
    *(undefined4 *)&this[3].field_0x104 = 1;
    this[3].AccessibleWidgetData.field0_0x0.DebugPtr = (USlateAccessibleWidgetData *)0x0;
    this[3].Navigation.field0_0x0.DebugPtr = (UWidgetNavigation *)0x0;
    this[3].WidgetGeneratedByClass.WeakPtr = (FWeakObjectPtr)0x0;
    this[3].MyWidget.Object = (SWidget *)0x0;
    *(undefined4 *)&this[3].MyWidget.WeakReferenceCount.ReferenceController = 1;
    this[3].ComponentWrapperWidget.Object = (SWidget *)0x0;
    this[3].ComponentWrapperWidget.WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[3].MyGCWidget.Object = (SObjectWidget *)0x0;
    *(undefined4 *)&this[3].MyGCWidget.WeakReferenceCount.ReferenceController = 0;
    this[3].MyWidgetStateBitfield.BinaryStates = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAudioRadialSlider> @ 14d89eec0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAudioRadialSlider>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAudioRadialSlider *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAudioRadialSlider::GetPrivateStaticClass();
  pUVar3 = (UAudioRadialSlider *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UAudioRadialSlider *)0x0) {
    pUVar3 = UAudioRadialSlider::UAudioRadialSlider(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAudioSlider> @ 14d89ef60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAudioSlider>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAudioSliderBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAudioSlider::GetPrivateStaticClass();
  this = (UAudioSliderBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAudioSliderBase *)0x0) {
    UAudioSliderBase::UAudioSliderBase(this,param_1);
    this->_padding_ = (longlong)&UAudioSlider::_vftable__for__UVisual__;
    this->_padding_ = (longlong)&UAudioSlider::_vftable__for__INotifyFieldValueChanged__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAudioSliderBase> @ 14d89f030

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAudioSliderBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAudioSliderBase *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAudioSliderBase::GetPrivateStaticClass();
  pUVar3 = (UAudioSliderBase *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UAudioSliderBase *)0x0) {
    pUVar3 = UAudioSliderBase::UAudioSliderBase(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAudioVectorscope> @ 14d89f0d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAudioVectorscope>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UWidget *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAudioVectorscope::GetPrivateStaticClass();
  this = (UWidget *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UWidget *)0x0) {
    UWidget::UWidget(this,param_1);
    this->_padding_ = (longlong)&UAudioVectorscope::_vftable__for__UVisual__;
    this->_padding_ = (longlong)&UAudioVectorscope::_vftable__for__INotifyFieldValueChanged__;
    FAudioVectorscopePanelStyle::FAudioVectorscopePanelStyle
              ((FAudioVectorscopePanelStyle *)(this + 1));
    this[1].EnabledFieldNotifications.NumBits = 0;
    this[1].EnabledFieldNotifications.MaxBits = 0;
    this[1].bRoutedSynchronizeProperties = true;
    *(undefined4 *)&this[1].field_0x1ac = 2;
    *(undefined4 *)&this[2]._padding_ = 0x43fa0000;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0x42700000;
    *(undefined4 *)&this[2]._padding_ = 0x3f800000;
    *(undefined1 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2].Slot.field0_0x0.DebugPtr = (UPanelSlot *)0x0;
    *(undefined8 *)&this[2].bIsEnabledDelegate = 0;
    *(undefined8 *)&this[2].bIsEnabledDelegate.field_0x8 = 0;
    *(undefined4 *)&this[2].bIsEnabledDelegate.field_0x10 = 0;
    *(undefined8 *)&this[2].ToolTipTextDelegate = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAudioVolumeRadialSlider> @ 14d89f210

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAudioVolumeRadialSlider>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAudioRadialSlider *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAudioVolumeRadialSlider::GetPrivateStaticClass();
  this = (UAudioRadialSlider *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAudioRadialSlider *)0x0) {
    UAudioRadialSlider::UAudioRadialSlider(this,param_1);
    this->_padding_ = (longlong)&UAudioVolumeRadialSlider::_vftable__for__UVisual__;
    this->_padding_ = (longlong)&UAudioVolumeRadialSlider::_vftable__for__INotifyFieldValueChanged__
    ;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAudioVolumeSlider> @ 14d89f2d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAudioVolumeSlider>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAudioSliderBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAudioVolumeSlider::GetPrivateStaticClass();
  this = (UAudioSliderBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAudioSliderBase *)0x0) {
    UAudioSliderBase::UAudioSliderBase(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UAudioVolumeSlider::_vftable__for__UVisual__;
    this->_padding_ = (longlong)&UAudioVolumeSlider::_vftable__for__INotifyFieldValueChanged__;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<FName,int,FIdentityFunctor,TDereferenceWrapper<FName,`AudioWidgets::FAudioAnalyzerRack::FAudioAnalyzerRack'::__l6::<lambda_1>_>_> @ 14d89f3a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FName,int,FIdentityFunctor,TDereferenceWrapper<FName,_AudioWidgets::FAudioAnalyzerRack::FAudioAnalyzerRack_::__l6::<lambda_1>_>_>
          (FName *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FName,_public:___cdecl_AudioWidgets::FAudioAnalyzerRack::FAudioAnalyzerRack(AudioWidgets::FAudioAnalyzerRack::FRackConstructParams_const_&)_::_6_::<lambda_1>_>
          param_4)

{
  FName FVar1;
  int iVar2;
  FName *pFVar3;
  FName *pFVar4;
  FName **ppFVar5;
  int iVar6;
  FName *pFVar7;
  FName *pFVar8;
  FName *this;
  float fVar9;
  undefined1 auStack_388 [48];
  FName *local_358;
  FName *local_348;
  FName *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar9 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar9;
    memset(local_330,0,0x2e8);
    ppFVar5 = &local_348;
    do {
      pFVar3 = ppFVar5[1];
      pFVar4 = *ppFVar5;
      local_358 = ppFVar5[2];
      iVar2 = (int)((longlong)pFVar3 - (longlong)pFVar4 >> 3) + 1;
      this = pFVar4;
      iVar6 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_14d89f460:
        if (8 < iVar2) {
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          pFVar7 = pFVar3 + 1;
          FVar1 = this[iVar2 >> 1];
          this[iVar2 >> 1] = *this;
          *this = FVar1;
          pFVar4 = this;
LAB_14d89f490:
          pFVar4 = pFVar4 + 1;
          if (pFVar4 <= pFVar3) goto code_r0x00014d89f499;
          goto LAB_14d89f4b0;
        }
        for (; pFVar7 = this, pFVar4 = this, this < pFVar3; pFVar3 = pFVar3 + -1) {
          while (pFVar8 = pFVar7, pFVar4 = pFVar4 + 1, pFVar4 <= pFVar3) {
            iVar6 = ::FName::Compare(pFVar8,pFVar4);
            pFVar7 = pFVar4;
            if (-1 < iVar6) {
              pFVar7 = pFVar8;
            }
          }
          FVar1 = *pFVar8;
          *pFVar8 = *pFVar3;
          *pFVar3 = FVar1;
        }
        goto LAB_14d89f57a;
      }
LAB_14d89f569:
      HeapSortInternal<FName,int,FIdentityFunctor,TDereferenceWrapper<FName,_AudioWidgets::FAudioAnalyzerRack::FAudioAnalyzerRack_::__l6::<lambda_1>_>_>
                (pFVar4,iVar2,param_3,param_4);
LAB_14d89f57a:
      ppFVar5 = ppFVar5 + -3;
    } while (&local_348 <= ppFVar5);
  }
  return;
code_r0x00014d89f499:
  iVar2 = ::FName::Compare(this,pFVar4);
  if (-1 < iVar2) goto LAB_14d89f490;
LAB_14d89f4b0:
  do {
    pFVar8 = pFVar7;
    pFVar7 = pFVar8 + -1;
    if (pFVar7 <= this) break;
    iVar2 = ::FName::Compare(pFVar7,this);
  } while (-1 < iVar2);
  if (pFVar4 <= pFVar7) {
    FVar1 = *pFVar4;
    *pFVar4 = *pFVar7;
    *pFVar7 = FVar1;
    goto LAB_14d89f490;
  }
  FVar1 = *this;
  iVar6 = iVar6 + -1;
  *this = *pFVar7;
  *pFVar7 = FVar1;
  if ((longlong)((longlong)pFVar7 + (-8 - (longlong)this) & 0xfffffffffffffff8U) <
      (longlong)((longlong)pFVar3 - (longlong)pFVar4 & 0xfffffffffffffff8U)) {
    if (pFVar4 < pFVar3) {
      *ppFVar5 = pFVar4;
      ppFVar5[1] = pFVar3;
      *(int *)(ppFVar5 + 2) = iVar6;
      ppFVar5 = ppFVar5 + 3;
    }
    if (pFVar7 <= this + 1) goto LAB_14d89f57a;
    pFVar3 = pFVar8 + -2;
    pFVar4 = this;
  }
  else {
    if (this + 1 < pFVar7) {
      *ppFVar5 = this;
      ppFVar5[1] = pFVar8 + -2;
      *(int *)(ppFVar5 + 2) = iVar6;
      ppFVar5 = ppFVar5 + 3;
    }
    if (pFVar3 <= pFVar4) goto LAB_14d89f57a;
  }
  iVar2 = (int)((longlong)pFVar3 - (longlong)pFVar4 >> 3) + 1;
  this = pFVar4;
  if (iVar6 == 0) goto LAB_14d89f569;
  goto LAB_14d89f460;
}

// IsObjectPtrEqual<UAudioBus,UAudioBus_const_*,0> @ 14d89f640

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UAudioBus,UAudioBus_const_*,0>
          (TObjectPtr<UAudioBus> *param_1,UAudioBus **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UAudioBus *)0x0) {
    return *param_2 == (UAudioBus *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// MakeRequiredArgs<FFixedSampledSequenceView_&> @ 14d89f660

T1RequiredArgs<FFixedSampledSequenceView_&> __cdecl
RequiredArgs::MakeRequiredArgs<FFixedSampledSequenceView_&>(FFixedSampledSequenceView *param_1)

{
  float *in_RDX;
  
  (param_1->SampleData).DataPtr = in_RDX;
  return (T1RequiredArgs<FFixedSampledSequenceView_&>)param_1;
}

// MakeRequiredArgs<FFixedSampledSequenceView_&,int_const_&> @ 14d89f670

T2RequiredArgs<FFixedSampledSequenceView_&,int_const_&> * __cdecl
RequiredArgs::MakeRequiredArgs<FFixedSampledSequenceView_&,int_const_&>
          (T2RequiredArgs<FFixedSampledSequenceView_&,int_const_&> *__return_storage_ptr__,
          FFixedSampledSequenceView *param_1,int *param_2)

{
  __return_storage_ptr__->Arg0 = param_1;
  __return_storage_ptr__->Arg1 = param_2;
  return __return_storage_ptr__;
}

// MakeRequiredArgs<FFixedSampledSequenceView_&,unsigned_int_const_&> @ 14d89f690

T2RequiredArgs<FFixedSampledSequenceView_&,unsigned_int_const_&> * __cdecl
RequiredArgs::MakeRequiredArgs<FFixedSampledSequenceView_&,unsigned_int_const_&>
          (T2RequiredArgs<FFixedSampledSequenceView_&,unsigned_int_const_&> *__return_storage_ptr__,
          FFixedSampledSequenceView *param_1,uint *param_2)

{
  __return_storage_ptr__->Arg0 = param_1;
  __return_storage_ptr__->Arg1 = param_2;
  return __return_storage_ptr__;
}

// MakeRequiredArgs<TSharedRef<FFixedSampledSequenceGridData,1>_&> @ 14d89f6b0

T1RequiredArgs<TSharedRef<FFixedSampledSequenceGridData,1>_&> __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<FFixedSampledSequenceGridData,1>_&>
          (TSharedRef<FFixedSampledSequenceGridData,1> *param_1)

{
  FFixedSampledSequenceGridData *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<FFixedSampledSequenceGridData,1>_&>)param_1;
}

// MakeRequiredArgs<FFixedSampledSequenceView_const_&> @ 14d89f6c0

T1RequiredArgs<FFixedSampledSequenceView_const_&> __cdecl
RequiredArgs::MakeRequiredArgs<FFixedSampledSequenceView_const_&>
          (FFixedSampledSequenceView *param_1)

{
  float *in_RDX;
  
  (param_1->SampleData).DataPtr = in_RDX;
  return (T1RequiredArgs<FFixedSampledSequenceView_const_&>)param_1;
}

// MakeRequiredArgs<FFixedSampledSequenceView_const_&,unsigned_int> @ 14d89f6d0

T2RequiredArgs<FFixedSampledSequenceView_const_&,unsigned_int_&&> * __cdecl
RequiredArgs::MakeRequiredArgs<FFixedSampledSequenceView_const_&,unsigned_int>
          (T2RequiredArgs<FFixedSampledSequenceView_const_&,unsigned_int_&&> *__return_storage_ptr__
          ,FFixedSampledSequenceView *param_1,uint *param_2)

{
  __return_storage_ptr__->Arg0 = param_1;
  __return_storage_ptr__->Arg1 = param_2;
  return __return_storage_ptr__;
}

// MakeRequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&> @ 14d89f6f0

T2RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&> * __cdecl
RequiredArgs::MakeRequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&>
          (T2RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&>
           *__return_storage_ptr__,TArrayView<float_const_,int> *param_1,uint *param_2)

{
  __return_storage_ptr__->Arg0 = param_1;
  __return_storage_ptr__->Arg1 = param_2;
  return __return_storage_ptr__;
}

// MakeRequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&,TSharedRef<FFixedSampledSequenceGridData,1>_&> @ 14d89f710

T3RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&,TSharedRef<FFixedSampledSequenceGridData,1>_&>
* __cdecl RequiredArgs::
          MakeRequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&,TSharedRef<FFixedSampledSequenceGridData,1>_&>
                    (T3RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&,TSharedRef<FFixedSampledSequenceGridData,1>_&>
                     *__return_storage_ptr__,TArrayView<float_const_,int> *param_1,uint *param_2,
                    TSharedRef<FFixedSampledSequenceGridData,1> *param_3)

{
  __return_storage_ptr__->Arg0 = param_1;
  __return_storage_ptr__->Arg1 = param_2;
  __return_storage_ptr__->Arg2 = param_3;
  return __return_storage_ptr__;
}

// MakeRequiredArgs<TSharedRef<SListView<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,1>_> @ 14d89f730

T1RequiredArgs<TSharedRef<SListView<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,1>_&&> __cdecl
RequiredArgs::
MakeRequiredArgs<TSharedRef<SListView<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,1>_>
          (TSharedRef<SListView<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,1> *param_1)

{
  SListView<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<SListView<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,1>_&&>)
         param_1;
}

// MakeRequiredArgs<TSharedRef<SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>_> @ 14d89f740

T1RequiredArgs<TSharedRef<SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>_&&>
 __cdecl RequiredArgs::
         MakeRequiredArgs<TSharedRef<SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>_>
                   (TSharedRef<SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
                    *param_1)

{
  SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>_&&>
          )param_1;
}

// MakeRequiredArgs<TSharedRef<STableRow<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,1>_> @ 14d89f750

T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,1>_&&> __cdecl
RequiredArgs::
MakeRequiredArgs<TSharedRef<STableRow<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,1>_>
          (TSharedRef<STableRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,1> *param_1)

{
  STableRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,1>_&&>)
         param_1;
}

// MakeRequiredArgs<TSharedRef<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>_> @ 14d89f760

T1RequiredArgs<TSharedRef<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>_&&>
 __cdecl RequiredArgs::
         MakeRequiredArgs<TSharedRef<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>_>
                   (TSharedRef<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
                    *param_1)

{
  STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>_&&>
          )param_1;
}

// MakeShared<UE::Slate::Containers::TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1> @ 14d89f770

TSharedRef<UE::Slate::Containers::TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
* __cdecl MakeShared<UE::Slate::Containers::TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
                    (TSharedRef<UE::Slate::Containers::TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
                     *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<UE::Slate::Containers::TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
  *pTVar4;
  
  pTVar3 = operator_new(0x40);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object =
         (TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
          *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_U__TObservableArray_V__TSharedRef___CBUFLoudnessMetric_FLoudnessMeterWidgetView_AudioWidgets___00___Containers_Slate_UE___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[3]._padding_ = 0;
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x2;
    pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
    __return_storage_ptr__->Object =
         (TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
          *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if ((TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
         *)(pTVar3 + 1) ==
        (TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
         *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<UE::Slate::Containers::TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
                  *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<FAudioUnitProcessor,1> @ 14d89f820

TSharedRef<FAudioUnitProcessor,1> * __cdecl
MakeShared<FAudioUnitProcessor,1>(TSharedRef<FAudioUnitProcessor,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FAudioUnitProcessor,1> *pTVar4;
  
  pTVar3 = operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FAudioUnitProcessor *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_UFAudioUnitProcessor___00_SharedPointerInternals__6B_;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3[1]._padding_ = (longlong)&___7FAudioUnitProcessor__6B_;
    __return_storage_ptr__->Object = (FAudioUnitProcessor *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<FAudioUnitProcessor,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<FFrequencyProcessor,1> @ 14d89f8c0

TSharedRef<FFrequencyProcessor,1> * __cdecl
MakeShared<FFrequencyProcessor,1>(TSharedRef<FFrequencyProcessor,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FFrequencyProcessor,1> *pTVar4;
  
  pTVar3 = operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FFrequencyProcessor *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_UFFrequencyProcessor___00_SharedPointerInternals__6B_;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3[1]._padding_ = (longlong)&___7FFrequencyProcessor__6B_;
    __return_storage_ptr__->Object = (FFrequencyProcessor *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<FFrequencyProcessor,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric,1,AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_&> @ 14d89f960

TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric,1> * __cdecl
MakeShared<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric,1,AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_&>
          (TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric,1>
           *__return_storage_ptr__,FLoudnessMetric *param_1)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric,1> *pTVar5;
  undefined1 local_res8 [8];
  
  pTVar4 = operator_new(0xc0);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FLoudnessMetric *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFLoudnessMetric_FLoudnessMeterWidgetView_AudioWidgets___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ = (longlong)param_1->Name;
    pTVar4[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[1].WeakReferenceCount = (atomic<int>)0x0;
    pIVar1 = (param_1->DisplayName).TextData.Reference;
    *(ITextData **)&pTVar4[1].SharedReferenceCount = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    *(uint *)&pTVar4[2]._padding_ = (param_1->DisplayName).Flags;
    *(undefined1 *)&pTVar4[2].WeakReferenceCount = 0;
    bVar3 = (param_1->Value).Value.bIsSet;
    *(bool *)&pTVar4[2].WeakReferenceCount = bVar3;
    if (bVar3 != false) {
      pTVar4[2].SharedReferenceCount = (atomic<int>)(param_1->Value).Value.TypedValue;
    }
    *(bool *)&pTVar4[3]._padding_ = (param_1->Value).bIsSet;
    pTVar4[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[4]._padding_ = 0;
    pTVar4[4].SharedReferenceCount = (atomic<int>)0x0;
    TDelegate<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pTVar4[3].SharedReferenceCount,&(param_1->Value).Getter);
    *(bool *)&pTVar4[5]._padding_ = (param_1->bShowValue).Value;
    *(bool *)((longlong)&pTVar4[5]._padding_ + 1) = (param_1->bShowValue).bIsSet;
    pTVar4[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[6]._padding_ = 0;
    pTVar4[6].SharedReferenceCount = (atomic<int>)0x0;
    TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pTVar4[5].SharedReferenceCount,&(param_1->bShowValue).Getter);
    *(bool *)&pTVar4[7]._padding_ = (param_1->bShowMeter).Value;
    *(bool *)((longlong)&pTVar4[7]._padding_ + 1) = (param_1->bShowMeter).bIsSet;
    pTVar4[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[7].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[8]._padding_ = 0;
    pTVar4[8].SharedReferenceCount = (atomic<int>)0x0;
    TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pTVar4[7].SharedReferenceCount,&(param_1->bShowMeter).Getter);
    *(undefined8 *)(pTVar4 + 9) = 0;
    pTVar4[9].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[9].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar4[10]._padding_ = 0;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(pTVar4 + 9),
               &param_1->OnShowValueToggleRequested);
    pTVar4[10].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[10].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[0xb]._padding_ = 0;
    pTVar4[0xb].SharedReferenceCount = (atomic<int>)0x0;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pTVar4[10].SharedReferenceCount,&param_1->OnShowMeterToggleRequested);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
    __return_storage_ptr__->Object = (FLoudnessMetric *)(pTVar4 + 1);
    if ((FLoudnessMetric *)(pTVar4 + 1) == (FLoudnessMetric *)0x0) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric,1> *)
                 (*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<FVolumeProcessor,1,bool_const_&> @ 14d89faf0

TSharedRef<FVolumeProcessor,1> * __cdecl
MakeShared<FVolumeProcessor,1,bool_const_&>
          (TSharedRef<FVolumeProcessor,1> *__return_storage_ptr__,bool *param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FVolumeProcessor,1> *pTVar4;
  
  pTVar3 = operator_new(0x20);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FVolumeProcessor *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_UFVolumeProcessor___00_SharedPointerInternals__6B_;
    bVar2 = *param_1;
    pTVar3[1]._padding_ = (longlong)&___7FVolumeProcessor__6B_;
    *(bool *)&pTVar3[1].SharedReferenceCount = bVar2;
    __return_storage_ptr__->Object = (FVolumeProcessor *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<FVolumeProcessor,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1> @ 14d89fbb0

TSharedRef<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
* __cdecl MakeShared<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
                    (TSharedRef<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
                     *__return_storage_ptr__)

{
  undefined1 *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  pTVar2 = operator_new(0x408);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__STableRow_V__TSharedRef___CBUFLoudnessMetric_FLoudnessMeterWidgetView_AudioWidgets___00_____00_SharedPointerInternals__6B_
    ;
    pTVar2[1]._padding_ = (longlong)&___7ITableRow__6B_;
    SBorder::SBorder((SBorder *)&pTVar2[1].SharedReferenceCount);
    pTVar2[1]._padding_ =
         (longlong)
         &STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::
          _vftable__for__ITableRow__;
    *(undefined ***)&pTVar2[1].SharedReferenceCount =
         &STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::
          _vftable__for__SBorder__;
    puVar1 = &pTVar2[4].SharedReferenceCount.field_0x2;
    *puVar1 = *puVar1 | 4;
    pTVar2[0x2f].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x2f].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[0x30]._padding_ = 0;
    pTVar2[0x30].SharedReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar2[0x31]._padding_ = 0;
    pTVar2[0x32].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x32].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[0x33]._padding_ = 0;
    pTVar2[0x33].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x33].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[0x34]._padding_ = 0;
    pTVar2[0x34].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x35]._padding_ = 0;
    pTVar2[0x35].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x35].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar2[0x36]._padding_ = 0;
    pTVar2[0x36].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x36].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[0x37]._padding_ = 0;
    pTVar2[0x37].SharedReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)((longlong)&pTVar2[0x38]._padding_ + 4) = 0;
    pTVar2[0x38].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x38].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[0x39]._padding_ = 0;
    pTVar2[0x39].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x3a]._padding_ = 0;
    pTVar2[0x3a].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x3a].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar2[0x3b]._padding_ = 0;
    pTVar2[0x3b].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x3b].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[0x3c]._padding_ = 0;
    pTVar2[0x3c].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x3d]._padding_ = 0;
    pTVar2[0x3d].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x3d].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar2[0x3e]._padding_ = 0;
    pTVar2[0x3f]._padding_ = 0;
    pTVar2[0x3f].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x3f].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)&pTVar2[0x30].WeakReferenceCount = 1;
    pTVar2[4].SharedReferenceCount.field_0x3 = 2;
  }
  TSharedRef<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
  ::
  TSharedRef<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
            (__return_storage_ptr__,
             (STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
              *)(pTVar2 + 1),pTVar2);
  return __return_storage_ptr__;
}

// MakeShared<FExtender,1> @ 14d89fd20

TSharedRef<FExtender,1> * __cdecl
MakeShared<FExtender,1>(TSharedRef<FExtender,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FExtender,1> *pTVar4;
  
  pTVar3 = operator_new(0x20);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FExtender *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController_VFExtender___00_SharedPointerInternals__6B_;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    __return_storage_ptr__->Object = (FExtender *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<FExtender,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<SAudioVectorscopePanelWidget,1> @ 14d89fdc0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SAudioVectorscopePanelWidget,1> * __cdecl
MakeShared<SAudioVectorscopePanelWidget,1>
          (TSharedRef<SAudioVectorscopePanelWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  pTVar1 = operator_new(0x390);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    pTVar1->SharedReferenceCount = (atomic<int>)0x1;
    pTVar1->WeakReferenceCount = (atomic<int>)0x1;
    pTVar1->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSAudioVectorscopePanelWidget___00_SharedPointerInternals__6B_
    ;
    memset(pTVar1 + 1,0,0x380);
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)(pTVar1 + 1));
    pTVar1[1]._padding_ = (longlong)&SAudioVectorscopePanelWidget::_vftable__for__SCompoundWidget__;
    pTVar1[0x34].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[0x34].WeakReferenceCount = (atomic<int>)0x40240000;
    *(undefined ***)&pTVar1[0x2b].SharedReferenceCount =
         &SAudioVectorscopePanelWidget::_vftable__for__IFixedSampledSequenceViewReceiver__;
    pTVar1[0x2d].SharedReferenceCount = (atomic<int>)0x2;
    pTVar1[0x2d].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[0x2c]._padding_ = 0;
    pTVar1[0x2c].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[0x2c].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[0x2d]._padding_ = 0;
    pTVar1[0x2e].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[0x2e].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[0x2f]._padding_ = 0;
    pTVar1[0x2f].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[0x2f].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[0x30]._padding_ = 0;
    pTVar1[0x30].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[0x30].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[0x31]._padding_ = 0;
    pTVar1[0x31].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[0x31].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[0x32]._padding_ = 0;
    pTVar1[0x32].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[0x32].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[0x33]._padding_ = 0;
    pTVar1[0x33].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[0x33].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[0x34]._padding_ = 0;
    *(undefined1 *)&pTVar1[0x35].SharedReferenceCount = 0;
    *(undefined1 *)&pTVar1[0x36]._padding_ = 0;
    *(undefined8 *)((longlong)&pTVar1[0x36]._padding_ + 4) = 0;
    pTVar1[0x37]._padding_ = 0;
    pTVar1[0x37].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[0x38]._padding_ = 0;
    *(undefined1 *)&pTVar1[0x38].SharedReferenceCount = 0;
    pTVar1[0x35]._padding_ = 0x407f400000000000;
    pTVar1[0x35].WeakReferenceCount = (atomic<int>)0x2;
    pTVar1[0x36].WeakReferenceCount = (atomic<int>)0x3f800000;
  }
  TSharedRef<SAudioVectorscopePanelWidget,1>::TSharedRef<SAudioVectorscopePanelWidget,1>
            (__return_storage_ptr__,(SAudioVectorscopePanelWidget *)(pTVar1 + 1),pTVar1);
  return __return_storage_ptr__;
}

// MakeTDecl<SComboBox<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,RequiredArgs::T0RequiredArgs> @ 14d89ff40

TSlateDecl<SComboBox<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,RequiredArgs::T0RequiredArgs> *
__cdecl MakeTDecl<SComboBox<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,RequiredArgs::T0RequiredArgs>
                  (TSlateDecl<SComboBox<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,RequiredArgs::T0RequiredArgs>
                   *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                  T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SComboBox<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,RequiredArgs::T0RequiredArgs>
  ::
  TSlateDecl<SComboBox<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SComboRow<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_> @ 14d89fff0

TSlateDecl<SComboRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
* __cdecl MakeTDecl<SComboRow<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                    (TSlateDecl<SComboRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<SComboRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  *pTVar4;
  FLLMScope local_res8 [2];
  FName local_58;
  FMemScope local_50;
  TSlateDecl<SComboRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  local_48;
  TReferenceControllerBase<1> *pTStack_30;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_58 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_50,&local_58,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object =
       (SComboRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x408);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__SComboRow_V__TSharedPtr_W4EAudioOscilloscopeTriggerMode___00_____00_SharedPointerInternals__6B_
    ;
    memset(pTVar3 + 1,0,0x3f8);
    STableRow<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::
    STableRow<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>(pTVar3 + 1);
    pTVar3[1]._padding_ =
         (longlong)
         &SComboRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>::_vftable__for__ITableRow__;
    *(undefined ***)&pTVar3[1].SharedReferenceCount =
         &SComboRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>::_vftable__for__SBorder__;
  }
  TSharedRef<SComboRow<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,1>::
  TSharedRef<SComboRow<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,1>
            (&local_48._RequiredArgs,
             (SComboRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *)(pTVar3 + 1),pTVar3);
  local_48._Widget.Object =
       (SComboRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *)local_48._RequiredArgs;
  local_48._Widget.SharedReferenceCount.ReferenceController = pTStack_30;
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ != &local_48) {
    (__return_storage_ptr__->_Widget).Object =
         (SComboRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *)local_48._RequiredArgs;
    local_48._Widget.Object = (SComboRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               &local_48._Widget.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  if ((__return_storage_ptr__->_Widget).Object ==
      (SComboRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<SComboRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->field_0x8,param_1,param_2,
             param_3,0x3f8);
  FMemScope::~FMemScope(&local_50);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SListView<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,RequiredArgs::T0RequiredArgs> @ 14d8a01c0

TSlateDecl<SListView<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,RequiredArgs::T0RequiredArgs> *
__cdecl MakeTDecl<SListView<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,RequiredArgs::T0RequiredArgs>
                  (TSlateDecl<SListView<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,RequiredArgs::T0RequiredArgs>
                   *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                  T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SListView<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,RequiredArgs::T0RequiredArgs>
  ::
  TSlateDecl<SListView<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STableRow<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,1>_&&>_> @ 14d8a0270

TSlateDecl<STableRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,1>_&&>_>
* __cdecl MakeTDecl<STableRow<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,1>_&&>_>
                    (TSlateDecl<STableRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<SListView<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,1>_&&>
                    *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<STableRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,1>_&&>_>
  *pTVar4;
  FLLMScope local_res8 [2];
  FName local_48;
  FMemScope local_40;
  TSlateDecl<STableRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,1>_&&>_>
  local_38;
  TReferenceControllerBase<1> *pTStack_20;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_48 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_40,&local_48,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object =
       (STableRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x408);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__STableRow_V__TSharedPtr_W4EAudioOscilloscopeTriggerMode___00_____00_SharedPointerInternals__6B_
    ;
    STableRow<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::
    STableRow<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>(pTVar3 + 1);
  }
  TSharedRef<STableRow<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,1>::
  TSharedRef<STableRow<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,1>
            (&local_38._RequiredArgs,
             (STableRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *)(pTVar3 + 1),pTVar3);
  local_38._Widget.Object =
       (STableRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *)local_38._RequiredArgs;
  local_38._Widget.SharedReferenceCount.ReferenceController = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ != &local_38) {
    (__return_storage_ptr__->_Widget).Object =
         (STableRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *)local_38._RequiredArgs;
    local_38._Widget.Object = (STableRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               &local_38._Widget.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  if ((__return_storage_ptr__->_Widget).Object ==
      (STableRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<STableRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,1>_&&>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x3f8);
  FMemScope::~FMemScope(&local_40);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>_&&>_> @ 14d8a0420

TSlateDecl<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>_&&>_>
* __cdecl MakeTDecl<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>_&&>_>
                    (TSlateDecl<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>_&&>
                    *param_4)

{
  code *pcVar1;
  bool bVar2;
  TSharedRef<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
  *pTVar3;
  TSlateDecl<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>_&&>_>
  *pTVar4;
  FLLMScope local_res8 [2];
  FName local_48;
  FMemScope local_40;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *local_20;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_48 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_40,&local_48,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object =
       (STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_> *)
       0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = MakeShared<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
                     ((TSharedRef<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
                       *)(local_38 + 0x10));
  local_38._8_8_ = (pTVar3->SharedReferenceCount).ReferenceController;
  local_38._0_8_ = pTVar3->Object;
  if ((TReferenceControllerBase<1> *)local_38._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_38._8_8_)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_38._8_8_)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>_&&>_>
       *)local_38) {
    (__return_storage_ptr__->_Widget).Object =
         (STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_> *
         )local_38._0_8_;
    local_38._0_8_ =
         (STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_> *
         )0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_38 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_38._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  if ((__return_storage_ptr__->_Widget).Object ==
      (STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_> *)
      0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>_&&>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x3f8);
  FMemScope::~FMemScope(&local_40);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_> @ 14d8a0580

TSlateDecl<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
* __cdecl MakeTDecl<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                    (TSlateDecl<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> *param_4)

{
  code *pcVar1;
  bool bVar2;
  TSharedRef<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
  *pTVar3;
  TSlateDecl<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  *pTVar4;
  FLLMScope local_res8 [2];
  FName local_48;
  FMemScope local_40;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *local_20;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_48 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_40,&local_48,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object =
       (STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_> *)
       0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = MakeShared<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
                     ((TSharedRef<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
                       *)(local_38 + 0x10));
  local_38._8_8_ = (pTVar3->SharedReferenceCount).ReferenceController;
  local_38._0_8_ = pTVar3->Object;
  if ((TReferenceControllerBase<1> *)local_38._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_38._8_8_)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_38._8_8_)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
       *)local_38) {
    (__return_storage_ptr__->_Widget).Object =
         (STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_> *
         )local_38._0_8_;
    local_38._0_8_ =
         (STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_> *
         )0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_38 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_38._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  if ((__return_storage_ptr__->_Widget).Object ==
      (STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_> *)
      0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x3f8);
  FMemScope::~FMemScope(&local_40);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,RequiredArgs::T0RequiredArgs> @ 14d8a06e0

TSlateDecl<STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,RequiredArgs::T0RequiredArgs>
* __cdecl MakeTDecl<STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,RequiredArgs::T0RequiredArgs>
                    (TSlateDecl<STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,RequiredArgs::T0RequiredArgs>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,RequiredArgs::T0RequiredArgs>
  ::
  TSlateDecl<STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SAudioFrequencyRadialSlider,RequiredArgs::T0RequiredArgs> @ 14d8a0790

TSlateDecl<SAudioFrequencyRadialSlider,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SAudioFrequencyRadialSlider,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SAudioFrequencyRadialSlider,RequiredArgs::T0RequiredArgs>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SAudioFrequencyRadialSlider,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SAudioFrequencyRadialSlider,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SAudioFrequencySlider,RequiredArgs::T0RequiredArgs> @ 14d8a0840

TSlateDecl<SAudioFrequencySlider,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SAudioFrequencySlider,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SAudioFrequencySlider,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SAudioFrequencySlider,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SAudioFrequencySlider,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SAudioMaterialButton,RequiredArgs::T0RequiredArgs> @ 14d8a08f0

TSlateDecl<SAudioMaterialButton,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SAudioMaterialButton,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SAudioMaterialButton,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SAudioMaterialButton,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SAudioMaterialButton,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SAudioMaterialEnvelope,RequiredArgs::T0RequiredArgs> @ 14d8a09a0

TSlateDecl<SAudioMaterialEnvelope,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SAudioMaterialEnvelope,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SAudioMaterialEnvelope,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SAudioMaterialEnvelope,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SAudioMaterialEnvelope,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SAudioMaterialKnob,RequiredArgs::T0RequiredArgs> @ 14d8a0a50

TSlateDecl<SAudioMaterialKnob,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SAudioMaterialKnob,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SAudioMaterialKnob,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SAudioMaterialKnob,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SAudioMaterialKnob,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SAudioMaterialMeter,RequiredArgs::T0RequiredArgs> @ 14d8a0b00

TSlateDecl<SAudioMaterialMeter,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SAudioMaterialMeter,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SAudioMaterialMeter,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SAudioMaterialMeter,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SAudioMaterialMeter,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SAudioMaterialSlider,RequiredArgs::T0RequiredArgs> @ 14d8a0bb0

TSlateDecl<SAudioMaterialSlider,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SAudioMaterialSlider,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SAudioMaterialSlider,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SAudioMaterialSlider,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SAudioMaterialSlider,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SAudioMeter,RequiredArgs::T0RequiredArgs> @ 14d8a0c60

TSlateDecl<SAudioMeter,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SAudioMeter,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SAudioMeter,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SAudioMeter,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SAudioMeter,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SAudioMeterWidget,RequiredArgs::T0RequiredArgs> @ 14d8a0d10

TSlateDecl<SAudioMeterWidget,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SAudioMeterWidget,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SAudioMeterWidget,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SAudioMeterWidget,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SAudioMeterWidget,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SAudioOscilloscopePanelWidget,RequiredArgs::T2RequiredArgs<FFixedSampledSequenceView_&,int_const_&>_> @ 14d8a0dc0

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SAudioOscilloscopePanelWidget,RequiredArgs::T2RequiredArgs<FFixedSampledSequenceView_&,int_const_&>_>
* __cdecl MakeTDecl<SAudioOscilloscopePanelWidget,RequiredArgs::T2RequiredArgs<FFixedSampledSequenceView_&,int_const_&>_>
                    (TSlateDecl<SAudioOscilloscopePanelWidget,RequiredArgs::T2RequiredArgs<FFixedSampledSequenceView_&,int_const_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T2RequiredArgs<FFixedSampledSequenceView_&,int_const_&> *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SAudioOscilloscopePanelWidget,RequiredArgs::T2RequiredArgs<FFixedSampledSequenceView_&,int_const_&>_>
  ::
  TSlateDecl<SAudioOscilloscopePanelWidget,RequiredArgs::T2RequiredArgs<FFixedSampledSequenceView_&,int_const_&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SAudioOscilloscopePanelWidget,RequiredArgs::T2RequiredArgs<FFixedSampledSequenceView_&,unsigned_int_const_&>_> @ 14d8a0e70

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SAudioOscilloscopePanelWidget,RequiredArgs::T2RequiredArgs<FFixedSampledSequenceView_&,unsigned_int_const_&>_>
* __cdecl MakeTDecl<SAudioOscilloscopePanelWidget,RequiredArgs::T2RequiredArgs<FFixedSampledSequenceView_&,unsigned_int_const_&>_>
                    (TSlateDecl<SAudioOscilloscopePanelWidget,RequiredArgs::T2RequiredArgs<FFixedSampledSequenceView_&,unsigned_int_const_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T2RequiredArgs<FFixedSampledSequenceView_&,unsigned_int_const_&> *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SAudioOscilloscopePanelWidget,RequiredArgs::T2RequiredArgs<FFixedSampledSequenceView_&,unsigned_int_const_&>_>
  ::
  TSlateDecl<SAudioOscilloscopePanelWidget,RequiredArgs::T2RequiredArgs<FFixedSampledSequenceView_&,unsigned_int_const_&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SAudioOscilloscopePanelWidget,RequiredArgs::T2RequiredArgs<FFixedSampledSequenceView_const_&,unsigned_int_&&>_> @ 14d8a0f20

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SAudioOscilloscopePanelWidget,RequiredArgs::T2RequiredArgs<FFixedSampledSequenceView_const_&,unsigned_int_&&>_>
* __cdecl MakeTDecl<SAudioOscilloscopePanelWidget,RequiredArgs::T2RequiredArgs<FFixedSampledSequenceView_const_&,unsigned_int_&&>_>
                    (TSlateDecl<SAudioOscilloscopePanelWidget,RequiredArgs::T2RequiredArgs<FFixedSampledSequenceView_const_&,unsigned_int_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T2RequiredArgs<FFixedSampledSequenceView_const_&,unsigned_int_&&> *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SAudioOscilloscopePanelWidget,RequiredArgs::T2RequiredArgs<FFixedSampledSequenceView_const_&,unsigned_int_&&>_>
  ::
  TSlateDecl<SAudioOscilloscopePanelWidget,RequiredArgs::T2RequiredArgs<FFixedSampledSequenceView_const_&,unsigned_int_&&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SAudioRadialSlider,RequiredArgs::T0RequiredArgs> @ 14d8a0fd0

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SAudioRadialSlider,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SAudioRadialSlider,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SAudioRadialSlider,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SAudioRadialSlider,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SAudioRadialSlider,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SAudioSlider,RequiredArgs::T0RequiredArgs> @ 14d8a1080

TSlateDecl<SAudioSlider,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SAudioSlider,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SAudioSlider,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SAudioSlider,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SAudioSlider,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SAudioSliderBase,RequiredArgs::T0RequiredArgs> @ 14d8a1130

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SAudioSliderBase,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SAudioSliderBase,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SAudioSliderBase,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SAudioSliderBase,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SAudioSliderBase,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SAudioSpectrogram,RequiredArgs::T0RequiredArgs> @ 14d8a11e0

TSlateDecl<SAudioSpectrogram,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SAudioSpectrogram,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SAudioSpectrogram,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SAudioSpectrogram,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SAudioSpectrogram,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SAudioSpectrumPlot,RequiredArgs::T0RequiredArgs> @ 14d8a1290

TSlateDecl<SAudioSpectrumPlot,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SAudioSpectrumPlot,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SAudioSpectrumPlot,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SAudioSpectrumPlot,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SAudioSpectrumPlot,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SAudioTextBox,RequiredArgs::T0RequiredArgs> @ 14d8a1340

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SAudioTextBox,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SAudioTextBox,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SAudioTextBox,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SAudioTextBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SAudioTextBox,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SAudioVectorscopePanelWidget,RequiredArgs::T1RequiredArgs<FFixedSampledSequenceView_&>_> @ 14d8a13f0

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SAudioVectorscopePanelWidget,RequiredArgs::T1RequiredArgs<FFixedSampledSequenceView_&>_>
* __cdecl MakeTDecl<SAudioVectorscopePanelWidget,RequiredArgs::T1RequiredArgs<FFixedSampledSequenceView_&>_>
                    (TSlateDecl<SAudioVectorscopePanelWidget,RequiredArgs::T1RequiredArgs<FFixedSampledSequenceView_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<FFixedSampledSequenceView_&> *param_4)

{
  code *pcVar1;
  bool bVar2;
  TSharedRef<SAudioVectorscopePanelWidget,1> *pTVar3;
  TSlateDecl<SAudioVectorscopePanelWidget,RequiredArgs::T1RequiredArgs<FFixedSampledSequenceView_&>_>
  *pTVar4;
  FLLMScope local_res8 [2];
  FName local_48;
  FMemScope local_40;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *local_20;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_48 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_40,&local_48,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object = (SAudioVectorscopePanelWidget *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = MakeShared<SAudioVectorscopePanelWidget,1>
                     ((TSharedRef<SAudioVectorscopePanelWidget,1> *)(local_38 + 0x10));
  local_38._8_8_ = (pTVar3->SharedReferenceCount).ReferenceController;
  local_38._0_8_ = pTVar3->Object;
  if ((TReferenceControllerBase<1> *)local_38._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_38._8_8_)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_38._8_8_)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<SAudioVectorscopePanelWidget,RequiredArgs::T1RequiredArgs<FFixedSampledSequenceView_&>_>
       *)local_38) {
    (__return_storage_ptr__->_Widget).Object = (SAudioVectorscopePanelWidget *)local_38._0_8_;
    local_38._0_8_ = (SAudioVectorscopePanelWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_38 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_38._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  if ((__return_storage_ptr__->_Widget).Object == (SAudioVectorscopePanelWidget *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<SAudioVectorscopePanelWidget,RequiredArgs::T1RequiredArgs<FFixedSampledSequenceView_&>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)(__return_storage_ptr__->_Widget).Object,param_1,param_2,param_3,0x380);
  FMemScope::~FMemScope(&local_40);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SAudioVectorscopePanelWidget,RequiredArgs::T1RequiredArgs<FFixedSampledSequenceView_const_&>_> @ 14d8a1540

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SAudioVectorscopePanelWidget,RequiredArgs::T1RequiredArgs<FFixedSampledSequenceView_const_&>_>
* __cdecl MakeTDecl<SAudioVectorscopePanelWidget,RequiredArgs::T1RequiredArgs<FFixedSampledSequenceView_const_&>_>
                    (TSlateDecl<SAudioVectorscopePanelWidget,RequiredArgs::T1RequiredArgs<FFixedSampledSequenceView_const_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<FFixedSampledSequenceView_const_&> *param_4)

{
  code *pcVar1;
  bool bVar2;
  TSharedRef<SAudioVectorscopePanelWidget,1> *pTVar3;
  TSlateDecl<SAudioVectorscopePanelWidget,RequiredArgs::T1RequiredArgs<FFixedSampledSequenceView_const_&>_>
  *pTVar4;
  FLLMScope local_res8 [2];
  FName local_48;
  FMemScope local_40;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *local_20;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_48 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_40,&local_48,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object = (SAudioVectorscopePanelWidget *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = MakeShared<SAudioVectorscopePanelWidget,1>
                     ((TSharedRef<SAudioVectorscopePanelWidget,1> *)(local_38 + 0x10));
  local_38._8_8_ = (pTVar3->SharedReferenceCount).ReferenceController;
  local_38._0_8_ = pTVar3->Object;
  if ((TReferenceControllerBase<1> *)local_38._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_38._8_8_)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_38._8_8_)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<SAudioVectorscopePanelWidget,RequiredArgs::T1RequiredArgs<FFixedSampledSequenceView_const_&>_>
       *)local_38) {
    (__return_storage_ptr__->_Widget).Object = (SAudioVectorscopePanelWidget *)local_38._0_8_;
    local_38._0_8_ = (SAudioVectorscopePanelWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_38 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_38._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  if ((__return_storage_ptr__->_Widget).Object == (SAudioVectorscopePanelWidget *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<SAudioVectorscopePanelWidget,RequiredArgs::T1RequiredArgs<FFixedSampledSequenceView_const_&>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)(__return_storage_ptr__->_Widget).Object,param_1,param_2,param_3,0x380);
  FMemScope::~FMemScope(&local_40);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SAudioVolumeRadialSlider,RequiredArgs::T0RequiredArgs> @ 14d8a1690

TSlateDecl<SAudioVolumeRadialSlider,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SAudioVolumeRadialSlider,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SAudioVolumeRadialSlider,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__
          ,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SAudioVolumeRadialSlider,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SAudioVolumeRadialSlider,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SAudioVolumeSlider,RequiredArgs::T0RequiredArgs> @ 14d8a1740

TSlateDecl<SAudioVolumeSlider,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SAudioVolumeSlider,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SAudioVolumeSlider,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SAudioVolumeSlider,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SAudioVolumeSlider,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,1>_&&>_> @ 14d8a17f0

TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,1>_&&>_>
* __cdecl MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,1>_&&>_>
                    (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,1>_&&>
                    *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,1>_&&>_>
  ::
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,1>_&&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>_&&>_> @ 14d8a18a0

TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>_&&>_>
* __cdecl MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>_&&>_>
                    (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>_&&>
                    *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>_&&>_>
  ::
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>_&&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SFixedSampledSequenceRuler,RequiredArgs::T1RequiredArgs<TSharedRef<FFixedSampledSequenceGridData,1>_&>_> @ 14d8a1950

TSlateDecl<SFixedSampledSequenceRuler,RequiredArgs::T1RequiredArgs<TSharedRef<FFixedSampledSequenceGridData,1>_&>_>
* __cdecl MakeTDecl<SFixedSampledSequenceRuler,RequiredArgs::T1RequiredArgs<TSharedRef<FFixedSampledSequenceGridData,1>_&>_>
                    (TSlateDecl<SFixedSampledSequenceRuler,RequiredArgs::T1RequiredArgs<TSharedRef<FFixedSampledSequenceGridData,1>_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<FFixedSampledSequenceGridData,1>_&> *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SFixedSampledSequenceRuler,RequiredArgs::T1RequiredArgs<TSharedRef<FFixedSampledSequenceGridData,1>_&>_>
  ::
  TSlateDecl<SFixedSampledSequenceRuler,RequiredArgs::T1RequiredArgs<TSharedRef<FFixedSampledSequenceGridData,1>_&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SFixedSampledSequenceVectorViewer,RequiredArgs::T2RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&>_> @ 14d8a1a00

TSlateDecl<SFixedSampledSequenceVectorViewer,RequiredArgs::T2RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&>_>
* __cdecl MakeTDecl<SFixedSampledSequenceVectorViewer,RequiredArgs::T2RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&>_>
                    (TSlateDecl<SFixedSampledSequenceVectorViewer,RequiredArgs::T2RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T2RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&>
                    *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SFixedSampledSequenceVectorViewer,RequiredArgs::T2RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&>_>
  ::
  TSlateDecl<SFixedSampledSequenceVectorViewer,RequiredArgs::T2RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SFixedSampledSequenceViewer,RequiredArgs::T3RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&,TSharedRef<FFixedSampledSequenceGridData,1>_&>_> @ 14d8a1ab0

TSlateDecl<SFixedSampledSequenceViewer,RequiredArgs::T3RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&,TSharedRef<FFixedSampledSequenceGridData,1>_&>_>
* __cdecl MakeTDecl<SFixedSampledSequenceViewer,RequiredArgs::T3RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&,TSharedRef<FFixedSampledSequenceGridData,1>_&>_>
                    (TSlateDecl<SFixedSampledSequenceViewer,RequiredArgs::T3RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&,TSharedRef<FFixedSampledSequenceGridData,1>_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T3RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&,TSharedRef<FFixedSampledSequenceGridData,1>_&>
                    *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SFixedSampledSequenceViewer,RequiredArgs::T3RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&,TSharedRef<FFixedSampledSequenceGridData,1>_&>_>
  ::
  TSlateDecl<SFixedSampledSequenceViewer,RequiredArgs::T3RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&,TSharedRef<FFixedSampledSequenceGridData,1>_&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SPlayheadOverlay,RequiredArgs::T0RequiredArgs> @ 14d8a1b60

TSlateDecl<SPlayheadOverlay,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SPlayheadOverlay,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SPlayheadOverlay,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SPlayheadOverlay,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SPlayheadOverlay,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SSampledSequenceValueGridOverlay,RequiredArgs::T0RequiredArgs> @ 14d8a1c10

TSlateDecl<SSampledSequenceValueGridOverlay,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SSampledSequenceValueGridOverlay,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SSampledSequenceValueGridOverlay,RequiredArgs::T0RequiredArgs>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SSampledSequenceValueGridOverlay,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SSampledSequenceValueGridOverlay,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STriggerThresholdLineWidget,RequiredArgs::T0RequiredArgs> @ 14d8a1cc0

TSlateDecl<STriggerThresholdLineWidget,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<STriggerThresholdLineWidget,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<STriggerThresholdLineWidget,RequiredArgs::T0RequiredArgs>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<STriggerThresholdLineWidget,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STriggerThresholdLineWidget,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// NewObject<UAudioBus> @ 14d8a1d70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAudioBus * __cdecl NewObject<UAudioBus>(UObject *param_1)

{
  UClass *pUVar1;
  UAudioBus *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UAudioBus_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UAudioBus *)StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98)
  ;
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UConstantQAnalyzer> @ 14d8a1e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UConstantQAnalyzer * __cdecl NewObject<UConstantQAnalyzer>(UObject *param_1)

{
  UClass *pUVar1;
  UConstantQAnalyzer *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UConstantQAnalyzer_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UConstantQAnalyzer *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UConstantQSettings> @ 14d8a1eb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UConstantQSettings * __cdecl NewObject<UConstantQSettings>(UObject *param_1)

{
  UClass *pUVar1;
  UConstantQSettings *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UConstantQSettings_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UConstantQSettings *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<ULKFSAnalyzer> @ 14d8a1f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

ULKFSAnalyzer * __cdecl NewObject<ULKFSAnalyzer>(UObject *param_1)

{
  UClass *pUVar1;
  ULKFSAnalyzer *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_ULKFSAnalyzer_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (ULKFSAnalyzer *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<ULKFSSettings> @ 14d8a1ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

ULKFSSettings * __cdecl NewObject<ULKFSSettings>(UObject *param_1)

{
  UClass *pUVar1;
  ULKFSSettings *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_ULKFSSettings_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (ULKFSSettings *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UMeterAnalyzer> @ 14d8a2090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMeterAnalyzer * __cdecl NewObject<UMeterAnalyzer>(UObject *param_1)

{
  UClass *pUVar1;
  UMeterAnalyzer *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UMeterAnalyzer_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UMeterAnalyzer *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UMeterSettings> @ 14d8a2130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMeterSettings * __cdecl NewObject<UMeterSettings>(UObject *param_1)

{
  UClass *pUVar1;
  UMeterSettings *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UMeterSettings_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UMeterSettings *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<USynesthesiaSpectrumAnalysisSettings> @ 14d8a21d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USynesthesiaSpectrumAnalysisSettings * __cdecl
NewObject<USynesthesiaSpectrumAnalysisSettings>(UObject *param_1)

{
  UClass *pUVar1;
  USynesthesiaSpectrumAnalysisSettings *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_USynesthesiaSpectrumAnalysisSettings_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (USynesthesiaSpectrumAnalysisSettings *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<USynesthesiaSpectrumAnalyzer> @ 14d8a2270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USynesthesiaSpectrumAnalyzer * __cdecl NewObject<USynesthesiaSpectrumAnalyzer>(UObject *param_1)

{
  UClass *pUVar1;
  USynesthesiaSpectrumAnalyzer *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_USynesthesiaSpectrumAnalyzer_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (USynesthesiaSpectrumAnalyzer *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// OnFloatValueChanged_Lambda<`SAudioMaterialLabeledKnob::Construct'::__l2::<lambda_2>_> @ 14d8a2310

/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
SAudioMaterialKnob::FArguments::
OnFloatValueChanged_Lambda<_SAudioMaterialLabeledKnob::Construct_::__l2::<lambda_2>_>
          (FArguments *this,<lambda_2> *param_1)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnFloatValueChanged,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->_OnFloatValueChanged).field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledKnob::Construct'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = param_1->__this;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return this;
}

// OnValueTextCommitted_Lambda<`SAudioMaterialLabeledKnob::Construct'::__l2::<lambda_1>_> @ 14d8a2470

/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
SAudioTextBox::FArguments::
OnValueTextCommitted_Lambda<_SAudioMaterialLabeledKnob::Construct_::__l2::<lambda_1>_>
          (FArguments *this,<lambda_1> *param_1)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnValueTextCommitted,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->_OnValueTextCommitted).field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledKnob::Construct'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = param_1->__this;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return this;
}

// SetWidgetAttribute<TOptional<UE::Math::TVector2<double>_>,TOptional<UE::Math::TVector2<double>_>_> @ 14d8a5300

bool __cdecl
SetWidgetAttribute<TOptional<UE::Math::TVector2<double>_>,TOptional<UE::Math::TVector2<double>_>_>
          (SWidget *param_1,TAttribute<TOptional<UE::Math::TVector2<double>_>_> *param_2,
          TAttribute<TOptional<UE::Math::TVector2<double>_>_> *param_3,
          EInvalidateWidgetReason param_4)

{
  bool bVar1;
  bool bVar2;
  EInvalidateWidgetReason EVar3;
  
  bVar1 = TAttribute<TOptional<UE::Math::TVector2<double>_>_>::IdenticalTo(param_2,param_3);
  if (!bVar1) {
    bVar1 = TAttribute<TOptional<UE::Math::TVector2<double>_>_>::IsBound(param_2);
    bVar2 = TAttribute<TOptional<UE::Math::TVector2<double>_>_>::IsBound(param_3);
    TAttribute<TOptional<UE::Math::TVector2<double>_>_>::operator=(param_2,param_3);
    EVar3 = param_4 | PaintAndVolatility;
    if (bVar1 == bVar2) {
      EVar3 = param_4;
    }
    SWidget::Invalidate(param_1,EVar3);
    return true;
  }
  return false;
}

// SetWidgetAttribute<UE::Math::TVector2<double>,UE::Math::TVector2<double>_> @ 14d8a53a0

bool __cdecl
SetWidgetAttribute<UE::Math::TVector2<double>,UE::Math::TVector2<double>_>
          (SWidget *param_1,TAttribute<UE::Math::TVector2<double>_> *param_2,
          TAttribute<UE::Math::TVector2<double>_> *param_3,EInvalidateWidgetReason param_4)

{
  bool bVar1;
  bool bVar2;
  EInvalidateWidgetReason EVar3;
  
  bVar1 = TAttribute<UE::Math::TVector2<double>_>::IdenticalTo(param_2,param_3);
  if (!bVar1) {
    bVar1 = TAttribute<UE::Math::TVector2<double>_>::IsBound(param_2);
    bVar2 = TAttribute<UE::Math::TVector2<double>_>::IsBound(param_3);
    TAttribute<UE::Math::TVector2<double>_>::operator=(param_2,param_3);
    EVar3 = param_4 | PaintAndVolatility;
    if (bVar1 == bVar2) {
      EVar3 = param_4;
    }
    SWidget::Invalidate(param_1,EVar3);
    return true;
  }
  return false;
}

// SetWidgetAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>,TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_> @ 14d8a5440

bool __cdecl
SetWidgetAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>,TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_>
          (SWidget *param_1,
          TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_> *param_2,
          TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_> *param_3,
          EInvalidateWidgetReason param_4)

{
  bool bVar1;
  bool bVar2;
  EInvalidateWidgetReason EVar3;
  
  bVar1 = TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_>::IdenticalTo
                    (param_2,param_3);
  if (!bVar1) {
    bVar1 = TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_>::IsBound(param_2);
    bVar2 = TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_>::IsBound(param_3);
    TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_>::operator=(param_2,param_3);
    EVar3 = param_4 | PaintAndVolatility;
    if (bVar1 == bVar2) {
      EVar3 = param_4;
    }
    SWidget::Invalidate(param_1,EVar3);
    return true;
  }
  return false;
}

// SetWidgetAttribute<enum_EAudioRadialSliderLayout,enum_EAudioRadialSliderLayout> @ 14d8a54e0

bool __cdecl
SetWidgetAttribute<enum_EAudioRadialSliderLayout,enum_EAudioRadialSliderLayout>
          (SWidget *param_1,TAttribute<EAudioRadialSliderLayout> *param_2,
          TAttribute<EAudioRadialSliderLayout> *param_3,EInvalidateWidgetReason param_4)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  longlong *plVar5;
  EInvalidateWidgetReason EVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 local_res10 [8];
  FReadAccessScope local_48;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,&local_48);
  if (((*(int *)&(param_2->Getter).field_0x10 == 0) ||
      (plVar5 = *(longlong **)&(param_2->Getter).field_0x8, plVar5 == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(*plVar5 + 0x38))(), cVar1 == '\0')) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_3->Getter,&local_48);
  if (((*(int *)&(param_3->Getter).field_0x10 == 0) ||
      (plVar5 = *(longlong **)&(param_3->Getter).field_0x8, plVar5 == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*plVar5 + 0x38))(), cVar2 == '\0')) {
    cVar2 = '\0';
  }
  else {
    cVar2 = '\x01';
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
  if (cVar1 == cVar2) {
    if (cVar1 == '\0') {
      if ((param_2->bIsSet == param_3->bIsSet) && (param_2->Value == param_3->Value)) {
        return false;
      }
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,
                 &local_48);
      lVar8 = 0;
      lVar7 = lVar8;
      if ((*(int *)&(param_2->Getter).field_0x10 != 0) &&
         (plVar5 = *(longlong **)&(param_2->Getter).field_0x8, plVar5 != (longlong *)0x0)) {
        plVar5 = (longlong *)(**(code **)(*plVar5 + 0x40))(plVar5,local_res10);
        lVar7 = *plVar5;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_48);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_3->Getter,
                 &local_48);
      if ((*(int *)&(param_3->Getter).field_0x10 != 0) &&
         (plVar5 = *(longlong **)&(param_3->Getter).field_0x8, plVar5 != (longlong *)0x0)) {
        plVar5 = (longlong *)(**(code **)(*plVar5 + 0x40))(plVar5,local_res10);
        lVar8 = *plVar5;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_48);
      if (lVar7 == lVar8) {
        return false;
      }
    }
  }
  bVar3 = TAttribute<enum_EAudioRadialSliderLayout>::IsBound(param_2);
  bVar4 = TAttribute<enum_EAudioRadialSliderLayout>::IsBound(param_3);
  TAttribute<enum_EAudioRadialSliderLayout>::operator=(param_2,param_3);
  EVar6 = param_4 | PaintAndVolatility;
  if (bVar3 == bVar4) {
    EVar6 = param_4;
  }
  SWidget::Invalidate(param_1,EVar6);
  return true;
}

// SetWidgetAttribute<enum_EOrientation,enum_EOrientation> @ 14d8a5680

bool __cdecl
SetWidgetAttribute<enum_EOrientation,enum_EOrientation>
          (SWidget *param_1,TAttribute<EOrientation> *param_2,TAttribute<EOrientation> *param_3,
          EInvalidateWidgetReason param_4)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  longlong *plVar5;
  EInvalidateWidgetReason EVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 local_res10 [8];
  FReadAccessScope local_48;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,&local_48);
  if (((*(int *)&(param_2->Getter).field_0x10 == 0) ||
      (plVar5 = *(longlong **)&(param_2->Getter).field_0x8, plVar5 == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(*plVar5 + 0x38))(), cVar1 == '\0')) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_3->Getter,&local_48);
  if (((*(int *)&(param_3->Getter).field_0x10 == 0) ||
      (plVar5 = *(longlong **)&(param_3->Getter).field_0x8, plVar5 == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*plVar5 + 0x38))(), cVar2 == '\0')) {
    cVar2 = '\0';
  }
  else {
    cVar2 = '\x01';
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
  if (cVar1 == cVar2) {
    if (cVar1 == '\0') {
      if ((param_2->bIsSet == param_3->bIsSet) && (param_2->Value == param_3->Value)) {
        return false;
      }
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,
                 &local_48);
      lVar8 = 0;
      lVar7 = lVar8;
      if ((*(int *)&(param_2->Getter).field_0x10 != 0) &&
         (plVar5 = *(longlong **)&(param_2->Getter).field_0x8, plVar5 != (longlong *)0x0)) {
        plVar5 = (longlong *)(**(code **)(*plVar5 + 0x40))(plVar5,local_res10);
        lVar7 = *plVar5;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_48);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_3->Getter,
                 &local_48);
      if ((*(int *)&(param_3->Getter).field_0x10 != 0) &&
         (plVar5 = *(longlong **)&(param_3->Getter).field_0x8, plVar5 != (longlong *)0x0)) {
        plVar5 = (longlong *)(**(code **)(*plVar5 + 0x40))(plVar5,local_res10);
        lVar8 = *plVar5;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_48);
      if (lVar7 == lVar8) {
        return false;
      }
    }
  }
  bVar3 = TAttribute<enum_EOrientation>::IsBound(param_2);
  bVar4 = TAttribute<enum_EOrientation>::IsBound(param_3);
  param_2->Value = param_3->Value;
  param_2->bIsSet = param_3->bIsSet;
  TDelegate<enum_EOrientation___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&param_2->Getter,&param_3->Getter);
  EVar6 = param_4 | PaintAndVolatility;
  if (bVar3 == bVar4) {
    EVar6 = param_4;
  }
  SWidget::Invalidate(param_1,EVar6);
  return true;
}

// StaticEnum<enum_EAudioColorGradient> @ 14d8a58f0

UEnum * __cdecl StaticEnum<enum_EAudioColorGradient>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAudioColorGradient.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioWidgets();
    Z_Registration_Info_UEnum_EAudioColorGradient.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioWidgets_EAudioColorGradient,(UObject *)pUVar1,
                       L"EAudioColorGradient");
  }
  return Z_Registration_Info_UEnum_EAudioColorGradient.OuterSingleton;
}

// StaticEnum<enum_EAudioMaterialEnvelopeType> @ 14d8a5930

UEnum * __cdecl StaticEnum<enum_EAudioMaterialEnvelopeType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAudioMaterialEnvelopeType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioWidgets();
    Z_Registration_Info_UEnum_EAudioMaterialEnvelopeType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioWidgets_EAudioMaterialEnvelopeType,(UObject *)pUVar1,
                       L"EAudioMaterialEnvelopeType");
  }
  return Z_Registration_Info_UEnum_EAudioMaterialEnvelopeType.OuterSingleton;
}

// StaticEnum<enum_EAudioOscilloscopeTriggerMode> @ 14d8a5970

UEnum * __cdecl StaticEnum<enum_EAudioOscilloscopeTriggerMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAudioOscilloscopeTriggerMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioWidgets();
    Z_Registration_Info_UEnum_EAudioOscilloscopeTriggerMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioWidgets_EAudioOscilloscopeTriggerMode,
                       (UObject *)pUVar1,L"EAudioOscilloscopeTriggerMode");
  }
  return Z_Registration_Info_UEnum_EAudioOscilloscopeTriggerMode.OuterSingleton;
}

// StaticEnum<enum_EAudioPanelLayoutType> @ 14d8a59b0

UEnum * __cdecl StaticEnum<enum_EAudioPanelLayoutType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAudioPanelLayoutType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioWidgets();
    Z_Registration_Info_UEnum_EAudioPanelLayoutType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioWidgets_EAudioPanelLayoutType,(UObject *)pUVar1,
                       L"EAudioPanelLayoutType");
  }
  return Z_Registration_Info_UEnum_EAudioPanelLayoutType.OuterSingleton;
}

// StaticEnum<enum_EAudioRadialSliderLayout> @ 14d8a59f0

UEnum * __cdecl StaticEnum<enum_EAudioRadialSliderLayout>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAudioRadialSliderLayout.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioWidgets();
    Z_Registration_Info_UEnum_EAudioRadialSliderLayout.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioWidgets_EAudioRadialSliderLayout,(UObject *)pUVar1,
                       L"EAudioRadialSliderLayout");
  }
  return Z_Registration_Info_UEnum_EAudioRadialSliderLayout.OuterSingleton;
}

// StaticEnum<enum_EAudioSpectrogramFrequencyAxisPixelBucketMode> @ 14d8a5a30

UEnum * __cdecl StaticEnum<enum_EAudioSpectrogramFrequencyAxisPixelBucketMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAudioSpectrogramFrequencyAxisPixelBucketMode.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioWidgets();
    Z_Registration_Info_UEnum_EAudioSpectrogramFrequencyAxisPixelBucketMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioWidgets_EAudioSpectrogramFrequencyAxisPixelBucketMode,
                       (UObject *)pUVar1,L"EAudioSpectrogramFrequencyAxisPixelBucketMode");
  }
  return Z_Registration_Info_UEnum_EAudioSpectrogramFrequencyAxisPixelBucketMode.OuterSingleton;
}

// StaticEnum<enum_EAudioSpectrogramFrequencyAxisScale> @ 14d8a5a70

UEnum * __cdecl StaticEnum<enum_EAudioSpectrogramFrequencyAxisScale>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAudioSpectrogramFrequencyAxisScale.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_AudioWidgets();
    Z_Registration_Info_UEnum_EAudioSpectrogramFrequencyAxisScale.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioWidgets_EAudioSpectrogramFrequencyAxisScale,
                       (UObject *)pUVar1,L"EAudioSpectrogramFrequencyAxisScale");
  }
  return Z_Registration_Info_UEnum_EAudioSpectrogramFrequencyAxisScale.OuterSingleton;
}

// StaticEnum<enum_EAudioSpectrumAnalyzerBallistics> @ 14d8a5ab0

UEnum * __cdecl StaticEnum<enum_EAudioSpectrumAnalyzerBallistics>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAudioSpectrumAnalyzerBallistics.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioWidgets();
    Z_Registration_Info_UEnum_EAudioSpectrumAnalyzerBallistics.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioWidgets_EAudioSpectrumAnalyzerBallistics,
                       (UObject *)pUVar1,L"EAudioSpectrumAnalyzerBallistics");
  }
  return Z_Registration_Info_UEnum_EAudioSpectrumAnalyzerBallistics.OuterSingleton;
}

// StaticEnum<enum_EAudioSpectrumAnalyzerType> @ 14d8a5af0

UEnum * __cdecl StaticEnum<enum_EAudioSpectrumAnalyzerType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAudioSpectrumAnalyzerType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioWidgets();
    Z_Registration_Info_UEnum_EAudioSpectrumAnalyzerType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioWidgets_EAudioSpectrumAnalyzerType,(UObject *)pUVar1,
                       L"EAudioSpectrumAnalyzerType");
  }
  return Z_Registration_Info_UEnum_EAudioSpectrumAnalyzerType.OuterSingleton;
}

// StaticEnum<enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode> @ 14d8a5b30

UEnum * __cdecl StaticEnum<enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioWidgets();
    Z_Registration_Info_UEnum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioWidgets_EAudioSpectrumPlotFrequencyAxisPixelBucketMode
                       ,(UObject *)pUVar1,L"EAudioSpectrumPlotFrequencyAxisPixelBucketMode");
  }
  return Z_Registration_Info_UEnum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode.OuterSingleton;
}

// StaticEnum<enum_EAudioSpectrumPlotFrequencyAxisScale> @ 14d8a5b70

UEnum * __cdecl StaticEnum<enum_EAudioSpectrumPlotFrequencyAxisScale>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAudioSpectrumPlotFrequencyAxisScale.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_AudioWidgets();
    Z_Registration_Info_UEnum_EAudioSpectrumPlotFrequencyAxisScale.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioWidgets_EAudioSpectrumPlotFrequencyAxisScale,
                       (UObject *)pUVar1,L"EAudioSpectrumPlotFrequencyAxisScale");
  }
  return Z_Registration_Info_UEnum_EAudioSpectrumPlotFrequencyAxisScale.OuterSingleton;
}

// StaticEnum<enum_EAudioSpectrumPlotTilt> @ 14d8a5bb0

UEnum * __cdecl StaticEnum<enum_EAudioSpectrumPlotTilt>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAudioSpectrumPlotTilt.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioWidgets();
    Z_Registration_Info_UEnum_EAudioSpectrumPlotTilt.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioWidgets_EAudioSpectrumPlotTilt,(UObject *)pUVar1,
                       L"EAudioSpectrumPlotTilt");
  }
  return Z_Registration_Info_UEnum_EAudioSpectrumPlotTilt.OuterSingleton;
}

// StaticEnum<enum_EAudioUnitsValueType> @ 14d8a5bf0

UEnum * __cdecl StaticEnum<enum_EAudioUnitsValueType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAudioUnitsValueType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioWidgets();
    Z_Registration_Info_UEnum_EAudioUnitsValueType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioWidgets_EAudioUnitsValueType,(UObject *)pUVar1,
                       L"EAudioUnitsValueType");
  }
  return Z_Registration_Info_UEnum_EAudioUnitsValueType.OuterSingleton;
}

// StaticEnum<enum_EXAxisLabelsUnit> @ 14d8a5c30

UEnum * __cdecl StaticEnum<enum_EXAxisLabelsUnit>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EXAxisLabelsUnit.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioWidgets();
    Z_Registration_Info_UEnum_EXAxisLabelsUnit.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioWidgets_EXAxisLabelsUnit,(UObject *)pUVar1,
                       L"EXAxisLabelsUnit");
  }
  return Z_Registration_Info_UEnum_EXAxisLabelsUnit.OuterSingleton;
}

// StaticEnum<enum_EYAxisLabelsUnit> @ 14d8a5c70

UEnum * __cdecl StaticEnum<enum_EYAxisLabelsUnit>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EYAxisLabelsUnit.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioWidgets();
    Z_Registration_Info_UEnum_EYAxisLabelsUnit.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioWidgets_EYAxisLabelsUnit,(UObject *)pUVar1,
                       L"EYAxisLabelsUnit");
  }
  return Z_Registration_Info_UEnum_EYAxisLabelsUnit.OuterSingleton;
}

// TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>_const_> @ 14d8a69b0

TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,_public:_class_TSharedRef<SWidget,1>___cdecl_AudioWidgets::FLoudnessMeterWidgetView::MakeWidget(void)const_::_2_::<lambda_1>_const_>
* __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>_const_>
::
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,_AudioWidgets::FLoudnessMeterWidgetView::MakeWidget_::__l2::<lambda_1>_const_>
          (void *this,
          TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,_public:_class_TSharedRef<SWidget,1>___cdecl_AudioWidgets::FLoudnessMeterWidgetView::MakeWidget(void)const_::_2_::<lambda_1>_const_>
          *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  *(undefined ***)this =
       &
       ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
  ;
  *(longlong *)((longlong)this + 0x10) = param_1->_padding_;
  *(undefined ***)this =
       &TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::`2'::<lambda_1>_const_>
        ::_vftable_;
  *(FUICommandList **)((longlong)this + 0x18) = (param_1->Functor).CommandList.Object;
  pTVar1 = (param_1->Functor).CommandList.SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)((longlong)this + 0x20) = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  AudioWidgets::FLoudnessMeterWidgetView::FTimerPanelParams::FTimerPanelParams
            ((FTimerPanelParams *)((longlong)this + 0x28),&(param_1->Functor).TimerPanelParams);
  *(TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
    **)((longlong)this + 0xa0) = (param_1->Functor).LoudnessMetrics.Object;
  pTVar1 = (param_1->Functor).LoudnessMetrics.SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)((longlong)this + 0xa8) = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// ~TFunction_OwnedObject<`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l8::<lambda_10>,1,0> @ 14d8bb6e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l8::<lambda_10>,1,0>
::
~TFunction_OwnedObject<_AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView_::__l8::<lambda_10>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::`8'::<lambda_10>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`SAudioMeterPrivate::ConvertMeterChannelInfoAttribute'::__l2::<lambda_1>,0,1> @ 14d8bb700

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SAudioMeterPrivate::ConvertMeterChannelInfoAttribute'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_SAudioMeterPrivate::ConvertMeterChannelInfoAttribute_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`SAudioMeterPrivate::ConvertMeterChannelInfoAttribute'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x20));
  if (*(void **)((longlong)this + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x28));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x20));
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  return;
}

// ~TFunction_OwnedObject<`AudioWidgets::LoudnessMeterWidgetView_Private::MakeNumericValueTileWidget'::__l2::<lambda_1>,0,0> @ 14d8bb760

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AudioWidgets::LoudnessMeterWidgetView_Private::MakeNumericValueTileWidget'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_AudioWidgets::LoudnessMeterWidgetView_Private::MakeNumericValueTileWidget_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`AudioWidgets::LoudnessMeterWidgetView_Private::MakeNumericValueTileWidget'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`SAudioTextBox::Construct'::__l5::<lambda_1>,0,0> @ 14d8bb780

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`SAudioTextBox::Construct'::__l5::<lambda_1>,0,0>
::~TFunction_OwnedObject<_SAudioTextBox::Construct_::__l5::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`SAudioTextBox::Construct'::`5'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`AudioWidgets::LoudnessMeterWidgetView_Private::MakeMeterValueTileWidget'::__l2::<lambda_2>,0,0> @ 14d8bb7a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AudioWidgets::LoudnessMeterWidgetView_Private::MakeMeterValueTileWidget'::__l2::<lambda_2>,0,0>
::
~TFunction_OwnedObject<_AudioWidgets::LoudnessMeterWidgetView_Private::MakeMeterValueTileWidget_::__l2::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`AudioWidgets::LoudnessMeterWidgetView_Private::MakeMeterValueTileWidget'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`AudioWidgets::LoudnessMeterWidgetView_Private::MakeNumericValueTileWidget'::__l2::<lambda_2>,0,0> @ 14d8bb7c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AudioWidgets::LoudnessMeterWidgetView_Private::MakeNumericValueTileWidget'::__l2::<lambda_2>,0,0>
::
~TFunction_OwnedObject<_AudioWidgets::LoudnessMeterWidgetView_Private::MakeNumericValueTileWidget_::__l2::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`AudioWidgets::LoudnessMeterWidgetView_Private::MakeNumericValueTileWidget'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_2>,0,1> @ 14d8bb7e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_2>,0,1>::
~TFunction_OwnedObject<_AudioWidgets::FLoudnessMeterWidgetView::MakeWidget_::__l2::<lambda_2>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::`2'::<lambda_2>,0,1>
        ::_vftable_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x10));
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`SAudioTextBox::Construct'::__l5::<lambda_2>,0,0> @ 14d8bb820

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`SAudioTextBox::Construct'::__l5::<lambda_2>,0,0>
::~TFunction_OwnedObject<_SAudioTextBox::Construct_::__l5::<lambda_2>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`SAudioTextBox::Construct'::`5'::<lambda_2>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`SAudioOscilloscopePanelWidget::CreateChannelCombobox'::__l2::<lambda_3>,0,0> @ 14d8bb840

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SAudioOscilloscopePanelWidget::CreateChannelCombobox'::__l2::<lambda_3>,0,0>
::
~TFunction_OwnedObject<_SAudioOscilloscopePanelWidget::CreateChannelCombobox_::__l2::<lambda_3>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`SAudioOscilloscopePanelWidget::CreateChannelCombobox'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`SAudioOscilloscopePanelWidget::CreateTriggerModeCombobox'::__l2::<lambda_3>,0,0> @ 14d8bb860

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SAudioOscilloscopePanelWidget::CreateTriggerModeCombobox'::__l2::<lambda_3>,0,0>
::
~TFunction_OwnedObject<_SAudioOscilloscopePanelWidget::CreateTriggerModeCombobox_::__l2::<lambda_3>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`SAudioOscilloscopePanelWidget::CreateTriggerModeCombobox'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`AudioWidgets::LoudnessMeterWidgetView_Private::MakeMeterValueTileWidget'::__l2::<lambda_3>,0,0> @ 14d8bb880

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AudioWidgets::LoudnessMeterWidgetView_Private::MakeMeterValueTileWidget'::__l2::<lambda_3>,0,0>
::
~TFunction_OwnedObject<_AudioWidgets::LoudnessMeterWidgetView_Private::MakeMeterValueTileWidget_::__l2::<lambda_3>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`AudioWidgets::LoudnessMeterWidgetView_Private::MakeMeterValueTileWidget'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::__l2::<lambda_4>,0,0> @ 14d8bb8a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::__l2::<lambda_4>,0,0>
::
~TFunction_OwnedObject<_SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob_::__l2::<lambda_4>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::`2'::<lambda_4>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`AudioWidgets::LoudnessMeterWidgetView_Private::MakeMeterValueTileWidget'::__l2::<lambda_4>,0,0> @ 14d8bb8c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AudioWidgets::LoudnessMeterWidgetView_Private::MakeMeterValueTileWidget'::__l2::<lambda_4>,0,0>
::
~TFunction_OwnedObject<_AudioWidgets::LoudnessMeterWidgetView_Private::MakeMeterValueTileWidget_::__l2::<lambda_4>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`AudioWidgets::LoudnessMeterWidgetView_Private::MakeMeterValueTileWidget'::`2'::<lambda_4>,0,0>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_5>,0,1> @ 14d8bb8e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_5>,0,1>::
~TFunction_OwnedObject<_AudioWidgets::FLoudnessMeterWidgetView::MakeWidget_::__l2::<lambda_5>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::`2'::<lambda_5>,0,1>
        ::_vftable_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x18));
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x18));
  return;
}

// operator() @ 14d8c6c90

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __thiscall
`AudioWidgets::LoudnessMeterWidgetView_Private::MakeNumericValueTileWidget'::__l2::<lambda_1>::
operator()(void *this,FText *__return_storage_ptr__)

{
  float fVar1;
  ITextData *pIVar2;
  TOptional<float> *pTVar3;
  FText *pFVar4;
  FNumberFormattingOptions *pFVar5;
  undefined1 local_res8 [8];
  undefined1 local_38 [8];
  FSharedReferencer<1> FStack_30;
  
  pTVar3 = TAttribute<TOptional<float>_>::Get
                     ((TAttribute<TOptional<float>_> *)(*(longlong *)this + 0x18));
  if (pTVar3->bIsSet == false) {
    pFVar4 = FText::GetEmpty();
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar2 = (pFVar4->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
    }
    __return_storage_ptr__->Flags = pFVar4->Flags;
    return __return_storage_ptr__;
  }
  fVar1 = pTVar3->TypedValue;
  if (fVar1 == __real_ff800000) {
    FText::AsLocalizable_Advanced_LocText
              (__return_storage_ptr__,L"FLoudnessMeterWidgetView",L"NegativeInfinity",L"-∞");
    return __return_storage_ptr__;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar5 = FNumberFormattingOptions::FNumberFormattingOptions
                         ((FNumberFormattingOptions *)local_38);
      pFVar5->MinimumFractionalDigits = 1;
      pFVar5->MaximumFractionalDigits = 1;
      NumberFormattingOptions.AlwaysSign = pFVar5->AlwaysSign;
      NumberFormattingOptions.UseGrouping = pFVar5->UseGrouping;
      NumberFormattingOptions.IndicateNearlyInteger = pFVar5->IndicateNearlyInteger;
      NumberFormattingOptions._3_1_ = pFVar5->field_0x3;
      NumberFormattingOptions.RoundingMode = pFVar5->RoundingMode;
      NumberFormattingOptions.MinimumIntegralDigits = pFVar5->MinimumIntegralDigits;
      NumberFormattingOptions.MaximumIntegralDigits = pFVar5->MaximumIntegralDigits;
      NumberFormattingOptions.MinimumFractionalDigits = pFVar5->MinimumFractionalDigits;
      NumberFormattingOptions.MaximumFractionalDigits = pFVar5->MaximumFractionalDigits;
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_38 = (undefined1  [8])0x0;
  FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FText::AsNumber(__return_storage_ptr__,fVar1,&NumberFormattingOptions,
                  (TSharedPtr<FCulture,1> *)local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_30.ReferenceController);
  return __return_storage_ptr__;
}

// operator() @ 14d8ca1a0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __thiscall
`AudioWidgets::LoudnessMeterWidgetView_Private::MakeMeterValueTileWidget'::__l2::<lambda_2>::
operator()(void *this,FText *__return_storage_ptr__)

{
  float fVar1;
  ITextData *pIVar2;
  TOptional<float> *pTVar3;
  FText *pFVar4;
  FNumberFormattingOptions *pFVar5;
  undefined1 local_res8 [8];
  undefined1 local_38 [8];
  FSharedReferencer<1> FStack_30;
  
  pTVar3 = TAttribute<TOptional<float>_>::Get
                     ((TAttribute<TOptional<float>_> *)(*(longlong *)this + 0x18));
  if (pTVar3->bIsSet == false) {
    pFVar4 = FText::GetEmpty();
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar2 = (pFVar4->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
    }
    __return_storage_ptr__->Flags = pFVar4->Flags;
    return __return_storage_ptr__;
  }
  fVar1 = pTVar3->TypedValue;
  if (fVar1 == __real_ff800000) {
    FText::AsLocalizable_Advanced_LocText
              (__return_storage_ptr__,L"FLoudnessMeterWidgetView",L"NegativeInfinity",L"-∞");
    return __return_storage_ptr__;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar5 = FNumberFormattingOptions::FNumberFormattingOptions
                         ((FNumberFormattingOptions *)local_38);
      pFVar5->MinimumFractionalDigits = 1;
      pFVar5->MaximumFractionalDigits = 1;
      NumberFormattingOptions.AlwaysSign = pFVar5->AlwaysSign;
      NumberFormattingOptions.UseGrouping = pFVar5->UseGrouping;
      NumberFormattingOptions.IndicateNearlyInteger = pFVar5->IndicateNearlyInteger;
      NumberFormattingOptions._3_1_ = pFVar5->field_0x3;
      NumberFormattingOptions.RoundingMode = pFVar5->RoundingMode;
      NumberFormattingOptions.MinimumIntegralDigits = pFVar5->MinimumIntegralDigits;
      NumberFormattingOptions.MaximumIntegralDigits = pFVar5->MaximumIntegralDigits;
      NumberFormattingOptions.MinimumFractionalDigits = pFVar5->MinimumFractionalDigits;
      NumberFormattingOptions.MaximumFractionalDigits = pFVar5->MaximumFractionalDigits;
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_38 = (undefined1  [8])0x0;
  FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FText::AsNumber(__return_storage_ptr__,fVar1,&NumberFormattingOptions,
                  (TSharedPtr<FCulture,1> *)local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_30.ReferenceController);
  return __return_storage_ptr__;
}

// operator() @ 14d8cd720

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
``AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l10::
<lambda_2>::operator()(void *this,FMenuBuilder *param_1)

{
  longlong lVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  FUIAction *pFVar6;
  FSlateIcon *pFVar7;
  FText *pFVar8;
  undefined1 uVar9;
  FName local_res8;
  FDestructionSentinel local_308;
  FDelegateAllocation *local_2f0;
  FDestructionSentinel local_2e8;
  undefined1 local_2d0 [8];
  undefined1 local_2c8 [8];
  ForAnyElementType FStack_2c0;
  ulonglong local_2b8;
  undefined1 local_2b0 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2a8;
  ForAnyElementType FStack_2a0;
  ulonglong local_298;
  undefined1 local_290 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_278;
  ForAnyElementType FStack_270;
  ulonglong local_268;
  undefined1 local_260 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_248;
  ForAnyElementType FStack_240;
  ulonglong local_238;
  undefined1 local_230 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_218;
  ForAnyElementType FStack_210;
  ulonglong local_208;
  undefined1 local_200 [8];
  FDelegateAllocation local_1f8;
  undefined1 local_1e8 [8];
  FDelegateAllocation local_1e0;
  undefined1 local_1d0 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1c8;
  ForAnyElementType FStack_1c0;
  ulonglong local_1b8;
  undefined1 local_1b0 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1a8;
  ForAnyElementType FStack_1a0;
  ulonglong local_198;
  undefined1 local_190 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_188;
  ForAnyElementType FStack_180;
  ulonglong local_178;
  undefined1 local_170 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_168;
  ForAnyElementType FStack_160;
  ulonglong local_158;
  int local_150;
  bool local_14c;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_148;
  ForAnyElementType FStack_140;
  ulonglong local_138;
  undefined1 local_130 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_128;
  ForAnyElementType FStack_120;
  ulonglong local_118;
  bool local_10f;
  bool local_10d;
  bool local_108;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_100;
  ForAnyElementType FStack_f8;
  ulonglong local_f0;
  undefined1 local_e8 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_d0;
  ForAnyElementType FStack_c8;
  ulonglong local_c0;
  FText local_b8;
  FText local_a8;
  FUIAction local_98;
  
  memset(local_1d0,0,200);
  lVar1 = *(longlong *)this;
  local_1b8 = 0;
  local_198 = 0;
  local_178 = 0;
  local_158 = 0;
  local_138 = 0;
  local_118 = 0;
  local_f0 = 0;
  local_2b8 = 0;
  local_1c8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_1c0.Data = (FScriptContainerElement *)0x0;
  local_1b0[0] = false;
  local_1b0[1] = false;
  local_1a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_1a0.Data = (FScriptContainerElement *)0x0;
  local_190[0] = false;
  local_190[1] = false;
  local_188.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_180.Data = (FScriptContainerElement *)0x0;
  local_170[0] = false;
  local_170[1] = false;
  local_168.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_160.Data = (FScriptContainerElement *)0x0;
  local_150 = 0;
  local_14c = false;
  local_148.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_140.Data = (FScriptContainerElement *)0x0;
  local_130[0] = Preferred;
  local_130[1] = false;
  local_128.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_120.Data = (FScriptContainerElement *)0x0;
  local_10f = false;
  local_10d = false;
  local_108 = false;
  local_100.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_f8.Data = (FScriptContainerElement *)0x0;
  local_2d0[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_2d0[1] = false;
  local_2c8 = (undefined1  [8])0x0;
  FStack_2c0.Data = (FScriptContainerElement *)0x0;
  local_e8._0_8_ = *(FName *)(lVar1 + 8);
  if ((FName)local_e8._0_8_ != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_e8._0_8_ + 8))(local_e8._0_8_,&local_res8);
  }
  local_e8._8_4_ = *(uint *)(lVar1 + 0x10);
  local_e8[0x10] = true;
  local_c0 = 0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_d0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_c8.Data = (FScriptContainerElement *)0x0;
  FMenuBuilder::BeginSection
            (param_1,(FName)0x0,(TAttribute<FText> *)local_e8,(TAttribute<EVisibility> *)local_2d0,
             (TAttribute<FMenuEntryResizeParams> *)local_1d0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_d0,(FWriteAccessScope *)&local_2e8);
  if (((int)local_c0 != 0) && (FStack_c8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_c8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_c8,0,0,0x10);
    local_c0 = local_c0 & 0xffffffff00000000;
  }
  if (local_2e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2e8.Accessor,&local_2e8);
  }
  if (FStack_c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_c8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d0.AccessDetector);
  if ((FName)local_e8._0_8_ != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_e8._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2c8,
             (FWriteAccessScope *)&local_2e8);
  if (((int)local_2b8 != 0) && (FStack_2c0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2c0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2c0,0,0,0x10);
    local_2b8 = local_2b8 & 0xffffffff00000000;
  }
  if (local_2e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2e8.Accessor,&local_2e8);
  }
  if (FStack_2c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2c0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2c8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_100,(FWriteAccessScope *)&local_2e8);
  if (((int)local_f0 != 0) && (FStack_f8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_f8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_f8,0,0,0x10);
    local_f0 = local_f0 & 0xffffffff00000000;
  }
  if (local_2e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2e8.Accessor,&local_2e8);
  }
  if (FStack_f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_f8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_100.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_128,(FWriteAccessScope *)&local_2e8);
  if (((int)local_118 != 0) && (FStack_120.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_120.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_120,0,0,0x10);
    local_118 = local_118 & 0xffffffff00000000;
  }
  if (local_2e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2e8.Accessor,&local_2e8);
  }
  if (FStack_120.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_120.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_128.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_148,(FWriteAccessScope *)&local_2e8);
  if (((int)local_138 != 0) && (FStack_140.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_140.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_140,0,0,0x10);
    local_138 = local_138 & 0xffffffff00000000;
  }
  if (local_2e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2e8.Accessor,&local_2e8);
  }
  if (FStack_140.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_140.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_148.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_168,(FWriteAccessScope *)&local_2e8);
  if (((int)local_158 != 0) && (FStack_160.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_160.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_160,0,0,0x10);
    local_158 = local_158 & 0xffffffff00000000;
  }
  if (local_2e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2e8.Accessor,&local_2e8);
  }
  if (FStack_160.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_160.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_168.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_188,(FWriteAccessScope *)&local_2e8);
  if (((int)local_178 != 0) && (FStack_180.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_180.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_180,0,0,0x10);
    local_178 = local_178 & 0xffffffff00000000;
  }
  if (local_2e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2e8.Accessor,&local_2e8);
  }
  if (FStack_180.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_180.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_188.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1a8,(FWriteAccessScope *)&local_2e8);
  if (((int)local_198 != 0) && (FStack_1a0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1a0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1a0,0,0,0x10);
    local_198 = local_198 & 0xffffffff00000000;
  }
  if (local_2e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2e8.Accessor,&local_2e8);
  }
  if (FStack_1a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1a0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1a8.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1c8,(FWriteAccessScope *)&local_2e8);
  if (((int)local_1b8 != 0) && (FStack_1c0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1c0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1c0,0,0,0x10);
    local_1b8 = local_1b8 & 0xffffffff00000000;
  }
  if (local_2e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2e8.Accessor,&local_2e8);
  }
  if (FStack_1c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1c0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1c8.AccessDetector);
  local_2b0[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_2b0[1] = false;
  local_298 = 0;
  local_2a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_2a0.Data = (FScriptContainerElement *)0x0;
  FText::FText((FText *)local_230);
  lVar1 = *(longlong *)this;
  local_230[0x10] = false;
  local_218.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_210.Data = (FScriptContainerElement *)0x0;
  local_208 = 0;
  local_2d0[0] = *(TEnumAsByte<EVisibility::Private> *)(lVar1 + 0x40);
  local_2d0[1] = *(undefined1 *)(lVar1 + 0x41);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_2c8 = (undefined1  [8])0x0;
  FStack_2c0.Data = (FScriptContainerElement *)0x0;
  local_2b8 = local_2b8 & 0xffffffff00000000;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_2c8,
             (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)(lVar1 + 0x48));
  local_200 = (undefined1  [8])0x0;
  local_1f8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_1f8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_200,
             (FWriteAccessScope *)&local_308);
  local_2f0 = &local_1f8;
  puVar4 = UE::Core::Private::DelegateAllocate(0x38,&local_1f8);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::`2'::<lambda_1>::operator()'::`10'::<lambda_2>::operator()'::`2'::<lambda_2>_>
               ::_vftable_;
    ((TEnumAsByte<EVisibility::Private> *)(puVar4 + 3))->Value = (uchar)local_2d0[0];
    *(undefined1 *)((longlong)puVar4 + 0x19) = local_2d0[1];
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar4 + 4),
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2c8);
  }
  if (local_308.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_308.Accessor,&local_308);
  }
  lVar1 = *(longlong *)this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x80),
             (FReadAccessScope *)&local_308);
  if ((*(int *)(lVar1 + 0x90) != 0) && (*(longlong **)(lVar1 + 0x88) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x88) + 0x38))();
    if (cVar2 != '\0') {
      uVar9 = 1;
      goto LAB_14d8cde8e;
    }
  }
  uVar9 = 0;
LAB_14d8cde8e:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_308);
  local_1e8 = (undefined1  [8])0x0;
  local_1e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_1e0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1e8,
             (FWriteAccessScope *)&local_308);
  local_2f0 = &local_1e0;
  puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_1e0);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::`2'::<lambda_1>::operator()'::`10'::<lambda_2>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    *(undefined1 *)(puVar4 + 3) = uVar9;
  }
  if (local_308.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_308.Accessor,&local_308);
  }
  local_2e8.AccessType = Reader;
  local_2e8._4_4_ = 0;
  local_2e8.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
  local_2e8.bDestroyed = false;
  local_2e8._17_3_ = 0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_2e8,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(*(longlong *)this + 0x80))
  ;
  pFVar6 = FUIAction::FUIAction
                     (&local_98,
                      (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_2e8,
                      (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_1e8,
                      (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_200,
                      RepeatDisabled);
  pFVar7 = FSlateIcon::FSlateIcon((FSlateIcon *)local_e8);
  pFVar8 = FText::FText(&local_a8);
  FText::FText((FText *)local_260,pFVar8);
  local_260[0x10] = true;
  local_238 = 0;
  local_248.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_240.Data = (FScriptContainerElement *)0x0;
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     (&local_b8,L"FLoudnessMeterWidgetView",
                      L"LayoutOptions_LoudnessMetric_ShowValue",L"Show Value");
  FText::FText((FText *)local_290,pFVar8);
  local_290[0x10] = true;
  local_268 = 0;
  local_278.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_270.Data = (FScriptContainerElement *)0x0;
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)param_1,(TAttribute<FText> *)local_290,
             (TAttribute<FText> *)local_260,pFVar7,pFVar6,(FName)0x0,ToggleButton,local_res8,
             (TAttribute<FText> *)local_230,(TAttribute<EVisibility> *)local_2b0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_278,(FWriteAccessScope *)&local_308);
  if (((int)local_268 != 0) && (FStack_270.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_270.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_270,0,0,0x10);
    local_268 = local_268 & 0xffffffff00000000;
  }
  if (local_308.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_308.Accessor,&local_308);
  }
  if (FStack_270.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_270.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_278.AccessDetector);
  if ((ITextData *)local_290._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_290._0_8_ + 0x10))();
  }
  if (local_b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_248,(FWriteAccessScope *)&local_308);
  if (((int)local_238 != 0) && (FStack_240.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_240.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_240,0,0,0x10);
    local_238 = local_238 & 0xffffffff00000000;
  }
  if (local_308.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_308.Accessor,&local_308);
  }
  if (FStack_240.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_240.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_248.AccessDetector);
  if ((ITextData *)local_260._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_260._0_8_ + 0x10))();
  }
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
  }
  FUIAction::~FUIAction(&local_98);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2c8,
             (FWriteAccessScope *)&local_308);
  if (((int)local_2b8 != 0) && (FStack_2c0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2c0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2c0,0,0,0x10);
    local_2b8 = local_2b8 & 0xffffffff00000000;
  }
  if (local_308.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_308.Accessor,&local_308);
  }
  if (FStack_2c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2c0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2c8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_218,(FWriteAccessScope *)&local_308);
  if (((int)local_208 != 0) && (FStack_210.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_210.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_210,0,0,0x10);
    local_208 = local_208 & 0xffffffff00000000;
  }
  if (local_308.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_308.Accessor,&local_308);
  }
  if (FStack_210.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_210.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_218.AccessDetector);
  if ((ITextData *)local_230._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_230._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_2a8,(FWriteAccessScope *)&local_308);
  if (((int)local_298 != 0) && (FStack_2a0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2a0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2a0,0,0,0x10);
    local_298 = local_298 & 0xffffffff00000000;
  }
  if (local_308.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_308.Accessor,&local_308);
  }
  if (FStack_2a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2a0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2a8.AccessDetector);
  local_2b0[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_2b0[1] = false;
  local_298 = 0;
  local_2a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_2a0.Data = (FScriptContainerElement *)0x0;
  FText::FText((FText *)local_290);
  lVar1 = *(longlong *)this;
  local_290[0x10] = false;
  local_278.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_270.Data = (FScriptContainerElement *)0x0;
  local_268 = 0;
  local_2d0[0] = *(TEnumAsByte<EVisibility::Private> *)(lVar1 + 0x60);
  local_2d0[1] = *(undefined1 *)(lVar1 + 0x61);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_2c8 = (undefined1  [8])0x0;
  FStack_2c0.Data = (FScriptContainerElement *)0x0;
  local_2b8 = local_2b8 & 0xffffffff00000000;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_2c8,
             (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)(lVar1 + 0x68));
  local_1e8 = (undefined1  [8])0x0;
  local_1e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_1e0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1e8,
             (FWriteAccessScope *)&local_308);
  local_2f0 = &local_1e0;
  puVar4 = UE::Core::Private::DelegateAllocate(0x38,&local_1e0);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::`2'::<lambda_1>::operator()'::`10'::<lambda_2>::operator()'::`2'::<lambda_4>_>
               ::_vftable_;
    ((TEnumAsByte<EVisibility::Private> *)(puVar4 + 3))->Value = (uchar)local_2d0[0];
    *(undefined1 *)((longlong)puVar4 + 0x19) = local_2d0[1];
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar4 + 4),
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2c8);
  }
  if (local_308.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_308.Accessor,&local_308);
  }
  bVar3 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)(*(longlong *)this + 0x98));
  local_200 = (undefined1  [8])0x0;
  local_1f8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_1f8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_200,
             (FWriteAccessScope *)&local_308);
  local_2f0 = &local_1f8;
  puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_1f8);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::`2'::<lambda_1>::operator()'::`10'::<lambda_2>::operator()'::`2'::<lambda_3>_>
               ::_vftable_;
    *(bool *)(puVar4 + 3) = bVar3;
  }
  if (local_308.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_308.Accessor,&local_308);
  }
  local_2e8.AccessType = Reader;
  local_2e8._4_4_ = 0;
  local_2e8.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
  local_2e8.bDestroyed = false;
  local_2e8._17_3_ = 0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_2e8,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(*(longlong *)this + 0x98))
  ;
  pFVar6 = FUIAction::FUIAction
                     (&local_98,
                      (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_2e8,
                      (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_200,
                      (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_1e8,
                      RepeatDisabled);
  pFVar7 = FSlateIcon::FSlateIcon((FSlateIcon *)local_e8);
  pFVar8 = FText::FText(&local_b8);
  FText::FText((FText *)local_260,pFVar8);
  local_260[0x10] = true;
  local_238 = 0;
  local_248.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_240.Data = (FScriptContainerElement *)0x0;
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     (&local_a8,L"FLoudnessMeterWidgetView",
                      L"LayoutOptions_LoudnessMetric_ShowMeter",L"Show Meter");
  FText::FText((FText *)local_230,pFVar8);
  local_230[0x10] = true;
  local_208 = 0;
  local_218.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_210.Data = (FScriptContainerElement *)0x0;
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)param_1,(TAttribute<FText> *)local_230,
             (TAttribute<FText> *)local_260,pFVar7,pFVar6,(FName)0x0,ToggleButton,local_res8,
             (TAttribute<FText> *)local_290,(TAttribute<EVisibility> *)local_2b0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_218,(FWriteAccessScope *)&local_308);
  if (((int)local_208 != 0) && (FStack_210.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_210.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_210,0,0,0x10);
    local_208 = local_208 & 0xffffffff00000000;
  }
  if (local_308.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_308.Accessor,&local_308);
  }
  if (FStack_210.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_210.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_218.AccessDetector);
  if ((ITextData *)local_230._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_230._0_8_ + 0x10))();
  }
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_248,(FWriteAccessScope *)&local_308);
  if (((int)local_238 != 0) && (FStack_240.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_240.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_240,0,0,0x10);
    local_238 = local_238 & 0xffffffff00000000;
  }
  if (local_308.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_308.Accessor,&local_308);
  }
  if (FStack_240.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_240.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_248.AccessDetector);
  if ((ITextData *)local_260._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_260._0_8_ + 0x10))();
  }
  if (local_b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
  }
  FUIAction::~FUIAction(&local_98);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2c8,
             (FWriteAccessScope *)&local_308);
  if (((int)local_2b8 != 0) && (FStack_2c0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2c0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2c0,0,0,0x10);
    local_2b8 = local_2b8 & 0xffffffff00000000;
  }
  if (local_308.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_308.Accessor,&local_308);
  }
  if (FStack_2c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2c0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2c8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_278,(FWriteAccessScope *)&local_308);
  if (((int)local_268 != 0) && (FStack_270.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_270.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_270,0,0,0x10);
    local_268 = local_268 & 0xffffffff00000000;
  }
  if (local_308.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_308.Accessor,&local_308);
  }
  if (FStack_270.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_270.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_278.AccessDetector);
  if ((ITextData *)local_290._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_290._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_2a8,(FWriteAccessScope *)&local_308);
  if (((int)local_298 != 0) && (FStack_2a0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2a0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2a0,0,0,0x10);
    local_298 = local_298 & 0xffffffff00000000;
  }
  if (local_308.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_308.Accessor,&local_308);
  }
  if (FStack_2a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2a0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2a8.AccessDetector);
  FMenuBuilder::EndSection(param_1);
  return;
}

// operator() @ 14d8cecd0

TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_> * __thiscall
`AudioWidgets::LoudnessMeterWidgetView_Private::MakeMeterValueTileWidget'::__l2::<lambda_3>::
operator()(void *this,
          TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  TOptional<float> *pTVar2;
  float fVar3;
  
  pTVar2 = TAttribute<TOptional<float>_>::Get
                     ((TAttribute<TOptional<float>_> *)(*(longlong *)this + 0x18));
  fVar3 = __real_c3200000;
  if (pTVar2->bIsSet != false) {
    fVar3 = pTVar2->TypedValue;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,1,0,&__return_storage_ptr__->AllocatorInstance,1,
             &__return_storage_ptr__->ArrayMax);
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  *(ulonglong *)pFVar1 = CONCAT44(0xc3200000,fVar3);
  *(undefined4 *)(pFVar1 + 8) = 0xc3200000;
  return __return_storage_ptr__;
}

// `vcall'{152,{flat}}'_}' @ 14d8d1f54

/* [thunk]: __cdecl STableRow<class TSharedPtr<enum EAudioOscilloscopeTriggerMode,1>
   >::`vcall'{152,{flat}}' }' */

void __thiscall
STableRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>::_vcall__152__flat______
          (STableRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d8d1f57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x98))();
  return;
}

// `vcall'{152,{flat}}'_}' @ 14d8d1f64

/* [thunk]: __cdecl STableRow<class TSharedRef<struct
   AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric const ,1> >::`vcall'{152,{flat}}' }' */

void __thiscall
STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::
_vcall__152__flat______
          (STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
           *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d8d1f67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x98))();
  return;
}

// `vcall'{8,{flat}}'_}' @ 14d8d1f74

/* WARNING: Enum "Type": Some values do not have unique names */
/* [thunk]: __cdecl SAudioOscilloscopePanelWidget::`vcall'{8,{flat}}' }' */

void __thiscall
SAudioOscilloscopePanelWidget::_vcall__8__flat______(SAudioOscilloscopePanelWidget *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d8d1f77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 8))();
  return;
}

// `vcall'{8,{flat}}'_}' @ 14d8d1f80

/* WARNING: Enum "Type": Some values do not have unique names */
/* [thunk]: __cdecl SAudioVectorscopePanelWidget::`vcall'{8,{flat}}' }' */

void __thiscall
SAudioVectorscopePanelWidget::_vcall__8__flat______(SAudioVectorscopePanelWidget *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d8d1f83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 8))();
  return;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14d8d1f8c

/* [thunk]:public: virtual void * __ptr64 __cdecl SComboRow<class TSharedPtr<enum
   EAudioOscilloscopeTriggerMode,1> >::`vector deleting destructor'`adjustor{8}' (unsigned int)
   __ptr64 */

void * __thiscall
SComboRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>::_vector_deleting_destructor__adjustor_8__
          (SComboRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = SComboRow<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::
           _scalar_deleting_destructor_(&this[-1].field_0x3f0,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{680}' @ 14d8d1f9c

/* [thunk]:public: virtual void * __ptr64 __cdecl SListView<class TSharedPtr<enum
   EAudioOscilloscopeTriggerMode,1> >::`vector deleting destructor'`adjustor{680}' (unsigned int)
   __ptr64 */

void * __thiscall
SListView<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>::_vector_deleting_destructor__adjustor_680__
          (SListView<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = SListView<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::
           _scalar_deleting_destructor_(&this[-1].OnGenerateRow.field_0x10,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{680}' @ 14d8d1fb0

/* [thunk]:public: virtual void * __ptr64 __cdecl SListView<class TSharedRef<struct
   AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric const ,1> >::`vector deleting
   destructor'`adjustor{680}' (unsigned int) __ptr64 */

void * __thiscall
SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::
_vector_deleting_destructor__adjustor_680__
          (SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
           *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
                       *)&this[-1].OnGenerateRow.field_0x10,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14d8d1fc4

/* [thunk]:public: virtual void * __ptr64 __cdecl STableRow<class TSharedPtr<enum
   EAudioOscilloscopeTriggerMode,1> >::`vector deleting destructor'`adjustor{8}' (unsigned int)
   __ptr64 */

void * __thiscall
STableRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>::_vector_deleting_destructor__adjustor_8__
          (STableRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = STableRow<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::
           _scalar_deleting_destructor_(&this[-1].bChangedSelectionOnMouseDown,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14d8d1fd4

/* [thunk]:public: virtual void * __ptr64 __cdecl STableRow<class TSharedRef<struct
   AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric const ,1> >::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::
_vector_deleting_destructor__adjustor_8__
          (STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
           *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
                       *)&this[-1].bChangedSelectionOnMouseDown,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{680}' @ 14d8d1fe4

/* [thunk]:public: virtual void * __ptr64 __cdecl STileView<class TSharedRef<struct
   AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric const ,1> >::`vector deleting
   destructor'`adjustor{680}' (unsigned int) __ptr64 */

void * __thiscall
STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::
_vector_deleting_destructor__adjustor_680__
          (STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
           *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
                       *)&this[-1].field_0x768,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{680}' @ 14d8d1ff8

/* WARNING: Enum "Type": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl SAudioOscilloscopePanelWidget::`vector deleting
   destructor'`adjustor{680}' (unsigned int) __ptr64 */

void * __thiscall
SAudioOscilloscopePanelWidget::_vector_deleting_destructor__adjustor_680__
          (SAudioOscilloscopePanelWidget *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SAudioOscilloscopePanelWidget *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{680}' @ 14d8d200c

/* WARNING: Enum "Type": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl SAudioVectorscopePanelWidget::`vector deleting
   destructor'`adjustor{680}' (unsigned int) __ptr64 */

void * __thiscall
SAudioVectorscopePanelWidget::_vector_deleting_destructor__adjustor_680__
          (SAudioVectorscopePanelWidget *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((SAudioVectorscopePanelWidget *)&this[-1]._padding_,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d8d2020

/* [thunk]:public: virtual void * __ptr64 __cdecl UAudioFrequencyRadialSlider::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAudioFrequencyRadialSlider::_vector_deleting_destructor__adjustor_40__
          (UAudioFrequencyRadialSlider *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UAudioFrequencyRadialSlider *)&this[-1].field_0x398,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d8d2030

/* [thunk]:public: virtual void * __ptr64 __cdecl UAudioFrequencySlider::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAudioFrequencySlider::_vector_deleting_destructor__adjustor_40__
          (UAudioFrequencySlider *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAudioFrequencySlider *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d8d2040

/* [thunk]:public: virtual void * __ptr64 __cdecl UAudioMaterialButton::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAudioMaterialButton::_vector_deleting_destructor__adjustor_40__
          (UAudioMaterialButton *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UAudioMaterialButton *)&this[-1].OnButtonPressedChangedEvent.field_0x8,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d8d2050

/* [thunk]:public: virtual void * __ptr64 __cdecl UAudioMaterialButtonWidgetStyle::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAudioMaterialButtonWidgetStyle::_vector_deleting_destructor__adjustor_40__
          (UAudioMaterialButtonWidgetStyle *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UAudioMaterialButtonWidgetStyle *)
                      ((longlong)&this[-1].ButtonStyle.ButtonShadowColor.field0_0x0 + 8),param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d8d2060

/* [thunk]:public: virtual void * __ptr64 __cdecl UAudioMaterialEnvelope::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAudioMaterialEnvelope::_vector_deleting_destructor__adjustor_40__
          (UAudioMaterialEnvelope *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UAudioMaterialEnvelope *)&this[-1].EnvelopeSettings.DecayCurve,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d8d2070

/* [thunk]:public: virtual void * __ptr64 __cdecl UAudioMaterialKnob::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAudioMaterialKnob::_vector_deleting_destructor__adjustor_40__
          (UAudioMaterialKnob *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAudioMaterialKnob *)&this[-1].Value,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d8d2080

/* [thunk]:public: virtual void * __ptr64 __cdecl UAudioMaterialKnobWidgetStyle::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAudioMaterialKnobWidgetStyle::_vector_deleting_destructor__adjustor_40__
          (UAudioMaterialKnobWidgetStyle *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UAudioMaterialKnobWidgetStyle *)
                      &this[-1].KnobStyle.TextBoxStyle.BackgroundImage.ResourceName,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d8d2090

/* [thunk]:public: virtual void * __ptr64 __cdecl UAudioMaterialMeter::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAudioMaterialMeter::_vector_deleting_destructor__adjustor_40__
          (UAudioMaterialMeter *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UAudioMaterialMeter *)&this[-1].MeterChannelInfoDelegate.field_0x10,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d8d20a0

/* [thunk]:public: virtual void * __ptr64 __cdecl UAudioMaterialMeterWidgetStyle::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAudioMaterialMeterWidgetStyle::_vector_deleting_destructor__adjustor_40__
          (UAudioMaterialMeterWidgetStyle *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UAudioMaterialMeterWidgetStyle *)
                      &this[-1].MeterStyle.Font.CompositeFont.SharedReferenceCount,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d8d20b0

/* [thunk]:public: virtual void * __ptr64 __cdecl UAudioMaterialSlider::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAudioMaterialSlider::_vector_deleting_destructor__adjustor_40__
          (UAudioMaterialSlider *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAudioMaterialSlider *)&this[-1].Value,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d8d20c0

/* [thunk]:public: virtual void * __ptr64 __cdecl UAudioMaterialSliderWidgetStyle::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAudioMaterialSliderWidgetStyle::_vector_deleting_destructor__adjustor_40__
          (UAudioMaterialSliderWidgetStyle *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UAudioMaterialSliderWidgetStyle *)
                      &this[-1].SliderStyle.TextBoxStyle.BackgroundImage.ResourceName,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d8d20d0

/* [thunk]:public: virtual void * __ptr64 __cdecl UAudioMeter::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAudioMeter::_vector_deleting_destructor__adjustor_40__(UAudioMeter *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UAudioMeter *)((longlong)&this[-1].MeterScaleLabelColor.field0_0x0 + 4),
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d8d20e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UAudioOscilloscope::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAudioOscilloscope::_vector_deleting_destructor__adjustor_40__
          (UAudioOscilloscope *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UAudioOscilloscope *)&this[-1].DummyAudioSamples.ArrayNum,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d8d20f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UAudioRadialSlider::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAudioRadialSlider::_vector_deleting_destructor__adjustor_40__
          (UAudioRadialSlider *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UAudioRadialSlider *)&this[-1].WidgetStyle.SliderProgressColor.ColorUseRule,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d8d2100

/* [thunk]:public: virtual void * __ptr64 __cdecl UAudioSlider::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAudioSlider::_vector_deleting_destructor__adjustor_40__(UAudioSlider *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAudioSlider *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d8d2110

/* WARNING: Enum "Type": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UAudioSliderBase::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAudioSliderBase::_vector_deleting_destructor__adjustor_40__(UAudioSliderBase *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UAudioSliderBase *)
                      ((longlong)
                       &this[-1].WidgetStyle.WidgetBackgroundColor.SpecifiedColor.field0_0x0 + 4),
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d8d2120

/* WARNING: Enum "Type": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UAudioVectorscope::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAudioVectorscope::_vector_deleting_destructor__adjustor_40__(UAudioVectorscope *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UAudioVectorscope *)&this[-1].DummyAudioSamples.ArrayNum,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d8d2130

/* [thunk]:public: virtual void * __ptr64 __cdecl UAudioVolumeRadialSlider::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAudioVolumeRadialSlider::_vector_deleting_destructor__adjustor_40__
          (UAudioVolumeRadialSlider *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAudioVolumeRadialSlider *)&this[-1].field_0x398,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d8d2140

/* [thunk]:public: virtual void * __ptr64 __cdecl UAudioVolumeSlider::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAudioVolumeSlider::_vector_deleting_destructor__adjustor_40__
          (UAudioVolumeSlider *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAudioVolumeSlider *)&this[-1].field_0x918,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14d8d2150

void * __thiscall
UE::Slate::ItemsSource::FArrayPointer<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d2180

void * __thiscall
UE::Slate::ItemsSource::
FArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::
_scalar_deleting_destructor_
          (FArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d21b0

void * __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  void *pvVar6;
  
  *(undefined ***)this =
       &
       ___7__FObservableArrayPointer_V__TSharedPtr_W4EAudioOscilloscopeTriggerMode___00___ItemsSource_Slate_UE__6B_
  ;
  if (((*(longlong *)((longlong)this + 0x10) == 0) || (*(longlong *)((longlong)this + 0x18) == 0))
     || (*(int *)(*(longlong *)((longlong)this + 0x18) + 8) < 1)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ListViewOwner.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\IItemsSource.h"
                       ,0xa6,
                       L"The View widget has a source needed to be released to prevent bad memory access."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pvVar6 = (void *)(*pcVar4)();
      return pvVar6;
    }
  }
  if (*(ulong64 *)((longlong)this + 0x20) != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               (*(longlong *)((longlong)this + 8) + 0x10),
               (FDelegateHandle)*(ulong64 *)((longlong)this + 0x20));
  }
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d2270

void * __thiscall
UE::Slate::ItemsSource::
FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
::_scalar_deleting_destructor_
          (FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FDelegateHandle FVar4;
  code *pcVar5;
  bool bVar6;
  void *pvVar7;
  
  this->_padding_ =
       (longlong)
       &
       ___7__FObservableArrayPointer_V__TSharedRef___CBUFLoudnessMetric_FLoudnessMeterWidgetView_AudioWidgets___00___ItemsSource_Slate_UE__6B_
  ;
  if ((((this->ListViewOwner).Object == (STableViewBase *)0x0) ||
      (pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController,
      pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ListViewOwner.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\IItemsSource.h"
                       ,0xa6,
                       L"The View widget has a source needed to be released to prevent bad memory access."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pvVar7 = (void *)(*pcVar5)();
      return pvVar7;
    }
  }
  FVar4.ID = (this->ArrayChangedHandle).ID;
  if (FVar4.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->ItemsSource->ArrayChangedDelegate,FVar4);
  }
  pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d2330

void * __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &
       ___7__FSharedObservableArray_V__TSharedPtr_W4EAudioOscilloscopeTriggerMode___00___ItemsSource_Slate_UE__6B_
  ;
  if (*(ulong64 *)((longlong)this + 0x28) != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               (*(longlong *)((longlong)this + 8) + 0x10),
               (FDelegateHandle)*(ulong64 *)((longlong)this + 0x28));
  }
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d23c0

void * __thiscall
UE::Slate::ItemsSource::
FSharedObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
::_scalar_deleting_destructor_
          (FSharedObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FDelegateHandle FVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  FVar3.ID = (this->ArrayChangedHandle).ID;
  this->_padding_ =
       (longlong)
       &
       ___7__FSharedObservableArray_V__TSharedRef___CBUFLoudnessMetric_FLoudnessMeterWidgetView_AudioWidgets___00___ItemsSource_Slate_UE__6B_
  ;
  if (FVar3.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &((this->ItemsSource).Object)->ArrayChangedDelegate,FVar3);
  }
  pTVar4 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ItemsSource).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d2450

void * __thiscall
IBaseDelegateInstance<FAudioPowerSpectrumData___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<FAudioPowerSpectrumData___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d2480

void * __thiscall
IBaseDelegateInstance<FTimespan___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<FTimespan___cdecl(void),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d24b0

void * __thiscall
IBaseDelegateInstance<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d24e0

void * __thiscall
IBaseDelegateInstance<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d2510

void * __thiscall
IBaseDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d2540

void * __thiscall
IBaseDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d2570

void * __thiscall
IBaseDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d25a0

void * __thiscall
IBaseDelegateInstance<FString___cdecl(TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d25d0

void * __thiscall
IBaseDelegateInstance<FString___cdecl(TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<FString___cdecl(TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d2600

void * __thiscall
IBaseDelegateInstance<enum_EAudioColorGradient___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d2630

void * __thiscall
IBaseDelegateInstance<enum_EAudioSpectrogramFrequencyAxisPixelBucketMode___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d2660

void * __thiscall
IBaseDelegateInstance<enum_EAudioSpectrogramFrequencyAxisScale___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d2690

void * __thiscall
IBaseDelegateInstance<enum_EAudioSpectrumAnalyzerBallistics___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d26c0

void * __thiscall
IBaseDelegateInstance<enum_EAudioSpectrumAnalyzerType___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d26f0

void * __thiscall
IBaseDelegateInstance<enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d2720

void * __thiscall
IBaseDelegateInstance<enum_EAudioSpectrumPlotFrequencyAxisScale___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d2750

void * __thiscall
IBaseDelegateInstance<enum_EConstantQFFTSizeEnum___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d2780

void * __thiscall
IBaseDelegateInstance<enum_EFFTSize___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d27b0

void * __thiscall
IBaseDelegateInstance<void___cdecl(UConstantQAnalyzer_*,int,TArray<FConstantQResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UConstantQAnalyzer_*,int,TArray<FConstantQResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d27e0

void * __thiscall
IBaseDelegateInstance<void___cdecl(ULKFSAnalyzer_*,FLKFSResults_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(ULKFSAnalyzer_*,FLKFSResults_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d2810

void * __thiscall
IBaseDelegateInstance<void___cdecl(UMeterAnalyzer_*,int,FMeterResults_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UMeterAnalyzer_*,int,FMeterResults_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d2840

void * __thiscall
IBaseDelegateInstance<void___cdecl(USynesthesiaSpectrumAnalyzer_*,int,TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(USynesthesiaSpectrumAnalyzer_*,int,TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d2870

void * __thiscall
IBaseDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d28a0

void * __thiscall
IBaseDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d28d0

void * __thiscall
IBaseDelegateInstance<void___cdecl(FFixedSampledSequenceView,unsigned_int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FFixedSampledSequenceView,unsigned_int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d2900

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d2930

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_EAudioColorGradient),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d2960

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_EAudioOscilloscopeTriggerMode),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d2990

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_EAudioSpectrogramFrequencyAxisPixelBucketMode),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d29c0

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_EAudioSpectrogramFrequencyAxisScale),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d29f0

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_EAudioSpectrumAnalyzerBallistics),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d2a20

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_EAudioSpectrumAnalyzerType),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d2a50

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d2a80

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_EAudioSpectrumPlotFrequencyAxisScale),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d2ab0

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_EAudioSpectrumPlotTilt),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d2ae0

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_EConstantQFFTSizeEnum),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d2b10

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_EFFTSize),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d2b40

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_EOrientation),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d2b70

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_ESampledSequenceDisplayUnit),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d2ba0

void * __thiscall
UE::Slate::ItemsSource::IItemsSource<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d2bd0

void * __thiscall
UE::Slate::ItemsSource::
IItemsSource<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::
_scalar_deleting_destructor_
          (IItemsSource<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d2c00

void * __thiscall
SComboBox<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::_scalar_deleting_destructor_
          (void *this,uint param_1)

{
  ~SComboBox<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x4d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d2c60

void * __thiscall
SComboRow<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::_scalar_deleting_destructor_
          (void *this,uint param_1)

{
  STableRow<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::
  ~STableRow<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x3f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d2cc0

void * __thiscall
SListView<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::_scalar_deleting_destructor_
          (void *this,uint param_1)

{
  ~SListView<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0xa00);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d2d20

void * __thiscall
SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::
_scalar_deleting_destructor_
          (SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
           *this,uint param_1)

{
  ~SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0xa00);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d2d80

void * __thiscall
STableRow<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::_scalar_deleting_destructor_
          (void *this,uint param_1)

{
  ~STableRow<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x3f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d2de0

void * __thiscall
STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::
_scalar_deleting_destructor_
          (STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
           *this,uint param_1)

{
  ~STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x3f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d2e40

void * __thiscall
STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::
_scalar_deleting_destructor_
          (STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
           *this,uint param_1)

{
  SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::
  ~SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
            ((SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
              *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0xa10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d2ea0

void * __thiscall
TBaseFunctorDelegateInstance<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void)>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy,TFunction<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void)>_>
           *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Functor != 0) {
    plVar1 = *(longlong **)&(this->Functor).field_0x28;
    plVar2 = (longlong *)&(this->Functor).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d2f00

void * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::CreateWidget'::__l9::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d2f30

void * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateChannelCombobox'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d2f60

void * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerModeCombobox'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d2f90

void * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>_const_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0xa8));
  AudioWidgets::FLoudnessMeterWidgetView::FTimerPanelParams::~FTimerPanelParams
            ((FTimerPanelParams *)((longlong)this + 0x28));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d2ff0

void * __thiscall
TBaseFunctorDelegateInstance<enum_EAudioColorGradient___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_6>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d3020

void * __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrogramFrequencyAxisPixelBucketMode___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_4>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d3050

void * __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrogramFrequencyAxisScale___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_5>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d3080

void * __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrumAnalyzerBallistics___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d30b0

void * __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrumAnalyzerType___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d30e0

void * __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrumAnalyzerType___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d3110

void * __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_6>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d3140

void * __thiscall
TBaseFunctorDelegateInstance<enum_EAudioSpectrumPlotFrequencyAxisScale___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_7>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d3170

void * __thiscall
TBaseFunctorDelegateInstance<enum_EConstantQFFTSizeEnum___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d31a0

void * __thiscall
TBaseFunctorDelegateInstance<enum_EConstantQFFTSizeEnum___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_4>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d31d0

void * __thiscall
TBaseFunctorDelegateInstance<enum_EFFTSize___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d3200

void * __thiscall
TBaseFunctorDelegateInstance<enum_EFFTSize___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d3230

void * __thiscall
TBaseFunctorDelegateInstance<enum_EOrientation___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_7>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d3260

void * __thiscall
TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_4>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d3290

void * __thiscall
TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_5>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d32c0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledKnob::Construct'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d32f0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledSlider::Construct'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d3320

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioRadialSlider::Construct'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d3350

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioSliderBase::Construct'::__l2::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d3380

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioSliderBase::Construct'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d33b0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateAnalysisPeriodKnob'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d33e0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateDisplayPersistenceKnob'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d3410

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateScaleKnob'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d3440

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTimeWindowKnob'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d3470

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d34a0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledKnob::Construct'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d34d0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledSlider::Construct'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d3500

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioRadialSlider::Construct'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d3530

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioMaterialLabeledSlider::Construct'::__l2::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d3560

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<FString,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateChannelCombobox'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d3590

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerModeCombobox'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d35c0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SDockTab,1>),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::CreateWidget'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d3620

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioColorGradient),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_13>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d3650

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrogramFrequencyAxisPixelBucketMode),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_11>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d3680

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrogramFrequencyAxisScale),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_12>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d36b0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumAnalyzerBallistics),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_10>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d36e0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumAnalyzerType),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_11>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d3710

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumAnalyzerType),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_8>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d3740

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_15>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d3770

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumPlotFrequencyAxisScale),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_16>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d37a0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumPlotTilt),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_14>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d37d0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EConstantQFFTSizeEnum),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_10>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d3800

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EConstantQFFTSizeEnum),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_13>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d3830

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EFFTSize),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_12>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d3860

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EFFTSize),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_9>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d3890

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EOrientation),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_14>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d38c0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_17>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d38f0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_18>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d3920

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::MakeVisibleAnalyzersMenu'::__l12::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d3980

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioSliderBase::Construct'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d39b0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateAnalysisPeriodKnob'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d39e0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateDisplayPersistenceKnob'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d3a10

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateScaleKnob'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d3a40

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTimeWindowKnob'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d3a70

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d3aa0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateAnalysisPeriodKnob'::__l2::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d3ad0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateDisplayPersistenceKnob'::__l2::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d3b00

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioVectorscopePanelWidget::CreateScaleKnob'::__l2::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d3b30

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTimeWindowKnob'::__l2::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d3b60

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::__l2::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d3b90

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l8::<lambda_5>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d3bc0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l15::<lambda_8>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d3bf0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l15::<lambda_9>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d3c20

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l10::<lambda_2>::operator()'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d3c50

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d3c80

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,``AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x20));
  if (*(void **)((longlong)this + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x28));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x20));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d3ce0

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l10::<lambda_2>::operator()'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x20));
  if (*(void **)((longlong)this + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x28));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x20));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d3d40

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d3d70

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioAnalyzerRack::MakeVisibleAnalyzersMenu'::__l12::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d3dd0

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l10::<lambda_2>::operator()'::__l2::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d3e00

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::__l2::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d3e30

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,```AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l10::<lambda_2>::operator()'::__l2::<lambda_4>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x20));
  if (*(void **)((longlong)this + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x28));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x20));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d3e90

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFixedSampledSequenceRuler::MakeTimeUnitsSubMenu'::__l2::<lambda_4>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d3ec0

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l8::<lambda_4>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d3ef0

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l15::<lambda_6>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d3f20

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l15::<lambda_7>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d3f50

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_8>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d3f80

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_9>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d3fb0

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d3fe0

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d4010

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d4040

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d4070

void * __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioLoudnessMeter,void___cdecl(ULKFSAnalyzer_*,FLKFSResults_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioLoudnessMeter,void___cdecl(ULKFSAnalyzer_*,FLKFSResults_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d40a0

void * __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioMeter,void___cdecl(UMeterAnalyzer_*,int,FMeterResults_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioMeter,void___cdecl(UMeterAnalyzer_*,int,FMeterResults_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d40d0

void * __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d4100

void * __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d4130

void * __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(UConstantQAnalyzer_*,int,TArray<FConstantQResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(UConstantQAnalyzer_*,int,TArray<FConstantQResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d4160

void * __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(USynesthesiaSpectrumAnalyzer_*,int,TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,void___cdecl(USynesthesiaSpectrumAnalyzer_*,int,TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d4190

void * __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,FAudioPowerSpectrumData___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,FAudioPowerSpectrumData___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d41c0

void * __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d41f0

void * __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(UConstantQAnalyzer_*,int,TArray<FConstantQResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(UConstantQAnalyzer_*,int,TArray<FConstantQResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d4220

void * __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(USynesthesiaSpectrumAnalyzer_*,int,TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,void___cdecl(USynesthesiaSpectrumAnalyzer_*,int,TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d4250

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,AudioWidgets::FWaveformAudioSamplesDataProvider,bool___cdecl(float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,AudioWidgets::FWaveformAudioSamplesDataProvider,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d4280

void * __thiscall
TBaseSPLambdaDelegateInstance<1,TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d42e0

void * __thiscall
TBaseSPLambdaDelegateInstance<1,TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d4340

void * __thiscall
TBaseSPLambdaDelegateInstance<1,TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l2::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d43a0

void * __thiscall
TBaseSPLambdaDelegateInstance<1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d4400

void * __thiscall
TBaseSPLambdaDelegateInstance<1,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,``AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_1>::operator()'::__l10::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d4460

void * __thiscall
TBaseSPLambdaDelegateInstance<1,void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::BuildAnalyzerTypeSubMenu'::__l4::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d44c0

void * __thiscall
TBaseSPLambdaDelegateInstance<1,void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::BuildAnalyzerTypeSubMenu'::__l4::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d4520

void * __thiscall
TBaseSPLambdaDelegateInstance<1,void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::BuildBallisticsSubMenu'::__l4::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d4580

void * __thiscall
TBaseSPLambdaDelegateInstance<1,void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioSpectrogram::BuildColorMapSubMenu'::__l4::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d45e0

void * __thiscall
TBaseSPLambdaDelegateInstance<1,void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioSpectrogram::BuildFrequencyAxisPixelBucketModeSubMenu'::__l4::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d4640

void * __thiscall
TBaseSPLambdaDelegateInstance<1,void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioSpectrumPlot::BuildFrequencyAxisPixelBucketModeSubMenu'::__l4::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d46a0

void * __thiscall
TBaseSPLambdaDelegateInstance<1,void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioSpectrogram::BuildFrequencyAxisScaleSubMenu'::__l4::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d4700

void * __thiscall
TBaseSPLambdaDelegateInstance<1,void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioSpectrumPlot::BuildFrequencyAxisScaleSubMenu'::__l4::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d4760

void * __thiscall
TBaseSPLambdaDelegateInstance<1,void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioSpectrogram::BuildOrientationSubMenu'::__l4::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d47c0

void * __thiscall
TBaseSPLambdaDelegateInstance<1,void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioSpectrumPlot::BuildTiltSpectrumSubMenu'::__l4::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d4820

void * __thiscall
TBaseSPLambdaDelegateInstance<1,void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::BuildFFTSizeSubMenu'::__l7::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d4880

void * __thiscall
TBaseSPLambdaDelegateInstance<1,void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::BuildFFTSizeSubMenu'::__l7::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d48e0

void * __thiscall
TBaseSPLambdaDelegateInstance<1,void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioSpectrumPlot::BuildDefaultContextMenu'::__l14::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d4940

void * __thiscall
TBaseSPLambdaDelegateInstance<1,void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::BuildFFTSizeSubMenu'::__l16::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d49a0

void * __thiscall
TBaseSPLambdaDelegateInstance<1,void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::BuildFFTSizeSubMenu'::__l16::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d4a00

void * __thiscall
TBaseSPLambdaDelegateInstance<1,void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioSpectrumPlot::BuildDefaultContextMenu'::__l17::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d4a60

void * __thiscall
TBaseSPLambdaDelegateInstance<1,bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::BuildAnalyzerTypeSubMenu'::__l4::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d4ac0

void * __thiscall
TBaseSPLambdaDelegateInstance<1,bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::BuildAnalyzerTypeSubMenu'::__l4::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d4b20

void * __thiscall
TBaseSPLambdaDelegateInstance<1,bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::BuildBallisticsSubMenu'::__l4::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d4b80

void * __thiscall
TBaseSPLambdaDelegateInstance<1,bool___cdecl(void),FDefaultDelegateUserPolicy,`SAudioSpectrogram::BuildColorMapSubMenu'::__l4::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d4be0

void * __thiscall
TBaseSPLambdaDelegateInstance<1,bool___cdecl(void),FDefaultDelegateUserPolicy,`SAudioSpectrogram::BuildFrequencyAxisPixelBucketModeSubMenu'::__l4::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d4c40

void * __thiscall
TBaseSPLambdaDelegateInstance<1,bool___cdecl(void),FDefaultDelegateUserPolicy,`SAudioSpectrumPlot::BuildFrequencyAxisPixelBucketModeSubMenu'::__l4::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d4ca0

void * __thiscall
TBaseSPLambdaDelegateInstance<1,bool___cdecl(void),FDefaultDelegateUserPolicy,`SAudioSpectrogram::BuildFrequencyAxisScaleSubMenu'::__l4::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d4d00

void * __thiscall
TBaseSPLambdaDelegateInstance<1,bool___cdecl(void),FDefaultDelegateUserPolicy,`SAudioSpectrumPlot::BuildFrequencyAxisScaleSubMenu'::__l4::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d4d60

void * __thiscall
TBaseSPLambdaDelegateInstance<1,bool___cdecl(void),FDefaultDelegateUserPolicy,`SAudioSpectrogram::BuildOrientationSubMenu'::__l4::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d4dc0

void * __thiscall
TBaseSPLambdaDelegateInstance<1,bool___cdecl(void),FDefaultDelegateUserPolicy,`SAudioSpectrumPlot::BuildTiltSpectrumSubMenu'::__l4::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d4e20

void * __thiscall
TBaseSPLambdaDelegateInstance<1,bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::BuildFFTSizeSubMenu'::__l7::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d4e80

void * __thiscall
TBaseSPLambdaDelegateInstance<1,bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::BuildFFTSizeSubMenu'::__l7::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d4ee0

void * __thiscall
TBaseSPLambdaDelegateInstance<1,bool___cdecl(void),FDefaultDelegateUserPolicy,`SAudioSpectrumPlot::BuildDefaultContextMenu'::__l14::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d4f40

void * __thiscall
TBaseSPLambdaDelegateInstance<1,bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::BuildFFTSizeSubMenu'::__l16::<lambda_4>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d4fa0

void * __thiscall
TBaseSPLambdaDelegateInstance<1,bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::BuildFFTSizeSubMenu'::__l16::<lambda_4>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d5000

void * __thiscall
TBaseSPLambdaDelegateInstance<1,bool___cdecl(void),FDefaultDelegateUserPolicy,`SAudioSpectrumPlot::BuildDefaultContextMenu'::__l17::<lambda_4>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d5060

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d50c0

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d5120

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d5180

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d51e0

void * __thiscall
TBaseSPMethodDelegateInstance<1,AudioWidgets::FAudioLoudnessMeter_const_,1,FTimespan___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,AudioWidgets::FAudioLoudnessMeter_const_,1,FTimespan___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d5240

void * __thiscall
TBaseSPMethodDelegateInstance<1,SFixedSampledSequenceRuler_const_,1,void___cdecl(void),FDefaultDelegateUserPolicy,enum_ESampledSequenceDisplayUnit>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d52a0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d5300

void * __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d5360

void * __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,1,void___cdecl(TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d53c0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d5420

void * __thiscall
TBaseSPMethodDelegateInstance<0,AudioWidgets::FAudioLoudnessMeter,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,AudioWidgets::FAudioLoudnessMeter,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d5480

void * __thiscall
TBaseSPMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,1,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,AudioWidgets::FAudioSpectrogram,1,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d54e0

void * __thiscall
TBaseSPMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,1,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,AudioWidgets::FAudioSpectrumAnalyzer,1,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d5540

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,AudioWidgets::FWaveformAudioSamplesDataProvider,1,void___cdecl(int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,AudioWidgets::FWaveformAudioSamplesDataProvider,1,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d55a0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,AudioWidgets::FWaveformAudioSamplesDataProvider,1,void___cdecl(float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,AudioWidgets::FWaveformAudioSamplesDataProvider,1,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d5600

void * __thiscall
TBaseSPMethodDelegateInstance<0,AudioWidgets::FWaveformAudioSamplesDataProvider,1,void___cdecl(enum_EAudioOscilloscopeTriggerMode),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d5660

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SAudioOscilloscopePanelWidget,1,void___cdecl(FFixedSampledSequenceView,unsigned_int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SAudioOscilloscopePanelWidget,1,void___cdecl(FFixedSampledSequenceView,unsigned_int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d56c0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SAudioSpectrogram,1,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SAudioSpectrogram,1,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d5720

void * __thiscall
TBaseSPMethodDelegateInstance<0,SAudioSpectrumPlot,1,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SAudioSpectrumPlot,1,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d5780

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SAudioVectorscopePanelWidget,1,void___cdecl(FFixedSampledSequenceView,unsigned_int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SAudioVectorscopePanelWidget,1,void___cdecl(FFixedSampledSequenceView,unsigned_int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d57e0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SFixedSampledSequenceRuler,1,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SFixedSampledSequenceRuler,1,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d5840

void * __thiscall
TBaseSPMethodDelegateInstance<0,SFixedSampledSequenceRuler,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SFixedSampledSequenceRuler,1,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d58a0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SFixedSampledSequenceViewer,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SFixedSampledSequenceViewer,1,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d5900

void * __thiscall
TBaseSPMethodDelegateInstance<0,SFixedSampledSequenceViewerPanel,1,void___cdecl(enum_ESampledSequenceDisplayUnit),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d5960

void * __thiscall
TBaseStaticDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d5990

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseStaticDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FUICommandList,1>,TWeakPtr<FWorkspaceItem,1>,TWeakPtr<FTabManager,1>_>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FUICommandList,1>,TWeakPtr<FWorkspaceItem,1>,TWeakPtr<FTabManager,1>_>
           *this,uint param_1)

{
  UE::Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,TSharedRef<FUICommandList,1>,TWeakPtr<FWorkspaceItem,1>,TWeakPtr<FTabManager,1>_>
  ::
  ~TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,TSharedRef<FUICommandList,1>,TWeakPtr<FWorkspaceItem,1>,TWeakPtr<FTabManager,1>_>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,TSharedRef<FUICommandList,1>,TWeakPtr<FWorkspaceItem,1>,TWeakPtr<FTabManager,1>_>
              *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d59d0

void * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d5a00

void * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d5a30

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(TSharedRef<FTabManager::FLayout,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(TSharedRef<FTabManager::FLayout,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d5a60

void * __thiscall
TBaseUFunctionDelegateInstance<UObject,TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUFunctionDelegateInstance<UObject,TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d5a90

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAudioFrequencyRadialSlider,void___cdecl(float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UAudioFrequencyRadialSlider,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d5ac0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAudioFrequencySlider,void___cdecl(float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UAudioFrequencySlider,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d5af0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAudioMaterialButton,void___cdecl(bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UAudioMaterialButton,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d5b20

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAudioMaterialKnob,void___cdecl(float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UAudioMaterialKnob,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d5b50

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAudioMaterialSlider,void___cdecl(float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UAudioMaterialSlider,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d5b80

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAudioRadialSlider,void___cdecl(float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UAudioRadialSlider,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d5bb0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAudioSlider,void___cdecl(float),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UAudioSlider,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d5be0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAudioSliderBase,void___cdecl(float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UAudioSliderBase,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d5c10

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAudioVolumeRadialSlider,void___cdecl(float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UAudioVolumeRadialSlider,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d5c40

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAudioVolumeSlider,void___cdecl(float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UAudioVolumeSlider,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d5c70

void * __thiscall
TCommonDelegateInstanceState<FAudioPowerSpectrumData___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FAudioPowerSpectrumData___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d5ca0

void * __thiscall
TCommonDelegateInstanceState<FTimespan___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FTimespan___cdecl(void),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d5cd0

void * __thiscall
TCommonDelegateInstanceState<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d5d00

void * __thiscall
TCommonDelegateInstanceState<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d5d30

void * __thiscall
TCommonDelegateInstanceState<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d5d60

void * __thiscall
TCommonDelegateInstanceState<TSharedRef<ITableRow,1>___cdecl(TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedRef<ITableRow,1>___cdecl(TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d5d90

void * __thiscall
TCommonDelegateInstanceState<TSharedRef<SWidget,1>___cdecl(TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d5dc0

void * __thiscall
TCommonDelegateInstanceState<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FUICommandList,1>,TWeakPtr<FWorkspaceItem,1>,TWeakPtr<FTabManager,1>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FUICommandList,1>,TWeakPtr<FWorkspaceItem,1>,TWeakPtr<FTabManager,1>_>
           *this,uint param_1)

{
  UE::Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,TSharedRef<FUICommandList,1>,TWeakPtr<FWorkspaceItem,1>,TWeakPtr<FTabManager,1>_>
  ::
  ~TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,TSharedRef<FUICommandList,1>,TWeakPtr<FWorkspaceItem,1>,TWeakPtr<FTabManager,1>_>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,TSharedRef<FUICommandList,1>,TWeakPtr<FWorkspaceItem,1>,TWeakPtr<FTabManager,1>_>
              *)&this->Payload);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d5e00

void * __thiscall
TCommonDelegateInstanceState<FString___cdecl(TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d5e30

void * __thiscall
TCommonDelegateInstanceState<FString___cdecl(TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FString___cdecl(TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d5e60

void * __thiscall
TCommonDelegateInstanceState<enum_EAudioColorGradient___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d5e90

void * __thiscall
TCommonDelegateInstanceState<enum_EAudioSpectrogramFrequencyAxisPixelBucketMode___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d5ec0

void * __thiscall
TCommonDelegateInstanceState<enum_EAudioSpectrogramFrequencyAxisScale___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d5ef0

void * __thiscall
TCommonDelegateInstanceState<enum_EAudioSpectrumAnalyzerBallistics___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d5f20

void * __thiscall
TCommonDelegateInstanceState<enum_EAudioSpectrumAnalyzerType___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d5f50

void * __thiscall
TCommonDelegateInstanceState<enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d5f80

void * __thiscall
TCommonDelegateInstanceState<enum_EAudioSpectrumPlotFrequencyAxisScale___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d5fb0

void * __thiscall
TCommonDelegateInstanceState<enum_EConstantQFFTSizeEnum___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d5fe0

void * __thiscall
TCommonDelegateInstanceState<enum_EFFTSize___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d6010

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UConstantQAnalyzer_*,int,TArray<FConstantQResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UConstantQAnalyzer_*,int,TArray<FConstantQResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d6040

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(ULKFSAnalyzer_*,FLKFSResults_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(ULKFSAnalyzer_*,FLKFSResults_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d6070

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UMeterAnalyzer_*,int,FMeterResults_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UMeterAnalyzer_*,int,FMeterResults_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d60a0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(USynesthesiaSpectrumAnalyzer_*,int,TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(USynesthesiaSpectrumAnalyzer_*,int,TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d60d0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d6100

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d6130

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FFixedSampledSequenceView,unsigned_int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FFixedSampledSequenceView,unsigned_int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d6160

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d6190

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_EAudioColorGradient),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d61c0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_EAudioOscilloscopeTriggerMode),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d61f0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_EAudioSpectrogramFrequencyAxisPixelBucketMode),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d6220

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_EAudioSpectrogramFrequencyAxisScale),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d6250

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_EAudioSpectrumAnalyzerBallistics),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d6280

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_EAudioSpectrumAnalyzerType),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d62b0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d62e0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_EAudioSpectrumPlotFrequencyAxisScale),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d6310

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_EAudioSpectrumPlotTilt),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d6340

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_EConstantQFFTSizeEnum),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d6370

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_EFFTSize),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d63a0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_EOrientation),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d63d0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_ESampledSequenceDisplayUnit),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d6400

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,enum_ESampledSequenceDisplayUnit>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d6430

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::__l8::<lambda_10>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`AudioWidgets::FAudioLoudnessMeter::InitLoudnessMeterWidgetView'::`8'::<lambda_10>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d6470

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SAudioMeterPrivate::ConvertMeterChannelInfoAttribute'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`SAudioMeterPrivate::ConvertMeterChannelInfoAttribute'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x20));
  if (*(void **)((longlong)this + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x28));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x20));
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d64f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AudioWidgets::LoudnessMeterWidgetView_Private::MakeNumericValueTileWidget'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`AudioWidgets::LoudnessMeterWidgetView_Private::MakeNumericValueTileWidget'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d6540

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`SAudioTextBox::Construct'::__l5::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`SAudioTextBox::Construct'::`5'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d6580

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AudioWidgets::LoudnessMeterWidgetView_Private::MakeMeterValueTileWidget'::__l2::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`AudioWidgets::LoudnessMeterWidgetView_Private::MakeMeterValueTileWidget'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d65d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AudioWidgets::LoudnessMeterWidgetView_Private::MakeNumericValueTileWidget'::__l2::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`AudioWidgets::LoudnessMeterWidgetView_Private::MakeNumericValueTileWidget'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d6620

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_2>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::`2'::<lambda_2>,0,1>
        ::_vftable_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x10));
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d6690

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`SAudioTextBox::Construct'::__l5::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`SAudioTextBox::Construct'::`5'::<lambda_2>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d66d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SAudioOscilloscopePanelWidget::CreateChannelCombobox'::__l2::<lambda_3>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`SAudioOscilloscopePanelWidget::CreateChannelCombobox'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d6710

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SAudioOscilloscopePanelWidget::CreateTriggerModeCombobox'::__l2::<lambda_3>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`SAudioOscilloscopePanelWidget::CreateTriggerModeCombobox'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d6750

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AudioWidgets::LoudnessMeterWidgetView_Private::MakeMeterValueTileWidget'::__l2::<lambda_3>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`AudioWidgets::LoudnessMeterWidgetView_Private::MakeMeterValueTileWidget'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d67a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::__l2::<lambda_4>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`SAudioOscilloscopePanelWidget::CreateTriggerThresholdKnob'::`2'::<lambda_4>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d67e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AudioWidgets::LoudnessMeterWidgetView_Private::MakeMeterValueTileWidget'::__l2::<lambda_4>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`AudioWidgets::LoudnessMeterWidgetView_Private::MakeMeterValueTileWidget'::`2'::<lambda_4>,0,0>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d6830

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::<lambda_5>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::`2'::<lambda_5>,0,1>
        ::_vftable_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x18));
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d68a0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Slate::Containers::TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Slate::Containers::TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d68e0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FAudioMaterialButtonStyle,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FAudioMaterialButtonStyle,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d6920

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FAudioMaterialEnvelopeStyle,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FAudioMaterialEnvelopeStyle,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d6960

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FAudioMaterialKnobStyle,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FAudioMaterialKnobStyle,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d69a0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FAudioMaterialMeterStyle,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FAudioMaterialMeterStyle,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d69e0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FAudioMaterialSliderStyle,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FAudioMaterialSliderStyle,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d6a20

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FAudioMeterDefaultColorStyle,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FAudioMeterDefaultColorStyle,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d6a60

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FAudioMeterStyle,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FAudioMeterStyle,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x440);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d6aa0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FAudioOscilloscopePanelStyle,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FAudioOscilloscopePanelStyle,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x450);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d6ae0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FAudioRadialSliderStyle,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FAudioRadialSliderStyle,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d6b20

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FAudioSliderStyle,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FAudioSliderStyle,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x660);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d6b60

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FAudioSpectrumPlotStyle,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FAudioSpectrumPlotStyle,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d6ba0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FAudioTextBoxStyle,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FAudioTextBoxStyle,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d6be0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FAudioUnitProcessor,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FAudioUnitProcessor,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d6c20

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FAudioVectorscopePanelStyle,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FAudioVectorscopePanelStyle,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d6c60

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FFixedSampleSequenceRulerStyle,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FFixedSampleSequenceRulerStyle,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x240);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d6ca0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FFrequencyProcessor,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FFrequencyProcessor,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d6ce0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d6d20

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPlayheadOverlayStyle,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FPlayheadOverlayStyle,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d6d60

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSampledSequenceValueGridOverlayStyle,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FSampledSequenceValueGridOverlayStyle,1> *this,uint param_1
          )

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d6da0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSampledSequenceVectorViewerStyle,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FSampledSequenceVectorViewerStyle,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d6de0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSampledSequenceViewerStyle,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FSampledSequenceViewerStyle,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d6e20

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FTriggerThresholdLineStyle,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FTriggerThresholdLineStyle,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d6e60

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FVolumeProcessor,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FVolumeProcessor,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d6ea0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SComboBox<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x4e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d6ee0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SComboRow<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x408);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d6f20

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SListView<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d6f60

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<STableRow<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x408);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d6fa0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x408);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d6fe0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d7020

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d7060

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TTableViewMetadata<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TTableViewMetadata<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d70a0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<AudioWidgets::FAudioLoudnessMeter,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<AudioWidgets::FAudioLoudnessMeter,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d70e0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<AudioWidgets::FAudioMeter,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<AudioWidgets::FAudioMeter,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d7120

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<AudioWidgets::FAudioOscilloscope,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<AudioWidgets::FAudioOscilloscope,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x4a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d7160

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<AudioWidgets::FAudioSpectrogram,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<AudioWidgets::FAudioSpectrogram,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d71a0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<AudioWidgets::FAudioSpectrumAnalyzer,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<AudioWidgets::FAudioSpectrumAnalyzer,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d71e0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<AudioWidgets::FAudioVectorscope,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<AudioWidgets::FAudioVectorscope,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d7220

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FFixedSampledSequenceGridData,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FFixedSampledSequenceGridData,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d7260

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<AudioWidgets::FWaveformAudioSamplesDataProvider,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<AudioWidgets::FWaveformAudioSamplesDataProvider,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d72a0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SAudioFrequencyRadialSlider,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SAudioFrequencyRadialSlider,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x558);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d72e0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SAudioFrequencySlider,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SAudioFrequencySlider,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x580);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d7320

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SAudioMaterialButton,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SAudioMaterialButton,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d7360

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SAudioMaterialEnvelope,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SAudioMaterialEnvelope,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x248);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d73a0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SAudioMaterialKnob,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SAudioMaterialKnob,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x3e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d73e0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SAudioMaterialMeter,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SAudioMaterialMeter,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x288);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d7420

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SAudioMaterialSlider,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SAudioMaterialSlider,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x3b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d7460

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SAudioMeter,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SAudioMeter,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x240);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d74a0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SAudioMeterWidget,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SAudioMeterWidget,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x3c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d74e0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SAudioOscilloscopePanelWidget,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SAudioOscilloscopePanelWidget,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x4d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d7520

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SAudioRadialSlider,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SAudioRadialSlider,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x558);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d7560

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SAudioSlider,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SAudioSlider,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x590);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d75a0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SAudioSliderBase,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SAudioSliderBase,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x580);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d75e0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SAudioSpectrogram,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SAudioSpectrogram,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x490);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d7620

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SAudioSpectrumPlot,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SAudioSpectrumPlot,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x650);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d7660

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SAudioTextBox,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SAudioTextBox,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x390);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d76a0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SAudioVectorscopePanelWidget,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SAudioVectorscopePanelWidget,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x390);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d76e0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SAudioVolumeRadialSlider,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SAudioVolumeRadialSlider,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x560);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d7720

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SAudioVolumeSlider,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SAudioVolumeSlider,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x590);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d7760

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SFixedSampledSequenceRuler,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SFixedSampledSequenceRuler,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x550);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d77a0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SFixedSampledSequenceVectorViewer,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SFixedSampledSequenceVectorViewer,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x288);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d77e0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SFixedSampledSequenceViewer,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SFixedSampledSequenceViewer,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x410);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d7820

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SPlayheadOverlay,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SPlayheadOverlay,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,600);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d7860

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SSampledSequenceValueGridOverlay,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SSampledSequenceValueGridOverlay,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x390);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d78a0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STriggerThresholdLineWidget,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<STriggerThresholdLineWidget,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x268);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d78e0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FAudioSpectrogramViewport,SharedPointerInternals::DefaultDeleter<FAudioSpectrogramViewport>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FAudioSpectrogramViewport,SharedPointerInternals::DefaultDeleter<FAudioSpectrogramViewport>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d7920

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<enum_EAudioOscilloscopeTriggerMode,SharedPointerInternals::DefaultDeleter<enum_EAudioOscilloscopeTriggerMode>,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d7960

void * __thiscall
TTableViewMetadata<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::_scalar_deleting_destructor_
          (void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  *(undefined ***)this = &___7ISlateMetaData__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d79d0

void * __thiscall
TTableViewMetadata<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::
_scalar_deleting_destructor_
          (TTableViewMetadata<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->OwnerTableView).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  this->_padding_ = (longlong)&___7ISlateMetaData__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d7a40

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
AudioWidgets::FAudioAnalyzerRack::_scalar_deleting_destructor_
          (FAudioAnalyzerRack *this,uint param_1)

{
  ~FAudioAnalyzerRack(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d7a80

void * __thiscall
AudioWidgets::FAudioLoudnessMeter::_scalar_deleting_destructor_
          (FAudioLoudnessMeter *this,uint param_1)

{
  ~FAudioLoudnessMeter(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d7ac0

void * __thiscall
FAudioMaterialButtonStyle::_scalar_deleting_destructor_
          (FAudioMaterialButtonStyle *this,uint param_1)

{
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d7b00

void * __thiscall
FAudioMaterialEnvelopeStyle::_scalar_deleting_destructor_
          (FAudioMaterialEnvelopeStyle *this,uint param_1)

{
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d7b40

void * __thiscall
FAudioMaterialKnobStyle::_scalar_deleting_destructor_(FAudioMaterialKnobStyle *this,uint param_1)

{
  *(undefined ***)&this->TextBoxStyle = &___7FAudioTextBoxStyle__6B_;
  (this->TextBoxStyle).BackgroundImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TextBoxStyle).BackgroundImage.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&this->TextBoxStyle);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d7bc0

void * __thiscall
FAudioMaterialMeterStyle::_scalar_deleting_destructor_(FAudioMaterialMeterStyle *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Font).CompositeFont.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d7c10

void * __thiscall
FAudioMaterialSliderStyle::_scalar_deleting_destructor_
          (FAudioMaterialSliderStyle *this,uint param_1)

{
  *(undefined ***)&this->TextBoxStyle = &___7FAudioTextBoxStyle__6B_;
  (this->TextBoxStyle).BackgroundImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TextBoxStyle).BackgroundImage.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&this->TextBoxStyle);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d7c90

void * __thiscall
FAudioMaterialWidgetStyle::_scalar_deleting_destructor_
          (FAudioMaterialWidgetStyle *this,uint param_1)

{
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d7cd0

void * __thiscall
AudioWidgets::FAudioMeter::_scalar_deleting_destructor_(FAudioMeter *this,uint param_1)

{
  ~FAudioMeter(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d7d10

void * __thiscall
FAudioMeterDefaultColorStyle::_scalar_deleting_destructor_
          (FAudioMeterDefaultColorStyle *this,uint param_1)

{
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d7d50

void * __thiscall
FAudioMeterStyle::_scalar_deleting_destructor_(FAudioMeterStyle *this,uint param_1)

{
  FAudioMeterWidgetStyle::~FAudioMeterWidgetStyle((FAudioMeterWidgetStyle *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x430);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d7d90

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
AudioWidgets::FAudioOscilloscope::_scalar_deleting_destructor_
          (FAudioOscilloscope *this,uint param_1)

{
  ~FAudioOscilloscope(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x490);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d7dd0

void * __thiscall
FAudioOscilloscopePanelStyle::_scalar_deleting_destructor_
          (FAudioOscilloscopePanelStyle *this,uint param_1)

{
  ~FAudioOscilloscopePanelStyle(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x440);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d7e10

void * __thiscall
FAudioRadialSliderStyle::_scalar_deleting_destructor_(FAudioRadialSliderStyle *this,uint param_1)

{
  *(undefined ***)this = &___7FAudioRadialSliderStyle__6B_;
  *(undefined ***)&this->TextBoxStyle = &___7FAudioTextBoxStyle__6B_;
  (this->TextBoxStyle).BackgroundImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TextBoxStyle).BackgroundImage.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&this->TextBoxStyle);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d7e90

void * __thiscall
FAudioSliderStyle::_scalar_deleting_destructor_(FAudioSliderStyle *this,uint param_1)

{
  ~FAudioSliderStyle(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x650);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d7ed0

void * __thiscall
AudioWidgets::FAudioSpectrogram::_scalar_deleting_destructor_(FAudioSpectrogram *this,uint param_1)

{
  ~FAudioSpectrogram(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d7f10

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FAudioSpectrogramViewport::_scalar_deleting_destructor_
          (FAudioSpectrogramViewport *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  FSlateApplication *pFVar5;
  
  this->_padding_ = (longlong)&___7FAudioSpectrogramViewport__6B_;
  if (this->UpdatableTexture != (FSlateUpdatableTexture *)0x0) {
    if (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) {
      pFVar5 = FSlateApplication::Get();
      plVar3 = *(longlong **)&pFVar5->field_0x60;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x130))(plVar3,this->UpdatableTexture);
      }
    }
    this->UpdatableTexture = (FSlateUpdatableTexture *)0x0;
    this->UpdatableTexturePixelFormat = PF_Unknown;
  }
  TRingBuffer<FAudioSpectrogramViewport::FHistoryFrameData,TSizedDefaultAllocator<32>_>::
  DestructRange(&this->History,(this->History).Front,(this->History).AfterBack);
  (this->History).Front = 0;
  (this->History).AfterBack = 0;
  TRingBuffer<FAudioSpectrogramViewport::FHistoryFrameData,TSizedDefaultAllocator<32>_>::Reallocate
            (&this->History,0);
  pFVar4 = (this->History).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  this->_padding_ = (longlong)&___7ISlateViewport__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d8000

void * __thiscall
AudioWidgets::FAudioSpectrumAnalyzer::_scalar_deleting_destructor_
          (FAudioSpectrumAnalyzer *this,uint param_1)

{
  ~FAudioSpectrumAnalyzer(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d8040

void * __thiscall
FAudioSpectrumPlotStyle::_scalar_deleting_destructor_(FAudioSpectrumPlotStyle *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FAudioSpectrumPlotStyle__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CrosshairLabelFont).CompositeFont.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AxisLabelFont).CompositeFont.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d80a0

void * __thiscall
FAudioTextBoxStyle::_scalar_deleting_destructor_(FAudioTextBoxStyle *this,uint param_1)

{
  *(undefined ***)this = &___7FAudioTextBoxStyle__6B_;
  (this->BackgroundImage)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BackgroundImage).ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d8100

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
AudioWidgets::FAudioVectorscope::_scalar_deleting_destructor_(FAudioVectorscope *this,uint param_1)

{
  ~FAudioVectorscope(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d8140

void * __thiscall
FAudioVectorscopePanelStyle::_scalar_deleting_destructor_
          (FAudioVectorscopePanelStyle *this,uint param_1)

{
  ~FAudioVectorscopePanelStyle(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d8180

void * __thiscall
FAudioWidgetsStyle::_scalar_deleting_destructor_(FAudioWidgetsStyle *this,uint param_1)

{
  *(undefined ***)this = &___7FAudioWidgetsStyle__6B_;
  FSlateStyleRegistry::UnRegisterSlateStyle((ISlateStyle *)this);
  FSlateStyleSet::~FSlateStyleSet((FSlateStyleSet *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d81d0

void * __thiscall
FFixedSampleSequenceRulerStyle::_scalar_deleting_destructor_
          (FFixedSampleSequenceRulerStyle *this,uint param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  (this->BackgroundBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BackgroundBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TicksTextFont).CompositeFont.SharedReferenceCount.ReferenceController);
  pTVar1 = (this->HandleBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->HandleBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x230);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d8250

void * __thiscall
FFixedSampledSequenceGridData::_scalar_deleting_destructor_
          (FFixedSampledSequenceGridData *this,uint param_1)

{
  void *pvVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TicksTimeFont).CompositeFont.SharedReferenceCount.ReferenceController);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnGridMetricsUpdated).field_0x8,
             *(int *)&(this->OnGridMetricsUpdated).field_0x10);
  pvVar1 = *(void **)&(this->OnGridMetricsUpdated).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnGridMetricsUpdated);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d82c0

void * __thiscall
FPlayheadOverlayStyle::_scalar_deleting_destructor_(FPlayheadOverlayStyle *this,uint param_1)

{
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d8300

void * __thiscall
FSampledSequenceValueGridOverlayStyle::_scalar_deleting_destructor_
          (FSampledSequenceValueGridOverlayStyle *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LabelTextFont).CompositeFont.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d8350

void * __thiscall
FSampledSequenceVectorViewerStyle::_scalar_deleting_destructor_
          (FSampledSequenceVectorViewerStyle *this,uint param_1)

{
  (this->BackgroundBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BackgroundBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d83b0

void * __thiscall
FSampledSequenceViewerStyle::_scalar_deleting_destructor_
          (FSampledSequenceViewerStyle *this,uint param_1)

{
  (this->BackgroundBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BackgroundBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d8410

void * __thiscall
SComboBox<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::FSlateAccessibleComboBox::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d8450

void * __thiscall
SListView<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::FSlateAccessibleListView::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d8490

void * __thiscall
SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::
FSlateAccessibleListView::_scalar_deleting_destructor_(FSlateAccessibleListView *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d84d0

void * __thiscall
STableRow<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::FSlateAccessibleTableRow::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d8510

void * __thiscall
STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::
FSlateAccessibleTableRow::_scalar_deleting_destructor_(FSlateAccessibleTableRow *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d8550

void * __thiscall
FTriggerThresholdLineStyle::_scalar_deleting_destructor_
          (FTriggerThresholdLineStyle *this,uint param_1)

{
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d8590

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
AudioWidgets::FWaveformAudioSamplesDataProvider::_scalar_deleting_destructor_
          (FWaveformAudioSamplesDataProvider *this,uint param_1)

{
  ~FWaveformAudioSamplesDataProvider(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d85d0

void * __thiscall
AudioWidgets::IAudioAnalyzerRackUnit::_scalar_deleting_destructor_
          (IAudioAnalyzerRackUnit *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7IAudioAnalyzerRackUnit_AudioWidgets__6B_;
  plVar3 = *(longlong **)&this->field_0x10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d8640

void * __thiscall
IFixedSampledSequenceGridService::_scalar_deleting_destructor_
          (IFixedSampledSequenceGridService *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d8670

void * __thiscall
IFixedSampledSequenceViewProvider::_scalar_deleting_destructor_
          (IFixedSampledSequenceViewProvider *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d86a0

void * __thiscall
IFixedSampledSequenceViewReceiver::_scalar_deleting_destructor_
          (IFixedSampledSequenceViewReceiver *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d86d0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SAudioFrequencyRadialSlider::_scalar_deleting_destructor_
          (SAudioFrequencyRadialSlider *this,uint param_1)

{
  SAudioRadialSlider::~SAudioRadialSlider((SAudioRadialSlider *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x548);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d8730

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SAudioFrequencySlider::_scalar_deleting_destructor_(SAudioFrequencySlider *this,uint param_1)

{
  SAudioSliderBase::~SAudioSliderBase((SAudioSliderBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x570);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d8790

void * __thiscall
SAudioInputWidget::_scalar_deleting_destructor_(SAudioInputWidget *this,uint param_1)

{
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2a8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d87f0

void * __thiscall
SAudioMaterialButton::_scalar_deleting_destructor_(SAudioMaterialButton *this,uint param_1)

{
  ~SAudioMaterialButton(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d8850

void * __thiscall
SAudioMaterialEnvelope::_scalar_deleting_destructor_(SAudioMaterialEnvelope *this,uint param_1)

{
  SLeafWidget::~SLeafWidget((SLeafWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x238);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d88b0

void * __thiscall
SAudioMaterialKnob::_scalar_deleting_destructor_(SAudioMaterialKnob *this,uint param_1)

{
  ~SAudioMaterialKnob(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x3d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d8910

void * __thiscall
SAudioMaterialMeter::_scalar_deleting_destructor_(SAudioMaterialMeter *this,uint param_1)

{
  ~SAudioMaterialMeter(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x278);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d8970

void * __thiscall
SAudioMaterialSlider::_scalar_deleting_destructor_(SAudioMaterialSlider *this,uint param_1)

{
  ~SAudioMaterialSlider(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x3a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d89d0

void * __thiscall SAudioMeter::_scalar_deleting_destructor_(SAudioMeter *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AudioMeterWidget).SharedReferenceCount.ReferenceController);
  SLeafWidget::~SLeafWidget((SLeafWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x230);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d8a40

void * __thiscall SAudioMeterBase::_scalar_deleting_destructor_(SAudioMeterBase *this,uint param_1)

{
  SLeafWidget::~SLeafWidget((SLeafWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x220);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d8aa0

void * __thiscall
SAudioMeterWidget::_scalar_deleting_destructor_(SAudioMeterWidget *this,uint param_1)

{
  ~SAudioMeterWidget(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x3b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d8b00

void * __thiscall
SAudioMeterWidgetBase::_scalar_deleting_destructor_(SAudioMeterWidgetBase *this,uint param_1)

{
  SLeafWidget::~SLeafWidget((SLeafWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x220);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d8b60

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SAudioOscilloscopePanelWidget::_scalar_deleting_destructor_
          (SAudioOscilloscopePanelWidget *this,uint param_1)

{
  ~SAudioOscilloscopePanelWidget(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x4c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d8bc0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SAudioRadialSlider::_scalar_deleting_destructor_(SAudioRadialSlider *this,uint param_1)

{
  ~SAudioRadialSlider(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x548);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d8c20

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall SAudioSlider::_scalar_deleting_destructor_(SAudioSlider *this,uint param_1)

{
  this->_padding_ = (longlong)&___7SAudioSlider__6B_;
  SAudioSliderBase::~SAudioSliderBase((SAudioSliderBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x580);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d8c80

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SAudioSliderBase::_scalar_deleting_destructor_(SAudioSliderBase *this,uint param_1)

{
  ~SAudioSliderBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x570);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d8ce0

void * __thiscall
SAudioSpectrogram::_scalar_deleting_destructor_(SAudioSpectrogram *this,uint param_1)

{
  ~SAudioSpectrogram(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x480);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d8d40

void * __thiscall
SAudioSpectrumPlot::_scalar_deleting_destructor_(SAudioSpectrumPlot *this,uint param_1)

{
  ~SAudioSpectrumPlot(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x640);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d8da0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall SAudioTextBox::_scalar_deleting_destructor_(SAudioTextBox *this,uint param_1)

{
  ~SAudioTextBox(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x380);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d8e00

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SAudioVectorscopePanelWidget::_scalar_deleting_destructor_
          (SAudioVectorscopePanelWidget *this,uint param_1)

{
  ~SAudioVectorscopePanelWidget(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x380);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d8e60

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SAudioVolumeRadialSlider::_scalar_deleting_destructor_(SAudioVolumeRadialSlider *this,uint param_1)

{
  SAudioRadialSlider::~SAudioRadialSlider((SAudioRadialSlider *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x550);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d8ec0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SAudioVolumeSlider::_scalar_deleting_destructor_(SAudioVolumeSlider *this,uint param_1)

{
  SAudioSliderBase::~SAudioSliderBase((SAudioSliderBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x580);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d8f20

void * __thiscall
SFixedSampledSequenceRuler::_scalar_deleting_destructor_
          (SFixedSampledSequenceRuler *this,uint param_1)

{
  ~SFixedSampledSequenceRuler(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x540);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d8f80

void * __thiscall
SFixedSampledSequenceVectorViewer::_scalar_deleting_destructor_
          (SFixedSampledSequenceVectorViewer *this,uint param_1)

{
  SLeafWidget::~SLeafWidget((SLeafWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x278);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d8fe0

void * __thiscall
SFixedSampledSequenceViewer::_scalar_deleting_destructor_
          (SFixedSampledSequenceViewer *this,uint param_1)

{
  ~SFixedSampledSequenceViewer(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d9040

void * __thiscall
SPlayheadOverlay::_scalar_deleting_destructor_(SPlayheadOverlay *this,uint param_1)

{
  SLeafWidget::~SLeafWidget((SLeafWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x248);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d90a0

void * __thiscall
SSampledSequenceValueGridOverlay::_scalar_deleting_destructor_
          (SSampledSequenceValueGridOverlay *this,uint param_1)

{
  ~SSampledSequenceValueGridOverlay(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x380);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d9100

void * __thiscall
STriggerThresholdLineWidget::_scalar_deleting_destructor_
          (STriggerThresholdLineWidget *this,uint param_1)

{
  SLeafWidget::~SLeafWidget((SLeafWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,600);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d9160

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UAudioFrequencyRadialSlider::_scalar_deleting_destructor_
          (UAudioFrequencyRadialSlider *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  UAudioRadialSlider::~UAudioRadialSlider((UAudioRadialSlider *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x3c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d91d0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UAudioFrequencySlider::_scalar_deleting_destructor_(UAudioFrequencySlider *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  UAudioSliderBase::~UAudioSliderBase((UAudioSliderBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x940);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d9240

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UAudioMaterialButton::_scalar_deleting_destructor_(UAudioMaterialButton *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Button).SharedReferenceCount.ReferenceController);
  pvVar1 = *(void **)&(this->OnButtonPressedChangedEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnButtonPressedChangedEvent);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&this->WidgetStyle);
  UWidget::~UWidget((UWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x268);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d92f0

void * __thiscall
UAudioMaterialButtonWidgetStyle::_scalar_deleting_destructor_
          (UAudioMaterialButtonWidgetStyle *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ISlateWidgetStyleContainerInterface__;
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&this->ButtonStyle);
  USlateWidgetStyleContainerBase::~USlateWidgetStyleContainerBase
            ((USlateWidgetStyleContainerBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d9370

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UAudioMaterialEnvelope::_scalar_deleting_destructor_(UAudioMaterialEnvelope *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->EnvelopeCurve).SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&this->WidgetStyle);
  UWidget::~UWidget((UWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x230);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d9400

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UAudioMaterialKnob::_scalar_deleting_destructor_(UAudioMaterialKnob *this,uint param_1)

{
  void *pvVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Knob).SharedReferenceCount.ReferenceController);
  pvVar1 = *(void **)&(this->OnKnobValueChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnKnobValueChanged);
  pTVar2 = (this->WidgetStyle).TextBoxStyle.BackgroundImage.ResourceHandle.Data.SharedReferenceCount
           .ReferenceController;
  *(undefined ***)&(this->WidgetStyle).TextBoxStyle = &___7FAudioTextBoxStyle__6B_;
  (this->WidgetStyle).TextBoxStyle.BackgroundImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&(this->WidgetStyle).TextBoxStyle);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&this->WidgetStyle);
  UWidget::~UWidget((UWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
    }
    else {
      __empty_global_delete(this,0x3b0);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d94e0

/* WARNING: Type propagation algorithm not settling */

void * __thiscall
UAudioMaterialKnobWidgetStyle::_scalar_deleting_destructor_
          (UAudioMaterialKnobWidgetStyle *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ISlateWidgetStyleContainerInterface__;
  *(undefined ***)&(this->KnobStyle).TextBoxStyle = &___7FAudioTextBoxStyle__6B_;
  (this->KnobStyle).TextBoxStyle.BackgroundImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->KnobStyle).TextBoxStyle.BackgroundImage.ResourceHandle.Data.SharedReferenceCount
             .ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&(this->KnobStyle).TextBoxStyle);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&this->KnobStyle);
  USlateWidgetStyleContainerBase::~USlateWidgetStyleContainerBase
            ((USlateWidgetStyleContainerBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
    }
    else {
      __empty_global_delete(this,0x1f0);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d95a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UAudioMaterialMeter::_scalar_deleting_destructor_(UAudioMaterialMeter *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  pFVar1 = (this->MeterChannelInfo).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Meter).SharedReferenceCount.ReferenceController);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MeterChannelInfoDelegate);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->WidgetStyle).Font.CompositeFont.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&this->WidgetStyle);
  UWidget::~UWidget((UWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d9660

void * __thiscall
UAudioMaterialMeterWidgetStyle::_scalar_deleting_destructor_
          (UAudioMaterialMeterWidgetStyle *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ISlateWidgetStyleContainerInterface__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MeterStyle).Font.CompositeFont.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&this->MeterStyle);
  USlateWidgetStyleContainerBase::~USlateWidgetStyleContainerBase
            ((USlateWidgetStyleContainerBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d96f0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UAudioMaterialSlider::_scalar_deleting_destructor_(UAudioMaterialSlider *this,uint param_1)

{
  void *pvVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Slider).SharedReferenceCount.ReferenceController);
  pvVar1 = *(void **)&(this->OnValueChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnValueChanged);
  pTVar2 = (this->WidgetStyle).TextBoxStyle.BackgroundImage.ResourceHandle.Data.SharedReferenceCount
           .ReferenceController;
  *(undefined ***)&(this->WidgetStyle).TextBoxStyle = &___7FAudioTextBoxStyle__6B_;
  (this->WidgetStyle).TextBoxStyle.BackgroundImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&(this->WidgetStyle).TextBoxStyle);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&this->WidgetStyle);
  UWidget::~UWidget((UWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
    }
    else {
      __empty_global_delete(this,0x340);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d97d0

/* WARNING: Type propagation algorithm not settling */

void * __thiscall
UAudioMaterialSliderWidgetStyle::_scalar_deleting_destructor_
          (UAudioMaterialSliderWidgetStyle *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ISlateWidgetStyleContainerInterface__;
  *(undefined ***)&(this->SliderStyle).TextBoxStyle = &___7FAudioTextBoxStyle__6B_;
  (this->SliderStyle).TextBoxStyle.BackgroundImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SliderStyle).TextBoxStyle.BackgroundImage.ResourceHandle.Data.
             SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&(this->SliderStyle).TextBoxStyle);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&this->SliderStyle);
  USlateWidgetStyleContainerBase::~USlateWidgetStyleContainerBase
            ((USlateWidgetStyleContainerBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
    }
    else {
      __empty_global_delete(this,0x180);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d9890

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall UAudioMeter::_scalar_deleting_destructor_(UAudioMeter *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyAudioMeter).SharedReferenceCount.ReferenceController);
  FAudioMeterWidgetStyle::~FAudioMeterWidgetStyle((FAudioMeterWidgetStyle *)&this->WidgetStyle);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MeterChannelInfoDelegate);
  pFVar1 = (this->MeterChannelInfo).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UWidget::~UWidget((UWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x6a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d9940

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void * __thiscall
UAudioOscilloscope::_scalar_deleting_destructor_(UAudioOscilloscope *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  pFVar1 = (this->DummyAudioSamples).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OscilloscopePanelWidget).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AudioSamplesDataProvider).SharedReferenceCount.ReferenceController);
  FAudioOscilloscopePanelStyle::~FAudioOscilloscopePanelStyle(&this->OscilloscopeStyle);
  UWidget::~UWidget((UWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x670);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d99f0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UAudioRadialSlider::_scalar_deleting_destructor_(UAudioRadialSlider *this,uint param_1)

{
  ~UAudioRadialSlider(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x3c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d9a50

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall UAudioSlider::_scalar_deleting_destructor_(UAudioSlider *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  UAudioSliderBase::~UAudioSliderBase((UAudioSliderBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x940);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d9ac0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UAudioSliderBase::_scalar_deleting_destructor_(UAudioSliderBase *this,uint param_1)

{
  ~UAudioSliderBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x930);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d9b20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void * __thiscall
UAudioVectorscope::_scalar_deleting_destructor_(UAudioVectorscope *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  pFVar1 = (this->DummyAudioSamples).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->VectorscopePanelWidget).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AudioSamplesDataProvider).SharedReferenceCount.ReferenceController);
  FAudioVectorscopePanelStyle::~FAudioVectorscopePanelStyle(&this->VectorscopeStyle);
  UWidget::~UWidget((UWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x3c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d9bd0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UAudioVolumeRadialSlider::_scalar_deleting_destructor_(UAudioVolumeRadialSlider *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  UAudioRadialSlider::~UAudioRadialSlider((UAudioRadialSlider *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x3c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8d9c40

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UAudioVolumeSlider::_scalar_deleting_destructor_(UAudioVolumeSlider *this,uint param_1)

{
  *(undefined ***)this = &UAudioSlider::_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &UAudioSlider::_vftable__for__INotifyFieldValueChanged__;
  UAudioSliderBase::~UAudioSliderBase((UAudioSliderBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x940);
  }
  return this;
}

// ConvertEXAxisLabelsUnitToESampledSequenceDisplayUnit @ 14d8f0940

ESampledSequenceDisplayUnit __cdecl
AudioOscilloscopePanelWidgetPrivate::ConvertEXAxisLabelsUnitToESampledSequenceDisplayUnit
          (EXAxisLabelsUnit param_1)

{
  if ((param_1 != Samples) && (param_1 == Seconds)) {
    return Seconds;
  }
  return Samples;
}

// ConvertIntToEAudioBusChannels @ 14d8f0960

EAudioBusChannels __cdecl AudioBusUtils::ConvertIntToEAudioBusChannels(int param_1)

{
  code *pcVar1;
  bool bVar2;
  EAudioBusChannels EVar3;
  
  if (param_1 != 1) {
    if (param_1 == 2) {
      return Stereo;
    }
    if (param_1 == 4) {
      return Quad;
    }
    if (param_1 == 6) {
      return FivePointOne;
    }
    if (param_1 == 8) {
      return SevenPointOne;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Sound\\AudioBus.h"
                       ,0x25,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  return Mono;
}

// DivideLineIteratively @ 14d9133a0

void __cdecl
SampledSequenceDrawingUtilsPrivate::DivideLineIteratively
          (float param_1,float param_2,int param_3,
          TArray<double,TSizedDefaultAllocator<32>_> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  double local_38 [6];
  
  pFVar1 = (param_4->AllocatorInstance).Data;
  local_38[0] = (double)((param_1 + param_2) * __real_3f000000);
  if ((pFVar1 <= (FScriptContainerElement *)local_38) &&
     ((FScriptContainerElement *)local_38 < pFVar1 + (longlong)param_4->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_4->ArrayNum;
  if (iVar4 == param_4->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_4->AllocatorInstance,&param_4->ArrayMax);
  }
  param_4->ArrayNum = iVar4 + 1;
  iVar5 = param_3 + -1;
  *(double *)((param_4->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_38[0];
  if (0 < iVar5) {
    DivideLineIteratively(param_1,(float)local_38[0],iVar5,param_4);
    DivideLineIteratively((float)local_38[0],param_2,iVar5,param_4);
  }
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioColorMapper @ 14d91bdd0

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioColorMapper(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioMaterialButton @ 14d91bde0

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioMaterialButton(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioMaterialEnvelope @ 14d91bdf0

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioMaterialEnvelope(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioMaterialEnvelopeSettings @ 14d91be00

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioMaterialEnvelopeSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioMaterialKnob @ 14d91be10

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioMaterialKnob(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioMaterialMeter @ 14d91be20

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioMaterialMeter(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioMaterialSlateTypes @ 14d91be30

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioMaterialSlateTypes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioMaterialSlider @ 14d91be40

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioMaterialSlider(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioMaterialStyleContainers @ 14d91be50

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioMaterialStyleContainers(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioMeter @ 14d91be60

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioMeter(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioMeterStyle @ 14d91be70

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioMeterStyle(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioMeterTypes @ 14d91be80

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioMeterTypes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioOscilloscopeEnums @ 14d91be90

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioOscilloscopeEnums(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioOscilloscopePanelStyle @ 14d91bea0

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioOscilloscopePanelStyle(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioOscilloscopeUMG @ 14d91beb0

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioOscilloscopeUMG(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioRadialSlider @ 14d91bec0

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioRadialSlider(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioSlider @ 14d91bed0

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioSlider(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioSpectrogram @ 14d91bee0

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioSpectrogram(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioSpectrogramViewport @ 14d91bef0

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioSpectrogramViewport(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioSpectrumAnalyzer @ 14d91bf00

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioSpectrumAnalyzer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioSpectrumPlotStyle @ 14d91bf10

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioSpectrumPlotStyle(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioVectorscopePanelStyle @ 14d91bf20

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioVectorscopePanelStyle(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioVectorscopeUMG @ 14d91bf30

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioVectorscopeUMG(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioWidgetsEnums @ 14d91bf40

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioWidgetsEnums(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioWidgetsSlateTypes @ 14d91bf50

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioWidgetsSlateTypes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioWidgets_init @ 14d91bf60

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioWidgets_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLoudnessMeterRackUnitSettings @ 14d91bf70

void __cdecl EmptyLinkFunctionForGeneratedCodeLoudnessMeterRackUnitSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSAudioOscilloscopePanelWidget @ 14d91bf80

void __cdecl EmptyLinkFunctionForGeneratedCodeSAudioOscilloscopePanelWidget(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSAudioRadialSlider @ 14d91bf90

void __cdecl EmptyLinkFunctionForGeneratedCodeSAudioRadialSlider(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSAudioSpectrumPlot @ 14d91bfa0

void __cdecl EmptyLinkFunctionForGeneratedCodeSAudioSpectrumPlot(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSampledSequenceVectorViewerStyle @ 14d91bfb0

void __cdecl EmptyLinkFunctionForGeneratedCodeSampledSequenceVectorViewerStyle(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTriggerThresholdLineStyle @ 14d91bfc0

void __cdecl EmptyLinkFunctionForGeneratedCodeTriggerThresholdLineStyle(void)

{
  return;
}

// FOnAudioRadialSliderValueChangedEvent_DelegateWrapper @ 14d924db0

void __cdecl
FOnAudioRadialSliderValueChangedEvent_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,float param_2)

{
  float local_res10 [6];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// FOnButtonPressedChangedEvent_DelegateWrapper @ 14d924dd0

void __cdecl
FOnButtonPressedChangedEvent_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,bool param_2)

{
  undefined1 local_res10 [24];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// FOnKnobValueChangedEvent_DelegateWrapper @ 14d924df0

void __cdecl
FOnKnobValueChangedEvent_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,float param_2)

{
  float local_res10 [6];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// FOnSliderFloatValueChangedEvent_DelegateWrapper @ 14d924e10

void __cdecl
FOnSliderFloatValueChangedEvent_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,float param_2)

{
  float local_res10 [6];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// FormatNumericValueText @ 14d925510

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __cdecl
AudioWidgets::LoudnessMeterWidgetView_Private::FormatNumericValueText
          (FText *__return_storage_ptr__,TOptional<float> param_1)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  FNumberFormattingOptions *pFVar5;
  undefined1 local_res10 [24];
  TSharedPtr<FCulture,1> local_38;
  FNumberFormattingOptions local_28;
  
  if (*(char *)((longlong)param_1 + 4) == '\0') {
    pFVar4 = FText::GetEmpty();
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar1 = (pFVar4->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
    }
    __return_storage_ptr__->Flags = pFVar4->Flags;
    return __return_storage_ptr__;
  }
  if (__real_ff800000 == *(float *)param_1) {
    FText::AsLocalizable_Advanced_LocText
              (__return_storage_ptr__,L"FLoudnessMeterWidgetView",L"NegativeInfinity",L"-∞");
    return __return_storage_ptr__;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar5 = FNumberFormattingOptions::FNumberFormattingOptions(&local_28);
      pFVar5->MinimumFractionalDigits = 1;
      pFVar5->MaximumFractionalDigits = 1;
      NumberFormattingOptions.AlwaysSign = pFVar5->AlwaysSign;
      NumberFormattingOptions.UseGrouping = pFVar5->UseGrouping;
      NumberFormattingOptions.IndicateNearlyInteger = pFVar5->IndicateNearlyInteger;
      NumberFormattingOptions._3_1_ = pFVar5->field_0x3;
      NumberFormattingOptions.RoundingMode = pFVar5->RoundingMode;
      NumberFormattingOptions.MinimumIntegralDigits = pFVar5->MinimumIntegralDigits;
      NumberFormattingOptions.MaximumIntegralDigits = pFVar5->MaximumIntegralDigits;
      NumberFormattingOptions.MinimumFractionalDigits = pFVar5->MinimumFractionalDigits;
      NumberFormattingOptions.MaximumFractionalDigits = pFVar5->MaximumFractionalDigits;
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_38.Object = (FCulture *)0x0;
  local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (*(char *)((longlong)param_1 + 4) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  FText::AsNumber(__return_storage_ptr__,*(float *)param_1,&NumberFormattingOptions,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GenerateEvenlySplitGridForGeometry @ 14d925bd0

void __cdecl
SampledSequenceDrawingUtils::GenerateEvenlySplitGridForGeometry
          (TArray<SampledSequenceDrawingUtils::FGridData,TSizedDefaultAllocator<32>_> *param_1,
          FGeometry *param_2,ushort param_3,uint param_4,FSampledSequenceDrawingParams *param_5)

{
  code *pcVar1;
  bool bVar2;
  TArray<float,TSizedDefaultAllocator<32>_> local_48;
  TArray<double,TSizedDefaultAllocator<32>_> local_38;
  FDimensionSlot local_28;
  
  if (param_3 == 0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4579968050018648220>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SampledSequenceDrawingUtils.cpp"
                       ,0x9c,"NDimensions != 0");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    DestructItems<SampledSequenceDrawingUtils::FGridData,int>
              ((FGridData *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
    param_1->ArrayNum = 0;
    if (param_1->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
    }
    FDimensionSlot::FDimensionSlot(&local_28,0,param_3,param_2,param_5);
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    GenerateEvenlySplitGridForLine(&local_38,&local_48,local_28.Height,param_4,true);
    SampledSequenceDrawingUtilsPrivate::GenerateGridDataFromMidPoints
              (param_3,param_2,param_5,&local_38,&local_48,param_1);
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
  }
  return;
}

// GenerateEvenlySplitGridForLine @ 14d925d40

void __cdecl
SampledSequenceDrawingUtils::GenerateEvenlySplitGridForLine
          (TArray<double,TSizedDefaultAllocator<32>_> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2,float param_3,uint param_4,bool param_5
          )

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  float local_58;
  undefined4 local_54;
  double local_50;
  double local_48 [8];
  
  if (param_5) {
    param_1->ArrayNum = 0;
    if (param_1->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
    }
    param_2->ArrayNum = 0;
    if (param_2->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
    }
  }
  piVar1 = &param_2->ArrayMax;
  dVar5 = (double)param_3;
  local_50 = 0.0;
  if (0.0 < dVar5) {
    dVar4 = __real_3ff0000000000000 / dVar5;
    do {
      pFVar2 = (param_2->AllocatorInstance).Data;
      local_58 = (float)(dVar4 * local_50);
      if ((pFVar2 <= (FScriptContainerElement *)&local_58) &&
         ((FScriptContainerElement *)&local_58 < pFVar2 + (longlong)*piVar1 * 4)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar7 = param_2->ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_2->AllocatorInstance,piVar1);
      }
      param_2->ArrayNum = iVar7 + 1;
      *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_58;
      pFVar2 = (param_1->AllocatorInstance).Data;
      if ((pFVar2 <= (FScriptContainerElement *)&local_50) &&
         ((FScriptContainerElement *)&local_50 < pFVar2 + (longlong)param_1->ArrayMax * 8)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar7 = param_1->ArrayNum;
      if (iVar7 == param_1->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar7 + 1;
      *(double *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_50;
      local_50 = local_50 + (double)(param_3 / (float)param_4);
    } while (local_50 < dVar5);
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_54 = 0x3f800000;
  if ((pFVar2 <= (FScriptContainerElement *)&local_54) &&
     ((FScriptContainerElement *)&local_54 < pFVar2 + (longlong)*piVar1 * 4)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar7 = param_2->ArrayNum;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_2->AllocatorInstance,piVar1);
  }
  param_2->ArrayNum = iVar7 + 1;
  *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_54;
  pFVar2 = (param_1->AllocatorInstance).Data;
  local_48[0] = dVar5;
  if ((pFVar2 <= (FScriptContainerElement *)local_48) &&
     ((FScriptContainerElement *)local_48 < pFVar2 + (longlong)param_1->ArrayMax * 8)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar7 + 1;
  *(double *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_48[0];
  return;
}

// GenerateGridDataFromMidPoints @ 14d9260f0

void __cdecl
SampledSequenceDrawingUtilsPrivate::GenerateGridDataFromMidPoints
          (ushort param_1,FGeometry *param_2,FSampledSequenceDrawingParams *param_3,
          TArray<double,TSizedDefaultAllocator<32>_> *param_4,
          TArray<float,TSizedDefaultAllocator<32>_> *param_5,
          TArray<SampledSequenceDrawingUtils::FGridData,TSizedDefaultAllocator<32>_> *param_6)

{
  int *piVar1;
  FGridData *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  ushort local_b8;
  float local_b4;
  float fStack_b0;
  FDimensionSlot local_a0;
  FGridData local_90;
  double local_70;
  double dStack_68;
  double local_60;
  double dStack_58;
  
  local_b8 = 0;
  if (param_1 != 0) {
    piVar1 = &param_6->ArrayMax;
    do {
      uVar10 = 0;
      local_90.DrawCoordinates.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_90.DrawCoordinates.ArrayNum = 0;
      local_90.DrawCoordinates.ArrayMax = 0;
      local_90.PositionRatios.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_90.PositionRatios.ArrayNum = 0;
      local_90.PositionRatios.ArrayMax = 0;
      SampledSequenceDrawingUtils::FDimensionSlot::FDimensionSlot
                (&local_a0,local_b8,param_1,param_2,param_3);
      iVar7 = param_4->ArrayNum;
      if (0 < iVar7) {
        lVar9 = 0;
        lVar11 = 0;
        do {
          uVar6 = 0;
          if ((int)uVar10 < iVar7) {
            uVar6 = ~uVar10 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          dVar4 = (double)(float)((double)local_a0.Top +
                                 *(double *)((param_4->AllocatorInstance).Data + lVar11));
          if (param_3->Orientation == Horizontal) {
            local_b4 = SUB84(param_2->Size,0);
            dStack_58 = dVar4;
            local_60 = (double)local_b4;
            local_70 = 0.0;
            dStack_68 = dVar4;
          }
          else {
            fStack_b0 = SUB84(param_2->Size,4);
            dStack_68 = 0.0;
            dStack_58 = (double)fStack_b0;
            local_60 = dVar4;
            local_70 = dVar4;
          }
          if (((local_90.DrawCoordinates.AllocatorInstance.Data <=
                (FScriptContainerElement *)&local_70) &&
              ((FScriptContainerElement *)&local_70 <
               local_90.DrawCoordinates.AllocatorInstance.Data +
               (longlong)local_90.DrawCoordinates.ArrayMax * 0x20)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar7 = local_90.DrawCoordinates.ArrayNum;
          if (local_90.DrawCoordinates.ArrayNum == local_90.DrawCoordinates.ArrayMax) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x820,(ForAnyElementType *)&local_90,
                               &local_90.DrawCoordinates.ArrayMax);
          }
          local_90.DrawCoordinates.ArrayNum = iVar7 + 1;
          *(double *)(local_90.DrawCoordinates.AllocatorInstance.Data + (longlong)iVar7 * 0x20) =
               local_70;
          *(double *)(local_90.DrawCoordinates.AllocatorInstance.Data + (longlong)iVar7 * 0x20 + 8)
               = dStack_68;
          *(double *)
           (local_90.DrawCoordinates.AllocatorInstance.Data + (longlong)iVar7 * 0x20 + 0x10) =
               local_60;
          *(double *)
           (local_90.DrawCoordinates.AllocatorInstance.Data + (longlong)iVar7 * 0x20 + 0x10 + 8) =
               dStack_58;
          uVar6 = 0;
          if ((int)uVar10 < param_5->ArrayNum) {
            uVar6 = ~uVar10 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar8 = (param_5->AllocatorInstance).Data + lVar9;
          if (((local_90.PositionRatios.AllocatorInstance.Data <= pFVar8) &&
              (pFVar8 < local_90.PositionRatios.AllocatorInstance.Data +
                        (longlong)local_90.PositionRatios.ArrayMax * 4)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar7 = local_90.PositionRatios.ArrayNum;
          if (local_90.PositionRatios.ArrayNum == local_90.PositionRatios.ArrayMax) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_90.PositionRatios.AllocatorInstance,
                               &local_90.PositionRatios.ArrayMax);
          }
          uVar10 = uVar10 + 1;
          local_90.PositionRatios.ArrayNum = iVar7 + 1;
          lVar11 = lVar11 + 8;
          lVar9 = lVar9 + 4;
          *(undefined4 *)(local_90.PositionRatios.AllocatorInstance.Data + (longlong)iVar7 * 4) =
               *(undefined4 *)pFVar8;
          iVar7 = param_4->ArrayNum;
        } while ((int)uVar10 < iVar7);
      }
      pFVar2 = (FGridData *)(param_6->AllocatorInstance).Data;
      if (((pFVar2 <= &local_90) && (&local_90 < pFVar2 + *piVar1)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar7 = param_6->ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&param_6->AllocatorInstance,piVar1);
      }
      param_6->ArrayNum = iVar7 + 1;
      SampledSequenceDrawingUtils::FGridData::FGridData
                ((FGridData *)((param_6->AllocatorInstance).Data + (longlong)iVar7 * 0x20),&local_90
                );
      if (local_90.PositionRatios.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.PositionRatios.AllocatorInstance.Data);
      }
      if (local_90.DrawCoordinates.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.DrawCoordinates.AllocatorInstance.Data);
      }
      local_b8 = local_b8 + 1;
    } while (local_b8 < param_1);
  }
  return;
}

// GenerateMidpointSplitGridForGeometry @ 14d927060

void __cdecl
SampledSequenceDrawingUtils::GenerateMidpointSplitGridForGeometry
          (TArray<SampledSequenceDrawingUtils::FGridData,TSizedDefaultAllocator<32>_> *param_1,
          FGeometry *param_2,ushort param_3,uint param_4,FSampledSequenceDrawingParams *param_5)

{
  code *pcVar1;
  bool bVar2;
  TArray<float,TSizedDefaultAllocator<32>_> local_48;
  TArray<double,TSizedDefaultAllocator<32>_> local_38;
  FDimensionSlot local_28;
  
  if (param_3 == 0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4579968050018648237>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SampledSequenceDrawingUtils.cpp"
                       ,0xad,"NDimensions != 0");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    DestructItems<SampledSequenceDrawingUtils::FGridData,int>
              ((FGridData *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
    param_1->ArrayNum = 0;
    if (param_1->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
    }
    FDimensionSlot::FDimensionSlot(&local_28,0,param_3,param_2,param_5);
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    GenerateMidpointSplitGridForLine(&local_38,&local_48,local_28.Height,param_4,true);
    SampledSequenceDrawingUtilsPrivate::GenerateGridDataFromMidPoints
              (param_3,param_2,param_5,&local_38,&local_48,param_1);
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
  }
  return;
}

// GenerateMidpointSplitGridForLine @ 14d9271d0

void __cdecl
SampledSequenceDrawingUtils::GenerateMidpointSplitGridForLine
          (TArray<double,TSizedDefaultAllocator<32>_> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2,float param_3,uint param_4,bool param_5
          )

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  undefined1 local_res20 [8];
  undefined4 local_88;
  float local_84;
  undefined4 local_80 [2];
  undefined8 local_78;
  double local_70;
  double local_68;
  TArray<double,TSizedDefaultAllocator<32>_> local_60 [3];
  
  if (param_5) {
    param_1->ArrayNum = 0;
    if (param_1->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
    }
    param_2->ArrayNum = 0;
    if (param_2->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
    }
  }
  if (param_4 != 0) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    local_78 = 0;
    if ((pFVar1 <= (FScriptContainerElement *)&local_78) &&
       ((FScriptContainerElement *)&local_78 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar6 = param_1->ArrayNum;
    if (iVar6 == param_1->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar6 + 1;
    local_88 = 0;
    *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_78;
    pFVar1 = (param_2->AllocatorInstance).Data;
    if ((pFVar1 <= (FScriptContainerElement *)&local_88) &&
       ((FScriptContainerElement *)&local_88 < pFVar1 + (longlong)param_2->ArrayMax * 4)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar6 = param_2->ArrayNum;
    if (iVar6 == param_2->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar6 + 1;
    *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_88;
  }
  local_60[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60[0].ArrayNum = 0;
  local_60[0].ArrayMax = 0;
  SampledSequenceDrawingUtilsPrivate::DivideLineIteratively(0.0,param_3,param_4,local_60);
  AlgoImpl::IntroSortInternal<double,int,FIdentityFunctor,TDereferenceWrapper<double,TLess<void>_>_>
            ((double *)local_60[0].AllocatorInstance.Data,local_60[0].ArrayNum,
             (FIdentityFunctor)param_5,(TLess<void> *)local_res20);
  iVar6 = local_60[0].ArrayNum;
  uVar8 = (ulonglong)local_60[0].ArrayNum;
  dVar4 = (double)param_3;
  pFVar1 = local_60[0].AllocatorInstance.Data + uVar8 * 8;
  FVar9.Data = local_60[0].AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar8 != iVar6) {
      param_5 = false;
      `TCheckedPointerIterator<double,int,0>::operator!='::__l2::<lambda_1>::operator()(&param_5);
    }
    if (FVar9.Data == pFVar1) break;
    local_70 = *(double *)FVar9.Data;
    pFVar2 = (param_2->AllocatorInstance).Data;
    local_84 = (float)(local_70 / dVar4);
    if ((pFVar2 <= (FScriptContainerElement *)&local_84) &&
       ((FScriptContainerElement *)&local_84 < pFVar2 + (longlong)param_2->ArrayMax * 4)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar7 = param_2->ArrayNum;
    if (iVar7 == param_2->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar7 + 1;
    *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_84;
    pFVar2 = (param_1->AllocatorInstance).Data;
    if ((pFVar2 <= (FScriptContainerElement *)&local_70) &&
       ((FScriptContainerElement *)&local_70 < pFVar2 + (longlong)param_1->ArrayMax * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar7 = param_1->ArrayNum;
    if (iVar7 == param_1->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar7 + 1;
    FVar9.Data = FVar9.Data + 8;
    *(double *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_70;
    uVar8 = local_60[0]._8_8_ & 0xffffffff;
  }
  if (param_4 != 0) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    local_68 = dVar4;
    if ((pFVar1 <= (FScriptContainerElement *)&local_68) &&
       ((FScriptContainerElement *)&local_68 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar6 = param_1->ArrayNum;
    if (iVar6 == param_1->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar6 + 1;
    local_80[0] = 0x3f800000;
    *(double *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_68;
    pFVar1 = (param_2->AllocatorInstance).Data;
    if ((pFVar1 <= (FScriptContainerElement *)local_80) &&
       ((FScriptContainerElement *)local_80 < pFVar1 + (longlong)param_2->ArrayMax * 4)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar6 = param_2->ArrayNum;
    if (iVar6 == param_2->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar6 + 1;
    *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_80[0];
  }
  if (local_60[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60[0].AllocatorInstance.Data);
  }
  return;
}

// GenerateSampleBinsCoordinatesForGeometry @ 14d9287a0

void __cdecl
SampledSequenceDrawingUtils::GenerateSampleBinsCoordinatesForGeometry
          (TArray<SampledSequenceDrawingUtils::F2DLineCoordinates,TSizedDefaultAllocator<32>_>
           *param_1,FGeometry *param_2,TArray<TRange<float>,TSizedDefaultAllocator<32>_> *param_3,
          ushort param_4,FSampledSequenceDrawingParams *param_5)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  ushort local_a8;
  float local_a0;
  FDimensionSlot local_98;
  FDimensionSlot local_88 [5];
  
  fVar5 = __real_3f000000;
  if (param_4 == 0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4579968050018648127>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SampledSequenceDrawingUtils.cpp"
                       ,0x3f,"NDimensions != 0");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    local_a0 = SUB84(param_2->Size,0);
    uVar13 = (int)ROUND(local_a0 * __real_40000000 - __real_3f000000) >> 1;
    if ((param_4 * uVar13 != param_3->ArrayNum) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("PixelWidth * NDimensions == InSampleBins.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SampledSequenceDrawingUtils.cpp"
                           ,0x45,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FDimensionSlot::FDimensionSlot(local_88,0,param_4,param_2,param_5);
    piVar1 = &param_1->ArrayNum;
    uVar2 = param_3->ArrayNum;
    iVar7 = *piVar1;
    fVar17 = (float)((__real_3fe0000000000000 / param_5->MaxDisplayedValue) *
                     (double)local_88[0].Height * (double)param_5->VerticalZoomFactor);
    if (iVar7 < (int)uVar2) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,uVar2 - iVar7,&param_1->AllocatorInstance,piVar1,&param_1->ArrayMax);
    }
    else {
      if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
      }
      if ((int)uVar2 < iVar7) {
        uVar12 = iVar7 - uVar2;
        if (((int)(uVar12 | uVar2) < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (uVar12 != 0) {
          pFVar8 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar2 * 0x20;
          iVar7 = (*piVar1 - uVar2) - uVar12;
          if (iVar7 != 0) {
            memmove(pFVar8,pFVar8 + (longlong)(int)uVar12 * 0x20,(longlong)iVar7 << 5);
          }
          *piVar1 = *piVar1 - uVar12;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,&param_1->AllocatorInstance,*piVar1,&param_1->ArrayMax);
        }
      }
    }
    uVar2 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    pFVar8 = (param_1->AllocatorInstance).Data;
    local_a8 = 0;
    if (param_4 != 0) {
      do {
        uVar12 = 0;
        FDimensionSlot::FDimensionSlot(&local_98,local_a8,param_4,param_2,param_5);
        if (uVar13 != 0) {
          do {
            uVar11 = param_4 * uVar12 + (uint)local_a8;
            uVar10 = 0;
            if ((int)uVar11 < param_3->ArrayNum) {
              uVar10 = ~uVar11 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar3 = (param_3->AllocatorInstance).Data;
            lVar9 = (longlong)(int)uVar11;
            if ((pFVar3[lVar9 * 0x10 + 8] == (FScriptContainerElement)0x2) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Type != ERangeBoundTypes::Open",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                   ,99,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            fVar15 = *(float *)(pFVar3 + lVar9 * 0x10 + 0xc);
            if ((pFVar3[lVar9 * 0x10] == (FScriptContainerElement)0x2) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Type != ERangeBoundTypes::Open",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                   ,99,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            fVar15 = local_98.Center - fVar17 * fVar15;
            fVar16 = local_98.Center - fVar17 * *(float *)(pFVar3 + lVar9 * 0x10 + 4);
            if (fVar15 <= local_98.Top) {
              fVar15 = local_98.Top;
            }
            if (local_98.Bottom <= fVar16) {
              fVar16 = local_98.Bottom;
            }
            if ((float)((uint)(fVar15 - fVar16) & uVar2) < param_5->MinScaledBinValue) {
              fVar14 = param_5->MinScaledBinValue * fVar5;
              if (fVar16 < fVar15) {
                fVar15 = fVar15 + fVar14;
              }
              else {
                fVar15 = fVar15 - fVar14;
              }
              if (fVar16 < fVar15) {
                fVar16 = fVar15 - fVar14;
              }
              else {
                fVar16 = fVar16 + fVar14;
              }
            }
            uVar10 = uVar12 + 1;
            lVar9 = (ulonglong)uVar11 * 0x20;
            *(double *)(pFVar8 + lVar9) = (double)uVar12;
            *(double *)(pFVar8 + lVar9 + 8) = (double)fVar15;
            *(double *)(pFVar8 + lVar9 + 0x10) = (double)uVar12;
            *(double *)(pFVar8 + lVar9 + 0x18) = (double)fVar16;
            uVar12 = uVar10;
          } while (uVar10 < uVar13);
        }
        local_a8 = local_a8 + 1;
      } while (local_a8 < param_4);
    }
  }
  return;
}

// GenerateSequencedSamplesCoordinatesForGeometry @ 14d928c30

void __cdecl
SampledSequenceDrawingUtils::GenerateSequencedSamplesCoordinatesForGeometry
          (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArrayView<float_const_,int> *param_2,FGeometry *param_3,ushort param_4,
          FFixedSampledSequenceGridMetrics *param_5,FSampledSequenceDrawingParams *param_6)

{
  int *piVar1;
  double dVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  float fVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  ushort uVar13;
  uint uVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  double dVar18;
  uint local_res20;
  uint local_a8;
  ForAnyElementType local_a0;
  int local_98;
  int local_94;
  double local_90;
  double dStack_88;
  
  uVar11 = 0;
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&param_1->AllocatorInstance,0,piVar1);
  }
  if (param_4 == 0) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4579968050018648175>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SampledSequenceDrawingUtils.cpp"
                       ,0x6f,"NDimensions != 0");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    iVar3 = param_2->ArrayNum;
    uVar13 = 0;
    local_98 = 0;
    local_a0.Data = (FScriptContainerElement *)0x0;
    local_94 = 0;
    if (param_4 != 0) {
      do {
        if (local_98 == local_94) {
          local_98 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x410,&local_a0,&local_94);
        }
        lVar12 = (longlong)local_98;
        local_98 = local_98 + 1;
        FDimensionSlot::FDimensionSlot
                  ((FDimensionSlot *)(local_a0.Data + lVar12 * 0x10),uVar13,param_4,param_3,param_6)
        ;
        uVar13 = uVar13 + 1;
      } while (uVar13 < param_4);
    }
    fVar7 = __real_3f000000;
    local_a8 = 0;
    dVar18 = param_5->PixelsPerFrame;
    dVar2 = param_5->FirstMajorTickX;
    dVar6 = (double)(float)((double)*(float *)&param_3->Size + dVar18);
    if (dVar2 < dVar6) {
      local_res20 = 0;
      iVar10 = local_98;
      uVar14 = uVar11;
      do {
        lVar12 = 0;
        uVar16 = SUB84(dVar18,0);
        uVar17 = (undefined4)((ulonglong)dVar18 >> 0x20);
        if ((0.0 <= dVar2) && (uVar11 < (uint)(iVar3 / (int)(uint)param_4))) {
          uVar13 = 0;
          if (param_4 != 0) {
            do {
              if ((iVar10 <= (int)(uint)uVar13) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              FVar8.Data = local_a0.Data;
              uVar14 = uVar13 + local_res20;
              uVar11 = 0;
              if ((int)uVar14 < param_2->ArrayNum) {
                uVar11 = ~uVar14 >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar9)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pFVar4 = (param_1->AllocatorInstance).Data;
              fVar15 = *(float *)(FVar8.Data + lVar12 + 4) -
                       (float)(((double)param_2->DataPtr[(int)uVar14] / param_6->MaxDisplayedValue)
                              * (double)param_6->VerticalZoomFactor) *
                       *(float *)(FVar8.Data + lVar12 + 0xc) * fVar7;
              if (*(float *)(FVar8.Data + lVar12 + 8) <= fVar15) {
                fVar15 = *(float *)(FVar8.Data + lVar12 + 8);
              }
              if (fVar15 <= *(float *)(FVar8.Data + lVar12)) {
                fVar15 = *(float *)(FVar8.Data + lVar12);
              }
              dStack_88 = (double)fVar15;
              local_90 = dVar2;
              if (((pFVar4 <= (FScriptContainerElement *)&local_90) &&
                  ((FScriptContainerElement *)&local_90 < pFVar4 + (longlong)*piVar1 * 0x10)) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar9)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar10 = param_1->ArrayNum;
              if (iVar10 == *piVar1) {
                iVar10 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&param_1->AllocatorInstance,piVar1);
              }
              uVar13 = uVar13 + 1;
              param_1->ArrayNum = iVar10 + 1;
              lVar12 = lVar12 + 0x10;
              pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
              *(double *)pFVar4 = local_90;
              *(double *)(pFVar4 + 8) = dStack_88;
              iVar10 = local_98;
            } while (uVar13 < param_4);
            uVar16 = SUB84(param_5->PixelsPerFrame,0);
            uVar17 = (undefined4)((ulonglong)param_5->PixelsPerFrame >> 0x20);
            uVar11 = local_a8;
            uVar14 = local_res20;
          }
          uVar11 = uVar11 + 1;
          uVar14 = uVar14 + param_4;
          local_res20 = uVar14;
          local_a8 = uVar11;
        }
        dVar2 = dVar2 + (double)CONCAT44(uVar17,uVar16);
        dVar18 = (double)CONCAT44(uVar17,uVar16);
      } while (dVar2 < dVar6);
    }
    if (local_a0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data);
    }
  }
  return;
}

// GetLinearFrequencyClamped @ 14d92f950

float __cdecl
Audio::GetLinearFrequencyClamped(float param_1,TVector2<double> *param_2,TVector2<double> *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  dVar5 = (double)param_1;
  if (dVar5 < (param_3->field0_0x0)._s_0.X || dVar5 == (param_3->field0_0x0)._s_0.X) {
    return (float)(param_2->field0_0x0)._s_0.X;
  }
  if (dVar5 < (param_3->field0_0x0)._s_0.Y) {
    iVar1 = _isnan(dVar5);
    if (iVar1 == 0) {
      dVar5 = log((param_3->field0_0x0)._s_0.Y);
      uVar2 = SUB84(dVar5,0);
      uVar6 = (undefined4)((ulonglong)dVar5 >> 0x20);
      if (__real_47eff933c0000000 <= dVar5) {
        uVar2 = SUB84(__real_47eff933c0000000,0);
        uVar6 = (undefined4)((ulonglong)__real_47eff933c0000000 >> 0x20);
      }
      dVar5 = log((param_3->field0_0x0)._s_0.X);
      uVar3 = SUB84(dVar5,0);
      uVar7 = (undefined4)((ulonglong)dVar5 >> 0x20);
      if (dVar5 <= __real_3e45798ee0000000) {
        uVar3 = SUB84(__real_3e45798ee0000000,0);
        uVar7 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
      }
      fVar4 = logf(param_1);
      dVar5 = (double)CONCAT44(uVar6,uVar2) - (double)CONCAT44(uVar7,uVar3);
      if (__real_3e45798ee2308c3a <
          (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
        dVar5 = ((double)fVar4 - (double)CONCAT44(uVar7,uVar3)) / dVar5;
      }
      else {
        dVar5 = __real_3ff0000000000000;
        if ((double)fVar4 < (double)CONCAT44(uVar6,uVar2)) {
          dVar5 = 0.0;
        }
      }
      return (float)(((param_2->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.X) * dVar5 +
                    (param_2->field0_0x0)._s_0.X);
    }
    return (float)(param_2->field0_0x0)._s_0.X;
  }
  return (float)(param_2->field0_0x0)._s_0.Y;
}

// GetValueGridOverlayLabelGenerator @ 14d938430

TFunction<FText___cdecl(double)> * __cdecl
AudioOscilloscopePanelWidgetPrivate::GetValueGridOverlayLabelGenerator(EYAxisLabelsUnit param_1)

{
  TFunction<FText___cdecl(double)> *pTVar1;
  
  if ((param_1 == Linear) || (pTVar1 = &YAxisValueGeneratorDb, param_1 != Db)) {
    pTVar1 = &YAxisValueGeneratorLinear;
  }
  return pTVar1;
}

// GetWindowCompensationPowerGain @ 14d9385f0

float __cdecl
AudioWidgets::AudioSpectrumAnalyzerPrivate::GetWindowCompensationPowerGain
          (EWindowType param_1,int param_2)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  int iVar4;
  float fVar5;
  float local_res10 [2];
  ForAnyElementType local_98;
  int local_90 [2];
  FScriptContainerElement *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  TArrayView<float,int> local_68;
  TArrayView<float_const_,int> local_58;
  FWindow local_48;
  
  if (0x4000 < param_2) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1517583727188770839>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioSpectrumAnalyzer.cpp"
                       ,0x17,"FFTSize <= 16384");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      fVar5 = (float)(*pcVar1)();
      return fVar5;
    }
  }
  if ((param_2 & param_2 - 1U) != 0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1517583727188770840>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioSpectrumAnalyzer.cpp"
                       ,0x18,"FMath::IsPowerOfTwo(FFTSize)");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      fVar5 = (float)(*pcVar1)();
      return fVar5;
    }
  }
  iVar4 = 0;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90[0] = 0;
  local_90[1] = 0;
  if (param_2 < 1) {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
    }
  }
  else {
    UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,param_2,&local_98,local_90,local_90 + 1);
    iVar4 = local_90[0];
  }
  FVar2.Data = local_98.Data;
  local_88 = local_98.Data;
  if (iVar4 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      fVar5 = (float)(*pcVar1)();
      return fVar5;
    }
  }
  fVar5 = __real_3f800000;
  local_68._12_4_ = uStack_7c;
  local_68.ArrayNum = iVar4;
  local_68.DataPtr = (float *)local_88;
  iStack_80 = iVar4;
  Audio::ArraySetToConstantInplace(&local_68,__real_3f800000);
  Audio::FWindow::FWindow(&local_48,param_1,param_2,1,false);
  Audio::FWindow::ApplyToBuffer(&local_48,(float *)FVar2.Data);
  local_res10[0] = 1.0;
  local_78 = FVar2.Data;
  if (iVar4 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      fVar5 = (float)(*pcVar1)();
      return fVar5;
    }
  }
  local_58._12_4_ = uStack_6c;
  local_58.ArrayNum = iVar4;
  local_58.DataPtr = (float *)local_78;
  iStack_70 = iVar4;
  Audio::ArrayMeanSquared(&local_58,local_res10);
  fVar5 = fVar5 / local_res10[0];
  if (local_48.WindowBuffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.WindowBuffer.AllocatorInstance.Data);
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  return fVar5;
}

// MakeMeterValueTileWidget @ 14d940b00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedRef<ITableRow,1> * __cdecl
AudioWidgets::LoudnessMeterWidgetView_Private::MakeMeterValueTileWidget
          (TSharedRef<ITableRow,1> *__return_storage_ptr__,
          TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *param_1,
          TSharedRef<STableViewBase,1> *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  FAudioMeterDefaultColorWidgetStyle *pFVar10;
  FArguments *this;
  FArguments *pFVar11;
  FSlot *pFVar12;
  FSizeParam *pFVar13;
  FArguments *pFVar14;
  undefined8 *puVar15;
  ulong64 uVar16;
  FSlateFontInfo *pFVar17;
  TSharedRef<STextBlock,1> *pTVar18;
  FArguments *pFVar19;
  TSharedRef<SAudioMeterWidget,1> *pTVar20;
  FName FVar21;
  undefined4 *puVar22;
  TSharedRef<SVerticalBox,1> *pTVar23;
  TSharedRef<SBorder,1> *pTVar24;
  TSharedRef<SBox,1> *pTVar25;
  TSlateDecl<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  *this_00;
  TSharedRef<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
  *pTVar26;
  FAudioMeterWidgetStyle *pFVar27;
  FName FVar28;
  undefined ***pppuVar29;
  FName FVar30;
  undefined1 auStackY_2428 [32];
  FLLMScope local_23f8 [2];
  FName local_23f0;
  T0RequiredArgs local_23e8;
  T0RequiredArgs local_23e7;
  T0RequiredArgs local_23e6;
  T0RequiredArgs local_23e5;
  T0RequiredArgs local_23e4;
  T0RequiredArgs local_23e3 [3];
  FName local_23e0;
  FDestructionSentinel local_23d8;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_23c0;
  FName local_23a8;
  TReferenceControllerBase<1> *pTStack_23a0;
  TVector2<float>_u_0 local_2398;
  FName local_2390;
  TReferenceControllerBase<1> *pTStack_2388;
  STextBlock *local_2380;
  FSharedReferencer<1> local_2378;
  undefined1 local_2370 [16];
  undefined1 local_2360 [8];
  undefined1 local_2358 [8];
  ForAnyElementType FStack_2350;
  ulonglong local_2348;
  undefined1 local_2340 [24];
  TSharedRef<ITableRow,1> *local_2328;
  FSlateRoundedBoxBrush *local_2320;
  undefined1 local_2318;
  undefined1 local_2310 [8];
  void *pvStack_2308;
  undefined8 local_2300;
  undefined4 local_22f8 [2];
  undefined4 local_22f0 [2];
  TSharedRef<STableViewBase,1> *local_22e8;
  T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> local_22e0;
  TReferenceControllerBase<1> *local_22d8;
  TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *local_22d0;
  FDestructionSentinel local_22c8;
  undefined1 *local_22b0;
  TAttribute<float> local_22a8;
  TAttribute<bool> local_2288;
  TAttribute<ETextJustify::Type> local_2268;
  FLinearColor_u_0 local_2248;
  ESlateColorStylingMode local_2238;
  EStyleColor EStack_2237;
  undefined2 uStack_2236;
  undefined1 local_2234;
  undefined8 local_2230;
  undefined8 uStack_2228;
  undefined8 local_2220;
  FLinearColor_u_0 local_2218;
  undefined1 local_2208;
  undefined1 local_2204;
  undefined8 local_2200;
  undefined8 uStack_21f8;
  undefined8 local_21f0;
  FLinearColor_u_0 local_21e8;
  undefined1 local_21d8;
  undefined1 local_21d4;
  undefined8 local_21d0;
  undefined8 uStack_21c8;
  undefined8 local_21c0;
  FLinearColor_u_0 local_21b8;
  undefined1 local_21a8;
  undefined1 local_21a4;
  undefined8 local_21a0;
  undefined8 uStack_2198;
  undefined8 local_2190;
  FLinearColor_u_0 local_2188;
  undefined1 local_2178;
  undefined1 local_2174;
  undefined8 local_2170;
  undefined8 uStack_2168;
  undefined8 local_2160;
  FLinearColor_u_0 local_2158;
  undefined1 local_2148;
  undefined1 local_2144;
  undefined8 local_2140;
  undefined8 uStack_2138;
  undefined8 local_2130;
  FLinearColor_u_0 local_2128;
  undefined1 local_2118;
  undefined1 local_2114;
  undefined8 local_2110;
  undefined8 uStack_2108;
  undefined8 local_2100;
  FLinearColor_u_0 local_20f8;
  undefined1 local_20e8;
  undefined1 local_20e4;
  undefined8 local_20e0;
  undefined8 uStack_20d8;
  undefined8 local_20d0;
  TSharedRef<STextBlock,1> local_20c8;
  TSharedRef<SAudioMeterWidget,1> local_20b8;
  TSharedRef<STextBlock,1> local_20a8;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_2098;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_2080;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_2068;
  TSharedRef<SBorder,1> local_2050;
  TSharedRef<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
  local_2040;
  TSharedRef<SBox,1> local_2030;
  TSharedRef<SVerticalBox,1> local_2020;
  undefined1 local_2010 [16];
  undefined1 local_2000 [32];
  undefined1 local_1fe0 [24];
  TSlateDecl<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  local_1fc8;
  TAttribute<FSlateFontInfo> local_1fb0;
  TAttribute<FSlateFontInfo> local_1f30;
  undefined1 local_1eb0 [16];
  FSharedReferencer<1> local_1ea0 [7];
  undefined4 local_1e68;
  undefined1 local_1e64;
  TOptional<FSizeParam> local_1e58;
  undefined1 local_1dc8 [16];
  FSharedReferencer<1> local_1db8 [7];
  undefined4 local_1d80;
  undefined1 local_1d7c;
  FSlateFontInfo local_1ce0;
  FSlateFontInfo local_1c80;
  undefined1 local_1c20 [232];
  FArguments local_1b38;
  FArguments local_1930;
  FArguments local_1638;
  FArguments local_12f8;
  FArguments local_f70;
  FArguments local_b90;
  FArguments local_638;
  code *local_d8;
  undefined **local_c8;
  FLoudnessMetric *local_c0;
  TReferenceControllerBase<1> *local_b8;
  undefined ***local_b0;
  code *local_a8;
  undefined **local_98;
  FLoudnessMetric *local_90;
  TReferenceControllerBase<1> *local_88;
  undefined ***local_80;
  code *local_78 [2];
  undefined **local_68;
  FLoudnessMetric *local_60;
  TReferenceControllerBase<1> *local_58;
  undefined ***local_50;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14d940b22;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2428;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_2328 = __return_storage_ptr__;
  local_22e8 = param_2;
  local_22d0 = param_1;
  if ((*(int *)(lVar1 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pFVar27 = FAudioMeterWidgetStyle::GetDefault();
    FAudioMeterWidgetStyle::FAudioMeterWidgetStyle(&AudioMeterWidgetStyle,pFVar27);
    AudioMeterWidgetStyle.MeterSize.field0_0x0 =
         (TVector2<double>_u_0)(TVector2<double>_u_0)___xmm_40390000000000004085e00000000000;
    AudioMeterWidgetStyle.ValueRangeDb.field0_0x0._s_0.X = __real_c04e000000000000;
    AudioMeterWidgetStyle.ValueRangeDb.field0_0x0._s_0.Y = 0.0;
    AudioMeterWidgetStyle.ScaleHashHeight = 4.0;
    atexit(`AudioWidgets::LoudnessMeterWidgetView_Private::MakeMeterValueTileWidget'::__l2::
           _dynamic_atexit_destructor_for__AudioMeterWidgetStyle__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*(int *)(lVar1 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    local_2398 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,float>
              (&RoundedPanelBrush,&FStyleColors::Panel,__real_40800000,
               (FDeprecateVector2DParameter *)&local_2398._s_0);
    atexit(`AudioWidgets::LoudnessMeterWidgetView_Private::MakeMeterValueTileWidget'::__l2::
           _dynamic_atexit_destructor_for__RoundedPanelBrush__);
    _Init_thread_footer(&::_TSS1);
  }
  pFVar10 = FAudioMeterDefaultColorWidgetStyle::GetDefault();
  local_2398 = (TVector2<float>_u_0)
               STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
               ::FArguments::FArguments(&local_1930);
  local_2390 = (FName)SBox::FArguments::FArguments(&local_1638);
  local_2370._8_8_ = _UNK_1509253f8;
  local_2370._0_8_ = ___xmm_40800000408000004080000040800000;
  *(EVerticalAlignment *)((longlong)local_2390 + 0x1fc) = VAlign_Center;
  FVar30.ComparisonIndex.Value = 0;
  FVar30.Number = 0;
  *(bool *)((longlong)local_2390 + 0x210) = true;
  *(undefined8 *)&((TAttribute<FMargin> *)((longlong)local_2390 + 0x200))->Value = local_2370._0_8_;
  *(undefined8 *)((longlong)local_2390 + 0x208) = local_2370._8_8_;
  local_2360[0] = true;
  local_2348 = 0;
  local_2358 = (undefined1  [8])0x0;
  FStack_2350.Data = (FScriptContainerElement *)0x0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)local_2390 + 0x218),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2358);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2358,
             (FWriteAccessScope *)&local_23d8);
  if (((int)local_2348 != 0) && (FStack_2350.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2350.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2350,0,0,0x10);
    local_2348 = local_2348 & 0xffffffff00000000;
  }
  if (local_23d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_23d8.Accessor,&local_23d8);
  }
  if (FStack_2350.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2350.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2358);
  this = SBorder::FArguments::FArguments(&local_f70);
  local_2318 = 1;
  local_2320 = &RoundedPanelBrush;
  local_2300 = 0;
  local_2310 = (undefined1  [8])0x0;
  pvStack_2308 = (void *)0x0;
  (this->_BorderImage).Value = (FSlateBrush *)&RoundedPanelBrush;
  (this->_BorderImage).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_BorderImage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2310);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2310);
  if (pvStack_2308 != (void *)0x0) {
    FMemory::Free(pvStack_2308);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2310);
  local_23a8 = (FName)SBorder::FArguments::Padding(this,0.0,__real_41000000);
  pFVar11 = SVerticalBox::FArguments::FArguments(&local_1b38);
  pFVar12 = ::operator_new(0x58);
  local_23e0 = FVar30;
  if (pFVar12 != (FSlot *)0x0) {
    *(undefined8 *)pFVar12 = 0;
    *(undefined8 *)&pFVar12->field_0x8 = 0;
    *(undefined8 *)&pFVar12->field_0x10 = 0;
    *(undefined8 *)&pFVar12->field_0x18 = 0;
    *(undefined8 *)&pFVar12->field_0x20 = 0;
    *(undefined8 *)&pFVar12->field_0x28 = 0;
    *(undefined8 *)&pFVar12->field_0x30 = 0;
    *(undefined8 *)&pFVar12->field_0x38 = 0;
    *(undefined8 *)&pFVar12->field_0x40 = 0;
    *(undefined8 *)&pFVar12->field_0x48 = 0;
    *(undefined8 *)&pFVar12->field_0x50 = 0;
    local_23e0 = (FName)SVerticalBox::FSlot::FSlot(pFVar12);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_1eb0,(FSlot *)&local_23e0);
  pFVar13 = (FSizeParam *)FAuto::FAuto((FAuto *)local_2370);
  TOptional<FSizeParam>::operator=(&local_1e58,pFVar13);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2340);
  if ((void *)local_2340._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2340._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2340);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2360);
  if ((atomic<unsigned___int64>)local_2358 != (atomic<unsigned___int64>)0x0) {
    FMemory::Free((void *)local_2358);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2360);
  local_1e68 = 2;
  local_1e64 = 1;
  pFVar14 = STextBlock::FArguments::FArguments(&local_638);
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  local_90 = param_1->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_80 = (undefined ***)0x0;
  local_98 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`AudioWidgets::LoudnessMeterWidgetView_Private::MakeMeterValueTileWidget'::`2'::<lambda_2>,0,0>
              ::_vftable_;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<`AudioWidgets::LoudnessMeterWidgetView_Private::MakeMeterValueTileWidget'::__l2::<lambda_2>,FText>
             ::Call;
  (pFVar14->_Text).bIsSet = true;
  local_88 = pTVar2;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar14->_Text).Getter,
             (FWriteAccessScope *)local_2370);
  local_2358 = (undefined1  [8])&(pFVar14->_Text).Getter.field_0x8;
  puVar15 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_2358);
  if (puVar15 != (undefined8 *)0x0) {
    *puVar15 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar16 = FDelegateHandle::GenerateNewID();
    puVar15[2] = uVar16;
    *puVar15 = &
               ___7__TBaseFunctorDelegateInstance___A6A_AVFText__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AVFText__XZ____V__6B_
    ;
    puVar15[4] = local_a8;
    puVar15[9] = 0;
    if (local_a8 != (code *)0x0) {
      pppuVar29 = &local_98;
      if (local_80 != (undefined ***)0x0) {
        pppuVar29 = local_80;
      }
      (*(code *)**pppuVar29)();
    }
  }
  if (local_2360[0] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_2370._8_8_,(FDestructionSentinel *)local_2370);
  }
  pFVar17 = FStyleDefaults::GetFontInfo(&local_1c80,0xe);
  FSlateFontInfo::FSlateFontInfo(&local_1fb0.Value,pFVar17);
  local_1fb0.bIsSet = true;
  local_1fb0.Getter._16_8_ = 0;
  local_1fb0.Getter._0_8_ = 0;
  local_1fb0.Getter._8_8_ = 0;
  pFVar14 = STextBlock::FArguments::Font(pFVar14,&local_1fb0);
  local_2234 = 1;
  local_2238 = FStyleColors::AccentGreen.ColorUseRule;
  EStack_2237 = FStyleColors::AccentGreen.ColorTableId;
  uStack_2236 = FStyleColors::AccentGreen._18_2_;
  local_2220 = 0;
  local_2248 = FStyleColors::AccentGreen.SpecifiedColor.field0_0x0;
  local_2230 = 0;
  uStack_2228 = 0;
  pFVar14 = STextBlock::FArguments::ColorAndOpacity
                      (pFVar14,(TAttribute<FSlateColor> *)&local_2248._s_0);
  pFVar14->_SimpleTextMode = true;
  FLLMScope::FLLMScope(local_23f8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_23e0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_23f0,&local_23e0,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *)local_2370,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\LoudnessMeterWidgetView.cpp"
             ,0x75,&local_23e8);
  FMemScope::~FMemScope((FMemScope *)&local_23f0);
  FLLMScope::~FLLMScope(local_23f8);
  pTVar18 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      ((TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *)local_2370,&local_20a8
                       ,pFVar14);
  local_1eb0._8_8_ = pTVar18->Object;
  local_23d8.Accessor =
       (FMRSWRecursiveAccessDetector *)(pTVar18->SharedReferenceCount).ReferenceController;
  if ((TReferenceControllerBase<1> *)local_23d8.Accessor != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_23d8.Accessor)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_23d8.Accessor)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    ((TReferenceControllerBase<1> *)local_23d8.Accessor)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_23d8.Accessor)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_23d8.AccessType = Reader;
  local_23d8._4_4_ = 0;
  local_22d8 = (TReferenceControllerBase<1> *)local_23d8.Accessor;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            ((FSharedReferencer<1> *)(local_1eb0 + 0x10),
             (FSharedReferencer<1> *)&local_23d8.Accessor);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_23d8.Accessor);
  pFVar11 = SVerticalBox::FArguments::operator+(pFVar11,(FSlotArguments *)local_1eb0);
  pFVar12 = ::operator_new(0x58);
  local_23f0 = FVar30;
  if (pFVar12 != (FSlot *)0x0) {
    *(undefined8 *)pFVar12 = 0;
    *(undefined8 *)&pFVar12->field_0x8 = 0;
    *(undefined8 *)&pFVar12->field_0x10 = 0;
    *(undefined8 *)&pFVar12->field_0x18 = 0;
    *(undefined8 *)&pFVar12->field_0x20 = 0;
    *(undefined8 *)&pFVar12->field_0x28 = 0;
    *(undefined8 *)&pFVar12->field_0x30 = 0;
    *(undefined8 *)&pFVar12->field_0x38 = 0;
    *(undefined8 *)&pFVar12->field_0x40 = 0;
    *(undefined8 *)&pFVar12->field_0x48 = 0;
    *(undefined8 *)&pFVar12->field_0x50 = 0;
    local_23f0 = (FName)SVerticalBox::FSlot::FSlot(pFVar12);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_1dc8,(FSlot *)&local_23f0);
  local_1d80 = 2;
  local_1d7c = 1;
  pFVar19 = SAudioMeterWidget::FArguments::FArguments(&local_12f8);
  pFVar19->_Orientation = Orient_Vertical;
  local_2208 = 0;
  local_2218 = FLinearColor::Transparent.field0_0x0;
  local_2204 = 1;
  local_2200 = 0;
  uStack_21f8 = 0;
  local_21f0 = 0;
  pFVar19 = SAudioMeterWidget::FArguments::BackgroundColor
                      (pFVar19,(TAttribute<FSlateColor> *)&local_2218._s_0);
  local_21e8._0_8_ = *(undefined8 *)&(pFVar10->MeterBackgroundColor).field0_0x0;
  local_21e8._8_8_ = *(undefined8 *)((longlong)&(pFVar10->MeterBackgroundColor).field0_0x0 + 8);
  local_21d8 = 0;
  local_21d4 = 1;
  local_21c0 = 0;
  local_21d0 = 0;
  uStack_21c8 = 0;
  pFVar19 = SAudioMeterWidget::FArguments::MeterBackgroundColor
                      (pFVar19,(TAttribute<FSlateColor> *)&local_21e8._s_0);
  local_21b8._0_8_ = *(undefined8 *)&(pFVar10->MeterValueColor).field0_0x0;
  local_21b8._8_8_ = *(undefined8 *)((longlong)&(pFVar10->MeterValueColor).field0_0x0 + 8);
  local_21a8 = 0;
  local_21a4 = 1;
  local_2190 = 0;
  local_21a0 = 0;
  uStack_2198 = 0;
  pFVar19 = SAudioMeterWidget::FArguments::MeterValueColor
                      (pFVar19,(TAttribute<FSlateColor> *)&local_21b8._s_0);
  local_2178 = 0;
  local_2174 = 1;
  local_2160 = 0;
  local_2188 = FLinearColor::Transparent.field0_0x0;
  local_2170 = 0;
  uStack_2168 = 0;
  pFVar19 = SAudioMeterWidget::FArguments::MeterPeakColor
                      (pFVar19,(TAttribute<FSlateColor> *)&local_2188._s_0);
  local_2148 = 0;
  local_2144 = 1;
  local_2130 = 0;
  local_2158 = FLinearColor::Transparent.field0_0x0;
  local_2140 = 0;
  uStack_2138 = 0;
  pFVar19 = SAudioMeterWidget::FArguments::MeterClippingColor
                      (pFVar19,(TAttribute<FSlateColor> *)&local_2158._s_0);
  local_23d8._4_4_ = FLinearColor::White.field0_0x0._s_0.G;
  local_23d8.AccessType = (EAccessType)FLinearColor::White.field0_0x0._s_0.R;
  local_23d8.Accessor =
       (FMRSWRecursiveAccessDetector *)CONCAT44(0x3e800000,FLinearColor::White.field0_0x0._s_0.B);
  local_2118 = 0;
  local_2114 = 1;
  local_2100 = 0;
  local_2128._s_0.R = FLinearColor::White.field0_0x0._s_0.R;
  local_2128._s_0.G = FLinearColor::White.field0_0x0._s_0.G;
  local_2128._s_0.B = FLinearColor::White.field0_0x0._s_0.B;
  local_2128._s_0.A = 0.25;
  local_2110 = 0;
  uStack_2108 = 0;
  pFVar19 = SAudioMeterWidget::FArguments::MeterScaleColor
                      (pFVar19,(TAttribute<FSlateColor> *)&local_2128._s_0);
  local_20e8 = 0;
  local_20e4 = 1;
  local_20d0 = 0;
  local_23d8._4_4_ = FLinearColor::White.field0_0x0._s_0.G;
  local_23d8.AccessType = (EAccessType)FLinearColor::White.field0_0x0._s_0.R;
  local_23d8.Accessor =
       (FMRSWRecursiveAccessDetector *)CONCAT44(0x3e800000,FLinearColor::White.field0_0x0._s_0.B);
  local_20f8._s_0.R = FLinearColor::White.field0_0x0._s_0.R;
  local_20f8._s_0.G = FLinearColor::White.field0_0x0._s_0.G;
  local_20f8._s_0.B = FLinearColor::White.field0_0x0._s_0.B;
  local_20f8._s_0.A = 0.25;
  local_20e0 = 0;
  uStack_20d8 = 0;
  pFVar19 = SAudioMeterWidget::FArguments::MeterScaleLabelColor
                      (pFVar19,(TAttribute<FSlateColor> *)&local_20f8._s_0);
  pFVar19->_Style = &AudioMeterWidgetStyle;
  local_23d8._0_8_ = (param_1->SharedReferenceCount).ReferenceController;
  local_c0 = param_1->Object;
  if ((TReferenceControllerBase<1> *)local_23d8._0_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_23d8._0_8_)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_23d8._0_8_)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    ((TReferenceControllerBase<1> *)local_23d8._0_8_)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_23d8._0_8_)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_b0 = (undefined ***)0x0;
  local_c8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`AudioWidgets::LoudnessMeterWidgetView_Private::MakeMeterValueTileWidget'::`2'::<lambda_3>,0,0>
              ::_vftable_;
  local_d8 = UE::Core::Private::Function::
             TFunctionRefCaller<`AudioWidgets::LoudnessMeterWidgetView_Private::MakeMeterValueTileWidget'::__l2::<lambda_3>,TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>_>
             ::Call;
  (pFVar19->_MeterChannelInfo).bIsSet = true;
  local_b8 = (TReferenceControllerBase<1> *)local_23d8._0_8_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(pFVar19->_MeterChannelInfo).Getter,(FWriteAccessScope *)&local_22c8);
  local_22b0 = &(pFVar19->_MeterChannelInfo).Getter.field_0x8;
  puVar15 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_22b0);
  if (puVar15 != (undefined8 *)0x0) {
    *puVar15 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TArray_UFAudioMeterChannelInfo__V__TSizedDefaultAllocator__0CA_____XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar16 = FDelegateHandle::GenerateNewID();
    puVar15[2] = uVar16;
    *puVar15 = &
               ___7__TBaseFunctorDelegateInstance___A6A_AV__TArray_UFAudioMeterChannelInfo__V__TSizedDefaultAllocator__0CA_____XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AV__TArray_UFAudioMeterChannelInfo__V__TSizedDefaultAllocator__0CA_____XZ____V__6B_
    ;
    puVar15[4] = local_d8;
    puVar15[9] = 0;
    if (local_d8 != (code *)0x0) {
      pppuVar29 = &local_c8;
      if (local_b0 != (undefined ***)0x0) {
        pppuVar29 = local_b0;
      }
      (*(code *)**pppuVar29)();
    }
  }
  if (local_22c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_22c8.Accessor,&local_22c8);
  }
  FLLMScope::FLLMScope(local_23f8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_23f0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_23e0,&local_23f0,true);
  TSlateDecl<SAudioMeterWidget,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SAudioMeterWidget,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<SAudioMeterWidget,RequiredArgs::T0RequiredArgs> *)&local_22c8,
             "SAudioMeterWidget",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\LoudnessMeterWidgetView.cpp"
             ,0x7e,&local_23e7);
  FMemScope::~FMemScope((FMemScope *)&local_23e0);
  FLLMScope::~FLLMScope(local_23f8);
  pTVar20 = TSlateDecl<SAudioMeterWidget,RequiredArgs::T0RequiredArgs>::operator<<=
                      ((TSlateDecl<SAudioMeterWidget,RequiredArgs::T0RequiredArgs> *)&local_22c8,
                       &local_20b8,pFVar19);
  pTVar3 = (pTVar20->SharedReferenceCount).ReferenceController;
  local_1dc8._8_8_ = pTVar20->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_23c0._Widget.Object = (SBox *)0x0;
  local_23c0._Widget.SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            ((FSharedReferencer<1> *)(local_1dc8 + 0x10),&local_23c0._Widget.SharedReferenceCount);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_23c0._Widget.SharedReferenceCount.ReferenceController);
  local_23c0._Widget.Object =
       (SBox *)SVerticalBox::FArguments::operator+(pFVar11,(FSlotArguments *)local_1dc8);
  pFVar12 = ::operator_new(0x58);
  FVar21 = FVar30;
  if (pFVar12 != (FSlot *)0x0) {
    *(undefined8 *)pFVar12 = 0;
    *(undefined8 *)&pFVar12->field_0x8 = 0;
    *(undefined8 *)&pFVar12->field_0x10 = 0;
    *(undefined8 *)&pFVar12->field_0x18 = 0;
    *(undefined8 *)&pFVar12->field_0x20 = 0;
    *(undefined8 *)&pFVar12->field_0x28 = 0;
    *(undefined8 *)&pFVar12->field_0x30 = 0;
    *(undefined8 *)&pFVar12->field_0x38 = 0;
    *(undefined8 *)&pFVar12->field_0x40 = 0;
    *(undefined8 *)&pFVar12->field_0x48 = 0;
    *(undefined8 *)&pFVar12->field_0x50 = 0;
    FVar21 = (FName)SVerticalBox::FSlot::FSlot(pFVar12);
  }
  local_23f0 = FVar21;
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_1c20,(FSlot *)&local_23f0);
  pFVar13 = (FSizeParam *)FAuto::FAuto((FAuto *)local_2010);
  TOptional<FSizeParam>::operator=((TOptional<FSizeParam> *)(local_1c20 + 0x58),pFVar13);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1fe0);
  if ((void *)local_1fe0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1fe0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1fe0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2000);
  if ((void *)local_2000._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2000._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2000);
  local_22a8.Value = 28.0;
  local_22a8.Getter._16_8_ = 0;
  local_22a8.bIsSet = true;
  local_22a8.Getter._0_8_ = 0;
  local_22a8.Getter._8_8_ = 0;
  FVar21 = (FName)SVerticalBox::FSlot::FSlotArguments::MinHeight
                            ((FSlotArguments *)local_1c20,&local_22a8);
  puVar22 = (undefined4 *)((longlong)FVar21 + 0x48);
  if (local_22f8 != puVar22) {
    *puVar22 = 2;
    *(undefined1 *)((longlong)FVar21 + 0x4c) = 1;
  }
  FVar28 = FVar30;
  if (puVar22 != (undefined4 *)0x0) {
    FVar28 = FVar21;
  }
  if (local_22f0 != (undefined4 *)((longlong)FVar28 + 0x50)) {
    *(undefined4 *)((longlong)FVar28 + 0x50) = 2;
    *(undefined1 *)((longlong)FVar28 + 0x54) = 1;
  }
  if (FVar28 != (FName)0xffffffffffffffb8) {
    FVar30 = FVar28;
  }
  pFVar14 = STextBlock::FArguments::FArguments(&local_b90);
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  local_60 = param_1->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_50 = (undefined ***)0x0;
  local_68 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`AudioWidgets::LoudnessMeterWidgetView_Private::MakeMeterValueTileWidget'::`2'::<lambda_4>,0,0>
              ::_vftable_;
  local_78[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`AudioWidgets::LoudnessMeterWidgetView_Private::MakeMeterValueTileWidget'::__l2::<lambda_4>,FText>
                ::Call;
  local_58 = pTVar4;
  pFVar14 = STextBlock::FArguments::Text_Lambda(pFVar14,(TFunction<FText___cdecl(void)> *)local_78);
  pFVar17 = FStyleDefaults::GetFontInfo(&local_1ce0,8);
  FSlateFontInfo::FSlateFontInfo(&local_1f30.Value,pFVar17);
  local_1f30.bIsSet = true;
  local_1f30.Getter._16_8_ = 0;
  local_1f30.Getter._0_8_ = 0;
  local_1f30.Getter._8_8_ = 0;
  pFVar14 = STextBlock::FArguments::Font(pFVar14,&local_1f30);
  local_2288.Value = true;
  local_2288.bIsSet = true;
  local_2288.Getter._16_8_ = 0;
  local_2288.Getter._0_8_ = 0;
  local_2288.Getter._8_8_ = 0;
  pFVar14 = STextBlock::FArguments::AutoWrapText(pFVar14,&local_2288);
  local_2268.Value = Center;
  local_2268.bIsSet = true;
  local_2268.Getter._16_8_ = 0;
  local_2268.Getter._0_8_ = 0;
  local_2268.Getter._8_8_ = 0;
  pFVar14 = STextBlock::FArguments::Justification(pFVar14,&local_2268);
  FLLMScope::FLLMScope(local_23f8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_23f0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_23e0,&local_23f0,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_2068,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\LoudnessMeterWidgetView.cpp"
             ,0x95,&local_23e6);
  FMemScope::~FMemScope((FMemScope *)&local_23e0);
  FLLMScope::~FLLMScope(local_23f8);
  pTVar18 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_2068,&local_20c8,pFVar14);
  pTVar5 = (pTVar18->SharedReferenceCount).ReferenceController;
  local_2380 = pTVar18->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2378.ReferenceController = pTVar5;
  if ((STextBlock **)((longlong)FVar30 + 8) != &local_2380) {
    *(STextBlock **)((longlong)FVar30 + 8) = local_2380;
    local_2380 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)FVar30 + 0x10),&local_2378);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2378.ReferenceController);
  pFVar11 = SVerticalBox::FArguments::operator+
                      ((FArguments *)local_23c0._Widget.Object,(FSlotArguments *)FVar30);
  FLLMScope::FLLMScope(local_23f8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_23c0._Widget.Object = (SBox *)LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_23f0,(FName *)&local_23c0,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_2080,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\LoudnessMeterWidgetView.cpp"
             ,0x70,&local_23e5);
  FMemScope::~FMemScope((FMemScope *)&local_23f0);
  FLLMScope::~FLLMScope(local_23f8);
  pTVar23 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_2080,&local_2020,pFVar11);
  FVar30 = local_23a8;
  pTVar6 = (pTVar23->SharedReferenceCount).ReferenceController;
  local_23c0._Widget.Object = (SBox *)pTVar23->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar7 = ((FSharedReferencer<1> *)((longlong)local_23a8 + 0x200))->ReferenceController;
  (((TAlwaysValidWidget *)((longlong)local_23a8 + 0x1f8))->Widget).Object =
       (SWidget *)local_23c0._Widget.Object;
  ((FSharedReferencer<1> *)((longlong)local_23a8 + 0x200))->ReferenceController = pTVar6;
  local_23c0._Widget.SharedReferenceCount.ReferenceController = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  FLLMScope::FLLMScope(local_23f8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_23a8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_23c0,&local_23a8,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_2098,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\LoudnessMeterWidgetView.cpp"
             ,0x6c,&local_23e4);
  FMemScope::~FMemScope((FMemScope *)&local_23c0);
  FLLMScope::~FLLMScope(local_23f8);
  pTVar24 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_2098,&local_2050,(FArguments *)FVar30);
  FVar30 = local_2390;
  pTVar7 = (pTVar24->SharedReferenceCount).ReferenceController;
  local_23a8 = (FName)pTVar24->Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar8 = ((FSharedReferencer<1> *)((longlong)local_2390 + 0x238))->ReferenceController;
  *(FName *)((longlong)local_2390 + 0x230) = local_23a8;
  ((FSharedReferencer<1> *)((longlong)local_2390 + 0x238))->ReferenceController = pTVar7;
  pTStack_23a0 = pTVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  FLLMScope::FLLMScope(local_23f8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2390 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_23a8,&local_2390,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_23c0,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\LoudnessMeterWidgetView.cpp"
             ,0x68,local_23e3);
  FMemScope::~FMemScope((FMemScope *)&local_23a8);
  FLLMScope::~FLLMScope(local_23f8);
  pTVar25 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_23c0,&local_2030,(FArguments *)FVar30);
  pTVar8 = (pTVar25->SharedReferenceCount).ReferenceController;
  local_2390 = (FName)pTVar25->Object;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar9 = ((FSharedReferencer<1> *)((longlong)local_2398 + 0x2f0))->ReferenceController;
  *(FName *)((longlong)local_2398 + 0x2e8) = local_2390;
  ((FSharedReferencer<1> *)((longlong)local_2398 + 0x2f0))->ReferenceController = pTVar8;
  pTStack_2388 = pTVar8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  local_22e0.Arg0 = local_22e8;
  this_00 = MakeTDecl<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                      (&local_1fc8,"STableRow<FLoudnessMetricRef>",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\LoudnessMeterWidgetView.cpp"
                       ,0x66,&local_22e0);
  pTVar26 = TSlateDecl<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
            ::operator<<=(this_00,&local_2040,(FArguments *)local_2398);
  local_2328->Object = (ITableRow *)pTVar26->Object;
  pTVar9 = (pTVar26->SharedReferenceCount).ReferenceController;
  (local_2328->SharedReferenceCount).ReferenceController = pTVar9;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2040.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1fc8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2030.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_23c0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2050.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2098._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2020.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2080._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20c8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2068._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1ce0.CompositeFont.SharedReferenceCount.ReferenceController);
  if (local_78[0] != (code *)0x0) {
    pppuVar29 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar29 = local_50;
    }
    (*(code *)(*pppuVar29)[2])();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  STextBlock::FArguments::~FArguments(&local_b90);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments((FSlotArguments *)local_1c20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20b8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_22c8.Accessor);
  if (local_d8 != (code *)0x0) {
    pppuVar29 = &local_c8;
    if (local_b0 != (undefined ***)0x0) {
      pppuVar29 = local_b0;
    }
    (*(code *)(*pppuVar29)[2])();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_23d8._0_8_);
  SAudioMeterWidget::FArguments::~FArguments(&local_12f8);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments((FSlotArguments *)local_1dc8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_22d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20a8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_2370._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c80.CompositeFont.SharedReferenceCount.ReferenceController);
  if (local_a8 != (code *)0x0) {
    pppuVar29 = &local_98;
    if (local_80 != (undefined ***)0x0) {
      pppuVar29 = local_80;
    }
    (*(code *)(*pppuVar29)[2])();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  STextBlock::FArguments::~FArguments(&local_638);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments((FSlotArguments *)local_1eb0);
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_1b38._Slots.AllocatorInstance.Data,local_1b38._Slots.ArrayNum);
  if ((FSlotArguments *)local_1b38._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_1b38._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1b38);
  SBorder::FArguments::~FArguments(&local_f70);
  SBox::FArguments::~FArguments(&local_1638);
  STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::
  FArguments::~FArguments(&local_1930);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((local_22d0->SharedReferenceCount).ReferenceController);
  return local_2328;
}

// MakeNumericValueTileWidget @ 14d941ec0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<ITableRow,1> * __cdecl
AudioWidgets::LoudnessMeterWidgetView_Private::MakeNumericValueTileWidget
          (TSharedRef<ITableRow,1> *__return_storage_ptr__,
          TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *param_1,
          TSharedRef<STableViewBase,1> *param_2)

{
  byte *pbVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  code *pcVar8;
  undefined4 uVar9;
  EStyleColor EVar10;
  undefined2 uVar11;
  SSpacer *pSVar12;
  FSharedReferencer<1> FVar13;
  FArguments *pFVar14;
  undefined4 uVar15;
  bool bVar16;
  char cVar17;
  byte bVar18;
  FArguments *pFVar19;
  FSlot *pFVar20;
  FArguments *pFVar21;
  TSharedRef<ITableRow,1> *pTVar22;
  FSlot *pFVar23;
  FArguments *pFVar24;
  undefined8 *puVar25;
  ulong64 uVar26;
  FSlateFontInfo *pFVar27;
  TSharedRef<STextBlock,1> *pTVar28;
  TSharedRef<SVerticalBox,1> *pTVar29;
  TSlateDecl<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  *this;
  TSharedRef<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
  *pTVar30;
  undefined ***pppuVar31;
  undefined1 auStackY_1b08 [32];
  T0RequiredArgs local_1ad8;
  T0RequiredArgs local_1ad7;
  T0RequiredArgs local_1ad6;
  T0RequiredArgs local_1ad5;
  FLLMScope local_1ad4;
  FLLMScope local_1ad0;
  FLLMScope local_1acc;
  FLLMScope local_1ac8 [2];
  undefined2 local_1ac0;
  undefined1 local_1ab8 [8];
  ForAnyElementType FStack_1ab0;
  ulonglong local_1aa8;
  undefined4 local_1aa0;
  undefined1 local_1a9c;
  undefined1 local_1a98 [8];
  ForAnyElementType FStack_1a90;
  ulonglong local_1a88;
  undefined4 local_1a80;
  undefined1 local_1a7c;
  undefined1 local_1a78 [8];
  ForAnyElementType FStack_1a70;
  ulonglong local_1a68;
  undefined4 local_1a60;
  undefined1 local_1a5c;
  undefined1 local_1a58 [8];
  ForAnyElementType FStack_1a50;
  ulonglong local_1a48;
  undefined4 local_1a40;
  undefined1 local_1a3c;
  undefined1 local_1a38 [8];
  ForAnyElementType FStack_1a30;
  ulonglong local_1a28;
  undefined4 local_1a20;
  undefined1 local_1a1c;
  undefined1 local_1a18 [8];
  ForAnyElementType FStack_1a10;
  ulonglong local_1a08;
  undefined4 local_1a00;
  undefined1 local_19fc;
  undefined1 local_19f8 [8];
  ForAnyElementType FStack_19f0;
  ulonglong local_19e8;
  undefined4 local_19e0;
  undefined1 local_19dc;
  undefined1 local_19d8 [8];
  ForAnyElementType FStack_19d0;
  ulonglong local_19c8;
  TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs> local_19c0;
  FLinearColor_u_0 local_19a8;
  ESlateColorStylingMode local_1998;
  EStyleColor EStack_1997;
  undefined2 uStack_1996;
  undefined1 local_1994;
  undefined1 local_1990 [8];
  ForAnyElementType FStack_1988;
  ulonglong local_1980;
  TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *local_1978;
  undefined8 local_1970;
  FSharedReferencer<1> local_1968;
  undefined8 local_1960;
  FSharedReferencer<1> local_1958;
  undefined8 local_1950;
  FSharedReferencer<1> local_1948;
  SVerticalBox *local_1940;
  TReferenceControllerBase<1> *pTStack_1938;
  FSlot *local_1930;
  FArguments *local_1928;
  TSharedRef<STableViewBase,1> *local_1920;
  T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> local_1918;
  TSharedRef<ITableRow,1> *local_1910;
  FName local_1908;
  FMemScope local_1900;
  FName local_18f8;
  FSlot *local_18f0;
  FMemScope local_18e8;
  FName local_18e0;
  FSlot *local_18d8;
  FMemScope local_18d0;
  FName local_18c8;
  FMemScope local_18c0;
  FDestructionSentinel local_18b8;
  FDestructionSentinel local_18a0;
  FDestructionSentinel local_1888;
  FDestructionSentinel local_1870;
  FDestructionSentinel local_1858;
  FDestructionSentinel local_1840;
  FDestructionSentinel local_1828;
  FDestructionSentinel local_1810;
  FDestructionSentinel local_17f8;
  FDestructionSentinel local_17e0;
  FDestructionSentinel local_17c8;
  undefined1 *local_17b0;
  FSlateFontInfo local_17a8;
  bool local_1748;
  undefined1 local_1740 [8];
  ForAnyElementType FStack_1738;
  ulonglong local_1730;
  TSharedRef<STextBlock,1> local_1728;
  TSharedRef<SVerticalBox,1> local_1718;
  TSharedRef<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,1>
  local_1708;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_16f8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_16e0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_16c8;
  TSharedRef<STextBlock,1> local_16b0;
  TSlateDecl<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  local_16a0;
  undefined1 local_1688 [16];
  FSharedReferencer<1> local_1678 [7];
  undefined4 local_1640;
  undefined1 local_163c;
  undefined4 local_1638;
  undefined1 local_1634;
  undefined4 local_15e0;
  undefined1 local_15dc;
  TDelegateBase<FNotThreadSafeDelegateMode> local_15d8;
  undefined4 local_15c0;
  undefined1 local_15bc;
  TDelegateBase<FNotThreadSafeDelegateMode> local_15b8;
  undefined1 local_15a0 [16];
  FSharedReferencer<1> local_1590 [7];
  undefined4 local_1558;
  undefined1 local_1554;
  undefined4 local_14f8;
  undefined1 local_14f4;
  TDelegateBase<FNotThreadSafeDelegateMode> local_14f0;
  undefined4 local_14d8;
  undefined1 local_14d4;
  TDelegateBase<FNotThreadSafeDelegateMode> local_14d0;
  TAttribute<FSlateFontInfo> local_14b8;
  undefined1 local_1438 [16];
  FSharedReferencer<1> local_1428 [19];
  undefined4 local_1390;
  undefined1 local_138c;
  TDelegateBase<FNotThreadSafeDelegateMode> local_1388;
  undefined4 local_1370;
  undefined1 local_136c;
  TDelegateBase<FNotThreadSafeDelegateMode> local_1368;
  FSlateFontInfo local_1350;
  FSlateFontInfo local_12f0;
  FArguments local_1290;
  undefined1 local_1088 [528];
  undefined1 local_e78 [24];
  FArguments local_e60;
  FArguments local_b68;
  FArguments local_610;
  code *local_b8;
  undefined **local_a8;
  FLoudnessMetric *local_a0;
  TReferenceControllerBase<1> *local_98;
  undefined ***local_90;
  code *local_88 [2];
  undefined **local_78;
  FLoudnessMetric *local_70;
  TReferenceControllerBase<1> *local_68;
  undefined ***local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1b08;
  local_1978 = param_1;
  local_1920 = param_2;
  local_1910 = __return_storage_ptr__;
  local_1928 = STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
               ::FArguments::FArguments(&local_e60);
  pFVar19 = SVerticalBox::FArguments::FArguments(&local_1290);
  pFVar20 = ::operator_new(0x58);
  pFVar23 = (FSlot *)0x0;
  local_1930 = pFVar23;
  if (pFVar20 != (FSlot *)0x0) {
    *(undefined8 *)pFVar20 = 0;
    *(undefined8 *)&pFVar20->field_0x8 = 0;
    *(undefined8 *)&pFVar20->field_0x10 = 0;
    *(undefined8 *)&pFVar20->field_0x18 = 0;
    *(undefined8 *)&pFVar20->field_0x20 = 0;
    *(undefined8 *)&pFVar20->field_0x28 = 0;
    *(undefined8 *)&pFVar20->field_0x30 = 0;
    *(undefined8 *)&pFVar20->field_0x38 = 0;
    *(undefined8 *)&pFVar20->field_0x40 = 0;
    *(undefined8 *)&pFVar20->field_0x48 = 0;
    *(undefined8 *)&pFVar20->field_0x50 = 0;
    local_1930 = SVerticalBox::FSlot::FSlot(pFVar20);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_1438,(FSlot *)&local_1930);
  uVar9 = __real_41000000;
  local_1a80 = __real_41000000;
  local_1a68 = 0;
  local_1390 = __real_41000000;
  local_1a7c = 1;
  local_1a78 = (undefined1  [8])0x0;
  FStack_1a70.Data = (FScriptContainerElement *)0x0;
  local_138c = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            (&local_1388,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a78);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1a78,
             (FWriteAccessScope *)&local_1840);
  if (((int)local_1a68 != 0) && (FStack_1a70.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1a70.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1a70,0,0,0x10);
    local_1a68 = local_1a68 & 0xffffffff00000000;
  }
  if (local_1840.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1840.Accessor,&local_1840);
  }
  if (FStack_1a70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1a70.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1a78);
  local_1a60 = uVar9;
  local_1a48 = 0;
  local_1370 = uVar9;
  local_1a5c = 1;
  local_1a58 = (undefined1  [8])0x0;
  FStack_1a50.Data = (FScriptContainerElement *)0x0;
  local_136c = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            (&local_1368,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a58);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1a58,
             (FWriteAccessScope *)&local_1828);
  if (((int)local_1a48 != 0) && (FStack_1a50.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1a50.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1a50,0,0,0x10);
    local_1a48 = local_1a48 & 0xffffffff00000000;
  }
  if (local_1828.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1828.Accessor,&local_1828);
  }
  if (FStack_1a50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1a50.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1a58);
  pFVar21 = SSpacer::FArguments::FArguments((FArguments *)local_1088);
  FLLMScope::FLLMScope(&local_1ad4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18c8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_18d0,&local_18c8,true);
  TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>::TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>
            (&local_19c0,"SSpacer",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\LoudnessMeterWidgetView.cpp"
             ,0x37,&local_1ad8);
  FMemScope::~FMemScope(&local_18d0);
  FLLMScope::~FLLMScope(&local_1ad4);
  pSVar12 = local_19c0._Widget.Object;
  if ((local_19c0._Widget.Object == (SSpacer *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar16)) {
    pcVar8 = (code *)swi(3);
    pTVar22 = (TSharedRef<ITableRow,1> *)(*pcVar8)();
    return pTVar22;
  }
  SWidget::SWidgetConstruct((SWidget *)local_19c0._Widget.Object,(FSlateBaseNamedArgs *)pFVar21);
  SSpacer::Construct(local_19c0._Widget.Object,pFVar21);
  if ((local_19c0._Widget.Object == (SSpacer *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar16)) {
    pcVar8 = (code *)swi(3);
    pTVar22 = (TSharedRef<ITableRow,1> *)(*pcVar8)();
    return pTVar22;
  }
  if (((local_19c0._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar17 = (**(code **)((local_19c0._Widget.Object)->_padding_ + 0x228))
                       (local_19c0._Widget.Object);
    bVar18 = 0;
    if (cVar17 == '\0') goto LAB_14d942214;
  }
  bVar18 = 0x20;
LAB_14d942214:
  *(byte *)&(local_19c0._Widget.Object)->_padding_ =
       (byte)(local_19c0._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_19c0._Widget.Object)->_padding_ =
       (byte)(local_19c0._Widget.Object)->_padding_ | bVar18;
  if ((local_19c0._Widget.Object == (SSpacer *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar16)) {
    pcVar8 = (code *)swi(3);
    pTVar22 = (TSharedRef<ITableRow,1> *)(*pcVar8)();
    return pTVar22;
  }
  pbVar1 = (byte *)((longlong)&(local_19c0._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_19c0._Widget.Object == (SSpacer *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar16)) {
    pcVar8 = (code *)swi(3);
    pTVar22 = (TSharedRef<ITableRow,1> *)(*pcVar8)();
    return pTVar22;
  }
  FVar13.ReferenceController = local_19c0._Widget.SharedReferenceCount.ReferenceController;
  local_19c0._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_19c0._Widget.Object = (SSpacer *)0x0;
  if ((pSVar12 == (SSpacer *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar16)) {
    pcVar8 = (code *)swi(3);
    pTVar22 = (TSharedRef<ITableRow,1> *)(*pcVar8)();
    return pTVar22;
  }
  local_1968.ReferenceController = FVar13.ReferenceController;
  if (FVar13.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar13.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar13.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar13.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar13.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1438._8_8_ = pSVar12;
  local_1970 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_1428,&local_1968);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1968.ReferenceController);
  pFVar19 = SVerticalBox::FArguments::operator+(pFVar19,(FSlotArguments *)local_1438);
  pFVar20 = ::operator_new(0x58);
  if (pFVar20 != (FSlot *)0x0) {
    *(undefined8 *)pFVar20 = 0;
    *(undefined8 *)&pFVar20->field_0x8 = 0;
    *(undefined8 *)&pFVar20->field_0x10 = 0;
    *(undefined8 *)&pFVar20->field_0x18 = 0;
    *(undefined8 *)&pFVar20->field_0x20 = 0;
    *(undefined8 *)&pFVar20->field_0x28 = 0;
    *(undefined8 *)&pFVar20->field_0x30 = 0;
    *(undefined8 *)&pFVar20->field_0x38 = 0;
    *(undefined8 *)&pFVar20->field_0x40 = 0;
    *(undefined8 *)&pFVar20->field_0x48 = 0;
    *(undefined8 *)&pFVar20->field_0x50 = 0;
    pFVar23 = SVerticalBox::FSlot::FSlot(pFVar20);
  }
  local_18d8 = pFVar23;
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_15a0,(FSlot *)&local_18d8);
  uVar9 = __real_41a00000;
  local_19e0 = __real_41a00000;
  local_19c8 = 0;
  local_14f8 = __real_41a00000;
  local_19dc = 1;
  local_19d8 = (undefined1  [8])0x0;
  FStack_19d0.Data = (FScriptContainerElement *)0x0;
  local_14f4 = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            (&local_14f0,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_19d8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_19d8,
             (FWriteAccessScope *)&local_1810);
  if (((int)local_19c8 != 0) && (FStack_19d0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_19d0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_19d0,0,0,0x10);
    local_19c8 = local_19c8 & 0xffffffff00000000;
  }
  if (local_1810.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1810.Accessor,&local_1810);
  }
  if (FStack_19d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_19d0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_19d8);
  local_1a00 = uVar9;
  local_19e8 = 0;
  local_14d8 = uVar9;
  local_19fc = 1;
  local_19f8 = (undefined1  [8])0x0;
  FStack_19f0.Data = (FScriptContainerElement *)0x0;
  local_14d4 = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            (&local_14d0,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_19f8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_19f8,
             (FWriteAccessScope *)&local_17f8);
  if (((int)local_19e8 != 0) && (FStack_19f0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_19f0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_19f0,0,0,0x10);
    local_19e8 = local_19e8 & 0xffffffff00000000;
  }
  if (local_17f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_17f8.Accessor,&local_17f8);
  }
  if (FStack_19f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_19f0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_19f8);
  local_1558 = 2;
  local_1554 = 1;
  pFVar24 = STextBlock::FArguments::FArguments(&local_610);
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  local_a0 = param_1->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_90 = (undefined ***)0x0;
  local_a8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`AudioWidgets::LoudnessMeterWidgetView_Private::MakeNumericValueTileWidget'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_b8 = UE::Core::Private::Function::
             TFunctionRefCaller<`AudioWidgets::LoudnessMeterWidgetView_Private::MakeNumericValueTileWidget'::__l2::<lambda_1>,FText>
             ::Call;
  (pFVar24->_Text).bIsSet = true;
  local_98 = pTVar2;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar24->_Text).Getter,
             (FWriteAccessScope *)&local_17c8);
  local_17b0 = &(pFVar24->_Text).Getter.field_0x8;
  puVar25 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_17b0);
  if (puVar25 != (undefined8 *)0x0) {
    *puVar25 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar26 = FDelegateHandle::GenerateNewID();
    puVar25[2] = uVar26;
    *puVar25 = &
               ___7__TBaseFunctorDelegateInstance___A6A_AVFText__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AVFText__XZ____V__6B_
    ;
    puVar25[4] = local_b8;
    puVar25[9] = 0;
    if (local_b8 != (code *)0x0) {
      pppuVar31 = &local_a8;
      if (local_90 != (undefined ***)0x0) {
        pppuVar31 = local_90;
      }
      (*(code *)**pppuVar31)();
    }
  }
  if (local_17c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_17c8.Accessor,&local_17c8);
  }
  pFVar27 = FStyleDefaults::GetFontInfo(&local_12f0,0xe);
  FSlateFontInfo::FSlateFontInfo(&local_17a8,pFVar27);
  local_1748 = true;
  local_1730 = 0;
  local_1740 = (undefined1  [8])0x0;
  FStack_1738.Data = (FScriptContainerElement *)0x0;
  FSlateFontInfo::operator=(&(pFVar24->_Font).Value,&local_17a8);
  (pFVar24->_Font).bIsSet = local_1748;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar24->_Font).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1740);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1740,
             (FWriteAccessScope *)&local_17e0);
  if (((int)local_1730 != 0) && (FStack_1738.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1738.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1738,0,0,0x10);
    local_1730 = local_1730 & 0xffffffff00000000;
  }
  if (local_17e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_17e0.Accessor,&local_17e0);
  }
  if (FStack_1738.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1738.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1740);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_17a8.CompositeFont.SharedReferenceCount.ReferenceController);
  uVar9 = FStyleColors::AccentGreen._16_4_;
  local_1998 = FStyleColors::AccentGreen.ColorUseRule;
  EStack_1997 = FStyleColors::AccentGreen.ColorTableId;
  uStack_1996 = FStyleColors::AccentGreen._18_2_;
  local_1994 = 1;
  local_1980 = 0;
  local_19a8 = FStyleColors::AccentGreen.SpecifiedColor.field0_0x0;
  local_1990 = (undefined1  [8])0x0;
  FStack_1988.Data = (FScriptContainerElement *)0x0;
  (pFVar24->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::AccentGreen.SpecifiedColor.field0_0x0;
  uVar15 = FStyleColors::AccentGreen._16_4_;
  FStyleColors::AccentGreen.ColorUseRule = (ESlateColorStylingMode)uVar9;
  FStyleColors::AccentGreen.ColorTableId = SUB41(uVar9,1);
  EVar10 = FStyleColors::AccentGreen.ColorTableId;
  FStyleColors::AccentGreen._18_2_ = SUB42(uVar9,2);
  uVar11 = FStyleColors::AccentGreen._18_2_;
  (pFVar24->_ColorAndOpacity).Value.ColorUseRule = FStyleColors::AccentGreen.ColorUseRule;
  FStyleColors::AccentGreen._16_4_ = uVar15;
  (pFVar24->_ColorAndOpacity).Value.ColorTableId = EVar10;
  *(undefined2 *)&(pFVar24->_ColorAndOpacity).Value.field_0x12 = uVar11;
  (pFVar24->_ColorAndOpacity).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar24->_ColorAndOpacity).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1990);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1990,
             (FWriteAccessScope *)&local_18b8);
  if (((int)local_1980 != 0) && (FStack_1988.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1988.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1988,0,0,0x10);
    local_1980 = local_1980 & 0xffffffff00000000;
  }
  if (local_18b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_18b8.Accessor,&local_18b8);
  }
  if (FStack_1988.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1988.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1990);
  pFVar24->_SimpleTextMode = true;
  FLLMScope::FLLMScope(&local_1ad0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18e0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_18e8,&local_18e0,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_16c8,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\LoudnessMeterWidgetView.cpp"
             ,0x3e,&local_1ad7);
  FMemScope::~FMemScope(&local_18e8);
  FLLMScope::~FLLMScope(&local_1ad0);
  pTVar28 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_16c8,&local_16b0,pFVar24);
  pTVar3 = (pTVar28->SharedReferenceCount).ReferenceController;
  local_15a0._8_8_ = pTVar28->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1960 = 0;
  local_1958.ReferenceController = pTVar3;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            ((FSharedReferencer<1> *)(local_15a0 + 0x10),&local_1958);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1958.ReferenceController);
  pFVar19 = SVerticalBox::FArguments::operator+(pFVar19,(FSlotArguments *)local_15a0);
  pFVar20 = ::operator_new(0x58);
  if (pFVar20 == (FSlot *)0x0) {
    local_18f0 = (FSlot *)0x0;
  }
  else {
    *(undefined8 *)pFVar20 = 0;
    *(undefined8 *)&pFVar20->field_0x8 = 0;
    *(undefined8 *)&pFVar20->field_0x10 = 0;
    *(undefined8 *)&pFVar20->field_0x18 = 0;
    *(undefined8 *)&pFVar20->field_0x20 = 0;
    *(undefined8 *)&pFVar20->field_0x28 = 0;
    *(undefined8 *)&pFVar20->field_0x30 = 0;
    *(undefined8 *)&pFVar20->field_0x38 = 0;
    *(undefined8 *)&pFVar20->field_0x40 = 0;
    *(undefined8 *)&pFVar20->field_0x48 = 0;
    *(undefined8 *)&pFVar20->field_0x50 = 0;
    local_18f0 = SVerticalBox::FSlot::FSlot(pFVar20);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_1688,(FSlot *)&local_18f0);
  uVar9 = __real_42000000;
  local_1a20 = __real_42000000;
  local_1a08 = 0;
  local_15e0 = __real_42000000;
  local_1a1c = 1;
  local_1a18 = (undefined1  [8])0x0;
  FStack_1a10.Data = (FScriptContainerElement *)0x0;
  local_15dc = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            (&local_15d8,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a18);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1a18,
             (FWriteAccessScope *)&local_18a0);
  if (((int)local_1a08 != 0) && (FStack_1a10.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1a10.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1a10,0,0,0x10);
    local_1a08 = local_1a08 & 0xffffffff00000000;
  }
  if (local_18a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_18a0.Accessor,&local_18a0);
  }
  if (FStack_1a10.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1a10.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1a18);
  local_1a40 = uVar9;
  local_1a28 = 0;
  local_15c0 = uVar9;
  local_1a3c = 1;
  local_1a38 = (undefined1  [8])0x0;
  FStack_1a30.Data = (FScriptContainerElement *)0x0;
  local_15bc = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            (&local_15b8,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1a38,
             (FWriteAccessScope *)&local_1888);
  if (((int)local_1a28 != 0) && (FStack_1a30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1a30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1a30,0,0,0x10);
    local_1a28 = local_1a28 & 0xffffffff00000000;
  }
  if (local_1888.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1888.Accessor,&local_1888);
  }
  if (FStack_1a30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1a30.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1a38);
  local_1640 = 2;
  local_163c = 1;
  local_1638 = 2;
  local_1634 = 1;
  pFVar24 = STextBlock::FArguments::FArguments(&local_b68);
  pTVar4 = (local_1978->SharedReferenceCount).ReferenceController;
  local_70 = local_1978->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`AudioWidgets::LoudnessMeterWidgetView_Private::MakeNumericValueTileWidget'::`2'::<lambda_2>,0,0>
              ::_vftable_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`AudioWidgets::LoudnessMeterWidgetView_Private::MakeNumericValueTileWidget'::__l2::<lambda_2>,FText>
                ::Call;
  local_68 = pTVar4;
  pFVar24 = STextBlock::FArguments::Text_Lambda(pFVar24,(TFunction<FText___cdecl(void)> *)local_88);
  pFVar27 = FStyleDefaults::GetFontInfo(&local_1350,8);
  FSlateFontInfo::FSlateFontInfo(&local_14b8.Value,pFVar27);
  local_14b8.bIsSet = true;
  local_14b8.Getter._16_8_ = 0;
  local_14b8.Getter._0_8_ = 0;
  local_14b8.Getter._8_8_ = 0;
  pFVar24 = STextBlock::FArguments::Font(pFVar24,&local_14b8);
  local_1ac0 = 0x101;
  local_1aa8 = 0;
  local_1ab8 = (undefined1  [8])0x0;
  FStack_1ab0.Data = (FScriptContainerElement *)0x0;
  (pFVar24->_AutoWrapText).Value = true;
  (pFVar24->_AutoWrapText).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar24->_AutoWrapText).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1ab8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1ab8,
             (FWriteAccessScope *)&local_1870);
  if (((int)local_1aa8 != 0) && (FStack_1ab0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1ab0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1ab0,0,0,0x10);
    local_1aa8 = local_1aa8 & 0xffffffff00000000;
  }
  if (local_1870.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1870.Accessor,&local_1870);
  }
  if (FStack_1ab0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1ab0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1ab8);
  local_1a9c = 1;
  local_1aa0 = 1;
  local_1a88 = 0;
  local_1a98 = (undefined1  [8])0x0;
  FStack_1a90.Data = (FScriptContainerElement *)0x0;
  (pFVar24->_Justification).Value = Center;
  (pFVar24->_Justification).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar24->_Justification).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a98);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1a98,
             (FWriteAccessScope *)&local_1858);
  if (((int)local_1a88 != 0) && (FStack_1a90.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1a90.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1a90,0,0,0x10);
    local_1a88 = local_1a88 & 0xffffffff00000000;
  }
  if (local_1858.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1858.Accessor,&local_1858);
  }
  if (FStack_1a90.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1a90.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1a98);
  FLLMScope::FLLMScope(&local_1acc,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18f8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1900,&local_18f8,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_16e0,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\LoudnessMeterWidgetView.cpp"
             ,0x4a,&local_1ad6);
  FMemScope::~FMemScope(&local_1900);
  FLLMScope::~FLLMScope(&local_1acc);
  pTVar28 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_16e0,&local_1728,pFVar24);
  pTVar5 = (pTVar28->SharedReferenceCount).ReferenceController;
  local_1688._8_8_ = pTVar28->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1950 = 0;
  local_1948.ReferenceController = pTVar5;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            ((FSharedReferencer<1> *)(local_1688 + 0x10),&local_1948);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1948.ReferenceController);
  pFVar19 = SVerticalBox::FArguments::operator+(pFVar19,(FSlotArguments *)local_1688);
  FLLMScope::FLLMScope(local_1ac8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1908 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_18c0,&local_1908,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_16f8,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\LoudnessMeterWidgetView.cpp"
             ,0x32,&local_1ad5);
  FMemScope::~FMemScope(&local_18c0);
  FLLMScope::~FLLMScope(local_1ac8);
  pTVar29 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_16f8,&local_1718,pFVar19);
  pFVar14 = local_1928;
  pTVar6 = (pTVar29->SharedReferenceCount).ReferenceController;
  local_1940 = pTVar29->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar7 = (local_1928->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_1928->_Content).Widget.Object = (SWidget *)local_1940;
  (local_1928->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar6;
  pTStack_1938 = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  local_1918.Arg0 = local_1920;
  this = MakeTDecl<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                   (&local_16a0,"STableRow<FLoudnessMetricRef>",
                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\LoudnessMeterWidgetView.cpp"
                    ,0x30,&local_1918);
  pTVar30 = TSlateDecl<STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
            ::operator<<=(this,&local_1708,pFVar14);
  pTVar22 = local_1910;
  local_1910->Object = (ITableRow *)pTVar30->Object;
  pTVar7 = (pTVar30->SharedReferenceCount).ReferenceController;
  (local_1910->SharedReferenceCount).ReferenceController = pTVar7;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1708.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_16a0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1718.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_16f8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1728.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_16e0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1350.CompositeFont.SharedReferenceCount.ReferenceController);
  if (local_88[0] != (code *)0x0) {
    pppuVar31 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar31 = local_60;
    }
    (*(code *)(*pppuVar31)[2])();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  STextBlock::FArguments::~FArguments(&local_b68);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments((FSlotArguments *)local_1688);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_16b0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_16c8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_12f0.CompositeFont.SharedReferenceCount.ReferenceController);
  if (local_b8 != (code *)0x0) {
    pppuVar31 = &local_a8;
    if (local_90 != (undefined ***)0x0) {
      pppuVar31 = local_90;
    }
    (*(code *)(*pppuVar31)[2])();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  STextBlock::FArguments::~FArguments(&local_610);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments((FSlotArguments *)local_15a0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar13.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar13.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_19c0._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_e78);
  if ((void *)local_e78._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_e78._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e78);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_1088);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments((FSlotArguments *)local_1438);
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_1290._Slots.AllocatorInstance.Data,local_1290._Slots.ArrayNum);
  if ((FSlotArguments *)local_1290._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_1290._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1290);
  STableRow<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::
  FArguments::~FArguments(&local_e60);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((local_1978->SharedReferenceCount).ReferenceController);
  return pTVar22;
}

// RouteCursorQuery @ 14d9647e0

/* WARNING: Enum "Type": Some values do not have unique names */

FCursorReply * __cdecl
AudioWidgetsUtils::RouteCursorQuery
          (FCursorReply *__return_storage_ptr__,FPointerEvent *param_1,
          TArrayView<TSharedPtr<SWidget,1>_const_,int> *param_2,bool param_3)

{
  TSharedPtr<SWindow,1> *pTVar1;
  TSharedPtr<SWidget,1> *pTVar2;
  int *piVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  SWidget *this;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FCursorReply *pFVar9;
  FGeometry *pFVar10;
  undefined1 *puVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 local_88 [16];
  TReferenceControllerBase<1> *local_78;
  TReferenceControllerBase<1> *local_68;
  TReferenceControllerBase<1> *local_58;
  
  pTVar1 = &__return_storage_ptr__->CursorWindow;
  pTVar2 = &__return_storage_ptr__->CursorWidget;
  *(undefined1 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  piVar3 = &param_2->ArrayNum;
  pTVar1->Object = (SWindow *)0x0;
  (__return_storage_ptr__->CursorWindow).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar2->Object = (SWidget *)0x0;
  (__return_storage_ptr__->CursorWidget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->MouseCursor = Default;
  if (param_3) {
    uVar12 = *piVar3 - 1;
  }
  else {
    uVar12 = 0;
  }
  lVar13 = (longlong)(int)uVar12 << 4;
  while( true ) {
    if (param_3) {
      bVar7 = (bool)((byte)(uVar12 >> 0x1f) ^ 1);
    }
    else {
      bVar7 = (int)uVar12 < *piVar3;
    }
    if (bVar7 == false) {
      return __return_storage_ptr__;
    }
    uVar8 = 0;
    if ((int)uVar12 < *piVar3) {
      uVar8 = ~uVar12 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar7)) break;
    this = *(SWidget **)((longlong)&param_2->DataPtr->Object + lVar13);
    if (this != (SWidget *)0x0) {
      pcVar6 = *(code **)(this->_padding_ + 0x90);
      pFVar10 = SWidget::GetTickSpaceGeometry(this);
      puVar11 = (undefined1 *)(*pcVar6)(this,local_88,pFVar10,param_1);
      plVar4 = (longlong *)(puVar11 + 8);
      *(undefined1 *)&__return_storage_ptr__->_padding_ = *puVar11;
      if (&__return_storage_ptr__->_padding_ != plVar4) {
        __return_storage_ptr__->_padding_ = *plVar4;
        *plVar4 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)&__return_storage_ptr__->_padding_,
                   (FSharedReferencer<1> *)(puVar11 + 0x10));
      }
      puVar5 = (undefined8 *)(puVar11 + 0x18);
      if (pTVar1 != (TSharedPtr<SWindow,1> *)puVar5) {
        pTVar1->Object = (SWindow *)*puVar5;
        *puVar5 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(__return_storage_ptr__->CursorWindow).SharedReferenceCount,
                   (FSharedReferencer<1> *)(puVar11 + 0x20));
      }
      puVar5 = (undefined8 *)(puVar11 + 0x28);
      if (pTVar2 != (TSharedPtr<SWidget,1> *)puVar5) {
        pTVar2->Object = (SWidget *)*puVar5;
        *puVar5 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(__return_storage_ptr__->CursorWidget).SharedReferenceCount,
                   (FSharedReferencer<1> *)(puVar11 + 0x30));
      }
      __return_storage_ptr__->MouseCursor = *(Type *)(puVar11 + 0x38);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_58);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_68);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_78);
      if ((char)__return_storage_ptr__->_padding_ != '\0') {
        return __return_storage_ptr__;
      }
    }
    if (param_3) {
      uVar12 = uVar12 - 1;
      lVar13 = lVar13 + -0x10;
    }
    else {
      uVar12 = uVar12 + 1;
      lVar13 = lVar13 + 0x10;
    }
  }
  pcVar6 = (code *)swi(3);
  pFVar9 = (FCursorReply *)(*pcVar6)();
  return pFVar9;
}

// RouteMouseInput @ 14d9649f0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __cdecl
AudioWidgetsUtils::RouteMouseInput
          (FReply *__return_storage_ptr__,pmf_4540fed6 *param_1,FPointerEvent *param_2,
          TArrayView<TSharedPtr<SWidget,1>,int> *param_3,bool param_4)

{
  int *piVar1;
  int iVar2;
  SWidget *this;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FReply *pFVar6;
  FGeometry *pFVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 local_f8 [16];
  TReferenceControllerBase<1> *local_e8;
  longlong *local_c8;
  longlong *local_b8;
  longlong *local_a8;
  longlong *local_98;
  longlong *local_88;
  longlong *local_78;
  TReferenceControllerBase<1> *local_60;
  TReferenceControllerBase<1> *local_50;
  
  FReply::FReply(__return_storage_ptr__,false);
  if (param_4) {
    uVar8 = param_3->ArrayNum - 1;
  }
  else {
    uVar8 = 0;
  }
  lVar9 = (longlong)(int)uVar8 << 4;
  while( true ) {
    if (param_4) {
      bVar4 = (bool)((byte)(uVar8 >> 0x1f) ^ 1);
    }
    else {
      bVar4 = (int)uVar8 < param_3->ArrayNum;
    }
    if (bVar4 == false) {
      return __return_storage_ptr__;
    }
    uVar5 = 0;
    if ((int)uVar8 < param_3->ArrayNum) {
      uVar5 = ~uVar8 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar4)) break;
    this = *(SWidget **)((longlong)&param_3->DataPtr->Object + lVar9);
    if (this != (SWidget *)0x0) {
      iVar2 = *(int *)&param_1->field_0x8;
      pcVar3 = *(code **)param_1;
      pFVar7 = SWidget::GetTickSpaceGeometry(this);
      pFVar6 = (FReply *)
               (*pcVar3)((longlong)&this->_padding_ + (longlong)iVar2,local_f8,pFVar7,param_2);
      FReply::operator=(__return_storage_ptr__,pFVar6);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
      if (local_78 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_78 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_78 + 8))(local_78,1);
        }
      }
      if (local_88 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_88 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_88 + 8))(local_88,1);
        }
      }
      if (local_98 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_98 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_98 + 8))(local_98,1);
        }
      }
      if (local_a8 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_a8 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_a8 + 8))(local_a8,1);
        }
      }
      if (local_b8 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_b8 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_b8 + 8))(local_b8,1);
        }
      }
      if (local_c8 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_c8 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_c8 + 8))(local_c8,1);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_e8);
      if ((char)__return_storage_ptr__->_padding_ != '\0') {
        return __return_storage_ptr__;
      }
    }
    if (param_4) {
      uVar8 = uVar8 - 1;
      lVar9 = lVar9 + -0x10;
    }
    else {
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x10;
    }
  }
  pcVar3 = (code *)swi(3);
  pFVar6 = (FReply *)(*pcVar3)();
  return pFVar6;
}

// Z_Construct_UClass_UAudioFrequencyRadialSlider_NoRegister @ 14d97ceb0

UClass * __cdecl Z_Construct_UClass_UAudioFrequencyRadialSlider_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioFrequencyRadialSlider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioWidgets",L"AudioFrequencyRadialSlider",
               &Z_Registration_Info_UClass_UAudioFrequencyRadialSlider.InnerSingleton,
               UAudioFrequencyRadialSlider::StaticRegisterNativesUAudioFrequencyRadialSlider,0x3c0,
               0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAudioFrequencyRadialSlider>,
               InternalVTableHelperCtorCaller<UAudioFrequencyRadialSlider>,local_res8,
               UAudioRadialSlider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioFrequencyRadialSlider.InnerSingleton;
}

// Z_Construct_UClass_UAudioFrequencySlider_NoRegister @ 14d97cf70

UClass * __cdecl Z_Construct_UClass_UAudioFrequencySlider_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioFrequencySlider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioWidgets",L"AudioFrequencySlider",
               &Z_Registration_Info_UClass_UAudioFrequencySlider.InnerSingleton,
               UAudioFrequencySlider::StaticRegisterNativesUAudioFrequencySlider,0x940,0x10,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UAudioFrequencySlider>,
               InternalVTableHelperCtorCaller<UAudioFrequencySlider>,local_res8,
               UAudioSliderBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioFrequencySlider.InnerSingleton;
}

// Z_Construct_UClass_UAudioMaterialButtonWidgetStyle_NoRegister @ 14d97d030

UClass * __cdecl Z_Construct_UClass_UAudioMaterialButtonWidgetStyle_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioMaterialButtonWidgetStyle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioWidgets",L"AudioMaterialButtonWidgetStyle",
               &Z_Registration_Info_UClass_UAudioMaterialButtonWidgetStyle.InnerSingleton,
               UAudioMaterialButtonWidgetStyle::StaticRegisterNativesUAudioMaterialButtonWidgetStyle
               ,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAudioMaterialButtonWidgetStyle>,
               InternalVTableHelperCtorCaller<UAudioMaterialButtonWidgetStyle>,local_res8,
               USlateWidgetStyleContainerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioMaterialButtonWidgetStyle.InnerSingleton;
}

// Z_Construct_UClass_UAudioMaterialButton_NoRegister @ 14d97d0f0

UClass * __cdecl Z_Construct_UClass_UAudioMaterialButton_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioMaterialButton.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioWidgets",L"AudioMaterialButton",
               &Z_Registration_Info_UClass_UAudioMaterialButton.InnerSingleton,
               UAudioMaterialButton::StaticRegisterNativesUAudioMaterialButton,0x268,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UAudioMaterialButton>,
               InternalVTableHelperCtorCaller<UAudioMaterialButton>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioMaterialButton.InnerSingleton;
}

// Z_Construct_UClass_UAudioMaterialEnvelope_NoRegister @ 14d97d1b0

UClass * __cdecl Z_Construct_UClass_UAudioMaterialEnvelope_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioMaterialEnvelope.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioWidgets",L"AudioMaterialEnvelope",
               &Z_Registration_Info_UClass_UAudioMaterialEnvelope.InnerSingleton,
               UAudioMaterialEnvelope::StaticRegisterNativesUAudioMaterialEnvelope,0x230,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UAudioMaterialEnvelope>,
               InternalVTableHelperCtorCaller<UAudioMaterialEnvelope>,local_res8,
               UWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioMaterialEnvelope.InnerSingleton;
}

// Z_Construct_UClass_UAudioMaterialKnobWidgetStyle_NoRegister @ 14d97d270

UClass * __cdecl Z_Construct_UClass_UAudioMaterialKnobWidgetStyle_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioMaterialKnobWidgetStyle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioWidgets",L"AudioMaterialKnobWidgetStyle",
               &Z_Registration_Info_UClass_UAudioMaterialKnobWidgetStyle.InnerSingleton,
               UAudioMaterialKnobWidgetStyle::StaticRegisterNativesUAudioMaterialKnobWidgetStyle,
               0x1f0,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAudioMaterialKnobWidgetStyle>,
               InternalVTableHelperCtorCaller<UAudioMaterialKnobWidgetStyle>,local_res8,
               USlateWidgetStyleContainerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioMaterialKnobWidgetStyle.InnerSingleton;
}

// Z_Construct_UClass_UAudioMaterialKnob_NoRegister @ 14d97d330

UClass * __cdecl Z_Construct_UClass_UAudioMaterialKnob_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioMaterialKnob.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioWidgets",L"AudioMaterialKnob",
               &Z_Registration_Info_UClass_UAudioMaterialKnob.InnerSingleton,
               UAudioMaterialKnob::StaticRegisterNativesUAudioMaterialKnob,0x3b0,0x10,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UAudioMaterialKnob>,
               InternalVTableHelperCtorCaller<UAudioMaterialKnob>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioMaterialKnob.InnerSingleton;
}

// Z_Construct_UClass_UAudioMaterialMeterWidgetStyle_NoRegister @ 14d97d3f0

UClass * __cdecl Z_Construct_UClass_UAudioMaterialMeterWidgetStyle_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioMaterialMeterWidgetStyle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioWidgets",L"AudioMaterialMeterWidgetStyle",
               &Z_Registration_Info_UClass_UAudioMaterialMeterWidgetStyle.InnerSingleton,
               UAudioMaterialMeterWidgetStyle::StaticRegisterNativesUAudioMaterialMeterWidgetStyle,
               0x120,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAudioMaterialMeterWidgetStyle>,
               InternalVTableHelperCtorCaller<UAudioMaterialMeterWidgetStyle>,local_res8,
               USlateWidgetStyleContainerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioMaterialMeterWidgetStyle.InnerSingleton;
}

// Z_Construct_UClass_UAudioMaterialMeter_NoRegister @ 14d97d4b0

UClass * __cdecl Z_Construct_UClass_UAudioMaterialMeter_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioMaterialMeter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioWidgets",L"AudioMaterialMeter",
               &Z_Registration_Info_UClass_UAudioMaterialMeter.InnerSingleton,
               UAudioMaterialMeter::StaticRegisterNativesUAudioMaterialMeter,0x2e0,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",InternalConstructor<UAudioMaterialMeter>,
               InternalVTableHelperCtorCaller<UAudioMaterialMeter>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioMaterialMeter.InnerSingleton;
}

// Z_Construct_UClass_UAudioMaterialSliderWidgetStyle_NoRegister @ 14d97d570

UClass * __cdecl Z_Construct_UClass_UAudioMaterialSliderWidgetStyle_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioMaterialSliderWidgetStyle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioWidgets",L"AudioMaterialSliderWidgetStyle",
               &Z_Registration_Info_UClass_UAudioMaterialSliderWidgetStyle.InnerSingleton,
               UAudioMaterialSliderWidgetStyle::StaticRegisterNativesUAudioMaterialSliderWidgetStyle
               ,0x180,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAudioMaterialSliderWidgetStyle>,
               InternalVTableHelperCtorCaller<UAudioMaterialSliderWidgetStyle>,local_res8,
               USlateWidgetStyleContainerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioMaterialSliderWidgetStyle.InnerSingleton;
}

// Z_Construct_UClass_UAudioMaterialSlider_NoRegister @ 14d97d630

UClass * __cdecl Z_Construct_UClass_UAudioMaterialSlider_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioMaterialSlider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioWidgets",L"AudioMaterialSlider",
               &Z_Registration_Info_UClass_UAudioMaterialSlider.InnerSingleton,
               UAudioMaterialSlider::StaticRegisterNativesUAudioMaterialSlider,0x340,0x10,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UAudioMaterialSlider>,
               InternalVTableHelperCtorCaller<UAudioMaterialSlider>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioMaterialSlider.InnerSingleton;
}

// Z_Construct_UClass_UAudioMeter_NoRegister @ 14d97d6f0

UClass * __cdecl Z_Construct_UClass_UAudioMeter_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioMeter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioWidgets",L"AudioMeter",
               &Z_Registration_Info_UClass_UAudioMeter.InnerSingleton,
               UAudioMeter::StaticRegisterNativesUAudioMeter,0x6a0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioMeter>,
               InternalVTableHelperCtorCaller<UAudioMeter>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioMeter.InnerSingleton;
}

// Z_Construct_UClass_UAudioOscilloscope_NoRegister @ 14d97d7b0

UClass * __cdecl Z_Construct_UClass_UAudioOscilloscope_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioOscilloscope.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioWidgets",L"AudioOscilloscope",
               &Z_Registration_Info_UClass_UAudioOscilloscope.InnerSingleton,
               UAudioOscilloscope::StaticRegisterNativesUAudioOscilloscope,0x670,0x10,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UAudioOscilloscope>,
               InternalVTableHelperCtorCaller<UAudioOscilloscope>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioOscilloscope.InnerSingleton;
}

// Z_Construct_UClass_UAudioRadialSlider_NoRegister @ 14d97d870

UClass * __cdecl Z_Construct_UClass_UAudioRadialSlider_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioRadialSlider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioWidgets",L"AudioRadialSlider",
               &Z_Registration_Info_UClass_UAudioRadialSlider.InnerSingleton,
               UAudioRadialSlider::StaticRegisterNativesUAudioRadialSlider,0x3c0,0x10,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UAudioRadialSlider>,
               InternalVTableHelperCtorCaller<UAudioRadialSlider>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioRadialSlider.InnerSingleton;
}

// Z_Construct_UClass_UAudioSliderBase_NoRegister @ 14d97d930

UClass * __cdecl Z_Construct_UClass_UAudioSliderBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioSliderBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioWidgets",L"AudioSliderBase",
               &Z_Registration_Info_UClass_UAudioSliderBase.InnerSingleton,
               UAudioSliderBase::StaticRegisterNativesUAudioSliderBase,0x930,0x10,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAudioSliderBase>,
               InternalVTableHelperCtorCaller<UAudioSliderBase>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioSliderBase.InnerSingleton;
}

// Z_Construct_UClass_UAudioSlider_NoRegister @ 14d97d9f0

UClass * __cdecl Z_Construct_UClass_UAudioSlider_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioSlider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioWidgets",L"AudioSlider",
               &Z_Registration_Info_UClass_UAudioSlider.InnerSingleton,
               UAudioSlider::StaticRegisterNativesUAudioSlider,0x940,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioSlider>,
               InternalVTableHelperCtorCaller<UAudioSlider>,local_res8,UAudioSliderBase::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioSlider.InnerSingleton;
}

// Z_Construct_UClass_UAudioVectorscope_NoRegister @ 14d97dab0

UClass * __cdecl Z_Construct_UClass_UAudioVectorscope_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioVectorscope.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioWidgets",L"AudioVectorscope",
               &Z_Registration_Info_UClass_UAudioVectorscope.InnerSingleton,
               UAudioVectorscope::StaticRegisterNativesUAudioVectorscope,0x3c0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioVectorscope>,
               InternalVTableHelperCtorCaller<UAudioVectorscope>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioVectorscope.InnerSingleton;
}

// Z_Construct_UClass_UAudioVolumeRadialSlider_NoRegister @ 14d97db70

UClass * __cdecl Z_Construct_UClass_UAudioVolumeRadialSlider_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioVolumeRadialSlider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioWidgets",L"AudioVolumeRadialSlider",
               &Z_Registration_Info_UClass_UAudioVolumeRadialSlider.InnerSingleton,
               UAudioVolumeRadialSlider::StaticRegisterNativesUAudioVolumeRadialSlider,0x3c0,0x10,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAudioVolumeRadialSlider>,
               InternalVTableHelperCtorCaller<UAudioVolumeRadialSlider>,local_res8,
               UAudioRadialSlider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioVolumeRadialSlider.InnerSingleton;
}

// Z_Construct_UClass_UAudioVolumeSlider_NoRegister @ 14d97dc30

UClass * __cdecl Z_Construct_UClass_UAudioVolumeSlider_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioVolumeSlider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioWidgets",L"AudioVolumeSlider",
               &Z_Registration_Info_UClass_UAudioVolumeSlider.InnerSingleton,
               UAudioVolumeSlider::StaticRegisterNativesUAudioVolumeSlider,0x940,0x10,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UAudioVolumeSlider>,
               InternalVTableHelperCtorCaller<UAudioVolumeSlider>,local_res8,
               UAudioSlider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioVolumeSlider.InnerSingleton;
}

// Z_Construct_UEnum_AudioWidgets_EAudioUnitsValueType @ 14d97dcf0

UEnum * __cdecl Z_Construct_UEnum_AudioWidgets_EAudioUnitsValueType(void)

{
  if (Z_Registration_Info_UEnum_EAudioUnitsValueType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAudioUnitsValueType.InnerSingleton,
               &Z_Construct_UEnum_AudioWidgets_EAudioUnitsValueType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EAudioUnitsValueType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FAudioMeterDefaultColorStyle @ 14d97dd30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAudioMeterDefaultColorStyle(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAudioMeterDefaultColorStyle.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAudioMeterDefaultColorStyle.InnerSingleton,
               &Z_Construct_UScriptStruct_FAudioMeterDefaultColorStyle_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAudioMeterDefaultColorStyle.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAudioMeterDefaultColorStyle.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FAudioRadialSliderStyle @ 14d97ddb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAudioRadialSliderStyle(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAudioRadialSliderStyle.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAudioRadialSliderStyle.InnerSingleton,
               &Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAudioRadialSliderStyle.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAudioRadialSliderStyle.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FAudioSliderStyle @ 14d97de30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAudioSliderStyle(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAudioSliderStyle.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAudioSliderStyle.InnerSingleton,
               &Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAudioSliderStyle.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAudioSliderStyle.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FAudioSpectrumPlotStyle @ 14d97deb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAudioSpectrumPlotStyle(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAudioSpectrumPlotStyle.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAudioSpectrumPlotStyle.InnerSingleton,
               &Z_Construct_UScriptStruct_FAudioSpectrumPlotStyle_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAudioSpectrumPlotStyle.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAudioSpectrumPlotStyle.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FLoudnessMeterRackUnitSettings @ 14d97df30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLoudnessMeterRackUnitSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLoudnessMeterRackUnitSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLoudnessMeterRackUnitSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FLoudnessMeterRackUnitSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLoudnessMeterRackUnitSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLoudnessMeterRackUnitSettings.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FPlayheadOverlayStyle @ 14d97dfb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPlayheadOverlayStyle(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPlayheadOverlayStyle.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPlayheadOverlayStyle.InnerSingleton,
               &Z_Construct_UScriptStruct_FPlayheadOverlayStyle_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPlayheadOverlayStyle.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FPlayheadOverlayStyle.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FSpectrogramRackUnitSettings @ 14d97e030

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSpectrogramRackUnitSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSpectrogramRackUnitSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSpectrogramRackUnitSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FSpectrogramRackUnitSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSpectrogramRackUnitSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSpectrogramRackUnitSettings.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FSpectrumAnalyzerRackUnitSettings @ 14d97e0b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSpectrumAnalyzerRackUnitSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSpectrumAnalyzerRackUnitSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSpectrumAnalyzerRackUnitSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FSpectrumAnalyzerRackUnitSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSpectrumAnalyzerRackUnitSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSpectrumAnalyzerRackUnitSettings.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// IMPLEMENT_MODULE_AudioWidgets @ 14d981400

void __cdecl IMPLEMENT_MODULE_AudioWidgets(void)

{
  return;
}

// NumericInterface'' @ 15045a910

void __cdecl `dynamic_atexit_destructor_for_'SAudioTextBox::NumericInterface__(void)

{
  SAudioTextBox::NumericInterface._0_8_ = &___7__INumericTypeInterface_M__6B_;
  return;
}

// OnNewTimeRulerStyle'' @ 15045a930

void __cdecl
`dynamic_atexit_destructor_for_'FAudioOscilloscopePanelStyle::OnNewTimeRulerStyle__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FAudioOscilloscopePanelStyle::OnNewTimeRulerStyle._8_8_,
             FAudioOscilloscopePanelStyle::OnNewTimeRulerStyle._16_4_);
  if (FAudioOscilloscopePanelStyle::OnNewTimeRulerStyle._8_8_ != 0) {
    FMemory::Free((void *)FAudioOscilloscopePanelStyle::OnNewTimeRulerStyle._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FAudioOscilloscopePanelStyle::OnNewTimeRulerStyle);
  return;
}

// OnNewValueGridOverlayStyle'' @ 15045a970

void __cdecl
`dynamic_atexit_destructor_for_'FAudioOscilloscopePanelStyle::OnNewValueGridOverlayStyle__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FAudioOscilloscopePanelStyle::OnNewValueGridOverlayStyle._8_8_,
             FAudioOscilloscopePanelStyle::OnNewValueGridOverlayStyle._16_4_);
  if (FAudioOscilloscopePanelStyle::OnNewValueGridOverlayStyle._8_8_ != 0) {
    FMemory::Free((void *)FAudioOscilloscopePanelStyle::OnNewValueGridOverlayStyle._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &FAudioOscilloscopePanelStyle::OnNewValueGridOverlayStyle);
  return;
}

// OnNewValueGridOverlayStyle'' @ 15045a9b0

void __cdecl
`dynamic_atexit_destructor_for_'FAudioVectorscopePanelStyle::OnNewValueGridOverlayStyle__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FAudioVectorscopePanelStyle::OnNewValueGridOverlayStyle._8_8_,
             FAudioVectorscopePanelStyle::OnNewValueGridOverlayStyle._16_4_);
  if (FAudioVectorscopePanelStyle::OnNewValueGridOverlayStyle._8_8_ != 0) {
    FMemory::Free((void *)FAudioVectorscopePanelStyle::OnNewValueGridOverlayStyle._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &FAudioVectorscopePanelStyle::OnNewValueGridOverlayStyle);
  return;
}

// OnNewVectorViewerStyle'' @ 15045a9f0

void __cdecl
`dynamic_atexit_destructor_for_'FAudioVectorscopePanelStyle::OnNewVectorViewerStyle__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FAudioVectorscopePanelStyle::OnNewVectorViewerStyle._8_8_,
             FAudioVectorscopePanelStyle::OnNewVectorViewerStyle._16_4_);
  if (FAudioVectorscopePanelStyle::OnNewVectorViewerStyle._8_8_ != 0) {
    FMemory::Free((void *)FAudioVectorscopePanelStyle::OnNewVectorViewerStyle._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FAudioVectorscopePanelStyle::OnNewVectorViewerStyle);
  return;
}

// OnNewWaveformViewerStyle'' @ 15045aa30

void __cdecl
`dynamic_atexit_destructor_for_'FAudioOscilloscopePanelStyle::OnNewWaveformViewerStyle__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FAudioOscilloscopePanelStyle::OnNewWaveformViewerStyle._8_8_,
             FAudioOscilloscopePanelStyle::OnNewWaveformViewerStyle._16_4_);
  if (FAudioOscilloscopePanelStyle::OnNewWaveformViewerStyle._8_8_ != 0) {
    FMemory::Free((void *)FAudioOscilloscopePanelStyle::OnNewWaveformViewerStyle._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FAudioOscilloscopePanelStyle::OnNewWaveformViewerStyle
            );
  return;
}

// RackUnitTypeInfo'' @ 15045aa70

void __cdecl
`dynamic_atexit_destructor_for_'AudioWidgets::FAudioLoudnessMeter::RackUnitTypeInfo__(void)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &AudioWidgets::FAudioLoudnessMeter::RackUnitTypeInfo.OnMakeAudioAnalyzerRackUnit);
  if (AudioWidgets::FAudioLoudnessMeter::RackUnitTypeInfo.OnMakeAudioAnalyzerRackUnit._8_8_ != 0) {
    FMemory::Free((void *)AudioWidgets::FAudioLoudnessMeter::RackUnitTypeInfo.
                          OnMakeAudioAnalyzerRackUnit._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &AudioWidgets::FAudioLoudnessMeter::RackUnitTypeInfo.OnMakeAudioAnalyzerRackUnit);
  if (AudioWidgets::FAudioLoudnessMeter::RackUnitTypeInfo.DisplayName.TextData.Reference !=
      (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015045aab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)
                 *AudioWidgets::FAudioLoudnessMeter::RackUnitTypeInfo.DisplayName.TextData.Reference
                + 0x10))();
    return;
  }
  return;
}

// RackUnitTypeInfo'' @ 15045aac0

void __cdecl `dynamic_atexit_destructor_for_'AudioWidgets::FAudioMeter::RackUnitTypeInfo__(void)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &AudioWidgets::FAudioMeter::RackUnitTypeInfo.OnMakeAudioAnalyzerRackUnit);
  if (AudioWidgets::FAudioMeter::RackUnitTypeInfo.OnMakeAudioAnalyzerRackUnit._8_8_ != 0) {
    FMemory::Free((void *)AudioWidgets::FAudioMeter::RackUnitTypeInfo.OnMakeAudioAnalyzerRackUnit.
                          _8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &AudioWidgets::FAudioMeter::RackUnitTypeInfo.OnMakeAudioAnalyzerRackUnit);
  if (AudioWidgets::FAudioMeter::RackUnitTypeInfo.DisplayName.TextData.Reference != (ITextData *)0x0
     ) {
                    /* WARNING: Could not recover jumptable at 0x00015045ab00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)
                 *AudioWidgets::FAudioMeter::RackUnitTypeInfo.DisplayName.TextData.Reference + 0x10)
    )();
    return;
  }
  return;
}

// RackUnitTypeInfo'' @ 15045ab10

void __cdecl
`dynamic_atexit_destructor_for_'AudioWidgets::FAudioOscilloscope::RackUnitTypeInfo__(void)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &AudioWidgets::FAudioOscilloscope::RackUnitTypeInfo.OnMakeAudioAnalyzerRackUnit);
  if (AudioWidgets::FAudioOscilloscope::RackUnitTypeInfo.OnMakeAudioAnalyzerRackUnit._8_8_ != 0) {
    FMemory::Free((void *)AudioWidgets::FAudioOscilloscope::RackUnitTypeInfo.
                          OnMakeAudioAnalyzerRackUnit._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &AudioWidgets::FAudioOscilloscope::RackUnitTypeInfo.OnMakeAudioAnalyzerRackUnit);
  if (AudioWidgets::FAudioOscilloscope::RackUnitTypeInfo.DisplayName.TextData.Reference !=
      (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015045ab50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)
                 *AudioWidgets::FAudioOscilloscope::RackUnitTypeInfo.DisplayName.TextData.Reference
                + 0x10))();
    return;
  }
  return;
}

// RackUnitTypeInfo'' @ 15045ab60

void __cdecl
`dynamic_atexit_destructor_for_'AudioWidgets::FAudioSpectrogram::RackUnitTypeInfo__(void)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &AudioWidgets::FAudioSpectrogram::RackUnitTypeInfo.OnMakeAudioAnalyzerRackUnit);
  if (AudioWidgets::FAudioSpectrogram::RackUnitTypeInfo.OnMakeAudioAnalyzerRackUnit._8_8_ != 0) {
    FMemory::Free((void *)AudioWidgets::FAudioSpectrogram::RackUnitTypeInfo.
                          OnMakeAudioAnalyzerRackUnit._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &AudioWidgets::FAudioSpectrogram::RackUnitTypeInfo.OnMakeAudioAnalyzerRackUnit);
  if (AudioWidgets::FAudioSpectrogram::RackUnitTypeInfo.DisplayName.TextData.Reference !=
      (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015045aba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)
                 *AudioWidgets::FAudioSpectrogram::RackUnitTypeInfo.DisplayName.TextData.Reference +
                0x10))();
    return;
  }
  return;
}

// RackUnitTypeInfo'' @ 15045abb0

void __cdecl
`dynamic_atexit_destructor_for_'AudioWidgets::FAudioSpectrumAnalyzer::RackUnitTypeInfo__(void)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &AudioWidgets::FAudioSpectrumAnalyzer::RackUnitTypeInfo.OnMakeAudioAnalyzerRackUnit);
  if (AudioWidgets::FAudioSpectrumAnalyzer::RackUnitTypeInfo.OnMakeAudioAnalyzerRackUnit._8_8_ != 0)
  {
    FMemory::Free((void *)AudioWidgets::FAudioSpectrumAnalyzer::RackUnitTypeInfo.
                          OnMakeAudioAnalyzerRackUnit._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &AudioWidgets::FAudioSpectrumAnalyzer::RackUnitTypeInfo.OnMakeAudioAnalyzerRackUnit);
  if (AudioWidgets::FAudioSpectrumAnalyzer::RackUnitTypeInfo.DisplayName.TextData.Reference !=
      (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015045abf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)
                 *AudioWidgets::FAudioSpectrumAnalyzer::RackUnitTypeInfo.DisplayName.TextData.
                  Reference + 0x10))();
    return;
  }
  return;
}

// RackUnitTypeInfo'' @ 15045ac00

void __cdecl
`dynamic_atexit_destructor_for_'AudioWidgets::FAudioVectorscope::RackUnitTypeInfo__(void)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &AudioWidgets::FAudioVectorscope::RackUnitTypeInfo.OnMakeAudioAnalyzerRackUnit);
  if (AudioWidgets::FAudioVectorscope::RackUnitTypeInfo.OnMakeAudioAnalyzerRackUnit._8_8_ != 0) {
    FMemory::Free((void *)AudioWidgets::FAudioVectorscope::RackUnitTypeInfo.
                          OnMakeAudioAnalyzerRackUnit._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &AudioWidgets::FAudioVectorscope::RackUnitTypeInfo.OnMakeAudioAnalyzerRackUnit);
  if (AudioWidgets::FAudioVectorscope::RackUnitTypeInfo.DisplayName.TextData.Reference !=
      (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015045ac40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)
                 *AudioWidgets::FAudioVectorscope::RackUnitTypeInfo.DisplayName.TextData.Reference +
                0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'AudioMeterWidgetStyle'' @ 15045ac50

void __cdecl
`AudioWidgets::LoudnessMeterWidgetView_Private::MakeMeterValueTileWidget'::__l2::
_dynamic_atexit_destructor_for__AudioMeterWidgetStyle__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (AudioMeterWidgetStyle.Font.CompositeFont.SharedReferenceCount.ReferenceController);
  AudioMeterWidgetStyle.MeterPeakImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (AudioMeterWidgetStyle.MeterPeakImage.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  AudioMeterWidgetStyle.MeterValueBackgroundImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (AudioMeterWidgetStyle.MeterValueBackgroundImage.ResourceHandle.Data.
             SharedReferenceCount.ReferenceController);
  AudioMeterWidgetStyle.MeterBackgroundImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (AudioMeterWidgetStyle.MeterBackgroundImage.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  AudioMeterWidgetStyle.BackgroundImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (AudioMeterWidgetStyle.BackgroundImage.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  AudioMeterWidgetStyle.MeterValueImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (AudioMeterWidgetStyle.MeterValueImage.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&AudioMeterWidgetStyle);
  return;
}

// `dynamic_atexit_destructor_for_'BackgroundBrush'' @ 15045ace0

void __cdecl
`AudioWidgets::FLoudnessMeterWidgetView::MakeWidget'::__l2::
_dynamic_atexit_destructor_for__BackgroundBrush__(void)

{
  BackgroundBrush._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)BackgroundBrush._160_8_);
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 15045ad00

void __cdecl
`FAudioMaterialButtonStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__(void)

{
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&::Default);
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 15045ad20

void __cdecl
`FAudioMaterialEnvelopeStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__(void)

{
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&::Default);
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 15045ad40

void __cdecl
`FAudioMaterialKnobStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__(void)

{
  ::Default.TextBoxStyle._0_8_ = &___7FAudioTextBoxStyle__6B_;
  ::Default.TextBoxStyle.BackgroundImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (::Default.TextBoxStyle.BackgroundImage.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&::Default.TextBoxStyle);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&::Default);
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 15045ad90

void __cdecl
`FAudioMaterialMeterStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (::Default.Font.CompositeFont.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&::Default);
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 15045adc0

void __cdecl
`FAudioMaterialSliderStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__(void)

{
  ::Default.TextBoxStyle._0_8_ = &___7FAudioTextBoxStyle__6B_;
  ::Default.TextBoxStyle.BackgroundImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (::Default.TextBoxStyle.BackgroundImage.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&::Default.TextBoxStyle);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&::Default);
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 15045ae10

void __cdecl `FAudioMeterStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)::Default._1032_8_);
  ::Default._720_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)::Default._880_8_);
  ::Default._544_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)::Default._704_8_);
  ::Default._368_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)::Default._528_8_);
  ::Default._192_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)::Default._352_8_);
  ::Default._16_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)::Default._176_8_);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&::Default);
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 15045aea0

void __cdecl
`FAudioOscilloscopePanelStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__(void)

{
  FAudioOscilloscopePanelStyle::~FAudioOscilloscopePanelStyle
            (&`public:_static_struct_FAudioOscilloscopePanelStyle_const&___ptr64___cdecl_FAudioOscilloscopePanelStyle::GetDefault(void)'
              ::__l2::Default);
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 15045aec0

void __cdecl
`FAudioRadialSliderStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__(void)

{
  ::Default._0_8_ = &___7FAudioRadialSliderStyle__6B_;
  ::Default.TextBoxStyle._0_8_ = &___7FAudioTextBoxStyle__6B_;
  ::Default.TextBoxStyle.BackgroundImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (::Default.TextBoxStyle.BackgroundImage.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&::Default.TextBoxStyle);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&::Default);
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 15045af20

void __cdecl `FAudioSliderStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__(void)

{
  ::Default._0_8_ = &___7FAudioSliderStyle__6B_;
  ::Default.WidgetBackgroundImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (::Default.WidgetBackgroundImage.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  ::Default.TextBoxStyle._0_8_ = &___7FAudioTextBoxStyle__6B_;
  ::Default.TextBoxStyle.BackgroundImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (::Default.TextBoxStyle.BackgroundImage.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&::Default.TextBoxStyle);
  FSliderStyle::~FSliderStyle(&::Default.SliderStyle);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&::Default);
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 15045afa0

void __cdecl
`FAudioSpectrumPlotStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__(void)

{
  ::Default._padding_ = (longlong)&___7FAudioSpectrumPlotStyle__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (::Default.CrosshairLabelFont.CompositeFont.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (::Default.AxisLabelFont.CompositeFont.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&::Default);
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 15045afe0

void __cdecl `FAudioTextBoxStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__(void)

{
  ::Default._0_8_ = &___7FAudioTextBoxStyle__6B_;
  ::Default.BackgroundImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (::Default.BackgroundImage.ResourceHandle.Data.SharedReferenceCount.ReferenceController)
  ;
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&::Default);
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 15045b030

void __cdecl
`FAudioVectorscopePanelStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__(void)

{
  `public:_static_struct_FAudioVectorscopePanelStyle_const&___ptr64___cdecl_FAudioVectorscopePanelStyle::GetDefault(void)'
  ::__l2::Default._padding_ = (longlong)&___7FAudioVectorscopePanelStyle__6B_;
  `public:_static_struct_FAudioVectorscopePanelStyle_const&___ptr64___cdecl_FAudioVectorscopePanelStyle::GetDefault(void)'
  ::__l2::Default.VectorViewerStyle.BackgroundBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (`public:_static_struct_FAudioVectorscopePanelStyle_const&___ptr64___cdecl_FAudioVectorscopePanelStyle::GetDefault(void)'
             ::__l2::Default.VectorViewerStyle.BackgroundBrush.ResourceHandle.Data.
             SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle
            ((FSlateWidgetStyle *)
             &`public:_static_struct_FAudioVectorscopePanelStyle_const&___ptr64___cdecl_FAudioVectorscopePanelStyle::GetDefault(void)'
              ::__l2::Default.VectorViewerStyle);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (`public:_static_struct_FAudioVectorscopePanelStyle_const&___ptr64___cdecl_FAudioVectorscopePanelStyle::GetDefault(void)'
             ::__l2::Default.ValueGridStyle.LabelTextFont.CompositeFont.SharedReferenceCount.
             ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle
            ((FSlateWidgetStyle *)
             &`public:_static_struct_FAudioVectorscopePanelStyle_const&___ptr64___cdecl_FAudioVectorscopePanelStyle::GetDefault(void)'
              ::__l2::Default.ValueGridStyle);
  FSlateWidgetStyle::~FSlateWidgetStyle
            ((FSlateWidgetStyle *)
             &`public:_static_struct_FAudioVectorscopePanelStyle_const&___ptr64___cdecl_FAudioVectorscopePanelStyle::GetDefault(void)'
              ::__l2::Default);
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 15045b0a0

void __cdecl
`FFixedSampleSequenceRulerStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__(void)

{
  ::Default.BackgroundBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (::Default.BackgroundBrush.ResourceHandle.Data.SharedReferenceCount.ReferenceController)
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (::Default.TicksTextFont.CompositeFont.SharedReferenceCount.ReferenceController);
  ::Default.HandleBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (::Default.HandleBrush.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&::Default);
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 15045b100

void __cdecl
`FPlayheadOverlayStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__(void)

{
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&::Default);
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 15045b120

void __cdecl
`FSampledSequenceValueGridOverlayStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__
          (void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (::Default.LabelTextFont.CompositeFont.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&::Default);
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 15045b150

void __cdecl
`FSampledSequenceViewerStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__(void)

{
  ::Default.BackgroundBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (::Default.BackgroundBrush.ResourceHandle.Data.SharedReferenceCount.ReferenceController)
  ;
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&::Default);
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 15045b190

void __cdecl
`FTriggerThresholdLineStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__(void)

{
  FSlateWidgetStyle::~FSlateWidgetStyle
            ((FSlateWidgetStyle *)
             &`public:_static_struct_FTriggerThresholdLineStyle_const&___ptr64___cdecl_FTriggerThresholdLineStyle::GetDefault(void)'
              ::__l2::Default);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultLabelGenerator'' @ 15045b1b0

void __cdecl
SampledSequenceValueGridOverlayPrivate::_dynamic_atexit_destructor_for__DefaultLabelGenerator__
          (void)

{
  longlong *plVar1;
  
  if (DefaultLabelGenerator._0_8_ != 0) {
    plVar1 = (longlong *)&DefaultLabelGenerator.field_0x10;
    if (DefaultLabelGenerator._40_8_ != 0) {
      plVar1 = (longlong *)DefaultLabelGenerator._40_8_;
    }
                    /* WARNING: Could not recover jumptable at 0x00015045b1d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Inst'' @ 15045b1e0

void __cdecl `FAudioWidgetsStyle::Get'::__l2::_dynamic_atexit_destructor_for__Inst__(void)

{
  Inst._0_8_ = &___7FAudioWidgetsStyle__6B_;
  FSlateStyleRegistry::UnRegisterSlateStyle((ISlateStyle *)&Inst);
  FSlateStyleSet::~FSlateStyleSet((FSlateStyleSet *)&Inst);
  return;
}

// `dynamic_atexit_destructor_for_'LogAudioWidgets'' @ 15045b220

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAudioWidgets__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAudioWidgets);
  return;
}

// `dynamic_atexit_destructor_for_'Name'' @ 15045b240

void __cdecl
`SComboBox<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::GetDefaultAccessibleText'::__l2::
_dynamic_atexit_destructor_for__Name__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
               ::__l2::Name.Data.AllocatorInstance.Data;
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Name'' @ 15045b260

void __cdecl
`SListView<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::GetDefaultAccessibleText'::__l2::
_dynamic_atexit_destructor_for__Name__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
               ::__l2::Name.Data.AllocatorInstance.Data;
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Name'' @ 15045b280

void __cdecl
`SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::
GetDefaultAccessibleText'::__l2::_dynamic_atexit_destructor_for__Name__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
               ::__l2::Name.Data.AllocatorInstance.Data;
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'RoundedPanelBrush'' @ 15045b2a0

void __cdecl
`AudioWidgets::LoudnessMeterWidgetView_Private::MakeMeterValueTileWidget'::__l2::
_dynamic_atexit_destructor_for__RoundedPanelBrush__(void)

{
  RoundedPanelBrush._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)RoundedPanelBrush._160_8_);
  return;
}

// `dynamic_atexit_destructor_for_'Singleton'' @ 15045b2c0

void __cdecl
`TLazySingleton<AudioWidgets::FAudioAnalyzerRackUnitRegistry>::GetLazy'::__l2::
_dynamic_atexit_destructor_for__Singleton__(void)

{
  void *pvVar1;
  TSparseArray<TSparseSetElement<TTuple<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this;
  
  this = DAT_155371280;
  if (DAT_155371280 !=
      (TSparseArray<TSparseSetElement<TTuple<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
       *)0x0) {
    *(undefined4 *)&DAT_155371280[1].field_0x10 = 0;
    pvVar1 = *(void **)&this[1].field_0x8;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (this);
    DAT_155371280 =
         (TSparseArray<TSparseSetElement<TTuple<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *)0x0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Style'' @ 15045b310

void __cdecl
`FAudioMeterDefaultColorStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Style__(void)

{
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&::Style);
  return;
}

// `dynamic_atexit_destructor_for_'YAxisValueGeneratorDb'' @ 15045b330

void __cdecl
AudioOscilloscopePanelWidgetPrivate::_dynamic_atexit_destructor_for__YAxisValueGeneratorDb__(void)

{
  longlong *plVar1;
  
  if (YAxisValueGeneratorDb._0_8_ != 0) {
    plVar1 = (longlong *)&YAxisValueGeneratorDb.field_0x10;
    if (YAxisValueGeneratorDb._40_8_ != 0) {
      plVar1 = (longlong *)YAxisValueGeneratorDb._40_8_;
    }
                    /* WARNING: Could not recover jumptable at 0x00015045b352. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'YAxisValueGeneratorLinear'' @ 15045b360

void __cdecl
AudioOscilloscopePanelWidgetPrivate::_dynamic_atexit_destructor_for__YAxisValueGeneratorLinear__
          (void)

{
  longlong *plVar1;
  
  if (YAxisValueGeneratorLinear._0_8_ != 0) {
    plVar1 = (longlong *)&YAxisValueGeneratorLinear.field_0x10;
    if (YAxisValueGeneratorLinear._40_8_ != 0) {
      plVar1 = (longlong *)YAxisValueGeneratorLinear._40_8_;
    }
                    /* WARNING: Could not recover jumptable at 0x00015045b382. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

