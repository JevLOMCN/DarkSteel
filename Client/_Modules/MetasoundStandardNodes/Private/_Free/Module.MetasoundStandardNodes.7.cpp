// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 109

// ErrorType'' @ 1411eaa90

void __cdecl `dynamic_initializer_for_'Metasound::FFileWriteError::ErrorType__(void)

{
  ::FName::FName(&Metasound::FFileWriteError::ErrorType,L"MetasoundFileWriterError");
  return;
}

// Separator'' @ 1411eaab0

void __cdecl `dynamic_initializer_for_'Metasound::FNumberedFileCache::Separator__(void)

{
  ::FString::FString(&Metasound::FNumberedFileCache::Separator,L"_");
  atexit(`dynamic_atexit_destructor_for_'Metasound::FNumberedFileCache::Separator__);
  return;
}

// `dynamic_initializer_for_'InputDataMetadata'' @ 1411eaae0

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

// `dynamic_initializer_for_'InputInitialArrayDisplayName'' @ 1411eab50

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

// `dynamic_initializer_for_'InputInitialArrayTooltip'' @ 1411eabb0

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

// `dynamic_initializer_for_'InputVariableMetadata'' @ 1411eac10

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

// `dynamic_initializer_for_'OutputDataMetadata'' @ 1411eac80

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

// `dynamic_initializer_for_'OutputVariableMetadata'' @ 1411eacf0

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

// `dynamic_initializer_for_'RegistrationActionFWaveWriterNode_1'' @ 1411ead60

void __cdecl Metasound::_dynamic_initializer_for__RegistrationActionFWaveWriterNode_1__(void)

{
  FRegistrationAction **ppFVar1;
  
  ppFVar1 = Frontend::RegistrationPrivate::FMetasound_MetasoundStandardNodes_Registration::
            GetHeadAction();
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFWaveWriterNode_1,ppFVar1,
             Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<1>_>,void>
             ,Frontend::UnregisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<1>_>_>)
  ;
  return;
}

// `dynamic_initializer_for_'RegistrationActionFWaveWriterNode_2'' @ 1411ead90

void __cdecl Metasound::_dynamic_initializer_for__RegistrationActionFWaveWriterNode_2__(void)

{
  FRegistrationAction **ppFVar1;
  
  ppFVar1 = Frontend::RegistrationPrivate::FMetasound_MetasoundStandardNodes_Registration::
            GetHeadAction();
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFWaveWriterNode_2,ppFVar1,
             Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<2>_>,void>
             ,Frontend::UnregisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<2>_>_>)
  ;
  return;
}

// `dynamic_initializer_for_'RegistrationActionFWaveWriterNode_3'' @ 1411eadc0

void __cdecl Metasound::_dynamic_initializer_for__RegistrationActionFWaveWriterNode_3__(void)

{
  FRegistrationAction **ppFVar1;
  
  ppFVar1 = Frontend::RegistrationPrivate::FMetasound_MetasoundStandardNodes_Registration::
            GetHeadAction();
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFWaveWriterNode_3,ppFVar1,
             Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<3>_>,void>
             ,Frontend::UnregisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<3>_>_>)
  ;
  return;
}

// `dynamic_initializer_for_'RegistrationActionFWaveWriterNode_4'' @ 1411eadf0

void __cdecl Metasound::_dynamic_initializer_for__RegistrationActionFWaveWriterNode_4__(void)

{
  FRegistrationAction **ppFVar1;
  
  ppFVar1 = Frontend::RegistrationPrivate::FMetasound_MetasoundStandardNodes_Registration::
            GetHeadAction();
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFWaveWriterNode_4,ppFVar1,
             Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<4>_>,void>
             ,Frontend::UnregisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<4>_>_>)
  ;
  return;
}

// `dynamic_initializer_for_'RegistrationActionFWaveWriterNode_5'' @ 1411eae20

void __cdecl Metasound::_dynamic_initializer_for__RegistrationActionFWaveWriterNode_5__(void)

{
  FRegistrationAction **ppFVar1;
  
  ppFVar1 = Frontend::RegistrationPrivate::FMetasound_MetasoundStandardNodes_Registration::
            GetHeadAction();
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFWaveWriterNode_5,ppFVar1,
             Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<5>_>,void>
             ,Frontend::UnregisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<5>_>_>)
  ;
  return;
}

// `dynamic_initializer_for_'RegistrationActionFWaveWriterNode_6'' @ 1411eae50

void __cdecl Metasound::_dynamic_initializer_for__RegistrationActionFWaveWriterNode_6__(void)

{
  FRegistrationAction **ppFVar1;
  
  ppFVar1 = Frontend::RegistrationPrivate::FMetasound_MetasoundStandardNodes_Registration::
            GetHeadAction();
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFWaveWriterNode_6,ppFVar1,
             Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<6>_>,void>
             ,Frontend::UnregisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<6>_>_>)
  ;
  return;
}

// `dynamic_initializer_for_'RegistrationActionFWaveWriterNode_7'' @ 1411eae80

void __cdecl Metasound::_dynamic_initializer_for__RegistrationActionFWaveWriterNode_7__(void)

{
  FRegistrationAction **ppFVar1;
  
  ppFVar1 = Frontend::RegistrationPrivate::FMetasound_MetasoundStandardNodes_Registration::
            GetHeadAction();
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFWaveWriterNode_7,ppFVar1,
             Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<7>_>,void>
             ,Frontend::UnregisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<7>_>_>)
  ;
  return;
}

// `dynamic_initializer_for_'RegistrationActionFWaveWriterNode_8'' @ 1411eaeb0

void __cdecl Metasound::_dynamic_initializer_for__RegistrationActionFWaveWriterNode_8__(void)

{
  FRegistrationAction **ppFVar1;
  
  ppFVar1 = Frontend::RegistrationPrivate::FMetasound_MetasoundStandardNodes_Registration::
            GetHeadAction();
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFWaveWriterNode_8,ppFVar1,
             Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<8>_>,void>
             ,Frontend::UnregisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<8>_>_>)
  ;
  return;
}

// `scalar_deleting_destructor' @ 14b291f70

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<1>_>_>::
_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<1>_>_> *this
          ,uint param_1)

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

// `scalar_deleting_destructor' @ 14b292000

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<1>_>,void>::
_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<1>_>,void> *this
          ,uint param_1)

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

// `scalar_deleting_destructor' @ 14b292120

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<2>_>_>::
_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<2>_>_> *this
          ,uint param_1)

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

// `scalar_deleting_destructor' @ 14b2921b0

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<2>_>,void>::
_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<2>_>,void> *this
          ,uint param_1)

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

// `scalar_deleting_destructor' @ 14b2922d0

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<3>_>_>::
_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<3>_>_> *this
          ,uint param_1)

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

// `scalar_deleting_destructor' @ 14b292360

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<3>_>,void>::
_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<3>_>,void> *this
          ,uint param_1)

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

// `scalar_deleting_destructor' @ 14b292480

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<4>_>_>::
_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<4>_>_> *this
          ,uint param_1)

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

// `scalar_deleting_destructor' @ 14b292510

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<4>_>,void>::
_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<4>_>,void> *this
          ,uint param_1)

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

// `scalar_deleting_destructor' @ 14b292630

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<5>_>_>::
_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<5>_>_> *this
          ,uint param_1)

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

// `scalar_deleting_destructor' @ 14b2926c0

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<5>_>,void>::
_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<5>_>,void> *this
          ,uint param_1)

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

// `scalar_deleting_destructor' @ 14b2927e0

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<6>_>_>::
_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<6>_>_> *this
          ,uint param_1)

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

// `scalar_deleting_destructor' @ 14b292870

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<6>_>,void>::
_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<6>_>,void> *this
          ,uint param_1)

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

// `scalar_deleting_destructor' @ 14b292990

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<7>_>_>::
_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<7>_>_> *this
          ,uint param_1)

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

// `scalar_deleting_destructor' @ 14b292a20

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<7>_>,void>::
_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<7>_>,void> *this
          ,uint param_1)

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

// `scalar_deleting_destructor' @ 14b292b40

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<8>_>_>::
_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<8>_>_> *this
          ,uint param_1)

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

// `scalar_deleting_destructor' @ 14b292bd0

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<8>_>,void>::
_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<8>_>,void> *this
          ,uint param_1)

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

// `scalar_deleting_destructor' @ 14b292c60

void * __thiscall
Metasound::TNodeFacade<Metasound::TWaveWriterOperator<1>_>::_scalar_deleting_destructor_
          (TNodeFacade<Metasound::TWaveWriterOperator<1>_> *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14b292cc0

void * __thiscall
Metasound::TNodeFacade<Metasound::TWaveWriterOperator<2>_>::_scalar_deleting_destructor_
          (TNodeFacade<Metasound::TWaveWriterOperator<2>_> *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14b292d20

void * __thiscall
Metasound::TNodeFacade<Metasound::TWaveWriterOperator<3>_>::_scalar_deleting_destructor_
          (TNodeFacade<Metasound::TWaveWriterOperator<3>_> *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14b292d80

void * __thiscall
Metasound::TNodeFacade<Metasound::TWaveWriterOperator<4>_>::_scalar_deleting_destructor_
          (TNodeFacade<Metasound::TWaveWriterOperator<4>_> *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14b292de0

void * __thiscall
Metasound::TNodeFacade<Metasound::TWaveWriterOperator<5>_>::_scalar_deleting_destructor_
          (TNodeFacade<Metasound::TWaveWriterOperator<5>_> *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14b292e40

void * __thiscall
Metasound::TNodeFacade<Metasound::TWaveWriterOperator<6>_>::_scalar_deleting_destructor_
          (TNodeFacade<Metasound::TWaveWriterOperator<6>_> *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14b292ea0

void * __thiscall
Metasound::TNodeFacade<Metasound::TWaveWriterOperator<7>_>::_scalar_deleting_destructor_
          (TNodeFacade<Metasound::TWaveWriterOperator<7>_> *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14b292f00

void * __thiscall
Metasound::TNodeFacade<Metasound::TWaveWriterOperator<8>_>::_scalar_deleting_destructor_
          (TNodeFacade<Metasound::TWaveWriterOperator<8>_> *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14b292f90

void * __thiscall
Metasound::TExecutableOperator<Metasound::TWaveWriterOperator<8>_>::_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::TWaveWriterOperator<8>_> *this,uint param_1)

{
  *this = (TExecutableOperator<Metasound::TWaveWriterOperator<8>_>)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b2931d0

void * __thiscall
Metasound::TWaveWriterOperator<8>::_scalar_deleting_destructor_
          (TWaveWriterOperator<8> *this,uint param_1)

{
  FSimpleWaveWriter *this_00;
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->FileNamePrefix).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NumberedFileCacheSP).SharedReferenceCount.ReferenceController);
  this_00 = (this->Writer).Ptr;
  if (this_00 != (FSimpleWaveWriter *)0x0) {
    Audio::FSimpleWaveWriter::~FSimpleWaveWriter(this_00);
    ::operator_delete(this_00,0x18);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Enabled).field_0x10);
  pFVar1 = (this->InterleaveBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AudioInputBufferPtrs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
            ((TDataReadReference<Metasound::FAudioBuffer> *)
             (this->AudioInputs).AllocatorInstance.Data,(this->AudioInputs).ArrayNum);
  pFVar1 = (this->AudioInputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b2932c0

void * __thiscall
Metasound::TExecutableOperator<Metasound::TWaveWriterOperator<7>_>::_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::TWaveWriterOperator<7>_> *this,uint param_1)

{
  *this = (TExecutableOperator<Metasound::TWaveWriterOperator<7>_>)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b293500

void * __thiscall
Metasound::TWaveWriterOperator<7>::_scalar_deleting_destructor_
          (TWaveWriterOperator<7> *this,uint param_1)

{
  FSimpleWaveWriter *this_00;
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->FileNamePrefix).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NumberedFileCacheSP).SharedReferenceCount.ReferenceController);
  this_00 = (this->Writer).Ptr;
  if (this_00 != (FSimpleWaveWriter *)0x0) {
    Audio::FSimpleWaveWriter::~FSimpleWaveWriter(this_00);
    ::operator_delete(this_00,0x18);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Enabled).field_0x10);
  pFVar1 = (this->InterleaveBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AudioInputBufferPtrs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
            ((TDataReadReference<Metasound::FAudioBuffer> *)
             (this->AudioInputs).AllocatorInstance.Data,(this->AudioInputs).ArrayNum);
  pFVar1 = (this->AudioInputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b2935f0

void * __thiscall
Metasound::TExecutableOperator<Metasound::TWaveWriterOperator<6>_>::_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::TWaveWriterOperator<6>_> *this,uint param_1)

{
  *this = (TExecutableOperator<Metasound::TWaveWriterOperator<6>_>)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b293830

void * __thiscall
Metasound::TWaveWriterOperator<6>::_scalar_deleting_destructor_
          (TWaveWriterOperator<6> *this,uint param_1)

{
  FSimpleWaveWriter *this_00;
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->FileNamePrefix).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NumberedFileCacheSP).SharedReferenceCount.ReferenceController);
  this_00 = (this->Writer).Ptr;
  if (this_00 != (FSimpleWaveWriter *)0x0) {
    Audio::FSimpleWaveWriter::~FSimpleWaveWriter(this_00);
    ::operator_delete(this_00,0x18);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Enabled).field_0x10);
  pFVar1 = (this->InterleaveBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AudioInputBufferPtrs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
            ((TDataReadReference<Metasound::FAudioBuffer> *)
             (this->AudioInputs).AllocatorInstance.Data,(this->AudioInputs).ArrayNum);
  pFVar1 = (this->AudioInputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b293920

void * __thiscall
Metasound::TExecutableOperator<Metasound::TWaveWriterOperator<5>_>::_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::TWaveWriterOperator<5>_> *this,uint param_1)

{
  *this = (TExecutableOperator<Metasound::TWaveWriterOperator<5>_>)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b293b60

void * __thiscall
Metasound::TWaveWriterOperator<5>::_scalar_deleting_destructor_
          (TWaveWriterOperator<5> *this,uint param_1)

{
  FSimpleWaveWriter *this_00;
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->FileNamePrefix).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NumberedFileCacheSP).SharedReferenceCount.ReferenceController);
  this_00 = (this->Writer).Ptr;
  if (this_00 != (FSimpleWaveWriter *)0x0) {
    Audio::FSimpleWaveWriter::~FSimpleWaveWriter(this_00);
    ::operator_delete(this_00,0x18);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Enabled).field_0x10);
  pFVar1 = (this->InterleaveBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AudioInputBufferPtrs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
            ((TDataReadReference<Metasound::FAudioBuffer> *)
             (this->AudioInputs).AllocatorInstance.Data,(this->AudioInputs).ArrayNum);
  pFVar1 = (this->AudioInputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b293c50

void * __thiscall
Metasound::TExecutableOperator<Metasound::TWaveWriterOperator<4>_>::_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::TWaveWriterOperator<4>_> *this,uint param_1)

{
  *this = (TExecutableOperator<Metasound::TWaveWriterOperator<4>_>)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b293e90

void * __thiscall
Metasound::TWaveWriterOperator<4>::_scalar_deleting_destructor_
          (TWaveWriterOperator<4> *this,uint param_1)

{
  FSimpleWaveWriter *this_00;
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->FileNamePrefix).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NumberedFileCacheSP).SharedReferenceCount.ReferenceController);
  this_00 = (this->Writer).Ptr;
  if (this_00 != (FSimpleWaveWriter *)0x0) {
    Audio::FSimpleWaveWriter::~FSimpleWaveWriter(this_00);
    ::operator_delete(this_00,0x18);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Enabled).field_0x10);
  pFVar1 = (this->InterleaveBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AudioInputBufferPtrs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
            ((TDataReadReference<Metasound::FAudioBuffer> *)
             (this->AudioInputs).AllocatorInstance.Data,(this->AudioInputs).ArrayNum);
  pFVar1 = (this->AudioInputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b293f80

void * __thiscall
Metasound::TExecutableOperator<Metasound::TWaveWriterOperator<3>_>::_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::TWaveWriterOperator<3>_> *this,uint param_1)

{
  *this = (TExecutableOperator<Metasound::TWaveWriterOperator<3>_>)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b2941c0

void * __thiscall
Metasound::TWaveWriterOperator<3>::_scalar_deleting_destructor_
          (TWaveWriterOperator<3> *this,uint param_1)

{
  FSimpleWaveWriter *this_00;
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->FileNamePrefix).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NumberedFileCacheSP).SharedReferenceCount.ReferenceController);
  this_00 = (this->Writer).Ptr;
  if (this_00 != (FSimpleWaveWriter *)0x0) {
    Audio::FSimpleWaveWriter::~FSimpleWaveWriter(this_00);
    ::operator_delete(this_00,0x18);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Enabled).field_0x10);
  pFVar1 = (this->InterleaveBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AudioInputBufferPtrs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
            ((TDataReadReference<Metasound::FAudioBuffer> *)
             (this->AudioInputs).AllocatorInstance.Data,(this->AudioInputs).ArrayNum);
  pFVar1 = (this->AudioInputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b2942b0

void * __thiscall
Metasound::TExecutableOperator<Metasound::TWaveWriterOperator<2>_>::_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::TWaveWriterOperator<2>_> *this,uint param_1)

{
  *this = (TExecutableOperator<Metasound::TWaveWriterOperator<2>_>)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b294500

void * __thiscall
Metasound::TWaveWriterOperator<2>::_scalar_deleting_destructor_
          (TWaveWriterOperator<2> *this,uint param_1)

{
  FSimpleWaveWriter *this_00;
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->FileNamePrefix).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NumberedFileCacheSP).SharedReferenceCount.ReferenceController);
  this_00 = (this->Writer).Ptr;
  if (this_00 != (FSimpleWaveWriter *)0x0) {
    Audio::FSimpleWaveWriter::~FSimpleWaveWriter(this_00);
    ::operator_delete(this_00,0x18);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Enabled).field_0x10);
  pFVar1 = (this->InterleaveBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AudioInputBufferPtrs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
            ((TDataReadReference<Metasound::FAudioBuffer> *)
             (this->AudioInputs).AllocatorInstance.Data,(this->AudioInputs).ArrayNum);
  pFVar1 = (this->AudioInputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b2945f0

void * __thiscall
Metasound::TExecutableOperator<Metasound::TWaveWriterOperator<1>_>::_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::TWaveWriterOperator<1>_> *this,uint param_1)

{
  *this = (TExecutableOperator<Metasound::TWaveWriterOperator<1>_>)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b294830

void * __thiscall
Metasound::TWaveWriterOperator<1>::_scalar_deleting_destructor_
          (TWaveWriterOperator<1> *this,uint param_1)

{
  FSimpleWaveWriter *this_00;
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->FileNamePrefix).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NumberedFileCacheSP).SharedReferenceCount.ReferenceController);
  this_00 = (this->Writer).Ptr;
  if (this_00 != (FSimpleWaveWriter *)0x0) {
    Audio::FSimpleWaveWriter::~FSimpleWaveWriter(this_00);
    ::operator_delete(this_00,0x18);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Enabled).field_0x10);
  pFVar1 = (this->InterleaveBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AudioInputBufferPtrs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
            ((TDataReadReference<Metasound::FAudioBuffer> *)
             (this->AudioInputs).AllocatorInstance.Data,(this->AudioInputs).ArrayNum);
  pFVar1 = (this->AudioInputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// NewIntrusiveReferenceController<1,Metasound::FNumberedFileCache,wchar_t_const_*,wchar_t_const_*_&,IFileManager_&> @ 14b294b50

TIntrusiveReferenceController<Metasound::FNumberedFileCache,1> * __cdecl
SharedPointerInternals::
NewIntrusiveReferenceController<1,Metasound::FNumberedFileCache,wchar_t_const_*,wchar_t_const_*_&,IFileManager_&>
          (wchar_t **param_1,wchar_t **param_2,IFileManager *param_3)

{
  uchar *puVar1;
  uchar *puVar2;
  ForAnyElementType FVar3;
  TIntrusiveReferenceController<Metasound::FNumberedFileCache,1> *pTVar4;
  FString local_38;
  FString local_28;
  
  pTVar4 = ::operator_new(0xb0);
  if (pTVar4 != (TIntrusiveReferenceController<Metasound::FNumberedFileCache,1> *)0x0) {
    *(undefined4 *)&pTVar4->_padding_ = 1;
    *(undefined4 *)((longlong)&pTVar4->_padding_ + 4) = 1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFNumberedFileCache_Metasound___00_SharedPointerInternals__6B_
    ;
    ::FString::FString(&local_28,*param_2);
    ::FString::FString(&local_38,*param_1);
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pTVar4->ObjectStorage,4000);
    FVar3.Data = local_38.Data.AllocatorInstance.Data;
    puVar1 = (pTVar4->ObjectStorage).Pad + 0x28;
    puVar2 = (pTVar4->ObjectStorage).Pad + 0x34;
    *(FScriptContainerElement **)puVar1 = (FScriptContainerElement *)0x0;
    *(int *)((pTVar4->ObjectStorage).Pad + 0x30) = local_38.Data.ArrayNum;
    if (local_38.Data.ArrayNum == 0) {
      puVar2[0] = '\0';
      puVar2[1] = '\0';
      puVar2[2] = '\0';
      puVar2[3] = '\0';
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)puVar1,local_38.Data.ArrayNum,
                 (int *)puVar2);
      memcpy(*(FScriptContainerElement **)puVar1,FVar3.Data,(longlong)local_38.Data.ArrayNum * 2);
    }
    FVar3.Data = local_28.Data.AllocatorInstance.Data;
    puVar1 = (pTVar4->ObjectStorage).Pad + 0x38;
    puVar2 = (pTVar4->ObjectStorage).Pad + 0x44;
    *(FScriptContainerElement **)puVar1 = (FScriptContainerElement *)0x0;
    *(int *)((pTVar4->ObjectStorage).Pad + 0x40) = local_28.Data.ArrayNum;
    if (local_28.Data.ArrayNum == 0) {
      puVar2[0] = '\0';
      puVar2[1] = '\0';
      puVar2[2] = '\0';
      puVar2[3] = '\0';
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)puVar1,local_28.Data.ArrayNum,
                 (int *)puVar2);
      memcpy(*(FScriptContainerElement **)puVar1,FVar3.Data,(longlong)local_28.Data.ArrayNum * 2);
    }
    (pTVar4->ObjectStorage).Pad[0x48] = '\0';
    (pTVar4->ObjectStorage).Pad[0x49] = '\0';
    (pTVar4->ObjectStorage).Pad[0x4a] = '\0';
    (pTVar4->ObjectStorage).Pad[0x4b] = '\0';
    (pTVar4->ObjectStorage).Pad[0x4c] = '\0';
    (pTVar4->ObjectStorage).Pad[0x4d] = '\0';
    (pTVar4->ObjectStorage).Pad[0x4e] = '\0';
    (pTVar4->ObjectStorage).Pad[0x4f] = '\0';
    (pTVar4->ObjectStorage).Pad[0x50] = '\0';
    (pTVar4->ObjectStorage).Pad[0x51] = '\0';
    (pTVar4->ObjectStorage).Pad[0x52] = '\0';
    (pTVar4->ObjectStorage).Pad[0x53] = '\0';
    (pTVar4->ObjectStorage).Pad[0x54] = '\0';
    (pTVar4->ObjectStorage).Pad[0x55] = '\0';
    (pTVar4->ObjectStorage).Pad[0x56] = '\0';
    (pTVar4->ObjectStorage).Pad[0x57] = '\0';
    (pTVar4->ObjectStorage).Pad[0x68] = '\0';
    (pTVar4->ObjectStorage).Pad[0x69] = '\0';
    (pTVar4->ObjectStorage).Pad[0x6a] = '\0';
    (pTVar4->ObjectStorage).Pad[0x6b] = '\0';
    (pTVar4->ObjectStorage).Pad[0x6c] = '\0';
    (pTVar4->ObjectStorage).Pad[0x6d] = '\0';
    (pTVar4->ObjectStorage).Pad[0x6e] = '\0';
    (pTVar4->ObjectStorage).Pad[0x6f] = '\0';
    (pTVar4->ObjectStorage).Pad[0x70] = '\0';
    (pTVar4->ObjectStorage).Pad[0x71] = '\0';
    (pTVar4->ObjectStorage).Pad[0x72] = '\0';
    (pTVar4->ObjectStorage).Pad[0x73] = '\0';
    (pTVar4->ObjectStorage).Pad[0x74] = 0x80;
    (pTVar4->ObjectStorage).Pad[0x75] = '\0';
    (pTVar4->ObjectStorage).Pad[0x76] = '\0';
    (pTVar4->ObjectStorage).Pad[0x77] = '\0';
    (pTVar4->ObjectStorage).Pad[0x78] = 0xff;
    (pTVar4->ObjectStorage).Pad[0x79] = 0xff;
    (pTVar4->ObjectStorage).Pad[0x7a] = 0xff;
    (pTVar4->ObjectStorage).Pad[0x7b] = 0xff;
    (pTVar4->ObjectStorage).Pad[0x7c] = '\0';
    (pTVar4->ObjectStorage).Pad[0x7d] = '\0';
    (pTVar4->ObjectStorage).Pad[0x7e] = '\0';
    (pTVar4->ObjectStorage).Pad[0x7f] = '\0';
    (pTVar4->ObjectStorage).Pad[0x88] = '\0';
    (pTVar4->ObjectStorage).Pad[0x89] = '\0';
    (pTVar4->ObjectStorage).Pad[0x8a] = '\0';
    (pTVar4->ObjectStorage).Pad[0x8b] = '\0';
    (pTVar4->ObjectStorage).Pad[0x8c] = '\0';
    (pTVar4->ObjectStorage).Pad[0x8d] = '\0';
    (pTVar4->ObjectStorage).Pad[0x8e] = '\0';
    (pTVar4->ObjectStorage).Pad[0x8f] = '\0';
    (pTVar4->ObjectStorage).Pad[0x90] = '\0';
    (pTVar4->ObjectStorage).Pad[0x91] = '\0';
    (pTVar4->ObjectStorage).Pad[0x92] = '\0';
    (pTVar4->ObjectStorage).Pad[0x93] = '\0';
    *(IFileManager **)((pTVar4->ObjectStorage).Pad + 0x98) = param_3;
    Metasound::FNumberedFileCache::CacheFilenames((FNumberedFileCache *)&pTVar4->ObjectStorage);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    return pTVar4;
  }
  return (TIntrusiveReferenceController<Metasound::FNumberedFileCache,1> *)0x0;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<1>_>,void> @ 14b294d30

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<1>_>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  FNodeClassMetadata *pFVar2;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10;
  FNodeClassMetadata local_e8;
  
  pFVar2 = TNodeFacade<Metasound::TWaveWriterOperator<1>_>::CreateNodeClassMetadata(&local_e8);
  local_res10.Ptr = ::operator_new(0xf0);
  if ((FNodeRegistryEntryBase *)local_res10.Ptr == (FNodeRegistryEntryBase *)0x0) {
    local_res10.Ptr = (INodeClassRegistryEntry *)0x0;
  }
  else {
    NodeRegistrationPrivate::FNodeRegistryEntryBase::FNodeRegistryEntryBase
              ((FNodeRegistryEntryBase *)local_res10.Ptr,pFVar2,param_1);
    ((FNodeRegistryEntryBase *)local_res10.Ptr)->_padding_ =
         (longlong)
         &
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TWaveWriterOperator__00_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(&local_res10);
  if ((FNodeRegistryEntryBase *)local_res10.Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10.Ptr)(local_res10.Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<1>_>,void> @ 14b294de0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<1>_>,void>
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TWaveWriterOperator__00_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<2>_>,void> @ 14b294e70

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<2>_>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  FNodeClassMetadata *pFVar2;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10;
  FNodeClassMetadata local_e8;
  
  pFVar2 = TNodeFacade<Metasound::TWaveWriterOperator<2>_>::CreateNodeClassMetadata(&local_e8);
  local_res10.Ptr = ::operator_new(0xf0);
  if ((FNodeRegistryEntryBase *)local_res10.Ptr == (FNodeRegistryEntryBase *)0x0) {
    local_res10.Ptr = (INodeClassRegistryEntry *)0x0;
  }
  else {
    NodeRegistrationPrivate::FNodeRegistryEntryBase::FNodeRegistryEntryBase
              ((FNodeRegistryEntryBase *)local_res10.Ptr,pFVar2,param_1);
    ((FNodeRegistryEntryBase *)local_res10.Ptr)->_padding_ =
         (longlong)
         &
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TWaveWriterOperator__01_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(&local_res10);
  if ((FNodeRegistryEntryBase *)local_res10.Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10.Ptr)(local_res10.Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<2>_>,void> @ 14b294f20

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<2>_>,void>
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TWaveWriterOperator__01_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<3>_>,void> @ 14b294fb0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<3>_>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  FNodeClassMetadata *pFVar2;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10;
  FNodeClassMetadata local_e8;
  
  pFVar2 = TNodeFacade<Metasound::TWaveWriterOperator<3>_>::CreateNodeClassMetadata(&local_e8);
  local_res10.Ptr = ::operator_new(0xf0);
  if ((FNodeRegistryEntryBase *)local_res10.Ptr == (FNodeRegistryEntryBase *)0x0) {
    local_res10.Ptr = (INodeClassRegistryEntry *)0x0;
  }
  else {
    NodeRegistrationPrivate::FNodeRegistryEntryBase::FNodeRegistryEntryBase
              ((FNodeRegistryEntryBase *)local_res10.Ptr,pFVar2,param_1);
    ((FNodeRegistryEntryBase *)local_res10.Ptr)->_padding_ =
         (longlong)
         &
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TWaveWriterOperator__02_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(&local_res10);
  if ((FNodeRegistryEntryBase *)local_res10.Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10.Ptr)(local_res10.Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<3>_>,void> @ 14b295060

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<3>_>,void>
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TWaveWriterOperator__02_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<4>_>,void> @ 14b2950f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<4>_>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  FNodeClassMetadata *pFVar2;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10;
  FNodeClassMetadata local_e8;
  
  pFVar2 = TNodeFacade<Metasound::TWaveWriterOperator<4>_>::CreateNodeClassMetadata(&local_e8);
  local_res10.Ptr = ::operator_new(0xf0);
  if ((FNodeRegistryEntryBase *)local_res10.Ptr == (FNodeRegistryEntryBase *)0x0) {
    local_res10.Ptr = (INodeClassRegistryEntry *)0x0;
  }
  else {
    NodeRegistrationPrivate::FNodeRegistryEntryBase::FNodeRegistryEntryBase
              ((FNodeRegistryEntryBase *)local_res10.Ptr,pFVar2,param_1);
    ((FNodeRegistryEntryBase *)local_res10.Ptr)->_padding_ =
         (longlong)
         &
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TWaveWriterOperator__03_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(&local_res10);
  if ((FNodeRegistryEntryBase *)local_res10.Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10.Ptr)(local_res10.Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<4>_>,void> @ 14b2951a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<4>_>,void>
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TWaveWriterOperator__03_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<5>_>,void> @ 14b295230

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<5>_>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  FNodeClassMetadata *pFVar2;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10;
  FNodeClassMetadata local_e8;
  
  pFVar2 = TNodeFacade<Metasound::TWaveWriterOperator<5>_>::CreateNodeClassMetadata(&local_e8);
  local_res10.Ptr = ::operator_new(0xf0);
  if ((FNodeRegistryEntryBase *)local_res10.Ptr == (FNodeRegistryEntryBase *)0x0) {
    local_res10.Ptr = (INodeClassRegistryEntry *)0x0;
  }
  else {
    NodeRegistrationPrivate::FNodeRegistryEntryBase::FNodeRegistryEntryBase
              ((FNodeRegistryEntryBase *)local_res10.Ptr,pFVar2,param_1);
    ((FNodeRegistryEntryBase *)local_res10.Ptr)->_padding_ =
         (longlong)
         &
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TWaveWriterOperator__04_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(&local_res10);
  if ((FNodeRegistryEntryBase *)local_res10.Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10.Ptr)(local_res10.Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<5>_>,void> @ 14b2952e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<5>_>,void>
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TWaveWriterOperator__04_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<6>_>,void> @ 14b295370

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<6>_>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  FNodeClassMetadata *pFVar2;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10;
  FNodeClassMetadata local_e8;
  
  pFVar2 = TNodeFacade<Metasound::TWaveWriterOperator<6>_>::CreateNodeClassMetadata(&local_e8);
  local_res10.Ptr = ::operator_new(0xf0);
  if ((FNodeRegistryEntryBase *)local_res10.Ptr == (FNodeRegistryEntryBase *)0x0) {
    local_res10.Ptr = (INodeClassRegistryEntry *)0x0;
  }
  else {
    NodeRegistrationPrivate::FNodeRegistryEntryBase::FNodeRegistryEntryBase
              ((FNodeRegistryEntryBase *)local_res10.Ptr,pFVar2,param_1);
    ((FNodeRegistryEntryBase *)local_res10.Ptr)->_padding_ =
         (longlong)
         &
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TWaveWriterOperator__05_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(&local_res10);
  if ((FNodeRegistryEntryBase *)local_res10.Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10.Ptr)(local_res10.Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<6>_>,void> @ 14b295420

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<6>_>,void>
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TWaveWriterOperator__05_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<7>_>,void> @ 14b2954b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<7>_>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  FNodeClassMetadata *pFVar2;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10;
  FNodeClassMetadata local_e8;
  
  pFVar2 = TNodeFacade<Metasound::TWaveWriterOperator<7>_>::CreateNodeClassMetadata(&local_e8);
  local_res10.Ptr = ::operator_new(0xf0);
  if ((FNodeRegistryEntryBase *)local_res10.Ptr == (FNodeRegistryEntryBase *)0x0) {
    local_res10.Ptr = (INodeClassRegistryEntry *)0x0;
  }
  else {
    NodeRegistrationPrivate::FNodeRegistryEntryBase::FNodeRegistryEntryBase
              ((FNodeRegistryEntryBase *)local_res10.Ptr,pFVar2,param_1);
    ((FNodeRegistryEntryBase *)local_res10.Ptr)->_padding_ =
         (longlong)
         &
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TWaveWriterOperator__06_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(&local_res10);
  if ((FNodeRegistryEntryBase *)local_res10.Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10.Ptr)(local_res10.Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<7>_>,void> @ 14b295560

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<7>_>,void>
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TWaveWriterOperator__06_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<8>_>,void> @ 14b2955f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<8>_>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  FNodeClassMetadata *pFVar2;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10;
  FNodeClassMetadata local_e8;
  
  pFVar2 = TNodeFacade<Metasound::TWaveWriterOperator<8>_>::CreateNodeClassMetadata(&local_e8);
  local_res10.Ptr = ::operator_new(0xf0);
  if ((FNodeRegistryEntryBase *)local_res10.Ptr == (FNodeRegistryEntryBase *)0x0) {
    local_res10.Ptr = (INodeClassRegistryEntry *)0x0;
  }
  else {
    NodeRegistrationPrivate::FNodeRegistryEntryBase::FNodeRegistryEntryBase
              ((FNodeRegistryEntryBase *)local_res10.Ptr,pFVar2,param_1);
    ((FNodeRegistryEntryBase *)local_res10.Ptr)->_padding_ =
         (longlong)
         &
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TWaveWriterOperator__07_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(&local_res10);
  if ((FNodeRegistryEntryBase *)local_res10.Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10.Ptr)(local_res10.Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<8>_>,void> @ 14b2956a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<8>_>,void>
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TWaveWriterOperator__07_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// UnregisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<1>_>_> @ 14b295730

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::UnregisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<1>_>_>
          (FModuleInfo *param_1)

{
  bool bVar1;
  FNodeClassMetadata *pFVar2;
  FNodeClassMetadata local_e8;
  
  pFVar2 = TNodeFacade<Metasound::TWaveWriterOperator<1>_>::CreateNodeClassMetadata(&local_e8);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(pFVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// UnregisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<2>_>_> @ 14b295770

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::UnregisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<2>_>_>
          (FModuleInfo *param_1)

{
  bool bVar1;
  FNodeClassMetadata *pFVar2;
  FNodeClassMetadata local_e8;
  
  pFVar2 = TNodeFacade<Metasound::TWaveWriterOperator<2>_>::CreateNodeClassMetadata(&local_e8);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(pFVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// UnregisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<3>_>_> @ 14b2957b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::UnregisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<3>_>_>
          (FModuleInfo *param_1)

{
  bool bVar1;
  FNodeClassMetadata *pFVar2;
  FNodeClassMetadata local_e8;
  
  pFVar2 = TNodeFacade<Metasound::TWaveWriterOperator<3>_>::CreateNodeClassMetadata(&local_e8);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(pFVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// UnregisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<4>_>_> @ 14b2957f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::UnregisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<4>_>_>
          (FModuleInfo *param_1)

{
  bool bVar1;
  FNodeClassMetadata *pFVar2;
  FNodeClassMetadata local_e8;
  
  pFVar2 = TNodeFacade<Metasound::TWaveWriterOperator<4>_>::CreateNodeClassMetadata(&local_e8);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(pFVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// UnregisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<5>_>_> @ 14b295830

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::UnregisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<5>_>_>
          (FModuleInfo *param_1)

{
  bool bVar1;
  FNodeClassMetadata *pFVar2;
  FNodeClassMetadata local_e8;
  
  pFVar2 = TNodeFacade<Metasound::TWaveWriterOperator<5>_>::CreateNodeClassMetadata(&local_e8);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(pFVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// UnregisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<6>_>_> @ 14b295870

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::UnregisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<6>_>_>
          (FModuleInfo *param_1)

{
  bool bVar1;
  FNodeClassMetadata *pFVar2;
  FNodeClassMetadata local_e8;
  
  pFVar2 = TNodeFacade<Metasound::TWaveWriterOperator<6>_>::CreateNodeClassMetadata(&local_e8);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(pFVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// UnregisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<7>_>_> @ 14b2958b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::UnregisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<7>_>_>
          (FModuleInfo *param_1)

{
  bool bVar1;
  FNodeClassMetadata *pFVar2;
  FNodeClassMetadata local_e8;
  
  pFVar2 = TNodeFacade<Metasound::TWaveWriterOperator<7>_>::CreateNodeClassMetadata(&local_e8);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(pFVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// UnregisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<8>_>_> @ 14b2958f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::UnregisterNode<Metasound::TNodeFacade<Metasound::TWaveWriterOperator<8>_>_>
          (FModuleInfo *param_1)

{
  bool bVar1;
  FNodeClassMetadata *pFVar2;
  FNodeClassMetadata local_e8;
  
  pFVar2 = TNodeFacade<Metasound::TWaveWriterOperator<8>_>::CreateNodeClassMetadata(&local_e8);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(pFVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// `scalar_deleting_destructor' @ 14b299420

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::FNumberedFileCache,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<Metasound::FNumberedFileCache,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// GetDefaultFileName @ 14b2a0750

FString * __cdecl
Metasound::WaveWriterOperatorPrivate::GetDefaultFileName(FString *__return_storage_ptr__)

{
  int *piVar1;
  ForAnyElementType _Src;
  int iVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&DefaultFileName,L"Output");
      atexit(`Metasound::WaveWriterOperatorPrivate::GetDefaultFileName'::__l2::
             _dynamic_atexit_destructor_for__DefaultFileName__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  _Src = DefaultFileName.Data.AllocatorInstance;
  iVar2 = DefaultFileName.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,iVar2,0,(ForAnyElementType *)__return_storage_ptr__,iVar2,piVar1);
  memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src.Data,(longlong)iVar2 * 2);
  return __return_storage_ptr__;
}

// GetNameCache @ 14b2a0850

TSharedPtr<Metasound::FNumberedFileCache,1> * __cdecl
Metasound::WaveWriterOperatorPrivate::GetNameCache
          (TSharedPtr<Metasound::FNumberedFileCache,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  TTypeCompatibleBytes<Metasound::FNumberedFileCache> *pTVar2;
  code *pcVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  IFileManager *pIVar6;
  FString *pFVar7;
  TIntrusiveReferenceController<Metasound::FNumberedFileCache,1> *pTVar8;
  TSharedPtr<Metasound::FNumberedFileCache,1> *pTVar9;
  FScriptContainerElement *local_res8;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pIVar6 = IFileManager::Get();
      pFVar7 = FPaths::AudioCaptureDir(&local_18);
      if ((pFVar7->Data).ArrayNum == 0) {
        local_res8 = (FScriptContainerElement *)0x15060d16c;
      }
      else {
        local_res8 = (pFVar7->Data).AllocatorInstance.Data;
      }
      pTVar8 = SharedPointerInternals::
               NewIntrusiveReferenceController<1,Metasound::FNumberedFileCache,wchar_t_const_*,wchar_t_const_*_&,IFileManager_&>
                         ((wchar_t **)&local_res8,&WaveExt,pIVar6);
      pTVar2 = &pTVar8->ObjectStorage;
      if (pTVar2 == (TTypeCompatibleBytes<Metasound::FNumberedFileCache> *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TSharedPtr<Metasound::FNumberedFileCache,1> *)(*pcVar3)();
          return pTVar9;
        }
      }
      NumberedFileCacheSP.Object = (FNumberedFileCache *)pTVar2;
      NumberedFileCacheSP.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)pTVar8;
      if (pTVar8 != (TIntrusiveReferenceController<Metasound::FNumberedFileCache,1> *)0x0) {
        LOCK();
        *(int *)&pTVar8->_padding_ = (int)pTVar8->_padding_ + 1;
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pTVar8);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      atexit(`Metasound::WaveWriterOperatorPrivate::GetNameCache'::__l2::
             _dynamic_atexit_destructor_for__NumberedFileCacheSP__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  __return_storage_ptr__->Object = NumberedFileCacheSP.Object;
  FVar4 = NumberedFileCacheSP.SharedReferenceCount;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       NumberedFileCacheSP.SharedReferenceCount.ReferenceController;
  if (FVar4.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar4.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// Separator'' @ 1504314c0

void __cdecl `dynamic_atexit_destructor_for_'Metasound::FNumberedFileCache::Separator__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Metasound::FNumberedFileCache::Separator.Data.AllocatorInstance.Data;
  if (Metasound::FNumberedFileCache::Separator.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (Metasound::FNumberedFileCache::Separator.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'DefaultFileName'' @ 1504314e0

void __cdecl
`Metasound::WaveWriterOperatorPrivate::GetDefaultFileName'::__l2::
_dynamic_atexit_destructor_for__DefaultFileName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = DefaultFileName.Data.AllocatorInstance.Data;
  if (DefaultFileName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (DefaultFileName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'DefaultInterface'' @ 150431500

void __cdecl
`Metasound::TWaveWriterOperator<1>::DeclareVertexInterface'::__l2::
_dynamic_atexit_destructor_for__DefaultInterface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface
            (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<1>::DeclareVertexInterface(void)'
              ::__l2::DefaultInterface);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultInterface'' @ 150431520

void __cdecl
`Metasound::TWaveWriterOperator<2>::DeclareVertexInterface'::__l2::
_dynamic_atexit_destructor_for__DefaultInterface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface
            (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<2>::DeclareVertexInterface(void)'
              ::__l2::DefaultInterface);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultInterface'' @ 150431540

void __cdecl
`Metasound::TWaveWriterOperator<3>::DeclareVertexInterface'::__l2::
_dynamic_atexit_destructor_for__DefaultInterface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface
            (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<3>::DeclareVertexInterface(void)'
              ::__l2::DefaultInterface);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultInterface'' @ 150431560

void __cdecl
`Metasound::TWaveWriterOperator<4>::DeclareVertexInterface'::__l2::
_dynamic_atexit_destructor_for__DefaultInterface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface
            (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<4>::DeclareVertexInterface(void)'
              ::__l2::DefaultInterface);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultInterface'' @ 150431580

void __cdecl
`Metasound::TWaveWriterOperator<5>::DeclareVertexInterface'::__l2::
_dynamic_atexit_destructor_for__DefaultInterface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface
            (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<5>::DeclareVertexInterface(void)'
              ::__l2::DefaultInterface);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultInterface'' @ 1504315a0

void __cdecl
`Metasound::TWaveWriterOperator<6>::DeclareVertexInterface'::__l2::
_dynamic_atexit_destructor_for__DefaultInterface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface
            (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<6>::DeclareVertexInterface(void)'
              ::__l2::DefaultInterface);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultInterface'' @ 1504315c0

void __cdecl
`Metasound::TWaveWriterOperator<7>::DeclareVertexInterface'::__l2::
_dynamic_atexit_destructor_for__DefaultInterface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface
            (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<7>::DeclareVertexInterface(void)'
              ::__l2::DefaultInterface);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultInterface'' @ 1504315e0

void __cdecl
`Metasound::TWaveWriterOperator<8>::DeclareVertexInterface'::__l2::
_dynamic_atexit_destructor_for__DefaultInterface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface
            (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<8>::DeclareVertexInterface(void)'
              ::__l2::DefaultInterface);
  return;
}

// `dynamic_atexit_destructor_for_'InputDataMetadata'' @ 150431600

void __cdecl Metasound::VariableNames::_dynamic_atexit_destructor_for__InputDataMetadata__(void)

{
  if (InputDataMetadata.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*InputDataMetadata.DisplayName.TextData.Reference + 0x10))();
  }
  if (InputDataMetadata.Description.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150431629. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*InputDataMetadata.Description.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'InputInitialArrayDisplayName'' @ 150431640

void __cdecl
Metasound::ArrayNodeVertexNames::_dynamic_atexit_destructor_for__InputInitialArrayDisplayName__
          (void)

{
  if (InputInitialArrayDisplayName.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015043164f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*InputInitialArrayDisplayName.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'InputInitialArrayTooltip'' @ 150431660

void __cdecl
Metasound::ArrayNodeVertexNames::_dynamic_atexit_destructor_for__InputInitialArrayTooltip__(void)

{
  if (InputInitialArrayTooltip.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015043166f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*InputInitialArrayTooltip.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'InputVariableMetadata'' @ 150431680

void __cdecl Metasound::VariableNames::_dynamic_atexit_destructor_for__InputVariableMetadata__(void)

{
  if (InputVariableMetadata.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*InputVariableMetadata.DisplayName.TextData.Reference + 0x10))();
  }
  if (InputVariableMetadata.Description.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001504316a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*InputVariableMetadata.Description.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Metadata'' @ 1504316c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::TWaveWriterOperator<1>::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__
          (void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<1>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return;
}

// `dynamic_atexit_destructor_for_'Metadata'' @ 1504316e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::TWaveWriterOperator<2>::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__
          (void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<2>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return;
}

// `dynamic_atexit_destructor_for_'Metadata'' @ 150431700

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::TWaveWriterOperator<3>::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__
          (void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<3>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return;
}

// `dynamic_atexit_destructor_for_'Metadata'' @ 150431720

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::TWaveWriterOperator<4>::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__
          (void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<4>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return;
}

// `dynamic_atexit_destructor_for_'Metadata'' @ 150431740

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::TWaveWriterOperator<5>::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__
          (void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<5>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return;
}

// `dynamic_atexit_destructor_for_'Metadata'' @ 150431760

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::TWaveWriterOperator<6>::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__
          (void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<6>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return;
}

// `dynamic_atexit_destructor_for_'Metadata'' @ 150431780

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::TWaveWriterOperator<7>::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__
          (void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<7>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return;
}

// `dynamic_atexit_destructor_for_'Metadata'' @ 1504317a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::TWaveWriterOperator<8>::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__
          (void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TWaveWriterOperator<8>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return;
}

// `dynamic_atexit_destructor_for_'NumberedFileCacheSP'' @ 1504317c0

void __cdecl
`Metasound::WaveWriterOperatorPrivate::GetNameCache'::__l2::
_dynamic_atexit_destructor_for__NumberedFileCacheSP__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (NumberedFileCacheSP.SharedReferenceCount.ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'OutputDataMetadata'' @ 1504317e0

void __cdecl Metasound::VariableNames::_dynamic_atexit_destructor_for__OutputDataMetadata__(void)

{
  if (OutputDataMetadata.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*OutputDataMetadata.DisplayName.TextData.Reference + 0x10))();
  }
  if (OutputDataMetadata.Description.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150431809. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*OutputDataMetadata.Description.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'OutputVariableMetadata'' @ 150431820

void __cdecl
Metasound::VariableNames::_dynamic_atexit_destructor_for__OutputVariableMetadata__(void)

{
  if (OutputVariableMetadata.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*OutputVariableMetadata.DisplayName.TextData.Reference + 0x10))();
  }
  if (OutputVariableMetadata.Description.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150431849. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*OutputVariableMetadata.Description.TextData.Reference + 0x10))();
    return;
  }
  return;
}

