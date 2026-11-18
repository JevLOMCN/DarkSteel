// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 546

// `dynamic_initializer_for_'AudioVariant'' @ 1411e8e20

void __cdecl Metasound::StandardNodes::_dynamic_initializer_for__AudioVariant__(void)

{
  ::FName::FName(&AudioVariant,"Audio");
  return;
}

// `dynamic_initializer_for_'Debug'' @ 1411e8e40

void __cdecl Metasound::NodeCategories::_dynamic_initializer_for__Debug__(void)

{
  FText::FText(&Debug);
  atexit(_dynamic_atexit_destructor_for__Debug__);
  return;
}

// `dynamic_initializer_for_'Delays'' @ 1411e8e70

void __cdecl Metasound::NodeCategories::_dynamic_initializer_for__Delays__(void)

{
  FText::FText(&Delays);
  atexit(_dynamic_atexit_destructor_for__Delays__);
  return;
}

// `dynamic_initializer_for_'Dynamics'' @ 1411e8ea0

void __cdecl Metasound::NodeCategories::_dynamic_initializer_for__Dynamics__(void)

{
  FText::FText(&Dynamics);
  atexit(_dynamic_atexit_destructor_for__Dynamics__);
  return;
}

// `dynamic_initializer_for_'Envelopes'' @ 1411e8ed0

void __cdecl Metasound::NodeCategories::_dynamic_initializer_for__Envelopes__(void)

{
  FText::FText(&Envelopes);
  atexit(_dynamic_atexit_destructor_for__Envelopes__);
  return;
}

// `dynamic_initializer_for_'Filters'' @ 1411e8f00

void __cdecl Metasound::NodeCategories::_dynamic_initializer_for__Filters__(void)

{
  FText::FText(&Filters);
  atexit(_dynamic_atexit_destructor_for__Filters__);
  return;
}

// `dynamic_initializer_for_'Generators'' @ 1411e8f30

void __cdecl Metasound::NodeCategories::_dynamic_initializer_for__Generators__(void)

{
  FText::FText(&Generators);
  atexit(_dynamic_atexit_destructor_for__Generators__);
  return;
}

// `dynamic_initializer_for_'InputDataMetadata'' @ 1411e8f60

void __cdecl Metasound::VariableNames::_dynamic_initializer_for__InputDataMetadata__(void)

{
  FText *pFVar1;
  undefined1 local_res8 [32];
  
  pFVar1 = FText::GetEmpty();
  InputDataMetadata.Description.TextData.Reference = (pFVar1->TextData).Reference;
  if (InputDataMetadata.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*InputDataMetadata.Description.TextData.Reference + 8))
              (InputDataMetadata.Description.TextData.Reference,local_res8);
  }
  InputDataMetadata.Description.Flags = pFVar1->Flags;
  FText::FText(&InputDataMetadata.DisplayName);
  InputDataMetadata.bIsAdvancedDisplay = false;
  atexit(_dynamic_atexit_destructor_for__InputDataMetadata__);
  return;
}

// `dynamic_initializer_for_'InputInitialArrayDisplayName'' @ 1411e8fd0

void __cdecl
Metasound::ArrayNodeVertexNames::_dynamic_initializer_for__InputInitialArrayDisplayName__(void)

{
  FText *pFVar1;
  undefined1 local_res8 [32];
  
  pFVar1 = FText::GetEmpty();
  InputInitialArrayDisplayName.TextData.Reference = (pFVar1->TextData).Reference;
  if (InputInitialArrayDisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*InputInitialArrayDisplayName.TextData.Reference + 8))
              (InputInitialArrayDisplayName.TextData.Reference,local_res8);
  }
  InputInitialArrayDisplayName.Flags = pFVar1->Flags;
  atexit(_dynamic_atexit_destructor_for__InputInitialArrayDisplayName__);
  return;
}

// `dynamic_initializer_for_'InputInitialArrayTooltip'' @ 1411e9030

void __cdecl
Metasound::ArrayNodeVertexNames::_dynamic_initializer_for__InputInitialArrayTooltip__(void)

{
  FText *pFVar1;
  undefined1 local_res8 [32];
  
  pFVar1 = FText::GetEmpty();
  InputInitialArrayTooltip.TextData.Reference = (pFVar1->TextData).Reference;
  if (InputInitialArrayTooltip.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*InputInitialArrayTooltip.TextData.Reference + 8))
              (InputInitialArrayTooltip.TextData.Reference,local_res8);
  }
  InputInitialArrayTooltip.Flags = pFVar1->Flags;
  atexit(_dynamic_atexit_destructor_for__InputInitialArrayTooltip__);
  return;
}

// `dynamic_initializer_for_'InputVariableMetadata'' @ 1411e9090

void __cdecl Metasound::VariableNames::_dynamic_initializer_for__InputVariableMetadata__(void)

{
  FText *pFVar1;
  undefined1 local_res8 [32];
  
  pFVar1 = FText::GetEmpty();
  InputVariableMetadata.Description.TextData.Reference = (pFVar1->TextData).Reference;
  if (InputVariableMetadata.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*InputVariableMetadata.Description.TextData.Reference + 8))
              (InputVariableMetadata.Description.TextData.Reference,local_res8);
  }
  InputVariableMetadata.Description.Flags = pFVar1->Flags;
  FText::FText(&InputVariableMetadata.DisplayName);
  InputVariableMetadata.bIsAdvancedDisplay = false;
  atexit(_dynamic_atexit_destructor_for__InputVariableMetadata__);
  return;
}

// `dynamic_initializer_for_'Io'' @ 1411e9100

void __cdecl Metasound::NodeCategories::_dynamic_initializer_for__Io__(void)

{
  FText::FText(&Io);
  atexit(_dynamic_atexit_destructor_for__Io__);
  return;
}

// `dynamic_initializer_for_'Math'' @ 1411e9130

void __cdecl Metasound::NodeCategories::_dynamic_initializer_for__Math__(void)

{
  FText::FText(&Math);
  atexit(_dynamic_atexit_destructor_for__Math__);
  return;
}

// `dynamic_initializer_for_'Mix'' @ 1411e9160

void __cdecl Metasound::NodeCategories::_dynamic_initializer_for__Mix__(void)

{
  FText::FText(&Mix);
  atexit(_dynamic_atexit_destructor_for__Mix__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantMetasoundStandardNodes'' @ 1411e9190

void __cdecl _dynamic_initializer_for__ModuleRegistrantMetasoundStandardNodes__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "MetasoundStandardNodes";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"MetasoundStandardNodes",0x16);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<Metasound::FMetasoundStandardNodesModule>::
             InitializeModule);
  return;
}

// `dynamic_initializer_for_'Music'' @ 1411e91e0

void __cdecl Metasound::NodeCategories::_dynamic_initializer_for__Music__(void)

{
  FText::FText(&Music);
  atexit(_dynamic_atexit_destructor_for__Music__);
  return;
}

// `dynamic_initializer_for_'Namespace'' @ 1411e9210

void __cdecl Metasound::StandardNodes::_dynamic_initializer_for__Namespace__(void)

{
  ::FName::FName(&Namespace,"UE");
  return;
}

// `dynamic_initializer_for_'OutputDataMetadata'' @ 1411e9230

void __cdecl Metasound::VariableNames::_dynamic_initializer_for__OutputDataMetadata__(void)

{
  FText *pFVar1;
  undefined1 local_res8 [32];
  
  pFVar1 = FText::GetEmpty();
  OutputDataMetadata.Description.TextData.Reference = (pFVar1->TextData).Reference;
  if (OutputDataMetadata.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*OutputDataMetadata.Description.TextData.Reference + 8))
              (OutputDataMetadata.Description.TextData.Reference,local_res8);
  }
  OutputDataMetadata.Description.Flags = pFVar1->Flags;
  FText::FText(&OutputDataMetadata.DisplayName);
  OutputDataMetadata.bIsAdvancedDisplay = false;
  atexit(_dynamic_atexit_destructor_for__OutputDataMetadata__);
  return;
}

// `dynamic_initializer_for_'OutputVariableMetadata'' @ 1411e92a0

void __cdecl Metasound::VariableNames::_dynamic_initializer_for__OutputVariableMetadata__(void)

{
  FText *pFVar1;
  undefined1 local_res8 [32];
  
  pFVar1 = FText::GetEmpty();
  OutputVariableMetadata.Description.TextData.Reference = (pFVar1->TextData).Reference;
  if (OutputVariableMetadata.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*OutputVariableMetadata.Description.TextData.Reference + 8))
              (OutputVariableMetadata.Description.TextData.Reference,local_res8);
  }
  OutputVariableMetadata.Description.Flags = pFVar1->Flags;
  FText::FText(&OutputVariableMetadata.DisplayName);
  OutputVariableMetadata.bIsAdvancedDisplay = false;
  atexit(_dynamic_atexit_destructor_for__OutputVariableMetadata__);
  return;
}

// `dynamic_initializer_for_'RandomUtils'' @ 1411e9310

void __cdecl Metasound::NodeCategories::_dynamic_initializer_for__RandomUtils__(void)

{
  FText::FText(&RandomUtils);
  atexit(_dynamic_atexit_destructor_for__RandomUtils__);
  return;
}

// `dynamic_initializer_for_'RegistrationActionFAudioRatePerlinNode'' @ 1411e9340

void __cdecl Metasound::_dynamic_initializer_for__RegistrationActionFAudioRatePerlinNode__(void)

{
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFAudioRatePerlinNode,&Head,
             Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::FPerlinAudioRate>,void>,
             Frontend::UnregisterNode<Metasound::TNodeFacade<Metasound::FPerlinAudioRate>_>);
  return;
}

// `dynamic_initializer_for_'RegistrationActionFControlRatePerlinNode'' @ 1411e9370

void __cdecl Metasound::_dynamic_initializer_for__RegistrationActionFControlRatePerlinNode__(void)

{
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFControlRatePerlinNode,&Head,
             Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::FPerlinControlRate>,void>,
             Frontend::UnregisterNode<Metasound::TNodeFacade<Metasound::FPerlinControlRate>_>);
  return;
}

// `dynamic_initializer_for_'RegistrationActionFPlateReverbNode'' @ 1411e93a0

void __cdecl Metasound::_dynamic_initializer_for__RegistrationActionFPlateReverbNode__(void)

{
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFPlateReverbNode,&Head,
             Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::FPlateReverbOperator>,void>,
             Frontend::UnregisterNode<Metasound::TNodeFacade<Metasound::FPlateReverbOperator>_>);
  return;
}

// `dynamic_initializer_for_'RegistrationActionFRandomNodeBool'' @ 1411e93d0

void __cdecl Metasound::_dynamic_initializer_for__RegistrationActionFRandomNodeBool__(void)

{
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFRandomNodeBool,&Head,
             Frontend::
             RegisterNode<Metasound::TNodeFacade<Metasound::TRandomNodeOperator<bool>_>,void>,
             Frontend::
             UnregisterNode<Metasound::TNodeFacade<Metasound::TRandomNodeOperator<bool>_>_>);
  return;
}

// `dynamic_initializer_for_'RegistrationActionFRandomNodeFloat'' @ 1411e9400

void __cdecl Metasound::_dynamic_initializer_for__RegistrationActionFRandomNodeFloat__(void)

{
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFRandomNodeFloat,&Head,
             Frontend::
             RegisterNode<Metasound::TNodeFacade<Metasound::TRandomNodeOperator<float>_>,void>,
             Frontend::
             UnregisterNode<Metasound::TNodeFacade<Metasound::TRandomNodeOperator<float>_>_>);
  return;
}

// `dynamic_initializer_for_'RegistrationActionFRandomNodeInt32'' @ 1411e9430

void __cdecl Metasound::_dynamic_initializer_for__RegistrationActionFRandomNodeInt32__(void)

{
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFRandomNodeInt32,&Head,
             Frontend::
             RegisterNode<Metasound::TNodeFacade<Metasound::TRandomNodeOperator<int>_>,void>,
             Frontend::UnregisterNode<Metasound::TNodeFacade<Metasound::TRandomNodeOperator<int>_>_>
            );
  return;
}

// `dynamic_initializer_for_'RegistrationActionFRandomNodeTime'' @ 1411e9460

void __cdecl Metasound::_dynamic_initializer_for__RegistrationActionFRandomNodeTime__(void)

{
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFRandomNodeTime,&Head,
             Frontend::
             RegisterNode<Metasound::TNodeFacade<Metasound::TRandomNodeOperator<Metasound::FTime>_>,void>
             ,Frontend::
              UnregisterNode<Metasound::TNodeFacade<Metasound::TRandomNodeOperator<Metasound::FTime>_>_>
            );
  return;
}

// `dynamic_initializer_for_'RegistrationActionFRingModNode'' @ 1411e9490

void __cdecl Metasound::_dynamic_initializer_for__RegistrationActionFRingModNode__(void)

{
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFRingModNode,&Head,
             Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::FRingModOperator>,void>,
             Frontend::UnregisterNode<Metasound::TNodeFacade<Metasound::FRingModOperator>_>);
  return;
}

// `dynamic_initializer_for_'RegistrationActionFSampleAndHoldNode'' @ 1411e94c0

void __cdecl Metasound::_dynamic_initializer_for__RegistrationActionFSampleAndHoldNode__(void)

{
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFSampleAndHoldNode,&Head,
             Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::FSampleAndHoldOperator>,void>,
             Frontend::UnregisterNode<Metasound::TNodeFacade<Metasound::FSampleAndHoldOperator>_>);
  return;
}

// `dynamic_initializer_for_'RegistrationActionFSemitoneToFrequencyMultiplierNode'' @ 1411e94f0

void __cdecl
Metasound::_dynamic_initializer_for__RegistrationActionFSemitoneToFrequencyMultiplierNode__(void)

{
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFSemitoneToFrequencyMultiplierNode,&Head,
             Frontend::
             RegisterNode<Metasound::TNodeFacade<Metasound::FSemitoneToFrequencyMultiplierOperator>,void>
             ,Frontend::
              UnregisterNode<Metasound::TNodeFacade<Metasound::FSemitoneToFrequencyMultiplierOperator>_>
            );
  return;
}

// `dynamic_initializer_for_'RegistrationActionFStereoDelayNode'' @ 1411e9520

void __cdecl Metasound::_dynamic_initializer_for__RegistrationActionFStereoDelayNode__(void)

{
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFStereoDelayNode,&Head,
             Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::FStereoDelayOperator>,void>,
             Frontend::UnregisterNode<Metasound::TNodeFacade<Metasound::FStereoDelayOperator>_>);
  return;
}

// `dynamic_initializer_for_'RegistrationActionFStereoPannerNode'' @ 1411e9550

void __cdecl Metasound::_dynamic_initializer_for__RegistrationActionFStereoPannerNode__(void)

{
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFStereoPannerNode,&Head,
             Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::FStereoPannerOperator>,void>,
             Frontend::UnregisterNode<Metasound::TNodeFacade<Metasound::FStereoPannerOperator>_>);
  return;
}

// `dynamic_initializer_for_'RegistrationActionFSubharmonizerNode'' @ 1411e9580

void __cdecl Metasound::_dynamic_initializer_for__RegistrationActionFSubharmonizerNode__(void)

{
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFSubharmonizerNode,&Head,
             Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::FSubharmonizerOperator>,void>,
             Frontend::UnregisterNode<Metasound::TNodeFacade<Metasound::FSubharmonizerOperator>_>);
  return;
}

// `dynamic_initializer_for_'RegistrationActionFSuperOscillatorNodeMono'' @ 1411e95b0

void __cdecl Metasound::_dynamic_initializer_for__RegistrationActionFSuperOscillatorNodeMono__(void)

{
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFSuperOscillatorNodeMono,&Head,
             Frontend::
             RegisterNode<Metasound::TNodeFacade<Metasound::FSuperOscillatorOperatorMono>,void>,
             Frontend::
             UnregisterNode<Metasound::TNodeFacade<Metasound::FSuperOscillatorOperatorMono>_>);
  return;
}

// `dynamic_initializer_for_'RegistrationActionFSuperOscillatorNodeStereo'' @ 1411e95e0

void __cdecl
Metasound::_dynamic_initializer_for__RegistrationActionFSuperOscillatorNodeStereo__(void)

{
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFSuperOscillatorNodeStereo,&Head,
             Frontend::
             RegisterNode<Metasound::TNodeFacade<Metasound::FSuperOscillatorOperatorStereo>,void>,
             Frontend::
             UnregisterNode<Metasound::TNodeFacade<Metasound::FSuperOscillatorOperatorStereo>_>);
  return;
}

// `dynamic_initializer_for_'RegistrationActionFSwitchAndRampNode'' @ 1411e9610

void __cdecl Metasound::_dynamic_initializer_for__RegistrationActionFSwitchAndRampNode__(void)

{
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFSwitchAndRampNode,&Head,
             Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::FSwitchAndRampOperator>,void>,
             Frontend::UnregisterNode<Metasound::TNodeFacade<Metasound::FSwitchAndRampOperator>_>);
  return;
}

// `dynamic_initializer_for_'RegistrationAction_DataTypeRegistration246'' @ 1411e9640

void __cdecl Metasound::_dynamic_initializer_for__RegistrationAction_DataTypeRegistration246__(void)

{
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationAction_DataTypeRegistration246,&Head,
             Frontend::RegisterDataType<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,2,void>
             ,(_func___cdecl_bool_FModuleInfo_ptr *)0x0);
  return;
}

// `dynamic_initializer_for_'RegistrationAction_DataTypeRegistration247'' @ 1411e9670

void __cdecl Metasound::_dynamic_initializer_for__RegistrationAction_DataTypeRegistration247__(void)

{
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationAction_DataTypeRegistration247,&Head,
             Frontend::RegisterDataType<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,2,void>,
             (_func___cdecl_bool_FModuleInfo_ptr *)0x0);
  return;
}

// `dynamic_initializer_for_'Reverbs'' @ 1411e96a0

void __cdecl Metasound::NodeCategories::_dynamic_initializer_for__Reverbs__(void)

{
  FText::FText(&Reverbs);
  atexit(_dynamic_atexit_destructor_for__Reverbs__);
  return;
}

// `dynamic_initializer_for_'Spatialization'' @ 1411e96d0

void __cdecl Metasound::NodeCategories::_dynamic_initializer_for__Spatialization__(void)

{
  FText::FText(&Spatialization);
  atexit(_dynamic_atexit_destructor_for__Spatialization__);
  return;
}

// `dynamic_initializer_for_'Trigger'' @ 1411e9700

void __cdecl Metasound::NodeCategories::_dynamic_initializer_for__Trigger__(void)

{
  FText::FText(&Trigger);
  atexit(_dynamic_atexit_destructor_for__Trigger__);
  return;
}

// `dynamic_initializer_for_'WaveTables'' @ 1411e9730

void __cdecl Metasound::NodeCategories::_dynamic_initializer_for__WaveTables__(void)

{
  FText::FText(&WaveTables);
  atexit(_dynamic_atexit_destructor_for__WaveTables__);
  return;
}

// `scalar_deleting_destructor' @ 14b1abba0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &___7__TReferenceControllerBase__0A__SharedPointerInternals__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1abd50

void * __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1abd80

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &___7__TReferenceControllerBase__0A__SharedPointerInternals__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1abdf0

void * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1abe80

void * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,int>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1abf40

void * __thiscall
Metasound::
TNodeFacade<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1abfa0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::FFactory,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1abfe0

void * __thiscall
Metasound::TBasePerlinNoiseOperator<Metasound::FAudioBuffer,Metasound::FPerlinAudioRate>::
_scalar_deleting_destructor_
          (TBasePerlinNoiseOperator<Metasound::FAudioBuffer,Metasound::FPerlinAudioRate> *this,
          uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputNormalized).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputScaled).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Pins).MaxValue.field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Pins).MinValue.field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Pins).Octaves.field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Pins).X.field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1ac0f0

void * __thiscall
Metasound::TSendNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::_scalar_deleting_destructor_
          (void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1ac150

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FStereoPannerOperator>_>::
_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FStereoPannerOperator>_> *this,
          uint param_1)

{
  if (*(void **)&this->field_0xd0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xd0);
  }
  if (*(void **)&this->field_0xc0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xc0);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            (*(FMetasoundFrontendClassInput **)&this->field_0xb0,*(int *)&this->field_0xb8);
  if (*(void **)&this->field_0xb0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xb0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x10);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1ac1e0

void * __thiscall
Metasound::FPerlinAudioRate::_scalar_deleting_destructor_(FPerlinAudioRate *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->TimeBuffer).Buffer.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)this->_padding_);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1ac270

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::FStereoPannerOperator>,void>::
_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::FStereoPannerOperator>,void> *this,
          uint param_1)

{
  if (*(void **)&this->field_0xd0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xd0);
  }
  if (*(void **)&this->field_0xc0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xc0);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            (*(FMetasoundFrontendClassInput **)&this->field_0xb0,*(int *)&this->field_0xb8);
  if (*(void **)&this->field_0xb0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xb0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x10);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1ac460

void * __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1ac520

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FSampleAndHoldOperator>_>::
_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FSampleAndHoldOperator>_> *this,
          uint param_1)

{
  if (*(void **)&this->field_0xd0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xd0);
  }
  if (*(void **)&this->field_0xc0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xc0);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            (*(FMetasoundFrontendClassInput **)&this->field_0xb0,*(int *)&this->field_0xb8);
  if (*(void **)&this->field_0xb0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xb0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x10);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1ac5b0

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::FSampleAndHoldOperator>,void>::
_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::FSampleAndHoldOperator>,void> *this,
          uint param_1)

{
  if (*(void **)&this->field_0xd0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xd0);
  }
  if (*(void **)&this->field_0xc0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xc0);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            (*(FMetasoundFrontendClassInput **)&this->field_0xb0,*(int *)&this->field_0xb8);
  if (*(void **)&this->field_0xb0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xb0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x10);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1ac650

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,1>,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1ac730

void * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1ac780

void * __thiscall
Metasound::TNodeFacade<Metasound::FPerlinControlRate>::_scalar_deleting_destructor_
          (TNodeFacade<Metasound::FPerlinControlRate> *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x88);
  FNodeData::~FNodeData((FNodeData *)&this->field_0x8);
  *(undefined ***)this = &___7INode_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1ac870

void * __thiscall
Metasound::TNodeFacade<Metasound::FPerlinAudioRate>::_scalar_deleting_destructor_
          (TNodeFacade<Metasound::FPerlinAudioRate> *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x88);
  FNodeData::~FNodeData((FNodeData *)&this->field_0x8);
  *(undefined ***)this = &___7INode_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1ac8d0

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FSubharmonizerOperator>_>::
_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FSubharmonizerOperator>_> *this,
          uint param_1)

{
  if (*(void **)&this->field_0xd0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xd0);
  }
  if (*(void **)&this->field_0xc0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xc0);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            (*(FMetasoundFrontendClassInput **)&this->field_0xb0,*(int *)&this->field_0xb8);
  if (*(void **)&this->field_0xb0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xb0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x10);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1ac990

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::FSubharmonizerOperator>,void>::
_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::FSubharmonizerOperator>,void> *this,
          uint param_1)

{
  if (*(void **)&this->field_0xd0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xd0);
  }
  if (*(void **)&this->field_0xc0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xc0);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            (*(FMetasoundFrontendClassInput **)&this->field_0xb0,*(int *)&this->field_0xb8);
  if (*(void **)&this->field_0xb0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xb0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x10);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1aca20

void * __thiscall
Metasound::TExecutableOperator<Metasound::FSuperOscillatorOperator>::_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::FSuperOscillatorOperator> *this,uint param_1)

{
  *this = (TExecutableOperator<Metasound::FSuperOscillatorOperator>)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1acf20

void * __thiscall
Metasound::FSuperOscillatorOperator::_scalar_deleting_destructor_
          (FSuperOscillatorOperator *this,uint param_1)

{
  ~FSuperOscillatorOperator(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x328);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1acf60

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FSemitoneToFrequencyMultiplierOperator>_>::
_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FSemitoneToFrequencyMultiplierOperator>_>
           *this,uint param_1)

{
  if (*(void **)&this->field_0xd0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xd0);
  }
  if (*(void **)&this->field_0xc0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xc0);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            (*(FMetasoundFrontendClassInput **)&this->field_0xb0,*(int *)&this->field_0xb8);
  if (*(void **)&this->field_0xb0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xb0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x10);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1acff0

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::FSemitoneToFrequencyMultiplierOperator>,void>::
_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::FSemitoneToFrequencyMultiplierOperator>,void>
           *this,uint param_1)

{
  if (*(void **)&this->field_0xd0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xd0);
  }
  if (*(void **)&this->field_0xc0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xc0);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            (*(FMetasoundFrontendClassInput **)&this->field_0xb0,*(int *)&this->field_0xb8);
  if (*(void **)&this->field_0xb0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xb0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x10);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1ad080

void * __thiscall
Metasound::TInputConstructorVertex<float>::_scalar_deleting_destructor_
          (TInputConstructorVertex<float> *this,uint param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  
  bVar1 = this->field_0x30;
  if (0xc < (ulonglong)bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar1])(&this->field_0x20);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1ad1a0

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FStereoDelayOperator>_>::
_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FStereoDelayOperator>_> *this,
          uint param_1)

{
  if (*(void **)&this->field_0xd0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xd0);
  }
  if (*(void **)&this->field_0xc0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xc0);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            (*(FMetasoundFrontendClassInput **)&this->field_0xb0,*(int *)&this->field_0xb8);
  if (*(void **)&this->field_0xb0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xb0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x10);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1ad230

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::FStereoDelayOperator>,void>::
_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::FStereoDelayOperator>,void> *this,
          uint param_1)

{
  if (*(void **)&this->field_0xd0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xd0);
  }
  if (*(void **)&this->field_0xc0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xc0);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            (*(FMetasoundFrontendClassInput **)&this->field_0xb0,*(int *)&this->field_0xb8);
  if (*(void **)&this->field_0xb0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xb0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x10);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1ae3a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,2,void>'::
__l2::FDataTypeRegistryEntry::_scalar_deleting_destructor_(void *this,uint param_1)

{
  Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
  ~FDataTypeRegistryEntryBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x640);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1ae630

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::FFactory,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// VisitApplyEncoded<0,0,`Metasound::FSuperOscillatorOperator::Execute'::__l8::<lambda_1>_const_&,TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_&> @ 14b1ae800

float __cdecl
UE::Core::Private::
VisitApplyEncoded<0,0,_Metasound::FSuperOscillatorOperator::Execute_::__l8::<lambda_1>_const_&,TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_&>
          (<lambda_1> *param_1,
          TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
          *param_2)

{
  FVoiceGeneratorArgs *pFVar1;
  FGeneratorArgs local_48;
  
  pFVar1 = param_1->Args;
  local_48.SampleRate = pFVar1->SampleRate;
  local_48.FrequencyHz =
       powf(pFVar1->DetuneMultiplier,
            (pFVar1->Entropy * *(float *)&param_2->field_0x8 + __real_3f800000) * *(float *)param_2)
  ;
  local_48.FrequencyHz = local_48.FrequencyHz * pFVar1->FrequencyHz;
  local_48.BiPolar = true;
  local_48.PulseWidth = pFVar1->PulseWidth;
  local_48.FM.DataPtr = (pFVar1->Fm).DataPtr;
  local_48.FM.ArrayNum = (pFVar1->Fm).ArrayNum;
  local_48.FM._12_4_ = *(undefined4 *)&(pFVar1->Fm).field_0xc;
  local_48.GlideEaseFactor = pFVar1->GlideEaseFactor;
  local_48.AlignedBuffer.DataPtr = (pFVar1->AlignedBuffer).DataPtr;
  local_48.AlignedBuffer.ArrayNum = (pFVar1->AlignedBuffer).ArrayNum;
  local_48.AlignedBuffer._12_4_ = *(undefined4 *)&(pFVar1->AlignedBuffer).field_0xc;
  Metasound::Generators::
  TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>::
  operator()((TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>
              *)&param_2->field_0xc,&local_48);
  return *(float *)&param_2->field_0x4;
}

// `scalar_deleting_destructor' @ 14b1af540

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,2,void>'::__l2
::FDataTypeRegistryEntry::_scalar_deleting_destructor_(void *this,uint param_1)

{
  Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
  ~FDataTypeRegistryEntryBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x640);
  }
  return this;
}

// VisitApplyEncoded<1,0,`Metasound::FSuperOscillatorOperator::Execute'::__l8::<lambda_1>_const_&,TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_&> @ 14b1af590

float __cdecl
UE::Core::Private::
VisitApplyEncoded<1,0,_Metasound::FSuperOscillatorOperator::Execute_::__l8::<lambda_1>_const_&,TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_&>
          (<lambda_1> *param_1,
          TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
          *param_2)

{
  FVoiceGeneratorArgs *pFVar1;
  FGeneratorArgs local_48;
  
  pFVar1 = param_1->Args;
  local_48.SampleRate = pFVar1->SampleRate;
  local_48.FrequencyHz =
       powf(pFVar1->DetuneMultiplier,
            (pFVar1->Entropy * *(float *)&param_2->field_0x8 + __real_3f800000) * *(float *)param_2)
  ;
  local_48.FrequencyHz = local_48.FrequencyHz * pFVar1->FrequencyHz;
  local_48.BiPolar = true;
  local_48.PulseWidth = pFVar1->PulseWidth;
  local_48.FM.DataPtr = (pFVar1->Fm).DataPtr;
  local_48.FM.ArrayNum = (pFVar1->Fm).ArrayNum;
  local_48.FM._12_4_ = *(undefined4 *)&(pFVar1->Fm).field_0xc;
  local_48.GlideEaseFactor = pFVar1->GlideEaseFactor;
  local_48.AlignedBuffer.DataPtr = (pFVar1->AlignedBuffer).DataPtr;
  local_48.AlignedBuffer.ArrayNum = (pFVar1->AlignedBuffer).ArrayNum;
  local_48.AlignedBuffer._12_4_ = *(undefined4 *)&(pFVar1->AlignedBuffer).field_0xc;
  Metasound::Generators::
  TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>
  ::operator()((TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>
                *)&param_2->field_0xc,&local_48);
  return *(float *)&param_2->field_0x4;
}

// `scalar_deleting_destructor' @ 14b1af630

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,0>,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// VisitApplyEncoded<2,0,`Metasound::FSuperOscillatorOperator::Execute'::__l8::<lambda_1>_const_&,TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_&> @ 14b1af670

float __cdecl
UE::Core::Private::
VisitApplyEncoded<2,0,_Metasound::FSuperOscillatorOperator::Execute_::__l8::<lambda_1>_const_&,TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_&>
          (<lambda_1> *param_1,
          TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
          *param_2)

{
  FVoiceGeneratorArgs *pFVar1;
  FGeneratorArgs local_48;
  
  pFVar1 = param_1->Args;
  local_48.SampleRate = pFVar1->SampleRate;
  local_48.FrequencyHz =
       powf(pFVar1->DetuneMultiplier,
            (pFVar1->Entropy * *(float *)&param_2->field_0x8 + __real_3f800000) * *(float *)param_2)
  ;
  local_48.FrequencyHz = local_48.FrequencyHz * pFVar1->FrequencyHz;
  local_48.BiPolar = true;
  local_48.PulseWidth = pFVar1->PulseWidth;
  local_48.FM.DataPtr = (pFVar1->Fm).DataPtr;
  local_48.FM.ArrayNum = (pFVar1->Fm).ArrayNum;
  local_48.FM._12_4_ = *(undefined4 *)&(pFVar1->Fm).field_0xc;
  local_48.GlideEaseFactor = pFVar1->GlideEaseFactor;
  local_48.AlignedBuffer.DataPtr = (pFVar1->AlignedBuffer).DataPtr;
  local_48.AlignedBuffer.ArrayNum = (pFVar1->AlignedBuffer).ArrayNum;
  local_48.AlignedBuffer._12_4_ = *(undefined4 *)&(pFVar1->AlignedBuffer).field_0xc;
  Metasound::Generators::
  TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>::
  operator()((TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>
              *)&param_2->field_0xc,&local_48);
  return *(float *)&param_2->field_0x4;
}

// VisitApplyEncoded<3,0,`Metasound::FSuperOscillatorOperator::Execute'::__l8::<lambda_1>_const_&,TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_&> @ 14b1af720

float __cdecl
UE::Core::Private::
VisitApplyEncoded<3,0,_Metasound::FSuperOscillatorOperator::Execute_::__l8::<lambda_1>_const_&,TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_&>
          (<lambda_1> *param_1,
          TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
          *param_2)

{
  FVoiceGeneratorArgs *pFVar1;
  FGeneratorArgs local_48;
  
  pFVar1 = param_1->Args;
  local_48.SampleRate = pFVar1->SampleRate;
  local_48.FrequencyHz =
       powf(pFVar1->DetuneMultiplier,
            (pFVar1->Entropy * *(float *)&param_2->field_0x8 + __real_3f800000) * *(float *)param_2)
  ;
  local_48.FrequencyHz = local_48.FrequencyHz * pFVar1->FrequencyHz;
  local_48.BiPolar = true;
  local_48.PulseWidth = pFVar1->PulseWidth;
  local_48.FM.DataPtr = (pFVar1->Fm).DataPtr;
  local_48.FM.ArrayNum = (pFVar1->Fm).ArrayNum;
  local_48.FM._12_4_ = *(undefined4 *)&(pFVar1->Fm).field_0xc;
  local_48.GlideEaseFactor = pFVar1->GlideEaseFactor;
  local_48.AlignedBuffer.DataPtr = (pFVar1->AlignedBuffer).DataPtr;
  local_48.AlignedBuffer.ArrayNum = (pFVar1->AlignedBuffer).ArrayNum;
  local_48.AlignedBuffer._12_4_ = *(undefined4 *)&(pFVar1->AlignedBuffer).field_0xc;
  Metasound::Generators::
  TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>::
  operator()((TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>
              *)&param_2->field_0xc,&local_48);
  return *(float *)&param_2->field_0x4;
}

// `scalar_deleting_destructor' @ 14b1af7c0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,0>,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// VisitApplyEncoded<4,0,`Metasound::FSuperOscillatorOperator::Execute'::__l8::<lambda_1>_const_&,TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_&> @ 14b1af800

float __cdecl
UE::Core::Private::
VisitApplyEncoded<4,0,_Metasound::FSuperOscillatorOperator::Execute_::__l8::<lambda_1>_const_&,TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_&>
          (<lambda_1> *param_1,
          TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
          *param_2)

{
  FVoiceGeneratorArgs *pFVar1;
  FGeneratorArgs local_48;
  
  pFVar1 = param_1->Args;
  local_48.SampleRate = pFVar1->SampleRate;
  local_48.FrequencyHz =
       powf(pFVar1->DetuneMultiplier,
            (pFVar1->Entropy * *(float *)&param_2->field_0x8 + __real_3f800000) * *(float *)param_2)
  ;
  local_48.FrequencyHz = local_48.FrequencyHz * pFVar1->FrequencyHz;
  local_48.BiPolar = true;
  local_48.PulseWidth = pFVar1->PulseWidth;
  local_48.FM.DataPtr = (pFVar1->Fm).DataPtr;
  local_48.FM.ArrayNum = (pFVar1->Fm).ArrayNum;
  local_48.FM._12_4_ = *(undefined4 *)&(pFVar1->Fm).field_0xc;
  local_48.GlideEaseFactor = pFVar1->GlideEaseFactor;
  local_48.AlignedBuffer.DataPtr = (pFVar1->AlignedBuffer).DataPtr;
  local_48.AlignedBuffer.ArrayNum = (pFVar1->AlignedBuffer).ArrayNum;
  local_48.AlignedBuffer._12_4_ = *(undefined4 *)&(pFVar1->AlignedBuffer).field_0xc;
  Metasound::Generators::
  TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>
  ::operator()((TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>
                *)&param_2->field_0xc,&local_48);
  return *(float *)&param_2->field_0x4;
}

// VisitApplyEncoded<5,0,`Metasound::FSuperOscillatorOperator::Execute'::__l8::<lambda_1>_const_&,TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_&> @ 14b1af8a0

float __cdecl
UE::Core::Private::
VisitApplyEncoded<5,0,_Metasound::FSuperOscillatorOperator::Execute_::__l8::<lambda_1>_const_&,TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_&>
          (<lambda_1> *param_1,
          TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
          *param_2)

{
  FVoiceGeneratorArgs *pFVar1;
  FGeneratorArgs local_48;
  
  pFVar1 = param_1->Args;
  local_48.SampleRate = pFVar1->SampleRate;
  local_48.FrequencyHz =
       powf(pFVar1->DetuneMultiplier,
            (pFVar1->Entropy * *(float *)&param_2->field_0x8 + __real_3f800000) * *(float *)param_2)
  ;
  local_48.FrequencyHz = local_48.FrequencyHz * pFVar1->FrequencyHz;
  local_48.BiPolar = true;
  local_48.PulseWidth = pFVar1->PulseWidth;
  local_48.FM.DataPtr = (pFVar1->Fm).DataPtr;
  local_48.FM.ArrayNum = (pFVar1->Fm).ArrayNum;
  local_48.FM._12_4_ = *(undefined4 *)&(pFVar1->Fm).field_0xc;
  local_48.GlideEaseFactor = pFVar1->GlideEaseFactor;
  local_48.AlignedBuffer.DataPtr = (pFVar1->AlignedBuffer).DataPtr;
  local_48.AlignedBuffer.ArrayNum = (pFVar1->AlignedBuffer).ArrayNum;
  local_48.AlignedBuffer._12_4_ = *(undefined4 *)&(pFVar1->AlignedBuffer).field_0xc;
  Metasound::Generators::
  TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>
  ::operator()((TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>
                *)&param_2->field_0xc,&local_48);
  return *(float *)&param_2->field_0x4;
}

// `scalar_deleting_destructor' @ 14b1afab0

void * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,int>::
FCoverterOperatorFactory::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// VisitApplyEncoded<6,0,`Metasound::FSuperOscillatorOperator::Execute'::__l8::<lambda_1>_const_&,TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_&> @ 14b1afae0

float __cdecl
UE::Core::Private::
VisitApplyEncoded<6,0,_Metasound::FSuperOscillatorOperator::Execute_::__l8::<lambda_1>_const_&,TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_&>
          (<lambda_1> *param_1,
          TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
          *param_2)

{
  FVoiceGeneratorArgs *pFVar1;
  FGeneratorArgs local_48;
  
  pFVar1 = param_1->Args;
  local_48.SampleRate = pFVar1->SampleRate;
  local_48.FrequencyHz =
       powf(pFVar1->DetuneMultiplier,
            (pFVar1->Entropy * *(float *)&param_2->field_0x8 + __real_3f800000) * *(float *)param_2)
  ;
  local_48.FrequencyHz = local_48.FrequencyHz * pFVar1->FrequencyHz;
  local_48.BiPolar = true;
  local_48.PulseWidth = pFVar1->PulseWidth;
  local_48.FM.DataPtr = (pFVar1->Fm).DataPtr;
  local_48.FM.ArrayNum = (pFVar1->Fm).ArrayNum;
  local_48.FM._12_4_ = *(undefined4 *)&(pFVar1->Fm).field_0xc;
  local_48.GlideEaseFactor = pFVar1->GlideEaseFactor;
  local_48.AlignedBuffer.DataPtr = (pFVar1->AlignedBuffer).DataPtr;
  local_48.AlignedBuffer.ArrayNum = (pFVar1->AlignedBuffer).ArrayNum;
  local_48.AlignedBuffer._12_4_ = *(undefined4 *)&(pFVar1->AlignedBuffer).field_0xc;
  Metasound::Generators::
  TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>::
  operator()((TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>
              *)&param_2->field_0xc,&local_48);
  return *(float *)&param_2->field_0x4;
}

// `scalar_deleting_destructor' @ 14b1afcf0

void * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
FCoverterOperatorFactory::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// VisitApplyEncoded<7,0,`Metasound::FSuperOscillatorOperator::Execute'::__l8::<lambda_1>_const_&,TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_&> @ 14b1afd20

float __cdecl
UE::Core::Private::
VisitApplyEncoded<7,0,_Metasound::FSuperOscillatorOperator::Execute_::__l8::<lambda_1>_const_&,TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_&>
          (<lambda_1> *param_1,
          TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
          *param_2)

{
  FVoiceGeneratorArgs *pFVar1;
  FGeneratorArgs local_48;
  
  pFVar1 = param_1->Args;
  local_48.SampleRate = pFVar1->SampleRate;
  local_48.FrequencyHz =
       powf(pFVar1->DetuneMultiplier,
            (pFVar1->Entropy * *(float *)&param_2->field_0x8 + __real_3f800000) * *(float *)param_2)
  ;
  local_48.FrequencyHz = local_48.FrequencyHz * pFVar1->FrequencyHz;
  local_48.BiPolar = true;
  local_48.PulseWidth = pFVar1->PulseWidth;
  local_48.FM.DataPtr = (pFVar1->Fm).DataPtr;
  local_48.FM.ArrayNum = (pFVar1->Fm).ArrayNum;
  local_48.FM._12_4_ = *(undefined4 *)&(pFVar1->Fm).field_0xc;
  local_48.GlideEaseFactor = pFVar1->GlideEaseFactor;
  local_48.AlignedBuffer.DataPtr = (pFVar1->AlignedBuffer).DataPtr;
  local_48.AlignedBuffer.ArrayNum = (pFVar1->AlignedBuffer).ArrayNum;
  local_48.AlignedBuffer._12_4_ = *(undefined4 *)&(pFVar1->AlignedBuffer).field_0xc;
  Metasound::Generators::
  TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>
  ::operator()((TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>
                *)&param_2->field_0xc,&local_48);
  return *(float *)&param_2->field_0x4;
}

// `scalar_deleting_destructor' @ 14b1afdc0

void * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1afe20

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void * __thiscall
Metasound::TLiteralNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x168));
  FVertexInterface::~FVertexInterface((FVertexInterface *)((longlong)this + 0x110));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x108));
  FNodeClassMetadata::~FNodeClassMetadata((FNodeClassMetadata *)((longlong)this + 0x20));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x170);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b0030

void * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b0090

void * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,int>::
FCoverterOperatorFactory::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b00c0

void * __thiscall
Metasound::
TNodeFacade<Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b0420

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void * __thiscall
Metasound::TLiteralNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x168));
  FVertexInterface::~FVertexInterface((FVertexInterface *)((longlong)this + 0x110));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x108));
  FNodeClassMetadata::~FNodeClassMetadata((FNodeClassMetadata *)((longlong)this + 0x20));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x170);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b0490

void * __thiscall
Metasound::
TNodeFacade<Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b04f0

void * __thiscall
Metasound::FSuperOscillatorOperatorMono::_scalar_deleting_destructor_
          (FSuperOscillatorOperatorMono *this,uint param_1)

{
  Audio::FDynamicsProcessor::~FDynamicsProcessor(&this->Limiter);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->AudioBuffer).field_0x10);
  FSuperOscillatorOperator::~FSuperOscillatorOperator((FSuperOscillatorOperator *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x440);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b0580

void * __thiscall
Metasound::
TNodeFacade<Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b05e0

void * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b0640

void * __thiscall
Metasound::
TNodeFacade<Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b06a0

void * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b0870

void * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
FCoverterOperatorFactory::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b08a0

void * __thiscall
Metasound::TInputConstructorVertex<int>::_scalar_deleting_destructor_
          (TInputConstructorVertex<int> *this,uint param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  
  bVar1 = this->field_0x30;
  if (0xc < (ulonglong)bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar1])(&this->field_0x20);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b0930

void * __thiscall
Metasound::
TNodeFacade<Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b0990

void * __thiscall
Metasound::TInputConstructorVertex<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  
  bVar1 = *(byte *)((longlong)this + 0x30);
  if (0xc < (ulonglong)bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar1])((longlong)this + 0x20);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b0a20

void * __thiscall
Metasound::
TNodeFacade<Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b0c80

void * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b0ce0

void * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>'::__l3::FEnumHandler
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b0dd0

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FSuperOscillatorOperatorMono>_>::
_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FSuperOscillatorOperatorMono>_>
           *this,uint param_1)

{
  if (*(void **)&this->field_0xd0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xd0);
  }
  if (*(void **)&this->field_0xc0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xc0);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            (*(FMetasoundFrontendClassInput **)&this->field_0xb0,*(int *)&this->field_0xb8);
  if (*(void **)&this->field_0xb0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xb0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x10);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b0e60

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::FSuperOscillatorOperatorMono>,void>::
_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::FSuperOscillatorOperatorMono>,void>
           *this,uint param_1)

{
  if (*(void **)&this->field_0xd0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xd0);
  }
  if (*(void **)&this->field_0xc0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xc0);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            (*(FMetasoundFrontendClassInput **)&this->field_0xb0,*(int *)&this->field_0xb8);
  if (*(void **)&this->field_0xb0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xb0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x10);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b0ef0

void * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b0fc0

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FSuperOscillatorOperatorStereo>_>::
_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FSuperOscillatorOperatorStereo>_>
           *this,uint param_1)

{
  if (*(void **)&this->field_0xd0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xd0);
  }
  if (*(void **)&this->field_0xc0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xc0);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            (*(FMetasoundFrontendClassInput **)&this->field_0xb0,*(int *)&this->field_0xb8);
  if (*(void **)&this->field_0xb0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xb0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x10);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b1050

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::FSuperOscillatorOperatorStereo>,void>::
_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::FSuperOscillatorOperatorStereo>,void>
           *this,uint param_1)

{
  if (*(void **)&this->field_0xd0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xd0);
  }
  if (*(void **)&this->field_0xc0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xc0);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            (*(FMetasoundFrontendClassInput **)&this->field_0xb0,*(int *)&this->field_0xb8);
  if (*(void **)&this->field_0xb0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xb0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x10);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b17a0

void * __thiscall
Metasound::FSuperOscillatorOperatorStereo::_scalar_deleting_destructor_
          (FSuperOscillatorOperatorStereo *this,uint param_1)

{
  Audio::FDynamicsProcessor::~FDynamicsProcessor(&this->LimiterRight);
  Audio::FDynamicsProcessor::~FDynamicsProcessor(&this->LimiterLeft);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->AudioRight).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->AudioLeft).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->StereoWidth).field_0x10);
  FSuperOscillatorOperator::~FSuperOscillatorOperator((FSuperOscillatorOperator *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x578);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b1820

void * __thiscall
Metasound::TInputDataVertex<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  
  bVar1 = *(byte *)((longlong)this + 0x30);
  if (0xc < (ulonglong)bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar1])((longlong)this + 0x20);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b18b0

void * __thiscall
Metasound::TOutputNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b19b0

void * __thiscall
Metasound::TOutputNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b1ae0

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FSwitchAndRampOperator>_>::
_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FSwitchAndRampOperator>_> *this,
          uint param_1)

{
  if (*(void **)&this->field_0xd0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xd0);
  }
  if (*(void **)&this->field_0xc0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xc0);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            (*(FMetasoundFrontendClassInput **)&this->field_0xb0,*(int *)&this->field_0xb8);
  if (*(void **)&this->field_0xb0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xb0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x10);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b1b90

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::FSwitchAndRampOperator>,void>::
_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::FSwitchAndRampOperator>,void> *this,
          uint param_1)

{
  if (*(void **)&this->field_0xd0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xd0);
  }
  if (*(void **)&this->field_0xc0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xc0);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            (*(FMetasoundFrontendClassInput **)&this->field_0xb0,*(int *)&this->field_0xb8);
  if (*(void **)&this->field_0xb0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xb0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x10);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b1e90

void * __thiscall
Metasound::TOutputNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b1f20

void * __thiscall
Metasound::TOutputNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b1f80

void * __thiscall
Metasound::TNodeFacade<Metasound::FSuperOscillatorOperatorMono>::_scalar_deleting_destructor_
          (TNodeFacade<Metasound::FSuperOscillatorOperatorMono> *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x88);
  FNodeData::~FNodeData((FNodeData *)&this->field_0x8);
  *(undefined ***)this = &___7INode_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b1fe0

void * __thiscall
Metasound::
TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b20a0

void * __thiscall
Metasound::
TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b2110

void * __thiscall
Metasound::TNodeFacade<Metasound::FSuperOscillatorOperatorStereo>::_scalar_deleting_destructor_
          (TNodeFacade<Metasound::FSuperOscillatorOperatorStereo> *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x88);
  FNodeData::~FNodeData((FNodeData *)&this->field_0x8);
  *(undefined ***)this = &___7INode_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b2170

void * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b21d0

void * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b2210

void * __thiscall
Metasound::TNodeFacade<Metasound::FStereoDelayOperator>::_scalar_deleting_destructor_
          (TNodeFacade<Metasound::FStereoDelayOperator> *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x88);
  FNodeData::~FNodeData((FNodeData *)&this->field_0x8);
  *(undefined ***)this = &___7INode_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b2560

void * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b25e0

void * __thiscall
Metasound::TExecutableOperator<Metasound::FSwitchAndRampOperator>::_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::FSwitchAndRampOperator> *this,uint param_1)

{
  *this = (TExecutableOperator<Metasound::FSwitchAndRampOperator>)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b2a00

void * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b2a60

void * __thiscall
Metasound::FSwitchAndRampOperator::_scalar_deleting_destructor_
          (FSwitchAndRampOperator *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->AudioOut).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SmoothTime).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->AudioIn).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerIn).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b2ad0

void * __thiscall
Metasound::
TNodeFacade<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b2b30

void * __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  undefined8 *puVar1;
  
  *(undefined ***)this =
       &
       ___7__TSendOperator_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___SendNodePrivate_Metasound__6B_
  ;
  ResetSenderAndCleanupChannel(this);
  puVar1 = *(undefined8 **)((longlong)this + 0x80);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b2bb0

void * __thiscall
Metasound::TReceiveNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b2cf0

void * __thiscall
Metasound::
TNodeFacade<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b2d50

void * __thiscall
Metasound::TReceiveNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b2db0

void * __thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::_scalar_deleting_destructor_
          (void *this,uint param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)((longlong)this + 0x20);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b2e20

void * __thiscall
Metasound::TNodeFacade<Metasound::FSwitchAndRampOperator>::_scalar_deleting_destructor_
          (TNodeFacade<Metasound::FSwitchAndRampOperator> *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x88);
  FNodeData::~FNodeData((FNodeData *)&this->field_0x8);
  *(undefined ***)this = &___7INode_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b2e80

void * __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
FLiteralOperator::_scalar_deleting_destructor_(void *this,uint param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)((longlong)this + 0x20);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b2ee0

void * __thiscall
Metasound::TNodeFacade<Metasound::FSubharmonizerOperator>::_scalar_deleting_destructor_
          (TNodeFacade<Metasound::FSubharmonizerOperator> *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x88);
  FNodeData::~FNodeData((FNodeData *)&this->field_0x8);
  *(undefined ***)this = &___7INode_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b2f70

void * __thiscall
Metasound::TExecutableOperator<Metasound::FPlateReverbOperator>::_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::FPlateReverbOperator> *this,uint param_1)

{
  *this = (TExecutableOperator<Metasound::FPlateReverbOperator>)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b2fc0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &___7__TReferenceControllerBase__0A__SharedPointerInternals__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b3440

void * __thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)((longlong)this + 0x20);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b35a0

void * __thiscall
Metasound::FPlateReverbOperator::_scalar_deleting_destructor_
          (FPlateReverbOperator *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->WorkBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  Audio::FLateReflectionsFast::~FLateReflectionsFast(&this->Reverb);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Outputs).AudioRight.field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Outputs).AudioLeft.field_0x10);
  FInputs::~FInputs(&this->Inputs);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x428);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b3620

void * __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
FLiteralOperator::_scalar_deleting_destructor_(void *this,uint param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)((longlong)this + 0x20);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b3680

void * __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::_scalar_deleting_destructor_
          (void *this,uint param_1)

{
  ::operator_delete(*(void **)((longlong)this + 0x50),4);
  if (*(void **)((longlong)this + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x28));
  }
  ISender::~ISender(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b36e0

void * __thiscall
Metasound::TReceiver<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::_scalar_deleting_destructor_
          (void *this,uint param_1)

{
  ::operator_delete(*(void **)((longlong)this + 0x28),4);
  IReceiver::~IReceiver(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b37e0

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(void **)((longlong)this + 0xd0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xd0));
  }
  if (*(void **)((longlong)this + 0xc0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xc0));
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            (*(FMetasoundFrontendClassInput **)((longlong)this + 0xb0),
             *(int *)((longlong)this + 0xb8));
  if (*(void **)((longlong)this + 0xb0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xb0));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b3870

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(void **)((longlong)this + 0xd0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xd0));
  }
  if (*(void **)((longlong)this + 0xc0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xc0));
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            (*(FMetasoundFrontendClassInput **)((longlong)this + 0xb0),
             *(int *)((longlong)this + 0xb8));
  if (*(void **)((longlong)this + 0xb0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xb0));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b3930

void * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b3ae0

void * __thiscall
Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b3b20

void * __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  undefined8 *puVar1;
  
  *(undefined ***)this =
       &
       ___7__TSendOperator_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___SendNodePrivate_Metasound__6B_
  ;
  ResetSenderAndCleanupChannel(this);
  puVar1 = *(undefined8 **)((longlong)this + 0x80);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b3cd0

void * __thiscall
Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b3d10

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,int>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(void **)((longlong)this + 0xd0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xd0));
  }
  if (*(void **)((longlong)this + 0xc0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xc0));
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            (*(FMetasoundFrontendClassInput **)((longlong)this + 0xb0),
             *(int *)((longlong)this + 0xb8));
  if (*(void **)((longlong)this + 0xb0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xb0));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b3da0

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,int>,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(void **)((longlong)this + 0xd0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xd0));
  }
  if (*(void **)((longlong)this + 0xc0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xc0));
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            (*(FMetasoundFrontendClassInput **)((longlong)this + 0xb0),
             *(int *)((longlong)this + 0xb8));
  if (*(void **)((longlong)this + 0xb0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xb0));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b3f30

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>,SharedPointerInternals::DefaultDeleter<Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b3fa0

void * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,int>::FConverterOperator>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b4170

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TSendNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(void **)((longlong)this + 0xd0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xd0));
  }
  if (*(void **)((longlong)this + 0xc0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xc0));
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            (*(FMetasoundFrontendClassInput **)((longlong)this + 0xb0),
             *(int *)((longlong)this + 0xb8));
  if (*(void **)((longlong)this + 0xb0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xb0));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b4200

void * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,int>::
FConverterOperator::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound__H_Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b4260

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TSendNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(void **)((longlong)this + 0xd0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xd0));
  }
  if (*(void **)((longlong)this + 0xc0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xc0));
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            (*(FMetasoundFrontendClassInput **)((longlong)this + 0xb0),
             *(int *)((longlong)this + 0xb8));
  if (*(void **)((longlong)this + 0xb0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xb0));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b4310

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>,SharedPointerInternals::DefaultDeleter<Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b4350

void * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b43b0

void * __thiscall
Metasound::TNodeFacade<Metasound::FPlateReverbOperator>::_scalar_deleting_destructor_
          (TNodeFacade<Metasound::FPlateReverbOperator> *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x88);
  FNodeData::~FNodeData((FNodeData *)&this->field_0x8);
  *(undefined ***)this = &___7INode_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b44d0

void * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::FConverterOperator>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b4610

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TReceiveNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(void **)((longlong)this + 0xd0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xd0));
  }
  if (*(void **)((longlong)this + 0xc0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xc0));
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            (*(FMetasoundFrontendClassInput **)((longlong)this + 0xb0),
             *(int *)((longlong)this + 0xb8));
  if (*(void **)((longlong)this + 0xb0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xb0));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b46a0

void * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
FConverterOperator::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_HV__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b4790

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TReceiveNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(void **)((longlong)this + 0xd0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xd0));
  }
  if (*(void **)((longlong)this + 0xc0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xc0));
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            (*(FMetasoundFrontendClassInput **)((longlong)this + 0xb0),
             *(int *)((longlong)this + 0xb8));
  if (*(void **)((longlong)this + 0xb0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xb0));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b4820

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FPerlinControlRate>_>::
_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FPerlinControlRate>_> *this,
          uint param_1)

{
  if (*(void **)&this->field_0xd0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xd0);
  }
  if (*(void **)&this->field_0xc0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xc0);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            (*(FMetasoundFrontendClassInput **)&this->field_0xb0,*(int *)&this->field_0xb8);
  if (*(void **)&this->field_0xb0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xb0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x10);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b4930

void * __thiscall
Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b4970

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::FPerlinControlRate>,void>::
_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::FPerlinControlRate>,void> *this,
          uint param_1)

{
  if (*(void **)&this->field_0xd0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xd0);
  }
  if (*(void **)&this->field_0xc0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xc0);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            (*(FMetasoundFrontendClassInput **)&this->field_0xb0,*(int *)&this->field_0xb8);
  if (*(void **)&this->field_0xb0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xb0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x10);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b4a80

void * __thiscall
Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b4ac0

void * __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  ::operator_delete(*(void **)((longlong)this + 0x50),4);
  if (*(void **)((longlong)this + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x28));
  }
  ISender::~ISender(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b4b20

void * __thiscall
Metasound::TReceiver<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  ::operator_delete(*(void **)((longlong)this + 0x28),4);
  IReceiver::~IReceiver(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b4c10

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &___7__TReferenceControllerBase__0A__SharedPointerInternals__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b4c50

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FPerlinAudioRate>_>::
_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FPerlinAudioRate>_> *this,
          uint param_1)

{
  if (*(void **)&this->field_0xd0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xd0);
  }
  if (*(void **)&this->field_0xc0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xc0);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            (*(FMetasoundFrontendClassInput **)&this->field_0xb0,*(int *)&this->field_0xb8);
  if (*(void **)&this->field_0xb0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xb0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x10);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b4ce0

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::FPerlinAudioRate>,void>::
_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::FPerlinAudioRate>,void> *this,
          uint param_1)

{
  if (*(void **)&this->field_0xd0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xd0);
  }
  if (*(void **)&this->field_0xc0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xc0);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            (*(FMetasoundFrontendClassInput **)&this->field_0xb0,*(int *)&this->field_0xb8);
  if (*(void **)&this->field_0xb0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xb0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x10);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b4dd0

void * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b4fc0

void * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,int>::FConverterOperator>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b5100

void * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,int>::
FConverterOperator::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound__H_Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b5160

void * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b5250

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(void **)((longlong)this + 0xd0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xd0));
  }
  if (*(void **)((longlong)this + 0xc0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xc0));
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            (*(FMetasoundFrontendClassInput **)((longlong)this + 0xb0),
             *(int *)((longlong)this + 0xb8));
  if (*(void **)((longlong)this + 0xb0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xb0));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b52e0

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(void **)((longlong)this + 0xd0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xd0));
  }
  if (*(void **)((longlong)this + 0xc0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xc0));
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            (*(FMetasoundFrontendClassInput **)((longlong)this + 0xb0),
             *(int *)((longlong)this + 0xb8));
  if (*(void **)((longlong)this + 0xb0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xb0));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b5370

void * __thiscall
Metasound::TNodeFacade<Metasound::TRandomNodeOperator<int>_>::_scalar_deleting_destructor_
          (TNodeFacade<Metasound::TRandomNodeOperator<int>_> *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x88);
  FNodeData::~FNodeData((FNodeData *)&this->field_0x8);
  *(undefined ***)this = &___7INode_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b53d0

void * __thiscall
Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  undefined8 *puVar1;
  
  *(undefined ***)this =
       &
       ___7__TReceiverOperator_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___ReceiveNodePrivate_Metasound__6B_
  ;
  ResetReceiverAndCleanupChannel(this);
  puVar1 = *(undefined8 **)((longlong)this + 0xa0);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x60));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x40));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x20));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b5450

void * __thiscall
Metasound::TNodeFacade<Metasound::TRandomNodeOperator<float>_>::_scalar_deleting_destructor_
          (TNodeFacade<Metasound::TRandomNodeOperator<float>_> *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x88);
  FNodeData::~FNodeData((FNodeData *)&this->field_0x8);
  *(undefined ***)this = &___7INode_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b54e0

void * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::FConverterOperator>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b5620

void * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
FConverterOperator::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_HV__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b5680

void * __thiscall
Metasound::TNodeFacade<Metasound::TRandomNodeOperator<bool>_>::_scalar_deleting_destructor_
          (TNodeFacade<Metasound::TRandomNodeOperator<bool>_> *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x88);
  FNodeData::~FNodeData((FNodeData *)&this->field_0x8);
  *(undefined ***)this = &___7INode_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b5990

void * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>'::__l3::FEnumHandler::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b59c0

void * __thiscall
Metasound::TNodeFacade<Metasound::TRandomNodeOperator<Metasound::FTime>_>::
_scalar_deleting_destructor_
          (TNodeFacade<Metasound::TRandomNodeOperator<Metasound::FTime>_> *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x88);
  FNodeData::~FNodeData((FNodeData *)&this->field_0x8);
  *(undefined ***)this = &___7INode_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b5a20

void * __thiscall
Metasound::TInputDataVertex<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  
  bVar1 = *(byte *)((longlong)this + 0x30);
  if (0xc < (ulonglong)bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar1])((longlong)this + 0x20);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b5c60

void * __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b5c90

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,int>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(void **)((longlong)this + 0xd0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xd0));
  }
  if (*(void **)((longlong)this + 0xc0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xc0));
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            (*(FMetasoundFrontendClassInput **)((longlong)this + 0xb0),
             *(int *)((longlong)this + 0xb8));
  if (*(void **)((longlong)this + 0xb0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xb0));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b5d50

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,int>,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(void **)((longlong)this + 0xd0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xd0));
  }
  if (*(void **)((longlong)this + 0xc0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xc0));
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            (*(FMetasoundFrontendClassInput **)((longlong)this + 0xb0),
             *(int *)((longlong)this + 0xb8));
  if (*(void **)((longlong)this + 0xb0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xb0));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b5de0

void * __thiscall
Metasound::TExecutableOperator<Metasound::FRingModOperator>::_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::FRingModOperator> *this,uint param_1)

{
  *this = (TExecutableOperator<Metasound::FRingModOperator>)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b5fa0

void * __thiscall
Metasound::FRingModOperator::_scalar_deleting_destructor_(FRingModOperator *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->AudioOutput).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->AudioInputModulator).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->AudioInputCarrier).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b60a0

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TSendNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(void **)((longlong)this + 0xd0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xd0));
  }
  if (*(void **)((longlong)this + 0xc0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xc0));
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            (*(FMetasoundFrontendClassInput **)((longlong)this + 0xb0),
             *(int *)((longlong)this + 0xb8));
  if (*(void **)((longlong)this + 0xb0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xb0));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b6340

void * __thiscall
Metasound::TNodeFacade<Metasound::FStereoPannerOperator>::_scalar_deleting_destructor_
          (TNodeFacade<Metasound::FStereoPannerOperator> *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x88);
  FNodeData::~FNodeData((FNodeData *)&this->field_0x8);
  *(undefined ***)this = &___7INode_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b6400

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TSendNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(void **)((longlong)this + 0xd0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xd0));
  }
  if (*(void **)((longlong)this + 0xc0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xc0));
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            (*(FMetasoundFrontendClassInput **)((longlong)this + 0xb0),
             *(int *)((longlong)this + 0xb8));
  if (*(void **)((longlong)this + 0xb0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xb0));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b6490

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,int>::FCoverterOperatorFactory,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b6510

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::FCoverterOperatorFactory,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b6560

void * __thiscall
Metasound::TNodeFacade<Metasound::FRingModOperator>::_scalar_deleting_destructor_
          (TNodeFacade<Metasound::FRingModOperator> *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x88);
  FNodeData::~FNodeData((FNodeData *)&this->field_0x8);
  *(undefined ***)this = &___7INode_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b65c0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,int>::FCoverterOperatorFactory,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b6610

void * __thiscall
Metasound::TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b6760

void * __thiscall
Metasound::
TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b67a0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::FCoverterOperatorFactory,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b67e0

void * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b6840

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FPlateReverbOperator>_>::
_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FPlateReverbOperator>_> *this,
          uint param_1)

{
  if (*(void **)&this->field_0xd0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xd0);
  }
  if (*(void **)&this->field_0xc0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xc0);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            (*(FMetasoundFrontendClassInput **)&this->field_0xb0,*(int *)&this->field_0xb8);
  if (*(void **)&this->field_0xb0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xb0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x10);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b68d0

void * __thiscall
Metasound::TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  
  bVar1 = *(byte *)((longlong)this + 0x30);
  if (0xc < (ulonglong)bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar1])((longlong)this + 0x20);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b69f0

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::FPlateReverbOperator>,void>::
_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::FPlateReverbOperator>,void> *this,
          uint param_1)

{
  if (*(void **)&this->field_0xd0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xd0);
  }
  if (*(void **)&this->field_0xc0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xc0);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            (*(FMetasoundFrontendClassInput **)&this->field_0xb0,*(int *)&this->field_0xb8);
  if (*(void **)&this->field_0xb0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xb0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x10);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b6a80

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TReceiveNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(void **)((longlong)this + 0xd0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xd0));
  }
  if (*(void **)((longlong)this + 0xc0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xc0));
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            (*(FMetasoundFrontendClassInput **)((longlong)this + 0xb0),
             *(int *)((longlong)this + 0xb8));
  if (*(void **)((longlong)this + 0xb0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xb0));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b6d40

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TReceiveNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(void **)((longlong)this + 0xd0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xd0));
  }
  if (*(void **)((longlong)this + 0xc0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xc0));
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            (*(FMetasoundFrontendClassInput **)((longlong)this + 0xb0),
             *(int *)((longlong)this + 0xb8));
  if (*(void **)((longlong)this + 0xb0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xb0));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b6dd0

void * __thiscall
Metasound::TOutputDataVertex<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b6e00

void * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b6e50

void * __thiscall
Metasound::TExecutableOperator<Metasound::FSampleAndHoldOperator>::_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::FSampleAndHoldOperator> *this,uint param_1)

{
  *this = (TExecutableOperator<Metasound::FSampleAndHoldOperator>)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b71b0

void * __thiscall
Metasound::FSampleAndHoldOperator::_scalar_deleting_destructor_
          (FSampleAndHoldOperator *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->AudioOutput).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerSampleAndHold).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->AudioInput).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b7350

void * __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  
  bVar1 = *(byte *)((longlong)this + 0x18);
  if (0xc < (ulonglong)bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar1])((longlong)this + 8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b73e0

void * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b74b0

void * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::FFactory::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  
  bVar1 = *(byte *)((longlong)this + 0x18);
  if (0xc < (ulonglong)bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar1])((longlong)this + 8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b7570

void * __thiscall
Metasound::TExecutableOperator<Metasound::TRandomNodeOperator<Metasound::FTime>_>::
_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::TRandomNodeOperator<Metasound::FTime>_> *this,uint param_1
          )

{
  *this = (TExecutableOperator<Metasound::TRandomNodeOperator<Metasound::FTime>_>)
          &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b75b0

void * __thiscall
Metasound::
TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b7a10

void * __thiscall
Metasound::TRandomNodeOperator<Metasound::FTime>::_scalar_deleting_destructor_
          (TRandomNodeOperator<Metasound::FTime> *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerOutOnReset).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerOutOnNext).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->MaxValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->MinValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SeedValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->ResetTrigger).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->NextTrigger).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x118);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b7ae0

void * __thiscall
Metasound::TExecutableOperator<Metasound::TRandomNodeOperator<bool>_>::_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::TRandomNodeOperator<bool>_> *this,uint param_1)

{
  *this = (TExecutableOperator<Metasound::TRandomNodeOperator<bool>_>)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b7b50

void * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b80a0

void * __thiscall
Metasound::TRandomNodeOperator<bool>::_scalar_deleting_destructor_
          (TRandomNodeOperator<bool> *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerOutOnReset).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerOutOnNext).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->MaxValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->MinValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SeedValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->ResetTrigger).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->NextTrigger).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x118);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b8170

void * __thiscall
Metasound::TExecutableOperator<Metasound::TRandomNodeOperator<float>_>::_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::TRandomNodeOperator<float>_> *this,uint param_1)

{
  *this = (TExecutableOperator<Metasound::TRandomNodeOperator<float>_>)&___7IOperator_Metasound__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b81b0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>'::__l3::FEnumHandler,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b8620

void * __thiscall
Metasound::TRandomNodeOperator<float>::_scalar_deleting_destructor_
          (TRandomNodeOperator<float> *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerOutOnReset).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerOutOnNext).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->MaxValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->MinValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SeedValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->ResetTrigger).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->NextTrigger).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x118);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b86f0

void * __thiscall
Metasound::TExecutableOperator<Metasound::TRandomNodeOperator<int>_>::_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::TRandomNodeOperator<int>_> *this,uint param_1)

{
  *this = (TExecutableOperator<Metasound::TRandomNodeOperator<int>_>)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b8b50

void * __thiscall
Metasound::TRandomNodeOperator<int>::_scalar_deleting_destructor_
          (TRandomNodeOperator<int> *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerOutOnReset).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerOutOnNext).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->MaxValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->MinValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SeedValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->ResetTrigger).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->NextTrigger).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x118);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b8bf0

void * __thiscall
Metasound::ReceiveNodePrivate::
TReceiverOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  undefined8 *puVar1;
  
  *(undefined ***)this =
       &
       ___7__TReceiverOperator_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___ReceiveNodePrivate_Metasound__6B_
  ;
  ResetReceiverAndCleanupChannel(this);
  puVar1 = *(undefined8 **)((longlong)this + 0xa0);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x60));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x40));
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x20));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b8d60

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TRandomNodeOperator<int>_>_>::
_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TRandomNodeOperator<int>_>_>
           *this,uint param_1)

{
  if (*(void **)&this->field_0xd0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xd0);
  }
  if (*(void **)&this->field_0xc0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xc0);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            (*(FMetasoundFrontendClassInput **)&this->field_0xb0,*(int *)&this->field_0xb8);
  if (*(void **)&this->field_0xb0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xb0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x10);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b8e20

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TRandomNodeOperator<int>_>,void>::
_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TRandomNodeOperator<int>_>,void>
           *this,uint param_1)

{
  if (*(void **)&this->field_0xd0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xd0);
  }
  if (*(void **)&this->field_0xc0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xc0);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            (*(FMetasoundFrontendClassInput **)&this->field_0xb0,*(int *)&this->field_0xb8);
  if (*(void **)&this->field_0xb0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xb0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x10);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b9030

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b94e0

void * __thiscall
Metasound::TNodeFacade<Metasound::FSampleAndHoldOperator>::_scalar_deleting_destructor_
          (TNodeFacade<Metasound::FSampleAndHoldOperator> *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x88);
  FNodeData::~FNodeData((FNodeData *)&this->field_0x8);
  *(undefined ***)this = &___7INode_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b9540

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b9580

void * __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)((longlong)this + 0x30));
  ::operator_delete(*(void **)((longlong)this + 0x28),4);
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
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b97a0

void * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::_scalar_deleting_destructor_
          (void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x18));
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b97f0

void * __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b98b0

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TRandomNodeOperator<float>_>_>::
_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TRandomNodeOperator<float>_>_>
           *this,uint param_1)

{
  if (*(void **)&this->field_0xd0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xd0);
  }
  if (*(void **)&this->field_0xc0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xc0);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            (*(FMetasoundFrontendClassInput **)&this->field_0xb0,*(int *)&this->field_0xb8);
  if (*(void **)&this->field_0xb0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xb0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x10);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b9940

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TRandomNodeOperator<float>_>,void>::
_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TRandomNodeOperator<float>_>,void>
           *this,uint param_1)

{
  if (*(void **)&this->field_0xd0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xd0);
  }
  if (*(void **)&this->field_0xc0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xc0);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            (*(FMetasoundFrontendClassInput **)&this->field_0xb0,*(int *)&this->field_0xb8);
  if (*(void **)&this->field_0xb0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xb0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x10);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b9a00

void * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b9a90

void * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,int>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b9af0

void * __thiscall
Metasound::
TNodeFacade<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b9b50

void * __thiscall
Metasound::TSendNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x98));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x88));
  FNodeData::~FNodeData((FNodeData *)((longlong)this + 8));
  *(undefined ***)this = &___7INode_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b9c40

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TRandomNodeOperator<bool>_>_>::
_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TRandomNodeOperator<bool>_>_>
           *this,uint param_1)

{
  if (*(void **)&this->field_0xd0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xd0);
  }
  if (*(void **)&this->field_0xc0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xc0);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            (*(FMetasoundFrontendClassInput **)&this->field_0xb0,*(int *)&this->field_0xb8);
  if (*(void **)&this->field_0xb0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xb0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x10);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b9cd0

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TRandomNodeOperator<bool>_>,void>::
_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TRandomNodeOperator<bool>_>,void>
           *this,uint param_1)

{
  if (*(void **)&this->field_0xd0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xd0);
  }
  if (*(void **)&this->field_0xc0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xc0);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            (*(FMetasoundFrontendClassInput **)&this->field_0xb0,*(int *)&this->field_0xb8);
  if (*(void **)&this->field_0xb0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xb0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x10);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1b9de0

void * __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  
  bVar1 = *(byte *)((longlong)this + 0x18);
  if (0xc < (ulonglong)bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar1])((longlong)this + 8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1ba200

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>,0,void>'
::__l2::FDataTypeRegistryEntry::_scalar_deleting_destructor_(void *this,uint param_1)

{
  Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
  ~FDataTypeRegistryEntryBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x640);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1ba240

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TRandomNodeOperator<Metasound::FTime>_>_>::
_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TRandomNodeOperator<Metasound::FTime>_>_>
           *this,uint param_1)

{
  if (*(void **)&this->field_0xd0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xd0);
  }
  if (*(void **)&this->field_0xc0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xc0);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            (*(FMetasoundFrontendClassInput **)&this->field_0xb0,*(int *)&this->field_0xb8);
  if (*(void **)&this->field_0xb0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xb0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x10);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1ba2d0

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TRandomNodeOperator<Metasound::FTime>_>,void>::
_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TRandomNodeOperator<Metasound::FTime>_>,void>
           *this,uint param_1)

{
  if (*(void **)&this->field_0xd0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xd0);
  }
  if (*(void **)&this->field_0xc0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xc0);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            (*(FMetasoundFrontendClassInput **)&this->field_0xb0,*(int *)&this->field_0xb8);
  if (*(void **)&this->field_0xb0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xb0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x10);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1ba360

void * __thiscall
Metasound::TNodeFacade<Metasound::FSemitoneToFrequencyMultiplierOperator>::
_scalar_deleting_destructor_
          (TNodeFacade<Metasound::FSemitoneToFrequencyMultiplierOperator> *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x88);
  FNodeData::~FNodeData((FNodeData *)&this->field_0x8);
  *(undefined ***)this = &___7INode_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1ba430

void * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::FFactory::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  
  bVar1 = *(byte *)((longlong)this + 0x18);
  if (0xc < (ulonglong)bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar1])((longlong)this + 8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1ba4f0

void * __thiscall
Metasound::
TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1ba550

void * __thiscall
Metasound::FMetasoundStandardNodesModule::_scalar_deleting_destructor_
          (FMetasoundStandardNodesModule *this,uint param_1)

{
  *this = (FMetasoundStandardNodesModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1ba590

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>'::__l3::FEnumHandler,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1ba5d0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,1>,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1ba720

void * __thiscall
Metasound::
TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  
  bVar1 = *(byte *)((longlong)this + 0x30);
  if (0xc < (ulonglong)bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar1])((longlong)this + 0x20);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1ba7d0

void * __thiscall
Metasound::TExecutableOperator<Metasound::FPerlinControlRate>::_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::FPerlinControlRate> *this,uint param_1)

{
  *this = (TExecutableOperator<Metasound::FPerlinControlRate>)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1bacf0

void * __thiscall
Metasound::TOutputDataVertex<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1badb0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>,0,void>'
::__l2::FDataTypeRegistryEntry::_scalar_deleting_destructor_(void *this,uint param_1)

{
  Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
  ~FDataTypeRegistryEntryBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x640);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1badf0

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FRingModOperator>_>::
_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FRingModOperator>_> *this,
          uint param_1)

{
  if (*(void **)&this->field_0xd0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xd0);
  }
  if (*(void **)&this->field_0xc0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xc0);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            (*(FMetasoundFrontendClassInput **)&this->field_0xb0,*(int *)&this->field_0xb8);
  if (*(void **)&this->field_0xb0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xb0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x10);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1bae80

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::FRingModOperator>,void>::
_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::FRingModOperator>,void> *this,
          uint param_1)

{
  if (*(void **)&this->field_0xd0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xd0);
  }
  if (*(void **)&this->field_0xc0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xc0);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            (*(FMetasoundFrontendClassInput **)&this->field_0xb0,*(int *)&this->field_0xb8);
  if (*(void **)&this->field_0xb0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xb0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x10);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1baf10

void * __thiscall
Metasound::TBasePerlinNoiseOperator<float,Metasound::FPerlinControlRate>::
_scalar_deleting_destructor_
          (TBasePerlinNoiseOperator<float,Metasound::FPerlinControlRate> *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputNormalized).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputScaled).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Pins).MaxValue.field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Pins).MinValue.field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Pins).Octaves.field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Pins).X.field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1bb140

void * __thiscall
Metasound::FPerlinControlRate::_scalar_deleting_destructor_(FPerlinControlRate *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&this->field_0xd0);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&this->field_0xb0);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&this->field_0x88);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&this->field_0x68);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&this->field_0x48);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&this->field_0x28);
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1bb600

void * __thiscall
Metasound::TExecutableOperator<Metasound::FPerlinAudioRate>::_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::FPerlinAudioRate> *this,uint param_1)

{
  *this = (TExecutableOperator<Metasound::FPerlinAudioRate>)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1bb940

void * __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)((longlong)this + 0x30));
  ::operator_delete(*(void **)((longlong)this + 0x28),4);
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
    ::operator_delete(this,0x78);
  }
  return this;
}

// AttemptToRegisterConverter<int,Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>,0> @ 14b1bd210

void __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
AttemptToRegisterConverter<int,Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>,0>
          (FModuleInfo *param_1)

{
  return;
}

// AttemptToRegisterConverter<int,Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>,0> @ 14b1bd220

void __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
AttemptToRegisterConverter<int,Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>,0>
          (FModuleInfo *param_1)

{
  return;
}

// AttemptToRegisterConverter<int,Metasound::TEnum<enum_Metasound::EPanningLaw,0>,1> @ 14b1bd230

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
AttemptToRegisterConverter<int,Metasound::TEnum<enum_Metasound::EPanningLaw,0>,1>
          (FModuleInfo *param_1)

{
  char cVar1;
  INodeClassRegistry *pIVar2;
  FName *pFVar3;
  FName *pFVar4;
  FText *pFVar5;
  FName local_res10;
  FName local_res18;
  undefined1 local_78 [24];
  FName local_60;
  TRefCountPtr<ITextData> local_58;
  uint local_50;
  undefined2 local_48;
  FName local_40;
  FName local_38;
  FNodeClassRegistryKey local_30;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetAutoConverterNodeMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetAutoConverterNodeMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetAutoConverterNodeMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar3 = GetMetasoundDataTypeName<int>();
      local_78._0_8_ = *pFVar3;
      pFVar5 = TDataReferenceTypeInfo<int>::GetTypeDisplayText();
      local_78._8_8_ = (pFVar5->TextData).Reference;
      if ((ITextData *)local_78._8_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_78._8_8_ + 8))(local_78._8_8_,&local_res10);
      }
      local_78._16_4_ = pFVar5->Flags;
      pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>();
      local_60 = *pFVar3;
      pFVar5 = GetMetasoundDataTypeDisplayText<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>();
      local_58.Reference = (pFVar5->TextData).Reference;
      if (local_58.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58.Reference + 8))(local_58.Reference,&local_res10);
      }
      local_50 = pFVar5->Flags;
      local_48._0_1_ = false;
      local_48._1_1_ = true;
      AutoConverterNodePrivate::CreateAutoConverterNodeMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetAutoConverterNodeMetadata(void)'
                  ::__l2::Info,(FConvertDataTypeInfo *)local_78);
      if (local_58.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58.Reference + 0x10))();
      }
      if ((ITextData *)local_78._8_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_78._8_8_ + 0x10))();
      }
      atexit(`Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
             GetAutoConverterNodeMetadata'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetAutoConverterNodeMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassRegistryKey::FNodeClassRegistryKey
            (&local_30,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetAutoConverterNodeMetadata(void)'
              ::__l2::Info);
  pIVar2 = INodeClassRegistry::Get();
  cVar1 = (**(code **)((longlong)*pIVar2 + 0x40))(pIVar2,&local_30);
  if (cVar1 == '\0') {
    local_res10 = (FName)::operator_new(0xf0);
    if (local_res10 == (FName)0x0) {
      local_res10.ComparisonIndex.Value = 0;
      local_res10.Number = 0;
    }
    else {
      NodeRegistrationPrivate::FNodeRegistryEntryBase::FNodeRegistryEntryBase
                ((FNodeRegistryEntryBase *)local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetAutoConverterNodeMetadata(void)'
                  ::__l2::Info,param_1);
      *(undefined ***)local_res10 =
           &
           ___7__TNodeRegistryEntry_V__TAutoConverterNode_HV__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
      ;
    }
    NodeRegistrationPrivate::RegisterNodeInternal
              ((TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
                *)&local_res10);
    if (local_res10 != (FName)0x0) {
      (*(code *)**(undefined8 **)local_res10)(local_res10,1);
    }
    pFVar3 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::GetOutputName
                       ();
    pFVar4 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::GetInputName
                       ();
    if (`bool___cdecl_RegisterConversionNode<Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EPanningLaw,0>_>,int,Metasound::TEnum<Metasound::EPanningLaw,0>_>(FName_const&___ptr64,FName_const&___ptr64,Metasound::FNodeClassMetadata_const&___ptr64)'
        ::__l2::bAlreadyRegisteredThisConverter == false) {
      `bool___cdecl_RegisterConversionNode<Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EPanningLaw,0>_>,int,Metasound::TEnum<Metasound::EPanningLaw,0>_>(FName_const&___ptr64,FName_const&___ptr64,Metasound::FNodeClassMetadata_const&___ptr64)'
      ::__l2::bAlreadyRegisteredThisConverter = true;
      ::FName::FName(&local_res10,TDataReferenceTypeInfo<int>::TypeName);
      ::FName::FName(&local_res18,
                     TDataReferenceTypeInfo<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
                     TypeName);
      local_40 = local_res10;
      local_38 = local_res18;
      local_78._0_8_ = *pFVar4;
      local_78._8_8_ = *pFVar3;
      FNodeClassRegistryKey::FNodeClassRegistryKey
                ((FNodeClassRegistryKey *)(local_78 + 0x10),
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetAutoConverterNodeMetadata(void)'
                  ::__l2::Info);
      pIVar2 = INodeClassRegistry::Get();
      (**(code **)((longlong)*pIVar2 + 200))(pIVar2,&local_40,local_78);
    }
    else if (3 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<4>
                (&`bool___cdecl_RegisterConversionNode<Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EPanningLaw,0>_>,int,Metasound::TEnum<Metasound::EPanningLaw,0>_>(FName_const&___ptr64,FName_const&___ptr64,Metasound::FNodeClassMetadata_const&___ptr64)'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
  }
  return;
}

// AttemptToRegisterConverter<int,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,1> @ 14b1bd4a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
AttemptToRegisterConverter<int,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,1>
          (FModuleInfo *param_1)

{
  char cVar1;
  INodeClassRegistry *pIVar2;
  FName *pFVar3;
  FName *pFVar4;
  FText *pFVar5;
  FName local_res10;
  FName local_res18;
  undefined1 local_78 [24];
  FName local_60;
  TRefCountPtr<ITextData> local_58;
  uint local_50;
  undefined2 local_48;
  FName local_40;
  FName local_38;
  FNodeClassRegistryKey local_30;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetAutoConverterNodeMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetAutoConverterNodeMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetAutoConverterNodeMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar3 = GetMetasoundDataTypeName<int>();
      local_78._0_8_ = *pFVar3;
      pFVar5 = TDataReferenceTypeInfo<int>::GetTypeDisplayText();
      local_78._8_8_ = (pFVar5->TextData).Reference;
      if ((ITextData *)local_78._8_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_78._8_8_ + 8))(local_78._8_8_,&local_res10);
      }
      local_78._16_4_ = pFVar5->Flags;
      pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>();
      local_60 = *pFVar3;
      pFVar5 = GetMetasoundDataTypeDisplayText<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>
                         ();
      local_58.Reference = (pFVar5->TextData).Reference;
      if (local_58.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58.Reference + 8))(local_58.Reference,&local_res10);
      }
      local_50 = pFVar5->Flags;
      local_48._0_1_ = false;
      local_48._1_1_ = true;
      AutoConverterNodePrivate::CreateAutoConverterNodeMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetAutoConverterNodeMetadata(void)'
                  ::__l2::Info,(FConvertDataTypeInfo *)local_78);
      if (local_58.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58.Reference + 0x10))();
      }
      if ((ITextData *)local_78._8_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_78._8_8_ + 0x10))();
      }
      atexit(`Metasound::
             TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
             GetAutoConverterNodeMetadata'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetAutoConverterNodeMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassRegistryKey::FNodeClassRegistryKey
            (&local_30,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetAutoConverterNodeMetadata(void)'
              ::__l2::Info);
  pIVar2 = INodeClassRegistry::Get();
  cVar1 = (**(code **)((longlong)*pIVar2 + 0x40))(pIVar2,&local_30);
  if (cVar1 == '\0') {
    local_res10 = (FName)::operator_new(0xf0);
    if (local_res10 == (FName)0x0) {
      local_res10.ComparisonIndex.Value = 0;
      local_res10.Number = 0;
    }
    else {
      NodeRegistrationPrivate::FNodeRegistryEntryBase::FNodeRegistryEntryBase
                ((FNodeRegistryEntryBase *)local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetAutoConverterNodeMetadata(void)'
                  ::__l2::Info,param_1);
      *(undefined ***)local_res10 =
           &
           ___7__TNodeRegistryEntry_V__TAutoConverterNode_HV__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
      ;
    }
    NodeRegistrationPrivate::RegisterNodeInternal
              ((TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
                *)&local_res10);
    if (local_res10 != (FName)0x0) {
      (*(code *)**(undefined8 **)local_res10)(local_res10,1);
    }
    pFVar3 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
             GetOutputName();
    pFVar4 = TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
             GetInputName();
    if (`bool___cdecl_RegisterConversionNode<Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EStereoDelayMode,0>_>,int,Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(FName_const&___ptr64,FName_const&___ptr64,Metasound::FNodeClassMetadata_const&___ptr64)'
        ::__l2::bAlreadyRegisteredThisConverter == false) {
      `bool___cdecl_RegisterConversionNode<Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EStereoDelayMode,0>_>,int,Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(FName_const&___ptr64,FName_const&___ptr64,Metasound::FNodeClassMetadata_const&___ptr64)'
      ::__l2::bAlreadyRegisteredThisConverter = true;
      ::FName::FName(&local_res10,TDataReferenceTypeInfo<int>::TypeName);
      ::FName::FName(&local_res18,
                     TDataReferenceTypeInfo<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
                     TypeName);
      local_40 = local_res10;
      local_38 = local_res18;
      local_78._0_8_ = *pFVar4;
      local_78._8_8_ = *pFVar3;
      FNodeClassRegistryKey::FNodeClassRegistryKey
                ((FNodeClassRegistryKey *)(local_78 + 0x10),
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetAutoConverterNodeMetadata(void)'
                  ::__l2::Info);
      pIVar2 = INodeClassRegistry::Get();
      (**(code **)((longlong)*pIVar2 + 200))(pIVar2,&local_40,local_78);
    }
    else if (3 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<4>
                (&`bool___cdecl_RegisterConversionNode<Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EStereoDelayMode,0>_>,int,Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(FName_const&___ptr64,FName_const&___ptr64,Metasound::FNodeClassMetadata_const&___ptr64)'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
  }
  return;
}

// AttemptToRegisterConverter<float,Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>,0> @ 14b1bd710

void __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
AttemptToRegisterConverter<float,Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>,0>
          (FModuleInfo *param_1)

{
  return;
}

// AttemptToRegisterConverter<float,Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>,0> @ 14b1bd720

void __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
AttemptToRegisterConverter<float,Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>,0>
          (FModuleInfo *param_1)

{
  return;
}

// AttemptToRegisterConverter<float,Metasound::TEnum<enum_Metasound::EPanningLaw,0>,0> @ 14b1bd730

void __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
AttemptToRegisterConverter<float,Metasound::TEnum<enum_Metasound::EPanningLaw,0>,0>
          (FModuleInfo *param_1)

{
  return;
}

// AttemptToRegisterConverter<float,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,0> @ 14b1bd740

void __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
AttemptToRegisterConverter<float,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,0>
          (FModuleInfo *param_1)

{
  return;
}

// AttemptToRegisterConverter<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>,int,0> @ 14b1bd750

void __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
AttemptToRegisterConverter<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>,int,0>
          (FModuleInfo *param_1)

{
  return;
}

// AttemptToRegisterConverter<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>,float,0> @ 14b1bd760

void __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
AttemptToRegisterConverter<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>,float,0>
          (FModuleInfo *param_1)

{
  return;
}

// AttemptToRegisterConverter<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>,FString,0> @ 14b1bd770

void __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
AttemptToRegisterConverter<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>,FString,0>
          (FModuleInfo *param_1)

{
  return;
}

// AttemptToRegisterConverter<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>,bool,0> @ 14b1bd780

void __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
AttemptToRegisterConverter<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>,bool,0>
          (FModuleInfo *param_1)

{
  return;
}

// AttemptToRegisterConverter<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>,int,0> @ 14b1bd790

void __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
AttemptToRegisterConverter<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>,int,0>
          (FModuleInfo *param_1)

{
  return;
}

// AttemptToRegisterConverter<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>,float,0> @ 14b1bd7a0

void __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
AttemptToRegisterConverter<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>,float,0>
          (FModuleInfo *param_1)

{
  return;
}

// AttemptToRegisterConverter<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>,FString,0> @ 14b1bd7b0

void __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
AttemptToRegisterConverter<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>,FString,0>
          (FModuleInfo *param_1)

{
  return;
}

// AttemptToRegisterConverter<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>,bool,0> @ 14b1bd7c0

void __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
AttemptToRegisterConverter<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>,bool,0>
          (FModuleInfo *param_1)

{
  return;
}

// AttemptToRegisterConverter<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,int,1> @ 14b1bd7d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
AttemptToRegisterConverter<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,int,1>
          (FModuleInfo *param_1)

{
  char cVar1;
  INodeClassRegistry *pIVar2;
  FName *pFVar3;
  FName *pFVar4;
  FText *pFVar5;
  FName local_res10;
  FName local_res18;
  undefined1 local_78 [24];
  FName local_60;
  TRefCountPtr<ITextData> local_58;
  uint local_50;
  undefined2 local_48;
  FName local_40;
  FName local_38;
  FNodeClassRegistryKey local_30;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EPanningLaw,0>,int>::GetAutoConverterNodeMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EPanningLaw,0>,int>::GetAutoConverterNodeMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EPanningLaw,0>,int>::GetAutoConverterNodeMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>();
      local_78._0_8_ = *pFVar3;
      pFVar5 = GetMetasoundDataTypeDisplayText<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>();
      local_78._8_8_ = (pFVar5->TextData).Reference;
      if ((ITextData *)local_78._8_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_78._8_8_ + 8))(local_78._8_8_,&local_res10);
      }
      local_78._16_4_ = pFVar5->Flags;
      pFVar3 = GetMetasoundDataTypeName<int>();
      local_60 = *pFVar3;
      pFVar5 = TDataReferenceTypeInfo<int>::GetTypeDisplayText();
      local_58.Reference = (pFVar5->TextData).Reference;
      if (local_58.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58.Reference + 8))(local_58.Reference,&local_res10);
      }
      local_50 = pFVar5->Flags;
      local_48._0_1_ = true;
      local_48._1_1_ = false;
      AutoConverterNodePrivate::CreateAutoConverterNodeMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EPanningLaw,0>,int>::GetAutoConverterNodeMetadata(void)'
                  ::__l2::Info,(FConvertDataTypeInfo *)local_78);
      if (local_58.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58.Reference + 0x10))();
      }
      if ((ITextData *)local_78._8_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_78._8_8_ + 0x10))();
      }
      atexit(`Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,int>::
             GetAutoConverterNodeMetadata'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EPanningLaw,0>,int>::GetAutoConverterNodeMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassRegistryKey::FNodeClassRegistryKey
            (&local_30,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EPanningLaw,0>,int>::GetAutoConverterNodeMetadata(void)'
              ::__l2::Info);
  pIVar2 = INodeClassRegistry::Get();
  cVar1 = (**(code **)((longlong)*pIVar2 + 0x40))(pIVar2,&local_30);
  if (cVar1 == '\0') {
    local_res10 = (FName)::operator_new(0xf0);
    if (local_res10 == (FName)0x0) {
      local_res10.ComparisonIndex.Value = 0;
      local_res10.Number = 0;
    }
    else {
      NodeRegistrationPrivate::FNodeRegistryEntryBase::FNodeRegistryEntryBase
                ((FNodeRegistryEntryBase *)local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EPanningLaw,0>,int>::GetAutoConverterNodeMetadata(void)'
                  ::__l2::Info,param_1);
      *(undefined ***)local_res10 =
           &
           ___7__TNodeRegistryEntry_V__TAutoConverterNode_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound__H_Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
      ;
    }
    NodeRegistrationPrivate::RegisterNodeInternal
              ((TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
                *)&local_res10);
    if (local_res10 != (FName)0x0) {
      (*(code *)**(undefined8 **)local_res10)(local_res10,1);
    }
    pFVar3 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,int>::GetOutputName
                       ();
    pFVar4 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,int>::GetInputName()
    ;
    if (`bool___cdecl_RegisterConversionNode<Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EPanningLaw,0>,int>,Metasound::TEnum<Metasound::EPanningLaw,0>,int>(FName_const&___ptr64,FName_const&___ptr64,Metasound::FNodeClassMetadata_const&___ptr64)'
        ::__l2::bAlreadyRegisteredThisConverter == false) {
      `bool___cdecl_RegisterConversionNode<Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EPanningLaw,0>,int>,Metasound::TEnum<Metasound::EPanningLaw,0>,int>(FName_const&___ptr64,FName_const&___ptr64,Metasound::FNodeClassMetadata_const&___ptr64)'
      ::__l2::bAlreadyRegisteredThisConverter = true;
      ::FName::FName(&local_res10,
                     TDataReferenceTypeInfo<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
                     TypeName);
      ::FName::FName(&local_res18,TDataReferenceTypeInfo<int>::TypeName);
      local_40 = local_res10;
      local_38 = local_res18;
      local_78._0_8_ = *pFVar4;
      local_78._8_8_ = *pFVar3;
      FNodeClassRegistryKey::FNodeClassRegistryKey
                ((FNodeClassRegistryKey *)(local_78 + 0x10),
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EPanningLaw,0>,int>::GetAutoConverterNodeMetadata(void)'
                  ::__l2::Info);
      pIVar2 = INodeClassRegistry::Get();
      (**(code **)((longlong)*pIVar2 + 200))(pIVar2,&local_40,local_78);
    }
    else if (3 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<4>
                (&`bool___cdecl_RegisterConversionNode<Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EPanningLaw,0>,int>,Metasound::TEnum<Metasound::EPanningLaw,0>,int>(FName_const&___ptr64,FName_const&___ptr64,Metasound::FNodeClassMetadata_const&___ptr64)'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
  }
  return;
}

// AttemptToRegisterConverter<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,float,0> @ 14b1bda40

void __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
AttemptToRegisterConverter<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,float,0>
          (FModuleInfo *param_1)

{
  return;
}

// AttemptToRegisterConverter<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,FString,0> @ 14b1bda50

void __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
AttemptToRegisterConverter<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,FString,0>
          (FModuleInfo *param_1)

{
  return;
}

// AttemptToRegisterConverter<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,bool,0> @ 14b1bda60

void __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
AttemptToRegisterConverter<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,bool,0>
          (FModuleInfo *param_1)

{
  return;
}

// AttemptToRegisterConverter<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,int,1> @ 14b1bda70

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
AttemptToRegisterConverter<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,int,1>
          (FModuleInfo *param_1)

{
  char cVar1;
  INodeClassRegistry *pIVar2;
  FName *pFVar3;
  FName *pFVar4;
  FText *pFVar5;
  FName local_res10;
  FName local_res18;
  undefined1 local_78 [24];
  FName local_60;
  TRefCountPtr<ITextData> local_58;
  uint local_50;
  undefined2 local_48;
  FName local_40;
  FName local_38;
  FNodeClassRegistryKey local_30;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EStereoDelayMode,0>,int>::GetAutoConverterNodeMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EStereoDelayMode,0>,int>::GetAutoConverterNodeMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EStereoDelayMode,0>,int>::GetAutoConverterNodeMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>();
      local_78._0_8_ = *pFVar3;
      pFVar5 = GetMetasoundDataTypeDisplayText<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>
                         ();
      local_78._8_8_ = (pFVar5->TextData).Reference;
      if ((ITextData *)local_78._8_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_78._8_8_ + 8))(local_78._8_8_,&local_res10);
      }
      local_78._16_4_ = pFVar5->Flags;
      pFVar3 = GetMetasoundDataTypeName<int>();
      local_60 = *pFVar3;
      pFVar5 = TDataReferenceTypeInfo<int>::GetTypeDisplayText();
      local_58.Reference = (pFVar5->TextData).Reference;
      if (local_58.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58.Reference + 8))(local_58.Reference,&local_res10);
      }
      local_50 = pFVar5->Flags;
      local_48._0_1_ = true;
      local_48._1_1_ = false;
      AutoConverterNodePrivate::CreateAutoConverterNodeMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EStereoDelayMode,0>,int>::GetAutoConverterNodeMetadata(void)'
                  ::__l2::Info,(FConvertDataTypeInfo *)local_78);
      if (local_58.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58.Reference + 0x10))();
      }
      if ((ITextData *)local_78._8_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_78._8_8_ + 0x10))();
      }
      atexit(`Metasound::
             TAutoConverterNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,int>::
             GetAutoConverterNodeMetadata'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EStereoDelayMode,0>,int>::GetAutoConverterNodeMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassRegistryKey::FNodeClassRegistryKey
            (&local_30,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EStereoDelayMode,0>,int>::GetAutoConverterNodeMetadata(void)'
              ::__l2::Info);
  pIVar2 = INodeClassRegistry::Get();
  cVar1 = (**(code **)((longlong)*pIVar2 + 0x40))(pIVar2,&local_30);
  if (cVar1 == '\0') {
    local_res10 = (FName)::operator_new(0xf0);
    if (local_res10 == (FName)0x0) {
      local_res10.ComparisonIndex.Value = 0;
      local_res10.Number = 0;
    }
    else {
      NodeRegistrationPrivate::FNodeRegistryEntryBase::FNodeRegistryEntryBase
                ((FNodeRegistryEntryBase *)local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EStereoDelayMode,0>,int>::GetAutoConverterNodeMetadata(void)'
                  ::__l2::Info,param_1);
      *(undefined ***)local_res10 =
           &
           ___7__TNodeRegistryEntry_V__TAutoConverterNode_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound__H_Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
      ;
    }
    NodeRegistrationPrivate::RegisterNodeInternal
              ((TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
                *)&local_res10);
    if (local_res10 != (FName)0x0) {
      (*(code *)**(undefined8 **)local_res10)(local_res10,1);
    }
    pFVar3 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,int>::
             GetOutputName();
    pFVar4 = TAutoConverterNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,int>::
             GetInputName();
    if (`bool___cdecl_RegisterConversionNode<Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EStereoDelayMode,0>,int>,Metasound::TEnum<Metasound::EStereoDelayMode,0>,int>(FName_const&___ptr64,FName_const&___ptr64,Metasound::FNodeClassMetadata_const&___ptr64)'
        ::__l2::bAlreadyRegisteredThisConverter == false) {
      `bool___cdecl_RegisterConversionNode<Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EStereoDelayMode,0>,int>,Metasound::TEnum<Metasound::EStereoDelayMode,0>,int>(FName_const&___ptr64,FName_const&___ptr64,Metasound::FNodeClassMetadata_const&___ptr64)'
      ::__l2::bAlreadyRegisteredThisConverter = true;
      ::FName::FName(&local_res10,
                     TDataReferenceTypeInfo<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
                     TypeName);
      ::FName::FName(&local_res18,TDataReferenceTypeInfo<int>::TypeName);
      local_40 = local_res10;
      local_38 = local_res18;
      local_78._0_8_ = *pFVar4;
      local_78._8_8_ = *pFVar3;
      FNodeClassRegistryKey::FNodeClassRegistryKey
                ((FNodeClassRegistryKey *)(local_78 + 0x10),
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EStereoDelayMode,0>,int>::GetAutoConverterNodeMetadata(void)'
                  ::__l2::Info);
      pIVar2 = INodeClassRegistry::Get();
      (**(code **)((longlong)*pIVar2 + 200))(pIVar2,&local_40,local_78);
    }
    else if (3 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<4>
                (&`bool___cdecl_RegisterConversionNode<Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EStereoDelayMode,0>,int>,Metasound::TEnum<Metasound::EStereoDelayMode,0>,int>(FName_const&___ptr64,FName_const&___ptr64,Metasound::FNodeClassMetadata_const&___ptr64)'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
  }
  return;
}

// AttemptToRegisterConverter<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,float,0> @ 14b1bdce0

void __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
AttemptToRegisterConverter<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,float,0>
          (FModuleInfo *param_1)

{
  return;
}

// AttemptToRegisterConverter<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,FString,0> @ 14b1bdcf0

void __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
AttemptToRegisterConverter<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,FString,0>
          (FModuleInfo *param_1)

{
  return;
}

// AttemptToRegisterConverter<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,bool,0> @ 14b1bdd00

void __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
AttemptToRegisterConverter<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,bool,0>
          (FModuleInfo *param_1)

{
  return;
}

// AttemptToRegisterConverter<FString,Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>,0> @ 14b1bdd10

void __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
AttemptToRegisterConverter<FString,Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>,0>
          (FModuleInfo *param_1)

{
  return;
}

// AttemptToRegisterConverter<FString,Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>,0> @ 14b1bdd20

void __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
AttemptToRegisterConverter<FString,Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>,0>
          (FModuleInfo *param_1)

{
  return;
}

// AttemptToRegisterConverter<FString,Metasound::TEnum<enum_Metasound::EPanningLaw,0>,0> @ 14b1bdd30

void __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
AttemptToRegisterConverter<FString,Metasound::TEnum<enum_Metasound::EPanningLaw,0>,0>
          (FModuleInfo *param_1)

{
  return;
}

// AttemptToRegisterConverter<FString,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,0> @ 14b1bdd40

void __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
AttemptToRegisterConverter<FString,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,0>
          (FModuleInfo *param_1)

{
  return;
}

// AttemptToRegisterConverter<bool,Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>,0> @ 14b1bdd50

void __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
AttemptToRegisterConverter<bool,Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>,0>
          (FModuleInfo *param_1)

{
  return;
}

// AttemptToRegisterConverter<bool,Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>,0> @ 14b1bdd60

void __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
AttemptToRegisterConverter<bool,Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>,0>
          (FModuleInfo *param_1)

{
  return;
}

// AttemptToRegisterConverter<bool,Metasound::TEnum<enum_Metasound::EPanningLaw,0>,0> @ 14b1bdd70

void __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
AttemptToRegisterConverter<bool,Metasound::TEnum<enum_Metasound::EPanningLaw,0>,0>
          (FModuleInfo *param_1)

{
  return;
}

// AttemptToRegisterConverter<bool,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,0> @ 14b1bdd80

void __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
AttemptToRegisterConverter<bool,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,0>
          (FModuleInfo *param_1)

{
  return;
}

// AttemptToRegisterSendAndReceiveNodes<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>,1> @ 14b1bdd90

void __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
AttemptToRegisterSendAndReceiveNodes<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>,1>
          (FModuleInfo *param_1)

{
  return;
}

// AttemptToRegisterSendAndReceiveNodes<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>,1> @ 14b1bdda0

void __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
AttemptToRegisterSendAndReceiveNodes<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>,1>
          (FModuleInfo *param_1)

{
  return;
}

// AttemptToRegisterSendAndReceiveNodes<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,1> @ 14b1bddb0

void __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
AttemptToRegisterSendAndReceiveNodes<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,1>
          (FModuleInfo *param_1)

{
  return;
}

// AttemptToRegisterSendAndReceiveNodes<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,1> @ 14b1bddc0

void __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
AttemptToRegisterSendAndReceiveNodes<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,1>
          (FModuleInfo *param_1)

{
  return;
}

// ConstructItems<FText_const_,FText,int> @ 14b1bddd0

void __cdecl ConstructItems<FText_const_,FText,int>(void *param_1,FText *param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 local_res18 [8];
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(longlong *)param_1 = 0;
      plVar1 = *(longlong **)(lVar2 + (longlong)param_1);
      *(longlong **)param_1 = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1,local_res18);
      }
      *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 0x10);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// CreateDataTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>,0,void> @ 14b1bde50

FDataTypeRegistryInfo * __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
CreateDataTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>,0,void>
          (FDataTypeRegistryInfo *__return_storage_ptr__)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  void *pvVar3;
  FName *pFVar4;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->DataTypeName).ComparisonIndex = 0;
  (__return_storage_ptr__->DataTypeName).Number = 0;
  FText::FText(&__return_storage_ptr__->DataTypeDisplayText);
  __return_storage_ptr__->PreferredLiteralType = Invalid;
  __return_storage_ptr__->bIsParsable = false;
  __return_storage_ptr__->bIsDefaultParsable = false;
  __return_storage_ptr__->bIsBoolParsable = false;
  __return_storage_ptr__->bIsIntParsable = false;
  __return_storage_ptr__->bIsFloatParsable = false;
  __return_storage_ptr__->bIsStringParsable = false;
  __return_storage_ptr__->bIsProxyParsable = false;
  __return_storage_ptr__->bIsUniquePtrProxyParsable_DEPRECATED = false;
  __return_storage_ptr__->bIsDefaultArrayParsable = false;
  __return_storage_ptr__->bIsBoolArrayParsable = false;
  __return_storage_ptr__->bIsIntArrayParsable = false;
  __return_storage_ptr__->bIsFloatArrayParsable = false;
  __return_storage_ptr__->bIsStringArrayParsable = false;
  __return_storage_ptr__->bIsProxyArrayParsable = false;
  __return_storage_ptr__->bIsUniquePtrProxyArrayParsable_DEPRECATED = false;
  __return_storage_ptr__->bIsEnum = false;
  __return_storage_ptr__->bIsExplicit = false;
  __return_storage_ptr__->bIsTransmittable = false;
  __return_storage_ptr__->bIsVariable = false;
  __return_storage_ptr__->bIsConstructorType = false;
  __return_storage_ptr__->bIsArrayType = false;
  __return_storage_ptr__->bIsArrayParseable = false;
  __return_storage_ptr__->ProxyGeneratorClass = (UClass *)0x0;
  __return_storage_ptr__->bIsPolymorphic = false;
  __return_storage_ptr__->bIsAbstract = false;
  (__return_storage_ptr__->ParentDataTypeName).ComparisonIndex = 0;
  (__return_storage_ptr__->ParentDataTypeName).Number = 0;
  pFVar4 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
                     ();
  pvVar3 = ThreadLocalStoragePointer;
  __return_storage_ptr__->DataTypeName = *pFVar4;
  if (*(int *)(*(longlong *)((longlong)pvVar3 + (ulonglong)_tls_index * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::DisplayText,L"MetaSoundCore_DataReference",L"Enum:PanningLaw_Variable",
                 L"Enum:PanningLaw:Variable");
      atexit(`Metasound::
             TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
             ::GetTypeDisplayText'::__l2::_dynamic_atexit_destructor_for__DisplayText__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  TVar2.Reference = ::DisplayText.TextData.Reference;
  pIVar1 = (__return_storage_ptr__->DataTypeDisplayText).TextData.Reference;
  if (pIVar1 != ::DisplayText.TextData.Reference) {
    (__return_storage_ptr__->DataTypeDisplayText).TextData.Reference =
         ::DisplayText.TextData.Reference;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,local_res8);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->DataTypeDisplayText).Flags = ::DisplayText.Flags;
  __return_storage_ptr__->PreferredLiteralType = None;
  __return_storage_ptr__->bIsParsable = false;
  __return_storage_ptr__->bIsDefaultParsable = false;
  __return_storage_ptr__->bIsBoolParsable = false;
  __return_storage_ptr__->bIsIntParsable = false;
  __return_storage_ptr__->bIsFloatParsable = false;
  __return_storage_ptr__->bIsStringParsable = false;
  __return_storage_ptr__->bIsProxyParsable = false;
  __return_storage_ptr__->bIsArrayType = false;
  __return_storage_ptr__->bIsArrayParseable = false;
  __return_storage_ptr__->bIsUniquePtrProxyParsable_DEPRECATED = false;
  __return_storage_ptr__->bIsDefaultArrayParsable = false;
  __return_storage_ptr__->bIsBoolArrayParsable = false;
  __return_storage_ptr__->bIsIntArrayParsable = false;
  __return_storage_ptr__->bIsFloatArrayParsable = false;
  __return_storage_ptr__->bIsStringArrayParsable = false;
  __return_storage_ptr__->bIsProxyArrayParsable = false;
  __return_storage_ptr__->bIsUniquePtrProxyArrayParsable_DEPRECATED = false;
  __return_storage_ptr__->bIsEnum = false;
  __return_storage_ptr__->bIsExplicit = false;
  __return_storage_ptr__->bIsTransmittable = false;
  __return_storage_ptr__->bIsVariable = true;
  __return_storage_ptr__->bIsConstructorType = false;
  __return_storage_ptr__->ProxyGeneratorClass = (UClass *)0x0;
  __return_storage_ptr__->bIsPolymorphic = false;
  __return_storage_ptr__->bIsAbstract = false;
  pFVar4 = GetMetasoundDataTypeName<void>();
  __return_storage_ptr__->ParentDataTypeName = *pFVar4;
  return __return_storage_ptr__;
}

// CreateDataTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>,0,void> @ 14b1bdfb0

FDataTypeRegistryInfo * __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
CreateDataTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>,0,void>
          (FDataTypeRegistryInfo *__return_storage_ptr__)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  void *pvVar3;
  FName *pFVar4;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->DataTypeName).ComparisonIndex = 0;
  (__return_storage_ptr__->DataTypeName).Number = 0;
  FText::FText(&__return_storage_ptr__->DataTypeDisplayText);
  __return_storage_ptr__->PreferredLiteralType = Invalid;
  __return_storage_ptr__->bIsParsable = false;
  __return_storage_ptr__->bIsDefaultParsable = false;
  __return_storage_ptr__->bIsBoolParsable = false;
  __return_storage_ptr__->bIsIntParsable = false;
  __return_storage_ptr__->bIsFloatParsable = false;
  __return_storage_ptr__->bIsStringParsable = false;
  __return_storage_ptr__->bIsProxyParsable = false;
  __return_storage_ptr__->bIsUniquePtrProxyParsable_DEPRECATED = false;
  __return_storage_ptr__->bIsDefaultArrayParsable = false;
  __return_storage_ptr__->bIsBoolArrayParsable = false;
  __return_storage_ptr__->bIsIntArrayParsable = false;
  __return_storage_ptr__->bIsFloatArrayParsable = false;
  __return_storage_ptr__->bIsStringArrayParsable = false;
  __return_storage_ptr__->bIsProxyArrayParsable = false;
  __return_storage_ptr__->bIsUniquePtrProxyArrayParsable_DEPRECATED = false;
  __return_storage_ptr__->bIsEnum = false;
  __return_storage_ptr__->bIsExplicit = false;
  __return_storage_ptr__->bIsTransmittable = false;
  __return_storage_ptr__->bIsVariable = false;
  __return_storage_ptr__->bIsConstructorType = false;
  __return_storage_ptr__->bIsArrayType = false;
  __return_storage_ptr__->bIsArrayParseable = false;
  __return_storage_ptr__->ProxyGeneratorClass = (UClass *)0x0;
  __return_storage_ptr__->bIsPolymorphic = false;
  __return_storage_ptr__->bIsAbstract = false;
  (__return_storage_ptr__->ParentDataTypeName).ComparisonIndex = 0;
  (__return_storage_ptr__->ParentDataTypeName).Number = 0;
  pFVar4 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
                     ();
  pvVar3 = ThreadLocalStoragePointer;
  __return_storage_ptr__->DataTypeName = *pFVar4;
  if (*(int *)(*(longlong *)((longlong)pvVar3 + (ulonglong)_tls_index * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::DisplayText,L"MetaSoundCore_DataReference",L"Enum:StereoDelayMode_Variable",
                 L"Enum:StereoDelayMode:Variable");
      atexit(`Metasound::
             TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
             ::GetTypeDisplayText'::__l2::_dynamic_atexit_destructor_for__DisplayText__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  TVar2.Reference = ::DisplayText.TextData.Reference;
  pIVar1 = (__return_storage_ptr__->DataTypeDisplayText).TextData.Reference;
  if (pIVar1 != ::DisplayText.TextData.Reference) {
    (__return_storage_ptr__->DataTypeDisplayText).TextData.Reference =
         ::DisplayText.TextData.Reference;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,local_res8);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->DataTypeDisplayText).Flags = ::DisplayText.Flags;
  __return_storage_ptr__->PreferredLiteralType = None;
  __return_storage_ptr__->bIsParsable = false;
  __return_storage_ptr__->bIsDefaultParsable = false;
  __return_storage_ptr__->bIsBoolParsable = false;
  __return_storage_ptr__->bIsIntParsable = false;
  __return_storage_ptr__->bIsFloatParsable = false;
  __return_storage_ptr__->bIsStringParsable = false;
  __return_storage_ptr__->bIsProxyParsable = false;
  __return_storage_ptr__->bIsArrayType = false;
  __return_storage_ptr__->bIsArrayParseable = false;
  __return_storage_ptr__->bIsUniquePtrProxyParsable_DEPRECATED = false;
  __return_storage_ptr__->bIsDefaultArrayParsable = false;
  __return_storage_ptr__->bIsBoolArrayParsable = false;
  __return_storage_ptr__->bIsIntArrayParsable = false;
  __return_storage_ptr__->bIsFloatArrayParsable = false;
  __return_storage_ptr__->bIsStringArrayParsable = false;
  __return_storage_ptr__->bIsProxyArrayParsable = false;
  __return_storage_ptr__->bIsUniquePtrProxyArrayParsable_DEPRECATED = false;
  __return_storage_ptr__->bIsEnum = false;
  __return_storage_ptr__->bIsExplicit = false;
  __return_storage_ptr__->bIsTransmittable = false;
  __return_storage_ptr__->bIsVariable = true;
  __return_storage_ptr__->bIsConstructorType = false;
  __return_storage_ptr__->ProxyGeneratorClass = (UClass *)0x0;
  __return_storage_ptr__->bIsPolymorphic = false;
  __return_storage_ptr__->bIsAbstract = false;
  pFVar4 = GetMetasoundDataTypeName<void>();
  __return_storage_ptr__->ParentDataTypeName = *pFVar4;
  return __return_storage_ptr__;
}

// CreateDataTypeInfo<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,2,void> @ 14b1be110

FDataTypeRegistryInfo * __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
CreateDataTypeInfo<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,2,void>
          (FDataTypeRegistryInfo *__return_storage_ptr__)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FName *pFVar3;
  FText *pFVar4;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->DataTypeName).ComparisonIndex = 0;
  (__return_storage_ptr__->DataTypeName).Number = 0;
  FText::FText(&__return_storage_ptr__->DataTypeDisplayText);
  __return_storage_ptr__->PreferredLiteralType = Invalid;
  __return_storage_ptr__->bIsParsable = false;
  __return_storage_ptr__->bIsDefaultParsable = false;
  __return_storage_ptr__->bIsBoolParsable = false;
  __return_storage_ptr__->bIsIntParsable = false;
  __return_storage_ptr__->bIsFloatParsable = false;
  __return_storage_ptr__->bIsStringParsable = false;
  __return_storage_ptr__->bIsProxyParsable = false;
  __return_storage_ptr__->bIsUniquePtrProxyParsable_DEPRECATED = false;
  __return_storage_ptr__->bIsDefaultArrayParsable = false;
  __return_storage_ptr__->bIsBoolArrayParsable = false;
  __return_storage_ptr__->bIsIntArrayParsable = false;
  __return_storage_ptr__->bIsFloatArrayParsable = false;
  __return_storage_ptr__->bIsStringArrayParsable = false;
  __return_storage_ptr__->bIsProxyArrayParsable = false;
  __return_storage_ptr__->bIsUniquePtrProxyArrayParsable_DEPRECATED = false;
  __return_storage_ptr__->bIsEnum = false;
  __return_storage_ptr__->bIsExplicit = false;
  __return_storage_ptr__->bIsTransmittable = false;
  __return_storage_ptr__->bIsVariable = false;
  __return_storage_ptr__->bIsConstructorType = false;
  __return_storage_ptr__->bIsArrayType = false;
  __return_storage_ptr__->bIsArrayParseable = false;
  __return_storage_ptr__->ProxyGeneratorClass = (UClass *)0x0;
  __return_storage_ptr__->bIsPolymorphic = false;
  __return_storage_ptr__->bIsAbstract = false;
  (__return_storage_ptr__->ParentDataTypeName).ComparisonIndex = 0;
  (__return_storage_ptr__->ParentDataTypeName).Number = 0;
  pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>();
  __return_storage_ptr__->DataTypeName = *pFVar3;
  pFVar4 = GetMetasoundDataTypeDisplayText<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>();
  pIVar1 = (__return_storage_ptr__->DataTypeDisplayText).TextData.Reference;
  pIVar2 = (pFVar4->TextData).Reference;
  if (pIVar1 != pIVar2) {
    (__return_storage_ptr__->DataTypeDisplayText).TextData.Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->DataTypeDisplayText).Flags = pFVar4->Flags;
  __return_storage_ptr__->PreferredLiteralType = Integer;
  __return_storage_ptr__->bIsParsable = true;
  __return_storage_ptr__->bIsDefaultParsable = true;
  __return_storage_ptr__->bIsBoolParsable = true;
  __return_storage_ptr__->bIsArrayType = false;
  __return_storage_ptr__->bIsArrayParseable = false;
  __return_storage_ptr__->bIsIntParsable = true;
  __return_storage_ptr__->bIsFloatParsable = true;
  __return_storage_ptr__->bIsStringParsable = true;
  __return_storage_ptr__->bIsProxyParsable = false;
  __return_storage_ptr__->bIsUniquePtrProxyParsable_DEPRECATED = false;
  __return_storage_ptr__->bIsDefaultArrayParsable = false;
  __return_storage_ptr__->bIsBoolArrayParsable = false;
  __return_storage_ptr__->bIsIntArrayParsable = false;
  __return_storage_ptr__->bIsFloatArrayParsable = false;
  __return_storage_ptr__->bIsStringArrayParsable = false;
  __return_storage_ptr__->bIsProxyArrayParsable = false;
  __return_storage_ptr__->bIsUniquePtrProxyArrayParsable_DEPRECATED = false;
  __return_storage_ptr__->bIsEnum = true;
  __return_storage_ptr__->bIsExplicit = false;
  __return_storage_ptr__->bIsTransmittable = true;
  __return_storage_ptr__->bIsVariable = false;
  __return_storage_ptr__->bIsConstructorType = true;
  __return_storage_ptr__->ProxyGeneratorClass = (UClass *)0x0;
  __return_storage_ptr__->bIsPolymorphic = false;
  __return_storage_ptr__->bIsAbstract = false;
  pFVar3 = GetMetasoundDataTypeName<void>();
  __return_storage_ptr__->ParentDataTypeName = *pFVar3;
  return __return_storage_ptr__;
}

// CreateDataTypeInfo<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,2,void> @ 14b1be200

FDataTypeRegistryInfo * __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
CreateDataTypeInfo<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,2,void>
          (FDataTypeRegistryInfo *__return_storage_ptr__)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FName *pFVar3;
  FText *pFVar4;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->DataTypeName).ComparisonIndex = 0;
  (__return_storage_ptr__->DataTypeName).Number = 0;
  FText::FText(&__return_storage_ptr__->DataTypeDisplayText);
  __return_storage_ptr__->PreferredLiteralType = Invalid;
  __return_storage_ptr__->bIsParsable = false;
  __return_storage_ptr__->bIsDefaultParsable = false;
  __return_storage_ptr__->bIsBoolParsable = false;
  __return_storage_ptr__->bIsIntParsable = false;
  __return_storage_ptr__->bIsFloatParsable = false;
  __return_storage_ptr__->bIsStringParsable = false;
  __return_storage_ptr__->bIsProxyParsable = false;
  __return_storage_ptr__->bIsUniquePtrProxyParsable_DEPRECATED = false;
  __return_storage_ptr__->bIsDefaultArrayParsable = false;
  __return_storage_ptr__->bIsBoolArrayParsable = false;
  __return_storage_ptr__->bIsIntArrayParsable = false;
  __return_storage_ptr__->bIsFloatArrayParsable = false;
  __return_storage_ptr__->bIsStringArrayParsable = false;
  __return_storage_ptr__->bIsProxyArrayParsable = false;
  __return_storage_ptr__->bIsUniquePtrProxyArrayParsable_DEPRECATED = false;
  __return_storage_ptr__->bIsEnum = false;
  __return_storage_ptr__->bIsExplicit = false;
  __return_storage_ptr__->bIsTransmittable = false;
  __return_storage_ptr__->bIsVariable = false;
  __return_storage_ptr__->bIsConstructorType = false;
  __return_storage_ptr__->bIsArrayType = false;
  __return_storage_ptr__->bIsArrayParseable = false;
  __return_storage_ptr__->ProxyGeneratorClass = (UClass *)0x0;
  __return_storage_ptr__->bIsPolymorphic = false;
  __return_storage_ptr__->bIsAbstract = false;
  (__return_storage_ptr__->ParentDataTypeName).ComparisonIndex = 0;
  (__return_storage_ptr__->ParentDataTypeName).Number = 0;
  pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>();
  __return_storage_ptr__->DataTypeName = *pFVar3;
  pFVar4 = GetMetasoundDataTypeDisplayText<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>();
  pIVar1 = (__return_storage_ptr__->DataTypeDisplayText).TextData.Reference;
  pIVar2 = (pFVar4->TextData).Reference;
  if (pIVar1 != pIVar2) {
    (__return_storage_ptr__->DataTypeDisplayText).TextData.Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->DataTypeDisplayText).Flags = pFVar4->Flags;
  __return_storage_ptr__->PreferredLiteralType = Integer;
  __return_storage_ptr__->bIsParsable = true;
  __return_storage_ptr__->bIsDefaultParsable = true;
  __return_storage_ptr__->bIsBoolParsable = true;
  __return_storage_ptr__->bIsArrayType = false;
  __return_storage_ptr__->bIsArrayParseable = false;
  __return_storage_ptr__->bIsIntParsable = true;
  __return_storage_ptr__->bIsFloatParsable = true;
  __return_storage_ptr__->bIsStringParsable = true;
  __return_storage_ptr__->bIsProxyParsable = false;
  __return_storage_ptr__->bIsUniquePtrProxyParsable_DEPRECATED = false;
  __return_storage_ptr__->bIsDefaultArrayParsable = false;
  __return_storage_ptr__->bIsBoolArrayParsable = false;
  __return_storage_ptr__->bIsIntArrayParsable = false;
  __return_storage_ptr__->bIsFloatArrayParsable = false;
  __return_storage_ptr__->bIsStringArrayParsable = false;
  __return_storage_ptr__->bIsProxyArrayParsable = false;
  __return_storage_ptr__->bIsUniquePtrProxyArrayParsable_DEPRECATED = false;
  __return_storage_ptr__->bIsEnum = true;
  __return_storage_ptr__->bIsExplicit = false;
  __return_storage_ptr__->bIsTransmittable = true;
  __return_storage_ptr__->bIsVariable = false;
  __return_storage_ptr__->bIsConstructorType = true;
  __return_storage_ptr__->ProxyGeneratorClass = (UClass *)0x0;
  __return_storage_ptr__->bIsPolymorphic = false;
  __return_storage_ptr__->bIsAbstract = false;
  pFVar3 = GetMetasoundDataTypeName<void>();
  __return_storage_ptr__->ParentDataTypeName = *pFVar3;
  return __return_storage_ptr__;
}

// DestructItems<FText_const_,int> @ 14b1be2f0

void __cdecl DestructItems<FText_const_,int>(FText *param_1,int param_2)

{
  ITextData *pIVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pIVar1 = (param_1->TextData).Reference;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))();
    }
    param_1 = param_1 + 1;
  }
  return;
}

// Downcast<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,1> @ 14b1be330

TUniquePtr<Metasound::TReceiver<Metasound::TEnum<Metasound::EPanningLaw,0>_>,TDefaultDelete<Metasound::TReceiver<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>_>
 __cdecl Metasound::Downcast<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,1>
                   (TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  TUniquePtr<Metasound::TReceiver<Metasound::TEnum<Metasound::EPanningLaw,0>_>,TDefaultDelete<Metasound::TReceiver<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>_>
  TVar5;
  longlong *in_RDX;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  longlong local_48;
  FName *local_40;
  FString local_38;
  FString local_28;
  
  lVar1 = *in_RDX;
  pFVar4 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>();
  local_res8 = *pFVar4;
  if (*(FName *)(lVar1 + 8) != local_res8) {
    local_40 = &local_res8;
    local_48 = lVar1;
    bVar3 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TReceiver<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>'::
            __l2::<lambda_1>::operator()(&local_48);
    if (!bVar3) {
      pFVar4 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>();
      local_res10 = *pFVar4;
      ::FName::ToString(&local_res10,&local_28);
      local_res18 = *(FName *)(*in_RDX + 8);
      ::FName::ToString(&local_res18,&local_38);
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InPtr->CheckType<TReceiver<TDataType>>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                         ,0x3e3,
                         L"Tried to downcast an IReceiver of type %s to a TSender of type %s!");
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar5.Ptr = (TReceiver<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)(*pcVar2)();
        return (TUniquePtr<Metasound::TReceiver<Metasound::TEnum<Metasound::EPanningLaw,0>_>,TDefaultDelete<Metasound::TReceiver<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>_>
                )TVar5.Ptr;
      }
    }
  }
  param_1->Ptr = (IReceiver *)*in_RDX;
  *in_RDX = 0;
  return (TUniquePtr<Metasound::TReceiver<Metasound::TEnum<Metasound::EPanningLaw,0>_>,TDefaultDelete<Metasound::TReceiver<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>_>
          )(TReceiver<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)param_1;
}

// Downcast<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,1> @ 14b1be470

TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EPanningLaw,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>_>
 __cdecl Metasound::Downcast<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,1>
                   (TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EPanningLaw,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>_>
  TVar5;
  longlong *in_RDX;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  longlong local_48;
  FName *local_40;
  FString local_38;
  FString local_28;
  
  lVar1 = *in_RDX;
  pFVar4 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>();
  local_res8 = *pFVar4;
  if (*(FName *)(lVar1 + 8) != local_res8) {
    local_40 = &local_res8;
    local_48 = lVar1;
    bVar3 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TSender<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>'::__l2
            ::<lambda_1>::operator()(&local_48);
    if (!bVar3) {
      pFVar4 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>();
      local_res10 = *pFVar4;
      ::FName::ToString(&local_res10,&local_28);
      local_res18 = *(FName *)(*in_RDX + 8);
      ::FName::ToString(&local_res18,&local_38);
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InPtr->CheckType<TSender<TDataType>>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                         ,0x3cc,L"Tried to downcast an ISender of type %s to a TSender of type %s!")
      ;
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar5.Ptr = (TSender<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)(*pcVar2)();
        return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EPanningLaw,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>_>
                )TVar5.Ptr;
      }
    }
  }
  param_1->Ptr = (ISender *)*in_RDX;
  *in_RDX = 0;
  return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EPanningLaw,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>_>
          )(TSender<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)param_1;
}

// Downcast<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,1> @ 14b1be5b0

TUniquePtr<Metasound::TReceiver<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>,TDefaultDelete<Metasound::TReceiver<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>_>
 __cdecl Metasound::Downcast<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,1>
                   (TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  TUniquePtr<Metasound::TReceiver<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>,TDefaultDelete<Metasound::TReceiver<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>_>
  TVar5;
  longlong *in_RDX;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  longlong local_48;
  FName *local_40;
  FString local_38;
  FString local_28;
  
  lVar1 = *in_RDX;
  pFVar4 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>();
  local_res8 = *pFVar4;
  if (*(FName *)(lVar1 + 8) != local_res8) {
    local_40 = &local_res8;
    local_48 = lVar1;
    bVar3 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TReceiver<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>'
            ::__l2::<lambda_1>::operator()(&local_48);
    if (!bVar3) {
      pFVar4 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>();
      local_res10 = *pFVar4;
      ::FName::ToString(&local_res10,&local_28);
      local_res18 = *(FName *)(*in_RDX + 8);
      ::FName::ToString(&local_res18,&local_38);
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InPtr->CheckType<TReceiver<TDataType>>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                         ,0x3e3,
                         L"Tried to downcast an IReceiver of type %s to a TSender of type %s!");
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar5.Ptr = (TReceiver<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)(*pcVar2)();
        return (TUniquePtr<Metasound::TReceiver<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>,TDefaultDelete<Metasound::TReceiver<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>_>
                )TVar5.Ptr;
      }
    }
  }
  param_1->Ptr = (IReceiver *)*in_RDX;
  *in_RDX = 0;
  return (TUniquePtr<Metasound::TReceiver<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>,TDefaultDelete<Metasound::TReceiver<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>_>
          )(TReceiver<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)param_1;
}

// Downcast<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,1> @ 14b1be6f0

TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>_>
 __cdecl Metasound::Downcast<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,1>
                   (TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>_>
  TVar5;
  longlong *in_RDX;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  longlong local_48;
  FName *local_40;
  FString local_38;
  FString local_28;
  
  lVar1 = *in_RDX;
  pFVar4 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>();
  local_res8 = *pFVar4;
  if (*(FName *)(lVar1 + 8) != local_res8) {
    local_40 = &local_res8;
    local_48 = lVar1;
    bVar3 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TSender<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>'::
            __l2::<lambda_1>::operator()(&local_48);
    if (!bVar3) {
      pFVar4 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>();
      local_res10 = *pFVar4;
      ::FName::ToString(&local_res10,&local_28);
      local_res18 = *(FName *)(*in_RDX + 8);
      ::FName::ToString(&local_res18,&local_38);
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InPtr->CheckType<TSender<TDataType>>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                         ,0x3cc,L"Tried to downcast an ISender of type %s to a TSender of type %s!")
      ;
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar5.Ptr = (TSender<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)(*pcVar2)();
        return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>_>
                )TVar5.Ptr;
      }
    }
  }
  param_1->Ptr = (ISender *)*in_RDX;
  *in_RDX = 0;
  return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>_>
          )(TSender<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)param_1;
}

// ExecuteFrames<`Metasound::TRandomNodeOperator<int>::Execute'::__l2::<lambda_1>,`Metasound::TRandomNodeOperator<int>::Execute'::__l2::<lambda_2>_> @ 14b1be970

void __thiscall
Metasound::FTrigger::
ExecuteFrames<_Metasound::TRandomNodeOperator<int>::Execute_::__l2::<lambda_1>,_Metasound::TRandomNodeOperator<int>::Execute_::__l2::<lambda_2>_>
          (FTrigger *this,int param_1,int param_2,<lambda_1> param_3,<lambda_2> param_4)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  
  fVar4 = __real_3f800000;
  if (0 < param_2) {
    iVar7 = 0;
    pFVar3 = (this->TriggeredFrames).AllocatorInstance.Data;
    lVar9 = (longlong)param_2 + -1;
    if (0 < lVar9) {
      lVar8 = 0;
      do {
        iVar1 = *(int *)(pFVar3 + lVar8 * 4);
        TRandomNodeOperator<int>::EvaluateSeedChanges(param_4.__this);
        uVar5 = ((param_4.__this)->RandomStream).InitialSeed;
        ((param_4.__this)->RandomStream).Seed = uVar5;
        iVar2 = **(int **)&((param_4.__this)->MinValue).field_0x8;
        iVar6 = (**(int **)&((param_4.__this)->MaxValue).field_0x8 - iVar2) + 1;
        if (iVar6 < 1) {
          iVar6 = 0;
        }
        else {
          uVar5 = uVar5 * 0xbb38435 + 0x3619636b;
          ((param_4.__this)->RandomStream).Seed = uVar5;
          iVar6 = (int)(((float)(uVar5 >> 9 | 0x3f800000) - fVar4) * (float)iVar6);
        }
        **(int **)&((param_4.__this)->OutputValue).field_0x8 = iVar2 + iVar6;
        TriggerFrame(*(FTrigger **)&((param_4.__this)->TriggerOutOnReset).field_0x8,iVar1);
        lVar8 = lVar8 + 1;
      } while (lVar8 < lVar9);
    }
    iVar1 = *(int *)(pFVar3 + lVar9 * 4);
    TRandomNodeOperator<int>::EvaluateSeedChanges(param_4.__this);
    uVar5 = ((param_4.__this)->RandomStream).InitialSeed;
    ((param_4.__this)->RandomStream).Seed = uVar5;
    iVar2 = **(int **)&((param_4.__this)->MinValue).field_0x8;
    iVar6 = (**(int **)&((param_4.__this)->MaxValue).field_0x8 - iVar2) + 1;
    if (0 < iVar6) {
      uVar5 = uVar5 * 0xbb38435 + 0x3619636b;
      ((param_4.__this)->RandomStream).Seed = uVar5;
      iVar7 = (int)(((float)(uVar5 >> 9 | 0x3f800000) - fVar4) * (float)iVar6);
    }
    **(int **)&((param_4.__this)->OutputValue).field_0x8 = iVar2 + iVar7;
    TriggerFrame(*(FTrigger **)&((param_4.__this)->TriggerOutOnReset).field_0x8,iVar1);
  }
  return;
}

// ExecuteFrames<`Metasound::TRandomNodeOperator<int>::Execute'::__l2::<lambda_3>,`Metasound::TRandomNodeOperator<int>::Execute'::__l2::<lambda_4>_> @ 14b1beb00

void __thiscall
Metasound::FTrigger::
ExecuteFrames<_Metasound::TRandomNodeOperator<int>::Execute_::__l2::<lambda_3>,_Metasound::TRandomNodeOperator<int>::Execute_::__l2::<lambda_4>_>
          (FTrigger *this,int param_1,int param_2,<lambda_3> param_3,<lambda_4> param_4)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  longlong lVar9;
  longlong lVar10;
  
  fVar4 = __real_3f800000;
  if (0 < param_2) {
    iVar7 = 0;
    pFVar3 = (this->TriggeredFrames).AllocatorInstance.Data;
    lVar10 = (longlong)param_2 + -1;
    if (0 < lVar10) {
      lVar9 = 0;
      do {
        puVar8 = &((param_4.__this)->RandomStream).Seed;
        iVar1 = *(int *)(pFVar3 + lVar9 * 4);
        iVar2 = **(int **)&((param_4.__this)->MinValue).field_0x8;
        iVar6 = (**(int **)&((param_4.__this)->MaxValue).field_0x8 - iVar2) + 1;
        if (iVar6 < 1) {
          iVar6 = 0;
        }
        else {
          uVar5 = *puVar8 * 0xbb38435 + 0x3619636b;
          *puVar8 = uVar5;
          iVar6 = (int)(((float)(uVar5 >> 9 | 0x3f800000) - fVar4) * (float)iVar6);
        }
        **(int **)&((param_4.__this)->OutputValue).field_0x8 = iVar2 + iVar6;
        TriggerFrame(*(FTrigger **)&((param_4.__this)->TriggerOutOnNext).field_0x8,iVar1);
        lVar9 = lVar9 + 1;
      } while (lVar9 < lVar10);
    }
    puVar8 = &((param_4.__this)->RandomStream).Seed;
    iVar1 = *(int *)(pFVar3 + lVar10 * 4);
    iVar2 = **(int **)&((param_4.__this)->MinValue).field_0x8;
    iVar6 = (**(int **)&((param_4.__this)->MaxValue).field_0x8 - iVar2) + 1;
    if (0 < iVar6) {
      uVar5 = *puVar8 * 0xbb38435 + 0x3619636b;
      *puVar8 = uVar5;
      iVar7 = (int)(((float)(uVar5 >> 9 | 0x3f800000) - fVar4) * (float)iVar6);
    }
    **(int **)&((param_4.__this)->OutputValue).field_0x8 = iVar2 + iVar7;
    TriggerFrame(*(FTrigger **)&((param_4.__this)->TriggerOutOnNext).field_0x8,iVar1);
  }
  return;
}

// FillGeneratorsArray<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_> @ 14b1bec60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
Metasound::Generators::
FillGeneratorsArray<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
          (TArray<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
           *param_1,int param_2,float param_3)

{
  int *piVar1;
  float *pfVar2;
  ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
  FVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs> FVar12;
  ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
  FVar13;
  uint uVar14;
  uint uVar15;
  undefined8 *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStackY_2d8 [32];
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float local_278;
  float local_270;
  float fStack_26c;
  uint uStack_268;
  uint uStack_264;
  float local_260;
  float local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  float fStack_248;
  float local_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 local_234;
  undefined4 uStack_230;
  byte local_22c;
  undefined1 local_228 [320];
  ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs> local_e8;
  int local_e0;
  int local_dc;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  lVar17 = (longlong)param_2;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
  }
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 < param_2) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>_>
              (0x1c,4,param_2,&param_1->AllocatorInstance,0,piVar1);
  }
  local_e8 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0;
  local_e0 = 0;
  local_dc = 0x10;
  uStack_254 = 0;
  uStack_250 = 0;
  uStack_24c = 0;
  fStack_248 = 0.0;
  iVar9 = 0;
  local_258 = param_3;
  if ((local_228 <= &local_258) && (&local_258 < local_228 + 0x140)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar9 = local_e0;
    if (local_e0 == local_dc) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>_>
                        (0x414,(ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs> *)
                               local_228,&local_dc);
    }
  }
  fVar7 = __real_38800100;
  uVar14 = __xmm_80000000800000008000000080000000;
  fVar6 = __real_3f000000;
  fVar5 = __real_3f800000;
  local_e0 = iVar9 + 1;
  FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
  if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
    FVar12 = local_e8;
  }
  uVar15 = 0;
  pfVar2 = (float *)((longlong)FVar12 + (longlong)iVar9 * 0x14);
  *(ulonglong *)pfVar2 = CONCAT44(uStack_254,local_258);
  *(ulonglong *)(pfVar2 + 2) = CONCAT44(uStack_24c,uStack_250);
  ((float *)((longlong)FVar12 + 0x10))[(longlong)iVar9 * 5] = fStack_248;
  fVar20 = 0.0;
  fVar21 = (float)-((int)ROUND(__real_bf000000 - (float)param_2) >> 1);
  if (0.0 < fVar21) {
    fVar22 = __real_3f800000 / fVar21;
    do {
      fVar19 = (fVar21 - fVar20) * fVar22;
      fVar20 = fVar19;
      if ((uVar15 & 1) != 0) {
        fVar20 = (float)((uint)fVar19 ^ uVar14);
      }
      local_288 = param_3;
      fStack_284 = fVar19;
      fStack_280 = fVar19;
      fStack_27c = fVar20;
      uVar10 = rand();
      FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
      if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
        FVar12 = local_e8;
      }
      local_278 = (float)(uVar10 & 0x7fff) * fVar7 - fVar5;
      if ((ulonglong)FVar12 <= &local_288) {
        FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
        if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
          FVar12 = local_e8;
        }
        if ((&local_288 < (float *)((longlong)FVar12 + (longlong)local_dc * 0x14)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (local_e0 == local_dc) {
        local_e0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>_>
                             (0x414,(ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>
                                     *)local_228,&local_dc);
      }
      lVar11 = (longlong)local_e0;
      FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
      if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
        FVar12 = local_e8;
      }
      uStack_264 = (uint)fVar20 ^ uVar14;
      pfVar2 = (float *)((longlong)FVar12 + lVar11 * 0x14);
      local_e0 = local_e0 + 1;
      *(ulonglong *)pfVar2 = CONCAT44(fStack_284,local_288);
      *(ulonglong *)(pfVar2 + 2) = CONCAT44(fStack_27c,fStack_280);
      ((float *)((longlong)FVar12 + 0x10))[lVar11 * 5] = local_278;
      fStack_26c = fVar19 + fVar6;
      uStack_268 = (uint)fVar19 ^ uVar14;
      local_270 = param_3;
      uVar10 = rand();
      FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
      if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
        FVar12 = local_e8;
      }
      local_260 = (float)(uVar10 & 0x7fff) * fVar7 - fVar5;
      if ((ulonglong)FVar12 <= &local_270) {
        FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
        if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
          FVar12 = local_e8;
        }
        if ((&local_270 < (float *)((longlong)FVar12 + (longlong)local_dc * 0x14)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar9 = local_e0;
      if (local_e0 == local_dc) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>_>
                          (0x414,(ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs> *)
                                 local_228,&local_dc);
      }
      local_e0 = iVar9 + 1;
      FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
      if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
        FVar12 = local_e8;
      }
      uVar15 = uVar15 + 1;
      pfVar2 = (float *)((longlong)FVar12 + (longlong)iVar9 * 0x14);
      *(ulonglong *)pfVar2 = CONCAT44(fStack_26c,local_270);
      *(ulonglong *)(pfVar2 + 2) = CONCAT44(uStack_264,uStack_268);
      fVar20 = (float)(int)uVar15;
      ((float *)((longlong)FVar12 + 0x10))[(longlong)iVar9 * 5] = local_260;
    } while (fVar20 < fVar21);
  }
  if ((local_e0 < param_2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("VoiceArgs.Num() >= NumVoicesToInit",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundSuperOscillatorNode.cpp"
                         ,0x93,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar14 = 0;
  if (param_2 != 0) {
    lVar11 = 0;
    do {
      uVar15 = 0;
      if ((int)uVar14 < local_e0) {
        uVar15 = ~uVar14 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar3 = (param_1->AllocatorInstance).SecondaryData;
      FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
      if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
        FVar12 = local_e8;
      }
      FVar13 = (ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
                )param_1;
      if (FVar3 != (ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
                    )0x0) {
        FVar13 = FVar3;
      }
      local_244 = *(float *)(lVar11 + 8 + (longlong)FVar12);
      uStack_240 = *(undefined4 *)(lVar11 + 0xc + (longlong)FVar12);
      uStack_23c = *(undefined4 *)(lVar11 + 0x10 + (longlong)FVar12);
      uStack_230 = 0xbf800000;
      uStack_238 = *(undefined4 *)(lVar11 + 4 + (longlong)FVar12);
      local_22c = 6;
      if ((ulonglong)FVar13 <= &local_244) {
        FVar13 = (ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
                  )param_1;
        if (FVar3 != (ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
                      )0x0) {
          FVar13 = FVar3;
        }
        if ((&local_244 < (float *)((longlong)*piVar1 * 0x1c + (longlong)FVar13)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar9 = param_1->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>_>
                          (0x41c,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar9 + 1;
      FVar3 = (param_1->AllocatorInstance).SecondaryData;
      FVar13 = (ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
                )param_1;
      if (FVar3 != (ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
                    )0x0) {
        FVar13 = FVar3;
      }
      puVar16 = (undefined8 *)((longlong)iVar9 * 0x1c + (longlong)FVar13);
      *(byte *)(puVar16 + 3) = local_22c;
      uVar18 = (ulonglong)local_22c;
      if ((7 < local_22c) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xec,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                    ::__l2::CopyConstructors)[uVar18] ==
          UE::Core::Private::
          TCopyConstructorCaller<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
          ::Construct) {
        *puVar16 = CONCAT44(uStack_240,local_244);
        puVar16[1] = CONCAT44(uStack_238,uStack_23c);
        puVar16[2] = CONCAT44(uStack_230,local_234);
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                    ::__l2::CopyConstructors)[uVar18])(puVar16,&local_244);
      }
      uVar14 = uVar14 + 1;
      lVar11 = lVar11 + 0x14;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
    FMemory::Free((void *)local_e8);
  }
  return;
}

// FillGeneratorsArray<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>_> @ 14b1bf420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
Metasound::Generators::
FillGeneratorsArray<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>_>
          (TArray<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
           *param_1,int param_2,float param_3)

{
  int *piVar1;
  float *pfVar2;
  ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
  FVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs> FVar12;
  ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
  FVar13;
  uint uVar14;
  uint uVar15;
  undefined8 *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStackY_2d8 [32];
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float local_278;
  float local_270;
  float fStack_26c;
  uint uStack_268;
  uint uStack_264;
  float local_260;
  float local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  float fStack_248;
  float local_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 local_234;
  undefined4 uStack_230;
  byte local_22c;
  undefined1 local_228 [320];
  ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs> local_e8;
  int local_e0;
  int local_dc;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  lVar17 = (longlong)param_2;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
  }
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 < param_2) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>_>
              (0x1c,4,param_2,&param_1->AllocatorInstance,0,piVar1);
  }
  local_e8 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0;
  local_e0 = 0;
  local_dc = 0x10;
  uStack_254 = 0;
  uStack_250 = 0;
  uStack_24c = 0;
  fStack_248 = 0.0;
  iVar9 = 0;
  local_258 = param_3;
  if ((local_228 <= &local_258) && (&local_258 < local_228 + 0x140)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar9 = local_e0;
    if (local_e0 == local_dc) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>_>
                        (0x414,(ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs> *)
                               local_228,&local_dc);
    }
  }
  fVar7 = __real_38800100;
  uVar14 = __xmm_80000000800000008000000080000000;
  fVar6 = __real_3f000000;
  fVar5 = __real_3f800000;
  local_e0 = iVar9 + 1;
  FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
  if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
    FVar12 = local_e8;
  }
  uVar15 = 0;
  pfVar2 = (float *)((longlong)FVar12 + (longlong)iVar9 * 0x14);
  *(ulonglong *)pfVar2 = CONCAT44(uStack_254,local_258);
  *(ulonglong *)(pfVar2 + 2) = CONCAT44(uStack_24c,uStack_250);
  ((float *)((longlong)FVar12 + 0x10))[(longlong)iVar9 * 5] = fStack_248;
  fVar20 = 0.0;
  fVar21 = (float)-((int)ROUND(__real_bf000000 - (float)param_2) >> 1);
  if (0.0 < fVar21) {
    fVar22 = __real_3f800000 / fVar21;
    do {
      fVar19 = (fVar21 - fVar20) * fVar22;
      fVar20 = fVar19;
      if ((uVar15 & 1) != 0) {
        fVar20 = (float)((uint)fVar19 ^ uVar14);
      }
      local_288 = param_3;
      fStack_284 = fVar19;
      fStack_280 = fVar19;
      fStack_27c = fVar20;
      uVar10 = rand();
      FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
      if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
        FVar12 = local_e8;
      }
      local_278 = (float)(uVar10 & 0x7fff) * fVar7 - fVar5;
      if ((ulonglong)FVar12 <= &local_288) {
        FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
        if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
          FVar12 = local_e8;
        }
        if ((&local_288 < (float *)((longlong)FVar12 + (longlong)local_dc * 0x14)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (local_e0 == local_dc) {
        local_e0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>_>
                             (0x414,(ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>
                                     *)local_228,&local_dc);
      }
      lVar11 = (longlong)local_e0;
      FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
      if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
        FVar12 = local_e8;
      }
      uStack_264 = (uint)fVar20 ^ uVar14;
      pfVar2 = (float *)((longlong)FVar12 + lVar11 * 0x14);
      local_e0 = local_e0 + 1;
      *(ulonglong *)pfVar2 = CONCAT44(fStack_284,local_288);
      *(ulonglong *)(pfVar2 + 2) = CONCAT44(fStack_27c,fStack_280);
      ((float *)((longlong)FVar12 + 0x10))[lVar11 * 5] = local_278;
      fStack_26c = fVar19 + fVar6;
      uStack_268 = (uint)fVar19 ^ uVar14;
      local_270 = param_3;
      uVar10 = rand();
      FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
      if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
        FVar12 = local_e8;
      }
      local_260 = (float)(uVar10 & 0x7fff) * fVar7 - fVar5;
      if ((ulonglong)FVar12 <= &local_270) {
        FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
        if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
          FVar12 = local_e8;
        }
        if ((&local_270 < (float *)((longlong)FVar12 + (longlong)local_dc * 0x14)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar9 = local_e0;
      if (local_e0 == local_dc) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>_>
                          (0x414,(ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs> *)
                                 local_228,&local_dc);
      }
      local_e0 = iVar9 + 1;
      FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
      if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
        FVar12 = local_e8;
      }
      uVar15 = uVar15 + 1;
      pfVar2 = (float *)((longlong)FVar12 + (longlong)iVar9 * 0x14);
      *(ulonglong *)pfVar2 = CONCAT44(fStack_26c,local_270);
      *(ulonglong *)(pfVar2 + 2) = CONCAT44(uStack_264,uStack_268);
      fVar20 = (float)(int)uVar15;
      ((float *)((longlong)FVar12 + 0x10))[(longlong)iVar9 * 5] = local_260;
    } while (fVar20 < fVar21);
  }
  if ((local_e0 < param_2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("VoiceArgs.Num() >= NumVoicesToInit",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundSuperOscillatorNode.cpp"
                         ,0x93,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar14 = 0;
  if (param_2 != 0) {
    lVar11 = 0;
    do {
      uVar15 = 0;
      if ((int)uVar14 < local_e0) {
        uVar15 = ~uVar14 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar3 = (param_1->AllocatorInstance).SecondaryData;
      FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
      if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
        FVar12 = local_e8;
      }
      FVar13 = (ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
                )param_1;
      if (FVar3 != (ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
                    )0x0) {
        FVar13 = FVar3;
      }
      local_244 = *(float *)(lVar11 + 8 + (longlong)FVar12);
      uStack_240 = *(undefined4 *)(lVar11 + 0xc + (longlong)FVar12);
      uStack_23c = *(undefined4 *)(lVar11 + 0x10 + (longlong)FVar12);
      uStack_230 = 0xbf800000;
      uStack_238 = *(undefined4 *)(lVar11 + 4 + (longlong)FVar12);
      local_22c = 0;
      if ((ulonglong)FVar13 <= &local_244) {
        FVar13 = (ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
                  )param_1;
        if (FVar3 != (ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
                      )0x0) {
          FVar13 = FVar3;
        }
        if ((&local_244 < (float *)((longlong)*piVar1 * 0x1c + (longlong)FVar13)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar9 = param_1->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>_>
                          (0x41c,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar9 + 1;
      FVar3 = (param_1->AllocatorInstance).SecondaryData;
      FVar13 = (ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
                )param_1;
      if (FVar3 != (ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
                    )0x0) {
        FVar13 = FVar3;
      }
      puVar16 = (undefined8 *)((longlong)iVar9 * 0x1c + (longlong)FVar13);
      *(byte *)(puVar16 + 3) = local_22c;
      uVar18 = (ulonglong)local_22c;
      if ((7 < local_22c) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xec,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                    ::__l2::CopyConstructors)[uVar18] ==
          UE::Core::Private::
          TCopyConstructorCaller<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>_>
          ::Construct) {
        *puVar16 = CONCAT44(uStack_240,local_244);
        puVar16[1] = CONCAT44(uStack_238,uStack_23c);
        puVar16[2] = CONCAT44(uStack_230,local_234);
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                    ::__l2::CopyConstructors)[uVar18])(puVar16,&local_244);
      }
      uVar14 = uVar14 + 1;
      lVar11 = lVar11 + 0x14;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
    FMemory::Free((void *)local_e8);
  }
  return;
}

// FillGeneratorsArray<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_> @ 14b1bfbe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
Metasound::Generators::
FillGeneratorsArray<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
          (TArray<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
           *param_1,int param_2,float param_3)

{
  int *piVar1;
  float *pfVar2;
  ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
  FVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs> FVar12;
  ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
  FVar13;
  uint uVar14;
  uint uVar15;
  undefined8 *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStackY_2d8 [32];
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float local_278;
  float local_270;
  float fStack_26c;
  uint uStack_268;
  uint uStack_264;
  float local_260;
  float local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  float fStack_248;
  float local_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 local_234;
  undefined4 uStack_230;
  byte local_22c;
  undefined1 local_228 [320];
  ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs> local_e8;
  int local_e0;
  int local_dc;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  lVar17 = (longlong)param_2;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
  }
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 < param_2) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>_>
              (0x1c,4,param_2,&param_1->AllocatorInstance,0,piVar1);
  }
  local_e8 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0;
  local_e0 = 0;
  local_dc = 0x10;
  uStack_254 = 0;
  uStack_250 = 0;
  uStack_24c = 0;
  fStack_248 = 0.0;
  iVar9 = 0;
  local_258 = param_3;
  if ((local_228 <= &local_258) && (&local_258 < local_228 + 0x140)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar9 = local_e0;
    if (local_e0 == local_dc) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>_>
                        (0x414,(ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs> *)
                               local_228,&local_dc);
    }
  }
  fVar7 = __real_38800100;
  uVar14 = __xmm_80000000800000008000000080000000;
  fVar6 = __real_3f000000;
  fVar5 = __real_3f800000;
  local_e0 = iVar9 + 1;
  FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
  if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
    FVar12 = local_e8;
  }
  uVar15 = 0;
  pfVar2 = (float *)((longlong)FVar12 + (longlong)iVar9 * 0x14);
  *(ulonglong *)pfVar2 = CONCAT44(uStack_254,local_258);
  *(ulonglong *)(pfVar2 + 2) = CONCAT44(uStack_24c,uStack_250);
  ((float *)((longlong)FVar12 + 0x10))[(longlong)iVar9 * 5] = fStack_248;
  fVar20 = 0.0;
  fVar21 = (float)-((int)ROUND(__real_bf000000 - (float)param_2) >> 1);
  if (0.0 < fVar21) {
    fVar22 = __real_3f800000 / fVar21;
    do {
      fVar19 = (fVar21 - fVar20) * fVar22;
      fVar20 = fVar19;
      if ((uVar15 & 1) != 0) {
        fVar20 = (float)((uint)fVar19 ^ uVar14);
      }
      local_288 = param_3;
      fStack_284 = fVar19;
      fStack_280 = fVar19;
      fStack_27c = fVar20;
      uVar10 = rand();
      FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
      if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
        FVar12 = local_e8;
      }
      local_278 = (float)(uVar10 & 0x7fff) * fVar7 - fVar5;
      if ((ulonglong)FVar12 <= &local_288) {
        FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
        if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
          FVar12 = local_e8;
        }
        if ((&local_288 < (float *)((longlong)FVar12 + (longlong)local_dc * 0x14)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (local_e0 == local_dc) {
        local_e0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>_>
                             (0x414,(ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>
                                     *)local_228,&local_dc);
      }
      lVar11 = (longlong)local_e0;
      FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
      if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
        FVar12 = local_e8;
      }
      uStack_264 = (uint)fVar20 ^ uVar14;
      pfVar2 = (float *)((longlong)FVar12 + lVar11 * 0x14);
      local_e0 = local_e0 + 1;
      *(ulonglong *)pfVar2 = CONCAT44(fStack_284,local_288);
      *(ulonglong *)(pfVar2 + 2) = CONCAT44(fStack_27c,fStack_280);
      ((float *)((longlong)FVar12 + 0x10))[lVar11 * 5] = local_278;
      fStack_26c = fVar19 + fVar6;
      uStack_268 = (uint)fVar19 ^ uVar14;
      local_270 = param_3;
      uVar10 = rand();
      FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
      if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
        FVar12 = local_e8;
      }
      local_260 = (float)(uVar10 & 0x7fff) * fVar7 - fVar5;
      if ((ulonglong)FVar12 <= &local_270) {
        FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
        if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
          FVar12 = local_e8;
        }
        if ((&local_270 < (float *)((longlong)FVar12 + (longlong)local_dc * 0x14)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar9 = local_e0;
      if (local_e0 == local_dc) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>_>
                          (0x414,(ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs> *)
                                 local_228,&local_dc);
      }
      local_e0 = iVar9 + 1;
      FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
      if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
        FVar12 = local_e8;
      }
      uVar15 = uVar15 + 1;
      pfVar2 = (float *)((longlong)FVar12 + (longlong)iVar9 * 0x14);
      *(ulonglong *)pfVar2 = CONCAT44(fStack_26c,local_270);
      *(ulonglong *)(pfVar2 + 2) = CONCAT44(uStack_264,uStack_268);
      fVar20 = (float)(int)uVar15;
      ((float *)((longlong)FVar12 + 0x10))[(longlong)iVar9 * 5] = local_260;
    } while (fVar20 < fVar21);
  }
  if ((local_e0 < param_2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("VoiceArgs.Num() >= NumVoicesToInit",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundSuperOscillatorNode.cpp"
                         ,0x93,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar14 = 0;
  if (param_2 != 0) {
    lVar11 = 0;
    do {
      uVar15 = 0;
      if ((int)uVar14 < local_e0) {
        uVar15 = ~uVar14 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar3 = (param_1->AllocatorInstance).SecondaryData;
      FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
      if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
        FVar12 = local_e8;
      }
      FVar13 = (ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
                )param_1;
      if (FVar3 != (ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
                    )0x0) {
        FVar13 = FVar3;
      }
      local_244 = *(float *)(lVar11 + 8 + (longlong)FVar12);
      uStack_240 = *(undefined4 *)(lVar11 + 0xc + (longlong)FVar12);
      uStack_23c = *(undefined4 *)(lVar11 + 0x10 + (longlong)FVar12);
      uStack_230 = 0xbf800000;
      uStack_238 = *(undefined4 *)(lVar11 + 4 + (longlong)FVar12);
      local_22c = 4;
      if ((ulonglong)FVar13 <= &local_244) {
        FVar13 = (ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
                  )param_1;
        if (FVar3 != (ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
                      )0x0) {
          FVar13 = FVar3;
        }
        if ((&local_244 < (float *)((longlong)*piVar1 * 0x1c + (longlong)FVar13)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar9 = param_1->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>_>
                          (0x41c,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar9 + 1;
      FVar3 = (param_1->AllocatorInstance).SecondaryData;
      FVar13 = (ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
                )param_1;
      if (FVar3 != (ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
                    )0x0) {
        FVar13 = FVar3;
      }
      puVar16 = (undefined8 *)((longlong)iVar9 * 0x1c + (longlong)FVar13);
      *(byte *)(puVar16 + 3) = local_22c;
      uVar18 = (ulonglong)local_22c;
      if ((7 < local_22c) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xec,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                    ::__l2::CopyConstructors)[uVar18] ==
          UE::Core::Private::
          TCopyConstructorCaller<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
          ::Construct) {
        *puVar16 = CONCAT44(uStack_240,local_244);
        puVar16[1] = CONCAT44(uStack_238,uStack_23c);
        puVar16[2] = CONCAT44(uStack_230,local_234);
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                    ::__l2::CopyConstructors)[uVar18])(puVar16,&local_244);
      }
      uVar14 = uVar14 + 1;
      lVar11 = lVar11 + 0x14;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
    FMemory::Free((void *)local_e8);
  }
  return;
}

// FillGeneratorsArray<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>_> @ 14b1c03a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
Metasound::Generators::
FillGeneratorsArray<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>_>
          (TArray<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
           *param_1,int param_2,float param_3)

{
  int *piVar1;
  float *pfVar2;
  ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
  FVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs> FVar12;
  ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
  FVar13;
  uint uVar14;
  uint uVar15;
  undefined8 *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStackY_2d8 [32];
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float local_278;
  float local_270;
  float fStack_26c;
  uint uStack_268;
  uint uStack_264;
  float local_260;
  float local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  float fStack_248;
  float local_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 local_234;
  undefined4 uStack_230;
  byte local_22c;
  undefined1 local_228 [320];
  ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs> local_e8;
  int local_e0;
  int local_dc;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  lVar17 = (longlong)param_2;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
  }
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 < param_2) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>_>
              (0x1c,4,param_2,&param_1->AllocatorInstance,0,piVar1);
  }
  local_e8 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0;
  local_e0 = 0;
  local_dc = 0x10;
  uStack_254 = 0;
  uStack_250 = 0;
  uStack_24c = 0;
  fStack_248 = 0.0;
  iVar9 = 0;
  local_258 = param_3;
  if ((local_228 <= &local_258) && (&local_258 < local_228 + 0x140)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar9 = local_e0;
    if (local_e0 == local_dc) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>_>
                        (0x414,(ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs> *)
                               local_228,&local_dc);
    }
  }
  fVar7 = __real_38800100;
  uVar14 = __xmm_80000000800000008000000080000000;
  fVar6 = __real_3f000000;
  fVar5 = __real_3f800000;
  local_e0 = iVar9 + 1;
  FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
  if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
    FVar12 = local_e8;
  }
  uVar15 = 0;
  pfVar2 = (float *)((longlong)FVar12 + (longlong)iVar9 * 0x14);
  *(ulonglong *)pfVar2 = CONCAT44(uStack_254,local_258);
  *(ulonglong *)(pfVar2 + 2) = CONCAT44(uStack_24c,uStack_250);
  ((float *)((longlong)FVar12 + 0x10))[(longlong)iVar9 * 5] = fStack_248;
  fVar20 = 0.0;
  fVar21 = (float)-((int)ROUND(__real_bf000000 - (float)param_2) >> 1);
  if (0.0 < fVar21) {
    fVar22 = __real_3f800000 / fVar21;
    do {
      fVar19 = (fVar21 - fVar20) * fVar22;
      fVar20 = fVar19;
      if ((uVar15 & 1) != 0) {
        fVar20 = (float)((uint)fVar19 ^ uVar14);
      }
      local_288 = param_3;
      fStack_284 = fVar19;
      fStack_280 = fVar19;
      fStack_27c = fVar20;
      uVar10 = rand();
      FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
      if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
        FVar12 = local_e8;
      }
      local_278 = (float)(uVar10 & 0x7fff) * fVar7 - fVar5;
      if ((ulonglong)FVar12 <= &local_288) {
        FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
        if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
          FVar12 = local_e8;
        }
        if ((&local_288 < (float *)((longlong)FVar12 + (longlong)local_dc * 0x14)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (local_e0 == local_dc) {
        local_e0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>_>
                             (0x414,(ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>
                                     *)local_228,&local_dc);
      }
      lVar11 = (longlong)local_e0;
      FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
      if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
        FVar12 = local_e8;
      }
      uStack_264 = (uint)fVar20 ^ uVar14;
      pfVar2 = (float *)((longlong)FVar12 + lVar11 * 0x14);
      local_e0 = local_e0 + 1;
      *(ulonglong *)pfVar2 = CONCAT44(fStack_284,local_288);
      *(ulonglong *)(pfVar2 + 2) = CONCAT44(fStack_27c,fStack_280);
      ((float *)((longlong)FVar12 + 0x10))[lVar11 * 5] = local_278;
      fStack_26c = fVar19 + fVar6;
      uStack_268 = (uint)fVar19 ^ uVar14;
      local_270 = param_3;
      uVar10 = rand();
      FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
      if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
        FVar12 = local_e8;
      }
      local_260 = (float)(uVar10 & 0x7fff) * fVar7 - fVar5;
      if ((ulonglong)FVar12 <= &local_270) {
        FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
        if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
          FVar12 = local_e8;
        }
        if ((&local_270 < (float *)((longlong)FVar12 + (longlong)local_dc * 0x14)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar9 = local_e0;
      if (local_e0 == local_dc) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>_>
                          (0x414,(ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs> *)
                                 local_228,&local_dc);
      }
      local_e0 = iVar9 + 1;
      FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
      if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
        FVar12 = local_e8;
      }
      uVar15 = uVar15 + 1;
      pfVar2 = (float *)((longlong)FVar12 + (longlong)iVar9 * 0x14);
      *(ulonglong *)pfVar2 = CONCAT44(fStack_26c,local_270);
      *(ulonglong *)(pfVar2 + 2) = CONCAT44(uStack_264,uStack_268);
      fVar20 = (float)(int)uVar15;
      ((float *)((longlong)FVar12 + 0x10))[(longlong)iVar9 * 5] = local_260;
    } while (fVar20 < fVar21);
  }
  if ((local_e0 < param_2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("VoiceArgs.Num() >= NumVoicesToInit",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundSuperOscillatorNode.cpp"
                         ,0x93,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar14 = 0;
  if (param_2 != 0) {
    lVar11 = 0;
    do {
      uVar15 = 0;
      if ((int)uVar14 < local_e0) {
        uVar15 = ~uVar14 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar3 = (param_1->AllocatorInstance).SecondaryData;
      FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
      if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
        FVar12 = local_e8;
      }
      FVar13 = (ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
                )param_1;
      if (FVar3 != (ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
                    )0x0) {
        FVar13 = FVar3;
      }
      local_244 = *(float *)(lVar11 + 8 + (longlong)FVar12);
      uStack_240 = *(undefined4 *)(lVar11 + 0xc + (longlong)FVar12);
      uStack_23c = *(undefined4 *)(lVar11 + 0x10 + (longlong)FVar12);
      uStack_230 = 0xbf800000;
      uStack_238 = *(undefined4 *)(lVar11 + 4 + (longlong)FVar12);
      local_22c = 2;
      if ((ulonglong)FVar13 <= &local_244) {
        FVar13 = (ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
                  )param_1;
        if (FVar3 != (ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
                      )0x0) {
          FVar13 = FVar3;
        }
        if ((&local_244 < (float *)((longlong)*piVar1 * 0x1c + (longlong)FVar13)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar9 = param_1->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>_>
                          (0x41c,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar9 + 1;
      FVar3 = (param_1->AllocatorInstance).SecondaryData;
      FVar13 = (ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
                )param_1;
      if (FVar3 != (ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
                    )0x0) {
        FVar13 = FVar3;
      }
      puVar16 = (undefined8 *)((longlong)iVar9 * 0x1c + (longlong)FVar13);
      *(byte *)(puVar16 + 3) = local_22c;
      uVar18 = (ulonglong)local_22c;
      if ((7 < local_22c) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xec,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                    ::__l2::CopyConstructors)[uVar18] ==
          UE::Core::Private::
          TCopyConstructorCaller<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>_>
          ::Construct) {
        *puVar16 = CONCAT44(uStack_240,local_244);
        puVar16[1] = CONCAT44(uStack_238,uStack_23c);
        puVar16[2] = CONCAT44(uStack_230,local_234);
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                    ::__l2::CopyConstructors)[uVar18])(puVar16,&local_244);
      }
      uVar14 = uVar14 + 1;
      lVar11 = lVar11 + 0x14;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
    FMemory::Free((void *)local_e8);
  }
  return;
}

// FillGeneratorsArray<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_> @ 14b1c0b60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
Metasound::Generators::
FillGeneratorsArray<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
          (TArray<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
           *param_1,int param_2,float param_3)

{
  int *piVar1;
  float *pfVar2;
  ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
  FVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs> FVar12;
  ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
  FVar13;
  uint uVar14;
  uint uVar15;
  undefined8 *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStackY_2d8 [32];
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float local_278;
  float local_270;
  float fStack_26c;
  uint uStack_268;
  uint uStack_264;
  float local_260;
  float local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  float fStack_248;
  float local_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 local_234;
  undefined4 uStack_230;
  byte local_22c;
  undefined1 local_228 [320];
  ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs> local_e8;
  int local_e0;
  int local_dc;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  lVar17 = (longlong)param_2;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
  }
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 < param_2) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>_>
              (0x1c,4,param_2,&param_1->AllocatorInstance,0,piVar1);
  }
  local_e8 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0;
  local_e0 = 0;
  local_dc = 0x10;
  uStack_254 = 0;
  uStack_250 = 0;
  uStack_24c = 0;
  fStack_248 = 0.0;
  iVar9 = 0;
  local_258 = param_3;
  if ((local_228 <= &local_258) && (&local_258 < local_228 + 0x140)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar9 = local_e0;
    if (local_e0 == local_dc) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>_>
                        (0x414,(ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs> *)
                               local_228,&local_dc);
    }
  }
  fVar7 = __real_38800100;
  uVar14 = __xmm_80000000800000008000000080000000;
  fVar6 = __real_3f000000;
  fVar5 = __real_3f800000;
  local_e0 = iVar9 + 1;
  FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
  if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
    FVar12 = local_e8;
  }
  uVar15 = 0;
  pfVar2 = (float *)((longlong)FVar12 + (longlong)iVar9 * 0x14);
  *(ulonglong *)pfVar2 = CONCAT44(uStack_254,local_258);
  *(ulonglong *)(pfVar2 + 2) = CONCAT44(uStack_24c,uStack_250);
  ((float *)((longlong)FVar12 + 0x10))[(longlong)iVar9 * 5] = fStack_248;
  fVar20 = 0.0;
  fVar21 = (float)-((int)ROUND(__real_bf000000 - (float)param_2) >> 1);
  if (0.0 < fVar21) {
    fVar22 = __real_3f800000 / fVar21;
    do {
      fVar19 = (fVar21 - fVar20) * fVar22;
      fVar20 = fVar19;
      if ((uVar15 & 1) != 0) {
        fVar20 = (float)((uint)fVar19 ^ uVar14);
      }
      local_288 = param_3;
      fStack_284 = fVar19;
      fStack_280 = fVar19;
      fStack_27c = fVar20;
      uVar10 = rand();
      FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
      if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
        FVar12 = local_e8;
      }
      local_278 = (float)(uVar10 & 0x7fff) * fVar7 - fVar5;
      if ((ulonglong)FVar12 <= &local_288) {
        FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
        if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
          FVar12 = local_e8;
        }
        if ((&local_288 < (float *)((longlong)FVar12 + (longlong)local_dc * 0x14)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (local_e0 == local_dc) {
        local_e0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>_>
                             (0x414,(ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>
                                     *)local_228,&local_dc);
      }
      lVar11 = (longlong)local_e0;
      FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
      if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
        FVar12 = local_e8;
      }
      uStack_264 = (uint)fVar20 ^ uVar14;
      pfVar2 = (float *)((longlong)FVar12 + lVar11 * 0x14);
      local_e0 = local_e0 + 1;
      *(ulonglong *)pfVar2 = CONCAT44(fStack_284,local_288);
      *(ulonglong *)(pfVar2 + 2) = CONCAT44(fStack_27c,fStack_280);
      ((float *)((longlong)FVar12 + 0x10))[lVar11 * 5] = local_278;
      fStack_26c = fVar19 + fVar6;
      uStack_268 = (uint)fVar19 ^ uVar14;
      local_270 = param_3;
      uVar10 = rand();
      FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
      if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
        FVar12 = local_e8;
      }
      local_260 = (float)(uVar10 & 0x7fff) * fVar7 - fVar5;
      if ((ulonglong)FVar12 <= &local_270) {
        FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
        if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
          FVar12 = local_e8;
        }
        if ((&local_270 < (float *)((longlong)FVar12 + (longlong)local_dc * 0x14)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar9 = local_e0;
      if (local_e0 == local_dc) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>_>
                          (0x414,(ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs> *)
                                 local_228,&local_dc);
      }
      local_e0 = iVar9 + 1;
      FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
      if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
        FVar12 = local_e8;
      }
      uVar15 = uVar15 + 1;
      pfVar2 = (float *)((longlong)FVar12 + (longlong)iVar9 * 0x14);
      *(ulonglong *)pfVar2 = CONCAT44(fStack_26c,local_270);
      *(ulonglong *)(pfVar2 + 2) = CONCAT44(uStack_264,uStack_268);
      fVar20 = (float)(int)uVar15;
      ((float *)((longlong)FVar12 + 0x10))[(longlong)iVar9 * 5] = local_260;
    } while (fVar20 < fVar21);
  }
  if ((local_e0 < param_2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("VoiceArgs.Num() >= NumVoicesToInit",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundSuperOscillatorNode.cpp"
                         ,0x93,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar14 = 0;
  if (param_2 != 0) {
    lVar11 = 0;
    do {
      uVar15 = 0;
      if ((int)uVar14 < local_e0) {
        uVar15 = ~uVar14 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar3 = (param_1->AllocatorInstance).SecondaryData;
      FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
      if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
        FVar12 = local_e8;
      }
      FVar13 = (ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
                )param_1;
      if (FVar3 != (ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
                    )0x0) {
        FVar13 = FVar3;
      }
      local_244 = *(float *)(lVar11 + 8 + (longlong)FVar12);
      uStack_240 = *(undefined4 *)(lVar11 + 0xc + (longlong)FVar12);
      uStack_23c = *(undefined4 *)(lVar11 + 0x10 + (longlong)FVar12);
      uStack_230 = 0xbf800000;
      uStack_238 = *(undefined4 *)(lVar11 + 4 + (longlong)FVar12);
      local_22c = 7;
      if ((ulonglong)FVar13 <= &local_244) {
        FVar13 = (ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
                  )param_1;
        if (FVar3 != (ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
                      )0x0) {
          FVar13 = FVar3;
        }
        if ((&local_244 < (float *)((longlong)*piVar1 * 0x1c + (longlong)FVar13)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar9 = param_1->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>_>
                          (0x41c,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar9 + 1;
      FVar3 = (param_1->AllocatorInstance).SecondaryData;
      FVar13 = (ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
                )param_1;
      if (FVar3 != (ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
                    )0x0) {
        FVar13 = FVar3;
      }
      puVar16 = (undefined8 *)((longlong)iVar9 * 0x1c + (longlong)FVar13);
      *(byte *)(puVar16 + 3) = local_22c;
      uVar18 = (ulonglong)local_22c;
      if ((7 < local_22c) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xec,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                    ::__l2::CopyConstructors)[uVar18] ==
          UE::Core::Private::
          TCopyConstructorCaller<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
          ::Construct) {
        *puVar16 = CONCAT44(uStack_240,local_244);
        puVar16[1] = CONCAT44(uStack_238,uStack_23c);
        puVar16[2] = CONCAT44(uStack_230,local_234);
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                    ::__l2::CopyConstructors)[uVar18])(puVar16,&local_244);
      }
      uVar14 = uVar14 + 1;
      lVar11 = lVar11 + 0x14;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
    FMemory::Free((void *)local_e8);
  }
  return;
}

// FillGeneratorsArray<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>_> @ 14b1c1320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
Metasound::Generators::
FillGeneratorsArray<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>_>
          (TArray<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
           *param_1,int param_2,float param_3)

{
  int *piVar1;
  float *pfVar2;
  ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
  FVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs> FVar12;
  ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
  FVar13;
  uint uVar14;
  uint uVar15;
  undefined8 *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStackY_2d8 [32];
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float local_278;
  float local_270;
  float fStack_26c;
  uint uStack_268;
  uint uStack_264;
  float local_260;
  float local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  float fStack_248;
  float local_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 local_234;
  undefined4 uStack_230;
  byte local_22c;
  undefined1 local_228 [320];
  ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs> local_e8;
  int local_e0;
  int local_dc;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  lVar17 = (longlong)param_2;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
  }
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 < param_2) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>_>
              (0x1c,4,param_2,&param_1->AllocatorInstance,0,piVar1);
  }
  local_e8 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0;
  local_e0 = 0;
  local_dc = 0x10;
  uStack_254 = 0;
  uStack_250 = 0;
  uStack_24c = 0;
  fStack_248 = 0.0;
  iVar9 = 0;
  local_258 = param_3;
  if ((local_228 <= &local_258) && (&local_258 < local_228 + 0x140)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar9 = local_e0;
    if (local_e0 == local_dc) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>_>
                        (0x414,(ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs> *)
                               local_228,&local_dc);
    }
  }
  fVar7 = __real_38800100;
  uVar14 = __xmm_80000000800000008000000080000000;
  fVar6 = __real_3f000000;
  fVar5 = __real_3f800000;
  local_e0 = iVar9 + 1;
  FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
  if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
    FVar12 = local_e8;
  }
  uVar15 = 0;
  pfVar2 = (float *)((longlong)FVar12 + (longlong)iVar9 * 0x14);
  *(ulonglong *)pfVar2 = CONCAT44(uStack_254,local_258);
  *(ulonglong *)(pfVar2 + 2) = CONCAT44(uStack_24c,uStack_250);
  ((float *)((longlong)FVar12 + 0x10))[(longlong)iVar9 * 5] = fStack_248;
  fVar20 = 0.0;
  fVar21 = (float)-((int)ROUND(__real_bf000000 - (float)param_2) >> 1);
  if (0.0 < fVar21) {
    fVar22 = __real_3f800000 / fVar21;
    do {
      fVar19 = (fVar21 - fVar20) * fVar22;
      fVar20 = fVar19;
      if ((uVar15 & 1) != 0) {
        fVar20 = (float)((uint)fVar19 ^ uVar14);
      }
      local_288 = param_3;
      fStack_284 = fVar19;
      fStack_280 = fVar19;
      fStack_27c = fVar20;
      uVar10 = rand();
      FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
      if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
        FVar12 = local_e8;
      }
      local_278 = (float)(uVar10 & 0x7fff) * fVar7 - fVar5;
      if ((ulonglong)FVar12 <= &local_288) {
        FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
        if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
          FVar12 = local_e8;
        }
        if ((&local_288 < (float *)((longlong)FVar12 + (longlong)local_dc * 0x14)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (local_e0 == local_dc) {
        local_e0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>_>
                             (0x414,(ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>
                                     *)local_228,&local_dc);
      }
      lVar11 = (longlong)local_e0;
      FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
      if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
        FVar12 = local_e8;
      }
      uStack_264 = (uint)fVar20 ^ uVar14;
      pfVar2 = (float *)((longlong)FVar12 + lVar11 * 0x14);
      local_e0 = local_e0 + 1;
      *(ulonglong *)pfVar2 = CONCAT44(fStack_284,local_288);
      *(ulonglong *)(pfVar2 + 2) = CONCAT44(fStack_27c,fStack_280);
      ((float *)((longlong)FVar12 + 0x10))[lVar11 * 5] = local_278;
      fStack_26c = fVar19 + fVar6;
      uStack_268 = (uint)fVar19 ^ uVar14;
      local_270 = param_3;
      uVar10 = rand();
      FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
      if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
        FVar12 = local_e8;
      }
      local_260 = (float)(uVar10 & 0x7fff) * fVar7 - fVar5;
      if ((ulonglong)FVar12 <= &local_270) {
        FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
        if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
          FVar12 = local_e8;
        }
        if ((&local_270 < (float *)((longlong)FVar12 + (longlong)local_dc * 0x14)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar9 = local_e0;
      if (local_e0 == local_dc) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>_>
                          (0x414,(ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs> *)
                                 local_228,&local_dc);
      }
      local_e0 = iVar9 + 1;
      FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
      if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
        FVar12 = local_e8;
      }
      uVar15 = uVar15 + 1;
      pfVar2 = (float *)((longlong)FVar12 + (longlong)iVar9 * 0x14);
      *(ulonglong *)pfVar2 = CONCAT44(fStack_26c,local_270);
      *(ulonglong *)(pfVar2 + 2) = CONCAT44(uStack_264,uStack_268);
      fVar20 = (float)(int)uVar15;
      ((float *)((longlong)FVar12 + 0x10))[(longlong)iVar9 * 5] = local_260;
    } while (fVar20 < fVar21);
  }
  if ((local_e0 < param_2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("VoiceArgs.Num() >= NumVoicesToInit",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundSuperOscillatorNode.cpp"
                         ,0x93,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar14 = 0;
  if (param_2 != 0) {
    lVar11 = 0;
    do {
      uVar15 = 0;
      if ((int)uVar14 < local_e0) {
        uVar15 = ~uVar14 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar3 = (param_1->AllocatorInstance).SecondaryData;
      FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
      if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
        FVar12 = local_e8;
      }
      FVar13 = (ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
                )param_1;
      if (FVar3 != (ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
                    )0x0) {
        FVar13 = FVar3;
      }
      local_244 = *(float *)(lVar11 + 8 + (longlong)FVar12);
      uStack_240 = *(undefined4 *)(lVar11 + 0xc + (longlong)FVar12);
      uStack_23c = *(undefined4 *)(lVar11 + 0x10 + (longlong)FVar12);
      uStack_230 = 0xbf800000;
      uStack_238 = *(undefined4 *)(lVar11 + 4 + (longlong)FVar12);
      local_22c = 1;
      if ((ulonglong)FVar13 <= &local_244) {
        FVar13 = (ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
                  )param_1;
        if (FVar3 != (ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
                      )0x0) {
          FVar13 = FVar3;
        }
        if ((&local_244 < (float *)((longlong)*piVar1 * 0x1c + (longlong)FVar13)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar9 = param_1->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>_>
                          (0x41c,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar9 + 1;
      FVar3 = (param_1->AllocatorInstance).SecondaryData;
      FVar13 = (ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
                )param_1;
      if (FVar3 != (ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
                    )0x0) {
        FVar13 = FVar3;
      }
      puVar16 = (undefined8 *)((longlong)iVar9 * 0x1c + (longlong)FVar13);
      *(byte *)(puVar16 + 3) = local_22c;
      uVar18 = (ulonglong)local_22c;
      if ((7 < local_22c) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xec,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                    ::__l2::CopyConstructors)[uVar18] ==
          UE::Core::Private::
          TCopyConstructorCaller<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>_>
          ::Construct) {
        *puVar16 = CONCAT44(uStack_240,local_244);
        puVar16[1] = CONCAT44(uStack_238,uStack_23c);
        puVar16[2] = CONCAT44(uStack_230,local_234);
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                    ::__l2::CopyConstructors)[uVar18])(puVar16,&local_244);
      }
      uVar14 = uVar14 + 1;
      lVar11 = lVar11 + 0x14;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
    FMemory::Free((void *)local_e8);
  }
  return;
}

// FillGeneratorsArray<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_> @ 14b1c1ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
Metasound::Generators::
FillGeneratorsArray<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
          (TArray<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
           *param_1,int param_2,float param_3)

{
  int *piVar1;
  float *pfVar2;
  ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
  FVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs> FVar12;
  ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
  FVar13;
  uint uVar14;
  uint uVar15;
  undefined8 *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStackY_2d8 [32];
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float local_278;
  float local_270;
  float fStack_26c;
  uint uStack_268;
  uint uStack_264;
  float local_260;
  float local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  float fStack_248;
  float local_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 local_234;
  undefined4 uStack_230;
  byte local_22c;
  undefined1 local_228 [320];
  ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs> local_e8;
  int local_e0;
  int local_dc;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  lVar17 = (longlong)param_2;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
  }
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 < param_2) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>_>
              (0x1c,4,param_2,&param_1->AllocatorInstance,0,piVar1);
  }
  local_e8 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0;
  local_e0 = 0;
  local_dc = 0x10;
  uStack_254 = 0;
  uStack_250 = 0;
  uStack_24c = 0;
  fStack_248 = 0.0;
  iVar9 = 0;
  local_258 = param_3;
  if ((local_228 <= &local_258) && (&local_258 < local_228 + 0x140)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar9 = local_e0;
    if (local_e0 == local_dc) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>_>
                        (0x414,(ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs> *)
                               local_228,&local_dc);
    }
  }
  fVar7 = __real_38800100;
  uVar14 = __xmm_80000000800000008000000080000000;
  fVar6 = __real_3f000000;
  fVar5 = __real_3f800000;
  local_e0 = iVar9 + 1;
  FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
  if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
    FVar12 = local_e8;
  }
  uVar15 = 0;
  pfVar2 = (float *)((longlong)FVar12 + (longlong)iVar9 * 0x14);
  *(ulonglong *)pfVar2 = CONCAT44(uStack_254,local_258);
  *(ulonglong *)(pfVar2 + 2) = CONCAT44(uStack_24c,uStack_250);
  ((float *)((longlong)FVar12 + 0x10))[(longlong)iVar9 * 5] = fStack_248;
  fVar20 = 0.0;
  fVar21 = (float)-((int)ROUND(__real_bf000000 - (float)param_2) >> 1);
  if (0.0 < fVar21) {
    fVar22 = __real_3f800000 / fVar21;
    do {
      fVar19 = (fVar21 - fVar20) * fVar22;
      fVar20 = fVar19;
      if ((uVar15 & 1) != 0) {
        fVar20 = (float)((uint)fVar19 ^ uVar14);
      }
      local_288 = param_3;
      fStack_284 = fVar19;
      fStack_280 = fVar19;
      fStack_27c = fVar20;
      uVar10 = rand();
      FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
      if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
        FVar12 = local_e8;
      }
      local_278 = (float)(uVar10 & 0x7fff) * fVar7 - fVar5;
      if ((ulonglong)FVar12 <= &local_288) {
        FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
        if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
          FVar12 = local_e8;
        }
        if ((&local_288 < (float *)((longlong)FVar12 + (longlong)local_dc * 0x14)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (local_e0 == local_dc) {
        local_e0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>_>
                             (0x414,(ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>
                                     *)local_228,&local_dc);
      }
      lVar11 = (longlong)local_e0;
      FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
      if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
        FVar12 = local_e8;
      }
      uStack_264 = (uint)fVar20 ^ uVar14;
      pfVar2 = (float *)((longlong)FVar12 + lVar11 * 0x14);
      local_e0 = local_e0 + 1;
      *(ulonglong *)pfVar2 = CONCAT44(fStack_284,local_288);
      *(ulonglong *)(pfVar2 + 2) = CONCAT44(fStack_27c,fStack_280);
      ((float *)((longlong)FVar12 + 0x10))[lVar11 * 5] = local_278;
      fStack_26c = fVar19 + fVar6;
      uStack_268 = (uint)fVar19 ^ uVar14;
      local_270 = param_3;
      uVar10 = rand();
      FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
      if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
        FVar12 = local_e8;
      }
      local_260 = (float)(uVar10 & 0x7fff) * fVar7 - fVar5;
      if ((ulonglong)FVar12 <= &local_270) {
        FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
        if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
          FVar12 = local_e8;
        }
        if ((&local_270 < (float *)((longlong)FVar12 + (longlong)local_dc * 0x14)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar9 = local_e0;
      if (local_e0 == local_dc) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>_>
                          (0x414,(ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs> *)
                                 local_228,&local_dc);
      }
      local_e0 = iVar9 + 1;
      FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
      if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
        FVar12 = local_e8;
      }
      uVar15 = uVar15 + 1;
      pfVar2 = (float *)((longlong)FVar12 + (longlong)iVar9 * 0x14);
      *(ulonglong *)pfVar2 = CONCAT44(fStack_26c,local_270);
      *(ulonglong *)(pfVar2 + 2) = CONCAT44(uStack_264,uStack_268);
      fVar20 = (float)(int)uVar15;
      ((float *)((longlong)FVar12 + 0x10))[(longlong)iVar9 * 5] = local_260;
    } while (fVar20 < fVar21);
  }
  if ((local_e0 < param_2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("VoiceArgs.Num() >= NumVoicesToInit",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundSuperOscillatorNode.cpp"
                         ,0x93,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar14 = 0;
  if (param_2 != 0) {
    lVar11 = 0;
    do {
      uVar15 = 0;
      if ((int)uVar14 < local_e0) {
        uVar15 = ~uVar14 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar3 = (param_1->AllocatorInstance).SecondaryData;
      FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
      if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
        FVar12 = local_e8;
      }
      FVar13 = (ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
                )param_1;
      if (FVar3 != (ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
                    )0x0) {
        FVar13 = FVar3;
      }
      local_244 = *(float *)(lVar11 + 8 + (longlong)FVar12);
      uStack_240 = *(undefined4 *)(lVar11 + 0xc + (longlong)FVar12);
      uStack_23c = *(undefined4 *)(lVar11 + 0x10 + (longlong)FVar12);
      uStack_230 = 0xbf800000;
      uStack_238 = *(undefined4 *)(lVar11 + 4 + (longlong)FVar12);
      local_22c = 5;
      if ((ulonglong)FVar13 <= &local_244) {
        FVar13 = (ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
                  )param_1;
        if (FVar3 != (ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
                      )0x0) {
          FVar13 = FVar3;
        }
        if ((&local_244 < (float *)((longlong)*piVar1 * 0x1c + (longlong)FVar13)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar9 = param_1->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>_>
                          (0x41c,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar9 + 1;
      FVar3 = (param_1->AllocatorInstance).SecondaryData;
      FVar13 = (ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
                )param_1;
      if (FVar3 != (ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
                    )0x0) {
        FVar13 = FVar3;
      }
      puVar16 = (undefined8 *)((longlong)iVar9 * 0x1c + (longlong)FVar13);
      *(byte *)(puVar16 + 3) = local_22c;
      uVar18 = (ulonglong)local_22c;
      if ((7 < local_22c) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xec,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                    ::__l2::CopyConstructors)[uVar18] ==
          UE::Core::Private::
          TCopyConstructorCaller<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
          ::Construct) {
        *puVar16 = CONCAT44(uStack_240,local_244);
        puVar16[1] = CONCAT44(uStack_238,uStack_23c);
        puVar16[2] = CONCAT44(uStack_230,local_234);
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                    ::__l2::CopyConstructors)[uVar18])(puVar16,&local_244);
      }
      uVar14 = uVar14 + 1;
      lVar11 = lVar11 + 0x14;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
    FMemory::Free((void *)local_e8);
  }
  return;
}

// FillGeneratorsArray<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>_> @ 14b1c22a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
Metasound::Generators::
FillGeneratorsArray<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>_>
          (TArray<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
           *param_1,int param_2,float param_3)

{
  int *piVar1;
  float *pfVar2;
  ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
  FVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs> FVar12;
  ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
  FVar13;
  uint uVar14;
  uint uVar15;
  undefined8 *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStackY_2d8 [32];
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float local_278;
  float local_270;
  float fStack_26c;
  uint uStack_268;
  uint uStack_264;
  float local_260;
  float local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  float fStack_248;
  float local_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 local_234;
  undefined4 uStack_230;
  byte local_22c;
  undefined1 local_228 [320];
  ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs> local_e8;
  int local_e0;
  int local_dc;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  lVar17 = (longlong)param_2;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
  }
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 < param_2) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>_>
              (0x1c,4,param_2,&param_1->AllocatorInstance,0,piVar1);
  }
  local_e8 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0;
  local_e0 = 0;
  local_dc = 0x10;
  uStack_254 = 0;
  uStack_250 = 0;
  uStack_24c = 0;
  fStack_248 = 0.0;
  iVar9 = 0;
  local_258 = param_3;
  if ((local_228 <= &local_258) && (&local_258 < local_228 + 0x140)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar9 = local_e0;
    if (local_e0 == local_dc) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>_>
                        (0x414,(ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs> *)
                               local_228,&local_dc);
    }
  }
  fVar7 = __real_38800100;
  uVar14 = __xmm_80000000800000008000000080000000;
  fVar6 = __real_3f000000;
  fVar5 = __real_3f800000;
  local_e0 = iVar9 + 1;
  FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
  if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
    FVar12 = local_e8;
  }
  uVar15 = 0;
  pfVar2 = (float *)((longlong)FVar12 + (longlong)iVar9 * 0x14);
  *(ulonglong *)pfVar2 = CONCAT44(uStack_254,local_258);
  *(ulonglong *)(pfVar2 + 2) = CONCAT44(uStack_24c,uStack_250);
  ((float *)((longlong)FVar12 + 0x10))[(longlong)iVar9 * 5] = fStack_248;
  fVar20 = 0.0;
  fVar21 = (float)-((int)ROUND(__real_bf000000 - (float)param_2) >> 1);
  if (0.0 < fVar21) {
    fVar22 = __real_3f800000 / fVar21;
    do {
      fVar19 = (fVar21 - fVar20) * fVar22;
      fVar20 = fVar19;
      if ((uVar15 & 1) != 0) {
        fVar20 = (float)((uint)fVar19 ^ uVar14);
      }
      local_288 = param_3;
      fStack_284 = fVar19;
      fStack_280 = fVar19;
      fStack_27c = fVar20;
      uVar10 = rand();
      FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
      if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
        FVar12 = local_e8;
      }
      local_278 = (float)(uVar10 & 0x7fff) * fVar7 - fVar5;
      if ((ulonglong)FVar12 <= &local_288) {
        FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
        if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
          FVar12 = local_e8;
        }
        if ((&local_288 < (float *)((longlong)FVar12 + (longlong)local_dc * 0x14)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (local_e0 == local_dc) {
        local_e0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>_>
                             (0x414,(ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>
                                     *)local_228,&local_dc);
      }
      lVar11 = (longlong)local_e0;
      FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
      if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
        FVar12 = local_e8;
      }
      uStack_264 = (uint)fVar20 ^ uVar14;
      pfVar2 = (float *)((longlong)FVar12 + lVar11 * 0x14);
      local_e0 = local_e0 + 1;
      *(ulonglong *)pfVar2 = CONCAT44(fStack_284,local_288);
      *(ulonglong *)(pfVar2 + 2) = CONCAT44(fStack_27c,fStack_280);
      ((float *)((longlong)FVar12 + 0x10))[lVar11 * 5] = local_278;
      fStack_26c = fVar19 + fVar6;
      uStack_268 = (uint)fVar19 ^ uVar14;
      local_270 = param_3;
      uVar10 = rand();
      FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
      if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
        FVar12 = local_e8;
      }
      local_260 = (float)(uVar10 & 0x7fff) * fVar7 - fVar5;
      if ((ulonglong)FVar12 <= &local_270) {
        FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
        if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
          FVar12 = local_e8;
        }
        if ((&local_270 < (float *)((longlong)FVar12 + (longlong)local_dc * 0x14)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar9 = local_e0;
      if (local_e0 == local_dc) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>_>
                          (0x414,(ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs> *)
                                 local_228,&local_dc);
      }
      local_e0 = iVar9 + 1;
      FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
      if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
        FVar12 = local_e8;
      }
      uVar15 = uVar15 + 1;
      pfVar2 = (float *)((longlong)FVar12 + (longlong)iVar9 * 0x14);
      *(ulonglong *)pfVar2 = CONCAT44(fStack_26c,local_270);
      *(ulonglong *)(pfVar2 + 2) = CONCAT44(uStack_264,uStack_268);
      fVar20 = (float)(int)uVar15;
      ((float *)((longlong)FVar12 + 0x10))[(longlong)iVar9 * 5] = local_260;
    } while (fVar20 < fVar21);
  }
  if ((local_e0 < param_2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("VoiceArgs.Num() >= NumVoicesToInit",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundSuperOscillatorNode.cpp"
                         ,0x93,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar14 = 0;
  if (param_2 != 0) {
    lVar11 = 0;
    do {
      uVar15 = 0;
      if ((int)uVar14 < local_e0) {
        uVar15 = ~uVar14 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar3 = (param_1->AllocatorInstance).SecondaryData;
      FVar12 = (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)local_228;
      if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
        FVar12 = local_e8;
      }
      FVar13 = (ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
                )param_1;
      if (FVar3 != (ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
                    )0x0) {
        FVar13 = FVar3;
      }
      local_244 = *(float *)(lVar11 + 8 + (longlong)FVar12);
      uStack_240 = *(undefined4 *)(lVar11 + 0xc + (longlong)FVar12);
      uStack_23c = *(undefined4 *)(lVar11 + 0x10 + (longlong)FVar12);
      uStack_230 = 0xbf800000;
      uStack_238 = *(undefined4 *)(lVar11 + 4 + (longlong)FVar12);
      local_22c = 3;
      if ((ulonglong)FVar13 <= &local_244) {
        FVar13 = (ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
                  )param_1;
        if (FVar3 != (ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
                      )0x0) {
          FVar13 = FVar3;
        }
        if ((&local_244 < (float *)((longlong)*piVar1 * 0x1c + (longlong)FVar13)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar9 = param_1->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>_>
                          (0x41c,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar9 + 1;
      FVar3 = (param_1->AllocatorInstance).SecondaryData;
      FVar13 = (ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
                )param_1;
      if (FVar3 != (ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
                    )0x0) {
        FVar13 = FVar3;
      }
      puVar16 = (undefined8 *)((longlong)iVar9 * 0x1c + (longlong)FVar13);
      *(byte *)(puVar16 + 3) = local_22c;
      uVar18 = (ulonglong)local_22c;
      if ((7 < local_22c) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xec,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                    ::__l2::CopyConstructors)[uVar18] ==
          UE::Core::Private::
          TCopyConstructorCaller<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>_>
          ::Construct) {
        *puVar16 = CONCAT44(uStack_240,local_244);
        puVar16[1] = CONCAT44(uStack_238,uStack_23c);
        puVar16[2] = CONCAT44(uStack_230,local_234);
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                    ::__l2::CopyConstructors)[uVar18])(puVar16,&local_244);
      }
      uVar14 = uVar14 + 1;
      lVar11 = lVar11 + 0x14;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  if (local_e8 != (ForElementType<Metasound::Generators::FVoiceGeneratorInitArgs>)0x0) {
    FMemory::Free((void *)local_e8);
  }
  return;
}

// GetEnumDataTypeInterface<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_> @ 14b1c38b0

TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1> * __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
          (TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (IEnumDataTypeInterface *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetEnumDataTypeInterface<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_> @ 14b1c38d0

TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1> * __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
          (TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (IEnumDataTypeInterface *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_> @ 14b1c38f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1> * __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>
          (TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1> local_18;
  
  __return_storage_ptr__->Object = (IEnumDataTypeInterface *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    local_18.Object = (IEnumDataTypeInterface *)___xmm_00000000000000000000000000000010;
    pTVar5 = (TReferenceControllerBase<1> *)&DAT_00000010;
    local_18.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5 = pTVar3 + 1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFEnumHandler__2____GetEnumDataTypeInterface_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___MetasoundDataTypeRegistrationPrivate_Frontend_Metasound__YA_AV__TSharedPtr_UIEnumDataTypeInterface_Frontend_Metasound___00__XZ__00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FEnumHandler__2____GetEnumDataTypeInterface_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___MetasoundDataTypeRegistrationPrivate_Frontend_Metasound__YA_AV__TSharedPtr_UIEnumDataTypeInterface_Frontend_Metasound___00__XZ_6B_
    ;
    if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    local_18.SharedReferenceCount.ReferenceController = pTVar3;
    local_18.Object = (IEnumDataTypeInterface *)pTVar5;
  }
  if (__return_storage_ptr__ != &local_18) {
    __return_storage_ptr__->Object = (IEnumDataTypeInterface *)pTVar5;
    local_18.Object = (IEnumDataTypeInterface *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&__return_storage_ptr__->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_> @ 14b1c3a10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1> * __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>
          (TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1> local_18;
  
  __return_storage_ptr__->Object = (IEnumDataTypeInterface *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    local_18.Object = (IEnumDataTypeInterface *)___xmm_00000000000000000000000000000010;
    pTVar5 = (TReferenceControllerBase<1> *)&DAT_00000010;
    local_18.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5 = pTVar3 + 1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFEnumHandler__2____GetEnumDataTypeInterface_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___MetasoundDataTypeRegistrationPrivate_Frontend_Metasound__YA_AV__TSharedPtr_UIEnumDataTypeInterface_Frontend_Metasound___00__XZ__00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FEnumHandler__2____GetEnumDataTypeInterface_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___MetasoundDataTypeRegistrationPrivate_Frontend_Metasound__YA_AV__TSharedPtr_UIEnumDataTypeInterface_Frontend_Metasound___00__XZ_6B_
    ;
    if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    local_18.SharedReferenceCount.ReferenceController = pTVar3;
    local_18.Object = (IEnumDataTypeInterface *)pTVar5;
  }
  if (__return_storage_ptr__ != &local_18) {
    __return_storage_ptr__->Object = (IEnumDataTypeInterface *)pTVar5;
    local_18.Object = (IEnumDataTypeInterface *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&__return_storage_ptr__->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// GetMetasoundDataTypeDisplayText<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_> @ 14b1c3b30

FText * __cdecl
Metasound::
GetMetasoundDataTypeDisplayText<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
          (void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::DisplayText,L"MetaSoundCore_DataReference",L"Enum:PanningLaw_Variable",
                 L"Enum:PanningLaw:Variable");
      atexit(`Metasound::
             TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
             ::GetTypeDisplayText'::__l2::_dynamic_atexit_destructor_for__DisplayText__);
      _Init_thread_footer(&::_TSS0);
      return &::DisplayText;
    }
  }
  return &::DisplayText;
}

// GetMetasoundDataTypeDisplayText<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_> @ 14b1c3bd0

FText * __cdecl
Metasound::
GetMetasoundDataTypeDisplayText<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
          (void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::DisplayText,L"MetaSoundCore_DataReference",L"Enum:StereoDelayMode_Variable",
                 L"Enum:StereoDelayMode:Variable");
      atexit(`Metasound::
             TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
             ::GetTypeDisplayText'::__l2::_dynamic_atexit_destructor_for__DisplayText__);
      _Init_thread_footer(&::_TSS0);
      return &::DisplayText;
    }
  }
  return &::DisplayText;
}

// GetMetasoundDataTypeDisplayText<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_> @ 14b1c3c70

FText * __cdecl
Metasound::GetMetasoundDataTypeDisplayText<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::DisplayText,L"MetaSoundCore_DataReference",L"Enum:PanningLaw",L"Enum:PanningLaw"
                );
      atexit(`Metasound::TDataReferenceTypeInfo<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
             GetTypeDisplayText'::__l2::_dynamic_atexit_destructor_for__DisplayText__);
      _Init_thread_footer(&::_TSS0);
      return &::DisplayText;
    }
  }
  return &::DisplayText;
}

// GetMetasoundDataTypeDisplayText<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_> @ 14b1c3d10

FText * __cdecl
Metasound::GetMetasoundDataTypeDisplayText<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>
          (void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::DisplayText,L"MetaSoundCore_DataReference",L"Enum:StereoDelayMode",
                 L"Enum:StereoDelayMode");
      atexit(`Metasound::
             TDataReferenceTypeInfo<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
             GetTypeDisplayText'::__l2::_dynamic_atexit_destructor_for__DisplayText__);
      _Init_thread_footer(&::_TSS0);
      return &::DisplayText;
    }
  }
  return &::DisplayText;
}

// GetMetasoundDataTypeId<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_> @ 14b1c3db0

void * __cdecl
Metasound::
GetMetasoundDataTypeId<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
          (void)

{
  return &TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
          ::TypePtr;
}

// GetMetasoundDataTypeId<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_> @ 14b1c3dc0

void * __cdecl
Metasound::
GetMetasoundDataTypeId<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
          (void)

{
  return &TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
          ::TypePtr;
}

// GetMetasoundDataTypeId<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_> @ 14b1c3dd0

void * __cdecl
Metasound::GetMetasoundDataTypeId<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>(void)

{
  return &TDataReferenceTypeInfo<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::TypePtr;
}

// GetMetasoundDataTypeId<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_> @ 14b1c3de0

void * __cdecl
Metasound::GetMetasoundDataTypeId<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>(void)

{
  return &TDataReferenceTypeInfo<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::TypePtr;
}

// GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_> @ 14b1c3df0

FName * __cdecl
Metasound::
GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
          (void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
                     ::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>(void)'
          ::__l2::TypeName;
}

// GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_> @ 14b1c3e70

FName * __cdecl
Metasound::
GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
          (void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
                     ::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>(void)'
          ::__l2::TypeName;
}

// GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_> @ 14b1c3ef0

FName * __cdecl
Metasound::GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
                     TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
          ::__l2::TypeName;
}

// GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_> @ 14b1c3f70

FName * __cdecl
Metasound::GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
                     TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
          ::__l2::TypeName;
}

// GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_> @ 14b1c3ff0

FString * __cdecl
Metasound::
GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
          (void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::FString(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>(void)'
                          ::__l2::TypeString,
                         TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
                         ::TypeName);
      atexit(`Metasound::
             GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>'
             ::__l2::_dynamic_atexit_destructor_for__TypeString__);
      _Init_thread_footer(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>(void)'
              ::__l2::TypeString;
    }
  }
  return &`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>(void)'
          ::__l2::TypeString;
}

// GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_> @ 14b1c4080

FString * __cdecl
Metasound::
GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
          (void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::FString(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>(void)'
                          ::__l2::TypeString,
                         TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
                         ::TypeName);
      atexit(`Metasound::
             GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>'
             ::__l2::_dynamic_atexit_destructor_for__TypeString__);
      _Init_thread_footer(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>(void)'
              ::__l2::TypeString;
    }
  }
  return &`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>(void)'
          ::__l2::TypeString;
}

// GetMetasoundDataTypeString<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_> @ 14b1c4110

FString * __cdecl
Metasound::GetMetasoundDataTypeString<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::FString(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
                          ::__l2::TypeString,
                         TDataReferenceTypeInfo<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
                         TypeName);
      atexit(`Metasound::
             GetMetasoundDataTypeString<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>'::__l2::
             _dynamic_atexit_destructor_for__TypeString__);
      _Init_thread_footer(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
              ::__l2::TypeString;
    }
  }
  return &`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
          ::__l2::TypeString;
}

// GetMetasoundDataTypeString<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_> @ 14b1c41a0

FString * __cdecl
Metasound::GetMetasoundDataTypeString<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::FString(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
                          ::__l2::TypeString,
                         TDataReferenceTypeInfo<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>
                         ::TypeName);
      atexit(`Metasound::
             GetMetasoundDataTypeString<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>'::
             __l2::_dynamic_atexit_destructor_for__TypeString__);
      _Init_thread_footer(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
              ::__l2::TypeString;
    }
  }
  return &`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
          ::__l2::TypeString;
}

// GetVariableAccessorNodeClassName<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_> @ 14b1c4770

FNodeClassName * __cdecl
Metasound::VariableNames::
GetVariableAccessorNodeClassName<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>();
      GetVariableAccessorNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
                  ::__l2::ClassName,pFVar1);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
              ::__l2::ClassName;
    }
  }
  return &`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
          ::__l2::ClassName;
}

// GetVariableAccessorNodeClassName<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_> @ 14b1c47f0

FNodeClassName * __cdecl
Metasound::VariableNames::
GetVariableAccessorNodeClassName<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>();
      GetVariableAccessorNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
                  ::__l2::ClassName,pFVar1);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
              ::__l2::ClassName;
    }
  }
  return &`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
          ::__l2::ClassName;
}

// GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_> @ 14b1c4870

FNodeClassName * __cdecl
Metasound::VariableNames::
GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>();
      GetVariableDeferredAccessorNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
                  ::__l2::ClassName,pFVar1);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
              ::__l2::ClassName;
    }
  }
  return &`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
          ::__l2::ClassName;
}

// GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_> @ 14b1c48f0

FNodeClassName * __cdecl
Metasound::VariableNames::
GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>
          (void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>();
      GetVariableDeferredAccessorNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
                  ::__l2::ClassName,pFVar1);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
              ::__l2::ClassName;
    }
  }
  return &`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
          ::__l2::ClassName;
}

// GetVariableMutatorNodeClassName<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_> @ 14b1c4970

FNodeClassName * __cdecl
Metasound::VariableNames::
GetVariableMutatorNodeClassName<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>();
      GetVariableMutatorNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
                  ::__l2::ClassName,pFVar1);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
              ::__l2::ClassName;
    }
  }
  return &`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
          ::__l2::ClassName;
}

// GetVariableMutatorNodeClassName<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_> @ 14b1c49f0

FNodeClassName * __cdecl
Metasound::VariableNames::
GetVariableMutatorNodeClassName<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>();
      GetVariableMutatorNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
                  ::__l2::ClassName,pFVar1);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
              ::__l2::ClassName;
    }
  }
  return &`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
          ::__l2::ClassName;
}

// GetVariableNodeClassName<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_> @ 14b1c4a70

FNodeClassName * __cdecl
Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>
          (void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>();
      GetVariableNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
                  ::__l2::ClassName,pFVar1);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
              ::__l2::ClassName;
    }
  }
  return &`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
          ::__l2::ClassName;
}

// GetVariableNodeClassName<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_> @ 14b1c4af0

FNodeClassName * __cdecl
Metasound::VariableNames::
GetVariableNodeClassName<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>();
      GetVariableNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
                  ::__l2::ClassName,pFVar1);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
              ::__l2::ClassName;
    }
  }
  return &`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
          ::__l2::ClassName;
}

// IsDataReferenceOfType<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_> @ 14b1c4b70

bool __cdecl
Metasound::IsDataReferenceOfType<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>
          (IDataReference *param_1)

{
  FName *pFVar1;
  void *pvVar2;
  int *piVar3;
  bool bVar4;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < `bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::TEnum<Metasound::EPanningLaw,0>_>(Metasound::IDataReference_const&___ptr64)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::TEnum<Metasound::EPanningLaw,0>_>(Metasound::IDataReference_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::TEnum<Metasound::EPanningLaw,0>_>(Metasound::IDataReference_const&___ptr64)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>();
      `bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::TEnum<Metasound::EPanningLaw,0>_>(Metasound::IDataReference_const&___ptr64)'
      ::__l2::TypeName = *pFVar1;
      _Init_thread_footer(&`bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::TEnum<Metasound::EPanningLaw,0>_>(Metasound::IDataReference_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (*piVar3 < `bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::TEnum<Metasound::EPanningLaw,0>_>(Metasound::IDataReference_const&___ptr64)'
                ::__l2::_thread_safe_static_guard_1__) {
    _Init_thread_header(&`bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::TEnum<Metasound::EPanningLaw,0>_>(Metasound::IDataReference_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_1__);
    if (`bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::TEnum<Metasound::EPanningLaw,0>_>(Metasound::IDataReference_const&___ptr64)'
        ::__l2::_thread_safe_static_guard_1__ == -1) {
      `bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::TEnum<Metasound::EPanningLaw,0>_>(Metasound::IDataReference_const&___ptr64)'
      ::__l2::TypeId =
           &TDataReferenceTypeInfo<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::TypePtr;
      _Init_thread_footer(&`bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::TEnum<Metasound::EPanningLaw,0>_>(Metasound::IDataReference_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_1__);
    }
  }
  pFVar1 = (FName *)(**(code **)((longlong)*param_1 + 8))(param_1);
  bVar4 = *pFVar1 ==
          `bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::TEnum<Metasound::EPanningLaw,0>_>(Metasound::IDataReference_const&___ptr64)'
          ::__l2::TypeName;
  pvVar2 = (void *)(**(code **)((longlong)*param_1 + 0x10))(param_1);
  if ((bVar4) &&
     (pvVar2 == `bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::TEnum<Metasound::EPanningLaw,0>_>(Metasound::IDataReference_const&___ptr64)'
                ::__l2::TypeId)) {
    return true;
  }
  return false;
}

// IsDataReferenceOfType<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_> @ 14b1c4c70

bool __cdecl
Metasound::IsDataReferenceOfType<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>
          (IDataReference *param_1)

{
  FName *pFVar1;
  void *pvVar2;
  int *piVar3;
  bool bVar4;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < `bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(Metasound::IDataReference_const&___ptr64)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(Metasound::IDataReference_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(Metasound::IDataReference_const&___ptr64)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>();
      `bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(Metasound::IDataReference_const&___ptr64)'
      ::__l2::TypeName = *pFVar1;
      _Init_thread_footer(&`bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(Metasound::IDataReference_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (*piVar3 < `bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(Metasound::IDataReference_const&___ptr64)'
                ::__l2::_thread_safe_static_guard_1__) {
    _Init_thread_header(&`bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(Metasound::IDataReference_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_1__);
    if (`bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(Metasound::IDataReference_const&___ptr64)'
        ::__l2::_thread_safe_static_guard_1__ == -1) {
      `bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(Metasound::IDataReference_const&___ptr64)'
      ::__l2::TypeId =
           &TDataReferenceTypeInfo<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::TypePtr;
      _Init_thread_footer(&`bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(Metasound::IDataReference_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_1__);
    }
  }
  pFVar1 = (FName *)(**(code **)((longlong)*param_1 + 8))(param_1);
  bVar4 = *pFVar1 ==
          `bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(Metasound::IDataReference_const&___ptr64)'
          ::__l2::TypeName;
  pvVar2 = (void *)(**(code **)((longlong)*param_1 + 0x10))(param_1);
  if ((bVar4) &&
     (pvVar2 == `bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(Metasound::IDataReference_const&___ptr64)'
                ::__l2::TypeId)) {
    return true;
  }
  return false;
}

// MakeDataChannel<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,1> @ 14b1c4d70

TSharedRef<Metasound::IDataChannel,1> * __cdecl
Metasound::MakeDataChannel<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,1>
          (TSharedRef<Metasound::IDataChannel,1> *__return_storage_ptr__,FOperatorSettings *param_1)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  bool bVar5;
  TCopyableDataChannel<Metasound::TEnum<Metasound::EPanningLaw,0>_> *pTVar6;
  FName *pFVar7;
  TSharedRef<Metasound::IDataChannel,1> *pTVar8;
  TRawPtrProxy<Metasound::TCopyableDataChannel<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>
  local_res8;
  
  pTVar6 = ::operator_new(0x78);
  if (pTVar6 == (TCopyableDataChannel<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)0x0) {
    pTVar6 = (TCopyableDataChannel<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)0x0;
  }
  else {
    pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>();
    pTVar6->_padding_ = (longlong)*pFVar7;
    pTVar6->_padding_ = (longlong)&___7IDataChannel_Metasound__6B_;
    pTVar6->_padding_ = 0;
    pTVar6->_padding_ = 0;
    *(undefined4 *)&pTVar6->_padding_ = 0;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TCopyableDataChannel_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_
    ;
    *(undefined4 *)((longlong)&pTVar6->_padding_ + 4) = 0;
    (pTVar6->AtomicData).Ptr = (TEnum<Metasound::EPanningLaw,0> *)0x0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pTVar6->AtomicDataLock,4000);
    pTVar6->PayloadID = -1;
    fVar2 = param_1->TargetBlockRate;
    fVar3 = param_1->ActualBlockRate;
    iVar4 = param_1->NumFramesPerBlock;
    (pTVar6->OperatorSettings).SampleRate = param_1->SampleRate;
    (pTVar6->OperatorSettings).TargetBlockRate = fVar2;
    (pTVar6->OperatorSettings).ActualBlockRate = fVar3;
    (pTVar6->OperatorSettings).NumFramesPerBlock = iVar4;
    pTVar6->PayloadIDCounter = (atomic<__int64>)0x0;
    if (((pTVar6->_padding_ != 0) && (pTVar6->_padding_ != 0)) &&
       (0 < *(int *)(pTVar6->_padding_ + 8))) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        pTVar8 = (TSharedRef<Metasound::IDataChannel,1> *)(*pcVar1)();
        return pTVar8;
      }
    }
  }
  local_res8.Object = pTVar6;
  TSharedRef<Metasound::IDataChannel,1>::
  TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
            (__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

// MakeDataChannel<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,1> @ 14b1c4e70

TSharedRef<Metasound::IDataChannel,1> * __cdecl
Metasound::MakeDataChannel<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,1>
          (TSharedRef<Metasound::IDataChannel,1> *__return_storage_ptr__,FOperatorSettings *param_1)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  bool bVar5;
  TCopyableDataChannel<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *pTVar6;
  FName *pFVar7;
  TSharedRef<Metasound::IDataChannel,1> *pTVar8;
  TRawPtrProxy<Metasound::TCopyableDataChannel<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>
  local_res8;
  
  pTVar6 = ::operator_new(0x78);
  if (pTVar6 == (TCopyableDataChannel<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)0x0) {
    pTVar6 = (TCopyableDataChannel<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)0x0;
  }
  else {
    pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>();
    pTVar6->_padding_ = (longlong)*pFVar7;
    pTVar6->_padding_ = (longlong)&___7IDataChannel_Metasound__6B_;
    pTVar6->_padding_ = 0;
    pTVar6->_padding_ = 0;
    *(undefined4 *)&pTVar6->_padding_ = 0;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TCopyableDataChannel_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__6B_
    ;
    *(undefined4 *)((longlong)&pTVar6->_padding_ + 4) = 0;
    (pTVar6->AtomicData).Ptr = (TEnum<Metasound::EStereoDelayMode,0> *)0x0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pTVar6->AtomicDataLock,4000);
    pTVar6->PayloadID = -1;
    fVar2 = param_1->TargetBlockRate;
    fVar3 = param_1->ActualBlockRate;
    iVar4 = param_1->NumFramesPerBlock;
    (pTVar6->OperatorSettings).SampleRate = param_1->SampleRate;
    (pTVar6->OperatorSettings).TargetBlockRate = fVar2;
    (pTVar6->OperatorSettings).ActualBlockRate = fVar3;
    (pTVar6->OperatorSettings).NumFramesPerBlock = iVar4;
    pTVar6->PayloadIDCounter = (atomic<__int64>)0x0;
    if (((pTVar6->_padding_ != 0) && (pTVar6->_padding_ != 0)) &&
       (0 < *(int *)(pTVar6->_padding_ + 8))) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        pTVar8 = (TSharedRef<Metasound::IDataChannel,1> *)(*pcVar1)();
        return pTVar8;
      }
    }
  }
  local_res8.Object = pTVar6;
  TSharedRef<Metasound::IDataChannel,1>::
  TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
            (__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

// MakeOperatorFactoryRef<Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>,Metasound::FLiteral> @ 14b1c4f70

TSharedRef<Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<Metasound::EPanningLaw,0>_>,1>
* __cdecl Metasound::
          MakeOperatorFactoryRef<Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>,Metasound::FLiteral>
                    (TSharedRef<Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<Metasound::EPanningLaw,0>_>,1>
                     *__return_storage_ptr__,FLiteral *param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<Metasound::EPanningLaw,0>_>,1>
  *pTVar4;
  
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object =
         (TLiteralOperatorLiteralFactory<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TLiteralOperatorLiteralFactory_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7__TLiteralOperatorLiteralFactory_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_
    ;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)&pTVar3[1].SharedReferenceCount,&param_1->Value);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    __return_storage_ptr__->Object =
         (TLiteralOperatorLiteralFactory<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)(pTVar3 + 1)
    ;
    if ((TLiteralOperatorLiteralFactory<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)(pTVar3 + 1)
        == (TLiteralOperatorLiteralFactory<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<Metasound::EPanningLaw,0>_>,1>
                  *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeOperatorFactoryRef<Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>,Metasound::FLiteral> @ 14b1c5040

TSharedRef<Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>,1>
* __cdecl Metasound::
          MakeOperatorFactoryRef<Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>,Metasound::FLiteral>
                    (TSharedRef<Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>,1>
                     *__return_storage_ptr__,FLiteral *param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>,1>
  *pTVar4;
  
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object =
         (TLiteralOperatorLiteralFactory<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TLiteralOperatorLiteralFactory_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7__TLiteralOperatorLiteralFactory_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__6B_
    ;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)&pTVar3[1].SharedReferenceCount,&param_1->Value);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    __return_storage_ptr__->Object =
         (TLiteralOperatorLiteralFactory<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)
         (pTVar3 + 1);
    if ((TLiteralOperatorLiteralFactory<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)
        (pTVar3 + 1) ==
        (TLiteralOperatorLiteralFactory<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>,1>
                  *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeOperatorFactoryRef<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::FCoverterOperatorFactory> @ 14b1c5110

TSharedRef<Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EPanningLaw,0>_>::FCoverterOperatorFactory,1>
* __cdecl Metasound::
          MakeOperatorFactoryRef<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::FCoverterOperatorFactory>
                    (TSharedRef<Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EPanningLaw,0>_>::FCoverterOperatorFactory,1>
                     *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EPanningLaw,0>_>::FCoverterOperatorFactory,1>
  *pTVar4;
  
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FCoverterOperatorFactory *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_HV__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_HV__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_
    ;
    __return_storage_ptr__->Object = (FCoverterOperatorFactory *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EPanningLaw,0>_>::FCoverterOperatorFactory,1>
                  *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeOperatorFactoryRef<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::FCoverterOperatorFactory> @ 14b1c51b0

TSharedRef<Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::FCoverterOperatorFactory,1>
* __cdecl Metasound::
          MakeOperatorFactoryRef<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::FCoverterOperatorFactory>
                    (TSharedRef<Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::FCoverterOperatorFactory,1>
                     *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::FCoverterOperatorFactory,1>
  *pTVar4;
  
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FCoverterOperatorFactory *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_HV__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_HV__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__6B_
    ;
    __return_storage_ptr__->Object = (FCoverterOperatorFactory *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::FCoverterOperatorFactory,1>
                  *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeOperatorFactoryRef<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,int>::FCoverterOperatorFactory> @ 14b1c5250

TSharedRef<Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EPanningLaw,0>,int>::FCoverterOperatorFactory,1>
* __cdecl Metasound::
          MakeOperatorFactoryRef<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,int>::FCoverterOperatorFactory>
                    (TSharedRef<Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EPanningLaw,0>,int>::FCoverterOperatorFactory,1>
                     *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EPanningLaw,0>,int>::FCoverterOperatorFactory,1>
  *pTVar4;
  
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FCoverterOperatorFactory *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound__H_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound__H_Metasound__6B_
    ;
    __return_storage_ptr__->Object = (FCoverterOperatorFactory *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EPanningLaw,0>,int>::FCoverterOperatorFactory,1>
                  *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeOperatorFactoryRef<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,int>::FCoverterOperatorFactory> @ 14b1c52f0

TSharedRef<Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EStereoDelayMode,0>,int>::FCoverterOperatorFactory,1>
* __cdecl Metasound::
          MakeOperatorFactoryRef<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,int>::FCoverterOperatorFactory>
                    (TSharedRef<Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EStereoDelayMode,0>,int>::FCoverterOperatorFactory,1>
                     *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EStereoDelayMode,0>,int>::FCoverterOperatorFactory,1>
  *pTVar4;
  
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FCoverterOperatorFactory *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound__H_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound__H_Metasound__6B_
    ;
    __return_storage_ptr__->Object = (FCoverterOperatorFactory *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EStereoDelayMode,0>,int>::FCoverterOperatorFactory,1>
                  *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>_> @ 14b1c5460

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>_>
          (ushort param_1,
          ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
          *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x11) {
      iVar8 = 0x10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x11) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>_> @ 14b1c5530

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
          *param_4,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x11) {
      iVar1 = 0x10;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_>
    ::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// RegisterConversionNode<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>,int,Metasound::TEnum<enum_Metasound::EPanningLaw,0>_> @ 14b1c55b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
RegisterConversionNode<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>,int,Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>
          (FName *param_1,FName *param_2,FNodeClassMetadata *param_3)

{
  undefined1 uVar1;
  INodeClassRegistry *pIVar2;
  FName local_res20;
  FName local_58;
  FName local_50;
  FName local_48;
  FName local_40;
  FName local_38;
  FNodeClassRegistryKey local_30;
  
  if (`bool___cdecl_RegisterConversionNode<Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EPanningLaw,0>_>,int,Metasound::TEnum<Metasound::EPanningLaw,0>_>(FName_const&___ptr64,FName_const&___ptr64,Metasound::FNodeClassMetadata_const&___ptr64)'
      ::__l2::bAlreadyRegisteredThisConverter) {
    if (3 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<4>
                (&`bool___cdecl_RegisterConversionNode<Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EPanningLaw,0>_>,int,Metasound::TEnum<Metasound::EPanningLaw,0>_>(FName_const&___ptr64,FName_const&___ptr64,Metasound::FNodeClassMetadata_const&___ptr64)'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    return false;
  }
  `bool___cdecl_RegisterConversionNode<Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EPanningLaw,0>_>,int,Metasound::TEnum<Metasound::EPanningLaw,0>_>(FName_const&___ptr64,FName_const&___ptr64,Metasound::FNodeClassMetadata_const&___ptr64)'
  ::__l2::bAlreadyRegisteredThisConverter = true;
  FName::FName(&local_res20,Metasound::TDataReferenceTypeInfo<int>::TypeName);
  FName::FName(&local_58,
               Metasound::TDataReferenceTypeInfo<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
               TypeName);
  local_50 = local_res20;
  local_48 = local_58;
  local_40 = *param_1;
  local_38 = *param_2;
  Metasound::Frontend::FNodeClassRegistryKey::FNodeClassRegistryKey(&local_30,param_3);
  pIVar2 = Metasound::Frontend::INodeClassRegistry::Get();
  uVar1 = (**(code **)((longlong)*pIVar2 + 200))(pIVar2,&local_50,&local_40);
  return (bool)uVar1;
}

// RegisterConversionNode<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>,int,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_> @ 14b1c56a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
RegisterConversionNode<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>,int,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>
          (FName *param_1,FName *param_2,FNodeClassMetadata *param_3)

{
  undefined1 uVar1;
  INodeClassRegistry *pIVar2;
  FName local_res20;
  FName local_58;
  FName local_50;
  FName local_48;
  FName local_40;
  FName local_38;
  FNodeClassRegistryKey local_30;
  
  if (`bool___cdecl_RegisterConversionNode<Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EStereoDelayMode,0>_>,int,Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(FName_const&___ptr64,FName_const&___ptr64,Metasound::FNodeClassMetadata_const&___ptr64)'
      ::__l2::bAlreadyRegisteredThisConverter) {
    if (3 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<4>
                (&`bool___cdecl_RegisterConversionNode<Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EStereoDelayMode,0>_>,int,Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(FName_const&___ptr64,FName_const&___ptr64,Metasound::FNodeClassMetadata_const&___ptr64)'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    return false;
  }
  `bool___cdecl_RegisterConversionNode<Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EStereoDelayMode,0>_>,int,Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(FName_const&___ptr64,FName_const&___ptr64,Metasound::FNodeClassMetadata_const&___ptr64)'
  ::__l2::bAlreadyRegisteredThisConverter = true;
  FName::FName(&local_res20,Metasound::TDataReferenceTypeInfo<int>::TypeName);
  FName::FName(&local_58,
               Metasound::
               TDataReferenceTypeInfo<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
               TypeName);
  local_50 = local_res20;
  local_48 = local_58;
  local_40 = *param_1;
  local_38 = *param_2;
  Metasound::Frontend::FNodeClassRegistryKey::FNodeClassRegistryKey(&local_30,param_3);
  pIVar2 = Metasound::Frontend::INodeClassRegistry::Get();
  uVar1 = (**(code **)((longlong)*pIVar2 + 200))(pIVar2,&local_50,&local_40);
  return (bool)uVar1;
}

// RegisterConversionNode<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,int>,Metasound::TEnum<enum_Metasound::EPanningLaw,0>,int> @ 14b1c5790

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
RegisterConversionNode<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,int>,Metasound::TEnum<enum_Metasound::EPanningLaw,0>,int>
          (FName *param_1,FName *param_2,FNodeClassMetadata *param_3)

{
  undefined1 uVar1;
  INodeClassRegistry *pIVar2;
  FName local_res20;
  FName local_58;
  FName local_50;
  FName local_48;
  FName local_40;
  FName local_38;
  FNodeClassRegistryKey local_30;
  
  if (`bool___cdecl_RegisterConversionNode<Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EPanningLaw,0>,int>,Metasound::TEnum<Metasound::EPanningLaw,0>,int>(FName_const&___ptr64,FName_const&___ptr64,Metasound::FNodeClassMetadata_const&___ptr64)'
      ::__l2::bAlreadyRegisteredThisConverter) {
    if (3 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<4>
                (&`bool___cdecl_RegisterConversionNode<Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EPanningLaw,0>,int>,Metasound::TEnum<Metasound::EPanningLaw,0>,int>(FName_const&___ptr64,FName_const&___ptr64,Metasound::FNodeClassMetadata_const&___ptr64)'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    return false;
  }
  `bool___cdecl_RegisterConversionNode<Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EPanningLaw,0>,int>,Metasound::TEnum<Metasound::EPanningLaw,0>,int>(FName_const&___ptr64,FName_const&___ptr64,Metasound::FNodeClassMetadata_const&___ptr64)'
  ::__l2::bAlreadyRegisteredThisConverter = true;
  FName::FName(&local_res20,
               Metasound::TDataReferenceTypeInfo<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
               TypeName);
  FName::FName(&local_58,Metasound::TDataReferenceTypeInfo<int>::TypeName);
  local_50 = local_res20;
  local_48 = local_58;
  local_40 = *param_1;
  local_38 = *param_2;
  Metasound::Frontend::FNodeClassRegistryKey::FNodeClassRegistryKey(&local_30,param_3);
  pIVar2 = Metasound::Frontend::INodeClassRegistry::Get();
  uVar1 = (**(code **)((longlong)*pIVar2 + 200))(pIVar2,&local_50,&local_40);
  return (bool)uVar1;
}

// RegisterConversionNode<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,int>,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,int> @ 14b1c5880

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
RegisterConversionNode<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,int>,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,int>
          (FName *param_1,FName *param_2,FNodeClassMetadata *param_3)

{
  undefined1 uVar1;
  INodeClassRegistry *pIVar2;
  FName local_res20;
  FName local_58;
  FName local_50;
  FName local_48;
  FName local_40;
  FName local_38;
  FNodeClassRegistryKey local_30;
  
  if (`bool___cdecl_RegisterConversionNode<Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EStereoDelayMode,0>,int>,Metasound::TEnum<Metasound::EStereoDelayMode,0>,int>(FName_const&___ptr64,FName_const&___ptr64,Metasound::FNodeClassMetadata_const&___ptr64)'
      ::__l2::bAlreadyRegisteredThisConverter) {
    if (3 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<4>
                (&`bool___cdecl_RegisterConversionNode<Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EStereoDelayMode,0>,int>,Metasound::TEnum<Metasound::EStereoDelayMode,0>,int>(FName_const&___ptr64,FName_const&___ptr64,Metasound::FNodeClassMetadata_const&___ptr64)'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    return false;
  }
  `bool___cdecl_RegisterConversionNode<Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EStereoDelayMode,0>,int>,Metasound::TEnum<Metasound::EStereoDelayMode,0>,int>(FName_const&___ptr64,FName_const&___ptr64,Metasound::FNodeClassMetadata_const&___ptr64)'
  ::__l2::bAlreadyRegisteredThisConverter = true;
  FName::FName(&local_res20,
               Metasound::
               TDataReferenceTypeInfo<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
               TypeName);
  FName::FName(&local_58,Metasound::TDataReferenceTypeInfo<int>::TypeName);
  local_50 = local_res20;
  local_48 = local_58;
  local_40 = *param_1;
  local_38 = *param_2;
  Metasound::Frontend::FNodeClassRegistryKey::FNodeClassRegistryKey(&local_30,param_3);
  pIVar2 = Metasound::Frontend::INodeClassRegistry::Get();
  uVar1 = (**(code **)((longlong)*pIVar2 + 200))(pIVar2,&local_50,&local_40);
  return (bool)uVar1;
}

// RegisterConverterNodes<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_> @ 14b1c5970

void __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterConverterNodes<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
          (FModuleInfo *param_1)

{
  return;
}

// RegisterConverterNodes<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_> @ 14b1c5980

void __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterConverterNodes<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
          (FModuleInfo *param_1)

{
  return;
}

// RegisterConverterNodes<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_> @ 14b1c5990

void __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterConverterNodes<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>(FModuleInfo *param_1)

{
  AttemptToRegisterConverter<int,Metasound::TEnum<enum_Metasound::EPanningLaw,0>,1>(param_1);
  AttemptToRegisterConverter<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,int,1>(param_1);
  return;
}

// RegisterConverterNodes<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_> @ 14b1c59c0

void __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterConverterNodes<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>(FModuleInfo *param_1)

{
  AttemptToRegisterConverter<int,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,1>(param_1);
  AttemptToRegisterConverter<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,int,1>(param_1);
  return;
}

// RegisterDataType<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,2,void> @ 14b1c59f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::RegisterDataType<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,2,void>
          (FModuleInfo *param_1)

{
  code *pcVar1;
  char cVar2;
  IDataTypeRegistry *pIVar3;
  void *this;
  FDataTypeRegistryEntryBase *this_00;
  FDataTypeRegistryInfo *pFVar4;
  FStaticBasicLogRecord *pFVar5;
  FDataTypeRegistryEntryBase *local_res10;
  TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1> local_68;
  FDataTypeRegistryInfo local_58;
  
  if (`bool___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::RegisterDataTypeWithFrontendInternal<Metasound::TEnum<Metasound::EPanningLaw,0>,2,void>(Metasound::Frontend::FModuleInfo_const&___ptr64)'
      ::__l2::bAlreadyRegisteredThisDataType) {
    if ((byte)LogMetaSound._0_1_ < 4) {
      return false;
    }
    pFVar5 = &`bool___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::RegisterDataTypeWithFrontendInternal<Metasound::TEnum<Metasound::EPanningLaw,0>,2,void>(Metasound::Frontend::FModuleInfo_const&___ptr64)'
              ::__l6::LOG_Static;
  }
  else {
    `bool___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::RegisterDataTypeWithFrontendInternal<Metasound::TEnum<Metasound::EPanningLaw,0>,2,void>(Metasound::Frontend::FModuleInfo_const&___ptr64)'
    ::__l2::bAlreadyRegisteredThisDataType = true;
    pIVar3 = IDataTypeRegistry::Get();
    pcVar1 = *(code **)((longlong)*pIVar3 + 8);
    this = ::operator_new(0x640);
    local_res10 = (FDataTypeRegistryEntryBase *)0x0;
    if (this != (void *)0x0) {
      local_res10 = (FDataTypeRegistryEntryBase *)
                    `Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
                    RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,2,void>'
                    ::__l2::FDataTypeRegistryEntry::FDataTypeRegistryEntry(this);
    }
    cVar2 = (*pcVar1)(pIVar3,&local_res10);
    if (local_res10 != (FDataTypeRegistryEntryBase *)0x0) {
      (*(code *)**(undefined8 **)local_res10)(local_res10,1);
    }
    if (cVar2 == '\0') {
      return false;
    }
    MetasoundDataTypeRegistrationPrivate::
    AttemptToRegisterConverter<int,Metasound::TEnum<enum_Metasound::EPanningLaw,0>,1>(param_1);
    MetasoundDataTypeRegistrationPrivate::
    AttemptToRegisterConverter<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,int,1>(param_1);
    if (`bool___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<Metasound::EPanningLaw,0>_>,0,void>(Metasound::Frontend::FModuleInfo_const&___ptr64)'
        ::__l2::bAlreadyRegisteredThisDataType == false) {
      `bool___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<Metasound::EPanningLaw,0>_>,0,void>(Metasound::Frontend::FModuleInfo_const&___ptr64)'
      ::__l2::bAlreadyRegisteredThisDataType = true;
      pIVar3 = IDataTypeRegistry::Get();
      pcVar1 = *(code **)((longlong)*pIVar3 + 8);
      this_00 = ::operator_new(0x640);
      if (this_00 == (FDataTypeRegistryEntryBase *)0x0) {
        this_00 = (FDataTypeRegistryEntryBase *)0x0;
      }
      else {
        local_68.Object = (IEnumDataTypeInterface *)0x0;
        local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pFVar4 = MetasoundDataTypeRegistrationPrivate::
                 CreateDataTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>,0,void>
                           (&local_58);
        MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::FDataTypeRegistryEntryBase
                  (this_00,pFVar4,&local_68);
        if (local_58.DataTypeDisplayText.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_58.DataTypeDisplayText.TextData.Reference + 0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68.SharedReferenceCount.ReferenceController);
        *(undefined ***)this_00 =
             &
             ___7FDataTypeRegistryEntry__1____RegisterDataTypeWithFrontendInternal_U__TVariable_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound___0A_X_MetasoundDataTypeRegistrationPrivate_Frontend_Metasound__YA_NAEBUFModuleInfo_23__Z_6B_
        ;
      }
      local_res10 = this_00;
      cVar2 = (*pcVar1)(pIVar3,&local_res10);
      if (local_res10 != (FDataTypeRegistryEntryBase *)0x0) {
        (*(code *)**(undefined8 **)local_res10)(local_res10,1);
      }
      if (cVar2 == '\0') {
        return false;
      }
      return true;
    }
    if ((byte)LogMetaSound._0_1_ < 4) {
      return false;
    }
    pFVar5 = &`bool___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<Metasound::EPanningLaw,0>_>,0,void>(Metasound::Frontend::FModuleInfo_const&___ptr64)'
              ::__l6::LOG_Static;
  }
  UE::Logging::Private::BasicLog<4>(pFVar5,(FLogCategoryBase *)&LogMetaSound);
  return false;
}

// RegisterDataType<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,2,void> @ 14b1c5bb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::RegisterDataType<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,2,void>
          (FModuleInfo *param_1)

{
  code *pcVar1;
  char cVar2;
  IDataTypeRegistry *pIVar3;
  void *this;
  FDataTypeRegistryEntryBase *this_00;
  FDataTypeRegistryInfo *pFVar4;
  FStaticBasicLogRecord *pFVar5;
  FDataTypeRegistryEntryBase *local_res10;
  TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1> local_68;
  FDataTypeRegistryInfo local_58;
  
  if (`bool___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::RegisterDataTypeWithFrontendInternal<Metasound::TEnum<Metasound::EStereoDelayMode,0>,2,void>(Metasound::Frontend::FModuleInfo_const&___ptr64)'
      ::__l2::bAlreadyRegisteredThisDataType) {
    if ((byte)LogMetaSound._0_1_ < 4) {
      return false;
    }
    pFVar5 = &`bool___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::RegisterDataTypeWithFrontendInternal<Metasound::TEnum<Metasound::EStereoDelayMode,0>,2,void>(Metasound::Frontend::FModuleInfo_const&___ptr64)'
              ::__l6::LOG_Static;
  }
  else {
    `bool___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::RegisterDataTypeWithFrontendInternal<Metasound::TEnum<Metasound::EStereoDelayMode,0>,2,void>(Metasound::Frontend::FModuleInfo_const&___ptr64)'
    ::__l2::bAlreadyRegisteredThisDataType = true;
    pIVar3 = IDataTypeRegistry::Get();
    pcVar1 = *(code **)((longlong)*pIVar3 + 8);
    this = ::operator_new(0x640);
    local_res10 = (FDataTypeRegistryEntryBase *)0x0;
    if (this != (void *)0x0) {
      local_res10 = (FDataTypeRegistryEntryBase *)
                    `Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
                    RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,2,void>'
                    ::__l2::FDataTypeRegistryEntry::FDataTypeRegistryEntry(this);
    }
    cVar2 = (*pcVar1)(pIVar3,&local_res10);
    if (local_res10 != (FDataTypeRegistryEntryBase *)0x0) {
      (*(code *)**(undefined8 **)local_res10)(local_res10,1);
    }
    if (cVar2 == '\0') {
      return false;
    }
    MetasoundDataTypeRegistrationPrivate::
    AttemptToRegisterConverter<int,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,1>(param_1);
    MetasoundDataTypeRegistrationPrivate::
    AttemptToRegisterConverter<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,int,1>(param_1);
    if (`bool___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>,0,void>(Metasound::Frontend::FModuleInfo_const&___ptr64)'
        ::__l2::bAlreadyRegisteredThisDataType == false) {
      `bool___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>,0,void>(Metasound::Frontend::FModuleInfo_const&___ptr64)'
      ::__l2::bAlreadyRegisteredThisDataType = true;
      pIVar3 = IDataTypeRegistry::Get();
      pcVar1 = *(code **)((longlong)*pIVar3 + 8);
      this_00 = ::operator_new(0x640);
      if (this_00 == (FDataTypeRegistryEntryBase *)0x0) {
        this_00 = (FDataTypeRegistryEntryBase *)0x0;
      }
      else {
        local_68.Object = (IEnumDataTypeInterface *)0x0;
        local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pFVar4 = MetasoundDataTypeRegistrationPrivate::
                 CreateDataTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>,0,void>
                           (&local_58);
        MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::FDataTypeRegistryEntryBase
                  (this_00,pFVar4,&local_68);
        if (local_58.DataTypeDisplayText.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_58.DataTypeDisplayText.TextData.Reference + 0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68.SharedReferenceCount.ReferenceController);
        *(undefined ***)this_00 =
             &
             ___7FDataTypeRegistryEntry__1____RegisterDataTypeWithFrontendInternal_U__TVariable_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound___0A_X_MetasoundDataTypeRegistrationPrivate_Frontend_Metasound__YA_NAEBUFModuleInfo_23__Z_6B_
        ;
      }
      local_res10 = this_00;
      cVar2 = (*pcVar1)(pIVar3,&local_res10);
      if (local_res10 != (FDataTypeRegistryEntryBase *)0x0) {
        (*(code *)**(undefined8 **)local_res10)(local_res10,1);
      }
      if (cVar2 == '\0') {
        return false;
      }
      return true;
    }
    if ((byte)LogMetaSound._0_1_ < 4) {
      return false;
    }
    pFVar5 = &`bool___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>,0,void>(Metasound::Frontend::FModuleInfo_const&___ptr64)'
              ::__l6::LOG_Static;
  }
  UE::Logging::Private::BasicLog<4>(pFVar5,(FLogCategoryBase *)&LogMetaSound);
  return false;
}

// RegisterDataTypeArrayWithFrontend<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,2> @ 14b1c5d70

bool __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeArrayWithFrontend<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,2>
          (FModuleInfo *param_1)

{
  return true;
}

// RegisterDataTypeArrayWithFrontend<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,2> @ 14b1c5d80

bool __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeArrayWithFrontend<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,2>
          (FModuleInfo *param_1)

{
  return true;
}

// RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>,0,void> @ 14b1c5d90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>,0,void>
          (FModuleInfo *param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  IDataTypeRegistry *pIVar3;
  FDataTypeRegistryEntryBase *this;
  FDataTypeRegistryInfo *pFVar4;
  FDataTypeRegistryEntryBase *local_res10;
  TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1> local_68;
  FDataTypeRegistryInfo local_58;
  
  if (`bool___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<Metasound::EPanningLaw,0>_>,0,void>(Metasound::Frontend::FModuleInfo_const&___ptr64)'
      ::__l2::bAlreadyRegisteredThisDataType) {
    if (3 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<4>
                (&`bool___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<Metasound::EPanningLaw,0>_>,0,void>(Metasound::Frontend::FModuleInfo_const&___ptr64)'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    return false;
  }
  `bool___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<Metasound::EPanningLaw,0>_>,0,void>(Metasound::Frontend::FModuleInfo_const&___ptr64)'
  ::__l2::bAlreadyRegisteredThisDataType = true;
  pIVar3 = IDataTypeRegistry::Get();
  pcVar1 = *(code **)((longlong)*pIVar3 + 8);
  this = ::operator_new(0x640);
  if (this == (FDataTypeRegistryEntryBase *)0x0) {
    this = (FDataTypeRegistryEntryBase *)0x0;
  }
  else {
    local_68.Object = (IEnumDataTypeInterface *)0x0;
    local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar4 = CreateDataTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>,0,void>
                       (&local_58);
    FDataTypeRegistryEntryBase::FDataTypeRegistryEntryBase(this,pFVar4,&local_68);
    if (local_58.DataTypeDisplayText.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.DataTypeDisplayText.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    *(undefined ***)this =
         &
         ___7FDataTypeRegistryEntry__1____RegisterDataTypeWithFrontendInternal_U__TVariable_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound___0A_X_MetasoundDataTypeRegistrationPrivate_Frontend_Metasound__YA_NAEBUFModuleInfo_23__Z_6B_
    ;
  }
  local_res10 = this;
  uVar2 = (*pcVar1)(pIVar3,&local_res10);
  if (local_res10 != (FDataTypeRegistryEntryBase *)0x0) {
    (*(code *)**(undefined8 **)local_res10)(local_res10,1);
  }
  return (bool)uVar2;
}

// RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>,0,void> @ 14b1c5ec0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>,0,void>
          (FModuleInfo *param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  IDataTypeRegistry *pIVar3;
  FDataTypeRegistryEntryBase *this;
  FDataTypeRegistryInfo *pFVar4;
  FDataTypeRegistryEntryBase *local_res10;
  TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1> local_68;
  FDataTypeRegistryInfo local_58;
  
  if (`bool___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>,0,void>(Metasound::Frontend::FModuleInfo_const&___ptr64)'
      ::__l2::bAlreadyRegisteredThisDataType) {
    if (3 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<4>
                (&`bool___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>,0,void>(Metasound::Frontend::FModuleInfo_const&___ptr64)'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    return false;
  }
  `bool___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>,0,void>(Metasound::Frontend::FModuleInfo_const&___ptr64)'
  ::__l2::bAlreadyRegisteredThisDataType = true;
  pIVar3 = IDataTypeRegistry::Get();
  pcVar1 = *(code **)((longlong)*pIVar3 + 8);
  this = ::operator_new(0x640);
  if (this == (FDataTypeRegistryEntryBase *)0x0) {
    this = (FDataTypeRegistryEntryBase *)0x0;
  }
  else {
    local_68.Object = (IEnumDataTypeInterface *)0x0;
    local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar4 = CreateDataTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>,0,void>
                       (&local_58);
    FDataTypeRegistryEntryBase::FDataTypeRegistryEntryBase(this,pFVar4,&local_68);
    if (local_58.DataTypeDisplayText.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.DataTypeDisplayText.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    *(undefined ***)this =
         &
         ___7FDataTypeRegistryEntry__1____RegisterDataTypeWithFrontendInternal_U__TVariable_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound___0A_X_MetasoundDataTypeRegistrationPrivate_Frontend_Metasound__YA_NAEBUFModuleInfo_23__Z_6B_
    ;
  }
  local_res10 = this;
  uVar2 = (*pcVar1)(pIVar3,&local_res10);
  if (local_res10 != (FDataTypeRegistryEntryBase *)0x0) {
    (*(code *)**(undefined8 **)local_res10)(local_res10,1);
  }
  return (bool)uVar2;
}

// RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,2,void> @ 14b1c5ff0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,2,void>
          (FModuleInfo *param_1)

{
  code *pcVar1;
  char cVar2;
  IDataTypeRegistry *pIVar3;
  void *this;
  FDataTypeRegistryEntry *local_res10;
  
  if (`bool___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::RegisterDataTypeWithFrontendInternal<Metasound::TEnum<Metasound::EPanningLaw,0>,2,void>(Metasound::Frontend::FModuleInfo_const&___ptr64)'
      ::__l2::bAlreadyRegisteredThisDataType) {
    if (3 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<4>
                (&`bool___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::RegisterDataTypeWithFrontendInternal<Metasound::TEnum<Metasound::EPanningLaw,0>,2,void>(Metasound::Frontend::FModuleInfo_const&___ptr64)'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    return false;
  }
  `bool___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::RegisterDataTypeWithFrontendInternal<Metasound::TEnum<Metasound::EPanningLaw,0>,2,void>(Metasound::Frontend::FModuleInfo_const&___ptr64)'
  ::__l2::bAlreadyRegisteredThisDataType = true;
  pIVar3 = IDataTypeRegistry::Get();
  pcVar1 = *(code **)((longlong)*pIVar3 + 8);
  this = ::operator_new(0x640);
  local_res10 = (FDataTypeRegistryEntry *)0x0;
  if (this != (void *)0x0) {
    local_res10 = `Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
                  RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,2,void>'
                  ::__l2::FDataTypeRegistryEntry::FDataTypeRegistryEntry(this);
  }
  cVar2 = (*pcVar1)(pIVar3,&local_res10);
  if (local_res10 != (FDataTypeRegistryEntry *)0x0) {
    (*(code *)**(undefined8 **)local_res10)(local_res10,1);
  }
  if (cVar2 != '\0') {
    AttemptToRegisterConverter<int,Metasound::TEnum<enum_Metasound::EPanningLaw,0>,1>(param_1);
    AttemptToRegisterConverter<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,int,1>(param_1);
  }
  return (bool)cVar2;
}

// RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,2,void> @ 14b1c60c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,2,void>
          (FModuleInfo *param_1)

{
  code *pcVar1;
  char cVar2;
  IDataTypeRegistry *pIVar3;
  void *this;
  FDataTypeRegistryEntry *local_res10;
  
  if (`bool___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::RegisterDataTypeWithFrontendInternal<Metasound::TEnum<Metasound::EStereoDelayMode,0>,2,void>(Metasound::Frontend::FModuleInfo_const&___ptr64)'
      ::__l2::bAlreadyRegisteredThisDataType) {
    if (3 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<4>
                (&`bool___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::RegisterDataTypeWithFrontendInternal<Metasound::TEnum<Metasound::EStereoDelayMode,0>,2,void>(Metasound::Frontend::FModuleInfo_const&___ptr64)'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    return false;
  }
  `bool___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::RegisterDataTypeWithFrontendInternal<Metasound::TEnum<Metasound::EStereoDelayMode,0>,2,void>(Metasound::Frontend::FModuleInfo_const&___ptr64)'
  ::__l2::bAlreadyRegisteredThisDataType = true;
  pIVar3 = IDataTypeRegistry::Get();
  pcVar1 = *(code **)((longlong)*pIVar3 + 8);
  this = ::operator_new(0x640);
  local_res10 = (FDataTypeRegistryEntry *)0x0;
  if (this != (void *)0x0) {
    local_res10 = `Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
                  RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,2,void>'
                  ::__l2::FDataTypeRegistryEntry::FDataTypeRegistryEntry(this);
  }
  cVar2 = (*pcVar1)(pIVar3,&local_res10);
  if (local_res10 != (FDataTypeRegistryEntry *)0x0) {
    (*(code *)**(undefined8 **)local_res10)(local_res10,1);
  }
  if (cVar2 != '\0') {
    AttemptToRegisterConverter<int,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,1>(param_1);
    AttemptToRegisterConverter<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,int,1>(param_1);
  }
  return (bool)cVar2;
}

// RegisterNode<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>,void> @ 14b1c6190

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>,void>
          (FNodeClassMetadata *param_1,FModuleInfo *param_2)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res18 [2];
  
  local_res18[0].Ptr = ::operator_new(0xf0);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr == (FNodeRegistryEntryBase *)0x0) {
    local_res18[0].Ptr = (INodeClassRegistryEntry *)0x0;
  }
  else {
    NodeRegistrationPrivate::FNodeRegistryEntryBase::FNodeRegistryEntryBase
              ((FNodeRegistryEntryBase *)local_res18[0].Ptr,param_1,param_2);
    ((FNodeRegistryEntryBase *)local_res18[0].Ptr)->_padding_ =
         (longlong)
         &
         ___7__TNodeRegistryEntry_V__TAutoConverterNode_HV__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>,void> @ 14b1c6220

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>,void>
          (FNodeClassMetadata *param_1,FModuleInfo *param_2)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res18 [2];
  
  local_res18[0].Ptr = ::operator_new(0xf0);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr == (FNodeRegistryEntryBase *)0x0) {
    local_res18[0].Ptr = (INodeClassRegistryEntry *)0x0;
  }
  else {
    NodeRegistrationPrivate::FNodeRegistryEntryBase::FNodeRegistryEntryBase
              ((FNodeRegistryEntryBase *)local_res18[0].Ptr,param_1,param_2);
    ((FNodeRegistryEntryBase *)local_res18[0].Ptr)->_padding_ =
         (longlong)
         &
         ___7__TNodeRegistryEntry_V__TAutoConverterNode_HV__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,int>,void> @ 14b1c62b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,int>,void>
          (FNodeClassMetadata *param_1,FModuleInfo *param_2)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res18 [2];
  
  local_res18[0].Ptr = ::operator_new(0xf0);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr == (FNodeRegistryEntryBase *)0x0) {
    local_res18[0].Ptr = (INodeClassRegistryEntry *)0x0;
  }
  else {
    NodeRegistrationPrivate::FNodeRegistryEntryBase::FNodeRegistryEntryBase
              ((FNodeRegistryEntryBase *)local_res18[0].Ptr,param_1,param_2);
    ((FNodeRegistryEntryBase *)local_res18[0].Ptr)->_padding_ =
         (longlong)
         &
         ___7__TNodeRegistryEntry_V__TAutoConverterNode_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound__H_Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,int>,void> @ 14b1c6340

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,int>,void>
          (FNodeClassMetadata *param_1,FModuleInfo *param_2)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res18 [2];
  
  local_res18[0].Ptr = ::operator_new(0xf0);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr == (FNodeRegistryEntryBase *)0x0) {
    local_res18[0].Ptr = (INodeClassRegistryEntry *)0x0;
  }
  else {
    NodeRegistrationPrivate::FNodeRegistryEntryBase::FNodeRegistryEntryBase
              ((FNodeRegistryEntryBase *)local_res18[0].Ptr,param_1,param_2);
    ((FNodeRegistryEntryBase *)local_res18[0].Ptr)->_padding_ =
         (longlong)
         &
         ___7__TNodeRegistryEntry_V__TAutoConverterNode_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound__H_Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TRandomNodeOperator<int>_>,void> @ 14b1c63d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::TRandomNodeOperator<int>_>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10 [3];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<int>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<int>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<int>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TRandomNodeOperator<int>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<int>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::TRandomNodeOperator<int>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<int>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<int>::GetNodeInfo(void)'
              ::__l2::Info);
  local_res10[0].Ptr = ::operator_new(0xf0);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr == (FNodeRegistryEntryBase *)0x0) {
    local_res10[0].Ptr = (INodeClassRegistryEntry *)0x0;
  }
  else {
    NodeRegistrationPrivate::FNodeRegistryEntryBase::FNodeRegistryEntryBase
              ((FNodeRegistryEntryBase *)local_res10[0].Ptr,&local_e8,param_1);
    ((FNodeRegistryEntryBase *)local_res10[0].Ptr)->_padding_ =
         (longlong)
         &
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TRandomNodeOperator_H_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res10);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10[0].Ptr)(local_res10[0].Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TRandomNodeOperator<int>_>,void> @ 14b1c64f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::TRandomNodeOperator<int>_>,void>
          (FNodeClassMetadata *param_1,FModuleInfo *param_2)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res18 [2];
  
  local_res18[0].Ptr = ::operator_new(0xf0);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr == (FNodeRegistryEntryBase *)0x0) {
    local_res18[0].Ptr = (INodeClassRegistryEntry *)0x0;
  }
  else {
    NodeRegistrationPrivate::FNodeRegistryEntryBase::FNodeRegistryEntryBase
              ((FNodeRegistryEntryBase *)local_res18[0].Ptr,param_1,param_2);
    ((FNodeRegistryEntryBase *)local_res18[0].Ptr)->_padding_ =
         (longlong)
         &
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TRandomNodeOperator_H_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TRandomNodeOperator<float>_>,void> @ 14b1c6580

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::TRandomNodeOperator<float>_>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10 [3];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<float>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<float>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<float>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TRandomNodeOperator<float>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<float>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::TRandomNodeOperator<float>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<float>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<float>::GetNodeInfo(void)'
              ::__l2::Info);
  local_res10[0].Ptr = ::operator_new(0xf0);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr == (FNodeRegistryEntryBase *)0x0) {
    local_res10[0].Ptr = (INodeClassRegistryEntry *)0x0;
  }
  else {
    NodeRegistrationPrivate::FNodeRegistryEntryBase::FNodeRegistryEntryBase
              ((FNodeRegistryEntryBase *)local_res10[0].Ptr,&local_e8,param_1);
    ((FNodeRegistryEntryBase *)local_res10[0].Ptr)->_padding_ =
         (longlong)
         &
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TRandomNodeOperator_M_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res10);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10[0].Ptr)(local_res10[0].Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TRandomNodeOperator<float>_>,void> @ 14b1c66a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::TRandomNodeOperator<float>_>,void>
          (FNodeClassMetadata *param_1,FModuleInfo *param_2)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res18 [2];
  
  local_res18[0].Ptr = ::operator_new(0xf0);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr == (FNodeRegistryEntryBase *)0x0) {
    local_res18[0].Ptr = (INodeClassRegistryEntry *)0x0;
  }
  else {
    NodeRegistrationPrivate::FNodeRegistryEntryBase::FNodeRegistryEntryBase
              ((FNodeRegistryEntryBase *)local_res18[0].Ptr,param_1,param_2);
    ((FNodeRegistryEntryBase *)local_res18[0].Ptr)->_padding_ =
         (longlong)
         &
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TRandomNodeOperator_M_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TRandomNodeOperator<Metasound::FTime>_>,void> @ 14b1c6730

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::TRandomNodeOperator<Metasound::FTime>_>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10 [3];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<Metasound::FTime>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<Metasound::FTime>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<Metasound::FTime>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TRandomNodeOperator<Metasound::FTime>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<Metasound::FTime>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::TRandomNodeOperator<Metasound::FTime>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<Metasound::FTime>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<Metasound::FTime>::GetNodeInfo(void)'
              ::__l2::Info);
  local_res10[0].Ptr = ::operator_new(0xf0);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr == (FNodeRegistryEntryBase *)0x0) {
    local_res10[0].Ptr = (INodeClassRegistryEntry *)0x0;
  }
  else {
    NodeRegistrationPrivate::FNodeRegistryEntryBase::FNodeRegistryEntryBase
              ((FNodeRegistryEntryBase *)local_res10[0].Ptr,&local_e8,param_1);
    ((FNodeRegistryEntryBase *)local_res10[0].Ptr)->_padding_ =
         (longlong)
         &
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TRandomNodeOperator_VFTime_Metasound___Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res10);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10[0].Ptr)(local_res10[0].Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TRandomNodeOperator<Metasound::FTime>_>,void> @ 14b1c6850

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::TRandomNodeOperator<Metasound::FTime>_>,void>
          (FNodeClassMetadata *param_1,FModuleInfo *param_2)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res18 [2];
  
  local_res18[0].Ptr = ::operator_new(0xf0);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr == (FNodeRegistryEntryBase *)0x0) {
    local_res18[0].Ptr = (INodeClassRegistryEntry *)0x0;
  }
  else {
    NodeRegistrationPrivate::FNodeRegistryEntryBase::FNodeRegistryEntryBase
              ((FNodeRegistryEntryBase *)local_res18[0].Ptr,param_1,param_2);
    ((FNodeRegistryEntryBase *)local_res18[0].Ptr)->_padding_ =
         (longlong)
         &
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TRandomNodeOperator_VFTime_Metasound___Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TRandomNodeOperator<bool>_>,void> @ 14b1c68e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::TRandomNodeOperator<bool>_>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10 [3];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<bool>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<bool>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<bool>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TRandomNodeOperator<bool>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<bool>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::TRandomNodeOperator<bool>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<bool>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<bool>::GetNodeInfo(void)'
              ::__l2::Info);
  local_res10[0].Ptr = ::operator_new(0xf0);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr == (FNodeRegistryEntryBase *)0x0) {
    local_res10[0].Ptr = (INodeClassRegistryEntry *)0x0;
  }
  else {
    NodeRegistrationPrivate::FNodeRegistryEntryBase::FNodeRegistryEntryBase
              ((FNodeRegistryEntryBase *)local_res10[0].Ptr,&local_e8,param_1);
    ((FNodeRegistryEntryBase *)local_res10[0].Ptr)->_padding_ =
         (longlong)
         &
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TRandomNodeOperator__N_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res10);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10[0].Ptr)(local_res10[0].Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TRandomNodeOperator<bool>_>,void> @ 14b1c6a00

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::TRandomNodeOperator<bool>_>,void>
          (FNodeClassMetadata *param_1,FModuleInfo *param_2)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res18 [2];
  
  local_res18[0].Ptr = ::operator_new(0xf0);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr == (FNodeRegistryEntryBase *)0x0) {
    local_res18[0].Ptr = (INodeClassRegistryEntry *)0x0;
  }
  else {
    NodeRegistrationPrivate::FNodeRegistryEntryBase::FNodeRegistryEntryBase
              ((FNodeRegistryEntryBase *)local_res18[0].Ptr,param_1,param_2);
    ((FNodeRegistryEntryBase *)local_res18[0].Ptr)->_padding_ =
         (longlong)
         &
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TRandomNodeOperator__N_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::FPerlinAudioRate>,void> @ 14b1c6a90

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::FPerlinAudioRate>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10 [3];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBasePerlinNoiseOperator<Metasound::FAudioBuffer,Metasound::FPerlinAudioRate>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBasePerlinNoiseOperator<Metasound::FAudioBuffer,Metasound::FPerlinAudioRate>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBasePerlinNoiseOperator<Metasound::FAudioBuffer,Metasound::FPerlinAudioRate>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TBasePerlinNoiseOperator<Metasound::FAudioBuffer,Metasound::FPerlinAudioRate>::
      GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBasePerlinNoiseOperator<Metasound::FAudioBuffer,Metasound::FPerlinAudioRate>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::
             TBasePerlinNoiseOperator<Metasound::FAudioBuffer,Metasound::FPerlinAudioRate>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBasePerlinNoiseOperator<Metasound::FAudioBuffer,Metasound::FPerlinAudioRate>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBasePerlinNoiseOperator<Metasound::FAudioBuffer,Metasound::FPerlinAudioRate>::GetNodeInfo(void)'
              ::__l2::Info);
  local_res10[0].Ptr = ::operator_new(0xf0);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr == (FNodeRegistryEntryBase *)0x0) {
    local_res10[0].Ptr = (INodeClassRegistryEntry *)0x0;
  }
  else {
    NodeRegistrationPrivate::FNodeRegistryEntryBase::FNodeRegistryEntryBase
              ((FNodeRegistryEntryBase *)local_res10[0].Ptr,&local_e8,param_1);
    ((FNodeRegistryEntryBase *)local_res10[0].Ptr)->_padding_ =
         (longlong)
         &
         ___7__TNodeRegistryEntry_V__TNodeFacade_VFPerlinAudioRate_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res10);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10[0].Ptr)(local_res10[0].Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::FPerlinAudioRate>,void> @ 14b1c6bb0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::FPerlinAudioRate>,void>
          (FNodeClassMetadata *param_1,FModuleInfo *param_2)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res18 [2];
  
  local_res18[0].Ptr = ::operator_new(0xf0);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr == (FNodeRegistryEntryBase *)0x0) {
    local_res18[0].Ptr = (INodeClassRegistryEntry *)0x0;
  }
  else {
    NodeRegistrationPrivate::FNodeRegistryEntryBase::FNodeRegistryEntryBase
              ((FNodeRegistryEntryBase *)local_res18[0].Ptr,param_1,param_2);
    ((FNodeRegistryEntryBase *)local_res18[0].Ptr)->_padding_ =
         (longlong)
         &
         ___7__TNodeRegistryEntry_V__TNodeFacade_VFPerlinAudioRate_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::FPerlinControlRate>,void> @ 14b1c6c40

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::FPerlinControlRate>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10 [3];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBasePerlinNoiseOperator<float,Metasound::FPerlinControlRate>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBasePerlinNoiseOperator<float,Metasound::FPerlinControlRate>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBasePerlinNoiseOperator<float,Metasound::FPerlinControlRate>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TBasePerlinNoiseOperator<float,Metasound::FPerlinControlRate>::GetNodeInfo'::__l2
      ::<lambda_1>::operator()
                (local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBasePerlinNoiseOperator<float,Metasound::FPerlinControlRate>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::TBasePerlinNoiseOperator<float,Metasound::FPerlinControlRate>::GetNodeInfo'
             ::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBasePerlinNoiseOperator<float,Metasound::FPerlinControlRate>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBasePerlinNoiseOperator<float,Metasound::FPerlinControlRate>::GetNodeInfo(void)'
              ::__l2::Info);
  local_res10[0].Ptr = ::operator_new(0xf0);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr == (FNodeRegistryEntryBase *)0x0) {
    local_res10[0].Ptr = (INodeClassRegistryEntry *)0x0;
  }
  else {
    NodeRegistrationPrivate::FNodeRegistryEntryBase::FNodeRegistryEntryBase
              ((FNodeRegistryEntryBase *)local_res10[0].Ptr,&local_e8,param_1);
    ((FNodeRegistryEntryBase *)local_res10[0].Ptr)->_padding_ =
         (longlong)
         &
         ___7__TNodeRegistryEntry_V__TNodeFacade_VFPerlinControlRate_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res10);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10[0].Ptr)(local_res10[0].Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::FPerlinControlRate>,void> @ 14b1c6d60

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::FPerlinControlRate>,void>
          (FNodeClassMetadata *param_1,FModuleInfo *param_2)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res18 [2];
  
  local_res18[0].Ptr = ::operator_new(0xf0);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr == (FNodeRegistryEntryBase *)0x0) {
    local_res18[0].Ptr = (INodeClassRegistryEntry *)0x0;
  }
  else {
    NodeRegistrationPrivate::FNodeRegistryEntryBase::FNodeRegistryEntryBase
              ((FNodeRegistryEntryBase *)local_res18[0].Ptr,param_1,param_2);
    ((FNodeRegistryEntryBase *)local_res18[0].Ptr)->_padding_ =
         (longlong)
         &
         ___7__TNodeRegistryEntry_V__TNodeFacade_VFPerlinControlRate_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::FPlateReverbOperator>,void> @ 14b1c6df0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::FPlateReverbOperator>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10 [3];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FPlateReverbOperator::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FPlateReverbOperator::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FPlateReverbOperator::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::FPlateReverbOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FPlateReverbOperator::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::FPlateReverbOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FPlateReverbOperator::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FPlateReverbOperator::GetNodeInfo(void)'
              ::__l2::Metadata);
  local_res10[0].Ptr = ::operator_new(0xf0);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr == (FNodeRegistryEntryBase *)0x0) {
    local_res10[0].Ptr = (INodeClassRegistryEntry *)0x0;
  }
  else {
    NodeRegistrationPrivate::FNodeRegistryEntryBase::FNodeRegistryEntryBase
              ((FNodeRegistryEntryBase *)local_res10[0].Ptr,&local_e8,param_1);
    ((FNodeRegistryEntryBase *)local_res10[0].Ptr)->_padding_ =
         (longlong)
         &
         ___7__TNodeRegistryEntry_V__TNodeFacade_VFPlateReverbOperator_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res10);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10[0].Ptr)(local_res10[0].Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::FPlateReverbOperator>,void> @ 14b1c6f10

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::FPlateReverbOperator>,void>
          (FNodeClassMetadata *param_1,FModuleInfo *param_2)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res18 [2];
  
  local_res18[0].Ptr = ::operator_new(0xf0);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr == (FNodeRegistryEntryBase *)0x0) {
    local_res18[0].Ptr = (INodeClassRegistryEntry *)0x0;
  }
  else {
    NodeRegistrationPrivate::FNodeRegistryEntryBase::FNodeRegistryEntryBase
              ((FNodeRegistryEntryBase *)local_res18[0].Ptr,param_1,param_2);
    ((FNodeRegistryEntryBase *)local_res18[0].Ptr)->_padding_ =
         (longlong)
         &
         ___7__TNodeRegistryEntry_V__TNodeFacade_VFPlateReverbOperator_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::FRingModOperator>,void> @ 14b1c6fa0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::FRingModOperator>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10 [3];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FRingModOperator::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FRingModOperator::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FRingModOperator::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::FRingModOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FRingModOperator::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::FRingModOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FRingModOperator::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FRingModOperator::GetNodeInfo(void)'
              ::__l2::Metadata);
  local_res10[0].Ptr = ::operator_new(0xf0);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr == (FNodeRegistryEntryBase *)0x0) {
    local_res10[0].Ptr = (INodeClassRegistryEntry *)0x0;
  }
  else {
    NodeRegistrationPrivate::FNodeRegistryEntryBase::FNodeRegistryEntryBase
              ((FNodeRegistryEntryBase *)local_res10[0].Ptr,&local_e8,param_1);
    ((FNodeRegistryEntryBase *)local_res10[0].Ptr)->_padding_ =
         (longlong)
         &
         ___7__TNodeRegistryEntry_V__TNodeFacade_VFRingModOperator_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res10);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10[0].Ptr)(local_res10[0].Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::FRingModOperator>,void> @ 14b1c70c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::FRingModOperator>,void>
          (FNodeClassMetadata *param_1,FModuleInfo *param_2)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res18 [2];
  
  local_res18[0].Ptr = ::operator_new(0xf0);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr == (FNodeRegistryEntryBase *)0x0) {
    local_res18[0].Ptr = (INodeClassRegistryEntry *)0x0;
  }
  else {
    NodeRegistrationPrivate::FNodeRegistryEntryBase::FNodeRegistryEntryBase
              ((FNodeRegistryEntryBase *)local_res18[0].Ptr,param_1,param_2);
    ((FNodeRegistryEntryBase *)local_res18[0].Ptr)->_padding_ =
         (longlong)
         &
         ___7__TNodeRegistryEntry_V__TNodeFacade_VFRingModOperator_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::FSampleAndHoldOperator>,void> @ 14b1c7150

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::FSampleAndHoldOperator>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10 [3];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSampleAndHoldOperator::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSampleAndHoldOperator::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSampleAndHoldOperator::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::FSampleAndHoldOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSampleAndHoldOperator::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::FSampleAndHoldOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSampleAndHoldOperator::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSampleAndHoldOperator::GetNodeInfo(void)'
              ::__l2::Metadata);
  local_res10[0].Ptr = ::operator_new(0xf0);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr == (FNodeRegistryEntryBase *)0x0) {
    local_res10[0].Ptr = (INodeClassRegistryEntry *)0x0;
  }
  else {
    NodeRegistrationPrivate::FNodeRegistryEntryBase::FNodeRegistryEntryBase
              ((FNodeRegistryEntryBase *)local_res10[0].Ptr,&local_e8,param_1);
    ((FNodeRegistryEntryBase *)local_res10[0].Ptr)->_padding_ =
         (longlong)
         &
         ___7__TNodeRegistryEntry_V__TNodeFacade_VFSampleAndHoldOperator_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res10);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10[0].Ptr)(local_res10[0].Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::FSampleAndHoldOperator>,void> @ 14b1c7270

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::FSampleAndHoldOperator>,void>
          (FNodeClassMetadata *param_1,FModuleInfo *param_2)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res18 [2];
  
  local_res18[0].Ptr = ::operator_new(0xf0);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr == (FNodeRegistryEntryBase *)0x0) {
    local_res18[0].Ptr = (INodeClassRegistryEntry *)0x0;
  }
  else {
    NodeRegistrationPrivate::FNodeRegistryEntryBase::FNodeRegistryEntryBase
              ((FNodeRegistryEntryBase *)local_res18[0].Ptr,param_1,param_2);
    ((FNodeRegistryEntryBase *)local_res18[0].Ptr)->_padding_ =
         (longlong)
         &
         ___7__TNodeRegistryEntry_V__TNodeFacade_VFSampleAndHoldOperator_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::FSemitoneToFrequencyMultiplierOperator>,void> @ 14b1c7300

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::FSemitoneToFrequencyMultiplierOperator>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10 [3];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      `Metasound::FSemitoneToFrequencyMultiplierOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res10,&::Info);
      atexit(`Metasound::FSemitoneToFrequencyMultiplierOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata(&local_e8,&::Info);
  local_res10[0].Ptr = ::operator_new(0xf0);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr == (FNodeRegistryEntryBase *)0x0) {
    local_res10[0].Ptr = (INodeClassRegistryEntry *)0x0;
  }
  else {
    NodeRegistrationPrivate::FNodeRegistryEntryBase::FNodeRegistryEntryBase
              ((FNodeRegistryEntryBase *)local_res10[0].Ptr,&local_e8,param_1);
    ((FNodeRegistryEntryBase *)local_res10[0].Ptr)->_padding_ =
         (longlong)
         &
         ___7__TNodeRegistryEntry_V__TNodeFacade_VFSemitoneToFrequencyMultiplierOperator_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res10);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10[0].Ptr)(local_res10[0].Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::FSemitoneToFrequencyMultiplierOperator>,void> @ 14b1c7420

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::FSemitoneToFrequencyMultiplierOperator>,void>
          (FNodeClassMetadata *param_1,FModuleInfo *param_2)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res18 [2];
  
  local_res18[0].Ptr = ::operator_new(0xf0);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr == (FNodeRegistryEntryBase *)0x0) {
    local_res18[0].Ptr = (INodeClassRegistryEntry *)0x0;
  }
  else {
    NodeRegistrationPrivate::FNodeRegistryEntryBase::FNodeRegistryEntryBase
              ((FNodeRegistryEntryBase *)local_res18[0].Ptr,param_1,param_2);
    ((FNodeRegistryEntryBase *)local_res18[0].Ptr)->_padding_ =
         (longlong)
         &
         ___7__TNodeRegistryEntry_V__TNodeFacade_VFSemitoneToFrequencyMultiplierOperator_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::FStereoDelayOperator>,void> @ 14b1c74b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::FStereoDelayOperator>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10 [3];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      `Metasound::FStereoDelayOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res10,&::Info);
      atexit(`Metasound::FStereoDelayOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata(&local_e8,&::Info);
  local_res10[0].Ptr = ::operator_new(0xf0);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr == (FNodeRegistryEntryBase *)0x0) {
    local_res10[0].Ptr = (INodeClassRegistryEntry *)0x0;
  }
  else {
    NodeRegistrationPrivate::FNodeRegistryEntryBase::FNodeRegistryEntryBase
              ((FNodeRegistryEntryBase *)local_res10[0].Ptr,&local_e8,param_1);
    ((FNodeRegistryEntryBase *)local_res10[0].Ptr)->_padding_ =
         (longlong)
         &
         ___7__TNodeRegistryEntry_V__TNodeFacade_VFStereoDelayOperator_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res10);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10[0].Ptr)(local_res10[0].Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::FStereoDelayOperator>,void> @ 14b1c75d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::FStereoDelayOperator>,void>
          (FNodeClassMetadata *param_1,FModuleInfo *param_2)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res18 [2];
  
  local_res18[0].Ptr = ::operator_new(0xf0);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr == (FNodeRegistryEntryBase *)0x0) {
    local_res18[0].Ptr = (INodeClassRegistryEntry *)0x0;
  }
  else {
    NodeRegistrationPrivate::FNodeRegistryEntryBase::FNodeRegistryEntryBase
              ((FNodeRegistryEntryBase *)local_res18[0].Ptr,param_1,param_2);
    ((FNodeRegistryEntryBase *)local_res18[0].Ptr)->_padding_ =
         (longlong)
         &
         ___7__TNodeRegistryEntry_V__TNodeFacade_VFStereoDelayOperator_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::FStereoPannerOperator>,void> @ 14b1c7660

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::FStereoPannerOperator>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10 [3];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      `Metasound::FStereoPannerOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res10,&::Info);
      atexit(`Metasound::FStereoPannerOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata(&local_e8,&::Info);
  local_res10[0].Ptr = ::operator_new(0xf0);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr == (FNodeRegistryEntryBase *)0x0) {
    local_res10[0].Ptr = (INodeClassRegistryEntry *)0x0;
  }
  else {
    NodeRegistrationPrivate::FNodeRegistryEntryBase::FNodeRegistryEntryBase
              ((FNodeRegistryEntryBase *)local_res10[0].Ptr,&local_e8,param_1);
    ((FNodeRegistryEntryBase *)local_res10[0].Ptr)->_padding_ =
         (longlong)
         &
         ___7__TNodeRegistryEntry_V__TNodeFacade_VFStereoPannerOperator_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res10);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10[0].Ptr)(local_res10[0].Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::FStereoPannerOperator>,void> @ 14b1c7780

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::FStereoPannerOperator>,void>
          (FNodeClassMetadata *param_1,FModuleInfo *param_2)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res18 [2];
  
  local_res18[0].Ptr = ::operator_new(0xf0);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr == (FNodeRegistryEntryBase *)0x0) {
    local_res18[0].Ptr = (INodeClassRegistryEntry *)0x0;
  }
  else {
    NodeRegistrationPrivate::FNodeRegistryEntryBase::FNodeRegistryEntryBase
              ((FNodeRegistryEntryBase *)local_res18[0].Ptr,param_1,param_2);
    ((FNodeRegistryEntryBase *)local_res18[0].Ptr)->_padding_ =
         (longlong)
         &
         ___7__TNodeRegistryEntry_V__TNodeFacade_VFStereoPannerOperator_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::FSubharmonizerOperator>,void> @ 14b1c7810

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::FSubharmonizerOperator>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10 [3];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      `Metasound::FSubharmonizerOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res10,&::Info);
      atexit(`Metasound::FSubharmonizerOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata(&local_e8,&::Info);
  local_res10[0].Ptr = ::operator_new(0xf0);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr == (FNodeRegistryEntryBase *)0x0) {
    local_res10[0].Ptr = (INodeClassRegistryEntry *)0x0;
  }
  else {
    NodeRegistrationPrivate::FNodeRegistryEntryBase::FNodeRegistryEntryBase
              ((FNodeRegistryEntryBase *)local_res10[0].Ptr,&local_e8,param_1);
    ((FNodeRegistryEntryBase *)local_res10[0].Ptr)->_padding_ =
         (longlong)
         &
         ___7__TNodeRegistryEntry_V__TNodeFacade_VFSubharmonizerOperator_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res10);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10[0].Ptr)(local_res10[0].Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::FSubharmonizerOperator>,void> @ 14b1c7930

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::FSubharmonizerOperator>,void>
          (FNodeClassMetadata *param_1,FModuleInfo *param_2)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res18 [2];
  
  local_res18[0].Ptr = ::operator_new(0xf0);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr == (FNodeRegistryEntryBase *)0x0) {
    local_res18[0].Ptr = (INodeClassRegistryEntry *)0x0;
  }
  else {
    NodeRegistrationPrivate::FNodeRegistryEntryBase::FNodeRegistryEntryBase
              ((FNodeRegistryEntryBase *)local_res18[0].Ptr,param_1,param_2);
    ((FNodeRegistryEntryBase *)local_res18[0].Ptr)->_padding_ =
         (longlong)
         &
         ___7__TNodeRegistryEntry_V__TNodeFacade_VFSubharmonizerOperator_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::FSuperOscillatorOperatorMono>,void> @ 14b1c79c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::FSuperOscillatorOperatorMono>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10 [3];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSuperOscillatorOperatorMono::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSuperOscillatorOperatorMono::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSuperOscillatorOperatorMono::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::FSuperOscillatorOperatorMono::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSuperOscillatorOperatorMono::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::FSuperOscillatorOperatorMono::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSuperOscillatorOperatorMono::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSuperOscillatorOperatorMono::GetNodeInfo(void)'
              ::__l2::Info);
  local_res10[0].Ptr = ::operator_new(0xf0);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr == (FNodeRegistryEntryBase *)0x0) {
    local_res10[0].Ptr = (INodeClassRegistryEntry *)0x0;
  }
  else {
    NodeRegistrationPrivate::FNodeRegistryEntryBase::FNodeRegistryEntryBase
              ((FNodeRegistryEntryBase *)local_res10[0].Ptr,&local_e8,param_1);
    ((FNodeRegistryEntryBase *)local_res10[0].Ptr)->_padding_ =
         (longlong)
         &
         ___7__TNodeRegistryEntry_V__TNodeFacade_VFSuperOscillatorOperatorMono_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res10);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10[0].Ptr)(local_res10[0].Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::FSuperOscillatorOperatorMono>,void> @ 14b1c7ae0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::FSuperOscillatorOperatorMono>,void>
          (FNodeClassMetadata *param_1,FModuleInfo *param_2)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res18 [2];
  
  local_res18[0].Ptr = ::operator_new(0xf0);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr == (FNodeRegistryEntryBase *)0x0) {
    local_res18[0].Ptr = (INodeClassRegistryEntry *)0x0;
  }
  else {
    NodeRegistrationPrivate::FNodeRegistryEntryBase::FNodeRegistryEntryBase
              ((FNodeRegistryEntryBase *)local_res18[0].Ptr,param_1,param_2);
    ((FNodeRegistryEntryBase *)local_res18[0].Ptr)->_padding_ =
         (longlong)
         &
         ___7__TNodeRegistryEntry_V__TNodeFacade_VFSuperOscillatorOperatorMono_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::FSuperOscillatorOperatorStereo>,void> @ 14b1c7b70

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::FSuperOscillatorOperatorStereo>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10 [3];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSuperOscillatorOperatorStereo::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSuperOscillatorOperatorStereo::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSuperOscillatorOperatorStereo::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::FSuperOscillatorOperatorStereo::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSuperOscillatorOperatorStereo::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::FSuperOscillatorOperatorStereo::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSuperOscillatorOperatorStereo::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSuperOscillatorOperatorStereo::GetNodeInfo(void)'
              ::__l2::Info);
  local_res10[0].Ptr = ::operator_new(0xf0);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr == (FNodeRegistryEntryBase *)0x0) {
    local_res10[0].Ptr = (INodeClassRegistryEntry *)0x0;
  }
  else {
    NodeRegistrationPrivate::FNodeRegistryEntryBase::FNodeRegistryEntryBase
              ((FNodeRegistryEntryBase *)local_res10[0].Ptr,&local_e8,param_1);
    ((FNodeRegistryEntryBase *)local_res10[0].Ptr)->_padding_ =
         (longlong)
         &
         ___7__TNodeRegistryEntry_V__TNodeFacade_VFSuperOscillatorOperatorStereo_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res10);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10[0].Ptr)(local_res10[0].Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::FSuperOscillatorOperatorStereo>,void> @ 14b1c7c90

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::FSuperOscillatorOperatorStereo>,void>
          (FNodeClassMetadata *param_1,FModuleInfo *param_2)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res18 [2];
  
  local_res18[0].Ptr = ::operator_new(0xf0);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr == (FNodeRegistryEntryBase *)0x0) {
    local_res18[0].Ptr = (INodeClassRegistryEntry *)0x0;
  }
  else {
    NodeRegistrationPrivate::FNodeRegistryEntryBase::FNodeRegistryEntryBase
              ((FNodeRegistryEntryBase *)local_res18[0].Ptr,param_1,param_2);
    ((FNodeRegistryEntryBase *)local_res18[0].Ptr)->_padding_ =
         (longlong)
         &
         ___7__TNodeRegistryEntry_V__TNodeFacade_VFSuperOscillatorOperatorStereo_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::FSwitchAndRampOperator>,void> @ 14b1c7d20

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::FSwitchAndRampOperator>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10 [3];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSwitchAndRampOperator::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSwitchAndRampOperator::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSwitchAndRampOperator::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::FSwitchAndRampOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSwitchAndRampOperator::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::FSwitchAndRampOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSwitchAndRampOperator::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSwitchAndRampOperator::GetNodeInfo(void)'
              ::__l2::Info);
  local_res10[0].Ptr = ::operator_new(0xf0);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr == (FNodeRegistryEntryBase *)0x0) {
    local_res10[0].Ptr = (INodeClassRegistryEntry *)0x0;
  }
  else {
    NodeRegistrationPrivate::FNodeRegistryEntryBase::FNodeRegistryEntryBase
              ((FNodeRegistryEntryBase *)local_res10[0].Ptr,&local_e8,param_1);
    ((FNodeRegistryEntryBase *)local_res10[0].Ptr)->_padding_ =
         (longlong)
         &
         ___7__TNodeRegistryEntry_V__TNodeFacade_VFSwitchAndRampOperator_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res10);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10[0].Ptr)(local_res10[0].Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::FSwitchAndRampOperator>,void> @ 14b1c7e40

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::FSwitchAndRampOperator>,void>
          (FNodeClassMetadata *param_1,FModuleInfo *param_2)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res18 [2];
  
  local_res18[0].Ptr = ::operator_new(0xf0);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr == (FNodeRegistryEntryBase *)0x0) {
    local_res18[0].Ptr = (INodeClassRegistryEntry *)0x0;
  }
  else {
    NodeRegistrationPrivate::FNodeRegistryEntryBase::FNodeRegistryEntryBase
              ((FNodeRegistryEntryBase *)local_res18[0].Ptr,param_1,param_2);
    ((FNodeRegistryEntryBase *)local_res18[0].Ptr)->_padding_ =
         (longlong)
         &
         ___7__TNodeRegistryEntry_V__TNodeFacade_VFSwitchAndRampOperator_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TReceiveNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>,void> @ 14b1c7ed0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TReceiveNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  FNodeClassMetadata *pFVar2;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10 [3];
  FNodeClassMetadata local_e8;
  
  pFVar2 = ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
           GetNodeInfo();
  FNodeClassMetadata::FNodeClassMetadata(&local_e8,pFVar2);
  local_res10[0].Ptr = ::operator_new(0xf0);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr == (FNodeRegistryEntryBase *)0x0) {
    local_res10[0].Ptr = (INodeClassRegistryEntry *)0x0;
  }
  else {
    NodeRegistrationPrivate::FNodeRegistryEntryBase::FNodeRegistryEntryBase
              ((FNodeRegistryEntryBase *)local_res10[0].Ptr,&local_e8,param_1);
    ((FNodeRegistryEntryBase *)local_res10[0].Ptr)->_padding_ =
         (longlong)
         &
         ___7__TNodeRegistryEntry_V__TReceiveNode_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res10);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10[0].Ptr)(local_res10[0].Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TReceiveNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>,void> @ 14b1c7f80

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TReceiveNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>,void>
          (FNodeClassMetadata *param_1,FModuleInfo *param_2)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res18 [2];
  
  local_res18[0].Ptr = ::operator_new(0xf0);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr == (FNodeRegistryEntryBase *)0x0) {
    local_res18[0].Ptr = (INodeClassRegistryEntry *)0x0;
  }
  else {
    NodeRegistrationPrivate::FNodeRegistryEntryBase::FNodeRegistryEntryBase
              ((FNodeRegistryEntryBase *)local_res18[0].Ptr,param_1,param_2);
    ((FNodeRegistryEntryBase *)local_res18[0].Ptr)->_padding_ =
         (longlong)
         &
         ___7__TNodeRegistryEntry_V__TReceiveNode_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TReceiveNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>,void> @ 14b1c8010

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TReceiveNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  FNodeClassMetadata *pFVar2;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10 [3];
  FNodeClassMetadata local_e8;
  
  pFVar2 = ReceiveNodePrivate::
           TReceiverOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::GetNodeInfo();
  FNodeClassMetadata::FNodeClassMetadata(&local_e8,pFVar2);
  local_res10[0].Ptr = ::operator_new(0xf0);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr == (FNodeRegistryEntryBase *)0x0) {
    local_res10[0].Ptr = (INodeClassRegistryEntry *)0x0;
  }
  else {
    NodeRegistrationPrivate::FNodeRegistryEntryBase::FNodeRegistryEntryBase
              ((FNodeRegistryEntryBase *)local_res10[0].Ptr,&local_e8,param_1);
    ((FNodeRegistryEntryBase *)local_res10[0].Ptr)->_padding_ =
         (longlong)
         &
         ___7__TNodeRegistryEntry_V__TReceiveNode_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res10);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10[0].Ptr)(local_res10[0].Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TReceiveNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>,void> @ 14b1c80c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TReceiveNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>,void>
          (FNodeClassMetadata *param_1,FModuleInfo *param_2)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res18 [2];
  
  local_res18[0].Ptr = ::operator_new(0xf0);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr == (FNodeRegistryEntryBase *)0x0) {
    local_res18[0].Ptr = (INodeClassRegistryEntry *)0x0;
  }
  else {
    NodeRegistrationPrivate::FNodeRegistryEntryBase::FNodeRegistryEntryBase
              ((FNodeRegistryEntryBase *)local_res18[0].Ptr,param_1,param_2);
    ((FNodeRegistryEntryBase *)local_res18[0].Ptr)->_padding_ =
         (longlong)
         &
         ___7__TNodeRegistryEntry_V__TReceiveNode_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TSendNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>,void> @ 14b1c8150

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TSendNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10 [3];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
      GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
              ::__l2::Info);
  local_res10[0].Ptr = ::operator_new(0xf0);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr == (FNodeRegistryEntryBase *)0x0) {
    local_res10[0].Ptr = (INodeClassRegistryEntry *)0x0;
  }
  else {
    NodeRegistrationPrivate::FNodeRegistryEntryBase::FNodeRegistryEntryBase
              ((FNodeRegistryEntryBase *)local_res10[0].Ptr,&local_e8,param_1);
    ((FNodeRegistryEntryBase *)local_res10[0].Ptr)->_padding_ =
         (longlong)
         &
         ___7__TNodeRegistryEntry_V__TSendNode_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res10);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10[0].Ptr)(local_res10[0].Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TSendNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>,void> @ 14b1c8270

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TSendNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>,void>
          (FNodeClassMetadata *param_1,FModuleInfo *param_2)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res18 [2];
  
  local_res18[0].Ptr = ::operator_new(0xf0);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr == (FNodeRegistryEntryBase *)0x0) {
    local_res18[0].Ptr = (INodeClassRegistryEntry *)0x0;
  }
  else {
    NodeRegistrationPrivate::FNodeRegistryEntryBase::FNodeRegistryEntryBase
              ((FNodeRegistryEntryBase *)local_res18[0].Ptr,param_1,param_2);
    ((FNodeRegistryEntryBase *)local_res18[0].Ptr)->_padding_ =
         (longlong)
         &
         ___7__TNodeRegistryEntry_V__TSendNode_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TSendNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>,void> @ 14b1c8300

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TSendNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10 [3];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::
      TSendOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::GetNodeInfo'::__l2::
      <lambda_1>::operator()
                (local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::GetNodeInfo'::
             __l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
              ::__l2::Info);
  local_res10[0].Ptr = ::operator_new(0xf0);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr == (FNodeRegistryEntryBase *)0x0) {
    local_res10[0].Ptr = (INodeClassRegistryEntry *)0x0;
  }
  else {
    NodeRegistrationPrivate::FNodeRegistryEntryBase::FNodeRegistryEntryBase
              ((FNodeRegistryEntryBase *)local_res10[0].Ptr,&local_e8,param_1);
    ((FNodeRegistryEntryBase *)local_res10[0].Ptr)->_padding_ =
         (longlong)
         &
         ___7__TNodeRegistryEntry_V__TSendNode_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res10);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10[0].Ptr)(local_res10[0].Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TSendNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>,void> @ 14b1c8420

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TSendNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>,void>
          (FNodeClassMetadata *param_1,FModuleInfo *param_2)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res18 [2];
  
  local_res18[0].Ptr = ::operator_new(0xf0);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr == (FNodeRegistryEntryBase *)0x0) {
    local_res18[0].Ptr = (INodeClassRegistryEntry *)0x0;
  }
  else {
    NodeRegistrationPrivate::FNodeRegistryEntryBase::FNodeRegistryEntryBase
              ((FNodeRegistryEntryBase *)local_res18[0].Ptr,param_1,param_2);
    ((FNodeRegistryEntryBase *)local_res18[0].Ptr)->_padding_ =
         (longlong)
         &
         ___7__TNodeRegistryEntry_V__TSendNode_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// Transform<TArray<FName,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>_&,`Metasound::TEnum<enum_Metasound::EPanningLaw,0>::TEnum<enum_Metasound::EPanningLaw,0>'::__l9::<lambda_1>_> @ 14b1c8b00

/* WARNING: Removing unreachable block (ram,0x00014b1c8c2b) */

void __cdecl
Algo::
Transform<TArray<FName,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>_&,_Metasound::TEnum<enum_Metasound::EPanningLaw,0>::TEnum<enum_Metasound::EPanningLaw,0>_::__l9::<lambda_1>_>
          (TArray<FName,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,<lambda_1> param_3)

{
  FName *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FName *this;
  undefined1 local_res8 [8];
  FString local_38;
  
  this = (FName *)(param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = this + iVar2;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (this == pFVar1) break;
    ::FName::ToString(this,&local_38);
    pFVar6 = (param_2->AllocatorInstance).Data;
    if (((pFVar6 <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 < pFVar6 + (longlong)param_2->ArrayMax * 0x10)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
      param_2->ArrayNum = iVar5;
    }
    param_2->ArrayNum = iVar5 + 1;
    pFVar6 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    *(undefined8 *)pFVar6 = 0;
    *(FScriptContainerElement **)pFVar6 = local_38.Data.AllocatorInstance.Data;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar6 + 8) = local_38.Data.ArrayNum;
    *(int *)(pFVar6 + 0xc) = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    this = this + 1;
  }
  return;
}

// Transform<TArray<FName,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>_&,`Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>::TEnum<enum_Metasound::EStereoDelayMode,0>'::__l9::<lambda_1>_> @ 14b1c8c60

/* WARNING: Removing unreachable block (ram,0x00014b1c8d8b) */

void __cdecl
Algo::
Transform<TArray<FName,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>_&,_Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>::TEnum<enum_Metasound::EStereoDelayMode,0>_::__l9::<lambda_1>_>
          (TArray<FName,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,<lambda_1> param_3)

{
  FName *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FName *this;
  undefined1 local_res8 [8];
  FString local_38;
  
  this = (FName *)(param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = this + iVar2;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (this == pFVar1) break;
    ::FName::ToString(this,&local_38);
    pFVar6 = (param_2->AllocatorInstance).Data;
    if (((pFVar6 <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 < pFVar6 + (longlong)param_2->ArrayMax * 0x10)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
      param_2->ArrayNum = iVar5;
    }
    param_2->ArrayNum = iVar5 + 1;
    pFVar6 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    *(undefined8 *)pFVar6 = 0;
    *(FScriptContainerElement **)pFVar6 = local_38.Data.AllocatorInstance.Data;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar6 + 8) = local_38.Data.ArrayNum;
    *(int *)(pFVar6 + 0xc) = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    this = this + 1;
  }
  return;
}

// Transform<TArray<FName,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>_&,`Metasound::TEnum<enum_Metasound::EPanningLaw,0>::TEnum<enum_Metasound::EPanningLaw,0>'::__l10::<lambda_1>_> @ 14b1c8dc0

/* WARNING: Removing unreachable block (ram,0x00014b1c8eeb) */

void __cdecl
Algo::
Transform<TArray<FName,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>_&,_Metasound::TEnum<enum_Metasound::EPanningLaw,0>::TEnum<enum_Metasound::EPanningLaw,0>_::__l10::<lambda_1>_>
          (TArray<FName,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,<lambda_1> param_3)

{
  FName *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FName *this;
  undefined1 local_res8 [8];
  FString local_38;
  
  this = (FName *)(param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = this + iVar2;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (this == pFVar1) break;
    ::FName::ToString(this,&local_38);
    pFVar6 = (param_2->AllocatorInstance).Data;
    if (((pFVar6 <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 < pFVar6 + (longlong)param_2->ArrayMax * 0x10)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
      param_2->ArrayNum = iVar5;
    }
    param_2->ArrayNum = iVar5 + 1;
    pFVar6 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    *(undefined8 *)pFVar6 = 0;
    *(FScriptContainerElement **)pFVar6 = local_38.Data.AllocatorInstance.Data;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar6 + 8) = local_38.Data.ArrayNum;
    *(int *)(pFVar6 + 0xc) = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    this = this + 1;
  }
  return;
}

// Transform<TArray<FName,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>_&,`Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>::TEnum<enum_Metasound::EStereoDelayMode,0>'::__l10::<lambda_1>_> @ 14b1c8f20

/* WARNING: Removing unreachable block (ram,0x00014b1c904b) */

void __cdecl
Algo::
Transform<TArray<FName,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>_&,_Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>::TEnum<enum_Metasound::EStereoDelayMode,0>_::__l10::<lambda_1>_>
          (TArray<FName,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,<lambda_1> param_3)

{
  FName *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FName *this;
  undefined1 local_res8 [8];
  FString local_38;
  
  this = (FName *)(param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = this + iVar2;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (this == pFVar1) break;
    ::FName::ToString(this,&local_38);
    pFVar6 = (param_2->AllocatorInstance).Data;
    if (((pFVar6 <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 < pFVar6 + (longlong)param_2->ArrayMax * 0x10)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
      param_2->ArrayNum = iVar5;
    }
    param_2->ArrayNum = iVar5 + 1;
    pFVar6 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    *(undefined8 *)pFVar6 = 0;
    *(FScriptContainerElement **)pFVar6 = local_38.Data.AllocatorInstance.Data;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar6 + 8) = local_38.Data.ArrayNum;
    *(int *)(pFVar6 + 0xc) = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    this = this + 1;
  }
  return;
}

// UnregisterNode<Metasound::TNodeFacade<Metasound::TRandomNodeOperator<int>_>_> @ 14b1c9080

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::UnregisterNode<Metasound::TNodeFacade<Metasound::TRandomNodeOperator<int>_>_>
          (FModuleInfo *param_1)

{
  bool bVar1;
  undefined1 local_res10 [24];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<int>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<int>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<int>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TRandomNodeOperator<int>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<int>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::TRandomNodeOperator<int>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<int>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<int>::GetNodeInfo(void)'
              ::__l2::Info);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(&local_e8);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// UnregisterNode<Metasound::TNodeFacade<Metasound::TRandomNodeOperator<float>_>_> @ 14b1c9130

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::UnregisterNode<Metasound::TNodeFacade<Metasound::TRandomNodeOperator<float>_>_>
          (FModuleInfo *param_1)

{
  bool bVar1;
  undefined1 local_res10 [24];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<float>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<float>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<float>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TRandomNodeOperator<float>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<float>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::TRandomNodeOperator<float>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<float>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<float>::GetNodeInfo(void)'
              ::__l2::Info);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(&local_e8);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// UnregisterNode<Metasound::TNodeFacade<Metasound::TRandomNodeOperator<Metasound::FTime>_>_> @ 14b1c91e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
UnregisterNode<Metasound::TNodeFacade<Metasound::TRandomNodeOperator<Metasound::FTime>_>_>
          (FModuleInfo *param_1)

{
  bool bVar1;
  undefined1 local_res10 [24];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<Metasound::FTime>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<Metasound::FTime>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<Metasound::FTime>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TRandomNodeOperator<Metasound::FTime>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<Metasound::FTime>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::TRandomNodeOperator<Metasound::FTime>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<Metasound::FTime>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<Metasound::FTime>::GetNodeInfo(void)'
              ::__l2::Info);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(&local_e8);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// UnregisterNode<Metasound::TNodeFacade<Metasound::TRandomNodeOperator<bool>_>_> @ 14b1c9290

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::UnregisterNode<Metasound::TNodeFacade<Metasound::TRandomNodeOperator<bool>_>_>
          (FModuleInfo *param_1)

{
  bool bVar1;
  undefined1 local_res10 [24];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<bool>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<bool>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<bool>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TRandomNodeOperator<bool>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<bool>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::TRandomNodeOperator<bool>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<bool>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<bool>::GetNodeInfo(void)'
              ::__l2::Info);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(&local_e8);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// UnregisterNode<Metasound::TNodeFacade<Metasound::FPerlinAudioRate>_> @ 14b1c9340

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::UnregisterNode<Metasound::TNodeFacade<Metasound::FPerlinAudioRate>_>
          (FModuleInfo *param_1)

{
  bool bVar1;
  undefined1 local_res10 [24];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBasePerlinNoiseOperator<Metasound::FAudioBuffer,Metasound::FPerlinAudioRate>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBasePerlinNoiseOperator<Metasound::FAudioBuffer,Metasound::FPerlinAudioRate>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBasePerlinNoiseOperator<Metasound::FAudioBuffer,Metasound::FPerlinAudioRate>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TBasePerlinNoiseOperator<Metasound::FAudioBuffer,Metasound::FPerlinAudioRate>::
      GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBasePerlinNoiseOperator<Metasound::FAudioBuffer,Metasound::FPerlinAudioRate>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::
             TBasePerlinNoiseOperator<Metasound::FAudioBuffer,Metasound::FPerlinAudioRate>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBasePerlinNoiseOperator<Metasound::FAudioBuffer,Metasound::FPerlinAudioRate>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBasePerlinNoiseOperator<Metasound::FAudioBuffer,Metasound::FPerlinAudioRate>::GetNodeInfo(void)'
              ::__l2::Info);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(&local_e8);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// UnregisterNode<Metasound::TNodeFacade<Metasound::FPerlinControlRate>_> @ 14b1c93f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::UnregisterNode<Metasound::TNodeFacade<Metasound::FPerlinControlRate>_>
          (FModuleInfo *param_1)

{
  bool bVar1;
  undefined1 local_res10 [24];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBasePerlinNoiseOperator<float,Metasound::FPerlinControlRate>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBasePerlinNoiseOperator<float,Metasound::FPerlinControlRate>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBasePerlinNoiseOperator<float,Metasound::FPerlinControlRate>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TBasePerlinNoiseOperator<float,Metasound::FPerlinControlRate>::GetNodeInfo'::__l2
      ::<lambda_1>::operator()
                (local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBasePerlinNoiseOperator<float,Metasound::FPerlinControlRate>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::TBasePerlinNoiseOperator<float,Metasound::FPerlinControlRate>::GetNodeInfo'
             ::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBasePerlinNoiseOperator<float,Metasound::FPerlinControlRate>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBasePerlinNoiseOperator<float,Metasound::FPerlinControlRate>::GetNodeInfo(void)'
              ::__l2::Info);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(&local_e8);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// UnregisterNode<Metasound::TNodeFacade<Metasound::FPlateReverbOperator>_> @ 14b1c94a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::UnregisterNode<Metasound::TNodeFacade<Metasound::FPlateReverbOperator>_>
          (FModuleInfo *param_1)

{
  bool bVar1;
  undefined1 local_res10 [24];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FPlateReverbOperator::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FPlateReverbOperator::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FPlateReverbOperator::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::FPlateReverbOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FPlateReverbOperator::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::FPlateReverbOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FPlateReverbOperator::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FPlateReverbOperator::GetNodeInfo(void)'
              ::__l2::Metadata);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(&local_e8);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// UnregisterNode<Metasound::TNodeFacade<Metasound::FRingModOperator>_> @ 14b1c9550

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::UnregisterNode<Metasound::TNodeFacade<Metasound::FRingModOperator>_>
          (FModuleInfo *param_1)

{
  bool bVar1;
  undefined1 local_res10 [24];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FRingModOperator::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FRingModOperator::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FRingModOperator::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::FRingModOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FRingModOperator::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::FRingModOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FRingModOperator::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FRingModOperator::GetNodeInfo(void)'
              ::__l2::Metadata);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(&local_e8);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// UnregisterNode<Metasound::TNodeFacade<Metasound::FSampleAndHoldOperator>_> @ 14b1c9600

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::UnregisterNode<Metasound::TNodeFacade<Metasound::FSampleAndHoldOperator>_>
          (FModuleInfo *param_1)

{
  bool bVar1;
  undefined1 local_res10 [24];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSampleAndHoldOperator::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSampleAndHoldOperator::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSampleAndHoldOperator::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::FSampleAndHoldOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSampleAndHoldOperator::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::FSampleAndHoldOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSampleAndHoldOperator::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSampleAndHoldOperator::GetNodeInfo(void)'
              ::__l2::Metadata);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(&local_e8);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// UnregisterNode<Metasound::TNodeFacade<Metasound::FSemitoneToFrequencyMultiplierOperator>_> @ 14b1c96b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
UnregisterNode<Metasound::TNodeFacade<Metasound::FSemitoneToFrequencyMultiplierOperator>_>
          (FModuleInfo *param_1)

{
  bool bVar1;
  undefined1 local_res10 [24];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      `Metasound::FSemitoneToFrequencyMultiplierOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res10,&::Info);
      atexit(`Metasound::FSemitoneToFrequencyMultiplierOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata(&local_e8,&::Info);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(&local_e8);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// UnregisterNode<Metasound::TNodeFacade<Metasound::FStereoDelayOperator>_> @ 14b1c9760

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::UnregisterNode<Metasound::TNodeFacade<Metasound::FStereoDelayOperator>_>
          (FModuleInfo *param_1)

{
  bool bVar1;
  undefined1 local_res10 [24];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      `Metasound::FStereoDelayOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res10,&::Info);
      atexit(`Metasound::FStereoDelayOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata(&local_e8,&::Info);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(&local_e8);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// UnregisterNode<Metasound::TNodeFacade<Metasound::FStereoPannerOperator>_> @ 14b1c9810

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::UnregisterNode<Metasound::TNodeFacade<Metasound::FStereoPannerOperator>_>
          (FModuleInfo *param_1)

{
  bool bVar1;
  undefined1 local_res10 [24];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      `Metasound::FStereoPannerOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res10,&::Info);
      atexit(`Metasound::FStereoPannerOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata(&local_e8,&::Info);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(&local_e8);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// UnregisterNode<Metasound::TNodeFacade<Metasound::FSubharmonizerOperator>_> @ 14b1c98c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::UnregisterNode<Metasound::TNodeFacade<Metasound::FSubharmonizerOperator>_>
          (FModuleInfo *param_1)

{
  bool bVar1;
  undefined1 local_res10 [24];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      `Metasound::FSubharmonizerOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res10,&::Info);
      atexit(`Metasound::FSubharmonizerOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata(&local_e8,&::Info);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(&local_e8);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// UnregisterNode<Metasound::TNodeFacade<Metasound::FSuperOscillatorOperatorMono>_> @ 14b1c9970

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
UnregisterNode<Metasound::TNodeFacade<Metasound::FSuperOscillatorOperatorMono>_>
          (FModuleInfo *param_1)

{
  bool bVar1;
  undefined1 local_res10 [24];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSuperOscillatorOperatorMono::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSuperOscillatorOperatorMono::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSuperOscillatorOperatorMono::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::FSuperOscillatorOperatorMono::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSuperOscillatorOperatorMono::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::FSuperOscillatorOperatorMono::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSuperOscillatorOperatorMono::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSuperOscillatorOperatorMono::GetNodeInfo(void)'
              ::__l2::Info);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(&local_e8);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// UnregisterNode<Metasound::TNodeFacade<Metasound::FSuperOscillatorOperatorStereo>_> @ 14b1c9a20

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
UnregisterNode<Metasound::TNodeFacade<Metasound::FSuperOscillatorOperatorStereo>_>
          (FModuleInfo *param_1)

{
  bool bVar1;
  undefined1 local_res10 [24];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSuperOscillatorOperatorStereo::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSuperOscillatorOperatorStereo::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSuperOscillatorOperatorStereo::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::FSuperOscillatorOperatorStereo::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSuperOscillatorOperatorStereo::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::FSuperOscillatorOperatorStereo::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSuperOscillatorOperatorStereo::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSuperOscillatorOperatorStereo::GetNodeInfo(void)'
              ::__l2::Info);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(&local_e8);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// UnregisterNode<Metasound::TNodeFacade<Metasound::FSwitchAndRampOperator>_> @ 14b1c9ad0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::UnregisterNode<Metasound::TNodeFacade<Metasound::FSwitchAndRampOperator>_>
          (FModuleInfo *param_1)

{
  bool bVar1;
  undefined1 local_res10 [24];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSwitchAndRampOperator::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSwitchAndRampOperator::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSwitchAndRampOperator::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::FSwitchAndRampOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSwitchAndRampOperator::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::FSwitchAndRampOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSwitchAndRampOperator::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSwitchAndRampOperator::GetNodeInfo(void)'
              ::__l2::Info);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(&local_e8);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// Visit<`Metasound::FSuperOscillatorOperator::Execute'::__l8::<lambda_1>_const_&,TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_&> @ 14b1c9b80

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00015232cb99) */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

float __cdecl
Visit<_Metasound::FSuperOscillatorOperator::Execute_::__l8::<lambda_1>_const_&,TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_&>
          (<lambda_1> *param_1,
          TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
          *param_2)

{
  char *pcVar1;
  FVoiceGeneratorArgs *pFVar2;
  FNodeData *this;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  byte bVar6;
  uint uVar7;
  FOutputVertexInterface *pFVar8;
  FOutputDataVertex *pFVar9;
  FOutputNode *pFVar10;
  TInputNode<Metasound::TEnum<Metasound::EPanningLaw,0>,0> *pTVar11;
  TInputNode<Metasound::TEnum<Metasound::EPanningLaw,0>,1> *pTVar12;
  FInputVertexInterface *pFVar13;
  FInputDataVertex *pFVar14;
  FOutputNode *pFVar15;
  TLiteralNode<Metasound::TEnum<Metasound::EPanningLaw,0>_> *pTVar16;
  void *pvVar17;
  TVariableNode<Metasound::TEnum<Metasound::EPanningLaw,0>_> *pTVar18;
  FNodeData *pFVar19;
  FNodeFacade *pFVar20;
  FNodeClassMetadata *pFVar21;
  TDataValueReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *pTVar22;
  TDataWriteReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *pTVar23;
  TDataReadReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *pTVar24;
  undefined8 *puVar25;
  FName *pFVar26;
  char cVar28;
  undefined2 uVar29;
  char cVar30;
  undefined1 *unaff_RBX;
  undefined4 *unaff_RSI;
  FNodeData *in_R9;
  longlong in_R10;
  longlong unaff_R15;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float extraout_XMM0_Da_05;
  float extraout_XMM0_Da_06;
  float extraout_XMM0_Da_07;
  float extraout_XMM0_Da_08;
  float extraout_XMM0_Da_09;
  float extraout_XMM0_Da_10;
  float extraout_XMM0_Da_11;
  float extraout_XMM0_Da_12;
  float extraout_XMM0_Da_13;
  float extraout_XMM0_Da_14;
  float extraout_XMM0_Da_15;
  float extraout_XMM0_Da_16;
  float extraout_XMM0_Da_17;
  float extraout_XMM0_Da_18;
  float extraout_XMM0_Da_19;
  float extraout_XMM0_Da_20;
  float extraout_XMM0_Da_21;
  float extraout_XMM0_Da_22;
  float extraout_XMM0_Da_23;
  float extraout_XMM0_Da_24;
  float extraout_XMM0_Da_25;
  float extraout_XMM0_Da_26;
  float extraout_XMM0_Da_27;
  float extraout_XMM0_Da_28;
  float extraout_XMM0_Da_29;
  float extraout_XMM0_Da_30;
  float extraout_XMM0_Da_31;
  float extraout_XMM0_Da_32;
  float fVar31;
  float extraout_XMM0_Da_33;
  float extraout_XMM0_Da_34;
  float extraout_XMM0_Da_35;
  float extraout_XMM0_Da_36;
  float extraout_XMM0_Da_37;
  float in_XMM0_Da;
  FOperatorSettings *in_stack_00000028;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> TStackY_d8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> TStackY_c8;
  undefined1 auStack_b0 [8];
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> TStack_a8;
  char cStack_98;
  longlong *plStack_90;
  undefined **ppuStack_88;
  char cStack_80;
  longlong *plStack_78;
  ForAnyElementType FStack_70;
  TReferenceControllerBase<1> *pTStack_60;
  float fStack_48;
  float fStack_44;
  FSharedReferencer<1> FStack_40;
  TReferenceControllerBase<1> *in_stack_ffffffffffffffe0;
  FNodeClassMetadata *in_stack_ffffffffffffffe8;
  FSharedReferencer<1> FVar32;
  FSharedReferencer<1> in_stack_fffffffffffffff0;
  byte *pbVar27;
  
  bVar6 = param_2->TypeIndex;
  pbVar27 = (byte *)(ulonglong)bVar6;
  this = (FNodeData *)switchD_14b1c9b8f::switchdataD_15238a780[(longlong)pbVar27];
  uVar29 = SUB82(param_2,0);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar6) {
  case 0:
    pFVar2 = param_1->Args;
    fStack_48 = pFVar2->SampleRate;
    FStack_70.Data = (FScriptContainerElement *)0x14b1ae83a;
    fStack_44 = powf(pFVar2->DetuneMultiplier,
                     (pFVar2->Entropy * *(float *)&param_2->field_0x8 + __real_3f800000) *
                     *(float *)param_2);
    fStack_44 = fStack_44 * pFVar2->FrequencyHz;
    FStack_40.ReferenceController = *(TReferenceControllerBase<1> **)&pFVar2->GlideEaseFactor;
    FStack_70.Data = (FScriptContainerElement *)0x14b1ae880;
    Metasound::Generators::
    TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>
    ::operator()((TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>
                  *)&param_2->field_0xc,(FGeneratorArgs *)&fStack_48);
    return *(float *)&param_2->field_0x4;
  case 1:
    pFVar2 = param_1->Args;
    fStack_48 = pFVar2->SampleRate;
    FStack_70.Data = (FScriptContainerElement *)0x14b1af5ca;
    fStack_44 = powf(pFVar2->DetuneMultiplier,
                     (pFVar2->Entropy * *(float *)&param_2->field_0x8 + __real_3f800000) *
                     *(float *)param_2);
    fStack_44 = fStack_44 * pFVar2->FrequencyHz;
    FStack_40.ReferenceController = *(TReferenceControllerBase<1> **)&pFVar2->GlideEaseFactor;
    FStack_70.Data = (FScriptContainerElement *)0x14b1af610;
    Metasound::Generators::
    TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>
    ::operator()((TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>
                  *)&param_2->field_0xc,(FGeneratorArgs *)&fStack_48);
    return *(float *)&param_2->field_0x4;
  case 2:
    pFVar2 = param_1->Args;
    fStack_48 = pFVar2->SampleRate;
    FStack_70.Data = (FScriptContainerElement *)0x14b1af6aa;
    fStack_44 = powf(pFVar2->DetuneMultiplier,
                     (pFVar2->Entropy * *(float *)&param_2->field_0x8 + __real_3f800000) *
                     *(float *)param_2);
    fStack_44 = fStack_44 * pFVar2->FrequencyHz;
    FStack_40.ReferenceController = *(TReferenceControllerBase<1> **)&pFVar2->GlideEaseFactor;
    FStack_70.Data = (FScriptContainerElement *)0x14b1af6f0;
    Metasound::Generators::
    TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>::
    operator()((TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>
                *)&param_2->field_0xc,(FGeneratorArgs *)&fStack_48);
    return *(float *)&param_2->field_0x4;
  case 3:
    pFVar2 = param_1->Args;
    fStack_48 = pFVar2->SampleRate;
    FStack_70.Data = (FScriptContainerElement *)0x14b1af75a;
    fStack_44 = powf(pFVar2->DetuneMultiplier,
                     (pFVar2->Entropy * *(float *)&param_2->field_0x8 + __real_3f800000) *
                     *(float *)param_2);
    fStack_44 = fStack_44 * pFVar2->FrequencyHz;
    FStack_40.ReferenceController = *(TReferenceControllerBase<1> **)&pFVar2->GlideEaseFactor;
    FStack_70.Data = (FScriptContainerElement *)0x14b1af7a0;
    Metasound::Generators::
    TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>::
    operator()((TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>
                *)&param_2->field_0xc,(FGeneratorArgs *)&fStack_48);
    return *(float *)&param_2->field_0x4;
  case 4:
    pFVar2 = param_1->Args;
    fStack_48 = pFVar2->SampleRate;
    FStack_70.Data = (FScriptContainerElement *)0x14b1af83a;
    fStack_44 = powf(pFVar2->DetuneMultiplier,
                     (pFVar2->Entropy * *(float *)&param_2->field_0x8 + __real_3f800000) *
                     *(float *)param_2);
    fStack_44 = fStack_44 * pFVar2->FrequencyHz;
    FStack_40.ReferenceController = *(TReferenceControllerBase<1> **)&pFVar2->GlideEaseFactor;
    FStack_70.Data = (FScriptContainerElement *)0x14b1af880;
    Metasound::Generators::
    TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>
    ::operator()((TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>
                  *)&param_2->field_0xc,(FGeneratorArgs *)&fStack_48);
    return *(float *)&param_2->field_0x4;
  case 5:
    pFVar2 = param_1->Args;
    fStack_48 = pFVar2->SampleRate;
    FStack_70.Data = (FScriptContainerElement *)0x14b1af8da;
    fStack_44 = powf(pFVar2->DetuneMultiplier,
                     (pFVar2->Entropy * *(float *)&param_2->field_0x8 + __real_3f800000) *
                     *(float *)param_2);
    fStack_44 = fStack_44 * pFVar2->FrequencyHz;
    FStack_40.ReferenceController = *(TReferenceControllerBase<1> **)&pFVar2->GlideEaseFactor;
    FStack_70.Data = (FScriptContainerElement *)0x14b1af920;
    Metasound::Generators::
    TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>
    ::operator()((TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>
                  *)&param_2->field_0xc,(FGeneratorArgs *)&fStack_48);
    return *(float *)&param_2->field_0x4;
  case 6:
    pFVar2 = param_1->Args;
    fStack_48 = pFVar2->SampleRate;
    FStack_70.Data = (FScriptContainerElement *)0x14b1afb1a;
    fStack_44 = powf(pFVar2->DetuneMultiplier,
                     (pFVar2->Entropy * *(float *)&param_2->field_0x8 + __real_3f800000) *
                     *(float *)param_2);
    fStack_44 = fStack_44 * pFVar2->FrequencyHz;
    FStack_40.ReferenceController = *(TReferenceControllerBase<1> **)&pFVar2->GlideEaseFactor;
    FStack_70.Data = (FScriptContainerElement *)0x14b1afb60;
    Metasound::Generators::
    TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>
    ::operator()((TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>
                  *)&param_2->field_0xc,(FGeneratorArgs *)&fStack_48);
    return *(float *)&param_2->field_0x4;
  case 7:
    pFVar2 = param_1->Args;
    fStack_48 = pFVar2->SampleRate;
    FStack_70.Data = (FScriptContainerElement *)0x14b1afd5a;
    fStack_44 = powf(pFVar2->DetuneMultiplier,
                     (pFVar2->Entropy * *(float *)&param_2->field_0x8 + __real_3f800000) *
                     *(float *)param_2);
    fStack_44 = fStack_44 * pFVar2->FrequencyHz;
    FStack_40.ReferenceController = *(TReferenceControllerBase<1> **)&pFVar2->GlideEaseFactor;
    FStack_70.Data = (FScriptContainerElement *)0x14b1afda0;
    Metasound::Generators::
    TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>
    ::operator()((TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>
                  *)&param_2->field_0xc,(FGeneratorArgs *)&fStack_48);
    return *(float *)&param_2->field_0x4;
  case 8:
    Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
    ~FDataTypeRegistryEntryBase((FDataTypeRegistryEntryBase *)param_1);
    fVar31 = extraout_XMM0_Da_34;
    if (((ulonglong)param_2 & 1) != 0) {
      operator_delete(param_1,0x640);
      fVar31 = extraout_XMM0_Da_35;
    }
    return fVar31;
  case 9:
    return in_XMM0_Da;
  case 10:
    *(FVoiceGeneratorArgs **)param_2 = param_1[0xbc].Args;
    pFVar2 = param_1[0xbd].Args;
    *(FVoiceGeneratorArgs **)&param_2->field_0x8 = pFVar2;
    if (pFVar2 != (FVoiceGeneratorArgs *)0x0) {
      LOCK();
      pFVar2->DetuneMultiplier = (float)((int)pFVar2->DetuneMultiplier + 1);
      UNLOCK();
    }
    return in_XMM0_Da;
  case 0xb:
    *(FVoiceGeneratorArgs **)param_2 = param_1[0xbe].Args;
    pFVar2 = param_1[0xbf].Args;
    *(FVoiceGeneratorArgs **)&param_2->field_0x8 = pFVar2;
    if (pFVar2 != (FVoiceGeneratorArgs *)0x0) {
      LOCK();
      pFVar2->DetuneMultiplier = (float)((int)pFVar2->DetuneMultiplier + 1);
      UNLOCK();
    }
    return in_XMM0_Da;
  case 0xc:
    return in_XMM0_Da;
  case 0xd:
    *(FVoiceGeneratorArgs **)param_2 = param_1[0x1c].Args;
    pFVar2 = param_1[0x1d].Args;
    *(FVoiceGeneratorArgs **)&param_2->field_0x8 = pFVar2;
    if (pFVar2 != (FVoiceGeneratorArgs *)0x0) {
      LOCK();
      pFVar2->DetuneMultiplier = (float)((int)pFVar2->DetuneMultiplier + 1);
      UNLOCK();
    }
    return in_XMM0_Da;
  case 0xe:
    return in_XMM0_Da;
  case 0xf:
    *(FVoiceGeneratorArgs **)param_2 = param_1[0x30].Args;
    pFVar2 = param_1[0x31].Args;
    *(FVoiceGeneratorArgs **)&param_2->field_0x8 = pFVar2;
    if (pFVar2 != (FVoiceGeneratorArgs *)0x0) {
      LOCK();
      pFVar2->DetuneMultiplier = (float)((int)pFVar2->DetuneMultiplier + 1);
      UNLOCK();
    }
    return in_XMM0_Da;
  case 0x10:
    return in_XMM0_Da;
  case 0x11:
    return in_XMM0_Da;
  case 0x12:
    *(FVoiceGeneratorArgs **)param_2 = param_1[0x44].Args;
    pFVar2 = param_1[0x45].Args;
    *(FVoiceGeneratorArgs **)&param_2->field_0x8 = pFVar2;
    if (pFVar2 != (FVoiceGeneratorArgs *)0x0) {
      LOCK();
      pFVar2->DetuneMultiplier = (float)((int)pFVar2->DetuneMultiplier + 1);
      UNLOCK();
    }
    return in_XMM0_Da;
  case 0x13:
    return in_XMM0_Da;
  case 0x14:
    *(FVoiceGeneratorArgs **)param_2 = param_1[0x58].Args;
    pFVar2 = param_1[0x59].Args;
    *(FVoiceGeneratorArgs **)&param_2->field_0x8 = pFVar2;
    if (pFVar2 != (FVoiceGeneratorArgs *)0x0) {
      LOCK();
      pFVar2->DetuneMultiplier = (float)((int)pFVar2->DetuneMultiplier + 1);
      UNLOCK();
    }
    return in_XMM0_Da;
  case 0x15:
    return in_XMM0_Da;
  case 0x16:
    *(FVoiceGeneratorArgs **)param_2 = param_1[0x7e].Args;
    pFVar2 = param_1[0x7f].Args;
    *(FVoiceGeneratorArgs **)&param_2->field_0x8 = pFVar2;
    if (pFVar2 != (FVoiceGeneratorArgs *)0x0) {
      LOCK();
      pFVar2->DetuneMultiplier = (float)((int)pFVar2->DetuneMultiplier + 1);
      UNLOCK();
    }
    return in_XMM0_Da;
  case 0x17:
    return in_XMM0_Da;
  case 0x18:
    *(FVoiceGeneratorArgs **)param_2 = param_1[0x92].Args;
    pFVar2 = param_1[0x93].Args;
    *(FVoiceGeneratorArgs **)&param_2->field_0x8 = pFVar2;
    if (pFVar2 != (FVoiceGeneratorArgs *)0x0) {
      LOCK();
      pFVar2->DetuneMultiplier = (float)((int)pFVar2->DetuneMultiplier + 1);
      UNLOCK();
    }
    return in_XMM0_Da;
  case 0x19:
    return in_XMM0_Da;
  case 0x1a:
    *(FVoiceGeneratorArgs **)param_2 = param_1[0xa6].Args;
    pFVar2 = param_1[0xa7].Args;
    *(FVoiceGeneratorArgs **)&param_2->field_0x8 = pFVar2;
    if (pFVar2 != (FVoiceGeneratorArgs *)0x0) {
      LOCK();
      pFVar2->DetuneMultiplier = (float)((int)pFVar2->DetuneMultiplier + 1);
      UNLOCK();
    }
    return in_XMM0_Da;
  case 0x1b:
    return in_XMM0_Da;
  case 0x1c:
    *(FVoiceGeneratorArgs **)param_2 = param_1[0xba].Args;
    pFVar2 = param_1[0xbb].Args;
    *(FVoiceGeneratorArgs **)&param_2->field_0x8 = pFVar2;
    if (pFVar2 != (FVoiceGeneratorArgs *)0x0) {
      LOCK();
      pFVar2->DetuneMultiplier = (float)((int)pFVar2->DetuneMultiplier + 1);
      UNLOCK();
    }
    return in_XMM0_Da;
  case 0x1d:
    if (param_1[0x1c].Args != (FVoiceGeneratorArgs *)0x0) {
      pFVar13 = Metasound::FVertexInterface::GetInputInterface(&this->Interface);
      if ((int)pFVar13->_padding_ == 1) {
        pFVar14 = Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::At
                            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)pFVar13,0);
        if ((param_1[0x1c].Args == (FVoiceGeneratorArgs *)0x0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x408,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          fVar31 = (float)(*pcVar3)();
          return fVar31;
        }
        pFVar21 = (FNodeClassMetadata *)param_1[0x1c].Args;
        pFVar2 = param_1[0x1d].Args;
        if (pFVar2 != (FVoiceGeneratorArgs *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar2->DetuneMultiplier =
               (atomic<int>)((int)*(atomic<int> *)&pFVar2->DetuneMultiplier + 1);
          UNLOCK();
        }
        if ((pFVar21 == (FNodeClassMetadata *)0x0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x25d,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          fVar31 = (float)(*pcVar3)();
          return fVar31;
        }
        pvVar17 = operator_new(0xa0);
        pTVar11 = (TInputNode<Metasound::TEnum<Metasound::EPanningLaw,0>,0> *)0x0;
        if (pvVar17 != (void *)0x0) {
          if (pFVar2 != (FVoiceGeneratorArgs *)0x0) {
            LOCK();
            *(atomic<int> *)&pFVar2->DetuneMultiplier =
                 (atomic<int>)((int)*(atomic<int> *)&pFVar2->DetuneMultiplier + 1);
            UNLOCK();
          }
          TStack_a8.Object = pFVar21;
          TStack_a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar2
          ;
          pFVar19 = Metasound::FNodeData::FNodeData((FNodeData *)&cStack_98,this);
          pTVar11 = Metasound::TInputNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,0>::
                    TInputNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,0>
                              (pvVar17,(FName *)&pFVar14->_padding_,pFVar19,&TStack_a8);
        }
        *(TInputNode<Metasound::TEnum<Metasound::EPanningLaw,0>,0> **)param_2 = pTVar11;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar2);
        Metasound::FNodeData::~FNodeData(this);
        return extraout_XMM0_Da_06;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8072795382528082479>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundDataTypeRegistrationMacro.h"
                         ,0x22f,"Inputs.Num() == 1");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        fVar31 = (float)(*pcVar3)();
        return fVar31;
      }
    }
    *(undefined8 *)param_2 = 0;
    Metasound::FNodeData::~FNodeData(this);
    return extraout_XMM0_Da_05;
  case 0x1e:
    pvVar17 = operator_new(0xa0);
    if (pvVar17 != (void *)0x0) {
      pTVar11 = Metasound::TInputNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,0>::
                TInputNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,0>
                          (pvVar17,(FInputNodeConstructorParams *)this);
      *(TInputNode<Metasound::TEnum<Metasound::EPanningLaw,0>,0> **)param_2 = pTVar11;
      return extraout_XMM0_Da_04;
    }
    *(undefined8 *)param_2 = 0;
    return extraout_XMM0_Da_03;
  case 0x1f:
    if (param_1[0x30].Args != (FVoiceGeneratorArgs *)0x0) {
      pFVar13 = Metasound::FVertexInterface::GetInputInterface(&this->Interface);
      if ((int)pFVar13->_padding_ == 1) {
        pFVar14 = Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::At
                            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)pFVar13,0);
        if ((param_1[0x30].Args == (FVoiceGeneratorArgs *)0x0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x408,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          fVar31 = (float)(*pcVar3)();
          return fVar31;
        }
        pFVar21 = (FNodeClassMetadata *)param_1[0x30].Args;
        pFVar2 = param_1[0x31].Args;
        if (pFVar2 != (FVoiceGeneratorArgs *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar2->DetuneMultiplier =
               (atomic<int>)((int)*(atomic<int> *)&pFVar2->DetuneMultiplier + 1);
          UNLOCK();
        }
        if ((pFVar21 == (FNodeClassMetadata *)0x0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x25d,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          fVar31 = (float)(*pcVar3)();
          return fVar31;
        }
        pvVar17 = operator_new(0xa0);
        pTVar12 = (TInputNode<Metasound::TEnum<Metasound::EPanningLaw,0>,1> *)0x0;
        if (pvVar17 != (void *)0x0) {
          if (pFVar2 != (FVoiceGeneratorArgs *)0x0) {
            LOCK();
            *(atomic<int> *)&pFVar2->DetuneMultiplier =
                 (atomic<int>)((int)*(atomic<int> *)&pFVar2->DetuneMultiplier + 1);
            UNLOCK();
          }
          TStack_a8.Object = pFVar21;
          TStack_a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar2
          ;
          pFVar19 = Metasound::FNodeData::FNodeData((FNodeData *)&cStack_98,this);
          pTVar12 = Metasound::TInputNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,1>::
                    TInputNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,1>
                              (pvVar17,(FName *)&pFVar14->_padding_,pFVar19,&TStack_a8);
        }
        *(TInputNode<Metasound::TEnum<Metasound::EPanningLaw,0>,1> **)param_2 = pTVar12;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar2);
        Metasound::FNodeData::~FNodeData(this);
        return extraout_XMM0_Da_10;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8072795382528082509>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundDataTypeRegistrationMacro.h"
                         ,0x24d,"Inputs.Num() == 1");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        fVar31 = (float)(*pcVar3)();
        return fVar31;
      }
    }
    *(undefined8 *)param_2 = 0;
    Metasound::FNodeData::~FNodeData(this);
    return extraout_XMM0_Da_09;
  case 0x20:
    pvVar17 = operator_new(0xa0);
    if (pvVar17 != (void *)0x0) {
      pTVar12 = Metasound::TInputNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,1>::
                TInputNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,1>
                          (pvVar17,(FInputNodeConstructorParams *)this);
      *(TInputNode<Metasound::TEnum<Metasound::EPanningLaw,0>,1> **)param_2 = pTVar12;
      return extraout_XMM0_Da_08;
    }
    *(undefined8 *)param_2 = 0;
    return extraout_XMM0_Da_07;
  case 0x21:
    if (param_1[0x44].Args != (FVoiceGeneratorArgs *)0x0) {
      pFVar8 = Metasound::FVertexInterface::GetOutputInterface(&this->Interface);
      if ((int)pFVar8->_padding_ == 1) {
        pFVar9 = Metasound::TVertexInterfaceImpl<Metasound::FOutputDataVertex>::At
                           ((TVertexInterfaceImpl<Metasound::FOutputDataVertex> *)pFVar8,0);
        if ((param_1[0x44].Args == (FVoiceGeneratorArgs *)0x0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x408,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          fVar31 = (float)(*pcVar3)();
          return fVar31;
        }
        pFVar21 = (FNodeClassMetadata *)param_1[0x44].Args;
        pFVar2 = param_1[0x45].Args;
        if (pFVar2 != (FVoiceGeneratorArgs *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar2->DetuneMultiplier =
               (atomic<int>)((int)*(atomic<int> *)&pFVar2->DetuneMultiplier + 1);
          UNLOCK();
        }
        if ((pFVar21 == (FNodeClassMetadata *)0x0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x25d,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          fVar31 = (float)(*pcVar3)();
          return fVar31;
        }
        pFVar10 = operator_new(0xa0);
        pFVar15 = (FOutputNode *)0x0;
        if (pFVar10 != (FOutputNode *)0x0) {
          if (pFVar2 != (FVoiceGeneratorArgs *)0x0) {
            LOCK();
            *(atomic<int> *)&pFVar2->DetuneMultiplier =
                 (atomic<int>)((int)*(atomic<int> *)&pFVar2->DetuneMultiplier + 1);
            UNLOCK();
          }
          TStack_a8.Object = pFVar21;
          TStack_a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar2
          ;
          pFVar19 = Metasound::FNodeData::FNodeData((FNodeData *)&cStack_98,this);
          pFVar15 = Metasound::FOutputNode::FOutputNode
                              (pFVar10,(FName *)&pFVar9->field_0x8,pFVar19,&TStack_a8);
        }
        *(FOutputNode **)param_2 = pFVar15;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar2);
        Metasound::FNodeData::~FNodeData(this);
        return extraout_XMM0_Da_00;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7641293860978556795>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundDataTypeRegistrationMacro.cpp"
                         ,0x85,"Outputs.Num() == 1");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        fVar31 = (float)(*pcVar3)();
        return fVar31;
      }
    }
    *(undefined8 *)param_2 = 0;
    Metasound::FNodeData::~FNodeData(this);
    return extraout_XMM0_Da;
  case 0x22:
    FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x14b1ae8bf;
    pFVar15 = operator_new(0xa0);
    if (pFVar15 != (FOutputNode *)0x0) {
      FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x14b1ae8cc;
      pFVar26 = Metasound::
                GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>();
      FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x14b1ae8ec;
      Metasound::FOutputNode::FOutputNode
                (pFVar15,(FName *)&this->Interface,&this->ID,(FName *)this,pFVar26,Reference);
      *(FOutputNode **)param_2 = pFVar15;
      pFVar15->_padding_ =
           (longlong)
           &___7__TOutputNode_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___0A__Metasound__6B_;
      return extraout_XMM0_Da_12;
    }
    *(undefined8 *)param_2 = 0;
    return extraout_XMM0_Da_11;
  case 0x23:
    if (param_1[0x58].Args != (FVoiceGeneratorArgs *)0x0) {
      pFVar8 = Metasound::FVertexInterface::GetOutputInterface(&this->Interface);
      if ((int)pFVar8->_padding_ == 1) {
        pFVar9 = Metasound::TVertexInterfaceImpl<Metasound::FOutputDataVertex>::At
                           ((TVertexInterfaceImpl<Metasound::FOutputDataVertex> *)pFVar8,0);
        if ((param_1[0x58].Args == (FVoiceGeneratorArgs *)0x0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x408,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          fVar31 = (float)(*pcVar3)();
          return fVar31;
        }
        pFVar21 = (FNodeClassMetadata *)param_1[0x58].Args;
        pFVar2 = param_1[0x59].Args;
        if (pFVar2 != (FVoiceGeneratorArgs *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar2->DetuneMultiplier =
               (atomic<int>)((int)*(atomic<int> *)&pFVar2->DetuneMultiplier + 1);
          UNLOCK();
        }
        if ((pFVar21 == (FNodeClassMetadata *)0x0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x25d,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          fVar31 = (float)(*pcVar3)();
          return fVar31;
        }
        pFVar10 = operator_new(0xa0);
        pFVar15 = (FOutputNode *)0x0;
        if (pFVar10 != (FOutputNode *)0x0) {
          if (pFVar2 != (FVoiceGeneratorArgs *)0x0) {
            LOCK();
            *(atomic<int> *)&pFVar2->DetuneMultiplier =
                 (atomic<int>)((int)*(atomic<int> *)&pFVar2->DetuneMultiplier + 1);
            UNLOCK();
          }
          TStack_a8.Object = pFVar21;
          TStack_a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar2
          ;
          pFVar19 = Metasound::FNodeData::FNodeData((FNodeData *)&cStack_98,this);
          pFVar15 = Metasound::FOutputNode::FOutputNode
                              (pFVar10,(FName *)&pFVar9->field_0x8,pFVar19,&TStack_a8);
        }
        *(FOutputNode **)param_2 = pFVar15;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar2);
        Metasound::FNodeData::~FNodeData(this);
        return extraout_XMM0_Da_02;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7641293860978556780>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundDataTypeRegistrationMacro.cpp"
                         ,0x94,"Outputs.Num() == 1");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        fVar31 = (float)(*pcVar3)();
        return fVar31;
      }
    }
    *(undefined8 *)param_2 = 0;
    Metasound::FNodeData::~FNodeData(this);
    return extraout_XMM0_Da_01;
  case 0x24:
    FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x14b1ae94f;
    pFVar15 = operator_new(0xa0);
    if (pFVar15 != (FOutputNode *)0x0) {
      FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x14b1ae95c;
      pFVar26 = Metasound::
                GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>();
      FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x14b1ae97c;
      Metasound::FOutputNode::FOutputNode
                (pFVar15,(FName *)&this->Interface,&this->ID,(FName *)this,pFVar26,Value);
      *(FOutputNode **)param_2 = pFVar15;
      pFVar15->_padding_ =
           (longlong)
           &___7__TOutputNode_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___00_Metasound__6B_;
      return extraout_XMM0_Da_14;
    }
    *(undefined8 *)param_2 = 0;
    return extraout_XMM0_Da_13;
  case 0x25:
    pvVar17 = operator_new(0x170);
    if (pvVar17 != (void *)0x0) {
      pTVar16 = Metasound::TLiteralNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
                TLiteralNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>
                          (pvVar17,(FName *)this,&this->ID,(FLiteral *)&this->Interface);
      *(TLiteralNode<Metasound::TEnum<Metasound::EPanningLaw,0>_> **)param_2 = pTVar16;
      return extraout_XMM0_Da_16;
    }
    *(undefined8 *)param_2 = 0;
    return extraout_XMM0_Da_15;
  case 0x26:
    FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x14b1aea3f;
    pFVar20 = operator_new(0xa0);
    if (pFVar20 != (FNodeFacade *)0x0) {
      FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x14b1aea4c;
      pFVar21 = Metasound::ReceiveNodePrivate::
                TReceiverOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::GetNodeInfo();
      FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x14b1aea6a;
      Metasound::FNodeFacade::FNodeFacade
                (pFVar20,(FName *)this,&this->ID,pFVar21,
                 Metasound::ReceiveNodePrivate::
                 TReceiverOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::CreateOperator
                );
      *(FNodeFacade **)param_2 = pFVar20;
      pFVar20->_padding_ =
           (longlong)
           &___7__TReceiveNode_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_;
      return extraout_XMM0_Da_18;
    }
    *(undefined8 *)param_2 = 0;
    return extraout_XMM0_Da_17;
  case 0x27:
    return in_XMM0_Da;
  case 0x28:
    return in_XMM0_Da;
  case 0x29:
    pFVar21 = (FNodeClassMetadata *)param_1[0x7e].Args;
    if (pFVar21 != (FNodeClassMetadata *)0x0) {
      pFVar2 = param_1[0x7f].Args;
      if (pFVar2 != (FVoiceGeneratorArgs *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar2->DetuneMultiplier =
             (atomic<int>)((int)*(atomic<int> *)&pFVar2->DetuneMultiplier + 1);
        UNLOCK();
      }
      pvVar17 = operator_new(0xa0);
      pTVar18 = (TVariableNode<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)0x0;
      if (pvVar17 != (void *)0x0) {
        if (pFVar2 != (FVoiceGeneratorArgs *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar2->DetuneMultiplier =
               (atomic<int>)((int)*(atomic<int> *)&pFVar2->DetuneMultiplier + 1);
          UNLOCK();
        }
        TStackY_d8.Object = pFVar21;
        TStackY_d8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar2;
        pFVar19 = Metasound::FNodeData::FNodeData((FNodeData *)auStack_b0,in_R9);
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
        ::
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                    *)&TStackY_c8,
                   (TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                    *)this);
        pTVar18 = Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
                  TVariableNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>
                            (pvVar17,(FLiteral *)&TStackY_c8,pFVar19,&TStackY_d8);
      }
      *(TVariableNode<Metasound::TEnum<Metasound::EPanningLaw,0>_> **)param_2 = pTVar18;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar2);
      Metasound::FLiteral::~FLiteral((FLiteral *)this);
      Metasound::FNodeData::~FNodeData(in_R9);
      return extraout_XMM0_Da_21;
    }
    *(undefined8 *)param_2 = 0;
    Metasound::FLiteral::~FLiteral((FLiteral *)this);
    Metasound::FNodeData::~FNodeData(in_R9);
    return extraout_XMM0_Da_22;
  case 0x2a:
    pvVar17 = operator_new(0xa0);
    if (pvVar17 != (void *)0x0) {
      pTVar18 = Metasound::TVariableNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
                TVariableNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>
                          (pvVar17,(FName *)this,&this->ID,(FLiteral *)&this->Interface);
      *(TVariableNode<Metasound::TEnum<Metasound::EPanningLaw,0>_> **)param_2 = pTVar18;
      return extraout_XMM0_Da_20;
    }
    *(undefined8 *)param_2 = 0;
    return extraout_XMM0_Da_19;
  case 0x2b:
    pFVar2 = param_1[0x92].Args;
    if (pFVar2 == (FVoiceGeneratorArgs *)0x0) {
      *(undefined8 *)param_2 = 0;
    }
    else {
      FVar32.ReferenceController = (TReferenceControllerBase<1> *)param_1[0x93].Args;
      if ((FVoiceGeneratorArgs *)FVar32.ReferenceController != (FVoiceGeneratorArgs *)0x0) {
        LOCK();
        ((FVoiceGeneratorArgs *)FVar32.ReferenceController)->DetuneMultiplier =
             (float)((int)((FVoiceGeneratorArgs *)FVar32.ReferenceController)->DetuneMultiplier + 1)
        ;
        UNLOCK();
      }
      if (pFVar2 == (FVoiceGeneratorArgs *)0x0) {
        FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x14b1aed19;
        bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          fVar31 = (float)(*pcVar3)();
          return fVar31;
        }
      }
      FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x14b1aed29;
      pFVar20 = operator_new(0xa0);
      if (pFVar20 == (FNodeFacade *)0x0) {
        *(undefined8 *)param_2 = 0;
        FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x14b1aed70;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar32.ReferenceController);
      }
      else {
        FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x14b1aed48;
        Metasound::FNodeFacade::FNodeFacade
                  (pFVar20,this,
                   (TSharedRef<Metasound::FNodeClassMetadata_const_,1> *)&stack0xffffffffffffffe8,
                   Metasound::MetasoundVariableNodesPrivate::
                   TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
                   CreateOperator);
        *(FNodeFacade **)param_2 = pFVar20;
        pFVar20->_padding_ =
             (longlong)
             &
             ___7__TNodeFacade_V__TVariableMutatorOperator_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___MetasoundVariableNodesPrivate_Metasound___Metasound__6B_
        ;
        FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x14b1aed5f;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar32.ReferenceController);
      }
    }
    FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x14b1aed7f;
    Metasound::FNodeData::~FNodeData(this);
    return extraout_XMM0_Da_25;
  case 0x2c:
    FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x14b1aec3f;
    pFVar20 = operator_new(0xa0);
    if (pFVar20 != (FNodeFacade *)0x0) {
      FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x14b1aec4c;
      pFVar21 = Metasound::MetasoundVariableNodesPrivate::
                TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
                GetNodeInfo();
      FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x14b1aec6a;
      Metasound::FNodeFacade::FNodeFacade
                (pFVar20,(FName *)this,&this->ID,pFVar21,
                 Metasound::MetasoundVariableNodesPrivate::
                 TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
                 CreateOperator);
      *(FNodeFacade **)param_2 = pFVar20;
      pFVar20->_padding_ =
           (longlong)
           &
           ___7__TNodeFacade_V__TVariableMutatorOperator_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___MetasoundVariableNodesPrivate_Metasound___Metasound__6B_
      ;
      return extraout_XMM0_Da_24;
    }
    *(undefined8 *)param_2 = 0;
    return extraout_XMM0_Da_23;
  case 0x2d:
    pFVar2 = param_1[0xa6].Args;
    if (pFVar2 == (FVoiceGeneratorArgs *)0x0) {
      *(undefined8 *)param_2 = 0;
    }
    else {
      FVar32.ReferenceController = (TReferenceControllerBase<1> *)param_1[0xa7].Args;
      if ((FVoiceGeneratorArgs *)FVar32.ReferenceController != (FVoiceGeneratorArgs *)0x0) {
        LOCK();
        ((FVoiceGeneratorArgs *)FVar32.ReferenceController)->DetuneMultiplier =
             (float)((int)((FVoiceGeneratorArgs *)FVar32.ReferenceController)->DetuneMultiplier + 1)
        ;
        UNLOCK();
      }
      if (pFVar2 == (FVoiceGeneratorArgs *)0x0) {
        FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x14b1aee99;
        bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          fVar31 = (float)(*pcVar3)();
          return fVar31;
        }
      }
      FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x14b1aeea9;
      pFVar20 = operator_new(0xa0);
      if (pFVar20 == (FNodeFacade *)0x0) {
        *(undefined8 *)param_2 = 0;
        FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x14b1aeef0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar32.ReferenceController);
      }
      else {
        FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x14b1aeec8;
        Metasound::FNodeFacade::FNodeFacade
                  (pFVar20,this,
                   (TSharedRef<Metasound::FNodeClassMetadata_const_,1> *)&stack0xffffffffffffffe8,
                   Metasound::MetasoundVariableNodesPrivate::
                   TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
                   CreateOperator);
        *(FNodeFacade **)param_2 = pFVar20;
        pFVar20->_padding_ =
             (longlong)
             &
             ___7__TNodeFacade_V__TVariableAccessorOperator_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___MetasoundVariableNodesPrivate_Metasound___Metasound__6B_
        ;
        FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x14b1aeedf;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar32.ReferenceController);
      }
    }
    FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x14b1aeeff;
    Metasound::FNodeData::~FNodeData(this);
    return extraout_XMM0_Da_28;
  case 0x2e:
    FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x14b1aedbf;
    pFVar20 = operator_new(0xa0);
    if (pFVar20 != (FNodeFacade *)0x0) {
      FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x14b1aedcc;
      pFVar21 = Metasound::MetasoundVariableNodesPrivate::
                TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
                GetNodeInfo();
      FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x14b1aedea;
      Metasound::FNodeFacade::FNodeFacade
                (pFVar20,(FName *)this,&this->ID,pFVar21,
                 Metasound::MetasoundVariableNodesPrivate::
                 TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
                 CreateOperator);
      *(FNodeFacade **)param_2 = pFVar20;
      pFVar20->_padding_ =
           (longlong)
           &
           ___7__TNodeFacade_V__TVariableAccessorOperator_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___MetasoundVariableNodesPrivate_Metasound___Metasound__6B_
      ;
      return extraout_XMM0_Da_27;
    }
    *(undefined8 *)param_2 = 0;
    return extraout_XMM0_Da_26;
  case 0x2f:
    pFVar2 = param_1[0xa6].Args;
    if (pFVar2 == (FVoiceGeneratorArgs *)0x0) {
      *(undefined8 *)param_2 = 0;
    }
    else {
      FVar32.ReferenceController = (TReferenceControllerBase<1> *)param_1[0xa7].Args;
      if ((FVoiceGeneratorArgs *)FVar32.ReferenceController != (FVoiceGeneratorArgs *)0x0) {
        LOCK();
        ((FVoiceGeneratorArgs *)FVar32.ReferenceController)->DetuneMultiplier =
             (float)((int)((FVoiceGeneratorArgs *)FVar32.ReferenceController)->DetuneMultiplier + 1)
        ;
        UNLOCK();
      }
      if (pFVar2 == (FVoiceGeneratorArgs *)0x0) {
        FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x14b1af019;
        bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          fVar31 = (float)(*pcVar3)();
          return fVar31;
        }
      }
      FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x14b1af029;
      pFVar20 = operator_new(0xa0);
      if (pFVar20 == (FNodeFacade *)0x0) {
        *(undefined8 *)param_2 = 0;
        FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x14b1af070;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar32.ReferenceController);
      }
      else {
        FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x14b1af048;
        Metasound::FNodeFacade::FNodeFacade
                  (pFVar20,this,
                   (TSharedRef<Metasound::FNodeClassMetadata_const_,1> *)&stack0xffffffffffffffe8,
                   Metasound::MetasoundVariableNodesPrivate::
                   TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>
                   ::CreateOperator);
        *(FNodeFacade **)param_2 = pFVar20;
        pFVar20->_padding_ =
             (longlong)
             &
             ___7__TNodeFacade_V__TVariableDeferredAccessorOperator_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___MetasoundVariableNodesPrivate_Metasound___Metasound__6B_
        ;
        FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x14b1af05f;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar32.ReferenceController);
      }
    }
    FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x14b1af07f;
    Metasound::FNodeData::~FNodeData(this);
    return extraout_XMM0_Da_31;
  case 0x30:
    FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x14b1aef3f;
    pFVar20 = operator_new(0xa0);
    if (pFVar20 != (FNodeFacade *)0x0) {
      FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x14b1aef4c;
      pFVar21 = Metasound::MetasoundVariableNodesPrivate::
                TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>
                ::GetNodeInfo();
      FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x14b1aef6a;
      Metasound::FNodeFacade::FNodeFacade
                (pFVar20,(FName *)this,&this->ID,pFVar21,
                 Metasound::MetasoundVariableNodesPrivate::
                 TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>
                 ::CreateOperator);
      *(FNodeFacade **)param_2 = pFVar20;
      pFVar20->_padding_ =
           (longlong)
           &
           ___7__TNodeFacade_V__TVariableDeferredAccessorOperator_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___MetasoundVariableNodesPrivate_Metasound___Metasound__6B_
      ;
      return extraout_XMM0_Da_30;
    }
    *(undefined8 *)param_2 = 0;
    return extraout_XMM0_Da_29;
  case 0x32:
    *(undefined8 *)param_2 = 0;
    *(undefined8 *)&param_2->field_0x8 = 0;
    return in_XMM0_Da;
  case 0x33:
    FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x14b1af445;
    puVar25 = operator_new(0x78);
    if (puVar25 != (undefined8 *)0x0) {
      FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x14b1af456;
      pFVar26 = Metasound::
                GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>();
      *(FName *)(puVar25 + 1) = *pFVar26;
      *puVar25 = &___7IDataChannel_Metasound__6B_;
      puVar25[2] = 0;
      puVar25[3] = 0;
      *(undefined4 *)(puVar25 + 4) = 0;
      *puVar25 = &
                 ___7__TCopyableDataChannel_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_
      ;
      *(undefined4 *)((longlong)puVar25 + 0x24) = 0;
      puVar25[5] = 0;
      FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x14b1af494;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(puVar25 + 6),4000);
      puVar25[0xb] = 0xffffffffffffffff;
      uVar4 = *(undefined8 *)&this->ID;
      *(FName *)(puVar25 + 0xc) = this->Name;
      puVar25[0xd] = uVar4;
      puVar25[0xe] = 0;
      if (((puVar25[2] != 0) && (puVar25[3] != 0)) && (0 < *(int *)(puVar25[3] + 8))) {
        FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x14b1af4de;
        bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("!InObject || !InObject->DoesSharedInstanceExist()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x7a5,L"Trying to share an already-shared object");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          fVar31 = (float)(*pcVar3)();
          return fVar31;
        }
      }
    }
    FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x14b1af4fe;
    TSharedRef<Metasound::IDataChannel,1>::
    TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
              ((TSharedRef<Metasound::IDataChannel,1> *)&stack0xffffffffffffffe8,
               (TRawPtrProxy<Metasound::TCopyableDataChannel<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>
                *)&stack0x00000010);
    *(FNodeClassMetadata **)param_2 = in_stack_ffffffffffffffe8;
    *(TReferenceControllerBase<1> **)&param_2->field_0x8 =
         in_stack_fffffffffffffff0.ReferenceController;
    if (in_stack_fffffffffffffff0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (in_stack_fffffffffffffff0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(in_stack_fffffffffffffff0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x14b1af52c;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (in_stack_fffffffffffffff0.ReferenceController);
    return extraout_XMM0_Da_33;
  case 0x34:
    *(undefined8 *)param_2 = 0;
    return in_XMM0_Da;
  case 0x35:
    return in_XMM0_Da;
  case 0x36:
    param_1->Args =
         (FVoiceGeneratorArgs *)SharedPointerInternals::TReferenceControllerBase<1>::vftable;
    if (((ulonglong)param_2 & 1) != 0) {
      operator_delete(param_1,0x20);
      in_XMM0_Da = extraout_XMM0_Da_36;
    }
    return in_XMM0_Da;
  case 0x37:
    return in_XMM0_Da;
  case 0x38:
    param_1->Args =
         (FVoiceGeneratorArgs *)SharedPointerInternals::TReferenceControllerBase<1>::vftable;
    if (((ulonglong)param_2 & 1) != 0) {
      operator_delete(param_1,0x20);
      in_XMM0_Da = extraout_XMM0_Da_37;
    }
    return in_XMM0_Da;
  case 0x39:
    *(char *)&(in_R9->Name).ComparisonIndex.Value = (char)(in_R9->Name).ComparisonIndex.Value;
    pcVar1 = (char *)((longlong)unaff_RSI + 1);
    out(*(undefined1 *)unaff_RSI,uVar29);
    cVar28 = (char)((ulonglong)param_1 >> 8);
    *pcVar1 = *pcVar1 + cVar28;
    out(*(undefined4 *)pcVar1,uVar29);
    pcVar1 = (char *)((longlong)pbVar27 * 2 + 0x20);
    cVar30 = (char)((ulonglong)param_2 >> 8);
    *pcVar1 = *pcVar1 + cVar30;
    *unaff_RBX = *unaff_RBX;
    out(*(undefined4 *)((longlong)unaff_RSI + 5),uVar29);
    *(char *)((longlong)unaff_RSI + 9) = *(char *)((longlong)unaff_RSI + 9) + cVar28;
    param_2[0x91b6db6db].field_0xc = param_2[0x91b6db6db].field_0xc + cVar30;
    *pbVar27 = *pbVar27 & bVar6;
    uVar7 = *(int *)pbVar27 * 0x74006e ^ *(uint *)(ulonglong)(uint)(*(int *)pbVar27 * 0x74006e);
    bVar6 = (byte)uVar7 ^ *(byte *)(ulonglong)uVar7;
    pbVar27 = (byte *)(ulonglong)CONCAT31((int3)(uVar7 >> 8),bVar6);
    *pbVar27 = *pbVar27 & bVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x3a:
    if ((byte)unaff_RBX < *(byte *)(unaff_R15 + 0x6f + in_R10 * 2)) {
      out(*unaff_RSI,uVar29);
    }
    else {
      *pbVar27 = *pbVar27 + bVar6;
    }
    *pbVar27 = *pbVar27 + bVar6;
    *pbVar27 = *pbVar27 + bVar6;
    *pbVar27 = *pbVar27 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar7 = (uint)this & 0xff;
  if (uVar7 == 1) {
    pTVar24 = Metasound::
              TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
              ::CreateExplicitArgs
                        ((TDataReadReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)
                         &stack0xffffffffffffffd0,in_stack_00000028,(FLiteral *)in_R9);
    cStack_80 = '\x01';
    ppuStack_88 = &___7FAnyDataReference_Metasound__6B_;
    (**(code **)(*(longlong *)pTVar24 + 0x18))(pTVar24,&plStack_78);
    if ((plStack_78 == (longlong *)0x0) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      fVar31 = (float)(*pcVar3)();
      return fVar31;
    }
    cVar28 = cStack_80;
    param_2->field_0x8 = cStack_80;
    ppuStack_88 = &___7FAnyDataReference_Metasound__6B_;
    *(undefined ***)param_2 = &___7FAnyDataReference_Metasound__6B_;
    (**(code **)(*plStack_78 + 0x18))(plStack_78,&param_2->field_0x10);
    if ((*(longlong *)&param_2->field_0x10 == 0) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      fVar31 = (float)(*pcVar3)();
      return fVar31;
    }
    FStack_40.ReferenceController = in_stack_ffffffffffffffe0;
    if ((cVar28 == '\0') &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("EDataReferenceAccessType::None != InAccessType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30f,L""), FStack_40.ReferenceController = in_stack_ffffffffffffffe0,
       bVar5)) {
      pcVar3 = (code *)swi(3);
      fVar31 = (float)(*pcVar3)();
      return fVar31;
    }
    *(undefined ***)param_2 = &___7FAnyDataReference_Metasound__6B_;
    param_2->TypeIndex = '\x01';
    if (plStack_78 != (longlong *)0x0) {
      (**(code **)*plStack_78)(plStack_78,1);
    }
  }
  else if (uVar7 == 2) {
    pTVar23 = Metasound::
              TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
              ::CreateExplicitArgs
                        ((TDataWriteReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)
                         &stack0xffffffffffffffb0,in_stack_00000028,(FLiteral *)in_R9);
    cStack_98 = '\x02';
    TStack_a8.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)&___7FAnyDataReference_Metasound__6B_;
    (**(code **)(*(longlong *)pTVar23 + 0x18))(pTVar23,&plStack_90);
    if ((plStack_90 == (longlong *)0x0) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      fVar31 = (float)(*pcVar3)();
      return fVar31;
    }
    cVar28 = cStack_98;
    param_2->field_0x8 = cStack_98;
    TStack_a8.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)&___7FAnyDataReference_Metasound__6B_;
    *(undefined ***)param_2 = &___7FAnyDataReference_Metasound__6B_;
    (**(code **)(*plStack_90 + 0x18))(plStack_90,&param_2->field_0x10);
    if ((*(longlong *)&param_2->field_0x10 == 0) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      fVar31 = (float)(*pcVar3)();
      return fVar31;
    }
    if ((cVar28 == '\0') &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("EDataReferenceAccessType::None != InAccessType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30f,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      fVar31 = (float)(*pcVar3)();
      return fVar31;
    }
    *(undefined ***)param_2 = &___7FAnyDataReference_Metasound__6B_;
    param_2->TypeIndex = '\x01';
    if (plStack_90 != (longlong *)0x0) {
      (**(code **)*plStack_90)(plStack_90,1);
    }
  }
  else {
    if (uVar7 != 4) {
      param_2->TypeIndex = '\0';
      return in_XMM0_Da;
    }
    pTVar22 = Metasound::
              TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,Metasound::TDataValueReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
              ::CreateExplicitArgs
                        ((TDataValueReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)
                         &FStack_70,in_stack_00000028,(FLiteral *)in_R9);
    auStack_b0[0] = '\x04';
    (**(code **)(*(longlong *)pTVar22 + 0x18))(pTVar22,&TStack_a8);
    if ((TStack_a8.Object == (FNodeClassMetadata *)0x0) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      fVar31 = (float)(*pcVar3)();
      return fVar31;
    }
    cVar28 = auStack_b0[0];
    param_2->field_0x8 = auStack_b0[0];
    *(undefined ***)param_2 = &___7FAnyDataReference_Metasound__6B_;
    (**(code **)((longlong)((TStack_a8.Object)->ClassName).Namespace + 0x18))
              (TStack_a8.Object,&param_2->field_0x10);
    if ((*(longlong *)&param_2->field_0x10 == 0) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      fVar31 = (float)(*pcVar3)();
      return fVar31;
    }
    if ((cVar28 == '\0') &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("EDataReferenceAccessType::None != InAccessType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30f,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      fVar31 = (float)(*pcVar3)();
      return fVar31;
    }
    *(undefined ***)param_2 = &___7FAnyDataReference_Metasound__6B_;
    param_2->TypeIndex = '\x01';
    FStack_40.ReferenceController = pTStack_60;
    if (TStack_a8.Object != (FNodeClassMetadata *)0x0) {
      (**(code **)((TStack_a8.Object)->ClassName).Namespace)(TStack_a8.Object,1);
      FStack_40.ReferenceController = pTStack_60;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)FStack_40.ReferenceController);
  return extraout_XMM0_Da_32;
}

// VisitImpl<`Metasound::FSuperOscillatorOperator::Execute'::__l8::<lambda_1>_const_&,0,1,2,3,4,5,6,7,0,TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_&> @ 14b1c9ba0

float __cdecl
UE::Core::Private::
VisitImpl<_Metasound::FSuperOscillatorOperator::Execute_::__l8::<lambda_1>_const_&,0,1,2,3,4,5,6,7,0,TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>_&>
          (ulong64 param_1,<lambda_1> *param_2,
          TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7> *param_3,
          TIntegerSequence<unsigned___int64,0> *param_4,
          TVariant<Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>,Metasound::Generators::TVoiceGenerator<Metasound::Generators::TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>_>_>
          *param_5)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014b1c9bb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (*switchD_14b1c9b8f::switchdataD_15238a780[param_1])(param_2,param_5);
  return fVar1;
}

// `scalar_deleting_destructor' @ 14b1d3ec0

void * __thiscall
Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1d3f00

void * __thiscall
Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1d3f40

void * __thiscall
Metasound::TExecutableOperator<Metasound::FSemitoneToFrequencyMultiplierOperator>::
_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::FSemitoneToFrequencyMultiplierOperator> *this,uint param_1
          )

{
  *this = (TExecutableOperator<Metasound::FSemitoneToFrequencyMultiplierOperator>)
          &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1d3f80

void * __thiscall
Metasound::TExecutableOperator<Metasound::FStereoDelayOperator>::_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::FStereoDelayOperator> *this,uint param_1)

{
  *this = (TExecutableOperator<Metasound::FStereoDelayOperator>)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1d3fc0

void * __thiscall
Metasound::TExecutableOperator<Metasound::FStereoPannerOperator>::_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::FStereoPannerOperator> *this,uint param_1)

{
  *this = (TExecutableOperator<Metasound::FStereoPannerOperator>)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1d4000

void * __thiscall
Metasound::TExecutableOperator<Metasound::FSubharmonizerOperator>::_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::FSubharmonizerOperator> *this,uint param_1)

{
  *this = (TExecutableOperator<Metasound::FSubharmonizerOperator>)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1d4040

void * __thiscall
Metasound::FSemitoneToFrequencyMultiplierOperator::_scalar_deleting_destructor_
          (FSemitoneToFrequencyMultiplierOperator *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->FrequencyMultiplierOutput).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SemitoneInput).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1d40a0

void * __thiscall
Metasound::FStereoDelayOperator::_scalar_deleting_destructor_
          (FStereoDelayOperator *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerReset).field_0x10);
  Audio::FDelay::~FDelay(&this->RightDelayBuffer);
  Audio::FDelay::~FDelay(&this->LeftDelayBuffer);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->RightAudioOutput).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->LeftAudioOutput).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Feedback).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->WetLevel).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->DryLevel).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->DelayRatio).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->DelayTime).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->StereoDelayMode).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->RightAudioInput).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->LeftAudioInput).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x228);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1d4170

void * __thiscall
Metasound::FStereoPannerOperator::_scalar_deleting_destructor_
          (FStereoPannerOperator *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->AudioRightOutput).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->AudioLeftOutput).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->PanningLaw).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->PanningAmount).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->AudioInput).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b1d41e0

void * __thiscall
Metasound::FSubharmonizerOperator::_scalar_deleting_destructor_
          (FSubharmonizerOperator *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->GainInterpolationBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EnvelopeBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ScratchBufferB).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ScratchBufferA).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EnvelopeFollower).Smoother.PriorEnvelopeValues.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EnvelopeFollower).MeanSquaredProcessor.ChannelValues.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EnvelopeFollower).WorkBuffer.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  Audio::FBiquadFilter::~FBiquadFilter(&this->OutputHighPassFilter);
  Audio::FBiquadFilter::~FBiquadFilter(&this->OutputLowPassFilter);
  Audio::FBiquadFilter::~FBiquadFilter(&this->InputLowPassFilter);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->AudioOut).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OctaverModeIn).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SubharmonicIn).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->LinearGainIn).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->FrequencyIn).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->AudioIn).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x240);
  }
  return this;
}

// IMPLEMENT_MODULE_MetasoundStandardNodes @ 14b1ebce0

void __cdecl IMPLEMENT_MODULE_MetasoundStandardNodes(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'AddressInputMetadata'' @ 15042e8a0

void __cdecl
`Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>
::DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__AddressInputMetadata__(void)

{
  if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::DeclareVertexInterface(void)'
                  ::__l2::AddressInputMetadata.DisplayName.TextData.Reference + 0x10))();
  }
  if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015042e8c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)
                 *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::DeclareVertexInterface(void)'
                  ::__l2::AddressInputMetadata.Description.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'AddressInputMetadata'' @ 15042e8e0

void __cdecl
`Metasound::ReceiveNodePrivate::
TReceiverOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::DeclareVertexInterface'::
__l2::_dynamic_atexit_destructor_for__AddressInputMetadata__(void)

{
  if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::DeclareVertexInterface(void)'
                  ::__l2::AddressInputMetadata.DisplayName.TextData.Reference + 0x10))();
  }
  if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015042e909. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)
                 *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::DeclareVertexInterface(void)'
                  ::__l2::AddressInputMetadata.Description.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'AddressInputMetadata'' @ 15042e920

void __cdecl
`Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__AddressInputMetadata__(void)

{
  if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::DeclareVertexInterface(void)'
                  ::__l2::AddressInputMetadata.DisplayName.TextData.Reference + 0x10))();
  }
  if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015042e949. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)
                 *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::DeclareVertexInterface(void)'
                  ::__l2::AddressInputMetadata.Description.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'AddressInputMetadata'' @ 15042e960

void __cdecl
`Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__AddressInputMetadata__(void)

{
  if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::DeclareVertexInterface(void)'
                  ::__l2::AddressInputMetadata.DisplayName.TextData.Reference + 0x10))();
  }
  if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015042e989. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)
                 *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::DeclareVertexInterface(void)'
                  ::__l2::AddressInputMetadata.Description.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Debug'' @ 15042e9a0

void __cdecl Metasound::NodeCategories::_dynamic_atexit_destructor_for__Debug__(void)

{
  if (Debug.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015042e9af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*Debug.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DefaultDataInputMetadata'' @ 15042e9c0

void __cdecl
`Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>
::DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__DefaultDataInputMetadata__(void)

{
  if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::DeclareVertexInterface(void)'
      ::__l2::DefaultDataInputMetadata.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::DeclareVertexInterface(void)'
                  ::__l2::DefaultDataInputMetadata.DisplayName.TextData.Reference + 0x10))();
  }
  if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::DeclareVertexInterface(void)'
      ::__l2::DefaultDataInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015042e9e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)
                 *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::DeclareVertexInterface(void)'
                  ::__l2::DefaultDataInputMetadata.Description.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DefaultDataInputMetadata'' @ 15042ea00

void __cdecl
`Metasound::ReceiveNodePrivate::
TReceiverOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::DeclareVertexInterface'::
__l2::_dynamic_atexit_destructor_for__DefaultDataInputMetadata__(void)

{
  if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::DeclareVertexInterface(void)'
      ::__l2::DefaultDataInputMetadata.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::DeclareVertexInterface(void)'
                  ::__l2::DefaultDataInputMetadata.DisplayName.TextData.Reference + 0x10))();
  }
  if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::DeclareVertexInterface(void)'
      ::__l2::DefaultDataInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015042ea29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)
                 *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::DeclareVertexInterface(void)'
                  ::__l2::DefaultDataInputMetadata.Description.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DefaultInterface'' @ 15042ea40

void __cdecl
`Metasound::TRandomNodeOperator<int>::GetDefaultInterface'::__l5::
_dynamic_atexit_destructor_for__DefaultInterface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface
            (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<int>::GetDefaultInterface(void)'
              ::__l5::DefaultInterface);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultInterface'' @ 15042ea60

void __cdecl
`Metasound::TRandomNodeOperator<float>::GetDefaultInterface'::__l5::
_dynamic_atexit_destructor_for__DefaultInterface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface
            (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<float>::GetDefaultInterface(void)'
              ::__l5::DefaultInterface);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultInterface'' @ 15042ea80

void __cdecl
`Metasound::TRandomNodeOperator<Metasound::FTime>::GetDefaultInterface'::__l5::
_dynamic_atexit_destructor_for__DefaultInterface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface
            (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<Metasound::FTime>::GetDefaultInterface(void)'
              ::__l5::DefaultInterface);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultInterface'' @ 15042eaa0

void __cdecl
`Metasound::TRandomNodeOperator<bool>::GetDefaultInterface'::__l5::
_dynamic_atexit_destructor_for__DefaultInterface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface
            (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<bool>::GetDefaultInterface(void)'
              ::__l5::DefaultInterface);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultInterface'' @ 15042eac0

void __cdecl
`Metasound::TRandomNodeOperator<int>::GetDefaultInterface'::__l7::
_dynamic_atexit_destructor_for__DefaultInterface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface
            (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<int>::GetDefaultInterface(void)'
              ::__l7::DefaultInterface);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultInterface'' @ 15042eae0

void __cdecl
`Metasound::TRandomNodeOperator<float>::GetDefaultInterface'::__l7::
_dynamic_atexit_destructor_for__DefaultInterface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface
            (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<float>::GetDefaultInterface(void)'
              ::__l7::DefaultInterface);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultInterface'' @ 15042eb00

void __cdecl
`Metasound::TRandomNodeOperator<Metasound::FTime>::GetDefaultInterface'::__l7::
_dynamic_atexit_destructor_for__DefaultInterface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface
            (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<Metasound::FTime>::GetDefaultInterface(void)'
              ::__l7::DefaultInterface);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultInterface'' @ 15042eb20

void __cdecl
`Metasound::TRandomNodeOperator<bool>::GetDefaultInterface'::__l7::
_dynamic_atexit_destructor_for__DefaultInterface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface
            (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<bool>::GetDefaultInterface(void)'
              ::__l7::DefaultInterface);
  return;
}

// `dynamic_atexit_destructor_for_'Delays'' @ 15042eb40

void __cdecl Metasound::NodeCategories::_dynamic_atexit_destructor_for__Delays__(void)

{
  if (Delays.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015042eb4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*Delays.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DisplayText'' @ 15042eb60

void __cdecl
`Metasound::
TDataReferenceTypeInfo<Metasound::TVariable<TArray<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,TSizedDefaultAllocator<32>_>_>_>
::GetTypeDisplayText'::__l2::_dynamic_atexit_destructor_for__DisplayText__(void)

{
  if (::DisplayText.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015042eb6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*::DisplayText.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DisplayText'' @ 15042eb80

void __cdecl
`Metasound::
TDataReferenceTypeInfo<Metasound::TVariable<TArray<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,TSizedDefaultAllocator<32>_>_>_>
::GetTypeDisplayText'::__l2::_dynamic_atexit_destructor_for__DisplayText__(void)

{
  if (::DisplayText.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015042eb8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*::DisplayText.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DisplayText'' @ 15042eba0

void __cdecl
`Metasound::
TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>::
GetTypeDisplayText'::__l2::_dynamic_atexit_destructor_for__DisplayText__(void)

{
  if (::DisplayText.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015042ebaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*::DisplayText.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DisplayText'' @ 15042ebc0

void __cdecl
`Metasound::
TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
::GetTypeDisplayText'::__l2::_dynamic_atexit_destructor_for__DisplayText__(void)

{
  if (::DisplayText.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015042ebcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*::DisplayText.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DisplayText'' @ 15042ebe0

void __cdecl
`Metasound::
TDataReferenceTypeInfo<TArray<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,TSizedDefaultAllocator<32>_>_>
::GetTypeDisplayText'::__l2::_dynamic_atexit_destructor_for__DisplayText__(void)

{
  if (::DisplayText.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015042ebef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*::DisplayText.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DisplayText'' @ 15042ec00

void __cdecl
`Metasound::
TDataReferenceTypeInfo<TArray<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,TSizedDefaultAllocator<32>_>_>
::GetTypeDisplayText'::__l2::_dynamic_atexit_destructor_for__DisplayText__(void)

{
  if (::DisplayText.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015042ec0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*::DisplayText.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DisplayText'' @ 15042ec20

void __cdecl
`Metasound::TDataReferenceTypeInfo<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
GetTypeDisplayText'::__l2::_dynamic_atexit_destructor_for__DisplayText__(void)

{
  if (::DisplayText.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015042ec2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*::DisplayText.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DisplayText'' @ 15042ec40

void __cdecl
`Metasound::TDataReferenceTypeInfo<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
GetTypeDisplayText'::__l2::_dynamic_atexit_destructor_for__DisplayText__(void)

{
  if (::DisplayText.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015042ec4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*::DisplayText.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Dynamics'' @ 15042ec60

void __cdecl Metasound::NodeCategories::_dynamic_atexit_destructor_for__Dynamics__(void)

{
  if (Dynamics.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015042ec6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*Dynamics.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Envelopes'' @ 15042ec80

void __cdecl Metasound::NodeCategories::_dynamic_atexit_destructor_for__Envelopes__(void)

{
  if (Envelopes.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015042ec8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*Envelopes.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Filters'' @ 15042eca0

void __cdecl Metasound::NodeCategories::_dynamic_atexit_destructor_for__Filters__(void)

{
  if (Filters.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015042ecaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*Filters.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Generators'' @ 15042ecc0

void __cdecl Metasound::NodeCategories::_dynamic_atexit_destructor_for__Generators__(void)

{
  if (Generators.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015042eccf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*Generators.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Info'' @ 15042ece0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
GetAutoConverterNodeMetadata'::__l2::_dynamic_atexit_destructor_for__Info__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetAutoConverterNodeMetadata(void)'
              ::__l2::Info);
  return;
}

// `dynamic_atexit_destructor_for_'Info'' @ 15042ed00

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
GetAutoConverterNodeMetadata'::__l2::_dynamic_atexit_destructor_for__Info__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetAutoConverterNodeMetadata(void)'
              ::__l2::Info);
  return;
}

// `dynamic_atexit_destructor_for_'Info'' @ 15042ed20

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,int>::
GetAutoConverterNodeMetadata'::__l2::_dynamic_atexit_destructor_for__Info__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EPanningLaw,0>,int>::GetAutoConverterNodeMetadata(void)'
              ::__l2::Info);
  return;
}

// `dynamic_atexit_destructor_for_'Info'' @ 15042ed40

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::TAutoConverterNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,int>::
GetAutoConverterNodeMetadata'::__l2::_dynamic_atexit_destructor_for__Info__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Metasound::EStereoDelayMode,0>,int>::GetAutoConverterNodeMetadata(void)'
              ::__l2::Info);
  return;
}

// `dynamic_atexit_destructor_for_'Info'' @ 15042ed60

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::TBasePerlinNoiseOperator<float,Metasound::FPerlinControlRate>::GetNodeInfo'::__l2::
_dynamic_atexit_destructor_for__Info__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBasePerlinNoiseOperator<float,Metasound::FPerlinControlRate>::GetNodeInfo(void)'
              ::__l2::Info);
  return;
}

// `dynamic_atexit_destructor_for_'Info'' @ 15042ed80

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::TBasePerlinNoiseOperator<Metasound::FAudioBuffer,Metasound::FPerlinAudioRate>::
GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBasePerlinNoiseOperator<Metasound::FAudioBuffer,Metasound::FPerlinAudioRate>::GetNodeInfo(void)'
              ::__l2::Info);
  return;
}

// `dynamic_atexit_destructor_for_'Info'' @ 15042eda0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::TRandomNodeOperator<int>::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__
          (void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<int>::GetNodeInfo(void)'
              ::__l2::Info);
  return;
}

// `dynamic_atexit_destructor_for_'Info'' @ 15042edc0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::TRandomNodeOperator<float>::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__
          (void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<float>::GetNodeInfo(void)'
              ::__l2::Info);
  return;
}

// `dynamic_atexit_destructor_for_'Info'' @ 15042ede0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::TRandomNodeOperator<Metasound::FTime>::GetNodeInfo'::__l2::
_dynamic_atexit_destructor_for__Info__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<Metasound::FTime>::GetNodeInfo(void)'
              ::__l2::Info);
  return;
}

// `dynamic_atexit_destructor_for_'Info'' @ 15042ee00

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::TRandomNodeOperator<bool>::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__
          (void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TRandomNodeOperator<bool>::GetNodeInfo(void)'
              ::__l2::Info);
  return;
}

// `dynamic_atexit_destructor_for_'Info'' @ 15042ee20

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>
::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
              ::__l2::Info);
  return;
}

// `dynamic_atexit_destructor_for_'Info'' @ 15042ee40

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::ReceiveNodePrivate::
TReceiverOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::GetNodeInfo'::__l2::
_dynamic_atexit_destructor_for__Info__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
              ::__l2::Info);
  return;
}

// `dynamic_atexit_destructor_for_'Info'' @ 15042ee60

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
              ::__l2::Info);
  return;
}

// `dynamic_atexit_destructor_for_'Info'' @ 15042ee80

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
              ::__l2::Info);
  return;
}

// `dynamic_atexit_destructor_for_'Info'' @ 15042eea0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::FSemitoneToFrequencyMultiplierOperator::GetNodeInfo'::__l2::
_dynamic_atexit_destructor_for__Info__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&::Info);
  return;
}

// `dynamic_atexit_destructor_for_'Info'' @ 15042eec0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::FStereoDelayOperator::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&::Info);
  return;
}

// `dynamic_atexit_destructor_for_'Info'' @ 15042eee0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::FStereoPannerOperator::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&::Info);
  return;
}

// `dynamic_atexit_destructor_for_'Info'' @ 15042ef00

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::FSubharmonizerOperator::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&::Info);
  return;
}

// `dynamic_atexit_destructor_for_'Info'' @ 15042ef20

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::FSuperOscillatorOperatorMono::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__
          (void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSuperOscillatorOperatorMono::GetNodeInfo(void)'
              ::__l2::Info);
  return;
}

// `dynamic_atexit_destructor_for_'Info'' @ 15042ef40

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::FSuperOscillatorOperatorStereo::GetNodeInfo'::__l2::
_dynamic_atexit_destructor_for__Info__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSuperOscillatorOperatorStereo::GetNodeInfo(void)'
              ::__l2::Info);
  return;
}

// `dynamic_atexit_destructor_for_'Info'' @ 15042ef60

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::FSwitchAndRampOperator::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSwitchAndRampOperator::GetNodeInfo(void)'
              ::__l2::Info);
  return;
}

// `dynamic_atexit_destructor_for_'InputDataMetadata'' @ 15042ef80

void __cdecl Metasound::VariableNames::_dynamic_atexit_destructor_for__InputDataMetadata__(void)

{
  if (InputDataMetadata.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*InputDataMetadata.DisplayName.TextData.Reference + 0x10))();
  }
  if (InputDataMetadata.Description.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015042efa9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*InputDataMetadata.Description.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'InputInitialArrayDisplayName'' @ 15042efc0

void __cdecl
Metasound::ArrayNodeVertexNames::_dynamic_atexit_destructor_for__InputInitialArrayDisplayName__
          (void)

{
  if (InputInitialArrayDisplayName.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015042efcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*InputInitialArrayDisplayName.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'InputInitialArrayTooltip'' @ 15042efe0

void __cdecl
Metasound::ArrayNodeVertexNames::_dynamic_atexit_destructor_for__InputInitialArrayTooltip__(void)

{
  if (InputInitialArrayTooltip.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015042efef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*InputInitialArrayTooltip.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'InputVariableMetadata'' @ 15042f000

void __cdecl Metasound::VariableNames::_dynamic_atexit_destructor_for__InputVariableMetadata__(void)

{
  if (InputVariableMetadata.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*InputVariableMetadata.DisplayName.TextData.Reference + 0x10))();
  }
  if (InputVariableMetadata.Description.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015042f029. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*InputVariableMetadata.Description.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'IntEntries'' @ 15042f040

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
``Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>'::__l3::FEnumHandler::
GetAllEntries'::__l2::_dynamic_atexit_destructor_for__IntEntries__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _IntEntries;
  if (_IntEntries == (void *)0x0) {
    return;
  }
  if (_IntEntries != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// `dynamic_atexit_destructor_for_'IntEntries'' @ 15042f060

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
``Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>'::__l3::FEnumHandler
::GetAllEntries'::__l2::_dynamic_atexit_destructor_for__IntEntries__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _IntEntries;
  if (_IntEntries == (void *)0x0) {
    return;
  }
  if (_IntEntries != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Interface'' @ 15042f080

void __cdecl
`Metasound::FRingModOperator::DeclareVertexInterface'::__l2::
_dynamic_atexit_destructor_for__Interface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface
            (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FRingModOperator::DeclareVertexInterface(void)'
              ::__l2::Interface);
  return;
}

// `dynamic_atexit_destructor_for_'Interface'' @ 15042f0a0

void __cdecl
`Metasound::FSubharmonizerOperator::GetDefaultInterface'::__l2::
_dynamic_atexit_destructor_for__Interface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface(&::Interface);
  return;
}

// `dynamic_atexit_destructor_for_'Interface'' @ 15042f0c0

void __cdecl
`Metasound::TBasePerlinNoiseOperator<float,Metasound::FPerlinControlRate>::GetVertexInterface'::__l2
::_dynamic_atexit_destructor_for__Interface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface
            (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBasePerlinNoiseOperator<float,Metasound::FPerlinControlRate>::GetVertexInterface(void)'
              ::__l2::Interface);
  return;
}

// `dynamic_atexit_destructor_for_'Interface'' @ 15042f0e0

void __cdecl
`Metasound::TBasePerlinNoiseOperator<Metasound::FAudioBuffer,Metasound::FPerlinAudioRate>::
GetVertexInterface'::__l2::_dynamic_atexit_destructor_for__Interface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface
            (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBasePerlinNoiseOperator<Metasound::FAudioBuffer,Metasound::FPerlinAudioRate>::GetVertexInterface(void)'
              ::__l2::Interface);
  return;
}

// `dynamic_atexit_destructor_for_'Interface'' @ 15042f100

void __cdecl
`Metasound::FPlateReverbOperator::GetVertexInterface'::__l2::
_dynamic_atexit_destructor_for__Interface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface
            (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FPlateReverbOperator::GetVertexInterface(void)'
              ::__l2::Interface);
  return;
}

// `dynamic_atexit_destructor_for_'Interface'' @ 15042f120

void __cdecl
`Metasound::FSampleAndHoldOperator::GetVertexInterface'::__l2::
_dynamic_atexit_destructor_for__Interface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface
            (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FSampleAndHoldOperator::GetVertexInterface(void)'
              ::__l2::Interface);
  return;
}

// `dynamic_atexit_destructor_for_'Interface'' @ 15042f140

void __cdecl
`Metasound::FSemitoneToFrequencyMultiplierOperator::GetVertexInterface'::__l2::
_dynamic_atexit_destructor_for__Interface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface(&::Interface);
  return;
}

// `dynamic_atexit_destructor_for_'Interface'' @ 15042f160

void __cdecl
`Metasound::FStereoDelayOperator::GetVertexInterface'::__l2::
_dynamic_atexit_destructor_for__Interface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface(&::Interface);
  return;
}

// `dynamic_atexit_destructor_for_'Interface'' @ 15042f180

void __cdecl
`Metasound::FStereoPannerOperator::GetVertexInterface'::__l2::
_dynamic_atexit_destructor_for__Interface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface(&::Interface);
  return;
}

// `dynamic_atexit_destructor_for_'Interface'' @ 15042f1a0

void __cdecl
`Metasound::FSuperOscillatorOperatorMono::GetVertexInterface'::__l2::
_dynamic_atexit_destructor_for__Interface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface
            (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FSuperOscillatorOperatorMono::GetVertexInterface(void)'
              ::__l2::Interface);
  return;
}

// `dynamic_atexit_destructor_for_'Interface'' @ 15042f1c0

void __cdecl
`Metasound::FSuperOscillatorOperatorStereo::GetVertexInterface'::__l2::
_dynamic_atexit_destructor_for__Interface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface
            (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FSuperOscillatorOperatorStereo::GetVertexInterface(void)'
              ::__l2::Interface);
  return;
}

// `dynamic_atexit_destructor_for_'Interface'' @ 15042f1e0

void __cdecl
`Metasound::FSwitchAndRampOperator::GetVertexInterface'::__l2::
_dynamic_atexit_destructor_for__Interface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface
            (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FSwitchAndRampOperator::GetVertexInterface(void)'
              ::__l2::Interface);
  return;
}

// `dynamic_atexit_destructor_for_'Io'' @ 15042f200

void __cdecl Metasound::NodeCategories::_dynamic_atexit_destructor_for__Io__(void)

{
  if (Io.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015042f20f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*Io.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Math'' @ 15042f220

void __cdecl Metasound::NodeCategories::_dynamic_atexit_destructor_for__Math__(void)

{
  if (Math.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015042f22f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*Math.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Metadata'' @ 15042f240

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::GetNodeInfo'::__l2::
_dynamic_atexit_destructor_for__Metadata__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return;
}

// `dynamic_atexit_destructor_for_'Metadata'' @ 15042f260

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::GetNodeInfo'::__l2
::_dynamic_atexit_destructor_for__Metadata__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return;
}

// `dynamic_atexit_destructor_for_'Metadata'' @ 15042f280

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::GetNodeInfo'::
__l2::_dynamic_atexit_destructor_for__Metadata__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return;
}

// `dynamic_atexit_destructor_for_'Metadata'' @ 15042f2a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return;
}

// `dynamic_atexit_destructor_for_'Metadata'' @ 15042f2c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::GetNodeInfo'::__l2::
_dynamic_atexit_destructor_for__Metadata__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return;
}

// `dynamic_atexit_destructor_for_'Metadata'' @ 15042f2e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::GetNodeInfo'::__l2
::_dynamic_atexit_destructor_for__Metadata__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return;
}

// `dynamic_atexit_destructor_for_'Metadata'' @ 15042f300

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::FPlateReverbOperator::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__
          (void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FPlateReverbOperator::GetNodeInfo(void)'
              ::__l2::Metadata);
  return;
}

// `dynamic_atexit_destructor_for_'Metadata'' @ 15042f320

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::FRingModOperator::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FRingModOperator::GetNodeInfo(void)'
              ::__l2::Metadata);
  return;
}

// `dynamic_atexit_destructor_for_'Metadata'' @ 15042f340

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::FSampleAndHoldOperator::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__
          (void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSampleAndHoldOperator::GetNodeInfo(void)'
              ::__l2::Metadata);
  return;
}

// `dynamic_atexit_destructor_for_'Mix'' @ 15042f360

void __cdecl Metasound::NodeCategories::_dynamic_atexit_destructor_for__Mix__(void)

{
  if (Mix.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015042f36f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*Mix.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Music'' @ 15042f380

void __cdecl Metasound::NodeCategories::_dynamic_atexit_destructor_for__Music__(void)

{
  if (Music.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015042f38f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*Music.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'OutputDataMetadata'' @ 15042f3a0

void __cdecl Metasound::VariableNames::_dynamic_atexit_destructor_for__OutputDataMetadata__(void)

{
  if (OutputDataMetadata.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*OutputDataMetadata.DisplayName.TextData.Reference + 0x10))();
  }
  if (OutputDataMetadata.Description.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015042f3c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*OutputDataMetadata.Description.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'OutputMetadata'' @ 15042f3e0

void __cdecl
`Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>
::DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__OutputMetadata__(void)

{
  if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::DeclareVertexInterface(void)'
      ::__l2::OutputMetadata.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::DeclareVertexInterface(void)'
                  ::__l2::OutputMetadata.DisplayName.TextData.Reference + 0x10))();
  }
  if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::DeclareVertexInterface(void)'
      ::__l2::OutputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015042f409. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)
                 *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<Metasound::EPanningLaw,0>_>::DeclareVertexInterface(void)'
                  ::__l2::OutputMetadata.Description.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'OutputMetadata'' @ 15042f420

void __cdecl
`Metasound::ReceiveNodePrivate::
TReceiverOperator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::DeclareVertexInterface'::
__l2::_dynamic_atexit_destructor_for__OutputMetadata__(void)

{
  if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::DeclareVertexInterface(void)'
      ::__l2::OutputMetadata.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::DeclareVertexInterface(void)'
                  ::__l2::OutputMetadata.DisplayName.TextData.Reference + 0x10))();
  }
  if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::DeclareVertexInterface(void)'
      ::__l2::OutputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015042f449. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)
                 *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::DeclareVertexInterface(void)'
                  ::__l2::OutputMetadata.Description.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'OutputVariableMetadata'' @ 15042f460

void __cdecl
Metasound::VariableNames::_dynamic_atexit_destructor_for__OutputVariableMetadata__(void)

{
  if (OutputVariableMetadata.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*OutputVariableMetadata.DisplayName.TextData.Reference + 0x10))();
  }
  if (OutputVariableMetadata.Description.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015042f489. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*OutputVariableMetadata.Description.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'RandomUtils'' @ 15042f4a0

void __cdecl Metasound::NodeCategories::_dynamic_atexit_destructor_for__RandomUtils__(void)

{
  if (RandomUtils.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015042f4af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*RandomUtils.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Reverbs'' @ 15042f4c0

void __cdecl Metasound::NodeCategories::_dynamic_atexit_destructor_for__Reverbs__(void)

{
  if (Reverbs.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015042f4cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*Reverbs.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Spatialization'' @ 15042f4e0

void __cdecl Metasound::NodeCategories::_dynamic_atexit_destructor_for__Spatialization__(void)

{
  if (Spatialization.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015042f4ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*Spatialization.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Trigger'' @ 15042f500

void __cdecl Metasound::NodeCategories::_dynamic_atexit_destructor_for__Trigger__(void)

{
  if (Trigger.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015042f50f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*Trigger.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'TypeString'' @ 15042f520

void __cdecl
`Metasound::
GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>'
::__l2::_dynamic_atexit_destructor_for__TypeString__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>(void)'
               ::__l2::TypeString.Data.AllocatorInstance.Data;
  if (`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>(void)'
      ::__l2::TypeString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::EPanningLaw,0>_>_>(void)'
      ::__l2::TypeString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'TypeString'' @ 15042f540

void __cdecl
`Metasound::
GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>'
::__l2::_dynamic_atexit_destructor_for__TypeString__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>(void)'
               ::__l2::TypeString.Data.AllocatorInstance.Data;
  if (`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>(void)'
      ::__l2::TypeString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_>(void)'
      ::__l2::TypeString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'TypeString'' @ 15042f560

void __cdecl
`Metasound::GetMetasoundDataTypeString<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>'::__l2::
_dynamic_atexit_destructor_for__TypeString__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
               ::__l2::TypeString.Data.AllocatorInstance.Data;
  if (`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
      ::__l2::TypeString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TEnum<Metasound::EPanningLaw,0>_>(void)'
      ::__l2::TypeString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'TypeString'' @ 15042f580

void __cdecl
`Metasound::GetMetasoundDataTypeString<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>'::__l2
::_dynamic_atexit_destructor_for__TypeString__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
               ::__l2::TypeString.Data.AllocatorInstance.Data;
  if (`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
      ::__l2::TypeString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>(void)'
      ::__l2::TypeString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'WaveTables'' @ 15042f5a0

void __cdecl Metasound::NodeCategories::_dynamic_atexit_destructor_for__WaveTables__(void)

{
  if (WaveTables.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015042f5af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*WaveTables.TextData.Reference + 0x10))();
    return;
  }
  return;
}

