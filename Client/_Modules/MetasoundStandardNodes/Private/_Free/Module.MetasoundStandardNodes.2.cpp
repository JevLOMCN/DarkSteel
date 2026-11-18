// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 640

// `dynamic_initializer_for_'InputDataMetadata'' @ 1411e4a60

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

// `dynamic_initializer_for_'InputInitialArrayDisplayName'' @ 1411e4ad0

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

// `dynamic_initializer_for_'InputInitialArrayTooltip'' @ 1411e4b30

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

// `dynamic_initializer_for_'InputVariableMetadata'' @ 1411e4b90

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

// `dynamic_initializer_for_'OutputDataMetadata'' @ 1411e4c00

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

// `dynamic_initializer_for_'OutputVariableMetadata'' @ 1411e4c70

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

// `dynamic_initializer_for_'RegistrationActionConversionFConversionAudioToFloat'' @ 1411e4ce0

void __cdecl
Metasound::_dynamic_initializer_for__RegistrationActionConversionFConversionAudioToFloat__(void)

{
  FRegistrationAction **ppFVar1;
  
  ppFVar1 = Frontend::RegistrationPrivate::FMetasound_MetasoundStandardNodes_Registration::
            GetHeadAction();
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionConversionFConversionAudioToFloat,ppFVar1,
             RegisterConversionOperator<Metasound::FAudioBuffer,float>,
             (_func___cdecl_bool_FModuleInfo_ptr *)0x0);
  return;
}

// `dynamic_initializer_for_'RegistrationActionConversionFConversionFloatToAudio'' @ 1411e4d10

void __cdecl
Metasound::_dynamic_initializer_for__RegistrationActionConversionFConversionFloatToAudio__(void)

{
  FRegistrationAction **ppFVar1;
  
  ppFVar1 = Frontend::RegistrationPrivate::FMetasound_MetasoundStandardNodes_Registration::
            GetHeadAction();
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionConversionFConversionFloatToAudio,ppFVar1,
             RegisterConversionOperator<float,Metasound::FAudioBuffer>,
             (_func___cdecl_bool_FModuleInfo_ptr *)0x0);
  return;
}

// `dynamic_initializer_for_'RegistrationActionConversionFConversionFloatToTime'' @ 1411e4d40

void __cdecl
Metasound::_dynamic_initializer_for__RegistrationActionConversionFConversionFloatToTime__(void)

{
  FRegistrationAction **ppFVar1;
  
  ppFVar1 = Frontend::RegistrationPrivate::FMetasound_MetasoundStandardNodes_Registration::
            GetHeadAction();
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionConversionFConversionFloatToTime,ppFVar1,
             RegisterConversionOperator<float,Metasound::FTime>,
             (_func___cdecl_bool_FModuleInfo_ptr *)0x0);
  return;
}

// `dynamic_initializer_for_'RegistrationActionConversionFConversionInt32ToTime'' @ 1411e4d70

void __cdecl
Metasound::_dynamic_initializer_for__RegistrationActionConversionFConversionInt32ToTime__(void)

{
  FRegistrationAction **ppFVar1;
  
  ppFVar1 = Frontend::RegistrationPrivate::FMetasound_MetasoundStandardNodes_Registration::
            GetHeadAction();
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionConversionFConversionInt32ToTime,ppFVar1,
             RegisterConversionOperator<int,Metasound::FTime>,
             (_func___cdecl_bool_FModuleInfo_ptr *)0x0);
  return;
}

// `dynamic_initializer_for_'RegistrationActionConversionFConversionTimeToFloat'' @ 1411e4da0

void __cdecl
Metasound::_dynamic_initializer_for__RegistrationActionConversionFConversionTimeToFloat__(void)

{
  FRegistrationAction **ppFVar1;
  
  ppFVar1 = Frontend::RegistrationPrivate::FMetasound_MetasoundStandardNodes_Registration::
            GetHeadAction();
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionConversionFConversionTimeToFloat,ppFVar1,
             RegisterConversionOperator<Metasound::FTime,float>,
             (_func___cdecl_bool_FModuleInfo_ptr *)0x0);
  return;
}

// `dynamic_initializer_for_'RegistrationActionConversionFConversionTimeToInt32'' @ 1411e4dd0

void __cdecl
Metasound::_dynamic_initializer_for__RegistrationActionConversionFConversionTimeToInt32__(void)

{
  FRegistrationAction **ppFVar1;
  
  ppFVar1 = Frontend::RegistrationPrivate::FMetasound_MetasoundStandardNodes_Registration::
            GetHeadAction();
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionConversionFConversionTimeToInt32,ppFVar1,
             RegisterConversionOperator<Metasound::FTime,int>,
             (_func___cdecl_bool_FModuleInfo_ptr *)0x0);
  return;
}

// `dynamic_initializer_for_'RegistrationActionFBPMToSecondsNode'' @ 1411e4e00

void __cdecl Metasound::_dynamic_initializer_for__RegistrationActionFBPMToSecondsNode__(void)

{
  FRegistrationAction **ppFVar1;
  
  ppFVar1 = Frontend::RegistrationPrivate::FMetasound_MetasoundStandardNodes_Registration::
            GetHeadAction();
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFBPMToSecondsNode,ppFVar1,
             Frontend::RegisterNode<Metasound::FBPMToSecondsNode,void>,
             Frontend::UnregisterNode<Metasound::FBPMToSecondsNode>);
  return;
}

// `dynamic_initializer_for_'RegistrationActionFBitcrusherNode'' @ 1411e4e30

void __cdecl Metasound::_dynamic_initializer_for__RegistrationActionFBitcrusherNode__(void)

{
  FRegistrationAction **ppFVar1;
  
  ppFVar1 = Frontend::RegistrationPrivate::FMetasound_MetasoundStandardNodes_Registration::
            GetHeadAction();
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFBitcrusherNode,ppFVar1,
             Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::FBitcrusherOperator>,void>,
             Frontend::UnregisterNode<Metasound::TNodeFacade<Metasound::FBitcrusherOperator>_>);
  return;
}

// `dynamic_initializer_for_'RegistrationActionFClampNodeAudio'' @ 1411e4e60

void __cdecl Metasound::_dynamic_initializer_for__RegistrationActionFClampNodeAudio__(void)

{
  FRegistrationAction **ppFVar1;
  
  ppFVar1 = Frontend::RegistrationPrivate::FMetasound_MetasoundStandardNodes_Registration::
            GetHeadAction();
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFClampNodeAudio,ppFVar1,
             Frontend::
             RegisterNode<Metasound::TNodeFacade<Metasound::TClampNodeOperator<Metasound::FAudioBuffer>_>,void>
             ,Frontend::
              UnregisterNode<Metasound::TNodeFacade<Metasound::TClampNodeOperator<Metasound::FAudioBuffer>_>_>
            );
  return;
}

// `dynamic_initializer_for_'RegistrationActionFClampNodeFloat'' @ 1411e4e90

void __cdecl Metasound::_dynamic_initializer_for__RegistrationActionFClampNodeFloat__(void)

{
  FRegistrationAction **ppFVar1;
  
  ppFVar1 = Frontend::RegistrationPrivate::FMetasound_MetasoundStandardNodes_Registration::
            GetHeadAction();
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFClampNodeFloat,ppFVar1,
             Frontend::
             RegisterNode<Metasound::TNodeFacade<Metasound::TClampNodeOperator<float>_>,void>,
             Frontend::
             UnregisterNode<Metasound::TNodeFacade<Metasound::TClampNodeOperator<float>_>_>);
  return;
}

// `dynamic_initializer_for_'RegistrationActionFClampNodeInt32'' @ 1411e4ec0

void __cdecl Metasound::_dynamic_initializer_for__RegistrationActionFClampNodeInt32__(void)

{
  FRegistrationAction **ppFVar1;
  
  ppFVar1 = Frontend::RegistrationPrivate::FMetasound_MetasoundStandardNodes_Registration::
            GetHeadAction();
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFClampNodeInt32,ppFVar1,
             Frontend::
             RegisterNode<Metasound::TNodeFacade<Metasound::TClampNodeOperator<int>_>,void>,
             Frontend::UnregisterNode<Metasound::TNodeFacade<Metasound::TClampNodeOperator<int>_>_>)
  ;
  return;
}

// `dynamic_initializer_for_'RegistrationActionFCompressorNode'' @ 1411e4ef0

void __cdecl Metasound::_dynamic_initializer_for__RegistrationActionFCompressorNode__(void)

{
  FRegistrationAction **ppFVar1;
  
  ppFVar1 = Frontend::RegistrationPrivate::FMetasound_MetasoundStandardNodes_Registration::
            GetHeadAction();
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFCompressorNode,ppFVar1,
             Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::FCompressorOperator>,void>,
             Frontend::UnregisterNode<Metasound::TNodeFacade<Metasound::FCompressorOperator>_>);
  return;
}

// `dynamic_initializer_for_'RegistrationActionFConversionAudioToFloat'' @ 1411e4f20

void __cdecl Metasound::_dynamic_initializer_for__RegistrationActionFConversionAudioToFloat__(void)

{
  FRegistrationAction **ppFVar1;
  
  ppFVar1 = Frontend::RegistrationPrivate::FMetasound_MetasoundStandardNodes_Registration::
            GetHeadAction();
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFConversionAudioToFloat,ppFVar1,
             Frontend::
             RegisterNode<Metasound::TNodeFacade<Metasound::TConversionOperator<Metasound::FAudioBuffer,float>_>,void>
             ,Frontend::
              UnregisterNode<Metasound::TNodeFacade<Metasound::TConversionOperator<Metasound::FAudioBuffer,float>_>_>
            );
  return;
}

// `dynamic_initializer_for_'RegistrationActionFConversionFloatToAudio'' @ 1411e4f50

void __cdecl Metasound::_dynamic_initializer_for__RegistrationActionFConversionFloatToAudio__(void)

{
  FRegistrationAction **ppFVar1;
  
  ppFVar1 = Frontend::RegistrationPrivate::FMetasound_MetasoundStandardNodes_Registration::
            GetHeadAction();
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFConversionFloatToAudio,ppFVar1,
             Frontend::
             RegisterNode<Metasound::TNodeFacade<Metasound::TConversionOperator<float,Metasound::FAudioBuffer>_>,void>
             ,Frontend::
              UnregisterNode<Metasound::TNodeFacade<Metasound::TConversionOperator<float,Metasound::FAudioBuffer>_>_>
            );
  return;
}

// `dynamic_initializer_for_'RegistrationActionFConversionFloatToTime'' @ 1411e4f80

void __cdecl Metasound::_dynamic_initializer_for__RegistrationActionFConversionFloatToTime__(void)

{
  FRegistrationAction **ppFVar1;
  
  ppFVar1 = Frontend::RegistrationPrivate::FMetasound_MetasoundStandardNodes_Registration::
            GetHeadAction();
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFConversionFloatToTime,ppFVar1,
             Frontend::
             RegisterNode<Metasound::TNodeFacade<Metasound::TConversionOperator<float,Metasound::FTime>_>,void>
             ,Frontend::
              UnregisterNode<Metasound::TNodeFacade<Metasound::TConversionOperator<float,Metasound::FTime>_>_>
            );
  return;
}

// `dynamic_initializer_for_'RegistrationActionFConversionInt32ToTime'' @ 1411e4fb0

void __cdecl Metasound::_dynamic_initializer_for__RegistrationActionFConversionInt32ToTime__(void)

{
  FRegistrationAction **ppFVar1;
  
  ppFVar1 = Frontend::RegistrationPrivate::FMetasound_MetasoundStandardNodes_Registration::
            GetHeadAction();
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFConversionInt32ToTime,ppFVar1,
             Frontend::
             RegisterNode<Metasound::TNodeFacade<Metasound::TConversionOperator<int,Metasound::FTime>_>,void>
             ,Frontend::
              UnregisterNode<Metasound::TNodeFacade<Metasound::TConversionOperator<int,Metasound::FTime>_>_>
            );
  return;
}

// `dynamic_initializer_for_'RegistrationActionFConversionTimeToFloat'' @ 1411e4fe0

void __cdecl Metasound::_dynamic_initializer_for__RegistrationActionFConversionTimeToFloat__(void)

{
  FRegistrationAction **ppFVar1;
  
  ppFVar1 = Frontend::RegistrationPrivate::FMetasound_MetasoundStandardNodes_Registration::
            GetHeadAction();
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFConversionTimeToFloat,ppFVar1,
             Frontend::
             RegisterNode<Metasound::TNodeFacade<Metasound::TConversionOperator<Metasound::FTime,float>_>,void>
             ,Frontend::
              UnregisterNode<Metasound::TNodeFacade<Metasound::TConversionOperator<Metasound::FTime,float>_>_>
            );
  return;
}

// `dynamic_initializer_for_'RegistrationActionFConversionTimeToInt32'' @ 1411e5010

void __cdecl Metasound::_dynamic_initializer_for__RegistrationActionFConversionTimeToInt32__(void)

{
  FRegistrationAction **ppFVar1;
  
  ppFVar1 = Frontend::RegistrationPrivate::FMetasound_MetasoundStandardNodes_Registration::
            GetHeadAction();
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFConversionTimeToInt32,ppFVar1,
             Frontend::
             RegisterNode<Metasound::TNodeFacade<Metasound::TConversionOperator<Metasound::FTime,int>_>,void>
             ,Frontend::
              UnregisterNode<Metasound::TNodeFacade<Metasound::TConversionOperator<Metasound::FTime,int>_>_>
            );
  return;
}

// `dynamic_initializer_for_'RegistrationActionFCrossfadeNodeFAudioBuffer_2'' @ 1411e5040

void __cdecl
Metasound::_dynamic_initializer_for__RegistrationActionFCrossfadeNodeFAudioBuffer_2__(void)

{
  FRegistrationAction **ppFVar1;
  
  ppFVar1 = Frontend::RegistrationPrivate::FMetasound_MetasoundStandardNodes_Registration::
            GetHeadAction();
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFCrossfadeNodeFAudioBuffer_2,ppFVar1,
             Frontend::
             RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>_>,void>
             ,Frontend::
              UnregisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>_>_>
            );
  return;
}

// `dynamic_initializer_for_'RegistrationActionFCrossfadeNodeFAudioBuffer_3'' @ 1411e5070

void __cdecl
Metasound::_dynamic_initializer_for__RegistrationActionFCrossfadeNodeFAudioBuffer_3__(void)

{
  FRegistrationAction **ppFVar1;
  
  ppFVar1 = Frontend::RegistrationPrivate::FMetasound_MetasoundStandardNodes_Registration::
            GetHeadAction();
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFCrossfadeNodeFAudioBuffer_3,ppFVar1,
             Frontend::
             RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>_>,void>
             ,Frontend::
              UnregisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>_>_>
            );
  return;
}

// `dynamic_initializer_for_'RegistrationActionFCrossfadeNodeFAudioBuffer_4'' @ 1411e50a0

void __cdecl
Metasound::_dynamic_initializer_for__RegistrationActionFCrossfadeNodeFAudioBuffer_4__(void)

{
  FRegistrationAction **ppFVar1;
  
  ppFVar1 = Frontend::RegistrationPrivate::FMetasound_MetasoundStandardNodes_Registration::
            GetHeadAction();
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFCrossfadeNodeFAudioBuffer_4,ppFVar1,
             Frontend::
             RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>_>,void>
             ,Frontend::
              UnregisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>_>_>
            );
  return;
}

// `dynamic_initializer_for_'RegistrationActionFCrossfadeNodeFAudioBuffer_5'' @ 1411e50d0

void __cdecl
Metasound::_dynamic_initializer_for__RegistrationActionFCrossfadeNodeFAudioBuffer_5__(void)

{
  FRegistrationAction **ppFVar1;
  
  ppFVar1 = Frontend::RegistrationPrivate::FMetasound_MetasoundStandardNodes_Registration::
            GetHeadAction();
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFCrossfadeNodeFAudioBuffer_5,ppFVar1,
             Frontend::
             RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>_>,void>
             ,Frontend::
              UnregisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>_>_>
            );
  return;
}

// `dynamic_initializer_for_'RegistrationActionFCrossfadeNodeFAudioBuffer_6'' @ 1411e5100

void __cdecl
Metasound::_dynamic_initializer_for__RegistrationActionFCrossfadeNodeFAudioBuffer_6__(void)

{
  FRegistrationAction **ppFVar1;
  
  ppFVar1 = Frontend::RegistrationPrivate::FMetasound_MetasoundStandardNodes_Registration::
            GetHeadAction();
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFCrossfadeNodeFAudioBuffer_6,ppFVar1,
             Frontend::
             RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>_>,void>
             ,Frontend::
              UnregisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>_>_>
            );
  return;
}

// `dynamic_initializer_for_'RegistrationActionFCrossfadeNodeFAudioBuffer_7'' @ 1411e5130

void __cdecl
Metasound::_dynamic_initializer_for__RegistrationActionFCrossfadeNodeFAudioBuffer_7__(void)

{
  FRegistrationAction **ppFVar1;
  
  ppFVar1 = Frontend::RegistrationPrivate::FMetasound_MetasoundStandardNodes_Registration::
            GetHeadAction();
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFCrossfadeNodeFAudioBuffer_7,ppFVar1,
             Frontend::
             RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>_>,void>
             ,Frontend::
              UnregisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>_>_>
            );
  return;
}

// `dynamic_initializer_for_'RegistrationActionFCrossfadeNodeFAudioBuffer_8'' @ 1411e5160

void __cdecl
Metasound::_dynamic_initializer_for__RegistrationActionFCrossfadeNodeFAudioBuffer_8__(void)

{
  FRegistrationAction **ppFVar1;
  
  ppFVar1 = Frontend::RegistrationPrivate::FMetasound_MetasoundStandardNodes_Registration::
            GetHeadAction();
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFCrossfadeNodeFAudioBuffer_8,ppFVar1,
             Frontend::
             RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>_>,void>
             ,Frontend::
              UnregisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>_>_>
            );
  return;
}

// `dynamic_initializer_for_'RegistrationActionFCrossfadeNodefloat_2'' @ 1411e5190

void __cdecl Metasound::_dynamic_initializer_for__RegistrationActionFCrossfadeNodefloat_2__(void)

{
  FRegistrationAction **ppFVar1;
  
  ppFVar1 = Frontend::RegistrationPrivate::FMetasound_MetasoundStandardNodes_Registration::
            GetHeadAction();
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFCrossfadeNodefloat_2,ppFVar1,
             Frontend::
             RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,2>_>,void>,
             Frontend::
             UnregisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,2>_>_>);
  return;
}

// `dynamic_initializer_for_'RegistrationActionFCrossfadeNodefloat_3'' @ 1411e51c0

void __cdecl Metasound::_dynamic_initializer_for__RegistrationActionFCrossfadeNodefloat_3__(void)

{
  FRegistrationAction **ppFVar1;
  
  ppFVar1 = Frontend::RegistrationPrivate::FMetasound_MetasoundStandardNodes_Registration::
            GetHeadAction();
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFCrossfadeNodefloat_3,ppFVar1,
             Frontend::
             RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,3>_>,void>,
             Frontend::
             UnregisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,3>_>_>);
  return;
}

// `dynamic_initializer_for_'RegistrationActionFCrossfadeNodefloat_4'' @ 1411e51f0

void __cdecl Metasound::_dynamic_initializer_for__RegistrationActionFCrossfadeNodefloat_4__(void)

{
  FRegistrationAction **ppFVar1;
  
  ppFVar1 = Frontend::RegistrationPrivate::FMetasound_MetasoundStandardNodes_Registration::
            GetHeadAction();
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFCrossfadeNodefloat_4,ppFVar1,
             Frontend::
             RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,4>_>,void>,
             Frontend::
             UnregisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,4>_>_>);
  return;
}

// `dynamic_initializer_for_'RegistrationActionFCrossfadeNodefloat_5'' @ 1411e5220

void __cdecl Metasound::_dynamic_initializer_for__RegistrationActionFCrossfadeNodefloat_5__(void)

{
  FRegistrationAction **ppFVar1;
  
  ppFVar1 = Frontend::RegistrationPrivate::FMetasound_MetasoundStandardNodes_Registration::
            GetHeadAction();
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFCrossfadeNodefloat_5,ppFVar1,
             Frontend::
             RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,5>_>,void>,
             Frontend::
             UnregisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,5>_>_>);
  return;
}

// `dynamic_initializer_for_'RegistrationActionFCrossfadeNodefloat_6'' @ 1411e5250

void __cdecl Metasound::_dynamic_initializer_for__RegistrationActionFCrossfadeNodefloat_6__(void)

{
  FRegistrationAction **ppFVar1;
  
  ppFVar1 = Frontend::RegistrationPrivate::FMetasound_MetasoundStandardNodes_Registration::
            GetHeadAction();
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFCrossfadeNodefloat_6,ppFVar1,
             Frontend::
             RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,6>_>,void>,
             Frontend::
             UnregisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,6>_>_>);
  return;
}

// `dynamic_initializer_for_'RegistrationActionFCrossfadeNodefloat_7'' @ 1411e5280

void __cdecl Metasound::_dynamic_initializer_for__RegistrationActionFCrossfadeNodefloat_7__(void)

{
  FRegistrationAction **ppFVar1;
  
  ppFVar1 = Frontend::RegistrationPrivate::FMetasound_MetasoundStandardNodes_Registration::
            GetHeadAction();
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFCrossfadeNodefloat_7,ppFVar1,
             Frontend::
             RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,7>_>,void>,
             Frontend::
             UnregisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,7>_>_>);
  return;
}

// `dynamic_initializer_for_'RegistrationActionFCrossfadeNodefloat_8'' @ 1411e52b0

void __cdecl Metasound::_dynamic_initializer_for__RegistrationActionFCrossfadeNodefloat_8__(void)

{
  FRegistrationAction **ppFVar1;
  
  ppFVar1 = Frontend::RegistrationPrivate::FMetasound_MetasoundStandardNodes_Registration::
            GetHeadAction();
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFCrossfadeNodefloat_8,ppFVar1,
             Frontend::
             RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,8>_>,void>,
             Frontend::
             UnregisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,8>_>_>);
  return;
}

// `dynamic_initializer_for_'RegistrationActionFDecibelsToLinearGainNode'' @ 1411e52e0

void __cdecl
Metasound::_dynamic_initializer_for__RegistrationActionFDecibelsToLinearGainNode__(void)

{
  FRegistrationAction **ppFVar1;
  
  ppFVar1 = Frontend::RegistrationPrivate::FMetasound_MetasoundStandardNodes_Registration::
            GetHeadAction();
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFDecibelsToLinearGainNode,ppFVar1,
             Frontend::
             RegisterNode<Metasound::TNodeFacade<Metasound::FDecibelsToLinearGainOperator>,void>,
             Frontend::
             UnregisterNode<Metasound::TNodeFacade<Metasound::FDecibelsToLinearGainOperator>_>);
  return;
}

// `dynamic_initializer_for_'RegistrationActionFDelayNode'' @ 1411e5310

void __cdecl Metasound::_dynamic_initializer_for__RegistrationActionFDelayNode__(void)

{
  FRegistrationAction **ppFVar1;
  
  ppFVar1 = Frontend::RegistrationPrivate::FMetasound_MetasoundStandardNodes_Registration::
            GetHeadAction();
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFDelayNode,ppFVar1,
             Frontend::
             RegisterNode<Metasound::TNodeFacade<Metasound::TDelayNodeOperator<Metasound::FTime>_>,void>
             ,Frontend::
              UnregisterNode<Metasound::TNodeFacade<Metasound::TDelayNodeOperator<Metasound::FTime>_>_>
            );
  return;
}

// `dynamic_initializer_for_'RegistrationActionFDelayNodeAudio'' @ 1411e5340

void __cdecl Metasound::_dynamic_initializer_for__RegistrationActionFDelayNodeAudio__(void)

{
  FRegistrationAction **ppFVar1;
  
  ppFVar1 = Frontend::RegistrationPrivate::FMetasound_MetasoundStandardNodes_Registration::
            GetHeadAction();
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFDelayNodeAudio,ppFVar1,
             Frontend::
             RegisterNode<Metasound::TNodeFacade<Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>_>,void>
             ,Frontend::
              UnregisterNode<Metasound::TNodeFacade<Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>_>_>
            );
  return;
}

// `dynamic_initializer_for_'RegistrationActionFDiffuserNode'' @ 1411e5370

void __cdecl Metasound::_dynamic_initializer_for__RegistrationActionFDiffuserNode__(void)

{
  FRegistrationAction **ppFVar1;
  
  ppFVar1 = Frontend::RegistrationPrivate::FMetasound_MetasoundStandardNodes_Registration::
            GetHeadAction();
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFDiffuserNode,ppFVar1,
             Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::FDiffuserOperator>,void>,
             Frontend::UnregisterNode<Metasound::TNodeFacade<Metasound::FDiffuserOperator>_>);
  return;
}

// `dynamic_initializer_for_'RegistrationActionFDopperPitchShiftNode'' @ 1411e53a0

void __cdecl Metasound::_dynamic_initializer_for__RegistrationActionFDopperPitchShiftNode__(void)

{
  FRegistrationAction **ppFVar1;
  
  ppFVar1 = Frontend::RegistrationPrivate::FMetasound_MetasoundStandardNodes_Registration::
            GetHeadAction();
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFDopperPitchShiftNode,ppFVar1,
             Frontend::
             RegisterNode<Metasound::TNodeFacade<Metasound::FDopplerPitchShiftOperator>,void>,
             Frontend::
             UnregisterNode<Metasound::TNodeFacade<Metasound::FDopplerPitchShiftOperator>_>);
  return;
}

// `dynamic_initializer_for_'RegistrationActionFDynamicFilterNode'' @ 1411e53d0

void __cdecl Metasound::_dynamic_initializer_for__RegistrationActionFDynamicFilterNode__(void)

{
  FRegistrationAction **ppFVar1;
  
  ppFVar1 = Frontend::RegistrationPrivate::FMetasound_MetasoundStandardNodes_Registration::
            GetHeadAction();
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFDynamicFilterNode,ppFVar1,
             Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::FDynamicFilterOperator>,void>,
             Frontend::UnregisterNode<Metasound::TNodeFacade<Metasound::FDynamicFilterOperator>_>);
  return;
}

// `dynamic_initializer_for_'RegistrationActionFEnvelopeFollowerNode'' @ 1411e5400

void __cdecl Metasound::_dynamic_initializer_for__RegistrationActionFEnvelopeFollowerNode__(void)

{
  FRegistrationAction **ppFVar1;
  
  ppFVar1 = Frontend::RegistrationPrivate::FMetasound_MetasoundStandardNodes_Registration::
            GetHeadAction();
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFEnvelopeFollowerNode,ppFVar1,
             Frontend::RegisterNode<Metasound::FEnvelopeFollowerNode,void>,
             Frontend::UnregisterNode<Metasound::FEnvelopeFollowerNode>);
  return;
}

// `dynamic_initializer_for_'RegistrationActionFPrintLogNodeBool'' @ 1411e5430

void __cdecl Metasound::_dynamic_initializer_for__RegistrationActionFPrintLogNodeBool__(void)

{
  FRegistrationAction **ppFVar1;
  
  ppFVar1 = Frontend::RegistrationPrivate::FMetasound_MetasoundStandardNodes_Registration::
            GetHeadAction();
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFPrintLogNodeBool,ppFVar1,
             Frontend::
             RegisterNode<Metasound::TNodeFacade<Metasound::TPrintLogOperator<bool>_>,void>,
             Frontend::UnregisterNode<Metasound::TNodeFacade<Metasound::TPrintLogOperator<bool>_>_>)
  ;
  return;
}

// `dynamic_initializer_for_'RegistrationActionFPrintLogNodeFloat'' @ 1411e5460

void __cdecl Metasound::_dynamic_initializer_for__RegistrationActionFPrintLogNodeFloat__(void)

{
  FRegistrationAction **ppFVar1;
  
  ppFVar1 = Frontend::RegistrationPrivate::FMetasound_MetasoundStandardNodes_Registration::
            GetHeadAction();
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFPrintLogNodeFloat,ppFVar1,
             Frontend::
             RegisterNode<Metasound::TNodeFacade<Metasound::TPrintLogOperator<float>_>,void>,
             Frontend::UnregisterNode<Metasound::TNodeFacade<Metasound::TPrintLogOperator<float>_>_>
            );
  return;
}

// `dynamic_initializer_for_'RegistrationActionFPrintLogNodeInt32'' @ 1411e5490

void __cdecl Metasound::_dynamic_initializer_for__RegistrationActionFPrintLogNodeInt32__(void)

{
  FRegistrationAction **ppFVar1;
  
  ppFVar1 = Frontend::RegistrationPrivate::FMetasound_MetasoundStandardNodes_Registration::
            GetHeadAction();
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFPrintLogNodeInt32,ppFVar1,
             Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::TPrintLogOperator<int>_>,void>
             ,Frontend::UnregisterNode<Metasound::TNodeFacade<Metasound::TPrintLogOperator<int>_>_>)
  ;
  return;
}

// `dynamic_initializer_for_'RegistrationActionFPrintLogNodeString'' @ 1411e54c0

void __cdecl Metasound::_dynamic_initializer_for__RegistrationActionFPrintLogNodeString__(void)

{
  FRegistrationAction **ppFVar1;
  
  ppFVar1 = Frontend::RegistrationPrivate::FMetasound_MetasoundStandardNodes_Registration::
            GetHeadAction();
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFPrintLogNodeString,ppFVar1,
             Frontend::
             RegisterNode<Metasound::TNodeFacade<Metasound::TPrintLogOperator<FString>_>,void>,
             Frontend::
             UnregisterNode<Metasound::TNodeFacade<Metasound::TPrintLogOperator<FString>_>_>);
  return;
}

// `dynamic_initializer_for_'RegistrationActionFTriggerOnNanNode'' @ 1411e54f0

void __cdecl Metasound::_dynamic_initializer_for__RegistrationActionFTriggerOnNanNode__(void)

{
  FRegistrationAction **ppFVar1;
  
  ppFVar1 = Frontend::RegistrationPrivate::FMetasound_MetasoundStandardNodes_Registration::
            GetHeadAction();
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationActionFTriggerOnNanNode,ppFVar1,
             Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::FTriggerOnNanOperator>,void>,
             Frontend::UnregisterNode<Metasound::TNodeFacade<Metasound::FTriggerOnNanOperator>_>);
  return;
}

// `dynamic_initializer_for_'RegistrationAction_DataTypeRegistration246'' @ 1411e5520

void __cdecl Metasound::_dynamic_initializer_for__RegistrationAction_DataTypeRegistration246__(void)

{
  FRegistrationAction **ppFVar1;
  
  ppFVar1 = Frontend::RegistrationPrivate::FMetasound_MetasoundStandardNodes_Registration::
            GetHeadAction();
  Frontend::RegistrationPrivate::FRegistrationAction::FRegistrationAction
            (&RegistrationAction_DataTypeRegistration246,ppFVar1,
             Frontend::RegisterDataType<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,2,void>,
             (_func___cdecl_bool_FModuleInfo_ptr *)0x0);
  return;
}

// `scalar_deleting_destructor' @ 14b034320

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TConversionOperator<float,Metasound::FTime>_>_>
::_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TConversionOperator<float,Metasound::FTime>_>_>
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

// `scalar_deleting_destructor' @ 14b0343b0

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TConversionOperator<float,Metasound::FTime>_>,void>
::_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TConversionOperator<float,Metasound::FTime>_>,void>
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

// `scalar_deleting_destructor' @ 14b0344d0

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TConversionOperator<Metasound::FTime,float>_>_>
::_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TConversionOperator<Metasound::FTime,float>_>_>
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

// `scalar_deleting_destructor' @ 14b034560

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TConversionOperator<Metasound::FTime,float>_>,void>
::_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TConversionOperator<Metasound::FTime,float>_>,void>
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

// `scalar_deleting_destructor' @ 14b034600

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &___7__TReferenceControllerBase__0A__SharedPointerInternals__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b034640

void * __thiscall
Metasound::TNodeFacade<Metasound::FDiffuserOperator>::_scalar_deleting_destructor_
          (TNodeFacade<Metasound::FDiffuserOperator> *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14b034730

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TConversionOperator<int,Metasound::FTime>_>_>
::_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TConversionOperator<int,Metasound::FTime>_>_>
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

// `scalar_deleting_destructor' @ 14b0347c0

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TConversionOperator<int,Metasound::FTime>_>,void>
::_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TConversionOperator<int,Metasound::FTime>_>,void>
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

// `scalar_deleting_destructor' @ 14b0348f0

void * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::_scalar_deleting_destructor_
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

// `scalar_deleting_destructor' @ 14b0349f0

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
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

// `scalar_deleting_destructor' @ 14b034a80

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>,void>
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

// `scalar_deleting_destructor' @ 14b034ba0

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TConversionOperator<Metasound::FTime,int>_>_>
::_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TConversionOperator<Metasound::FTime,int>_>_>
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

// `scalar_deleting_destructor' @ 14b034c30

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TConversionOperator<Metasound::FTime,int>_>,void>
::_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TConversionOperator<Metasound::FTime,int>_>,void>
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

// `scalar_deleting_destructor' @ 14b034cc0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void * __thiscall
Metasound::TLiteralNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
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

// `scalar_deleting_destructor' @ 14b034d60

void * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
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

// `scalar_deleting_destructor' @ 14b034dc0

void * __thiscall
Metasound::
TNodeFacade<Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
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

// `scalar_deleting_destructor' @ 14b034ed0

void * __thiscall
Metasound::
TNodeFacade<Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
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

// `scalar_deleting_destructor' @ 14b034f30

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,bool>_>
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

// `scalar_deleting_destructor' @ 14b034fc0

void * __thiscall
Metasound::TNodeFacade<Metasound::FDopplerPitchShiftOperator>::_scalar_deleting_destructor_
          (TNodeFacade<Metasound::FDopplerPitchShiftOperator> *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14b035020

void * __thiscall
Metasound::
TNodeFacade<Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
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

// `scalar_deleting_destructor' @ 14b035080

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,bool>,void>
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

// `scalar_deleting_destructor' @ 14b035110

void * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,1>::
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

// `scalar_deleting_destructor' @ 14b035200

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TConversionOperator<float,Metasound::FAudioBuffer>_>_>
::_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TConversionOperator<float,Metasound::FAudioBuffer>_>_>
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

// `scalar_deleting_destructor' @ 14b035290

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TConversionOperator<float,Metasound::FAudioBuffer>_>,void>
::_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TConversionOperator<float,Metasound::FAudioBuffer>_>,void>
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

// `scalar_deleting_destructor' @ 14b0353a0

void * __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
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

// `scalar_deleting_destructor' @ 14b0354e0

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,int>_>
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

// `scalar_deleting_destructor' @ 14b035570

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,int>,void>
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

// `scalar_deleting_destructor' @ 14b035690

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TConversionOperator<Metasound::FAudioBuffer,float>_>_>
::_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TConversionOperator<Metasound::FAudioBuffer,float>_>_>
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

// `scalar_deleting_destructor' @ 14b035720

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TConversionOperator<Metasound::FAudioBuffer,float>_>,void>
::_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TConversionOperator<Metasound::FAudioBuffer,float>_>,void>
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

// `scalar_deleting_destructor' @ 14b0357e0

void * __thiscall
Metasound::TExecutableOperator<Metasound::FCompressorOperator>::_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::FCompressorOperator> *this,uint param_1)

{
  *this = (TExecutableOperator<Metasound::FCompressorOperator>)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b035e90

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,float>_>
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

// `scalar_deleting_destructor' @ 14b035fb0

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,float>,void>
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

// `scalar_deleting_destructor' @ 14b036040

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,2>_>_>::
_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,2>_>_>
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

// `scalar_deleting_destructor' @ 14b0360d0

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,2>_>,void>::
_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,2>_>,void>
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

// `scalar_deleting_destructor' @ 14b036160

void * __thiscall
Metasound::MetasoundInputNodePrivate::
TInputValueOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
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

// `scalar_deleting_destructor' @ 14b0361d0

void * __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
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

// `scalar_deleting_destructor' @ 14b036230

void * __thiscall
Metasound::TOutputNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,0>::
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

// `scalar_deleting_destructor' @ 14b036290

void * __thiscall
Metasound::FCompressorOperator::_scalar_deleting_destructor_(FCompressorOperator *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->DelayedInputSignal).Buffer.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  Audio::FIntegerDelay::~FIntegerDelay(&this->InputDelay);
  Audio::FDynamicsProcessor::~FDynamicsProcessor(&this->Compressor);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->EnvelopeOutput).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->AudioOutput).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->WetDryMixInput).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->bIsUpwardsInput).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->bIsAnalogInput).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->EnvelopeModeInput).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SidechainInput).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->KneeInput).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->LookaheadTimeInput).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->ReleaseTimeInput).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->AttackTimeInput).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->ThresholdDbInput).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->RatioInput).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->AudioInput).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->bIsBypassedInput).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x340);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b0364d0

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TSendNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>::
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

// `scalar_deleting_destructor' @ 14b036560

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,3>_>_>::
_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,3>_>_>
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

// `scalar_deleting_destructor' @ 14b0365f0

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TSendNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>,void>::
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

// `scalar_deleting_destructor' @ 14b036680

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,3>_>,void>::
_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,3>_>,void>
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

// `scalar_deleting_destructor' @ 14b036710

void * __thiscall
Metasound::TOutputNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,1>::
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

// `scalar_deleting_destructor' @ 14b036890

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TReceiveNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
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

// `scalar_deleting_destructor' @ 14b036950

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,4>_>_>::
_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,4>_>_>
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

// `scalar_deleting_destructor' @ 14b0369e0

void * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,float>::FConverterOperator>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b036a20

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TReceiveNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>,void>
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

// `scalar_deleting_destructor' @ 14b036bb0

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,4>_>,void>::
_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,4>_>,void>
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

// `scalar_deleting_destructor' @ 14b036c40

void * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,float>::
FConverterOperator::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound__M_Metasound__6B_
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

// `scalar_deleting_destructor' @ 14b036ca0

void * __thiscall
Metasound::
TNodeFacade<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
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

// `scalar_deleting_destructor' @ 14b036d90

void * __thiscall
Metasound::TReceiveNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
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

// `scalar_deleting_destructor' @ 14b036df0

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,5>_>_>::
_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,5>_>_>
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

// `scalar_deleting_destructor' @ 14b036eb0

void * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,int>::FConverterOperator>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b036ef0

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,5>_>,void>::
_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,5>_>,void>
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

// `scalar_deleting_destructor' @ 14b0370e0

void * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,int>::
FConverterOperator::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound__H_Metasound__6B_
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

// `scalar_deleting_destructor' @ 14b037170

void * __thiscall
Metasound::TExecutableOperator<Metasound::TConversionOperator<float,Metasound::FTime>_>::
_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::TConversionOperator<float,Metasound::FTime>_> *this,
          uint param_1)

{
  *this = (TExecutableOperator<Metasound::TConversionOperator<float,Metasound::FTime>_>)
          &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b0372d0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b037310

void * __thiscall
Metasound::TConversionOperator<float,Metasound::FTime>::_scalar_deleting_destructor_
          (TConversionOperator<float,Metasound::FTime> *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputValue).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b0373a0

void * __thiscall
Metasound::TExecutableOperator<Metasound::TConversionOperator<Metasound::FTime,float>_>::
_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::TConversionOperator<Metasound::FTime,float>_> *this,
          uint param_1)

{
  *this = (TExecutableOperator<Metasound::TConversionOperator<Metasound::FTime,float>_>)
          &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b037500

void * __thiscall
Metasound::TConversionOperator<Metasound::FTime,float>::_scalar_deleting_destructor_
          (TConversionOperator<Metasound::FTime,float> *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputValue).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b037590

void * __thiscall
Metasound::TExecutableOperator<Metasound::TConversionOperator<int,Metasound::FTime>_>::
_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::TConversionOperator<int,Metasound::FTime>_> *this,
          uint param_1)

{
  *this = (TExecutableOperator<Metasound::TConversionOperator<int,Metasound::FTime>_>)
          &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b0376f0

void * __thiscall
Metasound::TConversionOperator<int,Metasound::FTime>::_scalar_deleting_destructor_
          (TConversionOperator<int,Metasound::FTime> *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputValue).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b037810

void * __thiscall
Metasound::TExecutableOperator<Metasound::TConversionOperator<Metasound::FTime,int>_>::
_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::TConversionOperator<Metasound::FTime,int>_> *this,
          uint param_1)

{
  *this = (TExecutableOperator<Metasound::TConversionOperator<Metasound::FTime,int>_>)
          &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b0378e0

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,6>_>_>::
_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,6>_>_>
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

// `scalar_deleting_destructor' @ 14b037a00

void * __thiscall
Metasound::TConversionOperator<Metasound::FTime,int>::_scalar_deleting_destructor_
          (TConversionOperator<Metasound::FTime,int> *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputValue).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b037a60

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,6>_>,void>::
_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,6>_>,void>
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

// `scalar_deleting_destructor' @ 14b037b20

void * __thiscall
Metasound::TExecutableOperator<Metasound::TConversionOperator<float,Metasound::FAudioBuffer>_>::
_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::TConversionOperator<float,Metasound::FAudioBuffer>_> *this
          ,uint param_1)

{
  *this = (TExecutableOperator<Metasound::TConversionOperator<float,Metasound::FAudioBuffer>_>)
          &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b037c80

void * __thiscall
Metasound::TConversionOperator<float,Metasound::FAudioBuffer>::_scalar_deleting_destructor_
          (TConversionOperator<float,Metasound::FAudioBuffer> *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputValue).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b037d30

void * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,bool>::FConverterOperator>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b037e80

void * __thiscall
Metasound::TExecutableOperator<Metasound::TConversionOperator<Metasound::FAudioBuffer,float>_>::
_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::TConversionOperator<Metasound::FAudioBuffer,float>_> *this
          ,uint param_1)

{
  *this = (TExecutableOperator<Metasound::TConversionOperator<Metasound::FAudioBuffer,float>_>)
          &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b037ec0

void * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,bool>::
FConverterOperator::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___N_Metasound__6B_
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

// `scalar_deleting_destructor' @ 14b038040

void * __thiscall
Metasound::TConversionOperator<Metasound::FAudioBuffer,float>::_scalar_deleting_destructor_
          (TConversionOperator<Metasound::FAudioBuffer,float> *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputValue).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b038130

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,7>_>_>::
_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,7>_>_>
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

// `scalar_deleting_destructor' @ 14b0381c0

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,7>_>,void>::
_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,7>_>,void>
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

// `scalar_deleting_destructor' @ 14b038250

void * __thiscall
Metasound::TNodeFacade<Metasound::FCompressorOperator>::_scalar_deleting_destructor_
          (TNodeFacade<Metasound::FCompressorOperator> *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14b0382e0

void * __thiscall
Metasound::
TExecutableOperator<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::FConverterOperator>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b038450

void * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
FConverterOperator::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7FConverterOperator___TAutoConverterNode_HV__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_
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

// `scalar_deleting_destructor' @ 14b0384b0

void * __thiscall
Metasound::TExecutableOperator<Metasound::FBitcrusherOperator>::_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::FBitcrusherOperator> *this,uint param_1)

{
  *this = (TExecutableOperator<Metasound::FBitcrusherOperator>)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b038760

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,8>_>_>::
_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,8>_>_>
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

// `scalar_deleting_destructor' @ 14b0387f0

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,8>_>,void>::
_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,8>_>,void>
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

// `scalar_deleting_destructor' @ 14b038880

void * __thiscall
Metasound::TNodeFacade<Metasound::TConversionOperator<float,Metasound::FTime>_>::
_scalar_deleting_destructor_
          (TNodeFacade<Metasound::TConversionOperator<float,Metasound::FTime>_> *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14b0388e0

void * __thiscall
Metasound::TNodeFacade<Metasound::TConversionOperator<Metasound::FTime,float>_>::
_scalar_deleting_destructor_
          (TNodeFacade<Metasound::TConversionOperator<Metasound::FTime,float>_> *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14b0389d0

void * __thiscall
Metasound::TNodeFacade<Metasound::TConversionOperator<int,Metasound::FTime>_>::
_scalar_deleting_destructor_
          (TNodeFacade<Metasound::TConversionOperator<int,Metasound::FTime>_> *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14b038a60

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>_>_>
::_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>_>_>
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

// `scalar_deleting_destructor' @ 14b038af0

void * __thiscall
Metasound::TExecutableOperator<Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>_>::
_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>_> *this,
          uint param_1)

{
  *this = (TExecutableOperator<Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>_>)
          &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b038bb0

void * __thiscall
Metasound::TDataWriteReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b038bf0

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>_>,void>
::_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>_>,void>
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

// `scalar_deleting_destructor' @ 14b038fb0

void * __thiscall
Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>::_scalar_deleting_destructor_
          (TDelayNodeOperator<Metasound::FAudioBuffer> *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerReset).field_0x10);
  Audio::FDelay::~FDelay(&this->DelayBuffer);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->AudioOutput).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Feedback).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->WetLevel).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->DryLevel).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->DelayTime).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->AudioInput).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b039080

void * __thiscall
Metasound::TNodeFacade<Metasound::TConversionOperator<Metasound::FTime,int>_>::
_scalar_deleting_destructor_
          (TNodeFacade<Metasound::TConversionOperator<Metasound::FTime,int>_> *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14b0392e0

void * __thiscall
Metasound::TExecutableOperator<Metasound::TDelayNodeOperator<Metasound::FTime>_>::
_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::TDelayNodeOperator<Metasound::FTime>_> *this,uint param_1)

{
  *this = (TExecutableOperator<Metasound::TDelayNodeOperator<Metasound::FTime>_>)
          &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b039320

void * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>'::__l3::FEnumHandler::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b039690

void * __thiscall
Metasound::FBitcrusherOperator::_scalar_deleting_destructor_(FBitcrusherOperator *this,uint param_1)

{
  Audio::FBitCrusher::~FBitCrusher(&this->Bitcrusher);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->CrushedBitDepth).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->CrushedSampleRate).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->AudioOutput).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->AudioInput).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b039700

void * __thiscall
Metasound::TDelayNodeOperator<Metasound::FTime>::_scalar_deleting_destructor_
          (TDelayNodeOperator<Metasound::FTime> *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerReset).field_0x10);
  Audio::FDelay::~FDelay(&this->DelayBuffer);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->AudioOutput).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Feedback).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->WetLevel).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->DryLevel).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->DelayTime).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->AudioInput).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b0397a0

void * __thiscall
Metasound::TNodeFacade<Metasound::TConversionOperator<float,Metasound::FAudioBuffer>_>::
_scalar_deleting_destructor_
          (TNodeFacade<Metasound::TConversionOperator<float,Metasound::FAudioBuffer>_> *this,
          uint param_1)

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

// `scalar_deleting_destructor' @ 14b039830

void * __thiscall
Metasound::TExecutableOperator<Metasound::TPrintLogOperator<FString>_>::_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::TPrintLogOperator<FString>_> *this,uint param_1)

{
  *this = (TExecutableOperator<Metasound::TPrintLogOperator<FString>_>)&___7IOperator_Metasound__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b0399e0

void * __thiscall
Metasound::TPrintLogOperator<FString>::_scalar_deleting_destructor_
          (TPrintLogOperator<FString> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->GraphName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->ValueToLog).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Label).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Trigger).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b039a50

void * __thiscall
Metasound::TNodeFacade<Metasound::TConversionOperator<Metasound::FAudioBuffer,float>_>::
_scalar_deleting_destructor_
          (TNodeFacade<Metasound::TConversionOperator<Metasound::FAudioBuffer,float>_> *this,
          uint param_1)

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

// `scalar_deleting_destructor' @ 14b039ae0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,1>,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b039b20

void * __thiscall
Metasound::TExecutableOperator<Metasound::TPrintLogOperator<bool>_>::_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::TPrintLogOperator<bool>_> *this,uint param_1)

{
  *this = (TExecutableOperator<Metasound::TPrintLogOperator<bool>_>)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b039d50

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>_>_>
::_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>_>_>
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

// `scalar_deleting_destructor' @ 14b039de0

void * __thiscall
Metasound::TPrintLogOperator<bool>::_scalar_deleting_destructor_
          (TPrintLogOperator<bool> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->GraphName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->ValueToLog).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Label).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Trigger).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b039e50

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>_>,void>
::_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>_>,void>
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

// `scalar_deleting_destructor' @ 14b039f00

void * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,0>::
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

// `scalar_deleting_destructor' @ 14b039f70

void * __thiscall
Metasound::TExecutableOperator<Metasound::TPrintLogOperator<float>_>::_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::TPrintLogOperator<float>_> *this,uint param_1)

{
  *this = (TExecutableOperator<Metasound::TPrintLogOperator<float>_>)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b03a110

void * __thiscall
Metasound::TPrintLogOperator<float>::_scalar_deleting_destructor_
          (TPrintLogOperator<float> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->GraphName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->ValueToLog).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Label).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Trigger).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b03a1c0

void * __thiscall
Metasound::TExecutableOperator<Metasound::TPrintLogOperator<int>_>::_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::TPrintLogOperator<int>_> *this,uint param_1)

{
  *this = (TExecutableOperator<Metasound::TPrintLogOperator<int>_>)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b03a360

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,float>::FCoverterOperatorFactory,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b03a3a0

void * __thiscall
Metasound::TPrintLogOperator<int>::_scalar_deleting_destructor_
          (TPrintLogOperator<int> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->GraphName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->ValueToLog).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Label).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Trigger).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b03a450

void * __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>_>::
_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>_> *this,
          uint param_1)

{
  *this = (TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>_>)
          &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b03a5d0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,int>::FCoverterOperatorFactory,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b03a6b0

void * __thiscall
Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,2>_>::_scalar_deleting_destructor_
          (TNodeFacade<Metasound::TCrossfadeOperator<float,2>_> *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14b03a7a0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,bool>::FCoverterOperatorFactory,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b03a7e0

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>_>_>
::_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>_>_>
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

// `scalar_deleting_destructor' @ 14b03a880

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>_>,void>
::_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>_>,void>
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

// `scalar_deleting_destructor' @ 14b03a910

void * __thiscall
Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,3>_>::_scalar_deleting_destructor_
          (TNodeFacade<Metasound::TCrossfadeOperator<float,3>_> *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14b03a970

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::FCoverterOperatorFactory,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b03a9b0

void * __thiscall
Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,4>_>::_scalar_deleting_destructor_
          (TNodeFacade<Metasound::TCrossfadeOperator<float,4>_> *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14b03aac0

void * __thiscall
Metasound::TDataValueReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b03ab00

void * __thiscall
Metasound::TExecutableOperator<Metasound::FDynamicFilterOperator>::_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::FDynamicFilterOperator> *this,uint param_1)

{
  *this = (TExecutableOperator<Metasound::FDynamicFilterOperator>)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b03b110

void * __thiscall
Metasound::
TExecutableOperator<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b03b150

void * __thiscall
Metasound::TNodeFacade<Metasound::FBitcrusherOperator>::_scalar_deleting_destructor_
          (TNodeFacade<Metasound::FBitcrusherOperator> *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14b03b4a0

void * __thiscall
Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,5>_>::_scalar_deleting_destructor_
          (TNodeFacade<Metasound::TCrossfadeOperator<float,5>_> *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14b03b500

void * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,float>::
FCoverterOperatorFactory::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b03b650

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>_>_>
::_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>_>_>
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

// `scalar_deleting_destructor' @ 14b03b6e0

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>_>,void>
::_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>_>,void>
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

// `scalar_deleting_destructor' @ 14b03b770

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariableNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::FFactory,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b03b7b0

void * __thiscall
Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,6>_>::_scalar_deleting_destructor_
          (TNodeFacade<Metasound::TCrossfadeOperator<float,6>_> *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14b03b980

void * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,int>::
FCoverterOperatorFactory::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b03bc30

void * __thiscall
Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,7>_>::_scalar_deleting_destructor_
          (TNodeFacade<Metasound::TCrossfadeOperator<float,7>_> *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14b03bc90

void * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b03bcd0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::MetasoundInputNodePrivate::TInputNodeOperatorFactory<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,0>,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b03bdc0

void * __thiscall
Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b03be00

void * __thiscall
Metasound::ReceiveNodePrivate::
TReceiverOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::_scalar_deleting_destructor_
          (void *this,uint param_1)

{
  undefined8 *puVar1;
  
  *(undefined ***)this =
       &
       ___7__TReceiverOperator_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___ReceiveNodePrivate_Metasound__6B_
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

// `scalar_deleting_destructor' @ 14b03be80

void * __thiscall
Metasound::FDynamicFilterOperator::_scalar_deleting_destructor_
          (FDynamicFilterOperator *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Filter).KneePoints.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Filter).FilterState.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->AudioOutput).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->bAnalogMode).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->EnvelopeMode).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->ReleaseTime).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->AttackTime).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->GainDB).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Range).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->KneeDB).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Ratio).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->ThresholdDB).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Q).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Frequency).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->FilterType).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SidechainInput).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->AudioInput).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b03bf90

void * __thiscall
Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,8>_>::_scalar_deleting_destructor_
          (TNodeFacade<Metasound::TCrossfadeOperator<float,8>_> *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14b03c160

void * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,bool>::
FCoverterOperatorFactory::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b03c220

void * __thiscall
Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>_>::
_scalar_deleting_destructor_
          (TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>_> *this,uint param_1
          )

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

// `scalar_deleting_destructor' @ 14b03c280

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>_>_>
::_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>_>_>
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

// `scalar_deleting_destructor' @ 14b03c310

void * __thiscall
Metasound::
TDataReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b03c350

void * __thiscall
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>::_scalar_deleting_destructor_
          (TCrossfadeOperator<Metasound::FAudioBuffer,8> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Crossfader).NeedsMixing.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Crossfader).CurrentGains.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Crossfader).PrevGains.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputValue).field_0x10);
  DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
            ((TDataReadReference<Metasound::FAudioBuffer> *)
             (this->InputValues).AllocatorInstance.Data,(this->InputValues).ArrayNum);
  pFVar1 = (this->InputValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->CrossfadeValue).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b03c3f0

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>_>,void>
::_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>_>,void>
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

// `scalar_deleting_destructor' @ 14b03c530

void * __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>_>::
_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>_> *this,
          uint param_1)

{
  *this = (TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>_>)
          &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b03c570

void * __thiscall
Metasound::
TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b03c5b0

void * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
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

// `scalar_deleting_destructor' @ 14b03c750

void * __thiscall
Metasound::TInputDataVertex<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
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

// `scalar_deleting_destructor' @ 14b03c870

void * __thiscall
Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>_>::
_scalar_deleting_destructor_
          (TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>_> *this,uint param_1
          )

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

// `scalar_deleting_destructor' @ 14b03cc40

void * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
FCoverterOperatorFactory::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b03cc70

void * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
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

// `scalar_deleting_destructor' @ 14b03ccc0

void * __thiscall
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>::_scalar_deleting_destructor_
          (TCrossfadeOperator<Metasound::FAudioBuffer,7> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Crossfader).NeedsMixing.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Crossfader).CurrentGains.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Crossfader).PrevGains.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputValue).field_0x10);
  DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
            ((TDataReadReference<Metasound::FAudioBuffer> *)
             (this->InputValues).AllocatorInstance.Data,(this->InputValues).ArrayNum);
  pFVar1 = (this->InputValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->CrossfadeValue).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b03cd90

void * __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>_>::
_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>_> *this,
          uint param_1)

{
  *this = (TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>_>)
          &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b03d2a0

void * __thiscall
Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>_>::
_scalar_deleting_destructor_
          (TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>_> *this,uint param_1
          )

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

// `scalar_deleting_destructor' @ 14b03d300

void * __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b03d330

void * __thiscall
Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
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

// `scalar_deleting_destructor' @ 14b03d390

void * __thiscall
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>::_scalar_deleting_destructor_
          (TCrossfadeOperator<Metasound::FAudioBuffer,6> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Crossfader).NeedsMixing.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Crossfader).CurrentGains.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Crossfader).PrevGains.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputValue).field_0x10);
  DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
            ((TDataReadReference<Metasound::FAudioBuffer> *)
             (this->InputValues).AllocatorInstance.Data,(this->InputValues).ArrayNum);
  pFVar1 = (this->InputValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->CrossfadeValue).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b03d460

void * __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>_>::
_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>_> *this,
          uint param_1)

{
  *this = (TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>_>)
          &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b03d4a0

void * __thiscall
Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>_>::
_scalar_deleting_destructor_
          (TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>_> *this,uint param_1
          )

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

// `scalar_deleting_destructor' @ 14b03d760

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>_>_>
::_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>_>_>
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

// `scalar_deleting_destructor' @ 14b03d7f0

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>_>,void>
::_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>_>,void>
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

// `scalar_deleting_destructor' @ 14b03d880

void * __thiscall
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>::_scalar_deleting_destructor_
          (TCrossfadeOperator<Metasound::FAudioBuffer,5> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Crossfader).NeedsMixing.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Crossfader).CurrentGains.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Crossfader).PrevGains.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputValue).field_0x10);
  DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
            ((TDataReadReference<Metasound::FAudioBuffer> *)
             (this->InputValues).AllocatorInstance.Data,(this->InputValues).ArrayNum);
  pFVar1 = (this->InputValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->CrossfadeValue).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b03d920

void * __thiscall
Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>_>::
_scalar_deleting_destructor_
          (TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>_> *this,uint param_1
          )

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

// `scalar_deleting_destructor' @ 14b03d9b0

void * __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>_>::
_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>_> *this,
          uint param_1)

{
  *this = (TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>_>)
          &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b03dbc0

void * __thiscall
Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>_>::
_scalar_deleting_destructor_
          (TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>_> *this,uint param_1
          )

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

// `scalar_deleting_destructor' @ 14b03dc20

void * __thiscall
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>::_scalar_deleting_destructor_
          (TCrossfadeOperator<Metasound::FAudioBuffer,4> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Crossfader).NeedsMixing.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Crossfader).CurrentGains.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Crossfader).PrevGains.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputValue).field_0x10);
  DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
            ((TDataReadReference<Metasound::FAudioBuffer> *)
             (this->InputValues).AllocatorInstance.Data,(this->InputValues).ArrayNum);
  pFVar1 = (this->InputValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->CrossfadeValue).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b03dcf0

void * __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>_>::
_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>_> *this,
          uint param_1)

{
  *this = (TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>_>)
          &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b03df00

void * __thiscall
Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>_>::
_scalar_deleting_destructor_
          (TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>_> *this,uint param_1
          )

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

// `scalar_deleting_destructor' @ 14b03df60

void * __thiscall
Metasound::TNodeFacade<Metasound::FDynamicFilterOperator>::_scalar_deleting_destructor_
          (TNodeFacade<Metasound::FDynamicFilterOperator> *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14b03dfc0

void * __thiscall
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>::_scalar_deleting_destructor_
          (TCrossfadeOperator<Metasound::FAudioBuffer,3> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Crossfader).NeedsMixing.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Crossfader).CurrentGains.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Crossfader).PrevGains.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputValue).field_0x10);
  DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
            ((TDataReadReference<Metasound::FAudioBuffer> *)
             (this->InputValues).AllocatorInstance.Data,(this->InputValues).ArrayNum);
  pFVar1 = (this->InputValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->CrossfadeValue).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b03e120

void * __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>_>::
_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>_> *this,
          uint param_1)

{
  *this = (TExecutableOperator<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>_>)
          &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b03e160

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>_>_>
::_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>_>_>
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

// `scalar_deleting_destructor' @ 14b03e3c0

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>_>,void>
::_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>_>,void>
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

// `scalar_deleting_destructor' @ 14b03e450

void * __thiscall
Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>::_scalar_deleting_destructor_
          (TCrossfadeOperator<Metasound::FAudioBuffer,2> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Crossfader).NeedsMixing.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Crossfader).CurrentGains.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Crossfader).PrevGains.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputValue).field_0x10);
  DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
            ((TDataReadReference<Metasound::FAudioBuffer> *)
             (this->InputValues).AllocatorInstance.Data,(this->InputValues).ArrayNum);
  pFVar1 = (this->InputValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->CrossfadeValue).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b03e520

void * __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<float,8>_>::
_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::TCrossfadeOperator<float,8>_> *this,uint param_1)

{
  *this = (TExecutableOperator<Metasound::TCrossfadeOperator<float,8>_>)
          &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b03e7b0

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TPrintLogOperator<int>_>_>::
_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TPrintLogOperator<int>_>_> *this
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

// `scalar_deleting_destructor' @ 14b03e8b0

void * __thiscall
Metasound::TVariableNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::FFactory::
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

// `scalar_deleting_destructor' @ 14b03e940

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TPrintLogOperator<int>_>,void>::
_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TPrintLogOperator<int>_>,void> *this
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

// `scalar_deleting_destructor' @ 14b03e9d0

void * __thiscall
Metasound::TNodeFacade<Metasound::TPrintLogOperator<int>_>::_scalar_deleting_destructor_
          (TNodeFacade<Metasound::TPrintLogOperator<int>_> *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14b03ea30

void * __thiscall
Metasound::
TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b03ea60

void * __thiscall
Metasound::TNodeFacade<Metasound::TPrintLogOperator<float>_>::_scalar_deleting_destructor_
          (TNodeFacade<Metasound::TPrintLogOperator<float>_> *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14b03eac0

void * __thiscall
Metasound::TNodeFacade<Metasound::TPrintLogOperator<bool>_>::_scalar_deleting_destructor_
          (TNodeFacade<Metasound::TPrintLogOperator<bool>_> *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14b03ebb0

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TPrintLogOperator<float>_>_>::
_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TPrintLogOperator<float>_>_>
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

// `scalar_deleting_destructor' @ 14b03ecd0

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TPrintLogOperator<float>_>,void>::
_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TPrintLogOperator<float>_>,void>
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

// `scalar_deleting_destructor' @ 14b03ed60

void * __thiscall
Metasound::TNodeFacade<Metasound::TPrintLogOperator<FString>_>::_scalar_deleting_destructor_
          (TNodeFacade<Metasound::TPrintLogOperator<FString>_> *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14b03edc0

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FBitcrusherOperator>_>::
_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FBitcrusherOperator>_> *this,
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

// `scalar_deleting_destructor' @ 14b03ee80

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::FBitcrusherOperator>,void>::
_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::FBitcrusherOperator>,void> *this,
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

// `scalar_deleting_destructor' @ 14b03ef10

void * __thiscall
Metasound::
TExecutableOperator<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b03f040

void * __thiscall
Metasound::TCrossfadeOperator<float,8>::_scalar_deleting_destructor_
          (TCrossfadeOperator<float,8> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputValue).field_0x10);
  DestructItems<Metasound::TDataReadReference<float>,int>
            ((TDataReadReference<float> *)(this->InputValues).AllocatorInstance.Data,
             (this->InputValues).ArrayNum);
  pFVar1 = (this->InputValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->CrossfadeValue).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b03f240

void * __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<float,7>_>::
_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::TCrossfadeOperator<float,7>_> *this,uint param_1)

{
  *this = (TExecutableOperator<Metasound::TCrossfadeOperator<float,7>_>)
          &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b03f280

void * __thiscall
Metasound::MetasoundInputNodePrivate::
TInputNodeOperatorFactory<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b03f500

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TPrintLogOperator<bool>_>_>::
_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TPrintLogOperator<bool>_>_>
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

// `scalar_deleting_destructor' @ 14b03f590

void * __thiscall
Metasound::TCrossfadeOperator<float,7>::_scalar_deleting_destructor_
          (TCrossfadeOperator<float,7> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputValue).field_0x10);
  DestructItems<Metasound::TDataReadReference<float>,int>
            ((TDataReadReference<float> *)(this->InputValues).AllocatorInstance.Data,
             (this->InputValues).ArrayNum);
  pFVar1 = (this->InputValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->CrossfadeValue).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b03f600

void * __thiscall
Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  undefined8 *puVar1;
  
  *(undefined ***)this =
       &
       ___7__TSendOperator_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___SendNodePrivate_Metasound__6B_
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

// `scalar_deleting_destructor' @ 14b03f6c0

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TPrintLogOperator<bool>_>,void>::
_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TPrintLogOperator<bool>_>,void>
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

// `scalar_deleting_destructor' @ 14b03f750

void * __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<float,6>_>::
_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::TCrossfadeOperator<float,6>_> *this,uint param_1)

{
  *this = (TExecutableOperator<Metasound::TCrossfadeOperator<float,6>_>)
          &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b03f950

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &___7__TReferenceControllerBase__0A__SharedPointerInternals__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b03f990

void * __thiscall
Metasound::TNodeFacade<Metasound::TClampNodeOperator<int>_>::_scalar_deleting_destructor_
          (TNodeFacade<Metasound::TClampNodeOperator<int>_> *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14b03f9f0

void * __thiscall
Metasound::TCrossfadeOperator<float,6>::_scalar_deleting_destructor_
          (TCrossfadeOperator<float,6> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputValue).field_0x10);
  DestructItems<Metasound::TDataReadReference<float>,int>
            ((TDataReadReference<float> *)(this->InputValues).AllocatorInstance.Data,
             (this->InputValues).ArrayNum);
  pFVar1 = (this->InputValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->CrossfadeValue).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b03fa60

void * __thiscall
Metasound::TInputConstructorVertex<Metasound::FTime>::_scalar_deleting_destructor_
          (TInputConstructorVertex<Metasound::FTime> *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14b03fb20

void * __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<float,5>_>::
_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::TCrossfadeOperator<float,5>_> *this,uint param_1)

{
  *this = (TExecutableOperator<Metasound::TCrossfadeOperator<float,5>_>)
          &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b03fe00

void * __thiscall
Metasound::TNodeFacade<Metasound::TClampNodeOperator<float>_>::_scalar_deleting_destructor_
          (TNodeFacade<Metasound::TClampNodeOperator<float>_> *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14b03fe60

void * __thiscall
Metasound::TCrossfadeOperator<float,5>::_scalar_deleting_destructor_
          (TCrossfadeOperator<float,5> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputValue).field_0x10);
  DestructItems<Metasound::TDataReadReference<float>,int>
            ((TDataReadReference<float> *)(this->InputValues).AllocatorInstance.Data,
             (this->InputValues).ArrayNum);
  pFVar1 = (this->InputValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->CrossfadeValue).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b03ffe0

void * __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<float,4>_>::
_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::TCrossfadeOperator<float,4>_> *this,uint param_1)

{
  *this = (TExecutableOperator<Metasound::TCrossfadeOperator<float,4>_>)
          &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b040020

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::TNodeRegistryEntryBase<Metasound::FBPMToSecondsNode>::
_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::FBPMToSecondsNode> *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14b040270

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::TNodeRegistryEntry<Metasound::FBPMToSecondsNode,void>
::_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::FBPMToSecondsNode,void> *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14b040300

void * __thiscall
Metasound::TNodeFacade<Metasound::TClampNodeOperator<Metasound::FAudioBuffer>_>::
_scalar_deleting_destructor_
          (TNodeFacade<Metasound::TClampNodeOperator<Metasound::FAudioBuffer>_> *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14b0403f0

void * __thiscall
Metasound::TCrossfadeOperator<float,4>::_scalar_deleting_destructor_
          (TCrossfadeOperator<float,4> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputValue).field_0x10);
  DestructItems<Metasound::TDataReadReference<float>,int>
            ((TDataReadReference<float> *)(this->InputValues).AllocatorInstance.Data,
             (this->InputValues).ArrayNum);
  pFVar1 = (this->InputValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->CrossfadeValue).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b040460

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TPrintLogOperator<FString>_>_>::
_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TPrintLogOperator<FString>_>_>
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

// `scalar_deleting_destructor' @ 14b040520

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TPrintLogOperator<FString>_>,void>::
_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TPrintLogOperator<FString>_>,void>
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

// `scalar_deleting_destructor' @ 14b0405b0

void * __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<float,3>_>::
_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::TCrossfadeOperator<float,3>_> *this,uint param_1)

{
  *this = (TExecutableOperator<Metasound::TCrossfadeOperator<float,3>_>)
          &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b0407b0

void * __thiscall
Metasound::TCrossfadeOperator<float,3>::_scalar_deleting_destructor_
          (TCrossfadeOperator<float,3> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputValue).field_0x10);
  DestructItems<Metasound::TDataReadReference<float>,int>
            ((TDataReadReference<float> *)(this->InputValues).AllocatorInstance.Data,
             (this->InputValues).ArrayNum);
  pFVar1 = (this->InputValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->CrossfadeValue).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b040860

void * __thiscall
Metasound::TExecutableOperator<Metasound::TCrossfadeOperator<float,2>_>::
_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::TCrossfadeOperator<float,2>_> *this,uint param_1)

{
  *this = (TExecutableOperator<Metasound::TCrossfadeOperator<float,2>_>)
          &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b040a60

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::GetEnumDataTypeInterface<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>'::__l3::FEnumHandler,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b040aa0

void * __thiscall
Metasound::TCrossfadeOperator<float,2>::_scalar_deleting_destructor_
          (TCrossfadeOperator<float,2> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputValue).field_0x10);
  DestructItems<Metasound::TDataReadReference<float>,int>
            ((TDataReadReference<float> *)(this->InputValues).AllocatorInstance.Data,
             (this->InputValues).ArrayNum);
  pFVar1 = (this->InputValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->CrossfadeValue).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b040f90

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TClampNodeOperator<int>_>_>::
_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TClampNodeOperator<int>_>_>
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

// `scalar_deleting_destructor' @ 14b0411f0

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TClampNodeOperator<int>_>,void>::
_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TClampNodeOperator<int>_>,void>
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

// `scalar_deleting_destructor' @ 14b041280

void * __thiscall
Metasound::TNodeFacade<Metasound::FTriggerOnNanOperator>::_scalar_deleting_destructor_
          (TNodeFacade<Metasound::FTriggerOnNanOperator> *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14b041370

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FTriggerOnNanOperator>_>::
_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FTriggerOnNanOperator>_> *this,
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

// `scalar_deleting_destructor' @ 14b041400

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::FTriggerOnNanOperator>,void>::
_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::FTriggerOnNanOperator>,void> *this,
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

// `scalar_deleting_destructor' @ 14b041490

void * __thiscall
Metasound::TSender<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
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

// `scalar_deleting_destructor' @ 14b0414f0

void * __thiscall
Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
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

// `scalar_deleting_destructor' @ 14b041570

void * __thiscall
Metasound::TReceiver<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  ::operator_delete(*(void **)((longlong)this + 0x28),4);
  IReceiver::~IReceiver(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b041650

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TClampNodeOperator<float>_>_>::
_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TClampNodeOperator<float>_>_>
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

// `scalar_deleting_destructor' @ 14b041710

void * __thiscall
Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
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

// `scalar_deleting_destructor' @ 14b041770

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TClampNodeOperator<float>_>,void>::
_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TClampNodeOperator<float>_>,void>
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

// `scalar_deleting_destructor' @ 14b041830

void * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,bool>::
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

// `scalar_deleting_destructor' @ 14b0418c0

void * __thiscall
Metasound::TExecutableOperator<Metasound::TClampNodeOperator<Metasound::FAudioBuffer>_>::
_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::TClampNodeOperator<Metasound::FAudioBuffer>_> *this,
          uint param_1)

{
  *this = (TExecutableOperator<Metasound::TClampNodeOperator<Metasound::FAudioBuffer>_>)
          &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b041b00

void * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,int>::
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

// `scalar_deleting_destructor' @ 14b041b60

void * __thiscall
Metasound::TClampNodeOperator<Metasound::FAudioBuffer>::_scalar_deleting_destructor_
          (TClampNodeOperator<Metasound::FAudioBuffer> *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputMaxValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputMinValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputValue).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b041c00

void * __thiscall
Metasound::TExecutableOperator<Metasound::TClampNodeOperator<float>_>::_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::TClampNodeOperator<float>_> *this,uint param_1)

{
  *this = (TExecutableOperator<Metasound::TClampNodeOperator<float>_>)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b041ed0

void * __thiscall
Metasound::TClampNodeOperator<float>::_scalar_deleting_destructor_
          (TClampNodeOperator<float> *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputMaxValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputMinValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputValue).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b041f40

void * __thiscall
Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,float>::
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

// `scalar_deleting_destructor' @ 14b041fd0

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FDecibelsToLinearGainOperator>_>::
_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FDecibelsToLinearGainOperator>_>
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

// `scalar_deleting_destructor' @ 14b042060

void * __thiscall
Metasound::TExecutableOperator<Metasound::TClampNodeOperator<int>_>::_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::TClampNodeOperator<int>_> *this,uint param_1)

{
  *this = (TExecutableOperator<Metasound::TClampNodeOperator<int>_>)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b0420a0

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::FDecibelsToLinearGainOperator>,void>::
_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::FDecibelsToLinearGainOperator>,void>
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

// `scalar_deleting_destructor' @ 14b042390

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TClampNodeOperator<Metasound::FAudioBuffer>_>_>
::_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TClampNodeOperator<Metasound::FAudioBuffer>_>_>
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

// `scalar_deleting_destructor' @ 14b042420

void * __thiscall
Metasound::TClampNodeOperator<int>::_scalar_deleting_destructor_
          (TClampNodeOperator<int> *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputMaxValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputMinValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputValue).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b042490

void * __thiscall
Metasound::
TNodeFacade<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
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

// `scalar_deleting_destructor' @ 14b0424f0

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TClampNodeOperator<Metasound::FAudioBuffer>_>,void>
::_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TClampNodeOperator<Metasound::FAudioBuffer>_>,void>
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

// `scalar_deleting_destructor' @ 14b042580

void * __thiscall
Metasound::TSendNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
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

// `scalar_deleting_destructor' @ 14b0426c0

void * __thiscall
Metasound::TNodeFacade<Metasound::FDecibelsToLinearGainOperator>::_scalar_deleting_destructor_
          (TNodeFacade<Metasound::FDecibelsToLinearGainOperator> *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14b042940

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>,0,void>'
::__l2::FDataTypeRegistryEntry::_scalar_deleting_destructor_(void *this,uint param_1)

{
  Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
  ~FDataTypeRegistryEntryBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x640);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b042a10

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TDelayNodeOperator<Metasound::FTime>_>_>::
_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TDelayNodeOperator<Metasound::FTime>_>_>
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

// `scalar_deleting_destructor' @ 14b042aa0

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TDelayNodeOperator<Metasound::FTime>_>,void>::
_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TDelayNodeOperator<Metasound::FTime>_>,void>
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

// `scalar_deleting_destructor' @ 14b042b30

void * __thiscall
Metasound::TNodeFacade<Metasound::TDelayNodeOperator<Metasound::FTime>_>::
_scalar_deleting_destructor_
          (TNodeFacade<Metasound::TDelayNodeOperator<Metasound::FTime>_> *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14b042b90

void * __thiscall
Metasound::TNodeFacade<Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>_>::
_scalar_deleting_destructor_
          (TNodeFacade<Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>_> *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14b042c80

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>_>_>
::_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>_>_>
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

// `scalar_deleting_destructor' @ 14b042d10

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>_>,void>
::_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>_>,void>
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

// `scalar_deleting_destructor' @ 14b042dd0

void * __thiscall
Metasound::TExecutableOperator<Metasound::FDiffuserOperator>::_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::FDiffuserOperator> *this,uint param_1)

{
  *this = (TExecutableOperator<Metasound::FDiffuserOperator>)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b043010

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>,SharedPointerInternals::DefaultDeleter<Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b0430e0

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FDiffuserOperator>_>::
_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FDiffuserOperator>_> *this,
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

// `scalar_deleting_destructor' @ 14b043170

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::FDiffuserOperator>,void>::
_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::FDiffuserOperator>,void> *this,
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

// `scalar_deleting_destructor' @ 14b043290

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FDynamicFilterOperator>_>::
_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FDynamicFilterOperator>_> *this,
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

// `scalar_deleting_destructor' @ 14b043320

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::FDynamicFilterOperator>,void>::
_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::FDynamicFilterOperator>,void> *this,
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

// `scalar_deleting_destructor' @ 14b0434d0

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FDopplerPitchShiftOperator>_>::
_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FDopplerPitchShiftOperator>_>
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

// `scalar_deleting_destructor' @ 14b043560

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FCompressorOperator>_>::
_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::TNodeFacade<Metasound::FCompressorOperator>_> *this,
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

// `scalar_deleting_destructor' @ 14b0435f0

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::FDopplerPitchShiftOperator>,void>::
_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::FDopplerPitchShiftOperator>,void>
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

// `scalar_deleting_destructor' @ 14b043680

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::FCompressorOperator>,void>::
_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::TNodeFacade<Metasound::FCompressorOperator>,void> *this,
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

// `scalar_deleting_destructor' @ 14b043710

void * __thiscall
Metasound::
TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>::
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

// `scalar_deleting_destructor' @ 14b043880

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntryBase<Metasound::FEnvelopeFollowerNode>::_scalar_deleting_destructor_
          (TNodeRegistryEntryBase<Metasound::FEnvelopeFollowerNode> *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14b043910

void * __thiscall
Metasound::TOutputDataVertex<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b043940

void * __thiscall
Metasound::Frontend::NodeRegistrationPrivate::
TNodeRegistryEntry<Metasound::FEnvelopeFollowerNode,void>::_scalar_deleting_destructor_
          (TNodeRegistryEntry<Metasound::FEnvelopeFollowerNode,void> *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14b044340

void * __thiscall
Metasound::FDiffuserOperator::_scalar_deleting_destructor_(FDiffuserOperator *this,uint param_1)

{
  FLongDelayAPF *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->Delay_5).Ptr;
  if (pFVar1 != (FLongDelayAPF *)0x0) {
    Audio::FLongDelayAPF::~FLongDelayAPF(pFVar1);
    ::operator_delete(pFVar1,0x28);
  }
  pFVar1 = (this->Delay_4).Ptr;
  if (pFVar1 != (FLongDelayAPF *)0x0) {
    Audio::FLongDelayAPF::~FLongDelayAPF(pFVar1);
    ::operator_delete(pFVar1,0x28);
  }
  pFVar1 = (this->Delay_3).Ptr;
  if (pFVar1 != (FLongDelayAPF *)0x0) {
    Audio::FLongDelayAPF::~FLongDelayAPF(pFVar1);
    ::operator_delete(pFVar1,0x28);
  }
  pFVar1 = (this->Delay_2).Ptr;
  if (pFVar1 != (FLongDelayAPF *)0x0) {
    Audio::FLongDelayAPF::~FLongDelayAPF(pFVar1);
    ::operator_delete(pFVar1,0x28);
  }
  pFVar1 = (this->Delay_1).Ptr;
  if (pFVar1 != (FLongDelayAPF *)0x0) {
    Audio::FLongDelayAPF::~FLongDelayAPF(pFVar1);
    ::operator_delete(pFVar1,0x28);
  }
  pFVar1 = (this->Delay_0).Ptr;
  if (pFVar1 != (FLongDelayAPF *)0x0) {
    Audio::FLongDelayAPF::~FLongDelayAPF(pFVar1);
    ::operator_delete(pFVar1,0x28);
  }
  pFVar2 = (this->Delays).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->AudioOutput).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Feedback).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Depth).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->AudioInput).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b044ba0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void * __thiscall
`Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,2,void>'::
__l2::FDataTypeRegistryEntry::_scalar_deleting_destructor_(void *this,uint param_1)

{
  Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::FDataTypeRegistryEntryBase::
  ~FDataTypeRegistryEntryBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x640);
  }
  return this;
}

// AttemptToRegisterConverter<int,Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>,0> @ 14b045810

void __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
AttemptToRegisterConverter<int,Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>,0>
          (FModuleInfo *param_1)

{
  return;
}

// AttemptToRegisterConverter<int,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,1> @ 14b045820

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
AttemptToRegisterConverter<int,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,1>
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
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetAutoConverterNodeMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetAutoConverterNodeMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetAutoConverterNodeMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar3 = GetMetasoundDataTypeName<int>();
      local_78._0_8_ = *pFVar3;
      pFVar5 = TDataReferenceTypeInfo<int>::GetTypeDisplayText();
      local_78._8_8_ = (pFVar5->TextData).Reference;
      if ((ITextData *)local_78._8_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_78._8_8_ + 8))(local_78._8_8_,&local_res10);
      }
      local_78._16_4_ = pFVar5->Flags;
      pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>();
      local_60 = *pFVar3;
      pFVar5 = GetMetasoundDataTypeDisplayText<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>
                         ();
      local_58.Reference = (pFVar5->TextData).Reference;
      if (local_58.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58.Reference + 8))(local_58.Reference,&local_res10);
      }
      local_50 = pFVar5->Flags;
      local_48._0_1_ = false;
      local_48._1_1_ = true;
      AutoConverterNodePrivate::CreateAutoConverterNodeMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetAutoConverterNodeMetadata(void)'
                  ::__l2::Info,(FConvertDataTypeInfo *)local_78);
      if (local_58.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58.Reference + 0x10))();
      }
      if ((ITextData *)local_78._8_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_78._8_8_ + 0x10))();
      }
      atexit(`Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>
             ::GetAutoConverterNodeMetadata'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetAutoConverterNodeMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassRegistryKey::FNodeClassRegistryKey
            (&local_30,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetAutoConverterNodeMetadata(void)'
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
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetAutoConverterNodeMetadata(void)'
                  ::__l2::Info,param_1);
      *(undefined ***)local_res10 =
           &
           ___7__TNodeRegistryEntry_V__TAutoConverterNode_HV__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
      ;
    }
    NodeRegistrationPrivate::RegisterNodeInternal
              ((TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
                *)&local_res10);
    if (local_res10 != (FName)0x0) {
      (*(code *)**(undefined8 **)local_res10)(local_res10,1);
    }
    pFVar3 = TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
             GetOutputName();
    pFVar4 = TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
             GetInputName();
    if (`bool___cdecl_RegisterConversionNode<Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EDynamicFilterType,0>_>,int,Metasound::TEnum<Audio::EDynamicFilterType,0>_>(FName_const&___ptr64,FName_const&___ptr64,Metasound::FNodeClassMetadata_const&___ptr64)'
        ::__l2::bAlreadyRegisteredThisConverter == false) {
      `bool___cdecl_RegisterConversionNode<Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EDynamicFilterType,0>_>,int,Metasound::TEnum<Audio::EDynamicFilterType,0>_>(FName_const&___ptr64,FName_const&___ptr64,Metasound::FNodeClassMetadata_const&___ptr64)'
      ::__l2::bAlreadyRegisteredThisConverter = true;
      ::FName::FName(&local_res10,TDataReferenceTypeInfo<int>::TypeName);
      ::FName::FName(&local_res18,
                     TDataReferenceTypeInfo<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
                     TypeName);
      local_40 = local_res10;
      local_38 = local_res18;
      local_78._0_8_ = *pFVar4;
      local_78._8_8_ = *pFVar3;
      FNodeClassRegistryKey::FNodeClassRegistryKey
                ((FNodeClassRegistryKey *)(local_78 + 0x10),
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetAutoConverterNodeMetadata(void)'
                  ::__l2::Info);
      pIVar2 = INodeClassRegistry::Get();
      (**(code **)((longlong)*pIVar2 + 200))(pIVar2,&local_40,local_78);
    }
    else if (3 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<4>
                (&`bool___cdecl_RegisterConversionNode<Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EDynamicFilterType,0>_>,int,Metasound::TEnum<Audio::EDynamicFilterType,0>_>(FName_const&___ptr64,FName_const&___ptr64,Metasound::FNodeClassMetadata_const&___ptr64)'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
  }
  return;
}

// AttemptToRegisterConverter<float,Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>,0> @ 14b045a90

void __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
AttemptToRegisterConverter<float,Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>,0>
          (FModuleInfo *param_1)

{
  return;
}

// AttemptToRegisterConverter<float,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,0> @ 14b045aa0

void __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
AttemptToRegisterConverter<float,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,0>
          (FModuleInfo *param_1)

{
  return;
}

// AttemptToRegisterConverter<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>,int,0> @ 14b045ab0

void __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
AttemptToRegisterConverter<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>,int,0>
          (FModuleInfo *param_1)

{
  return;
}

// AttemptToRegisterConverter<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>,float,0> @ 14b045ac0

void __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
AttemptToRegisterConverter<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>,float,0>
          (FModuleInfo *param_1)

{
  return;
}

// AttemptToRegisterConverter<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>,FString,0> @ 14b045ad0

void __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
AttemptToRegisterConverter<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>,FString,0>
          (FModuleInfo *param_1)

{
  return;
}

// AttemptToRegisterConverter<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>,bool,0> @ 14b045ae0

void __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
AttemptToRegisterConverter<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>,bool,0>
          (FModuleInfo *param_1)

{
  return;
}

// AttemptToRegisterConverter<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,int,1> @ 14b045af0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
AttemptToRegisterConverter<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,int,1>
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
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,int>::GetAutoConverterNodeMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,int>::GetAutoConverterNodeMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,int>::GetAutoConverterNodeMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>();
      local_78._0_8_ = *pFVar3;
      pFVar5 = GetMetasoundDataTypeDisplayText<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>
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
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,int>::GetAutoConverterNodeMetadata(void)'
                  ::__l2::Info,(FConvertDataTypeInfo *)local_78);
      if (local_58.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58.Reference + 0x10))();
      }
      if ((ITextData *)local_78._8_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_78._8_8_ + 0x10))();
      }
      atexit(`Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,int>
             ::GetAutoConverterNodeMetadata'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,int>::GetAutoConverterNodeMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassRegistryKey::FNodeClassRegistryKey
            (&local_30,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,int>::GetAutoConverterNodeMetadata(void)'
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
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,int>::GetAutoConverterNodeMetadata(void)'
                  ::__l2::Info,param_1);
      *(undefined ***)local_res10 =
           &
           ___7__TNodeRegistryEntry_V__TAutoConverterNode_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound__H_Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
      ;
    }
    NodeRegistrationPrivate::RegisterNodeInternal
              ((TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
                *)&local_res10);
    if (local_res10 != (FName)0x0) {
      (*(code *)**(undefined8 **)local_res10)(local_res10,1);
    }
    pFVar3 = TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,int>::
             GetOutputName();
    pFVar4 = TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,int>::
             GetInputName();
    if (`bool___cdecl_RegisterConversionNode<Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,int>,Metasound::TEnum<Audio::EDynamicFilterType,0>,int>(FName_const&___ptr64,FName_const&___ptr64,Metasound::FNodeClassMetadata_const&___ptr64)'
        ::__l2::bAlreadyRegisteredThisConverter == false) {
      `bool___cdecl_RegisterConversionNode<Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,int>,Metasound::TEnum<Audio::EDynamicFilterType,0>,int>(FName_const&___ptr64,FName_const&___ptr64,Metasound::FNodeClassMetadata_const&___ptr64)'
      ::__l2::bAlreadyRegisteredThisConverter = true;
      ::FName::FName(&local_res10,
                     TDataReferenceTypeInfo<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
                     TypeName);
      ::FName::FName(&local_res18,TDataReferenceTypeInfo<int>::TypeName);
      local_40 = local_res10;
      local_38 = local_res18;
      local_78._0_8_ = *pFVar4;
      local_78._8_8_ = *pFVar3;
      FNodeClassRegistryKey::FNodeClassRegistryKey
                ((FNodeClassRegistryKey *)(local_78 + 0x10),
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,int>::GetAutoConverterNodeMetadata(void)'
                  ::__l2::Info);
      pIVar2 = INodeClassRegistry::Get();
      (**(code **)((longlong)*pIVar2 + 200))(pIVar2,&local_40,local_78);
    }
    else if (3 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<4>
                (&`bool___cdecl_RegisterConversionNode<Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,int>,Metasound::TEnum<Audio::EDynamicFilterType,0>,int>(FName_const&___ptr64,FName_const&___ptr64,Metasound::FNodeClassMetadata_const&___ptr64)'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
  }
  return;
}

// AttemptToRegisterConverter<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,float,1> @ 14b045d60

void __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
AttemptToRegisterConverter<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,float,1>
          (FModuleInfo *param_1)

{
  return;
}

// AttemptToRegisterConverter<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,FString,0> @ 14b045d70

void __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
AttemptToRegisterConverter<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,FString,0>
          (FModuleInfo *param_1)

{
  return;
}

// AttemptToRegisterConverter<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,bool,1> @ 14b045d80

void __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
AttemptToRegisterConverter<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,bool,1>
          (FModuleInfo *param_1)

{
  return;
}

// AttemptToRegisterConverter<FString,Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>,0> @ 14b045d90

void __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
AttemptToRegisterConverter<FString,Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>,0>
          (FModuleInfo *param_1)

{
  return;
}

// AttemptToRegisterConverter<FString,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,0> @ 14b045da0

void __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
AttemptToRegisterConverter<FString,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,0>
          (FModuleInfo *param_1)

{
  return;
}

// AttemptToRegisterConverter<bool,Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>,0> @ 14b045db0

void __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
AttemptToRegisterConverter<bool,Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>,0>
          (FModuleInfo *param_1)

{
  return;
}

// AttemptToRegisterConverter<bool,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,0> @ 14b045dc0

void __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
AttemptToRegisterConverter<bool,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,0>
          (FModuleInfo *param_1)

{
  return;
}

// AttemptToRegisterSendAndReceiveNodes<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>,1> @ 14b045dd0

void __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
AttemptToRegisterSendAndReceiveNodes<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>,1>
          (FModuleInfo *param_1)

{
  return;
}

// AttemptToRegisterSendAndReceiveNodes<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,1> @ 14b045de0

void __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
AttemptToRegisterSendAndReceiveNodes<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,1>
          (FModuleInfo *param_1)

{
  return;
}

// CreateDataTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>,0,void> @ 14b045e80

FDataTypeRegistryInfo * __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
CreateDataTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>,0,void>
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
  pFVar4 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
                     ();
  pvVar3 = ThreadLocalStoragePointer;
  __return_storage_ptr__->DataTypeName = *pFVar4;
  if (*(int *)(*(longlong *)((longlong)pvVar3 + (ulonglong)_tls_index * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::DisplayText,L"MetaSoundCore_DataReference",L"Enum:DynamicFilterType_Variable",
                 L"Enum:DynamicFilterType:Variable");
      atexit(`Metasound::
             TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
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

// CreateDataTypeInfo<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,2,void> @ 14b045fe0

FDataTypeRegistryInfo * __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
CreateDataTypeInfo<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,2,void>
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
  pFVar3 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>();
  __return_storage_ptr__->DataTypeName = *pFVar3;
  pFVar4 = GetMetasoundDataTypeDisplayText<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>();
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

// Downcast<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,1> @ 14b046190

TUniquePtr<Metasound::TReceiver<Metasound::TEnum<Audio::EDynamicFilterType,0>_>,TDefaultDelete<Metasound::TReceiver<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>_>
 __cdecl Metasound::Downcast<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,1>
                   (TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  TUniquePtr<Metasound::TReceiver<Metasound::TEnum<Audio::EDynamicFilterType,0>_>,TDefaultDelete<Metasound::TReceiver<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>_>
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
  pFVar4 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>();
  local_res8 = *pFVar4;
  if (*(FName *)(lVar1 + 8) != local_res8) {
    local_40 = &local_res8;
    local_48 = lVar1;
    bVar3 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TReceiver<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>'::
            __l2::<lambda_1>::operator()(&local_48);
    if (!bVar3) {
      pFVar4 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>();
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
        TVar5.Ptr = (TReceiver<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)(*pcVar2)();
        return (TUniquePtr<Metasound::TReceiver<Metasound::TEnum<Audio::EDynamicFilterType,0>_>,TDefaultDelete<Metasound::TReceiver<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>_>
                )TVar5.Ptr;
      }
    }
  }
  param_1->Ptr = (IReceiver *)*in_RDX;
  *in_RDX = 0;
  return (TUniquePtr<Metasound::TReceiver<Metasound::TEnum<Audio::EDynamicFilterType,0>_>,TDefaultDelete<Metasound::TReceiver<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>_>
          )(TReceiver<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)param_1;
}

// Downcast<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,1> @ 14b0462d0

TUniquePtr<Metasound::TSender<Metasound::TEnum<Audio::EDynamicFilterType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>_>
 __cdecl Metasound::Downcast<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,1>
                   (TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<Audio::EDynamicFilterType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>_>
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
  pFVar4 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>();
  local_res8 = *pFVar4;
  if (*(FName *)(lVar1 + 8) != local_res8) {
    local_40 = &local_res8;
    local_48 = lVar1;
    bVar3 = `Metasound::IDataTransmissionBase::
            CheckType<Metasound::TSender<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>'::
            __l2::<lambda_1>::operator()(&local_48);
    if (!bVar3) {
      pFVar4 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>();
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
        TVar5.Ptr = (TSender<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)(*pcVar2)();
        return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Audio::EDynamicFilterType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>_>
                )TVar5.Ptr;
      }
    }
  }
  param_1->Ptr = (ISender *)*in_RDX;
  *in_RDX = 0;
  return (TUniquePtr<Metasound::TSender<Metasound::TEnum<Audio::EDynamicFilterType,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>_>
          )(TSender<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)param_1;
}

// GetEnumDataTypeInterface<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_> @ 14b046c20

TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1> * __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
          (TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (IEnumDataTypeInterface *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetEnumDataTypeInterface<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_> @ 14b046c40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedPtr<Metasound::Frontend::IEnumDataTypeInterface,1> * __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>
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
         ___7__TIntrusiveReferenceController_UFEnumHandler__2____GetEnumDataTypeInterface_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___MetasoundDataTypeRegistrationPrivate_Frontend_Metasound__YA_AV__TSharedPtr_UIEnumDataTypeInterface_Frontend_Metasound___00__XZ__00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FEnumHandler__2____GetEnumDataTypeInterface_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___MetasoundDataTypeRegistrationPrivate_Frontend_Metasound__YA_AV__TSharedPtr_UIEnumDataTypeInterface_Frontend_Metasound___00__XZ_6B_
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

// GetMetasoundDataTypeDisplayText<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_> @ 14b046d60

FText * __cdecl
Metasound::
GetMetasoundDataTypeDisplayText<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
          (void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::DisplayText,L"MetaSoundCore_DataReference",L"Enum:DynamicFilterType_Variable",
                 L"Enum:DynamicFilterType:Variable");
      atexit(`Metasound::
             TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
             ::GetTypeDisplayText'::__l2::_dynamic_atexit_destructor_for__DisplayText__);
      _Init_thread_footer(&::_TSS0);
      return &::DisplayText;
    }
  }
  return &::DisplayText;
}

// GetMetasoundDataTypeDisplayText<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_> @ 14b046e00

FText * __cdecl
Metasound::GetMetasoundDataTypeDisplayText<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>
          (void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::DisplayText,L"MetaSoundCore_DataReference",L"Enum:DynamicFilterType",
                 L"Enum:DynamicFilterType");
      atexit(`Metasound::TDataReferenceTypeInfo<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>
             ::GetTypeDisplayText'::__l2::_dynamic_atexit_destructor_for__DisplayText__);
      _Init_thread_footer(&::_TSS0);
      return &::DisplayText;
    }
  }
  return &::DisplayText;
}

// GetMetasoundDataTypeId<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_> @ 14b046ea0

void * __cdecl
Metasound::
GetMetasoundDataTypeId<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
          (void)

{
  return &TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
          ::TypePtr;
}

// GetMetasoundDataTypeId<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_> @ 14b046eb0

void * __cdecl
Metasound::GetMetasoundDataTypeId<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>(void)

{
  return &TDataReferenceTypeInfo<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::TypePtr;
}

// GetMetasoundDataTypeId<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_> @ 14b046ec0

void * __cdecl
Metasound::GetMetasoundDataTypeId<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>(void)

{
  return &TDataReferenceTypeInfo<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::TypePtr;
}

// GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_> @ 14b046ed0

FName * __cdecl
Metasound::
GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
          (void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
                     ::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>(void)'
          ::__l2::TypeName;
}

// GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_> @ 14b046f50

FName * __cdecl
Metasound::GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
                     TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
          ::__l2::TypeName;
}

// GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_> @ 14b046fd0

FName * __cdecl
Metasound::GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>(void)'
                      ::__l2::TypeName,
                     TDataReferenceTypeInfo<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>
                     ::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>(void)'
          ::__l2::TypeName;
}

// GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_> @ 14b047050

FString * __cdecl
Metasound::
GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
          (void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::FString(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>(void)'
                          ::__l2::TypeString,
                         TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
                         ::TypeName);
      atexit(`Metasound::
             GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>'
             ::__l2::_dynamic_atexit_destructor_for__TypeString__);
      _Init_thread_footer(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>(void)'
              ::__l2::TypeString;
    }
  }
  return &`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>(void)'
          ::__l2::TypeString;
}

// GetMetasoundDataTypeString<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_> @ 14b0470e0

FString * __cdecl
Metasound::GetMetasoundDataTypeString<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::FString(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
                          ::__l2::TypeString,
                         TDataReferenceTypeInfo<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>
                         ::TypeName);
      atexit(`Metasound::
             GetMetasoundDataTypeString<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>'::__l2
             ::_dynamic_atexit_destructor_for__TypeString__);
      _Init_thread_footer(&`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
              ::__l2::TypeString;
    }
  }
  return &`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
          ::__l2::TypeString;
}

// GetVariableAccessorNodeClassName<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_> @ 14b0475a0

FNodeClassName * __cdecl
Metasound::VariableNames::
GetVariableAccessorNodeClassName<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>();
      GetVariableAccessorNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
                  ::__l2::ClassName,pFVar1);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
              ::__l2::ClassName;
    }
  }
  return &`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableAccessorNodeClassName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
          ::__l2::ClassName;
}

// GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_> @ 14b047620

FNodeClassName * __cdecl
Metasound::VariableNames::
GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>();
      GetVariableDeferredAccessorNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
                  ::__l2::ClassName,pFVar1);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
              ::__l2::ClassName;
    }
  }
  return &`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
          ::__l2::ClassName;
}

// GetVariableMutatorNodeClassName<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_> @ 14b0476a0

FNodeClassName * __cdecl
Metasound::VariableNames::
GetVariableMutatorNodeClassName<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>();
      GetVariableMutatorNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
                  ::__l2::ClassName,pFVar1);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
              ::__l2::ClassName;
    }
  }
  return &`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableMutatorNodeClassName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
          ::__l2::ClassName;
}

// GetVariableNodeClassName<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_> @ 14b047720

FNodeClassName * __cdecl
Metasound::VariableNames::
GetVariableNodeClassName<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>(void)

{
  FName *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>();
      GetVariableNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
                  ::__l2::ClassName,pFVar1);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
              ::__l2::ClassName;
    }
  }
  return &`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::VariableNames::GetVariableNodeClassName<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
          ::__l2::ClassName;
}

// IsDataReferenceOfType<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_> @ 14b0477a0

bool __cdecl
Metasound::IsDataReferenceOfType<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>
          (IDataReference *param_1)

{
  FName *pFVar1;
  void *pvVar2;
  int *piVar3;
  bool bVar4;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < `bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(Metasound::IDataReference_const&___ptr64)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(Metasound::IDataReference_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(Metasound::IDataReference_const&___ptr64)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>();
      `bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(Metasound::IDataReference_const&___ptr64)'
      ::__l2::TypeName = *pFVar1;
      _Init_thread_footer(&`bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(Metasound::IDataReference_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (*piVar3 < `bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(Metasound::IDataReference_const&___ptr64)'
                ::__l2::_thread_safe_static_guard_1__) {
    _Init_thread_header(&`bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(Metasound::IDataReference_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_1__);
    if (`bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(Metasound::IDataReference_const&___ptr64)'
        ::__l2::_thread_safe_static_guard_1__ == -1) {
      `bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(Metasound::IDataReference_const&___ptr64)'
      ::__l2::TypeId =
           &TDataReferenceTypeInfo<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::TypePtr;
      _Init_thread_footer(&`bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(Metasound::IDataReference_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_1__);
    }
  }
  pFVar1 = (FName *)(**(code **)((longlong)*param_1 + 8))(param_1);
  bVar4 = *pFVar1 ==
          `bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(Metasound::IDataReference_const&___ptr64)'
          ::__l2::TypeName;
  pvVar2 = (void *)(**(code **)((longlong)*param_1 + 0x10))(param_1);
  if ((bVar4) &&
     (pvVar2 == `bool___cdecl_Metasound::IsDataReferenceOfType<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(Metasound::IDataReference_const&___ptr64)'
                ::__l2::TypeId)) {
    return true;
  }
  return false;
}

// MakeDataChannel<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,1> @ 14b0478a0

TSharedRef<Metasound::IDataChannel,1> * __cdecl
Metasound::MakeDataChannel<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,1>
          (TSharedRef<Metasound::IDataChannel,1> *__return_storage_ptr__,FOperatorSettings *param_1)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  bool bVar5;
  TCopyableDataChannel<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *pTVar6;
  FName *pFVar7;
  TSharedRef<Metasound::IDataChannel,1> *pTVar8;
  TRawPtrProxy<Metasound::TCopyableDataChannel<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>
  local_res8;
  
  pTVar6 = ::operator_new(0x78);
  if (pTVar6 == (TCopyableDataChannel<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)0x0) {
    pTVar6 = (TCopyableDataChannel<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)0x0;
  }
  else {
    pFVar7 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>();
    pTVar6->_padding_ = (longlong)*pFVar7;
    pTVar6->_padding_ = (longlong)&___7IDataChannel_Metasound__6B_;
    pTVar6->_padding_ = 0;
    pTVar6->_padding_ = 0;
    *(undefined4 *)&pTVar6->_padding_ = 0;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TCopyableDataChannel_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_
    ;
    *(undefined4 *)((longlong)&pTVar6->_padding_ + 4) = 0;
    (pTVar6->AtomicData).Ptr = (TEnum<Audio::EDynamicFilterType,0> *)0x0;
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
  TSharedRef<Metasound::IDataChannel,1><Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
            (__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

// MakeOperatorFactoryRef<Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>,Metasound::FLiteral> @ 14b0479a0

TSharedRef<Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<Audio::EDynamicFilterType,0>_>,1>
* __cdecl Metasound::
          MakeOperatorFactoryRef<Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>,Metasound::FLiteral>
                    (TSharedRef<Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<Audio::EDynamicFilterType,0>_>,1>
                     *__return_storage_ptr__,FLiteral *param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<Audio::EDynamicFilterType,0>_>,1>
  *pTVar4;
  
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object =
         (TLiteralOperatorLiteralFactory<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TLiteralOperatorLiteralFactory_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7__TLiteralOperatorLiteralFactory_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_
    ;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)&pTVar3[1].SharedReferenceCount,&param_1->Value);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    __return_storage_ptr__->Object =
         (TLiteralOperatorLiteralFactory<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)
         (pTVar3 + 1);
    if ((TLiteralOperatorLiteralFactory<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)
        (pTVar3 + 1) ==
        (TLiteralOperatorLiteralFactory<Metasound::TEnum<Audio::EDynamicFilterType,0>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<Audio::EDynamicFilterType,0>_>,1>
                  *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeOperatorFactoryRef<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::FCoverterOperatorFactory> @ 14b047a70

TSharedRef<Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EDynamicFilterType,0>_>::FCoverterOperatorFactory,1>
* __cdecl Metasound::
          MakeOperatorFactoryRef<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::FCoverterOperatorFactory>
                    (TSharedRef<Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EDynamicFilterType,0>_>::FCoverterOperatorFactory,1>
                     *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EDynamicFilterType,0>_>::FCoverterOperatorFactory,1>
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_HV__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_HV__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_
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
        pTVar4 = (TSharedRef<Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EDynamicFilterType,0>_>::FCoverterOperatorFactory,1>
                  *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeOperatorFactoryRef<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,int>::FCoverterOperatorFactory> @ 14b047b10

TSharedRef<Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,int>::FCoverterOperatorFactory,1>
* __cdecl Metasound::
          MakeOperatorFactoryRef<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,int>::FCoverterOperatorFactory>
                    (TSharedRef<Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,int>::FCoverterOperatorFactory,1>
                     *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,int>::FCoverterOperatorFactory,1>
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound__H_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound__H_Metasound__6B_
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
        pTVar4 = (TSharedRef<Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,int>::FCoverterOperatorFactory,1>
                  *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeOperatorFactoryRef<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,float>::FCoverterOperatorFactory> @ 14b047bb0

TSharedRef<Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,float>::FCoverterOperatorFactory,1>
* __cdecl Metasound::
          MakeOperatorFactoryRef<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,float>::FCoverterOperatorFactory>
                    (TSharedRef<Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,float>::FCoverterOperatorFactory,1>
                     *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,float>::FCoverterOperatorFactory,1>
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound__M_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound__M_Metasound__6B_
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
        pTVar4 = (TSharedRef<Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,float>::FCoverterOperatorFactory,1>
                  *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeOperatorFactoryRef<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,bool>::FCoverterOperatorFactory> @ 14b047c50

TSharedRef<Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,bool>::FCoverterOperatorFactory,1>
* __cdecl Metasound::
          MakeOperatorFactoryRef<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,bool>::FCoverterOperatorFactory>
                    (TSharedRef<Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,bool>::FCoverterOperatorFactory,1>
                     *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,bool>::FCoverterOperatorFactory,1>
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
         ___7__TIntrusiveReferenceController_VFCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___N_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3[1]._padding_ =
         (longlong)
         &
         ___7FCoverterOperatorFactory___TAutoConverterNode_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___N_Metasound__6B_
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
        pTVar4 = (TSharedRef<Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,bool>::FCoverterOperatorFactory,1>
                  *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<Metasound::FNodeClassMetadata_const_,1,Metasound::FNodeClassMetadata_const_&> @ 14b047cf0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TSharedRef<Metasound::FNodeClassMetadata_const_,1> * __cdecl
MakeShared<Metasound::FNodeClassMetadata_const_,1,Metasound::FNodeClassMetadata_const_&>
          (TSharedRef<Metasound::FNodeClassMetadata_const_,1> *__return_storage_ptr__,
          FNodeClassMetadata *param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> *pTVar4;
  
  pTVar3 = operator_new(0xf0);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FNodeClassMetadata *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController___CBUFNodeClassMetadata_Metasound___00_SharedPointerInternals__6B_
    ;
    Metasound::FNodeClassMetadata::FNodeClassMetadata((FNodeClassMetadata *)(pTVar3 + 1),param_1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    __return_storage_ptr__->Object = (FNodeClassMetadata *)(pTVar3 + 1);
    if ((FNodeClassMetadata *)(pTVar3 + 1) == (FNodeClassMetadata *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<Metasound::FNodeClassMetadata_const_,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// RegisterConversionNode<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>,int,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_> @ 14b047db0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
RegisterConversionNode<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>,int,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>
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
  
  if (`bool___cdecl_RegisterConversionNode<Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EDynamicFilterType,0>_>,int,Metasound::TEnum<Audio::EDynamicFilterType,0>_>(FName_const&___ptr64,FName_const&___ptr64,Metasound::FNodeClassMetadata_const&___ptr64)'
      ::__l2::bAlreadyRegisteredThisConverter) {
    if (3 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<4>
                (&`bool___cdecl_RegisterConversionNode<Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EDynamicFilterType,0>_>,int,Metasound::TEnum<Audio::EDynamicFilterType,0>_>(FName_const&___ptr64,FName_const&___ptr64,Metasound::FNodeClassMetadata_const&___ptr64)'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    return false;
  }
  `bool___cdecl_RegisterConversionNode<Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EDynamicFilterType,0>_>,int,Metasound::TEnum<Audio::EDynamicFilterType,0>_>(FName_const&___ptr64,FName_const&___ptr64,Metasound::FNodeClassMetadata_const&___ptr64)'
  ::__l2::bAlreadyRegisteredThisConverter = true;
  FName::FName(&local_res20,Metasound::TDataReferenceTypeInfo<int>::TypeName);
  FName::FName(&local_58,
               Metasound::
               TDataReferenceTypeInfo<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::TypeName
              );
  local_50 = local_res20;
  local_48 = local_58;
  local_40 = *param_1;
  local_38 = *param_2;
  Metasound::Frontend::FNodeClassRegistryKey::FNodeClassRegistryKey(&local_30,param_3);
  pIVar2 = Metasound::Frontend::INodeClassRegistry::Get();
  uVar1 = (**(code **)((longlong)*pIVar2 + 200))(pIVar2,&local_50,&local_40);
  return (bool)uVar1;
}

// RegisterConversionNode<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,int>,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,int> @ 14b047ea0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
RegisterConversionNode<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,int>,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,int>
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
  
  if (`bool___cdecl_RegisterConversionNode<Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,int>,Metasound::TEnum<Audio::EDynamicFilterType,0>,int>(FName_const&___ptr64,FName_const&___ptr64,Metasound::FNodeClassMetadata_const&___ptr64)'
      ::__l2::bAlreadyRegisteredThisConverter) {
    if (3 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<4>
                (&`bool___cdecl_RegisterConversionNode<Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,int>,Metasound::TEnum<Audio::EDynamicFilterType,0>,int>(FName_const&___ptr64,FName_const&___ptr64,Metasound::FNodeClassMetadata_const&___ptr64)'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    return false;
  }
  `bool___cdecl_RegisterConversionNode<Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,int>,Metasound::TEnum<Audio::EDynamicFilterType,0>,int>(FName_const&___ptr64,FName_const&___ptr64,Metasound::FNodeClassMetadata_const&___ptr64)'
  ::__l2::bAlreadyRegisteredThisConverter = true;
  FName::FName(&local_res20,
               Metasound::
               TDataReferenceTypeInfo<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::TypeName
              );
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

// RegisterConversionNode<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,float>,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,float> @ 14b047f90

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
RegisterConversionNode<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,float>,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,float>
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
  
  if (`bool___cdecl_RegisterConversionNode<Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,float>,Metasound::TEnum<Audio::EDynamicFilterType,0>,float>(FName_const&___ptr64,FName_const&___ptr64,Metasound::FNodeClassMetadata_const&___ptr64)'
      ::__l2::bAlreadyRegisteredThisConverter) {
    if (3 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<4>
                (&`bool___cdecl_RegisterConversionNode<Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,float>,Metasound::TEnum<Audio::EDynamicFilterType,0>,float>(FName_const&___ptr64,FName_const&___ptr64,Metasound::FNodeClassMetadata_const&___ptr64)'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    return false;
  }
  `bool___cdecl_RegisterConversionNode<Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,float>,Metasound::TEnum<Audio::EDynamicFilterType,0>,float>(FName_const&___ptr64,FName_const&___ptr64,Metasound::FNodeClassMetadata_const&___ptr64)'
  ::__l2::bAlreadyRegisteredThisConverter = true;
  FName::FName(&local_res20,
               Metasound::
               TDataReferenceTypeInfo<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::TypeName
              );
  FName::FName(&local_58,Metasound::TDataReferenceTypeInfo<float>::TypeName);
  local_50 = local_res20;
  local_48 = local_58;
  local_40 = *param_1;
  local_38 = *param_2;
  Metasound::Frontend::FNodeClassRegistryKey::FNodeClassRegistryKey(&local_30,param_3);
  pIVar2 = Metasound::Frontend::INodeClassRegistry::Get();
  uVar1 = (**(code **)((longlong)*pIVar2 + 200))(pIVar2,&local_50,&local_40);
  return (bool)uVar1;
}

// RegisterConversionNode<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,bool>,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,bool> @ 14b048080

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
RegisterConversionNode<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,bool>,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,bool>
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
  
  if (`bool___cdecl_RegisterConversionNode<Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,bool>,Metasound::TEnum<Audio::EDynamicFilterType,0>,bool>(FName_const&___ptr64,FName_const&___ptr64,Metasound::FNodeClassMetadata_const&___ptr64)'
      ::__l2::bAlreadyRegisteredThisConverter) {
    if (3 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<4>
                (&`bool___cdecl_RegisterConversionNode<Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,bool>,Metasound::TEnum<Audio::EDynamicFilterType,0>,bool>(FName_const&___ptr64,FName_const&___ptr64,Metasound::FNodeClassMetadata_const&___ptr64)'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    return false;
  }
  `bool___cdecl_RegisterConversionNode<Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,bool>,Metasound::TEnum<Audio::EDynamicFilterType,0>,bool>(FName_const&___ptr64,FName_const&___ptr64,Metasound::FNodeClassMetadata_const&___ptr64)'
  ::__l2::bAlreadyRegisteredThisConverter = true;
  FName::FName(&local_res20,
               Metasound::
               TDataReferenceTypeInfo<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::TypeName
              );
  FName::FName(&local_58,Metasound::TDataReferenceTypeInfo<bool>::TypeName);
  local_50 = local_res20;
  local_48 = local_58;
  local_40 = *param_1;
  local_38 = *param_2;
  Metasound::Frontend::FNodeClassRegistryKey::FNodeClassRegistryKey(&local_30,param_3);
  pIVar2 = Metasound::Frontend::INodeClassRegistry::Get();
  uVar1 = (**(code **)((longlong)*pIVar2 + 200))(pIVar2,&local_50,&local_40);
  return (bool)uVar1;
}

// RegisterConversionOperator<int,Metasound::FTime> @ 14b048170

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl Metasound::RegisterConversionOperator<int,Metasound::FTime>(FModuleInfo *param_1)

{
  undefined1 uVar1;
  FNodeClassMetadata *pFVar2;
  INodeClassRegistry *pIVar3;
  FName local_res10;
  FName local_res18 [2];
  FName local_58;
  FName local_50;
  FName local_48;
  FName local_40;
  FNodeClassRegistryKey local_38;
  
  ::FName::FName(&local_res10,TDataReferenceTypeInfo<int>::TypeName);
  ::FName::FName(local_res18,TDataReferenceTypeInfo<Metasound::FTime>::TypeName);
  local_58 = local_res10;
  local_50 = local_res18[0];
  pFVar2 = TConversionOperator<int,Metasound::FTime>::GetNodeInfo();
  local_48 = local_res10;
  local_40 = local_res18[0];
  Frontend::FNodeClassRegistryKey::FNodeClassRegistryKey(&local_38,pFVar2);
  pIVar3 = Frontend::INodeClassRegistry::Get();
  uVar1 = (**(code **)((longlong)*pIVar3 + 200))(pIVar3,&local_58,&local_48);
  return (bool)uVar1;
}

// RegisterConversionOperator<float,Metasound::FAudioBuffer> @ 14b048210

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::RegisterConversionOperator<float,Metasound::FAudioBuffer>(FModuleInfo *param_1)

{
  undefined1 uVar1;
  FNodeClassMetadata *pFVar2;
  INodeClassRegistry *pIVar3;
  FName local_res10;
  FName local_res18 [2];
  FName local_58;
  FName local_50;
  FName local_48;
  FName local_40;
  FNodeClassRegistryKey local_38;
  
  ::FName::FName(&local_res10,TDataReferenceTypeInfo<float>::TypeName);
  ::FName::FName(local_res18,TDataReferenceTypeInfo<Metasound::FAudioBuffer>::TypeName);
  local_58 = local_res10;
  local_50 = local_res18[0];
  pFVar2 = TConversionOperator<float,Metasound::FAudioBuffer>::GetNodeInfo();
  local_48 = local_res10;
  local_40 = local_res18[0];
  Frontend::FNodeClassRegistryKey::FNodeClassRegistryKey(&local_38,pFVar2);
  pIVar3 = Frontend::INodeClassRegistry::Get();
  uVar1 = (**(code **)((longlong)*pIVar3 + 200))(pIVar3,&local_58,&local_48);
  return (bool)uVar1;
}

// RegisterConversionOperator<float,Metasound::FTime> @ 14b0482b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl Metasound::RegisterConversionOperator<float,Metasound::FTime>(FModuleInfo *param_1)

{
  undefined1 uVar1;
  FNodeClassMetadata *pFVar2;
  INodeClassRegistry *pIVar3;
  FName local_res10;
  FName local_res18 [2];
  FName local_58;
  FName local_50;
  FName local_48;
  FName local_40;
  FNodeClassRegistryKey local_38;
  
  ::FName::FName(&local_res10,TDataReferenceTypeInfo<float>::TypeName);
  ::FName::FName(local_res18,TDataReferenceTypeInfo<Metasound::FTime>::TypeName);
  local_58 = local_res10;
  local_50 = local_res18[0];
  pFVar2 = TConversionOperator<float,Metasound::FTime>::GetNodeInfo();
  local_48 = local_res10;
  local_40 = local_res18[0];
  Frontend::FNodeClassRegistryKey::FNodeClassRegistryKey(&local_38,pFVar2);
  pIVar3 = Frontend::INodeClassRegistry::Get();
  uVar1 = (**(code **)((longlong)*pIVar3 + 200))(pIVar3,&local_58,&local_48);
  return (bool)uVar1;
}

// RegisterConversionOperator<Metasound::FAudioBuffer,float> @ 14b048350

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::RegisterConversionOperator<Metasound::FAudioBuffer,float>(FModuleInfo *param_1)

{
  undefined1 uVar1;
  FNodeClassMetadata *pFVar2;
  INodeClassRegistry *pIVar3;
  FName local_res10;
  FName local_res18 [2];
  FName local_58;
  FName local_50;
  FName local_48;
  FName local_40;
  FNodeClassRegistryKey local_38;
  
  ::FName::FName(&local_res10,TDataReferenceTypeInfo<Metasound::FAudioBuffer>::TypeName);
  ::FName::FName(local_res18,TDataReferenceTypeInfo<float>::TypeName);
  local_58 = local_res10;
  local_50 = local_res18[0];
  pFVar2 = TConversionOperator<Metasound::FAudioBuffer,float>::GetNodeInfo();
  local_48 = local_res10;
  local_40 = local_res18[0];
  Frontend::FNodeClassRegistryKey::FNodeClassRegistryKey(&local_38,pFVar2);
  pIVar3 = Frontend::INodeClassRegistry::Get();
  uVar1 = (**(code **)((longlong)*pIVar3 + 200))(pIVar3,&local_58,&local_48);
  return (bool)uVar1;
}

// RegisterConversionOperator<Metasound::FTime,int> @ 14b0483f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl Metasound::RegisterConversionOperator<Metasound::FTime,int>(FModuleInfo *param_1)

{
  undefined1 uVar1;
  FNodeClassMetadata *pFVar2;
  INodeClassRegistry *pIVar3;
  FName local_res10;
  FName local_res18 [2];
  FName local_58;
  FName local_50;
  FName local_48;
  FName local_40;
  FNodeClassRegistryKey local_38;
  
  ::FName::FName(&local_res10,TDataReferenceTypeInfo<Metasound::FTime>::TypeName);
  ::FName::FName(local_res18,TDataReferenceTypeInfo<int>::TypeName);
  local_58 = local_res10;
  local_50 = local_res18[0];
  pFVar2 = TConversionOperator<Metasound::FTime,int>::GetNodeInfo();
  local_48 = local_res10;
  local_40 = local_res18[0];
  Frontend::FNodeClassRegistryKey::FNodeClassRegistryKey(&local_38,pFVar2);
  pIVar3 = Frontend::INodeClassRegistry::Get();
  uVar1 = (**(code **)((longlong)*pIVar3 + 200))(pIVar3,&local_58,&local_48);
  return (bool)uVar1;
}

// RegisterConversionOperator<Metasound::FTime,float> @ 14b048490

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl Metasound::RegisterConversionOperator<Metasound::FTime,float>(FModuleInfo *param_1)

{
  undefined1 uVar1;
  FNodeClassMetadata *pFVar2;
  INodeClassRegistry *pIVar3;
  FName local_res10;
  FName local_res18 [2];
  FName local_58;
  FName local_50;
  FName local_48;
  FName local_40;
  FNodeClassRegistryKey local_38;
  
  ::FName::FName(&local_res10,TDataReferenceTypeInfo<Metasound::FTime>::TypeName);
  ::FName::FName(local_res18,TDataReferenceTypeInfo<float>::TypeName);
  local_58 = local_res10;
  local_50 = local_res18[0];
  pFVar2 = TConversionOperator<Metasound::FTime,float>::GetNodeInfo();
  local_48 = local_res10;
  local_40 = local_res18[0];
  Frontend::FNodeClassRegistryKey::FNodeClassRegistryKey(&local_38,pFVar2);
  pIVar3 = Frontend::INodeClassRegistry::Get();
  uVar1 = (**(code **)((longlong)*pIVar3 + 200))(pIVar3,&local_58,&local_48);
  return (bool)uVar1;
}

// RegisterConverterNodes<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_> @ 14b048530

void __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterConverterNodes<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
          (FModuleInfo *param_1)

{
  return;
}

// RegisterConverterNodes<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_> @ 14b048540

void __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterConverterNodes<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>(FModuleInfo *param_1)

{
  AttemptToRegisterConverter<int,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,1>(param_1);
  AttemptToRegisterConverter<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,int,1>(param_1);
  return;
}

// RegisterDataType<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,2,void> @ 14b048570

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::RegisterDataType<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,2,void>
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
  
  if (`bool___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::RegisterDataTypeWithFrontendInternal<Metasound::TEnum<Audio::EDynamicFilterType,0>,2,void>(Metasound::Frontend::FModuleInfo_const&___ptr64)'
      ::__l2::bAlreadyRegisteredThisDataType) {
    if ((byte)LogMetaSound._0_1_ < 4) {
      return false;
    }
    pFVar5 = &`bool___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::RegisterDataTypeWithFrontendInternal<Metasound::TEnum<Audio::EDynamicFilterType,0>,2,void>(Metasound::Frontend::FModuleInfo_const&___ptr64)'
              ::__l6::LOG_Static;
  }
  else {
    `bool___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::RegisterDataTypeWithFrontendInternal<Metasound::TEnum<Audio::EDynamicFilterType,0>,2,void>(Metasound::Frontend::FModuleInfo_const&___ptr64)'
    ::__l2::bAlreadyRegisteredThisDataType = true;
    pIVar3 = IDataTypeRegistry::Get();
    pcVar1 = *(code **)((longlong)*pIVar3 + 8);
    this = ::operator_new(0x640);
    local_res10 = (FDataTypeRegistryEntryBase *)0x0;
    if (this != (void *)0x0) {
      local_res10 = (FDataTypeRegistryEntryBase *)
                    `Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
                    RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,2,void>'
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
    AttemptToRegisterConverter<int,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,1>(param_1);
    MetasoundDataTypeRegistrationPrivate::
    AttemptToRegisterConverter<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,int,1>(param_1);
    if (`bool___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<Audio::EDynamicFilterType,0>_>,0,void>(Metasound::Frontend::FModuleInfo_const&___ptr64)'
        ::__l2::bAlreadyRegisteredThisDataType == false) {
      `bool___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<Audio::EDynamicFilterType,0>_>,0,void>(Metasound::Frontend::FModuleInfo_const&___ptr64)'
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
                 CreateDataTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>,0,void>
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
             ___7FDataTypeRegistryEntry__1____RegisterDataTypeWithFrontendInternal_U__TVariable_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound___0A_X_MetasoundDataTypeRegistrationPrivate_Frontend_Metasound__YA_NAEBUFModuleInfo_23__Z_6B_
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
    pFVar5 = &`bool___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<Audio::EDynamicFilterType,0>_>,0,void>(Metasound::Frontend::FModuleInfo_const&___ptr64)'
              ::__l6::LOG_Static;
  }
  UE::Logging::Private::BasicLog<4>(pFVar5,(FLogCategoryBase *)&LogMetaSound);
  return false;
}

// RegisterDataTypeArrayWithFrontend<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,2> @ 14b048730

bool __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeArrayWithFrontend<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,2>
          (FModuleInfo *param_1)

{
  return true;
}

// RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>,0,void> @ 14b048740

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>,0,void>
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
  
  if (`bool___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<Audio::EDynamicFilterType,0>_>,0,void>(Metasound::Frontend::FModuleInfo_const&___ptr64)'
      ::__l2::bAlreadyRegisteredThisDataType) {
    if (3 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<4>
                (&`bool___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<Audio::EDynamicFilterType,0>_>,0,void>(Metasound::Frontend::FModuleInfo_const&___ptr64)'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    return false;
  }
  `bool___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::RegisterDataTypeWithFrontendInternal<Metasound::TVariable<Metasound::TEnum<Audio::EDynamicFilterType,0>_>,0,void>(Metasound::Frontend::FModuleInfo_const&___ptr64)'
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
    pFVar4 = CreateDataTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>,0,void>
                       (&local_58);
    FDataTypeRegistryEntryBase::FDataTypeRegistryEntryBase(this,pFVar4,&local_68);
    if (local_58.DataTypeDisplayText.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.DataTypeDisplayText.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    *(undefined ***)this =
         &
         ___7FDataTypeRegistryEntry__1____RegisterDataTypeWithFrontendInternal_U__TVariable_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound___0A_X_MetasoundDataTypeRegistrationPrivate_Frontend_Metasound__YA_NAEBUFModuleInfo_23__Z_6B_
    ;
  }
  local_res10 = this;
  uVar2 = (*pcVar1)(pIVar3,&local_res10);
  if (local_res10 != (FDataTypeRegistryEntryBase *)0x0) {
    (*(code *)**(undefined8 **)local_res10)(local_res10,1);
  }
  return (bool)uVar2;
}

// RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,2,void> @ 14b048870

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,2,void>
          (FModuleInfo *param_1)

{
  code *pcVar1;
  char cVar2;
  IDataTypeRegistry *pIVar3;
  void *this;
  FDataTypeRegistryEntry *local_res10;
  
  if (`bool___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::RegisterDataTypeWithFrontendInternal<Metasound::TEnum<Audio::EDynamicFilterType,0>,2,void>(Metasound::Frontend::FModuleInfo_const&___ptr64)'
      ::__l2::bAlreadyRegisteredThisDataType) {
    if (3 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<4>
                (&`bool___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::RegisterDataTypeWithFrontendInternal<Metasound::TEnum<Audio::EDynamicFilterType,0>,2,void>(Metasound::Frontend::FModuleInfo_const&___ptr64)'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    return false;
  }
  `bool___cdecl_Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::RegisterDataTypeWithFrontendInternal<Metasound::TEnum<Audio::EDynamicFilterType,0>,2,void>(Metasound::Frontend::FModuleInfo_const&___ptr64)'
  ::__l2::bAlreadyRegisteredThisDataType = true;
  pIVar3 = IDataTypeRegistry::Get();
  pcVar1 = *(code **)((longlong)*pIVar3 + 8);
  this = ::operator_new(0x640);
  local_res10 = (FDataTypeRegistryEntry *)0x0;
  if (this != (void *)0x0) {
    local_res10 = `Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
                  RegisterDataTypeWithFrontendInternal<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,2,void>'
                  ::__l2::FDataTypeRegistryEntry::FDataTypeRegistryEntry(this);
  }
  cVar2 = (*pcVar1)(pIVar3,&local_res10);
  if (local_res10 != (FDataTypeRegistryEntry *)0x0) {
    (*(code *)**(undefined8 **)local_res10)(local_res10,1);
  }
  if (cVar2 != '\0') {
    AttemptToRegisterConverter<int,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,1>(param_1);
    AttemptToRegisterConverter<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,int,1>(param_1);
  }
  return (bool)cVar2;
}

// RegisterNode<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>,void> @ 14b048940

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>,void>
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
         ___7__TNodeRegistryEntry_V__TAutoConverterNode_HV__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,int>,void> @ 14b0489d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,int>,void>
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
         ___7__TNodeRegistryEntry_V__TAutoConverterNode_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound__H_Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,float>,void> @ 14b048a60

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,float>,void>
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
         ___7__TNodeRegistryEntry_V__TAutoConverterNode_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound__M_Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,bool>,void> @ 14b048af0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,bool>,void>
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
         ___7__TNodeRegistryEntry_V__TAutoConverterNode_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___N_Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TClampNodeOperator<int>_>,void> @ 14b048b80

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::TClampNodeOperator<int>_>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  FNodeClassMetadata *pFVar2;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10;
  FNodeClassMetadata local_e8;
  
  pFVar2 = TNodeFacade<Metasound::TClampNodeOperator<int>_>::CreateNodeClassMetadata(&local_e8);
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TClampNodeOperator_H_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(&local_res10);
  if ((FNodeRegistryEntryBase *)local_res10.Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10.Ptr)(local_res10.Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TClampNodeOperator<int>_>,void> @ 14b048c30

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::TClampNodeOperator<int>_>,void>
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TClampNodeOperator_H_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TClampNodeOperator<float>_>,void> @ 14b048cc0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::TClampNodeOperator<float>_>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  FNodeClassMetadata *pFVar2;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10;
  FNodeClassMetadata local_e8;
  
  pFVar2 = TNodeFacade<Metasound::TClampNodeOperator<float>_>::CreateNodeClassMetadata(&local_e8);
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TClampNodeOperator_M_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(&local_res10);
  if ((FNodeRegistryEntryBase *)local_res10.Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10.Ptr)(local_res10.Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TClampNodeOperator<float>_>,void> @ 14b048d70

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::TClampNodeOperator<float>_>,void>
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TClampNodeOperator_M_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TClampNodeOperator<Metasound::FAudioBuffer>_>,void> @ 14b048e00

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::TClampNodeOperator<Metasound::FAudioBuffer>_>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  FNodeClassMetadata *pFVar2;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10;
  FNodeClassMetadata local_e8;
  
  pFVar2 = TNodeFacade<Metasound::TClampNodeOperator<Metasound::FAudioBuffer>_>::
           CreateNodeClassMetadata(&local_e8);
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TClampNodeOperator_VFAudioBuffer_Metasound___Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(&local_res10);
  if ((FNodeRegistryEntryBase *)local_res10.Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10.Ptr)(local_res10.Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TClampNodeOperator<Metasound::FAudioBuffer>_>,void> @ 14b048eb0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::TClampNodeOperator<Metasound::FAudioBuffer>_>,void>
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TClampNodeOperator_VFAudioBuffer_Metasound___Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TConversionOperator<int,Metasound::FTime>_>,void> @ 14b048f40

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::TConversionOperator<int,Metasound::FTime>_>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  FNodeClassMetadata *pFVar2;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10 [3];
  FNodeClassMetadata local_e8;
  
  pFVar2 = TConversionOperator<int,Metasound::FTime>::GetNodeInfo();
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TConversionOperator_HVFTime_Metasound___Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res10);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10[0].Ptr)(local_res10[0].Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TConversionOperator<int,Metasound::FTime>_>,void> @ 14b048ff0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::TConversionOperator<int,Metasound::FTime>_>,void>
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TConversionOperator_HVFTime_Metasound___Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TConversionOperator<float,Metasound::FAudioBuffer>_>,void> @ 14b049080

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::TConversionOperator<float,Metasound::FAudioBuffer>_>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  FNodeClassMetadata *pFVar2;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10 [3];
  FNodeClassMetadata local_e8;
  
  pFVar2 = TConversionOperator<float,Metasound::FAudioBuffer>::GetNodeInfo();
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TConversionOperator_MVFAudioBuffer_Metasound___Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res10);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10[0].Ptr)(local_res10[0].Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TConversionOperator<float,Metasound::FAudioBuffer>_>,void> @ 14b049130

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::TConversionOperator<float,Metasound::FAudioBuffer>_>,void>
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TConversionOperator_MVFAudioBuffer_Metasound___Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TConversionOperator<float,Metasound::FTime>_>,void> @ 14b0491c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::TConversionOperator<float,Metasound::FTime>_>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  FNodeClassMetadata *pFVar2;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10 [3];
  FNodeClassMetadata local_e8;
  
  pFVar2 = TConversionOperator<float,Metasound::FTime>::GetNodeInfo();
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TConversionOperator_MVFTime_Metasound___Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res10);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10[0].Ptr)(local_res10[0].Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TConversionOperator<float,Metasound::FTime>_>,void> @ 14b049270

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::TConversionOperator<float,Metasound::FTime>_>,void>
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TConversionOperator_MVFTime_Metasound___Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TConversionOperator<Metasound::FAudioBuffer,float>_>,void> @ 14b049300

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::TConversionOperator<Metasound::FAudioBuffer,float>_>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  FNodeClassMetadata *pFVar2;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10 [3];
  FNodeClassMetadata local_e8;
  
  pFVar2 = TConversionOperator<Metasound::FAudioBuffer,float>::GetNodeInfo();
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TConversionOperator_VFAudioBuffer_Metasound__M_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res10);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10[0].Ptr)(local_res10[0].Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TConversionOperator<Metasound::FAudioBuffer,float>_>,void> @ 14b0493b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::TConversionOperator<Metasound::FAudioBuffer,float>_>,void>
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TConversionOperator_VFAudioBuffer_Metasound__M_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TConversionOperator<Metasound::FTime,int>_>,void> @ 14b049440

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::TConversionOperator<Metasound::FTime,int>_>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  FNodeClassMetadata *pFVar2;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10 [3];
  FNodeClassMetadata local_e8;
  
  pFVar2 = TConversionOperator<Metasound::FTime,int>::GetNodeInfo();
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TConversionOperator_VFTime_Metasound__H_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res10);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10[0].Ptr)(local_res10[0].Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TConversionOperator<Metasound::FTime,int>_>,void> @ 14b0494f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::TConversionOperator<Metasound::FTime,int>_>,void>
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TConversionOperator_VFTime_Metasound__H_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TConversionOperator<Metasound::FTime,float>_>,void> @ 14b049580

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::TConversionOperator<Metasound::FTime,float>_>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  FNodeClassMetadata *pFVar2;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10 [3];
  FNodeClassMetadata local_e8;
  
  pFVar2 = TConversionOperator<Metasound::FTime,float>::GetNodeInfo();
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TConversionOperator_VFTime_Metasound__M_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res10);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10[0].Ptr)(local_res10[0].Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TConversionOperator<Metasound::FTime,float>_>,void> @ 14b049630

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::TConversionOperator<Metasound::FTime,float>_>,void>
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TConversionOperator_VFTime_Metasound__M_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,2>_>,void> @ 14b0496c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,2>_>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10 [3];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,2>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,2>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,2>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TCrossfadeOperator<float,2>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,2>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::TCrossfadeOperator<float,2>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,2>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,2>::GetNodeInfo(void)'
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TCrossfadeOperator_M_01_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res10);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10[0].Ptr)(local_res10[0].Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,2>_>,void> @ 14b0497e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,2>_>,void>
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TCrossfadeOperator_M_01_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,3>_>,void> @ 14b049870

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,3>_>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10 [3];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,3>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,3>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,3>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TCrossfadeOperator<float,3>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,3>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::TCrossfadeOperator<float,3>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,3>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,3>::GetNodeInfo(void)'
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TCrossfadeOperator_M_02_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res10);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10[0].Ptr)(local_res10[0].Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,3>_>,void> @ 14b049990

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,3>_>,void>
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TCrossfadeOperator_M_02_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,4>_>,void> @ 14b049a20

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,4>_>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10 [3];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,4>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,4>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,4>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TCrossfadeOperator<float,4>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,4>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::TCrossfadeOperator<float,4>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,4>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,4>::GetNodeInfo(void)'
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TCrossfadeOperator_M_03_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res10);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10[0].Ptr)(local_res10[0].Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,4>_>,void> @ 14b049b40

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,4>_>,void>
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TCrossfadeOperator_M_03_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,5>_>,void> @ 14b049bd0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,5>_>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10 [3];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,5>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,5>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,5>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TCrossfadeOperator<float,5>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,5>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::TCrossfadeOperator<float,5>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,5>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,5>::GetNodeInfo(void)'
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TCrossfadeOperator_M_04_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res10);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10[0].Ptr)(local_res10[0].Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,5>_>,void> @ 14b049cf0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,5>_>,void>
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TCrossfadeOperator_M_04_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,6>_>,void> @ 14b049d80

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,6>_>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10 [3];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,6>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,6>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,6>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TCrossfadeOperator<float,6>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,6>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::TCrossfadeOperator<float,6>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,6>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,6>::GetNodeInfo(void)'
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TCrossfadeOperator_M_05_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res10);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10[0].Ptr)(local_res10[0].Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,6>_>,void> @ 14b049ea0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,6>_>,void>
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TCrossfadeOperator_M_05_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,7>_>,void> @ 14b049f30

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,7>_>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10 [3];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,7>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,7>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,7>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TCrossfadeOperator<float,7>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,7>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::TCrossfadeOperator<float,7>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,7>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,7>::GetNodeInfo(void)'
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TCrossfadeOperator_M_06_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res10);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10[0].Ptr)(local_res10[0].Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,7>_>,void> @ 14b04a050

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,7>_>,void>
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TCrossfadeOperator_M_06_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,8>_>,void> @ 14b04a0e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,8>_>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10 [3];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,8>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,8>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,8>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TCrossfadeOperator<float,8>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,8>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::TCrossfadeOperator<float,8>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,8>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,8>::GetNodeInfo(void)'
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TCrossfadeOperator_M_07_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res10);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10[0].Ptr)(local_res10[0].Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,8>_>,void> @ 14b04a200

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,8>_>,void>
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TCrossfadeOperator_M_07_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>_>,void> @ 14b04a290

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>_>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10 [3];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>::GetNodeInfo'::__l2::<lambda_1>::
      operator()(local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>::GetNodeInfo(void)'
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TCrossfadeOperator_VFAudioBuffer_Metasound___01_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res10);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10[0].Ptr)(local_res10[0].Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>_>,void> @ 14b04a3b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>_>,void>
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TCrossfadeOperator_VFAudioBuffer_Metasound___01_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>_>,void> @ 14b04a440

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>_>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10 [3];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>::GetNodeInfo'::__l2::<lambda_1>::
      operator()(local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>::GetNodeInfo(void)'
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TCrossfadeOperator_VFAudioBuffer_Metasound___02_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res10);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10[0].Ptr)(local_res10[0].Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>_>,void> @ 14b04a560

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>_>,void>
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TCrossfadeOperator_VFAudioBuffer_Metasound___02_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>_>,void> @ 14b04a5f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>_>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10 [3];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>::GetNodeInfo'::__l2::<lambda_1>::
      operator()(local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>::GetNodeInfo(void)'
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TCrossfadeOperator_VFAudioBuffer_Metasound___03_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res10);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10[0].Ptr)(local_res10[0].Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>_>,void> @ 14b04a710

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>_>,void>
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TCrossfadeOperator_VFAudioBuffer_Metasound___03_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>_>,void> @ 14b04a7a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>_>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10 [3];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>::GetNodeInfo'::__l2::<lambda_1>::
      operator()(local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>::GetNodeInfo(void)'
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TCrossfadeOperator_VFAudioBuffer_Metasound___04_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res10);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10[0].Ptr)(local_res10[0].Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>_>,void> @ 14b04a8c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>_>,void>
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TCrossfadeOperator_VFAudioBuffer_Metasound___04_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>_>,void> @ 14b04a950

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>_>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10 [3];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>::GetNodeInfo'::__l2::<lambda_1>::
      operator()(local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>::GetNodeInfo(void)'
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TCrossfadeOperator_VFAudioBuffer_Metasound___05_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res10);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10[0].Ptr)(local_res10[0].Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>_>,void> @ 14b04aa70

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>_>,void>
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TCrossfadeOperator_VFAudioBuffer_Metasound___05_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>_>,void> @ 14b04ab00

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>_>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10 [3];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>::GetNodeInfo'::__l2::<lambda_1>::
      operator()(local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>::GetNodeInfo(void)'
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TCrossfadeOperator_VFAudioBuffer_Metasound___06_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res10);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10[0].Ptr)(local_res10[0].Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>_>,void> @ 14b04ac20

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>_>,void>
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TCrossfadeOperator_VFAudioBuffer_Metasound___06_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>_>,void> @ 14b04acb0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>_>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10 [3];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>::GetNodeInfo'::__l2::<lambda_1>::
      operator()(local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>::GetNodeInfo(void)'
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TCrossfadeOperator_VFAudioBuffer_Metasound___07_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res10);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10[0].Ptr)(local_res10[0].Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>_>,void> @ 14b04add0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>_>,void>
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TCrossfadeOperator_VFAudioBuffer_Metasound___07_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>_>,void> @ 14b04ae60

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>_>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10 [3];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>::GetNodeInfo'::__l2::<lambda_1>::
      operator()(local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TDelayNodeOperator_VFAudioBuffer_Metasound___Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res10);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10[0].Ptr)(local_res10[0].Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>_>,void> @ 14b04af80

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>_>,void>
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TDelayNodeOperator_VFAudioBuffer_Metasound___Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TDelayNodeOperator<Metasound::FTime>_>,void> @ 14b04b010

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::TDelayNodeOperator<Metasound::FTime>_>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10 [3];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TDelayNodeOperator<Metasound::FTime>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TDelayNodeOperator<Metasound::FTime>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TDelayNodeOperator<Metasound::FTime>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TDelayNodeOperator<Metasound::FTime>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TDelayNodeOperator<Metasound::FTime>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::TDelayNodeOperator<Metasound::FTime>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TDelayNodeOperator<Metasound::FTime>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TDelayNodeOperator<Metasound::FTime>::GetNodeInfo(void)'
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TDelayNodeOperator_VFTime_Metasound___Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res10);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10[0].Ptr)(local_res10[0].Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TDelayNodeOperator<Metasound::FTime>_>,void> @ 14b04b130

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::TDelayNodeOperator<Metasound::FTime>_>,void>
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TDelayNodeOperator_VFTime_Metasound___Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TPrintLogOperator<int>_>,void> @ 14b04b1c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::TPrintLogOperator<int>_>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  FNodeClassMetadata *pFVar2;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10;
  FNodeClassMetadata local_e8;
  
  pFVar2 = TNodeFacade<Metasound::TPrintLogOperator<int>_>::CreateNodeClassMetadata(&local_e8);
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TPrintLogOperator_H_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(&local_res10);
  if ((FNodeRegistryEntryBase *)local_res10.Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10.Ptr)(local_res10.Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TPrintLogOperator<int>_>,void> @ 14b04b270

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::TPrintLogOperator<int>_>,void>
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TPrintLogOperator_H_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TPrintLogOperator<float>_>,void> @ 14b04b300

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::TPrintLogOperator<float>_>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  FNodeClassMetadata *pFVar2;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10;
  FNodeClassMetadata local_e8;
  
  pFVar2 = TNodeFacade<Metasound::TPrintLogOperator<float>_>::CreateNodeClassMetadata(&local_e8);
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TPrintLogOperator_M_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(&local_res10);
  if ((FNodeRegistryEntryBase *)local_res10.Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10.Ptr)(local_res10.Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TPrintLogOperator<float>_>,void> @ 14b04b3b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::TPrintLogOperator<float>_>,void>
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TPrintLogOperator_M_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TPrintLogOperator<FString>_>,void> @ 14b04b440

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::TPrintLogOperator<FString>_>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  FNodeClassMetadata *pFVar2;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10;
  FNodeClassMetadata local_e8;
  
  pFVar2 = TNodeFacade<Metasound::TPrintLogOperator<FString>_>::CreateNodeClassMetadata(&local_e8);
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TPrintLogOperator_VFString___Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(&local_res10);
  if ((FNodeRegistryEntryBase *)local_res10.Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10.Ptr)(local_res10.Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TPrintLogOperator<FString>_>,void> @ 14b04b4f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::TPrintLogOperator<FString>_>,void>
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TPrintLogOperator_VFString___Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TPrintLogOperator<bool>_>,void> @ 14b04b580

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::TPrintLogOperator<bool>_>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  FNodeClassMetadata *pFVar2;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10;
  FNodeClassMetadata local_e8;
  
  pFVar2 = TNodeFacade<Metasound::TPrintLogOperator<bool>_>::CreateNodeClassMetadata(&local_e8);
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TPrintLogOperator__N_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(&local_res10);
  if ((FNodeRegistryEntryBase *)local_res10.Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10.Ptr)(local_res10.Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::TPrintLogOperator<bool>_>,void> @ 14b04b630

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::TPrintLogOperator<bool>_>,void>
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_V__TPrintLogOperator__N_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::FBitcrusherOperator>,void> @ 14b04b6c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::FBitcrusherOperator>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10 [3];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FBitcrusherOperator::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FBitcrusherOperator::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FBitcrusherOperator::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::FBitcrusherOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FBitcrusherOperator::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::FBitcrusherOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FBitcrusherOperator::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FBitcrusherOperator::GetNodeInfo(void)'
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_VFBitcrusherOperator_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res10);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10[0].Ptr)(local_res10[0].Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::FBitcrusherOperator>,void> @ 14b04b7e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::FBitcrusherOperator>,void>
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_VFBitcrusherOperator_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::FCompressorOperator>,void> @ 14b04b870

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::FCompressorOperator>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10 [3];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FCompressorOperator::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FCompressorOperator::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FCompressorOperator::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::FCompressorOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FCompressorOperator::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::FCompressorOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FCompressorOperator::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FCompressorOperator::GetNodeInfo(void)'
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_VFCompressorOperator_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res10);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10[0].Ptr)(local_res10[0].Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::FCompressorOperator>,void> @ 14b04b990

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::FCompressorOperator>,void>
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_VFCompressorOperator_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::FDecibelsToLinearGainOperator>,void> @ 14b04ba20

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::FDecibelsToLinearGainOperator>,void>
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
      `Metasound::FDecibelsToLinearGainOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res10,&::Info);
      atexit(`Metasound::FDecibelsToLinearGainOperator::GetNodeInfo'::__l2::
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_VFDecibelsToLinearGainOperator_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res10);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10[0].Ptr)(local_res10[0].Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::FDecibelsToLinearGainOperator>,void> @ 14b04bb40

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::FDecibelsToLinearGainOperator>,void>
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_VFDecibelsToLinearGainOperator_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::FDiffuserOperator>,void> @ 14b04bbd0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::FDiffuserOperator>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  FNodeClassMetadata *pFVar2;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10 [3];
  FNodeClassMetadata local_e8;
  
  pFVar2 = FDiffuserOperator::GetNodeInfo();
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_VFDiffuserOperator_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res10);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10[0].Ptr)(local_res10[0].Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::FDiffuserOperator>,void> @ 14b04bc80

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::FDiffuserOperator>,void>
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_VFDiffuserOperator_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::FDopplerPitchShiftOperator>,void> @ 14b04bd10

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::FDopplerPitchShiftOperator>,void>
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
      `Metasound::FDopplerPitchShiftOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res10,&::Info);
      atexit(`Metasound::FDopplerPitchShiftOperator::GetNodeInfo'::__l2::
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_VFDopplerPitchShiftOperator_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res10);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10[0].Ptr)(local_res10[0].Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::FDopplerPitchShiftOperator>,void> @ 14b04be30

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TNodeFacade<Metasound::FDopplerPitchShiftOperator>,void>
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_VFDopplerPitchShiftOperator_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::FDynamicFilterOperator>,void> @ 14b04bec0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::FDynamicFilterOperator>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10 [3];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDynamicFilterOperator::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDynamicFilterOperator::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDynamicFilterOperator::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::FDynamicFilterOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDynamicFilterOperator::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::FDynamicFilterOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDynamicFilterOperator::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDynamicFilterOperator::GetNodeInfo(void)'
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_VFDynamicFilterOperator_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res10);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10[0].Ptr)(local_res10[0].Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::FDynamicFilterOperator>,void> @ 14b04bfe0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::FDynamicFilterOperator>,void>
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_VFDynamicFilterOperator_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::FTriggerOnNanOperator>,void> @ 14b04c070

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::FTriggerOnNanOperator>,void>
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
      `Metasound::FTriggerOnNanOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res10,&::Info);
      atexit(`Metasound::FTriggerOnNanOperator::GetNodeInfo'::__l2::
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_VFTriggerOnNanOperator_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res10);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10[0].Ptr)(local_res10[0].Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TNodeFacade<Metasound::FTriggerOnNanOperator>,void> @ 14b04c190

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::RegisterNode<Metasound::TNodeFacade<Metasound::FTriggerOnNanOperator>,void>
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
         ___7__TNodeRegistryEntry_V__TNodeFacade_VFTriggerOnNanOperator_Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TReceiveNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>,void> @ 14b04c220

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TReceiveNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  FNodeClassMetadata *pFVar2;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10 [3];
  FNodeClassMetadata local_e8;
  
  pFVar2 = ReceiveNodePrivate::
           TReceiverOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::GetNodeInfo();
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
         ___7__TNodeRegistryEntry_V__TReceiveNode_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res10);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10[0].Ptr)(local_res10[0].Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TReceiveNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>,void> @ 14b04c2d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TReceiveNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>,void>
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
         ___7__TNodeRegistryEntry_V__TReceiveNode_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::TSendNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>,void> @ 14b04c360

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TSendNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>,void>
          (FModuleInfo *param_1)

{
  bool bVar1;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10 [3];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::SendNodePrivate::
      TSendOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::GetNodeInfo'::__l2::
      <lambda_1>::operator()
                (local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::SendNodePrivate::
             TSendOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::GetNodeInfo'::__l2
             ::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
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
         ___7__TNodeRegistryEntry_V__TSendNode_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res10);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10[0].Ptr)(local_res10[0].Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::TSendNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>,void> @ 14b04c480

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
RegisterNode<Metasound::TSendNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>,void>
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
         ___7__TNodeRegistryEntry_V__TSendNode_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::FBPMToSecondsNode,void> @ 14b04c510

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::RegisterNode<Metasound::FBPMToSecondsNode,void>(FModuleInfo *param_1)

{
  bool bVar1;
  FNodeClassMetadata *pFVar2;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10 [3];
  FNodeClassMetadata local_e8;
  
  pFVar2 = FBPMToSecondsOperator::GetNodeInfo();
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
         ___7__TNodeRegistryEntry_VFBPMToSecondsNode_Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res10);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10[0].Ptr)(local_res10[0].Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::FBPMToSecondsNode,void> @ 14b04c5c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::RegisterNode<Metasound::FBPMToSecondsNode,void>
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
         ___7__TNodeRegistryEntry_VFBPMToSecondsNode_Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// RegisterNode<Metasound::FEnvelopeFollowerNode,void> @ 14b04c650

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::RegisterNode<Metasound::FEnvelopeFollowerNode,void>(FModuleInfo *param_1)

{
  bool bVar1;
  FNodeClassMetadata *pFVar2;
  TUniquePtr<Metasound::Frontend::INodeClassRegistryEntry,TDefaultDelete<Metasound::Frontend::INodeClassRegistryEntry>_>
  local_res10 [3];
  FNodeClassMetadata local_e8;
  
  pFVar2 = FEnvelopeFollowerOperator::GetNodeInfo();
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
         ___7__TNodeRegistryEntry_VFEnvelopeFollowerNode_Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res10);
  if ((FNodeRegistryEntryBase *)local_res10[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res10[0].Ptr)(local_res10[0].Ptr,1);
  }
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// RegisterNode<Metasound::FEnvelopeFollowerNode,void> @ 14b04c700

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::RegisterNode<Metasound::FEnvelopeFollowerNode,void>
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
         ___7__TNodeRegistryEntry_VFEnvelopeFollowerNode_Metasound__X_NodeRegistrationPrivate_Frontend_Metasound__6B_
    ;
  }
  bVar1 = NodeRegistrationPrivate::RegisterNodeInternal(local_res18);
  if ((FNodeRegistryEntryBase *)local_res18[0].Ptr != (FNodeRegistryEntryBase *)0x0) {
    (**(code **)*local_res18[0].Ptr)(local_res18[0].Ptr,1);
  }
  return bVar1;
}

// Transform<TArray<FName,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>_&,`Metasound::TEnum<enum_Audio::EDynamicFilterType,0>::TEnum<enum_Audio::EDynamicFilterType,0>'::__l9::<lambda_1>_> @ 14b04c9f0

/* WARNING: Removing unreachable block (ram,0x00014b04cb1b) */

void __cdecl
Algo::
Transform<TArray<FName,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>_&,_Metasound::TEnum<enum_Audio::EDynamicFilterType,0>::TEnum<enum_Audio::EDynamicFilterType,0>_::__l9::<lambda_1>_>
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

// Transform<TArray<FName,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>_&,`Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>::TEnum<enum_Metasound::EEnvelopePeakMode,0>'::__l9::<lambda_1>_> @ 14b04cb50

/* WARNING: Removing unreachable block (ram,0x00014b04cc7b) */

void __cdecl
Algo::
Transform<TArray<FName,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>_&,_Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>::TEnum<enum_Metasound::EEnvelopePeakMode,0>_::__l9::<lambda_1>_>
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

// Transform<TArray<FName,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>_&,`Metasound::TEnum<enum_Audio::EDynamicFilterType,0>::TEnum<enum_Audio::EDynamicFilterType,0>'::__l10::<lambda_1>_> @ 14b04ccb0

/* WARNING: Removing unreachable block (ram,0x00014b04cddb) */

void __cdecl
Algo::
Transform<TArray<FName,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>_&,_Metasound::TEnum<enum_Audio::EDynamicFilterType,0>::TEnum<enum_Audio::EDynamicFilterType,0>_::__l10::<lambda_1>_>
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

// Transform<TArray<FName,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>_&,`Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>::TEnum<enum_Metasound::EEnvelopePeakMode,0>'::__l10::<lambda_1>_> @ 14b04ce10

/* WARNING: Removing unreachable block (ram,0x00014b04cf3b) */

void __cdecl
Algo::
Transform<TArray<FName,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>_&,_Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>::TEnum<enum_Metasound::EEnvelopePeakMode,0>_::__l10::<lambda_1>_>
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

// UnregisterNode<Metasound::TNodeFacade<Metasound::TClampNodeOperator<int>_>_> @ 14b04cf70

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::UnregisterNode<Metasound::TNodeFacade<Metasound::TClampNodeOperator<int>_>_>
          (FModuleInfo *param_1)

{
  bool bVar1;
  FNodeClassMetadata *pFVar2;
  FNodeClassMetadata local_e8;
  
  pFVar2 = TNodeFacade<Metasound::TClampNodeOperator<int>_>::CreateNodeClassMetadata(&local_e8);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(pFVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// UnregisterNode<Metasound::TNodeFacade<Metasound::TClampNodeOperator<float>_>_> @ 14b04cfb0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::UnregisterNode<Metasound::TNodeFacade<Metasound::TClampNodeOperator<float>_>_>
          (FModuleInfo *param_1)

{
  bool bVar1;
  FNodeClassMetadata *pFVar2;
  FNodeClassMetadata local_e8;
  
  pFVar2 = TNodeFacade<Metasound::TClampNodeOperator<float>_>::CreateNodeClassMetadata(&local_e8);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(pFVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// UnregisterNode<Metasound::TNodeFacade<Metasound::TClampNodeOperator<Metasound::FAudioBuffer>_>_> @ 14b04cff0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
UnregisterNode<Metasound::TNodeFacade<Metasound::TClampNodeOperator<Metasound::FAudioBuffer>_>_>
          (FModuleInfo *param_1)

{
  bool bVar1;
  FNodeClassMetadata *pFVar2;
  FNodeClassMetadata local_e8;
  
  pFVar2 = TNodeFacade<Metasound::TClampNodeOperator<Metasound::FAudioBuffer>_>::
           CreateNodeClassMetadata(&local_e8);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(pFVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// UnregisterNode<Metasound::TNodeFacade<Metasound::TConversionOperator<int,Metasound::FTime>_>_> @ 14b04d030

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
UnregisterNode<Metasound::TNodeFacade<Metasound::TConversionOperator<int,Metasound::FTime>_>_>
          (FModuleInfo *param_1)

{
  bool bVar1;
  FNodeClassMetadata *pFVar2;
  FNodeClassMetadata local_e8;
  
  pFVar2 = TConversionOperator<int,Metasound::FTime>::GetNodeInfo();
  FNodeClassMetadata::FNodeClassMetadata(&local_e8,pFVar2);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(&local_e8);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// UnregisterNode<Metasound::TNodeFacade<Metasound::TConversionOperator<float,Metasound::FAudioBuffer>_>_> @ 14b04d080

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
UnregisterNode<Metasound::TNodeFacade<Metasound::TConversionOperator<float,Metasound::FAudioBuffer>_>_>
          (FModuleInfo *param_1)

{
  bool bVar1;
  FNodeClassMetadata *pFVar2;
  FNodeClassMetadata local_e8;
  
  pFVar2 = TConversionOperator<float,Metasound::FAudioBuffer>::GetNodeInfo();
  FNodeClassMetadata::FNodeClassMetadata(&local_e8,pFVar2);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(&local_e8);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// UnregisterNode<Metasound::TNodeFacade<Metasound::TConversionOperator<float,Metasound::FTime>_>_> @ 14b04d0d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
UnregisterNode<Metasound::TNodeFacade<Metasound::TConversionOperator<float,Metasound::FTime>_>_>
          (FModuleInfo *param_1)

{
  bool bVar1;
  FNodeClassMetadata *pFVar2;
  FNodeClassMetadata local_e8;
  
  pFVar2 = TConversionOperator<float,Metasound::FTime>::GetNodeInfo();
  FNodeClassMetadata::FNodeClassMetadata(&local_e8,pFVar2);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(&local_e8);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// UnregisterNode<Metasound::TNodeFacade<Metasound::TConversionOperator<Metasound::FAudioBuffer,float>_>_> @ 14b04d120

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
UnregisterNode<Metasound::TNodeFacade<Metasound::TConversionOperator<Metasound::FAudioBuffer,float>_>_>
          (FModuleInfo *param_1)

{
  bool bVar1;
  FNodeClassMetadata *pFVar2;
  FNodeClassMetadata local_e8;
  
  pFVar2 = TConversionOperator<Metasound::FAudioBuffer,float>::GetNodeInfo();
  FNodeClassMetadata::FNodeClassMetadata(&local_e8,pFVar2);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(&local_e8);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// UnregisterNode<Metasound::TNodeFacade<Metasound::TConversionOperator<Metasound::FTime,int>_>_> @ 14b04d170

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
UnregisterNode<Metasound::TNodeFacade<Metasound::TConversionOperator<Metasound::FTime,int>_>_>
          (FModuleInfo *param_1)

{
  bool bVar1;
  FNodeClassMetadata *pFVar2;
  FNodeClassMetadata local_e8;
  
  pFVar2 = TConversionOperator<Metasound::FTime,int>::GetNodeInfo();
  FNodeClassMetadata::FNodeClassMetadata(&local_e8,pFVar2);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(&local_e8);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// UnregisterNode<Metasound::TNodeFacade<Metasound::TConversionOperator<Metasound::FTime,float>_>_> @ 14b04d1c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
UnregisterNode<Metasound::TNodeFacade<Metasound::TConversionOperator<Metasound::FTime,float>_>_>
          (FModuleInfo *param_1)

{
  bool bVar1;
  FNodeClassMetadata *pFVar2;
  FNodeClassMetadata local_e8;
  
  pFVar2 = TConversionOperator<Metasound::FTime,float>::GetNodeInfo();
  FNodeClassMetadata::FNodeClassMetadata(&local_e8,pFVar2);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(&local_e8);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// UnregisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,2>_>_> @ 14b04d210

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
UnregisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,2>_>_>
          (FModuleInfo *param_1)

{
  bool bVar1;
  undefined1 local_res10 [24];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,2>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,2>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,2>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TCrossfadeOperator<float,2>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,2>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::TCrossfadeOperator<float,2>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,2>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,2>::GetNodeInfo(void)'
              ::__l2::Metadata);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(&local_e8);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// UnregisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,3>_>_> @ 14b04d2c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
UnregisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,3>_>_>
          (FModuleInfo *param_1)

{
  bool bVar1;
  undefined1 local_res10 [24];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,3>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,3>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,3>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TCrossfadeOperator<float,3>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,3>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::TCrossfadeOperator<float,3>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,3>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,3>::GetNodeInfo(void)'
              ::__l2::Metadata);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(&local_e8);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// UnregisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,4>_>_> @ 14b04d370

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
UnregisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,4>_>_>
          (FModuleInfo *param_1)

{
  bool bVar1;
  undefined1 local_res10 [24];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,4>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,4>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,4>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TCrossfadeOperator<float,4>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,4>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::TCrossfadeOperator<float,4>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,4>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,4>::GetNodeInfo(void)'
              ::__l2::Metadata);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(&local_e8);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// UnregisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,5>_>_> @ 14b04d420

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
UnregisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,5>_>_>
          (FModuleInfo *param_1)

{
  bool bVar1;
  undefined1 local_res10 [24];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,5>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,5>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,5>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TCrossfadeOperator<float,5>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,5>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::TCrossfadeOperator<float,5>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,5>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,5>::GetNodeInfo(void)'
              ::__l2::Metadata);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(&local_e8);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// UnregisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,6>_>_> @ 14b04d4d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
UnregisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,6>_>_>
          (FModuleInfo *param_1)

{
  bool bVar1;
  undefined1 local_res10 [24];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,6>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,6>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,6>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TCrossfadeOperator<float,6>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,6>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::TCrossfadeOperator<float,6>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,6>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,6>::GetNodeInfo(void)'
              ::__l2::Metadata);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(&local_e8);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// UnregisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,7>_>_> @ 14b04d580

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
UnregisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,7>_>_>
          (FModuleInfo *param_1)

{
  bool bVar1;
  undefined1 local_res10 [24];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,7>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,7>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,7>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TCrossfadeOperator<float,7>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,7>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::TCrossfadeOperator<float,7>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,7>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,7>::GetNodeInfo(void)'
              ::__l2::Metadata);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(&local_e8);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// UnregisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,8>_>_> @ 14b04d630

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
UnregisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<float,8>_>_>
          (FModuleInfo *param_1)

{
  bool bVar1;
  undefined1 local_res10 [24];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,8>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,8>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,8>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TCrossfadeOperator<float,8>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,8>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::TCrossfadeOperator<float,8>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,8>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,8>::GetNodeInfo(void)'
              ::__l2::Metadata);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(&local_e8);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// UnregisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>_>_> @ 14b04d6e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
UnregisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>_>_>
          (FModuleInfo *param_1)

{
  bool bVar1;
  undefined1 local_res10 [24];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>::GetNodeInfo'::__l2::<lambda_1>::
      operator()(local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>::GetNodeInfo(void)'
              ::__l2::Metadata);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(&local_e8);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// UnregisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>_>_> @ 14b04d790

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
UnregisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>_>_>
          (FModuleInfo *param_1)

{
  bool bVar1;
  undefined1 local_res10 [24];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>::GetNodeInfo'::__l2::<lambda_1>::
      operator()(local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>::GetNodeInfo(void)'
              ::__l2::Metadata);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(&local_e8);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// UnregisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>_>_> @ 14b04d840

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
UnregisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>_>_>
          (FModuleInfo *param_1)

{
  bool bVar1;
  undefined1 local_res10 [24];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>::GetNodeInfo'::__l2::<lambda_1>::
      operator()(local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>::GetNodeInfo(void)'
              ::__l2::Metadata);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(&local_e8);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// UnregisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>_>_> @ 14b04d8f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
UnregisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>_>_>
          (FModuleInfo *param_1)

{
  bool bVar1;
  undefined1 local_res10 [24];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>::GetNodeInfo'::__l2::<lambda_1>::
      operator()(local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>::GetNodeInfo(void)'
              ::__l2::Metadata);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(&local_e8);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// UnregisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>_>_> @ 14b04d9a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
UnregisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>_>_>
          (FModuleInfo *param_1)

{
  bool bVar1;
  undefined1 local_res10 [24];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>::GetNodeInfo'::__l2::<lambda_1>::
      operator()(local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>::GetNodeInfo(void)'
              ::__l2::Metadata);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(&local_e8);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// UnregisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>_>_> @ 14b04da50

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
UnregisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>_>_>
          (FModuleInfo *param_1)

{
  bool bVar1;
  undefined1 local_res10 [24];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>::GetNodeInfo'::__l2::<lambda_1>::
      operator()(local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>::GetNodeInfo(void)'
              ::__l2::Metadata);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(&local_e8);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// UnregisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>_>_> @ 14b04db00

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
UnregisterNode<Metasound::TNodeFacade<Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>_>_>
          (FModuleInfo *param_1)

{
  bool bVar1;
  undefined1 local_res10 [24];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>::GetNodeInfo'::__l2::<lambda_1>::
      operator()(local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>::GetNodeInfo(void)'
              ::__l2::Metadata);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(&local_e8);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// UnregisterNode<Metasound::TNodeFacade<Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>_>_> @ 14b04dbb0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
UnregisterNode<Metasound::TNodeFacade<Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>_>_>
          (FModuleInfo *param_1)

{
  bool bVar1;
  undefined1 local_res10 [24];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>::GetNodeInfo'::__l2::<lambda_1>::
      operator()(local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
              ::__l2::Metadata);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(&local_e8);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// UnregisterNode<Metasound::TNodeFacade<Metasound::TDelayNodeOperator<Metasound::FTime>_>_> @ 14b04dc60

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
UnregisterNode<Metasound::TNodeFacade<Metasound::TDelayNodeOperator<Metasound::FTime>_>_>
          (FModuleInfo *param_1)

{
  bool bVar1;
  undefined1 local_res10 [24];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TDelayNodeOperator<Metasound::FTime>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TDelayNodeOperator<Metasound::FTime>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TDelayNodeOperator<Metasound::FTime>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TDelayNodeOperator<Metasound::FTime>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TDelayNodeOperator<Metasound::FTime>::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::TDelayNodeOperator<Metasound::FTime>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TDelayNodeOperator<Metasound::FTime>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TDelayNodeOperator<Metasound::FTime>::GetNodeInfo(void)'
              ::__l2::Metadata);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(&local_e8);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// UnregisterNode<Metasound::TNodeFacade<Metasound::TPrintLogOperator<int>_>_> @ 14b04dd10

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::UnregisterNode<Metasound::TNodeFacade<Metasound::TPrintLogOperator<int>_>_>
          (FModuleInfo *param_1)

{
  bool bVar1;
  FNodeClassMetadata *pFVar2;
  FNodeClassMetadata local_e8;
  
  pFVar2 = TNodeFacade<Metasound::TPrintLogOperator<int>_>::CreateNodeClassMetadata(&local_e8);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(pFVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// UnregisterNode<Metasound::TNodeFacade<Metasound::TPrintLogOperator<float>_>_> @ 14b04dd50

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::UnregisterNode<Metasound::TNodeFacade<Metasound::TPrintLogOperator<float>_>_>
          (FModuleInfo *param_1)

{
  bool bVar1;
  FNodeClassMetadata *pFVar2;
  FNodeClassMetadata local_e8;
  
  pFVar2 = TNodeFacade<Metasound::TPrintLogOperator<float>_>::CreateNodeClassMetadata(&local_e8);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(pFVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// UnregisterNode<Metasound::TNodeFacade<Metasound::TPrintLogOperator<FString>_>_> @ 14b04dd90

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::UnregisterNode<Metasound::TNodeFacade<Metasound::TPrintLogOperator<FString>_>_>
          (FModuleInfo *param_1)

{
  bool bVar1;
  FNodeClassMetadata *pFVar2;
  FNodeClassMetadata local_e8;
  
  pFVar2 = TNodeFacade<Metasound::TPrintLogOperator<FString>_>::CreateNodeClassMetadata(&local_e8);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(pFVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// UnregisterNode<Metasound::TNodeFacade<Metasound::TPrintLogOperator<bool>_>_> @ 14b04ddd0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::UnregisterNode<Metasound::TNodeFacade<Metasound::TPrintLogOperator<bool>_>_>
          (FModuleInfo *param_1)

{
  bool bVar1;
  FNodeClassMetadata *pFVar2;
  FNodeClassMetadata local_e8;
  
  pFVar2 = TNodeFacade<Metasound::TPrintLogOperator<bool>_>::CreateNodeClassMetadata(&local_e8);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(pFVar2);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// UnregisterNode<Metasound::TNodeFacade<Metasound::FBitcrusherOperator>_> @ 14b04de10

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::UnregisterNode<Metasound::TNodeFacade<Metasound::FBitcrusherOperator>_>
          (FModuleInfo *param_1)

{
  bool bVar1;
  undefined1 local_res10 [24];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FBitcrusherOperator::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FBitcrusherOperator::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FBitcrusherOperator::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::FBitcrusherOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FBitcrusherOperator::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::FBitcrusherOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FBitcrusherOperator::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FBitcrusherOperator::GetNodeInfo(void)'
              ::__l2::Metadata);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(&local_e8);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// UnregisterNode<Metasound::TNodeFacade<Metasound::FCompressorOperator>_> @ 14b04dec0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::UnregisterNode<Metasound::TNodeFacade<Metasound::FCompressorOperator>_>
          (FModuleInfo *param_1)

{
  bool bVar1;
  undefined1 local_res10 [24];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FCompressorOperator::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FCompressorOperator::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FCompressorOperator::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::FCompressorOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FCompressorOperator::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::FCompressorOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FCompressorOperator::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FCompressorOperator::GetNodeInfo(void)'
              ::__l2::Metadata);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(&local_e8);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// UnregisterNode<Metasound::TNodeFacade<Metasound::FDecibelsToLinearGainOperator>_> @ 14b04df70

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::
UnregisterNode<Metasound::TNodeFacade<Metasound::FDecibelsToLinearGainOperator>_>
          (FModuleInfo *param_1)

{
  bool bVar1;
  undefined1 local_res10 [24];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      `Metasound::FDecibelsToLinearGainOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res10,&::Info);
      atexit(`Metasound::FDecibelsToLinearGainOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata(&local_e8,&::Info);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(&local_e8);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// UnregisterNode<Metasound::TNodeFacade<Metasound::FDiffuserOperator>_> @ 14b04e020

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::UnregisterNode<Metasound::TNodeFacade<Metasound::FDiffuserOperator>_>
          (FModuleInfo *param_1)

{
  bool bVar1;
  FNodeClassMetadata *pFVar2;
  FNodeClassMetadata local_e8;
  
  pFVar2 = FDiffuserOperator::GetNodeInfo();
  FNodeClassMetadata::FNodeClassMetadata(&local_e8,pFVar2);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(&local_e8);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// UnregisterNode<Metasound::TNodeFacade<Metasound::FDopplerPitchShiftOperator>_> @ 14b04e070

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::UnregisterNode<Metasound::TNodeFacade<Metasound::FDopplerPitchShiftOperator>_>
          (FModuleInfo *param_1)

{
  bool bVar1;
  undefined1 local_res10 [24];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      `Metasound::FDopplerPitchShiftOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res10,&::Info);
      atexit(`Metasound::FDopplerPitchShiftOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata(&local_e8,&::Info);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(&local_e8);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// UnregisterNode<Metasound::TNodeFacade<Metasound::FDynamicFilterOperator>_> @ 14b04e120

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::UnregisterNode<Metasound::TNodeFacade<Metasound::FDynamicFilterOperator>_>
          (FModuleInfo *param_1)

{
  bool bVar1;
  undefined1 local_res10 [24];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDynamicFilterOperator::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDynamicFilterOperator::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDynamicFilterOperator::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::FDynamicFilterOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res10,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDynamicFilterOperator::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::FDynamicFilterOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDynamicFilterOperator::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata
            (&local_e8,
             &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDynamicFilterOperator::GetNodeInfo(void)'
              ::__l2::Metadata);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(&local_e8);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// UnregisterNode<Metasound::TNodeFacade<Metasound::FTriggerOnNanOperator>_> @ 14b04e1d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::UnregisterNode<Metasound::TNodeFacade<Metasound::FTriggerOnNanOperator>_>
          (FModuleInfo *param_1)

{
  bool bVar1;
  undefined1 local_res10 [24];
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      `Metasound::FTriggerOnNanOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res10,&::Info);
      atexit(`Metasound::FTriggerOnNanOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  FNodeClassMetadata::FNodeClassMetadata(&local_e8,&::Info);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(&local_e8);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// UnregisterNode<Metasound::FBPMToSecondsNode> @ 14b04e280

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl Metasound::Frontend::UnregisterNode<Metasound::FBPMToSecondsNode>(FModuleInfo *param_1)

{
  bool bVar1;
  FNodeClassMetadata *pFVar2;
  FNodeClassMetadata local_e8;
  
  pFVar2 = FBPMToSecondsOperator::GetNodeInfo();
  FNodeClassMetadata::FNodeClassMetadata(&local_e8,pFVar2);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(&local_e8);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// UnregisterNode<Metasound::FEnvelopeFollowerNode> @ 14b04e2d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::Frontend::UnregisterNode<Metasound::FEnvelopeFollowerNode>(FModuleInfo *param_1)

{
  bool bVar1;
  FNodeClassMetadata *pFVar2;
  FNodeClassMetadata local_e8;
  
  pFVar2 = FEnvelopeFollowerOperator::GetNodeInfo();
  FNodeClassMetadata::FNodeClassMetadata(&local_e8,pFVar2);
  bVar1 = NodeRegistrationPrivate::UnregisterNodeInternal(&local_e8);
  FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
  return bVar1;
}

// `scalar_deleting_destructor' @ 14b05cde0

void * __thiscall
Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b05ce20

void * __thiscall
Metasound::TDataReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b05ce60

void * __thiscall
Metasound::TExecutableOperator<Metasound::FBPMToSecondsOperator>::_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::FBPMToSecondsOperator> *this,uint param_1)

{
  *this = (TExecutableOperator<Metasound::FBPMToSecondsOperator>)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b05cea0

void * __thiscall
Metasound::TExecutableOperator<Metasound::FDecibelsToLinearGainOperator>::
_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::FDecibelsToLinearGainOperator> *this,uint param_1)

{
  *this = (TExecutableOperator<Metasound::FDecibelsToLinearGainOperator>)
          &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b05cee0

void * __thiscall
Metasound::TExecutableOperator<Metasound::FDopplerPitchShiftOperator>::_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::FDopplerPitchShiftOperator> *this,uint param_1)

{
  *this = (TExecutableOperator<Metasound::FDopplerPitchShiftOperator>)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b05cf20

void * __thiscall
Metasound::TExecutableOperator<Metasound::FEnvelopeFollowerOperator>::_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::FEnvelopeFollowerOperator> *this,uint param_1)

{
  *this = (TExecutableOperator<Metasound::FEnvelopeFollowerOperator>)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b05cf60

void * __thiscall
Metasound::TExecutableOperator<Metasound::FTriggerOnNanOperator>::_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::FTriggerOnNanOperator> *this,uint param_1)

{
  *this = (TExecutableOperator<Metasound::FTriggerOnNanOperator>)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b05cfa0

void * __thiscall
Metasound::TInputDataVertex<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
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

// `scalar_deleting_destructor' @ 14b05d030

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &___7__TReferenceControllerBase__0A__SharedPointerInternals__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b05d070

void * __thiscall
Metasound::FBPMToSecondsNode::_scalar_deleting_destructor_(FBPMToSecondsNode *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14b05d0d0

void * __thiscall
Metasound::FBPMToSecondsOperator::_scalar_deleting_destructor_
          (FBPMToSecondsOperator *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TimeSeconds).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->DivOfWholeNote).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->BeatMultiplier).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->BPM).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b05d140

void * __thiscall
Metasound::FDecibelsToLinearGainOperator::_scalar_deleting_destructor_
          (FDecibelsToLinearGainOperator *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->LinearGainOutput).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->DecibelGainInput).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b05d1a0

void * __thiscall
Metasound::FDopplerPitchShiftOperator::_scalar_deleting_destructor_
          (FDopplerPitchShiftOperator *this,uint param_1)

{
  Audio::FTapDelayPitchShifter::~FTapDelayPitchShifter(&this->DelayPitchShifter);
  Audio::FDelay::~FDelay(&this->DelayBuffer);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->AudioOutput).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->DelayLength).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->PitchShift).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->AudioInput).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x118);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b05d220

void * __thiscall
Metasound::FEnvelopeFollowerNode::_scalar_deleting_destructor_
          (FEnvelopeFollowerNode *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14b05d280

void * __thiscall
Metasound::FEnvelopeFollowerOperator::_scalar_deleting_destructor_
          (FEnvelopeFollowerOperator *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
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
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->EnvelopeAudioOutput).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->EnvelopeFloatOutput).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->FollowModeInput).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->ReleaseTimeInput).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->AttackTimeInput).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->AudioInput).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->EnableInput).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x170);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b05d340

void * __thiscall
Metasound::FTriggerOnNanOperator::_scalar_deleting_destructor_
          (FTriggerOnNanOperator *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TriggerOutput).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->bTriggerOnce).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->AudioInput).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// CreateNodeClassMetadata @ 14b060940

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundClampNodePrivate::CreateNodeClassMetadata
          (FNodeClassMetadata *__return_storage_ptr__,FName *param_1,FName *param_2,FText *param_3,
          FText *param_4,FVertexInterface *param_5)

{
  ForAnyElementType _Src;
  FText *pFVar1;
  FName FVar2;
  FVertexInterface *pFVar3;
  FNodeClassName *pFVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  FName local_res20;
  FNodeClassName local_158;
  FString local_138;
  TArray<FText,TSizedDefaultAllocator<32>_> local_128;
  TArray<FText,TSizedDefaultAllocator<32>_> local_118;
  FNodeDisplayStyle local_108;
  FText local_f8;
  FText local_e8;
  FText local_d8;
  FText local_c8;
  FText local_b8;
  FNodeClassName local_a8;
  FVertexInterface local_90;
  
  local_158.Name.ComparisonIndex.Value = 0x1010101;
  local_158.Namespace.ComparisonIndex.Value = 0;
  local_158.Namespace.Number = 0;
  FText::FText(&local_b8);
  local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_128.AllocatorInstance,1,&local_128.ArrayMax);
  ConstructItems<FText,FText,int>(local_128.AllocatorInstance.Data,&local_b8,1);
  FText::FText(&local_c8);
  local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_118.AllocatorInstance,1,&local_118.ArrayMax);
  ConstructItems<FText,FText,int>(local_118.AllocatorInstance.Data,&local_c8,1);
  pFVar3 = FVertexInterface::FVertexInterface(&local_90,param_5);
  local_f8.TextData.Reference = PluginNodeMissingPrompt.TextData.Reference;
  if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
              (PluginNodeMissingPrompt.TextData.Reference,local_res8);
  }
  _Src.Data = PluginAuthor.Data.AllocatorInstance.Data;
  local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  lVar5 = (longlong)PluginAuthor.Data.ArrayNum;
  local_f8.Flags = PluginNodeMissingPrompt.Flags;
  local_138.Data.ArrayNum = PluginAuthor.Data.ArrayNum;
  if (PluginAuthor.Data.ArrayNum == 0) {
    local_138.Data.ArrayMax = PluginAuthor.Data.ArrayNum;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,PluginAuthor.Data.ArrayNum,0,(ForAnyElementType *)&local_138,
               PluginAuthor.Data.ArrayNum,&local_138.Data.ArrayMax);
    memcpy(local_138.Data.AllocatorInstance.Data,_Src.Data,lVar5 * 2);
  }
  pFVar1 = param_4;
  local_e8.TextData.Reference = (param_4->TextData).Reference;
  if (local_e8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e8.TextData.Reference + 8))(local_e8.TextData.Reference,&param_4);
  }
  local_d8.TextData.Reference = (param_3->TextData).Reference;
  local_e8.Flags = pFVar1->Flags;
  if (local_d8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_d8.TextData.Reference + 8))(local_d8.TextData.Reference,&param_4);
  }
  local_d8.Flags = param_3->Flags;
  ::FName::FName(&local_res20,"Clamp");
  FVar2 = local_158.Name;
  local_108.ImageName = local_158.Namespace;
  local_108.bShowName = (bool)(undefined1)local_158.Name.ComparisonIndex.Value;
  local_108.bShowInputNames = (bool)local_158.Name.ComparisonIndex.Value._1_1_;
  local_108.bShowOutputNames = (bool)local_158.Name.ComparisonIndex.Value._2_1_;
  local_108.bShowLiterals = (bool)local_158.Name.ComparisonIndex.Value._3_1_;
  local_158.Name = FVar2;
  pFVar4 = FNodeClassName::FNodeClassName(&local_a8,&local_res20,param_2,param_1);
  local_158.Namespace = pFVar4->Namespace;
  local_158.Name = pFVar4->Name;
  local_158.Variant = pFVar4->Variant;
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,&local_158,1,0,&local_d8,&local_e8,&local_138,&local_f8,pFVar3,
             &local_118,&local_128,&local_108);
  if (local_c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
  }
  if (local_b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14b060c00

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::MetasoundPrintLogNodePrivate::CreateNodeClassMetadata
          (FNodeClassMetadata *__return_storage_ptr__,FName *param_1,FName *param_2,FText *param_3,
          FText *param_4,FVertexInterface *param_5)

{
  ForAnyElementType _Src;
  FText *pFVar1;
  FName FVar2;
  FVertexInterface *pFVar3;
  FNodeClassName *pFVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  FName local_res20;
  FNodeClassName local_148;
  FString local_128;
  TArray<FText,TSizedDefaultAllocator<32>_> local_118;
  FNodeDisplayStyle local_108;
  TArray<FText,TSizedDefaultAllocator<32>_> local_f8;
  FText local_e8;
  FText local_d8;
  FText local_c8;
  FText local_b8;
  FNodeClassName local_a8;
  FVertexInterface local_90;
  
  local_148.Name.ComparisonIndex.Value = 0x1010101;
  local_148.Namespace.ComparisonIndex.Value = 0;
  local_148.Namespace.Number = 0;
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  local_e8.TextData.Reference = NodeCategories::Debug.TextData.Reference;
  if (NodeCategories::Debug.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*NodeCategories::Debug.TextData.Reference + 8))
              (NodeCategories::Debug.TextData.Reference,local_res8);
  }
  local_e8.Flags = NodeCategories::Debug.Flags;
  local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_118.AllocatorInstance,1,&local_118.ArrayMax);
  ConstructItems<FText,FText,int>(local_118.AllocatorInstance.Data,&local_e8,1);
  pFVar3 = FVertexInterface::FVertexInterface(&local_90,param_5);
  local_d8.TextData.Reference = PluginNodeMissingPrompt.TextData.Reference;
  if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
              (PluginNodeMissingPrompt.TextData.Reference,local_res8);
  }
  _Src.Data = PluginAuthor.Data.AllocatorInstance.Data;
  local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  lVar5 = (longlong)PluginAuthor.Data.ArrayNum;
  local_d8.Flags = PluginNodeMissingPrompt.Flags;
  local_128.Data.ArrayNum = PluginAuthor.Data.ArrayNum;
  if (PluginAuthor.Data.ArrayNum == 0) {
    local_128.Data.ArrayMax = PluginAuthor.Data.ArrayNum;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,PluginAuthor.Data.ArrayNum,0,(ForAnyElementType *)&local_128,
               PluginAuthor.Data.ArrayNum,&local_128.Data.ArrayMax);
    memcpy(local_128.Data.AllocatorInstance.Data,_Src.Data,lVar5 * 2);
  }
  pFVar1 = param_4;
  local_c8.TextData.Reference = (param_4->TextData).Reference;
  if (local_c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c8.TextData.Reference + 8))(local_c8.TextData.Reference,&param_4);
  }
  local_b8.TextData.Reference = (param_3->TextData).Reference;
  local_c8.Flags = pFVar1->Flags;
  if (local_b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b8.TextData.Reference + 8))(local_b8.TextData.Reference,&param_4);
  }
  local_b8.Flags = param_3->Flags;
  ::FName::FName(&local_res20,"Print Log");
  FVar2 = local_148.Name;
  local_108.ImageName = local_148.Namespace;
  local_108.bShowName = (bool)(undefined1)local_148.Name.ComparisonIndex.Value;
  local_108.bShowInputNames = (bool)local_148.Name.ComparisonIndex.Value._1_1_;
  local_108.bShowOutputNames = (bool)local_148.Name.ComparisonIndex.Value._2_1_;
  local_108.bShowLiterals = (bool)local_148.Name.ComparisonIndex.Value._3_1_;
  local_148.Name = FVar2;
  pFVar4 = FNodeClassName::FNodeClassName(&local_a8,&local_res20,param_2,param_1);
  local_148.Namespace = pFVar4->Namespace;
  local_148.Name = pFVar4->Name;
  local_148.Variant = pFVar4->Variant;
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,&local_148,1,0,&local_b8,&local_c8,&local_128,&local_d8,pFVar3,
             &local_118,&local_f8,&local_108);
  if (local_e8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetInputDescription @ 14b073a60

FText * __cdecl
Metasound::CrossfadeVertexNames::GetInputDescription(FText *__return_storage_ptr__,uint param_1)

{
  FText::FText(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetInputDisplayName @ 14b073a80

FText * __cdecl
Metasound::CrossfadeVertexNames::GetInputDisplayName(FText *__return_storage_ptr__,uint param_1)

{
  FText::FText(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetInputName @ 14b073c60

FName __cdecl Metasound::CrossfadeVertexNames::GetInputName(uint param_1)

{
  uint in_register_0000000c;
  FName this;
  uint in_EDX;
  ForAnyElementType FVar1;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  FStringFormatArg local_28;
  
  this.Number = in_register_0000000c;
  this.ComparisonIndex.Value = param_1;
  FStringFormatArg::FStringFormatArg(&local_28,in_EDX);
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_48.AllocatorInstance,1,&local_48.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>(local_48.AllocatorInstance.Data,&local_28,1)
  ;
  ::FString::FormatImpl(&local_38,L"In {0}",&local_48);
  FVar1.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar1.Data = local_38.Data.AllocatorInstance.Data;
  }
  ::FName::FName((FName *)this,(wchar_t *)FVar1.Data);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
  if ((FStringFormatArg *)local_48.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if (local_28.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.StringValue.Data.AllocatorInstance.Data);
  }
  return this;
}

// `dynamic_atexit_destructor_for_'AddressInputMetadata'' @ 150428fa0

void __cdecl
`Metasound::ReceiveNodePrivate::
TReceiverOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::DeclareVertexInterface'::
__l2::_dynamic_atexit_destructor_for__AddressInputMetadata__(void)

{
  if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::DeclareVertexInterface(void)'
                  ::__l2::AddressInputMetadata.DisplayName.TextData.Reference + 0x10))();
  }
  if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150428fc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)
                 *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::DeclareVertexInterface(void)'
                  ::__l2::AddressInputMetadata.Description.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'AddressInputMetadata'' @ 150428fe0

void __cdecl
`Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
DeclareVertexInterface'::__l2::_dynamic_atexit_destructor_for__AddressInputMetadata__(void)

{
  if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::DeclareVertexInterface(void)'
                  ::__l2::AddressInputMetadata.DisplayName.TextData.Reference + 0x10))();
  }
  if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::DeclareVertexInterface(void)'
      ::__l2::AddressInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150429009. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)
                 *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::DeclareVertexInterface(void)'
                  ::__l2::AddressInputMetadata.Description.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DefaultDataInputMetadata'' @ 150429020

void __cdecl
`Metasound::ReceiveNodePrivate::
TReceiverOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::DeclareVertexInterface'::
__l2::_dynamic_atexit_destructor_for__DefaultDataInputMetadata__(void)

{
  if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::DeclareVertexInterface(void)'
      ::__l2::DefaultDataInputMetadata.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::DeclareVertexInterface(void)'
                  ::__l2::DefaultDataInputMetadata.DisplayName.TextData.Reference + 0x10))();
  }
  if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::DeclareVertexInterface(void)'
      ::__l2::DefaultDataInputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150429049. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)
                 *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::DeclareVertexInterface(void)'
                  ::__l2::DefaultDataInputMetadata.Description.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DefaultInterface'' @ 150429060

void __cdecl
`Metasound::TClampNodeOperator<int>::GetDefaultInterface'::__l2::
_dynamic_atexit_destructor_for__DefaultInterface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface
            (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TClampNodeOperator<int>::GetDefaultInterface(void)'
              ::__l2::DefaultInterface);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultInterface'' @ 150429080

void __cdecl
`Metasound::TClampNodeOperator<float>::GetDefaultInterface'::__l2::
_dynamic_atexit_destructor_for__DefaultInterface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface
            (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TClampNodeOperator<float>::GetDefaultInterface(void)'
              ::__l2::DefaultInterface);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultInterface'' @ 1504290a0

void __cdecl
`Metasound::TClampNodeOperator<Metasound::FAudioBuffer>::GetDefaultInterface'::__l2::
_dynamic_atexit_destructor_for__DefaultInterface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface
            (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TClampNodeOperator<Metasound::FAudioBuffer>::GetDefaultInterface(void)'
              ::__l2::DefaultInterface);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultInterface'' @ 1504290c0

void __cdecl
`Metasound::TConversionOperator<int,Metasound::FTime>::GetDefaultInterface'::__l2::
_dynamic_atexit_destructor_for__DefaultInterface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface
            (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<int,Metasound::FTime>::GetDefaultInterface(void)'
              ::__l2::DefaultInterface);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultInterface'' @ 1504290e0

void __cdecl
`Metasound::TConversionOperator<float,Metasound::FAudioBuffer>::GetDefaultInterface'::__l2::
_dynamic_atexit_destructor_for__DefaultInterface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface
            (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FAudioBuffer>::GetDefaultInterface(void)'
              ::__l2::DefaultInterface);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultInterface'' @ 150429100

void __cdecl
`Metasound::TConversionOperator<float,Metasound::FTime>::GetDefaultInterface'::__l2::
_dynamic_atexit_destructor_for__DefaultInterface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface
            (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FTime>::GetDefaultInterface(void)'
              ::__l2::DefaultInterface);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultInterface'' @ 150429120

void __cdecl
`Metasound::TConversionOperator<Metasound::FAudioBuffer,float>::GetDefaultInterface'::__l2::
_dynamic_atexit_destructor_for__DefaultInterface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface
            (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FAudioBuffer,float>::GetDefaultInterface(void)'
              ::__l2::DefaultInterface);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultInterface'' @ 150429140

void __cdecl
`Metasound::TConversionOperator<Metasound::FTime,int>::GetDefaultInterface'::__l2::
_dynamic_atexit_destructor_for__DefaultInterface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface
            (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,int>::GetDefaultInterface(void)'
              ::__l2::DefaultInterface);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultInterface'' @ 150429160

void __cdecl
`Metasound::TConversionOperator<Metasound::FTime,float>::GetDefaultInterface'::__l2::
_dynamic_atexit_destructor_for__DefaultInterface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface
            (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,float>::GetDefaultInterface(void)'
              ::__l2::DefaultInterface);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultInterface'' @ 150429180

void __cdecl
`Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>::GetDefaultInterface'::__l2::
_dynamic_atexit_destructor_for__DefaultInterface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface
            (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>::GetDefaultInterface(void)'
              ::__l2::DefaultInterface);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultInterface'' @ 1504291a0

void __cdecl
`Metasound::TDelayNodeOperator<Metasound::FTime>::GetDefaultInterface'::__l2::
_dynamic_atexit_destructor_for__DefaultInterface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface
            (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TDelayNodeOperator<Metasound::FTime>::GetDefaultInterface(void)'
              ::__l2::DefaultInterface);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultInterface'' @ 1504291c0

void __cdecl
`Metasound::TPrintLogOperator<int>::GetDefaultInterface'::__l2::
_dynamic_atexit_destructor_for__DefaultInterface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface
            (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TPrintLogOperator<int>::GetDefaultInterface(void)'
              ::__l2::DefaultInterface);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultInterface'' @ 1504291e0

void __cdecl
`Metasound::TPrintLogOperator<float>::GetDefaultInterface'::__l2::
_dynamic_atexit_destructor_for__DefaultInterface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface
            (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TPrintLogOperator<float>::GetDefaultInterface(void)'
              ::__l2::DefaultInterface);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultInterface'' @ 150429200

void __cdecl
`Metasound::TPrintLogOperator<FString>::GetDefaultInterface'::__l2::
_dynamic_atexit_destructor_for__DefaultInterface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface
            (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TPrintLogOperator<FString>::GetDefaultInterface(void)'
              ::__l2::DefaultInterface);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultInterface'' @ 150429220

void __cdecl
`Metasound::TPrintLogOperator<bool>::GetDefaultInterface'::__l2::
_dynamic_atexit_destructor_for__DefaultInterface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface
            (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TPrintLogOperator<bool>::GetDefaultInterface(void)'
              ::__l2::DefaultInterface);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultInterface'' @ 150429240

void __cdecl
`Metasound::TCrossfadeOperator<float,2>::GetVertexInterface'::__l2::
_dynamic_atexit_destructor_for__DefaultInterface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface
            (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,2>::GetVertexInterface(void)'
              ::__l2::DefaultInterface);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultInterface'' @ 150429260

void __cdecl
`Metasound::TCrossfadeOperator<float,3>::GetVertexInterface'::__l2::
_dynamic_atexit_destructor_for__DefaultInterface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface
            (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,3>::GetVertexInterface(void)'
              ::__l2::DefaultInterface);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultInterface'' @ 150429280

void __cdecl
`Metasound::TCrossfadeOperator<float,4>::GetVertexInterface'::__l2::
_dynamic_atexit_destructor_for__DefaultInterface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface
            (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,4>::GetVertexInterface(void)'
              ::__l2::DefaultInterface);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultInterface'' @ 1504292a0

void __cdecl
`Metasound::TCrossfadeOperator<float,5>::GetVertexInterface'::__l2::
_dynamic_atexit_destructor_for__DefaultInterface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface
            (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,5>::GetVertexInterface(void)'
              ::__l2::DefaultInterface);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultInterface'' @ 1504292c0

void __cdecl
`Metasound::TCrossfadeOperator<float,6>::GetVertexInterface'::__l2::
_dynamic_atexit_destructor_for__DefaultInterface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface
            (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,6>::GetVertexInterface(void)'
              ::__l2::DefaultInterface);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultInterface'' @ 1504292e0

void __cdecl
`Metasound::TCrossfadeOperator<float,7>::GetVertexInterface'::__l2::
_dynamic_atexit_destructor_for__DefaultInterface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface
            (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,7>::GetVertexInterface(void)'
              ::__l2::DefaultInterface);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultInterface'' @ 150429300

void __cdecl
`Metasound::TCrossfadeOperator<float,8>::GetVertexInterface'::__l2::
_dynamic_atexit_destructor_for__DefaultInterface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface
            (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,8>::GetVertexInterface(void)'
              ::__l2::DefaultInterface);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultInterface'' @ 150429320

void __cdecl
`Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>::GetVertexInterface'::__l2::
_dynamic_atexit_destructor_for__DefaultInterface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface
            (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>::GetVertexInterface(void)'
              ::__l2::DefaultInterface);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultInterface'' @ 150429340

void __cdecl
`Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>::GetVertexInterface'::__l2::
_dynamic_atexit_destructor_for__DefaultInterface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface
            (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>::GetVertexInterface(void)'
              ::__l2::DefaultInterface);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultInterface'' @ 150429360

void __cdecl
`Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>::GetVertexInterface'::__l2::
_dynamic_atexit_destructor_for__DefaultInterface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface
            (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>::GetVertexInterface(void)'
              ::__l2::DefaultInterface);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultInterface'' @ 150429380

void __cdecl
`Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>::GetVertexInterface'::__l2::
_dynamic_atexit_destructor_for__DefaultInterface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface
            (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>::GetVertexInterface(void)'
              ::__l2::DefaultInterface);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultInterface'' @ 1504293a0

void __cdecl
`Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>::GetVertexInterface'::__l2::
_dynamic_atexit_destructor_for__DefaultInterface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface
            (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>::GetVertexInterface(void)'
              ::__l2::DefaultInterface);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultInterface'' @ 1504293c0

void __cdecl
`Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>::GetVertexInterface'::__l2::
_dynamic_atexit_destructor_for__DefaultInterface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface
            (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>::GetVertexInterface(void)'
              ::__l2::DefaultInterface);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultInterface'' @ 1504293e0

void __cdecl
`Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>::GetVertexInterface'::__l2::
_dynamic_atexit_destructor_for__DefaultInterface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface
            (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>::GetVertexInterface(void)'
              ::__l2::DefaultInterface);
  return;
}

// `dynamic_atexit_destructor_for_'DisplayText'' @ 150429400

void __cdecl
`Metasound::
TDataReferenceTypeInfo<Metasound::TVariable<TArray<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,TSizedDefaultAllocator<32>_>_>_>
::GetTypeDisplayText'::__l2::_dynamic_atexit_destructor_for__DisplayText__(void)

{
  if (::DisplayText.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015042940f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*::DisplayText.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DisplayText'' @ 150429420

void __cdecl
`Metasound::
TDataReferenceTypeInfo<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>::
GetTypeDisplayText'::__l2::_dynamic_atexit_destructor_for__DisplayText__(void)

{
  if (::DisplayText.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015042942f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*::DisplayText.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DisplayText'' @ 150429440

void __cdecl
`Metasound::
TDataReferenceTypeInfo<TArray<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,TSizedDefaultAllocator<32>_>_>
::GetTypeDisplayText'::__l2::_dynamic_atexit_destructor_for__DisplayText__(void)

{
  if (::DisplayText.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015042944f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*::DisplayText.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DisplayText'' @ 150429460

void __cdecl
`Metasound::TDataReferenceTypeInfo<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
GetTypeDisplayText'::__l2::_dynamic_atexit_destructor_for__DisplayText__(void)

{
  if (::DisplayText.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015042946f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*::DisplayText.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Info'' @ 150429480

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
GetAutoConverterNodeMetadata'::__l2::_dynamic_atexit_destructor_for__Info__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAutoConverterNode<int,Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetAutoConverterNodeMetadata(void)'
              ::__l2::Info);
  return;
}

// `dynamic_atexit_destructor_for_'Info'' @ 1504294a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,int>::
GetAutoConverterNodeMetadata'::__l2::_dynamic_atexit_destructor_for__Info__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,int>::GetAutoConverterNodeMetadata(void)'
              ::__l2::Info);
  return;
}

// `dynamic_atexit_destructor_for_'Info'' @ 1504294c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,float>::
GetAutoConverterNodeMetadata'::__l2::_dynamic_atexit_destructor_for__Info__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,float>::GetAutoConverterNodeMetadata(void)'
              ::__l2::Info);
  return;
}

// `dynamic_atexit_destructor_for_'Info'' @ 1504294e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::TAutoConverterNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,bool>::
GetAutoConverterNodeMetadata'::__l2::_dynamic_atexit_destructor_for__Info__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAutoConverterNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,bool>::GetAutoConverterNodeMetadata(void)'
              ::__l2::Info);
  return;
}

// `dynamic_atexit_destructor_for_'Info'' @ 150429500

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::TConversionOperator<int,Metasound::FTime>::GetNodeInfo'::__l2::
_dynamic_atexit_destructor_for__Info__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TConversionOperator<int,Metasound::FTime>::GetNodeInfo(void)'
              ::__l2::Info);
  return;
}

// `dynamic_atexit_destructor_for_'Info'' @ 150429520

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::TConversionOperator<float,Metasound::FAudioBuffer>::GetNodeInfo'::__l2::
_dynamic_atexit_destructor_for__Info__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FAudioBuffer>::GetNodeInfo(void)'
              ::__l2::Info);
  return;
}

// `dynamic_atexit_destructor_for_'Info'' @ 150429540

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::TConversionOperator<float,Metasound::FTime>::GetNodeInfo'::__l2::
_dynamic_atexit_destructor_for__Info__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FTime>::GetNodeInfo(void)'
              ::__l2::Info);
  return;
}

// `dynamic_atexit_destructor_for_'Info'' @ 150429560

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::TConversionOperator<Metasound::FAudioBuffer,float>::GetNodeInfo'::__l2::
_dynamic_atexit_destructor_for__Info__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FAudioBuffer,float>::GetNodeInfo(void)'
              ::__l2::Info);
  return;
}

// `dynamic_atexit_destructor_for_'Info'' @ 150429580

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::TConversionOperator<Metasound::FTime,int>::GetNodeInfo'::__l2::
_dynamic_atexit_destructor_for__Info__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,int>::GetNodeInfo(void)'
              ::__l2::Info);
  return;
}

// `dynamic_atexit_destructor_for_'Info'' @ 1504295a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::TConversionOperator<Metasound::FTime,float>::GetNodeInfo'::__l2::
_dynamic_atexit_destructor_for__Info__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,float>::GetNodeInfo(void)'
              ::__l2::Info);
  return;
}

// `dynamic_atexit_destructor_for_'Info'' @ 1504295c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::ReceiveNodePrivate::
TReceiverOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::GetNodeInfo'::__l2::
_dynamic_atexit_destructor_for__Info__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
              ::__l2::Info);
  return;
}

// `dynamic_atexit_destructor_for_'Info'' @ 1504295e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
              ::__l2::Info);
  return;
}

// `dynamic_atexit_destructor_for_'Info'' @ 150429600

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::FBPMToSecondsOperator::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&::Info);
  return;
}

// `dynamic_atexit_destructor_for_'Info'' @ 150429620

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::FDecibelsToLinearGainOperator::GetNodeInfo'::__l2::
_dynamic_atexit_destructor_for__Info__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&::Info);
  return;
}

// `dynamic_atexit_destructor_for_'Info'' @ 150429640

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::FDiffuserOperator::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDiffuserOperator::GetNodeInfo(void)'
              ::__l2::Info);
  return;
}

// `dynamic_atexit_destructor_for_'Info'' @ 150429660

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::FDopplerPitchShiftOperator::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__
          (void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&::Info);
  return;
}

// `dynamic_atexit_destructor_for_'Info'' @ 150429680

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::FEnvelopeFollowerOperator::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__
          (void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&::Info);
  return;
}

// `dynamic_atexit_destructor_for_'Info'' @ 1504296a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::FTriggerOnNanOperator::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata(&::Info);
  return;
}

// `dynamic_atexit_destructor_for_'InputDataMetadata'' @ 1504296c0

void __cdecl Metasound::VariableNames::_dynamic_atexit_destructor_for__InputDataMetadata__(void)

{
  if (InputDataMetadata.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*InputDataMetadata.DisplayName.TextData.Reference + 0x10))();
  }
  if (InputDataMetadata.Description.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001504296e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*InputDataMetadata.Description.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'InputDesc'' @ 150429700

void __cdecl
`Metasound::TConversionOperator<int,Metasound::FTime>::GetDefaultInterface'::__l2::
_dynamic_atexit_destructor_for__InputDesc__(void)

{
  if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<int,Metasound::FTime>::GetDefaultInterface(void)'
      ::__l2::InputDesc.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015042970f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)
                 *`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<int,Metasound::FTime>::GetDefaultInterface(void)'
                  ::__l2::InputDesc.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'InputDesc'' @ 150429720

void __cdecl
`Metasound::TConversionOperator<float,Metasound::FAudioBuffer>::GetDefaultInterface'::__l2::
_dynamic_atexit_destructor_for__InputDesc__(void)

{
  if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FAudioBuffer>::GetDefaultInterface(void)'
      ::__l2::InputDesc.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015042972f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)
                 *`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FAudioBuffer>::GetDefaultInterface(void)'
                  ::__l2::InputDesc.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'InputDesc'' @ 150429740

void __cdecl
`Metasound::TConversionOperator<float,Metasound::FTime>::GetDefaultInterface'::__l2::
_dynamic_atexit_destructor_for__InputDesc__(void)

{
  if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FTime>::GetDefaultInterface(void)'
      ::__l2::InputDesc.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015042974f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)
                 *`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FTime>::GetDefaultInterface(void)'
                  ::__l2::InputDesc.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'InputDesc'' @ 150429760

void __cdecl
`Metasound::TConversionOperator<Metasound::FAudioBuffer,float>::GetDefaultInterface'::__l2::
_dynamic_atexit_destructor_for__InputDesc__(void)

{
  if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FAudioBuffer,float>::GetDefaultInterface(void)'
      ::__l2::InputDesc.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015042976f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)
                 *`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FAudioBuffer,float>::GetDefaultInterface(void)'
                  ::__l2::InputDesc.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'InputDesc'' @ 150429780

void __cdecl
`Metasound::TConversionOperator<Metasound::FTime,int>::GetDefaultInterface'::__l2::
_dynamic_atexit_destructor_for__InputDesc__(void)

{
  if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,int>::GetDefaultInterface(void)'
      ::__l2::InputDesc.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015042978f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)
                 *`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,int>::GetDefaultInterface(void)'
                  ::__l2::InputDesc.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'InputDesc'' @ 1504297a0

void __cdecl
`Metasound::TConversionOperator<Metasound::FTime,float>::GetDefaultInterface'::__l2::
_dynamic_atexit_destructor_for__InputDesc__(void)

{
  if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,float>::GetDefaultInterface(void)'
      ::__l2::InputDesc.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001504297af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)
                 *`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,float>::GetDefaultInterface(void)'
                  ::__l2::InputDesc.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'InputInitialArrayDisplayName'' @ 1504297c0

void __cdecl
Metasound::ArrayNodeVertexNames::_dynamic_atexit_destructor_for__InputInitialArrayDisplayName__
          (void)

{
  if (InputInitialArrayDisplayName.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001504297cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*InputInitialArrayDisplayName.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'InputInitialArrayTooltip'' @ 1504297e0

void __cdecl
Metasound::ArrayNodeVertexNames::_dynamic_atexit_destructor_for__InputInitialArrayTooltip__(void)

{
  if (InputInitialArrayTooltip.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001504297ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*InputInitialArrayTooltip.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'InputVariableMetadata'' @ 150429800

void __cdecl Metasound::VariableNames::_dynamic_atexit_destructor_for__InputVariableMetadata__(void)

{
  if (InputVariableMetadata.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*InputVariableMetadata.DisplayName.TextData.Reference + 0x10))();
  }
  if (InputVariableMetadata.Description.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150429829. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*InputVariableMetadata.Description.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'IntEntries'' @ 150429840

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
``Metasound::Frontend::MetasoundDataTypeRegistrationPrivate::
GetEnumDataTypeInterface<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>'::__l3::FEnumHandler::
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

// `dynamic_atexit_destructor_for_'Interface'' @ 150429860

void __cdecl
`Metasound::FBitcrusherOperator::DeclareVertexInterface'::__l2::
_dynamic_atexit_destructor_for__Interface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface
            (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FBitcrusherOperator::DeclareVertexInterface(void)'
              ::__l2::Interface);
  return;
}

// `dynamic_atexit_destructor_for_'Interface'' @ 150429880

void __cdecl
`Metasound::FCompressorOperator::DeclareVertexInterface'::__l2::
_dynamic_atexit_destructor_for__Interface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface
            (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FCompressorOperator::DeclareVertexInterface(void)'
              ::__l2::Interface);
  return;
}

// `dynamic_atexit_destructor_for_'Interface'' @ 1504298a0

void __cdecl
`Metasound::FDynamicFilterOperator::DeclareVertexInterface'::__l2::
_dynamic_atexit_destructor_for__Interface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface
            (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FDynamicFilterOperator::DeclareVertexInterface(void)'
              ::__l2::Interface);
  return;
}

// `dynamic_atexit_destructor_for_'Interface'' @ 1504298c0

void __cdecl
`Metasound::FBPMToSecondsOperator::GetVertexInterface'::__l2::
_dynamic_atexit_destructor_for__Interface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface(&::Interface);
  return;
}

// `dynamic_atexit_destructor_for_'Interface'' @ 1504298e0

void __cdecl
`Metasound::FDecibelsToLinearGainOperator::GetVertexInterface'::__l2::
_dynamic_atexit_destructor_for__Interface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface(&::Interface);
  return;
}

// `dynamic_atexit_destructor_for_'Interface'' @ 150429900

void __cdecl
`Metasound::FDiffuserOperator::GetVertexInterface'::__l2::
_dynamic_atexit_destructor_for__Interface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface
            (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FDiffuserOperator::GetVertexInterface(void)'
              ::__l2::Interface);
  return;
}

// `dynamic_atexit_destructor_for_'Interface'' @ 150429920

void __cdecl
`Metasound::FDopplerPitchShiftOperator::GetVertexInterface'::__l2::
_dynamic_atexit_destructor_for__Interface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface(&::Interface);
  return;
}

// `dynamic_atexit_destructor_for_'Interface'' @ 150429940

void __cdecl
`Metasound::FEnvelopeFollowerOperator::GetVertexInterface'::__l2::
_dynamic_atexit_destructor_for__Interface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface(&::Interface);
  return;
}

// `dynamic_atexit_destructor_for_'Interface'' @ 150429960

void __cdecl
`Metasound::FTriggerOnNanOperator::GetVertexInterface'::__l2::
_dynamic_atexit_destructor_for__Interface__(void)

{
  Metasound::FVertexInterface::~FVertexInterface(&::Interface);
  return;
}

// `dynamic_atexit_destructor_for_'Metadata'' @ 150429980

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::TClampNodeOperator<int>::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__
          (void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TClampNodeOperator<int>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return;
}

// `dynamic_atexit_destructor_for_'Metadata'' @ 1504299a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::TClampNodeOperator<float>::GetNodeInfo'::__l2::
_dynamic_atexit_destructor_for__Metadata__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TClampNodeOperator<float>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return;
}

// `dynamic_atexit_destructor_for_'Metadata'' @ 1504299c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::TClampNodeOperator<Metasound::FAudioBuffer>::GetNodeInfo'::__l2::
_dynamic_atexit_destructor_for__Metadata__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TClampNodeOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return;
}

// `dynamic_atexit_destructor_for_'Metadata'' @ 1504299e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::TCrossfadeOperator<float,2>::GetNodeInfo'::__l2::
_dynamic_atexit_destructor_for__Metadata__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,2>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return;
}

// `dynamic_atexit_destructor_for_'Metadata'' @ 150429a00

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::TCrossfadeOperator<float,3>::GetNodeInfo'::__l2::
_dynamic_atexit_destructor_for__Metadata__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,3>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return;
}

// `dynamic_atexit_destructor_for_'Metadata'' @ 150429a20

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::TCrossfadeOperator<float,4>::GetNodeInfo'::__l2::
_dynamic_atexit_destructor_for__Metadata__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,4>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return;
}

// `dynamic_atexit_destructor_for_'Metadata'' @ 150429a40

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::TCrossfadeOperator<float,5>::GetNodeInfo'::__l2::
_dynamic_atexit_destructor_for__Metadata__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,5>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return;
}

// `dynamic_atexit_destructor_for_'Metadata'' @ 150429a60

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::TCrossfadeOperator<float,6>::GetNodeInfo'::__l2::
_dynamic_atexit_destructor_for__Metadata__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,6>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return;
}

// `dynamic_atexit_destructor_for_'Metadata'' @ 150429a80

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::TCrossfadeOperator<float,7>::GetNodeInfo'::__l2::
_dynamic_atexit_destructor_for__Metadata__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,7>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return;
}

// `dynamic_atexit_destructor_for_'Metadata'' @ 150429aa0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::TCrossfadeOperator<float,8>::GetNodeInfo'::__l2::
_dynamic_atexit_destructor_for__Metadata__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<float,8>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return;
}

// `dynamic_atexit_destructor_for_'Metadata'' @ 150429ac0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>::GetNodeInfo'::__l2::
_dynamic_atexit_destructor_for__Metadata__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,2>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return;
}

// `dynamic_atexit_destructor_for_'Metadata'' @ 150429ae0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>::GetNodeInfo'::__l2::
_dynamic_atexit_destructor_for__Metadata__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,3>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return;
}

// `dynamic_atexit_destructor_for_'Metadata'' @ 150429b00

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>::GetNodeInfo'::__l2::
_dynamic_atexit_destructor_for__Metadata__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,4>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return;
}

// `dynamic_atexit_destructor_for_'Metadata'' @ 150429b20

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>::GetNodeInfo'::__l2::
_dynamic_atexit_destructor_for__Metadata__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,5>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return;
}

// `dynamic_atexit_destructor_for_'Metadata'' @ 150429b40

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>::GetNodeInfo'::__l2::
_dynamic_atexit_destructor_for__Metadata__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,6>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return;
}

// `dynamic_atexit_destructor_for_'Metadata'' @ 150429b60

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>::GetNodeInfo'::__l2::
_dynamic_atexit_destructor_for__Metadata__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,7>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return;
}

// `dynamic_atexit_destructor_for_'Metadata'' @ 150429b80

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>::GetNodeInfo'::__l2::
_dynamic_atexit_destructor_for__Metadata__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TCrossfadeOperator<Metasound::FAudioBuffer,8>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return;
}

// `dynamic_atexit_destructor_for_'Metadata'' @ 150429ba0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>::GetNodeInfo'::__l2::
_dynamic_atexit_destructor_for__Metadata__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TDelayNodeOperator<Metasound::FAudioBuffer>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return;
}

// `dynamic_atexit_destructor_for_'Metadata'' @ 150429bc0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::TDelayNodeOperator<Metasound::FTime>::GetNodeInfo'::__l2::
_dynamic_atexit_destructor_for__Metadata__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TDelayNodeOperator<Metasound::FTime>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return;
}

// `dynamic_atexit_destructor_for_'Metadata'' @ 150429be0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::TPrintLogOperator<int>::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__
          (void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TPrintLogOperator<int>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return;
}

// `dynamic_atexit_destructor_for_'Metadata'' @ 150429c00

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::TPrintLogOperator<float>::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__
          (void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TPrintLogOperator<float>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return;
}

// `dynamic_atexit_destructor_for_'Metadata'' @ 150429c20

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::TPrintLogOperator<FString>::GetNodeInfo'::__l2::
_dynamic_atexit_destructor_for__Metadata__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TPrintLogOperator<FString>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return;
}

// `dynamic_atexit_destructor_for_'Metadata'' @ 150429c40

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::TPrintLogOperator<bool>::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__
          (void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TPrintLogOperator<bool>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return;
}

// `dynamic_atexit_destructor_for_'Metadata'' @ 150429c60

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::MetasoundVariableNodesPrivate::
TVariableAccessorOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::GetNodeInfo'::__l2::
_dynamic_atexit_destructor_for__Metadata__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableAccessorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return;
}

// `dynamic_atexit_destructor_for_'Metadata'' @ 150429c80

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::MetasoundVariableNodesPrivate::
TVariableDeferredAccessorOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::GetNodeInfo'
::__l2::_dynamic_atexit_destructor_for__Metadata__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableDeferredAccessorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return;
}

// `dynamic_atexit_destructor_for_'Metadata'' @ 150429ca0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::MetasoundVariableNodesPrivate::
TVariableMutatorOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::GetNodeInfo'::__l2::
_dynamic_atexit_destructor_for__Metadata__(void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::MetasoundVariableNodesPrivate::TVariableMutatorOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::GetNodeInfo(void)'
              ::__l2::Metadata);
  return;
}

// `dynamic_atexit_destructor_for_'Metadata'' @ 150429cc0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::FBitcrusherOperator::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__
          (void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FBitcrusherOperator::GetNodeInfo(void)'
              ::__l2::Metadata);
  return;
}

// `dynamic_atexit_destructor_for_'Metadata'' @ 150429ce0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::FCompressorOperator::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__
          (void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FCompressorOperator::GetNodeInfo(void)'
              ::__l2::Metadata);
  return;
}

// `dynamic_atexit_destructor_for_'Metadata'' @ 150429d00

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::FDynamicFilterOperator::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Metadata__
          (void)

{
  Metasound::FNodeClassMetadata::~FNodeClassMetadata
            (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FDynamicFilterOperator::GetNodeInfo(void)'
              ::__l2::Metadata);
  return;
}

// `dynamic_atexit_destructor_for_'OutputDataMetadata'' @ 150429d20

void __cdecl Metasound::VariableNames::_dynamic_atexit_destructor_for__OutputDataMetadata__(void)

{
  if (OutputDataMetadata.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*OutputDataMetadata.DisplayName.TextData.Reference + 0x10))();
  }
  if (OutputDataMetadata.Description.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150429d49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*OutputDataMetadata.Description.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'OutputDesc'' @ 150429d60

void __cdecl
`Metasound::TConversionOperator<int,Metasound::FTime>::GetDefaultInterface'::__l2::
_dynamic_atexit_destructor_for__OutputDesc__(void)

{
  if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<int,Metasound::FTime>::GetDefaultInterface(void)'
      ::__l2::OutputDesc.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150429d6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)
                 *`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<int,Metasound::FTime>::GetDefaultInterface(void)'
                  ::__l2::OutputDesc.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'OutputDesc'' @ 150429d80

void __cdecl
`Metasound::TConversionOperator<float,Metasound::FAudioBuffer>::GetDefaultInterface'::__l2::
_dynamic_atexit_destructor_for__OutputDesc__(void)

{
  if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FAudioBuffer>::GetDefaultInterface(void)'
      ::__l2::OutputDesc.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150429d8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)
                 *`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FAudioBuffer>::GetDefaultInterface(void)'
                  ::__l2::OutputDesc.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'OutputDesc'' @ 150429da0

void __cdecl
`Metasound::TConversionOperator<float,Metasound::FTime>::GetDefaultInterface'::__l2::
_dynamic_atexit_destructor_for__OutputDesc__(void)

{
  if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FTime>::GetDefaultInterface(void)'
      ::__l2::OutputDesc.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150429daf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)
                 *`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<float,Metasound::FTime>::GetDefaultInterface(void)'
                  ::__l2::OutputDesc.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'OutputDesc'' @ 150429dc0

void __cdecl
`Metasound::TConversionOperator<Metasound::FAudioBuffer,float>::GetDefaultInterface'::__l2::
_dynamic_atexit_destructor_for__OutputDesc__(void)

{
  if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FAudioBuffer,float>::GetDefaultInterface(void)'
      ::__l2::OutputDesc.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150429dcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)
                 *`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FAudioBuffer,float>::GetDefaultInterface(void)'
                  ::__l2::OutputDesc.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'OutputDesc'' @ 150429de0

void __cdecl
`Metasound::TConversionOperator<Metasound::FTime,int>::GetDefaultInterface'::__l2::
_dynamic_atexit_destructor_for__OutputDesc__(void)

{
  if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,int>::GetDefaultInterface(void)'
      ::__l2::OutputDesc.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150429def. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)
                 *`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,int>::GetDefaultInterface(void)'
                  ::__l2::OutputDesc.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'OutputDesc'' @ 150429e00

void __cdecl
`Metasound::TConversionOperator<Metasound::FTime,float>::GetDefaultInterface'::__l2::
_dynamic_atexit_destructor_for__OutputDesc__(void)

{
  if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,float>::GetDefaultInterface(void)'
      ::__l2::OutputDesc.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150429e0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)
                 *`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TConversionOperator<Metasound::FTime,float>::GetDefaultInterface(void)'
                  ::__l2::OutputDesc.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'OutputMetadata'' @ 150429e20

void __cdecl
`Metasound::ReceiveNodePrivate::
TReceiverOperator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::DeclareVertexInterface'::
__l2::_dynamic_atexit_destructor_for__OutputMetadata__(void)

{
  if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::DeclareVertexInterface(void)'
      ::__l2::OutputMetadata.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::DeclareVertexInterface(void)'
                  ::__l2::OutputMetadata.DisplayName.TextData.Reference + 0x10))();
  }
  if (`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::DeclareVertexInterface(void)'
      ::__l2::OutputMetadata.Description.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150429e49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)
                 *`public:_static_class_Metasound::FVertexInterface___cdecl_Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::DeclareVertexInterface(void)'
                  ::__l2::OutputMetadata.Description.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'OutputVariableMetadata'' @ 150429e60

void __cdecl
Metasound::VariableNames::_dynamic_atexit_destructor_for__OutputVariableMetadata__(void)

{
  if (OutputVariableMetadata.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*OutputVariableMetadata.DisplayName.TextData.Reference + 0x10))();
  }
  if (OutputVariableMetadata.Description.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150429e89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*OutputVariableMetadata.Description.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'TypeString'' @ 150429ea0

void __cdecl
`Metasound::GetMetasoundDataTypeString<int>'::__l2::_dynamic_atexit_destructor_for__TypeString__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<int>(void)'
               ::__l2::TypeString.Data.AllocatorInstance.Data;
  if (`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<int>(void)'::__l2
      ::TypeString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<int>(void)'::__l2
      ::TypeString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'TypeString'' @ 150429ec0

void __cdecl
`Metasound::GetMetasoundDataTypeString<float>'::__l2::_dynamic_atexit_destructor_for__TypeString__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<float>(void)'
               ::__l2::TypeString.Data.AllocatorInstance.Data;
  if (`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<float>(void)'::
      __l2::TypeString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<float>(void)'::
      __l2::TypeString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'TypeString'' @ 150429ee0

void __cdecl
`Metasound::
GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>'
::__l2::_dynamic_atexit_destructor_for__TypeString__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>(void)'
               ::__l2::TypeString.Data.AllocatorInstance.Data;
  if (`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>(void)'
      ::__l2::TypeString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TVariable<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_>(void)'
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

// `dynamic_atexit_destructor_for_'TypeString'' @ 150429f00

void __cdecl
`Metasound::GetMetasoundDataTypeString<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>'::__l2::
_dynamic_atexit_destructor_for__TypeString__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
               ::__l2::TypeString.Data.AllocatorInstance.Data;
  if (`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
      ::__l2::TypeString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::TEnum<Audio::EDynamicFilterType,0>_>(void)'
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

// `dynamic_atexit_destructor_for_'TypeString'' @ 150429f20

void __cdecl
`Metasound::GetMetasoundDataTypeString<Metasound::FAudioBuffer>'::__l2::
_dynamic_atexit_destructor_for__TypeString__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::FAudioBuffer>(void)'
               ::__l2::TypeString.Data.AllocatorInstance.Data;
  if (`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::FAudioBuffer>(void)'
      ::__l2::TypeString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::FAudioBuffer>(void)'
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

// `dynamic_atexit_destructor_for_'TypeString'' @ 150429f40

void __cdecl
`Metasound::GetMetasoundDataTypeString<Metasound::FTime>'::__l2::
_dynamic_atexit_destructor_for__TypeString__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::FTime>(void)'
               ::__l2::TypeString.Data.AllocatorInstance.Data;
  if (`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::FTime>(void)'
      ::__l2::TypeString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::FTime>(void)'
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

