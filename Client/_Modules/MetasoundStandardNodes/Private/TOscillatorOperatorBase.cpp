// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 102

// TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_> @ 14b1384e0

/* WARNING: Enum "Type": Some values do not have unique names */

TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>_>
* __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
          (void *this,FOscillatorOperatorConstructParams *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>_>
  *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TOscillatorOperatorBase_U__TGenerateBlock_UFBhaskaraGenerator_Generators_Metasound__UFWrapPhase_23__Generators_Metasound__V__TOscillatorOperator_U__TGenerateBlock_UFBhaskaraGenerator_Generators_Metasound__UFWrapPhase_23__Generators_Metasound__V__TDataReadReference_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___3__3__Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 8) = **(undefined4 **)&(param_1->PhaseOffset).field_0x8;
  *(undefined4 *)((longlong)this + 0xc) = 0;
  *(undefined4 *)((longlong)this + 0x10) = 0xbf800000;
  *(float *)((longlong)this + 0x14) = (float)param_1->Settings->SampleRate;
  *(float *)((longlong)this + 0x18) = (float)param_1->Settings->SampleRate * __real_3f000000;
  *(undefined ***)((longlong)this + 0x20) = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x28) = *(undefined8 *)&(param_1->Enabled).field_0x8;
  lVar1 = *(longlong *)&(param_1->Enabled).field_0x10;
  *(longlong *)((longlong)this + 0x30) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x20) = &___7__TDataReadReference__N_Metasound__6B_;
  *(undefined ***)((longlong)this + 0x40) = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x48) = *(undefined8 *)&(param_1->BaseFrequency).field_0x8;
  lVar1 = *(longlong *)&(param_1->BaseFrequency).field_0x10;
  *(longlong *)((longlong)this + 0x50) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x40) = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)((longlong)this + 0x60) =
       &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)&(param_1->PhaseReset).field_0x8;
  lVar1 = *(longlong *)&(param_1->PhaseReset).field_0x10;
  *(longlong *)((longlong)this + 0x70) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x60) =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)((longlong)this + 0x80) = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x88) = *(undefined8 *)&(param_1->PhaseOffset).field_0x8;
  lVar1 = *(longlong *)&(param_1->PhaseOffset).field_0x10;
  *(longlong *)((longlong)this + 0x90) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x80) = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)((longlong)this + 0xa0) = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0xa8) = *(undefined8 *)&(param_1->GlideFactor).field_0x8;
  lVar1 = *(longlong *)&(param_1->GlideFactor).field_0x10;
  *(longlong *)((longlong)this + 0xb0) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0xa0) = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)((longlong)this + 0xc0) = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)((longlong)this + 200) = *(undefined8 *)&(param_1->BiPolar).field_0x8;
  lVar1 = *(longlong *)&(param_1->BiPolar).field_0x10;
  *(longlong *)((longlong)this + 0xd0) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0xc0) = &___7__TDataReadReference__N_Metasound__6B_;
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FAudioBuffer> *)((longlong)this + 0xe0),NewObject,
             param_1->Settings);
  *(undefined ***)((longlong)this + 0xe0) =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  lVar1 = *(longlong *)((longlong)this + 0xe8);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar1 + 0x10) != *(int *)(lVar1 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  if (*(int *)(lVar1 + 8) != param_1->Settings->NumFramesPerBlock) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("AudioBuffer->Num() == InConstructParams.Settings.GetNumFramesPerBlock()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundOscillatorNodes.cpp"
                       ,99,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>_>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  return this;
}

// TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_> @ 14b1386f0

/* WARNING: Enum "Type": Some values do not have unique names */

TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_>_>_>
* __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>
::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>
          (void *this,FOscillatorOperatorConstructParams *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_>_>_>
  *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TOscillatorOperatorBase_U__TGenerateBlock_UFSawGenerator_Generators_Metasound__UFWrapPhase_23__Generators_Metasound__V__TOscillatorOperator_U__TGenerateBlock_UFSawGenerator_Generators_Metasound__UFWrapPhase_23__Generators_Metasound__V__TDataReadReference_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___3__3__Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 8) = **(undefined4 **)&(param_1->PhaseOffset).field_0x8;
  *(undefined4 *)((longlong)this + 0xc) = 0;
  *(undefined4 *)((longlong)this + 0x10) = 0xbf800000;
  *(float *)((longlong)this + 0x14) = (float)param_1->Settings->SampleRate;
  *(float *)((longlong)this + 0x18) = (float)param_1->Settings->SampleRate * __real_3f000000;
  *(undefined ***)((longlong)this + 0x20) = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x28) = *(undefined8 *)&(param_1->Enabled).field_0x8;
  lVar1 = *(longlong *)&(param_1->Enabled).field_0x10;
  *(longlong *)((longlong)this + 0x30) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x20) = &___7__TDataReadReference__N_Metasound__6B_;
  *(undefined ***)((longlong)this + 0x40) = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x48) = *(undefined8 *)&(param_1->BaseFrequency).field_0x8;
  lVar1 = *(longlong *)&(param_1->BaseFrequency).field_0x10;
  *(longlong *)((longlong)this + 0x50) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x40) = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)((longlong)this + 0x60) =
       &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)&(param_1->PhaseReset).field_0x8;
  lVar1 = *(longlong *)&(param_1->PhaseReset).field_0x10;
  *(longlong *)((longlong)this + 0x70) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x60) =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)((longlong)this + 0x80) = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x88) = *(undefined8 *)&(param_1->PhaseOffset).field_0x8;
  lVar1 = *(longlong *)&(param_1->PhaseOffset).field_0x10;
  *(longlong *)((longlong)this + 0x90) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x80) = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)((longlong)this + 0xa0) = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0xa8) = *(undefined8 *)&(param_1->GlideFactor).field_0x8;
  lVar1 = *(longlong *)&(param_1->GlideFactor).field_0x10;
  *(longlong *)((longlong)this + 0xb0) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0xa0) = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)((longlong)this + 0xc0) = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)((longlong)this + 200) = *(undefined8 *)&(param_1->BiPolar).field_0x8;
  lVar1 = *(longlong *)&(param_1->BiPolar).field_0x10;
  *(longlong *)((longlong)this + 0xd0) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0xc0) = &___7__TDataReadReference__N_Metasound__6B_;
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FAudioBuffer> *)((longlong)this + 0xe0),NewObject,
             param_1->Settings);
  *(undefined ***)((longlong)this + 0xe0) =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  lVar1 = *(longlong *)((longlong)this + 0xe8);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar1 + 0x10) != *(int *)(lVar1 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  if (*(int *)(lVar1 + 8) != param_1->Settings->NumFramesPerBlock) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("AudioBuffer->Num() == InConstructParams.Settings.GetNumFramesPerBlock()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundOscillatorNodes.cpp"
                       ,99,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_>_>_>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  return this;
}

// TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_> @ 14b138900

/* WARNING: Enum "Type": Some values do not have unique names */

TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_>_>_>
* __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>
::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>
          (void *this,FOscillatorOperatorConstructParams *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_>_>_>
  *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TOscillatorOperatorBase_U__TGenerateBlock_UFSawPolySmoothGenerator_Generators_Metasound__UFWrapPhase_23__Generators_Metasound__V__TOscillatorOperator_U__TGenerateBlock_UFSawPolySmoothGenerator_Generators_Metasound__UFWrapPhase_23__Generators_Metasound__V__TDataReadReference_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___3__3__Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 8) = **(undefined4 **)&(param_1->PhaseOffset).field_0x8;
  *(undefined4 *)((longlong)this + 0xc) = 0;
  *(undefined4 *)((longlong)this + 0x10) = 0xbf800000;
  *(float *)((longlong)this + 0x14) = (float)param_1->Settings->SampleRate;
  *(float *)((longlong)this + 0x18) = (float)param_1->Settings->SampleRate * __real_3f000000;
  *(undefined ***)((longlong)this + 0x20) = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x28) = *(undefined8 *)&(param_1->Enabled).field_0x8;
  lVar1 = *(longlong *)&(param_1->Enabled).field_0x10;
  *(longlong *)((longlong)this + 0x30) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x20) = &___7__TDataReadReference__N_Metasound__6B_;
  *(undefined ***)((longlong)this + 0x40) = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x48) = *(undefined8 *)&(param_1->BaseFrequency).field_0x8;
  lVar1 = *(longlong *)&(param_1->BaseFrequency).field_0x10;
  *(longlong *)((longlong)this + 0x50) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x40) = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)((longlong)this + 0x60) =
       &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)&(param_1->PhaseReset).field_0x8;
  lVar1 = *(longlong *)&(param_1->PhaseReset).field_0x10;
  *(longlong *)((longlong)this + 0x70) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x60) =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)((longlong)this + 0x80) = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x88) = *(undefined8 *)&(param_1->PhaseOffset).field_0x8;
  lVar1 = *(longlong *)&(param_1->PhaseOffset).field_0x10;
  *(longlong *)((longlong)this + 0x90) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x80) = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)((longlong)this + 0xa0) = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0xa8) = *(undefined8 *)&(param_1->GlideFactor).field_0x8;
  lVar1 = *(longlong *)&(param_1->GlideFactor).field_0x10;
  *(longlong *)((longlong)this + 0xb0) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0xa0) = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)((longlong)this + 0xc0) = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)((longlong)this + 200) = *(undefined8 *)&(param_1->BiPolar).field_0x8;
  lVar1 = *(longlong *)&(param_1->BiPolar).field_0x10;
  *(longlong *)((longlong)this + 0xd0) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0xc0) = &___7__TDataReadReference__N_Metasound__6B_;
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FAudioBuffer> *)((longlong)this + 0xe0),NewObject,
             param_1->Settings);
  *(undefined ***)((longlong)this + 0xe0) =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  lVar1 = *(longlong *)((longlong)this + 0xe8);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar1 + 0x10) != *(int *)(lVar1 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  if (*(int *)(lVar1 + 8) != param_1->Settings->NumFramesPerBlock) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("AudioBuffer->Num() == InConstructParams.Settings.GetNumFramesPerBlock()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundOscillatorNodes.cpp"
                       ,99,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_>_>_>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  return this;
}

// TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_> @ 14b138b10

/* WARNING: Enum "Type": Some values do not have unique names */

TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>_>
* __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
          (void *this,FOscillatorOperatorConstructParams *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>_>
  *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TOscillatorOperatorBase_U__TGenerateBlock_UFSineWaveTableGenerator_Generators_Metasound__UFWrapPhase_23__Generators_Metasound__V__TOscillatorOperator_U__TGenerateBlock_UFSineWaveTableGenerator_Generators_Metasound__UFWrapPhase_23__Generators_Metasound__V__TDataReadReference_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___3__3__Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 8) = **(undefined4 **)&(param_1->PhaseOffset).field_0x8;
  *(undefined4 *)((longlong)this + 0xc) = 0;
  *(undefined4 *)((longlong)this + 0x10) = 0xbf800000;
  *(float *)((longlong)this + 0x14) = (float)param_1->Settings->SampleRate;
  *(float *)((longlong)this + 0x18) = (float)param_1->Settings->SampleRate * __real_3f000000;
  *(undefined ***)((longlong)this + 0x20) = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x28) = *(undefined8 *)&(param_1->Enabled).field_0x8;
  lVar1 = *(longlong *)&(param_1->Enabled).field_0x10;
  *(longlong *)((longlong)this + 0x30) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x20) = &___7__TDataReadReference__N_Metasound__6B_;
  *(undefined ***)((longlong)this + 0x40) = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x48) = *(undefined8 *)&(param_1->BaseFrequency).field_0x8;
  lVar1 = *(longlong *)&(param_1->BaseFrequency).field_0x10;
  *(longlong *)((longlong)this + 0x50) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x40) = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)((longlong)this + 0x60) =
       &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)&(param_1->PhaseReset).field_0x8;
  lVar1 = *(longlong *)&(param_1->PhaseReset).field_0x10;
  *(longlong *)((longlong)this + 0x70) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x60) =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)((longlong)this + 0x80) = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x88) = *(undefined8 *)&(param_1->PhaseOffset).field_0x8;
  lVar1 = *(longlong *)&(param_1->PhaseOffset).field_0x10;
  *(longlong *)((longlong)this + 0x90) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x80) = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)((longlong)this + 0xa0) = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0xa8) = *(undefined8 *)&(param_1->GlideFactor).field_0x8;
  lVar1 = *(longlong *)&(param_1->GlideFactor).field_0x10;
  *(longlong *)((longlong)this + 0xb0) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0xa0) = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)((longlong)this + 0xc0) = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)((longlong)this + 200) = *(undefined8 *)&(param_1->BiPolar).field_0x8;
  lVar1 = *(longlong *)&(param_1->BiPolar).field_0x10;
  *(longlong *)((longlong)this + 0xd0) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0xc0) = &___7__TDataReadReference__N_Metasound__6B_;
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FAudioBuffer> *)((longlong)this + 0xe0),NewObject,
             param_1->Settings);
  *(undefined ***)((longlong)this + 0xe0) =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  lVar1 = *(longlong *)((longlong)this + 0xe8);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar1 + 0x10) != *(int *)(lVar1 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  if (*(int *)(lVar1 + 8) != param_1->Settings->NumFramesPerBlock) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("AudioBuffer->Num() == InConstructParams.Settings.GetNumFramesPerBlock()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundOscillatorNodes.cpp"
                       ,99,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>_>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  return this;
}

// TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_> @ 14b138d20

/* WARNING: Enum "Type": Some values do not have unique names */

TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>_>
* __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
          (void *this,FOscillatorOperatorConstructParams *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>_>
  *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TOscillatorOperatorBase_U__TGenerateBlock_UFSinfGenerator_Generators_Metasound__UFWrapPhase_23__Generators_Metasound__V__TOscillatorOperator_U__TGenerateBlock_UFSinfGenerator_Generators_Metasound__UFWrapPhase_23__Generators_Metasound__V__TDataReadReference_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___3__3__Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 8) = **(undefined4 **)&(param_1->PhaseOffset).field_0x8;
  *(undefined4 *)((longlong)this + 0xc) = 0;
  *(undefined4 *)((longlong)this + 0x10) = 0xbf800000;
  *(float *)((longlong)this + 0x14) = (float)param_1->Settings->SampleRate;
  *(float *)((longlong)this + 0x18) = (float)param_1->Settings->SampleRate * __real_3f000000;
  *(undefined ***)((longlong)this + 0x20) = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x28) = *(undefined8 *)&(param_1->Enabled).field_0x8;
  lVar1 = *(longlong *)&(param_1->Enabled).field_0x10;
  *(longlong *)((longlong)this + 0x30) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x20) = &___7__TDataReadReference__N_Metasound__6B_;
  *(undefined ***)((longlong)this + 0x40) = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x48) = *(undefined8 *)&(param_1->BaseFrequency).field_0x8;
  lVar1 = *(longlong *)&(param_1->BaseFrequency).field_0x10;
  *(longlong *)((longlong)this + 0x50) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x40) = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)((longlong)this + 0x60) =
       &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)&(param_1->PhaseReset).field_0x8;
  lVar1 = *(longlong *)&(param_1->PhaseReset).field_0x10;
  *(longlong *)((longlong)this + 0x70) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x60) =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)((longlong)this + 0x80) = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x88) = *(undefined8 *)&(param_1->PhaseOffset).field_0x8;
  lVar1 = *(longlong *)&(param_1->PhaseOffset).field_0x10;
  *(longlong *)((longlong)this + 0x90) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x80) = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)((longlong)this + 0xa0) = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0xa8) = *(undefined8 *)&(param_1->GlideFactor).field_0x8;
  lVar1 = *(longlong *)&(param_1->GlideFactor).field_0x10;
  *(longlong *)((longlong)this + 0xb0) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0xa0) = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)((longlong)this + 0xc0) = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)((longlong)this + 200) = *(undefined8 *)&(param_1->BiPolar).field_0x8;
  lVar1 = *(longlong *)&(param_1->BiPolar).field_0x10;
  *(longlong *)((longlong)this + 0xd0) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0xc0) = &___7__TDataReadReference__N_Metasound__6B_;
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FAudioBuffer> *)((longlong)this + 0xe0),NewObject,
             param_1->Settings);
  *(undefined ***)((longlong)this + 0xe0) =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  lVar1 = *(longlong *)((longlong)this + 0xe8);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar1 + 0x10) != *(int *)(lVar1 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  if (*(int *)(lVar1 + 8) != param_1->Settings->NumFramesPerBlock) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("AudioBuffer->Num() == InConstructParams.Settings.GetNumFramesPerBlock()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundOscillatorNodes.cpp"
                       ,99,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>_>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  return this;
}

// TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_> @ 14b138f30

/* WARNING: Enum "Type": Some values do not have unique names */

TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>
* __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>
::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>
          (TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>
           *this,FOscillatorOperatorConstructParams *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>
  *pTVar4;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TOscillatorOperatorBase_U__TGenerateBlock_UFSquareGenerator_Generators_Metasound__UFWrapPhase_23__Generators_Metasound__V__FSquareOperator_U__TGenerateBlock_UFSquareGenerator_Generators_Metasound__UFWrapPhase_23__Generators_Metasound___3__Metasound__6B_
  ;
  (this->Generator).Phase = **(float **)&(param_1->PhaseOffset).field_0x8;
  (this->Generator).Osc = (FSquareGenerator)0x0;
  (this->Generator).Wrap = (FWrapPhase)0x0;
  *(undefined2 *)&(this->Generator).field_0x6 = 0;
  (this->Generator).CurrentFreq = -1.0;
  this->SampleRate = (float)param_1->Settings->SampleRate;
  this->Nyquist = (float)param_1->Settings->SampleRate * __real_3f000000;
  *(undefined ***)&this->Enabled = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->Enabled).field_0x8 = *(undefined8 *)&(param_1->Enabled).field_0x8;
  lVar1 = *(longlong *)&(param_1->Enabled).field_0x10;
  *(longlong *)&(this->Enabled).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Enabled = &___7__TDataReadReference__N_Metasound__6B_;
  *(undefined ***)&this->BaseFrequency = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->BaseFrequency).field_0x8 =
       *(undefined8 *)&(param_1->BaseFrequency).field_0x8;
  lVar1 = *(longlong *)&(param_1->BaseFrequency).field_0x10;
  *(longlong *)&(this->BaseFrequency).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->BaseFrequency = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->PhaseReset = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->PhaseReset).field_0x8 = *(undefined8 *)&(param_1->PhaseReset).field_0x8;
  lVar1 = *(longlong *)&(param_1->PhaseReset).field_0x10;
  *(longlong *)&(this->PhaseReset).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->PhaseReset = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_
  ;
  *(undefined ***)&this->PhaseOffset = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->PhaseOffset).field_0x8 = *(undefined8 *)&(param_1->PhaseOffset).field_0x8;
  lVar1 = *(longlong *)&(param_1->PhaseOffset).field_0x10;
  *(longlong *)&(this->PhaseOffset).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->PhaseOffset = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->GlideFactor = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->GlideFactor).field_0x8 = *(undefined8 *)&(param_1->GlideFactor).field_0x8;
  lVar1 = *(longlong *)&(param_1->GlideFactor).field_0x10;
  *(longlong *)&(this->GlideFactor).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->GlideFactor = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->BiPolar = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->BiPolar).field_0x8 = *(undefined8 *)&(param_1->BiPolar).field_0x8;
  lVar1 = *(longlong *)&(param_1->BiPolar).field_0x10;
  *(longlong *)&(this->BiPolar).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->BiPolar = &___7__TDataReadReference__N_Metasound__6B_;
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FAudioBuffer> *)&this->AudioBuffer,NewObject,
             param_1->Settings);
  *(undefined ***)&this->AudioBuffer =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  lVar1 = *(longlong *)&(this->AudioBuffer).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar1 + 0x10) != *(int *)(lVar1 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  if (*(int *)(lVar1 + 8) != param_1->Settings->NumFramesPerBlock) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("AudioBuffer->Num() == InConstructParams.Settings.GetNumFramesPerBlock()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundOscillatorNodes.cpp"
                       ,99,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  return this;
}

// TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_> @ 14b139140

/* WARNING: Enum "Type": Some values do not have unique names */

TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
* __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
          (TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
           *this,FOscillatorOperatorConstructParams *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
  *pTVar4;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TOscillatorOperatorBase_U__TGenerateBlock_UFSquarePolysmoothGenerator_Generators_Metasound__UFWrapPhase_23__Generators_Metasound__V__FSquareOperator_U__TGenerateBlock_UFSquarePolysmoothGenerator_Generators_Metasound__UFWrapPhase_23__Generators_Metasound___3__Metasound__6B_
  ;
  (this->Generator).Phase = **(float **)&(param_1->PhaseOffset).field_0x8;
  (this->Generator).Osc = (FSquarePolysmoothGenerator)0x0;
  (this->Generator).Wrap = (FWrapPhase)0x0;
  *(undefined2 *)&(this->Generator).field_0x6 = 0;
  (this->Generator).CurrentFreq = -1.0;
  this->SampleRate = (float)param_1->Settings->SampleRate;
  this->Nyquist = (float)param_1->Settings->SampleRate * __real_3f000000;
  *(undefined ***)&this->Enabled = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->Enabled).field_0x8 = *(undefined8 *)&(param_1->Enabled).field_0x8;
  lVar1 = *(longlong *)&(param_1->Enabled).field_0x10;
  *(longlong *)&(this->Enabled).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Enabled = &___7__TDataReadReference__N_Metasound__6B_;
  *(undefined ***)&this->BaseFrequency = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->BaseFrequency).field_0x8 =
       *(undefined8 *)&(param_1->BaseFrequency).field_0x8;
  lVar1 = *(longlong *)&(param_1->BaseFrequency).field_0x10;
  *(longlong *)&(this->BaseFrequency).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->BaseFrequency = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->PhaseReset = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->PhaseReset).field_0x8 = *(undefined8 *)&(param_1->PhaseReset).field_0x8;
  lVar1 = *(longlong *)&(param_1->PhaseReset).field_0x10;
  *(longlong *)&(this->PhaseReset).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->PhaseReset = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_
  ;
  *(undefined ***)&this->PhaseOffset = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->PhaseOffset).field_0x8 = *(undefined8 *)&(param_1->PhaseOffset).field_0x8;
  lVar1 = *(longlong *)&(param_1->PhaseOffset).field_0x10;
  *(longlong *)&(this->PhaseOffset).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->PhaseOffset = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->GlideFactor = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->GlideFactor).field_0x8 = *(undefined8 *)&(param_1->GlideFactor).field_0x8;
  lVar1 = *(longlong *)&(param_1->GlideFactor).field_0x10;
  *(longlong *)&(this->GlideFactor).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->GlideFactor = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->BiPolar = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->BiPolar).field_0x8 = *(undefined8 *)&(param_1->BiPolar).field_0x8;
  lVar1 = *(longlong *)&(param_1->BiPolar).field_0x10;
  *(longlong *)&(this->BiPolar).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->BiPolar = &___7__TDataReadReference__N_Metasound__6B_;
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FAudioBuffer> *)&this->AudioBuffer,NewObject,
             param_1->Settings);
  *(undefined ***)&this->AudioBuffer =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  lVar1 = *(longlong *)&(this->AudioBuffer).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar1 + 0x10) != *(int *)(lVar1 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  if (*(int *)(lVar1 + 8) != param_1->Settings->NumFramesPerBlock) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("AudioBuffer->Num() == InConstructParams.Settings.GetNumFramesPerBlock()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundOscillatorNodes.cpp"
                       ,99,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  return this;
}

// TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>_> @ 14b139350

/* WARNING: Enum "Type": Some values do not have unique names */

TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>_>_>
* __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>_>
::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>_>
          (void *this,FOscillatorOperatorConstructParams *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>_>_>
  *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TOscillatorOperatorBase_U__TGenerateBlock_UFTriangleGenerator_Generators_Metasound__UFWrapPhase_23__Generators_Metasound__V__TOscillatorOperator_U__TGenerateBlock_UFTriangleGenerator_Generators_Metasound__UFWrapPhase_23__Generators_Metasound__V__TDataReadReference_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___3__3__Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 8) = **(undefined4 **)&(param_1->PhaseOffset).field_0x8;
  *(undefined4 *)((longlong)this + 0xc) = 0;
  *(undefined4 *)((longlong)this + 0x10) = 0xbf800000;
  *(float *)((longlong)this + 0x14) = (float)param_1->Settings->SampleRate;
  *(float *)((longlong)this + 0x18) = (float)param_1->Settings->SampleRate * __real_3f000000;
  *(undefined ***)((longlong)this + 0x20) = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x28) = *(undefined8 *)&(param_1->Enabled).field_0x8;
  lVar1 = *(longlong *)&(param_1->Enabled).field_0x10;
  *(longlong *)((longlong)this + 0x30) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x20) = &___7__TDataReadReference__N_Metasound__6B_;
  *(undefined ***)((longlong)this + 0x40) = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x48) = *(undefined8 *)&(param_1->BaseFrequency).field_0x8;
  lVar1 = *(longlong *)&(param_1->BaseFrequency).field_0x10;
  *(longlong *)((longlong)this + 0x50) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x40) = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)((longlong)this + 0x60) =
       &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)&(param_1->PhaseReset).field_0x8;
  lVar1 = *(longlong *)&(param_1->PhaseReset).field_0x10;
  *(longlong *)((longlong)this + 0x70) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x60) =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)((longlong)this + 0x80) = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x88) = *(undefined8 *)&(param_1->PhaseOffset).field_0x8;
  lVar1 = *(longlong *)&(param_1->PhaseOffset).field_0x10;
  *(longlong *)((longlong)this + 0x90) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x80) = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)((longlong)this + 0xa0) = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0xa8) = *(undefined8 *)&(param_1->GlideFactor).field_0x8;
  lVar1 = *(longlong *)&(param_1->GlideFactor).field_0x10;
  *(longlong *)((longlong)this + 0xb0) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0xa0) = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)((longlong)this + 0xc0) = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)((longlong)this + 200) = *(undefined8 *)&(param_1->BiPolar).field_0x8;
  lVar1 = *(longlong *)&(param_1->BiPolar).field_0x10;
  *(longlong *)((longlong)this + 0xd0) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0xc0) = &___7__TDataReadReference__N_Metasound__6B_;
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FAudioBuffer> *)((longlong)this + 0xe0),NewObject,
             param_1->Settings);
  *(undefined ***)((longlong)this + 0xe0) =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  lVar1 = *(longlong *)((longlong)this + 0xe8);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar1 + 0x10) != *(int *)(lVar1 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  if (*(int *)(lVar1 + 8) != param_1->Settings->NumFramesPerBlock) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("AudioBuffer->Num() == InConstructParams.Settings.GetNumFramesPerBlock()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundOscillatorNodes.cpp"
                       ,99,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>_>_>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  return this;
}

// TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_> @ 14b139560

/* WARNING: Enum "Type": Some values do not have unique names */

TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>_>
* __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
          (void *this,FOscillatorOperatorConstructParams *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>_>
  *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TOscillatorOperatorBase_U__TGenerateBlockFM_UFBhaskaraGenerator_Generators_Metasound__UFWrapPhase_23__Generators_Metasound__V__TOscillatorOperatorFM_U__TGenerateBlockFM_UFBhaskaraGenerator_Generators_Metasound__UFWrapPhase_23__Generators_Metasound__V__TDataReadReference_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___3__3__Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 8) = **(undefined4 **)&(param_1->PhaseOffset).field_0x8;
  *(undefined4 *)((longlong)this + 0xc) = 0;
  *(undefined4 *)((longlong)this + 0x10) = 0xbf800000;
  *(float *)((longlong)this + 0x14) = (float)param_1->Settings->SampleRate;
  *(float *)((longlong)this + 0x18) = (float)param_1->Settings->SampleRate * __real_3f000000;
  *(undefined ***)((longlong)this + 0x20) = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x28) = *(undefined8 *)&(param_1->Enabled).field_0x8;
  lVar1 = *(longlong *)&(param_1->Enabled).field_0x10;
  *(longlong *)((longlong)this + 0x30) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x20) = &___7__TDataReadReference__N_Metasound__6B_;
  *(undefined ***)((longlong)this + 0x40) = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x48) = *(undefined8 *)&(param_1->BaseFrequency).field_0x8;
  lVar1 = *(longlong *)&(param_1->BaseFrequency).field_0x10;
  *(longlong *)((longlong)this + 0x50) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x40) = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)((longlong)this + 0x60) =
       &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)&(param_1->PhaseReset).field_0x8;
  lVar1 = *(longlong *)&(param_1->PhaseReset).field_0x10;
  *(longlong *)((longlong)this + 0x70) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x60) =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)((longlong)this + 0x80) = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x88) = *(undefined8 *)&(param_1->PhaseOffset).field_0x8;
  lVar1 = *(longlong *)&(param_1->PhaseOffset).field_0x10;
  *(longlong *)((longlong)this + 0x90) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x80) = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)((longlong)this + 0xa0) = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0xa8) = *(undefined8 *)&(param_1->GlideFactor).field_0x8;
  lVar1 = *(longlong *)&(param_1->GlideFactor).field_0x10;
  *(longlong *)((longlong)this + 0xb0) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0xa0) = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)((longlong)this + 0xc0) = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)((longlong)this + 200) = *(undefined8 *)&(param_1->BiPolar).field_0x8;
  lVar1 = *(longlong *)&(param_1->BiPolar).field_0x10;
  *(longlong *)((longlong)this + 0xd0) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0xc0) = &___7__TDataReadReference__N_Metasound__6B_;
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FAudioBuffer> *)((longlong)this + 0xe0),NewObject,
             param_1->Settings);
  *(undefined ***)((longlong)this + 0xe0) =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  lVar1 = *(longlong *)((longlong)this + 0xe8);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar1 + 0x10) != *(int *)(lVar1 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  if (*(int *)(lVar1 + 8) != param_1->Settings->NumFramesPerBlock) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("AudioBuffer->Num() == InConstructParams.Settings.GetNumFramesPerBlock()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundOscillatorNodes.cpp"
                       ,99,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>_>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  return this;
}

// TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_> @ 14b139770

/* WARNING: Enum "Type": Some values do not have unique names */

TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_>_>_>
* __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>
::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>
          (void *this,FOscillatorOperatorConstructParams *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_>_>_>
  *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TOscillatorOperatorBase_U__TGenerateBlockFM_UFSawGenerator_Generators_Metasound__UFWrapPhase_23__Generators_Metasound__V__TOscillatorOperatorFM_U__TGenerateBlockFM_UFSawGenerator_Generators_Metasound__UFWrapPhase_23__Generators_Metasound__V__TDataReadReference_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___3__3__Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 8) = **(undefined4 **)&(param_1->PhaseOffset).field_0x8;
  *(undefined4 *)((longlong)this + 0xc) = 0;
  *(undefined4 *)((longlong)this + 0x10) = 0xbf800000;
  *(float *)((longlong)this + 0x14) = (float)param_1->Settings->SampleRate;
  *(float *)((longlong)this + 0x18) = (float)param_1->Settings->SampleRate * __real_3f000000;
  *(undefined ***)((longlong)this + 0x20) = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x28) = *(undefined8 *)&(param_1->Enabled).field_0x8;
  lVar1 = *(longlong *)&(param_1->Enabled).field_0x10;
  *(longlong *)((longlong)this + 0x30) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x20) = &___7__TDataReadReference__N_Metasound__6B_;
  *(undefined ***)((longlong)this + 0x40) = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x48) = *(undefined8 *)&(param_1->BaseFrequency).field_0x8;
  lVar1 = *(longlong *)&(param_1->BaseFrequency).field_0x10;
  *(longlong *)((longlong)this + 0x50) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x40) = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)((longlong)this + 0x60) =
       &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)&(param_1->PhaseReset).field_0x8;
  lVar1 = *(longlong *)&(param_1->PhaseReset).field_0x10;
  *(longlong *)((longlong)this + 0x70) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x60) =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)((longlong)this + 0x80) = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x88) = *(undefined8 *)&(param_1->PhaseOffset).field_0x8;
  lVar1 = *(longlong *)&(param_1->PhaseOffset).field_0x10;
  *(longlong *)((longlong)this + 0x90) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x80) = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)((longlong)this + 0xa0) = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0xa8) = *(undefined8 *)&(param_1->GlideFactor).field_0x8;
  lVar1 = *(longlong *)&(param_1->GlideFactor).field_0x10;
  *(longlong *)((longlong)this + 0xb0) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0xa0) = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)((longlong)this + 0xc0) = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)((longlong)this + 200) = *(undefined8 *)&(param_1->BiPolar).field_0x8;
  lVar1 = *(longlong *)&(param_1->BiPolar).field_0x10;
  *(longlong *)((longlong)this + 0xd0) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0xc0) = &___7__TDataReadReference__N_Metasound__6B_;
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FAudioBuffer> *)((longlong)this + 0xe0),NewObject,
             param_1->Settings);
  *(undefined ***)((longlong)this + 0xe0) =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  lVar1 = *(longlong *)((longlong)this + 0xe8);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar1 + 0x10) != *(int *)(lVar1 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  if (*(int *)(lVar1 + 8) != param_1->Settings->NumFramesPerBlock) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("AudioBuffer->Num() == InConstructParams.Settings.GetNumFramesPerBlock()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundOscillatorNodes.cpp"
                       ,99,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_>_>_>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  return this;
}

// TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_> @ 14b139980

/* WARNING: Enum "Type": Some values do not have unique names */

TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_>_>_>
* __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>
::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>
          (void *this,FOscillatorOperatorConstructParams *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_>_>_>
  *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TOscillatorOperatorBase_U__TGenerateBlockFM_UFSawPolySmoothGenerator_Generators_Metasound__UFWrapPhase_23__Generators_Metasound__V__TOscillatorOperatorFM_U__TGenerateBlockFM_UFSawPolySmoothGenerator_Generators_Metasound__UFWrapPhase_23__Generators_Metasound__V__TDataReadReference_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___3__3__Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 8) = **(undefined4 **)&(param_1->PhaseOffset).field_0x8;
  *(undefined4 *)((longlong)this + 0xc) = 0;
  *(undefined4 *)((longlong)this + 0x10) = 0xbf800000;
  *(float *)((longlong)this + 0x14) = (float)param_1->Settings->SampleRate;
  *(float *)((longlong)this + 0x18) = (float)param_1->Settings->SampleRate * __real_3f000000;
  *(undefined ***)((longlong)this + 0x20) = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x28) = *(undefined8 *)&(param_1->Enabled).field_0x8;
  lVar1 = *(longlong *)&(param_1->Enabled).field_0x10;
  *(longlong *)((longlong)this + 0x30) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x20) = &___7__TDataReadReference__N_Metasound__6B_;
  *(undefined ***)((longlong)this + 0x40) = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x48) = *(undefined8 *)&(param_1->BaseFrequency).field_0x8;
  lVar1 = *(longlong *)&(param_1->BaseFrequency).field_0x10;
  *(longlong *)((longlong)this + 0x50) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x40) = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)((longlong)this + 0x60) =
       &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)&(param_1->PhaseReset).field_0x8;
  lVar1 = *(longlong *)&(param_1->PhaseReset).field_0x10;
  *(longlong *)((longlong)this + 0x70) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x60) =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)((longlong)this + 0x80) = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x88) = *(undefined8 *)&(param_1->PhaseOffset).field_0x8;
  lVar1 = *(longlong *)&(param_1->PhaseOffset).field_0x10;
  *(longlong *)((longlong)this + 0x90) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x80) = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)((longlong)this + 0xa0) = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0xa8) = *(undefined8 *)&(param_1->GlideFactor).field_0x8;
  lVar1 = *(longlong *)&(param_1->GlideFactor).field_0x10;
  *(longlong *)((longlong)this + 0xb0) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0xa0) = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)((longlong)this + 0xc0) = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)((longlong)this + 200) = *(undefined8 *)&(param_1->BiPolar).field_0x8;
  lVar1 = *(longlong *)&(param_1->BiPolar).field_0x10;
  *(longlong *)((longlong)this + 0xd0) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0xc0) = &___7__TDataReadReference__N_Metasound__6B_;
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FAudioBuffer> *)((longlong)this + 0xe0),NewObject,
             param_1->Settings);
  *(undefined ***)((longlong)this + 0xe0) =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  lVar1 = *(longlong *)((longlong)this + 0xe8);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar1 + 0x10) != *(int *)(lVar1 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  if (*(int *)(lVar1 + 8) != param_1->Settings->NumFramesPerBlock) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("AudioBuffer->Num() == InConstructParams.Settings.GetNumFramesPerBlock()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundOscillatorNodes.cpp"
                       ,99,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<Metasound::ESawGenerationType,0>_>_>_>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  return this;
}

// TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_> @ 14b139b90

/* WARNING: Enum "Type": Some values do not have unique names */

TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>_>
* __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
          (void *this,FOscillatorOperatorConstructParams *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>_>
  *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TOscillatorOperatorBase_U__TGenerateBlockFM_UFSineWaveTableGenerator_Generators_Metasound__UFWrapPhase_23__Generators_Metasound__V__TOscillatorOperatorFM_U__TGenerateBlockFM_UFSineWaveTableGenerator_Generators_Metasound__UFWrapPhase_23__Generators_Metasound__V__TDataReadReference_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___3__3__Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 8) = **(undefined4 **)&(param_1->PhaseOffset).field_0x8;
  *(undefined4 *)((longlong)this + 0xc) = 0;
  *(undefined4 *)((longlong)this + 0x10) = 0xbf800000;
  *(float *)((longlong)this + 0x14) = (float)param_1->Settings->SampleRate;
  *(float *)((longlong)this + 0x18) = (float)param_1->Settings->SampleRate * __real_3f000000;
  *(undefined ***)((longlong)this + 0x20) = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x28) = *(undefined8 *)&(param_1->Enabled).field_0x8;
  lVar1 = *(longlong *)&(param_1->Enabled).field_0x10;
  *(longlong *)((longlong)this + 0x30) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x20) = &___7__TDataReadReference__N_Metasound__6B_;
  *(undefined ***)((longlong)this + 0x40) = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x48) = *(undefined8 *)&(param_1->BaseFrequency).field_0x8;
  lVar1 = *(longlong *)&(param_1->BaseFrequency).field_0x10;
  *(longlong *)((longlong)this + 0x50) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x40) = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)((longlong)this + 0x60) =
       &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)&(param_1->PhaseReset).field_0x8;
  lVar1 = *(longlong *)&(param_1->PhaseReset).field_0x10;
  *(longlong *)((longlong)this + 0x70) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x60) =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)((longlong)this + 0x80) = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x88) = *(undefined8 *)&(param_1->PhaseOffset).field_0x8;
  lVar1 = *(longlong *)&(param_1->PhaseOffset).field_0x10;
  *(longlong *)((longlong)this + 0x90) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x80) = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)((longlong)this + 0xa0) = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0xa8) = *(undefined8 *)&(param_1->GlideFactor).field_0x8;
  lVar1 = *(longlong *)&(param_1->GlideFactor).field_0x10;
  *(longlong *)((longlong)this + 0xb0) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0xa0) = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)((longlong)this + 0xc0) = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)((longlong)this + 200) = *(undefined8 *)&(param_1->BiPolar).field_0x8;
  lVar1 = *(longlong *)&(param_1->BiPolar).field_0x10;
  *(longlong *)((longlong)this + 0xd0) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0xc0) = &___7__TDataReadReference__N_Metasound__6B_;
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FAudioBuffer> *)((longlong)this + 0xe0),NewObject,
             param_1->Settings);
  *(undefined ***)((longlong)this + 0xe0) =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  lVar1 = *(longlong *)((longlong)this + 0xe8);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar1 + 0x10) != *(int *)(lVar1 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  if (*(int *)(lVar1 + 8) != param_1->Settings->NumFramesPerBlock) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("AudioBuffer->Num() == InConstructParams.Settings.GetNumFramesPerBlock()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundOscillatorNodes.cpp"
                       ,99,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>_>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  return this;
}

// TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_> @ 14b139da0

/* WARNING: Enum "Type": Some values do not have unique names */

TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>_>
* __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
          (void *this,FOscillatorOperatorConstructParams *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>_>
  *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TOscillatorOperatorBase_U__TGenerateBlockFM_UFSinfGenerator_Generators_Metasound__UFWrapPhase_23__Generators_Metasound__V__TOscillatorOperatorFM_U__TGenerateBlockFM_UFSinfGenerator_Generators_Metasound__UFWrapPhase_23__Generators_Metasound__V__TDataReadReference_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___3__3__Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 8) = **(undefined4 **)&(param_1->PhaseOffset).field_0x8;
  *(undefined4 *)((longlong)this + 0xc) = 0;
  *(undefined4 *)((longlong)this + 0x10) = 0xbf800000;
  *(float *)((longlong)this + 0x14) = (float)param_1->Settings->SampleRate;
  *(float *)((longlong)this + 0x18) = (float)param_1->Settings->SampleRate * __real_3f000000;
  *(undefined ***)((longlong)this + 0x20) = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x28) = *(undefined8 *)&(param_1->Enabled).field_0x8;
  lVar1 = *(longlong *)&(param_1->Enabled).field_0x10;
  *(longlong *)((longlong)this + 0x30) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x20) = &___7__TDataReadReference__N_Metasound__6B_;
  *(undefined ***)((longlong)this + 0x40) = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x48) = *(undefined8 *)&(param_1->BaseFrequency).field_0x8;
  lVar1 = *(longlong *)&(param_1->BaseFrequency).field_0x10;
  *(longlong *)((longlong)this + 0x50) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x40) = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)((longlong)this + 0x60) =
       &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)&(param_1->PhaseReset).field_0x8;
  lVar1 = *(longlong *)&(param_1->PhaseReset).field_0x10;
  *(longlong *)((longlong)this + 0x70) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x60) =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)((longlong)this + 0x80) = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x88) = *(undefined8 *)&(param_1->PhaseOffset).field_0x8;
  lVar1 = *(longlong *)&(param_1->PhaseOffset).field_0x10;
  *(longlong *)((longlong)this + 0x90) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x80) = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)((longlong)this + 0xa0) = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0xa8) = *(undefined8 *)&(param_1->GlideFactor).field_0x8;
  lVar1 = *(longlong *)&(param_1->GlideFactor).field_0x10;
  *(longlong *)((longlong)this + 0xb0) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0xa0) = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)((longlong)this + 0xc0) = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)((longlong)this + 200) = *(undefined8 *)&(param_1->BiPolar).field_0x8;
  lVar1 = *(longlong *)&(param_1->BiPolar).field_0x10;
  *(longlong *)((longlong)this + 0xd0) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0xc0) = &___7__TDataReadReference__N_Metasound__6B_;
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FAudioBuffer> *)((longlong)this + 0xe0),NewObject,
             param_1->Settings);
  *(undefined ***)((longlong)this + 0xe0) =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  lVar1 = *(longlong *)((longlong)this + 0xe8);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar1 + 0x10) != *(int *)(lVar1 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  if (*(int *)(lVar1 + 8) != param_1->Settings->NumFramesPerBlock) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("AudioBuffer->Num() == InConstructParams.Settings.GetNumFramesPerBlock()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundOscillatorNodes.cpp"
                       ,99,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>_>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  return this;
}

// TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_> @ 14b139fb0

/* WARNING: Enum "Type": Some values do not have unique names */

TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>
* __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>
::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>
          (TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>
           *this,FOscillatorOperatorConstructParams *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>
  *pTVar4;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TOscillatorOperatorBase_U__TGenerateBlockFM_UFSquareGenerator_Generators_Metasound__UFWrapPhase_23__Generators_Metasound__V__FSquareOperatorFM_U__TGenerateBlockFM_UFSquareGenerator_Generators_Metasound__UFWrapPhase_23__Generators_Metasound___3__Metasound__6B_
  ;
  (this->Generator).Phase = **(float **)&(param_1->PhaseOffset).field_0x8;
  (this->Generator).Osc = (FSquareGenerator)0x0;
  (this->Generator).Wrap = (FWrapPhase)0x0;
  *(undefined2 *)&(this->Generator).field_0x6 = 0;
  (this->Generator).CurrentFreq = -1.0;
  this->SampleRate = (float)param_1->Settings->SampleRate;
  this->Nyquist = (float)param_1->Settings->SampleRate * __real_3f000000;
  *(undefined ***)&this->Enabled = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->Enabled).field_0x8 = *(undefined8 *)&(param_1->Enabled).field_0x8;
  lVar1 = *(longlong *)&(param_1->Enabled).field_0x10;
  *(longlong *)&(this->Enabled).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Enabled = &___7__TDataReadReference__N_Metasound__6B_;
  *(undefined ***)&this->BaseFrequency = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->BaseFrequency).field_0x8 =
       *(undefined8 *)&(param_1->BaseFrequency).field_0x8;
  lVar1 = *(longlong *)&(param_1->BaseFrequency).field_0x10;
  *(longlong *)&(this->BaseFrequency).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->BaseFrequency = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->PhaseReset = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->PhaseReset).field_0x8 = *(undefined8 *)&(param_1->PhaseReset).field_0x8;
  lVar1 = *(longlong *)&(param_1->PhaseReset).field_0x10;
  *(longlong *)&(this->PhaseReset).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->PhaseReset = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_
  ;
  *(undefined ***)&this->PhaseOffset = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->PhaseOffset).field_0x8 = *(undefined8 *)&(param_1->PhaseOffset).field_0x8;
  lVar1 = *(longlong *)&(param_1->PhaseOffset).field_0x10;
  *(longlong *)&(this->PhaseOffset).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->PhaseOffset = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->GlideFactor = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->GlideFactor).field_0x8 = *(undefined8 *)&(param_1->GlideFactor).field_0x8;
  lVar1 = *(longlong *)&(param_1->GlideFactor).field_0x10;
  *(longlong *)&(this->GlideFactor).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->GlideFactor = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->BiPolar = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->BiPolar).field_0x8 = *(undefined8 *)&(param_1->BiPolar).field_0x8;
  lVar1 = *(longlong *)&(param_1->BiPolar).field_0x10;
  *(longlong *)&(this->BiPolar).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->BiPolar = &___7__TDataReadReference__N_Metasound__6B_;
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FAudioBuffer> *)&this->AudioBuffer,NewObject,
             param_1->Settings);
  *(undefined ***)&this->AudioBuffer =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  lVar1 = *(longlong *)&(this->AudioBuffer).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar1 + 0x10) != *(int *)(lVar1 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  if (*(int *)(lVar1 + 8) != param_1->Settings->NumFramesPerBlock) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("AudioBuffer->Num() == InConstructParams.Settings.GetNumFramesPerBlock()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundOscillatorNodes.cpp"
                       ,99,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  return this;
}

// TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_> @ 14b13a1c0

/* WARNING: Enum "Type": Some values do not have unique names */

TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
* __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
          (TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
           *this,FOscillatorOperatorConstructParams *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
  *pTVar4;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TOscillatorOperatorBase_U__TGenerateBlockFM_UFSquarePolysmoothGenerator_Generators_Metasound__UFWrapPhase_23__Generators_Metasound__V__FSquareOperatorFM_U__TGenerateBlockFM_UFSquarePolysmoothGenerator_Generators_Metasound__UFWrapPhase_23__Generators_Metasound___3__Metasound__6B_
  ;
  (this->Generator).Phase = **(float **)&(param_1->PhaseOffset).field_0x8;
  (this->Generator).Osc = (FSquarePolysmoothGenerator)0x0;
  (this->Generator).Wrap = (FWrapPhase)0x0;
  *(undefined2 *)&(this->Generator).field_0x6 = 0;
  (this->Generator).CurrentFreq = -1.0;
  this->SampleRate = (float)param_1->Settings->SampleRate;
  this->Nyquist = (float)param_1->Settings->SampleRate * __real_3f000000;
  *(undefined ***)&this->Enabled = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->Enabled).field_0x8 = *(undefined8 *)&(param_1->Enabled).field_0x8;
  lVar1 = *(longlong *)&(param_1->Enabled).field_0x10;
  *(longlong *)&(this->Enabled).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Enabled = &___7__TDataReadReference__N_Metasound__6B_;
  *(undefined ***)&this->BaseFrequency = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->BaseFrequency).field_0x8 =
       *(undefined8 *)&(param_1->BaseFrequency).field_0x8;
  lVar1 = *(longlong *)&(param_1->BaseFrequency).field_0x10;
  *(longlong *)&(this->BaseFrequency).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->BaseFrequency = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->PhaseReset = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->PhaseReset).field_0x8 = *(undefined8 *)&(param_1->PhaseReset).field_0x8;
  lVar1 = *(longlong *)&(param_1->PhaseReset).field_0x10;
  *(longlong *)&(this->PhaseReset).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->PhaseReset = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_
  ;
  *(undefined ***)&this->PhaseOffset = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->PhaseOffset).field_0x8 = *(undefined8 *)&(param_1->PhaseOffset).field_0x8;
  lVar1 = *(longlong *)&(param_1->PhaseOffset).field_0x10;
  *(longlong *)&(this->PhaseOffset).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->PhaseOffset = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->GlideFactor = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->GlideFactor).field_0x8 = *(undefined8 *)&(param_1->GlideFactor).field_0x8;
  lVar1 = *(longlong *)&(param_1->GlideFactor).field_0x10;
  *(longlong *)&(this->GlideFactor).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->GlideFactor = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->BiPolar = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->BiPolar).field_0x8 = *(undefined8 *)&(param_1->BiPolar).field_0x8;
  lVar1 = *(longlong *)&(param_1->BiPolar).field_0x10;
  *(longlong *)&(this->BiPolar).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->BiPolar = &___7__TDataReadReference__N_Metasound__6B_;
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FAudioBuffer> *)&this->AudioBuffer,NewObject,
             param_1->Settings);
  *(undefined ***)&this->AudioBuffer =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  lVar1 = *(longlong *)&(this->AudioBuffer).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar1 + 0x10) != *(int *)(lVar1 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  if (*(int *)(lVar1 + 8) != param_1->Settings->NumFramesPerBlock) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("AudioBuffer->Num() == InConstructParams.Settings.GetNumFramesPerBlock()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundOscillatorNodes.cpp"
                       ,99,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  return this;
}

// TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>_> @ 14b13a3d0

/* WARNING: Enum "Type": Some values do not have unique names */

TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>_>_>
* __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>_>
::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>_>
          (void *this,FOscillatorOperatorConstructParams *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>_>_>
  *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TOscillatorOperatorBase_U__TGenerateBlockFM_UFTriangleGenerator_Generators_Metasound__UFWrapPhase_23__Generators_Metasound__V__TOscillatorOperatorFM_U__TGenerateBlockFM_UFTriangleGenerator_Generators_Metasound__UFWrapPhase_23__Generators_Metasound__V__TDataReadReference_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___3__3__Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 8) = **(undefined4 **)&(param_1->PhaseOffset).field_0x8;
  *(undefined4 *)((longlong)this + 0xc) = 0;
  *(undefined4 *)((longlong)this + 0x10) = 0xbf800000;
  *(float *)((longlong)this + 0x14) = (float)param_1->Settings->SampleRate;
  *(float *)((longlong)this + 0x18) = (float)param_1->Settings->SampleRate * __real_3f000000;
  *(undefined ***)((longlong)this + 0x20) = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x28) = *(undefined8 *)&(param_1->Enabled).field_0x8;
  lVar1 = *(longlong *)&(param_1->Enabled).field_0x10;
  *(longlong *)((longlong)this + 0x30) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x20) = &___7__TDataReadReference__N_Metasound__6B_;
  *(undefined ***)((longlong)this + 0x40) = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x48) = *(undefined8 *)&(param_1->BaseFrequency).field_0x8;
  lVar1 = *(longlong *)&(param_1->BaseFrequency).field_0x10;
  *(longlong *)((longlong)this + 0x50) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x40) = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)((longlong)this + 0x60) =
       &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x68) = *(undefined8 *)&(param_1->PhaseReset).field_0x8;
  lVar1 = *(longlong *)&(param_1->PhaseReset).field_0x10;
  *(longlong *)((longlong)this + 0x70) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x60) =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)((longlong)this + 0x80) = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x88) = *(undefined8 *)&(param_1->PhaseOffset).field_0x8;
  lVar1 = *(longlong *)&(param_1->PhaseOffset).field_0x10;
  *(longlong *)((longlong)this + 0x90) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x80) = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)((longlong)this + 0xa0) = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0xa8) = *(undefined8 *)&(param_1->GlideFactor).field_0x8;
  lVar1 = *(longlong *)&(param_1->GlideFactor).field_0x10;
  *(longlong *)((longlong)this + 0xb0) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0xa0) = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)((longlong)this + 0xc0) = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)((longlong)this + 200) = *(undefined8 *)&(param_1->BiPolar).field_0x8;
  lVar1 = *(longlong *)&(param_1->BiPolar).field_0x10;
  *(longlong *)((longlong)this + 0xd0) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0xc0) = &___7__TDataReadReference__N_Metasound__6B_;
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FAudioBuffer> *)((longlong)this + 0xe0),NewObject,
             param_1->Settings);
  *(undefined ***)((longlong)this + 0xe0) =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  lVar1 = *(longlong *)((longlong)this + 0xe8);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar1 + 0x10) != *(int *)(lVar1 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  if (*(int *)(lVar1 + 8) != param_1->Settings->NumFramesPerBlock) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("AudioBuffer->Num() == InConstructParams.Settings.GetNumFramesPerBlock()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundOscillatorNodes.cpp"
                       ,99,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>_>_>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  return this;
}

// TOscillatorOperatorBase<Metasound::Generators::F2DRotatorGenerateBlock,Metasound::TOscillatorOperator<Metasound::Generators::F2DRotatorGenerateBlock,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_> @ 14b13a5e0

/* WARNING: Enum "Type": Some values do not have unique names */

TOscillatorOperatorBase<Metasound::Generators::F2DRotatorGenerateBlock,Metasound::TOscillatorOperator<Metasound::Generators::F2DRotatorGenerateBlock,Metasound::TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>_>
* __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::F2DRotatorGenerateBlock,Metasound::TOscillatorOperator<Metasound::Generators::F2DRotatorGenerateBlock,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
::
TOscillatorOperatorBase<Metasound::Generators::F2DRotatorGenerateBlock,Metasound::TOscillatorOperator<Metasound::Generators::F2DRotatorGenerateBlock,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
          (void *this,FOscillatorOperatorConstructParams *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TOscillatorOperatorBase<Metasound::Generators::F2DRotatorGenerateBlock,Metasound::TOscillatorOperator<Metasound::Generators::F2DRotatorGenerateBlock,Metasound::TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>_>
  *pTVar4;
  float fVar5;
  
  *(undefined ***)this =
       &
       ___7__TOscillatorOperatorBase_UF2DRotatorGenerateBlock_Generators_Metasound__V__TOscillatorOperator_UF2DRotatorGenerateBlock_Generators_Metasound__V__TDataReadReference_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___3__3__Metasound__6B_
  ;
  fVar5 = **(float **)&(param_1->PhaseOffset).field_0x8 * __real_40c90fdb;
  *(undefined4 *)((longlong)this + 0x30) = 0xbf800000;
  *(float *)((longlong)this + 0x34) = fVar5;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(undefined8 *)((longlong)this + 0x18) = 0;
  *(undefined8 *)((longlong)this + 0x20) = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  *(float *)((longlong)this + 0x40) = (float)param_1->Settings->SampleRate;
  *(float *)((longlong)this + 0x44) = (float)param_1->Settings->SampleRate * __real_3f000000;
  *(undefined ***)((longlong)this + 0x48) = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x50) = *(undefined8 *)&(param_1->Enabled).field_0x8;
  lVar1 = *(longlong *)&(param_1->Enabled).field_0x10;
  *(longlong *)((longlong)this + 0x58) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x48) = &___7__TDataReadReference__N_Metasound__6B_;
  *(undefined ***)((longlong)this + 0x68) = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x70) = *(undefined8 *)&(param_1->BaseFrequency).field_0x8;
  lVar1 = *(longlong *)&(param_1->BaseFrequency).field_0x10;
  *(longlong *)((longlong)this + 0x78) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x68) = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)((longlong)this + 0x88) =
       &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)((longlong)this + 0x90) = *(undefined8 *)&(param_1->PhaseReset).field_0x8;
  lVar1 = *(longlong *)&(param_1->PhaseReset).field_0x10;
  *(longlong *)((longlong)this + 0x98) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0x88) =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)((longlong)this + 0xa8) = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0xb0) = *(undefined8 *)&(param_1->PhaseOffset).field_0x8;
  lVar1 = *(longlong *)&(param_1->PhaseOffset).field_0x10;
  *(longlong *)((longlong)this + 0xb8) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0xa8) = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)((longlong)this + 200) = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0xd0) = *(undefined8 *)&(param_1->GlideFactor).field_0x8;
  lVar1 = *(longlong *)&(param_1->GlideFactor).field_0x10;
  *(longlong *)((longlong)this + 0xd8) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 200) = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)((longlong)this + 0xe8) = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)((longlong)this + 0xf0) = *(undefined8 *)&(param_1->BiPolar).field_0x8;
  lVar1 = *(longlong *)&(param_1->BiPolar).field_0x10;
  *(longlong *)((longlong)this + 0xf8) = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)((longlong)this + 0xe8) = &___7__TDataReadReference__N_Metasound__6B_;
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FAudioBuffer> *)((longlong)this + 0x108),NewObject,
             param_1->Settings);
  *(undefined ***)((longlong)this + 0x108) =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  lVar1 = *(longlong *)((longlong)this + 0x110);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar1 + 0x10) != *(int *)(lVar1 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  if (*(int *)(lVar1 + 8) != param_1->Settings->NumFramesPerBlock) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("AudioBuffer->Num() == InConstructParams.Settings.GetNumFramesPerBlock()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundOscillatorNodes.cpp"
                       ,99,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TOscillatorOperatorBase<Metasound::Generators::F2DRotatorGenerateBlock,Metasound::TOscillatorOperator<Metasound::Generators::F2DRotatorGenerateBlock,Metasound::TDataReadReference<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_>_>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  return this;
}

// ~TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_> @ 14b1439c0

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
::
~TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
          (void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0xf0));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0xd0));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0xb0));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x90));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x70));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x50));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x30));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_> @ 14b143a30

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>
::
~TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>
          (void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0xf0));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0xd0));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0xb0));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x90));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x70));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x50));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x30));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_> @ 14b143aa0

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>
::
~TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>
          (void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0xf0));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0xd0));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0xb0));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x90));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x70));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x50));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x30));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_> @ 14b143b10

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
::
~TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
          (void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0xf0));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0xd0));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0xb0));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x90));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x70));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x50));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x30));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_> @ 14b143b80

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
::
~TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
          (void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0xf0));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0xd0));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0xb0));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x90));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x70));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x50));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x30));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_> @ 14b143bf0

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>
::
~TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>
          (TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>
           *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->AudioBuffer).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->BiPolar).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->GlideFactor).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->PhaseOffset).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->PhaseReset).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->BaseFrequency).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Enabled).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_> @ 14b143c60

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
::
~TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
          (TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
           *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->AudioBuffer).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->BiPolar).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->GlideFactor).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->PhaseOffset).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->PhaseReset).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->BaseFrequency).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Enabled).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>_> @ 14b143cd0

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>_>
::
~TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>_>
          (void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0xf0));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0xd0));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0xb0));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x90));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x70));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x50));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x30));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_> @ 14b143d40

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
::
~TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
          (void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0xf0));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0xd0));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0xb0));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x90));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x70));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x50));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x30));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_> @ 14b143db0

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>
::
~TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>
          (void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0xf0));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0xd0));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0xb0));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x90));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x70));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x50));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x30));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_> @ 14b143e20

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>
::
~TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>
          (void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0xf0));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0xd0));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0xb0));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x90));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x70));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x50));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x30));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_> @ 14b143e90

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
::
~TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
          (void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0xf0));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0xd0));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0xb0));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x90));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x70));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x50));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x30));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_> @ 14b143f00

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
::
~TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
          (void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0xf0));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0xd0));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0xb0));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x90));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x70));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x50));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x30));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_> @ 14b143f70

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>
::
~TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>
          (TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>
           *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->AudioBuffer).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->BiPolar).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->GlideFactor).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->PhaseOffset).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->PhaseReset).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->BaseFrequency).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Enabled).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_> @ 14b143fe0

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
::
~TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
          (TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
           *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->AudioBuffer).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->BiPolar).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->GlideFactor).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->PhaseOffset).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->PhaseReset).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->BaseFrequency).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Enabled).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>_> @ 14b144050

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>_>
::
~TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>_>
          (void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0xf0));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0xd0));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0xb0));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x90));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x70));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x50));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x30));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// ~TOscillatorOperatorBase<Metasound::Generators::F2DRotatorGenerateBlock,Metasound::TOscillatorOperator<Metasound::Generators::F2DRotatorGenerateBlock,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_> @ 14b1440c0

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::F2DRotatorGenerateBlock,Metasound::TOscillatorOperator<Metasound::Generators::F2DRotatorGenerateBlock,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
::
~TOscillatorOperatorBase<Metasound::Generators::F2DRotatorGenerateBlock,Metasound::TOscillatorOperator<Metasound::Generators::F2DRotatorGenerateBlock,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
          (void *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x118));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0xf8));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0xd8));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0xb8));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x78));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x58));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  return;
}

// BindInputs @ 14b15b770

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
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
  return;
}

// BindInputs @ 14b15b9d0

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>
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
  return;
}

// BindInputs @ 14b15bc30

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>
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
  return;
}

// BindInputs @ 14b15be90

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
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
  return;
}

// BindInputs @ 14b15c0f0

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
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
  return;
}

// BindInputs @ 14b15c350

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>
::BindInputs(TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>
             *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<bool> *local_res18;
  undefined1 local_58 [16];
  code *local_48;
  TDataReadReference<bool> **local_40;
  undefined1 local_38 [16];
  
  FLazyName::Resolve(&OscillatorCommonVertexNames::EnabledPinName);
  local_res18 = &this->Enabled;
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
  local_res18 = (TDataReadReference<bool> *)&this->BaseFrequency;
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
  local_res18 = (TDataReadReference<bool> *)&this->PhaseOffset;
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
  local_res18 = (TDataReadReference<bool> *)&this->PhaseReset;
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
  local_res18 = (TDataReadReference<bool> *)&this->GlideFactor;
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
  local_res18 = &this->BiPolar;
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
  return;
}

// BindInputs @ 14b15c5b0

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
::BindInputs(TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
             *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<bool> *local_res18;
  undefined1 local_58 [16];
  code *local_48;
  TDataReadReference<bool> **local_40;
  undefined1 local_38 [16];
  
  FLazyName::Resolve(&OscillatorCommonVertexNames::EnabledPinName);
  local_res18 = &this->Enabled;
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
  local_res18 = (TDataReadReference<bool> *)&this->BaseFrequency;
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
  local_res18 = (TDataReadReference<bool> *)&this->PhaseOffset;
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
  local_res18 = (TDataReadReference<bool> *)&this->PhaseReset;
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
  local_res18 = (TDataReadReference<bool> *)&this->GlideFactor;
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
  local_res18 = &this->BiPolar;
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
  return;
}

// BindInputs @ 14b15c810

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>_>
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
  return;
}

// BindInputs @ 14b15ca70

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
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
  return;
}

// BindInputs @ 14b15ccd0

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>
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
  return;
}

// BindInputs @ 14b15cf30

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>
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
  return;
}

// BindInputs @ 14b15d190

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
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
  return;
}

// BindInputs @ 14b15d3f0

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
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
  return;
}

// BindInputs @ 14b15d650

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>
::BindInputs(TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>
             *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<bool> *local_res18;
  undefined1 local_58 [16];
  code *local_48;
  TDataReadReference<bool> **local_40;
  undefined1 local_38 [16];
  
  FLazyName::Resolve(&OscillatorCommonVertexNames::EnabledPinName);
  local_res18 = &this->Enabled;
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
  local_res18 = (TDataReadReference<bool> *)&this->BaseFrequency;
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
  local_res18 = (TDataReadReference<bool> *)&this->PhaseOffset;
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
  local_res18 = (TDataReadReference<bool> *)&this->PhaseReset;
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
  local_res18 = (TDataReadReference<bool> *)&this->GlideFactor;
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
  local_res18 = &this->BiPolar;
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
  return;
}

// BindInputs @ 14b15d8b0

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
::BindInputs(TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
             *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<bool> *local_res18;
  undefined1 local_58 [16];
  code *local_48;
  TDataReadReference<bool> **local_40;
  undefined1 local_38 [16];
  
  FLazyName::Resolve(&OscillatorCommonVertexNames::EnabledPinName);
  local_res18 = &this->Enabled;
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
  local_res18 = (TDataReadReference<bool> *)&this->BaseFrequency;
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
  local_res18 = (TDataReadReference<bool> *)&this->PhaseOffset;
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
  local_res18 = (TDataReadReference<bool> *)&this->PhaseReset;
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
  local_res18 = (TDataReadReference<bool> *)&this->GlideFactor;
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
  local_res18 = &this->BiPolar;
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
  return;
}

// BindInputs @ 14b15db10

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>_>
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
  return;
}

// BindInputs @ 14b15dd70

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::F2DRotatorGenerateBlock,Metasound::TOscillatorOperator<Metasound::Generators::F2DRotatorGenerateBlock,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
::BindInputs(void *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  longlong local_res18;
  undefined1 local_58 [16];
  code *local_48;
  longlong *local_40;
  undefined1 local_38 [16];
  
  FLazyName::Resolve(&OscillatorCommonVertexNames::EnabledPinName);
  local_res18 = (longlong)this + 0x48;
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
  local_res18 = (longlong)this + 0x68;
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
  local_res18 = (longlong)this + 0xa8;
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
  local_res18 = (longlong)this + 0x88;
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
  local_res18 = (longlong)this + 200;
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
  local_res18 = (longlong)this + 0xe8;
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
  return;
}

// BindOutputs @ 14b15f8b0

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  longlong local_res18 [2];
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&OscillatorCommonVertexNames::AudioOutPinName);
  local_res18[0] = (longlong)this + 0xe0;
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

// BindOutputs @ 14b15f940

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>
::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  longlong local_res18 [2];
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&OscillatorCommonVertexNames::AudioOutPinName);
  local_res18[0] = (longlong)this + 0xe0;
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

// BindOutputs @ 14b15f9d0

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>
::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  longlong local_res18 [2];
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&OscillatorCommonVertexNames::AudioOutPinName);
  local_res18[0] = (longlong)this + 0xe0;
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

// BindOutputs @ 14b15fa60

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  longlong local_res18 [2];
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&OscillatorCommonVertexNames::AudioOutPinName);
  local_res18[0] = (longlong)this + 0xe0;
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

// BindOutputs @ 14b15faf0

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  longlong local_res18 [2];
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&OscillatorCommonVertexNames::AudioOutPinName);
  local_res18[0] = (longlong)this + 0xe0;
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

// BindOutputs @ 14b15fb80

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>
::BindOutputs(TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>
              *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FAudioBuffer> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FAudioBuffer> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FAudioBuffer> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&OscillatorCommonVertexNames::AudioOutPinName);
  local_res18[0] = &this->AudioBuffer;
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

// BindOutputs @ 14b15fc10

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
::BindOutputs(TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
              *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FAudioBuffer> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FAudioBuffer> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FAudioBuffer> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&OscillatorCommonVertexNames::AudioOutPinName);
  local_res18[0] = &this->AudioBuffer;
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

// BindOutputs @ 14b15fca0

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>_>
::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  longlong local_res18 [2];
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&OscillatorCommonVertexNames::AudioOutPinName);
  local_res18[0] = (longlong)this + 0xe0;
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

// BindOutputs @ 14b15fd30

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  longlong local_res18 [2];
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&OscillatorCommonVertexNames::AudioOutPinName);
  local_res18[0] = (longlong)this + 0xe0;
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

// BindOutputs @ 14b15fdc0

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>
::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  longlong local_res18 [2];
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&OscillatorCommonVertexNames::AudioOutPinName);
  local_res18[0] = (longlong)this + 0xe0;
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

// BindOutputs @ 14b15fe50

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>
::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  longlong local_res18 [2];
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&OscillatorCommonVertexNames::AudioOutPinName);
  local_res18[0] = (longlong)this + 0xe0;
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

// BindOutputs @ 14b15fee0

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  longlong local_res18 [2];
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&OscillatorCommonVertexNames::AudioOutPinName);
  local_res18[0] = (longlong)this + 0xe0;
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

// BindOutputs @ 14b15ff70

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  longlong local_res18 [2];
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&OscillatorCommonVertexNames::AudioOutPinName);
  local_res18[0] = (longlong)this + 0xe0;
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

// BindOutputs @ 14b160000

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>
::BindOutputs(TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>
              *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FAudioBuffer> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FAudioBuffer> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FAudioBuffer> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&OscillatorCommonVertexNames::AudioOutPinName);
  local_res18[0] = &this->AudioBuffer;
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

// BindOutputs @ 14b160090

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
::BindOutputs(TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
              *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FAudioBuffer> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FAudioBuffer> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FAudioBuffer> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&OscillatorCommonVertexNames::AudioOutPinName);
  local_res18[0] = &this->AudioBuffer;
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

// BindOutputs @ 14b160120

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>_>
::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  longlong local_res18 [2];
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&OscillatorCommonVertexNames::AudioOutPinName);
  local_res18[0] = (longlong)this + 0xe0;
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

// BindOutputs @ 14b1601b0

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::F2DRotatorGenerateBlock,Metasound::TOscillatorOperator<Metasound::Generators::F2DRotatorGenerateBlock,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
::BindOutputs(void *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  longlong local_res18 [2];
  FName *local_38;
  longlong local_30;
  code *local_28;
  longlong *local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&OscillatorCommonVertexNames::AudioOutPinName);
  local_res18[0] = (longlong)this + 0x108;
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

// Execute @ 14b186310

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
::Execute(void *this)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  TVector2<double>_u_0 local_88;
  TVector2<double>_u_0 local_78 [7];
  
  fVar11 = *(float *)((longlong)this + 0x18);
  local_78[0]._s_0.X = ___xmm_3ff00000000000000000000000000000;
  local_78[0]._s_0.Y = _UNK_15061cbc8;
  fVar13 = **(float **)((longlong)this + 0x48);
  if (fVar11 <= **(float **)((longlong)this + 0x48)) {
    fVar13 = fVar11;
  }
  if (fVar13 <= (float)((uint)fVar11 ^ __xmm_80000000800000008000000080000000)) {
    fVar13 = (float)((uint)fVar11 ^ __xmm_80000000800000008000000080000000);
  }
  local_88._s_0.X = ___xmm_3f1a36e2e00000003ff0000000000000;
  local_88._s_0.Y = _UNK_152389c48;
  fVar11 = Audio::GetLogFrequencyClamped
                     (**(float **)((longlong)this + 0xa8),(TVector2<double> *)&local_78[0]._s_0,
                      (TVector2<double> *)&local_88._s_0);
  iVar9 = *(int *)(*(undefined8 **)((longlong)this + 0xe8) + 1);
  if (0 < iVar9) {
    memset((void *)**(undefined8 **)((longlong)this + 0xe8),0,(longlong)iVar9 << 2);
  }
  puVar4 = *(undefined8 **)((longlong)this + 0x68);
  iVar9 = *(int *)((longlong)puVar4 + 0x1c);
  iVar2 = *(int *)((longlong)puVar4 + 0x14);
  if (iVar9 < 1) {
    iVar9 = 0;
  }
  else {
    piVar5 = (int *)*puVar4;
    if (0 < *piVar5) {
      TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
      ::Generate(this,0,*piVar5,fVar13,fVar11);
    }
    fVar8 = __real_43b40000;
    fVar7 = __real_3b360b61;
    uVar6 = __real_bf800000;
    lVar1 = (longlong)iVar9 + -1;
    if (0 < lVar1) {
      lVar10 = 0;
      do {
        iVar9 = piVar5[lVar10 + 1];
        iVar3 = piVar5[lVar10];
        fVar12 = **(float **)((longlong)this + 0x88);
        if (fVar8 <= **(float **)((longlong)this + 0x88)) {
          fVar12 = fVar8;
        }
        if (fVar12 <= 0.0) {
          fVar12 = 0.0;
        }
        local_88._s_0.X = (double)(ulonglong)(uint)(fVar12 * fVar7);
        *(undefined8 *)((longlong)this + 8) = local_88._s_0.X;
        *(undefined4 *)((longlong)this + 0x10) = uVar6;
        TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
        ::Generate(this,iVar3,iVar9,fVar13,fVar11);
        lVar10 = lVar10 + 1;
      } while (lVar10 < lVar1);
    }
    iVar9 = piVar5[lVar1];
    fVar12 = **(float **)((longlong)this + 0x88);
    if (fVar8 <= **(float **)((longlong)this + 0x88)) {
      fVar12 = fVar8;
    }
    local_88._s_0.X = (double)((ulonglong)local_88._s_0.X & 0xffffffff);
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    *(ulonglong *)((longlong)this + 8) = (ulonglong)(uint)(fVar12 * fVar7);
    *(undefined4 *)((longlong)this + 0x10) = uVar6;
  }
  TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
  ::Generate(this,iVar9,iVar2,fVar13,fVar11);
  return;
}

// Execute @ 14b186530

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>
::Execute(void *this)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  TVector2<double>_u_0 local_88;
  TVector2<double>_u_0 local_78 [7];
  
  fVar11 = *(float *)((longlong)this + 0x18);
  local_78[0]._s_0.X = ___xmm_3ff00000000000000000000000000000;
  local_78[0]._s_0.Y = _UNK_15061cbc8;
  fVar13 = **(float **)((longlong)this + 0x48);
  if (fVar11 <= **(float **)((longlong)this + 0x48)) {
    fVar13 = fVar11;
  }
  if (fVar13 <= (float)((uint)fVar11 ^ __xmm_80000000800000008000000080000000)) {
    fVar13 = (float)((uint)fVar11 ^ __xmm_80000000800000008000000080000000);
  }
  local_88._s_0.X = ___xmm_3f1a36e2e00000003ff0000000000000;
  local_88._s_0.Y = _UNK_152389c48;
  fVar11 = Audio::GetLogFrequencyClamped
                     (**(float **)((longlong)this + 0xa8),(TVector2<double> *)&local_78[0]._s_0,
                      (TVector2<double> *)&local_88._s_0);
  iVar9 = *(int *)(*(undefined8 **)((longlong)this + 0xe8) + 1);
  if (0 < iVar9) {
    memset((void *)**(undefined8 **)((longlong)this + 0xe8),0,(longlong)iVar9 << 2);
  }
  puVar4 = *(undefined8 **)((longlong)this + 0x68);
  iVar9 = *(int *)((longlong)puVar4 + 0x1c);
  iVar2 = *(int *)((longlong)puVar4 + 0x14);
  if (iVar9 < 1) {
    iVar9 = 0;
  }
  else {
    piVar5 = (int *)*puVar4;
    if (0 < *piVar5) {
      TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
      ::Generate(this,0,*piVar5,fVar13,fVar11);
    }
    fVar8 = __real_43b40000;
    fVar7 = __real_3b360b61;
    uVar6 = __real_bf800000;
    lVar1 = (longlong)iVar9 + -1;
    if (0 < lVar1) {
      lVar10 = 0;
      do {
        iVar9 = piVar5[lVar10 + 1];
        iVar3 = piVar5[lVar10];
        fVar12 = **(float **)((longlong)this + 0x88);
        if (fVar8 <= **(float **)((longlong)this + 0x88)) {
          fVar12 = fVar8;
        }
        if (fVar12 <= 0.0) {
          fVar12 = 0.0;
        }
        local_88._s_0.X = (double)(ulonglong)(uint)(fVar12 * fVar7);
        *(undefined8 *)((longlong)this + 8) = local_88._s_0.X;
        *(undefined4 *)((longlong)this + 0x10) = uVar6;
        TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
        ::Generate(this,iVar3,iVar9,fVar13,fVar11);
        lVar10 = lVar10 + 1;
      } while (lVar10 < lVar1);
    }
    iVar9 = piVar5[lVar1];
    fVar12 = **(float **)((longlong)this + 0x88);
    if (fVar8 <= **(float **)((longlong)this + 0x88)) {
      fVar12 = fVar8;
    }
    local_88._s_0.X = (double)((ulonglong)local_88._s_0.X & 0xffffffff);
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    *(ulonglong *)((longlong)this + 8) = (ulonglong)(uint)(fVar12 * fVar7);
    *(undefined4 *)((longlong)this + 0x10) = uVar6;
  }
  TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
  ::Generate(this,iVar9,iVar2,fVar13,fVar11);
  return;
}

// Execute @ 14b186750

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>
::Execute(void *this)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  TVector2<double>_u_0 local_88;
  TVector2<double>_u_0 local_78 [7];
  
  fVar11 = *(float *)((longlong)this + 0x18);
  local_78[0]._s_0.X = ___xmm_3ff00000000000000000000000000000;
  local_78[0]._s_0.Y = _UNK_15061cbc8;
  fVar13 = **(float **)((longlong)this + 0x48);
  if (fVar11 <= **(float **)((longlong)this + 0x48)) {
    fVar13 = fVar11;
  }
  if (fVar13 <= (float)((uint)fVar11 ^ __xmm_80000000800000008000000080000000)) {
    fVar13 = (float)((uint)fVar11 ^ __xmm_80000000800000008000000080000000);
  }
  local_88._s_0.X = ___xmm_3f1a36e2e00000003ff0000000000000;
  local_88._s_0.Y = _UNK_152389c48;
  fVar11 = Audio::GetLogFrequencyClamped
                     (**(float **)((longlong)this + 0xa8),(TVector2<double> *)&local_78[0]._s_0,
                      (TVector2<double> *)&local_88._s_0);
  iVar9 = *(int *)(*(undefined8 **)((longlong)this + 0xe8) + 1);
  if (0 < iVar9) {
    memset((void *)**(undefined8 **)((longlong)this + 0xe8),0,(longlong)iVar9 << 2);
  }
  puVar4 = *(undefined8 **)((longlong)this + 0x68);
  iVar9 = *(int *)((longlong)puVar4 + 0x1c);
  iVar2 = *(int *)((longlong)puVar4 + 0x14);
  if (iVar9 < 1) {
    iVar9 = 0;
  }
  else {
    piVar5 = (int *)*puVar4;
    if (0 < *piVar5) {
      TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
      ::Generate(this,0,*piVar5,fVar13,fVar11);
    }
    fVar8 = __real_43b40000;
    fVar7 = __real_3b360b61;
    uVar6 = __real_bf800000;
    lVar1 = (longlong)iVar9 + -1;
    if (0 < lVar1) {
      lVar10 = 0;
      do {
        iVar9 = piVar5[lVar10 + 1];
        iVar3 = piVar5[lVar10];
        fVar12 = **(float **)((longlong)this + 0x88);
        if (fVar8 <= **(float **)((longlong)this + 0x88)) {
          fVar12 = fVar8;
        }
        if (fVar12 <= 0.0) {
          fVar12 = 0.0;
        }
        local_88._s_0.X = (double)(ulonglong)(uint)(fVar12 * fVar7);
        *(undefined8 *)((longlong)this + 8) = local_88._s_0.X;
        *(undefined4 *)((longlong)this + 0x10) = uVar6;
        TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
        ::Generate(this,iVar3,iVar9,fVar13,fVar11);
        lVar10 = lVar10 + 1;
      } while (lVar10 < lVar1);
    }
    iVar9 = piVar5[lVar1];
    fVar12 = **(float **)((longlong)this + 0x88);
    if (fVar8 <= **(float **)((longlong)this + 0x88)) {
      fVar12 = fVar8;
    }
    local_88._s_0.X = (double)((ulonglong)local_88._s_0.X & 0xffffffff);
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    *(ulonglong *)((longlong)this + 8) = (ulonglong)(uint)(fVar12 * fVar7);
    *(undefined4 *)((longlong)this + 0x10) = uVar6;
  }
  TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
  ::Generate(this,iVar9,iVar2,fVar13,fVar11);
  return;
}

// Execute @ 14b186970

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
::Execute(void *this)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  TVector2<double>_u_0 local_88;
  TVector2<double>_u_0 local_78 [7];
  
  fVar11 = *(float *)((longlong)this + 0x18);
  local_78[0]._s_0.X = ___xmm_3ff00000000000000000000000000000;
  local_78[0]._s_0.Y = _UNK_15061cbc8;
  fVar13 = **(float **)((longlong)this + 0x48);
  if (fVar11 <= **(float **)((longlong)this + 0x48)) {
    fVar13 = fVar11;
  }
  if (fVar13 <= (float)((uint)fVar11 ^ __xmm_80000000800000008000000080000000)) {
    fVar13 = (float)((uint)fVar11 ^ __xmm_80000000800000008000000080000000);
  }
  local_88._s_0.X = ___xmm_3f1a36e2e00000003ff0000000000000;
  local_88._s_0.Y = _UNK_152389c48;
  fVar11 = Audio::GetLogFrequencyClamped
                     (**(float **)((longlong)this + 0xa8),(TVector2<double> *)&local_78[0]._s_0,
                      (TVector2<double> *)&local_88._s_0);
  iVar9 = *(int *)(*(undefined8 **)((longlong)this + 0xe8) + 1);
  if (0 < iVar9) {
    memset((void *)**(undefined8 **)((longlong)this + 0xe8),0,(longlong)iVar9 << 2);
  }
  puVar4 = *(undefined8 **)((longlong)this + 0x68);
  iVar9 = *(int *)((longlong)puVar4 + 0x1c);
  iVar2 = *(int *)((longlong)puVar4 + 0x14);
  if (iVar9 < 1) {
    iVar9 = 0;
  }
  else {
    piVar5 = (int *)*puVar4;
    if (0 < *piVar5) {
      TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
      ::Generate(this,0,*piVar5,fVar13,fVar11);
    }
    fVar8 = __real_43b40000;
    fVar7 = __real_3b360b61;
    uVar6 = __real_bf800000;
    lVar1 = (longlong)iVar9 + -1;
    if (0 < lVar1) {
      lVar10 = 0;
      do {
        iVar9 = piVar5[lVar10 + 1];
        iVar3 = piVar5[lVar10];
        fVar12 = **(float **)((longlong)this + 0x88);
        if (fVar8 <= **(float **)((longlong)this + 0x88)) {
          fVar12 = fVar8;
        }
        if (fVar12 <= 0.0) {
          fVar12 = 0.0;
        }
        local_88._s_0.X = (double)(ulonglong)(uint)(fVar12 * fVar7);
        *(undefined8 *)((longlong)this + 8) = local_88._s_0.X;
        *(undefined4 *)((longlong)this + 0x10) = uVar6;
        TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
        ::Generate(this,iVar3,iVar9,fVar13,fVar11);
        lVar10 = lVar10 + 1;
      } while (lVar10 < lVar1);
    }
    iVar9 = piVar5[lVar1];
    fVar12 = **(float **)((longlong)this + 0x88);
    if (fVar8 <= **(float **)((longlong)this + 0x88)) {
      fVar12 = fVar8;
    }
    local_88._s_0.X = (double)((ulonglong)local_88._s_0.X & 0xffffffff);
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    *(ulonglong *)((longlong)this + 8) = (ulonglong)(uint)(fVar12 * fVar7);
    *(undefined4 *)((longlong)this + 0x10) = uVar6;
  }
  TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
  ::Generate(this,iVar9,iVar2,fVar13,fVar11);
  return;
}

// Execute @ 14b186b90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
::Execute(void *this)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  TVector2<double>_u_0 local_88;
  TVector2<double>_u_0 local_78 [7];
  
  fVar11 = *(float *)((longlong)this + 0x18);
  local_78[0]._s_0.X = ___xmm_3ff00000000000000000000000000000;
  local_78[0]._s_0.Y = _UNK_15061cbc8;
  fVar13 = **(float **)((longlong)this + 0x48);
  if (fVar11 <= **(float **)((longlong)this + 0x48)) {
    fVar13 = fVar11;
  }
  if (fVar13 <= (float)((uint)fVar11 ^ __xmm_80000000800000008000000080000000)) {
    fVar13 = (float)((uint)fVar11 ^ __xmm_80000000800000008000000080000000);
  }
  local_88._s_0.X = ___xmm_3f1a36e2e00000003ff0000000000000;
  local_88._s_0.Y = _UNK_152389c48;
  fVar11 = Audio::GetLogFrequencyClamped
                     (**(float **)((longlong)this + 0xa8),(TVector2<double> *)&local_78[0]._s_0,
                      (TVector2<double> *)&local_88._s_0);
  iVar9 = *(int *)(*(undefined8 **)((longlong)this + 0xe8) + 1);
  if (0 < iVar9) {
    memset((void *)**(undefined8 **)((longlong)this + 0xe8),0,(longlong)iVar9 << 2);
  }
  puVar4 = *(undefined8 **)((longlong)this + 0x68);
  iVar9 = *(int *)((longlong)puVar4 + 0x1c);
  iVar2 = *(int *)((longlong)puVar4 + 0x14);
  if (iVar9 < 1) {
    iVar9 = 0;
  }
  else {
    piVar5 = (int *)*puVar4;
    if (0 < *piVar5) {
      TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
      ::Generate(this,0,*piVar5,fVar13,fVar11);
    }
    fVar8 = __real_43b40000;
    fVar7 = __real_3b360b61;
    uVar6 = __real_bf800000;
    lVar1 = (longlong)iVar9 + -1;
    if (0 < lVar1) {
      lVar10 = 0;
      do {
        iVar9 = piVar5[lVar10 + 1];
        iVar3 = piVar5[lVar10];
        fVar12 = **(float **)((longlong)this + 0x88);
        if (fVar8 <= **(float **)((longlong)this + 0x88)) {
          fVar12 = fVar8;
        }
        if (fVar12 <= 0.0) {
          fVar12 = 0.0;
        }
        local_88._s_0.X = (double)(ulonglong)(uint)(fVar12 * fVar7);
        *(undefined8 *)((longlong)this + 8) = local_88._s_0.X;
        *(undefined4 *)((longlong)this + 0x10) = uVar6;
        TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
        ::Generate(this,iVar3,iVar9,fVar13,fVar11);
        lVar10 = lVar10 + 1;
      } while (lVar10 < lVar1);
    }
    iVar9 = piVar5[lVar1];
    fVar12 = **(float **)((longlong)this + 0x88);
    if (fVar8 <= **(float **)((longlong)this + 0x88)) {
      fVar12 = fVar8;
    }
    local_88._s_0.X = (double)((ulonglong)local_88._s_0.X & 0xffffffff);
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    *(ulonglong *)((longlong)this + 8) = (ulonglong)(uint)(fVar12 * fVar7);
    *(undefined4 *)((longlong)this + 0x10) = uVar6;
  }
  TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
  ::Generate(this,iVar9,iVar2,fVar13,fVar11);
  return;
}

// Execute @ 14b186db0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>
::Execute(TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>
          *this)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int *piVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  TVector2<double>_u_0 local_88;
  TVector2<double>_u_0 local_78 [7];
  
  fVar12 = this->Nyquist;
  local_78[0]._s_0.X = ___xmm_3ff00000000000000000000000000000;
  local_78[0]._s_0.Y = _UNK_15061cbc8;
  fVar14 = **(float **)&(this->BaseFrequency).field_0x8;
  if (fVar12 <= fVar14) {
    fVar14 = fVar12;
  }
  if (fVar14 <= (float)((uint)fVar12 ^ __xmm_80000000800000008000000080000000)) {
    fVar14 = (float)((uint)fVar12 ^ __xmm_80000000800000008000000080000000);
  }
  local_88._s_0.X = ___xmm_3f1a36e2e00000003ff0000000000000;
  local_88._s_0.Y = _UNK_152389c48;
  fVar12 = Audio::GetLogFrequencyClamped
                     (**(float **)&(this->GlideFactor).field_0x8,
                      (TVector2<double> *)&local_78[0]._s_0,(TVector2<double> *)&local_88._s_0);
  puVar4 = *(undefined8 **)&(this->AudioBuffer).field_0x8;
  iVar10 = *(int *)(puVar4 + 1);
  if (0 < iVar10) {
    memset((void *)*puVar4,0,(longlong)iVar10 << 2);
  }
  puVar4 = *(undefined8 **)&(this->PhaseReset).field_0x8;
  iVar10 = *(int *)((longlong)puVar4 + 0x1c);
  iVar2 = *(int *)((longlong)puVar4 + 0x14);
  if (iVar10 < 1) {
    iVar10 = 0;
  }
  else {
    piVar5 = (int *)*puVar4;
    if (0 < *piVar5) {
      FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>
      ::Generate((FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>
                  *)this,0,*piVar5,fVar14,fVar12);
    }
    fVar9 = __real_43b40000;
    fVar8 = __real_3b360b61;
    fVar7 = __real_bf800000;
    lVar1 = (longlong)iVar10 + -1;
    if (0 < lVar1) {
      lVar11 = 0;
      do {
        iVar10 = piVar5[lVar11 + 1];
        iVar3 = piVar5[lVar11];
        fVar13 = **(float **)&(this->PhaseOffset).field_0x8;
        if (fVar9 <= fVar13) {
          fVar13 = fVar9;
        }
        if (fVar13 <= 0.0) {
          fVar13 = 0.0;
        }
        local_88._s_0.X = (double)(ulonglong)(uint)(fVar13 * fVar8);
        *(undefined8 *)&this->Generator = local_88._s_0.X;
        (this->Generator).CurrentFreq = fVar7;
        FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>
        ::Generate((FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>
                    *)this,iVar3,iVar10,fVar14,fVar12);
        lVar11 = lVar11 + 1;
      } while (lVar11 < lVar1);
    }
    iVar10 = piVar5[lVar1];
    fVar13 = **(float **)&(this->PhaseOffset).field_0x8;
    if (fVar9 <= fVar13) {
      fVar13 = fVar9;
    }
    local_88._s_0.X = (double)((ulonglong)local_88._s_0.X & 0xffffffff);
    if (fVar13 <= 0.0) {
      fVar13 = 0.0;
    }
    uVar6 = (ulonglong)(uint)(fVar13 * fVar8);
    (this->Generator).Phase = (float)(int)uVar6;
    (this->Generator).Osc = (FSquareGenerator)(char)(uVar6 >> 0x20);
    (this->Generator).Wrap = (FWrapPhase)(char)(uVar6 >> 0x28);
    *(short *)&(this->Generator).field_0x6 = (short)(uVar6 >> 0x30);
    (this->Generator).CurrentFreq = fVar7;
  }
  FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>
  ::Generate((FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>
              *)this,iVar10,iVar2,fVar14,fVar12);
  return;
}

// Execute @ 14b186fd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
::Execute(TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
          *this)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int *piVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  TVector2<double>_u_0 local_88;
  TVector2<double>_u_0 local_78 [7];
  
  fVar12 = this->Nyquist;
  local_78[0]._s_0.X = ___xmm_3ff00000000000000000000000000000;
  local_78[0]._s_0.Y = _UNK_15061cbc8;
  fVar14 = **(float **)&(this->BaseFrequency).field_0x8;
  if (fVar12 <= fVar14) {
    fVar14 = fVar12;
  }
  if (fVar14 <= (float)((uint)fVar12 ^ __xmm_80000000800000008000000080000000)) {
    fVar14 = (float)((uint)fVar12 ^ __xmm_80000000800000008000000080000000);
  }
  local_88._s_0.X = ___xmm_3f1a36e2e00000003ff0000000000000;
  local_88._s_0.Y = _UNK_152389c48;
  fVar12 = Audio::GetLogFrequencyClamped
                     (**(float **)&(this->GlideFactor).field_0x8,
                      (TVector2<double> *)&local_78[0]._s_0,(TVector2<double> *)&local_88._s_0);
  puVar4 = *(undefined8 **)&(this->AudioBuffer).field_0x8;
  iVar10 = *(int *)(puVar4 + 1);
  if (0 < iVar10) {
    memset((void *)*puVar4,0,(longlong)iVar10 << 2);
  }
  puVar4 = *(undefined8 **)&(this->PhaseReset).field_0x8;
  iVar10 = *(int *)((longlong)puVar4 + 0x1c);
  iVar2 = *(int *)((longlong)puVar4 + 0x14);
  if (iVar10 < 1) {
    iVar10 = 0;
  }
  else {
    piVar5 = (int *)*puVar4;
    if (0 < *piVar5) {
      FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>
      ::Generate((FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>
                  *)this,0,*piVar5,fVar14,fVar12);
    }
    fVar9 = __real_43b40000;
    fVar8 = __real_3b360b61;
    fVar7 = __real_bf800000;
    lVar1 = (longlong)iVar10 + -1;
    if (0 < lVar1) {
      lVar11 = 0;
      do {
        iVar10 = piVar5[lVar11 + 1];
        iVar3 = piVar5[lVar11];
        fVar13 = **(float **)&(this->PhaseOffset).field_0x8;
        if (fVar9 <= fVar13) {
          fVar13 = fVar9;
        }
        if (fVar13 <= 0.0) {
          fVar13 = 0.0;
        }
        local_88._s_0.X = (double)(ulonglong)(uint)(fVar13 * fVar8);
        *(undefined8 *)&this->Generator = local_88._s_0.X;
        (this->Generator).CurrentFreq = fVar7;
        FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>
        ::Generate((FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>
                    *)this,iVar3,iVar10,fVar14,fVar12);
        lVar11 = lVar11 + 1;
      } while (lVar11 < lVar1);
    }
    iVar10 = piVar5[lVar1];
    fVar13 = **(float **)&(this->PhaseOffset).field_0x8;
    if (fVar9 <= fVar13) {
      fVar13 = fVar9;
    }
    local_88._s_0.X = (double)((ulonglong)local_88._s_0.X & 0xffffffff);
    if (fVar13 <= 0.0) {
      fVar13 = 0.0;
    }
    uVar6 = (ulonglong)(uint)(fVar13 * fVar8);
    (this->Generator).Phase = (float)(int)uVar6;
    (this->Generator).Osc = (FSquarePolysmoothGenerator)(char)(uVar6 >> 0x20);
    (this->Generator).Wrap = (FWrapPhase)(char)(uVar6 >> 0x28);
    *(short *)&(this->Generator).field_0x6 = (short)(uVar6 >> 0x30);
    (this->Generator).CurrentFreq = fVar7;
  }
  FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>
  ::Generate((FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>
              *)this,iVar10,iVar2,fVar14,fVar12);
  return;
}

// Execute @ 14b1871f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>_>
::Execute(void *this)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  TVector2<double>_u_0 local_88;
  TVector2<double>_u_0 local_78 [7];
  
  fVar11 = *(float *)((longlong)this + 0x18);
  local_78[0]._s_0.X = ___xmm_3ff00000000000000000000000000000;
  local_78[0]._s_0.Y = _UNK_15061cbc8;
  fVar13 = **(float **)((longlong)this + 0x48);
  if (fVar11 <= **(float **)((longlong)this + 0x48)) {
    fVar13 = fVar11;
  }
  if (fVar13 <= (float)((uint)fVar11 ^ __xmm_80000000800000008000000080000000)) {
    fVar13 = (float)((uint)fVar11 ^ __xmm_80000000800000008000000080000000);
  }
  local_88._s_0.X = ___xmm_3f1a36e2e00000003ff0000000000000;
  local_88._s_0.Y = _UNK_152389c48;
  fVar11 = Audio::GetLogFrequencyClamped
                     (**(float **)((longlong)this + 0xa8),(TVector2<double> *)&local_78[0]._s_0,
                      (TVector2<double> *)&local_88._s_0);
  iVar9 = *(int *)(*(undefined8 **)((longlong)this + 0xe8) + 1);
  if (0 < iVar9) {
    memset((void *)**(undefined8 **)((longlong)this + 0xe8),0,(longlong)iVar9 << 2);
  }
  puVar4 = *(undefined8 **)((longlong)this + 0x68);
  iVar9 = *(int *)((longlong)puVar4 + 0x1c);
  iVar2 = *(int *)((longlong)puVar4 + 0x14);
  if (iVar9 < 1) {
    iVar9 = 0;
  }
  else {
    piVar5 = (int *)*puVar4;
    if (0 < *piVar5) {
      TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
      ::Generate(this,0,*piVar5,fVar13,fVar11);
    }
    fVar8 = __real_43b40000;
    fVar7 = __real_3b360b61;
    uVar6 = __real_bf800000;
    lVar1 = (longlong)iVar9 + -1;
    if (0 < lVar1) {
      lVar10 = 0;
      do {
        iVar9 = piVar5[lVar10 + 1];
        iVar3 = piVar5[lVar10];
        fVar12 = **(float **)((longlong)this + 0x88);
        if (fVar8 <= **(float **)((longlong)this + 0x88)) {
          fVar12 = fVar8;
        }
        if (fVar12 <= 0.0) {
          fVar12 = 0.0;
        }
        local_88._s_0.X = (double)(ulonglong)(uint)(fVar12 * fVar7);
        *(undefined8 *)((longlong)this + 8) = local_88._s_0.X;
        *(undefined4 *)((longlong)this + 0x10) = uVar6;
        TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
        ::Generate(this,iVar3,iVar9,fVar13,fVar11);
        lVar10 = lVar10 + 1;
      } while (lVar10 < lVar1);
    }
    iVar9 = piVar5[lVar1];
    fVar12 = **(float **)((longlong)this + 0x88);
    if (fVar8 <= **(float **)((longlong)this + 0x88)) {
      fVar12 = fVar8;
    }
    local_88._s_0.X = (double)((ulonglong)local_88._s_0.X & 0xffffffff);
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    *(ulonglong *)((longlong)this + 8) = (ulonglong)(uint)(fVar12 * fVar7);
    *(undefined4 *)((longlong)this + 0x10) = uVar6;
  }
  TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
  ::Generate(this,iVar9,iVar2,fVar13,fVar11);
  return;
}

// Execute @ 14b187410

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
::Execute(void *this)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  TVector2<double>_u_0 local_88;
  TVector2<double>_u_0 local_78 [7];
  
  fVar11 = *(float *)((longlong)this + 0x18);
  local_78[0]._s_0.X = ___xmm_3ff00000000000000000000000000000;
  local_78[0]._s_0.Y = _UNK_15061cbc8;
  fVar13 = **(float **)((longlong)this + 0x48);
  if (fVar11 <= **(float **)((longlong)this + 0x48)) {
    fVar13 = fVar11;
  }
  if (fVar13 <= (float)((uint)fVar11 ^ __xmm_80000000800000008000000080000000)) {
    fVar13 = (float)((uint)fVar11 ^ __xmm_80000000800000008000000080000000);
  }
  local_88._s_0.X = ___xmm_3f1a36e2e00000003ff0000000000000;
  local_88._s_0.Y = _UNK_152389c48;
  fVar11 = Audio::GetLogFrequencyClamped
                     (**(float **)((longlong)this + 0xa8),(TVector2<double> *)&local_78[0]._s_0,
                      (TVector2<double> *)&local_88._s_0);
  iVar9 = *(int *)(*(undefined8 **)((longlong)this + 0xe8) + 1);
  if (0 < iVar9) {
    memset((void *)**(undefined8 **)((longlong)this + 0xe8),0,(longlong)iVar9 << 2);
  }
  puVar4 = *(undefined8 **)((longlong)this + 0x68);
  iVar9 = *(int *)((longlong)puVar4 + 0x1c);
  iVar2 = *(int *)((longlong)puVar4 + 0x14);
  if (iVar9 < 1) {
    iVar9 = 0;
  }
  else {
    piVar5 = (int *)*puVar4;
    if (0 < *piVar5) {
      TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
      ::Generate(this,0,*piVar5,fVar13,fVar11);
    }
    fVar8 = __real_43b40000;
    fVar7 = __real_3b360b61;
    uVar6 = __real_bf800000;
    lVar1 = (longlong)iVar9 + -1;
    if (0 < lVar1) {
      lVar10 = 0;
      do {
        iVar9 = piVar5[lVar10 + 1];
        iVar3 = piVar5[lVar10];
        fVar12 = **(float **)((longlong)this + 0x88);
        if (fVar8 <= **(float **)((longlong)this + 0x88)) {
          fVar12 = fVar8;
        }
        if (fVar12 <= 0.0) {
          fVar12 = 0.0;
        }
        local_88._s_0.X = (double)(ulonglong)(uint)(fVar12 * fVar7);
        *(undefined8 *)((longlong)this + 8) = local_88._s_0.X;
        *(undefined4 *)((longlong)this + 0x10) = uVar6;
        TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
        ::Generate(this,iVar3,iVar9,fVar13,fVar11);
        lVar10 = lVar10 + 1;
      } while (lVar10 < lVar1);
    }
    iVar9 = piVar5[lVar1];
    fVar12 = **(float **)((longlong)this + 0x88);
    if (fVar8 <= **(float **)((longlong)this + 0x88)) {
      fVar12 = fVar8;
    }
    local_88._s_0.X = (double)((ulonglong)local_88._s_0.X & 0xffffffff);
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    *(ulonglong *)((longlong)this + 8) = (ulonglong)(uint)(fVar12 * fVar7);
    *(undefined4 *)((longlong)this + 0x10) = uVar6;
  }
  TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
  ::Generate(this,iVar9,iVar2,fVar13,fVar11);
  return;
}

// Execute @ 14b187630

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>
::Execute(void *this)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  TVector2<double>_u_0 local_88;
  TVector2<double>_u_0 local_78 [7];
  
  fVar11 = *(float *)((longlong)this + 0x18);
  local_78[0]._s_0.X = ___xmm_3ff00000000000000000000000000000;
  local_78[0]._s_0.Y = _UNK_15061cbc8;
  fVar13 = **(float **)((longlong)this + 0x48);
  if (fVar11 <= **(float **)((longlong)this + 0x48)) {
    fVar13 = fVar11;
  }
  if (fVar13 <= (float)((uint)fVar11 ^ __xmm_80000000800000008000000080000000)) {
    fVar13 = (float)((uint)fVar11 ^ __xmm_80000000800000008000000080000000);
  }
  local_88._s_0.X = ___xmm_3f1a36e2e00000003ff0000000000000;
  local_88._s_0.Y = _UNK_152389c48;
  fVar11 = Audio::GetLogFrequencyClamped
                     (**(float **)((longlong)this + 0xa8),(TVector2<double> *)&local_78[0]._s_0,
                      (TVector2<double> *)&local_88._s_0);
  iVar9 = *(int *)(*(undefined8 **)((longlong)this + 0xe8) + 1);
  if (0 < iVar9) {
    memset((void *)**(undefined8 **)((longlong)this + 0xe8),0,(longlong)iVar9 << 2);
  }
  puVar4 = *(undefined8 **)((longlong)this + 0x68);
  iVar9 = *(int *)((longlong)puVar4 + 0x1c);
  iVar2 = *(int *)((longlong)puVar4 + 0x14);
  if (iVar9 < 1) {
    iVar9 = 0;
  }
  else {
    piVar5 = (int *)*puVar4;
    if (0 < *piVar5) {
      TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
      ::Generate(this,0,*piVar5,fVar13,fVar11);
    }
    fVar8 = __real_43b40000;
    fVar7 = __real_3b360b61;
    uVar6 = __real_bf800000;
    lVar1 = (longlong)iVar9 + -1;
    if (0 < lVar1) {
      lVar10 = 0;
      do {
        iVar9 = piVar5[lVar10 + 1];
        iVar3 = piVar5[lVar10];
        fVar12 = **(float **)((longlong)this + 0x88);
        if (fVar8 <= **(float **)((longlong)this + 0x88)) {
          fVar12 = fVar8;
        }
        if (fVar12 <= 0.0) {
          fVar12 = 0.0;
        }
        local_88._s_0.X = (double)(ulonglong)(uint)(fVar12 * fVar7);
        *(undefined8 *)((longlong)this + 8) = local_88._s_0.X;
        *(undefined4 *)((longlong)this + 0x10) = uVar6;
        TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
        ::Generate(this,iVar3,iVar9,fVar13,fVar11);
        lVar10 = lVar10 + 1;
      } while (lVar10 < lVar1);
    }
    iVar9 = piVar5[lVar1];
    fVar12 = **(float **)((longlong)this + 0x88);
    if (fVar8 <= **(float **)((longlong)this + 0x88)) {
      fVar12 = fVar8;
    }
    local_88._s_0.X = (double)((ulonglong)local_88._s_0.X & 0xffffffff);
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    *(ulonglong *)((longlong)this + 8) = (ulonglong)(uint)(fVar12 * fVar7);
    *(undefined4 *)((longlong)this + 0x10) = uVar6;
  }
  TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
  ::Generate(this,iVar9,iVar2,fVar13,fVar11);
  return;
}

// Execute @ 14b187850

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>
::Execute(void *this)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  TVector2<double>_u_0 local_88;
  TVector2<double>_u_0 local_78 [7];
  
  fVar11 = *(float *)((longlong)this + 0x18);
  local_78[0]._s_0.X = ___xmm_3ff00000000000000000000000000000;
  local_78[0]._s_0.Y = _UNK_15061cbc8;
  fVar13 = **(float **)((longlong)this + 0x48);
  if (fVar11 <= **(float **)((longlong)this + 0x48)) {
    fVar13 = fVar11;
  }
  if (fVar13 <= (float)((uint)fVar11 ^ __xmm_80000000800000008000000080000000)) {
    fVar13 = (float)((uint)fVar11 ^ __xmm_80000000800000008000000080000000);
  }
  local_88._s_0.X = ___xmm_3f1a36e2e00000003ff0000000000000;
  local_88._s_0.Y = _UNK_152389c48;
  fVar11 = Audio::GetLogFrequencyClamped
                     (**(float **)((longlong)this + 0xa8),(TVector2<double> *)&local_78[0]._s_0,
                      (TVector2<double> *)&local_88._s_0);
  iVar9 = *(int *)(*(undefined8 **)((longlong)this + 0xe8) + 1);
  if (0 < iVar9) {
    memset((void *)**(undefined8 **)((longlong)this + 0xe8),0,(longlong)iVar9 << 2);
  }
  puVar4 = *(undefined8 **)((longlong)this + 0x68);
  iVar9 = *(int *)((longlong)puVar4 + 0x1c);
  iVar2 = *(int *)((longlong)puVar4 + 0x14);
  if (iVar9 < 1) {
    iVar9 = 0;
  }
  else {
    piVar5 = (int *)*puVar4;
    if (0 < *piVar5) {
      TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
      ::Generate(this,0,*piVar5,fVar13,fVar11);
    }
    fVar8 = __real_43b40000;
    fVar7 = __real_3b360b61;
    uVar6 = __real_bf800000;
    lVar1 = (longlong)iVar9 + -1;
    if (0 < lVar1) {
      lVar10 = 0;
      do {
        iVar9 = piVar5[lVar10 + 1];
        iVar3 = piVar5[lVar10];
        fVar12 = **(float **)((longlong)this + 0x88);
        if (fVar8 <= **(float **)((longlong)this + 0x88)) {
          fVar12 = fVar8;
        }
        if (fVar12 <= 0.0) {
          fVar12 = 0.0;
        }
        local_88._s_0.X = (double)(ulonglong)(uint)(fVar12 * fVar7);
        *(undefined8 *)((longlong)this + 8) = local_88._s_0.X;
        *(undefined4 *)((longlong)this + 0x10) = uVar6;
        TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
        ::Generate(this,iVar3,iVar9,fVar13,fVar11);
        lVar10 = lVar10 + 1;
      } while (lVar10 < lVar1);
    }
    iVar9 = piVar5[lVar1];
    fVar12 = **(float **)((longlong)this + 0x88);
    if (fVar8 <= **(float **)((longlong)this + 0x88)) {
      fVar12 = fVar8;
    }
    local_88._s_0.X = (double)((ulonglong)local_88._s_0.X & 0xffffffff);
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    *(ulonglong *)((longlong)this + 8) = (ulonglong)(uint)(fVar12 * fVar7);
    *(undefined4 *)((longlong)this + 0x10) = uVar6;
  }
  TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
  ::Generate(this,iVar9,iVar2,fVar13,fVar11);
  return;
}

// Execute @ 14b187a70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
::Execute(void *this)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  TVector2<double>_u_0 local_88;
  TVector2<double>_u_0 local_78 [7];
  
  fVar11 = *(float *)((longlong)this + 0x18);
  local_78[0]._s_0.X = ___xmm_3ff00000000000000000000000000000;
  local_78[0]._s_0.Y = _UNK_15061cbc8;
  fVar13 = **(float **)((longlong)this + 0x48);
  if (fVar11 <= **(float **)((longlong)this + 0x48)) {
    fVar13 = fVar11;
  }
  if (fVar13 <= (float)((uint)fVar11 ^ __xmm_80000000800000008000000080000000)) {
    fVar13 = (float)((uint)fVar11 ^ __xmm_80000000800000008000000080000000);
  }
  local_88._s_0.X = ___xmm_3f1a36e2e00000003ff0000000000000;
  local_88._s_0.Y = _UNK_152389c48;
  fVar11 = Audio::GetLogFrequencyClamped
                     (**(float **)((longlong)this + 0xa8),(TVector2<double> *)&local_78[0]._s_0,
                      (TVector2<double> *)&local_88._s_0);
  iVar9 = *(int *)(*(undefined8 **)((longlong)this + 0xe8) + 1);
  if (0 < iVar9) {
    memset((void *)**(undefined8 **)((longlong)this + 0xe8),0,(longlong)iVar9 << 2);
  }
  puVar4 = *(undefined8 **)((longlong)this + 0x68);
  iVar9 = *(int *)((longlong)puVar4 + 0x1c);
  iVar2 = *(int *)((longlong)puVar4 + 0x14);
  if (iVar9 < 1) {
    iVar9 = 0;
  }
  else {
    piVar5 = (int *)*puVar4;
    if (0 < *piVar5) {
      TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
      ::Generate(this,0,*piVar5,fVar13,fVar11);
    }
    fVar8 = __real_43b40000;
    fVar7 = __real_3b360b61;
    uVar6 = __real_bf800000;
    lVar1 = (longlong)iVar9 + -1;
    if (0 < lVar1) {
      lVar10 = 0;
      do {
        iVar9 = piVar5[lVar10 + 1];
        iVar3 = piVar5[lVar10];
        fVar12 = **(float **)((longlong)this + 0x88);
        if (fVar8 <= **(float **)((longlong)this + 0x88)) {
          fVar12 = fVar8;
        }
        if (fVar12 <= 0.0) {
          fVar12 = 0.0;
        }
        local_88._s_0.X = (double)(ulonglong)(uint)(fVar12 * fVar7);
        *(undefined8 *)((longlong)this + 8) = local_88._s_0.X;
        *(undefined4 *)((longlong)this + 0x10) = uVar6;
        TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
        ::Generate(this,iVar3,iVar9,fVar13,fVar11);
        lVar10 = lVar10 + 1;
      } while (lVar10 < lVar1);
    }
    iVar9 = piVar5[lVar1];
    fVar12 = **(float **)((longlong)this + 0x88);
    if (fVar8 <= **(float **)((longlong)this + 0x88)) {
      fVar12 = fVar8;
    }
    local_88._s_0.X = (double)((ulonglong)local_88._s_0.X & 0xffffffff);
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    *(ulonglong *)((longlong)this + 8) = (ulonglong)(uint)(fVar12 * fVar7);
    *(undefined4 *)((longlong)this + 0x10) = uVar6;
  }
  TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
  ::Generate(this,iVar9,iVar2,fVar13,fVar11);
  return;
}

// Execute @ 14b187c90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
::Execute(void *this)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  TVector2<double>_u_0 local_88;
  TVector2<double>_u_0 local_78 [7];
  
  fVar11 = *(float *)((longlong)this + 0x18);
  local_78[0]._s_0.X = ___xmm_3ff00000000000000000000000000000;
  local_78[0]._s_0.Y = _UNK_15061cbc8;
  fVar13 = **(float **)((longlong)this + 0x48);
  if (fVar11 <= **(float **)((longlong)this + 0x48)) {
    fVar13 = fVar11;
  }
  if (fVar13 <= (float)((uint)fVar11 ^ __xmm_80000000800000008000000080000000)) {
    fVar13 = (float)((uint)fVar11 ^ __xmm_80000000800000008000000080000000);
  }
  local_88._s_0.X = ___xmm_3f1a36e2e00000003ff0000000000000;
  local_88._s_0.Y = _UNK_152389c48;
  fVar11 = Audio::GetLogFrequencyClamped
                     (**(float **)((longlong)this + 0xa8),(TVector2<double> *)&local_78[0]._s_0,
                      (TVector2<double> *)&local_88._s_0);
  iVar9 = *(int *)(*(undefined8 **)((longlong)this + 0xe8) + 1);
  if (0 < iVar9) {
    memset((void *)**(undefined8 **)((longlong)this + 0xe8),0,(longlong)iVar9 << 2);
  }
  puVar4 = *(undefined8 **)((longlong)this + 0x68);
  iVar9 = *(int *)((longlong)puVar4 + 0x1c);
  iVar2 = *(int *)((longlong)puVar4 + 0x14);
  if (iVar9 < 1) {
    iVar9 = 0;
  }
  else {
    piVar5 = (int *)*puVar4;
    if (0 < *piVar5) {
      TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
      ::Generate(this,0,*piVar5,fVar13,fVar11);
    }
    fVar8 = __real_43b40000;
    fVar7 = __real_3b360b61;
    uVar6 = __real_bf800000;
    lVar1 = (longlong)iVar9 + -1;
    if (0 < lVar1) {
      lVar10 = 0;
      do {
        iVar9 = piVar5[lVar10 + 1];
        iVar3 = piVar5[lVar10];
        fVar12 = **(float **)((longlong)this + 0x88);
        if (fVar8 <= **(float **)((longlong)this + 0x88)) {
          fVar12 = fVar8;
        }
        if (fVar12 <= 0.0) {
          fVar12 = 0.0;
        }
        local_88._s_0.X = (double)(ulonglong)(uint)(fVar12 * fVar7);
        *(undefined8 *)((longlong)this + 8) = local_88._s_0.X;
        *(undefined4 *)((longlong)this + 0x10) = uVar6;
        TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
        ::Generate(this,iVar3,iVar9,fVar13,fVar11);
        lVar10 = lVar10 + 1;
      } while (lVar10 < lVar1);
    }
    iVar9 = piVar5[lVar1];
    fVar12 = **(float **)((longlong)this + 0x88);
    if (fVar8 <= **(float **)((longlong)this + 0x88)) {
      fVar12 = fVar8;
    }
    local_88._s_0.X = (double)((ulonglong)local_88._s_0.X & 0xffffffff);
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    *(ulonglong *)((longlong)this + 8) = (ulonglong)(uint)(fVar12 * fVar7);
    *(undefined4 *)((longlong)this + 0x10) = uVar6;
  }
  TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
  ::Generate(this,iVar9,iVar2,fVar13,fVar11);
  return;
}

// Execute @ 14b187eb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>
::Execute(TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>
          *this)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int *piVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  TVector2<double>_u_0 local_88;
  TVector2<double>_u_0 local_78 [7];
  
  fVar12 = this->Nyquist;
  local_78[0]._s_0.X = ___xmm_3ff00000000000000000000000000000;
  local_78[0]._s_0.Y = _UNK_15061cbc8;
  fVar14 = **(float **)&(this->BaseFrequency).field_0x8;
  if (fVar12 <= fVar14) {
    fVar14 = fVar12;
  }
  if (fVar14 <= (float)((uint)fVar12 ^ __xmm_80000000800000008000000080000000)) {
    fVar14 = (float)((uint)fVar12 ^ __xmm_80000000800000008000000080000000);
  }
  local_88._s_0.X = ___xmm_3f1a36e2e00000003ff0000000000000;
  local_88._s_0.Y = _UNK_152389c48;
  fVar12 = Audio::GetLogFrequencyClamped
                     (**(float **)&(this->GlideFactor).field_0x8,
                      (TVector2<double> *)&local_78[0]._s_0,(TVector2<double> *)&local_88._s_0);
  puVar4 = *(undefined8 **)&(this->AudioBuffer).field_0x8;
  iVar10 = *(int *)(puVar4 + 1);
  if (0 < iVar10) {
    memset((void *)*puVar4,0,(longlong)iVar10 << 2);
  }
  puVar4 = *(undefined8 **)&(this->PhaseReset).field_0x8;
  iVar10 = *(int *)((longlong)puVar4 + 0x1c);
  iVar2 = *(int *)((longlong)puVar4 + 0x14);
  if (iVar10 < 1) {
    iVar10 = 0;
  }
  else {
    piVar5 = (int *)*puVar4;
    if (0 < *piVar5) {
      FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>
      ::Generate((FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>
                  *)this,0,*piVar5,fVar14,fVar12);
    }
    fVar9 = __real_43b40000;
    fVar8 = __real_3b360b61;
    fVar7 = __real_bf800000;
    lVar1 = (longlong)iVar10 + -1;
    if (0 < lVar1) {
      lVar11 = 0;
      do {
        iVar10 = piVar5[lVar11 + 1];
        iVar3 = piVar5[lVar11];
        fVar13 = **(float **)&(this->PhaseOffset).field_0x8;
        if (fVar9 <= fVar13) {
          fVar13 = fVar9;
        }
        if (fVar13 <= 0.0) {
          fVar13 = 0.0;
        }
        local_88._s_0.X = (double)(ulonglong)(uint)(fVar13 * fVar8);
        *(undefined8 *)&this->Generator = local_88._s_0.X;
        (this->Generator).CurrentFreq = fVar7;
        FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>
        ::Generate((FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>
                    *)this,iVar3,iVar10,fVar14,fVar12);
        lVar11 = lVar11 + 1;
      } while (lVar11 < lVar1);
    }
    iVar10 = piVar5[lVar1];
    fVar13 = **(float **)&(this->PhaseOffset).field_0x8;
    if (fVar9 <= fVar13) {
      fVar13 = fVar9;
    }
    local_88._s_0.X = (double)((ulonglong)local_88._s_0.X & 0xffffffff);
    if (fVar13 <= 0.0) {
      fVar13 = 0.0;
    }
    uVar6 = (ulonglong)(uint)(fVar13 * fVar8);
    (this->Generator).Phase = (float)(int)uVar6;
    (this->Generator).Osc = (FSquareGenerator)(char)(uVar6 >> 0x20);
    (this->Generator).Wrap = (FWrapPhase)(char)(uVar6 >> 0x28);
    *(short *)&(this->Generator).field_0x6 = (short)(uVar6 >> 0x30);
    (this->Generator).CurrentFreq = fVar7;
  }
  FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>
  ::Generate((FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>
              *)this,iVar10,iVar2,fVar14,fVar12);
  return;
}

// Execute @ 14b1880d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
::Execute(TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
          *this)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int *piVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  TVector2<double>_u_0 local_88;
  TVector2<double>_u_0 local_78 [7];
  
  fVar12 = this->Nyquist;
  local_78[0]._s_0.X = ___xmm_3ff00000000000000000000000000000;
  local_78[0]._s_0.Y = _UNK_15061cbc8;
  fVar14 = **(float **)&(this->BaseFrequency).field_0x8;
  if (fVar12 <= fVar14) {
    fVar14 = fVar12;
  }
  if (fVar14 <= (float)((uint)fVar12 ^ __xmm_80000000800000008000000080000000)) {
    fVar14 = (float)((uint)fVar12 ^ __xmm_80000000800000008000000080000000);
  }
  local_88._s_0.X = ___xmm_3f1a36e2e00000003ff0000000000000;
  local_88._s_0.Y = _UNK_152389c48;
  fVar12 = Audio::GetLogFrequencyClamped
                     (**(float **)&(this->GlideFactor).field_0x8,
                      (TVector2<double> *)&local_78[0]._s_0,(TVector2<double> *)&local_88._s_0);
  puVar4 = *(undefined8 **)&(this->AudioBuffer).field_0x8;
  iVar10 = *(int *)(puVar4 + 1);
  if (0 < iVar10) {
    memset((void *)*puVar4,0,(longlong)iVar10 << 2);
  }
  puVar4 = *(undefined8 **)&(this->PhaseReset).field_0x8;
  iVar10 = *(int *)((longlong)puVar4 + 0x1c);
  iVar2 = *(int *)((longlong)puVar4 + 0x14);
  if (iVar10 < 1) {
    iVar10 = 0;
  }
  else {
    piVar5 = (int *)*puVar4;
    if (0 < *piVar5) {
      FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>
      ::Generate((FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>
                  *)this,0,*piVar5,fVar14,fVar12);
    }
    fVar9 = __real_43b40000;
    fVar8 = __real_3b360b61;
    fVar7 = __real_bf800000;
    lVar1 = (longlong)iVar10 + -1;
    if (0 < lVar1) {
      lVar11 = 0;
      do {
        iVar10 = piVar5[lVar11 + 1];
        iVar3 = piVar5[lVar11];
        fVar13 = **(float **)&(this->PhaseOffset).field_0x8;
        if (fVar9 <= fVar13) {
          fVar13 = fVar9;
        }
        if (fVar13 <= 0.0) {
          fVar13 = 0.0;
        }
        local_88._s_0.X = (double)(ulonglong)(uint)(fVar13 * fVar8);
        *(undefined8 *)&this->Generator = local_88._s_0.X;
        (this->Generator).CurrentFreq = fVar7;
        FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>
        ::Generate((FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>
                    *)this,iVar3,iVar10,fVar14,fVar12);
        lVar11 = lVar11 + 1;
      } while (lVar11 < lVar1);
    }
    iVar10 = piVar5[lVar1];
    fVar13 = **(float **)&(this->PhaseOffset).field_0x8;
    if (fVar9 <= fVar13) {
      fVar13 = fVar9;
    }
    local_88._s_0.X = (double)((ulonglong)local_88._s_0.X & 0xffffffff);
    if (fVar13 <= 0.0) {
      fVar13 = 0.0;
    }
    uVar6 = (ulonglong)(uint)(fVar13 * fVar8);
    (this->Generator).Phase = (float)(int)uVar6;
    (this->Generator).Osc = (FSquarePolysmoothGenerator)(char)(uVar6 >> 0x20);
    (this->Generator).Wrap = (FWrapPhase)(char)(uVar6 >> 0x28);
    *(short *)&(this->Generator).field_0x6 = (short)(uVar6 >> 0x30);
    (this->Generator).CurrentFreq = fVar7;
  }
  FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>
  ::Generate((FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>
              *)this,iVar10,iVar2,fVar14,fVar12);
  return;
}

// Execute @ 14b1882f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>_>
::Execute(void *this)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  TVector2<double>_u_0 local_88;
  TVector2<double>_u_0 local_78 [7];
  
  fVar11 = *(float *)((longlong)this + 0x18);
  local_78[0]._s_0.X = ___xmm_3ff00000000000000000000000000000;
  local_78[0]._s_0.Y = _UNK_15061cbc8;
  fVar13 = **(float **)((longlong)this + 0x48);
  if (fVar11 <= **(float **)((longlong)this + 0x48)) {
    fVar13 = fVar11;
  }
  if (fVar13 <= (float)((uint)fVar11 ^ __xmm_80000000800000008000000080000000)) {
    fVar13 = (float)((uint)fVar11 ^ __xmm_80000000800000008000000080000000);
  }
  local_88._s_0.X = ___xmm_3f1a36e2e00000003ff0000000000000;
  local_88._s_0.Y = _UNK_152389c48;
  fVar11 = Audio::GetLogFrequencyClamped
                     (**(float **)((longlong)this + 0xa8),(TVector2<double> *)&local_78[0]._s_0,
                      (TVector2<double> *)&local_88._s_0);
  iVar9 = *(int *)(*(undefined8 **)((longlong)this + 0xe8) + 1);
  if (0 < iVar9) {
    memset((void *)**(undefined8 **)((longlong)this + 0xe8),0,(longlong)iVar9 << 2);
  }
  puVar4 = *(undefined8 **)((longlong)this + 0x68);
  iVar9 = *(int *)((longlong)puVar4 + 0x1c);
  iVar2 = *(int *)((longlong)puVar4 + 0x14);
  if (iVar9 < 1) {
    iVar9 = 0;
  }
  else {
    piVar5 = (int *)*puVar4;
    if (0 < *piVar5) {
      TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
      ::Generate(this,0,*piVar5,fVar13,fVar11);
    }
    fVar8 = __real_43b40000;
    fVar7 = __real_3b360b61;
    uVar6 = __real_bf800000;
    lVar1 = (longlong)iVar9 + -1;
    if (0 < lVar1) {
      lVar10 = 0;
      do {
        iVar9 = piVar5[lVar10 + 1];
        iVar3 = piVar5[lVar10];
        fVar12 = **(float **)((longlong)this + 0x88);
        if (fVar8 <= **(float **)((longlong)this + 0x88)) {
          fVar12 = fVar8;
        }
        if (fVar12 <= 0.0) {
          fVar12 = 0.0;
        }
        local_88._s_0.X = (double)(ulonglong)(uint)(fVar12 * fVar7);
        *(undefined8 *)((longlong)this + 8) = local_88._s_0.X;
        *(undefined4 *)((longlong)this + 0x10) = uVar6;
        TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
        ::Generate(this,iVar3,iVar9,fVar13,fVar11);
        lVar10 = lVar10 + 1;
      } while (lVar10 < lVar1);
    }
    iVar9 = piVar5[lVar1];
    fVar12 = **(float **)((longlong)this + 0x88);
    if (fVar8 <= **(float **)((longlong)this + 0x88)) {
      fVar12 = fVar8;
    }
    local_88._s_0.X = (double)((ulonglong)local_88._s_0.X & 0xffffffff);
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    *(ulonglong *)((longlong)this + 8) = (ulonglong)(uint)(fVar12 * fVar7);
    *(undefined4 *)((longlong)this + 0x10) = uVar6;
  }
  TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
  ::Generate(this,iVar9,iVar2,fVar13,fVar11);
  return;
}

// Execute @ 14b188510

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::F2DRotatorGenerateBlock,Metasound::TOscillatorOperator<Metasound::Generators::F2DRotatorGenerateBlock,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
::Execute(void *this)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int *piVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  TVector2<double>_u_0 local_c8;
  TVector2<double>_u_0 local_b8 [3];
  undefined4 local_88;
  float fStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  
  fVar10 = *(float *)((longlong)this + 0x44);
  local_b8[0]._s_0.X = ___xmm_3ff00000000000000000000000000000;
  local_b8[0]._s_0.Y = _UNK_15061cbc8;
  fVar12 = **(float **)((longlong)this + 0x70);
  if (fVar10 <= **(float **)((longlong)this + 0x70)) {
    fVar12 = fVar10;
  }
  if (fVar12 <= (float)((uint)fVar10 ^ __xmm_80000000800000008000000080000000)) {
    fVar12 = (float)((uint)fVar10 ^ __xmm_80000000800000008000000080000000);
  }
  local_c8._s_0.X = ___xmm_3f1a36e2e00000003ff0000000000000;
  local_c8._s_0.Y = _UNK_152389c48;
  fVar10 = Audio::GetLogFrequencyClamped
                     (**(float **)((longlong)this + 0xd0),(TVector2<double> *)&local_b8[0]._s_0,
                      (TVector2<double> *)&local_c8._s_0);
  iVar8 = *(int *)(*(undefined8 **)((longlong)this + 0x110) + 1);
  if (0 < iVar8) {
    memset((void *)**(undefined8 **)((longlong)this + 0x110),0,(longlong)iVar8 << 2);
  }
  puVar4 = *(undefined8 **)((longlong)this + 0x90);
  iVar8 = *(int *)((longlong)puVar4 + 0x1c);
  iVar2 = *(int *)((longlong)puVar4 + 0x14);
  if (iVar8 < 1) {
    iVar8 = 0;
  }
  else {
    piVar5 = (int *)*puVar4;
    if (0 < *piVar5) {
      TOscillatorOperator<Metasound::Generators::F2DRotatorGenerateBlock,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
      ::Generate(this,0,*piVar5,fVar12,fVar10);
    }
    fVar7 = __real_3c8efa36;
    fVar6 = __real_43b40000;
    lVar1 = (longlong)iVar8 + -1;
    if (0 < lVar1) {
      lVar9 = 0;
      do {
        iVar8 = piVar5[lVar9 + 1];
        iVar3 = piVar5[lVar9];
        fStack_84 = **(float **)((longlong)this + 0xb0);
        if (fVar6 <= **(float **)((longlong)this + 0xb0)) {
          fStack_84 = fVar6;
        }
        *(undefined8 *)((longlong)this + 0x10) = 0;
        *(undefined8 *)((longlong)this + 0x18) = 0;
        *(undefined8 *)((longlong)this + 0x20) = 0;
        *(undefined8 *)((longlong)this + 0x28) = 0;
        if (fStack_84 <= 0.0) {
          fStack_84 = 0.0;
        }
        fStack_84 = fStack_84 * fVar7;
        local_88 = 0xbf800000;
        *(undefined4 *)((longlong)this + 0x30) = 0xbf800000;
        *(float *)((longlong)this + 0x34) = fStack_84;
        *(undefined4 *)((longlong)this + 0x38) = uStack_80;
        *(undefined4 *)((longlong)this + 0x3c) = uStack_7c;
        TOscillatorOperator<Metasound::Generators::F2DRotatorGenerateBlock,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
        ::Generate(this,iVar3,iVar8,fVar12,fVar10);
        lVar9 = lVar9 + 1;
      } while (lVar9 < lVar1);
    }
    iVar8 = piVar5[lVar1];
    local_88 = 0xbf800000;
    fVar11 = **(float **)((longlong)this + 0xb0);
    *(undefined8 *)((longlong)this + 0x10) = 0;
    *(undefined8 *)((longlong)this + 0x18) = 0;
    *(undefined8 *)((longlong)this + 0x20) = 0;
    *(undefined8 *)((longlong)this + 0x28) = 0;
    if (fVar6 <= fVar11) {
      fVar11 = fVar6;
    }
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    *(undefined4 *)((longlong)this + 0x30) = 0xbf800000;
    *(float *)((longlong)this + 0x34) = fVar11 * fVar7;
    *(undefined4 *)((longlong)this + 0x38) = uStack_80;
    *(undefined4 *)((longlong)this + 0x3c) = uStack_7c;
  }
  TOscillatorOperator<Metasound::Generators::F2DRotatorGenerateBlock,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
  ::Generate(this,iVar8,iVar2,fVar12,fVar10);
  return;
}

// Reset @ 14b1a69b0

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
::Reset(void *this,FResetParams *param_1)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  
  uVar2 = __real_bf800000;
  fVar3 = **(float **)((longlong)this + 0x88);
  if (__real_43b40000 <= **(float **)((longlong)this + 0x88)) {
    fVar3 = __real_43b40000;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  *(ulonglong *)((longlong)this + 8) = (ulonglong)(uint)(fVar3 * __real_3b360b61);
  *(undefined4 *)((longlong)this + 0x10) = uVar2;
  iVar1 = *(int *)(*(undefined8 **)((longlong)this + 0xe8) + 1);
  if (0 < iVar1) {
    memset((void *)**(undefined8 **)((longlong)this + 0xe8),0,(longlong)iVar1 << 2);
    return;
  }
  return;
}

// Reset @ 14b1a6a30

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>
::Reset(void *this,FResetParams *param_1)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  
  uVar2 = __real_bf800000;
  fVar3 = **(float **)((longlong)this + 0x88);
  if (__real_43b40000 <= **(float **)((longlong)this + 0x88)) {
    fVar3 = __real_43b40000;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  *(ulonglong *)((longlong)this + 8) = (ulonglong)(uint)(fVar3 * __real_3b360b61);
  *(undefined4 *)((longlong)this + 0x10) = uVar2;
  iVar1 = *(int *)(*(undefined8 **)((longlong)this + 0xe8) + 1);
  if (0 < iVar1) {
    memset((void *)**(undefined8 **)((longlong)this + 0xe8),0,(longlong)iVar1 << 2);
    return;
  }
  return;
}

// Reset @ 14b1a6ab0

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>
::Reset(void *this,FResetParams *param_1)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  
  uVar2 = __real_bf800000;
  fVar3 = **(float **)((longlong)this + 0x88);
  if (__real_43b40000 <= **(float **)((longlong)this + 0x88)) {
    fVar3 = __real_43b40000;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  *(ulonglong *)((longlong)this + 8) = (ulonglong)(uint)(fVar3 * __real_3b360b61);
  *(undefined4 *)((longlong)this + 0x10) = uVar2;
  iVar1 = *(int *)(*(undefined8 **)((longlong)this + 0xe8) + 1);
  if (0 < iVar1) {
    memset((void *)**(undefined8 **)((longlong)this + 0xe8),0,(longlong)iVar1 << 2);
    return;
  }
  return;
}

// Reset @ 14b1a6b30

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
::Reset(void *this,FResetParams *param_1)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  
  uVar2 = __real_bf800000;
  fVar3 = **(float **)((longlong)this + 0x88);
  if (__real_43b40000 <= **(float **)((longlong)this + 0x88)) {
    fVar3 = __real_43b40000;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  *(ulonglong *)((longlong)this + 8) = (ulonglong)(uint)(fVar3 * __real_3b360b61);
  *(undefined4 *)((longlong)this + 0x10) = uVar2;
  iVar1 = *(int *)(*(undefined8 **)((longlong)this + 0xe8) + 1);
  if (0 < iVar1) {
    memset((void *)**(undefined8 **)((longlong)this + 0xe8),0,(longlong)iVar1 << 2);
    return;
  }
  return;
}

// Reset @ 14b1a6bb0

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
::Reset(void *this,FResetParams *param_1)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  
  uVar2 = __real_bf800000;
  fVar3 = **(float **)((longlong)this + 0x88);
  if (__real_43b40000 <= **(float **)((longlong)this + 0x88)) {
    fVar3 = __real_43b40000;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  *(ulonglong *)((longlong)this + 8) = (ulonglong)(uint)(fVar3 * __real_3b360b61);
  *(undefined4 *)((longlong)this + 0x10) = uVar2;
  iVar1 = *(int *)(*(undefined8 **)((longlong)this + 0xe8) + 1);
  if (0 < iVar1) {
    memset((void *)**(undefined8 **)((longlong)this + 0xe8),0,(longlong)iVar1 << 2);
    return;
  }
  return;
}

// Reset @ 14b1a6c30

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>
::Reset(TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>
        *this,FResetParams *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  float fVar3;
  ulonglong uVar4;
  float fVar5;
  
  fVar3 = __real_bf800000;
  fVar5 = **(float **)&(this->PhaseOffset).field_0x8;
  if (__real_43b40000 <= fVar5) {
    fVar5 = __real_43b40000;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  uVar4 = (ulonglong)(uint)(fVar5 * __real_3b360b61);
  (this->Generator).Phase = (float)(int)uVar4;
  (this->Generator).Osc = (FSquareGenerator)(char)(uVar4 >> 0x20);
  (this->Generator).Wrap = (FWrapPhase)(char)(uVar4 >> 0x28);
  *(short *)&(this->Generator).field_0x6 = (short)(uVar4 >> 0x30);
  (this->Generator).CurrentFreq = fVar3;
  puVar2 = *(undefined8 **)&(this->AudioBuffer).field_0x8;
  iVar1 = *(int *)(puVar2 + 1);
  if (0 < iVar1) {
    memset((void *)*puVar2,0,(longlong)iVar1 << 2);
    return;
  }
  return;
}

// Reset @ 14b1a6cb0

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
::Reset(TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
        *this,FResetParams *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  float fVar3;
  ulonglong uVar4;
  float fVar5;
  
  fVar3 = __real_bf800000;
  fVar5 = **(float **)&(this->PhaseOffset).field_0x8;
  if (__real_43b40000 <= fVar5) {
    fVar5 = __real_43b40000;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  uVar4 = (ulonglong)(uint)(fVar5 * __real_3b360b61);
  (this->Generator).Phase = (float)(int)uVar4;
  (this->Generator).Osc = (FSquarePolysmoothGenerator)(char)(uVar4 >> 0x20);
  (this->Generator).Wrap = (FWrapPhase)(char)(uVar4 >> 0x28);
  *(short *)&(this->Generator).field_0x6 = (short)(uVar4 >> 0x30);
  (this->Generator).CurrentFreq = fVar3;
  puVar2 = *(undefined8 **)&(this->AudioBuffer).field_0x8;
  iVar1 = *(int *)(puVar2 + 1);
  if (0 < iVar1) {
    memset((void *)*puVar2,0,(longlong)iVar1 << 2);
    return;
  }
  return;
}

// Reset @ 14b1a6d30

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>_>
::Reset(void *this,FResetParams *param_1)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  
  uVar2 = __real_bf800000;
  fVar3 = **(float **)((longlong)this + 0x88);
  if (__real_43b40000 <= **(float **)((longlong)this + 0x88)) {
    fVar3 = __real_43b40000;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  *(ulonglong *)((longlong)this + 8) = (ulonglong)(uint)(fVar3 * __real_3b360b61);
  *(undefined4 *)((longlong)this + 0x10) = uVar2;
  iVar1 = *(int *)(*(undefined8 **)((longlong)this + 0xe8) + 1);
  if (0 < iVar1) {
    memset((void *)**(undefined8 **)((longlong)this + 0xe8),0,(longlong)iVar1 << 2);
    return;
  }
  return;
}

// Reset @ 14b1a6db0

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
::Reset(void *this,FResetParams *param_1)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  
  uVar2 = __real_bf800000;
  fVar3 = **(float **)((longlong)this + 0x88);
  if (__real_43b40000 <= **(float **)((longlong)this + 0x88)) {
    fVar3 = __real_43b40000;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  *(ulonglong *)((longlong)this + 8) = (ulonglong)(uint)(fVar3 * __real_3b360b61);
  *(undefined4 *)((longlong)this + 0x10) = uVar2;
  iVar1 = *(int *)(*(undefined8 **)((longlong)this + 0xe8) + 1);
  if (0 < iVar1) {
    memset((void *)**(undefined8 **)((longlong)this + 0xe8),0,(longlong)iVar1 << 2);
    return;
  }
  return;
}

// Reset @ 14b1a6e30

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>
::Reset(void *this,FResetParams *param_1)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  
  uVar2 = __real_bf800000;
  fVar3 = **(float **)((longlong)this + 0x88);
  if (__real_43b40000 <= **(float **)((longlong)this + 0x88)) {
    fVar3 = __real_43b40000;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  *(ulonglong *)((longlong)this + 8) = (ulonglong)(uint)(fVar3 * __real_3b360b61);
  *(undefined4 *)((longlong)this + 0x10) = uVar2;
  iVar1 = *(int *)(*(undefined8 **)((longlong)this + 0xe8) + 1);
  if (0 < iVar1) {
    memset((void *)**(undefined8 **)((longlong)this + 0xe8),0,(longlong)iVar1 << 2);
    return;
  }
  return;
}

// Reset @ 14b1a6eb0

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>
::Reset(void *this,FResetParams *param_1)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  
  uVar2 = __real_bf800000;
  fVar3 = **(float **)((longlong)this + 0x88);
  if (__real_43b40000 <= **(float **)((longlong)this + 0x88)) {
    fVar3 = __real_43b40000;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  *(ulonglong *)((longlong)this + 8) = (ulonglong)(uint)(fVar3 * __real_3b360b61);
  *(undefined4 *)((longlong)this + 0x10) = uVar2;
  iVar1 = *(int *)(*(undefined8 **)((longlong)this + 0xe8) + 1);
  if (0 < iVar1) {
    memset((void *)**(undefined8 **)((longlong)this + 0xe8),0,(longlong)iVar1 << 2);
    return;
  }
  return;
}

// Reset @ 14b1a6f30

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
::Reset(void *this,FResetParams *param_1)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  
  uVar2 = __real_bf800000;
  fVar3 = **(float **)((longlong)this + 0x88);
  if (__real_43b40000 <= **(float **)((longlong)this + 0x88)) {
    fVar3 = __real_43b40000;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  *(ulonglong *)((longlong)this + 8) = (ulonglong)(uint)(fVar3 * __real_3b360b61);
  *(undefined4 *)((longlong)this + 0x10) = uVar2;
  iVar1 = *(int *)(*(undefined8 **)((longlong)this + 0xe8) + 1);
  if (0 < iVar1) {
    memset((void *)**(undefined8 **)((longlong)this + 0xe8),0,(longlong)iVar1 << 2);
    return;
  }
  return;
}

// Reset @ 14b1a6fb0

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
::Reset(void *this,FResetParams *param_1)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  
  uVar2 = __real_bf800000;
  fVar3 = **(float **)((longlong)this + 0x88);
  if (__real_43b40000 <= **(float **)((longlong)this + 0x88)) {
    fVar3 = __real_43b40000;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  *(ulonglong *)((longlong)this + 8) = (ulonglong)(uint)(fVar3 * __real_3b360b61);
  *(undefined4 *)((longlong)this + 0x10) = uVar2;
  iVar1 = *(int *)(*(undefined8 **)((longlong)this + 0xe8) + 1);
  if (0 < iVar1) {
    memset((void *)**(undefined8 **)((longlong)this + 0xe8),0,(longlong)iVar1 << 2);
    return;
  }
  return;
}

// Reset @ 14b1a7030

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>
::Reset(TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>_>_>
        *this,FResetParams *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  float fVar3;
  ulonglong uVar4;
  float fVar5;
  
  fVar3 = __real_bf800000;
  fVar5 = **(float **)&(this->PhaseOffset).field_0x8;
  if (__real_43b40000 <= fVar5) {
    fVar5 = __real_43b40000;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  uVar4 = (ulonglong)(uint)(fVar5 * __real_3b360b61);
  (this->Generator).Phase = (float)(int)uVar4;
  (this->Generator).Osc = (FSquareGenerator)(char)(uVar4 >> 0x20);
  (this->Generator).Wrap = (FWrapPhase)(char)(uVar4 >> 0x28);
  *(short *)&(this->Generator).field_0x6 = (short)(uVar4 >> 0x30);
  (this->Generator).CurrentFreq = fVar3;
  puVar2 = *(undefined8 **)&(this->AudioBuffer).field_0x8;
  iVar1 = *(int *)(puVar2 + 1);
  if (0 < iVar1) {
    memset((void *)*puVar2,0,(longlong)iVar1 << 2);
    return;
  }
  return;
}

// Reset @ 14b1a70b0

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
::Reset(TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>,Metasound::FSquareOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
        *this,FResetParams *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  float fVar3;
  ulonglong uVar4;
  float fVar5;
  
  fVar3 = __real_bf800000;
  fVar5 = **(float **)&(this->PhaseOffset).field_0x8;
  if (__real_43b40000 <= fVar5) {
    fVar5 = __real_43b40000;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  uVar4 = (ulonglong)(uint)(fVar5 * __real_3b360b61);
  (this->Generator).Phase = (float)(int)uVar4;
  (this->Generator).Osc = (FSquarePolysmoothGenerator)(char)(uVar4 >> 0x20);
  (this->Generator).Wrap = (FWrapPhase)(char)(uVar4 >> 0x28);
  *(short *)&(this->Generator).field_0x6 = (short)(uVar4 >> 0x30);
  (this->Generator).CurrentFreq = fVar3;
  puVar2 = *(undefined8 **)&(this->AudioBuffer).field_0x8;
  iVar1 = *(int *)(puVar2 + 1);
  if (0 < iVar1) {
    memset((void *)*puVar2,0,(longlong)iVar1 << 2);
    return;
  }
  return;
}

// Reset @ 14b1a7130

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TOscillatorOperatorFM<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>_>
::Reset(void *this,FResetParams *param_1)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  
  uVar2 = __real_bf800000;
  fVar3 = **(float **)((longlong)this + 0x88);
  if (__real_43b40000 <= **(float **)((longlong)this + 0x88)) {
    fVar3 = __real_43b40000;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  *(ulonglong *)((longlong)this + 8) = (ulonglong)(uint)(fVar3 * __real_3b360b61);
  *(undefined4 *)((longlong)this + 0x10) = uVar2;
  iVar1 = *(int *)(*(undefined8 **)((longlong)this + 0xe8) + 1);
  if (0 < iVar1) {
    memset((void *)**(undefined8 **)((longlong)this + 0xe8),0,(longlong)iVar1 << 2);
    return;
  }
  return;
}

// Reset @ 14b1a71b0

void __thiscall
Metasound::
TOscillatorOperatorBase<Metasound::Generators::F2DRotatorGenerateBlock,Metasound::TOscillatorOperator<Metasound::Generators::F2DRotatorGenerateBlock,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
::Reset(void *this,FResetParams *param_1)

{
  int iVar1;
  float fVar2;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  fVar2 = **(float **)((longlong)this + 0xb0);
  if (__real_43b40000 <= **(float **)((longlong)this + 0xb0)) {
    fVar2 = __real_43b40000;
  }
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(undefined8 *)((longlong)this + 0x18) = 0;
  *(undefined8 *)((longlong)this + 0x20) = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  fVar2 = fVar2 * __real_3c8efa36;
  *(undefined4 *)((longlong)this + 0x30) = 0xbf800000;
  *(float *)((longlong)this + 0x34) = fVar2;
  *(undefined4 *)((longlong)this + 0x38) = uStack_10;
  *(undefined4 *)((longlong)this + 0x3c) = uStack_c;
  iVar1 = *(int *)(*(undefined8 **)((longlong)this + 0x110) + 1);
  if (0 < iVar1) {
    memset((void *)**(undefined8 **)((longlong)this + 0x110),0,(longlong)iVar1 << 2);
    return;
  }
  return;
}

