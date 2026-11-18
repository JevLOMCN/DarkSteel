// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 399

// EmptyAdvanced'' @ 1411dffa0

void __cdecl `dynamic_initializer_for_'Metasound::FDataVertexMetadata::EmptyAdvanced__(void)

{
  FText::FText(&Metasound::FDataVertexMetadata::EmptyAdvanced.Description);
  FText::FText(&Metasound::FDataVertexMetadata::EmptyAdvanced.DisplayName);
  Metasound::FDataVertexMetadata::EmptyAdvanced.bIsAdvancedDisplay = true;
  atexit(`dynamic_atexit_destructor_for_'Metasound::FDataVertexMetadata::EmptyAdvanced__);
  return;
}

// EmptyBasic'' @ 1411dffe0

void __cdecl `dynamic_initializer_for_'Metasound::FDataVertexMetadata::EmptyBasic__(void)

{
  FText::FText(&Metasound::FDataVertexMetadata::EmptyBasic.Description);
  FText::FText(&Metasound::FDataVertexMetadata::EmptyBasic.DisplayName);
  Metasound::FDataVertexMetadata::EmptyBasic.bIsAdvancedDisplay = false;
  atexit(`dynamic_atexit_destructor_for_'Metasound::FDataVertexMetadata::EmptyBasic__);
  return;
}

// ErrorType'' @ 1411e0020

void __cdecl `dynamic_initializer_for_'Metasound::FDanglingVertexError::ErrorType__(void)

{
  ::FName::FName(&Metasound::FDanglingVertexError::ErrorType,L"MetasoundDanglingVertex");
  return;
}

// ErrorType'' @ 1411e0040

void __cdecl `dynamic_initializer_for_'Metasound::FDuplicateInputError::ErrorType__(void)

{
  ::FName::FName(&Metasound::FDuplicateInputError::ErrorType,L"MetasoundDuplicateInput");
  return;
}

// ErrorType'' @ 1411e0060

void __cdecl `dynamic_initializer_for_'Metasound::FGraphCycleError::ErrorType__(void)

{
  ::FName::FName(&Metasound::FGraphCycleError::ErrorType,L"MetasoundGraphCycleError");
  return;
}

// ErrorType'' @ 1411e0080

void __cdecl
`dynamic_initializer_for_'Metasound::FInputReceiverInitializationError::ErrorType__(void)

{
  ::FName::FName(&Metasound::FInputReceiverInitializationError::ErrorType,
                 "InputReceiverInitializationError");
  return;
}

// ErrorType'' @ 1411e00a0

void __cdecl `dynamic_initializer_for_'Metasound::FInternalError::ErrorType__(void)

{
  ::FName::FName(&Metasound::FInternalError::ErrorType,L"MetasoundInternalError");
  return;
}

// ErrorType'' @ 1411e00c0

void __cdecl `dynamic_initializer_for_'Metasound::FInvalidConnectionDataTypeError::ErrorType__(void)

{
  ::FName::FName(&Metasound::FInvalidConnectionDataTypeError::ErrorType,
                 L"MetasoundInvalidConnectionDataTypeError");
  return;
}

// ErrorType'' @ 1411e00e0

void __cdecl `dynamic_initializer_for_'Metasound::FMissingInputDataReferenceError::ErrorType__(void)

{
  ::FName::FName(&Metasound::FMissingInputDataReferenceError::ErrorType,
                 L"MetasoundMissingInputDataReferenceError");
  return;
}

// ErrorType'' @ 1411e0100

void __cdecl
`dynamic_initializer_for_'Metasound::FMissingOutputDataReferenceError::ErrorType__(void)

{
  ::FName::FName(&Metasound::FMissingOutputDataReferenceError::ErrorType,
                 L"MetasoundMissingOutputDataReferenceError");
  return;
}

// ErrorType'' @ 1411e0120

void __cdecl `dynamic_initializer_for_'Metasound::FMissingVertexError::ErrorType__(void)

{
  ::FName::FName(&Metasound::FMissingVertexError::ErrorType,L"MetasoundMissingVertex");
  return;
}

// ErrorType'' @ 1411e0140

void __cdecl `dynamic_initializer_for_'Metasound::FNodePrunedError::ErrorType__(void)

{
  ::FName::FName(&Metasound::FNodePrunedError::ErrorType,L"MetasoundNodePrunedError");
  return;
}

// RouterName'' @ 1411e0160

void __cdecl `dynamic_initializer_for_'Metasound::IDataReference::RouterName__(void)

{
  ::FName::FName(&Metasound::IDataReference::RouterName,"DataReference");
  return;
}

// `dynamic_initializer_for_'CVarEnableCommandletExecution'' @ 1411e0180

void __cdecl
Metasound::GlobalsPrivate::_dynamic_initializer_for__CVarEnableCommandletExecution__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableCommandletExecution,L"au.MetaSound.EnableCommandletExecution",
             &EnableCommandletExecution,
             L"If application is a commandlet, enables execution of MetaSounds irrespective of whether sound is rendered to hardware or not. (Ignored if cooking)Default: 0"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableCommandletExecution__);
  return;
}

// `dynamic_initializer_for_'CVarMetaSoundEnableOperatorMissingOverrideLog'' @ 1411e01d0

void __cdecl _dynamic_initializer_for__CVarMetaSoundEnableOperatorMissingOverrideLog__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMetaSoundEnableOperatorMissingOverrideLog,
             L"au.MetaSound.Debug.EnableOperatorMissingOverrideLog",
             &Metasound::MetasoundOperatorInterfacePrivate::
              bEnableMetaSoundOperatorMissingOverrideLog,
             L"Enables additional logging on operators with missing overrides\nDefault: false",0);
  atexit(_dynamic_atexit_destructor_for__CVarMetaSoundEnableOperatorMissingOverrideLog__);
  return;
}

// `dynamic_initializer_for_'CVarMetaSoundExperimentalTransformTimeoutInSeconds'' @ 1411e0220

void __cdecl
Metasound::DynamicGraph::DynamicOperatorPrivate::
_dynamic_initializer_for__CVarMetaSoundExperimentalTransformTimeoutInSeconds__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMetaSoundExperimentalTransformTimeoutInSeconds,
             L"au.MetaSound.Experimental.DynamicOperatorTransformTimeoutInSeconds",
             &MetaSoundExperimentalTransformTimeoutInSeconds,
             L"Sets the number of seconds allowed to process pending dynamic graph transformations for a single MetaSound render cycle .\n[Less than zero]: Disabled, [Greater than zero]: Enabled, (disabled by default)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarMetaSoundExperimentalTransformTimeoutInSeconds__);
  return;
}

// `dynamic_initializer_for_'CVarMetaSoundProfileAllEnabled'' @ 1411e0270

void __cdecl Metasound::Profiling::_dynamic_initializer_for__CVarMetaSoundProfileAllEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMetaSoundProfileAllEnabled,L"au.MetaSound.ProfileAllGraphs",&ProfileAllEnabled,
             L"Enable profiling of all MetaSound graphs. NOTE: If the node filter is set it will still apply (see au.Metasound.AddProfileNode)\n0: Disabled (default), !0: Enabled"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarMetaSoundProfileAllEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarVerboseTraceEvents'' @ 1411e02c0

void __cdecl Metasound::_dynamic_initializer_for__CVarVerboseTraceEvents__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVerboseTraceEvents,L"au.metasound.VerboseBuildGraphTraceEvents",
             &bVerboseTraceEvents,L"Enable additional trace scopes for operator building",0);
  atexit(_dynamic_atexit_destructor_for__CVarVerboseTraceEvents__);
  return;
}

// `dynamic_initializer_for_'DebugInfoOnThisThread'' @ 1411e0310

void __cdecl
Metasound::ThreadLocalDebug::ThreadLocalDebugPrivate::
_dynamic_initializer_for__DebugInfoOnThisThread__(void)

{
  __tlregdtor(_dynamic_atexit_destructor_for__DebugInfoOnThisThread__);
  return;
}

// `dynamic_initializer_for_'InputDataMetadata'' @ 1411e0330

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

// `dynamic_initializer_for_'InputVariableMetadata'' @ 1411e03a0

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

// `dynamic_initializer_for_'LLMTagDeclaration_Audio_MetaSound'' @ 1411e0410

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_Audio_MetaSound__(void)

{
  FName FVar1;
  FName FVar2;
  FName FVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_AudioSummaryLLM> FVar5;
  FThreadSafeStaticStat<FStat_STAT_MetaSoundLLM> FVar6;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  
  FVar5 = StatPtr_STAT_AudioSummaryLLM;
  if (StatPtr_STAT_AudioSummaryLLM == (FThreadSafeStaticStat<FStat_STAT_AudioSummaryLLM>)0x0) {
    pFVar4 = FName::FName(&local_res8,"STAT_AudioSummaryLLM");
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_AudioSummaryLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioSummaryLLM,*pFVar4,L"Audio",
                       "STATGROUP_LLM","STATCAT_Advanced",L"LLM Summary",true,false,ST_int64,false,
                       false,MCR_PhysicalLLM);
  }
  local_res8.ComparisonIndex.Value = (uint)*(undefined8 *)FVar5;
  local_res8.Number = (uint)((ulonglong)*(undefined8 *)FVar5 >> 0x20);
  FVar6 = StatPtr_STAT_MetaSoundLLM;
  if (StatPtr_STAT_MetaSoundLLM == (FThreadSafeStaticStat<FStat_STAT_MetaSoundLLM>)0x0) {
    pFVar4 = FName::FName(&local_res10,"STAT_MetaSoundLLM");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_MetaSoundLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MetaSoundLLM,*pFVar4,L"MetaSound",
                       "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,
                       false,MCR_PhysicalLLM);
  }
  local_res10.ComparisonIndex.Value = (uint)*(undefined8 *)FVar6;
  local_res10.Number = (uint)((ulonglong)*(undefined8 *)FVar6 >> 0x20);
  pFVar4 = FName::FName(&local_res18,L"Audio");
  FVar1 = *pFVar4;
  pFVar4 = FName::FName(&local_res20,L"MetaSound");
  FVar2.Number = local_res8.Number;
  FVar2.ComparisonIndex.Value = local_res8.ComparisonIndex.Value;
  FVar3.Number = local_res10.Number;
  FVar3.ComparisonIndex.Value = local_res10.ComparisonIndex.Value;
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_Audio_MetaSound,L"Audio_MetaSound",*pFVar4,FVar1,FVar3,FVar2,None);
  return;
}

// `dynamic_initializer_for_'LogMetaSound'' @ 1411e0590

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogMetaSound__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogMetaSound,L"LogMetaSound",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogMetaSound__);
  return;
}

// `dynamic_initializer_for_'LogMetasoundProfiling'' @ 1411e05d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogMetasoundProfiling__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogMetasoundProfiling,L"LogMetasoundProfiling",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogMetasoundProfiling__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantMetasoundGraphCore'' @ 1411e0610

void __cdecl _dynamic_initializer_for__ModuleRegistrantMetasoundGraphCore__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "MetasoundGraphCore";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"MetasoundGraphCore",0x12);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<Metasound::FMetasoundGraphCoreModule>::
             InitializeModule);
  return;
}

// `dynamic_initializer_for_'OutputDataMetadata'' @ 1411e0660

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

// `dynamic_initializer_for_'OutputVariableMetadata'' @ 1411e06d0

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

// `dynamic_initializer_for_'PluginAuthor'' @ 1411e0740

void __cdecl Metasound::_dynamic_initializer_for__PluginAuthor__(void)

{
  ::FString::FString(&PluginAuthor,L"Epic Games, Inc.");
  atexit(_dynamic_atexit_destructor_for__PluginAuthor__);
  return;
}

// `dynamic_initializer_for_'PluginNodeMissingPrompt'' @ 1411e0770

void __cdecl Metasound::_dynamic_initializer_for__PluginNodeMissingPrompt__(void)

{
  FText *pFVar1;
  undefined1 local_res8 [32];
  
  pFVar1 = FText::GetEmpty();
  PluginNodeMissingPrompt.TextData.Reference = (pFVar1->TextData).Reference;
  if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
              (PluginNodeMissingPrompt.TextData.Reference,local_res8);
  }
  PluginNodeMissingPrompt.Flags = pFVar1->Flags;
  atexit(_dynamic_atexit_destructor_for__PluginNodeMissingPrompt__);
  return;
}

// `dynamic_initializer_for_'ProfilingNodeFilter'' @ 1411e07d0

void __cdecl Metasound::Profiling::_dynamic_initializer_for__ProfilingNodeFilter__(void)

{
  atexit(_dynamic_atexit_destructor_for__ProfilingNodeFilter__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MetaSoundLLM'' @ 1411e07f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_MetaSoundLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MetaSoundLLM == (FThreadSafeStaticStat<FStat_STAT_MetaSoundLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MetaSoundLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MetaSoundLLM,*pFVar1,L"MetaSound",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_Audio_Metasound'' @ 1411e0880

void __cdecl _dynamic_initializer_for___GCsvCategory_Audio_Metasound__(void)

{
  FString::operator=(&_GCsvCategory_Audio_Metasound.Name,L"Audio_Metasound");
  _GCsvCategory_Audio_Metasound.Index =
       FCsvProfiler::RegisterCategory(&_GCsvCategory_Audio_Metasound.Name,false,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_Audio_Metasound__);
  return;
}

// `scalar_deleting_destructor' @ 14ad28c30

void * __thiscall
Metasound::IMetasoundGraphCoreModule::_scalar_deleting_destructor_
          (IMetasoundGraphCoreModule *this,uint param_1)

{
  *this = (IMetasoundGraphCoreModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad28c80

void * __thiscall
Metasound::FMetasoundGraphCoreModule::_scalar_deleting_destructor_
          (FMetasoundGraphCoreModule *this,uint param_1)

{
  *this = (FMetasoundGraphCoreModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// AddBuildError<Metasound::FDanglingVertexError,Metasound::FInputDataDestination_const_&> @ 14ad29010

void __cdecl
Metasound::AddBuildError<Metasound::FDanglingVertexError,Metasound::FInputDataDestination_const_&>
          (TArray<TUniquePtr<Metasound::IOperatorBuildError,TDefaultDelete<Metasound::IOperatorBuildError>_>,TSizedDefaultAllocator<32>_>
           *param_1,FInputDataDestination *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FBuildErrorBase *local_18 [2];
  
  local_18[0] = ::operator_new(0x60);
  if (local_18[0] == (FBuildErrorBase *)0x0) {
    local_18[0] = (FBuildErrorBase *)0x0;
  }
  else {
    FDanglingVertexError::FDanglingVertexError((FDanglingVertexError *)local_18[0]);
    local_18[0]->_padding_ = (longlong)&___7FDanglingVertexError_Metasound__6B_;
    FBuildErrorBase::AddInputDataDestination(local_18[0],param_2);
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
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
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(FBuildErrorBase **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_18[0];
  return;
}

// AddBuildError<Metasound::FDanglingVertexError,Metasound::FOutputDataSource_const_&> @ 14ad29110

void __cdecl
Metasound::AddBuildError<Metasound::FDanglingVertexError,Metasound::FOutputDataSource_const_&>
          (TArray<TUniquePtr<Metasound::IOperatorBuildError,TDefaultDelete<Metasound::IOperatorBuildError>_>,TSizedDefaultAllocator<32>_>
           *param_1,FOutputDataSource *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FBuildErrorBase *local_18 [2];
  
  local_18[0] = ::operator_new(0x60);
  if (local_18[0] == (FBuildErrorBase *)0x0) {
    local_18[0] = (FBuildErrorBase *)0x0;
  }
  else {
    FDanglingVertexError::FDanglingVertexError((FDanglingVertexError *)local_18[0]);
    local_18[0]->_padding_ = (longlong)&___7FDanglingVertexError_Metasound__6B_;
    FBuildErrorBase::AddOutputDataSource(local_18[0],param_2);
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
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
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(FBuildErrorBase **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_18[0];
  return;
}

// AddBuildError<Metasound::FDuplicateInputError,TArray<Metasound::FDataEdge,TSizedDefaultAllocator<32>_>_&> @ 14ad29210

void __cdecl
Metasound::
AddBuildError<Metasound::FDuplicateInputError,TArray<Metasound::FDataEdge,TSizedDefaultAllocator<32>_>_&>
          (TArray<TUniquePtr<Metasound::IOperatorBuildError,TDefaultDelete<Metasound::IOperatorBuildError>_>,TSizedDefaultAllocator<32>_>
           *param_1,TArray<Metasound::FDataEdge,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FDuplicateInputError *this;
  FDuplicateInputError *local_38 [2];
  FDataEdge *local_28;
  int iStack_20;
  undefined4 uStack_1c;
  TArrayView<Metasound::FDataEdge,int> local_18;
  
  this = ::operator_new(0x60);
  local_38[0] = (FDuplicateInputError *)0x0;
  if (this != (FDuplicateInputError *)0x0) {
    local_28 = (FDataEdge *)(param_2->AllocatorInstance).Data;
    iVar4 = param_2->ArrayNum;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_18._12_4_ = uStack_1c;
    local_18.ArrayNum = iVar4;
    local_18.DataPtr = local_28;
    iStack_20 = iVar4;
    local_38[0] = FDuplicateInputError::FDuplicateInputError(this,&local_18);
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)local_38) &&
     ((FScriptContainerElement *)local_38 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
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
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(FDuplicateInputError **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_38[0];
  return;
}

// AddBuildError<Metasound::FGraphCycleError,TArray<Metasound::INode_const_*,TSizedDefaultAllocator<32>_>_const_&,TArray<Metasound::FDataEdge,TSizedDefaultAllocator<32>_>_const_&> @ 14ad29350

void __cdecl
Metasound::
AddBuildError<Metasound::FGraphCycleError,TArray<Metasound::INode_const_*,TSizedDefaultAllocator<32>_>_const_&,TArray<Metasound::FDataEdge,TSizedDefaultAllocator<32>_>_const_&>
          (TArray<TUniquePtr<Metasound::IOperatorBuildError,TDefaultDelete<Metasound::IOperatorBuildError>_>,TSizedDefaultAllocator<32>_>
           *param_1,TArray<Metasound::INode_const_*,TSizedDefaultAllocator<32>_> *param_2,
          TArray<Metasound::FDataEdge,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FGraphCycleError *this;
  FGraphCycleError *local_38 [2];
  FScriptContainerElement *local_28;
  int iStack_20;
  undefined4 uStack_1c;
  TArrayView<Metasound::INode_const_*_const,int> local_18;
  
  this = ::operator_new(0x60);
  local_38[0] = (FGraphCycleError *)0x0;
  if (this != (FGraphCycleError *)0x0) {
    local_28 = (param_2->AllocatorInstance).Data;
    iVar4 = param_2->ArrayNum;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_18._12_4_ = uStack_1c;
    local_18.ArrayNum = iVar4;
    local_18.DataPtr = (INode **)local_28;
    iStack_20 = iVar4;
    local_38[0] = FGraphCycleError::FGraphCycleError(this,&local_18,param_3);
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)local_38) &&
     ((FScriptContainerElement *)local_38 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
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
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(FGraphCycleError **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_38[0];
  return;
}

// AddBuildError<Metasound::FInternalError,char_const_(&)[122],int> @ 14ad294a0

void __cdecl
Metasound::AddBuildError<Metasound::FInternalError,char_const_(&)[122],int>
          (TArray<TUniquePtr<Metasound::IOperatorBuildError,TDefaultDelete<Metasound::IOperatorBuildError>_>,TSizedDefaultAllocator<32>_>
           *param_1,char (*param_2) [122],int *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FInternalError *this;
  FInternalError *pFVar5;
  FInternalError *local_38;
  FString local_30;
  
  pFVar5 = (FInternalError *)0x0;
  this = ::operator_new(0x78);
  if (this != (FInternalError *)0x0) {
    iVar4 = *param_3;
    ::FString::FString(&local_30,*param_2);
    pFVar5 = FInternalError::FInternalError(this,&local_30,iVar4);
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  local_38 = pFVar5;
  if (((pFVar1 <= (FScriptContainerElement *)&local_38) &&
      ((FScriptContainerElement *)&local_38 < pFVar1 + (longlong)param_1->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(FInternalError **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_38;
  return;
}

// AddBuildError<Metasound::FInvalidConnectionDataTypeError,Metasound::FDataEdge_const_&> @ 14ad295d0

void __cdecl
Metasound::AddBuildError<Metasound::FInvalidConnectionDataTypeError,Metasound::FDataEdge_const_&>
          (TArray<TUniquePtr<Metasound::IOperatorBuildError,TDefaultDelete<Metasound::IOperatorBuildError>_>,TSizedDefaultAllocator<32>_>
           *param_1,FDataEdge *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FInvalidConnectionDataTypeError *this;
  FInvalidConnectionDataTypeError *local_18 [2];
  
  this = ::operator_new(0x60);
  local_18[0] = (FInvalidConnectionDataTypeError *)0x0;
  if (this != (FInvalidConnectionDataTypeError *)0x0) {
    local_18[0] = FInvalidConnectionDataTypeError::FInvalidConnectionDataTypeError(this,param_2);
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
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
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(FInvalidConnectionDataTypeError **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) =
       local_18[0];
  return;
}

// AddBuildError<Metasound::FInvalidConnectionDataTypeError,Metasound::FDataEdge> @ 14ad296b0

void __cdecl
Metasound::AddBuildError<Metasound::FInvalidConnectionDataTypeError,Metasound::FDataEdge>
          (TArray<TUniquePtr<Metasound::IOperatorBuildError,TDefaultDelete<Metasound::IOperatorBuildError>_>,TSizedDefaultAllocator<32>_>
           *param_1,FDataEdge *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FInvalidConnectionDataTypeError *this;
  FInvalidConnectionDataTypeError *local_18 [2];
  
  this = ::operator_new(0x60);
  local_18[0] = (FInvalidConnectionDataTypeError *)0x0;
  if (this != (FInvalidConnectionDataTypeError *)0x0) {
    local_18[0] = FInvalidConnectionDataTypeError::FInvalidConnectionDataTypeError(this,param_2);
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
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
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(FInvalidConnectionDataTypeError **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) =
       local_18[0];
  return;
}

// AddBuildError<Metasound::FMissingInputDataReferenceError,Metasound::FInputDataDestination_const_&> @ 14ad29790

void __cdecl
Metasound::
AddBuildError<Metasound::FMissingInputDataReferenceError,Metasound::FInputDataDestination_const_&>
          (TArray<TUniquePtr<Metasound::IOperatorBuildError,TDefaultDelete<Metasound::IOperatorBuildError>_>,TSizedDefaultAllocator<32>_>
           *param_1,FInputDataDestination *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FMissingInputDataReferenceError *this;
  FMissingInputDataReferenceError *local_18 [2];
  
  this = ::operator_new(0x60);
  local_18[0] = (FMissingInputDataReferenceError *)0x0;
  if (this != (FMissingInputDataReferenceError *)0x0) {
    local_18[0] = FMissingInputDataReferenceError::FMissingInputDataReferenceError(this,param_2);
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
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
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(FMissingInputDataReferenceError **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) =
       local_18[0];
  return;
}

// AddBuildError<Metasound::FMissingOutputDataReferenceError,Metasound::FOutputDataSource_const_&> @ 14ad29870

void __cdecl
Metasound::
AddBuildError<Metasound::FMissingOutputDataReferenceError,Metasound::FOutputDataSource_const_&>
          (TArray<TUniquePtr<Metasound::IOperatorBuildError,TDefaultDelete<Metasound::IOperatorBuildError>_>,TSizedDefaultAllocator<32>_>
           *param_1,FOutputDataSource *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FMissingOutputDataReferenceError *this;
  FMissingOutputDataReferenceError *local_18 [2];
  
  this = ::operator_new(0x60);
  local_18[0] = (FMissingOutputDataReferenceError *)0x0;
  if (this != (FMissingOutputDataReferenceError *)0x0) {
    local_18[0] = FMissingOutputDataReferenceError::FMissingOutputDataReferenceError(this,param_2);
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
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
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(FMissingOutputDataReferenceError **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) =
       local_18[0];
  return;
}

// AddBuildError<Metasound::FMissingOutputDataReferenceError,Metasound::FOutputDataSource> @ 14ad29950

void __cdecl
Metasound::AddBuildError<Metasound::FMissingOutputDataReferenceError,Metasound::FOutputDataSource>
          (TArray<TUniquePtr<Metasound::IOperatorBuildError,TDefaultDelete<Metasound::IOperatorBuildError>_>,TSizedDefaultAllocator<32>_>
           *param_1,FOutputDataSource *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FMissingOutputDataReferenceError *this;
  FMissingOutputDataReferenceError *local_18 [2];
  
  this = ::operator_new(0x60);
  local_18[0] = (FMissingOutputDataReferenceError *)0x0;
  if (this != (FMissingOutputDataReferenceError *)0x0) {
    local_18[0] = FMissingOutputDataReferenceError::FMissingOutputDataReferenceError(this,param_2);
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
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
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(FMissingOutputDataReferenceError **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) =
       local_18[0];
  return;
}

// AddBuildError<Metasound::FMissingVertexError,Metasound::FInputDataDestination_const_&> @ 14ad29a30

void __cdecl
Metasound::AddBuildError<Metasound::FMissingVertexError,Metasound::FInputDataDestination_const_&>
          (TArray<TUniquePtr<Metasound::IOperatorBuildError,TDefaultDelete<Metasound::IOperatorBuildError>_>,TSizedDefaultAllocator<32>_>
           *param_1,FInputDataDestination *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FMissingVertexError *this;
  FMissingVertexError *local_18 [2];
  
  this = ::operator_new(0x60);
  local_18[0] = (FMissingVertexError *)0x0;
  if (this != (FMissingVertexError *)0x0) {
    local_18[0] = FMissingVertexError::FMissingVertexError(this,param_2);
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
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
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(FMissingVertexError **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_18[0];
  return;
}

// AddBuildError<Metasound::FMissingVertexError,Metasound::FOutputDataSource_const_&> @ 14ad29b10

void __cdecl
Metasound::AddBuildError<Metasound::FMissingVertexError,Metasound::FOutputDataSource_const_&>
          (TArray<TUniquePtr<Metasound::IOperatorBuildError,TDefaultDelete<Metasound::IOperatorBuildError>_>,TSizedDefaultAllocator<32>_>
           *param_1,FOutputDataSource *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FMissingVertexError *this;
  FMissingVertexError *local_18 [2];
  
  this = ::operator_new(0x60);
  local_18[0] = (FMissingVertexError *)0x0;
  if (this != (FMissingVertexError *)0x0) {
    local_18[0] = FMissingVertexError::FMissingVertexError(this,param_2);
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
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
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(FMissingVertexError **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_18[0];
  return;
}

// AddBuildError<Metasound::FNodePrunedError,Metasound::INode_const_*_&> @ 14ad29bf0

void __cdecl
Metasound::AddBuildError<Metasound::FNodePrunedError,Metasound::INode_const_*_&>
          (TArray<TUniquePtr<Metasound::IOperatorBuildError,TDefaultDelete<Metasound::IOperatorBuildError>_>,TSizedDefaultAllocator<32>_>
           *param_1,INode **param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FNodePrunedError *this;
  FNodePrunedError *local_18 [2];
  
  this = ::operator_new(0x60);
  local_18[0] = (FNodePrunedError *)0x0;
  if (this != (FNodePrunedError *)0x0) {
    local_18[0] = FNodePrunedError::FNodePrunedError(this,*param_2);
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
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
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(FNodePrunedError **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_18[0];
  return;
}

// AllOf<TArray<Metasound::VertexDataPrivate::FInputBinding,TSizedDefaultAllocator<32>_>,`Metasound::VertexDataPrivate::AreAllVerticesBound<Metasound::VertexDataPrivate::FInputBinding>'::__l2::<lambda_1>_> @ 14ad29cd0

bool __cdecl
Algo::
AllOf<TArray<Metasound::VertexDataPrivate::FInputBinding,TSizedDefaultAllocator<32>_>,_Metasound::VertexDataPrivate::AreAllVerticesBound<Metasound::VertexDataPrivate::FInputBinding>_::__l2::<lambda_1>_>
          (TArray<Metasound::VertexDataPrivate::FInputBinding,TSizedDefaultAllocator<32>_> *param_1,
          <lambda_1> param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x58;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<Metasound::VertexDataPrivate::FInputBinding_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (pFVar2[0x50] == (FScriptContainerElement)0x0) {
      return false;
    }
    pFVar2 = pFVar2 + 0x58;
  }
  return true;
}

// AllOf<TArray<Metasound::VertexDataPrivate::FOutputBinding,TSizedDefaultAllocator<32>_>,`Metasound::VertexDataPrivate::AreAllVerticesBound<Metasound::VertexDataPrivate::FOutputBinding>'::__l2::<lambda_1>_> @ 14ad29d40

bool __cdecl
Algo::
AllOf<TArray<Metasound::VertexDataPrivate::FOutputBinding,TSizedDefaultAllocator<32>_>,_Metasound::VertexDataPrivate::AreAllVerticesBound<Metasound::VertexDataPrivate::FOutputBinding>_::__l2::<lambda_1>_>
          (TArray<Metasound::VertexDataPrivate::FOutputBinding,TSizedDefaultAllocator<32>_> *param_1
          ,<lambda_1> param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x40;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<Metasound::VertexDataPrivate::FOutputBinding_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (pFVar2[0x38] == (FScriptContainerElement)0x0) {
      return false;
    }
    pFVar2 = pFVar2 + 0x40;
  }
  return true;
}

// ApplyAfter<`Metasound::Profiling::Init'::__l2::<lambda_1>_&,TArray<FString,TSizedDefaultAllocator<32>_>_const_&> @ 14ad2a5c0

void __thiscall
UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int>_>::
ApplyAfter<_Metasound::Profiling::Init_::__l2::<lambda_1>_&,TArray<FString,TSizedDefaultAllocator<32>_>_const_&>
          (TTupleBase<TIntegerSequence<unsigned_int>_> *this,<lambda_1> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res18 [8];
  
  iVar1 = param_2->ArrayNum;
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_2->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar2 == pFVar3) break;
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
              (&Metasound::Profiling::ProfilingNodeFilter,(FString *)pFVar2);
    pFVar2 = pFVar2 + 0x10;
  }
  return;
}

// AreAllVerticesBound<Metasound::VertexDataPrivate::FInputBinding> @ 14ad2a630

bool __cdecl
Metasound::VertexDataPrivate::AreAllVerticesBound<Metasound::VertexDataPrivate::FInputBinding>
          (TArray<Metasound::VertexDataPrivate::FInputBinding,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x58;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<Metasound::VertexDataPrivate::FInputBinding_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (pFVar2[0x50] == (FScriptContainerElement)0x0) {
      return false;
    }
    pFVar2 = pFVar2 + 0x58;
  }
  return true;
}

// AreAllVerticesBound<Metasound::VertexDataPrivate::FOutputBinding> @ 14ad2a6a0

bool __cdecl
Metasound::VertexDataPrivate::AreAllVerticesBound<Metasound::VertexDataPrivate::FOutputBinding>
          (TArray<Metasound::VertexDataPrivate::FOutputBinding,TSizedDefaultAllocator<32>_> *param_1
          )

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x40;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<Metasound::VertexDataPrivate::FOutputBinding_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (pFVar2[0x38] == (FScriptContainerElement)0x0) {
      return false;
    }
    pFVar2 = pFVar2 + 0x40;
  }
  return true;
}

// BinarySearch<TArray<Metasound::INode_const_*,TSizedDefaultAllocator<32>_>,Metasound::INode_const_*,TLess<void>_> @ 14ad2a710

int __cdecl
Algo::
BinarySearch<TArray<Metasound::INode_const_*,TSizedDefaultAllocator<32>_>,Metasound::INode_const_*,TLess<void>_>
          (TArray<Metasound::INode_const_*,TSizedDefaultAllocator<32>_> *param_1,INode **param_2,
          TLess<void> param_3)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  pFVar2 = (param_1->AllocatorInstance).Data;
  iVar5 = 0;
  uVar1 = param_1->ArrayNum;
  if (0 < (int)uVar1) {
    uVar6 = uVar1;
    do {
      iVar4 = (uVar6 >> 1) + iVar5;
      if (*(INode **)(pFVar2 + (longlong)iVar4 * 8) < *param_2) {
        iVar5 = iVar4 + (uVar6 & 1);
      }
      uVar3 = uVar6 >> 1;
      uVar6 = uVar6 >> 1;
    } while (uVar3 != 0);
  }
  iVar4 = -1;
  if ((iVar5 < (int)uVar1) && (iVar4 = -1, *(INode **)(pFVar2 + (longlong)iVar5 * 8) <= *param_2)) {
    iVar4 = iVar5;
  }
  return iVar4;
}

// BinarySearchBy<TArray<TTuple<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter>,TSizedDefaultAllocator<32>_>,FGuid,TSortedMap<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::FKeyForward,TLess<FGuid_const_&>_> @ 14ad2a790

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter>,TSizedDefaultAllocator<32>_>,FGuid,TSortedMap<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::FKeyForward,TLess<FGuid_const_&>_>
          (TArray<TTuple<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter>,TSizedDefaultAllocator<32>_>
           *param_1,FGuid *param_2,FKeyForward param_3,TLess<FGuid_const_&> param_4)

{
  TTuple<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter> *pTVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1->ArrayNum;
  pTVar1 = (TTuple<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter> *)
           (param_1->AllocatorInstance).Data;
  iVar2 = AlgoImpl::
          LowerBoundInternal<TTuple<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter>_const_,int,FGuid,TSortedMap<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::FKeyForward,TLess<FGuid_const_&>_>
                    (pTVar1,iVar3,param_2,param_3,param_4);
  if ((iVar3 <= iVar2) || (param_2->A < *(uint *)(pTVar1 + iVar2))) {
    return -1;
  }
  if (param_2->A == *(uint *)(pTVar1 + iVar2)) {
    if (param_2->B < *(uint *)&pTVar1[iVar2].field_0x4) {
      return -1;
    }
    if (param_2->B == *(uint *)&pTVar1[iVar2].field_0x4) {
      if (param_2->C < *(uint *)&pTVar1[iVar2].field_0x8) {
        return -1;
      }
      if (param_2->C == *(uint *)&pTVar1[iVar2].field_0x8) {
        iVar3 = -1;
        if (*(uint *)&pTVar1[iVar2].field_0xc <= param_2->D) {
          iVar3 = iVar2;
        }
        return iVar3;
      }
    }
  }
  return iVar2;
}

// BinarySearchBy<TArray<TTuple<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID,TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>_>,TSizedDefaultAllocator<32>_>,Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID,TSortedMap<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID,TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>,TSizedDefaultAllocator<32>,TLess<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID_const_&>_>::FKeyForward,TLess<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID_const_&>_> @ 14ad2a840

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID,TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>_>,TSizedDefaultAllocator<32>_>,Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID,TSortedMap<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID,TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>,TSizedDefaultAllocator<32>,TLess<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID_const_&>_>::FKeyForward,TLess<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID_const_&>_>
          (TArray<TTuple<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID,TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>_>,TSizedDefaultAllocator<32>_>
           *param_1,FLiteralNodeID *param_2,FKeyForward param_3,
          TLess<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID_const_&> param_4
          )

{
  TTuple<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID,TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>_>
  *pTVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_1->ArrayNum;
  pTVar1 = (TTuple<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID,TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>_>
            *)(param_1->AllocatorInstance).Data;
  iVar3 = AlgoImpl::
          LowerBoundInternal<TTuple<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID,TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>_>_const_,int,Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID,TSortedMap<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID,TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>,TSizedDefaultAllocator<32>,TLess<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID_const_&>_>::FKeyForward,TLess<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID_const_&>_>
                    (pTVar1,iVar4,param_2,param_3,param_4);
  if (iVar3 < iVar4) {
    bVar2 = Metasound::DynamicGraph::operator<(param_2,(FLiteralNodeID *)(pTVar1 + iVar3));
    iVar4 = -1;
    if (!bVar2) {
      iVar4 = iVar3;
    }
  }
  else {
    iVar4 = -1;
  }
  return iVar4;
}

// BinarySearchBy<TArray<TTuple<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>,FName,TSortedMap<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess> @ 14ad2a8c0

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>,FName,TSortedMap<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
          (TArray<TTuple<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
           *param_1,FName *param_2,FKeyForward param_3,FNameFastLess param_4)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  uVar1 = param_1->ArrayNum;
  iVar4 = 0;
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (0 < (int)uVar1) {
    uVar7 = uVar1;
    do {
      iVar5 = (uVar7 >> 1) + iVar4;
      iVar6 = *(int *)(pFVar2 + (longlong)iVar5 * 0x18) - (param_2->ComparisonIndex).Value;
      if (iVar6 == 0) {
        iVar6 = *(int *)(pFVar2 + (longlong)iVar5 * 0x18 + 4) - param_2->Number;
      }
      if (iVar6 < 0) {
        iVar4 = iVar5 + (uVar7 & 1);
      }
      uVar3 = uVar7 >> 1;
      uVar7 = uVar7 >> 1;
    } while (uVar3 != 0);
    if (iVar4 < (int)uVar1) {
      iVar5 = (param_2->ComparisonIndex).Value - *(int *)(pFVar2 + (longlong)iVar4 * 0x18);
      if (iVar5 == 0) {
        iVar5 = param_2->Number - *(int *)(pFVar2 + (longlong)iVar4 * 0x18 + 4);
      }
      iVar6 = -1;
      if (-1 < iVar5) {
        iVar6 = iVar4;
      }
      return iVar6;
    }
  }
  return -1;
}

// BinarySearchBy<TArray<TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>,TSizedDefaultAllocator<32>_>,FName,TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess> @ 14ad2a960

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>,TSizedDefaultAllocator<32>_>,FName,TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
          (TArray<TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>,TSizedDefaultAllocator<32>_>
           *param_1,FName *param_2,FKeyForward param_3,FNameFastLess param_4)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  uVar1 = param_1->ArrayNum;
  iVar4 = 0;
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (0 < (int)uVar1) {
    uVar7 = uVar1;
    do {
      iVar5 = (uVar7 >> 1) + iVar4;
      iVar6 = *(int *)(pFVar2 + (longlong)iVar5 * 0x10) - (param_2->ComparisonIndex).Value;
      if (iVar6 == 0) {
        iVar6 = *(int *)(pFVar2 + (longlong)iVar5 * 0x10 + 4) - param_2->Number;
      }
      if (iVar6 < 0) {
        iVar4 = iVar5 + (uVar7 & 1);
      }
      uVar3 = uVar7 >> 1;
      uVar7 = uVar7 >> 1;
    } while (uVar3 != 0);
    if (iVar4 < (int)uVar1) {
      iVar5 = (param_2->ComparisonIndex).Value - *(int *)(pFVar2 + (longlong)iVar4 * 0x10);
      if (iVar5 == 0) {
        iVar5 = param_2->Number - *(int *)(pFVar2 + (longlong)iVar4 * 0x10 + 4);
      }
      iVar6 = -1;
      if (-1 < iVar5) {
        iVar6 = iVar4;
      }
      return iVar6;
    }
  }
  return -1;
}

// BinarySearchBy<TArray<TTuple<FName,unsigned___int64>,TSizedDefaultAllocator<32>_>,FName,TSortedMap<FName,unsigned___int64,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess> @ 14ad2aa00

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<FName,unsigned___int64>,TSizedDefaultAllocator<32>_>,FName,TSortedMap<FName,unsigned___int64,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
          (TArray<TTuple<FName,unsigned___int64>,TSizedDefaultAllocator<32>_> *param_1,
          FName *param_2,FKeyForward param_3,FNameFastLess param_4)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  uVar1 = param_1->ArrayNum;
  iVar4 = 0;
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (0 < (int)uVar1) {
    uVar7 = uVar1;
    do {
      iVar5 = (uVar7 >> 1) + iVar4;
      iVar6 = *(int *)(pFVar2 + (longlong)iVar5 * 0x10) - (param_2->ComparisonIndex).Value;
      if (iVar6 == 0) {
        iVar6 = *(int *)(pFVar2 + (longlong)iVar5 * 0x10 + 4) - param_2->Number;
      }
      if (iVar6 < 0) {
        iVar4 = iVar5 + (uVar7 & 1);
      }
      uVar3 = uVar7 >> 1;
      uVar7 = uVar7 >> 1;
    } while (uVar3 != 0);
    if (iVar4 < (int)uVar1) {
      iVar5 = (param_2->ComparisonIndex).Value - *(int *)(pFVar2 + (longlong)iVar4 * 0x10);
      if (iVar5 == 0) {
        iVar5 = param_2->Number - *(int *)(pFVar2 + (longlong)iVar4 * 0x10 + 4);
      }
      iVar6 = -1;
      if (-1 < iVar5) {
        iVar6 = iVar4;
      }
      return iVar6;
    }
  }
  return -1;
}

// BinarySearchBy<TArray<TTuple<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo>,TSizedDefaultAllocator<32>_>,unsigned___int64,TSortedMap<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>::FKeyForward,TLess<unsigned___int64_const_>_> @ 14ad2aaa0

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo>,TSizedDefaultAllocator<32>_>,unsigned___int64,TSortedMap<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>::FKeyForward,TLess<unsigned___int64_const_>_>
          (TArray<TTuple<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo>,TSizedDefaultAllocator<32>_>
           *param_1,ulong64 *param_2,FKeyForward param_3,TLess<unsigned___int64_const_> param_4)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  pFVar2 = (param_1->AllocatorInstance).Data;
  iVar5 = 0;
  uVar1 = param_1->ArrayNum;
  if (0 < (int)uVar1) {
    uVar6 = uVar1;
    do {
      iVar4 = (uVar6 >> 1) + iVar5;
      if (*(ulonglong *)(pFVar2 + (longlong)iVar4 * 0x78) < *param_2) {
        iVar5 = iVar4 + (uVar6 & 1);
      }
      uVar3 = uVar6 >> 1;
      uVar6 = uVar6 >> 1;
    } while (uVar3 != 0);
  }
  if ((int)uVar1 <= iVar5) {
    return -1;
  }
  iVar4 = -1;
  if (*(ulonglong *)(pFVar2 + (longlong)iVar5 * 0x78) <= *param_2) {
    iVar4 = iVar5;
  }
  return iVar4;
}

// BinarySearchBy<TArray<Metasound::DynamicGraph::FExecuteEntry,TSizedDefaultAllocator<32>_>,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FExecuteEntry>,TLess<void>_> @ 14ad2ab20

int __cdecl
Algo::
BinarySearchBy<TArray<Metasound::DynamicGraph::FExecuteEntry,TSizedDefaultAllocator<32>_>,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FExecuteEntry>,TLess<void>_>
          (TArray<Metasound::DynamicGraph::FExecuteEntry,TSizedDefaultAllocator<32>_> *param_1,
          int *param_2,TGetOrdinal<Metasound::DynamicGraph::FExecuteEntry> param_3,
          TLess<void> param_4)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  pFVar2 = (param_1->AllocatorInstance).Data;
  iVar5 = 0;
  uVar1 = param_1->ArrayNum;
  if (0 < (int)uVar1) {
    uVar6 = uVar1;
    do {
      iVar4 = (uVar6 >> 1) + iVar5;
      if (*(int *)(pFVar2 + (longlong)iVar4 * 0x20) < *param_2) {
        iVar5 = iVar4 + (uVar6 & 1);
      }
      uVar3 = uVar6 >> 1;
      uVar6 = uVar6 >> 1;
    } while (uVar3 != 0);
  }
  iVar4 = -1;
  if ((iVar5 < (int)uVar1) && (iVar4 = -1, *(int *)(pFVar2 + (longlong)iVar5 * 0x20) <= *param_2)) {
    iVar4 = iVar5;
  }
  return iVar4;
}

// BinarySearchBy<TArray<Metasound::DynamicGraph::FPostExecuteEntry,TSizedDefaultAllocator<32>_>,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FPostExecuteEntry>,TLess<void>_> @ 14ad2aba0

int __cdecl
Algo::
BinarySearchBy<TArray<Metasound::DynamicGraph::FPostExecuteEntry,TSizedDefaultAllocator<32>_>,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FPostExecuteEntry>,TLess<void>_>
          (TArray<Metasound::DynamicGraph::FPostExecuteEntry,TSizedDefaultAllocator<32>_> *param_1,
          int *param_2,TGetOrdinal<Metasound::DynamicGraph::FPostExecuteEntry> param_3,
          TLess<void> param_4)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  pFVar2 = (param_1->AllocatorInstance).Data;
  iVar5 = 0;
  uVar1 = param_1->ArrayNum;
  if (0 < (int)uVar1) {
    uVar6 = uVar1;
    do {
      iVar4 = (uVar6 >> 1) + iVar5;
      if (*(int *)(pFVar2 + (longlong)iVar4 * 0x20) < *param_2) {
        iVar5 = iVar4 + (uVar6 & 1);
      }
      uVar3 = uVar6 >> 1;
      uVar6 = uVar6 >> 1;
    } while (uVar3 != 0);
  }
  iVar4 = -1;
  if ((iVar5 < (int)uVar1) && (iVar4 = -1, *(int *)(pFVar2 + (longlong)iVar5 * 0x20) <= *param_2)) {
    iVar4 = iVar5;
  }
  return iVar4;
}

// BinarySearchBy<TArray<Metasound::DynamicGraph::FResetEntry,TSizedDefaultAllocator<32>_>,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FResetEntry>,TLess<void>_> @ 14ad2ac20

int __cdecl
Algo::
BinarySearchBy<TArray<Metasound::DynamicGraph::FResetEntry,TSizedDefaultAllocator<32>_>,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FResetEntry>,TLess<void>_>
          (TArray<Metasound::DynamicGraph::FResetEntry,TSizedDefaultAllocator<32>_> *param_1,
          int *param_2,TGetOrdinal<Metasound::DynamicGraph::FResetEntry> param_3,TLess<void> param_4
          )

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  pFVar2 = (param_1->AllocatorInstance).Data;
  iVar5 = 0;
  uVar1 = param_1->ArrayNum;
  if (0 < (int)uVar1) {
    uVar6 = uVar1;
    do {
      iVar4 = (uVar6 >> 1) + iVar5;
      if (*(int *)(pFVar2 + (longlong)iVar4 * 0x20) < *param_2) {
        iVar5 = iVar4 + (uVar6 & 1);
      }
      uVar3 = uVar6 >> 1;
      uVar6 = uVar6 >> 1;
    } while (uVar3 != 0);
  }
  iVar4 = -1;
  if ((iVar5 < (int)uVar1) && (iVar4 = -1, *(int *)(pFVar2 + (longlong)iVar5 * 0x20) <= *param_2)) {
    iVar4 = iVar5;
  }
  return iVar4;
}

// Bind<Metasound::VertexDataPrivate::FInputBinding> @ 14ad2aca0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::VertexDataPrivate::Bind<Metasound::VertexDataPrivate::FInputBinding>
          (bool param_1,
          TArray<Metasound::VertexDataPrivate::FInputBinding,TSizedDefaultAllocator<32>_> *param_2,
          TArray<Metasound::VertexDataPrivate::FInputBinding,TSizedDefaultAllocator<32>_> *param_3)

{
  FInputBinding *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  ForAnyElementType FVar6;
  FInputBinding *this;
  FInputBinding *pFVar7;
  FInputBinding *pFVar8;
  undefined1 local_res18 [8];
  uint local_res20;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  pFVar7 = (FInputBinding *)(param_3->AllocatorInstance).Data;
  local_res20 = param_3->ArrayNum;
  uVar5 = (ulonglong)(int)local_res20;
  pFVar8 = pFVar7 + uVar5;
LAB_14ad2ace0:
  do {
    if (param_3->ArrayNum != (int)uVar5) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<Metasound::VertexDataPrivate::FInputBinding,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res18);
    }
    if (pFVar7 == pFVar8) {
      return;
    }
    pFVar1 = (FInputBinding *)(param_2->AllocatorInstance).Data;
    if (pFVar1 != pFVar1 + param_2->ArrayNum) {
      this = pFVar1;
      do {
        if ((this->Vertex)._padding_ == (pFVar7->Vertex)._padding_) {
          bVar3 = IsCastable((FName)(pFVar7->Vertex)._padding_,(FName)(this->Vertex)._padding_);
          if (bVar3) {
            FInputBinding::Bind(this,pFVar7);
            pFVar7 = pFVar7 + 1;
            uVar5 = (ulonglong)local_res20;
            goto LAB_14ad2ace0;
          }
          if ((byte)LogMetaSound._0_1_ < 3) goto LAB_14ad2af2a;
          ::FName::ToString((FName *)&(this->Vertex)._padding_,&local_58);
          ::FName::ToString((FName *)&(pFVar7->Vertex)._padding_,&local_68);
          ::FName::ToString((FName *)&(pFVar7->Vertex)._padding_,&local_78);
          UE::Logging::Private::BasicLog<3>
                    (&`void___cdecl_Metasound::VertexDataPrivate::Bind<Metasound::VertexDataPrivate::FInputBinding>(bool,TArray<Metasound::VertexDataPrivate::FInputBinding,TSizedDefaultAllocator<32>_>&___ptr64,TArray<Metasound::VertexDataPrivate::FInputBinding,TSizedDefaultAllocator<32>_>&___ptr64)'
                      ::__l15::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          FVar6.Data = local_58.Data.AllocatorInstance.Data;
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
            FVar6.Data = local_58.Data.AllocatorInstance.Data;
          }
          goto LAB_14ad2af17;
        }
        this = this + 1;
      } while (this != pFVar1 + param_2->ArrayNum);
    }
    if (param_1) {
      if (2 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString((FName *)&(pFVar7->Vertex)._padding_,&local_48);
        UE::Logging::Private::BasicLog<3>
                  (&`void___cdecl_Metasound::VertexDataPrivate::Bind<Metasound::VertexDataPrivate::FInputBinding>(bool,TArray<Metasound::VertexDataPrivate::FInputBinding,TSizedDefaultAllocator<32>_>&___ptr64,TArray<Metasound::VertexDataPrivate::FInputBinding,TSizedDefaultAllocator<32>_>&___ptr64)'
                    ::__l30::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        FVar6.Data = local_48.Data.AllocatorInstance.Data;
LAB_14ad2af17:
        if (FVar6.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar6.Data);
        }
      }
LAB_14ad2af2a:
      uVar5 = (ulonglong)local_res20;
      pFVar7 = pFVar7 + 1;
    }
    else {
      if (((pFVar1 <= pFVar7) && (pFVar7 < pFVar1 + param_2->ArrayMax)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = param_2->ArrayNum;
      if (iVar4 == param_2->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x858,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar4 + 1;
      FInputBinding::FInputBinding
                ((FInputBinding *)((param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x58),
                 pFVar7);
      pFVar7 = pFVar7 + 1;
      uVar5 = (ulonglong)local_res20;
    }
  } while( true );
}

// Bind<Metasound::VertexDataPrivate::FOutputBinding> @ 14ad2af70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::VertexDataPrivate::Bind<Metasound::VertexDataPrivate::FOutputBinding>
          (bool param_1,
          TArray<Metasound::VertexDataPrivate::FOutputBinding,TSizedDefaultAllocator<32>_> *param_2,
          TArray<Metasound::VertexDataPrivate::FOutputBinding,TSizedDefaultAllocator<32>_> *param_3)

{
  TOptional<Metasound::FAnyDataReference> *this;
  FOutputBinding *pFVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  ForAnyElementType FVar7;
  FOutputBinding *pFVar8;
  FOutputBinding *pFVar9;
  FOutputBinding *pFVar10;
  FName *this_00;
  undefined1 local_res18 [8];
  uint local_res20;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  local_res20 = param_3->ArrayNum;
  uVar6 = (ulonglong)(int)local_res20;
  pFVar9 = (FOutputBinding *)(param_3->AllocatorInstance).Data;
  pFVar10 = pFVar9 + uVar6;
  this_00 = (FName *)&(pFVar9->Vertex).field_0x8;
LAB_14ad2afb5:
  do {
    if (param_3->ArrayNum != (int)uVar6) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<Metasound::VertexDataPrivate::FOutputBinding,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar9 == pFVar10) {
      return;
    }
    pFVar1 = (FOutputBinding *)(param_2->AllocatorInstance).Data;
    if (pFVar1 != pFVar1 + param_2->ArrayNum) {
      pFVar8 = pFVar1;
      do {
        if (*(FName *)&(pFVar8->Vertex).field_0x8 == *this_00) {
          bVar4 = IsCastable(this_00[1],*(FName *)&(pFVar8->Vertex).field_0x10);
          if (!bVar4) {
            if ((byte)LogMetaSound._0_1_ < 3) goto LAB_14ad2b2bc;
            ::FName::ToString((FName *)&(pFVar8->Vertex).field_0x10,&local_58);
            ::FName::ToString(this_00 + 1,&local_68);
            ::FName::ToString(this_00,&local_78);
            UE::Logging::Private::BasicLog<3>
                      (&`void___cdecl_Metasound::VertexDataPrivate::Bind<Metasound::VertexDataPrivate::FOutputBinding>(bool,TArray<Metasound::VertexDataPrivate::FOutputBinding,TSizedDefaultAllocator<32>_>&___ptr64,TArray<Metasound::VertexDataPrivate::FOutputBinding,TSizedDefaultAllocator<32>_>&___ptr64)'
                        ::__l15::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
            if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.Data.AllocatorInstance.Data);
            }
            FVar7.Data = local_58.Data.AllocatorInstance.Data;
            if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68.Data.AllocatorInstance.Data);
              FVar7.Data = local_58.Data.AllocatorInstance.Data;
            }
            goto LAB_14ad2b2aa;
          }
          if ((*(FName *)&(pFVar8->Vertex).field_0x10 != this_00[1]) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Vertex.DataTypeName == InBinding.GetVertex().DataTypeName",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundVertexData.cpp"
                                 ,0xd3,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((char)this_00[6].ComparisonIndex.Value == '\0') goto LAB_14ad2b2bc;
          this = &pFVar8->Data;
          if ((TOptional<Metasound::FAnyDataReference> *)(this_00 + 3) != this) {
            if (((pFVar8->Data).bIsSet != false) &&
               (pIVar2 = (pFVar8->Data).TypedValue.DataRefPtr.Ptr, pIVar2 != (IDataReference *)0x0))
            {
              (**(code **)*pIVar2)(pIVar2,1);
            }
            FAnyDataReference::FAnyDataReference
                      (&this->TypedValue,(EDataReferenceAccessType)this_00[4].ComparisonIndex.Value,
                       (IDataReference *)this_00[5]);
            (this->TypedValue)._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
            (pFVar8->Data).bIsSet = true;
          }
          if (((pFVar8->Data).bIsSet == false) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x1bd,
                                 L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          CheckAccessTypeCompatibility((FDataVertex *)pFVar8,&this->TypedValue);
          pFVar9 = pFVar9 + 1;
          uVar6 = (ulonglong)local_res20;
          this_00 = this_00 + 8;
          goto LAB_14ad2afb5;
        }
        pFVar8 = pFVar8 + 1;
      } while (pFVar8 != pFVar1 + param_2->ArrayNum);
    }
    if (param_1) {
      if (2 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString(this_00,&local_48);
        UE::Logging::Private::BasicLog<3>
                  (&`void___cdecl_Metasound::VertexDataPrivate::Bind<Metasound::VertexDataPrivate::FOutputBinding>(bool,TArray<Metasound::VertexDataPrivate::FOutputBinding,TSizedDefaultAllocator<32>_>&___ptr64,TArray<Metasound::VertexDataPrivate::FOutputBinding,TSizedDefaultAllocator<32>_>&___ptr64)'
                    ::__l30::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        FVar7.Data = local_48.Data.AllocatorInstance.Data;
LAB_14ad2b2aa:
        if (FVar7.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar7.Data);
        }
      }
LAB_14ad2b2bc:
      uVar6 = (ulonglong)local_res20;
      pFVar9 = pFVar9 + 1;
      this_00 = this_00 + 8;
    }
    else {
      if (((pFVar1 <= pFVar9) && (pFVar9 < pFVar1 + param_2->ArrayMax)) &&
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
                          (0x840,&param_2->AllocatorInstance,&param_2->ArrayMax);
        param_2->ArrayNum = iVar5;
      }
      param_2->ArrayNum = iVar5 + 1;
      FOutputBinding::FOutputBinding
                ((FOutputBinding *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x40),
                 pFVar9);
      pFVar9 = pFVar9 + 1;
      uVar6 = (ulonglong)local_res20;
      this_00 = this_00 + 8;
    }
  } while( true );
}

// CastMetasoundEnvironmentVariableChecked<TArray<FGuid,TSizedDefaultAllocator<32>_>_> @ 14ad2b300

TMetasoundEnvironmentVariable<TArray<FGuid,TSizedDefaultAllocator<32>_>_> * __cdecl
Metasound::CastMetasoundEnvironmentVariableChecked<TArray<FGuid,TSizedDefaultAllocator<32>_>_>
          (IMetasoundEnvironmentVariable *param_1)

{
  code *pcVar1;
  bool bVar2;
  TArray<FGuid,TSizedDefaultAllocator<32>_> **ppTVar3;
  TMetasoundEnvironmentVariable<TArray<FGuid,TSizedDefaultAllocator<32>_>_> *pTVar4;
  
  ppTVar3 = (TArray<FGuid,TSizedDefaultAllocator<32>_> **)(**(code **)((longlong)*param_1 + 0x10))()
  ;
  if (ppTVar3 != &TEnvironmentVariableTypeInfo<TArray<FGuid,TSizedDefaultAllocator<32>_>_>::TypePtr)
  {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsEnvironmentVariableOfType<Type>(InVar)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundEnvironment.h"
                       ,0xaa,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TMetasoundEnvironmentVariable<TArray<FGuid,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar1)();
      return pTVar4;
    }
  }
  return (TMetasoundEnvironmentVariable<TArray<FGuid,TSizedDefaultAllocator<32>_>_> *)param_1;
}

// CompareItems<Metasound::FEnvironmentVertex,int> @ 14ad2b350

bool __cdecl
CompareItems<Metasound::FEnvironmentVertex,int>
          (FEnvironmentVertex *param_1,FEnvironmentVertex *param_2,int param_3)

{
  FName *pFVar1;
  FName *pFVar2;
  
  if (param_3 != 0) {
    pFVar2 = &param_2->VertexName;
    pFVar1 = &param_1->VertexName;
    do {
      if (*pFVar1 != *pFVar2) {
        return false;
      }
      pFVar2 = pFVar2 + 2;
      pFVar1 = pFVar1 + 2;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// CompareItems<Metasound::FInputDataVertex,int> @ 14ad2b390

bool __cdecl
CompareItems<Metasound::FInputDataVertex,int>
          (FInputDataVertex *param_1,FInputDataVertex *param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_3 != 0) {
    plVar2 = &param_2->_padding_;
    plVar1 = &param_1->_padding_;
    do {
      if ((plVar1[-1] != plVar2[-1]) || (*plVar1 != *plVar2)) {
        return false;
      }
      plVar2 = plVar2 + 7;
      plVar1 = plVar1 + 7;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// CompareItems<Metasound::FOutputDataVertex,int> @ 14ad2b3d0

bool __cdecl
CompareItems<Metasound::FOutputDataVertex,int>
          (FOutputDataVertex *param_1,FOutputDataVertex *param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_3 != 0) {
    plVar2 = (longlong *)&param_2->field_0x10;
    plVar1 = (longlong *)&param_1->field_0x10;
    do {
      if ((plVar1[-1] != plVar2[-1]) || (*plVar1 != *plVar2)) {
        return false;
      }
      plVar2 = plVar2 + 4;
      plVar1 = plVar1 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// CompareVertexInterfaceDataToPriorState<Metasound::VertexDataPrivate::FInputBinding> @ 14ad2b410

void __cdecl
Metasound::VertexDataPrivate::
CompareVertexInterfaceDataToPriorState<Metasound::VertexDataPrivate::FInputBinding>
          (TArray<Metasound::VertexDataPrivate::FInputBinding,TSizedDefaultAllocator<32>_> *param_1,
          TArray<Metasound::FVertexDataState,TSizedDefaultAllocator<32>_> *param_2,
          TSortedMap<FName,Metasound::FAnyDataReference,TSizedDefaultAllocator<32>,FNameFastLess>
          *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  TTuple<FName,Metasound::FAnyDataReference> *pTVar5;
  ulonglong uVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FName *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res20 [8];
  
  pFVar12 = (param_1->AllocatorInstance).Data;
  uVar1 = param_1->ArrayNum;
  uVar6 = (ulonglong)(int)uVar1;
  pFVar10 = pFVar12 + 0x38;
  pFVar7 = pFVar12 + uVar6 * 0x58;
  do {
    if (param_1->ArrayNum != (int)uVar6) {
      `TCheckedPointerIterator<Metasound::VertexDataPrivate::FInputBinding_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (pFVar12 == pFVar7) {
      return;
    }
    if ((pFVar10[0x18] != (FScriptContainerElement)0x0) &&
       (pFVar10 != (FScriptContainerElement *)0x0)) {
      iVar2 = param_2->ArrayNum;
      pFVar8 = (param_2->AllocatorInstance).Data;
      pFVar9 = pFVar8 + (longlong)iVar2 * 0x10;
      while( true ) {
        if (param_2->ArrayNum != iVar2) {
          `TCheckedPointerIterator<Metasound::FVertexDataState_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res20);
        }
        if (pFVar8 == pFVar9) goto LAB_14ad2b4de;
        if (*(longlong *)pFVar8 == *(longlong *)(pFVar10 + -0x30)) break;
        pFVar8 = pFVar8 + 0x10;
      }
      if (pFVar10[0x18] == (FScriptContainerElement)0x0) {
        lVar4 = 0;
      }
      else {
        lVar4 = (**(code **)(*(longlong *)pFVar10 + 0x20))(pFVar10);
      }
      if (*(longlong *)(pFVar8 + 8) != lVar4) {
LAB_14ad2b4de:
        pFVar11 = (FName *)(pFVar10 + -0x30);
        pTVar5 = TSortedMap<FName,Metasound::FAnyDataReference,TSizedDefaultAllocator<32>,FNameFastLess>
                 ::AllocateMemoryForEmplace<FName_const_&>(param_3,pFVar11);
        uVar3 = pFVar11->Number;
        *(uint *)&pTVar5->field_0x0 = (pFVar11->ComparisonIndex).Value;
        *(uint *)&pTVar5->field_0x4 = uVar3;
        FAnyDataReference::FAnyDataReference
                  ((FAnyDataReference *)&pTVar5->field_0x8,(EDataReferenceAccessType)pFVar10[8],
                   *(IDataReference **)(pFVar10 + 0x10));
        *(undefined ***)&pTVar5->field_0x8 = &___7FAnyDataReference_Metasound__6B_;
      }
    }
    pFVar12 = pFVar12 + 0x58;
    uVar6 = (ulonglong)uVar1;
    pFVar10 = pFVar10 + 0x58;
  } while( true );
}

// CompareVertexInterfaceDataToPriorState<Metasound::VertexDataPrivate::FOutputBinding> @ 14ad2b550

void __cdecl
Metasound::VertexDataPrivate::
CompareVertexInterfaceDataToPriorState<Metasound::VertexDataPrivate::FOutputBinding>
          (TArray<Metasound::VertexDataPrivate::FOutputBinding,TSizedDefaultAllocator<32>_> *param_1
          ,TArray<Metasound::FVertexDataState,TSizedDefaultAllocator<32>_> *param_2,
          TSortedMap<FName,Metasound::FAnyDataReference,TSizedDefaultAllocator<32>,FNameFastLess>
          *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  TTuple<FName,Metasound::FAnyDataReference> *pTVar5;
  ulonglong uVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FName *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res20 [8];
  
  pFVar12 = (param_1->AllocatorInstance).Data;
  uVar1 = param_1->ArrayNum;
  uVar6 = (ulonglong)(int)uVar1;
  pFVar7 = pFVar12 + uVar6 * 0x40;
  pFVar10 = pFVar12 + 0x20;
  do {
    if (param_1->ArrayNum != (int)uVar6) {
      `TCheckedPointerIterator<Metasound::VertexDataPrivate::FOutputBinding_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (pFVar12 == pFVar7) {
      return;
    }
    if ((pFVar10[0x18] != (FScriptContainerElement)0x0) &&
       (pFVar10 != (FScriptContainerElement *)0x0)) {
      iVar2 = param_2->ArrayNum;
      pFVar8 = (param_2->AllocatorInstance).Data;
      pFVar9 = pFVar8 + (longlong)iVar2 * 0x10;
      while( true ) {
        if (param_2->ArrayNum != iVar2) {
          `TCheckedPointerIterator<Metasound::FVertexDataState_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res20);
        }
        if (pFVar8 == pFVar9) goto LAB_14ad2b620;
        if (*(longlong *)pFVar8 == *(longlong *)(pFVar10 + -0x18)) break;
        pFVar8 = pFVar8 + 0x10;
      }
      if (pFVar10[0x18] == (FScriptContainerElement)0x0) {
        lVar4 = 0;
      }
      else {
        lVar4 = (**(code **)(*(longlong *)pFVar10 + 0x20))(pFVar10);
      }
      if (*(longlong *)(pFVar8 + 8) != lVar4) {
LAB_14ad2b620:
        pFVar11 = (FName *)(pFVar10 + -0x18);
        pTVar5 = TSortedMap<FName,Metasound::FAnyDataReference,TSizedDefaultAllocator<32>,FNameFastLess>
                 ::AllocateMemoryForEmplace<FName_const_&>(param_3,pFVar11);
        uVar3 = pFVar11->Number;
        *(uint *)&pTVar5->field_0x0 = (pFVar11->ComparisonIndex).Value;
        *(uint *)&pTVar5->field_0x4 = uVar3;
        FAnyDataReference::FAnyDataReference
                  ((FAnyDataReference *)&pTVar5->field_0x8,(EDataReferenceAccessType)pFVar10[8],
                   *(IDataReference **)(pFVar10 + 0x10));
        *(undefined ***)&pTVar5->field_0x8 = &___7FAnyDataReference_Metasound__6B_;
      }
    }
    pFVar12 = pFVar12 + 0x40;
    uVar6 = (ulonglong)uVar1;
    pFVar10 = pFVar10 + 0x40;
  } while( true );
}

// ConstructItems<TTuple<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter>,TTuple<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter>,int> @ 14ad2b690

void __cdecl
ConstructItems<TTuple<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter>,TTuple<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter>,int>
          (void *param_1,TTuple<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter> *param_2,
          int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_3 != 0) {
    puVar5 = (undefined8 *)&param_2->field_0x18;
    puVar4 = (undefined8 *)((longlong)param_1 + 0x18);
    do {
      puVar1 = (undefined8 *)((longlong)puVar4 + (longlong)param_2 + (-0x18 - (longlong)param_1));
      uVar3 = puVar1[1];
      puVar4[-3] = *puVar1;
      puVar4[-2] = uVar3;
      puVar4[-1] = puVar5[-1];
      *puVar4 = *puVar5;
      lVar2 = puVar5[1];
      puVar4[1] = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      puVar5 = puVar5 + 5;
      puVar4 = puVar4 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<Metasound::FDataEdge,Metasound::FDataEdge,int> @ 14ad2b6e0

void __cdecl
ConstructItems<Metasound::FDataEdge,Metasound::FDataEdge,int>
          (void *param_1,FDataEdge *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x18);
    puVar2 = (undefined8 *)&(param_2->From).Vertex.field_0x10;
    do {
      *(undefined8 *)((longlong)param_1 + (-0x18 - (longlong)param_2) + (longlong)puVar2) =
           puVar2[-3];
      puVar1[-2] = &___7FDataVertex_Metasound__6B_;
      puVar1[-1] = puVar2[-1];
      *puVar1 = *puVar2;
      *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar2 + 1);
      puVar1[-2] = &___7FOutputDataVertex_Metasound__6B_;
      puVar1[2] = puVar2[2];
      puVar1[3] = &___7FDataVertex_Metasound__6B_;
      puVar1[4] = puVar2[4];
      puVar1[5] = puVar2[5];
      *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(puVar2 + 6);
      puVar1[3] = &___7FInputDataVertex_Metasound__6B_;
      TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
      ::
      TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  *)(puVar1 + 7),
                 (TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  *)(puVar2 + 7));
      puVar1 = puVar1 + 0xd;
      puVar2 = puVar2 + 0xd;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<Metasound::FInputDataDestination,Metasound::FInputDataDestination,int> @ 14ad2b7c0

void __cdecl
ConstructItems<Metasound::FInputDataDestination,Metasound::FInputDataDestination,int>
          (void *param_1,FInputDataDestination *param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_3 != 0) {
    plVar1 = &(param_2->Vertex)._padding_;
    plVar2 = (longlong *)((longlong)param_1 + 0x18);
    do {
      *(longlong *)((longlong)param_1 + (-0x18 - (longlong)param_2) + (longlong)plVar1) = plVar1[-3]
      ;
      plVar2[-2] = (longlong)&___7FDataVertex_Metasound__6B_;
      plVar2[-1] = plVar1[-1];
      *plVar2 = *plVar1;
      *(int *)(plVar2 + 1) = (int)plVar1[1];
      plVar2[-2] = (longlong)&___7FInputDataVertex_Metasound__6B_;
      TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
      ::
      TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  *)(plVar2 + 2),
                 (TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  *)(plVar1 + 2));
      plVar2 = plVar2 + 8;
      plVar1 = plVar1 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<Metasound::FOutputDataSource,Metasound::FOutputDataSource,int> @ 14ad2b870

void __cdecl
ConstructItems<Metasound::FOutputDataSource,Metasound::FOutputDataSource,int>
          (void *param_1,FOutputDataSource *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar1 = (undefined8 *)&(param_2->Vertex).field_0x10;
    puVar2 = (undefined8 *)((longlong)param_1 + 0x18);
    do {
      *(undefined8 *)((longlong)param_1 + (-0x18 - (longlong)param_2) + (longlong)puVar1) =
           puVar1[-3];
      puVar2[-2] = &___7FDataVertex_Metasound__6B_;
      puVar2[-1] = puVar1[-1];
      *puVar2 = *puVar1;
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar1 + 1);
      puVar2[-2] = &___7FOutputDataVertex_Metasound__6B_;
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 5;
      puVar2 = puVar2 + 5;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<Metasound::VertexPrivate::FSubInterfaceLayout,Metasound::VertexPrivate::FSubInterfaceLayout,int> @ 14ad2b8d0

void __cdecl
ConstructItems<Metasound::VertexPrivate::FSubInterfaceLayout,Metasound::VertexPrivate::FSubInterfaceLayout,int>
          (void *param_1,FSubInterfaceLayout *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  FSubInterfaceLayout *pFVar3;
  ForAnyElementType *pFVar4;
  TArray<Metasound::VertexPrivate::FSubInterfaceLayout::FInstance,TSizedDefaultAllocator<32>_>
  *pTVar5;
  
  if (param_3 != 0) {
    pFVar4 = (ForAnyElementType *)((longlong)param_1 + 8);
    pFVar3 = param_2;
    do {
      pTVar5 = &pFVar3->Instances;
      *(undefined8 *)((longlong)param_1 + (-8 - (longlong)param_2) + (longlong)pTVar5) =
           *(undefined8 *)((longlong)(pTVar5 + -1) + 8);
      piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
      pFVar4->Data = (FScriptContainerElement *)0x0;
      iVar2 = pTVar5->ArrayNum;
      _Src = (pTVar5->AllocatorInstance).Data;
      *(int *)&pFVar4[1].Data = iVar2;
      if (iVar2 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,iVar2,0,pFVar4,iVar2,piVar1);
        memcpy(pFVar4->Data,_Src,(longlong)iVar2 << 3);
      }
      pFVar3 = (FSubInterfaceLayout *)(pTVar5 + 1);
      pFVar4 = pFVar4 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<Metasound::FEnvironmentVertex,Metasound::FEnvironmentVertex,int> @ 14ad2b9a0

void __cdecl
ConstructItems<Metasound::FEnvironmentVertex,Metasound::FEnvironmentVertex,int>
          (void *param_1,FEnvironmentVertex *param_2,int param_3)

{
  FName FVar1;
  FName *pFVar2;
  
  if (param_3 != 0) {
    pFVar2 = &param_2->VertexName;
    do {
      *(undefined ***)param_1 = &___7FEnvironmentVertex_Metasound__6B_;
      FVar1 = *pFVar2;
      pFVar2 = pFVar2 + 2;
      *(FName *)((longlong)param_1 + 8) = FVar1;
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x10);
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<Metasound::VertexDataPrivate::FInputBinding,Metasound::VertexDataPrivate::FInputBinding,int> @ 14ad2b9d0

void __cdecl
ConstructItems<Metasound::VertexDataPrivate::FInputBinding,Metasound::VertexDataPrivate::FInputBinding,int>
          (void *param_1,FInputBinding *param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  longlong *plVar3;
  
  if (param_3 != 0) {
    pcVar2 = (char *)((longlong)param_1 + 0x50);
    plVar3 = &(param_2->Vertex)._padding_;
    do {
      *(undefined ***)(pcVar2 + -0x50) = &___7FDataVertex_Metasound__6B_;
      *(longlong *)(pcVar2 + -0x48) = plVar3[-1];
      *(longlong *)(pcVar2 + -0x40) = *plVar3;
      *(int *)(pcVar2 + -0x38) = (int)plVar3[1];
      *(undefined ***)(pcVar2 + -0x50) = &___7FInputDataVertex_Metasound__6B_;
      TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
      ::
      TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  *)(pcVar2 + -0x30),
                 (TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  *)(plVar3 + 2));
      *pcVar2 = '\0';
      cVar1 = *(char *)(plVar3 + 8);
      *pcVar2 = cVar1;
      if (cVar1 != '\0') {
        Metasound::FAnyDataReference::FAnyDataReference
                  ((FAnyDataReference *)(pcVar2 + -0x18),*(EDataReferenceAccessType *)(plVar3 + 6),
                   (IDataReference *)plVar3[7]);
        *(undefined ***)(pcVar2 + -0x18) = &___7FAnyDataReference_Metasound__6B_;
      }
      plVar3 = plVar3 + 0xb;
      pcVar2 = pcVar2 + 0x58;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<Metasound::FInputDataVertex,Metasound::FInputDataVertex,int> @ 14ad2bab0

void __cdecl
ConstructItems<Metasound::FInputDataVertex,Metasound::FInputDataVertex,int>
          (void *param_1,FInputDataVertex *param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_3 != 0) {
    plVar1 = &param_2->_padding_;
    plVar2 = (longlong *)((longlong)param_1 + 0x10);
    do {
      *(undefined ***)((longlong)plVar1 + (longlong)param_1 + (-0x10 - (longlong)param_2)) =
           &___7FDataVertex_Metasound__6B_;
      plVar2[-1] = plVar1[-1];
      *plVar2 = *plVar1;
      *(int *)(plVar2 + 1) = (int)plVar1[1];
      *(undefined ***)((longlong)plVar1 + (longlong)param_1 + (-0x10 - (longlong)param_2)) =
           &___7FInputDataVertex_Metasound__6B_;
      TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
      ::
      TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  *)(plVar2 + 2),
                 (TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  *)(plVar1 + 2));
      plVar2 = plVar2 + 7;
      plVar1 = plVar1 + 7;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<Metasound::VertexDataPrivate::FOutputBinding,Metasound::VertexDataPrivate::FOutputBinding,int> @ 14ad2bb50

void __cdecl
ConstructItems<Metasound::VertexDataPrivate::FOutputBinding,Metasound::VertexDataPrivate::FOutputBinding,int>
          (void *param_1,FOutputBinding *param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    pcVar2 = (char *)((longlong)param_1 + 0x38);
    puVar3 = (undefined8 *)&(param_2->Vertex).field_0x10;
    do {
      *(undefined ***)(pcVar2 + -0x38) = &___7FDataVertex_Metasound__6B_;
      *(undefined8 *)(pcVar2 + -0x30) = puVar3[-1];
      *(undefined8 *)(pcVar2 + -0x28) = *puVar3;
      *(undefined4 *)(pcVar2 + -0x20) = *(undefined4 *)(puVar3 + 1);
      *(undefined ***)(pcVar2 + -0x38) = &___7FOutputDataVertex_Metasound__6B_;
      *pcVar2 = '\0';
      cVar1 = *(char *)(puVar3 + 5);
      *pcVar2 = cVar1;
      if (cVar1 != '\0') {
        Metasound::FAnyDataReference::FAnyDataReference
                  ((FAnyDataReference *)(pcVar2 + -0x18),*(EDataReferenceAccessType *)(puVar3 + 3),
                   (IDataReference *)puVar3[4]);
        *(undefined ***)(pcVar2 + -0x18) = &___7FAnyDataReference_Metasound__6B_;
      }
      puVar3 = puVar3 + 8;
      pcVar2 = pcVar2 + 0x40;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<Metasound::FOutputDataVertex,Metasound::FOutputDataVertex,int> @ 14ad2bc20

void __cdecl
ConstructItems<Metasound::FOutputDataVertex,Metasound::FOutputDataVertex,int>
          (void *param_1,FOutputDataVertex *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar1 = (undefined8 *)&param_2->field_0x10;
    puVar2 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      *(undefined ***)((longlong)puVar1 + (longlong)param_1 + (-0x10 - (longlong)param_2)) =
           &___7FDataVertex_Metasound__6B_;
      puVar2[-1] = puVar1[-1];
      *puVar2 = *puVar1;
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar1 + 1);
      *(undefined ***)((longlong)puVar1 + (longlong)param_1 + (-0x10 - (longlong)param_2)) =
           &___7FOutputDataVertex_Metasound__6B_;
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 4;
      puVar2 = puVar2 + 4;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<Metasound::VertexPrivate::FSubInterfaceLayout::FInstance,int> @ 14ad2bd10

void __cdecl
DefaultConstructItems<Metasound::VertexPrivate::FSubInterfaceLayout::FInstance,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    param_1 = (void *)((longlong)param_1 + 8);
  }
  return;
}

// DefaultConstructItems<Metasound::DirectedGraphAlgo::FStronglyConnectedComponent,int> @ 14ad2bd40

void __cdecl
DefaultConstructItems<Metasound::DirectedGraphAlgo::FStronglyConnectedComponent,int>
          (void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      lVar1 = lVar1 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter>,int> @ 14ad2bda0

void __cdecl
DestructItems<TTuple<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter>,int>
          (TTuple<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter> *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x20;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)*puVar1);
      puVar1 = puVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID,TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>_>,int> @ 14ad2bde0

void __cdecl
DestructItems<TTuple<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID,TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>_>,int>
          (TTuple<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID,TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>_>
           *param_1,int param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)&param_1->field_0x18;
    do {
      puVar1 = (undefined8 *)*plVar2;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      plVar2 = plVar2 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>_>,int> @ 14ad2be20

void __cdecl
DestructItems<TTuple<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>_>,int>
          (TTuple<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>_>
           *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x8;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>,int> @ 14ad2be60

void __cdecl
DestructItems<TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>,int>
          (TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>
           *param_1,int param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)&param_1->field_0x8;
    do {
      puVar1 = (undefined8 *)*plVar2;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      plVar2 = plVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<FName,Metasound::FAnyDataReference>,int> @ 14ad2bea0

void __cdecl
DestructItems<TTuple<FName,Metasound::FAnyDataReference>,int>
          (TTuple<FName,Metasound::FAnyDataReference> *param_1,int param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)&param_1->field_0x18;
    do {
      puVar1 = (undefined8 *)*plVar2;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      plVar2 = plVar2 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo>,int> @ 14ad2bee0

void __cdecl
DestructItems<TTuple<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo>,int>
          (TTuple<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo>
           *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_2 != 0) {
    puVar2 = (undefined8 *)&param_1->field_0x68;
    do {
      DestructItems<TTuple<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>_>,int>
                ((TTuple<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>_>
                  *)*puVar2,*(int *)(puVar2 + 1));
      if ((void *)*puVar2 != (void *)0x0) {
        FMemory::Free((void *)*puVar2);
      }
      Metasound::FVertexInterfaceData::~FVertexInterfaceData((FVertexInterfaceData *)(puVar2 + -10))
      ;
      puVar1 = (undefined8 *)puVar2[-0xb];
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      puVar2 = puVar2 + 0xf;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<Metasound::FDataEdge,int> @ 14ad2bf50

void __cdecl DestructItems<Metasound::FDataEdge,int>(FDataEdge *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  FLiteral *pFVar3;
  ulonglong uVar4;
  
  if (param_2 != 0) {
    pFVar3 = &(param_1->To).Vertex.Literal;
    do {
      uVar4 = (ulonglong)(pFVar3->Value).TypeIndex;
      if ((0xc < uVar4) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar4])(pFVar3);
      pFVar3 = (FLiteral *)((longlong)(pFVar3 + 4) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<Metasound::FInputDataDestination,int> @ 14ad2bfe0

void __cdecl
DestructItems<Metasound::FInputDataDestination,int>(FInputDataDestination *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  FLiteral *pFVar3;
  ulonglong uVar4;
  
  if (param_2 != 0) {
    pFVar3 = &(param_1->Vertex).Literal;
    do {
      uVar4 = (ulonglong)(pFVar3->Value).TypeIndex;
      if ((0xc < uVar4) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar4])(pFVar3);
      pFVar3 = (FLiteral *)((longlong)(pFVar3 + 2) + 0x10);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<`Metasound::DynamicGraph::PropagateBindUpdate'::__l2::FInputToUpdate,int> @ 14ad2c070

void __cdecl
DestructItems<_Metasound::DynamicGraph::PropagateBindUpdate_::__l2::FInputToUpdate,int>
          (FInputToUpdate *param_1,int param_2)

{
  IDataReference *pIVar1;
  TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &(param_1->DataReference).DataRefPtr;
    do {
      pIVar1 = pTVar2->Ptr;
      if (pIVar1 != (IDataReference *)0x0) {
        (**(code **)*pIVar1)(pIVar1,1);
      }
      pTVar2 = pTVar2 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<Metasound::DirectedGraphAlgo::FStronglyConnectedComponent,int> @ 14ad2c0b0

void __cdecl
DestructItems<Metasound::DirectedGraphAlgo::FStronglyConnectedComponent,int>
          (FStronglyConnectedComponent *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<Metasound::FDataEdge,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Edges;
    do {
      DestructItems<Metasound::FDataEdge,int>
                ((FDataEdge *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FStronglyConnectedComponent *)(pTVar2 + -1))->Nodes).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::MathCore::Graph::FStronglyConnectedComponent,int> @ 14ad2c110

void __cdecl
DestructItems<UE::MathCore::Graph::FStronglyConnectedComponent,int>
          (FStronglyConnectedComponent *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Edges).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->Vertices).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int> @ 14ad2c160

void __cdecl
DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
          (FSubInterfaceLayout *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Instances).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = (FSubInterfaceLayout *)(&param_1->Instances + 1);
  }
  return;
}

// DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int> @ 14ad2c1a0

void __cdecl
DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
          (TDataReadReference<Metasound::FAudioBuffer> *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x10;
    do {
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)*puVar1);
      puVar1 = puVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,int> @ 14ad2c1e0

void __cdecl
DestructItems<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,int>
          (TDataWriteReference<Metasound::FAudioBuffer> *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x10;
    do {
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)*puVar1);
      puVar1 = puVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,int> @ 14ad2c220

void __cdecl
DestructItems<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,int>
          (TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
           *param_1,int param_2)

{
  IDynamicOperatorTransform *pIVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pIVar1 = param_1->Ptr;
    if (pIVar1 != (IDynamicOperatorTransform *)0x0) {
      (**(code **)*pIVar1)(pIVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>,int> @ 14ad2c260

void __cdecl
DestructItems<TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>,int>
          (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> *param_1,
          int param_2)

{
  IOperator *pIVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pIVar1 = param_1->Ptr;
    if (pIVar1 != (IOperator *)0x0) {
      (**(code **)*pIVar1)(pIVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<Metasound::IOperatorBuildError,TDefaultDelete<Metasound::IOperatorBuildError>_>,int> @ 14ad2c2a0

void __cdecl
DestructItems<TUniquePtr<Metasound::IOperatorBuildError,TDefaultDelete<Metasound::IOperatorBuildError>_>,int>
          (TUniquePtr<Metasound::IOperatorBuildError,TDefaultDelete<Metasound::IOperatorBuildError>_>
           *param_1,int param_2)

{
  IOperatorBuildError *pIVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pIVar1 = param_1->Ptr;
    if (pIVar1 != (IOperatorBuildError *)0x0) {
      (**(code **)*pIVar1)(pIVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<Metasound::VertexDataPrivate::FInputBinding,int> @ 14ad2c2e0

void __cdecl
DestructItems<Metasound::VertexDataPrivate::FInputBinding,int>(FInputBinding *param_1,int param_2)

{
  byte bVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  bool bVar4;
  bool *pbVar5;
  
  if (param_2 != 0) {
    pbVar5 = &(param_1->Data).bIsSet;
    do {
      if ((*pbVar5 != false) &&
         (pIVar2 = ((TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_>
                     *)(pbVar5 + -8))->Ptr, pIVar2 != (IDataReference *)0x0)) {
        (**(code **)*pIVar2)(pIVar2,1);
      }
      bVar1 = pbVar5[-0x20];
      if ((0xc < (ulonglong)bVar1) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[bVar1])(pbVar5 + -0x30);
      pbVar5 = pbVar5 + 0x58;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<Metasound::FInputDataVertex,int> @ 14ad2c390

void __cdecl DestructItems<Metasound::FInputDataVertex,int>(FInputDataVertex *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  FLiteral *pFVar3;
  ulonglong uVar4;
  
  if (param_2 != 0) {
    pFVar3 = &param_1->Literal;
    do {
      uVar4 = (ulonglong)(pFVar3->Value).TypeIndex;
      if ((0xc < uVar4) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar4])(pFVar3);
      pFVar3 = (FLiteral *)((longlong)(pFVar3 + 2) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<Metasound::VertexDataPrivate::FOutputBinding,int> @ 14ad2c420

void __cdecl
DestructItems<Metasound::VertexDataPrivate::FOutputBinding,int>(FOutputBinding *param_1,int param_2)

{
  IDataReference *pIVar1;
  TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &(param_1->Data).TypedValue.DataRefPtr;
    do {
      if ((*(char *)(pTVar2 + 1) != '\0') && (pIVar1 = pTVar2->Ptr, pIVar1 != (IDataReference *)0x0)
         ) {
        (**(code **)*pIVar1)(pIVar1,1);
      }
      pTVar2 = pTVar2 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// EmplaceBindings<Metasound::FInputDataVertex> @ 14ad2de10

void __cdecl
Metasound::VertexDataPrivate::EmplaceBindings<Metasound::FInputDataVertex>
          (TArray<Metasound::VertexDataPrivate::FInputBinding,TSizedDefaultAllocator<32>_> *param_1,
          TVertexInterfaceImpl<Metasound::FInputDataVertex> *param_2)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res10 [8];
  
  iVar1 = (param_2->Vertices).ArrayNum;
  pFVar5 = (param_2->Vertices).AllocatorInstance.Data;
  pFVar4 = pFVar5 + (longlong)iVar1 * 0x38;
  while( true ) {
    if ((param_2->Vertices).ArrayNum != iVar1) {
      `TCheckedPointerIterator<Metasound::FInputDataVertex_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar5 == pFVar4) break;
    iVar2 = param_1->ArrayNum;
    if (iVar2 == param_1->ArrayMax) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x858,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar2 + 1;
    pFVar3 = (param_1->AllocatorInstance).Data + (longlong)iVar2 * 0x58;
    *(undefined ***)pFVar3 = &___7FDataVertex_Metasound__6B_;
    *(undefined8 *)(pFVar3 + 8) = *(undefined8 *)(pFVar5 + 8);
    *(undefined8 *)(pFVar3 + 0x10) = *(undefined8 *)(pFVar5 + 0x10);
    *(undefined4 *)(pFVar3 + 0x18) = *(undefined4 *)(pFVar5 + 0x18);
    *(undefined ***)pFVar3 = &___7FInputDataVertex_Metasound__6B_;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)(pFVar3 + 0x20),
               (TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)(pFVar5 + 0x20));
    pFVar5 = pFVar5 + 0x38;
    pFVar3[0x50] = (FScriptContainerElement)0x0;
  }
  return;
}

// EmplaceBindings<Metasound::FOutputDataVertex> @ 14ad2def0

void __cdecl
Metasound::VertexDataPrivate::EmplaceBindings<Metasound::FOutputDataVertex>
          (TArray<Metasound::VertexDataPrivate::FOutputBinding,TSizedDefaultAllocator<32>_> *param_1
          ,TVertexInterfaceImpl<Metasound::FOutputDataVertex> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res10 [8];
  
  iVar2 = (param_2->Vertices).ArrayNum;
  pFVar5 = (param_2->Vertices).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar2 * 0x20;
  while( true ) {
    if ((param_2->Vertices).ArrayNum != iVar2) {
      `TCheckedPointerIterator<Metasound::FOutputDataVertex_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar5 == pFVar6) break;
    iVar3 = param_1->ArrayNum;
    if (iVar3 == param_1->ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x840,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar3 + 1;
    pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x40;
    *(undefined ***)pFVar4 = &___7FDataVertex_Metasound__6B_;
    *(undefined8 *)(pFVar4 + 8) = *(undefined8 *)(pFVar5 + 8);
    *(undefined8 *)(pFVar4 + 0x10) = *(undefined8 *)(pFVar5 + 0x10);
    pFVar1 = pFVar5 + 0x18;
    pFVar5 = pFVar5 + 0x20;
    *(undefined4 *)(pFVar4 + 0x18) = *(undefined4 *)pFVar1;
    *(undefined ***)pFVar4 = &___7FOutputDataVertex_Metasound__6B_;
    pFVar4[0x38] = (FScriptContainerElement)0x0;
  }
  return;
}

// EnsureIfDynamicGraphOperatorDataTableIsCorrupt<Metasound::DynamicGraph::FExecuteEntry> @ 14ad2dfc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014ad2e0d3) */
/* WARNING: Removing unreachable block (ram,0x00014ad2e0f8) */
/* WARNING: Removing unreachable block (ram,0x00014ad2e117) */
/* WARNING: Removing unreachable block (ram,0x00014ad2e13c) */
/* WARNING: Removing unreachable block (ram,0x00014ad2e15b) */
/* WARNING: Removing unreachable block (ram,0x00014ad2e187) */

void __cdecl
Metasound::DynamicGraph::Debug::
EnsureIfDynamicGraphOperatorDataTableIsCorrupt<Metasound::DynamicGraph::FExecuteEntry>
          (FDynamicGraphOperatorData *param_1,
          TArray<Metasound::DynamicGraph::FExecuteEntry,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  code *pcVar2;
  FDynamicGraphOperatorData *pFVar3;
  bool bVar4;
  FOperatorInfo *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 auStackY_178 [32];
  undefined1 local_147 [3];
  int local_144;
  undefined1 local_140 [8];
  FDynamicGraphOperatorData *local_138;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_128;
  TSet<Metasound::IOperator_const_*,DefaultKeyFuncs<Metasound::IOperator_const_*,0>,FDefaultSetAllocator>
  local_d8;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
  iVar1 = param_2->ArrayNum;
  pFVar6 = (param_2->AllocatorInstance).Data;
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x20;
  local_88.Elements._0_8_ = 0;
  local_88.Elements._8_8_ = 0;
  local_88.Elements._32_8_ = 0;
  local_88.Elements._40_4_ = 0;
  local_88.Elements._44_4_ = 0x80;
  local_88.Elements._48_4_ = 0xffffffff;
  local_88.Elements._52_4_ = 0;
  local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_88.HashSize = 0;
  local_d8.Elements._0_8_ = 0;
  local_d8.Elements._8_8_ = 0;
  local_d8.Elements._32_8_ = 0;
  local_d8.Elements._40_4_ = 0;
  local_d8.Elements._44_4_ = 0x80;
  local_d8.Elements._48_4_ = 0xffffffff;
  local_d8.Elements._52_4_ = 0;
  local_d8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_d8.HashSize = 0;
  local_128.Elements._0_8_ = 0;
  local_128.Elements._8_8_ = 0;
  local_128.Elements._32_8_ = 0;
  local_128.Elements._40_4_ = 0;
  local_128.Elements._44_4_ = 0x80;
  local_128.Elements._48_4_ = 0xffffffff;
  local_128.Elements._52_4_ = 0;
  local_128.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_128.HashSize = 0;
  local_138 = param_1;
  while( true ) {
    pFVar3 = local_138;
    if (param_2->ArrayNum != iVar1) {
      local_147[0] = 0;
      `TCheckedPointerIterator<Metasound::DynamicGraph::FExecuteEntry_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_147);
    }
    if (pFVar6 == pFVar7) {
      local_128.HashSize = 0;
      if (local_128.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_128.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_128.Elements);
      local_d8.HashSize = 0;
      if (local_d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_d8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<Metasound::IOperator_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<Metasound::IOperator_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_d8.Elements);
      local_88.HashSize = 0;
      if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_88.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_88.Elements);
      return;
    }
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&local_128,&local_144,(bool *)pFVar6);
    TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
    Emplace<unsigned___int64_const_&>(&local_88,(ulong64 *)local_140,(bool *)(pFVar6 + 8));
    TSet<Metasound::IOperator_const_*,DefaultKeyFuncs<Metasound::IOperator_const_*,0>,FDefaultSetAllocator>
    ::Emplace<Metasound::IOperator_const_*_const_&>
              (&local_d8,(IOperator **)(local_140 + 4),(bool *)(pFVar6 + 0x10));
    if ((*(longlong *)(pFVar6 + 0x18) == 0) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_900542749483204014>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicGraphAlgo.cpp"
                           ,0x252,"nullptr != Entry.Function"), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar5 = TSortedMap<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
             ::Find((TSortedMap<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
                     *)&pFVar3->_padding_,*(ulong64 *)(pFVar6 + 8));
    if ((pFVar5 == (FOperatorInfo *)0x0) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_900542749483204012>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicGraphAlgo.cpp"
                           ,0x254,"InData.OperatorMap.Contains(Entry.OperatorID)"), bVar4)) break;
    pFVar5 = TSortedMap<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
             ::Find((TSortedMap<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
                     *)&pFVar3->_padding_,*(ulong64 *)(pFVar6 + 8));
    if ((pFVar5 == (FOperatorInfo *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((pFVar5->Ordinal != *(int *)pFVar6) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_900542749483204010>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicGraphAlgo.cpp"
                           ,0x256,"Info.Ordinal == Entry.Ordinal"), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (((pFVar5->Operator).Ptr != *(IOperator **)(pFVar6 + 0x10)) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_900542749483204009>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicGraphAlgo.cpp"
                           ,599,"Info.Operator.Get() == Entry.Operator"), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar6 = pFVar6 + 0x20;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// EnsureIfDynamicGraphOperatorDataTableIsCorrupt<Metasound::DynamicGraph::FPostExecuteEntry> @ 14ad2e330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014ad2e443) */
/* WARNING: Removing unreachable block (ram,0x00014ad2e468) */
/* WARNING: Removing unreachable block (ram,0x00014ad2e487) */
/* WARNING: Removing unreachable block (ram,0x00014ad2e4ac) */
/* WARNING: Removing unreachable block (ram,0x00014ad2e4cb) */
/* WARNING: Removing unreachable block (ram,0x00014ad2e4f7) */

void __cdecl
Metasound::DynamicGraph::Debug::
EnsureIfDynamicGraphOperatorDataTableIsCorrupt<Metasound::DynamicGraph::FPostExecuteEntry>
          (FDynamicGraphOperatorData *param_1,
          TArray<Metasound::DynamicGraph::FPostExecuteEntry,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  code *pcVar2;
  FDynamicGraphOperatorData *pFVar3;
  bool bVar4;
  FOperatorInfo *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 auStackY_178 [32];
  undefined1 local_147 [3];
  int local_144;
  undefined1 local_140 [8];
  FDynamicGraphOperatorData *local_138;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_128;
  TSet<Metasound::IOperator_const_*,DefaultKeyFuncs<Metasound::IOperator_const_*,0>,FDefaultSetAllocator>
  local_d8;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
  iVar1 = param_2->ArrayNum;
  pFVar6 = (param_2->AllocatorInstance).Data;
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x20;
  local_88.Elements._0_8_ = 0;
  local_88.Elements._8_8_ = 0;
  local_88.Elements._32_8_ = 0;
  local_88.Elements._40_4_ = 0;
  local_88.Elements._44_4_ = 0x80;
  local_88.Elements._48_4_ = 0xffffffff;
  local_88.Elements._52_4_ = 0;
  local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_88.HashSize = 0;
  local_d8.Elements._0_8_ = 0;
  local_d8.Elements._8_8_ = 0;
  local_d8.Elements._32_8_ = 0;
  local_d8.Elements._40_4_ = 0;
  local_d8.Elements._44_4_ = 0x80;
  local_d8.Elements._48_4_ = 0xffffffff;
  local_d8.Elements._52_4_ = 0;
  local_d8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_d8.HashSize = 0;
  local_128.Elements._0_8_ = 0;
  local_128.Elements._8_8_ = 0;
  local_128.Elements._32_8_ = 0;
  local_128.Elements._40_4_ = 0;
  local_128.Elements._44_4_ = 0x80;
  local_128.Elements._48_4_ = 0xffffffff;
  local_128.Elements._52_4_ = 0;
  local_128.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_128.HashSize = 0;
  local_138 = param_1;
  while( true ) {
    pFVar3 = local_138;
    if (param_2->ArrayNum != iVar1) {
      local_147[0] = 0;
      `TCheckedPointerIterator<Metasound::DynamicGraph::FPostExecuteEntry_const_,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_147);
    }
    if (pFVar6 == pFVar7) {
      local_128.HashSize = 0;
      if (local_128.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_128.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_128.Elements);
      local_d8.HashSize = 0;
      if (local_d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_d8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<Metasound::IOperator_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<Metasound::IOperator_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_d8.Elements);
      local_88.HashSize = 0;
      if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_88.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_88.Elements);
      return;
    }
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&local_128,&local_144,(bool *)pFVar6);
    TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
    Emplace<unsigned___int64_const_&>(&local_88,(ulong64 *)local_140,(bool *)(pFVar6 + 8));
    TSet<Metasound::IOperator_const_*,DefaultKeyFuncs<Metasound::IOperator_const_*,0>,FDefaultSetAllocator>
    ::Emplace<Metasound::IOperator_const_*_const_&>
              (&local_d8,(IOperator **)(local_140 + 4),(bool *)(pFVar6 + 0x10));
    if ((*(longlong *)(pFVar6 + 0x18) == 0) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_900542749483204014>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicGraphAlgo.cpp"
                           ,0x252,"nullptr != Entry.Function"), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar5 = TSortedMap<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
             ::Find((TSortedMap<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
                     *)&pFVar3->_padding_,*(ulong64 *)(pFVar6 + 8));
    if ((pFVar5 == (FOperatorInfo *)0x0) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_900542749483204012>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicGraphAlgo.cpp"
                           ,0x254,"InData.OperatorMap.Contains(Entry.OperatorID)"), bVar4)) break;
    pFVar5 = TSortedMap<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
             ::Find((TSortedMap<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
                     *)&pFVar3->_padding_,*(ulong64 *)(pFVar6 + 8));
    if ((pFVar5 == (FOperatorInfo *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((pFVar5->Ordinal != *(int *)pFVar6) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_900542749483204010>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicGraphAlgo.cpp"
                           ,0x256,"Info.Ordinal == Entry.Ordinal"), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (((pFVar5->Operator).Ptr != *(IOperator **)(pFVar6 + 0x10)) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_900542749483204009>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicGraphAlgo.cpp"
                           ,599,"Info.Operator.Get() == Entry.Operator"), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar6 = pFVar6 + 0x20;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// EnsureIfDynamicGraphOperatorDataTableIsCorrupt<Metasound::DynamicGraph::FResetEntry> @ 14ad2e6a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014ad2e7b3) */
/* WARNING: Removing unreachable block (ram,0x00014ad2e7d8) */
/* WARNING: Removing unreachable block (ram,0x00014ad2e7f7) */
/* WARNING: Removing unreachable block (ram,0x00014ad2e81c) */
/* WARNING: Removing unreachable block (ram,0x00014ad2e83b) */
/* WARNING: Removing unreachable block (ram,0x00014ad2e867) */

void __cdecl
Metasound::DynamicGraph::Debug::
EnsureIfDynamicGraphOperatorDataTableIsCorrupt<Metasound::DynamicGraph::FResetEntry>
          (FDynamicGraphOperatorData *param_1,
          TArray<Metasound::DynamicGraph::FResetEntry,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  code *pcVar2;
  FDynamicGraphOperatorData *pFVar3;
  bool bVar4;
  FOperatorInfo *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 auStackY_178 [32];
  undefined1 local_147 [3];
  int local_144;
  undefined1 local_140 [8];
  FDynamicGraphOperatorData *local_138;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_128;
  TSet<Metasound::IOperator_const_*,DefaultKeyFuncs<Metasound::IOperator_const_*,0>,FDefaultSetAllocator>
  local_d8;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
  iVar1 = param_2->ArrayNum;
  pFVar6 = (param_2->AllocatorInstance).Data;
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x20;
  local_88.Elements._0_8_ = 0;
  local_88.Elements._8_8_ = 0;
  local_88.Elements._32_8_ = 0;
  local_88.Elements._40_4_ = 0;
  local_88.Elements._44_4_ = 0x80;
  local_88.Elements._48_4_ = 0xffffffff;
  local_88.Elements._52_4_ = 0;
  local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_88.HashSize = 0;
  local_d8.Elements._0_8_ = 0;
  local_d8.Elements._8_8_ = 0;
  local_d8.Elements._32_8_ = 0;
  local_d8.Elements._40_4_ = 0;
  local_d8.Elements._44_4_ = 0x80;
  local_d8.Elements._48_4_ = 0xffffffff;
  local_d8.Elements._52_4_ = 0;
  local_d8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_d8.HashSize = 0;
  local_128.Elements._0_8_ = 0;
  local_128.Elements._8_8_ = 0;
  local_128.Elements._32_8_ = 0;
  local_128.Elements._40_4_ = 0;
  local_128.Elements._44_4_ = 0x80;
  local_128.Elements._48_4_ = 0xffffffff;
  local_128.Elements._52_4_ = 0;
  local_128.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_128.HashSize = 0;
  local_138 = param_1;
  while( true ) {
    pFVar3 = local_138;
    if (param_2->ArrayNum != iVar1) {
      local_147[0] = 0;
      `TCheckedPointerIterator<Metasound::DynamicGraph::FResetEntry_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_147);
    }
    if (pFVar6 == pFVar7) {
      local_128.HashSize = 0;
      if (local_128.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_128.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_128.Elements);
      local_d8.HashSize = 0;
      if (local_d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_d8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<Metasound::IOperator_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<Metasound::IOperator_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_d8.Elements);
      local_88.HashSize = 0;
      if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_88.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_88.Elements);
      return;
    }
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&local_128,&local_144,(bool *)pFVar6);
    TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
    Emplace<unsigned___int64_const_&>(&local_88,(ulong64 *)local_140,(bool *)(pFVar6 + 8));
    TSet<Metasound::IOperator_const_*,DefaultKeyFuncs<Metasound::IOperator_const_*,0>,FDefaultSetAllocator>
    ::Emplace<Metasound::IOperator_const_*_const_&>
              (&local_d8,(IOperator **)(local_140 + 4),(bool *)(pFVar6 + 0x10));
    if ((*(longlong *)(pFVar6 + 0x18) == 0) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_900542749483204014>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicGraphAlgo.cpp"
                           ,0x252,"nullptr != Entry.Function"), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar5 = TSortedMap<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
             ::Find((TSortedMap<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
                     *)&pFVar3->_padding_,*(ulong64 *)(pFVar6 + 8));
    if ((pFVar5 == (FOperatorInfo *)0x0) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_900542749483204012>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicGraphAlgo.cpp"
                           ,0x254,"InData.OperatorMap.Contains(Entry.OperatorID)"), bVar4)) break;
    pFVar5 = TSortedMap<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
             ::Find((TSortedMap<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
                     *)&pFVar3->_padding_,*(ulong64 *)(pFVar6 + 8));
    if ((pFVar5 == (FOperatorInfo *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((pFVar5->Ordinal != *(int *)pFVar6) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_900542749483204010>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicGraphAlgo.cpp"
                           ,0x256,"Info.Ordinal == Entry.Ordinal"), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (((pFVar5->Operator).Ptr != *(IOperator **)(pFVar6 + 0x10)) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_900542749483204009>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicGraphAlgo.cpp"
                           ,599,"Info.Operator.Get() == Entry.Operator"), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar6 = pFVar6 + 0x20;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// Find<Metasound::VertexDataPrivate::FInputBinding> @ 14ad2ea10

FInputBinding * __cdecl
Metasound::VertexDataPrivate::Find<Metasound::VertexDataPrivate::FInputBinding>
          (TArray<Metasound::VertexDataPrivate::FInputBinding,TSizedDefaultAllocator<32>_> *param_1,
          FName *param_2)

{
  FInputBinding *pFVar1;
  FInputBinding *pFVar2;
  
  pFVar1 = (FInputBinding *)(param_1->AllocatorInstance).Data;
  pFVar2 = pFVar1 + param_1->ArrayNum;
  if (pFVar1 != pFVar2) {
    do {
      if ((FName)(pFVar1->Vertex)._padding_ == *param_2) {
        return pFVar1;
      }
      pFVar1 = pFVar1 + 1;
    } while (pFVar1 != pFVar2);
  }
  return (FInputBinding *)0x0;
}

// Find<Metasound::VertexDataPrivate::FInputBinding> @ 14ad2ea40

FInputBinding * __cdecl
Metasound::VertexDataPrivate::Find<Metasound::VertexDataPrivate::FInputBinding>
          (TArray<Metasound::VertexDataPrivate::FInputBinding,TSizedDefaultAllocator<32>_> *param_1,
          FName *param_2)

{
  FInputBinding *pFVar1;
  FInputBinding *pFVar2;
  
  pFVar1 = (FInputBinding *)(param_1->AllocatorInstance).Data;
  pFVar2 = pFVar1 + param_1->ArrayNum;
  if (pFVar1 != pFVar2) {
    do {
      if ((FName)(pFVar1->Vertex)._padding_ == *param_2) {
        return pFVar1;
      }
      pFVar1 = pFVar1 + 1;
    } while (pFVar1 != pFVar2);
  }
  return (FInputBinding *)0x0;
}

// Find<Metasound::VertexDataPrivate::FOutputBinding> @ 14ad2ea70

FOutputBinding * __cdecl
Metasound::VertexDataPrivate::Find<Metasound::VertexDataPrivate::FOutputBinding>
          (TArray<Metasound::VertexDataPrivate::FOutputBinding,TSizedDefaultAllocator<32>_> *param_1
          ,FName *param_2)

{
  FName FVar1;
  FOutputBinding *pFVar2;
  FOutputBinding *pFVar3;
  
  pFVar2 = (FOutputBinding *)(param_1->AllocatorInstance).Data;
  pFVar3 = pFVar2 + param_1->ArrayNum;
  if (pFVar2 != pFVar3) {
    do {
      FVar1.ComparisonIndex.Value = *(uint *)&(pFVar2->Vertex).field_0x8;
      FVar1.Number = *(uint *)&(pFVar2->Vertex).field_0xc;
      if (FVar1 == *param_2) {
        return pFVar2;
      }
      pFVar2 = pFVar2 + 1;
    } while (pFVar2 != pFVar3);
  }
  return (FOutputBinding *)0x0;
}

// Find<Metasound::VertexDataPrivate::FOutputBinding> @ 14ad2eaa0

FOutputBinding * __cdecl
Metasound::VertexDataPrivate::Find<Metasound::VertexDataPrivate::FOutputBinding>
          (TArray<Metasound::VertexDataPrivate::FOutputBinding,TSizedDefaultAllocator<32>_> *param_1
          ,FName *param_2)

{
  FName FVar1;
  FOutputBinding *pFVar2;
  FOutputBinding *pFVar3;
  
  pFVar2 = (FOutputBinding *)(param_1->AllocatorInstance).Data;
  pFVar3 = pFVar2 + param_1->ArrayNum;
  if (pFVar2 != pFVar3) {
    do {
      FVar1.ComparisonIndex.Value = *(uint *)&(pFVar2->Vertex).field_0x8;
      FVar1.Number = *(uint *)&(pFVar2->Vertex).field_0xc;
      if (FVar1 == *param_2) {
        return pFVar2;
      }
      pFVar2 = pFVar2 + 1;
    } while (pFVar2 != pFVar3);
  }
  return (FOutputBinding *)0x0;
}

// FindDataReference<Metasound::VertexDataPrivate::FInputBinding> @ 14ad2ead0

FAnyDataReference * __cdecl
Metasound::VertexDataPrivate::FindDataReference<Metasound::VertexDataPrivate::FInputBinding>
          (TArray<Metasound::VertexDataPrivate::FInputBinding,TSizedDefaultAllocator<32>_> *param_1,
          FName *param_2)

{
  FScriptContainerElement *pFVar1;
  FAnyDataReference *pFVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar1 = (param_1->AllocatorInstance).Data;
  pFVar3 = pFVar1 + (longlong)param_1->ArrayNum * 0x58;
  if (pFVar1 != pFVar3) {
    do {
      if (*(FName *)(pFVar1 + 8) == *param_2) {
        pFVar2 = (FAnyDataReference *)(pFVar1 + 0x38);
        if (pFVar1[0x50] == (FScriptContainerElement)0x0) {
          pFVar2 = (FAnyDataReference *)0x0;
        }
        return pFVar2;
      }
      pFVar1 = pFVar1 + 0x58;
    } while (pFVar1 != pFVar3);
  }
  return (FAnyDataReference *)0x0;
}

// FindDataReference<Metasound::VertexDataPrivate::FOutputBinding> @ 14ad2eb10

FAnyDataReference * __cdecl
Metasound::VertexDataPrivate::FindDataReference<Metasound::VertexDataPrivate::FOutputBinding>
          (TArray<Metasound::VertexDataPrivate::FOutputBinding,TSizedDefaultAllocator<32>_> *param_1
          ,FName *param_2)

{
  FScriptContainerElement *pFVar1;
  FAnyDataReference *pFVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar1 = (param_1->AllocatorInstance).Data;
  pFVar3 = pFVar1 + (longlong)param_1->ArrayNum * 0x40;
  if (pFVar1 != pFVar3) {
    do {
      if (*(FName *)(pFVar1 + 8) == *param_2) {
        pFVar2 = (FAnyDataReference *)(pFVar1 + 0x20);
        if (pFVar1[0x38] == (FScriptContainerElement)0x0) {
          pFVar2 = (FAnyDataReference *)0x0;
        }
        return pFVar2;
      }
      pFVar1 = pFVar1 + 0x40;
    } while (pFVar1 != pFVar3);
  }
  return (FAnyDataReference *)0x0;
}

// ForEachSubInterfaceBindingImpl<Metasound::VertexDataPrivate::FInputBinding_const_> @ 14ad2eb50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::VertexDataPrivate::
ForEachSubInterfaceBindingImpl<Metasound::VertexDataPrivate::FInputBinding_const_>
          (FSubInterfaceLayout *param_1,FName *param_2,uint param_3,
          TFunctionRef<void___cdecl(unsigned_int,Metasound::VertexDataPrivate::FInputBinding_const_&)>
          *param_4,TArrayView<Metasound::VertexDataPrivate::FInputBinding_const_,int> *param_5)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FInputBinding *pFVar7;
  uint uVar8;
  uint uVar9;
  FInputBinding *pFVar10;
  int iVar11;
  uint uVar12;
  uint local_res18 [2];
  TFunctionRef<void___cdecl(unsigned_int,Metasound::VertexDataPrivate::FInputBinding_const_&)>
  *local_res20;
  FString local_68;
  FString local_58;
  FString local_48;
  
  local_res20 = param_4;
  if (((param_3 != 0xffffffff) && ((param_1->Instances).ArrayNum != param_3)) &&
     (5 < (byte)LogMetaSound._0_1_)) {
    ::FName::ToString(&param_1->SubInterfaceName,&local_68);
    UE::Logging::Private::BasicLog<6>
              (&`void___cdecl_Metasound::VertexDataPrivate::ForEachSubInterfaceBindingImpl<Metasound::VertexDataPrivate::FInputBinding_const_>(Metasound::VertexPrivate::FSubInterfaceLayout_const&___ptr64,FName_const&___ptr64,unsigned_int,TFunctionRef<void___cdecl(unsigned_int,Metasound::VertexDataPrivate::FInputBinding_const&___ptr64)>,TArrayView<Metasound::VertexDataPrivate::FInputBinding_const_,int>)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  if (0 < (param_1->Instances).ArrayNum) {
    pFVar3 = (param_1->Instances).AllocatorInstance.Data;
    iVar1 = *(int *)pFVar3;
    iVar2 = *(int *)(pFVar3 + 4);
    iVar11 = iVar2 - iVar1;
    if ((iVar1 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x15b,L"Invalid index (%lld)"), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((iVar11 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x15c,L"Invalid count (%lld)"), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((param_5->ArrayNum < iVar2) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index + InNum <= ArrayNum",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x15d,
                           L"Range (index: %lld, count: %lld) lies outside the view of %lld elements"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar10 = param_5->DataPtr + iVar1;
    if ((iVar11 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (pFVar10 != pFVar10 + iVar11) {
      pFVar7 = pFVar10;
      do {
        if ((FName)(pFVar7->Vertex)._padding_ == *param_2) {
          iVar1 = (int)(((longlong)pFVar7 - (longlong)pFVar10) / 0x58);
          if (iVar1 != -1) {
            uVar8 = (param_1->Instances).ArrayNum;
            uVar9 = uVar8;
            if ((param_3 != 0xffffffff) && (uVar9 = param_3, uVar8 < param_3)) {
              uVar9 = uVar8;
            }
            uVar8 = 0;
            if (uVar9 == 0) {
              return;
            }
            while( true ) {
              uVar12 = 0;
              if ((int)uVar8 < (param_1->Instances).ArrayNum) {
                uVar12 = ~uVar8 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              uVar12 = *(int *)((param_1->Instances).AllocatorInstance.Data +
                               (longlong)(int)uVar8 * 8) + iVar1;
              if (((uint)param_5->ArrayNum <= uVar12) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Pos < static_cast<uint32>(InOutBindings.Num())",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundVertexData.cpp"
                                     ,0x1bf,L""), bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              uVar6 = 0;
              if ((int)uVar12 < param_5->ArrayNum) {
                uVar6 = ~uVar12 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar5)) break;
              local_res18[0] = uVar8;
              (**(code **)local_res20)
                        (*(undefined8 *)&local_res20->field_0x8,local_res18,
                         param_5->DataPtr + (int)uVar12);
              uVar8 = uVar8 + 1;
              if (uVar9 <= uVar8) {
                return;
              }
            }
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          break;
        }
        pFVar7 = pFVar7 + 1;
      } while (pFVar7 != pFVar10 + iVar11);
    }
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(&param_1->SubInterfaceName,&local_48);
      ::FName::ToString(param_2,&local_58);
      UE::Logging::Private::BasicLog<3>
                (&`void___cdecl_Metasound::VertexDataPrivate::ForEachSubInterfaceBindingImpl<Metasound::VertexDataPrivate::FInputBinding_const_>(Metasound::VertexPrivate::FSubInterfaceLayout_const&___ptr64,FName_const&___ptr64,unsigned_int,TFunctionRef<void___cdecl(unsigned_int,Metasound::VertexDataPrivate::FInputBinding_const&___ptr64)>,TArrayView<Metasound::VertexDataPrivate::FInputBinding_const_,int>)'
                  ::__l35::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// ForEachSubInterfaceBindingImpl<Metasound::VertexDataPrivate::FOutputBinding_const_> @ 14ad2eee0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::VertexDataPrivate::
ForEachSubInterfaceBindingImpl<Metasound::VertexDataPrivate::FOutputBinding_const_>
          (FSubInterfaceLayout *param_1,FName *param_2,uint param_3,
          TFunctionRef<void___cdecl(unsigned_int,Metasound::VertexDataPrivate::FOutputBinding_const_&)>
          *param_4,TArrayView<Metasound::VertexDataPrivate::FOutputBinding_const_,int> *param_5)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FOutputBinding *pFVar8;
  uint uVar9;
  FOutputBinding *pFVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint local_res18 [2];
  TFunctionRef<void___cdecl(unsigned_int,Metasound::VertexDataPrivate::FOutputBinding_const_&)>
  *local_res20;
  FString local_68;
  FString local_58;
  FString local_48;
  
  local_res20 = param_4;
  if (((param_3 != 0xffffffff) && ((param_1->Instances).ArrayNum != param_3)) &&
     (5 < (byte)LogMetaSound._0_1_)) {
    ::FName::ToString(&param_1->SubInterfaceName,&local_68);
    UE::Logging::Private::BasicLog<6>
              (&`void___cdecl_Metasound::VertexDataPrivate::ForEachSubInterfaceBindingImpl<Metasound::VertexDataPrivate::FOutputBinding_const_>(Metasound::VertexPrivate::FSubInterfaceLayout_const&___ptr64,FName_const&___ptr64,unsigned_int,TFunctionRef<void___cdecl(unsigned_int,Metasound::VertexDataPrivate::FOutputBinding_const&___ptr64)>,TArrayView<Metasound::VertexDataPrivate::FOutputBinding_const_,int>)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  if (0 < (param_1->Instances).ArrayNum) {
    pFVar2 = (param_1->Instances).AllocatorInstance.Data;
    iVar7 = *(int *)pFVar2;
    iVar1 = *(int *)(pFVar2 + 4);
    iVar11 = iVar1 - iVar7;
    if ((iVar7 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x15b,L"Invalid index (%lld)"), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((iVar11 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x15c,L"Invalid count (%lld)"), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((param_5->ArrayNum < iVar1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index + InNum <= ArrayNum",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x15d,
                           L"Range (index: %lld, count: %lld) lies outside the view of %lld elements"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar10 = param_5->DataPtr + iVar7;
    if ((iVar11 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (pFVar10 != pFVar10 + iVar11) {
      pFVar8 = pFVar10;
      do {
        FVar3.ComparisonIndex.Value = *(uint *)&(pFVar8->Vertex).field_0x8;
        FVar3.Number = *(uint *)&(pFVar8->Vertex).field_0xc;
        if (FVar3 == *param_2) {
          iVar7 = (int)((longlong)pFVar8 - (longlong)pFVar10 >> 6);
          if (iVar7 != -1) {
            uVar13 = (param_1->Instances).ArrayNum;
            uVar9 = uVar13;
            if ((param_3 != 0xffffffff) && (uVar9 = param_3, uVar13 < param_3)) {
              uVar9 = uVar13;
            }
            uVar13 = 0;
            if (uVar9 == 0) {
              return;
            }
            while( true ) {
              uVar12 = 0;
              if ((int)uVar13 < (param_1->Instances).ArrayNum) {
                uVar12 = ~uVar13 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              uVar12 = *(int *)((param_1->Instances).AllocatorInstance.Data +
                               (longlong)(int)uVar13 * 8) + iVar7;
              if (((uint)param_5->ArrayNum <= uVar12) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Pos < static_cast<uint32>(InOutBindings.Num())",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundVertexData.cpp"
                                     ,0x1bf,L""), bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              uVar6 = 0;
              if ((int)uVar12 < param_5->ArrayNum) {
                uVar6 = ~uVar12 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar5)) break;
              local_res18[0] = uVar13;
              (**(code **)local_res20)
                        (*(undefined8 *)&local_res20->field_0x8,local_res18,
                         param_5->DataPtr + (int)uVar12);
              uVar13 = uVar13 + 1;
              if (uVar9 <= uVar13) {
                return;
              }
            }
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          break;
        }
        pFVar8 = pFVar8 + 1;
      } while (pFVar8 != pFVar10 + iVar11);
    }
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(&param_1->SubInterfaceName,&local_48);
      ::FName::ToString(param_2,&local_58);
      UE::Logging::Private::BasicLog<3>
                (&`void___cdecl_Metasound::VertexDataPrivate::ForEachSubInterfaceBindingImpl<Metasound::VertexDataPrivate::FOutputBinding_const_>(Metasound::VertexPrivate::FSubInterfaceLayout_const&___ptr64,FName_const&___ptr64,unsigned_int,TFunctionRef<void___cdecl(unsigned_int,Metasound::VertexDataPrivate::FOutputBinding_const&___ptr64)>,TArrayView<Metasound::VertexDataPrivate::FOutputBinding_const_,int>)'
                  ::__l35::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// ForEachSubInterfaceBindingImpl<Metasound::VertexDataPrivate::FInputBinding> @ 14ad2f260

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::VertexDataPrivate::
ForEachSubInterfaceBindingImpl<Metasound::VertexDataPrivate::FInputBinding>
          (FSubInterfaceLayout *param_1,FName *param_2,uint param_3,
          TFunctionRef<void___cdecl(unsigned_int,Metasound::VertexDataPrivate::FInputBinding_&)>
          *param_4,TArrayView<Metasound::VertexDataPrivate::FInputBinding,int> *param_5)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FInputBinding *pFVar7;
  uint uVar8;
  uint uVar9;
  FInputBinding *pFVar10;
  int iVar11;
  uint uVar12;
  uint local_res18 [2];
  TFunctionRef<void___cdecl(unsigned_int,Metasound::VertexDataPrivate::FInputBinding_&)>
  *local_res20;
  FString local_68;
  FString local_58;
  FString local_48;
  
  local_res20 = param_4;
  if (((param_3 != 0xffffffff) && ((param_1->Instances).ArrayNum != param_3)) &&
     (5 < (byte)LogMetaSound._0_1_)) {
    ::FName::ToString(&param_1->SubInterfaceName,&local_68);
    UE::Logging::Private::BasicLog<6>
              (&`void___cdecl_Metasound::VertexDataPrivate::ForEachSubInterfaceBindingImpl<Metasound::VertexDataPrivate::FInputBinding>(Metasound::VertexPrivate::FSubInterfaceLayout_const&___ptr64,FName_const&___ptr64,unsigned_int,TFunctionRef<void___cdecl(unsigned_int,Metasound::VertexDataPrivate::FInputBinding&___ptr64)>,TArrayView<Metasound::VertexDataPrivate::FInputBinding,int>)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  if (0 < (param_1->Instances).ArrayNum) {
    pFVar3 = (param_1->Instances).AllocatorInstance.Data;
    iVar1 = *(int *)pFVar3;
    iVar2 = *(int *)(pFVar3 + 4);
    iVar11 = iVar2 - iVar1;
    if ((iVar1 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x15b,L"Invalid index (%lld)"), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((iVar11 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x15c,L"Invalid count (%lld)"), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((param_5->ArrayNum < iVar2) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index + InNum <= ArrayNum",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x15d,
                           L"Range (index: %lld, count: %lld) lies outside the view of %lld elements"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar10 = param_5->DataPtr + iVar1;
    if ((iVar11 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (pFVar10 != pFVar10 + iVar11) {
      pFVar7 = pFVar10;
      do {
        if ((FName)(pFVar7->Vertex)._padding_ == *param_2) {
          iVar1 = (int)(((longlong)pFVar7 - (longlong)pFVar10) / 0x58);
          if (iVar1 != -1) {
            uVar8 = (param_1->Instances).ArrayNum;
            uVar9 = uVar8;
            if ((param_3 != 0xffffffff) && (uVar9 = param_3, uVar8 < param_3)) {
              uVar9 = uVar8;
            }
            uVar8 = 0;
            if (uVar9 == 0) {
              return;
            }
            while( true ) {
              uVar12 = 0;
              if ((int)uVar8 < (param_1->Instances).ArrayNum) {
                uVar12 = ~uVar8 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              uVar12 = *(int *)((param_1->Instances).AllocatorInstance.Data +
                               (longlong)(int)uVar8 * 8) + iVar1;
              if (((uint)param_5->ArrayNum <= uVar12) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Pos < static_cast<uint32>(InOutBindings.Num())",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundVertexData.cpp"
                                     ,0x1bf,L""), bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              uVar6 = 0;
              if ((int)uVar12 < param_5->ArrayNum) {
                uVar6 = ~uVar12 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar5)) break;
              local_res18[0] = uVar8;
              (**(code **)local_res20)
                        (*(undefined8 *)&local_res20->field_0x8,local_res18,
                         param_5->DataPtr + (int)uVar12);
              uVar8 = uVar8 + 1;
              if (uVar9 <= uVar8) {
                return;
              }
            }
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          break;
        }
        pFVar7 = pFVar7 + 1;
      } while (pFVar7 != pFVar10 + iVar11);
    }
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(&param_1->SubInterfaceName,&local_48);
      ::FName::ToString(param_2,&local_58);
      UE::Logging::Private::BasicLog<3>
                (&`void___cdecl_Metasound::VertexDataPrivate::ForEachSubInterfaceBindingImpl<Metasound::VertexDataPrivate::FInputBinding>(Metasound::VertexPrivate::FSubInterfaceLayout_const&___ptr64,FName_const&___ptr64,unsigned_int,TFunctionRef<void___cdecl(unsigned_int,Metasound::VertexDataPrivate::FInputBinding&___ptr64)>,TArrayView<Metasound::VertexDataPrivate::FInputBinding,int>)'
                  ::__l35::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// ForEachSubInterfaceBindingImpl<Metasound::VertexDataPrivate::FOutputBinding> @ 14ad2f5f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::VertexDataPrivate::
ForEachSubInterfaceBindingImpl<Metasound::VertexDataPrivate::FOutputBinding>
          (FSubInterfaceLayout *param_1,FName *param_2,uint param_3,
          TFunctionRef<void___cdecl(unsigned_int,Metasound::VertexDataPrivate::FOutputBinding_&)>
          *param_4,TArrayView<Metasound::VertexDataPrivate::FOutputBinding,int> *param_5)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FOutputBinding *pFVar8;
  uint uVar9;
  FOutputBinding *pFVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint local_res18 [2];
  TFunctionRef<void___cdecl(unsigned_int,Metasound::VertexDataPrivate::FOutputBinding_&)>
  *local_res20;
  FString local_68;
  FString local_58;
  FString local_48;
  
  local_res20 = param_4;
  if (((param_3 != 0xffffffff) && ((param_1->Instances).ArrayNum != param_3)) &&
     (5 < (byte)LogMetaSound._0_1_)) {
    ::FName::ToString(&param_1->SubInterfaceName,&local_68);
    UE::Logging::Private::BasicLog<6>
              (&`void___cdecl_Metasound::VertexDataPrivate::ForEachSubInterfaceBindingImpl<Metasound::VertexDataPrivate::FOutputBinding>(Metasound::VertexPrivate::FSubInterfaceLayout_const&___ptr64,FName_const&___ptr64,unsigned_int,TFunctionRef<void___cdecl(unsigned_int,Metasound::VertexDataPrivate::FOutputBinding&___ptr64)>,TArrayView<Metasound::VertexDataPrivate::FOutputBinding,int>)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  if (0 < (param_1->Instances).ArrayNum) {
    pFVar2 = (param_1->Instances).AllocatorInstance.Data;
    iVar7 = *(int *)pFVar2;
    iVar1 = *(int *)(pFVar2 + 4);
    iVar11 = iVar1 - iVar7;
    if ((iVar7 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x15b,L"Invalid index (%lld)"), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((iVar11 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x15c,L"Invalid count (%lld)"), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((param_5->ArrayNum < iVar1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index + InNum <= ArrayNum",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x15d,
                           L"Range (index: %lld, count: %lld) lies outside the view of %lld elements"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar10 = param_5->DataPtr + iVar7;
    if ((iVar11 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (pFVar10 != pFVar10 + iVar11) {
      pFVar8 = pFVar10;
      do {
        FVar3.ComparisonIndex.Value = *(uint *)&(pFVar8->Vertex).field_0x8;
        FVar3.Number = *(uint *)&(pFVar8->Vertex).field_0xc;
        if (FVar3 == *param_2) {
          iVar7 = (int)((longlong)pFVar8 - (longlong)pFVar10 >> 6);
          if (iVar7 != -1) {
            uVar13 = (param_1->Instances).ArrayNum;
            uVar9 = uVar13;
            if ((param_3 != 0xffffffff) && (uVar9 = param_3, uVar13 < param_3)) {
              uVar9 = uVar13;
            }
            uVar13 = 0;
            if (uVar9 == 0) {
              return;
            }
            while( true ) {
              uVar12 = 0;
              if ((int)uVar13 < (param_1->Instances).ArrayNum) {
                uVar12 = ~uVar13 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              uVar12 = *(int *)((param_1->Instances).AllocatorInstance.Data +
                               (longlong)(int)uVar13 * 8) + iVar7;
              if (((uint)param_5->ArrayNum <= uVar12) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Pos < static_cast<uint32>(InOutBindings.Num())",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundVertexData.cpp"
                                     ,0x1bf,L""), bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              uVar6 = 0;
              if ((int)uVar12 < param_5->ArrayNum) {
                uVar6 = ~uVar12 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar5)) break;
              local_res18[0] = uVar13;
              (**(code **)local_res20)
                        (*(undefined8 *)&local_res20->field_0x8,local_res18,
                         param_5->DataPtr + (int)uVar12);
              uVar13 = uVar13 + 1;
              if (uVar9 <= uVar13) {
                return;
              }
            }
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          break;
        }
        pFVar8 = pFVar8 + 1;
      } while (pFVar8 != pFVar10 + iVar11);
    }
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(&param_1->SubInterfaceName,&local_48);
      ::FName::ToString(param_2,&local_58);
      UE::Logging::Private::BasicLog<3>
                (&`void___cdecl_Metasound::VertexDataPrivate::ForEachSubInterfaceBindingImpl<Metasound::VertexDataPrivate::FOutputBinding>(Metasound::VertexPrivate::FSubInterfaceLayout_const&___ptr64,FName_const&___ptr64,unsigned_int,TFunctionRef<void___cdecl(unsigned_int,Metasound::VertexDataPrivate::FOutputBinding&___ptr64)>,TArrayView<Metasound::VertexDataPrivate::FOutputBinding,int>)'
                  ::__l35::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// GetMetasoundDataTypeId<Metasound::FAudioBuffer> @ 14ad2fd50

void * __cdecl Metasound::GetMetasoundDataTypeId<Metasound::FAudioBuffer>(void)

{
  return &TDataReferenceTypeInfo<Metasound::FAudioBuffer>::TypePtr;
}

// GetMetasoundDataTypeName<Metasound::FAudioBuffer> @ 14ad2fd60

FName * __cdecl Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>(void)'
                      ::__l2::TypeName,TDataReferenceTypeInfo<Metasound::FAudioBuffer>::TypeName);
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>(void)'
              ::__l2::TypeName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeName<Metasound::FAudioBuffer>(void)'
          ::__l2::TypeName;
}

// GetMetasoundEnvironmentVariableTypeId<TArray<FGuid,TSizedDefaultAllocator<32>_>_> @ 14ad2fde0

void * __cdecl
Metasound::GetMetasoundEnvironmentVariableTypeId<TArray<FGuid,TSizedDefaultAllocator<32>_>_>(void)

{
  return &TEnvironmentVariableTypeInfo<TArray<FGuid,TSizedDefaultAllocator<32>_>_>::TypePtr;
}

// GetVertexDataAccessType<Metasound::VertexDataPrivate::FInputBinding> @ 14ad2ff50

EDataReferenceAccessType __cdecl
Metasound::VertexDataPrivate::GetVertexDataAccessType<Metasound::VertexDataPrivate::FInputBinding>
          (TArray<Metasound::VertexDataPrivate::FInputBinding,TSizedDefaultAllocator<32>_> *param_1,
          FName *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (param_1->AllocatorInstance).Data;
  pFVar2 = pFVar1 + (longlong)param_1->ArrayNum * 0x58;
  if (pFVar1 != pFVar2) {
    do {
      if (*(FName *)(pFVar1 + 8) == *param_2) {
        if (pFVar1[0x50] == (FScriptContainerElement)0x0) {
          return None;
        }
        return (EDataReferenceAccessType)pFVar1[0x40];
      }
      pFVar1 = pFVar1 + 0x58;
    } while (pFVar1 != pFVar2);
  }
  return None;
}

// GetVertexDataAccessType<Metasound::VertexDataPrivate::FOutputBinding> @ 14ad2ff90

EDataReferenceAccessType __cdecl
Metasound::VertexDataPrivate::GetVertexDataAccessType<Metasound::VertexDataPrivate::FOutputBinding>
          (TArray<Metasound::VertexDataPrivate::FOutputBinding,TSizedDefaultAllocator<32>_> *param_1
          ,FName *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (param_1->AllocatorInstance).Data;
  pFVar2 = pFVar1 + (longlong)param_1->ArrayNum * 0x40;
  if (pFVar1 != pFVar2) {
    do {
      if (*(FName *)(pFVar1 + 8) == *param_2) {
        if (pFVar1[0x38] == (FScriptContainerElement)0x0) {
          return None;
        }
        return (EDataReferenceAccessType)pFVar1[0x28];
      }
      pFVar1 = pFVar1 + 0x40;
    } while (pFVar1 != pFVar2);
  }
  return None;
}

// GetVertexInterfaceDataState<Metasound::VertexDataPrivate::FInputBinding> @ 14ad2ffd0

void __cdecl
Metasound::VertexDataPrivate::
GetVertexInterfaceDataState<Metasound::VertexDataPrivate::FInputBinding>
          (TArray<Metasound::VertexDataPrivate::FInputBinding,TSizedDefaultAllocator<32>_> *param_1,
          TArray<Metasound::FVertexDataState,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  undefined8 local_28;
  undefined8 uStack_20;
  
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&param_2->AllocatorInstance,0,piVar1);
  }
  iVar2 = param_1->ArrayNum;
  pFVar8 = (param_1->AllocatorInstance).Data;
  pFVar7 = pFVar8 + (longlong)iVar2 * 0x58;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Metasound::VertexDataPrivate::FInputBinding_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar7) break;
    local_28 = *(undefined8 *)(pFVar8 + 8);
    if (pFVar8[0x50] == (FScriptContainerElement)0x0) {
      uStack_20 = 0;
    }
    else {
      uStack_20 = (**(code **)(*(longlong *)(pFVar8 + 0x38) + 0x20))(pFVar8 + 0x38);
    }
    pFVar3 = (param_2->AllocatorInstance).Data;
    if ((pFVar3 <= (FScriptContainerElement *)&local_28) &&
       ((FScriptContainerElement *)&local_28 < pFVar3 + (longlong)*piVar1 * 0x10)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = param_2->ArrayNum;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_2->AllocatorInstance,piVar1);
    }
    param_2->ArrayNum = iVar6 + 1;
    pFVar8 = pFVar8 + 0x58;
    pFVar3 = (param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
    *(undefined8 *)pFVar3 = local_28;
    *(undefined8 *)(pFVar3 + 8) = uStack_20;
  }
  return;
}

// GetVertexInterfaceDataState<Metasound::VertexDataPrivate::FOutputBinding> @ 14ad30140

void __cdecl
Metasound::VertexDataPrivate::
GetVertexInterfaceDataState<Metasound::VertexDataPrivate::FOutputBinding>
          (TArray<Metasound::VertexDataPrivate::FOutputBinding,TSizedDefaultAllocator<32>_> *param_1
          ,TArray<Metasound::FVertexDataState,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  undefined8 local_28;
  undefined8 uStack_20;
  
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&param_2->AllocatorInstance,0,piVar1);
  }
  iVar2 = param_1->ArrayNum;
  pFVar8 = (param_1->AllocatorInstance).Data;
  pFVar7 = pFVar8 + (longlong)iVar2 * 0x40;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Metasound::VertexDataPrivate::FOutputBinding_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar7) break;
    local_28 = *(undefined8 *)(pFVar8 + 8);
    if (pFVar8[0x38] == (FScriptContainerElement)0x0) {
      uStack_20 = 0;
    }
    else {
      uStack_20 = (**(code **)(*(longlong *)(pFVar8 + 0x20) + 0x20))(pFVar8 + 0x20);
    }
    pFVar3 = (param_2->AllocatorInstance).Data;
    if ((pFVar3 <= (FScriptContainerElement *)&local_28) &&
       ((FScriptContainerElement *)&local_28 < pFVar3 + (longlong)*piVar1 * 0x10)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = param_2->ArrayNum;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_2->AllocatorInstance,piVar1);
    }
    param_2->ArrayNum = iVar6 + 1;
    pFVar8 = pFVar8 + 0x40;
    pFVar3 = (param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
    *(undefined8 *)pFVar3 = local_28;
    *(undefined8 *)(pFVar3 + 8) = uStack_20;
  }
  return;
}

// HeapSortInternal<Metasound::DynamicGraph::FExecuteEntry_const_,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FExecuteEntry_const_>,TLess<void>_> @ 14ad302c0

void __cdecl
AlgoImpl::
HeapSortInternal<Metasound::DynamicGraph::FExecuteEntry_const_,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FExecuteEntry_const_>,TLess<void>_>
          (FExecuteEntry *param_1,int param_2,
          TGetOrdinal<Metasound::DynamicGraph::FExecuteEntry_const_> param_3,TLess<void> param_4)

{
  code *pcVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  IOperator *pIVar4;
  _func___cdecl_void_IOperator_ptr *p_Var5;
  _func___cdecl_void_IOperator_ptr *p_Var6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  FExecuteEntry *pFVar15;
  FExecuteEntry *pFVar16;
  int iVar17;
  FExecuteEntry *pFVar18;
  
  if (param_2 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar9) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar9) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar10 = (param_2 + -2) / 2;
  iVar11 = iVar10 * 2 + 1;
  iVar12 = iVar11;
  iVar17 = iVar10;
  do {
    while (param_2 <= iVar11) {
LAB_14ad303c6:
      if (iVar17 == 0) {
        iVar11 = param_2 + -1;
        lVar14 = (longlong)iVar11;
        if (0 < iVar11) {
          pFVar18 = param_1 + lVar14;
          do {
            uVar7 = *(undefined4 *)&pFVar18->field_0x4;
            uVar2 = pFVar18->OperatorID;
            iVar10 = 0;
            iVar12 = param_1->Ordinal;
            uVar8 = *(undefined4 *)&param_1->field_0x4;
            uVar3 = param_1->OperatorID;
            pIVar4 = param_1->Operator;
            p_Var5 = param_1->Function;
            param_1->Ordinal = pFVar18->Ordinal;
            *(undefined4 *)&param_1->field_0x4 = uVar7;
            param_1->OperatorID = uVar2;
            p_Var6 = pFVar18->Function;
            param_1->Operator = pFVar18->Operator;
            param_1->Function = p_Var6;
            pFVar18->Ordinal = iVar12;
            *(undefined4 *)&pFVar18->field_0x4 = uVar8;
            pFVar18->OperatorID = uVar3;
            pFVar18->Operator = pIVar4;
            pFVar18->Function = p_Var5;
            if (1 < iVar11) {
              do {
                iVar17 = iVar10 * 2;
                iVar12 = iVar17 + 1;
                if (iVar17 + 2 < iVar11) {
                  if (param_1[(longlong)iVar17 + 2].Ordinal < param_1[iVar12].Ordinal) {
                    iVar12 = iVar17;
                  }
                  iVar12 = iVar12 + 1;
                }
                pFVar15 = param_1 + iVar12;
                pFVar16 = param_1 + iVar10;
                if (pFVar15->Ordinal <= pFVar16->Ordinal) break;
                uVar7 = *(undefined4 *)&pFVar15->field_0x4;
                uVar2 = pFVar15->OperatorID;
                iVar10 = pFVar16->Ordinal;
                uVar8 = *(undefined4 *)&pFVar16->field_0x4;
                uVar3 = pFVar16->OperatorID;
                pIVar4 = pFVar16->Operator;
                p_Var5 = pFVar16->Function;
                pFVar16->Ordinal = pFVar15->Ordinal;
                *(undefined4 *)&pFVar16->field_0x4 = uVar7;
                pFVar16->OperatorID = uVar2;
                p_Var6 = pFVar15->Function;
                pFVar16->Operator = pFVar15->Operator;
                pFVar16->Function = p_Var6;
                pFVar15->Ordinal = iVar10;
                *(undefined4 *)&pFVar15->field_0x4 = uVar8;
                pFVar15->OperatorID = uVar3;
                pFVar15->Operator = pIVar4;
                pFVar15->Function = p_Var5;
                iVar10 = iVar12;
              } while (iVar12 * 2 + 1 < iVar11);
            }
            iVar11 = iVar11 + -1;
            lVar14 = lVar14 + -1;
            pFVar18 = pFVar18 + -1;
          } while (0 < lVar14);
        }
        return;
      }
      iVar10 = iVar17 + -1;
      iVar11 = iVar12 + -2;
      iVar12 = iVar11;
      iVar17 = iVar10;
    }
    iVar11 = iVar10 * 2;
    iVar13 = iVar11 + 1;
    if (iVar11 + 2 < param_2) {
      if (param_1[(longlong)iVar11 + 2].Ordinal < param_1[iVar13].Ordinal) {
        iVar13 = iVar11;
      }
      iVar13 = iVar13 + 1;
    }
    pFVar18 = param_1 + iVar13;
    pFVar15 = param_1 + iVar10;
    if (pFVar18->Ordinal <= pFVar15->Ordinal) goto LAB_14ad303c6;
    uVar7 = *(undefined4 *)&pFVar18->field_0x4;
    uVar2 = pFVar18->OperatorID;
    iVar11 = iVar13 * 2 + 1;
    iVar10 = pFVar15->Ordinal;
    uVar8 = *(undefined4 *)&pFVar15->field_0x4;
    uVar3 = pFVar15->OperatorID;
    pIVar4 = pFVar15->Operator;
    p_Var5 = pFVar15->Function;
    pFVar15->Ordinal = pFVar18->Ordinal;
    *(undefined4 *)&pFVar15->field_0x4 = uVar7;
    pFVar15->OperatorID = uVar2;
    p_Var6 = pFVar18->Function;
    pFVar15->Operator = pFVar18->Operator;
    pFVar15->Function = p_Var6;
    pFVar18->Ordinal = iVar10;
    *(undefined4 *)&pFVar18->field_0x4 = uVar8;
    pFVar18->OperatorID = uVar3;
    pFVar18->Operator = pIVar4;
    pFVar18->Function = p_Var5;
    iVar10 = iVar13;
  } while( true );
}

// HeapSortInternal<Metasound::DynamicGraph::FPostExecuteEntry_const_,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FPostExecuteEntry_const_>,TLess<void>_> @ 14ad304c0

void __cdecl
AlgoImpl::
HeapSortInternal<Metasound::DynamicGraph::FPostExecuteEntry_const_,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FPostExecuteEntry_const_>,TLess<void>_>
          (FPostExecuteEntry *param_1,int param_2,
          TGetOrdinal<Metasound::DynamicGraph::FPostExecuteEntry_const_> param_3,TLess<void> param_4
          )

{
  code *pcVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  IOperator *pIVar4;
  _func___cdecl_void_IOperator_ptr *p_Var5;
  _func___cdecl_void_IOperator_ptr *p_Var6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  FPostExecuteEntry *pFVar15;
  FPostExecuteEntry *pFVar16;
  int iVar17;
  FPostExecuteEntry *pFVar18;
  
  if (param_2 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar9) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar9) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar10 = (param_2 + -2) / 2;
  iVar11 = iVar10 * 2 + 1;
  iVar12 = iVar11;
  iVar17 = iVar10;
  do {
    while (param_2 <= iVar11) {
LAB_14ad305c6:
      if (iVar17 == 0) {
        iVar11 = param_2 + -1;
        lVar14 = (longlong)iVar11;
        if (0 < iVar11) {
          pFVar18 = param_1 + lVar14;
          do {
            uVar7 = *(undefined4 *)&pFVar18->field_0x4;
            uVar2 = pFVar18->OperatorID;
            iVar10 = 0;
            iVar12 = param_1->Ordinal;
            uVar8 = *(undefined4 *)&param_1->field_0x4;
            uVar3 = param_1->OperatorID;
            pIVar4 = param_1->Operator;
            p_Var5 = param_1->Function;
            param_1->Ordinal = pFVar18->Ordinal;
            *(undefined4 *)&param_1->field_0x4 = uVar7;
            param_1->OperatorID = uVar2;
            p_Var6 = pFVar18->Function;
            param_1->Operator = pFVar18->Operator;
            param_1->Function = p_Var6;
            pFVar18->Ordinal = iVar12;
            *(undefined4 *)&pFVar18->field_0x4 = uVar8;
            pFVar18->OperatorID = uVar3;
            pFVar18->Operator = pIVar4;
            pFVar18->Function = p_Var5;
            if (1 < iVar11) {
              do {
                iVar17 = iVar10 * 2;
                iVar12 = iVar17 + 1;
                if (iVar17 + 2 < iVar11) {
                  if (param_1[(longlong)iVar17 + 2].Ordinal < param_1[iVar12].Ordinal) {
                    iVar12 = iVar17;
                  }
                  iVar12 = iVar12 + 1;
                }
                pFVar15 = param_1 + iVar12;
                pFVar16 = param_1 + iVar10;
                if (pFVar15->Ordinal <= pFVar16->Ordinal) break;
                uVar7 = *(undefined4 *)&pFVar15->field_0x4;
                uVar2 = pFVar15->OperatorID;
                iVar10 = pFVar16->Ordinal;
                uVar8 = *(undefined4 *)&pFVar16->field_0x4;
                uVar3 = pFVar16->OperatorID;
                pIVar4 = pFVar16->Operator;
                p_Var5 = pFVar16->Function;
                pFVar16->Ordinal = pFVar15->Ordinal;
                *(undefined4 *)&pFVar16->field_0x4 = uVar7;
                pFVar16->OperatorID = uVar2;
                p_Var6 = pFVar15->Function;
                pFVar16->Operator = pFVar15->Operator;
                pFVar16->Function = p_Var6;
                pFVar15->Ordinal = iVar10;
                *(undefined4 *)&pFVar15->field_0x4 = uVar8;
                pFVar15->OperatorID = uVar3;
                pFVar15->Operator = pIVar4;
                pFVar15->Function = p_Var5;
                iVar10 = iVar12;
              } while (iVar12 * 2 + 1 < iVar11);
            }
            iVar11 = iVar11 + -1;
            lVar14 = lVar14 + -1;
            pFVar18 = pFVar18 + -1;
          } while (0 < lVar14);
        }
        return;
      }
      iVar10 = iVar17 + -1;
      iVar11 = iVar12 + -2;
      iVar12 = iVar11;
      iVar17 = iVar10;
    }
    iVar11 = iVar10 * 2;
    iVar13 = iVar11 + 1;
    if (iVar11 + 2 < param_2) {
      if (param_1[(longlong)iVar11 + 2].Ordinal < param_1[iVar13].Ordinal) {
        iVar13 = iVar11;
      }
      iVar13 = iVar13 + 1;
    }
    pFVar18 = param_1 + iVar13;
    pFVar15 = param_1 + iVar10;
    if (pFVar18->Ordinal <= pFVar15->Ordinal) goto LAB_14ad305c6;
    uVar7 = *(undefined4 *)&pFVar18->field_0x4;
    uVar2 = pFVar18->OperatorID;
    iVar11 = iVar13 * 2 + 1;
    iVar10 = pFVar15->Ordinal;
    uVar8 = *(undefined4 *)&pFVar15->field_0x4;
    uVar3 = pFVar15->OperatorID;
    pIVar4 = pFVar15->Operator;
    p_Var5 = pFVar15->Function;
    pFVar15->Ordinal = pFVar18->Ordinal;
    *(undefined4 *)&pFVar15->field_0x4 = uVar7;
    pFVar15->OperatorID = uVar2;
    p_Var6 = pFVar18->Function;
    pFVar15->Operator = pFVar18->Operator;
    pFVar15->Function = p_Var6;
    pFVar18->Ordinal = iVar10;
    *(undefined4 *)&pFVar18->field_0x4 = uVar8;
    pFVar18->OperatorID = uVar3;
    pFVar18->Operator = pIVar4;
    pFVar18->Function = p_Var5;
    iVar10 = iVar13;
  } while( true );
}

// HeapSortInternal<Metasound::DynamicGraph::FResetEntry_const_,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FResetEntry_const_>,TLess<void>_> @ 14ad306c0

void __cdecl
AlgoImpl::
HeapSortInternal<Metasound::DynamicGraph::FResetEntry_const_,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FResetEntry_const_>,TLess<void>_>
          (FResetEntry *param_1,int param_2,
          TGetOrdinal<Metasound::DynamicGraph::FResetEntry_const_> param_3,TLess<void> param_4)

{
  code *pcVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  IOperator *pIVar4;
  _func___cdecl_void_IOperator_ptr_FResetParams_ptr *p_Var5;
  _func___cdecl_void_IOperator_ptr_FResetParams_ptr *p_Var6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  FResetEntry *pFVar15;
  FResetEntry *pFVar16;
  int iVar17;
  FResetEntry *pFVar18;
  
  if (param_2 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar9) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar9) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar10 = (param_2 + -2) / 2;
  iVar11 = iVar10 * 2 + 1;
  iVar12 = iVar11;
  iVar17 = iVar10;
  do {
    while (param_2 <= iVar11) {
LAB_14ad307c6:
      if (iVar17 == 0) {
        iVar11 = param_2 + -1;
        lVar14 = (longlong)iVar11;
        if (0 < iVar11) {
          pFVar18 = param_1 + lVar14;
          do {
            uVar7 = *(undefined4 *)&pFVar18->field_0x4;
            uVar2 = pFVar18->OperatorID;
            iVar10 = 0;
            iVar12 = param_1->Ordinal;
            uVar8 = *(undefined4 *)&param_1->field_0x4;
            uVar3 = param_1->OperatorID;
            pIVar4 = param_1->Operator;
            p_Var5 = param_1->Function;
            param_1->Ordinal = pFVar18->Ordinal;
            *(undefined4 *)&param_1->field_0x4 = uVar7;
            param_1->OperatorID = uVar2;
            p_Var6 = pFVar18->Function;
            param_1->Operator = pFVar18->Operator;
            param_1->Function = p_Var6;
            pFVar18->Ordinal = iVar12;
            *(undefined4 *)&pFVar18->field_0x4 = uVar8;
            pFVar18->OperatorID = uVar3;
            pFVar18->Operator = pIVar4;
            pFVar18->Function = p_Var5;
            if (1 < iVar11) {
              do {
                iVar17 = iVar10 * 2;
                iVar12 = iVar17 + 1;
                if (iVar17 + 2 < iVar11) {
                  if (param_1[(longlong)iVar17 + 2].Ordinal < param_1[iVar12].Ordinal) {
                    iVar12 = iVar17;
                  }
                  iVar12 = iVar12 + 1;
                }
                pFVar15 = param_1 + iVar12;
                pFVar16 = param_1 + iVar10;
                if (pFVar15->Ordinal <= pFVar16->Ordinal) break;
                uVar7 = *(undefined4 *)&pFVar15->field_0x4;
                uVar2 = pFVar15->OperatorID;
                iVar10 = pFVar16->Ordinal;
                uVar8 = *(undefined4 *)&pFVar16->field_0x4;
                uVar3 = pFVar16->OperatorID;
                pIVar4 = pFVar16->Operator;
                p_Var5 = pFVar16->Function;
                pFVar16->Ordinal = pFVar15->Ordinal;
                *(undefined4 *)&pFVar16->field_0x4 = uVar7;
                pFVar16->OperatorID = uVar2;
                p_Var6 = pFVar15->Function;
                pFVar16->Operator = pFVar15->Operator;
                pFVar16->Function = p_Var6;
                pFVar15->Ordinal = iVar10;
                *(undefined4 *)&pFVar15->field_0x4 = uVar8;
                pFVar15->OperatorID = uVar3;
                pFVar15->Operator = pIVar4;
                pFVar15->Function = p_Var5;
                iVar10 = iVar12;
              } while (iVar12 * 2 + 1 < iVar11);
            }
            iVar11 = iVar11 + -1;
            lVar14 = lVar14 + -1;
            pFVar18 = pFVar18 + -1;
          } while (0 < lVar14);
        }
        return;
      }
      iVar10 = iVar17 + -1;
      iVar11 = iVar12 + -2;
      iVar12 = iVar11;
      iVar17 = iVar10;
    }
    iVar11 = iVar10 * 2;
    iVar13 = iVar11 + 1;
    if (iVar11 + 2 < param_2) {
      if (param_1[(longlong)iVar11 + 2].Ordinal < param_1[iVar13].Ordinal) {
        iVar13 = iVar11;
      }
      iVar13 = iVar13 + 1;
    }
    pFVar18 = param_1 + iVar13;
    pFVar15 = param_1 + iVar10;
    if (pFVar18->Ordinal <= pFVar15->Ordinal) goto LAB_14ad307c6;
    uVar7 = *(undefined4 *)&pFVar18->field_0x4;
    uVar2 = pFVar18->OperatorID;
    iVar11 = iVar13 * 2 + 1;
    iVar10 = pFVar15->Ordinal;
    uVar8 = *(undefined4 *)&pFVar15->field_0x4;
    uVar3 = pFVar15->OperatorID;
    pIVar4 = pFVar15->Operator;
    p_Var5 = pFVar15->Function;
    pFVar15->Ordinal = pFVar18->Ordinal;
    *(undefined4 *)&pFVar15->field_0x4 = uVar7;
    pFVar15->OperatorID = uVar2;
    p_Var6 = pFVar18->Function;
    pFVar15->Operator = pFVar18->Operator;
    pFVar15->Function = p_Var6;
    pFVar18->Ordinal = iVar10;
    *(undefined4 *)&pFVar18->field_0x4 = uVar8;
    pFVar18->OperatorID = uVar3;
    pFVar18->Operator = pIVar4;
    pFVar18->Function = p_Var5;
    iVar10 = iVar13;
  } while( true );
}

// HeapSortInternal<Metasound::FDataEdge_const_*,int,FIdentityFunctor,TDereferenceWrapper<Metasound::FDataEdge_const_*,bool___cdecl(Metasound::FDataEdge_const_&,Metasound::FDataEdge_const_&)>_> @ 14ad308c0

void __cdecl
AlgoImpl::
HeapSortInternal<Metasound::FDataEdge_const_*,int,FIdentityFunctor,TDereferenceWrapper<Metasound::FDataEdge_const_*,bool___cdecl(Metasound::FDataEdge_const_&,Metasound::FDataEdge_const_&)>_>
          (FDataEdge **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<Metasound::FDataEdge_const_*,bool___cdecl(Metasound::FDataEdge_const_&,Metasound::FDataEdge_const_&)>
          param_4)

{
  FDataEdge *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar9 = iVar5;
  iVar7 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_14ad309d2:
      if (iVar7 == 0) {
        iVar5 = param_2 + -1;
        lVar8 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar9 = 0;
            pFVar1 = *param_1;
            *param_1 = param_1[lVar8];
            param_1[lVar8] = pFVar1;
            if (1 < iVar5) {
              do {
                iVar7 = iVar9 * 2;
                iVar4 = iVar7 + 1;
                if (iVar7 + 2 < iVar5) {
                  bVar3 = (*param_4.Predicate)(param_1[(longlong)iVar7 + 2],param_1[iVar4]);
                  if (bVar3) {
                    iVar4 = iVar7;
                  }
                  iVar4 = iVar4 + 1;
                }
                bVar3 = (*param_4.Predicate)(param_1[iVar9],param_1[iVar4]);
                if (!bVar3) break;
                pFVar1 = param_1[iVar9];
                param_1[iVar9] = param_1[iVar4];
                param_1[iVar4] = pFVar1;
                iVar9 = iVar4;
              } while (iVar4 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar8 = lVar8 + -1;
          } while (0 < lVar8);
        }
        return;
      }
      iVar4 = iVar7 + -1;
      iVar5 = iVar9 + -2;
      iVar9 = iVar5;
      iVar7 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar6 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      bVar3 = (*param_4.Predicate)(param_1[(longlong)iVar5 + 2],param_1[iVar6]);
      if (bVar3) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    bVar3 = (*param_4.Predicate)(param_1[iVar4],param_1[iVar6]);
    if (!bVar3) goto LAB_14ad309d2;
    pFVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar6];
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6] = pFVar1;
    iVar4 = iVar6;
  } while( true );
}

// HeapSortInternal<Metasound::DynamicGraph::FExecuteEntry,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FExecuteEntry>,TLess<void>_> @ 14ad30ab0

void __cdecl
AlgoImpl::
HeapSortInternal<Metasound::DynamicGraph::FExecuteEntry,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FExecuteEntry>,TLess<void>_>
          (FExecuteEntry *param_1,int param_2,
          TGetOrdinal<Metasound::DynamicGraph::FExecuteEntry> param_3,TLess<void> param_4)

{
  code *pcVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  IOperator *pIVar4;
  _func___cdecl_void_IOperator_ptr *p_Var5;
  _func___cdecl_void_IOperator_ptr *p_Var6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  FExecuteEntry *pFVar15;
  FExecuteEntry *pFVar16;
  int iVar17;
  FExecuteEntry *pFVar18;
  
  if (param_2 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar9) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar9) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar10 = (param_2 + -2) / 2;
  iVar11 = iVar10 * 2 + 1;
  iVar12 = iVar11;
  iVar17 = iVar10;
  do {
    while (param_2 <= iVar11) {
LAB_14ad30bb6:
      if (iVar17 == 0) {
        iVar11 = param_2 + -1;
        lVar14 = (longlong)iVar11;
        if (0 < iVar11) {
          pFVar18 = param_1 + lVar14;
          do {
            uVar7 = *(undefined4 *)&pFVar18->field_0x4;
            uVar2 = pFVar18->OperatorID;
            iVar10 = 0;
            iVar12 = param_1->Ordinal;
            uVar8 = *(undefined4 *)&param_1->field_0x4;
            uVar3 = param_1->OperatorID;
            pIVar4 = param_1->Operator;
            p_Var5 = param_1->Function;
            param_1->Ordinal = pFVar18->Ordinal;
            *(undefined4 *)&param_1->field_0x4 = uVar7;
            param_1->OperatorID = uVar2;
            p_Var6 = pFVar18->Function;
            param_1->Operator = pFVar18->Operator;
            param_1->Function = p_Var6;
            pFVar18->Ordinal = iVar12;
            *(undefined4 *)&pFVar18->field_0x4 = uVar8;
            pFVar18->OperatorID = uVar3;
            pFVar18->Operator = pIVar4;
            pFVar18->Function = p_Var5;
            if (1 < iVar11) {
              do {
                iVar17 = iVar10 * 2;
                iVar12 = iVar17 + 1;
                if (iVar17 + 2 < iVar11) {
                  if (param_1[(longlong)iVar17 + 2].Ordinal < param_1[iVar12].Ordinal) {
                    iVar12 = iVar17;
                  }
                  iVar12 = iVar12 + 1;
                }
                pFVar15 = param_1 + iVar12;
                pFVar16 = param_1 + iVar10;
                if (pFVar15->Ordinal <= pFVar16->Ordinal) break;
                uVar7 = *(undefined4 *)&pFVar15->field_0x4;
                uVar2 = pFVar15->OperatorID;
                iVar10 = pFVar16->Ordinal;
                uVar8 = *(undefined4 *)&pFVar16->field_0x4;
                uVar3 = pFVar16->OperatorID;
                pIVar4 = pFVar16->Operator;
                p_Var5 = pFVar16->Function;
                pFVar16->Ordinal = pFVar15->Ordinal;
                *(undefined4 *)&pFVar16->field_0x4 = uVar7;
                pFVar16->OperatorID = uVar2;
                p_Var6 = pFVar15->Function;
                pFVar16->Operator = pFVar15->Operator;
                pFVar16->Function = p_Var6;
                pFVar15->Ordinal = iVar10;
                *(undefined4 *)&pFVar15->field_0x4 = uVar8;
                pFVar15->OperatorID = uVar3;
                pFVar15->Operator = pIVar4;
                pFVar15->Function = p_Var5;
                iVar10 = iVar12;
              } while (iVar12 * 2 + 1 < iVar11);
            }
            iVar11 = iVar11 + -1;
            lVar14 = lVar14 + -1;
            pFVar18 = pFVar18 + -1;
          } while (0 < lVar14);
        }
        return;
      }
      iVar10 = iVar17 + -1;
      iVar11 = iVar12 + -2;
      iVar12 = iVar11;
      iVar17 = iVar10;
    }
    iVar11 = iVar10 * 2;
    iVar13 = iVar11 + 1;
    if (iVar11 + 2 < param_2) {
      if (param_1[(longlong)iVar11 + 2].Ordinal < param_1[iVar13].Ordinal) {
        iVar13 = iVar11;
      }
      iVar13 = iVar13 + 1;
    }
    pFVar18 = param_1 + iVar13;
    pFVar15 = param_1 + iVar10;
    if (pFVar18->Ordinal <= pFVar15->Ordinal) goto LAB_14ad30bb6;
    uVar7 = *(undefined4 *)&pFVar18->field_0x4;
    uVar2 = pFVar18->OperatorID;
    iVar11 = iVar13 * 2 + 1;
    iVar10 = pFVar15->Ordinal;
    uVar8 = *(undefined4 *)&pFVar15->field_0x4;
    uVar3 = pFVar15->OperatorID;
    pIVar4 = pFVar15->Operator;
    p_Var5 = pFVar15->Function;
    pFVar15->Ordinal = pFVar18->Ordinal;
    *(undefined4 *)&pFVar15->field_0x4 = uVar7;
    pFVar15->OperatorID = uVar2;
    p_Var6 = pFVar18->Function;
    pFVar15->Operator = pFVar18->Operator;
    pFVar15->Function = p_Var6;
    pFVar18->Ordinal = iVar10;
    *(undefined4 *)&pFVar18->field_0x4 = uVar8;
    pFVar18->OperatorID = uVar3;
    pFVar18->Operator = pIVar4;
    pFVar18->Function = p_Var5;
    iVar10 = iVar13;
  } while( true );
}

// HeapSortInternal<Metasound::DynamicGraph::Debug::FOperatorEdge,int,FIdentityFunctor,TDereferenceWrapper<Metasound::DynamicGraph::Debug::FOperatorEdge,TLess<void>_>_> @ 14ad30cb0

void __cdecl
AlgoImpl::
HeapSortInternal<Metasound::DynamicGraph::Debug::FOperatorEdge,int,FIdentityFunctor,TDereferenceWrapper<Metasound::DynamicGraph::Debug::FOperatorEdge,TLess<void>_>_>
          (FOperatorEdge *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<Metasound::DynamicGraph::Debug::FOperatorEdge,TLess<void>_> param_4)

{
  code *pcVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  FName FVar5;
  FName FVar6;
  FName FVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  FOperatorEdge *pFVar13;
  FOperatorEdge *pFVar14;
  longlong lVar15;
  FOperatorEdge *pFVar16;
  int iVar17;
  
  if (param_2 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar9 = (param_2 + -2) / 2;
  iVar10 = iVar9 * 2 + 1;
  iVar17 = iVar10;
  iVar12 = iVar9;
  do {
    while (param_2 <= iVar10) {
LAB_14ad30ddf:
      if (iVar12 == 0) {
        iVar10 = param_2 + -1;
        lVar15 = (longlong)iVar10;
        if (0 < iVar10) {
          pFVar16 = param_1 + lVar15;
          do {
            uVar2 = pFVar16->ToOperator;
            uVar3 = param_1->FromOperator;
            uVar4 = param_1->ToOperator;
            FVar5 = param_1->FromVertex;
            FVar6 = param_1->ToVertex;
            param_1->FromOperator = pFVar16->FromOperator;
            param_1->ToOperator = uVar2;
            FVar7 = pFVar16->ToVertex;
            param_1->FromVertex = pFVar16->FromVertex;
            param_1->ToVertex = FVar7;
            pFVar16->FromOperator = uVar3;
            pFVar16->ToOperator = uVar4;
            pFVar16->FromVertex = FVar5;
            pFVar16->ToVertex = FVar6;
            iVar17 = 0;
            if (1 < iVar10) {
              do {
                iVar9 = iVar17 * 2;
                iVar12 = iVar9 + 1;
                if (iVar9 + 2 < iVar10) {
                  bVar8 = Metasound::DynamicGraph::Debug::operator<
                                    (param_1 + (iVar9 + 2),param_1 + iVar12);
                  if (bVar8) {
                    iVar12 = iVar9;
                  }
                  iVar12 = iVar12 + 1;
                }
                pFVar14 = param_1 + iVar12;
                pFVar13 = param_1 + iVar17;
                bVar8 = Metasound::DynamicGraph::Debug::operator<(pFVar13,pFVar14);
                if (!bVar8) break;
                uVar2 = pFVar14->ToOperator;
                uVar3 = pFVar13->FromOperator;
                uVar4 = pFVar13->ToOperator;
                FVar5 = pFVar13->FromVertex;
                FVar6 = pFVar13->ToVertex;
                pFVar13->FromOperator = pFVar14->FromOperator;
                pFVar13->ToOperator = uVar2;
                FVar7 = pFVar14->ToVertex;
                pFVar13->FromVertex = pFVar14->FromVertex;
                pFVar13->ToVertex = FVar7;
                pFVar14->FromOperator = uVar3;
                pFVar14->ToOperator = uVar4;
                pFVar14->FromVertex = FVar5;
                pFVar14->ToVertex = FVar6;
                iVar17 = iVar12;
              } while (iVar12 * 2 + 1 < iVar10);
            }
            iVar10 = iVar10 + -1;
            lVar15 = lVar15 + -1;
            pFVar16 = pFVar16 + -1;
          } while (0 < lVar15);
        }
        return;
      }
      iVar9 = iVar12 + -1;
      iVar10 = iVar17 + -2;
      iVar17 = iVar10;
      iVar12 = iVar9;
    }
    iVar10 = iVar9 * 2;
    iVar11 = iVar10 + 1;
    if (iVar10 + 2 < param_2) {
      bVar8 = Metasound::DynamicGraph::Debug::operator<(param_1 + (iVar10 + 2),param_1 + iVar11);
      if (bVar8) {
        iVar11 = iVar10;
      }
      iVar11 = iVar11 + 1;
    }
    pFVar13 = param_1 + iVar11;
    pFVar16 = param_1 + iVar9;
    bVar8 = Metasound::DynamicGraph::Debug::operator<(pFVar16,pFVar13);
    if (!bVar8) goto LAB_14ad30ddf;
    uVar2 = pFVar13->ToOperator;
    iVar10 = iVar11 * 2 + 1;
    uVar3 = pFVar16->FromOperator;
    uVar4 = pFVar16->ToOperator;
    FVar5 = pFVar16->FromVertex;
    FVar6 = pFVar16->ToVertex;
    pFVar16->FromOperator = pFVar13->FromOperator;
    pFVar16->ToOperator = uVar2;
    FVar7 = pFVar13->ToVertex;
    pFVar16->FromVertex = pFVar13->FromVertex;
    pFVar16->ToVertex = FVar7;
    pFVar13->FromOperator = uVar3;
    pFVar13->ToOperator = uVar4;
    pFVar13->FromVertex = FVar5;
    pFVar13->ToVertex = FVar6;
    iVar9 = iVar11;
  } while( true );
}

// HeapSortInternal<Metasound::DynamicGraph::FOrdinalSwap,int,FIdentityFunctor,bool_(__cdecl*)(Metasound::DynamicGraph::FOrdinalSwap_const_&,Metasound::DynamicGraph::FOrdinalSwap_const_&)> @ 14ad30f00

void __cdecl
AlgoImpl::
HeapSortInternal<Metasound::DynamicGraph::FOrdinalSwap,int,FIdentityFunctor,bool_(__cdecl*)(Metasound::DynamicGraph::FOrdinalSwap_const_&,Metasound::DynamicGraph::FOrdinalSwap_const_&)>
          (FOrdinalSwap *param_1,int param_2,FIdentityFunctor param_3,
          _func___cdecl_bool_FOrdinalSwap_ptr_FOrdinalSwap_ptr *param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong64 uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  FOrdinalSwap *pFVar14;
  FOrdinalSwap *pFVar15;
  FOrdinalSwap *pFVar16;
  int iVar17;
  
  if (param_2 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar9 = (param_2 + -2) / 2;
  iVar10 = iVar9 * 2 + 1;
  iVar17 = iVar10;
  iVar13 = iVar9;
  do {
    while (param_2 <= iVar10) {
LAB_14ad3101f:
      if (iVar13 == 0) {
        iVar10 = param_2 + -1;
        lVar11 = (longlong)iVar10;
        if (0 < iVar10) {
          pFVar16 = param_1 + lVar11;
          do {
            uVar2 = *(undefined4 *)((longlong)&pFVar16->OperatorID + 4);
            iVar17 = pFVar16->OriginalOrdinal;
            iVar9 = pFVar16->NewOrdinal;
            uVar7 = param_1->OperatorID;
            uVar3 = *(undefined4 *)((longlong)&param_1->OperatorID + 4);
            iVar13 = param_1->OriginalOrdinal;
            iVar12 = param_1->NewOrdinal;
            *(int *)&param_1->OperatorID = (int)pFVar16->OperatorID;
            *(undefined4 *)((longlong)&param_1->OperatorID + 4) = uVar2;
            param_1->OriginalOrdinal = iVar17;
            param_1->NewOrdinal = iVar9;
            *(int *)&pFVar16->OperatorID = (int)uVar7;
            *(undefined4 *)((longlong)&pFVar16->OperatorID + 4) = uVar3;
            pFVar16->OriginalOrdinal = iVar13;
            pFVar16->NewOrdinal = iVar12;
            iVar17 = 0;
            if (1 < iVar10) {
              do {
                iVar9 = iVar17 * 2;
                iVar13 = iVar9 + 1;
                if (iVar9 + 2 < iVar10) {
                  bVar8 = (*param_4)(param_1 + (iVar9 + 2),param_1 + iVar13);
                  if (bVar8) {
                    iVar13 = iVar9;
                  }
                  iVar13 = iVar13 + 1;
                }
                pFVar15 = param_1 + iVar13;
                pFVar14 = param_1 + iVar17;
                bVar8 = (*param_4)(pFVar14,pFVar15);
                if (!bVar8) break;
                uVar2 = *(undefined4 *)((longlong)&pFVar15->OperatorID + 4);
                iVar17 = pFVar15->OriginalOrdinal;
                iVar9 = pFVar15->NewOrdinal;
                uVar7 = pFVar14->OperatorID;
                uVar3 = *(undefined4 *)((longlong)&pFVar14->OperatorID + 4);
                iVar12 = pFVar14->OriginalOrdinal;
                iVar4 = pFVar14->NewOrdinal;
                *(int *)&pFVar14->OperatorID = (int)pFVar15->OperatorID;
                *(undefined4 *)((longlong)&pFVar14->OperatorID + 4) = uVar2;
                pFVar14->OriginalOrdinal = iVar17;
                pFVar14->NewOrdinal = iVar9;
                *(int *)&pFVar15->OperatorID = (int)uVar7;
                *(undefined4 *)((longlong)&pFVar15->OperatorID + 4) = uVar3;
                pFVar15->OriginalOrdinal = iVar12;
                pFVar15->NewOrdinal = iVar4;
                iVar17 = iVar13;
              } while (iVar13 * 2 + 1 < iVar10);
            }
            lVar11 = lVar11 + -1;
            iVar10 = iVar10 + -1;
            pFVar16 = pFVar16 + -1;
          } while (0 < lVar11);
        }
        return;
      }
      iVar9 = iVar13 + -1;
      iVar10 = iVar17 + -2;
      iVar17 = iVar10;
      iVar13 = iVar9;
    }
    iVar10 = iVar9 * 2;
    iVar12 = iVar10 + 1;
    if (iVar10 + 2 < param_2) {
      bVar8 = (*param_4)(param_1 + (iVar10 + 2),param_1 + iVar12);
      if (bVar8) {
        iVar12 = iVar10;
      }
      iVar12 = iVar12 + 1;
    }
    pFVar14 = param_1 + iVar12;
    pFVar16 = param_1 + iVar9;
    bVar8 = (*param_4)(pFVar16,pFVar14);
    if (!bVar8) goto LAB_14ad3101f;
    iVar9 = pFVar14->OriginalOrdinal;
    iVar4 = pFVar14->NewOrdinal;
    iVar10 = iVar12 * 2 + 1;
    uVar7 = pFVar16->OperatorID;
    iVar5 = pFVar16->OriginalOrdinal;
    iVar6 = pFVar16->NewOrdinal;
    pFVar16->OperatorID = pFVar14->OperatorID;
    pFVar16->OriginalOrdinal = iVar9;
    pFVar16->NewOrdinal = iVar4;
    pFVar14->OperatorID = uVar7;
    pFVar14->OriginalOrdinal = iVar5;
    pFVar14->NewOrdinal = iVar6;
    iVar9 = iVar12;
  } while( true );
}

// HeapSortInternal<Metasound::DynamicGraph::FOrdinalSwap,int,FIdentityFunctor,TDereferenceWrapper<Metasound::DynamicGraph::FOrdinalSwap,bool___cdecl(Metasound::DynamicGraph::FOrdinalSwap_const_&,Metasound::DynamicGraph::FOrdinalSwap_const_&)>_> @ 14ad31130

void __cdecl
AlgoImpl::
HeapSortInternal<Metasound::DynamicGraph::FOrdinalSwap,int,FIdentityFunctor,TDereferenceWrapper<Metasound::DynamicGraph::FOrdinalSwap,bool___cdecl(Metasound::DynamicGraph::FOrdinalSwap_const_&,Metasound::DynamicGraph::FOrdinalSwap_const_&)>_>
          (FOrdinalSwap *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<Metasound::DynamicGraph::FOrdinalSwap,bool___cdecl(Metasound::DynamicGraph::FOrdinalSwap_const_&,Metasound::DynamicGraph::FOrdinalSwap_const_&)>
          param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong64 uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  FOrdinalSwap *pFVar14;
  int iVar15;
  FOrdinalSwap *pFVar16;
  FOrdinalSwap *pFVar17;
  
  if (param_2 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar9 = (param_2 + -2) / 2;
  iVar10 = iVar9 * 2 + 1;
  iVar15 = iVar10;
  iVar12 = iVar9;
  do {
    while (param_2 <= iVar10) {
LAB_14ad3124b:
      if (iVar12 == 0) {
        iVar10 = param_2 + -1;
        lVar13 = (longlong)iVar10;
        if (0 < iVar10) {
          pFVar14 = param_1 + lVar13;
          do {
            uVar2 = *(undefined4 *)((longlong)&pFVar14->OperatorID + 4);
            iVar15 = pFVar14->OriginalOrdinal;
            iVar9 = pFVar14->NewOrdinal;
            uVar7 = param_1->OperatorID;
            uVar3 = *(undefined4 *)((longlong)&param_1->OperatorID + 4);
            iVar12 = param_1->OriginalOrdinal;
            iVar11 = param_1->NewOrdinal;
            *(int *)&param_1->OperatorID = (int)pFVar14->OperatorID;
            *(undefined4 *)((longlong)&param_1->OperatorID + 4) = uVar2;
            param_1->OriginalOrdinal = iVar15;
            param_1->NewOrdinal = iVar9;
            *(int *)&pFVar14->OperatorID = (int)uVar7;
            *(undefined4 *)((longlong)&pFVar14->OperatorID + 4) = uVar3;
            pFVar14->OriginalOrdinal = iVar12;
            pFVar14->NewOrdinal = iVar11;
            iVar15 = 0;
            if (1 < iVar10) {
              do {
                iVar12 = iVar15 * 2;
                iVar9 = iVar12 + 1;
                if (iVar12 + 2 < iVar10) {
                  bVar8 = (*param_4.Predicate)(param_1 + (iVar12 + 2),param_1 + iVar9);
                  if (bVar8) {
                    iVar9 = iVar12;
                  }
                  iVar9 = iVar9 + 1;
                }
                pFVar16 = param_1 + iVar9;
                pFVar17 = param_1 + iVar15;
                bVar8 = (*param_4.Predicate)(pFVar17,pFVar16);
                if (!bVar8) break;
                uVar7 = pFVar17->OperatorID;
                uVar2 = *(undefined4 *)((longlong)&pFVar17->OperatorID + 4);
                iVar15 = pFVar17->OriginalOrdinal;
                iVar12 = pFVar17->NewOrdinal;
                uVar3 = *(undefined4 *)((longlong)&pFVar16->OperatorID + 4);
                iVar11 = pFVar16->OriginalOrdinal;
                iVar4 = pFVar16->NewOrdinal;
                *(int *)&pFVar17->OperatorID = (int)pFVar16->OperatorID;
                *(undefined4 *)((longlong)&pFVar17->OperatorID + 4) = uVar3;
                pFVar17->OriginalOrdinal = iVar11;
                pFVar17->NewOrdinal = iVar4;
                *(int *)&pFVar16->OperatorID = (int)uVar7;
                *(undefined4 *)((longlong)&pFVar16->OperatorID + 4) = uVar2;
                pFVar16->OriginalOrdinal = iVar15;
                pFVar16->NewOrdinal = iVar12;
                iVar15 = iVar9;
              } while (iVar9 * 2 + 1 < iVar10);
            }
            iVar10 = iVar10 + -1;
            lVar13 = lVar13 + -1;
            pFVar14 = pFVar14 + -1;
          } while (0 < lVar13);
        }
        return;
      }
      iVar9 = iVar12 + -1;
      iVar10 = iVar15 + -2;
      iVar15 = iVar10;
      iVar12 = iVar9;
    }
    iVar10 = iVar9 * 2;
    iVar11 = iVar10 + 1;
    if (iVar10 + 2 < param_2) {
      bVar8 = (*param_4.Predicate)(param_1 + (iVar10 + 2),param_1 + iVar11);
      if (bVar8) {
        iVar11 = iVar10;
      }
      iVar11 = iVar11 + 1;
    }
    pFVar14 = param_1 + iVar11;
    pFVar16 = param_1 + iVar9;
    bVar8 = (*param_4.Predicate)(pFVar16,pFVar14);
    if (!bVar8) goto LAB_14ad3124b;
    uVar7 = pFVar16->OperatorID;
    iVar5 = pFVar16->OriginalOrdinal;
    iVar6 = pFVar16->NewOrdinal;
    iVar10 = iVar11 * 2 + 1;
    iVar9 = pFVar14->OriginalOrdinal;
    iVar4 = pFVar14->NewOrdinal;
    pFVar16->OperatorID = pFVar14->OperatorID;
    pFVar16->OriginalOrdinal = iVar9;
    pFVar16->NewOrdinal = iVar4;
    pFVar14->OperatorID = uVar7;
    pFVar14->OriginalOrdinal = iVar5;
    pFVar14->NewOrdinal = iVar6;
    iVar9 = iVar11;
  } while( true );
}

// HeapSortInternal<Metasound::DynamicGraph::FPostExecuteEntry,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FPostExecuteEntry>,TLess<void>_> @ 14ad31350

void __cdecl
AlgoImpl::
HeapSortInternal<Metasound::DynamicGraph::FPostExecuteEntry,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FPostExecuteEntry>,TLess<void>_>
          (FPostExecuteEntry *param_1,int param_2,
          TGetOrdinal<Metasound::DynamicGraph::FPostExecuteEntry> param_3,TLess<void> param_4)

{
  code *pcVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  IOperator *pIVar4;
  _func___cdecl_void_IOperator_ptr *p_Var5;
  _func___cdecl_void_IOperator_ptr *p_Var6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  FPostExecuteEntry *pFVar15;
  FPostExecuteEntry *pFVar16;
  int iVar17;
  FPostExecuteEntry *pFVar18;
  
  if (param_2 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar9) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar9) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar10 = (param_2 + -2) / 2;
  iVar11 = iVar10 * 2 + 1;
  iVar12 = iVar11;
  iVar17 = iVar10;
  do {
    while (param_2 <= iVar11) {
LAB_14ad31456:
      if (iVar17 == 0) {
        iVar11 = param_2 + -1;
        lVar14 = (longlong)iVar11;
        if (0 < iVar11) {
          pFVar18 = param_1 + lVar14;
          do {
            uVar7 = *(undefined4 *)&pFVar18->field_0x4;
            uVar2 = pFVar18->OperatorID;
            iVar10 = 0;
            iVar12 = param_1->Ordinal;
            uVar8 = *(undefined4 *)&param_1->field_0x4;
            uVar3 = param_1->OperatorID;
            pIVar4 = param_1->Operator;
            p_Var5 = param_1->Function;
            param_1->Ordinal = pFVar18->Ordinal;
            *(undefined4 *)&param_1->field_0x4 = uVar7;
            param_1->OperatorID = uVar2;
            p_Var6 = pFVar18->Function;
            param_1->Operator = pFVar18->Operator;
            param_1->Function = p_Var6;
            pFVar18->Ordinal = iVar12;
            *(undefined4 *)&pFVar18->field_0x4 = uVar8;
            pFVar18->OperatorID = uVar3;
            pFVar18->Operator = pIVar4;
            pFVar18->Function = p_Var5;
            if (1 < iVar11) {
              do {
                iVar17 = iVar10 * 2;
                iVar12 = iVar17 + 1;
                if (iVar17 + 2 < iVar11) {
                  if (param_1[(longlong)iVar17 + 2].Ordinal < param_1[iVar12].Ordinal) {
                    iVar12 = iVar17;
                  }
                  iVar12 = iVar12 + 1;
                }
                pFVar15 = param_1 + iVar12;
                pFVar16 = param_1 + iVar10;
                if (pFVar15->Ordinal <= pFVar16->Ordinal) break;
                uVar7 = *(undefined4 *)&pFVar15->field_0x4;
                uVar2 = pFVar15->OperatorID;
                iVar10 = pFVar16->Ordinal;
                uVar8 = *(undefined4 *)&pFVar16->field_0x4;
                uVar3 = pFVar16->OperatorID;
                pIVar4 = pFVar16->Operator;
                p_Var5 = pFVar16->Function;
                pFVar16->Ordinal = pFVar15->Ordinal;
                *(undefined4 *)&pFVar16->field_0x4 = uVar7;
                pFVar16->OperatorID = uVar2;
                p_Var6 = pFVar15->Function;
                pFVar16->Operator = pFVar15->Operator;
                pFVar16->Function = p_Var6;
                pFVar15->Ordinal = iVar10;
                *(undefined4 *)&pFVar15->field_0x4 = uVar8;
                pFVar15->OperatorID = uVar3;
                pFVar15->Operator = pIVar4;
                pFVar15->Function = p_Var5;
                iVar10 = iVar12;
              } while (iVar12 * 2 + 1 < iVar11);
            }
            iVar11 = iVar11 + -1;
            lVar14 = lVar14 + -1;
            pFVar18 = pFVar18 + -1;
          } while (0 < lVar14);
        }
        return;
      }
      iVar10 = iVar17 + -1;
      iVar11 = iVar12 + -2;
      iVar12 = iVar11;
      iVar17 = iVar10;
    }
    iVar11 = iVar10 * 2;
    iVar13 = iVar11 + 1;
    if (iVar11 + 2 < param_2) {
      if (param_1[(longlong)iVar11 + 2].Ordinal < param_1[iVar13].Ordinal) {
        iVar13 = iVar11;
      }
      iVar13 = iVar13 + 1;
    }
    pFVar18 = param_1 + iVar13;
    pFVar15 = param_1 + iVar10;
    if (pFVar18->Ordinal <= pFVar15->Ordinal) goto LAB_14ad31456;
    uVar7 = *(undefined4 *)&pFVar18->field_0x4;
    uVar2 = pFVar18->OperatorID;
    iVar11 = iVar13 * 2 + 1;
    iVar10 = pFVar15->Ordinal;
    uVar8 = *(undefined4 *)&pFVar15->field_0x4;
    uVar3 = pFVar15->OperatorID;
    pIVar4 = pFVar15->Operator;
    p_Var5 = pFVar15->Function;
    pFVar15->Ordinal = pFVar18->Ordinal;
    *(undefined4 *)&pFVar15->field_0x4 = uVar7;
    pFVar15->OperatorID = uVar2;
    p_Var6 = pFVar18->Function;
    pFVar15->Operator = pFVar18->Operator;
    pFVar15->Function = p_Var6;
    pFVar18->Ordinal = iVar10;
    *(undefined4 *)&pFVar18->field_0x4 = uVar8;
    pFVar18->OperatorID = uVar3;
    pFVar18->Operator = pIVar4;
    pFVar18->Function = p_Var5;
    iVar10 = iVar13;
  } while( true );
}

// HeapSortInternal<Metasound::DynamicGraph::FResetEntry,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FResetEntry>,TLess<void>_> @ 14ad31550

void __cdecl
AlgoImpl::
HeapSortInternal<Metasound::DynamicGraph::FResetEntry,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FResetEntry>,TLess<void>_>
          (FResetEntry *param_1,int param_2,
          TGetOrdinal<Metasound::DynamicGraph::FResetEntry> param_3,TLess<void> param_4)

{
  code *pcVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  IOperator *pIVar4;
  _func___cdecl_void_IOperator_ptr_FResetParams_ptr *p_Var5;
  _func___cdecl_void_IOperator_ptr_FResetParams_ptr *p_Var6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  FResetEntry *pFVar15;
  FResetEntry *pFVar16;
  int iVar17;
  FResetEntry *pFVar18;
  
  if (param_2 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar9) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar9) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar10 = (param_2 + -2) / 2;
  iVar11 = iVar10 * 2 + 1;
  iVar12 = iVar11;
  iVar17 = iVar10;
  do {
    while (param_2 <= iVar11) {
LAB_14ad31656:
      if (iVar17 == 0) {
        iVar11 = param_2 + -1;
        lVar14 = (longlong)iVar11;
        if (0 < iVar11) {
          pFVar18 = param_1 + lVar14;
          do {
            uVar7 = *(undefined4 *)&pFVar18->field_0x4;
            uVar2 = pFVar18->OperatorID;
            iVar10 = 0;
            iVar12 = param_1->Ordinal;
            uVar8 = *(undefined4 *)&param_1->field_0x4;
            uVar3 = param_1->OperatorID;
            pIVar4 = param_1->Operator;
            p_Var5 = param_1->Function;
            param_1->Ordinal = pFVar18->Ordinal;
            *(undefined4 *)&param_1->field_0x4 = uVar7;
            param_1->OperatorID = uVar2;
            p_Var6 = pFVar18->Function;
            param_1->Operator = pFVar18->Operator;
            param_1->Function = p_Var6;
            pFVar18->Ordinal = iVar12;
            *(undefined4 *)&pFVar18->field_0x4 = uVar8;
            pFVar18->OperatorID = uVar3;
            pFVar18->Operator = pIVar4;
            pFVar18->Function = p_Var5;
            if (1 < iVar11) {
              do {
                iVar17 = iVar10 * 2;
                iVar12 = iVar17 + 1;
                if (iVar17 + 2 < iVar11) {
                  if (param_1[(longlong)iVar17 + 2].Ordinal < param_1[iVar12].Ordinal) {
                    iVar12 = iVar17;
                  }
                  iVar12 = iVar12 + 1;
                }
                pFVar15 = param_1 + iVar12;
                pFVar16 = param_1 + iVar10;
                if (pFVar15->Ordinal <= pFVar16->Ordinal) break;
                uVar7 = *(undefined4 *)&pFVar15->field_0x4;
                uVar2 = pFVar15->OperatorID;
                iVar10 = pFVar16->Ordinal;
                uVar8 = *(undefined4 *)&pFVar16->field_0x4;
                uVar3 = pFVar16->OperatorID;
                pIVar4 = pFVar16->Operator;
                p_Var5 = pFVar16->Function;
                pFVar16->Ordinal = pFVar15->Ordinal;
                *(undefined4 *)&pFVar16->field_0x4 = uVar7;
                pFVar16->OperatorID = uVar2;
                p_Var6 = pFVar15->Function;
                pFVar16->Operator = pFVar15->Operator;
                pFVar16->Function = p_Var6;
                pFVar15->Ordinal = iVar10;
                *(undefined4 *)&pFVar15->field_0x4 = uVar8;
                pFVar15->OperatorID = uVar3;
                pFVar15->Operator = pIVar4;
                pFVar15->Function = p_Var5;
                iVar10 = iVar12;
              } while (iVar12 * 2 + 1 < iVar11);
            }
            iVar11 = iVar11 + -1;
            lVar14 = lVar14 + -1;
            pFVar18 = pFVar18 + -1;
          } while (0 < lVar14);
        }
        return;
      }
      iVar10 = iVar17 + -1;
      iVar11 = iVar12 + -2;
      iVar12 = iVar11;
      iVar17 = iVar10;
    }
    iVar11 = iVar10 * 2;
    iVar13 = iVar11 + 1;
    if (iVar11 + 2 < param_2) {
      if (param_1[(longlong)iVar11 + 2].Ordinal < param_1[iVar13].Ordinal) {
        iVar13 = iVar11;
      }
      iVar13 = iVar13 + 1;
    }
    pFVar18 = param_1 + iVar13;
    pFVar15 = param_1 + iVar10;
    if (pFVar18->Ordinal <= pFVar15->Ordinal) goto LAB_14ad31656;
    uVar7 = *(undefined4 *)&pFVar18->field_0x4;
    uVar2 = pFVar18->OperatorID;
    iVar11 = iVar13 * 2 + 1;
    iVar10 = pFVar15->Ordinal;
    uVar8 = *(undefined4 *)&pFVar15->field_0x4;
    uVar3 = pFVar15->OperatorID;
    pIVar4 = pFVar15->Operator;
    p_Var5 = pFVar15->Function;
    pFVar15->Ordinal = pFVar18->Ordinal;
    *(undefined4 *)&pFVar15->field_0x4 = uVar7;
    pFVar15->OperatorID = uVar2;
    p_Var6 = pFVar18->Function;
    pFVar15->Operator = pFVar18->Operator;
    pFVar15->Function = p_Var6;
    pFVar18->Ordinal = iVar10;
    *(undefined4 *)&pFVar18->field_0x4 = uVar8;
    pFVar18->OperatorID = uVar3;
    pFVar18->Operator = pIVar4;
    pFVar18->Function = p_Var5;
    iVar10 = iVar13;
  } while( true );
}

// HeapSortInternal<Metasound::FVertexDataState,int,FIdentityFunctor,TDereferenceWrapper<Metasound::FVertexDataState,TLess<void>_>_> @ 14ad31750

void __cdecl
AlgoImpl::
HeapSortInternal<Metasound::FVertexDataState,int,FIdentityFunctor,TDereferenceWrapper<Metasound::FVertexDataState,TLess<void>_>_>
          (FVertexDataState *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<Metasound::FVertexDataState,TLess<void>_> param_4)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  void *pvVar4;
  FName FVar5;
  void *pvVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  FVertexDataState *pFVar11;
  int iVar12;
  FVertexDataState *pFVar13;
  longlong lVar14;
  int iVar15;
  FVertexDataState *pFVar16;
  TLess<void> *local_res20;
  
  local_res20 = param_4.Predicate;
  if (param_2 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  HeapifyInternal<Metasound::FVertexDataState,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<Metasound::FVertexDataState,TLess<void>_>_>_>
            (param_1,param_2,param_3,
             (TDereferenceWrapper<Metasound::FVertexDataState,TLess<void>_> *)&local_res20);
  iVar15 = param_2 + -1;
  lVar14 = (longlong)iVar15;
  if (0 < iVar15) {
    pFVar16 = param_1 + lVar14;
    do {
      pvVar4 = pFVar16->ID;
      FVar5 = param_1->VertexName;
      pvVar6 = param_1->ID;
      param_1->VertexName = pFVar16->VertexName;
      param_1->ID = pvVar4;
      pFVar16->VertexName = FVar5;
      pFVar16->ID = pvVar6;
      iVar12 = 0;
      if (1 < iVar15) {
        do {
          iVar9 = iVar12 * 2;
          iVar10 = iVar9 + 1;
          if (iVar9 + 2 < iVar15) {
            pFVar13 = param_1 + (longlong)iVar9 + 2;
            pFVar11 = param_1 + (longlong)iVar9 + 1;
            uVar1 = (pFVar13->VertexName).ComparisonIndex.Value;
            uVar2 = (pFVar11->VertexName).ComparisonIndex.Value;
            iVar8 = uVar1 - uVar2;
            if (iVar8 == 0) {
              iVar8 = (pFVar13->VertexName).Number - (pFVar11->VertexName).Number;
            }
            if (iVar8 < 0) {
              bVar7 = true;
            }
            else {
              iVar8 = uVar2 - uVar1;
              if (iVar8 == 0) {
                iVar8 = (pFVar11->VertexName).Number - (pFVar13->VertexName).Number;
              }
              bVar7 = false;
              if (-1 < iVar8) {
                bVar7 = pFVar13->ID < pFVar11->ID;
              }
            }
            if (bVar7) {
              iVar10 = iVar9;
            }
            iVar10 = iVar10 + 1;
          }
          pFVar11 = param_1 + iVar12;
          pFVar13 = param_1 + iVar10;
          uVar1 = (pFVar11->VertexName).ComparisonIndex.Value;
          uVar2 = (pFVar13->VertexName).ComparisonIndex.Value;
          iVar9 = uVar1 - uVar2;
          if (iVar9 == 0) {
            iVar9 = (pFVar11->VertexName).Number - (pFVar13->VertexName).Number;
          }
          if (-1 < iVar9) {
            iVar9 = uVar2 - uVar1;
            if (iVar9 == 0) {
              iVar9 = (pFVar13->VertexName).Number - (pFVar11->VertexName).Number;
            }
            if ((iVar9 < 0) || (pFVar13->ID <= pFVar11->ID)) break;
          }
          pvVar4 = param_1[iVar10].ID;
          FVar5 = param_1[iVar12].VertexName;
          pvVar6 = param_1[iVar12].ID;
          param_1[iVar12].VertexName = param_1[iVar10].VertexName;
          param_1[iVar12].ID = pvVar4;
          param_1[iVar10].VertexName = FVar5;
          param_1[iVar10].ID = pvVar6;
          iVar12 = iVar10;
        } while (iVar10 * 2 + 1 < iVar15);
      }
      iVar15 = iVar15 + -1;
      lVar14 = lVar14 + -1;
      pFVar16 = pFVar16 + -1;
    } while (0 < lVar14);
  }
  return;
}

// HeapifyInternal<Metasound::FVertexDataState,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<Metasound::FVertexDataState,TLess<void>_>_>_> @ 14ad31930

void __cdecl
AlgoImpl::
HeapifyInternal<Metasound::FVertexDataState,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<Metasound::FVertexDataState,TLess<void>_>_>_>
          (FVertexDataState *param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<TDereferenceWrapper<Metasound::FVertexDataState,TLess<void>_>_> param_4)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  void *pvVar5;
  FName FVar6;
  void *pvVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  FVertexDataState *pFVar13;
  FVertexDataState *pFVar14;
  int iVar15;
  
  if (param_2 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar9 = (param_2 + -2) / 2;
  iVar11 = iVar9 * 2 + 1;
  iVar4 = iVar11;
  iVar15 = iVar9;
  do {
    while (param_2 <= iVar11) {
LAB_14ad31a9d:
      if (iVar15 == 0) {
        return;
      }
      iVar9 = iVar15 + -1;
      iVar11 = iVar4 + -2;
      iVar4 = iVar11;
      iVar15 = iVar9;
    }
    iVar11 = iVar9 * 2;
    iVar12 = iVar11 + 1;
    if (iVar11 + 2 < param_2) {
      pFVar14 = param_1 + (longlong)iVar11 + 2;
      pFVar13 = param_1 + (longlong)iVar11 + 1;
      uVar1 = (pFVar14->VertexName).ComparisonIndex.Value;
      uVar2 = (pFVar13->VertexName).ComparisonIndex.Value;
      iVar10 = uVar1 - uVar2;
      if (iVar10 == 0) {
        iVar10 = (pFVar14->VertexName).Number - (pFVar13->VertexName).Number;
      }
      if (iVar10 < 0) {
        bVar8 = true;
      }
      else {
        iVar10 = uVar2 - uVar1;
        if (iVar10 == 0) {
          iVar10 = (pFVar13->VertexName).Number - (pFVar14->VertexName).Number;
        }
        bVar8 = false;
        if (-1 < iVar10) {
          bVar8 = pFVar14->ID < pFVar13->ID;
        }
      }
      if (bVar8) {
        iVar12 = iVar11;
      }
      iVar12 = iVar12 + 1;
    }
    pFVar13 = param_1 + iVar9;
    pFVar14 = param_1 + iVar12;
    uVar1 = (pFVar13->VertexName).ComparisonIndex.Value;
    uVar2 = (pFVar14->VertexName).ComparisonIndex.Value;
    iVar11 = uVar1 - uVar2;
    if (iVar11 == 0) {
      iVar11 = (pFVar13->VertexName).Number - (pFVar14->VertexName).Number;
    }
    if (-1 < iVar11) {
      iVar11 = uVar2 - uVar1;
      if (iVar11 == 0) {
        iVar11 = (pFVar14->VertexName).Number - (pFVar13->VertexName).Number;
      }
      if ((iVar11 < 0) || (pFVar14->ID <= pFVar13->ID)) goto LAB_14ad31a9d;
    }
    iVar11 = iVar12 * 2 + 1;
    pvVar5 = param_1[iVar12].ID;
    FVar6 = param_1[iVar9].VertexName;
    pvVar7 = param_1[iVar9].ID;
    param_1[iVar9].VertexName = param_1[iVar12].VertexName;
    param_1[iVar9].ID = pvVar5;
    param_1[iVar12].VertexName = FVar6;
    param_1[iVar12].ID = pvVar7;
    iVar9 = iVar12;
  } while( true );
}

// IntroSortInternal<Metasound::DynamicGraph::FExecuteEntry_const_,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FExecuteEntry_const_>,TLess<void>_> @ 14ad31ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<Metasound::DynamicGraph::FExecuteEntry_const_,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FExecuteEntry_const_>,TLess<void>_>
          (FExecuteEntry *param_1,int param_2,
          TGetOrdinal<Metasound::DynamicGraph::FExecuteEntry_const_> param_3,TLess<void> param_4)

{
  FExecuteEntry *pFVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  IOperator *pIVar4;
  _func___cdecl_void_IOperator_ptr *p_Var5;
  _func___cdecl_void_IOperator_ptr *p_Var6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  FExecuteEntry *pFVar10;
  FExecuteEntry **ppFVar11;
  FExecuteEntry *pFVar12;
  FExecuteEntry *pFVar13;
  FExecuteEntry *pFVar14;
  FExecuteEntry *pFVar15;
  FExecuteEntry *pFVar16;
  float fVar17;
  undefined1 auStack_368 [48];
  FExecuteEntry *local_338;
  FExecuteEntry *local_328;
  FExecuteEntry *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar17 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar17;
    memset(local_310,0,0x2e8);
    ppFVar11 = &local_328;
    do {
      pFVar14 = ppFVar11[1];
      pFVar16 = *ppFVar11;
      pFVar1 = ppFVar11[2];
      iVar9 = (int)((longlong)pFVar14 - (longlong)pFVar16 >> 5) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar15 = pFVar16;
      if ((int)local_338 != 0) {
LAB_14ad31b90:
        if (8 < iVar9) {
          uVar7 = *(undefined4 *)&pFVar15->field_0x4;
          uVar2 = pFVar15->OperatorID;
          pFVar12 = pFVar14 + 1;
          pFVar16 = pFVar15 + iVar9 / 2;
          iVar9 = pFVar16->Ordinal;
          uVar8 = *(undefined4 *)&pFVar16->field_0x4;
          uVar3 = pFVar16->OperatorID;
          pIVar4 = pFVar16->Operator;
          p_Var5 = pFVar16->Function;
          pFVar16->Ordinal = pFVar15->Ordinal;
          *(undefined4 *)&pFVar16->field_0x4 = uVar7;
          pFVar16->OperatorID = uVar2;
          p_Var6 = pFVar15->Function;
          pFVar16->Operator = pFVar15->Operator;
          pFVar16->Function = p_Var6;
          pFVar15->Ordinal = iVar9;
          *(undefined4 *)&pFVar15->field_0x4 = uVar8;
          pFVar15->OperatorID = uVar3;
          pFVar15->Operator = pIVar4;
          pFVar15->Function = p_Var5;
          pFVar16 = pFVar15;
LAB_14ad31bd0:
          pFVar10 = pFVar16;
          pFVar16 = pFVar10 + 1;
          if (pFVar16 <= pFVar14) goto code_r0x00014ad31bd9;
          goto LAB_14ad31be0;
        }
        for (; pFVar16 = pFVar15, pFVar1 = pFVar15, pFVar15 < pFVar14; pFVar14 = pFVar14 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar14) {
            if (pFVar16->Ordinal < pFVar1->Ordinal) {
              pFVar16 = pFVar1;
            }
          }
          iVar9 = pFVar16->Ordinal;
          uVar8 = *(undefined4 *)&pFVar16->field_0x4;
          uVar2 = pFVar16->OperatorID;
          pIVar4 = pFVar16->Operator;
          p_Var5 = pFVar16->Function;
          uVar7 = *(undefined4 *)&pFVar14->field_0x4;
          uVar3 = pFVar14->OperatorID;
          pFVar16->Ordinal = pFVar14->Ordinal;
          *(undefined4 *)&pFVar16->field_0x4 = uVar7;
          pFVar16->OperatorID = uVar3;
          p_Var6 = pFVar14->Function;
          pFVar16->Operator = pFVar14->Operator;
          pFVar16->Function = p_Var6;
          pFVar14->Ordinal = iVar9;
          *(undefined4 *)&pFVar14->field_0x4 = uVar8;
          pFVar14->OperatorID = uVar2;
          pFVar14->Operator = pIVar4;
          pFVar14->Function = p_Var5;
        }
        goto LAB_14ad31cc6;
      }
LAB_14ad31cb4:
      local_338 = pFVar1;
      HeapSortInternal<Metasound::DynamicGraph::FExecuteEntry_const_,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FExecuteEntry_const_>,TLess<void>_>
                (pFVar16,iVar9,param_3,param_4);
LAB_14ad31cc6:
      ppFVar11 = ppFVar11 + -3;
    } while (&local_328 <= ppFVar11);
  }
  return;
code_r0x00014ad31bd9:
  if (pFVar16->Ordinal <= pFVar15->Ordinal) goto LAB_14ad31bd0;
LAB_14ad31be0:
  do {
    pFVar13 = pFVar12;
    pFVar12 = pFVar13 + -1;
    if (pFVar12 <= pFVar15) break;
  } while (pFVar15->Ordinal <= pFVar12->Ordinal);
  uVar2 = pFVar13[-1].OperatorID;
  if (pFVar16 <= pFVar12) {
    uVar7 = *(undefined4 *)&pFVar16->field_0x4;
    uVar3 = pFVar10[1].OperatorID;
    pIVar4 = pFVar10[1].Operator;
    p_Var5 = pFVar10[1].Function;
    *(undefined8 *)pFVar16 = *(undefined8 *)pFVar12;
    pFVar10[1].OperatorID = uVar2;
    p_Var6 = pFVar13[-1].Function;
    pFVar10[1].Operator = pFVar13[-1].Operator;
    pFVar10[1].Function = p_Var6;
    pFVar12->Ordinal = pFVar16->Ordinal;
    *(undefined4 *)&pFVar12->field_0x4 = uVar7;
    pFVar13[-1].OperatorID = uVar3;
    pFVar13[-1].Operator = pIVar4;
    pFVar13[-1].Function = p_Var5;
    goto LAB_14ad31bd0;
  }
  uVar7 = *(undefined4 *)&pFVar15->field_0x4;
  uVar3 = pFVar15->OperatorID;
  pIVar4 = pFVar15->Operator;
  p_Var5 = pFVar15->Function;
  *(undefined8 *)pFVar15 = *(undefined8 *)pFVar12;
  pFVar15->OperatorID = uVar2;
  local_338._0_4_ = (int)local_338 + -1;
  p_Var6 = pFVar13[-1].Function;
  pFVar15->Operator = pFVar13[-1].Operator;
  pFVar15->Function = p_Var6;
  pFVar12->Ordinal = pFVar15->Ordinal;
  *(undefined4 *)&pFVar12->field_0x4 = uVar7;
  pFVar13[-1].OperatorID = uVar3;
  pFVar13[-1].Operator = pIVar4;
  pFVar13[-1].Function = p_Var5;
  if ((longlong)((longlong)pFVar12 + (-0x20 - (longlong)pFVar15) & 0xffffffffffffffe0U) <
      (longlong)((longlong)pFVar14 - (longlong)pFVar16 & 0xffffffffffffffe0U)) {
    if (pFVar16 < pFVar14) {
      *ppFVar11 = pFVar16;
      ppFVar11[1] = pFVar14;
      *(int *)(ppFVar11 + 2) = (int)local_338;
      ppFVar11 = ppFVar11 + 3;
    }
    if (pFVar12 <= pFVar15 + 1) goto LAB_14ad31cc6;
    pFVar14 = pFVar13 + -2;
    pFVar16 = pFVar15;
  }
  else {
    if (pFVar15 + 1 < pFVar12) {
      *ppFVar11 = pFVar15;
      ppFVar11[1] = pFVar13 + -2;
      *(int *)(ppFVar11 + 2) = (int)local_338;
      ppFVar11 = ppFVar11 + 3;
    }
    if (pFVar14 <= pFVar16) goto LAB_14ad31cc6;
  }
  iVar9 = (int)((longlong)pFVar14 - (longlong)pFVar16 >> 5) + 1;
  pFVar15 = pFVar16;
  if ((int)local_338 == 0) goto LAB_14ad31cb4;
  goto LAB_14ad31b90;
}

// IntroSortInternal<Metasound::DynamicGraph::FPostExecuteEntry_const_,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FPostExecuteEntry_const_>,TLess<void>_> @ 14ad31d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<Metasound::DynamicGraph::FPostExecuteEntry_const_,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FPostExecuteEntry_const_>,TLess<void>_>
          (FPostExecuteEntry *param_1,int param_2,
          TGetOrdinal<Metasound::DynamicGraph::FPostExecuteEntry_const_> param_3,TLess<void> param_4
          )

{
  FPostExecuteEntry *pFVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  IOperator *pIVar4;
  _func___cdecl_void_IOperator_ptr *p_Var5;
  _func___cdecl_void_IOperator_ptr *p_Var6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  FPostExecuteEntry *pFVar10;
  FPostExecuteEntry **ppFVar11;
  FPostExecuteEntry *pFVar12;
  FPostExecuteEntry *pFVar13;
  FPostExecuteEntry *pFVar14;
  FPostExecuteEntry *pFVar15;
  FPostExecuteEntry *pFVar16;
  float fVar17;
  undefined1 auStack_368 [48];
  FPostExecuteEntry *local_338;
  FPostExecuteEntry *local_328;
  FPostExecuteEntry *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar17 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar17;
    memset(local_310,0,0x2e8);
    ppFVar11 = &local_328;
    do {
      pFVar14 = ppFVar11[1];
      pFVar16 = *ppFVar11;
      pFVar1 = ppFVar11[2];
      iVar9 = (int)((longlong)pFVar14 - (longlong)pFVar16 >> 5) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar15 = pFVar16;
      if ((int)local_338 != 0) {
LAB_14ad31e10:
        if (8 < iVar9) {
          uVar7 = *(undefined4 *)&pFVar15->field_0x4;
          uVar2 = pFVar15->OperatorID;
          pFVar12 = pFVar14 + 1;
          pFVar16 = pFVar15 + iVar9 / 2;
          iVar9 = pFVar16->Ordinal;
          uVar8 = *(undefined4 *)&pFVar16->field_0x4;
          uVar3 = pFVar16->OperatorID;
          pIVar4 = pFVar16->Operator;
          p_Var5 = pFVar16->Function;
          pFVar16->Ordinal = pFVar15->Ordinal;
          *(undefined4 *)&pFVar16->field_0x4 = uVar7;
          pFVar16->OperatorID = uVar2;
          p_Var6 = pFVar15->Function;
          pFVar16->Operator = pFVar15->Operator;
          pFVar16->Function = p_Var6;
          pFVar15->Ordinal = iVar9;
          *(undefined4 *)&pFVar15->field_0x4 = uVar8;
          pFVar15->OperatorID = uVar3;
          pFVar15->Operator = pIVar4;
          pFVar15->Function = p_Var5;
          pFVar16 = pFVar15;
LAB_14ad31e50:
          pFVar10 = pFVar16;
          pFVar16 = pFVar10 + 1;
          if (pFVar16 <= pFVar14) goto code_r0x00014ad31e59;
          goto LAB_14ad31e60;
        }
        for (; pFVar16 = pFVar15, pFVar1 = pFVar15, pFVar15 < pFVar14; pFVar14 = pFVar14 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar14) {
            if (pFVar16->Ordinal < pFVar1->Ordinal) {
              pFVar16 = pFVar1;
            }
          }
          iVar9 = pFVar16->Ordinal;
          uVar8 = *(undefined4 *)&pFVar16->field_0x4;
          uVar2 = pFVar16->OperatorID;
          pIVar4 = pFVar16->Operator;
          p_Var5 = pFVar16->Function;
          uVar7 = *(undefined4 *)&pFVar14->field_0x4;
          uVar3 = pFVar14->OperatorID;
          pFVar16->Ordinal = pFVar14->Ordinal;
          *(undefined4 *)&pFVar16->field_0x4 = uVar7;
          pFVar16->OperatorID = uVar3;
          p_Var6 = pFVar14->Function;
          pFVar16->Operator = pFVar14->Operator;
          pFVar16->Function = p_Var6;
          pFVar14->Ordinal = iVar9;
          *(undefined4 *)&pFVar14->field_0x4 = uVar8;
          pFVar14->OperatorID = uVar2;
          pFVar14->Operator = pIVar4;
          pFVar14->Function = p_Var5;
        }
        goto LAB_14ad31f46;
      }
LAB_14ad31f34:
      local_338 = pFVar1;
      HeapSortInternal<Metasound::DynamicGraph::FPostExecuteEntry_const_,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FPostExecuteEntry_const_>,TLess<void>_>
                (pFVar16,iVar9,param_3,param_4);
LAB_14ad31f46:
      ppFVar11 = ppFVar11 + -3;
    } while (&local_328 <= ppFVar11);
  }
  return;
code_r0x00014ad31e59:
  if (pFVar16->Ordinal <= pFVar15->Ordinal) goto LAB_14ad31e50;
LAB_14ad31e60:
  do {
    pFVar13 = pFVar12;
    pFVar12 = pFVar13 + -1;
    if (pFVar12 <= pFVar15) break;
  } while (pFVar15->Ordinal <= pFVar12->Ordinal);
  uVar2 = pFVar13[-1].OperatorID;
  if (pFVar16 <= pFVar12) {
    uVar7 = *(undefined4 *)&pFVar16->field_0x4;
    uVar3 = pFVar10[1].OperatorID;
    pIVar4 = pFVar10[1].Operator;
    p_Var5 = pFVar10[1].Function;
    *(undefined8 *)pFVar16 = *(undefined8 *)pFVar12;
    pFVar10[1].OperatorID = uVar2;
    p_Var6 = pFVar13[-1].Function;
    pFVar10[1].Operator = pFVar13[-1].Operator;
    pFVar10[1].Function = p_Var6;
    pFVar12->Ordinal = pFVar16->Ordinal;
    *(undefined4 *)&pFVar12->field_0x4 = uVar7;
    pFVar13[-1].OperatorID = uVar3;
    pFVar13[-1].Operator = pIVar4;
    pFVar13[-1].Function = p_Var5;
    goto LAB_14ad31e50;
  }
  uVar7 = *(undefined4 *)&pFVar15->field_0x4;
  uVar3 = pFVar15->OperatorID;
  pIVar4 = pFVar15->Operator;
  p_Var5 = pFVar15->Function;
  *(undefined8 *)pFVar15 = *(undefined8 *)pFVar12;
  pFVar15->OperatorID = uVar2;
  local_338._0_4_ = (int)local_338 + -1;
  p_Var6 = pFVar13[-1].Function;
  pFVar15->Operator = pFVar13[-1].Operator;
  pFVar15->Function = p_Var6;
  pFVar12->Ordinal = pFVar15->Ordinal;
  *(undefined4 *)&pFVar12->field_0x4 = uVar7;
  pFVar13[-1].OperatorID = uVar3;
  pFVar13[-1].Operator = pIVar4;
  pFVar13[-1].Function = p_Var5;
  if ((longlong)((longlong)pFVar12 + (-0x20 - (longlong)pFVar15) & 0xffffffffffffffe0U) <
      (longlong)((longlong)pFVar14 - (longlong)pFVar16 & 0xffffffffffffffe0U)) {
    if (pFVar16 < pFVar14) {
      *ppFVar11 = pFVar16;
      ppFVar11[1] = pFVar14;
      *(int *)(ppFVar11 + 2) = (int)local_338;
      ppFVar11 = ppFVar11 + 3;
    }
    if (pFVar12 <= pFVar15 + 1) goto LAB_14ad31f46;
    pFVar14 = pFVar13 + -2;
    pFVar16 = pFVar15;
  }
  else {
    if (pFVar15 + 1 < pFVar12) {
      *ppFVar11 = pFVar15;
      ppFVar11[1] = pFVar13 + -2;
      *(int *)(ppFVar11 + 2) = (int)local_338;
      ppFVar11 = ppFVar11 + 3;
    }
    if (pFVar14 <= pFVar16) goto LAB_14ad31f46;
  }
  iVar9 = (int)((longlong)pFVar14 - (longlong)pFVar16 >> 5) + 1;
  pFVar15 = pFVar16;
  if ((int)local_338 == 0) goto LAB_14ad31f34;
  goto LAB_14ad31e10;
}

// IntroSortInternal<Metasound::DynamicGraph::FResetEntry_const_,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FResetEntry_const_>,TLess<void>_> @ 14ad31fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<Metasound::DynamicGraph::FResetEntry_const_,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FResetEntry_const_>,TLess<void>_>
          (FResetEntry *param_1,int param_2,
          TGetOrdinal<Metasound::DynamicGraph::FResetEntry_const_> param_3,TLess<void> param_4)

{
  FResetEntry *pFVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  IOperator *pIVar4;
  _func___cdecl_void_IOperator_ptr_FResetParams_ptr *p_Var5;
  _func___cdecl_void_IOperator_ptr_FResetParams_ptr *p_Var6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  FResetEntry *pFVar10;
  FResetEntry **ppFVar11;
  FResetEntry *pFVar12;
  FResetEntry *pFVar13;
  FResetEntry *pFVar14;
  FResetEntry *pFVar15;
  FResetEntry *pFVar16;
  float fVar17;
  undefined1 auStack_368 [48];
  FResetEntry *local_338;
  FResetEntry *local_328;
  FResetEntry *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar17 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar17;
    memset(local_310,0,0x2e8);
    ppFVar11 = &local_328;
    do {
      pFVar14 = ppFVar11[1];
      pFVar16 = *ppFVar11;
      pFVar1 = ppFVar11[2];
      iVar9 = (int)((longlong)pFVar14 - (longlong)pFVar16 >> 5) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar15 = pFVar16;
      if ((int)local_338 != 0) {
LAB_14ad32090:
        if (8 < iVar9) {
          uVar7 = *(undefined4 *)&pFVar15->field_0x4;
          uVar2 = pFVar15->OperatorID;
          pFVar12 = pFVar14 + 1;
          pFVar16 = pFVar15 + iVar9 / 2;
          iVar9 = pFVar16->Ordinal;
          uVar8 = *(undefined4 *)&pFVar16->field_0x4;
          uVar3 = pFVar16->OperatorID;
          pIVar4 = pFVar16->Operator;
          p_Var5 = pFVar16->Function;
          pFVar16->Ordinal = pFVar15->Ordinal;
          *(undefined4 *)&pFVar16->field_0x4 = uVar7;
          pFVar16->OperatorID = uVar2;
          p_Var6 = pFVar15->Function;
          pFVar16->Operator = pFVar15->Operator;
          pFVar16->Function = p_Var6;
          pFVar15->Ordinal = iVar9;
          *(undefined4 *)&pFVar15->field_0x4 = uVar8;
          pFVar15->OperatorID = uVar3;
          pFVar15->Operator = pIVar4;
          pFVar15->Function = p_Var5;
          pFVar16 = pFVar15;
LAB_14ad320d0:
          pFVar10 = pFVar16;
          pFVar16 = pFVar10 + 1;
          if (pFVar16 <= pFVar14) goto code_r0x00014ad320d9;
          goto LAB_14ad320e0;
        }
        for (; pFVar16 = pFVar15, pFVar1 = pFVar15, pFVar15 < pFVar14; pFVar14 = pFVar14 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar14) {
            if (pFVar16->Ordinal < pFVar1->Ordinal) {
              pFVar16 = pFVar1;
            }
          }
          iVar9 = pFVar16->Ordinal;
          uVar8 = *(undefined4 *)&pFVar16->field_0x4;
          uVar2 = pFVar16->OperatorID;
          pIVar4 = pFVar16->Operator;
          p_Var5 = pFVar16->Function;
          uVar7 = *(undefined4 *)&pFVar14->field_0x4;
          uVar3 = pFVar14->OperatorID;
          pFVar16->Ordinal = pFVar14->Ordinal;
          *(undefined4 *)&pFVar16->field_0x4 = uVar7;
          pFVar16->OperatorID = uVar3;
          p_Var6 = pFVar14->Function;
          pFVar16->Operator = pFVar14->Operator;
          pFVar16->Function = p_Var6;
          pFVar14->Ordinal = iVar9;
          *(undefined4 *)&pFVar14->field_0x4 = uVar8;
          pFVar14->OperatorID = uVar2;
          pFVar14->Operator = pIVar4;
          pFVar14->Function = p_Var5;
        }
        goto LAB_14ad321c6;
      }
LAB_14ad321b4:
      local_338 = pFVar1;
      HeapSortInternal<Metasound::DynamicGraph::FResetEntry_const_,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FResetEntry_const_>,TLess<void>_>
                (pFVar16,iVar9,param_3,param_4);
LAB_14ad321c6:
      ppFVar11 = ppFVar11 + -3;
    } while (&local_328 <= ppFVar11);
  }
  return;
code_r0x00014ad320d9:
  if (pFVar16->Ordinal <= pFVar15->Ordinal) goto LAB_14ad320d0;
LAB_14ad320e0:
  do {
    pFVar13 = pFVar12;
    pFVar12 = pFVar13 + -1;
    if (pFVar12 <= pFVar15) break;
  } while (pFVar15->Ordinal <= pFVar12->Ordinal);
  uVar2 = pFVar13[-1].OperatorID;
  if (pFVar16 <= pFVar12) {
    uVar7 = *(undefined4 *)&pFVar16->field_0x4;
    uVar3 = pFVar10[1].OperatorID;
    pIVar4 = pFVar10[1].Operator;
    p_Var5 = pFVar10[1].Function;
    *(undefined8 *)pFVar16 = *(undefined8 *)pFVar12;
    pFVar10[1].OperatorID = uVar2;
    p_Var6 = pFVar13[-1].Function;
    pFVar10[1].Operator = pFVar13[-1].Operator;
    pFVar10[1].Function = p_Var6;
    pFVar12->Ordinal = pFVar16->Ordinal;
    *(undefined4 *)&pFVar12->field_0x4 = uVar7;
    pFVar13[-1].OperatorID = uVar3;
    pFVar13[-1].Operator = pIVar4;
    pFVar13[-1].Function = p_Var5;
    goto LAB_14ad320d0;
  }
  uVar7 = *(undefined4 *)&pFVar15->field_0x4;
  uVar3 = pFVar15->OperatorID;
  pIVar4 = pFVar15->Operator;
  p_Var5 = pFVar15->Function;
  *(undefined8 *)pFVar15 = *(undefined8 *)pFVar12;
  pFVar15->OperatorID = uVar2;
  local_338._0_4_ = (int)local_338 + -1;
  p_Var6 = pFVar13[-1].Function;
  pFVar15->Operator = pFVar13[-1].Operator;
  pFVar15->Function = p_Var6;
  pFVar12->Ordinal = pFVar15->Ordinal;
  *(undefined4 *)&pFVar12->field_0x4 = uVar7;
  pFVar13[-1].OperatorID = uVar3;
  pFVar13[-1].Operator = pIVar4;
  pFVar13[-1].Function = p_Var5;
  if ((longlong)((longlong)pFVar12 + (-0x20 - (longlong)pFVar15) & 0xffffffffffffffe0U) <
      (longlong)((longlong)pFVar14 - (longlong)pFVar16 & 0xffffffffffffffe0U)) {
    if (pFVar16 < pFVar14) {
      *ppFVar11 = pFVar16;
      ppFVar11[1] = pFVar14;
      *(int *)(ppFVar11 + 2) = (int)local_338;
      ppFVar11 = ppFVar11 + 3;
    }
    if (pFVar12 <= pFVar15 + 1) goto LAB_14ad321c6;
    pFVar14 = pFVar13 + -2;
    pFVar16 = pFVar15;
  }
  else {
    if (pFVar15 + 1 < pFVar12) {
      *ppFVar11 = pFVar15;
      ppFVar11[1] = pFVar13 + -2;
      *(int *)(ppFVar11 + 2) = (int)local_338;
      ppFVar11 = ppFVar11 + 3;
    }
    if (pFVar14 <= pFVar16) goto LAB_14ad321c6;
  }
  iVar9 = (int)((longlong)pFVar14 - (longlong)pFVar16 >> 5) + 1;
  pFVar15 = pFVar16;
  if ((int)local_338 == 0) goto LAB_14ad321b4;
  goto LAB_14ad32090;
}

// IntroSortInternal<Metasound::FDataEdge_const_*,int,FIdentityFunctor,TDereferenceWrapper<Metasound::FDataEdge_const_*,bool___cdecl(Metasound::FDataEdge_const_&,Metasound::FDataEdge_const_&)>_> @ 14ad32260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<Metasound::FDataEdge_const_*,int,FIdentityFunctor,TDereferenceWrapper<Metasound::FDataEdge_const_*,bool___cdecl(Metasound::FDataEdge_const_&,Metasound::FDataEdge_const_&)>_>
          (FDataEdge **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<Metasound::FDataEdge_const_*,bool___cdecl(Metasound::FDataEdge_const_&,Metasound::FDataEdge_const_&)>
          param_4)

{
  FDataEdge *pFVar1;
  bool bVar2;
  int iVar3;
  FDataEdge **ppFVar4;
  FDataEdge **ppFVar5;
  FDataEdge ***pppFVar6;
  int iVar7;
  FDataEdge **ppFVar8;
  FDataEdge **ppFVar9;
  FDataEdge **ppFVar10;
  float fVar11;
  undefined1 auStack_388 [48];
  FDataEdge **local_358;
  FDataEdge **local_348;
  FDataEdge **local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar11 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar11;
    memset(local_330,0,0x2e8);
    pppFVar6 = &local_348;
    do {
      ppFVar4 = pppFVar6[1];
      ppFVar5 = *pppFVar6;
      local_358 = pppFVar6[2];
      iVar3 = (int)((longlong)ppFVar4 - (longlong)ppFVar5 >> 3) + 1;
      ppFVar10 = ppFVar5;
      iVar7 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_14ad32320:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          ppFVar8 = ppFVar4 + 1;
          pFVar1 = ppFVar10[iVar3 >> 1];
          ppFVar10[iVar3 >> 1] = *ppFVar10;
          *ppFVar10 = pFVar1;
          ppFVar5 = ppFVar10;
LAB_14ad32350:
          ppFVar5 = ppFVar5 + 1;
          if (ppFVar5 <= ppFVar4) goto code_r0x00014ad32359;
          goto LAB_14ad32365;
        }
        for (; ppFVar8 = ppFVar10, ppFVar5 = ppFVar10, ppFVar10 < ppFVar4; ppFVar4 = ppFVar4 + -1) {
          while (ppFVar9 = ppFVar8, ppFVar5 = ppFVar5 + 1, ppFVar5 <= ppFVar4) {
            bVar2 = (*param_4.Predicate)(*ppFVar9,*ppFVar5);
            ppFVar8 = ppFVar5;
            if (!bVar2) {
              ppFVar8 = ppFVar9;
            }
          }
          pFVar1 = *ppFVar9;
          *ppFVar9 = *ppFVar4;
          *ppFVar4 = pFVar1;
        }
        goto LAB_14ad32429;
      }
LAB_14ad32418:
      HeapSortInternal<Metasound::FDataEdge_const_*,int,FIdentityFunctor,TDereferenceWrapper<Metasound::FDataEdge_const_*,bool___cdecl(Metasound::FDataEdge_const_&,Metasound::FDataEdge_const_&)>_>
                (ppFVar5,iVar3,param_3,param_4);
LAB_14ad32429:
      pppFVar6 = pppFVar6 + -3;
    } while (&local_348 <= pppFVar6);
  }
  return;
code_r0x00014ad32359:
  bVar2 = (*param_4.Predicate)(*ppFVar10,*ppFVar5);
  if (!bVar2) goto LAB_14ad32350;
LAB_14ad32365:
  do {
    ppFVar9 = ppFVar8;
    ppFVar8 = ppFVar9 + -1;
    if (ppFVar8 <= ppFVar10) break;
    bVar2 = (*param_4.Predicate)(*ppFVar8,*ppFVar10);
  } while (!bVar2);
  if (ppFVar5 <= ppFVar8) {
    pFVar1 = *ppFVar5;
    *ppFVar5 = *ppFVar8;
    *ppFVar8 = pFVar1;
    goto LAB_14ad32350;
  }
  pFVar1 = *ppFVar10;
  iVar7 = iVar7 + -1;
  *ppFVar10 = *ppFVar8;
  *ppFVar8 = pFVar1;
  if ((longlong)((longlong)ppFVar8 + (-8 - (longlong)ppFVar10) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppFVar4 - (longlong)ppFVar5 & 0xfffffffffffffff8U)) {
    if (ppFVar5 < ppFVar4) {
      *pppFVar6 = ppFVar5;
      pppFVar6[1] = ppFVar4;
      *(int *)(pppFVar6 + 2) = iVar7;
      pppFVar6 = pppFVar6 + 3;
    }
    if (ppFVar8 <= ppFVar10 + 1) goto LAB_14ad32429;
    ppFVar4 = ppFVar9 + -2;
    ppFVar5 = ppFVar10;
  }
  else {
    if (ppFVar10 + 1 < ppFVar8) {
      *pppFVar6 = ppFVar10;
      pppFVar6[1] = ppFVar9 + -2;
      *(int *)(pppFVar6 + 2) = iVar7;
      pppFVar6 = pppFVar6 + 3;
    }
    if (ppFVar4 <= ppFVar5) goto LAB_14ad32429;
  }
  iVar3 = (int)((longlong)ppFVar4 - (longlong)ppFVar5 >> 3) + 1;
  ppFVar10 = ppFVar5;
  if (iVar7 == 0) goto LAB_14ad32418;
  goto LAB_14ad32320;
}

// IntroSortInternal<Metasound::DynamicGraph::FExecuteEntry,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FExecuteEntry>,TLess<void>_> @ 14ad324e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<Metasound::DynamicGraph::FExecuteEntry,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FExecuteEntry>,TLess<void>_>
          (FExecuteEntry *param_1,int param_2,
          TGetOrdinal<Metasound::DynamicGraph::FExecuteEntry> param_3,TLess<void> param_4)

{
  FExecuteEntry *pFVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  IOperator *pIVar4;
  _func___cdecl_void_IOperator_ptr *p_Var5;
  _func___cdecl_void_IOperator_ptr *p_Var6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  FExecuteEntry *pFVar10;
  FExecuteEntry **ppFVar11;
  FExecuteEntry *pFVar12;
  FExecuteEntry *pFVar13;
  FExecuteEntry *pFVar14;
  FExecuteEntry *pFVar15;
  FExecuteEntry *pFVar16;
  float fVar17;
  undefined1 auStack_368 [48];
  FExecuteEntry *local_338;
  FExecuteEntry *local_328;
  FExecuteEntry *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar17 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar17;
    memset(local_310,0,0x2e8);
    ppFVar11 = &local_328;
    do {
      pFVar14 = ppFVar11[1];
      pFVar16 = *ppFVar11;
      pFVar1 = ppFVar11[2];
      iVar9 = (int)((longlong)pFVar14 - (longlong)pFVar16 >> 5) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar15 = pFVar16;
      if ((int)local_338 != 0) {
LAB_14ad32590:
        if (8 < iVar9) {
          uVar7 = *(undefined4 *)&pFVar15->field_0x4;
          uVar2 = pFVar15->OperatorID;
          pFVar12 = pFVar14 + 1;
          pFVar16 = pFVar15 + iVar9 / 2;
          iVar9 = pFVar16->Ordinal;
          uVar8 = *(undefined4 *)&pFVar16->field_0x4;
          uVar3 = pFVar16->OperatorID;
          pIVar4 = pFVar16->Operator;
          p_Var5 = pFVar16->Function;
          pFVar16->Ordinal = pFVar15->Ordinal;
          *(undefined4 *)&pFVar16->field_0x4 = uVar7;
          pFVar16->OperatorID = uVar2;
          p_Var6 = pFVar15->Function;
          pFVar16->Operator = pFVar15->Operator;
          pFVar16->Function = p_Var6;
          pFVar15->Ordinal = iVar9;
          *(undefined4 *)&pFVar15->field_0x4 = uVar8;
          pFVar15->OperatorID = uVar3;
          pFVar15->Operator = pIVar4;
          pFVar15->Function = p_Var5;
          pFVar16 = pFVar15;
LAB_14ad325d0:
          pFVar10 = pFVar16;
          pFVar16 = pFVar10 + 1;
          if (pFVar16 <= pFVar14) goto code_r0x00014ad325d9;
          goto LAB_14ad325e0;
        }
        for (; pFVar16 = pFVar15, pFVar1 = pFVar15, pFVar15 < pFVar14; pFVar14 = pFVar14 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar14) {
            if (pFVar16->Ordinal < pFVar1->Ordinal) {
              pFVar16 = pFVar1;
            }
          }
          iVar9 = pFVar16->Ordinal;
          uVar8 = *(undefined4 *)&pFVar16->field_0x4;
          uVar2 = pFVar16->OperatorID;
          pIVar4 = pFVar16->Operator;
          p_Var5 = pFVar16->Function;
          uVar7 = *(undefined4 *)&pFVar14->field_0x4;
          uVar3 = pFVar14->OperatorID;
          pFVar16->Ordinal = pFVar14->Ordinal;
          *(undefined4 *)&pFVar16->field_0x4 = uVar7;
          pFVar16->OperatorID = uVar3;
          p_Var6 = pFVar14->Function;
          pFVar16->Operator = pFVar14->Operator;
          pFVar16->Function = p_Var6;
          pFVar14->Ordinal = iVar9;
          *(undefined4 *)&pFVar14->field_0x4 = uVar8;
          pFVar14->OperatorID = uVar2;
          pFVar14->Operator = pIVar4;
          pFVar14->Function = p_Var5;
        }
        goto LAB_14ad326c6;
      }
LAB_14ad326b4:
      local_338 = pFVar1;
      HeapSortInternal<Metasound::DynamicGraph::FExecuteEntry,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FExecuteEntry>,TLess<void>_>
                (pFVar16,iVar9,param_3,param_4);
LAB_14ad326c6:
      ppFVar11 = ppFVar11 + -3;
    } while (&local_328 <= ppFVar11);
  }
  return;
code_r0x00014ad325d9:
  if (pFVar16->Ordinal <= pFVar15->Ordinal) goto LAB_14ad325d0;
LAB_14ad325e0:
  do {
    pFVar13 = pFVar12;
    pFVar12 = pFVar13 + -1;
    if (pFVar12 <= pFVar15) break;
  } while (pFVar15->Ordinal <= pFVar12->Ordinal);
  uVar2 = pFVar13[-1].OperatorID;
  if (pFVar16 <= pFVar12) {
    uVar7 = *(undefined4 *)&pFVar16->field_0x4;
    uVar3 = pFVar10[1].OperatorID;
    pIVar4 = pFVar10[1].Operator;
    p_Var5 = pFVar10[1].Function;
    *(undefined8 *)pFVar16 = *(undefined8 *)pFVar12;
    pFVar10[1].OperatorID = uVar2;
    p_Var6 = pFVar13[-1].Function;
    pFVar10[1].Operator = pFVar13[-1].Operator;
    pFVar10[1].Function = p_Var6;
    pFVar12->Ordinal = pFVar16->Ordinal;
    *(undefined4 *)&pFVar12->field_0x4 = uVar7;
    pFVar13[-1].OperatorID = uVar3;
    pFVar13[-1].Operator = pIVar4;
    pFVar13[-1].Function = p_Var5;
    goto LAB_14ad325d0;
  }
  uVar7 = *(undefined4 *)&pFVar15->field_0x4;
  uVar3 = pFVar15->OperatorID;
  pIVar4 = pFVar15->Operator;
  p_Var5 = pFVar15->Function;
  *(undefined8 *)pFVar15 = *(undefined8 *)pFVar12;
  pFVar15->OperatorID = uVar2;
  local_338._0_4_ = (int)local_338 + -1;
  p_Var6 = pFVar13[-1].Function;
  pFVar15->Operator = pFVar13[-1].Operator;
  pFVar15->Function = p_Var6;
  pFVar12->Ordinal = pFVar15->Ordinal;
  *(undefined4 *)&pFVar12->field_0x4 = uVar7;
  pFVar13[-1].OperatorID = uVar3;
  pFVar13[-1].Operator = pIVar4;
  pFVar13[-1].Function = p_Var5;
  if ((longlong)((longlong)pFVar12 + (-0x20 - (longlong)pFVar15) & 0xffffffffffffffe0U) <
      (longlong)((longlong)pFVar14 - (longlong)pFVar16 & 0xffffffffffffffe0U)) {
    if (pFVar16 < pFVar14) {
      *ppFVar11 = pFVar16;
      ppFVar11[1] = pFVar14;
      *(int *)(ppFVar11 + 2) = (int)local_338;
      ppFVar11 = ppFVar11 + 3;
    }
    if (pFVar12 <= pFVar15 + 1) goto LAB_14ad326c6;
    pFVar14 = pFVar13 + -2;
    pFVar16 = pFVar15;
  }
  else {
    if (pFVar15 + 1 < pFVar12) {
      *ppFVar11 = pFVar15;
      ppFVar11[1] = pFVar13 + -2;
      *(int *)(ppFVar11 + 2) = (int)local_338;
      ppFVar11 = ppFVar11 + 3;
    }
    if (pFVar14 <= pFVar16) goto LAB_14ad326c6;
  }
  iVar9 = (int)((longlong)pFVar14 - (longlong)pFVar16 >> 5) + 1;
  pFVar15 = pFVar16;
  if ((int)local_338 == 0) goto LAB_14ad326b4;
  goto LAB_14ad32590;
}

// IntroSortInternal<Metasound::DynamicGraph::Debug::FOperatorEdge,int,FIdentityFunctor,TDereferenceWrapper<Metasound::DynamicGraph::Debug::FOperatorEdge,TLess<void>_>_> @ 14ad32760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<Metasound::DynamicGraph::Debug::FOperatorEdge,int,FIdentityFunctor,TDereferenceWrapper<Metasound::DynamicGraph::Debug::FOperatorEdge,TLess<void>_>_>
          (FOperatorEdge *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<Metasound::DynamicGraph::Debug::FOperatorEdge,TLess<void>_> param_4)

{
  ulong64 uVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  FName FVar4;
  FName FVar5;
  FName FVar6;
  bool bVar7;
  int iVar8;
  FOperatorEdge *pFVar9;
  FOperatorEdge *pFVar10;
  FOperatorEdge *pFVar11;
  FOperatorEdge **ppFVar12;
  int iVar13;
  FOperatorEdge *pFVar14;
  FOperatorEdge *pFVar15;
  FOperatorEdge *pFVar16;
  float fVar17;
  undefined1 auStack_388 [48];
  FOperatorEdge *local_358;
  FOperatorEdge *local_348;
  FOperatorEdge *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar17 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar17;
    memset(local_330,0,0x2e8);
    ppFVar12 = &local_348;
    do {
      pFVar16 = ppFVar12[1];
      pFVar15 = *ppFVar12;
      local_358 = ppFVar12[2];
      iVar8 = (int)((longlong)pFVar16 - (longlong)pFVar15 >> 5) + 1;
      pFVar14 = pFVar15;
      iVar13 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_14ad32820:
        if (8 < iVar8) {
          uVar1 = pFVar14->ToOperator;
          pFVar9 = pFVar16 + 1;
          pFVar15 = pFVar14 + iVar8 / 2;
          uVar2 = pFVar15->FromOperator;
          uVar3 = pFVar15->ToOperator;
          FVar4 = pFVar15->FromVertex;
          FVar5 = pFVar15->ToVertex;
          pFVar15->FromOperator = pFVar14->FromOperator;
          pFVar15->ToOperator = uVar1;
          FVar6 = pFVar14->ToVertex;
          pFVar15->FromVertex = pFVar14->FromVertex;
          pFVar15->ToVertex = FVar6;
          pFVar14->FromOperator = uVar2;
          pFVar14->ToOperator = uVar3;
          pFVar14->FromVertex = FVar4;
          pFVar14->ToVertex = FVar5;
          pFVar15 = pFVar14;
LAB_14ad32860:
          pFVar11 = pFVar15;
          pFVar15 = pFVar11 + 1;
          if (pFVar15 <= pFVar16) goto code_r0x00014ad32869;
          goto LAB_14ad32880;
        }
        for (; pFVar9 = pFVar14, pFVar15 = pFVar14, pFVar14 < pFVar16; pFVar16 = pFVar16 + -1) {
          while (pFVar11 = pFVar9, pFVar15 = pFVar15 + 1, pFVar15 <= pFVar16) {
            bVar7 = Metasound::DynamicGraph::Debug::operator<(pFVar11,pFVar15);
            pFVar9 = pFVar15;
            if (!bVar7) {
              pFVar9 = pFVar11;
            }
          }
          uVar1 = pFVar11->FromOperator;
          uVar2 = pFVar11->ToOperator;
          FVar4 = pFVar11->FromVertex;
          FVar5 = pFVar11->ToVertex;
          uVar3 = pFVar16->ToOperator;
          pFVar11->FromOperator = pFVar16->FromOperator;
          pFVar11->ToOperator = uVar3;
          FVar6 = pFVar16->ToVertex;
          pFVar11->FromVertex = pFVar16->FromVertex;
          pFVar11->ToVertex = FVar6;
          pFVar16->FromOperator = uVar1;
          pFVar16->ToOperator = uVar2;
          pFVar16->FromVertex = FVar4;
          pFVar16->ToVertex = FVar5;
        }
        goto LAB_14ad3296e;
      }
LAB_14ad3295d:
      HeapSortInternal<Metasound::DynamicGraph::Debug::FOperatorEdge,int,FIdentityFunctor,TDereferenceWrapper<Metasound::DynamicGraph::Debug::FOperatorEdge,TLess<void>_>_>
                (pFVar15,iVar8,param_3,param_4);
LAB_14ad3296e:
      ppFVar12 = ppFVar12 + -3;
    } while (&local_348 <= ppFVar12);
  }
  return;
code_r0x00014ad32869:
  bVar7 = Metasound::DynamicGraph::Debug::operator<(pFVar14,pFVar15);
  if (!bVar7) goto LAB_14ad32860;
LAB_14ad32880:
  do {
    pFVar10 = pFVar9;
    pFVar9 = pFVar10 + -1;
    if (pFVar9 <= pFVar14) break;
    bVar7 = Metasound::DynamicGraph::Debug::operator<(pFVar9,pFVar14);
  } while (!bVar7);
  uVar1 = pFVar10[-1].ToOperator;
  if (pFVar15 <= pFVar9) {
    uVar2 = pFVar15->FromOperator;
    uVar3 = pFVar11[1].ToOperator;
    FVar4 = pFVar11[1].FromVertex;
    FVar5 = pFVar11[1].ToVertex;
    pFVar15->FromOperator = pFVar9->FromOperator;
    pFVar11[1].ToOperator = uVar1;
    FVar6 = pFVar10[-1].ToVertex;
    pFVar11[1].FromVertex = pFVar10[-1].FromVertex;
    pFVar11[1].ToVertex = FVar6;
    pFVar9->FromOperator = uVar2;
    pFVar10[-1].ToOperator = uVar3;
    pFVar10[-1].FromVertex = FVar4;
    pFVar10[-1].ToVertex = FVar5;
    goto LAB_14ad32860;
  }
  uVar2 = pFVar14->FromOperator;
  uVar3 = pFVar14->ToOperator;
  FVar4 = pFVar14->FromVertex;
  FVar5 = pFVar14->ToVertex;
  pFVar14->FromOperator = pFVar9->FromOperator;
  pFVar14->ToOperator = uVar1;
  iVar13 = iVar13 + -1;
  FVar6 = pFVar10[-1].ToVertex;
  pFVar14->FromVertex = pFVar10[-1].FromVertex;
  pFVar14->ToVertex = FVar6;
  pFVar9->FromOperator = uVar2;
  pFVar10[-1].ToOperator = uVar3;
  pFVar10[-1].FromVertex = FVar4;
  pFVar10[-1].ToVertex = FVar5;
  if ((longlong)((longlong)pFVar9 + (-0x20 - (longlong)pFVar14) & 0xffffffffffffffe0U) <
      (longlong)((longlong)pFVar16 - (longlong)pFVar15 & 0xffffffffffffffe0U)) {
    if (pFVar15 < pFVar16) {
      *ppFVar12 = pFVar15;
      ppFVar12[1] = pFVar16;
      *(int *)(ppFVar12 + 2) = iVar13;
      ppFVar12 = ppFVar12 + 3;
    }
    if (pFVar9 <= pFVar14 + 1) goto LAB_14ad3296e;
    pFVar16 = pFVar10 + -2;
    pFVar15 = pFVar14;
  }
  else {
    if (pFVar14 + 1 < pFVar9) {
      *ppFVar12 = pFVar14;
      ppFVar12[1] = pFVar10 + -2;
      *(int *)(ppFVar12 + 2) = iVar13;
      ppFVar12 = ppFVar12 + 3;
    }
    if (pFVar16 <= pFVar15) goto LAB_14ad3296e;
  }
  iVar8 = (int)((longlong)pFVar16 - (longlong)pFVar15 >> 5) + 1;
  pFVar14 = pFVar15;
  if (iVar13 == 0) goto LAB_14ad3295d;
  goto LAB_14ad32820;
}

// IntroSortInternal<Metasound::DynamicGraph::FOrdinalSwap,int,FIdentityFunctor,bool_(__cdecl*)(Metasound::DynamicGraph::FOrdinalSwap_const_&,Metasound::DynamicGraph::FOrdinalSwap_const_&)> @ 14ad32a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<Metasound::DynamicGraph::FOrdinalSwap,int,FIdentityFunctor,bool_(__cdecl*)(Metasound::DynamicGraph::FOrdinalSwap_const_&,Metasound::DynamicGraph::FOrdinalSwap_const_&)>
          (FOrdinalSwap *param_1,int param_2,FIdentityFunctor param_3,
          _func___cdecl_bool_FOrdinalSwap_ptr_FOrdinalSwap_ptr *param_4)

{
  ulong64 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  FOrdinalSwap *pFVar10;
  FOrdinalSwap *pFVar11;
  FOrdinalSwap *pFVar12;
  FOrdinalSwap *pFVar13;
  FOrdinalSwap *pFVar14;
  FOrdinalSwap **ppFVar15;
  int iVar16;
  FOrdinalSwap *pFVar17;
  float fVar18;
  undefined1 auStack_398 [48];
  FOrdinalSwap *local_368;
  FOrdinalSwap *local_358;
  FOrdinalSwap *local_350;
  undefined4 local_348;
  undefined1 local_340 [744];
  ulonglong local_58;
  
  if (1 < param_2) {
    local_58 = __security_cookie.value ^ (ulonglong)auStack_398;
    local_350 = param_1 + (longlong)param_2 + -1;
    local_358 = param_1;
    fVar18 = logf((float)param_2 * (float)param_2);
    local_348 = (undefined4)(longlong)fVar18;
    memset(local_340,0,0x2e8);
    ppFVar15 = &local_358;
    do {
      pFVar17 = ppFVar15[1];
      pFVar11 = *ppFVar15;
      local_368 = ppFVar15[2];
      iVar9 = (int)((longlong)pFVar17 - (longlong)pFVar11 >> 4) + 1;
      pFVar10 = pFVar11;
      iVar16 = (int)local_368;
      if ((int)local_368 != 0) {
LAB_14ad32b00:
        if (8 < iVar9) {
          iVar4 = pFVar10->OriginalOrdinal;
          iVar5 = pFVar10->NewOrdinal;
          pFVar12 = pFVar17 + 1;
          pFVar11 = pFVar10 + iVar9 / 2;
          uVar1 = pFVar11->OperatorID;
          iVar6 = pFVar11->OriginalOrdinal;
          iVar7 = pFVar11->NewOrdinal;
          pFVar11 = pFVar10 + iVar9 / 2;
          pFVar11->OperatorID = pFVar10->OperatorID;
          pFVar11->OriginalOrdinal = iVar4;
          pFVar11->NewOrdinal = iVar5;
          pFVar10->OperatorID = uVar1;
          pFVar10->OriginalOrdinal = iVar6;
          pFVar10->NewOrdinal = iVar7;
          pFVar11 = pFVar10;
LAB_14ad32b30:
          pFVar14 = pFVar11;
          pFVar11 = pFVar14 + 1;
          if (pFVar11 <= pFVar17) goto code_r0x00014ad32b39;
          goto LAB_14ad32b46;
        }
        for (; pFVar12 = pFVar10, pFVar11 = pFVar10, pFVar10 < pFVar17; pFVar17 = pFVar17 + -1) {
          while (pFVar14 = pFVar12, pFVar11 = pFVar11 + 1, pFVar11 <= pFVar17) {
            bVar8 = (*param_4)(pFVar14,pFVar11);
            pFVar12 = pFVar11;
            if (!bVar8) {
              pFVar12 = pFVar14;
            }
          }
          uVar1 = pFVar14->OperatorID;
          iVar4 = pFVar14->OriginalOrdinal;
          iVar5 = pFVar14->NewOrdinal;
          iVar16 = pFVar17->OriginalOrdinal;
          iVar9 = pFVar17->NewOrdinal;
          pFVar14->OperatorID = pFVar17->OperatorID;
          pFVar14->OriginalOrdinal = iVar16;
          pFVar14->NewOrdinal = iVar9;
          pFVar17->OperatorID = uVar1;
          pFVar17->OriginalOrdinal = iVar4;
          pFVar17->NewOrdinal = iVar5;
        }
        goto LAB_14ad32c0d;
      }
LAB_14ad32bfc:
      HeapSortInternal<Metasound::DynamicGraph::FOrdinalSwap,int,FIdentityFunctor,bool_(__cdecl*)(Metasound::DynamicGraph::FOrdinalSwap_const_&,Metasound::DynamicGraph::FOrdinalSwap_const_&)>
                (pFVar11,iVar9,param_3,param_4);
LAB_14ad32c0d:
      ppFVar15 = ppFVar15 + -3;
    } while (&local_358 <= ppFVar15);
  }
  return;
code_r0x00014ad32b39:
  bVar8 = (*param_4)(pFVar10,pFVar11);
  if (!bVar8) goto LAB_14ad32b30;
LAB_14ad32b46:
  do {
    pFVar13 = pFVar12;
    pFVar12 = pFVar13 + -1;
    if (pFVar12 <= pFVar10) break;
    bVar8 = (*param_4)(pFVar12,pFVar10);
  } while (!bVar8);
  uVar2 = pFVar13[-1].OriginalOrdinal;
  uVar3 = pFVar13[-1].NewOrdinal;
  if (pFVar11 <= pFVar12) {
    uVar1 = pFVar11->OperatorID;
    iVar9 = pFVar14[1].OriginalOrdinal;
    iVar4 = pFVar14[1].NewOrdinal;
    pFVar11->OperatorID = pFVar12->OperatorID;
    pFVar14[1].OriginalOrdinal = uVar2;
    pFVar14[1].NewOrdinal = uVar3;
    pFVar12->OperatorID = uVar1;
    pFVar13[-1].OriginalOrdinal = iVar9;
    pFVar13[-1].NewOrdinal = iVar4;
    goto LAB_14ad32b30;
  }
  uVar1 = pFVar10->OperatorID;
  iVar9 = pFVar10->OriginalOrdinal;
  iVar4 = pFVar10->NewOrdinal;
  iVar16 = iVar16 + -1;
  pFVar10->OperatorID = pFVar12->OperatorID;
  pFVar10->OriginalOrdinal = uVar2;
  pFVar10->NewOrdinal = uVar3;
  pFVar12->OperatorID = uVar1;
  pFVar13[-1].OriginalOrdinal = iVar9;
  pFVar13[-1].NewOrdinal = iVar4;
  if ((longlong)((longlong)pFVar12 + (-0x10 - (longlong)pFVar10) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pFVar17 - (longlong)pFVar11 & 0xfffffffffffffff0U)) {
    if (pFVar11 < pFVar17) {
      *ppFVar15 = pFVar11;
      ppFVar15[1] = pFVar17;
      *(int *)(ppFVar15 + 2) = iVar16;
      ppFVar15 = ppFVar15 + 3;
    }
    if (pFVar12 <= pFVar10 + 1) goto LAB_14ad32c0d;
    pFVar17 = pFVar13 + -2;
    pFVar11 = pFVar10;
  }
  else {
    if (pFVar10 + 1 < pFVar12) {
      *ppFVar15 = pFVar10;
      ppFVar15[1] = pFVar13 + -2;
      *(int *)(ppFVar15 + 2) = iVar16;
      ppFVar15 = ppFVar15 + 3;
    }
    if (pFVar17 <= pFVar11) goto LAB_14ad32c0d;
  }
  iVar9 = (int)((longlong)pFVar17 - (longlong)pFVar11 >> 4) + 1;
  pFVar10 = pFVar11;
  if (iVar16 == 0) goto LAB_14ad32bfc;
  goto LAB_14ad32b00;
}

// IntroSortInternal<Metasound::DynamicGraph::FOrdinalSwap,int,FIdentityFunctor,TDereferenceWrapper<Metasound::DynamicGraph::FOrdinalSwap,bool___cdecl(Metasound::DynamicGraph::FOrdinalSwap_const_&,Metasound::DynamicGraph::FOrdinalSwap_const_&)>_> @ 14ad32cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<Metasound::DynamicGraph::FOrdinalSwap,int,FIdentityFunctor,TDereferenceWrapper<Metasound::DynamicGraph::FOrdinalSwap,bool___cdecl(Metasound::DynamicGraph::FOrdinalSwap_const_&,Metasound::DynamicGraph::FOrdinalSwap_const_&)>_>
          (FOrdinalSwap *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<Metasound::DynamicGraph::FOrdinalSwap,bool___cdecl(Metasound::DynamicGraph::FOrdinalSwap_const_&,Metasound::DynamicGraph::FOrdinalSwap_const_&)>
          param_4)

{
  ulong64 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  FOrdinalSwap *pFVar10;
  FOrdinalSwap *pFVar11;
  FOrdinalSwap *pFVar12;
  FOrdinalSwap **ppFVar13;
  int iVar14;
  FOrdinalSwap *pFVar15;
  FOrdinalSwap *pFVar16;
  FOrdinalSwap *pFVar17;
  float fVar18;
  undefined1 auStack_388 [48];
  FOrdinalSwap *local_358;
  FOrdinalSwap *local_348;
  FOrdinalSwap *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar18 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar18;
    memset(local_330,0,0x2e8);
    ppFVar13 = &local_348;
    do {
      pFVar17 = ppFVar13[1];
      pFVar16 = *ppFVar13;
      local_358 = ppFVar13[2];
      iVar9 = (int)((longlong)pFVar17 - (longlong)pFVar16 >> 4) + 1;
      pFVar15 = pFVar16;
      iVar14 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_14ad32d90:
        if (8 < iVar9) {
          iVar4 = pFVar15->OriginalOrdinal;
          iVar5 = pFVar15->NewOrdinal;
          pFVar10 = pFVar17 + 1;
          pFVar16 = pFVar15 + iVar9 / 2;
          uVar1 = pFVar16->OperatorID;
          iVar6 = pFVar16->OriginalOrdinal;
          iVar7 = pFVar16->NewOrdinal;
          pFVar16 = pFVar15 + iVar9 / 2;
          pFVar16->OperatorID = pFVar15->OperatorID;
          pFVar16->OriginalOrdinal = iVar4;
          pFVar16->NewOrdinal = iVar5;
          pFVar15->OperatorID = uVar1;
          pFVar15->OriginalOrdinal = iVar6;
          pFVar15->NewOrdinal = iVar7;
          pFVar16 = pFVar15;
LAB_14ad32dc0:
          pFVar12 = pFVar16;
          pFVar16 = pFVar12 + 1;
          if (pFVar16 <= pFVar17) goto code_r0x00014ad32dc9;
          goto LAB_14ad32dd5;
        }
        for (; pFVar10 = pFVar15, pFVar16 = pFVar15, pFVar15 < pFVar17; pFVar17 = pFVar17 + -1) {
          while (pFVar12 = pFVar10, pFVar16 = pFVar16 + 1, pFVar16 <= pFVar17) {
            bVar8 = (*param_4.Predicate)(pFVar12,pFVar16);
            pFVar10 = pFVar16;
            if (!bVar8) {
              pFVar10 = pFVar12;
            }
          }
          uVar1 = pFVar12->OperatorID;
          iVar4 = pFVar12->OriginalOrdinal;
          iVar5 = pFVar12->NewOrdinal;
          iVar14 = pFVar17->OriginalOrdinal;
          iVar9 = pFVar17->NewOrdinal;
          pFVar12->OperatorID = pFVar17->OperatorID;
          pFVar12->OriginalOrdinal = iVar14;
          pFVar12->NewOrdinal = iVar9;
          pFVar17->OperatorID = uVar1;
          pFVar17->OriginalOrdinal = iVar4;
          pFVar17->NewOrdinal = iVar5;
        }
        goto LAB_14ad32e9e;
      }
LAB_14ad32e8d:
      HeapSortInternal<Metasound::DynamicGraph::FOrdinalSwap,int,FIdentityFunctor,TDereferenceWrapper<Metasound::DynamicGraph::FOrdinalSwap,bool___cdecl(Metasound::DynamicGraph::FOrdinalSwap_const_&,Metasound::DynamicGraph::FOrdinalSwap_const_&)>_>
                (pFVar16,iVar9,param_3,param_4);
LAB_14ad32e9e:
      ppFVar13 = ppFVar13 + -3;
    } while (&local_348 <= ppFVar13);
  }
  return;
code_r0x00014ad32dc9:
  bVar8 = (*param_4.Predicate)(pFVar15,pFVar16);
  if (!bVar8) goto LAB_14ad32dc0;
LAB_14ad32dd5:
  do {
    pFVar11 = pFVar10;
    pFVar10 = pFVar11 + -1;
    if (pFVar10 <= pFVar15) break;
    bVar8 = (*param_4.Predicate)(pFVar10,pFVar15);
  } while (!bVar8);
  uVar2 = pFVar11[-1].OriginalOrdinal;
  uVar3 = pFVar11[-1].NewOrdinal;
  if (pFVar16 <= pFVar10) {
    uVar1 = pFVar16->OperatorID;
    iVar9 = pFVar12[1].OriginalOrdinal;
    iVar4 = pFVar12[1].NewOrdinal;
    pFVar16->OperatorID = pFVar10->OperatorID;
    pFVar12[1].OriginalOrdinal = uVar2;
    pFVar12[1].NewOrdinal = uVar3;
    pFVar10->OperatorID = uVar1;
    pFVar11[-1].OriginalOrdinal = iVar9;
    pFVar11[-1].NewOrdinal = iVar4;
    goto LAB_14ad32dc0;
  }
  uVar1 = pFVar15->OperatorID;
  iVar9 = pFVar15->OriginalOrdinal;
  iVar4 = pFVar15->NewOrdinal;
  iVar14 = iVar14 + -1;
  pFVar15->OperatorID = pFVar10->OperatorID;
  pFVar15->OriginalOrdinal = uVar2;
  pFVar15->NewOrdinal = uVar3;
  pFVar10->OperatorID = uVar1;
  pFVar11[-1].OriginalOrdinal = iVar9;
  pFVar11[-1].NewOrdinal = iVar4;
  if ((longlong)((longlong)pFVar10 + (-0x10 - (longlong)pFVar15) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pFVar17 - (longlong)pFVar16 & 0xfffffffffffffff0U)) {
    if (pFVar16 < pFVar17) {
      *ppFVar13 = pFVar16;
      ppFVar13[1] = pFVar17;
      *(int *)(ppFVar13 + 2) = iVar14;
      ppFVar13 = ppFVar13 + 3;
    }
    if (pFVar10 <= pFVar15 + 1) goto LAB_14ad32e9e;
    pFVar17 = pFVar11 + -2;
    pFVar16 = pFVar15;
  }
  else {
    if (pFVar15 + 1 < pFVar10) {
      *ppFVar13 = pFVar15;
      ppFVar13[1] = pFVar11 + -2;
      *(int *)(ppFVar13 + 2) = iVar14;
      ppFVar13 = ppFVar13 + 3;
    }
    if (pFVar17 <= pFVar16) goto LAB_14ad32e9e;
  }
  iVar9 = (int)((longlong)pFVar17 - (longlong)pFVar16 >> 4) + 1;
  pFVar15 = pFVar16;
  if (iVar14 == 0) goto LAB_14ad32e8d;
  goto LAB_14ad32d90;
}

// IntroSortInternal<Metasound::DynamicGraph::FPostExecuteEntry,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FPostExecuteEntry>,TLess<void>_> @ 14ad32f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<Metasound::DynamicGraph::FPostExecuteEntry,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FPostExecuteEntry>,TLess<void>_>
          (FPostExecuteEntry *param_1,int param_2,
          TGetOrdinal<Metasound::DynamicGraph::FPostExecuteEntry> param_3,TLess<void> param_4)

{
  FPostExecuteEntry *pFVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  IOperator *pIVar4;
  _func___cdecl_void_IOperator_ptr *p_Var5;
  _func___cdecl_void_IOperator_ptr *p_Var6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  FPostExecuteEntry *pFVar10;
  FPostExecuteEntry **ppFVar11;
  FPostExecuteEntry *pFVar12;
  FPostExecuteEntry *pFVar13;
  FPostExecuteEntry *pFVar14;
  FPostExecuteEntry *pFVar15;
  FPostExecuteEntry *pFVar16;
  float fVar17;
  undefined1 auStack_368 [48];
  FPostExecuteEntry *local_338;
  FPostExecuteEntry *local_328;
  FPostExecuteEntry *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar17 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar17;
    memset(local_310,0,0x2e8);
    ppFVar11 = &local_328;
    do {
      pFVar14 = ppFVar11[1];
      pFVar16 = *ppFVar11;
      pFVar1 = ppFVar11[2];
      iVar9 = (int)((longlong)pFVar14 - (longlong)pFVar16 >> 5) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar15 = pFVar16;
      if ((int)local_338 != 0) {
LAB_14ad33010:
        if (8 < iVar9) {
          uVar7 = *(undefined4 *)&pFVar15->field_0x4;
          uVar2 = pFVar15->OperatorID;
          pFVar12 = pFVar14 + 1;
          pFVar16 = pFVar15 + iVar9 / 2;
          iVar9 = pFVar16->Ordinal;
          uVar8 = *(undefined4 *)&pFVar16->field_0x4;
          uVar3 = pFVar16->OperatorID;
          pIVar4 = pFVar16->Operator;
          p_Var5 = pFVar16->Function;
          pFVar16->Ordinal = pFVar15->Ordinal;
          *(undefined4 *)&pFVar16->field_0x4 = uVar7;
          pFVar16->OperatorID = uVar2;
          p_Var6 = pFVar15->Function;
          pFVar16->Operator = pFVar15->Operator;
          pFVar16->Function = p_Var6;
          pFVar15->Ordinal = iVar9;
          *(undefined4 *)&pFVar15->field_0x4 = uVar8;
          pFVar15->OperatorID = uVar3;
          pFVar15->Operator = pIVar4;
          pFVar15->Function = p_Var5;
          pFVar16 = pFVar15;
LAB_14ad33050:
          pFVar10 = pFVar16;
          pFVar16 = pFVar10 + 1;
          if (pFVar16 <= pFVar14) goto code_r0x00014ad33059;
          goto LAB_14ad33060;
        }
        for (; pFVar16 = pFVar15, pFVar1 = pFVar15, pFVar15 < pFVar14; pFVar14 = pFVar14 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar14) {
            if (pFVar16->Ordinal < pFVar1->Ordinal) {
              pFVar16 = pFVar1;
            }
          }
          iVar9 = pFVar16->Ordinal;
          uVar8 = *(undefined4 *)&pFVar16->field_0x4;
          uVar2 = pFVar16->OperatorID;
          pIVar4 = pFVar16->Operator;
          p_Var5 = pFVar16->Function;
          uVar7 = *(undefined4 *)&pFVar14->field_0x4;
          uVar3 = pFVar14->OperatorID;
          pFVar16->Ordinal = pFVar14->Ordinal;
          *(undefined4 *)&pFVar16->field_0x4 = uVar7;
          pFVar16->OperatorID = uVar3;
          p_Var6 = pFVar14->Function;
          pFVar16->Operator = pFVar14->Operator;
          pFVar16->Function = p_Var6;
          pFVar14->Ordinal = iVar9;
          *(undefined4 *)&pFVar14->field_0x4 = uVar8;
          pFVar14->OperatorID = uVar2;
          pFVar14->Operator = pIVar4;
          pFVar14->Function = p_Var5;
        }
        goto LAB_14ad33146;
      }
LAB_14ad33134:
      local_338 = pFVar1;
      HeapSortInternal<Metasound::DynamicGraph::FPostExecuteEntry,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FPostExecuteEntry>,TLess<void>_>
                (pFVar16,iVar9,param_3,param_4);
LAB_14ad33146:
      ppFVar11 = ppFVar11 + -3;
    } while (&local_328 <= ppFVar11);
  }
  return;
code_r0x00014ad33059:
  if (pFVar16->Ordinal <= pFVar15->Ordinal) goto LAB_14ad33050;
LAB_14ad33060:
  do {
    pFVar13 = pFVar12;
    pFVar12 = pFVar13 + -1;
    if (pFVar12 <= pFVar15) break;
  } while (pFVar15->Ordinal <= pFVar12->Ordinal);
  uVar2 = pFVar13[-1].OperatorID;
  if (pFVar16 <= pFVar12) {
    uVar7 = *(undefined4 *)&pFVar16->field_0x4;
    uVar3 = pFVar10[1].OperatorID;
    pIVar4 = pFVar10[1].Operator;
    p_Var5 = pFVar10[1].Function;
    *(undefined8 *)pFVar16 = *(undefined8 *)pFVar12;
    pFVar10[1].OperatorID = uVar2;
    p_Var6 = pFVar13[-1].Function;
    pFVar10[1].Operator = pFVar13[-1].Operator;
    pFVar10[1].Function = p_Var6;
    pFVar12->Ordinal = pFVar16->Ordinal;
    *(undefined4 *)&pFVar12->field_0x4 = uVar7;
    pFVar13[-1].OperatorID = uVar3;
    pFVar13[-1].Operator = pIVar4;
    pFVar13[-1].Function = p_Var5;
    goto LAB_14ad33050;
  }
  uVar7 = *(undefined4 *)&pFVar15->field_0x4;
  uVar3 = pFVar15->OperatorID;
  pIVar4 = pFVar15->Operator;
  p_Var5 = pFVar15->Function;
  *(undefined8 *)pFVar15 = *(undefined8 *)pFVar12;
  pFVar15->OperatorID = uVar2;
  local_338._0_4_ = (int)local_338 + -1;
  p_Var6 = pFVar13[-1].Function;
  pFVar15->Operator = pFVar13[-1].Operator;
  pFVar15->Function = p_Var6;
  pFVar12->Ordinal = pFVar15->Ordinal;
  *(undefined4 *)&pFVar12->field_0x4 = uVar7;
  pFVar13[-1].OperatorID = uVar3;
  pFVar13[-1].Operator = pIVar4;
  pFVar13[-1].Function = p_Var5;
  if ((longlong)((longlong)pFVar12 + (-0x20 - (longlong)pFVar15) & 0xffffffffffffffe0U) <
      (longlong)((longlong)pFVar14 - (longlong)pFVar16 & 0xffffffffffffffe0U)) {
    if (pFVar16 < pFVar14) {
      *ppFVar11 = pFVar16;
      ppFVar11[1] = pFVar14;
      *(int *)(ppFVar11 + 2) = (int)local_338;
      ppFVar11 = ppFVar11 + 3;
    }
    if (pFVar12 <= pFVar15 + 1) goto LAB_14ad33146;
    pFVar14 = pFVar13 + -2;
    pFVar16 = pFVar15;
  }
  else {
    if (pFVar15 + 1 < pFVar12) {
      *ppFVar11 = pFVar15;
      ppFVar11[1] = pFVar13 + -2;
      *(int *)(ppFVar11 + 2) = (int)local_338;
      ppFVar11 = ppFVar11 + 3;
    }
    if (pFVar14 <= pFVar16) goto LAB_14ad33146;
  }
  iVar9 = (int)((longlong)pFVar14 - (longlong)pFVar16 >> 5) + 1;
  pFVar15 = pFVar16;
  if ((int)local_338 == 0) goto LAB_14ad33134;
  goto LAB_14ad33010;
}

// IntroSortInternal<Metasound::DynamicGraph::FResetEntry,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FResetEntry>,TLess<void>_> @ 14ad331e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<Metasound::DynamicGraph::FResetEntry,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FResetEntry>,TLess<void>_>
          (FResetEntry *param_1,int param_2,
          TGetOrdinal<Metasound::DynamicGraph::FResetEntry> param_3,TLess<void> param_4)

{
  FResetEntry *pFVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  IOperator *pIVar4;
  _func___cdecl_void_IOperator_ptr_FResetParams_ptr *p_Var5;
  _func___cdecl_void_IOperator_ptr_FResetParams_ptr *p_Var6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  FResetEntry *pFVar10;
  FResetEntry **ppFVar11;
  FResetEntry *pFVar12;
  FResetEntry *pFVar13;
  FResetEntry *pFVar14;
  FResetEntry *pFVar15;
  FResetEntry *pFVar16;
  float fVar17;
  undefined1 auStack_368 [48];
  FResetEntry *local_338;
  FResetEntry *local_328;
  FResetEntry *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar17 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar17;
    memset(local_310,0,0x2e8);
    ppFVar11 = &local_328;
    do {
      pFVar14 = ppFVar11[1];
      pFVar16 = *ppFVar11;
      pFVar1 = ppFVar11[2];
      iVar9 = (int)((longlong)pFVar14 - (longlong)pFVar16 >> 5) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar15 = pFVar16;
      if ((int)local_338 != 0) {
LAB_14ad33290:
        if (8 < iVar9) {
          uVar7 = *(undefined4 *)&pFVar15->field_0x4;
          uVar2 = pFVar15->OperatorID;
          pFVar12 = pFVar14 + 1;
          pFVar16 = pFVar15 + iVar9 / 2;
          iVar9 = pFVar16->Ordinal;
          uVar8 = *(undefined4 *)&pFVar16->field_0x4;
          uVar3 = pFVar16->OperatorID;
          pIVar4 = pFVar16->Operator;
          p_Var5 = pFVar16->Function;
          pFVar16->Ordinal = pFVar15->Ordinal;
          *(undefined4 *)&pFVar16->field_0x4 = uVar7;
          pFVar16->OperatorID = uVar2;
          p_Var6 = pFVar15->Function;
          pFVar16->Operator = pFVar15->Operator;
          pFVar16->Function = p_Var6;
          pFVar15->Ordinal = iVar9;
          *(undefined4 *)&pFVar15->field_0x4 = uVar8;
          pFVar15->OperatorID = uVar3;
          pFVar15->Operator = pIVar4;
          pFVar15->Function = p_Var5;
          pFVar16 = pFVar15;
LAB_14ad332d0:
          pFVar10 = pFVar16;
          pFVar16 = pFVar10 + 1;
          if (pFVar16 <= pFVar14) goto code_r0x00014ad332d9;
          goto LAB_14ad332e0;
        }
        for (; pFVar16 = pFVar15, pFVar1 = pFVar15, pFVar15 < pFVar14; pFVar14 = pFVar14 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar14) {
            if (pFVar16->Ordinal < pFVar1->Ordinal) {
              pFVar16 = pFVar1;
            }
          }
          iVar9 = pFVar16->Ordinal;
          uVar8 = *(undefined4 *)&pFVar16->field_0x4;
          uVar2 = pFVar16->OperatorID;
          pIVar4 = pFVar16->Operator;
          p_Var5 = pFVar16->Function;
          uVar7 = *(undefined4 *)&pFVar14->field_0x4;
          uVar3 = pFVar14->OperatorID;
          pFVar16->Ordinal = pFVar14->Ordinal;
          *(undefined4 *)&pFVar16->field_0x4 = uVar7;
          pFVar16->OperatorID = uVar3;
          p_Var6 = pFVar14->Function;
          pFVar16->Operator = pFVar14->Operator;
          pFVar16->Function = p_Var6;
          pFVar14->Ordinal = iVar9;
          *(undefined4 *)&pFVar14->field_0x4 = uVar8;
          pFVar14->OperatorID = uVar2;
          pFVar14->Operator = pIVar4;
          pFVar14->Function = p_Var5;
        }
        goto LAB_14ad333c6;
      }
LAB_14ad333b4:
      local_338 = pFVar1;
      HeapSortInternal<Metasound::DynamicGraph::FResetEntry,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FResetEntry>,TLess<void>_>
                (pFVar16,iVar9,param_3,param_4);
LAB_14ad333c6:
      ppFVar11 = ppFVar11 + -3;
    } while (&local_328 <= ppFVar11);
  }
  return;
code_r0x00014ad332d9:
  if (pFVar16->Ordinal <= pFVar15->Ordinal) goto LAB_14ad332d0;
LAB_14ad332e0:
  do {
    pFVar13 = pFVar12;
    pFVar12 = pFVar13 + -1;
    if (pFVar12 <= pFVar15) break;
  } while (pFVar15->Ordinal <= pFVar12->Ordinal);
  uVar2 = pFVar13[-1].OperatorID;
  if (pFVar16 <= pFVar12) {
    uVar7 = *(undefined4 *)&pFVar16->field_0x4;
    uVar3 = pFVar10[1].OperatorID;
    pIVar4 = pFVar10[1].Operator;
    p_Var5 = pFVar10[1].Function;
    *(undefined8 *)pFVar16 = *(undefined8 *)pFVar12;
    pFVar10[1].OperatorID = uVar2;
    p_Var6 = pFVar13[-1].Function;
    pFVar10[1].Operator = pFVar13[-1].Operator;
    pFVar10[1].Function = p_Var6;
    pFVar12->Ordinal = pFVar16->Ordinal;
    *(undefined4 *)&pFVar12->field_0x4 = uVar7;
    pFVar13[-1].OperatorID = uVar3;
    pFVar13[-1].Operator = pIVar4;
    pFVar13[-1].Function = p_Var5;
    goto LAB_14ad332d0;
  }
  uVar7 = *(undefined4 *)&pFVar15->field_0x4;
  uVar3 = pFVar15->OperatorID;
  pIVar4 = pFVar15->Operator;
  p_Var5 = pFVar15->Function;
  *(undefined8 *)pFVar15 = *(undefined8 *)pFVar12;
  pFVar15->OperatorID = uVar2;
  local_338._0_4_ = (int)local_338 + -1;
  p_Var6 = pFVar13[-1].Function;
  pFVar15->Operator = pFVar13[-1].Operator;
  pFVar15->Function = p_Var6;
  pFVar12->Ordinal = pFVar15->Ordinal;
  *(undefined4 *)&pFVar12->field_0x4 = uVar7;
  pFVar13[-1].OperatorID = uVar3;
  pFVar13[-1].Operator = pIVar4;
  pFVar13[-1].Function = p_Var5;
  if ((longlong)((longlong)pFVar12 + (-0x20 - (longlong)pFVar15) & 0xffffffffffffffe0U) <
      (longlong)((longlong)pFVar14 - (longlong)pFVar16 & 0xffffffffffffffe0U)) {
    if (pFVar16 < pFVar14) {
      *ppFVar11 = pFVar16;
      ppFVar11[1] = pFVar14;
      *(int *)(ppFVar11 + 2) = (int)local_338;
      ppFVar11 = ppFVar11 + 3;
    }
    if (pFVar12 <= pFVar15 + 1) goto LAB_14ad333c6;
    pFVar14 = pFVar13 + -2;
    pFVar16 = pFVar15;
  }
  else {
    if (pFVar15 + 1 < pFVar12) {
      *ppFVar11 = pFVar15;
      ppFVar11[1] = pFVar13 + -2;
      *(int *)(ppFVar11 + 2) = (int)local_338;
      ppFVar11 = ppFVar11 + 3;
    }
    if (pFVar14 <= pFVar16) goto LAB_14ad333c6;
  }
  iVar9 = (int)((longlong)pFVar14 - (longlong)pFVar16 >> 5) + 1;
  pFVar15 = pFVar16;
  if ((int)local_338 == 0) goto LAB_14ad333b4;
  goto LAB_14ad33290;
}

// IntroSortInternal<Metasound::FVertexDataState,int,FIdentityFunctor,TDereferenceWrapper<Metasound::FVertexDataState,TLess<void>_>_> @ 14ad33460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<Metasound::FVertexDataState,int,FIdentityFunctor,TDereferenceWrapper<Metasound::FVertexDataState,TLess<void>_>_>
          (FVertexDataState *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<Metasound::FVertexDataState,TLess<void>_> param_4)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  FName FVar4;
  void *pvVar5;
  FVertexDataState *pFVar6;
  int iVar7;
  FVertexDataState *pFVar8;
  FVertexDataState *pFVar9;
  FVertexDataState *pFVar10;
  FVertexDataState *pFVar11;
  FVertexDataState *pFVar12;
  int iVar13;
  FVertexDataState **ppFVar14;
  bool bVar15;
  float fVar16;
  undefined1 auStack_368 [48];
  FVertexDataState *local_338;
  FVertexDataState *local_328;
  FVertexDataState *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (param_2 < 2) {
    return;
  }
  local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
  local_320 = param_1 + (longlong)param_2 + -1;
  local_328 = param_1;
  fVar16 = logf((float)param_2 * (float)param_2);
  local_318 = (undefined4)(longlong)fVar16;
  memset(local_310,0,0x2e8);
  ppFVar14 = &local_328;
LAB_14ad334e0:
  pFVar10 = ppFVar14[1];
  local_338 = ppFVar14[2];
  iVar7 = (int)((longlong)pFVar10 - (longlong)*ppFVar14 >> 4);
  pFVar6 = *ppFVar14;
  iVar13 = (int)local_338;
  while (iVar7 = iVar7 + 1, iVar13 != 0) {
    if (iVar7 < 9) goto joined_r0x00014ad336b3;
    pvVar3 = pFVar6->ID;
    pFVar8 = pFVar10 + 1;
    FVar4 = pFVar6[iVar7 / 2].VertexName;
    pvVar5 = pFVar6[iVar7 / 2].ID;
    pFVar6[iVar7 / 2].VertexName = pFVar6->VertexName;
    pFVar6[iVar7 / 2].ID = pvVar3;
    pFVar6->VertexName = FVar4;
    pFVar6->ID = pvVar5;
    pFVar12 = pFVar6;
LAB_14ad33540:
    do {
      pFVar11 = pFVar12;
      pFVar12 = pFVar11 + 1;
      if (pFVar10 < pFVar12) break;
      uVar1 = (pFVar6->VertexName).ComparisonIndex.Value;
      uVar2 = (pFVar12->VertexName).ComparisonIndex.Value;
      iVar7 = uVar1 - uVar2;
      if (iVar7 == 0) {
        iVar7 = (pFVar6->VertexName).Number - pFVar11[1].VertexName.Number;
      }
      if (iVar7 < 0) break;
      iVar7 = uVar2 - uVar1;
      if (iVar7 == 0) {
        iVar7 = pFVar11[1].VertexName.Number - (pFVar6->VertexName).Number;
      }
    } while ((iVar7 < 0) || (pFVar11[1].ID <= pFVar6->ID));
    do {
      pFVar9 = pFVar8;
      pFVar8 = pFVar9 + -1;
      if (pFVar8 <= pFVar6) break;
      uVar1 = (pFVar8->VertexName).ComparisonIndex.Value;
      uVar2 = (pFVar6->VertexName).ComparisonIndex.Value;
      iVar7 = uVar1 - uVar2;
      if (iVar7 == 0) {
        iVar7 = pFVar9[-1].VertexName.Number - (pFVar6->VertexName).Number;
      }
      if (iVar7 < 0) break;
      iVar7 = uVar2 - uVar1;
      if (iVar7 == 0) {
        iVar7 = (pFVar6->VertexName).Number - pFVar9[-1].VertexName.Number;
      }
    } while ((iVar7 < 0) || (pFVar6->ID <= pFVar9[-1].ID));
    pvVar3 = pFVar9[-1].ID;
    if (pFVar12 <= pFVar8) {
      FVar4 = pFVar12->VertexName;
      pvVar5 = pFVar11[1].ID;
      pFVar12->VertexName = pFVar8->VertexName;
      pFVar11[1].ID = pvVar3;
      pFVar8->VertexName = FVar4;
      pFVar9[-1].ID = pvVar5;
      goto LAB_14ad33540;
    }
    FVar4 = pFVar6->VertexName;
    pvVar5 = pFVar6->ID;
    iVar13 = iVar13 + -1;
    pFVar6->VertexName = pFVar8->VertexName;
    pFVar6->ID = pvVar3;
    pFVar8->VertexName = FVar4;
    pFVar9[-1].ID = pvVar5;
    if ((longlong)((longlong)pFVar8 + (-0x10 - (longlong)pFVar6) & 0xfffffffffffffff0U) <
        (longlong)((longlong)pFVar10 - (longlong)pFVar12 & 0xfffffffffffffff0U)) {
      if (pFVar12 < pFVar10) {
        *ppFVar14 = pFVar12;
        ppFVar14[1] = pFVar10;
        *(int *)(ppFVar14 + 2) = iVar13;
        ppFVar14 = ppFVar14 + 3;
      }
      if (pFVar8 <= pFVar6 + 1) goto LAB_14ad33674;
      pFVar10 = pFVar9 + -2;
      pFVar12 = pFVar6;
    }
    else {
      if (pFVar6 + 1 < pFVar8) {
        *ppFVar14 = pFVar6;
        ppFVar14[1] = pFVar9 + -2;
        *(int *)(ppFVar14 + 2) = iVar13;
        ppFVar14 = ppFVar14 + 3;
      }
      if (pFVar10 <= pFVar12) goto LAB_14ad33674;
    }
    iVar7 = (int)((longlong)pFVar10 - (longlong)pFVar12 >> 4);
    pFVar6 = pFVar12;
  }
  HeapSortInternal<Metasound::FVertexDataState,int,FIdentityFunctor,TDereferenceWrapper<Metasound::FVertexDataState,TLess<void>_>_>
            (pFVar6,iVar7,param_3,param_4);
  goto LAB_14ad33674;
joined_r0x00014ad336b3:
  for (; pFVar12 = pFVar6, pFVar8 = pFVar6, pFVar6 < pFVar10; pFVar10 = pFVar10 + -1) {
    while (pFVar11 = pFVar12, pFVar8 = pFVar8 + 1, pFVar8 <= pFVar10) {
      uVar1 = (pFVar11->VertexName).ComparisonIndex.Value;
      uVar2 = (pFVar8->VertexName).ComparisonIndex.Value;
      iVar7 = uVar1 - uVar2;
      if (iVar7 == 0) {
        iVar7 = (pFVar11->VertexName).Number - (pFVar8->VertexName).Number;
      }
      if (iVar7 < 0) {
        bVar15 = true;
      }
      else {
        iVar7 = uVar2 - uVar1;
        if (iVar7 == 0) {
          iVar7 = (pFVar8->VertexName).Number - (pFVar11->VertexName).Number;
        }
        if (iVar7 < 0) {
          bVar15 = false;
        }
        else {
          bVar15 = pFVar11->ID < pFVar8->ID;
        }
      }
      pFVar12 = pFVar8;
      if (!bVar15) {
        pFVar12 = pFVar11;
      }
    }
    FVar4 = pFVar11->VertexName;
    pvVar3 = pFVar11->ID;
    pvVar5 = pFVar10->ID;
    pFVar11->VertexName = pFVar10->VertexName;
    pFVar11->ID = pvVar5;
    pFVar10->VertexName = FVar4;
    pFVar10->ID = pvVar3;
  }
LAB_14ad33674:
  ppFVar14 = ppFVar14 + -3;
  if (ppFVar14 < &local_328) {
    return;
  }
  goto LAB_14ad334e0;
}

// IsEnvironmentVariableOfType<TArray<FGuid,TSizedDefaultAllocator<32>_>_> @ 14ad33750

bool __cdecl
Metasound::IsEnvironmentVariableOfType<TArray<FGuid,TSizedDefaultAllocator<32>_>_>
          (IMetasoundEnvironmentVariable *param_1)

{
  TArray<FGuid,TSizedDefaultAllocator<32>_> **ppTVar1;
  
  ppTVar1 = (TArray<FGuid,TSizedDefaultAllocator<32>_> **)(**(code **)((longlong)*param_1 + 0x10))()
  ;
  return ppTVar1 ==
         &TEnvironmentVariableTypeInfo<TArray<FGuid,TSizedDefaultAllocator<32>_>_>::TypePtr;
}

// IsSortedBy<Metasound::DynamicGraph::FOrdinalSwap,int,FIdentityFunctor,bool_(__cdecl*)(Metasound::DynamicGraph::FOrdinalSwap_const_&,Metasound::DynamicGraph::FOrdinalSwap_const_&)> @ 14ad33780

bool __cdecl
AlgoImpl::
IsSortedBy<Metasound::DynamicGraph::FOrdinalSwap,int,FIdentityFunctor,bool_(__cdecl*)(Metasound::DynamicGraph::FOrdinalSwap_const_&,Metasound::DynamicGraph::FOrdinalSwap_const_&)>
          (FOrdinalSwap *param_1,int param_2,FIdentityFunctor param_3,
          _func___cdecl_bool_FOrdinalSwap_ptr_FOrdinalSwap_ptr *param_4)

{
  FOrdinalSwap *pFVar1;
  bool bVar2;
  
  pFVar1 = param_1;
  if (param_2 != 0) {
    while (param_2 = param_2 + -1, param_2 != 0) {
      bVar2 = (*param_4)(pFVar1 + 1,param_1);
      if (bVar2) {
        return false;
      }
      param_1 = param_1 + 1;
      pFVar1 = pFVar1 + 1;
    }
  }
  return true;
}

// IsSupportedVertexData<Metasound::FInputVertexInterfaceData> @ 14ad337f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
Metasound::MetasoundGraphPrivate::IsSupportedVertexData<Metasound::FInputVertexInterfaceData>
          (FInputVertexInterfaceData *param_1,FInputVertexInterfaceData *param_2)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  FIdentityFunctor local_res18 [8];
  undefined1 local_res20 [8];
  TArray<Metasound::FVertexDataState,TSizedDefaultAllocator<32>_> local_88;
  TArray<Metasound::FVertexDataState,TSizedDefaultAllocator<32>_> local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  uVar15 = 0;
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  GetVertexInterfaceDataState(param_1,&local_78);
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  GetVertexInterfaceDataState(param_2,&local_88);
  AlgoImpl::
  IntroSortInternal<Metasound::FVertexDataState,int,FIdentityFunctor,TDereferenceWrapper<Metasound::FVertexDataState,TLess<void>_>_>
            ((FVertexDataState *)local_78.AllocatorInstance.Data,local_78.ArrayNum,local_res18[0],
             (TLess<void> *)local_res18);
  AlgoImpl::
  IntroSortInternal<Metasound::FVertexDataState,int,FIdentityFunctor,TDereferenceWrapper<Metasound::FVertexDataState,TLess<void>_>_>
            ((FVertexDataState *)local_88.AllocatorInstance.Data,local_88.ArrayNum,local_res18[0],
             (TLess<void> *)local_res20);
  uVar9 = uVar15;
  uVar11 = uVar15;
  while ((-1 < (int)uVar11 && ((int)uVar11 < local_78.ArrayNum))) {
    if ((int)uVar9 < 0) goto LAB_14ad33d1c;
    if (local_88.ArrayNum <= (int)uVar9) goto LAB_14ad33c70;
    uVar10 = ~uVar11 >> 0x1f;
    uVar5 = 0;
    if ((int)uVar11 < local_78.ArrayNum) {
      uVar5 = uVar10;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    uVar16 = ~uVar9 >> 0x1f;
    lVar14 = (longlong)(int)uVar11 * 0x10;
    pFVar7 = local_78.AllocatorInstance.Data + lVar14;
    uVar5 = 0;
    if ((int)uVar9 < local_88.ArrayNum) {
      uVar5 = uVar16;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    lVar13 = (longlong)(int)uVar9 * 0x10;
    uVar5 = 0;
    if (*(longlong *)&local_88.AllocatorInstance.Data[lVar13].field_0x0 ==
        *(longlong *)&pFVar7->field_0x0) {
      uVar6 = uVar5;
      if ((int)uVar9 < local_88.ArrayNum) {
        uVar6 = uVar16;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      if (*(longlong *)(local_88.AllocatorInstance.Data + lVar13 + 8) != 0) {
        uVar6 = uVar5;
        if ((int)uVar9 < local_88.ArrayNum) {
          uVar6 = uVar16;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        FVar2.Data = local_88.AllocatorInstance.Data;
        uVar6 = uVar5;
        if ((int)uVar11 < local_78.ArrayNum) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        if (*(longlong *)(FVar2.Data + lVar13 + 8) !=
            *(longlong *)(local_78.AllocatorInstance.Data + lVar14 + 8)) {
          if ((byte)LogMetaSound._0_1_ < 3) goto LAB_14ad33d18;
          if ((int)uVar9 < local_88.ArrayNum) {
            uVar5 = uVar16;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return (bool)uVar4;
          }
          ::FName::ToString((FName *)(local_88.AllocatorInstance.Data + lVar13),&local_68);
          UE::Logging::Private::BasicLog<3>
                    (&`bool___cdecl_Metasound::MetasoundGraphPrivate::IsSupportedVertexData<Metasound::FInputVertexInterfaceData>(Metasound::FInputVertexInterfaceData_const&___ptr64,Metasound::FInputVertexInterfaceData_const&___ptr64)'
                      ::__l11::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
          goto LAB_14ad33d0e;
        }
      }
      uVar9 = uVar9 + 1;
      uVar11 = uVar11 + 1;
    }
    else {
      uVar6 = uVar5;
      if ((int)uVar11 < local_78.ArrayNum) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      pFVar7 = local_78.AllocatorInstance.Data + lVar14;
      if ((int)uVar9 < local_88.ArrayNum) {
        uVar5 = uVar16;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      pFVar12 = local_88.AllocatorInstance.Data + lVar13;
      iVar8 = *(int *)&pFVar12->field_0x0 - *(int *)&pFVar7->field_0x0;
      if (iVar8 == 0) {
        iVar8 = *(int *)(pFVar12 + 4) - *(int *)(pFVar7 + 4);
      }
      if (iVar8 < 0) {
LAB_14ad33bdb:
        if ((byte)LogMetaSound._0_1_ < 3) goto LAB_14ad33d18;
        if ((int)uVar9 < local_88.ArrayNum) {
          uVar15 = uVar16;
        }
        if ((uVar15 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        ::FName::ToString((FName *)(local_88.AllocatorInstance.Data + lVar13),&local_58);
        UE::Logging::Private::BasicLog<3>
                  (&`bool___cdecl_Metasound::MetasoundGraphPrivate::IsSupportedVertexData<Metasound::FInputVertexInterfaceData>(Metasound::FInputVertexInterfaceData_const&___ptr64,Metasound::FInputVertexInterfaceData_const&___ptr64)'
                    ::__l26::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        local_68.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
        goto LAB_14ad33d0e;
      }
      iVar8 = *(int *)&pFVar7->field_0x0 - *(int *)&pFVar12->field_0x0;
      if (iVar8 == 0) {
        iVar8 = *(int *)(pFVar7 + 4) - *(int *)(pFVar12 + 4);
      }
      if ((-1 < iVar8) && (*(ulonglong *)(pFVar12 + 8) < *(ulonglong *)(pFVar7 + 8)))
      goto LAB_14ad33bdb;
      uVar11 = uVar11 + 1;
    }
  }
  if (-1 < (int)uVar9) {
LAB_14ad33c70:
    if ((int)uVar9 < local_88.ArrayNum) {
      if (2 < (byte)LogMetaSound._0_1_) {
        if ((int)uVar9 < local_88.ArrayNum) {
          uVar15 = ~uVar9 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        ::FName::ToString((FName *)(local_88.AllocatorInstance.Data + (longlong)(int)uVar9 * 0x10),
                          &local_48);
        UE::Logging::Private::BasicLog<3>
                  (&`bool___cdecl_Metasound::MetasoundGraphPrivate::IsSupportedVertexData<Metasound::FInputVertexInterfaceData>(Metasound::FInputVertexInterfaceData_const&___ptr64,Metasound::FInputVertexInterfaceData_const&___ptr64)'
                    ::__l40::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        local_68.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
LAB_14ad33d0e:
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
      }
LAB_14ad33d18:
      bVar3 = false;
      goto LAB_14ad33d1e;
    }
  }
LAB_14ad33d1c:
  bVar3 = true;
LAB_14ad33d1e:
  if ((FVertexDataState *)local_88.AllocatorInstance.Data != (FVertexDataState *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if ((FVertexDataState *)local_78.AllocatorInstance.Data != (FVertexDataState *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return bVar3;
}

// IsVertexBound<Metasound::VertexDataPrivate::FInputBinding> @ 14ad33d80

bool __cdecl
Metasound::VertexDataPrivate::IsVertexBound<Metasound::VertexDataPrivate::FInputBinding>
          (TArray<Metasound::VertexDataPrivate::FInputBinding,TSizedDefaultAllocator<32>_> *param_1,
          FName *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (param_1->AllocatorInstance).Data;
  pFVar2 = pFVar1 + (longlong)param_1->ArrayNum * 0x58;
  if (pFVar1 != pFVar2) {
    do {
      if (*(FName *)(pFVar1 + 8) == *param_2) {
        return (bool)pFVar1[0x50];
      }
      pFVar1 = pFVar1 + 0x58;
    } while (pFVar1 != pFVar2);
  }
  return false;
}

// IsVertexBound<Metasound::VertexDataPrivate::FOutputBinding> @ 14ad33dc0

bool __cdecl
Metasound::VertexDataPrivate::IsVertexBound<Metasound::VertexDataPrivate::FOutputBinding>
          (TArray<Metasound::VertexDataPrivate::FOutputBinding,TSizedDefaultAllocator<32>_> *param_1
          ,FName *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (param_1->AllocatorInstance).Data;
  pFVar2 = pFVar1 + (longlong)param_1->ArrayNum * 0x40;
  if (pFVar1 != pFVar2) {
    do {
      if (*(FName *)(pFVar1 + 8) == *param_2) {
        return (bool)pFVar1[0x38];
      }
      pFVar1 = pFVar1 + 0x40;
    } while (pFVar1 != pFVar2);
  }
  return false;
}

// LowerBoundInternal<TTuple<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter>_const_,int,FGuid,TSortedMap<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::FKeyForward,TLess<FGuid_const_&>_> @ 14ad33e00

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter>_const_,int,FGuid,TSortedMap<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::FKeyForward,TLess<FGuid_const_&>_>
          (TTuple<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter> *param_1,int param_2,
          FGuid *param_3,FKeyForward param_4,TLess<FGuid_const_&> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (*(uint *)(param_1 + iVar1) < param_3->A) {
        bVar4 = true;
      }
      else if (param_3->A < *(uint *)(param_1 + iVar1)) {
        bVar4 = false;
      }
      else if (*(uint *)&param_1[iVar1].field_0x4 < param_3->B) {
        bVar4 = true;
      }
      else if (param_3->B < *(uint *)&param_1[iVar1].field_0x4) {
        bVar4 = false;
      }
      else if (*(uint *)&param_1[iVar1].field_0x8 < param_3->C) {
        bVar4 = true;
      }
      else if (param_3->C < *(uint *)&param_1[iVar1].field_0x8) {
        bVar4 = false;
      }
      else {
        bVar4 = *(uint *)&param_1[iVar1].field_0xc < param_3->D;
      }
      if (bVar4) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// LowerBoundInternal<TTuple<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID,TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>_>_const_,int,Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID,TSortedMap<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID,TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>,TSizedDefaultAllocator<32>,TLess<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID_const_&>_>::FKeyForward,TLess<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID_const_&>_> @ 14ad33ea0

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID,TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>_>_const_,int,Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID,TSortedMap<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID,TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>,TSizedDefaultAllocator<32>,TLess<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID_const_&>_>::FKeyForward,TLess<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID_const_&>_>
          (TTuple<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID,TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>_>
           *param_1,int param_2,FLiteralNodeID *param_3,FKeyForward param_4,
          TLess<Metasound::DynamicGraph::FDynamicOperatorTransactor::FLiteralNodeID_const_&> param_5
          )

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar4;
      bVar3 = Metasound::DynamicGraph::operator<((FLiteralNodeID *)(param_1 + iVar1),param_3);
      if (bVar3) {
        iVar4 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar4;
}

// LowerBoundInternal<TTuple<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>_>_const_,int,FName,TSortedMap<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess> @ 14ad33f20

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>_>_const_,int,FName,TSortedMap<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
          (TTuple<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>_>
           *param_1,int param_2,FName *param_3,FKeyForward param_4,FNameFastLess param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      iVar4 = *(int *)(param_1 + iVar1) - (param_3->ComparisonIndex).Value;
      if (iVar4 == 0) {
        iVar4 = *(int *)&param_1[iVar1].field_0x4 - param_3->Number;
      }
      if (iVar4 < 0) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// LowerBoundInternal<TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>_const_,int,FName,TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess> @ 14ad33f90

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>_const_,int,FName,TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
          (TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>
           *param_1,int param_2,FName *param_3,FKeyForward param_4,FNameFastLess param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      iVar4 = *(int *)(param_1 + iVar1) - (param_3->ComparisonIndex).Value;
      if (iVar4 == 0) {
        iVar4 = *(int *)&param_1[iVar1].field_0x4 - param_3->Number;
      }
      if (iVar4 < 0) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// LowerBoundInternal<TTuple<FName,Metasound::FAnyDataReference>_const_,int,FName,TSortedMap<FName,Metasound::FAnyDataReference,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess> @ 14ad33ff0

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<FName,Metasound::FAnyDataReference>_const_,int,FName,TSortedMap<FName,Metasound::FAnyDataReference,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
          (TTuple<FName,Metasound::FAnyDataReference> *param_1,int param_2,FName *param_3,
          FKeyForward param_4,FNameFastLess param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      iVar4 = *(int *)(param_1 + iVar1) - (param_3->ComparisonIndex).Value;
      if (iVar4 == 0) {
        iVar4 = *(int *)&param_1[iVar1].field_0x4 - param_3->Number;
      }
      if (iVar4 < 0) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// LowerBoundInternal<TTuple<FName,unsigned___int64>_const_,int,FName,TSortedMap<FName,unsigned___int64,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess> @ 14ad34050

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<FName,unsigned___int64>_const_,int,FName,TSortedMap<FName,unsigned___int64,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
          (TTuple<FName,unsigned___int64> *param_1,int param_2,FName *param_3,FKeyForward param_4,
          FNameFastLess param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      iVar4 = *(int *)(param_1 + iVar1) - (param_3->ComparisonIndex).Value;
      if (iVar4 == 0) {
        iVar4 = *(int *)&param_1[iVar1].field_0x4 - param_3->Number;
      }
      if (iVar4 < 0) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// LowerBoundInternal<TTuple<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo>_const_,int,unsigned___int64,TSortedMap<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>::FKeyForward,TLess<unsigned___int64_const_>_> @ 14ad340b0

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo>_const_,int,unsigned___int64,TSortedMap<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>::FKeyForward,TLess<unsigned___int64_const_>_>
          (TTuple<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo>
           *param_1,int param_2,ulong64 *param_3,FKeyForward param_4,
          TLess<unsigned___int64_const_> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (*(ulonglong *)(param_1 + iVar1) < *param_3) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// LowerBoundInternal<Metasound::DynamicGraph::FExecuteEntry_const_,int,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FExecuteEntry>,TLess<void>_> @ 14ad34100

int __cdecl
AlgoImpl::
LowerBoundInternal<Metasound::DynamicGraph::FExecuteEntry_const_,int,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FExecuteEntry>,TLess<void>_>
          (FExecuteEntry *param_1,int param_2,int *param_3,
          TGetOrdinal<Metasound::DynamicGraph::FExecuteEntry> param_4,TLess<void> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (param_1[iVar1].Ordinal < *param_3) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// LowerBoundInternal<Metasound::DynamicGraph::FPostExecuteEntry_const_,int,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FPostExecuteEntry>,TLess<void>_> @ 14ad34160

int __cdecl
AlgoImpl::
LowerBoundInternal<Metasound::DynamicGraph::FPostExecuteEntry_const_,int,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FPostExecuteEntry>,TLess<void>_>
          (FPostExecuteEntry *param_1,int param_2,int *param_3,
          TGetOrdinal<Metasound::DynamicGraph::FPostExecuteEntry> param_4,TLess<void> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (param_1[iVar1].Ordinal < *param_3) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// LowerBoundInternal<Metasound::DynamicGraph::FResetEntry_const_,int,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FResetEntry>,TLess<void>_> @ 14ad341c0

int __cdecl
AlgoImpl::
LowerBoundInternal<Metasound::DynamicGraph::FResetEntry_const_,int,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FResetEntry>,TLess<void>_>
          (FResetEntry *param_1,int param_2,int *param_3,
          TGetOrdinal<Metasound::DynamicGraph::FResetEntry> param_4,TLess<void> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (param_1[iVar1].Ordinal < *param_3) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// LowerBoundInternal<Metasound::INode_const_*_const,int,Metasound::INode_const_*,FIdentityFunctor,TLess<void>_> @ 14ad34220

int __cdecl
AlgoImpl::
LowerBoundInternal<Metasound::INode_const_*_const,int,Metasound::INode_const_*,FIdentityFunctor,TLess<void>_>
          (INode **param_1,int param_2,INode **param_3,FIdentityFunctor param_4,TLess<void> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (param_1[iVar1] < *param_3) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// MakeShared<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>,1> @ 14ad34270

TSharedRef<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>,1>
* __cdecl MakeShared<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>,1>
                    (TSharedRef<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>,1>
                     *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 *puVar4;
  TSharedRef<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>,1>
  *pTVar5;
  
  pTVar3 = operator_new(0x38);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object =
         (TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>
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
         ___7__TIntrusiveReferenceController_V__TSpscQueue_V__TUniquePtr_VIDynamicOperatorTransform_DynamicGraph_Metasound__U__TDefaultDelete_VIDynamicOperatorTransform_DynamicGraph_Metasound______UFMemory_____00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    *(undefined4 *)&pTVar3[3]._padding_ = 0;
    puVar4 = FMemory::Malloc(0x10,8);
    *puVar4 = 0;
    pTVar3[1]._padding_ = (longlong)puVar4;
    *(undefined8 **)&pTVar3[2].SharedReferenceCount = puVar4;
    pTVar3[2]._padding_ = (longlong)puVar4;
    *(undefined8 **)&pTVar3[1].SharedReferenceCount = puVar4;
    LOCK();
    *(undefined4 *)&pTVar3[3]._padding_ = 0;
    UNLOCK();
    __return_storage_ptr__->Object =
         (TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>
          *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if ((TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>
         *)(pTVar3 + 1) ==
        (TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>
         *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TSharedRef<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>,1>
                  *)(*pcVar1)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// Reverse<Metasound::FDataEdge> @ 14ad34760

void __cdecl AlgoImpl::Reverse<Metasound::FDataEdge>(FDataEdge *param_1,int param_2)

{
  undefined8 uVar1;
  INode *pIVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  INode *pIVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  INode *pIVar14;
  longlong lVar15;
  undefined7 uVar16;
  uchar uVar17;
  undefined7 uVar18;
  FDataEdge *pFVar19;
  longlong lVar20;
  
  lVar20 = (longlong)(param_2 / 2);
  if (0 < param_2 / 2) {
    pFVar19 = param_1 + (param_2 + -1);
    do {
      uVar17 = (param_1->To).Vertex.Literal.Value.TypeIndex;
      uVar18 = *(undefined7 *)&(param_1->To).Vertex.Literal.Value.field_0x11;
      uVar1 = *(undefined8 *)&(pFVar19->From).Vertex;
      pIVar2 = (param_1->From).Node;
      uVar3 = *(undefined8 *)&(param_1->From).Vertex;
      uVar4 = *(undefined8 *)&(param_1->From).Vertex.field_0x8;
      uVar5 = *(undefined8 *)&(param_1->From).Vertex.field_0x10;
      uVar6 = *(undefined8 *)&(param_1->From).Vertex.field_0x18;
      pIVar7 = (param_1->To).Node;
      lVar8 = (param_1->To).Vertex._padding_;
      lVar9 = (param_1->To).Vertex._padding_;
      lVar10 = (param_1->To).Vertex._padding_;
      lVar11 = (param_1->To).Vertex._padding_;
      lVar12 = (param_1->To).Vertex.Literal.Value._padding_;
      lVar13 = (param_1->To).Vertex.Literal.Value._padding_;
      (param_1->From).Node = (pFVar19->From).Node;
      *(undefined8 *)&(param_1->From).Vertex = uVar1;
      uVar1 = *(undefined8 *)&(pFVar19->From).Vertex.field_0x10;
      *(undefined8 *)&(param_1->From).Vertex.field_0x8 =
           *(undefined8 *)&(pFVar19->From).Vertex.field_0x8;
      *(undefined8 *)&(param_1->From).Vertex.field_0x10 = uVar1;
      pIVar14 = (pFVar19->To).Node;
      *(undefined8 *)&(param_1->From).Vertex.field_0x18 =
           *(undefined8 *)&(pFVar19->From).Vertex.field_0x18;
      (param_1->To).Node = pIVar14;
      lVar15 = (pFVar19->To).Vertex._padding_;
      (param_1->To).Vertex._padding_ = (pFVar19->To).Vertex._padding_;
      (param_1->To).Vertex._padding_ = lVar15;
      lVar15 = (pFVar19->To).Vertex._padding_;
      (param_1->To).Vertex._padding_ = (pFVar19->To).Vertex._padding_;
      (param_1->To).Vertex._padding_ = lVar15;
      lVar15 = (pFVar19->To).Vertex.Literal.Value._padding_;
      (param_1->To).Vertex.Literal.Value._padding_ = (pFVar19->To).Vertex.Literal.Value._padding_;
      (param_1->To).Vertex.Literal.Value._padding_ = lVar15;
      uVar16 = *(undefined7 *)&(pFVar19->To).Vertex.Literal.Value.field_0x11;
      (param_1->To).Vertex.Literal.Value.TypeIndex = (pFVar19->To).Vertex.Literal.Value.TypeIndex;
      *(undefined7 *)&(param_1->To).Vertex.Literal.Value.field_0x11 = uVar16;
      (pFVar19->From).Node = pIVar2;
      *(undefined8 *)&(pFVar19->From).Vertex = uVar3;
      *(undefined8 *)&(pFVar19->From).Vertex.field_0x8 = uVar4;
      *(undefined8 *)&(pFVar19->From).Vertex.field_0x10 = uVar5;
      *(undefined8 *)&(pFVar19->From).Vertex.field_0x18 = uVar6;
      (pFVar19->To).Node = pIVar7;
      (pFVar19->To).Vertex._padding_ = lVar8;
      (pFVar19->To).Vertex._padding_ = lVar9;
      (pFVar19->To).Vertex._padding_ = lVar10;
      (pFVar19->To).Vertex._padding_ = lVar11;
      (pFVar19->To).Vertex.Literal.Value._padding_ = lVar12;
      (pFVar19->To).Vertex.Literal.Value._padding_ = lVar13;
      (pFVar19->To).Vertex.Literal.Value.TypeIndex = uVar17;
      *(undefined7 *)&(pFVar19->To).Vertex.Literal.Value.field_0x11 = uVar18;
      lVar20 = lVar20 + -1;
      pFVar19 = pFVar19 + -1;
      param_1 = param_1 + 1;
    } while (lVar20 != 0);
  }
  return;
}

// Set<Metasound::VertexDataPrivate::FInputBinding> @ 14ad349c0

void __cdecl
Metasound::VertexDataPrivate::Set<Metasound::VertexDataPrivate::FInputBinding>
          (TArray<Metasound::VertexDataPrivate::FInputBinding,TSizedDefaultAllocator<32>_> *param_1,
          FDataReferenceCollection *param_2)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  FName *pFVar6;
  FName *pFVar7;
  FDataVertex *pFVar8;
  FDataVertex *pFVar9;
  undefined1 local_res8 [8];
  
  pFVar9 = (FDataVertex *)(param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  pFVar7 = &pFVar9[2].DataTypeName;
  pFVar8 = (FDataVertex *)((longlong)pFVar9 + (longlong)iVar1 * 0x58);
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Metasound::VertexDataPrivate::FInputBinding,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar8) break;
    pFVar5 = TMapBase<FName,Metasound::FAnyDataReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Metasound::FAnyDataReference,0>_>
             ::Find((TMapBase<FName,Metasound::FAnyDataReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Metasound::FAnyDataReference,0>_>
                     *)param_2,pFVar7[-9]);
    if (pFVar5 != (FAnyDataReference *)0x0) {
      pFVar6 = (FName *)(**(code **)(pFVar5->_padding_ + 8))(pFVar5);
      bVar4 = IsCastable(pFVar7[-8],*pFVar6);
      if (!bVar4) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                           ,0xf3,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (((char)(pFVar7->ComparisonIndex).Value != '\0') &&
         (FVar2 = pFVar7[-1], FVar2 != (FName)0x0)) {
        (*(code *)**(undefined8 **)FVar2)(FVar2,1);
      }
      FAnyDataReference::FAnyDataReference
                ((FAnyDataReference *)(pFVar7 + -3),pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
      pFVar7[-3] = (FName)&___7FAnyDataReference_Metasound__6B_;
      *(undefined1 *)&(pFVar7->ComparisonIndex).Value = 1;
      CheckAccessTypeCompatibility(pFVar9,(FAnyDataReference *)(pFVar7 + -3));
    }
    pFVar9 = (FDataVertex *)&pFVar9[2].AccessType;
    pFVar7 = pFVar7 + 0xb;
  }
  return;
}

// Set<Metasound::VertexDataPrivate::FOutputBinding> @ 14ad34ae0

void __cdecl
Metasound::VertexDataPrivate::Set<Metasound::VertexDataPrivate::FOutputBinding>
          (TArray<Metasound::VertexDataPrivate::FOutputBinding,TSizedDefaultAllocator<32>_> *param_1
          ,FDataReferenceCollection *param_2)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  FName *pFVar6;
  EVertexAccessType *pEVar7;
  FDataVertex *pFVar8;
  FDataVertex *pFVar9;
  undefined1 local_res8 [8];
  
  pFVar9 = (FDataVertex *)(param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  pFVar8 = pFVar9 + (longlong)iVar1 * 2;
  pEVar7 = &pFVar9[1].AccessType;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Metasound::VertexDataPrivate::FOutputBinding,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar8) break;
    pFVar5 = TMapBase<FName,Metasound::FAnyDataReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Metasound::FAnyDataReference,0>_>
             ::Find((TMapBase<FName,Metasound::FAnyDataReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Metasound::FAnyDataReference,0>_>
                     *)param_2,*(FName *)(pEVar7 + -0xc));
    if (pFVar5 != (FAnyDataReference *)0x0) {
      pFVar6 = (FName *)(**(code **)(pFVar5->_padding_ + 8))(pFVar5);
      bVar4 = IsCastable(*(FName *)(pEVar7 + -10),*pFVar6);
      if (!bVar4) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                           ,0x181,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (((char)*pEVar7 != Reference) && (FVar2 = *(FName *)(pEVar7 + -2), FVar2 != (FName)0x0)) {
        (*(code *)**(undefined8 **)FVar2)(FVar2,1);
      }
      FAnyDataReference::FAnyDataReference
                ((FAnyDataReference *)(pEVar7 + -6),pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
      ((FDataVertex *)(pEVar7 + -6))->_padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
      *(undefined1 *)pEVar7 = Value;
      CheckAccessTypeCompatibility(pFVar9,(FAnyDataReference *)(pEVar7 + -6));
    }
    pFVar9 = pFVar9 + 2;
    pEVar7 = pEVar7 + 0x10;
  }
  return;
}

// SetOrdinalsAndSortTable<Metasound::DynamicGraph::FExecuteEntry> @ 14ad34c10

void __cdecl
Metasound::DynamicGraph::DynamicGraphAlgoPrivate::
SetOrdinalsAndSortTable<Metasound::DynamicGraph::FExecuteEntry>
          (TMap<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>
           *param_1,
          TArray<Metasound::DynamicGraph::FExecuteEntry,TSizedDefaultAllocator<32>_> *param_2)

{
  FExecuteEntry *pFVar1;
  code *pcVar2;
  bool bVar3;
  int *piVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  TGetOrdinal<Metasound::DynamicGraph::FExecuteEntry> local_res10 [8];
  
  iVar9 = param_2->ArrayNum;
  pFVar7 = (param_2->AllocatorInstance).Data;
  pFVar6 = pFVar7 + (longlong)iVar9 * 0x20;
  while( true ) {
    if (param_2->ArrayNum != iVar9) {
      local_res10[0] = (TGetOrdinal<Metasound::DynamicGraph::FExecuteEntry>)0x0;
      `TCheckedPointerIterator<Metasound::DynamicGraph::FExecuteEntry,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar7 == pFVar6) break;
    piVar4 = TMapBase<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>
             ::Find((TMapBase<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>
                     *)param_1,*(ulong64 *)(pFVar7 + 8));
    if (piVar4 == (int *)0x0) {
      *(int *)pFVar7 = 0x7fffffff;
      pFVar7 = pFVar7 + 0x20;
    }
    else {
      *(int *)pFVar7 = *piVar4;
      pFVar7 = pFVar7 + 0x20;
    }
  }
  iVar9 = param_2->ArrayNum;
  pFVar1 = (FExecuteEntry *)(param_2->AllocatorInstance).Data;
  if (iVar9 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  AlgoImpl::
  IntroSortInternal<Metasound::DynamicGraph::FExecuteEntry,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FExecuteEntry>,TLess<void>_>
            (pFVar1,iVar9,local_res10[0],(TLess<void>)local_res10[0]);
  lVar5 = (longlong)param_2->ArrayNum;
  if (param_2->ArrayNum != 0) {
    pFVar7 = (param_2->AllocatorInstance).Data;
    iVar11 = 0;
    bVar3 = *(int *)pFVar7 != 0x7fffffff;
    lVar8 = 0;
    iVar9 = 0;
    do {
      lVar8 = lVar8 + 1;
      iVar10 = iVar9 + 1;
      if (lVar8 < lVar5) {
        pFVar6 = pFVar7 + lVar8 * 0x20;
        do {
          if (bVar3 != (*(int *)pFVar6 != 0x7fffffff)) break;
          iVar10 = iVar10 + 1;
          lVar8 = lVar8 + 1;
          pFVar6 = pFVar6 + 0x20;
        } while (lVar8 < lVar5);
      }
      if (bVar3 != false) {
        if (iVar11 != iVar9) {
          memmove(pFVar7 + (longlong)iVar11 * 0x20,pFVar7 + (longlong)iVar9 * 0x20,
                  (longlong)(iVar10 - iVar9) << 5);
        }
        iVar11 = iVar11 + (iVar10 - iVar9);
      }
      bVar3 = (bool)(bVar3 ^ 1);
      iVar9 = iVar10;
    } while (lVar8 < lVar5);
    param_2->ArrayNum = iVar11;
  }
  return;
}

// SetOrdinalsAndSortTable<Metasound::DynamicGraph::FPostExecuteEntry> @ 14ad34da0

void __cdecl
Metasound::DynamicGraph::DynamicGraphAlgoPrivate::
SetOrdinalsAndSortTable<Metasound::DynamicGraph::FPostExecuteEntry>
          (TMap<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>
           *param_1,
          TArray<Metasound::DynamicGraph::FPostExecuteEntry,TSizedDefaultAllocator<32>_> *param_2)

{
  FPostExecuteEntry *pFVar1;
  code *pcVar2;
  bool bVar3;
  int *piVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  TGetOrdinal<Metasound::DynamicGraph::FPostExecuteEntry> local_res10 [8];
  
  iVar9 = param_2->ArrayNum;
  pFVar7 = (param_2->AllocatorInstance).Data;
  pFVar6 = pFVar7 + (longlong)iVar9 * 0x20;
  while( true ) {
    if (param_2->ArrayNum != iVar9) {
      local_res10[0] = (TGetOrdinal<Metasound::DynamicGraph::FPostExecuteEntry>)0x0;
      `TCheckedPointerIterator<Metasound::DynamicGraph::FPostExecuteEntry,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res10);
    }
    if (pFVar7 == pFVar6) break;
    piVar4 = TMapBase<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>
             ::Find((TMapBase<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>
                     *)param_1,*(ulong64 *)(pFVar7 + 8));
    if (piVar4 == (int *)0x0) {
      *(int *)pFVar7 = 0x7fffffff;
      pFVar7 = pFVar7 + 0x20;
    }
    else {
      *(int *)pFVar7 = *piVar4;
      pFVar7 = pFVar7 + 0x20;
    }
  }
  iVar9 = param_2->ArrayNum;
  pFVar1 = (FPostExecuteEntry *)(param_2->AllocatorInstance).Data;
  if (iVar9 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  AlgoImpl::
  IntroSortInternal<Metasound::DynamicGraph::FPostExecuteEntry,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FPostExecuteEntry>,TLess<void>_>
            (pFVar1,iVar9,local_res10[0],(TLess<void>)local_res10[0]);
  lVar5 = (longlong)param_2->ArrayNum;
  if (param_2->ArrayNum != 0) {
    pFVar7 = (param_2->AllocatorInstance).Data;
    iVar11 = 0;
    bVar3 = *(int *)pFVar7 != 0x7fffffff;
    lVar8 = 0;
    iVar9 = 0;
    do {
      lVar8 = lVar8 + 1;
      iVar10 = iVar9 + 1;
      if (lVar8 < lVar5) {
        pFVar6 = pFVar7 + lVar8 * 0x20;
        do {
          if (bVar3 != (*(int *)pFVar6 != 0x7fffffff)) break;
          iVar10 = iVar10 + 1;
          lVar8 = lVar8 + 1;
          pFVar6 = pFVar6 + 0x20;
        } while (lVar8 < lVar5);
      }
      if (bVar3 != false) {
        if (iVar11 != iVar9) {
          memmove(pFVar7 + (longlong)iVar11 * 0x20,pFVar7 + (longlong)iVar9 * 0x20,
                  (longlong)(iVar10 - iVar9) << 5);
        }
        iVar11 = iVar11 + (iVar10 - iVar9);
      }
      bVar3 = (bool)(bVar3 ^ 1);
      iVar9 = iVar10;
    } while (lVar8 < lVar5);
    param_2->ArrayNum = iVar11;
  }
  return;
}

// SetOrdinalsAndSortTable<Metasound::DynamicGraph::FResetEntry> @ 14ad34f30

void __cdecl
Metasound::DynamicGraph::DynamicGraphAlgoPrivate::
SetOrdinalsAndSortTable<Metasound::DynamicGraph::FResetEntry>
          (TMap<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>
           *param_1,
          TArray<Metasound::DynamicGraph::FResetEntry,TSizedDefaultAllocator<32>_> *param_2)

{
  FResetEntry *pFVar1;
  code *pcVar2;
  bool bVar3;
  int *piVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  TGetOrdinal<Metasound::DynamicGraph::FResetEntry> local_res10 [8];
  
  iVar9 = param_2->ArrayNum;
  pFVar7 = (param_2->AllocatorInstance).Data;
  pFVar6 = pFVar7 + (longlong)iVar9 * 0x20;
  while( true ) {
    if (param_2->ArrayNum != iVar9) {
      local_res10[0] = (TGetOrdinal<Metasound::DynamicGraph::FResetEntry>)0x0;
      `TCheckedPointerIterator<Metasound::DynamicGraph::FResetEntry,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar7 == pFVar6) break;
    piVar4 = TMapBase<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>
             ::Find((TMapBase<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>
                     *)param_1,*(ulong64 *)(pFVar7 + 8));
    if (piVar4 == (int *)0x0) {
      *(int *)pFVar7 = 0x7fffffff;
      pFVar7 = pFVar7 + 0x20;
    }
    else {
      *(int *)pFVar7 = *piVar4;
      pFVar7 = pFVar7 + 0x20;
    }
  }
  iVar9 = param_2->ArrayNum;
  pFVar1 = (FResetEntry *)(param_2->AllocatorInstance).Data;
  if (iVar9 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  AlgoImpl::
  IntroSortInternal<Metasound::DynamicGraph::FResetEntry,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FResetEntry>,TLess<void>_>
            (pFVar1,iVar9,local_res10[0],(TLess<void>)local_res10[0]);
  lVar5 = (longlong)param_2->ArrayNum;
  if (param_2->ArrayNum != 0) {
    pFVar7 = (param_2->AllocatorInstance).Data;
    iVar11 = 0;
    bVar3 = *(int *)pFVar7 != 0x7fffffff;
    lVar8 = 0;
    iVar9 = 0;
    do {
      lVar8 = lVar8 + 1;
      iVar10 = iVar9 + 1;
      if (lVar8 < lVar5) {
        pFVar6 = pFVar7 + lVar8 * 0x20;
        do {
          if (bVar3 != (*(int *)pFVar6 != 0x7fffffff)) break;
          iVar10 = iVar10 + 1;
          lVar8 = lVar8 + 1;
          pFVar6 = pFVar6 + 0x20;
        } while (lVar8 < lVar5);
      }
      if (bVar3 != false) {
        if (iVar11 != iVar9) {
          memmove(pFVar7 + (longlong)iVar11 * 0x20,pFVar7 + (longlong)iVar9 * 0x20,
                  (longlong)(iVar10 - iVar9) << 5);
        }
        iVar11 = iVar11 + (iVar10 - iVar9);
      }
      bVar3 = (bool)(bVar3 ^ 1);
      iVar9 = iVar10;
    } while (lVar8 < lVar5);
    param_2->ArrayNum = iVar11;
  }
  return;
}

// SetVertex<Metasound::VertexDataPrivate::FInputBinding> @ 14ad350c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::VertexDataPrivate::SetVertex<Metasound::VertexDataPrivate::FInputBinding>
          (bool param_1,
          TArray<Metasound::VertexDataPrivate::FInputBinding,TSizedDefaultAllocator<32>_> *param_2,
          FName *param_3,FAnyDataReference *param_4)

{
  EDataReferenceAccessType EVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName *pFVar5;
  FString *pFVar6;
  longlong *plVar7;
  FInputBinding *pFVar8;
  undefined4 uVar9;
  FInputBinding *pFVar10;
  wchar_t *pwVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  undefined1 auStack_148 [32];
  FInputBinding *local_128;
  FInputBinding *local_120;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FText local_b8;
  FText local_a8;
  undefined1 local_98;
  FInputBinding local_90;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_148;
  pFVar10 = (FInputBinding *)(param_2->AllocatorInstance).Data;
  pFVar8 = pFVar10 + param_2->ArrayNum;
  if (pFVar10 != pFVar8) {
    do {
      if ((FName)(pFVar10->Vertex)._padding_ == *param_3) {
        pFVar5 = (FName *)(**(code **)(param_4->_padding_ + 8))(param_4);
        bVar3 = IsCastable((FName)(pFVar10->Vertex)._padding_,*pFVar5);
        if (bVar3) {
          FInputBinding::Set(pFVar10,param_4);
          return;
        }
        if ((byte)LogMetaSound._0_1_ < 3) {
          return;
        }
        pFVar6 = ::FName::ToString((FName *)&(pFVar10->Vertex)._padding_,&local_d8);
        if ((pFVar6->Data).ArrayNum == 0) {
          pwVar11 = L"";
        }
        else {
          pwVar11 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
        }
        pFVar5 = (FName *)(**(code **)(param_4->_padding_ + 8))(param_4);
        ::FName::ToString(pFVar5,&local_e8);
        ::FName::ToString(param_3,&local_f8);
        local_128 = (FInputBinding *)pwVar11;
        UE::Logging::Private::BasicLog<3>
                  (&`void___cdecl_Metasound::VertexDataPrivate::SetVertex<Metasound::VertexDataPrivate::FInputBinding>(bool,TArray<Metasound::VertexDataPrivate::FInputBinding,TSizedDefaultAllocator<32>_>&___ptr64,FName_const&___ptr64,Metasound::FAnyDataReference&&___ptr64)'
                    ::__l11::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
        local_c8.Data.AllocatorInstance.Data = local_d8.Data.AllocatorInstance.Data;
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
          local_c8.Data.AllocatorInstance.Data = local_d8.Data.AllocatorInstance.Data;
        }
        goto LAB_14ad3546c;
      }
      pFVar10 = pFVar10 + 1;
    } while (pFVar10 != pFVar8);
  }
  if (param_1) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(param_3,&local_c8);
      UE::Logging::Private::BasicLog<3>
                (&`void___cdecl_Metasound::VertexDataPrivate::SetVertex<Metasound::VertexDataPrivate::FInputBinding>(bool,TArray<Metasound::VertexDataPrivate::FInputBinding,TSizedDefaultAllocator<32>_>&___ptr64,FName_const&___ptr64,Metasound::FAnyDataReference&&___ptr64)'
                  ::__l26::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
LAB_14ad3546c:
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    EVar1 = param_4->AccessType;
    if (((EVar1 == Read) || (EVar1 == Write)) || (EVar1 != Value)) {
      uVar9 = 0;
    }
    else {
      uVar9 = 1;
    }
    FText::FText(&local_b8);
    FText::FText(&local_a8);
    local_98 = 0;
    plVar7 = (longlong *)(**(code **)(param_4->_padding_ + 8))(param_4);
    local_90.Vertex._padding_ = *(longlong *)param_3;
    local_90.Vertex._padding_ = *plVar7;
    local_90.Vertex._padding_ = (longlong)&___7FInputDataVertex_Metasound__6B_;
    local_90.Vertex.Literal.Value.TypeIndex = '\0';
    local_90.Vertex._padding_._0_4_ = uVar9;
    if (local_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
    }
    if (local_b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
    }
    local_90.Data.bIsSet = false;
    FInputBinding::Set(&local_90,param_4);
    pFVar10 = (FInputBinding *)(param_2->AllocatorInstance).Data;
    if ((pFVar10 <= &local_90) && (&local_90 < pFVar10 + param_2->ArrayMax)) {
      local_110 = (longlong)param_2->ArrayNum;
      local_108 = 0x58;
      local_128 = &local_90;
      local_120 = pFVar10;
      local_118 = (longlong)param_2->ArrayMax;
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
    iVar4 = param_2->ArrayNum;
    if (iVar4 == param_2->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x858,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar4 + 1;
    pFVar13 = (param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x58;
    *(undefined ***)pFVar13 = &___7FDataVertex_Metasound__6B_;
    *(undefined4 *)(pFVar13 + 8) = (undefined4)local_90.Vertex._padding_;
    *(undefined4 *)(pFVar13 + 0xc) = local_90.Vertex._padding_._4_4_;
    *(longlong *)(pFVar13 + 0x10) = local_90.Vertex._padding_;
    *(undefined ***)pFVar13 = &___7FInputDataVertex_Metasound__6B_;
    *(undefined4 *)(pFVar13 + 0x18) = (undefined4)local_90.Vertex._padding_;
    uVar12 = (ulonglong)local_90.Vertex.Literal.Value.TypeIndex;
    pFVar13[0x30] = (FScriptContainerElement)local_90.Vertex.Literal.Value.TypeIndex;
    if ((0xc < local_90.Vertex.Literal.Value.TypeIndex) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x105,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                  ::__l2::MoveConstructors)[uVar12] !=
        UE::Core::Private::TMoveConstructorCaller<Metasound::FLiteral::FNone>::Construct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                  ::__l2::MoveConstructors)[uVar12])(pFVar13 + 0x20,&local_90.Vertex.Literal);
    }
    pFVar13[0x50] = (FScriptContainerElement)0x0;
    pFVar13[0x50] = (FScriptContainerElement)local_90.Data.bIsSet;
    if ((FScriptContainerElement)local_90.Data.bIsSet != (FScriptContainerElement)0x0) {
      FAnyDataReference::FAnyDataReference
                ((FAnyDataReference *)(pFVar13 + 0x38),local_90.Data.TypedValue.AccessType,
                 local_90.Data.TypedValue.DataRefPtr.Ptr);
      *(undefined ***)(pFVar13 + 0x38) = &___7FAnyDataReference_Metasound__6B_;
    }
    if (((FScriptContainerElement)local_90.Data.bIsSet != (FScriptContainerElement)0x0) &&
       (local_90.Data.TypedValue.DataRefPtr.Ptr != (IDataReference *)0x0)) {
      (**(code **)*local_90.Data.TypedValue.DataRefPtr.Ptr)
                (local_90.Data.TypedValue.DataRefPtr.Ptr,1);
    }
    uVar12 = (ulonglong)local_90.Vertex.Literal.Value.TypeIndex;
    if ((0xc < local_90.Vertex.Literal.Value.TypeIndex) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar12] !=
        UE::Core::Private::TDestructorCaller<Metasound::FLiteral::FNone>::Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar12])(&local_90.Vertex.Literal);
    }
  }
  return;
}

// SetVertex<Metasound::VertexDataPrivate::FInputBinding> @ 14ad354a0

void __cdecl
Metasound::VertexDataPrivate::SetVertex<Metasound::VertexDataPrivate::FInputBinding>
          (bool param_1,
          TArray<Metasound::VertexDataPrivate::FInputBinding,TSizedDefaultAllocator<32>_> *param_2,
          FName *param_3,FAnyDataReference *param_4)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference local_28;
  
  EVar1 = param_4->AccessType;
  local_28._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  pIVar2 = (param_4->DataRefPtr).Ptr;
  local_28.AccessType = EVar1;
  (**(code **)((longlong)*pIVar2 + 0x18))(pIVar2,&local_28.DataRefPtr);
  if (local_28.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (EVar1 == None) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("EDataReferenceAccessType::None != InAccessType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_28._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  SetVertex<Metasound::VertexDataPrivate::FInputBinding>(param_1,param_2,param_3,&local_28);
  if (local_28.DataRefPtr.Ptr != (IDataReference *)0x0) {
    (**(code **)*local_28.DataRefPtr.Ptr)(local_28.DataRefPtr.Ptr,1);
  }
  return;
}

// SetVertex<Metasound::VertexDataPrivate::FOutputBinding> @ 14ad35590

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::VertexDataPrivate::SetVertex<Metasound::VertexDataPrivate::FOutputBinding>
          (bool param_1,
          TArray<Metasound::VertexDataPrivate::FOutputBinding,TSizedDefaultAllocator<32>_> *param_2,
          FName *param_3,FAnyDataReference *param_4)

{
  EDataReferenceAccessType EVar1;
  FName FVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FOutputBinding *pFVar7;
  FName *pFVar8;
  undefined8 *puVar9;
  FScriptContainerElement *pFVar10;
  undefined4 uVar11;
  FOutputBinding *this;
  undefined1 local_c8 [40];
  EDataReferenceAccessType local_a0;
  TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> local_98;
  FScriptContainerElement local_90;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FText local_48;
  FText local_38;
  undefined1 local_28;
  
  this = (FOutputBinding *)(param_2->AllocatorInstance).Data;
  pFVar7 = this + param_2->ArrayNum;
  if (this != pFVar7) {
    do {
      FVar2.ComparisonIndex.Value = *(uint *)&(this->Vertex).field_0x8;
      FVar2.Number = *(uint *)&(this->Vertex).field_0xc;
      if (FVar2 == *param_3) {
        pFVar8 = (FName *)(**(code **)(param_4->_padding_ + 8))(param_4);
        FVar3.ComparisonIndex.Value = *(uint *)&(this->Vertex).field_0x10;
        FVar3.Number = *(uint *)&(this->Vertex).field_0x14;
        bVar5 = IsCastable(FVar3,*pFVar8);
        if (bVar5) {
          FOutputBinding::Set(this,param_4);
          return;
        }
        if ((byte)LogMetaSound._0_1_ < 3) {
          return;
        }
        ::FName::ToString((FName *)&(this->Vertex).field_0x10,&local_68);
        pFVar8 = (FName *)(**(code **)(param_4->_padding_ + 8))(param_4);
        ::FName::ToString(pFVar8,&local_78);
        ::FName::ToString(param_3,&local_88);
        UE::Logging::Private::BasicLog<3>
                  (&`void___cdecl_Metasound::VertexDataPrivate::SetVertex<Metasound::VertexDataPrivate::FOutputBinding>(bool,TArray<Metasound::VertexDataPrivate::FOutputBinding,TSizedDefaultAllocator<32>_>&___ptr64,FName_const&___ptr64,Metasound::FAnyDataReference&&___ptr64)'
                    ::__l11::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        local_58.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
          local_58.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
        }
        goto LAB_14ad358a2;
      }
      this = this + 1;
    } while (this != pFVar7);
  }
  if (param_1) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(param_3,&local_58);
      UE::Logging::Private::BasicLog<3>
                (&`void___cdecl_Metasound::VertexDataPrivate::SetVertex<Metasound::VertexDataPrivate::FOutputBinding>(bool,TArray<Metasound::VertexDataPrivate::FOutputBinding,TSizedDefaultAllocator<32>_>&___ptr64,FName_const&___ptr64,Metasound::FAnyDataReference&&___ptr64)'
                  ::__l26::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
LAB_14ad358a2:
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    EVar1 = param_4->AccessType;
    if (((EVar1 == Read) || (EVar1 == Write)) || (EVar1 != Value)) {
      uVar11 = 0;
    }
    else {
      uVar11 = 1;
    }
    FText::FText(&local_48);
    FText::FText(&local_38);
    local_28 = 0;
    puVar9 = (undefined8 *)(**(code **)(param_4->_padding_ + 8))(param_4);
    local_c8._8_8_ = *param_3;
    local_c8._16_8_ = *puVar9;
    local_c8._0_8_ = &___7FOutputDataVertex_Metasound__6B_;
    local_c8._24_4_ = uVar11;
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
    local_90 = (FScriptContainerElement)0x0;
    FOutputBinding::Set((FOutputBinding *)local_c8,param_4);
    pFVar10 = (param_2->AllocatorInstance).Data;
    if (((pFVar10 <= (FScriptContainerElement *)local_c8) &&
        ((FScriptContainerElement *)local_c8 < pFVar10 + (longlong)param_2->ArrayMax * 0x40)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = param_2->ArrayNum;
    if (iVar6 == param_2->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x840,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar6 + 1;
    pFVar10 = (param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x40;
    *(undefined ***)pFVar10 = &___7FDataVertex_Metasound__6B_;
    *(undefined4 *)(pFVar10 + 8) = local_c8._8_4_;
    *(undefined4 *)(pFVar10 + 0xc) = local_c8._12_4_;
    *(undefined8 *)(pFVar10 + 0x10) = local_c8._16_8_;
    *(undefined ***)pFVar10 = &___7FOutputDataVertex_Metasound__6B_;
    *(undefined4 *)(pFVar10 + 0x18) = local_c8._24_4_;
    pFVar10[0x38] = (FScriptContainerElement)0x0;
    pFVar10[0x38] = local_90;
    if (local_90 != (FScriptContainerElement)0x0) {
      FAnyDataReference::FAnyDataReference
                ((FAnyDataReference *)(pFVar10 + 0x20),local_a0,local_98.Ptr);
      ((FAnyDataReference *)(pFVar10 + 0x20))->_padding_ =
           (longlong)&___7FAnyDataReference_Metasound__6B_;
    }
    if ((local_90 != (FScriptContainerElement)0x0) && (local_98.Ptr != (IDataReference *)0x0)) {
      (**(code **)*local_98.Ptr)(local_98.Ptr,1);
    }
  }
  return;
}

// SetVertex<Metasound::VertexDataPrivate::FOutputBinding> @ 14ad358d0

void __cdecl
Metasound::VertexDataPrivate::SetVertex<Metasound::VertexDataPrivate::FOutputBinding>
          (bool param_1,
          TArray<Metasound::VertexDataPrivate::FOutputBinding,TSizedDefaultAllocator<32>_> *param_2,
          FName *param_3,FAnyDataReference *param_4)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference local_28;
  
  EVar1 = param_4->AccessType;
  local_28._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  pIVar2 = (param_4->DataRefPtr).Ptr;
  local_28.AccessType = EVar1;
  (**(code **)((longlong)*pIVar2 + 0x18))(pIVar2,&local_28.DataRefPtr);
  if (local_28.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (EVar1 == None) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("EDataReferenceAccessType::None != InAccessType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_28._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  SetVertex<Metasound::VertexDataPrivate::FOutputBinding>(param_1,param_2,param_3,&local_28);
  if (local_28.DataRefPtr.Ptr != (IDataReference *)0x0) {
    (**(code **)*local_28.DataRefPtr.Ptr)(local_28.DataRefPtr.Ptr,1);
  }
  return;
}

// SortExecutionTable<Metasound::DynamicGraph::FExecuteEntry_const_> @ 14ad359c0

void __cdecl
Metasound::DynamicGraph::DynamicGraphAlgoPrivate::
SortExecutionTable<Metasound::DynamicGraph::FExecuteEntry_const_>
          (TArrayView<Metasound::DynamicGraph::FExecuteEntry_const_,int> *param_1)

{
  TGetOrdinal<Metasound::DynamicGraph::FExecuteEntry_const_> local_res8;
  
  AlgoImpl::
  IntroSortInternal<Metasound::DynamicGraph::FExecuteEntry_const_,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FExecuteEntry_const_>,TLess<void>_>
            (param_1->DataPtr,param_1->ArrayNum,local_res8,(TLess<void>)local_res8);
  return;
}

// SortExecutionTable<Metasound::DynamicGraph::FPostExecuteEntry_const_> @ 14ad359e0

void __cdecl
Metasound::DynamicGraph::DynamicGraphAlgoPrivate::
SortExecutionTable<Metasound::DynamicGraph::FPostExecuteEntry_const_>
          (TArrayView<Metasound::DynamicGraph::FPostExecuteEntry_const_,int> *param_1)

{
  TGetOrdinal<Metasound::DynamicGraph::FPostExecuteEntry_const_> local_res8;
  
  AlgoImpl::
  IntroSortInternal<Metasound::DynamicGraph::FPostExecuteEntry_const_,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FPostExecuteEntry_const_>,TLess<void>_>
            (param_1->DataPtr,param_1->ArrayNum,local_res8,(TLess<void>)local_res8);
  return;
}

// SortExecutionTable<Metasound::DynamicGraph::FResetEntry_const_> @ 14ad35a00

void __cdecl
Metasound::DynamicGraph::DynamicGraphAlgoPrivate::
SortExecutionTable<Metasound::DynamicGraph::FResetEntry_const_>
          (TArrayView<Metasound::DynamicGraph::FResetEntry_const_,int> *param_1)

{
  TGetOrdinal<Metasound::DynamicGraph::FResetEntry_const_> local_res8;
  
  AlgoImpl::
  IntroSortInternal<Metasound::DynamicGraph::FResetEntry_const_,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FResetEntry_const_>,TLess<void>_>
            (param_1->DataPtr,param_1->ArrayNum,local_res8,(TLess<void>)local_res8);
  return;
}

// SortExecutionTable<Metasound::DynamicGraph::FExecuteEntry> @ 14ad35a20

void __cdecl
Metasound::DynamicGraph::DynamicGraphAlgoPrivate::
SortExecutionTable<Metasound::DynamicGraph::FExecuteEntry>
          (TArrayView<Metasound::DynamicGraph::FExecuteEntry,int> *param_1)

{
  TGetOrdinal<Metasound::DynamicGraph::FExecuteEntry> local_res8;
  
  AlgoImpl::
  IntroSortInternal<Metasound::DynamicGraph::FExecuteEntry,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FExecuteEntry>,TLess<void>_>
            (param_1->DataPtr,param_1->ArrayNum,local_res8,(TLess<void>)local_res8);
  return;
}

// SortExecutionTable<Metasound::DynamicGraph::FPostExecuteEntry> @ 14ad35a40

void __cdecl
Metasound::DynamicGraph::DynamicGraphAlgoPrivate::
SortExecutionTable<Metasound::DynamicGraph::FPostExecuteEntry>
          (TArrayView<Metasound::DynamicGraph::FPostExecuteEntry,int> *param_1)

{
  TGetOrdinal<Metasound::DynamicGraph::FPostExecuteEntry> local_res8;
  
  AlgoImpl::
  IntroSortInternal<Metasound::DynamicGraph::FPostExecuteEntry,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FPostExecuteEntry>,TLess<void>_>
            (param_1->DataPtr,param_1->ArrayNum,local_res8,(TLess<void>)local_res8);
  return;
}

// SortExecutionTable<Metasound::DynamicGraph::FResetEntry> @ 14ad35a60

void __cdecl
Metasound::DynamicGraph::DynamicGraphAlgoPrivate::
SortExecutionTable<Metasound::DynamicGraph::FResetEntry>
          (TArrayView<Metasound::DynamicGraph::FResetEntry,int> *param_1)

{
  TGetOrdinal<Metasound::DynamicGraph::FResetEntry> local_res8;
  
  AlgoImpl::
  IntroSortInternal<Metasound::DynamicGraph::FResetEntry,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FResetEntry>,TLess<void>_>
            (param_1->DataPtr,param_1->ArrayNum,local_res8,(TLess<void>)local_res8);
  return;
}

// SwapOrdinalsAndSortTable<Metasound::DynamicGraph::FExecuteEntry> @ 14ad35a80

void __cdecl
Metasound::DynamicGraph::DynamicGraphAlgoPrivate::
SwapOrdinalsAndSortTable<Metasound::DynamicGraph::FExecuteEntry>
          (int param_1,int param_2,
          TArray<Metasound::DynamicGraph::FOrdinalSwap,TSizedDefaultAllocator<32>_> *param_3,
          TArray<Metasound::DynamicGraph::FExecuteEntry,TSizedDefaultAllocator<32>_> *param_4)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  int iVar13;
  TGetOrdinal<Metasound::DynamicGraph::FExecuteEntry_const_> local_res20;
  
  uVar2 = param_4->ArrayNum;
  iVar9 = 0;
  pFVar3 = (param_4->AllocatorInstance).Data;
  iVar13 = 0;
  uVar12 = uVar2;
  if (0 < (int)uVar2) {
    do {
      iVar1 = (uVar12 >> 1) + iVar13;
      if (*(int *)(pFVar3 + (longlong)iVar1 * 0x20) < param_1) {
        iVar13 = iVar1 + (uVar12 & 1);
      }
      uVar5 = uVar12 >> 1;
      uVar10 = uVar2;
      uVar12 = uVar12 >> 1;
    } while (uVar5 != 0);
    do {
      iVar1 = (uVar10 >> 1) + iVar9;
      if (*(int *)(pFVar3 + (longlong)iVar1 * 0x20) <= param_2) {
        iVar9 = iVar1 + (uVar10 & 1);
      }
      uVar12 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar12 != 0);
    if ((iVar13 < (int)uVar2) && (iVar13 < iVar9)) {
      pFVar7 = (param_3->AllocatorInstance).Data;
      pFVar11 = pFVar7 + (longlong)param_3->ArrayNum * 0x10;
      pFVar8 = pFVar3 + (longlong)iVar13 * 0x20;
      while ((pFVar7 != pFVar11 && (pFVar8 != pFVar3 + (longlong)iVar9 * 0x20))) {
        if (*(int *)(pFVar7 + 8) == *(int *)pFVar8) {
          *(int *)pFVar8 = *(int *)(pFVar7 + 0xc);
          pFVar8 = pFVar8 + 0x20;
          pFVar7 = pFVar7 + 0x10;
        }
        else if (*(int *)(pFVar7 + 8) < *(int *)pFVar8) {
          pFVar7 = pFVar7 + 0x10;
        }
        else {
          pFVar8 = pFVar8 + 0x20;
        }
      }
      pFVar3 = (param_4->AllocatorInstance).Data;
      if ((iVar9 - iVar13 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      AlgoImpl::
      IntroSortInternal<Metasound::DynamicGraph::FExecuteEntry_const_,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FExecuteEntry_const_>,TLess<void>_>
                ((FExecuteEntry *)(pFVar3 + (longlong)iVar13 * 0x20),iVar9 - iVar13,local_res20,
                 (TLess<void>)local_res20);
    }
  }
  return;
}

// SwapOrdinalsAndSortTable<Metasound::DynamicGraph::FPostExecuteEntry> @ 14ad35bf0

void __cdecl
Metasound::DynamicGraph::DynamicGraphAlgoPrivate::
SwapOrdinalsAndSortTable<Metasound::DynamicGraph::FPostExecuteEntry>
          (int param_1,int param_2,
          TArray<Metasound::DynamicGraph::FOrdinalSwap,TSizedDefaultAllocator<32>_> *param_3,
          TArray<Metasound::DynamicGraph::FPostExecuteEntry,TSizedDefaultAllocator<32>_> *param_4)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  int iVar13;
  TGetOrdinal<Metasound::DynamicGraph::FPostExecuteEntry_const_> local_res20;
  
  uVar2 = param_4->ArrayNum;
  iVar9 = 0;
  pFVar3 = (param_4->AllocatorInstance).Data;
  iVar13 = 0;
  uVar12 = uVar2;
  if (0 < (int)uVar2) {
    do {
      iVar1 = (uVar12 >> 1) + iVar13;
      if (*(int *)(pFVar3 + (longlong)iVar1 * 0x20) < param_1) {
        iVar13 = iVar1 + (uVar12 & 1);
      }
      uVar5 = uVar12 >> 1;
      uVar10 = uVar2;
      uVar12 = uVar12 >> 1;
    } while (uVar5 != 0);
    do {
      iVar1 = (uVar10 >> 1) + iVar9;
      if (*(int *)(pFVar3 + (longlong)iVar1 * 0x20) <= param_2) {
        iVar9 = iVar1 + (uVar10 & 1);
      }
      uVar12 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar12 != 0);
    if ((iVar13 < (int)uVar2) && (iVar13 < iVar9)) {
      pFVar7 = (param_3->AllocatorInstance).Data;
      pFVar11 = pFVar7 + (longlong)param_3->ArrayNum * 0x10;
      pFVar8 = pFVar3 + (longlong)iVar13 * 0x20;
      while ((pFVar7 != pFVar11 && (pFVar8 != pFVar3 + (longlong)iVar9 * 0x20))) {
        if (*(int *)(pFVar7 + 8) == *(int *)pFVar8) {
          *(int *)pFVar8 = *(int *)(pFVar7 + 0xc);
          pFVar8 = pFVar8 + 0x20;
          pFVar7 = pFVar7 + 0x10;
        }
        else if (*(int *)(pFVar7 + 8) < *(int *)pFVar8) {
          pFVar7 = pFVar7 + 0x10;
        }
        else {
          pFVar8 = pFVar8 + 0x20;
        }
      }
      pFVar3 = (param_4->AllocatorInstance).Data;
      if ((iVar9 - iVar13 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      AlgoImpl::
      IntroSortInternal<Metasound::DynamicGraph::FPostExecuteEntry_const_,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FPostExecuteEntry_const_>,TLess<void>_>
                ((FPostExecuteEntry *)(pFVar3 + (longlong)iVar13 * 0x20),iVar9 - iVar13,local_res20,
                 (TLess<void>)local_res20);
    }
  }
  return;
}

// SwapOrdinalsAndSortTable<Metasound::DynamicGraph::FResetEntry> @ 14ad35d60

void __cdecl
Metasound::DynamicGraph::DynamicGraphAlgoPrivate::
SwapOrdinalsAndSortTable<Metasound::DynamicGraph::FResetEntry>
          (int param_1,int param_2,
          TArray<Metasound::DynamicGraph::FOrdinalSwap,TSizedDefaultAllocator<32>_> *param_3,
          TArray<Metasound::DynamicGraph::FResetEntry,TSizedDefaultAllocator<32>_> *param_4)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  int iVar13;
  TGetOrdinal<Metasound::DynamicGraph::FResetEntry_const_> local_res20;
  
  uVar2 = param_4->ArrayNum;
  iVar9 = 0;
  pFVar3 = (param_4->AllocatorInstance).Data;
  iVar13 = 0;
  uVar12 = uVar2;
  if (0 < (int)uVar2) {
    do {
      iVar1 = (uVar12 >> 1) + iVar13;
      if (*(int *)(pFVar3 + (longlong)iVar1 * 0x20) < param_1) {
        iVar13 = iVar1 + (uVar12 & 1);
      }
      uVar5 = uVar12 >> 1;
      uVar10 = uVar2;
      uVar12 = uVar12 >> 1;
    } while (uVar5 != 0);
    do {
      iVar1 = (uVar10 >> 1) + iVar9;
      if (*(int *)(pFVar3 + (longlong)iVar1 * 0x20) <= param_2) {
        iVar9 = iVar1 + (uVar10 & 1);
      }
      uVar12 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar12 != 0);
    if ((iVar13 < (int)uVar2) && (iVar13 < iVar9)) {
      pFVar7 = (param_3->AllocatorInstance).Data;
      pFVar11 = pFVar7 + (longlong)param_3->ArrayNum * 0x10;
      pFVar8 = pFVar3 + (longlong)iVar13 * 0x20;
      while ((pFVar7 != pFVar11 && (pFVar8 != pFVar3 + (longlong)iVar9 * 0x20))) {
        if (*(int *)(pFVar7 + 8) == *(int *)pFVar8) {
          *(int *)pFVar8 = *(int *)(pFVar7 + 0xc);
          pFVar8 = pFVar8 + 0x20;
          pFVar7 = pFVar7 + 0x10;
        }
        else if (*(int *)(pFVar7 + 8) < *(int *)pFVar8) {
          pFVar7 = pFVar7 + 0x10;
        }
        else {
          pFVar8 = pFVar8 + 0x20;
        }
      }
      pFVar3 = (param_4->AllocatorInstance).Data;
      if ((iVar9 - iVar13 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      AlgoImpl::
      IntroSortInternal<Metasound::DynamicGraph::FResetEntry_const_,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FResetEntry_const_>,TLess<void>_>
                ((FResetEntry *)(pFVar3 + (longlong)iVar13 * 0x20),iVar9 - iVar13,local_res20,
                 (TLess<void>)local_res20);
    }
  }
  return;
}

// ToDataReferenceCollection<Metasound::VertexDataPrivate::FInputBinding> @ 14ad35ed0

FDataReferenceCollection * __cdecl
Metasound::VertexDataPrivate::ToDataReferenceCollection<Metasound::VertexDataPrivate::FInputBinding>
          (FDataReferenceCollection *__return_storage_ptr__,
          TArray<Metasound::VertexDataPrivate::FInputBinding,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement FVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FDataReferenceCollection *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [16];
  FScriptContainerElement *local_68;
  undefined ***local_60;
  undefined **local_58;
  FScriptContainerElement local_50;
  undefined8 *local_48 [2];
  
  *(undefined8 *)&__return_storage_ptr__->DataRefMap = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x48 = 0;
  pFVar8 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar6 = pFVar8 + 0x48;
  pFVar7 = pFVar8 + (longlong)iVar2 * 0x58;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Metasound::VertexDataPrivate::FInputBinding_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar7) break;
    if (pFVar6[8] != (FScriptContainerElement)0x0) {
      FVar1 = pFVar6[-8];
      local_58 = &___7FAnyDataReference_Metasound__6B_;
      local_50 = FVar1;
      (**(code **)(**(longlong **)pFVar6 + 0x18))(*(longlong **)pFVar6,local_48);
      if (local_48[0] == (undefined8 *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar5 = (FDataReferenceCollection *)(*pcVar3)();
          return pFVar5;
        }
      }
      if (FVar1 == (FScriptContainerElement)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("EDataReferenceAccessType::None != InAccessType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30f,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar5 = (FDataReferenceCollection *)(*pcVar3)();
          return pFVar5;
        }
      }
      local_68 = pFVar6 + -0x40;
      local_58 = &___7FAnyDataReference_Metasound__6B_;
      local_60 = &local_58;
      TSet<TTuple<FName,Metasound::FAnyDataReference>,TDefaultMapHashableKeyFuncs<FName,Metasound::FAnyDataReference,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,Metasound::FAnyDataReference_const_&>_>
                ((TSet<TTuple<FName,Metasound::FAnyDataReference>,TDefaultMapHashableKeyFuncs<FName,Metasound::FAnyDataReference,0>,FDefaultSetAllocator>
                  *)__return_storage_ptr__,
                 (TPairInitializer<FName_const_&,Metasound::FAnyDataReference_const_&> *)
                 (local_res8 + 8),(bool *)&local_68);
      if (local_48[0] != (undefined8 *)0x0) {
        (**(code **)*local_48[0])(local_48[0],1);
      }
    }
    pFVar8 = pFVar8 + 0x58;
    pFVar6 = pFVar6 + 0x58;
  }
  return __return_storage_ptr__;
}

// ToDataReferenceCollection<Metasound::VertexDataPrivate::FOutputBinding> @ 14ad36050

FDataReferenceCollection * __cdecl
Metasound::VertexDataPrivate::
ToDataReferenceCollection<Metasound::VertexDataPrivate::FOutputBinding>
          (FDataReferenceCollection *__return_storage_ptr__,
          TArray<Metasound::VertexDataPrivate::FOutputBinding,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement FVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FDataReferenceCollection *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [16];
  FScriptContainerElement *local_68;
  undefined ***local_60;
  undefined **local_58;
  FScriptContainerElement local_50;
  undefined8 *local_48 [2];
  
  *(undefined8 *)&__return_storage_ptr__->DataRefMap = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x48 = 0;
  pFVar8 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar7 = pFVar8 + (longlong)iVar2 * 0x40;
  pFVar6 = pFVar8 + 0x30;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Metasound::VertexDataPrivate::FOutputBinding_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar7) break;
    if (pFVar6[8] != (FScriptContainerElement)0x0) {
      FVar1 = pFVar6[-8];
      local_58 = &___7FAnyDataReference_Metasound__6B_;
      local_50 = FVar1;
      (**(code **)(**(longlong **)pFVar6 + 0x18))(*(longlong **)pFVar6,local_48);
      if (local_48[0] == (undefined8 *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar5 = (FDataReferenceCollection *)(*pcVar3)();
          return pFVar5;
        }
      }
      if (FVar1 == (FScriptContainerElement)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("EDataReferenceAccessType::None != InAccessType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30f,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar5 = (FDataReferenceCollection *)(*pcVar3)();
          return pFVar5;
        }
      }
      local_68 = pFVar6 + -0x28;
      local_58 = &___7FAnyDataReference_Metasound__6B_;
      local_60 = &local_58;
      TSet<TTuple<FName,Metasound::FAnyDataReference>,TDefaultMapHashableKeyFuncs<FName,Metasound::FAnyDataReference,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,Metasound::FAnyDataReference_const_&>_>
                ((TSet<TTuple<FName,Metasound::FAnyDataReference>,TDefaultMapHashableKeyFuncs<FName,Metasound::FAnyDataReference,0>,FDefaultSetAllocator>
                  *)__return_storage_ptr__,
                 (TPairInitializer<FName_const_&,Metasound::FAnyDataReference_const_&> *)
                 (local_res8 + 8),(bool *)&local_68);
      if (local_48[0] != (undefined8 *)0x0) {
        (**(code **)*local_48[0])(local_48[0],1);
      }
    }
    pFVar8 = pFVar8 + 0x40;
    pFVar6 = pFVar6 + 0x40;
  }
  return __return_storage_ptr__;
}

// Transform<TArray<Metasound::FDataEdge,TSizedDefaultAllocator<32>_>,TArray<Metasound::FDataEdge_const_*,TSizedDefaultAllocator<32>_>_&,Metasound::FDataEdge_const_*_(__cdecl*)(Metasound::FDataEdge_const_&)> @ 14ad361d0

void __cdecl
Algo::
Transform<TArray<Metasound::FDataEdge,TSizedDefaultAllocator<32>_>,TArray<Metasound::FDataEdge_const_*,TSizedDefaultAllocator<32>_>_&,Metasound::FDataEdge_const_*_(__cdecl*)(Metasound::FDataEdge_const_&)>
          (TArray<Metasound::FDataEdge,TSizedDefaultAllocator<32>_> *param_1,
          TArray<Metasound::FDataEdge_const_*,TSizedDefaultAllocator<32>_> *param_2,
          _func___cdecl_FDataEdge_ptr_FDataEdge_ptr *param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FDataEdge *pFVar6;
  FDataEdge *pFVar7;
  undefined1 local_res8 [8];
  FDataEdge *local_38 [2];
  
  iVar1 = param_1->ArrayNum;
  pFVar6 = (FDataEdge *)(param_1->AllocatorInstance).Data;
  pFVar7 = pFVar6 + iVar1;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Metasound::FDataEdge_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar6 == pFVar7) break;
    local_38[0] = (*param_3)(pFVar6);
    pFVar2 = (param_2->AllocatorInstance).Data;
    if ((pFVar2 <= (FScriptContainerElement *)local_38) &&
       ((FScriptContainerElement *)local_38 < pFVar2 + (longlong)param_2->ArrayMax * 8)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
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
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
      param_2->ArrayNum = iVar5;
    }
    pFVar6 = pFVar6 + 1;
    param_2->ArrayNum = iVar5 + 1;
    *(FDataEdge **)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_38[0];
  }
  return;
}

// Transform<TArray<Metasound::FDataEdge,TSizedDefaultAllocator<32>_>,TArray<Metasound::DynamicGraph::Debug::FOperatorEdge,TSizedDefaultAllocator<32>_>_&,`Metasound::DynamicGraph::Debug::FDynamicOperatorDebugger::FindGraphOperatorEdges'::__l2::<lambda_1>_> @ 14ad36300

void __cdecl
Algo::
Transform<TArray<Metasound::FDataEdge,TSizedDefaultAllocator<32>_>,TArray<Metasound::DynamicGraph::Debug::FOperatorEdge,TSizedDefaultAllocator<32>_>_&,_Metasound::DynamicGraph::Debug::FDynamicOperatorDebugger::FindGraphOperatorEdges_::__l2::<lambda_1>_>
          (TArray<Metasound::FDataEdge,TSizedDefaultAllocator<32>_> *param_1,
          TArray<Metasound::DynamicGraph::Debug::FOperatorEdge,TSizedDefaultAllocator<32>_> *param_2
          ,<lambda_1> param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  iVar1 = param_1->ArrayNum;
  pFVar7 = (param_1->AllocatorInstance).Data;
  pFVar8 = pFVar7 + (longlong)iVar1 * 0x68;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Metasound::FDataEdge_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar7 == pFVar8) break;
    local_38 = *(undefined8 *)pFVar7;
    pFVar2 = (param_2->AllocatorInstance).Data;
    uStack_30 = *(undefined8 *)(pFVar7 + 0x28);
    local_28 = *(undefined8 *)(pFVar7 + 0x10);
    uStack_20 = *(undefined8 *)(pFVar7 + 0x38);
    if ((pFVar2 <= (FScriptContainerElement *)&local_38) &&
       ((FScriptContainerElement *)&local_38 < pFVar2 + (longlong)param_2->ArrayMax * 0x20)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = param_2->ArrayNum;
    if (iVar6 == param_2->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&param_2->AllocatorInstance,&param_2->ArrayMax);
      param_2->ArrayNum = iVar6;
    }
    param_2->ArrayNum = iVar6 + 1;
    pFVar3 = (param_2->AllocatorInstance).Data;
    pFVar7 = pFVar7 + 0x68;
    pFVar2 = pFVar3 + (longlong)iVar6 * 0x20;
    *(undefined8 *)pFVar2 = local_38;
    *(undefined8 *)(pFVar2 + 8) = uStack_30;
    pFVar3 = pFVar3 + (longlong)iVar6 * 0x20 + 0x10;
    *(undefined8 *)pFVar3 = local_28;
    *(undefined8 *)(pFVar3 + 8) = uStack_20;
  }
  return;
}

// TransformIf<TSortedMap<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>,TArray<TTuple<FGuid,Metasound::INode_const_*>,TSizedDefaultAllocator<32>_>_&,`Metasound::FGraph::FindUnconnectedNodes'::__l2::<lambda_2>,`Metasound::FGraph::FindUnconnectedNodes'::__l2::<lambda_3>_> @ 14ad36450

void __cdecl
Algo::
TransformIf<TSortedMap<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>,TArray<TTuple<FGuid,Metasound::INode_const_*>,TSizedDefaultAllocator<32>_>_&,_Metasound::FGraph::FindUnconnectedNodes_::__l2::<lambda_2>,_Metasound::FGraph::FindUnconnectedNodes_::__l2::<lambda_3>_>
          (TSortedMap<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
           *param_1,
          TArray<TTuple<FGuid,Metasound::INode_const_*>,TSizedDefaultAllocator<32>_> *param_2,
          <lambda_2> param_3,<lambda_3> param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ulonglong uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  uint uVar11;
  undefined1 local_res8 [8];
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  iVar2 = (param_1->Pairs).ArrayNum;
  pFVar9 = (param_1->Pairs).AllocatorInstance.Data;
  pFVar1 = pFVar9 + (longlong)iVar2 * 0x28;
  while( true ) {
    if ((param_1->Pairs).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TTuple<FGuid,Metasound::FGraph::FDeprecationNodeStorageAdapter>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar1) break;
    uVar3 = *(ulonglong *)(pFVar9 + 0x18);
    if (uVar3 != 0) {
      uVar10 = (param_3.ConnectedNodes)->ArrayNum;
      iVar8 = 0;
      pFVar4 = ((param_3.ConnectedNodes)->AllocatorInstance).Data;
      if (0 < (int)uVar10) {
        do {
          uVar11 = uVar10 >> 1;
          if (*(ulonglong *)(pFVar4 + (longlong)(int)(uVar11 + iVar8) * 8) < uVar3) {
            iVar8 = uVar11 + iVar8 + (uVar10 & 1);
          }
          uVar10 = uVar11;
        } while (uVar11 != 0);
      }
      if ((((param_3.ConnectedNodes)->ArrayNum <= iVar8) ||
          (uVar3 < *(ulonglong *)(pFVar4 + (longlong)iVar8 * 8))) || (iVar8 == -1)) {
        local_48 = *(undefined8 *)pFVar9;
        uStack_40 = *(undefined8 *)(pFVar9 + 8);
        pFVar4 = (param_2->AllocatorInstance).Data;
        local_38 = uVar3;
        if (((pFVar4 <= (FScriptContainerElement *)&local_48) &&
            ((FScriptContainerElement *)&local_48 < pFVar4 + (longlong)param_2->ArrayMax * 0x18)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar8 = param_2->ArrayNum;
        if (iVar8 == param_2->ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar8 + 1;
        pFVar5 = (param_2->AllocatorInstance).Data;
        pFVar4 = pFVar5 + (longlong)iVar8 * 0x18;
        *(undefined8 *)pFVar4 = local_48;
        *(undefined8 *)(pFVar4 + 8) = uStack_40;
        *(ulonglong *)(pFVar5 + (longlong)iVar8 * 0x18 + 0x10) = local_38;
      }
    }
    pFVar9 = pFVar9 + 0x28;
  }
  return;
}

// UpdateTableEntry<Metasound::DynamicGraph::FExecuteEntry,void_(__cdecl*)(Metasound::IOperator_*)> @ 14ad365f0

void __cdecl
Metasound::DynamicGraph::DynamicGraphAlgoPrivate::
UpdateTableEntry<Metasound::DynamicGraph::FExecuteEntry,void_(__cdecl*)(Metasound::IOperator_*)>
          (ulong64 *param_1,FOperatorInfo *param_2,
          TArray<Metasound::DynamicGraph::FExecuteEntry,TSizedDefaultAllocator<32>_> *param_3,
          _func___cdecl_void_IOperator_ptr *param_4)

{
  IOperator *pIVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  FExecuteEntry local_38;
  
  uVar7 = param_3->ArrayNum;
  iVar5 = param_2->Ordinal;
  pFVar4 = (param_3->AllocatorInstance).Data;
  uVar6 = 0;
  uVar9 = uVar6;
  uVar11 = uVar7;
  uVar8 = 0;
  if (0 < (int)uVar7) {
    do {
      uVar10 = uVar11 >> 1;
      uVar9 = uVar8;
      if (*(int *)(pFVar4 + (longlong)(int)(uVar10 + uVar8) * 0x20) < iVar5) {
        uVar9 = uVar10 + uVar8 + (uVar11 & 1);
      }
      uVar11 = uVar10;
      uVar8 = uVar9;
    } while (uVar10 != 0);
  }
  if ((((int)uVar9 < (int)uVar7) && (*(int *)(pFVar4 + (longlong)(int)uVar9 * 0x20) <= iVar5)) &&
     (uVar9 != 0xffffffff)) {
    if (param_4 == (_func___cdecl_void_IOperator_ptr *)0x0) {
      if ((int)uVar9 < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pFVar4 = (param_3->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x20;
      iVar5 = param_3->ArrayNum + ~uVar9;
      if (iVar5 != 0) {
        memmove(pFVar4,pFVar4 + 0x20,(longlong)iVar5 << 5);
      }
      param_3->ArrayNum = param_3->ArrayNum + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,&param_3->AllocatorInstance,param_3->ArrayNum,&param_3->ArrayMax);
    }
    else {
      if ((int)uVar9 < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      *(_func___cdecl_void_IOperator_ptr **)
       ((param_3->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x20 + 0x18) = param_4;
      pIVar1 = (param_2->Operator).Ptr;
      uVar7 = 0;
      if ((int)uVar9 < param_3->ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      *(IOperator **)((param_3->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x20 + 0x10) =
           pIVar1;
    }
  }
  else if (param_4 != (_func___cdecl_void_IOperator_ptr *)0x0) {
    if ((param_2->Operator).Ptr == (IOperator *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InOperatorInfo.Operator.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicGraphAlgo.cpp"
                         ,0x80,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uVar7 = param_3->ArrayNum;
    uVar9 = 0;
    if (0 < param_3->ArrayNum) {
      do {
        uVar11 = uVar7 >> 1;
        uVar6 = uVar9;
        if (*(int *)((param_3->AllocatorInstance).Data + (longlong)(int)(uVar11 + uVar9) * 0x20) <=
            iVar5) {
          uVar6 = uVar11 + uVar9 + (uVar7 & 1);
        }
        uVar7 = uVar11;
        uVar9 = uVar6;
      } while (uVar11 != 0);
    }
    local_38.OperatorID = *param_1;
    local_38.Operator = (param_2->Operator).Ptr;
    local_38.Ordinal = iVar5;
    local_38.Function = param_4;
    TArray<Metasound::DynamicGraph::FExecuteEntry,TSizedDefaultAllocator<32>_>::Insert
              (param_3,&local_38,uVar6);
  }
  return;
}

// UpdateTableEntry<Metasound::DynamicGraph::FPostExecuteEntry,void_(__cdecl*)(Metasound::IOperator_*)> @ 14ad36870

void __cdecl
Metasound::DynamicGraph::DynamicGraphAlgoPrivate::
UpdateTableEntry<Metasound::DynamicGraph::FPostExecuteEntry,void_(__cdecl*)(Metasound::IOperator_*)>
          (ulong64 *param_1,FOperatorInfo *param_2,
          TArray<Metasound::DynamicGraph::FPostExecuteEntry,TSizedDefaultAllocator<32>_> *param_3,
          _func___cdecl_void_IOperator_ptr *param_4)

{
  IOperator *pIVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  FPostExecuteEntry local_38;
  
  uVar7 = param_3->ArrayNum;
  iVar5 = param_2->Ordinal;
  pFVar4 = (param_3->AllocatorInstance).Data;
  uVar6 = 0;
  uVar9 = uVar6;
  uVar11 = uVar7;
  uVar8 = 0;
  if (0 < (int)uVar7) {
    do {
      uVar10 = uVar11 >> 1;
      uVar9 = uVar8;
      if (*(int *)(pFVar4 + (longlong)(int)(uVar10 + uVar8) * 0x20) < iVar5) {
        uVar9 = uVar10 + uVar8 + (uVar11 & 1);
      }
      uVar11 = uVar10;
      uVar8 = uVar9;
    } while (uVar10 != 0);
  }
  if ((((int)uVar9 < (int)uVar7) && (*(int *)(pFVar4 + (longlong)(int)uVar9 * 0x20) <= iVar5)) &&
     (uVar9 != 0xffffffff)) {
    if (param_4 == (_func___cdecl_void_IOperator_ptr *)0x0) {
      if ((int)uVar9 < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pFVar4 = (param_3->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x20;
      iVar5 = param_3->ArrayNum + ~uVar9;
      if (iVar5 != 0) {
        memmove(pFVar4,pFVar4 + 0x20,(longlong)iVar5 << 5);
      }
      param_3->ArrayNum = param_3->ArrayNum + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,&param_3->AllocatorInstance,param_3->ArrayNum,&param_3->ArrayMax);
    }
    else {
      if ((int)uVar9 < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      *(_func___cdecl_void_IOperator_ptr **)
       ((param_3->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x20 + 0x18) = param_4;
      pIVar1 = (param_2->Operator).Ptr;
      uVar7 = 0;
      if ((int)uVar9 < param_3->ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      *(IOperator **)((param_3->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x20 + 0x10) =
           pIVar1;
    }
  }
  else if (param_4 != (_func___cdecl_void_IOperator_ptr *)0x0) {
    if ((param_2->Operator).Ptr == (IOperator *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InOperatorInfo.Operator.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicGraphAlgo.cpp"
                         ,0x80,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uVar7 = param_3->ArrayNum;
    uVar9 = 0;
    if (0 < param_3->ArrayNum) {
      do {
        uVar11 = uVar7 >> 1;
        uVar6 = uVar9;
        if (*(int *)((param_3->AllocatorInstance).Data + (longlong)(int)(uVar11 + uVar9) * 0x20) <=
            iVar5) {
          uVar6 = uVar11 + uVar9 + (uVar7 & 1);
        }
        uVar7 = uVar11;
        uVar9 = uVar6;
      } while (uVar11 != 0);
    }
    local_38.OperatorID = *param_1;
    local_38.Operator = (param_2->Operator).Ptr;
    local_38.Ordinal = iVar5;
    local_38.Function = param_4;
    TArray<Metasound::DynamicGraph::FPostExecuteEntry,TSizedDefaultAllocator<32>_>::Insert
              (param_3,&local_38,uVar6);
  }
  return;
}

// UpdateTableEntry<Metasound::DynamicGraph::FResetEntry,void_(__cdecl*)(Metasound::IOperator_*,Metasound::IOperator::FResetParams_const_&)> @ 14ad36af0

void __cdecl
Metasound::DynamicGraph::DynamicGraphAlgoPrivate::
UpdateTableEntry<Metasound::DynamicGraph::FResetEntry,void_(__cdecl*)(Metasound::IOperator_*,Metasound::IOperator::FResetParams_const_&)>
          (ulong64 *param_1,FOperatorInfo *param_2,
          TArray<Metasound::DynamicGraph::FResetEntry,TSizedDefaultAllocator<32>_> *param_3,
          _func___cdecl_void_IOperator_ptr_FResetParams_ptr *param_4)

{
  IOperator *pIVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  FResetEntry local_38;
  
  uVar7 = param_3->ArrayNum;
  iVar5 = param_2->Ordinal;
  pFVar4 = (param_3->AllocatorInstance).Data;
  uVar6 = 0;
  uVar9 = uVar6;
  uVar11 = uVar7;
  uVar8 = 0;
  if (0 < (int)uVar7) {
    do {
      uVar10 = uVar11 >> 1;
      uVar9 = uVar8;
      if (*(int *)(pFVar4 + (longlong)(int)(uVar10 + uVar8) * 0x20) < iVar5) {
        uVar9 = uVar10 + uVar8 + (uVar11 & 1);
      }
      uVar11 = uVar10;
      uVar8 = uVar9;
    } while (uVar10 != 0);
  }
  if ((((int)uVar9 < (int)uVar7) && (*(int *)(pFVar4 + (longlong)(int)uVar9 * 0x20) <= iVar5)) &&
     (uVar9 != 0xffffffff)) {
    if (param_4 == (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0) {
      if ((int)uVar9 < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pFVar4 = (param_3->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x20;
      iVar5 = param_3->ArrayNum + ~uVar9;
      if (iVar5 != 0) {
        memmove(pFVar4,pFVar4 + 0x20,(longlong)iVar5 << 5);
      }
      param_3->ArrayNum = param_3->ArrayNum + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,&param_3->AllocatorInstance,param_3->ArrayNum,&param_3->ArrayMax);
    }
    else {
      if ((int)uVar9 < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      *(_func___cdecl_void_IOperator_ptr_FResetParams_ptr **)
       ((param_3->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x20 + 0x18) = param_4;
      pIVar1 = (param_2->Operator).Ptr;
      uVar7 = 0;
      if ((int)uVar9 < param_3->ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      *(IOperator **)((param_3->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x20 + 0x10) =
           pIVar1;
    }
  }
  else if (param_4 != (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0) {
    if ((param_2->Operator).Ptr == (IOperator *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InOperatorInfo.Operator.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicGraphAlgo.cpp"
                         ,0x80,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uVar7 = param_3->ArrayNum;
    uVar9 = 0;
    if (0 < param_3->ArrayNum) {
      do {
        uVar11 = uVar7 >> 1;
        uVar6 = uVar9;
        if (*(int *)((param_3->AllocatorInstance).Data + (longlong)(int)(uVar11 + uVar9) * 0x20) <=
            iVar5) {
          uVar6 = uVar11 + uVar9 + (uVar7 & 1);
        }
        uVar7 = uVar11;
        uVar9 = uVar6;
      } while (uVar11 != 0);
    }
    local_38.OperatorID = *param_1;
    local_38.Operator = (param_2->Operator).Ptr;
    local_38.Ordinal = iVar5;
    local_38.Function = param_4;
    TArray<Metasound::DynamicGraph::FResetEntry,TSizedDefaultAllocator<32>_>::Insert
              (param_3,&local_38,uVar6);
  }
  return;
}

// UpperBoundInternal<Metasound::DynamicGraph::FExecuteEntry_const_,int,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FExecuteEntry>,TLess<void>_> @ 14ad36d70

int __cdecl
AlgoImpl::
UpperBoundInternal<Metasound::DynamicGraph::FExecuteEntry_const_,int,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FExecuteEntry>,TLess<void>_>
          (FExecuteEntry *param_1,int param_2,int *param_3,
          TGetOrdinal<Metasound::DynamicGraph::FExecuteEntry> param_4,TLess<void> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (param_1[iVar1].Ordinal <= *param_3) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// UpperBoundInternal<Metasound::DynamicGraph::FPostExecuteEntry_const_,int,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FPostExecuteEntry>,TLess<void>_> @ 14ad36db0

int __cdecl
AlgoImpl::
UpperBoundInternal<Metasound::DynamicGraph::FPostExecuteEntry_const_,int,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FPostExecuteEntry>,TLess<void>_>
          (FPostExecuteEntry *param_1,int param_2,int *param_3,
          TGetOrdinal<Metasound::DynamicGraph::FPostExecuteEntry> param_4,TLess<void> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (param_1[iVar1].Ordinal <= *param_3) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// UpperBoundInternal<Metasound::DynamicGraph::FResetEntry_const_,int,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FResetEntry>,TLess<void>_> @ 14ad36df0

int __cdecl
AlgoImpl::
UpperBoundInternal<Metasound::DynamicGraph::FResetEntry_const_,int,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FResetEntry>,TLess<void>_>
          (FResetEntry *param_1,int param_2,int *param_3,
          TGetOrdinal<Metasound::DynamicGraph::FResetEntry> param_4,TLess<void> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (param_1[iVar1].Ordinal <= *param_3) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>::FNode_*>_> @ 14ad36e30

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>::FNode_*>_>
          (_Atomic_padded<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>::FNode_*>
           *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>::FNode_*>_> @ 14ad36e40

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>::FNode_*>_>
          (_Atomic_padded<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>::FNode_*>
           *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_reinterpret_as<__int64,TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>::FNode_*> @ 14ad36e50

long64 __cdecl
std::
_Atomic_reinterpret_as<__int64,TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>::FNode_*>
          (FNode **param_1)

{
  return (long64)*param_1;
}

// operator== @ 14ad3f140

bool __cdecl Metasound::operator==(FDataEdge *param_1,FDataEdge *param_2)

{
  if (((((param_1->From).Node == (param_2->From).Node) &&
       (*(longlong *)&(param_1->From).Vertex.field_0x8 ==
        *(longlong *)&(param_2->From).Vertex.field_0x8)) &&
      (*(longlong *)&(param_1->From).Vertex.field_0x10 ==
       *(longlong *)&(param_2->From).Vertex.field_0x10)) &&
     ((((param_1->To).Node == (param_2->To).Node &&
       ((param_1->To).Vertex._padding_ == (param_2->To).Vertex._padding_)) &&
      ((param_1->To).Vertex._padding_ == (param_2->To).Vertex._padding_)))) {
    return true;
  }
  return false;
}

// operator== @ 14ad3f190

bool __cdecl Metasound::operator==(FInputDataDestination *param_1,FInputDataDestination *param_2)

{
  if (((param_1->Node == param_2->Node) &&
      ((param_1->Vertex)._padding_ == (param_2->Vertex)._padding_)) &&
     ((param_1->Vertex)._padding_ == (param_2->Vertex)._padding_)) {
    return true;
  }
  return false;
}

// operator== @ 14ad3f1c0

bool __cdecl Metasound::operator==(FOutputDataSource *param_1,FOutputDataSource *param_2)

{
  if (((param_1->Node == param_2->Node) &&
      (*(longlong *)&(param_1->Vertex).field_0x8 == *(longlong *)&(param_2->Vertex).field_0x8)) &&
     (*(longlong *)&(param_1->Vertex).field_0x10 == *(longlong *)&(param_2->Vertex).field_0x10)) {
    return true;
  }
  return false;
}

// operator== @ 14ad3f1f0

bool __cdecl Metasound::operator==(FVertexDataState *param_1,FVertexDataState *param_2)

{
  if ((param_1->ID == param_2->ID) && (param_1->VertexName == param_2->VertexName)) {
    return true;
  }
  return false;
}

// operator== @ 14ad3f210

bool __cdecl Metasound::operator==(FEnvironmentVertex *param_1,FEnvironmentVertex *param_2)

{
  return param_1->VertexName == param_2->VertexName;
}

// operator== @ 14ad3f230

bool __cdecl Metasound::operator==(FInputDataVertex *param_1,FInputDataVertex *param_2)

{
  if ((param_1->_padding_ == param_2->_padding_) && (param_1->_padding_ == param_2->_padding_)) {
    return true;
  }
  return false;
}

// operator== @ 14ad3f250

bool __cdecl Metasound::operator==(FOperatorSettings *param_1,FOperatorSettings *param_2)

{
  if ((param_1->SampleRate == param_2->SampleRate) &&
     (param_1->NumFramesPerBlock == param_2->NumFramesPerBlock)) {
    return true;
  }
  return false;
}

// operator== @ 14ad3f270

bool __cdecl Metasound::operator==(FOutputDataVertex *param_1,FOutputDataVertex *param_2)

{
  if ((*(longlong *)&param_1->field_0x8 == *(longlong *)&param_2->field_0x8) &&
     (*(longlong *)&param_1->field_0x10 == *(longlong *)&param_2->field_0x10)) {
    return true;
  }
  return false;
}

// operator== @ 14ad3f290

bool __cdecl Metasound::operator==(FVertexInterface *param_1,FVertexInterface *param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = (int)(param_1->InputInterface)._padding_;
  if (iVar1 == (int)(param_2->InputInterface)._padding_) {
    bVar2 = CompareItems<Metasound::FInputDataVertex,int>
                      ((FInputDataVertex *)(param_1->InputInterface)._padding_,
                       (FInputDataVertex *)(param_2->InputInterface)._padding_,iVar1);
    if ((bVar2) &&
       (iVar1 = (int)(param_1->OutputInterface)._padding_,
       iVar1 == (int)(param_2->OutputInterface)._padding_)) {
      bVar2 = CompareItems<Metasound::FOutputDataVertex,int>
                        ((FOutputDataVertex *)(param_1->OutputInterface)._padding_,
                         (FOutputDataVertex *)(param_2->OutputInterface)._padding_,iVar1);
      if ((bVar2) &&
         (iVar1 = *(int *)&(param_1->EnvironmentInterface).field_0x8,
         iVar1 == *(int *)&(param_2->EnvironmentInterface).field_0x8)) {
        bVar2 = CompareItems<Metasound::FEnvironmentVertex,int>
                          (*(FEnvironmentVertex **)&param_1->EnvironmentInterface,
                           *(FEnvironmentVertex **)&param_2->EnvironmentInterface,iVar1);
        if (bVar2) {
          return true;
        }
      }
    }
  }
  return false;
}

// operator!= @ 14ad3f310

bool __cdecl Metasound::operator!=(FDataEdge *param_1,FDataEdge *param_2)

{
  if (((((param_1->From).Node == (param_2->From).Node) &&
       (*(longlong *)&(param_1->From).Vertex.field_0x8 ==
        *(longlong *)&(param_2->From).Vertex.field_0x8)) &&
      (*(longlong *)&(param_1->From).Vertex.field_0x10 ==
       *(longlong *)&(param_2->From).Vertex.field_0x10)) &&
     ((((param_1->To).Node == (param_2->To).Node &&
       ((param_1->To).Vertex._padding_ == (param_2->To).Vertex._padding_)) &&
      ((param_1->To).Vertex._padding_ == (param_2->To).Vertex._padding_)))) {
    return false;
  }
  return true;
}

// operator!= @ 14ad3f360

bool __cdecl Metasound::operator!=(FInputDataDestination *param_1,FInputDataDestination *param_2)

{
  if (((param_1->Node == param_2->Node) &&
      ((param_1->Vertex)._padding_ == (param_2->Vertex)._padding_)) &&
     ((param_1->Vertex)._padding_ == (param_2->Vertex)._padding_)) {
    return false;
  }
  return true;
}

// operator!= @ 14ad3f390

bool __cdecl Metasound::operator!=(FOutputDataSource *param_1,FOutputDataSource *param_2)

{
  if (((param_1->Node == param_2->Node) &&
      (*(longlong *)&(param_1->Vertex).field_0x8 == *(longlong *)&(param_2->Vertex).field_0x8)) &&
     (*(longlong *)&(param_1->Vertex).field_0x10 == *(longlong *)&(param_2->Vertex).field_0x10)) {
    return false;
  }
  return true;
}

// operator!= @ 14ad3f3c0

bool __cdecl Metasound::operator!=(FEnvironmentVertex *param_1,FEnvironmentVertex *param_2)

{
  return param_1->VertexName != param_2->VertexName;
}

// operator!= @ 14ad3f3e0

bool __cdecl Metasound::operator!=(FInputDataVertex *param_1,FInputDataVertex *param_2)

{
  if ((param_1->_padding_ == param_2->_padding_) && (param_1->_padding_ == param_2->_padding_)) {
    return false;
  }
  return true;
}

// operator!= @ 14ad3f400

bool __cdecl Metasound::operator!=(FOutputDataVertex *param_1,FOutputDataVertex *param_2)

{
  if ((*(longlong *)&param_1->field_0x8 == *(longlong *)&param_2->field_0x8) &&
     (*(longlong *)&param_1->field_0x10 == *(longlong *)&param_2->field_0x10)) {
    return false;
  }
  return true;
}

// operator!= @ 14ad3f420

bool __cdecl Metasound::operator!=(FVertexInterface *param_1,FVertexInterface *param_2)

{
  bool bVar1;
  
  bVar1 = operator==(param_1,param_2);
  return !bVar1;
}

// operator< @ 14ad3f440

bool __cdecl
Metasound::DynamicGraph::Debug::operator<(FOperatorEdge *param_1,FOperatorEdge *param_2)

{
  FName FVar1;
  FName FVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  
  bVar5 = param_1->FromOperator < param_2->FromOperator;
  if ((param_1->FromOperator != param_2->FromOperator) ||
     (bVar5 = param_1->ToOperator < param_2->ToOperator, param_1->ToOperator != param_2->ToOperator)
     ) {
    return bVar5;
  }
  FVar1 = param_1->FromVertex;
  if ((FVar1 != (FName)0x0) && (FVar2 = param_2->ToVertex, FVar2 != (FName)0x0)) {
    FVar3 = param_2->FromVertex;
    if (FVar1 == FVar3) {
      iVar4 = (param_1->ToVertex).ComparisonIndex.Value - FVar2.ComparisonIndex.Value;
      if (iVar4 == 0) {
        iVar4 = (param_1->ToVertex).Number - FVar2.Number;
      }
      return SUB41((uint)iVar4 >> 0x1f,0);
    }
    iVar4 = FVar1.ComparisonIndex.Value.Value - FVar3.ComparisonIndex.Value;
    if (iVar4 == 0) {
      iVar4 = FVar1.Number - FVar3.Number;
    }
    return SUB41((uint)iVar4 >> 0x1f,0);
  }
  return false;
}

// operator< @ 14ad3f4c0

bool __cdecl Metasound::DynamicGraph::operator<(FLiteralNodeID *param_1,FLiteralNodeID *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = (param_2->ToNode).A;
  uVar2 = (param_1->ToNode).A;
  if (uVar2 < uVar1) {
    return true;
  }
  if (uVar2 == uVar1) {
    uVar2 = (param_2->ToNode).B;
    uVar3 = (param_1->ToNode).B;
    if (uVar3 < uVar2) {
      return true;
    }
    if (uVar3 == uVar2) {
      uVar2 = (param_2->ToNode).C;
      uVar3 = (param_1->ToNode).C;
      if (uVar3 < uVar2) {
        return true;
      }
      if ((uVar3 == uVar2) && ((param_1->ToNode).D < (param_2->ToNode).D)) {
        return true;
      }
    }
  }
  if ((param_1->ToNode).A <= uVar1) {
    uVar1 = (param_1->ToNode).B;
    uVar2 = (param_2->ToNode).B;
    if (uVar1 <= uVar2) {
      if (uVar2 <= uVar1) {
        uVar1 = (param_1->ToNode).C;
        uVar2 = (param_2->ToNode).C;
        if (uVar2 < uVar1) {
          return false;
        }
        if ((uVar2 <= uVar1) && ((param_2->ToNode).D < (param_1->ToNode).D)) {
          return false;
        }
      }
      iVar4 = (param_1->ToVertex).ComparisonIndex.Value - (param_2->ToVertex).ComparisonIndex.Value;
      if (iVar4 == 0) {
        iVar4 = (param_1->ToVertex).Number - (param_2->ToVertex).Number;
      }
      return SUB41((uint)iVar4 >> 0x1f,0);
    }
  }
  return false;
}

// operator< @ 14ad3f540

bool __cdecl Metasound::operator<(FDataEdge *param_1,FDataEdge *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  INode *pIVar3;
  INode *pIVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  
  pIVar3 = (param_2->From).Node;
  puVar1 = &(param_1->From).Vertex.field_0x10;
  pIVar4 = (param_1->From).Node;
  puVar2 = &(param_2->From).Vertex.field_0x10;
  bVar8 = pIVar4 < pIVar3;
  if (pIVar4 == pIVar3) {
    if ((*(longlong *)&(param_1->From).Vertex.field_0x8 ==
         *(longlong *)&(param_2->From).Vertex.field_0x8) &&
       (*(longlong *)puVar1 == *(longlong *)puVar2)) {
      pIVar3 = (param_2->To).Node;
      pIVar4 = (param_1->To).Node;
      bVar8 = pIVar4 < pIVar3;
      if (pIVar4 == pIVar3) {
        lVar5 = (param_2->To).Vertex._padding_;
        lVar6 = (param_1->To).Vertex._padding_;
        if (lVar6 == lVar5) {
          iVar7 = (int)(param_1->To).Vertex._padding_ - (int)(param_2->To).Vertex._padding_;
          if (iVar7 == 0) {
            iVar7 = *(int *)((longlong)&(param_1->To).Vertex._padding_ + 4) -
                    *(int *)((longlong)&(param_2->To).Vertex._padding_ + 4);
          }
          return SUB41((uint)iVar7 >> 0x1f,0);
        }
        iVar7 = (int)lVar6 - (int)lVar5;
        if (iVar7 == 0) {
          iVar7 = (int)((ulonglong)lVar6 >> 0x20) - (int)((ulonglong)lVar5 >> 0x20);
        }
        return SUB41((uint)iVar7 >> 0x1f,0);
      }
    }
    else {
      bVar8 = pIVar4 < pIVar3;
      if (pIVar4 == pIVar3) {
        lVar5 = *(longlong *)&(param_1->From).Vertex.field_0x8;
        lVar6 = *(longlong *)&(param_2->From).Vertex.field_0x8;
        if (lVar5 == lVar6) {
          iVar7 = *(int *)puVar1 - *(int *)puVar2;
          if (iVar7 == 0) {
            iVar7 = *(int *)&(param_1->From).Vertex.field_0x14 -
                    *(int *)&(param_2->From).Vertex.field_0x14;
          }
          return SUB41((uint)iVar7 >> 0x1f,0);
        }
        iVar7 = (int)lVar5 - (int)lVar6;
        if (iVar7 == 0) {
          iVar7 = (int)((ulonglong)lVar5 >> 0x20) - (int)((ulonglong)lVar6 >> 0x20);
        }
        return SUB41((uint)iVar7 >> 0x1f,0);
      }
    }
  }
  return bVar8;
}

// operator< @ 14ad3f640

bool __cdecl Metasound::operator<(FInputDataDestination *param_1,FInputDataDestination *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  if (param_1->Node != param_2->Node) {
    return param_1->Node < param_2->Node;
  }
  lVar1 = (param_2->Vertex)._padding_;
  lVar2 = (param_1->Vertex)._padding_;
  if (lVar2 == lVar1) {
    iVar3 = (int)(param_1->Vertex)._padding_ - (int)(param_2->Vertex)._padding_;
    if (iVar3 == 0) {
      return SUB41((uint)(*(int *)((longlong)&(param_1->Vertex)._padding_ + 4) -
                         *(int *)((longlong)&(param_2->Vertex)._padding_ + 4)) >> 0x1f,0);
    }
  }
  else {
    iVar3 = (int)lVar2 - (int)lVar1;
    if (iVar3 == 0) {
      iVar3 = (int)((ulonglong)lVar2 >> 0x20) - (int)((ulonglong)lVar1 >> 0x20);
    }
  }
  return SUB41((uint)iVar3 >> 0x1f,0);
}

// operator< @ 14ad3f690

bool __cdecl Metasound::operator<(FOutputDataSource *param_1,FOutputDataSource *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  if (param_1->Node != param_2->Node) {
    return param_1->Node < param_2->Node;
  }
  lVar1 = *(longlong *)&(param_2->Vertex).field_0x8;
  lVar2 = *(longlong *)&(param_1->Vertex).field_0x8;
  if (lVar2 == lVar1) {
    iVar3 = *(int *)&(param_1->Vertex).field_0x10 - *(int *)&(param_2->Vertex).field_0x10;
    if (iVar3 == 0) {
      return SUB41((uint)(*(int *)&(param_1->Vertex).field_0x14 -
                         *(int *)&(param_2->Vertex).field_0x14) >> 0x1f,0);
    }
  }
  else {
    iVar3 = (int)lVar2 - (int)lVar1;
    if (iVar3 == 0) {
      iVar3 = (int)((ulonglong)lVar2 >> 0x20) - (int)((ulonglong)lVar1 >> 0x20);
    }
  }
  return SUB41((uint)iVar3 >> 0x1f,0);
}

// operator< @ 14ad3f6e0

bool __cdecl Metasound::operator<(FVertexDataState *param_1,FVertexDataState *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = (param_1->VertexName).ComparisonIndex.Value;
  uVar2 = (param_2->VertexName).ComparisonIndex.Value;
  iVar3 = uVar1 - uVar2;
  if (iVar3 == 0) {
    iVar3 = (param_1->VertexName).Number - (param_2->VertexName).Number;
  }
  if (iVar3 < 0) {
    return true;
  }
  iVar3 = uVar2 - uVar1;
  if (iVar3 == 0) {
    iVar3 = (param_2->VertexName).Number - (param_1->VertexName).Number;
  }
  if (iVar3 < 0) {
    return false;
  }
  return param_1->ID < param_2->ID;
}

// operator< @ 14ad3f730

bool __cdecl Metasound::operator<(FEnvironmentVertex *param_1,FEnvironmentVertex *param_2)

{
  int iVar1;
  
  iVar1 = (param_1->VertexName).ComparisonIndex.Value - (param_2->VertexName).ComparisonIndex.Value;
  if (iVar1 == 0) {
    iVar1 = (param_1->VertexName).Number - (param_2->VertexName).Number;
  }
  return SUB41((uint)iVar1 >> 0x1f,0);
}

// operator< @ 14ad3f750

bool __cdecl Metasound::operator<(FInputDataVertex *param_1,FInputDataVertex *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  lVar1 = param_2->_padding_;
  lVar2 = param_1->_padding_;
  if (lVar2 == lVar1) {
    iVar3 = (int)param_1->_padding_ - (int)param_2->_padding_;
    if (iVar3 == 0) {
      return SUB41((uint)(*(int *)((longlong)&param_1->_padding_ + 4) -
                         *(int *)((longlong)&param_2->_padding_ + 4)) >> 0x1f,0);
    }
  }
  else {
    iVar3 = (int)lVar2 - (int)lVar1;
    if (iVar3 == 0) {
      iVar3 = (int)((ulonglong)lVar2 >> 0x20) - (int)((ulonglong)lVar1 >> 0x20);
    }
  }
  return SUB41((uint)iVar3 >> 0x1f,0);
}

// operator< @ 14ad3f7a0

bool __cdecl Metasound::operator<(FOperatorSettings *param_1,FOperatorSettings *param_2)

{
  if (param_1->SampleRate < param_2->SampleRate) {
    return true;
  }
  if (param_2->SampleRate < param_1->SampleRate) {
    return false;
  }
  return param_1->NumFramesPerBlock < param_2->NumFramesPerBlock;
}

// operator< @ 14ad3f7c0

bool __cdecl Metasound::operator<(FOutputDataVertex *param_1,FOutputDataVertex *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  lVar1 = *(longlong *)&param_2->field_0x8;
  lVar2 = *(longlong *)&param_1->field_0x8;
  if (lVar2 == lVar1) {
    iVar3 = *(int *)&param_1->field_0x10 - *(int *)&param_2->field_0x10;
    if (iVar3 == 0) {
      return SUB41((uint)(*(int *)&param_1->field_0x14 - *(int *)&param_2->field_0x14) >> 0x1f,0);
    }
  }
  else {
    iVar3 = (int)lVar2 - (int)lVar1;
    if (iVar3 == 0) {
      iVar3 = (int)((ulonglong)lVar2 >> 0x20) - (int)((ulonglong)lVar1 >> 0x20);
    }
  }
  return SUB41((uint)iVar3 >> 0x1f,0);
}

// operator() @ 14ad419f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `Metasound::Profiling::Init'::__l2::<lambda_2>::operator()(void *this)

{
  int iVar1;
  ForAnyElementType FVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res10 [8];
  
  if (3 < (byte)LogMetasoundProfiling._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogMetasoundProfiling);
  }
  iVar1 = Metasound::Profiling::ProfilingNodeFilter.ArrayNum;
  pFVar3 = Metasound::Profiling::ProfilingNodeFilter.AllocatorInstance.Data +
           (longlong)Metasound::Profiling::ProfilingNodeFilter.ArrayNum * 0x10;
  FVar2.Data = Metasound::Profiling::ProfilingNodeFilter.AllocatorInstance.Data;
  while( true ) {
    if (Metasound::Profiling::ProfilingNodeFilter.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (FVar2.Data == pFVar3) break;
    if (3 < (byte)LogMetasoundProfiling._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogMetasoundProfiling);
    }
    FVar2.Data = FVar2.Data + 0x10;
  }
  return;
}

// operator() @ 14ad41aa0

void __thiscall
`Metasound::Profiling::Init'::__l2::<lambda_3>::operator()
          (void *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  uint uVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  bool bVar15;
  undefined1 local_res18 [8];
  int local_res20;
  
  uVar1 = param_1->ArrayNum;
  uVar6 = (ulonglong)(int)uVar1;
  if (uVar1 == 0) {
    DestructItems<FString,int>
              ((FString *)Metasound::Profiling::ProfilingNodeFilter.AllocatorInstance.Data,
               Metasound::Profiling::ProfilingNodeFilter.ArrayNum);
    Metasound::Profiling::ProfilingNodeFilter.ArrayNum = 0;
    if (Metasound::Profiling::ProfilingNodeFilter.ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&Metasound::Profiling::ProfilingNodeFilter.AllocatorInstance,0,
                 &Metasound::Profiling::ProfilingNodeFilter.ArrayMax);
      return;
    }
  }
  else {
    pFVar14 = (param_1->AllocatorInstance).Data;
    pFVar8 = pFVar14 + uVar6 * 0x10;
    while( true ) {
      if (param_1->ArrayNum != (int)uVar6) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar14 == pFVar8) break;
      if (((Metasound::Profiling::ProfilingNodeFilter.AllocatorInstance.Data <= pFVar14) &&
          (pFVar14 < Metasound::Profiling::ProfilingNodeFilter.AllocatorInstance.Data +
                     (longlong)Metasound::Profiling::ProfilingNodeFilter.ArrayMax * 0x10)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar3.Data = Metasound::Profiling::ProfilingNodeFilter.AllocatorInstance.Data;
      lVar9 = (longlong)Metasound::Profiling::ProfilingNodeFilter.ArrayNum;
      iVar5 = Metasound::Profiling::ProfilingNodeFilter.ArrayNum;
      if (Metasound::Profiling::ProfilingNodeFilter.ArrayNum != 0) {
        iVar5 = 0;
        iVar11 = 0;
        lVar13 = 0;
        local_res20 = 0;
        iVar12 = *(int *)(Metasound::Profiling::ProfilingNodeFilter.AllocatorInstance.Data + 8);
        if (iVar12 == *(int *)(pFVar14 + 8)) {
          if (iVar12 < 2) {
            bVar4 = false;
          }
          else {
            iVar12 = FGenericPlatformStricmp::Stricmp
                               (*(wchar_t **)
                                 Metasound::Profiling::ProfilingNodeFilter.AllocatorInstance.Data,
                                *(wchar_t **)pFVar14);
            bVar4 = iVar12 != 0;
          }
        }
        else {
          bVar4 = iVar12 + *(int *)(pFVar14 + 8) != 1;
        }
        do {
          lVar13 = lVar13 + 1;
          iVar12 = iVar11 + 1;
          if (lVar13 < lVar9) {
            pFVar10 = FVar3.Data + lVar13 * 0x10;
            do {
              iVar5 = *(int *)(pFVar10 + 8);
              if (iVar5 == *(int *)(pFVar14 + 8)) {
                if (iVar5 < 2) {
                  bVar15 = false;
                }
                else {
                  iVar5 = FGenericPlatformStricmp::Stricmp
                                    (*(wchar_t **)pFVar10,*(wchar_t **)pFVar14);
                  bVar15 = iVar5 != 0;
                }
              }
              else {
                bVar15 = *(int *)(pFVar14 + 8) + iVar5 != 1;
              }
              iVar5 = local_res20;
              if (bVar4 != bVar15) break;
              iVar12 = iVar12 + 1;
              lVar13 = lVar13 + 1;
              pFVar10 = pFVar10 + 0x10;
            } while (lVar13 < lVar9);
          }
          iVar7 = iVar12 - iVar11;
          if (bVar4 == false) {
            DestructItems<FString,int>((FString *)(FVar3.Data + (longlong)iVar11 * 0x10),iVar7);
          }
          else {
            if (iVar5 != iVar11) {
              memmove(FVar3.Data + (longlong)iVar5 * 0x10,FVar3.Data + (longlong)iVar11 * 0x10,
                      (longlong)iVar7 << 4);
            }
            local_res20 = iVar5 + iVar7;
            iVar5 = local_res20;
          }
          bVar4 = (bool)(bVar4 ^ 1);
          iVar11 = iVar12;
        } while (lVar13 < lVar9);
      }
      Metasound::Profiling::ProfilingNodeFilter.ArrayNum = iVar5;
      pFVar14 = pFVar14 + 0x10;
      uVar6 = (ulonglong)uVar1;
    }
  }
  return;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14ad420a8

/* [thunk]:public: virtual void * __ptr64 __cdecl Metasound::DynamicGraph::FDynamicOperator::`vector
   deleting destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
Metasound::DynamicGraph::FDynamicOperator::_vector_deleting_destructor__adjustor_8__
          (FDynamicOperator *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FDynamicOperator *)&this[-1].field_0x1d8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14ad420b8

/* [thunk]:public: virtual void * __ptr64 __cdecl Metasound::FRebindableGraphOperator::`vector
   deleting destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
Metasound::FRebindableGraphOperator::_vector_deleting_destructor__adjustor_8__
          (FRebindableGraphOperator *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FRebindableGraphOperator *)&this[-1].GraphOperatorData.ResetTable.ArrayNum,
                      param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14ad420d0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,`Metasound::Profiling::Init'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad42100

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,`Metasound::Profiling::Init'::__l2::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad42130

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`Metasound::Profiling::Init'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad42160

void * __thiscall
Metasound::TDataReadReference<Metasound::FAudioBuffer>::_scalar_deleting_destructor_
          (TDataReadReference<Metasound::FAudioBuffer> *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&this->field_0x10);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad421a0

void * __thiscall
Metasound::TDataReference<Metasound::FAudioBuffer>::_scalar_deleting_destructor_
          (TDataReference<Metasound::FAudioBuffer> *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((this->ObjectReference).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad421e0

void * __thiscall
Metasound::TDataWriteReference<Metasound::FAudioBuffer>::_scalar_deleting_destructor_
          (TDataWriteReference<Metasound::FAudioBuffer> *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&this->field_0x10);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad42220

void * __thiscall
Metasound::TExecutableOperator<Metasound::DynamicGraph::FAudioFadeOperatorWrapper>::
_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::DynamicGraph::FAudioFadeOperatorWrapper> *this,
          uint param_1)

{
  *this = (TExecutableOperator<Metasound::DynamicGraph::FAudioFadeOperatorWrapper>)
          &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad42260

void * __thiscall
Metasound::TExecutableOperator<Metasound::FGraphOperator>::_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::FGraphOperator> *this,uint param_1)

{
  *this = (TExecutableOperator<Metasound::FGraphOperator>)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad422a0

void * __thiscall
Metasound::TExecutableOperator<Metasound::FRebindableGraphOperator>::_scalar_deleting_destructor_
          (TExecutableOperator<Metasound::FRebindableGraphOperator> *this,uint param_1)

{
  *this = (TExecutableOperator<Metasound::FRebindableGraphOperator>)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad422e0

void * __thiscall
Metasound::VertexPrivate::TInterfaceConfigurationBuilder<Metasound::FInputDataVertex>::
_scalar_deleting_destructor_
          (TInterfaceConfigurationBuilder<Metasound::FInputDataVertex> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad42310

void * __thiscall
Metasound::VertexPrivate::TInterfaceConfigurationBuilder<Metasound::FOutputDataVertex>::
_scalar_deleting_destructor_
          (TInterfaceConfigurationBuilder<Metasound::FOutputDataVertex> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad42340

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad42380

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::FAudioBuffer,0>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<Metasound::FAudioBuffer,0> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7__TReferenceControllerBase__0A__SharedPointerInternals__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad423c0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::FGraph::FFactory,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<Metasound::FGraph::FFactory,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad42400

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::FGraphRenderCost,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<Metasound::FGraphRenderCost,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad42440

void * __thiscall
Metasound::TMetasoundEnvironmentVariable<TArray<FGuid,TSizedDefaultAllocator<32>_>_>::
_scalar_deleting_destructor_
          (TMetasoundEnvironmentVariable<TArray<FGuid,TSizedDefaultAllocator<32>_>_> *this,
          uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Value).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad42490

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Metasound::INode,SharedPointerInternals::DefaultDeleter<Metasound::INode>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<Metasound::INode,SharedPointerInternals::DefaultDeleter<Metasound::INode>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad424d0

void * __thiscall
Metasound::DynamicGraph::FAddInput::_scalar_deleting_destructor_(FAddInput *this,uint param_1)

{
  IDataReference *pIVar1;
  
  pIVar1 = (this->DataReference).DataRefPtr.Ptr;
  if (pIVar1 != (IDataReference *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad42520

void * __thiscall
Metasound::DynamicGraph::FAddOutput::_scalar_deleting_destructor_(FAddOutput *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad42550

void * __thiscall
Metasound::FAnyDataReference::_scalar_deleting_destructor_(FAnyDataReference *this,uint param_1)

{
  IDataReference *pIVar1;
  
  pIVar1 = (this->DataRefPtr).Ptr;
  if (pIVar1 != (IDataReference *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad425a0

void * __thiscall
Metasound::DynamicGraph::FAtomicTransform::_scalar_deleting_destructor_
          (FAtomicTransform *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,int>
            ((TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>
              *)(this->Transforms).AllocatorInstance.Data,(this->Transforms).ArrayNum);
  pFVar1 = (this->Transforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad425f0

void * __thiscall
Metasound::DynamicGraph::FAudioFadeOperatorWrapper::_scalar_deleting_destructor_
          (FAudioFadeOperatorWrapper *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  IOperator *pIVar2;
  
  DestructItems<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,int>
            ((TDataWriteReference<Metasound::FAudioBuffer> *)
             (this->FadedOutputAudioBuffers).AllocatorInstance.Data,
             (this->FadedOutputAudioBuffers).ArrayNum);
  pFVar1 = (this->FadedOutputAudioBuffers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
            ((TDataReadReference<Metasound::FAudioBuffer> *)
             (this->WrappedOutputAudioBuffers).AllocatorInstance.Data,
             (this->WrappedOutputAudioBuffers).ArrayNum);
  pFVar1 = (this->WrappedOutputAudioBuffers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,int>
            ((TDataWriteReference<Metasound::FAudioBuffer> *)
             (this->FadedInputAudioBuffers).AllocatorInstance.Data,
             (this->FadedInputAudioBuffers).ArrayNum);
  pFVar1 = (this->FadedInputAudioBuffers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
            ((TDataReadReference<Metasound::FAudioBuffer> *)
             (this->WrappedInputAudioBuffers).AllocatorInstance.Data,
             (this->WrappedInputAudioBuffers).ArrayNum);
  pFVar1 = (this->WrappedInputAudioBuffers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OutputVerticesToFade).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InputVerticesToFade).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->WrappedOperator).Operator.Ptr;
  if (pIVar2 != (IOperator *)0x0) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  (this->WrappedOperator)._padding_ = (longlong)&___7IOperator_Metasound__6B_;
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad426e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void * __thiscall Metasound::FBasicNode::_scalar_deleting_destructor_(FBasicNode *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ClassMetadata).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NodeData).OperatorData.SharedReferenceCount.ReferenceController);
  FVertexInterface::~FVertexInterface(&(this->NodeData).Interface);
  this->_padding_ = (longlong)&___7INode_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad42740

void * __thiscall
Metasound::DynamicGraph::FBeginAudioFadeTransform::_scalar_deleting_destructor_
          (FBeginAudioFadeTransform *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->OutputVerticesToFade).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InputVerticesToFade).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad427a0

void * __thiscall
Metasound::FBuildErrorBase::_scalar_deleting_destructor_(FBuildErrorBase *this,uint param_1)

{
  ~FBuildErrorBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad427e0

void * __thiscall
Metasound::DynamicGraph::FConnectOperators::_scalar_deleting_destructor_
          (FConnectOperators *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad42810

void * __thiscall
Metasound::FDanglingVertexError::_scalar_deleting_destructor_
          (FDanglingVertexError *this,uint param_1)

{
  FBuildErrorBase::~FBuildErrorBase((FBuildErrorBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad42850

void * __thiscall
Metasound::FDataVertex::_scalar_deleting_destructor_(FDataVertex *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad42880

void * __thiscall
Metasound::FDuplicateInputError::_scalar_deleting_destructor_
          (FDuplicateInputError *this,uint param_1)

{
  FBuildErrorBase::~FBuildErrorBase((FBuildErrorBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad428c0

void * __thiscall
Metasound::DynamicGraph::FDynamicOperator::_scalar_deleting_destructor_
          (FDynamicOperator *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TransformQueue).SharedReferenceCount.ReferenceController);
  FDynamicGraphOperatorData::~FDynamicGraphOperatorData(&this->DynamicOperatorData);
  *(undefined ***)this = &___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad42920

void * __thiscall
Metasound::DynamicGraph::FEndAudioFadeTransform::_scalar_deleting_destructor_
          (FEndAudioFadeTransform *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad42950

void * __thiscall
Metasound::FEnvironmentVertex::_scalar_deleting_destructor_(FEnvironmentVertex *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad42980

void * __thiscall
Metasound::DynamicGraph::FExecuteFence::_scalar_deleting_destructor_
          (FExecuteFence *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad429b0

void * __thiscall Metasound::FExecuter::_scalar_deleting_destructor_(FExecuter *this,uint param_1)

{
  IOperator *pIVar1;
  
  pIVar1 = (this->Operator).Ptr;
  if (pIVar1 != (IOperator *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad42a10

void * __thiscall
Metasound::FGraph::FFactory::_scalar_deleting_destructor_(FFactory *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad42a40

void * __thiscall
Metasound::FNodeFacade::FFactory::_scalar_deleting_destructor_(FFactory *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad42a70

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void * __thiscall Metasound::FGraph::_scalar_deleting_destructor_(FGraph *this,uint param_1)

{
  ~FGraph(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad42ab0

void * __thiscall
Metasound::FGraphCycleError::_scalar_deleting_destructor_(FGraphCycleError *this,uint param_1)

{
  FBuildErrorBase::~FBuildErrorBase((FBuildErrorBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad42af0

void * __thiscall
Metasound::FGraphOperator::_scalar_deleting_destructor_(FGraphOperator *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  FVertexInterfaceData::~FVertexInterfaceData(&this->VertexData);
  DestructItems<TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>,int>
            ((TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> *)
             (this->ActiveOperators).AllocatorInstance.Data,(this->ActiveOperators).ArrayNum);
  pFVar1 = (this->ActiveOperators).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ResetStack).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PostExecuteStack).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ExecuteStack).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad42b80

void * __thiscall
Metasound::FInputDataVertex::_scalar_deleting_destructor_(FInputDataVertex *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(this->Literal).Value.TypeIndex;
  if (0xc < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar4])(&this->Literal);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad42c10

void * __thiscall
Metasound::VertexPrivate::FInputInterfaceConfigurationBuilder::_scalar_deleting_destructor_
          (FInputInterfaceConfigurationBuilder *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad42c40

void * __thiscall
Metasound::FInputReceiverInitializationError::_scalar_deleting_destructor_
          (FInputReceiverInitializationError *this,uint param_1)

{
  FBuildErrorBase::~FBuildErrorBase((FBuildErrorBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad42c80

void * __thiscall
Metasound::VertexPrivate::FInputVertexInterfaceDeclarationBuilder::_scalar_deleting_destructor_
          (FInputVertexInterfaceDeclarationBuilder *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)&___7FSubInterfaceDeclarationBuilder_VertexPrivate_Metasound__6B_;
  if ((int)this->_padding_ != -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentSubInterfaceIndex == INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundVertex.cpp"
                       ,0x24,L"Failed to beging/end all sub interfaces");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad42cf0

void * __thiscall
Metasound::DynamicGraph::FInsertOperator::_scalar_deleting_destructor_
          (FInsertOperator *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  IOperator *pIVar2;
  
  DestructItems<TTuple<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>_>,int>
            ((TTuple<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>_>
              *)(this->OperatorInfo).OutputConnections.Pairs.AllocatorInstance.Data,
             (this->OperatorInfo).OutputConnections.Pairs.ArrayNum);
  pFVar1 = (this->OperatorInfo).OutputConnections.Pairs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FVertexInterfaceData::~FVertexInterfaceData(&(this->OperatorInfo).VertexData);
  pIVar2 = (this->OperatorInfo).Operator.Ptr;
  if (pIVar2 != (IOperator *)0x0) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad42d60

void * __thiscall
Metasound::FInternalError::_scalar_deleting_destructor_(FInternalError *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->FileName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FBuildErrorBase::~FBuildErrorBase((FBuildErrorBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad42db0

void * __thiscall
Metasound::FInvalidConnectionDataTypeError::_scalar_deleting_destructor_
          (FInvalidConnectionDataTypeError *this,uint param_1)

{
  FBuildErrorBase::~FBuildErrorBase((FBuildErrorBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad42df0

void * __thiscall
Metasound::FMissingInputDataReferenceError::_scalar_deleting_destructor_
          (FMissingInputDataReferenceError *this,uint param_1)

{
  FBuildErrorBase::~FBuildErrorBase((FBuildErrorBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad42e30

void * __thiscall
Metasound::FMissingOutputDataReferenceError::_scalar_deleting_destructor_
          (FMissingOutputDataReferenceError *this,uint param_1)

{
  FBuildErrorBase::~FBuildErrorBase((FBuildErrorBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad42e70

void * __thiscall
Metasound::FMissingVertexError::_scalar_deleting_destructor_(FMissingVertexError *this,uint param_1)

{
  FBuildErrorBase::~FBuildErrorBase((FBuildErrorBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad42eb0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void * __thiscall Metasound::FNode::_scalar_deleting_destructor_(FNode *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OperatorData).SharedReferenceCount.ReferenceController);
  FNodeClassMetadata::~FNodeClassMetadata(&this->Info);
  this->_padding_ = (longlong)&___7INode_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad42f10

void * __thiscall
Metasound::FNodePrunedError::_scalar_deleting_destructor_(FNodePrunedError *this,uint param_1)

{
  FBuildErrorBase::~FBuildErrorBase((FBuildErrorBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad42f50

void * __thiscall
Metasound::FOperatorBuilder::_scalar_deleting_destructor_(FOperatorBuilder *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FOperatorBuilder_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad42f90

void * __thiscall
Metasound::FOutputDataVertex::_scalar_deleting_destructor_(FOutputDataVertex *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad42fc0

void * __thiscall
Metasound::VertexPrivate::FOutputInterfaceConfigurationBuilder::_scalar_deleting_destructor_
          (FOutputInterfaceConfigurationBuilder *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad42ff0

void * __thiscall
Metasound::VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::_scalar_deleting_destructor_
          (FOutputVertexInterfaceDeclarationBuilder *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)&___7FSubInterfaceDeclarationBuilder_VertexPrivate_Metasound__6B_;
  if ((int)this->_padding_ != -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentSubInterfaceIndex == INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundVertex.cpp"
                       ,0x24,L"Failed to beging/end all sub interfaces");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad43060

void * __thiscall
Metasound::FProfilingOperator::_scalar_deleting_destructor_(FProfilingOperator *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  IOperator *pIVar2;
  
  pFVar1 = (this->InsightsPostExecuteEventName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InsightsExecuteEventName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InsightsResetEventName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->Operator).Ptr;
  if (pIVar2 != (IOperator *)0x0) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad430e0

void * __thiscall
Metasound::FRebindableGraphOperator::_scalar_deleting_destructor_
          (FRebindableGraphOperator *this,uint param_1)

{
  DynamicGraph::FDynamicGraphOperatorData::~FDynamicGraphOperatorData(&this->GraphOperatorData);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad43130

void * __thiscall
Metasound::DynamicGraph::FRemoveInput::_scalar_deleting_destructor_(FRemoveInput *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad43160

void * __thiscall
Metasound::DynamicGraph::FRemoveOperator::_scalar_deleting_destructor_
          (FRemoveOperator *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->OperatorsConnectedToInput).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad431b0

void * __thiscall
Metasound::DynamicGraph::FRemoveOperatorConnection::_scalar_deleting_destructor_
          (FRemoveOperatorConnection *this,uint param_1)

{
  IDataReference *pIVar1;
  
  pIVar1 = (this->SetOperatorInputTransform).DataRef.DataRefPtr.Ptr;
  if (pIVar1 != (IDataReference *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad43200

void * __thiscall
Metasound::DynamicGraph::FRemoveOutput::_scalar_deleting_destructor_
          (FRemoveOutput *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad43230

void * __thiscall
Metasound::DynamicGraph::FSetOperatorInput::_scalar_deleting_destructor_
          (FSetOperatorInput *this,uint param_1)

{
  IDataReference *pIVar1;
  
  pIVar1 = (this->DataRef).DataRefPtr.Ptr;
  if (pIVar1 != (IDataReference *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad43280

void * __thiscall
Metasound::DynamicGraph::FSetOperatorOrdinalsAndSort::_scalar_deleting_destructor_
          (FSetOperatorOrdinalsAndSort *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->Ordinals).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Ordinals).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Ordinals);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad432e0

void * __thiscall
Metasound::VertexPrivate::FSubInterfaceConfigurationBuilder::_scalar_deleting_destructor_
          (FSubInterfaceConfigurationBuilder *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad43310

void * __thiscall
Metasound::VertexPrivate::FSubInterfaceDeclarationBuilder::_scalar_deleting_destructor_
          (FSubInterfaceDeclarationBuilder *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)&___7FSubInterfaceDeclarationBuilder_VertexPrivate_Metasound__6B_;
  if (this->CurrentSubInterfaceIndex != -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentSubInterfaceIndex == INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundVertex.cpp"
                       ,0x24,L"Failed to beging/end all sub interfaces");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad43380

void * __thiscall
Metasound::DynamicGraph::FSwapOperatorConnection::_scalar_deleting_destructor_
          (FSwapOperatorConnection *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad433b0

void * __thiscall
Metasound::DynamicGraph::FSwapOperatorOrdinalsAndSort::_scalar_deleting_destructor_
          (FSwapOperatorOrdinalsAndSort *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Swaps).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad43400

void * __thiscall
Metasound::IDataReference::_scalar_deleting_destructor_(IDataReference *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad43430

void * __thiscall
Metasound::DynamicGraph::IDynamicGraphInPlaceBuildable::_scalar_deleting_destructor_
          (IDynamicGraphInPlaceBuildable *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad43460

void * __thiscall
Metasound::DynamicGraph::IDynamicOperatorTransform::_scalar_deleting_destructor_
          (IDynamicOperatorTransform *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad43490

void * __thiscall Metasound::IGraph::_scalar_deleting_destructor_(IGraph *this,uint param_1)

{
  *this = (IGraph)&___7INode_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad434d0

void * __thiscall
Metasound::IMetasoundEnvironmentVariable::_scalar_deleting_destructor_
          (IMetasoundEnvironmentVariable *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad43500

void * __thiscall Metasound::INode::_scalar_deleting_destructor_(INode *this,uint param_1)

{
  *this = (INode)&___7INode_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad43540

void * __thiscall Metasound::INodeBase::_scalar_deleting_destructor_(INodeBase *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad43570

void * __thiscall Metasound::IOperator::_scalar_deleting_destructor_(IOperator *this,uint param_1)

{
  *this = (IOperator)&___7IOperator_Metasound__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad435b0

void * __thiscall
Metasound::IOperatorBuildError::_scalar_deleting_destructor_(IOperatorBuildError *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad435e0

void * __thiscall
Metasound::IOperatorBuilder::_scalar_deleting_destructor_(IOperatorBuilder *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ad43610

void * __thiscall
Metasound::IOperatorFactory::_scalar_deleting_destructor_(IOperatorFactory *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// AddBuildErrorsForCycles @ 14ad43aa0

void __cdecl
Metasound::OperatorBuilderPrivate::AddBuildErrorsForCycles
          (FDirectedGraphAlgoAdapter *param_1,
          TArray<TUniquePtr<Metasound::IOperatorBuildError,TDefaultDelete<Metasound::IOperatorBuildError>_>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  bool bVar1;
  int local_res18 [4];
  
  bVar1 = FGraphLinter::ValidateNoCyclesInGraph(param_1,param_2);
  if (bVar1) {
    local_res18[0] = 0x4f;
    AddBuildError<Metasound::FInternalError,char_const_(&)[122],int>
              (param_2,(char (*) [122])
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundOperatorBuilder.cpp"
               ,local_res18);
  }
  return;
}

// CanEverExecuteGraph @ 14ad4a3c0

bool __cdecl Metasound::CanEverExecuteGraph(bool param_1)

{
  return !param_1;
}

// CheckAccessTypeCompatibility @ 14ad4a3d0

void __cdecl
Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
          (FDataVertex *param_1,FAnyDataReference *param_2)

{
  EDataReferenceAccessType EVar1;
  code *pcVar2;
  bool bVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_48;
  FString local_38;
  FString local_28;
  
  EVar1 = param_2->AccessType;
  if (param_1->AccessType == Reference) {
    if (((EVar1 - Read & 0xfc) == 0) && (EVar1 != (Write|Read))) {
      return;
    }
  }
  else if (param_1->AccessType == Value) {
    if (EVar1 == Value) {
      return;
    }
  }
  else {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundVertexData.cpp"
                       ,0x2b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  ::FName::ToString(&param_1->VertexName,&local_28);
  pwVar5 = L"Value";
  if (EVar1 == None) {
    pwVar4 = L"None";
  }
  else if (EVar1 == Read) {
    pwVar4 = L"Read";
  }
  else if (EVar1 == Write) {
    pwVar4 = L"Write";
  }
  else if (EVar1 == Value) {
    pwVar4 = L"Value";
  }
  else {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDataReference.cpp"
                       ,0x33,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pwVar4 = L"";
  }
  ::FString::FString(&local_38,pwVar4);
  if ((param_1->AccessType == Reference) || (param_1->AccessType != Value)) {
    pwVar5 = L"Reference";
  }
  ::FString::FString(&local_48,pwVar5);
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("bIsCompatible",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundVertexData.cpp"
                     ,0x2f,
                     L"Vertex access type \"%s\" is incompatible with data access type \"%s\" on vertex \"%s\" on node \"%s\""
                    );
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (!bVar3) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// CompareAndLogGraphRepresentationDiscrepancies @ 14ad4abd0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::DynamicGraph::Debug::CompareAndLogGraphRepresentationDiscrepancies
          (FDynamicOperatorTransactor *param_1,FDynamicOperator *param_2)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  longlong *plVar8;
  ulong64 *puVar9;
  ulong64 *puVar10;
  FIdentityFunctor aFStackX_8 [8];
  undefined1 auStackX_10 [8];
  undefined1 auStackX_18 [8];
  undefined1 auStackX_20 [8];
  TArray<Metasound::DynamicGraph::Debug::FOperatorEdge,TSizedDefaultAllocator<32>_> TStack_88;
  TArray<Metasound::DynamicGraph::Debug::FOperatorEdge,TSizedDefaultAllocator<32>_> TStack_78;
  TArray<Metasound::DynamicGraph::Debug::FOperatorEdge,TSizedDefaultAllocator<32>_> TStack_68;
  FOperatorEdge FStack_58;
  
  TStack_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_88.ArrayNum = 0;
  TStack_88.ArrayMax = 0;
  plVar8 = (longlong *)(**(code **)((param_1->Graph)._padding_ + 0x58))();
  lVar2 = plVar8[1];
  puVar9 = (ulong64 *)*plVar8;
  puVar10 = puVar9 + (longlong)(int)lVar2 * 0xd;
  while( true ) {
    if ((int)plVar8[1] != (int)lVar2) {
      aFStackX_8[0] = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<Metasound::FDataEdge_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(aFStackX_8);
    }
    if (puVar9 == puVar10) break;
    FStack_58.FromOperator = *puVar9;
    FStack_58.ToOperator = puVar9[5];
    FStack_58.FromVertex = *(FName *)(puVar9 + 2);
    FStack_58.ToVertex = *(FName *)(puVar9 + 7);
    if (((TStack_88.AllocatorInstance.Data <= &FStack_58) &&
        (&FStack_58 <
         (FOperatorEdge *)(TStack_88.AllocatorInstance.Data + (longlong)TStack_88.ArrayMax * 0x20)))
       && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    iVar7 = TStack_88.ArrayNum;
    if (TStack_88.ArrayNum == TStack_88.ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&TStack_88.AllocatorInstance,&TStack_88.ArrayMax);
    }
    TStack_88.ArrayNum = iVar7 + 1;
    puVar9 = puVar9 + 0xd;
    *(ulong64 *)&TStack_88.AllocatorInstance.Data[(longlong)iVar7 * 0x20].field_0x0 =
         FStack_58.FromOperator;
    *(ulong64 *)(TStack_88.AllocatorInstance.Data + (longlong)iVar7 * 0x20 + 8) =
         FStack_58.ToOperator;
    *(FName *)(TStack_88.AllocatorInstance.Data + (longlong)iVar7 * 0x20 + 0x10) =
         FStack_58.FromVertex;
    ((FName *)(TStack_88.AllocatorInstance.Data + (longlong)iVar7 * 0x20 + 0x10))[1] =
         FStack_58.ToVertex;
  }
  FDynamicOperatorDebugger::FindGraphOperatorEdges(&TStack_68,&param_1->GraphSorter);
  FDynamicOperatorDebugger::FindGraphOperatorEdges
            (&TStack_78,(FGraphOperatorData *)&param_2->DynamicOperatorData);
  AlgoImpl::
  IntroSortInternal<Metasound::DynamicGraph::Debug::FOperatorEdge,int,FIdentityFunctor,TDereferenceWrapper<Metasound::DynamicGraph::Debug::FOperatorEdge,TLess<void>_>_>
            ((FOperatorEdge *)TStack_88.AllocatorInstance.Data,TStack_88.ArrayNum,aFStackX_8[0],
             (TLess<void> *)auStackX_10);
  AlgoImpl::
  IntroSortInternal<Metasound::DynamicGraph::Debug::FOperatorEdge,int,FIdentityFunctor,TDereferenceWrapper<Metasound::DynamicGraph::Debug::FOperatorEdge,TLess<void>_>_>
            ((FOperatorEdge *)TStack_68.AllocatorInstance.Data,TStack_68.ArrayNum,aFStackX_8[0],
             (TLess<void> *)auStackX_18);
  AlgoImpl::
  IntroSortInternal<Metasound::DynamicGraph::Debug::FOperatorEdge,int,FIdentityFunctor,TDereferenceWrapper<Metasound::DynamicGraph::Debug::FOperatorEdge,TLess<void>_>_>
            ((FOperatorEdge *)TStack_78.AllocatorInstance.Data,TStack_78.ArrayNum,aFStackX_8[0],
             (TLess<void> *)auStackX_20);
  bVar3 = FDynamicOperatorDebugger::CompareAndLogEdgeArrays
                    (L"Graph",&TStack_88,L"GraphSorter",&TStack_68);
  bVar5 = FDynamicOperatorDebugger::CompareAndLogEdgeArrays
                    (L"Graph",&TStack_88,L"DynamicRuntime",&TStack_78);
  bVar6 = FDynamicOperatorDebugger::CompareAndLogEdgeArrays
                    (L"DynamicRuntime",&TStack_78,L"GraphSorter",&TStack_68);
  if (((bVar3) && (bVar5)) && (bVar6)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if ((FOperatorEdge *)TStack_78.AllocatorInstance.Data != (FOperatorEdge *)0x0) {
    FMemory::Free(TStack_78.AllocatorInstance.Data);
  }
  if ((FOperatorEdge *)TStack_68.AllocatorInstance.Data != (FOperatorEdge *)0x0) {
    FMemory::Free(TStack_68.AllocatorInstance.Data);
  }
  if ((FOperatorEdge *)TStack_88.AllocatorInstance.Data != (FOperatorEdge *)0x0) {
    FMemory::Free(TStack_88.AllocatorInstance.Data);
  }
  return bVar3;
}

// CompareEdgeDestination @ 14ad4ae20

bool __cdecl
Metasound::GraphLinterPrivate::CompareEdgeDestination(FDataEdge *param_1,FDataEdge *param_2)

{
  INode *pIVar1;
  INode *pIVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  pIVar1 = (param_2->To).Node;
  pIVar2 = (param_1->To).Node;
  if (pIVar2 != pIVar1) {
    return pIVar2 < pIVar1;
  }
  lVar3 = (param_2->To).Vertex._padding_;
  lVar4 = (param_1->To).Vertex._padding_;
  if (lVar4 == lVar3) {
    iVar5 = (int)(param_1->To).Vertex._padding_ - (int)(param_2->To).Vertex._padding_;
    if (iVar5 == 0) {
      return SUB41((uint)(*(int *)((longlong)&(param_1->To).Vertex._padding_ + 4) -
                         *(int *)((longlong)&(param_2->To).Vertex._padding_ + 4)) >> 0x1f,0);
    }
  }
  else {
    iVar5 = (int)lVar4 - (int)lVar3;
    if (iVar5 == 0) {
      iVar5 = (int)((ulonglong)lVar4 >> 0x20) - (int)((ulonglong)lVar3 >> 0x20);
    }
  }
  return SUB41((uint)iVar5 >> 0x1f,0);
}

// CompareVertexInterfaceDataToPriorState @ 14ad4ae70

void __cdecl
Metasound::CompareVertexInterfaceDataToPriorState
          (FInputVertexInterfaceData *param_1,
          TArray<Metasound::FVertexDataState,TSizedDefaultAllocator<32>_> *param_2,
          TSortedMap<FName,Metasound::FAnyDataReference,TSizedDefaultAllocator<32>,FNameFastLess>
          *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  TTuple<FName,Metasound::FAnyDataReference> *pTVar5;
  ulonglong uVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FName *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res20 [8];
  
  pFVar12 = (param_1->Bindings).AllocatorInstance.Data;
  uVar1 = (param_1->Bindings).ArrayNum;
  uVar6 = (ulonglong)(int)uVar1;
  pFVar10 = pFVar12 + 0x38;
  pFVar7 = pFVar12 + uVar6 * 0x58;
  do {
    if ((param_1->Bindings).ArrayNum != (int)uVar6) {
      `TCheckedPointerIterator<Metasound::VertexDataPrivate::FInputBinding_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (pFVar12 == pFVar7) {
      return;
    }
    if ((pFVar10[0x18] != (FScriptContainerElement)0x0) &&
       (pFVar10 != (FScriptContainerElement *)0x0)) {
      iVar2 = param_2->ArrayNum;
      pFVar8 = (param_2->AllocatorInstance).Data;
      pFVar9 = pFVar8 + (longlong)iVar2 * 0x10;
      while( true ) {
        if (param_2->ArrayNum != iVar2) {
          `TCheckedPointerIterator<Metasound::FVertexDataState_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res20);
        }
        if (pFVar8 == pFVar9) goto LAB_14ad4af3e;
        if (*(longlong *)pFVar8 == *(longlong *)(pFVar10 + -0x30)) break;
        pFVar8 = pFVar8 + 0x10;
      }
      if (pFVar10[0x18] == (FScriptContainerElement)0x0) {
        lVar4 = 0;
      }
      else {
        lVar4 = (**(code **)(*(longlong *)pFVar10 + 0x20))(pFVar10);
      }
      if (*(longlong *)(pFVar8 + 8) != lVar4) {
LAB_14ad4af3e:
        pFVar11 = (FName *)(pFVar10 + -0x30);
        pTVar5 = TSortedMap<FName,Metasound::FAnyDataReference,TSizedDefaultAllocator<32>,FNameFastLess>
                 ::AllocateMemoryForEmplace<FName_const_&>(param_3,pFVar11);
        uVar3 = pFVar11->Number;
        *(uint *)&pTVar5->field_0x0 = (pFVar11->ComparisonIndex).Value;
        *(uint *)&pTVar5->field_0x4 = uVar3;
        FAnyDataReference::FAnyDataReference
                  ((FAnyDataReference *)&pTVar5->field_0x8,(EDataReferenceAccessType)pFVar10[8],
                   *(IDataReference **)(pFVar10 + 0x10));
        *(undefined ***)&pTVar5->field_0x8 = &___7FAnyDataReference_Metasound__6B_;
      }
    }
    pFVar12 = pFVar12 + 0x58;
    uVar6 = (ulonglong)uVar1;
    pFVar10 = pFVar10 + 0x58;
  } while( true );
}

// CompareVertexInterfaceDataToPriorState @ 14ad4afb0

void __cdecl
Metasound::CompareVertexInterfaceDataToPriorState
          (FOutputVertexInterfaceData *param_1,
          TArray<Metasound::FVertexDataState,TSizedDefaultAllocator<32>_> *param_2,
          TSortedMap<FName,Metasound::FAnyDataReference,TSizedDefaultAllocator<32>,FNameFastLess>
          *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  TTuple<FName,Metasound::FAnyDataReference> *pTVar5;
  ulonglong uVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FName *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res20 [8];
  
  pFVar12 = (param_1->Bindings).AllocatorInstance.Data;
  uVar1 = (param_1->Bindings).ArrayNum;
  uVar6 = (ulonglong)(int)uVar1;
  pFVar7 = pFVar12 + uVar6 * 0x40;
  pFVar10 = pFVar12 + 0x20;
  do {
    if ((param_1->Bindings).ArrayNum != (int)uVar6) {
      `TCheckedPointerIterator<Metasound::VertexDataPrivate::FOutputBinding_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (pFVar12 == pFVar7) {
      return;
    }
    if ((pFVar10[0x18] != (FScriptContainerElement)0x0) &&
       (pFVar10 != (FScriptContainerElement *)0x0)) {
      iVar2 = param_2->ArrayNum;
      pFVar8 = (param_2->AllocatorInstance).Data;
      pFVar9 = pFVar8 + (longlong)iVar2 * 0x10;
      while( true ) {
        if (param_2->ArrayNum != iVar2) {
          `TCheckedPointerIterator<Metasound::FVertexDataState_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res20);
        }
        if (pFVar8 == pFVar9) goto LAB_14ad4b081;
        if (*(longlong *)pFVar8 == *(longlong *)(pFVar10 + -0x18)) break;
        pFVar8 = pFVar8 + 0x10;
      }
      if (pFVar10[0x18] == (FScriptContainerElement)0x0) {
        lVar4 = 0;
      }
      else {
        lVar4 = (**(code **)(*(longlong *)pFVar10 + 0x20))(pFVar10);
      }
      if (*(longlong *)(pFVar8 + 8) != lVar4) {
LAB_14ad4b081:
        pFVar11 = (FName *)(pFVar10 + -0x18);
        pTVar5 = TSortedMap<FName,Metasound::FAnyDataReference,TSizedDefaultAllocator<32>,FNameFastLess>
                 ::AllocateMemoryForEmplace<FName_const_&>(param_3,pFVar11);
        uVar3 = pFVar11->Number;
        *(uint *)&pTVar5->field_0x0 = (pFVar11->ComparisonIndex).Value;
        *(uint *)&pTVar5->field_0x4 = uVar3;
        FAnyDataReference::FAnyDataReference
                  ((FAnyDataReference *)&pTVar5->field_0x8,(EDataReferenceAccessType)pFVar10[8],
                   *(IDataReference **)(pFVar10 + 0x10));
        *(undefined ***)&pTVar5->field_0x8 = &___7FAnyDataReference_Metasound__6B_;
      }
    }
    pFVar12 = pFVar12 + 0x40;
    uVar6 = (ulonglong)uVar1;
    pFVar10 = pFVar10 + 0x40;
  } while( true );
}

// CreateArrayTypeNameFromElementTypeName @ 14ad4b830

FName __cdecl Metasound::CreateArrayTypeNameFromElementTypeName(FName param_1)

{
  FString *pFVar1;
  FName *pFVar2;
  int iVar3;
  FName local_res8;
  FName local_res10 [3];
  FString local_28;
  FString local_18;
  
  pFVar1 = ::FName::ToString(local_res10,&local_18);
  ::FString::ConcatFC(&local_28,pFVar1,L":Array");
  iVar3 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  pFVar2 = ::FName::FName(&local_res8,iVar3,(wchar_t *)local_28.Data.AllocatorInstance.Data,
                          FNAME_Add);
  *(FName *)param_1 = *pFVar2;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return param_1;
}

// CreateDirectedGraphAlgoAdapter @ 14ad4bce0

TPimplPtr<Metasound::FDirectedGraphAlgoAdapter,0> __cdecl
Metasound::DirectedGraphAlgo::CreateDirectedGraphAlgoAdapter(IGraph *param_1)

{
  undefined8 *puVar1;
  IGraph *in_RDX;
  
  puVar1 = ::operator_new(0x260);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1[1] = 0;
    *puVar1 = UE::Core::Private::PimplPtr::DeleterFunc<Metasound::FDirectedGraphAlgoAdapter>;
    FDirectedGraphAlgoAdapter::FDirectedGraphAlgoAdapter
              ((FDirectedGraphAlgoAdapter *)(puVar1 + 2),in_RDX);
  }
  *param_1 = (IGraph)(puVar1 + 2);
  return (TPimplPtr<Metasound::FDirectedGraphAlgoAdapter,0>)(FDirectedGraphAlgoAdapter *)param_1;
}

// CreateElementTypeNameFromArrayTypeName @ 14ad4bdc0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FName __cdecl Metasound::CreateElementTypeNameFromArrayTypeName(FName param_1)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  FName local_res10;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar2 = ::FString::FString(&local_18,L":Array");
      iVar3 = (pFVar2->Data).ArrayNum;
      iVar5 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar5 = 0;
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      SuffixLength = iVar5;
      _Init_thread_footer(&::_TSS0);
    }
  }
  pFVar2 = ::FName::ToString(&local_res10,&local_18);
  iVar3 = (pFVar2->Data).ArrayNum;
  iVar5 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar5 = 0;
  }
  if (iVar5 - SuffixLength < iVar5) {
    iVar5 = iVar5 - SuffixLength;
  }
  iVar3 = 0;
  if (0 < iVar5) {
    iVar3 = iVar5;
  }
  ::FString::RemoveAt(pFVar2,iVar3,SuffixLength,No);
  pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = (pFVar2->Data).ArrayNum;
  (pFVar2->Data).ArrayNum = 0;
  (pFVar2->Data).ArrayMax = 0;
  pFVar4 = (FScriptContainerElement *)L"";
  if (iVar3 != 0) {
    pFVar4 = pFVar1;
  }
  ::FName::FName((FName *)param_1,(wchar_t *)pFVar4);
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return param_1;
}

// DataReferenceAccessTypeToVertexAccessType @ 14ad4e1c0

EVertexAccessType __cdecl
Metasound::VertexDataPrivate::DataReferenceAccessTypeToVertexAccessType
          (EDataReferenceAccessType param_1)

{
  if (((param_1 != Read) && (param_1 != Write)) && (param_1 == Value)) {
    return Value;
  }
  return Reference;
}

// DepthFirstTopologicalSort @ 14ad4e1f0

bool __cdecl
Metasound::DirectedGraphAlgo::DepthFirstTopologicalSort
          (FDirectedGraphAlgoAdapter *param_1,
          TArray<Metasound::INode_const_*,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_> *pTVar10;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar11;
  int iVar12;
  uint uVar13;
  ForAnyElementType FVar14;
  undefined1 local_res18 [8];
  undefined8 local_88;
  TArray<int,TSizedDefaultAllocator<32>_> local_80;
  TTuple<int,int> *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  FScriptContainerElement *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  TArrayView<TTuple<int,int>_const_,int> local_48;
  TArrayView<int_const_,int> local_38;
  
  local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ArrayNum = 0;
  local_80.ArrayMax = 0;
  pTVar10 = FDirectedGraphAlgoAdapter::GetUniqueEdges(param_1);
  local_68 = (TTuple<int,int> *)(pTVar10->AllocatorInstance).Data;
  iStack_60 = pTVar10->ArrayNum;
  if ((iStack_60 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pTVar11 = FDirectedGraphAlgoAdapter::GetUniqueVertices(param_1);
  local_58 = (pTVar11->AllocatorInstance).Data;
  iStack_50 = pTVar11->ArrayNum;
  if ((iStack_50 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  local_48._12_4_ = uStack_5c;
  local_48.ArrayNum = iStack_60;
  local_38._12_4_ = uStack_4c;
  local_38.ArrayNum = iStack_50;
  local_38.DataPtr = (int *)local_58;
  local_48.DataPtr = local_68;
  bVar5 = UE::MathCore::Graph::DepthFirstTopologicalSort(&local_38,&local_48,&local_80);
  if (bVar5) {
    uVar13 = param_2->ArrayNum + local_80.ArrayNum;
    if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
    }
    piVar1 = &param_2->ArrayMax;
    iVar12 = local_80.ArrayNum;
    if (*piVar1 < (int)uVar13) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar13,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
      iVar12 = local_80.ArrayNum;
    }
    pFVar2 = local_80.AllocatorInstance.Data + (longlong)iVar12 * 4;
    FVar14.Data = local_80.AllocatorInstance.Data;
    iVar9 = iVar12;
    while( true ) {
      if (iVar9 != iVar12) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (FVar14.Data == pFVar2) break;
      uVar13 = *(uint *)FVar14.Data;
      uVar8 = 0;
      if ((int)uVar13 < (param_1->MetasoundUniqueNodes).ArrayNum) {
        uVar8 = ~uVar13 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      local_88 = *(undefined8 *)
                  ((param_1->MetasoundUniqueNodes).AllocatorInstance.Data +
                  (longlong)(int)uVar13 * 8);
      pFVar3 = (param_2->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_88) &&
          ((FScriptContainerElement *)&local_88 < pFVar3 + (longlong)*piVar1 * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      iVar9 = param_2->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_2->AllocatorInstance,piVar1);
      }
      FVar14.Data = FVar14.Data + 4;
      param_2->ArrayNum = iVar9 + 1;
      *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_88;
      iVar9 = local_80.ArrayNum;
    }
  }
  if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.AllocatorInstance.Data);
  }
  return bVar5;
}

// DepthFirstTopologicalSort @ 14ad4e4c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
Metasound::DirectedGraphAlgo::DepthFirstTopologicalSort
          (IGraph *param_1,TArray<Metasound::INode_const_*,TSizedDefaultAllocator<32>_> *param_2)

{
  bool bVar1;
  FDirectedGraphAlgoAdapter *pFVar2;
  undefined1 auStack_288 [32];
  FDirectedGraphAlgoAdapter local_268;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_288;
  pFVar2 = FDirectedGraphAlgoAdapter::FDirectedGraphAlgoAdapter(&local_268,param_1);
  bVar1 = DepthFirstTopologicalSort(pFVar2,param_2);
  FDirectedGraphAlgoAdapter::~FDirectedGraphAlgoAdapter(&local_268);
  return bVar1;
}

// EnsureIfDynamicGraphOperatorDataIsCorrupt @ 14ad4f8d0

void __cdecl
Metasound::DynamicGraph::Debug::EnsureIfDynamicGraphOperatorDataIsCorrupt
          (FDynamicGraphOperatorData *param_1)

{
  EnsureIfDynamicGraphOperatorDataTableIsCorrupt<Metasound::DynamicGraph::FExecuteEntry>
            (param_1,&param_1->ExecuteTable);
  EnsureIfDynamicGraphOperatorDataTableIsCorrupt<Metasound::DynamicGraph::FPostExecuteEntry>
            (param_1,&param_1->PostExecuteTable);
  EnsureIfDynamicGraphOperatorDataTableIsCorrupt<Metasound::DynamicGraph::FResetEntry>
            (param_1,&param_1->ResetTable);
  return;
}

// FindReachableNodes @ 14ad515a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Metasound::DirectedGraphAlgo::FindReachableNodes
          (FDirectedGraphAlgoAdapter *param_1,
          TSet<Metasound::INode_const_*,DefaultKeyFuncs<Metasound::INode_const_*,0>,FDefaultSetAllocator>
          *param_2)

{
  int iVar1;
  TSet<Metasound::INode_const_*,DefaultKeyFuncs<Metasound::INode_const_*,0>,FDefaultSetAllocator>
  *pTVar2;
  undefined1 auStackY_148 [32];
  undefined1 local_118 [32];
  void *local_f8;
  undefined4 local_f0;
  uint local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  ForElementType<FSetElementId> local_d8;
  int local_d0;
  undefined1 local_c8 [32];
  void *local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined4 local_98;
  undefined4 local_94;
  ForElementType<FSetElementId> local_88;
  int local_80;
  TSet<Metasound::INode_const_*,DefaultKeyFuncs<Metasound::INode_const_*,0>,FDefaultSetAllocator>
  local_78;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_9c = 0x80;
  local_c8._0_8_ = (FScriptContainerElement *)0x0;
  local_c8._8_8_ = 0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  local_94 = 0;
  local_88 = (ForElementType<FSetElementId>)0x0;
  local_80 = 0;
  local_98 = 0xffffffff;
  FindReachableNodesFromInput
            (param_1,(TSet<Metasound::INode_const_*,DefaultKeyFuncs<Metasound::INode_const_*,0>,FDefaultSetAllocator>
                      *)local_c8);
  local_118._0_8_ = (FScriptContainerElement *)0x0;
  local_118._8_8_ = 0;
  local_f8 = (void *)0x0;
  local_f0 = 0;
  local_ec = 0x80;
  local_e8 = 0xffffffff;
  local_e4 = 0;
  local_d8 = (ForElementType<FSetElementId>)0x0;
  local_d0 = 0;
  FindReachableNodesFromOutput
            (param_1,(TSet<Metasound::INode_const_*,DefaultKeyFuncs<Metasound::INode_const_*,0>,FDefaultSetAllocator>
                      *)local_118);
  pTVar2 = TSet<Metasound::INode_const_*,DefaultKeyFuncs<Metasound::INode_const_*,0>,FDefaultSetAllocator>
           ::Union((TSet<Metasound::INode_const_*,DefaultKeyFuncs<Metasound::INode_const_*,0>,FDefaultSetAllocator>
                    *)local_c8,&local_78,
                   (TSet<Metasound::INode_const_*,DefaultKeyFuncs<Metasound::INode_const_*,0>,FDefaultSetAllocator>
                    *)local_118);
  if (param_2 != pTVar2) {
    TSet<Metasound::INode_const_*,DefaultKeyFuncs<Metasound::INode_const_*,0>,FDefaultSetAllocator>
    ::
    Move<TSet<Metasound::INode_const_*,DefaultKeyFuncs<Metasound::INode_const_*,0>,FDefaultSetAllocator>_>
              (param_2,pTVar2);
  }
  local_78.HashSize = 0;
  if (local_78.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_78.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<Metasound::INode_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<Metasound::INode_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_78.Elements);
  local_d0 = 0;
  if (local_d8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_d8);
  }
  iVar1 = SUB84(local_118._8_8_,4);
  local_118._8_8_ = local_118._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_118,0,(int *)(local_118 + 0xc));
  }
  local_e8 = 0xffffffff;
  local_e4 = 0;
  local_f0 = 0;
  if (0x80 < local_ec) {
    local_ec = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_118 + 0x10),0);
  }
  if (local_f8 != (void *)0x0) {
    FMemory::Free(local_f8);
  }
  if ((FScriptContainerElement *)local_118._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_118._0_8_);
  }
  local_80 = 0;
  if (local_88 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88);
  }
  iVar1 = SUB84(local_c8._8_8_,4);
  local_c8._8_8_ = local_c8._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_c8,0,(int *)(local_c8 + 0xc));
  }
  local_98 = 0xffffffff;
  local_94 = 0;
  local_a0 = 0;
  if (0x80 < local_9c) {
    local_9c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10),0);
  }
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  if ((FScriptContainerElement *)local_c8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c8._0_8_);
  }
  return;
}

// FindReachableNodes @ 14ad517b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Metasound::DirectedGraphAlgo::FindReachableNodes
          (IGraph *param_1,
          TSet<Metasound::INode_const_*,DefaultKeyFuncs<Metasound::INode_const_*,0>,FDefaultSetAllocator>
          *param_2)

{
  FDirectedGraphAlgoAdapter *pFVar1;
  undefined1 auStack_288 [32];
  FDirectedGraphAlgoAdapter local_268;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_288;
  pFVar1 = FDirectedGraphAlgoAdapter::FDirectedGraphAlgoAdapter(&local_268,param_1);
  FindReachableNodes(pFVar1,param_2);
  FDirectedGraphAlgoAdapter::~FDirectedGraphAlgoAdapter(&local_268);
  return;
}

// FindReachableNodesFromInput @ 14ad51880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Metasound::DirectedGraphAlgo::FindReachableNodesFromInput
          (FDirectedGraphAlgoAdapter *param_1,
          TSet<Metasound::INode_const_*,DefaultKeyFuncs<Metasound::INode_const_*,0>,FDefaultSetAllocator>
          *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_> *pTVar4;
  TArrayView<TTuple<int,int>_const_,int> *pTVar5;
  FScriptContainerElement *pFVar6;
  undefined1 auStackY_118 [32];
  undefined1 local_e8 [8];
  undefined8 *local_e0;
  TSet<Metasound::INode_const_*,DefaultKeyFuncs<Metasound::INode_const_*,0>,FDefaultSetAllocator>
  *local_d8;
  code *local_d0;
  undefined8 **local_c8;
  TArrayView<TTuple<int,int>_const_,int> local_b8;
  TArrayView<TTuple<int,int>_const_,int> local_a8;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_118;
  pFVar6 = (param_1->InputVertices).AllocatorInstance.Data;
  iVar2 = (param_1->InputVertices).ArrayNum;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  pFVar1 = pFVar6 + (longlong)iVar2 * 4;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  local_d8 = param_2;
  while( true ) {
    if ((param_1->InputVertices).ArrayNum != iVar2) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_e8);
    }
    if (pFVar6 == pFVar1) break;
    local_e0 = (undefined8 *)local_98;
    iVar3 = *(int *)pFVar6;
    local_c8 = &local_e0;
    local_d0 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::DirectedGraphAlgo::FindReachableNodesFromInput'::__l6::<lambda_1>,bool,int>
               ::Call;
    if ((param_1->Lazy).Tree.bIsInitialized == false) {
      pTVar4 = FDirectedGraphAlgoAdapter::GetUniqueEdges(param_1);
      pTVar5 = TArrayView<TTuple<int,int>_const_,int>::
               TArrayView<TTuple<int,int>_const_,int><TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_>_const_&,TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_>_>
                         (&local_a8,pTVar4);
      local_b8.DataPtr = pTVar5->DataPtr;
      local_b8.ArrayNum = pTVar5->ArrayNum;
      local_b8._12_4_ = *(undefined4 *)&pTVar5->field_0xc;
      UE::MathCore::Graph::BuildDirectedTree(&local_b8,&(param_1->Lazy).Tree.Object);
      (param_1->Lazy).Tree.bIsInitialized = true;
    }
    UE::MathCore::Graph::DepthFirstNodeTraversal
              (iVar3,&(param_1->Lazy).Tree.Object,(TFunctionRef<bool___cdecl(int)> *)&local_d0);
    pFVar6 = pFVar6 + 4;
  }
  FDirectedGraphAlgoAdapter::GetNodeSet
            (param_1,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98,local_d8);
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  iVar2 = SUB84(local_98._8_8_,4);
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_64 = 0;
  local_70 = 0;
  local_68 = 0xffffffff;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  return;
}

// FindReachableNodesFromInput @ 14ad51a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Metasound::DirectedGraphAlgo::FindReachableNodesFromInput
          (IGraph *param_1,
          TSet<Metasound::INode_const_*,DefaultKeyFuncs<Metasound::INode_const_*,0>,FDefaultSetAllocator>
          *param_2)

{
  FDirectedGraphAlgoAdapter *pFVar1;
  undefined1 auStack_288 [32];
  FDirectedGraphAlgoAdapter local_268;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_288;
  pFVar1 = FDirectedGraphAlgoAdapter::FDirectedGraphAlgoAdapter(&local_268,param_1);
  FindReachableNodesFromInput(pFVar1,param_2);
  FDirectedGraphAlgoAdapter::~FDirectedGraphAlgoAdapter(&local_268);
  return;
}

// FindReachableNodesFromOutput @ 14ad51b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Metasound::DirectedGraphAlgo::FindReachableNodesFromOutput
          (FDirectedGraphAlgoAdapter *param_1,
          TSet<Metasound::INode_const_*,DefaultKeyFuncs<Metasound::INode_const_*,0>,FDefaultSetAllocator>
          *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_> *pTVar4;
  TArrayView<TTuple<int,int>_const_,int> *pTVar5;
  FScriptContainerElement *pFVar6;
  undefined1 auStackY_118 [32];
  undefined1 local_e8 [8];
  undefined8 *local_e0;
  TSet<Metasound::INode_const_*,DefaultKeyFuncs<Metasound::INode_const_*,0>,FDefaultSetAllocator>
  *local_d8;
  code *local_d0;
  undefined8 **local_c8;
  TArrayView<TTuple<int,int>_const_,int> local_b8;
  TArrayView<TTuple<int,int>_const_,int> local_a8;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_118;
  pFVar6 = (param_1->OutputVertices).AllocatorInstance.Data;
  iVar2 = (param_1->OutputVertices).ArrayNum;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  pFVar1 = pFVar6 + (longlong)iVar2 * 4;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  local_d8 = param_2;
  while( true ) {
    if ((param_1->OutputVertices).ArrayNum != iVar2) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_e8);
    }
    if (pFVar6 == pFVar1) break;
    local_e0 = (undefined8 *)local_98;
    iVar3 = *(int *)pFVar6;
    local_c8 = &local_e0;
    local_d0 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::DirectedGraphAlgo::FindReachableNodesFromOutput'::__l6::<lambda_1>,bool,int>
               ::Call;
    if ((param_1->Lazy).TransposeTree.bIsInitialized == false) {
      pTVar4 = FDirectedGraphAlgoAdapter::GetUniqueEdges(param_1);
      pTVar5 = TArrayView<TTuple<int,int>_const_,int>::
               TArrayView<TTuple<int,int>_const_,int><TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_>_const_&,TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_>_>
                         (&local_a8,pTVar4);
      local_b8.DataPtr = pTVar5->DataPtr;
      local_b8.ArrayNum = pTVar5->ArrayNum;
      local_b8._12_4_ = *(undefined4 *)&pTVar5->field_0xc;
      UE::MathCore::Graph::BuildTransposeDirectedTree
                (&local_b8,&(param_1->Lazy).TransposeTree.Object);
      (param_1->Lazy).TransposeTree.bIsInitialized = true;
    }
    UE::MathCore::Graph::DepthFirstNodeTraversal
              (iVar3,&(param_1->Lazy).TransposeTree.Object,
               (TFunctionRef<bool___cdecl(int)> *)&local_d0);
    pFVar6 = pFVar6 + 4;
  }
  FDirectedGraphAlgoAdapter::GetNodeSet
            (param_1,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98,local_d8);
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  iVar2 = SUB84(local_98._8_8_,4);
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_64 = 0;
  local_70 = 0;
  local_68 = 0xffffffff;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  return;
}

// FindReachableNodesFromOutput @ 14ad51d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Metasound::DirectedGraphAlgo::FindReachableNodesFromOutput
          (IGraph *param_1,
          TSet<Metasound::INode_const_*,DefaultKeyFuncs<Metasound::INode_const_*,0>,FDefaultSetAllocator>
          *param_2)

{
  FDirectedGraphAlgoAdapter *pFVar1;
  undefined1 auStack_288 [32];
  FDirectedGraphAlgoAdapter local_268;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_288;
  pFVar1 = FDirectedGraphAlgoAdapter::FDirectedGraphAlgoAdapter(&local_268,param_1);
  FindReachableNodesFromOutput(pFVar1,param_2);
  FDirectedGraphAlgoAdapter::~FDirectedGraphAlgoAdapter(&local_268);
  return;
}

// GetActiveNodeClassNameAndVersionOnThisThread @ 14ad54e80

wchar_t * __cdecl Metasound::ThreadLocalDebug::GetActiveNodeClassNameAndVersionOnThisThread(void)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(longlong *)(lVar1 + 0x9a98) != 0) && (*(int *)(lVar1 + 0x9aa8) != 0)) {
    return *(wchar_t **)(lVar1 + 0x9aa0);
  }
  return L"";
}

// GetDebugInfoOnThisThread @ 14ad550a0

FDebugInfo * __cdecl Metasound::ThreadLocalDebug::GetDebugInfoOnThisThread(void)

{
  return (FDebugInfo *)
         (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9a98);
}

// GetDebugNodeNameString @ 14ad550c0

FString * __cdecl
Metasound::DynamicGraph::DynamicOperatorTransactorPrivate::GetDebugNodeNameString
          (FString *__return_storage_ptr__,FGuid *param_1,INode *param_2)

{
  FNodeClassName *this;
  FString local_48;
  FString local_38;
  FString local_28;
  
  (**(code **)((longlong)*param_2 + 0x18))(param_2);
  (**(code **)((longlong)*param_2 + 0x18))(param_2);
  this = (FNodeClassName *)(**(code **)((longlong)*param_2 + 0x18))(param_2);
  FNodeClassName::ToString(this,&local_28);
  ::FString::PrintfImpl(&local_38,L"%s_v%d.%d");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  FGuid::AppendString(param_1,&local_48,Digits);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s:%s");
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetDebugNodeNameString @ 14ad551e0

FString * __cdecl
Metasound::DynamicGraph::DynamicOperatorTransactorPrivate::GetDebugNodeNameString
          (FString *__return_storage_ptr__,INode *param_1)

{
  FNodeClassName *this;
  FString local_18;
  
  (**(code **)((longlong)*param_1 + 0x18))(param_1);
  (**(code **)((longlong)*param_1 + 0x18))(param_1);
  this = (FNodeClassName *)(**(code **)((longlong)*param_1 + 0x18))(param_1);
  FNodeClassName::ToString(this,&local_18);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s_v%d.%d");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetEdgePointer @ 14ad55a60

FDataEdge * __cdecl Metasound::GraphLinterPrivate::GetEdgePointer(FDataEdge *param_1)

{
  return param_1;
}

// GetOperatorBuilderSettings @ 14ad563e0

FOperatorBuilderSettings * __cdecl
Metasound::DynamicGraph::DynamicOperatorTransactorPrivate::GetOperatorBuilderSettings
          (FOperatorBuilderSettings *__return_storage_ptr__)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  
  uVar8 = DevSettings._8_2_;
  bVar1 = DevSettings.bValidateNoCyclesInGraph;
  bVar2 = DevSettings.bValidateNoDuplicateInputs;
  bVar3 = DevSettings.bValidateVerticesExist;
  bVar4 = DevSettings.bValidateEdgeDataTypesMatch;
  bVar5 = DevSettings.bValidateOperatorOutputsAreBound;
  bVar6 = DevSettings.bFailOnAnyError;
  bVar7 = DevSettings.bPopulateInternalDataReferences;
  __return_storage_ptr__->PruningMode = DevSettings.PruningMode;
  uVar9 = DevSettings._8_2_;
  __return_storage_ptr__->bValidateNoCyclesInGraph = bVar1;
  __return_storage_ptr__->bValidateNoDuplicateInputs = bVar2;
  __return_storage_ptr__->bValidateVerticesExist = bVar3;
  __return_storage_ptr__->bValidateEdgeDataTypesMatch = bVar4;
  __return_storage_ptr__->bValidateOperatorOutputsAreBound = bVar5;
  __return_storage_ptr__->bFailOnAnyError = bVar6;
  __return_storage_ptr__->bPopulateInternalDataReferences = bVar7;
  DevSettings.bEnableOperatorRebind = SUB21(uVar8,0);
  DevSettings.bProfileOperators = SUB21(uVar8,1);
  bVar1 = DevSettings.bProfileOperators;
  __return_storage_ptr__->bEnableOperatorRebind = DevSettings.bEnableOperatorRebind;
  DevSettings._8_2_ = uVar9;
  __return_storage_ptr__->bProfileOperators = bVar1;
  __return_storage_ptr__->bEnableOperatorRebind = true;
  return __return_storage_ptr__;
}

// GetOperatorID @ 14ad56530

ulong64 __cdecl Metasound::DirectedGraphAlgo::GetOperatorID(INode *param_1)

{
  return (ulong64)param_1;
}

// GetOperatorID @ 14ad56540

ulong64 __cdecl Metasound::DirectedGraphAlgo::GetOperatorID(INode *param_1)

{
  return (ulong64)param_1;
}

// GetVariableAccessorNodeClassName @ 14ad56f40

FNodeClassName * __cdecl
Metasound::VariableNames::GetVariableAccessorNodeClassName
          (FNodeClassName *__return_storage_ptr__,FName *param_1)

{
  FName local_res8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&NodeNamespace,"VariableAccessor");
      _Init_thread_footer(&::_TSS0);
    }
  }
  ::FName::FName(&local_res8,"");
  __return_storage_ptr__->Namespace = NodeNamespace;
  __return_storage_ptr__->Name = *param_1;
  __return_storage_ptr__->Variant = local_res8;
  return __return_storage_ptr__;
}

// GetVariableDeferredAccessorNodeClassName @ 14ad56ff0

FNodeClassName * __cdecl
Metasound::VariableNames::GetVariableDeferredAccessorNodeClassName
          (FNodeClassName *__return_storage_ptr__,FName *param_1)

{
  FName local_res8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&NodeNamespace,"VariableDeferredAccessor");
      _Init_thread_footer(&::_TSS0);
    }
  }
  ::FName::FName(&local_res8,"");
  __return_storage_ptr__->Namespace = NodeNamespace;
  __return_storage_ptr__->Name = *param_1;
  __return_storage_ptr__->Variant = local_res8;
  return __return_storage_ptr__;
}

// GetVariableMutatorNodeClassName @ 14ad570a0

FNodeClassName * __cdecl
Metasound::VariableNames::GetVariableMutatorNodeClassName
          (FNodeClassName *__return_storage_ptr__,FName *param_1)

{
  FName local_res8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&NodeNamespace,"VariableMutator");
      _Init_thread_footer(&::_TSS0);
    }
  }
  ::FName::FName(&local_res8,"");
  __return_storage_ptr__->Namespace = NodeNamespace;
  __return_storage_ptr__->Name = *param_1;
  __return_storage_ptr__->Variant = local_res8;
  return __return_storage_ptr__;
}

// GetVariableNodeClassName @ 14ad57150

FNodeClassName * __cdecl
Metasound::VariableNames::GetVariableNodeClassName
          (FNodeClassName *__return_storage_ptr__,FName *param_1)

{
  FName local_res8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&NodeNamespace,"InitVariable");
      _Init_thread_footer(&::_TSS0);
    }
  }
  ::FName::FName(&local_res8,"");
  __return_storage_ptr__->Namespace = NodeNamespace;
  __return_storage_ptr__->Name = *param_1;
  __return_storage_ptr__->Variant = local_res8;
  return __return_storage_ptr__;
}

// GetVertexInterfaceDataState @ 14ad57440

void __cdecl
Metasound::GetVertexInterfaceDataState
          (FInputVertexInterfaceData *param_1,
          TArray<Metasound::FVertexDataState,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  undefined8 local_28;
  undefined8 uStack_20;
  
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&param_2->AllocatorInstance,0,piVar1);
  }
  iVar2 = (param_1->Bindings).ArrayNum;
  pFVar7 = (param_1->Bindings).AllocatorInstance.Data;
  pFVar8 = pFVar7 + (longlong)iVar2 * 0x58;
  while( true ) {
    if ((param_1->Bindings).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Metasound::VertexDataPrivate::FInputBinding_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar8) break;
    local_28 = *(undefined8 *)(pFVar7 + 8);
    if (pFVar7[0x50] == (FScriptContainerElement)0x0) {
      uStack_20 = 0;
    }
    else {
      uStack_20 = (**(code **)(*(longlong *)(pFVar7 + 0x38) + 0x20))(pFVar7 + 0x38);
    }
    pFVar3 = (param_2->AllocatorInstance).Data;
    if ((pFVar3 <= (FScriptContainerElement *)&local_28) &&
       ((FScriptContainerElement *)&local_28 < pFVar3 + (longlong)*piVar1 * 0x10)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = param_2->ArrayNum;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_2->AllocatorInstance,piVar1);
    }
    param_2->ArrayNum = iVar6 + 1;
    pFVar7 = pFVar7 + 0x58;
    pFVar3 = (param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
    *(undefined8 *)pFVar3 = local_28;
    *(undefined8 *)(pFVar3 + 8) = uStack_20;
  }
  return;
}

// GetVertexInterfaceDataState @ 14ad575b0

void __cdecl
Metasound::GetVertexInterfaceDataState
          (FOutputVertexInterfaceData *param_1,
          TArray<Metasound::FVertexDataState,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  undefined8 local_28;
  undefined8 uStack_20;
  
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&param_2->AllocatorInstance,0,piVar1);
  }
  iVar2 = (param_1->Bindings).ArrayNum;
  pFVar8 = (param_1->Bindings).AllocatorInstance.Data;
  pFVar7 = pFVar8 + (longlong)iVar2 * 0x40;
  while( true ) {
    if ((param_1->Bindings).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Metasound::VertexDataPrivate::FOutputBinding_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar7) break;
    local_28 = *(undefined8 *)(pFVar8 + 8);
    if (pFVar8[0x38] == (FScriptContainerElement)0x0) {
      uStack_20 = 0;
    }
    else {
      uStack_20 = (**(code **)(*(longlong *)(pFVar8 + 0x20) + 0x20))(pFVar8 + 0x20);
    }
    pFVar3 = (param_2->AllocatorInstance).Data;
    if ((pFVar3 <= (FScriptContainerElement *)&local_28) &&
       ((FScriptContainerElement *)&local_28 < pFVar3 + (longlong)*piVar1 * 0x10)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = param_2->ArrayNum;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_2->AllocatorInstance,piVar1);
    }
    param_2->ArrayNum = iVar6 + 1;
    pFVar8 = pFVar8 + 0x40;
    pFVar3 = (param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
    *(undefined8 *)pFVar3 = local_28;
    *(undefined8 *)(pFVar3 + 8) = uStack_20;
  }
  return;
}

// Init @ 14ad581e0

void __cdecl Metasound::Profiling::Init(void)

{
  code *pcVar1;
  IConsoleManager *pIVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_108;
  FDelegateAllocation local_100;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_f0;
  FDelegateAllocation local_e8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_d8;
  FDelegateAllocation local_d0;
  FDestructionSentinel local_c0;
  FDestructionSentinel local_a8;
  FDestructionSentinel local_90;
  FDestructionSentinel local_78;
  FDelegateAllocation *local_60;
  FDestructionSentinel local_58;
  FDelegateAllocation *local_40;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar2 = IConsoleManager::Singleton;
  local_108.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_100.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_100.DelegateSize = 0;
  pcVar1 = *(code **)((longlong)*IConsoleManager::Singleton + 0xa0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_108,(FWriteAccessScope *)&local_78);
  local_60 = &local_100;
  puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_100);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,`Metasound::Profiling::Init'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  (*pcVar1)(pIVar2,L"au.Metasound.Profiling.AddNodes",
            L"Adds the specified node class name(s) to the list of metasound nodes that will be profiled and visible in Insights."
            ,&local_108,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_108,(FWriteAccessScope *)&local_c0);
  if ((local_100.DelegateSize != 0) &&
     (local_100.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_100.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_100,0,0,0x10);
    local_100.DelegateSize = 0;
  }
  if (local_c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
  }
  if (local_100.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_100.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_108.AccessDetector);
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar2 = IConsoleManager::Singleton;
  local_f0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_e8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_e8.DelegateSize = 0;
  pcVar1 = *(code **)((longlong)*IConsoleManager::Singleton + 0xa8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_f0,(FWriteAccessScope *)&local_58);
  local_40 = &local_e8;
  puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_e8);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`Metasound::Profiling::Init'::`2'::<lambda_2>_>
               ::_vftable_;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  (*pcVar1)(pIVar2,L"au.Metasound.Profiling.ListNodes",
            L"Lists the node class names that will be profiled and visible in Insights.",&local_f0,0
           );
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_f0,(FWriteAccessScope *)&local_a8);
  if ((local_e8.DelegateSize != 0) &&
     (local_e8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_e8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_e8,0,0,0x10);
    local_e8.DelegateSize = 0;
  }
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  if (local_e8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_e8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_f0.AccessDetector);
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar2 = IConsoleManager::Singleton;
  local_d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_d0.DelegateSize = 0;
  pcVar1 = *(code **)((longlong)*IConsoleManager::Singleton + 0xa0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_d8,(FWriteAccessScope *)&local_38);
  local_20 = &local_d0;
  puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_d0);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,`Metasound::Profiling::Init'::`2'::<lambda_3>_>
               ::_vftable_;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  (*pcVar1)(pIVar2,L"au.Metasound.Profiling.RemoveNodes",
            L"Removes the specified node class name(s) (or ALL if no names are provided) from the list of node types that will be profiled and visible in Insights."
            ,&local_d8,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_d8,(FWriteAccessScope *)&local_90);
  if ((local_d0.DelegateSize != 0) &&
     (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_d0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_d0,0,0,0x10);
    local_d0.DelegateSize = 0;
  }
  if (local_90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
  }
  if (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_d0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d8.AccessDetector);
  return;
}

// InsertOperator @ 14ad59980

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::DynamicGraph::InsertOperator
          (ulong64 param_1,FOperatorInfo *param_2,FDynamicGraphOperatorData *param_3)

{
  int iVar1;
  IOperator *pIVar2;
  FScriptContainerElement *pFVar3;
  FOperatorInfo *pFVar4;
  _func___cdecl_void_IOperator_ptr_FResetParams_ptr *p_Var5;
  TTuple<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo> *pTVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulong64 local_res8;
  void *local_48;
  ulong64 local_40;
  IOperator *local_38;
  _func___cdecl_void_IOperator_ptr_FResetParams_ptr *local_30;
  
  pIVar2 = (param_2->Operator).Ptr;
  local_res8 = param_1;
  if (pIVar2 == (IOperator *)0x0) {
    DestructItems<TTuple<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>_>,int>
              ((TTuple<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>_>
                *)(param_2->OutputConnections).Pairs.AllocatorInstance.Data,
               (param_2->OutputConnections).Pairs.ArrayNum);
  }
  else {
    pFVar4 = TSortedMap<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
             ::Find((TSortedMap<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
                     *)&param_3->_padding_,param_1);
    iVar7 = 0;
    if (pFVar4 != (FOperatorInfo *)0x0) {
      if (2 < (byte)LogMetaSound._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
      local_48 = (FScriptContainerElement *)0x0;
      local_40 = 0;
      RemoveOperator(local_res8,(TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)&local_48,
                     param_3);
      if (local_48 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48);
      }
    }
    if (param_2->Ordinal != 0x7fffffff) {
      p_Var5 = (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)
               (**(code **)((longlong)*pIVar2 + 0x38))(pIVar2);
      if (p_Var5 != (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0) {
        uVar9 = (param_3->ExecuteTable).ArrayNum;
        iVar8 = iVar7;
        if (0 < (int)uVar9) {
          do {
            iVar1 = (uVar9 >> 1) + iVar8;
            if (*(int *)((param_3->ExecuteTable).AllocatorInstance.Data + (longlong)iVar1 * 0x20) <=
                param_2->Ordinal) {
              iVar8 = iVar1 + (uVar9 & 1);
            }
            uVar10 = uVar9 >> 1;
            uVar9 = uVar9 >> 1;
          } while (uVar10 != 0);
        }
        local_48 = (void *)CONCAT44(local_48._4_4_,param_2->Ordinal);
        local_40 = local_res8;
        local_38 = pIVar2;
        local_30 = p_Var5;
        TArray<Metasound::DynamicGraph::FExecuteEntry,TSizedDefaultAllocator<32>_>::Insert
                  (&param_3->ExecuteTable,(FExecuteEntry *)&local_48,iVar8);
      }
      p_Var5 = (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)
               (**(code **)((longlong)*pIVar2 + 0x40))(pIVar2);
      if (p_Var5 != (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0) {
        uVar9 = (param_3->PostExecuteTable).ArrayNum;
        iVar8 = iVar7;
        if (0 < (int)uVar9) {
          do {
            iVar1 = (uVar9 >> 1) + iVar8;
            if (*(int *)((param_3->PostExecuteTable).AllocatorInstance.Data + (longlong)iVar1 * 0x20
                        ) <= param_2->Ordinal) {
              iVar8 = iVar1 + (uVar9 & 1);
            }
            uVar10 = uVar9 >> 1;
            uVar9 = uVar9 >> 1;
          } while (uVar10 != 0);
        }
        local_48 = (void *)CONCAT44(local_48._4_4_,param_2->Ordinal);
        local_40 = local_res8;
        local_38 = pIVar2;
        local_30 = p_Var5;
        TArray<Metasound::DynamicGraph::FPostExecuteEntry,TSizedDefaultAllocator<32>_>::Insert
                  (&param_3->PostExecuteTable,(FPostExecuteEntry *)&local_48,iVar8);
      }
      p_Var5 = (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)
               (**(code **)((longlong)*pIVar2 + 0x30))(pIVar2);
      if (p_Var5 != (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0) {
        uVar9 = (param_3->ResetTable).ArrayNum;
        if (0 < (int)uVar9) {
          iVar7 = 0;
          do {
            uVar10 = uVar9 >> 1;
            if (*(int *)((param_3->ResetTable).AllocatorInstance.Data +
                        (longlong)(int)(uVar10 + iVar7) * 0x20) <= param_2->Ordinal) {
              iVar7 = uVar10 + iVar7 + (uVar9 & 1);
            }
            uVar9 = uVar10;
          } while (uVar10 != 0);
        }
        local_48 = (void *)CONCAT44(local_48._4_4_,param_2->Ordinal);
        local_40 = local_res8;
        local_38 = pIVar2;
        local_30 = p_Var5;
        TArray<Metasound::DynamicGraph::FResetEntry,TSizedDefaultAllocator<32>_>::Insert
                  (&param_3->ResetTable,(FResetEntry *)&local_48,iVar7);
      }
    }
    pTVar6 = TSortedMap<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
             ::AllocateMemoryForEmplace<unsigned___int64_const_&>
                       ((TSortedMap<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
                         *)&param_3->_padding_,&local_res8);
    *(ulong64 *)pTVar6 = local_res8;
    DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo::FOperatorInfo
              ((FOperatorInfo *)&pTVar6->field_0x8,param_2);
    DestructItems<TTuple<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>_>,int>
              ((TTuple<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>_>
                *)(param_2->OutputConnections).Pairs.AllocatorInstance.Data,
               (param_2->OutputConnections).Pairs.ArrayNum);
  }
  pFVar3 = (param_2->OutputConnections).Pairs.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FVertexInterfaceData::~FVertexInterfaceData(&param_2->VertexData);
  pIVar2 = (param_2->Operator).Ptr;
  if (pIVar2 != (IOperator *)0x0) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  return;
}

// IsCastable @ 14ad5a600

bool __cdecl Metasound::IsCastable(FName param_1,FName param_2)

{
  FPolyTypeInfo *pFVar1;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`Metasound::FPolyRegistry::Get'::__l2::_dynamic_atexit_destructor_for__Instance__);
    _Init_thread_footer(&::_TSS0);
  }
  while( true ) {
    if (param_1 == (FName)0x0) {
      return false;
    }
    if (param_1 == param_2) {
      return true;
    }
    pFVar1 = TMapBase<FName,Metasound::FPolyTypeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Metasound::FPolyTypeInfo,0>_>
             ::Find((TMapBase<FName,Metasound::FPolyTypeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Metasound::FPolyTypeInfo,0>_>
                     *)&::Instance,param_1);
    if (pFVar1 == (FPolyTypeInfo *)0x0) {
      return false;
    }
    if (pFVar1->bIsPolymorphic == false) break;
    param_1 = pFVar1->BaseTypeName;
  }
  return false;
}

// IsChildOfByName @ 14ad5a6b0

bool __cdecl Metasound::IsChildOfByName(FName param_1,FName param_2)

{
  FPolyTypeInfo *pFVar1;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`Metasound::FPolyRegistry::Get'::__l2::_dynamic_atexit_destructor_for__Instance__);
    _Init_thread_footer(&::_TSS0);
  }
  while( true ) {
    if (param_1 == (FName)0x0) {
      return false;
    }
    if (param_1 == param_2) {
      return true;
    }
    pFVar1 = TMapBase<FName,Metasound::FPolyTypeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Metasound::FPolyTypeInfo,0>_>
             ::Find((TMapBase<FName,Metasound::FPolyTypeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Metasound::FPolyTypeInfo,0>_>
                     *)&::Instance,param_1);
    if (pFVar1 == (FPolyTypeInfo *)0x0) {
      return false;
    }
    if (pFVar1->bIsPolymorphic == false) break;
    param_1 = pFVar1->BaseTypeName;
  }
  return false;
}

// IsInputDestinationValid @ 14ad5a760

bool __cdecl Metasound::GraphLinterPrivate::IsInputDestinationValid(FInputDataDestination *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1->Node != (INode *)0x0) {
    plVar1 = (longlong *)(**(code **)((longlong)*param_1->Node + 0x20))();
    lVar2 = *plVar1;
    lVar3 = (longlong)(int)plVar1[1] * 0x38 + lVar2;
    if (lVar2 != lVar3) {
      do {
        if (*(longlong *)(lVar2 + 8) == (param_1->Vertex)._padding_) {
          return *(longlong *)(lVar2 + 0x10) == (param_1->Vertex)._padding_;
        }
        lVar2 = lVar2 + 0x38;
      } while (lVar2 != lVar3);
    }
  }
  return false;
}

// IsOutputSourceValid @ 14ad5a7c0

bool __cdecl Metasound::GraphLinterPrivate::IsOutputSourceValid(FOutputDataSource *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1->Node != (INode *)0x0) {
    lVar1 = (**(code **)((longlong)*param_1->Node + 0x20))();
    lVar2 = *(longlong *)(lVar1 + 0x20);
    lVar1 = (longlong)*(int *)(lVar1 + 0x28) * 0x20 + lVar2;
    if (lVar2 != lVar1) {
      do {
        if (*(longlong *)(lVar2 + 8) == *(longlong *)&(param_1->Vertex).field_0x8) {
          return *(longlong *)(lVar2 + 0x10) == *(longlong *)&(param_1->Vertex).field_0x10;
        }
        lVar2 = lVar2 + 0x20;
      } while (lVar2 != lVar1);
    }
  }
  return false;
}

// IsSupportedVertexData @ 14ad5a850

bool __cdecl
Metasound::MetasoundVariableNodesPrivate::IsSupportedVertexData
          (IDataReference *param_1,FInputVertexInterfaceData *param_2)

{
  longlong lVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  longlong local_res8;
  
  lVar1 = (**(code **)((longlong)*param_1 + 0x20))();
  FLazyName::Resolve(&VariableNames::InputVariableName);
  pFVar4 = (param_2->Bindings).AllocatorInstance.Data;
  pFVar3 = pFVar4 + (longlong)(param_2->Bindings).ArrayNum * 0x58;
  while( true ) {
    if (pFVar4 == pFVar3) {
      return true;
    }
    if (*(longlong *)(pFVar4 + 8) == local_res8) break;
    pFVar4 = pFVar4 + 0x58;
  }
  pFVar3 = pFVar4 + 0x38;
  if (pFVar4[0x50] == (FScriptContainerElement)0x0) {
    pFVar3 = (FScriptContainerElement *)0x0;
  }
  if (pFVar3 == (FScriptContainerElement *)0x0) {
    return true;
  }
  lVar2 = (**(code **)(*(longlong *)pFVar3 + 0x20))();
  if (lVar2 == 0) {
    return true;
  }
  if (lVar2 == lVar1) {
    return true;
  }
  return false;
}

// KahnTopologicalSort @ 14ad5aa20

bool __cdecl
Metasound::DirectedGraphAlgo::KahnTopologicalSort
          (FDirectedGraphAlgoAdapter *param_1,
          TArray<Metasound::INode_const_*,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_> *pTVar10;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar11;
  int iVar12;
  uint uVar13;
  ForAnyElementType FVar14;
  undefined1 local_res18 [8];
  undefined8 local_88;
  TArray<int,TSizedDefaultAllocator<32>_> local_80;
  TTuple<int,int> *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  FScriptContainerElement *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  TArrayView<TTuple<int,int>_const_,int> local_48;
  TArrayView<int_const_,int> local_38;
  
  local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ArrayNum = 0;
  local_80.ArrayMax = 0;
  pTVar10 = FDirectedGraphAlgoAdapter::GetUniqueEdges(param_1);
  local_68 = (TTuple<int,int> *)(pTVar10->AllocatorInstance).Data;
  iStack_60 = pTVar10->ArrayNum;
  if ((iStack_60 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pTVar11 = FDirectedGraphAlgoAdapter::GetUniqueVertices(param_1);
  local_58 = (pTVar11->AllocatorInstance).Data;
  iStack_50 = pTVar11->ArrayNum;
  if ((iStack_50 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  local_48._12_4_ = uStack_5c;
  local_48.ArrayNum = iStack_60;
  local_38._12_4_ = uStack_4c;
  local_38.ArrayNum = iStack_50;
  local_38.DataPtr = (int *)local_58;
  local_48.DataPtr = local_68;
  bVar5 = UE::MathCore::Graph::KahnTopologicalSort(&local_38,&local_48,&local_80);
  if (bVar5) {
    uVar13 = param_2->ArrayNum + local_80.ArrayNum;
    if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
    }
    piVar1 = &param_2->ArrayMax;
    iVar12 = local_80.ArrayNum;
    if (*piVar1 < (int)uVar13) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar13,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
      iVar12 = local_80.ArrayNum;
    }
    pFVar2 = local_80.AllocatorInstance.Data + (longlong)iVar12 * 4;
    FVar14.Data = local_80.AllocatorInstance.Data;
    iVar9 = iVar12;
    while( true ) {
      if (iVar9 != iVar12) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (FVar14.Data == pFVar2) break;
      uVar13 = *(uint *)FVar14.Data;
      uVar8 = 0;
      if ((int)uVar13 < (param_1->MetasoundUniqueNodes).ArrayNum) {
        uVar8 = ~uVar13 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      local_88 = *(undefined8 *)
                  ((param_1->MetasoundUniqueNodes).AllocatorInstance.Data +
                  (longlong)(int)uVar13 * 8);
      pFVar3 = (param_2->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_88) &&
          ((FScriptContainerElement *)&local_88 < pFVar3 + (longlong)*piVar1 * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      iVar9 = param_2->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_2->AllocatorInstance,piVar1);
      }
      FVar14.Data = FVar14.Data + 4;
      param_2->ArrayNum = iVar9 + 1;
      *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_88;
      iVar9 = local_80.ArrayNum;
    }
  }
  if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.AllocatorInstance.Data);
  }
  return bVar5;
}

// KahnTopologicalSort @ 14ad5acf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
Metasound::DirectedGraphAlgo::KahnTopologicalSort
          (IGraph *param_1,TArray<Metasound::INode_const_*,TSizedDefaultAllocator<32>_> *param_2)

{
  bool bVar1;
  FDirectedGraphAlgoAdapter *pFVar2;
  undefined1 auStack_288 [32];
  FDirectedGraphAlgoAdapter local_268;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_288;
  pFVar2 = FDirectedGraphAlgoAdapter::FDirectedGraphAlgoAdapter(&local_268,param_1);
  bVar1 = KahnTopologicalSort(pFVar2,param_2);
  FDirectedGraphAlgoAdapter::~FDirectedGraphAlgoAdapter(&local_268);
  return bVar1;
}

// LexToString @ 14ad5af00

FString * __cdecl LexToString(FString *__return_storage_ptr__,FLiteral *param_1)

{
  code *pcVar1;
  ELiteralType EVar2;
  bool bVar3;
  TSharedPtr<Audio::IProxyData,1> *pTVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  FName local_res18 [2];
  FString local_28;
  FString local_18;
  
  EVar2 = Metasound::FLiteral::GetType(param_1);
  switch(EVar2) {
  case None:
    pwVar6 = L"NONE";
    break;
  case Boolean:
    if (((param_1->Value).TypeIndex != '\x01') &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar1)();
      return pFVar5;
    }
    FString::PrintfImpl(__return_storage_ptr__,L"Boolean: %s");
    return __return_storage_ptr__;
  case Integer:
    if (((param_1->Value).TypeIndex != '\x02') &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar1)();
      return pFVar5;
    }
    FString::PrintfImpl(__return_storage_ptr__,L"Int32: %d");
    return __return_storage_ptr__;
  case Float:
    if (((param_1->Value).TypeIndex != '\x03') &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar1)();
      return pFVar5;
    }
    FString::PrintfImpl(__return_storage_ptr__,L"Float: %f");
    return __return_storage_ptr__;
  case String:
    if (((param_1->Value).TypeIndex != '\x04') &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar1)();
      return pFVar5;
    }
    FString::PrintfImpl(__return_storage_ptr__,L"String: %s");
    return __return_storage_ptr__;
  case UObjectProxy:
    FString::FString(&local_28,L"nullptr");
    pTVar4 = TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
             ::Get<TSharedPtr<Audio::IProxyData,1>_>(&param_1->Value);
    if (pTVar4->Object != (IProxyData *)0x0) {
      pTVar4 = TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
               ::Get<TSharedPtr<Audio::IProxyData,1>_>(&param_1->Value);
      if ((pTVar4->Object == (IProxyData *)0x0) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FString *)(*pcVar1)();
        return pFVar5;
      }
      local_res18[0] = pTVar4->Object->ProxyTypeName;
      pFVar5 = FName::ToString(local_res18,&local_18);
      if (&local_28 != pFVar5) {
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        local_28.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
        (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_28.Data.ArrayNum = (pFVar5->Data).ArrayNum;
        local_28.Data.ArrayMax = (pFVar5->Data).ArrayMax;
        (pFVar5->Data).ArrayNum = 0;
        (pFVar5->Data).ArrayMax = 0;
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    FString::PrintfImpl(__return_storage_ptr__,L"TSharedPtr<Audio::IProxyData>: %s");
    if (local_28.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return __return_storage_ptr__;
    }
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
    return __return_storage_ptr__;
  case NoneArray:
    pwVar6 = L"TArray<NONE>";
    break;
  case BooleanArray:
    pwVar6 = L"TArray<Boolean>";
    break;
  case IntegerArray:
    pwVar6 = L"TArray<int32>";
    break;
  case FloatArray:
    pwVar6 = L"TArray<float>";
    break;
  case StringArray:
    pwVar6 = L"TArray<FString>";
    break;
  case UObjectProxyArray:
    pwVar6 = L"TArray<TSharedPtr<Audio::IProxyData>>";
    break;
  default:
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundLiteral.cpp"
                       ,0xb5,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar1)();
      return pFVar5;
    }
  case Invalid:
    pwVar6 = L"INVALID";
  }
  FString::FString(__return_storage_ptr__,pwVar6);
  return __return_storage_ptr__;
}

// LexToString @ 14ad5b280

FString * __cdecl LexToString(FString *__return_storage_ptr__,EDataReferenceAccessType param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  if (param_1 == None) {
    FString::FString(__return_storage_ptr__,L"None");
    return __return_storage_ptr__;
  }
  if (param_1 == Read) {
    FString::FString(__return_storage_ptr__,L"Read");
    return __return_storage_ptr__;
  }
  if (param_1 == Write) {
    FString::FString(__return_storage_ptr__,L"Write");
    return __return_storage_ptr__;
  }
  if (param_1 != Value) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDataReference.cpp"
                       ,0x33,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
    FString::FString(__return_storage_ptr__,L"");
    return __return_storage_ptr__;
  }
  FString::FString(__return_storage_ptr__,L"Value");
  return __return_storage_ptr__;
}

// LexToString @ 14ad5b350

FString * __cdecl LexToString(FString *__return_storage_ptr__,EVertexAccessType param_1)

{
  wchar_t *pwVar1;
  
  if ((param_1 == Reference) || (pwVar1 = L"Value", param_1 != Value)) {
    pwVar1 = L"Reference";
  }
  FString::FString(__return_storage_ptr__,pwVar1);
  return __return_storage_ptr__;
}

// LexToString @ 14ad5b390

wchar_t * __cdecl Metasound::DynamicGraph::LexToString(EDynamicOperatorTransformQueueAction param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (param_1 == Continue) {
    return L"Continue";
  }
  if (param_1 != Fence) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicOperator.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pwVar3 = (wchar_t *)(*pcVar1)();
      return pwVar3;
    }
    return L"Unhandled";
  }
  return L"Fence";
}

// OperatorShouldBeProfiled @ 14ad5b5a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl Metasound::Profiling::OperatorShouldBeProfiled(FNodeClassMetadata *param_1)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  bool bVar4;
  ForAnyElementType FVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  FString local_18;
  
  bVar7 = false;
  if (ProfilingNodeFilter.ArrayNum == 0) {
LAB_14ad5b631:
    bVar4 = true;
  }
  else {
    pFVar3 = ::FName::ToString(&(param_1->ClassName).Name,&local_18);
    pFVar6 = ProfilingNodeFilter.AllocatorInstance.Data +
             (longlong)ProfilingNodeFilter.ArrayNum * 0x10;
    for (FVar5 = ProfilingNodeFilter.AllocatorInstance; FVar5.Data != pFVar6;
        FVar5.Data = FVar5.Data + 0x10) {
      iVar2 = *(int *)(FVar5.Data + 8);
      iVar1 = (pFVar3->Data).ArrayNum;
      if (iVar2 == iVar1) {
        if (1 < iVar2) {
          iVar2 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)FVar5.Data,
                             (wchar_t *)(pFVar3->Data).AllocatorInstance.Data);
          bVar7 = iVar2 == 0;
          goto LAB_14ad5b613;
        }
LAB_14ad5b62c:
        bVar7 = true;
        goto LAB_14ad5b631;
      }
      bVar7 = iVar1 + iVar2 == 1;
LAB_14ad5b613:
      if (bVar7) goto LAB_14ad5b62c;
    }
    bVar4 = false;
    bVar7 = true;
  }
  if ((bVar7) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar4;
}

// ProfileAllGraphs @ 14ad5bc80

bool __cdecl Metasound::Profiling::ProfileAllGraphs(void)

{
  return ProfileAllEnabled != 0;
}

// PropagateBindUpdate @ 14ad5bca0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::DynamicGraph::PropagateBindUpdate
          (ulong64 param_1,FName *param_2,FAnyDataReference *param_3,
          FDynamicGraphOperatorData *param_4)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  EDataReferenceAccessType EVar3;
  IDataReference *pIVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  code *pcVar7;
  int iVar8;
  TTuple<FName,Metasound::FAnyDataReference> *pTVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  ulong64 *puVar17;
  int iVar18;
  FOperatorInfo *pFVar19;
  ForAnyElementType FVar20;
  FNameFastLess FVar21;
  ulong64 *puVar22;
  bool bVar23;
  FNameFastLess FVar24;
  FNameFastLess local_res8;
  ForAnyElementType local_130;
  undefined8 local_128;
  undefined1 local_120;
  undefined1 local_11f [3];
  uint local_11c;
  TSortedMap<FName,Metasound::FAnyDataReference,TSizedDefaultAllocator<32>,FNameFastLess> local_118;
  FOperatorInfo *local_108;
  TTuple<FName,Metasound::FAnyDataReference> *local_100;
  TArray<Metasound::FVertexDataState,TSizedDefaultAllocator<32>_> local_f8;
  TTuple<FName,Metasound::FAnyDataReference> *local_e8;
  FInputToUpdate local_e0;
  ulong64 local_b8;
  FName local_b0;
  undefined **local_a8;
  EDataReferenceAccessType local_a0;
  IDataReference *local_98;
  ulonglong local_90;
  FName local_88;
  FAnyDataReference local_80;
  FName local_68;
  FString local_60 [2];
  
  iVar8 = GCycleStatsShouldEmitNamedEvents;
  if (0 < GCycleStatsShouldEmitNamedEvents) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::DynamicGraphAlgo::PropagateBindUpdate");
  }
  bVar23 = -1 < CpuChannel->Enabled;
  if (bVar23) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId235,"Metasound::DynamicGraphAlgo::PropagateBindUpdate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicGraphAlgo.cpp"
               ,0xeb);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId235);
  }
  local_b0 = *param_2;
  pIVar4 = (param_3->DataRefPtr).Ptr;
  EVar3 = param_3->AccessType;
  local_130.Data = (FScriptContainerElement *)0x0;
  local_128 = 0;
  local_a8 = &___7FAnyDataReference_Metasound__6B_;
  local_b8 = param_1;
  local_a0 = EVar3;
  (**(code **)((longlong)*pIVar4 + 0x18))(pIVar4,&local_98);
  if ((local_98 == (IDataReference *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("DataRefPtr.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                          ,0x30e,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((EVar3 == None) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("EDataReferenceAccessType::None != InAccessType",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                          ,0x30f,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_a8 = &___7FAnyDataReference_Metasound__6B_;
  iVar11 = (int)local_128;
  if ((int)local_128 == local_128._4_4_) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x828,&local_130,(int *)((longlong)&local_128 + 4));
  }
  local_128 = CONCAT44(local_128._4_4_,iVar11 + 1);
  pFVar1 = local_130.Data + (longlong)iVar11 * 0x28;
  *(ulong64 *)&pFVar1->field_0x0 = local_b8;
  *(FName *)(pFVar1 + 8) = local_b0;
  FAnyDataReference::FAnyDataReference((FAnyDataReference *)(pFVar1 + 0x10),local_a0,local_98);
  ((FAnyDataReference *)(pFVar1 + 0x10))->_padding_ =
       (longlong)&___7FAnyDataReference_Metasound__6B_;
  if (local_98 != (IDataReference *)0x0) {
    (**(code **)*local_98)(local_98,1);
  }
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  local_118.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.Pairs.ArrayNum = 0;
  local_118.Pairs.ArrayMax = 0;
  iVar11 = GCycleStatsShouldEmitNamedEvents;
  FVar21 = local_res8;
  do {
    GCycleStatsShouldEmitNamedEvents = iVar11;
    if ((int)local_128 == 0) {
      DestructItems<TTuple<FName,Metasound::FAnyDataReference>,int>
                ((TTuple<FName,Metasound::FAnyDataReference> *)
                 local_118.Pairs.AllocatorInstance.Data,local_118.Pairs.ArrayNum);
      if ((TTuple<FName,Metasound::FAnyDataReference> *)local_118.Pairs.AllocatorInstance.Data !=
          (TTuple<FName,Metasound::FAnyDataReference> *)0x0) {
        FMemory::Free(local_118.Pairs.AllocatorInstance.Data);
      }
      if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.AllocatorInstance.Data);
      }
      DestructItems<_Metasound::DynamicGraph::PropagateBindUpdate_::__l2::FInputToUpdate,int>
                ((FInputToUpdate *)local_130.Data,(int)local_128);
      if ((FInputToUpdate *)local_130.Data != (FInputToUpdate *)0x0) {
        FMemory::Free(local_130.Data);
      }
      if (bVar23) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (0 < iVar8) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      return;
    }
    if (0 < iVar11) {
      FGenericPlatformMisc::BeginNamedEvent
                (&FColor::Green,"Metasound::DynamicGraphAlgo::PropagateBindUpdate_Iteration");
    }
    FVar24 = (FNameFastLess)(-1 < CpuChannel->Enabled);
    if ((bool)FVar24) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId251,
                 "Metasound::DynamicGraphAlgo::PropagateBindUpdate_Iteration",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicGraphAlgo.cpp"
                 ,0xfb);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId251);
    }
    if ((int)local_128 < 1) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    lVar14 = (longlong)(int)local_128;
    local_90 = *(ulonglong *)&local_130.Data[lVar14 * 0x28 + -0x28].field_0x0;
    local_88 = *(FName *)(local_130.Data + lVar14 * 0x28 + -0x20);
    FAnyDataReference::FAnyDataReference
              (&local_80,(EDataReferenceAccessType)local_130.Data[lVar14 * 0x28 + -0x10],
               *(IDataReference **)&local_130.Data[lVar14 * 0x28 + -8].field_0x0);
    local_80._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
    local_11c = (int)local_128 + -1;
    pFVar1 = local_130.Data + (longlong)(int)local_11c * 0x28;
    puVar5 = *(undefined8 **)(local_130.Data + (longlong)(int)local_11c * 0x28 + 0x20);
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,1);
    }
    iVar12 = ((int)local_128 - local_11c) + -1;
    iVar18 = (int)local_128;
    if (iVar12 != 0) {
      memmove(pFVar1,pFVar1 + 0x28,(longlong)iVar12 * 0x28);
      iVar18 = (int)local_128;
    }
    local_128 = CONCAT44(local_128._4_4_,iVar18 + -1);
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,&local_130,iVar18 + -1,(int *)((longlong)&local_128 + 4));
    iVar18 = 0;
    local_11c = (uint)param_4->_padding_;
    uVar13 = local_11c;
    if (0 < (int)local_11c) {
      do {
        iVar12 = (uVar13 >> 1) + iVar18;
        if (*(ulonglong *)((longlong)iVar12 * 0x78 + param_4->_padding_) < local_90) {
          iVar18 = (uVar13 & 1) + iVar12;
        }
        uVar15 = uVar13 >> 1;
        uVar13 = uVar13 >> 1;
      } while (uVar15 != 0);
    }
    if (((iVar18 < (int)local_11c) &&
        (local_e8 = (TTuple<FName,Metasound::FAnyDataReference> *)((longlong)iVar18 * 0x78),
        *(ulonglong *)((longlong)&local_e8->field_0x0 + param_4->_padding_) <= local_90)) &&
       (iVar18 != -1)) {
      if ((iVar18 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar19 = (FOperatorInfo *)(&local_e8->field_0x8 + param_4->_padding_);
      local_108 = pFVar19;
      if (pFVar19 == (FOperatorInfo *)0x0) goto LAB_14ad5c4c3;
      local_100 = (TTuple<FName,Metasound::FAnyDataReference> *)(pFVar19->Operator).Ptr;
      iVar18 = local_f8.ArrayMax;
      if ((longlong)local_f8._8_8_ < 0) {
        local_f8._8_8_ = (ulonglong)(uint)local_f8.ArrayMax << 0x20;
        if (iVar18 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,&local_f8.AllocatorInstance,0,&local_f8.ArrayMax);
        }
      }
      else {
        local_f8._8_8_ = (ulonglong)(uint)local_f8.ArrayMax << 0x20;
      }
      GetVertexInterfaceDataState(&(pFVar19->VertexData).OutputVertexInterfaceData,&local_f8);
      VertexDataPrivate::SetVertex<Metasound::VertexDataPrivate::FInputBinding>
                ((pFVar19->VertexData).InputVertexInterfaceData.bIsVertexInterfaceFrozen,
                 &(pFVar19->VertexData).InputVertexInterfaceData.Bindings,&local_88,&local_80);
      pTVar9 = local_100;
      (**(code **)((longlong)*(IOperator *)local_100 + 0x20))(local_100,&pFVar19->VertexData);
      (**(code **)((longlong)*(IOperator *)pTVar9 + 0x28))
                (pTVar9,&(local_108->VertexData).OutputVertexInterfaceData);
      pFVar19 = local_108;
      DynamicGraphAlgoPrivate::UpdateGraphRuntimeTableEntries(&local_90,local_108,param_4);
      if ((longlong)local_118.Pairs._8_8_ < 0) {
        DestructItems<TTuple<FName,Metasound::FAnyDataReference>,int>
                  ((TTuple<FName,Metasound::FAnyDataReference> *)
                   local_118.Pairs.AllocatorInstance.Data,local_118.Pairs.ArrayNum);
        iVar18 = local_118.Pairs.ArrayMax;
        local_118.Pairs._8_8_ = local_118.Pairs._8_8_ & 0xffffffff00000000;
        if (iVar18 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,0,(ForAnyElementType *)&local_118,0,&local_118.Pairs.ArrayMax);
        }
      }
      else {
        DestructItems<TTuple<FName,Metasound::FAnyDataReference>,int>
                  ((TTuple<FName,Metasound::FAnyDataReference> *)
                   local_118.Pairs.AllocatorInstance.Data,local_118.Pairs.ArrayNum);
        local_118.Pairs._8_8_ = local_118.Pairs._8_8_ & 0xffffffff00000000;
      }
      CompareVertexInterfaceDataToPriorState
                (&(pFVar19->VertexData).OutputVertexInterfaceData,&local_f8,&local_118);
      uVar16 = (ulonglong)local_118.Pairs.ArrayNum;
      local_e8 = (TTuple<FName,Metasound::FAnyDataReference> *)
                 (local_118.Pairs.AllocatorInstance.Data + uVar16 * 0x20);
      local_11c = local_118.Pairs.ArrayNum;
      FVar20.Data = local_118.Pairs.AllocatorInstance.Data;
      while( true ) {
        local_100 = (TTuple<FName,Metasound::FAnyDataReference> *)FVar20.Data;
        if (local_118.Pairs.ArrayNum != (int)uVar16) {
          local_120 = 0;
          `TCheckedPointerIterator<TTuple<FName,Metasound::FAnyDataReference>,int,0>::operator!='::
          __l2::<lambda_1>::operator()(&local_120);
        }
        if ((TTuple<FName,Metasound::FAnyDataReference> *)FVar20.Data == local_e8) break;
        local_68.ComparisonIndex.Value =
             *(uint *)&((TTuple<FName,Metasound::FAnyDataReference> *)FVar20.Data)->field_0x0;
        local_68.Number =
             *(uint *)&((TTuple<FName,Metasound::FAnyDataReference> *)FVar20.Data)->field_0x4;
        uVar13 = Algo::
                 BinarySearchBy<TArray<TTuple<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>,FName,TSortedMap<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
                           (&(local_108->OutputConnections).Pairs,&local_68,(FKeyForward)FVar21,
                            local_res8);
        lVar14 = (longlong)(int)uVar13;
        if (uVar13 != 0xffffffff) {
          uVar15 = 0;
          if ((int)uVar13 < (local_108->OutputConnections).Pairs.ArrayNum) {
            uVar15 = ~uVar13 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pTVar9 = local_100;
          pFVar1 = (local_108->OutputConnections).Pairs.AllocatorInstance.Data;
          if (pFVar1 + lVar14 * 0x18 + 8 != (FScriptContainerElement *)0x0) {
            iVar18 = *(int *)(pFVar1 + lVar14 * 0x18 + 0x10);
            puVar17 = *(ulong64 **)(pFVar1 + lVar14 * 0x18 + 8);
            puVar22 = puVar17 + (longlong)iVar18 * 2;
            while( true ) {
              if (*(int *)(pFVar1 + lVar14 * 0x18 + 0x10) != iVar18) {
                local_11f[0] = 0;
                `TCheckedPointerIterator<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination_const_,int,0>
                ::operator!='::__l2::<lambda_1>::operator()(local_11f);
              }
              local_res8 = FVar24;
              FVar21 = FVar24;
              if (puVar17 == puVar22) break;
              local_e0.OperatorID = *puVar17;
              plVar6 = *(longlong **)&pTVar9->field_0x18;
              EVar3 = pTVar9->field_0x10;
              local_e0.VertexName = *(FName *)(puVar17 + 1);
              local_e0.DataReference._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
              local_e0.DataReference.AccessType = EVar3;
              (**(code **)(*plVar6 + 0x18))(plVar6,&local_e0.DataReference.DataRefPtr);
              if ((local_e0.DataReference.DataRefPtr.Ptr == (IDataReference *)0x0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("DataRefPtr.IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                                      ,0x30e,L""), bVar10)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              if ((EVar3 == None) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("EDataReferenceAccessType::None != InAccessType",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                                      ,0x30f,L""), bVar10)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              local_e0.DataReference._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
              if (((local_130.Data <= &local_e0) &&
                  (&local_e0 < (FInputToUpdate *)(local_130.Data + (longlong)local_128._4_4_ * 0x28)
                  )) && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x7a5,
                                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                            ), bVar10)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              iVar12 = (int)local_128;
              if ((int)local_128 == local_128._4_4_) {
                iVar12 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x828,&local_130,(int *)((longlong)&local_128 + 4));
              }
              local_128 = CONCAT44(local_128._4_4_,iVar12 + 1);
              pFVar2 = local_130.Data + (longlong)iVar12 * 0x28;
              *(ulong64 *)&pFVar2->field_0x0 = local_e0.OperatorID;
              *(FName *)(pFVar2 + 8) = local_e0.VertexName;
              FAnyDataReference::FAnyDataReference
                        ((FAnyDataReference *)(pFVar2 + 0x10),local_e0.DataReference.AccessType,
                         local_e0.DataReference.DataRefPtr.Ptr);
              ((FAnyDataReference *)(pFVar2 + 0x10))->_padding_ =
                   (longlong)&___7FAnyDataReference_Metasound__6B_;
              if (local_e0.DataReference.DataRefPtr.Ptr != (IDataReference *)0x0) {
                (**(code **)*local_e0.DataReference.DataRefPtr.Ptr)
                          (local_e0.DataReference.DataRefPtr.Ptr,1);
              }
              puVar17 = puVar17 + 2;
            }
          }
        }
        FVar20.Data = (FScriptContainerElement *)(local_100 + 1);
        uVar16 = (ulonglong)local_11c;
      }
    }
    else {
LAB_14ad5c4c3:
      if (1 < (byte)LogMetaSound._0_1_) {
        ::FString::PrintfImpl(local_60,L"%llu");
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
        }
      }
    }
    if (local_80.DataRefPtr.Ptr != (IDataReference *)0x0) {
      (**(code **)*local_80.DataRefPtr.Ptr)(local_80.DataRefPtr.Ptr,1);
    }
    if ((bool)FVar24) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (0 < iVar11) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    iVar11 = GCycleStatsShouldEmitNamedEvents;
  } while( true );
}

// RebindGraphInputs @ 14ad5cee0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::DynamicGraph::RebindGraphInputs
          (FInputVertexInterfaceData *param_1,FDynamicGraphOperatorData *param_2)

{
  int iVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  TTuple<FName,Metasound::FAnyDataReference> *pTVar8;
  uint uVar9;
  ulong64 *puVar10;
  ForAnyElementType FVar11;
  FName FVar12;
  FName FVar13;
  FName *pFVar14;
  FScriptContainerElement *pFVar15;
  ForAnyElementType FVar16;
  longlong *plVar17;
  bool bVar18;
  FKeyForward local_res10;
  undefined1 local_res20 [8];
  undefined1 local_98;
  undefined1 local_97 [7];
  FName local_90;
  FName local_88;
  TSortedMap<FName,Metasound::FAnyDataReference,TSizedDefaultAllocator<32>,FNameFastLess> local_80;
  TArray<Metasound::FVertexDataState,TSizedDefaultAllocator<32>_> local_70;
  FString local_60 [2];
  
  bVar2 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar2) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::DynamicGraphAlgo::RebindGraphInputs");
  }
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId455,"Metasound::DynamicGraphAlgo::RebindGraphInputs",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicGraphAlgo.cpp"
               ,0x1c7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId455);
  }
  local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.ArrayNum = 0;
  local_70.ArrayMax = 0;
  GetVertexInterfaceDataState((FInputVertexInterfaceData *)&param_2->_padding_,&local_70);
  FVar16.Data = (FScriptContainerElement *)&param_2->_padding_;
  local_60[0].Data.AllocatorInstance.Data = FVar16.Data;
  VertexDataPrivate::Bind<Metasound::VertexDataPrivate::FInputBinding>
            (param_1->bIsVertexInterfaceFrozen,&param_1->Bindings,
             (TArray<Metasound::VertexDataPrivate::FInputBinding,TSizedDefaultAllocator<32>_> *)
             FVar16.Data);
  FVar12 = *(FName *)FVar16.Data;
  local_80.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.Pairs.ArrayNum = 0;
  local_80.Pairs.ArrayMax = 0;
  iVar1 = (int)param_2->_padding_;
  plVar17 = (longlong *)((longlong)FVar12 + 0x38);
  FVar13 = (FName)((longlong)iVar1 * 0x58 + (longlong)FVar12);
  local_88 = FVar13;
  while( true ) {
    local_90 = FVar12;
    if (*(int *)(FVar16.Data + 8) != iVar1) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<Metasound::VertexDataPrivate::FInputBinding_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (FVar12 == FVar13) break;
    if (((char)plVar17[3] != '\0') && (plVar17 != (longlong *)0x0)) {
      iVar4 = local_70.ArrayNum;
      pFVar15 = local_70.AllocatorInstance.Data + (longlong)local_70.ArrayNum * 0x10;
      FVar11.Data = local_70.AllocatorInstance.Data;
      while( true ) {
        if (local_70.ArrayNum != iVar4) {
          local_98 = 0;
          `TCheckedPointerIterator<Metasound::FVertexDataState_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_98);
        }
        if (FVar11.Data == pFVar15) goto LAB_14ad5d05a;
        if (*(longlong *)FVar11.Data == plVar17[-6]) break;
        FVar11.Data = FVar11.Data + 0x10;
      }
      if ((char)plVar17[3] == '\0') {
        lVar7 = 0;
      }
      else {
        lVar7 = (**(code **)(*plVar17 + 0x20))(plVar17);
      }
      FVar12 = local_90;
      FVar13 = local_88;
      FVar16.Data = local_60[0].Data.AllocatorInstance.Data;
      if (*(longlong *)(FVar11.Data + 8) != lVar7) {
LAB_14ad5d05a:
        pFVar14 = (FName *)(plVar17 + -6);
        pTVar8 = TSortedMap<FName,Metasound::FAnyDataReference,TSizedDefaultAllocator<32>,FNameFastLess>
                 ::AllocateMemoryForEmplace<FName_const_&>(&local_80,pFVar14);
        uVar6 = pFVar14->Number;
        *(uint *)&pTVar8->field_0x0 = (pFVar14->ComparisonIndex).Value;
        *(uint *)&pTVar8->field_0x4 = uVar6;
        FAnyDataReference::FAnyDataReference
                  ((FAnyDataReference *)&pTVar8->field_0x8,
                   *(EDataReferenceAccessType *)(plVar17 + 1),(IDataReference *)plVar17[2]);
        *(undefined ***)&pTVar8->field_0x8 = &___7FAnyDataReference_Metasound__6B_;
        FVar12 = local_90;
        FVar13 = local_88;
        FVar16.Data = local_60[0].Data.AllocatorInstance.Data;
      }
    }
    FVar12 = (FName)((longlong)FVar12 + 0x58);
    plVar17 = plVar17 + 0xb;
  }
  iVar1 = local_80.Pairs.ArrayNum;
  if (0 < local_80.Pairs.ArrayNum) {
    local_res10 = SUB81(param_2,0);
    pTVar8 = (TTuple<FName,Metasound::FAnyDataReference> *)
             (local_80.Pairs.AllocatorInstance.Data + (longlong)local_80.Pairs.ArrayNum * 0x20);
    FVar16.Data = local_80.Pairs.AllocatorInstance.Data;
    while( true ) {
      if (local_80.Pairs.ArrayNum != iVar1) {
        local_97[0] = 0;
        `TCheckedPointerIterator<TTuple<FName,Metasound::FAnyDataReference>,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_97);
      }
      if ((TTuple<FName,Metasound::FAnyDataReference> *)FVar16.Data == pTVar8) break;
      local_88.ComparisonIndex.Value =
           *(uint *)&((TTuple<FName,Metasound::FAnyDataReference> *)FVar16.Data)->field_0x0;
      local_88.Number =
           *(uint *)&((TTuple<FName,Metasound::FAnyDataReference> *)FVar16.Data)->field_0x4;
      uVar6 = Algo::
              BinarySearchBy<TArray<TTuple<FName,unsigned___int64>,TSizedDefaultAllocator<32>_>,FName,TSortedMap<FName,unsigned___int64,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
                        ((TArray<TTuple<FName,unsigned___int64>,TSizedDefaultAllocator<32>_> *)
                         &param_2->_padding_,&local_88,local_res10,(FNameFastLess)local_res10);
      if (uVar6 == 0xffffffff) {
LAB_14ad5d189:
        if (1 < (byte)LogMetaSound._0_1_) {
          ::FName::ToString((FName *)FVar16.Data,local_60);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
          if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
          }
        }
        FVar16.Data = FVar16.Data + 0x20;
      }
      else {
        uVar9 = 0;
        if ((int)uVar6 < (int)param_2->_padding_) {
          uVar9 = ~uVar6 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        puVar10 = (ulong64 *)((longlong)(int)uVar6 * 0x10 + 8 + param_2->_padding_);
        if (puVar10 == (ulong64 *)0x0) goto LAB_14ad5d189;
        PropagateBindUpdate(*puVar10,(FName *)FVar16.Data,
                            (FAnyDataReference *)
                            &((TTuple<FName,Metasound::FAnyDataReference> *)FVar16.Data)->field_0x8,
                            param_2);
        FVar16.Data = FVar16.Data + 0x20;
      }
    }
    UpdateOutputVertexData(param_2);
  }
  DestructItems<TTuple<FName,Metasound::FAnyDataReference>,int>
            ((TTuple<FName,Metasound::FAnyDataReference> *)local_80.Pairs.AllocatorInstance.Data,
             local_80.Pairs.ArrayNum);
  if ((TTuple<FName,Metasound::FAnyDataReference> *)local_80.Pairs.AllocatorInstance.Data !=
      (TTuple<FName,Metasound::FAnyDataReference> *)0x0) {
    FMemory::Free(local_80.Pairs.AllocatorInstance.Data);
  }
  if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.AllocatorInstance.Data);
  }
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar2) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return;
}

// RebindGraphOutputs @ 14ad5d250

void __cdecl
Metasound::DynamicGraph::RebindGraphOutputs
          (FOutputVertexInterfaceData *param_1,FDynamicGraphOperatorData *param_2)

{
  bool bVar1;
  
  bVar1 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar1) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::DynamicGraphAlgo::RebindGraphOutputs");
  }
  if (CpuChannel->Enabled < 0) {
    VertexDataPrivate::Bind<Metasound::VertexDataPrivate::FOutputBinding>
              (param_1->bIsVertexInterfaceFrozen,&param_1->Bindings,
               (TArray<Metasound::VertexDataPrivate::FOutputBinding,TSizedDefaultAllocator<32>_> *)
               &param_2->_padding_);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId496,"Metasound::DynamicGraphAlgo::RebindGraphOutputs",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicGraphAlgo.cpp"
               ,0x1f0);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId496);
    VertexDataPrivate::Bind<Metasound::VertexDataPrivate::FOutputBinding>
              (param_1->bIsVertexInterfaceFrozen,&param_1->Bindings,
               (TArray<Metasound::VertexDataPrivate::FOutputBinding,TSizedDefaultAllocator<32>_> *)
               &param_2->_padding_);
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar1) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return;
}

// RebindWrappedOperator @ 14ad5d310

void __cdecl
Metasound::DynamicGraph::RebindWrappedOperator
          (ulong64 *param_1,FOperatorInfo *param_2,FDynamicGraphOperatorData *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  IOperator *pIVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  FKeyForward FVar11;
  TTuple<FName,Metasound::FAnyDataReference> *pTVar12;
  ForAnyElementType FVar13;
  ulong64 *puVar14;
  ulong64 *puVar15;
  bool bVar16;
  undefined1 local_67;
  undefined1 local_66 [6];
  FName local_60;
  TSortedMap<FName,Metasound::FAnyDataReference,TSizedDefaultAllocator<32>,FNameFastLess> local_58;
  TArray<Metasound::FVertexDataState,TSizedDefaultAllocator<32>_> local_48;
  
  if (((param_2->Operator).Ptr == (IOperator *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InOperatorInfo.Operator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicGraphAlgo.cpp"
                         ,0x198,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar6 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar6) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::DynamicGraphAlgo::RebindWrappedOperator");
  }
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId409,"Metasound::DynamicGraphAlgo::RebindWrappedOperator",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicGraphAlgo.cpp"
               ,0x199);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId409);
  }
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  GetVertexInterfaceDataState(&(param_2->VertexData).OutputVertexInterfaceData,&local_48);
  pIVar3 = (param_2->Operator).Ptr;
  (**(code **)((longlong)*pIVar3 + 0x20))(pIVar3,&param_2->VertexData);
  pIVar3 = (param_2->Operator).Ptr;
  (**(code **)((longlong)*pIVar3 + 0x28))(pIVar3,&(param_2->VertexData).OutputVertexInterfaceData);
  DynamicGraphAlgoPrivate::UpdateGraphRuntimeTableEntries(param_1,param_2,param_3);
  local_58.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Pairs.ArrayNum = 0;
  local_58.Pairs.ArrayMax = 0;
  CompareVertexInterfaceDataToPriorState
            (&(param_2->VertexData).OutputVertexInterfaceData,&local_48,&local_58);
  uVar5 = local_58.Pairs._8_8_;
  uVar9 = (ulonglong)local_58.Pairs.ArrayNum;
  pTVar12 = (TTuple<FName,Metasound::FAnyDataReference> *)
            (local_58.Pairs.AllocatorInstance.Data + uVar9 * 0x20);
  FVar13.Data = local_58.Pairs.AllocatorInstance.Data;
  do {
    FVar11 = SUB81(uVar5,0);
    if (local_58.Pairs.ArrayNum != (int)uVar9) {
      local_67 = 0;
      `TCheckedPointerIterator<TTuple<FName,Metasound::FAnyDataReference>,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(&local_67);
    }
    if ((TTuple<FName,Metasound::FAnyDataReference> *)FVar13.Data == pTVar12) {
      UpdateOutputVertexData(param_3);
      DestructItems<TTuple<FName,Metasound::FAnyDataReference>,int>
                ((TTuple<FName,Metasound::FAnyDataReference> *)local_58.Pairs.AllocatorInstance.Data
                 ,local_58.Pairs.ArrayNum);
      if ((TTuple<FName,Metasound::FAnyDataReference> *)local_58.Pairs.AllocatorInstance.Data !=
          (TTuple<FName,Metasound::FAnyDataReference> *)0x0) {
        FMemory::Free(local_58.Pairs.AllocatorInstance.Data);
      }
      if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
      }
      if (bVar16) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar6) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      return;
    }
    local_60.ComparisonIndex.Value =
         *(uint *)&((TTuple<FName,Metasound::FAnyDataReference> *)FVar13.Data)->field_0x0;
    local_60.Number =
         *(uint *)&((TTuple<FName,Metasound::FAnyDataReference> *)FVar13.Data)->field_0x4;
    uVar8 = Algo::
            BinarySearchBy<TArray<TTuple<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>,FName,TSortedMap<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
                      (&(param_2->OutputConnections).Pairs,&local_60,FVar11,(FNameFastLess)FVar11);
    if (uVar8 != 0xffffffff) {
      uVar10 = 0;
      if ((int)uVar8 < (param_2->OutputConnections).Pairs.ArrayNum) {
        uVar10 = ~uVar8 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar1 = (param_2->OutputConnections).Pairs.AllocatorInstance.Data +
               ((longlong)(int)uVar8 * 3 + 1) * 8;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        iVar2 = *(int *)(pFVar1 + 8);
        puVar14 = *(ulong64 **)pFVar1;
        puVar15 = puVar14 + (longlong)iVar2 * 2;
        while( true ) {
          if (*(int *)(pFVar1 + 8) != iVar2) {
            local_66[0] = 0;
            `TCheckedPointerIterator<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination_const_,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_66);
          }
          if (puVar14 == puVar15) break;
          PropagateBindUpdate(*puVar14,(FName *)(puVar14 + 1),
                              (FAnyDataReference *)
                              &((TTuple<FName,Metasound::FAnyDataReference> *)FVar13.Data)->
                               field_0x8,param_3);
          puVar14 = puVar14 + 2;
        }
      }
    }
    uVar9 = uVar5 & 0xffffffff;
    FVar13.Data = FVar13.Data + 0x20;
  } while( true );
}

// RemoveOperator @ 14ad60f80

void __cdecl
Metasound::DynamicGraph::RemoveOperator
          (ulong64 param_1,TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_2,
          FDynamicGraphOperatorData *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  int *piVar11;
  longlong *plVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  int iVar18;
  longlong lVar19;
  undefined1 local_res20 [8];
  undefined1 local_78 [4];
  uint local_74;
  uint local_70;
  FScriptContainerElement *local_68;
  FScriptContainerElement *local_60;
  longlong local_58;
  longlong *local_50;
  FScriptContainerElement *local_48;
  
  pFVar14 = (param_2->AllocatorInstance).Data;
  plVar12 = &param_3->_padding_;
  local_70 = param_2->ArrayNum;
  uVar7 = (ulonglong)(int)local_70;
  local_48 = pFVar14 + uVar7 * 8;
  local_50 = plVar12;
  while( true ) {
    pFVar17 = local_48;
    local_68 = pFVar14;
    if (param_2->ArrayNum != (int)uVar7) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<unsigned___int64_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (pFVar14 == pFVar17) break;
    uVar8 = (uint)plVar12[1];
    iVar6 = 0;
    iVar18 = 0;
    uVar5 = uVar8;
    if (0 < (int)uVar8) {
      do {
        uVar16 = uVar5 >> 1;
        iVar18 = iVar6;
        if (*(ulonglong *)
             ((FScriptContainerElement *)*plVar12 + (longlong)(int)(uVar16 + iVar6) * 0x78) <
            *(ulonglong *)pFVar14) {
          iVar18 = uVar16 + iVar6 + (uVar5 & 1);
        }
        uVar5 = uVar16;
        iVar6 = iVar18;
      } while (uVar16 != 0);
    }
    if (((iVar18 < (int)uVar8) &&
        (*(ulonglong *)((FScriptContainerElement *)*plVar12 + (longlong)iVar18 * 0x78) <=
         *(ulonglong *)pFVar14)) && (iVar18 != -1)) {
      if ((iVar18 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar17 = (FScriptContainerElement *)*plVar12 + (longlong)iVar18 * 0x78 + 8;
      local_60 = pFVar17;
      if (pFVar17 != (FScriptContainerElement *)0x0) {
        local_74 = *(uint *)(pFVar17 + 0x68);
        uVar7 = (ulonglong)(int)local_74;
        lVar19 = *(longlong *)(pFVar17 + 0x60);
        local_58 = lVar19 + uVar7 * 0x18;
        piVar11 = (int *)(lVar19 + 0x10);
        while( true ) {
          lVar10 = local_58;
          if (*(int *)(pFVar17 + 0x68) != (int)uVar7) {
            local_78[0] = 0;
            `TCheckedPointerIterator<TTuple<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>_>,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_78);
          }
          plVar12 = local_50;
          pFVar14 = local_68;
          if (lVar19 == lVar10) break;
          iVar6 = *(int *)(lVar19 + 0x10);
          bVar3 = false;
          uVar8 = 0;
          if (0 < iVar6) {
            lVar10 = 0;
            do {
              uVar5 = 0;
              if ((int)uVar8 < iVar6) {
                uVar5 = ~uVar8 >> 0x1f;
              }
              if ((uVar5 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              if (*(ulong64 *)(*(longlong *)(lVar19 + 8) + lVar10) == param_1) {
                bVar3 = true;
                uVar5 = 0;
                if ((int)uVar8 < *piVar11) {
                  uVar5 = ~uVar8 >> 0x1f;
                }
                if ((uVar5 == 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar4)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                iVar6 = ~uVar8 + *piVar11;
                if (1 < iVar6) {
                  iVar6 = 1;
                }
                if (iVar6 != 0) {
                  memmove((void *)((longlong)(int)uVar8 * 0x10 + *(longlong *)(lVar19 + 8)),
                          (void *)((longlong)(*piVar11 - iVar6) * 0x10 + *(longlong *)(lVar19 + 8)),
                          (longlong)iVar6 << 4);
                }
                *piVar11 = *piVar11 + -1;
              }
              else {
                uVar8 = uVar8 + 1;
                lVar10 = lVar10 + 0x10;
              }
              pFVar17 = local_60;
              iVar6 = *piVar11;
            } while ((int)uVar8 < iVar6);
            if (bVar3) {
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,(ForAnyElementType *)(lVar19 + 8),iVar6,(int *)(lVar19 + 0x14));
            }
          }
          uVar7 = (ulonglong)local_74;
          lVar19 = lVar19 + 0x18;
          piVar11 = piVar11 + 6;
        }
      }
    }
    pFVar14 = pFVar14 + 8;
    uVar7 = (ulonglong)local_70;
  }
  uVar8 = (uint)plVar12[1];
  uVar9 = 0;
  uVar5 = uVar8;
  uVar16 = 0;
  if (0 < (int)uVar8) {
    do {
      uVar15 = uVar5 >> 1;
      uVar9 = uVar16;
      if (*(ulonglong *)
           ((FScriptContainerElement *)*plVar12 + (longlong)(int)(uVar15 + uVar16) * 0x78) < param_1
         ) {
        uVar9 = uVar15 + uVar16 + (uVar5 & 1);
      }
      uVar5 = uVar15;
      uVar16 = uVar9;
    } while (uVar15 != 0);
  }
  if ((((int)uVar9 < (int)uVar8) &&
      (*(ulonglong *)((FScriptContainerElement *)*plVar12 + (longlong)(int)uVar9 * 0x78) <= param_1)
      ) && (uVar9 != 0xffffffff)) {
    if (((int)uVar9 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar14 = (FScriptContainerElement *)*plVar12 + (longlong)(int)uVar9 * 0x78;
    DestructItems<TTuple<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>_>,int>
              (*(TTuple<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>_>
                 **)(pFVar14 + 0x68),*(int *)(pFVar14 + 0x70));
    if (*(void **)(pFVar14 + 0x68) != (void *)0x0) {
      FMemory::Free(*(void **)(pFVar14 + 0x68));
    }
    FVertexInterfaceData::~FVertexInterfaceData((FVertexInterfaceData *)(pFVar14 + 0x18));
    puVar1 = *(undefined8 **)(pFVar14 + 0x10);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    iVar6 = (int)plVar12[1] + ~uVar9;
    if (iVar6 != 0) {
      memmove(pFVar14,pFVar14 + 0x78,(longlong)iVar6 * 0x78);
    }
    iVar6 = (int)plVar12[1] + -1;
    *(int *)(plVar12 + 1) = iVar6;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x78,8,(ForAnyElementType *)plVar12,iVar6,(int *)((longlong)plVar12 + 0xc));
  }
  iVar6 = (param_3->ExecuteTable).ArrayNum;
  lVar19 = (longlong)iVar6;
  if (iVar6 != 0) {
    pFVar14 = (param_3->ExecuteTable).AllocatorInstance.Data;
    iVar18 = 0;
    bVar3 = *(ulong64 *)(pFVar14 + 8) != param_1;
    lVar10 = 0;
    iVar6 = 0;
    do {
      lVar10 = lVar10 + 1;
      iVar13 = iVar6 + 1;
      if (lVar10 < lVar19) {
        pFVar17 = pFVar14 + lVar10 * 0x20 + 8;
        do {
          if (bVar3 != (*(ulong64 *)pFVar17 != param_1)) break;
          iVar13 = iVar13 + 1;
          lVar10 = lVar10 + 1;
          pFVar17 = pFVar17 + 0x20;
        } while (lVar10 < lVar19);
      }
      if (bVar3 != false) {
        if (iVar18 != iVar6) {
          memmove(pFVar14 + (longlong)iVar18 * 0x20,pFVar14 + (longlong)iVar6 * 0x20,
                  (longlong)(iVar13 - iVar6) << 5);
        }
        iVar18 = iVar18 + (iVar13 - iVar6);
      }
      bVar3 = (bool)(bVar3 ^ 1);
      iVar6 = iVar13;
    } while (lVar10 < lVar19);
    (param_3->ExecuteTable).ArrayNum = iVar18;
  }
  iVar6 = (param_3->PostExecuteTable).ArrayNum;
  lVar19 = (longlong)iVar6;
  if (iVar6 != 0) {
    pFVar14 = (param_3->PostExecuteTable).AllocatorInstance.Data;
    iVar18 = 0;
    bVar3 = *(ulong64 *)(pFVar14 + 8) != param_1;
    lVar10 = 0;
    iVar6 = 0;
    do {
      lVar10 = lVar10 + 1;
      iVar13 = iVar6 + 1;
      if (lVar10 < lVar19) {
        pFVar17 = pFVar14 + lVar10 * 0x20 + 8;
        do {
          if (bVar3 != (*(ulong64 *)pFVar17 != param_1)) break;
          iVar13 = iVar13 + 1;
          lVar10 = lVar10 + 1;
          pFVar17 = pFVar17 + 0x20;
        } while (lVar10 < lVar19);
      }
      if (bVar3 != false) {
        if (iVar18 != iVar6) {
          memmove(pFVar14 + (longlong)iVar18 * 0x20,pFVar14 + (longlong)iVar6 * 0x20,
                  (longlong)(iVar13 - iVar6) << 5);
        }
        iVar18 = iVar18 + (iVar13 - iVar6);
      }
      bVar3 = (bool)(bVar3 ^ 1);
      iVar6 = iVar13;
    } while (lVar10 < lVar19);
    (param_3->PostExecuteTable).ArrayNum = iVar18;
  }
  iVar6 = (param_3->ResetTable).ArrayNum;
  lVar19 = (longlong)iVar6;
  if (iVar6 != 0) {
    pFVar14 = (param_3->ResetTable).AllocatorInstance.Data;
    iVar18 = 0;
    bVar3 = *(ulong64 *)(pFVar14 + 8) != param_1;
    lVar10 = 0;
    iVar6 = 0;
    do {
      lVar10 = lVar10 + 1;
      iVar13 = iVar6 + 1;
      if (lVar10 < lVar19) {
        pFVar17 = pFVar14 + lVar10 * 0x20 + 8;
        do {
          if (bVar3 != (*(ulong64 *)pFVar17 != param_1)) break;
          iVar13 = iVar13 + 1;
          lVar10 = lVar10 + 1;
          pFVar17 = pFVar17 + 0x20;
        } while (lVar10 < lVar19);
      }
      if (bVar3 != false) {
        if (iVar18 != iVar6) {
          memmove(pFVar14 + (longlong)iVar18 * 0x20,pFVar14 + (longlong)iVar6 * 0x20,
                  (longlong)(iVar13 - iVar6) << 5);
        }
        iVar18 = iVar18 + (iVar13 - iVar6);
      }
      bVar3 = (bool)(bVar3 ^ 1);
      iVar6 = iVar13;
    } while (lVar10 < lVar19);
    (param_3->ResetTable).ArrayNum = iVar18;
  }
  return;
}

// SetAssetScopeForThisThread @ 14ad63240

void __cdecl
Metasound::ThreadLocalDebug::SetAssetScopeForThisThread(FName param_1,FName param_2,FName param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  *(FName *)(lVar1 + 0x9ab0) = param_1;
  *(FName *)(lVar1 + 0x9ab8) = param_2;
  *(FName *)(lVar1 + 0x9ac0) = param_3;
  return;
}

// SetOrdinalsAndSort @ 14ad64040

void __cdecl
Metasound::DynamicGraph::SetOrdinalsAndSort
          (TMap<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>
           *param_1,FDynamicGraphOperatorData *param_2)

{
  int iVar1;
  int *piVar2;
  ulong64 *puVar3;
  ulong64 *puVar4;
  undefined1 local_res10 [8];
  
  iVar1 = (int)param_2->_padding_;
  puVar3 = (ulong64 *)param_2->_padding_;
  puVar4 = puVar3 + (longlong)iVar1 * 0xf;
  while( true ) {
    if ((int)param_2->_padding_ != iVar1) {
      `TCheckedPointerIterator<TTuple<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (puVar3 == puVar4) break;
    piVar2 = TMapBase<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>
             ::Find((TMapBase<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>
                     *)param_1,*puVar3);
    if (piVar2 == (int *)0x0) {
      *(undefined4 *)(puVar3 + 1) = 0x7fffffff;
      puVar3 = puVar3 + 0xf;
    }
    else {
      *(int *)(puVar3 + 1) = *piVar2;
      puVar3 = puVar3 + 0xf;
    }
  }
  DynamicGraphAlgoPrivate::SetOrdinalsAndSortTable<Metasound::DynamicGraph::FExecuteEntry>
            (param_1,&param_2->ExecuteTable);
  DynamicGraphAlgoPrivate::SetOrdinalsAndSortTable<Metasound::DynamicGraph::FPostExecuteEntry>
            (param_1,&param_2->PostExecuteTable);
  DynamicGraphAlgoPrivate::SetOrdinalsAndSortTable<Metasound::DynamicGraph::FResetEntry>
            (param_1,&param_2->ResetTable);
  return;
}

// SetOutputVertexData @ 14ad640f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::DynamicGraph::DynamicGraphAlgoPrivate::SetOutputVertexData
          (FDynamicGraphOperatorData *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  ForAnyElementType FVar6;
  FName *this;
  FName *pFVar7;
  FAnyDataReference *pFVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined1 local_res8 [8];
  FString local_48;
  FString local_38;
  FString local_28;
  
  iVar1 = (int)param_1->_padding_;
  this = (FName *)param_1->_padding_;
  pFVar7 = this + (longlong)iVar1 * 2;
LAB_14ad64120:
  do {
    if ((int)param_1->_padding_ != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TTuple<FName,unsigned___int64>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (this == pFVar7) {
      return;
    }
    uVar10 = (uint)param_1->_padding_;
    iVar9 = 0;
    if (0 < (int)uVar10) {
      do {
        uVar11 = uVar10 >> 1;
        if ((ulonglong)*(FName *)((longlong)(int)(uVar11 + iVar9) * 0x78 + param_1->_padding_) <
            (ulonglong)this[1]) {
          iVar9 = uVar11 + iVar9 + (uVar10 & 1);
        }
        uVar10 = uVar11;
      } while (uVar11 != 0);
    }
    if ((((int)param_1->_padding_ <= iVar9) ||
        ((ulonglong)this[1] < (ulonglong)*(FName *)((longlong)iVar9 * 0x78 + param_1->_padding_)))
       || (iVar9 == -1)) {
LAB_14ad642d1:
      if (1 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString(this,&local_28);
        ::FString::PrintfImpl(&local_48,L"%llu");
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        FVar6.Data = local_28.Data.AllocatorInstance.Data;
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
          FVar6.Data = local_28.Data.AllocatorInstance.Data;
        }
LAB_14ad6434a:
        if (FVar6.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar6.Data);
        }
      }
      goto LAB_14ad64354;
    }
    if ((iVar9 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar5 = param_1->_padding_ + 8 + (longlong)iVar9 * 0x78;
    if (lVar5 == 0) goto LAB_14ad642d1;
    lVar4 = *(longlong *)(lVar5 + 0x40);
    lVar5 = (longlong)*(int *)(lVar5 + 0x48) * 0x40 + lVar4;
    if (lVar4 != lVar5) {
      do {
        if (*(FName *)(lVar4 + 8) == *this) {
          pFVar8 = (FAnyDataReference *)0x0;
          if (*(char *)(lVar4 + 0x38) != '\0') {
            pFVar8 = (FAnyDataReference *)(lVar4 + 0x20);
          }
          if (pFVar8 != (FAnyDataReference *)0x0) {
            FOutputVertexInterfaceData::SetVertex
                      ((FOutputVertexInterfaceData *)&param_1->_padding_,this,pFVar8);
            this = this + 2;
            goto LAB_14ad64120;
          }
          break;
        }
        lVar4 = lVar4 + 0x40;
      } while (lVar4 != lVar5);
    }
    lVar5 = param_1->_padding_;
    lVar4 = (longlong)(int)param_1->_padding_ * 0x40 + lVar5;
    if (lVar5 == lVar4) {
LAB_14ad64354:
      this = this + 2;
    }
    else {
      do {
        if (*(FName *)(lVar5 + 8) == *this) {
          if ((*(char *)(lVar5 + 0x38) == '\0') || ((byte)LogMetaSound._0_1_ < 2))
          goto LAB_14ad64354;
          ::FName::ToString(this,&local_38);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
          FVar6.Data = local_38.Data.AllocatorInstance.Data;
          goto LAB_14ad6434a;
        }
        lVar5 = lVar5 + 0x40;
      } while (lVar5 != lVar4);
      this = this + 2;
    }
  } while( true );
}

// SwapOrdinalsAndSort @ 14ad65580

void __cdecl
Metasound::DynamicGraph::SwapOrdinalsAndSort
          (TArray<Metasound::DynamicGraph::FOrdinalSwap,TSizedDefaultAllocator<32>_> *param_1,
          FDynamicGraphOperatorData *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  undefined4 *puVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  TGetOrdinal<Metasound::DynamicGraph::FExecuteEntry_const_> local_res8 [8];
  
  pFVar9 = (param_1->AllocatorInstance).Data;
  if ((param_1->ArrayNum != 0) && (iVar12 = param_1->ArrayNum + -1, iVar12 != 0)) {
    pFVar10 = pFVar9 + 8;
    pFVar9 = pFVar9 + 0x18;
    do {
      if (*(int *)pFVar9 < *(int *)pFVar10) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Algo::IsSorted(InSwaps, FOrdinalSwap::OriginalOrdinalLessThan)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicGraphAlgo.cpp"
                           ,0xcc,
                           L"Dynamic MetaSound ordinal swaps must be presorted by the original ordinal."
                          );
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        break;
      }
      pFVar10 = pFVar10 + 0x10;
      pFVar9 = pFVar9 + 0x10;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  iVar12 = param_1->ArrayNum;
  if (0 < iVar12) {
    iVar11 = 0;
    iVar2 = *(int *)((param_1->AllocatorInstance).Data + 8);
    uVar13 = 0;
    if ((int)(iVar12 - 1U) < iVar12) {
      uVar13 = ~(iVar12 - 1U) >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar12 = param_1->ArrayNum;
    pFVar9 = (param_1->AllocatorInstance).Data;
    pFVar10 = pFVar9 + (longlong)iVar12 * 0x10;
    iVar3 = *(int *)(pFVar9 + ((longlong)iVar12 * 2 + -1) * 8);
    while( true ) {
      if (param_1->ArrayNum != iVar12) {
        local_res8[0] = (TGetOrdinal<Metasound::DynamicGraph::FExecuteEntry_const_>)0x0;
        `TCheckedPointerIterator<Metasound::DynamicGraph::FOrdinalSwap_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar9 == pFVar10) break;
      uVar13 = (uint)param_2->_padding_;
      iVar14 = 0;
      if (0 < (int)uVar13) {
        do {
          iVar1 = (uVar13 >> 1) + iVar14;
          if (*(ulonglong *)((longlong)iVar1 * 0x78 + param_2->_padding_) < *(ulonglong *)pFVar9) {
            iVar14 = (uVar13 & 1) + iVar1;
          }
          uVar5 = uVar13 >> 1;
          uVar13 = uVar13 >> 1;
        } while (uVar5 != 0);
      }
      if (((iVar14 < (int)param_2->_padding_) &&
          (*(ulonglong *)(param_2->_padding_ + (longlong)iVar14 * 0x78) <= *(ulonglong *)pFVar9)) &&
         (iVar14 != -1)) {
        if ((iVar14 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        puVar7 = (undefined4 *)(param_2->_padding_ + 8 + (longlong)iVar14 * 0x78);
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = *(undefined4 *)(pFVar9 + 0xc);
        }
      }
      pFVar9 = pFVar9 + 0x10;
    }
    uVar13 = (param_2->ExecuteTable).ArrayNum;
    iVar12 = 0;
    pFVar9 = (param_2->ExecuteTable).AllocatorInstance.Data;
    if (0 < (int)uVar13) {
      do {
        iVar14 = (uVar13 >> 1) + iVar12;
        if (*(int *)(pFVar9 + (longlong)iVar14 * 0x20) < iVar2) {
          iVar12 = (uVar13 & 1) + iVar14;
        }
        uVar5 = uVar13 >> 1;
        uVar13 = uVar13 >> 1;
      } while (uVar5 != 0);
      uVar13 = (param_2->ExecuteTable).ArrayNum;
      iVar14 = iVar11;
      do {
        iVar1 = (uVar13 >> 1) + iVar14;
        if (*(int *)(pFVar9 + (longlong)iVar1 * 0x20) <= iVar3) {
          iVar14 = iVar1 + (uVar13 & 1);
        }
        uVar5 = uVar13 >> 1;
        uVar13 = uVar13 >> 1;
      } while (uVar5 != 0);
      if ((iVar12 < (param_2->ExecuteTable).ArrayNum) && (iVar12 < iVar14)) {
        pFVar10 = (param_1->AllocatorInstance).Data;
        pFVar15 = pFVar10 + (longlong)param_1->ArrayNum * 0x10;
        pFVar8 = pFVar9 + (longlong)iVar12 * 0x20;
        while ((pFVar10 != pFVar15 && (pFVar8 != pFVar9 + (longlong)iVar14 * 0x20))) {
          if (*(int *)(pFVar10 + 8) == *(int *)pFVar8) {
            *(int *)pFVar8 = *(int *)(pFVar10 + 0xc);
            pFVar8 = pFVar8 + 0x20;
            pFVar10 = pFVar10 + 0x10;
          }
          else if (*(int *)(pFVar10 + 8) < *(int *)pFVar8) {
            pFVar10 = pFVar10 + 0x10;
          }
          else {
            pFVar8 = pFVar8 + 0x20;
          }
        }
        pFVar9 = (param_2->ExecuteTable).AllocatorInstance.Data;
        if ((iVar14 - iVar12 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        AlgoImpl::
        IntroSortInternal<Metasound::DynamicGraph::FExecuteEntry_const_,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FExecuteEntry_const_>,TLess<void>_>
                  ((FExecuteEntry *)(pFVar9 + (longlong)iVar12 * 0x20),iVar14 - iVar12,local_res8[0]
                   ,(TLess<void>)local_res8[0]);
      }
    }
    uVar13 = (param_2->PostExecuteTable).ArrayNum;
    pFVar9 = (param_2->PostExecuteTable).AllocatorInstance.Data;
    iVar12 = iVar11;
    if (0 < (int)uVar13) {
      do {
        iVar14 = (uVar13 >> 1) + iVar12;
        if (*(int *)(pFVar9 + (longlong)iVar14 * 0x20) < iVar2) {
          iVar12 = iVar14 + (uVar13 & 1);
        }
        uVar5 = uVar13 >> 1;
        uVar13 = uVar13 >> 1;
      } while (uVar5 != 0);
      uVar13 = (param_2->PostExecuteTable).ArrayNum;
      iVar14 = iVar11;
      do {
        iVar1 = (uVar13 >> 1) + iVar14;
        if (*(int *)(pFVar9 + (longlong)iVar1 * 0x20) <= iVar3) {
          iVar14 = iVar1 + (uVar13 & 1);
        }
        uVar5 = uVar13 >> 1;
        uVar13 = uVar13 >> 1;
      } while (uVar5 != 0);
      if ((iVar12 < (param_2->PostExecuteTable).ArrayNum) && (iVar12 < iVar14)) {
        pFVar10 = (param_1->AllocatorInstance).Data;
        pFVar15 = pFVar10 + (longlong)param_1->ArrayNum * 0x10;
        pFVar8 = pFVar9 + (longlong)iVar12 * 0x20;
        while ((pFVar10 != pFVar15 && (pFVar8 != pFVar9 + (longlong)iVar14 * 0x20))) {
          if (*(int *)(pFVar10 + 8) == *(int *)pFVar8) {
            *(int *)pFVar8 = *(int *)(pFVar10 + 0xc);
            pFVar8 = pFVar8 + 0x20;
            pFVar10 = pFVar10 + 0x10;
          }
          else if (*(int *)(pFVar10 + 8) < *(int *)pFVar8) {
            pFVar10 = pFVar10 + 0x10;
          }
          else {
            pFVar8 = pFVar8 + 0x20;
          }
        }
        pFVar9 = (param_2->PostExecuteTable).AllocatorInstance.Data;
        if ((iVar14 - iVar12 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        AlgoImpl::
        IntroSortInternal<Metasound::DynamicGraph::FPostExecuteEntry_const_,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FPostExecuteEntry_const_>,TLess<void>_>
                  ((FPostExecuteEntry *)(pFVar9 + (longlong)iVar12 * 0x20),iVar14 - iVar12,
                   (TGetOrdinal<Metasound::DynamicGraph::FPostExecuteEntry_const_>)local_res8[0],
                   (TLess<void>)local_res8[0]);
      }
    }
    uVar13 = (param_2->ResetTable).ArrayNum;
    pFVar9 = (param_2->ResetTable).AllocatorInstance.Data;
    iVar12 = iVar11;
    if (0 < (int)uVar13) {
      do {
        iVar14 = (uVar13 >> 1) + iVar12;
        if (*(int *)(pFVar9 + (longlong)iVar14 * 0x20) < iVar2) {
          iVar12 = iVar14 + (uVar13 & 1);
        }
        uVar5 = uVar13 >> 1;
        uVar13 = uVar13 >> 1;
      } while (uVar5 != 0);
      uVar13 = (param_2->ResetTable).ArrayNum;
      do {
        iVar2 = (uVar13 >> 1) + iVar11;
        if (*(int *)(pFVar9 + (longlong)iVar2 * 0x20) <= iVar3) {
          iVar11 = iVar2 + (uVar13 & 1);
        }
        uVar5 = uVar13 >> 1;
        uVar13 = uVar13 >> 1;
      } while (uVar5 != 0);
      if ((iVar12 < (param_2->ResetTable).ArrayNum) && (iVar12 < iVar11)) {
        pFVar10 = (param_1->AllocatorInstance).Data;
        pFVar15 = pFVar10 + (longlong)param_1->ArrayNum * 0x10;
        pFVar8 = pFVar9 + (longlong)iVar12 * 0x20;
        while ((pFVar10 != pFVar15 && (pFVar8 != pFVar9 + (longlong)iVar11 * 0x20))) {
          if (*(int *)(pFVar10 + 8) == *(int *)pFVar8) {
            *(int *)pFVar8 = *(int *)(pFVar10 + 0xc);
            pFVar8 = pFVar8 + 0x20;
            pFVar10 = pFVar10 + 0x10;
          }
          else if (*(int *)(pFVar10 + 8) < *(int *)pFVar8) {
            pFVar10 = pFVar10 + 0x10;
          }
          else {
            pFVar8 = pFVar8 + 0x20;
          }
        }
        pFVar9 = (param_2->ResetTable).AllocatorInstance.Data;
        if ((iVar11 - iVar12 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        AlgoImpl::
        IntroSortInternal<Metasound::DynamicGraph::FResetEntry_const_,int,Metasound::DynamicGraph::DynamicGraphAlgoPrivate::TGetOrdinal<Metasound::DynamicGraph::FResetEntry_const_>,TLess<void>_>
                  ((FResetEntry *)(pFVar9 + (longlong)iVar12 * 0x20),iVar11 - iVar12,
                   (TGetOrdinal<Metasound::DynamicGraph::FResetEntry_const_>)local_res8[0],
                   (TLess<void>)local_res8[0]);
      }
    }
  }
  return;
}

// TarjanStronglyConnectedComponents @ 14ad65b50

bool __cdecl
Metasound::DirectedGraphAlgo::TarjanStronglyConnectedComponents
          (FDirectedGraphAlgoAdapter *param_1,
          TArray<Metasound::DirectedGraphAlgo::FStronglyConnectedComponent,TSizedDefaultAllocator<32>_>
          *param_2,bool param_3)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  undefined8 uVar4;
  code *pcVar5;
  TSet<TTuple<TTuple<Metasound::INode_const_*,Metasound::INode_const_*>,Metasound::FDataEdge>,TDefaultMapHashableKeyFuncs<TTuple<Metasound::INode_const_*,Metasound::INode_const_*>,Metasound::FDataEdge,1>,FDefaultSetAllocator>
  *pTVar6;
  TTuple<Metasound::INode_const_*,Metasound::INode_const_*> *pTVar7;
  uint *puVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  FScriptContainerElement *pFVar19;
  FDataEdge *pFVar20;
  uint *puVar21;
  FScriptContainerElement *pFVar22;
  undefined1 local_res20 [8];
  undefined1 local_b8;
  undefined1 local_b7 [7];
  ForAnyElementType local_b0;
  undefined8 local_a8;
  FScriptContainerElement *local_a0;
  undefined8 local_98;
  TArray<UE::MathCore::Graph::FStronglyConnectedComponent,TSizedDefaultAllocator<32>_> local_90;
  uint local_80;
  TBaseKeyIterator<1> local_78;
  uint *local_60;
  TArray<int,TSizedDefaultAllocator<32>_> *local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.ArrayNum = 0;
  local_90.ArrayMax = 0;
  bVar10 = UE::MathCore::Graph::TarjanStronglyConnectedComponents
                     (&param_1->EdgeSet,&local_90,param_3);
  if (bVar10) {
    uVar17 = (ulonglong)local_90.ArrayNum;
    local_a0 = local_90.AllocatorInstance.Data + 8;
    local_58 = (TArray<int,TSizedDefaultAllocator<32>_> *)
               (local_90.AllocatorInstance.Data + uVar17 * 0x20);
    local_80 = local_90.ArrayNum;
    while( true ) {
      pTVar9 = local_58;
      if (local_90.ArrayNum != (int)uVar17) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<UE::MathCore::Graph::FStronglyConnectedComponent,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      pTVar1 = (TArray<int,TSizedDefaultAllocator<32>_> *)(local_a0 + -8);
      if (pTVar1 == pTVar9) break;
      iVar12 = param_2->ArrayNum;
      if (iVar12 == param_2->ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      pFVar22 = (param_2->AllocatorInstance).Data + (longlong)iVar12 * 0x20;
      param_2->ArrayNum = iVar12 + 1;
      DefaultConstructItems<Metasound::DirectedGraphAlgo::FStronglyConnectedComponent,int>
                (pFVar22,1);
      pFVar19 = (pTVar1->AllocatorInstance).Data;
      iVar12 = *(int *)local_a0;
      pFVar2 = pFVar19 + (longlong)iVar12 * 4;
      while( true ) {
        if (*(int *)local_a0 != iVar12) {
          local_b8 = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_b8);
        }
        if (pFVar19 == pFVar2) break;
        uVar3 = *(uint *)pFVar19;
        uVar13 = 0;
        if ((int)uVar3 < (param_1->MetasoundUniqueNodes).ArrayNum) {
          uVar13 = ~uVar3 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          uVar11 = (*pcVar5)();
          return (bool)uVar11;
        }
        local_98 = *(undefined8 *)
                    ((param_1->MetasoundUniqueNodes).AllocatorInstance.Data +
                    (longlong)(int)uVar3 * 8);
        if (((*(undefined8 **)&pFVar22->field_0x0 <= &local_98) &&
            (&local_98 < *(undefined8 **)&pFVar22->field_0x0 + *(int *)(pFVar22 + 0xc))) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          uVar11 = (*pcVar5)();
          return (bool)uVar11;
        }
        iVar14 = *(int *)&pFVar22[8].field_0x0;
        if (iVar14 == *(int *)(pFVar22 + 0xc)) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)pFVar22,(int *)(pFVar22 + 0xc));
        }
        pFVar19 = pFVar19 + 4;
        *(int *)&pFVar22[8].field_0x0 = iVar14 + 1;
        *(undefined8 *)(*(longlong *)&pFVar22->field_0x0 + (longlong)iVar14 * 8) = local_98;
      }
      puVar21 = *(uint **)(local_a0 + 8);
      iVar12 = *(int *)(local_a0 + 0x10);
      local_60 = puVar21 + (longlong)iVar12 * 2;
      while( true ) {
        puVar8 = local_60;
        if (*(int *)(local_a0 + 0x10) != iVar12) {
          local_b7[0] = 0;
          `TCheckedPointerIterator<TTuple<int,int>_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_b7);
        }
        if (puVar21 == puVar8) break;
        uVar3 = *puVar21;
        local_b0.Data = (FScriptContainerElement *)0x0;
        local_a8 = 0;
        uVar13 = 0;
        if ((int)uVar3 < (param_1->MetasoundUniqueNodes).ArrayNum) {
          uVar13 = ~uVar3 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          uVar11 = (*pcVar5)();
          return (bool)uVar11;
        }
        uVar4 = *(undefined8 *)
                 ((param_1->MetasoundUniqueNodes).AllocatorInstance.Data + (longlong)(int)uVar3 * 8)
        ;
        uVar3 = puVar21[1];
        uVar13 = 0;
        if ((int)uVar3 < (param_1->MetasoundUniqueNodes).ArrayNum) {
          uVar13 = ~uVar3 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          uVar11 = (*pcVar5)();
          return (bool)uVar11;
        }
        local_48 = *(undefined8 *)
                    ((param_1->MetasoundUniqueNodes).AllocatorInstance.Data +
                    (longlong)(int)uVar3 * 8);
        local_50 = uVar4;
        TSet<TTuple<TTuple<Metasound::INode_const_*,Metasound::INode_const_*>,Metasound::FDataEdge>,TDefaultMapHashableKeyFuncs<TTuple<Metasound::INode_const_*,Metasound::INode_const_*>,Metasound::FDataEdge,1>,FDefaultSetAllocator>
        ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
                  (&local_78,
                   (TSet<TTuple<TTuple<Metasound::INode_const_*,Metasound::INode_const_*>,Metasound::FDataEdge>,TDefaultMapHashableKeyFuncs<TTuple<Metasound::INode_const_*,Metasound::INode_const_*>,Metasound::FDataEdge,1>,FDefaultSetAllocator>
                    *)&param_1->MetasoundNodePairEdges,
                   (TTuple<Metasound::INode_const_*,Metasound::INode_const_*> *)&local_50);
        pTVar7 = local_78.Key;
        pTVar6 = local_78.Set;
        iVar14 = local_78.NextIndex;
joined_r0x00014ad65e74:
        local_78.NextIndex = iVar14;
        if (local_78.Index != -1) {
          pFVar20 = (FDataEdge *)
                    (*(longlong *)&pTVar6->Elements + (longlong)local_78.Index * 0x80 + 0x10);
          if (((local_b0.Data <= pFVar20) &&
              (local_a8._4_4_ = (int)((ulonglong)local_a8 >> 0x20),
              lVar18 = (longlong)local_a8._4_4_,
              pFVar20 < (FDataEdge *)((longlong)local_b0.Data + lVar18 * 0x68))) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar5 = (code *)swi(3);
            uVar11 = (*pcVar5)();
            return (bool)uVar11;
          }
          if ((int)local_a8 == local_a8._4_4_) {
            iVar15 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x868,&local_b0,(int *)((longlong)&local_a8 + 4));
            local_a8 = CONCAT44(local_a8._4_4_,iVar15);
          }
          lVar18 = (longlong)(int)local_a8;
          local_a8 = CONCAT44(local_a8._4_4_,(int)local_a8 + 1);
          FDataEdge::FDataEdge((FDataEdge *)(local_b0.Data + lVar18 * 0x68),pFVar20);
          local_78.Index = iVar14;
          if (iVar14 == -1) goto LAB_14ad65f93;
          lVar18 = *(longlong *)&pTVar6->Elements;
          do {
            lVar16 = (longlong)local_78.Index * 0x80;
            iVar14 = *(int *)(lVar16 + 0x78 + lVar18);
            if ((*(longlong *)(lVar16 + lVar18) == *(longlong *)pTVar7) &&
               (*(longlong *)(lVar16 + 8 + lVar18) == *(longlong *)&pTVar7->field_0x8)) break;
            local_78.Index = iVar14;
          } while (iVar14 != -1);
          goto joined_r0x00014ad65e74;
        }
LAB_14ad65f93:
        pFVar2 = pFVar22 + 0x10;
        if ((pFVar2 == (FScriptContainerElement *)&local_b0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)this != (void*)&Source",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x96e,L""), bVar10)) {
          pcVar5 = (code *)swi(3);
          uVar11 = (*pcVar5)();
          return (bool)uVar11;
        }
        iVar14 = (int)local_a8;
        if ((int)local_a8 != 0) {
          iVar15 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x68,8,(int)local_a8,(ForAnyElementType *)pFVar2,
                              (int *)(pFVar22 + 0x18),(int *)(pFVar22 + 0x1c));
          ConstructItems<Metasound::FDataEdge,Metasound::FDataEdge,int>
                    (*(FScriptContainerElement **)&pFVar2->field_0x0 + (longlong)iVar15 * 0x68,
                     (FDataEdge *)local_b0.Data,iVar14);
        }
        DestructItems<Metasound::FDataEdge,int>((FDataEdge *)local_b0.Data,(int)local_a8);
        if ((FDataEdge *)local_b0.Data != (FDataEdge *)0x0) {
          FMemory::Free(local_b0.Data);
        }
        puVar21 = puVar21 + 2;
      }
      local_a0 = local_a0 + 0x20;
      uVar17 = (ulonglong)local_80;
    }
    bVar10 = true;
  }
  else {
    bVar10 = false;
  }
  DestructItems<UE::MathCore::Graph::FStronglyConnectedComponent,int>
            ((FStronglyConnectedComponent *)local_90.AllocatorInstance.Data,local_90.ArrayNum);
  if ((FStronglyConnectedComponent *)local_90.AllocatorInstance.Data !=
      (FStronglyConnectedComponent *)0x0) {
    FMemory::Free(local_90.AllocatorInstance.Data);
  }
  return bVar10;
}

// TarjanStronglyConnectedComponents @ 14ad660b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
Metasound::DirectedGraphAlgo::TarjanStronglyConnectedComponents
          (IGraph *param_1,
          TArray<Metasound::DirectedGraphAlgo::FStronglyConnectedComponent,TSizedDefaultAllocator<32>_>
          *param_2,bool param_3)

{
  bool bVar1;
  FDirectedGraphAlgoAdapter *pFVar2;
  undefined1 auStack_288 [32];
  FDirectedGraphAlgoAdapter local_268;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_288;
  pFVar2 = FDirectedGraphAlgoAdapter::FDirectedGraphAlgoAdapter(&local_268,param_1);
  bVar1 = TarjanStronglyConnectedComponents(pFVar2,param_2,param_3);
  FDirectedGraphAlgoAdapter::~FDirectedGraphAlgoAdapter(&local_268);
  return bVar1;
}

// UpdateGraphRuntimeTableEntries @ 14ad696c0

void __cdecl
Metasound::DynamicGraph::DynamicGraphAlgoPrivate::UpdateGraphRuntimeTableEntries
          (ulong64 *param_1,FOperatorInfo *param_2,FDynamicGraphOperatorData *param_3)

{
  IOperator *pIVar1;
  bool bVar2;
  _func___cdecl_void_IOperator_ptr *p_Var3;
  _func___cdecl_void_IOperator_ptr_FResetParams_ptr *p_Var4;
  bool bVar5;
  
  bVar2 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar2) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::DynamicGraphAlgo::UpdateOperatorRuntimeTableEntries");
  }
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId139,
               "Metasound::DynamicGraphAlgo::UpdateOperatorRuntimeTableEntries",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicGraphAlgo.cpp"
               ,0x8b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId139);
  }
  pIVar1 = (param_2->Operator).Ptr;
  if (pIVar1 == (IOperator *)0x0) {
    UpdateTableEntry<Metasound::DynamicGraph::FExecuteEntry,void_(__cdecl*)(Metasound::IOperator_*)>
              (param_1,param_2,&param_3->ExecuteTable,(_func___cdecl_void_IOperator_ptr *)0x0);
    UpdateTableEntry<Metasound::DynamicGraph::FPostExecuteEntry,void_(__cdecl*)(Metasound::IOperator_*)>
              (param_1,param_2,&param_3->PostExecuteTable,(_func___cdecl_void_IOperator_ptr *)0x0);
    p_Var4 = (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
  }
  else {
    p_Var3 = (_func___cdecl_void_IOperator_ptr *)(**(code **)((longlong)*pIVar1 + 0x38))(pIVar1);
    UpdateTableEntry<Metasound::DynamicGraph::FExecuteEntry,void_(__cdecl*)(Metasound::IOperator_*)>
              (param_1,param_2,&param_3->ExecuteTable,p_Var3);
    p_Var3 = (_func___cdecl_void_IOperator_ptr *)(**(code **)((longlong)*pIVar1 + 0x40))(pIVar1);
    UpdateTableEntry<Metasound::DynamicGraph::FPostExecuteEntry,void_(__cdecl*)(Metasound::IOperator_*)>
              (param_1,param_2,&param_3->PostExecuteTable,p_Var3);
    p_Var4 = (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)
             (**(code **)((longlong)*pIVar1 + 0x30))(pIVar1);
  }
  UpdateTableEntry<Metasound::DynamicGraph::FResetEntry,void_(__cdecl*)(Metasound::IOperator_*,Metasound::IOperator::FResetParams_const_&)>
            (param_1,param_2,&param_3->ResetTable,p_Var4);
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar2) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return;
}

// UpdateOutputVertexData @ 14ad69810

void __cdecl Metasound::DynamicGraph::UpdateOutputVertexData(FDynamicGraphOperatorData *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ForAnyElementType FVar7;
  TTuple<FName,Metasound::FAnyDataReference> *pTVar8;
  bool bVar9;
  undefined1 local_res8 [8];
  TSortedMap<FName,Metasound::FAnyDataReference,TSizedDefaultAllocator<32>,FNameFastLess> local_48;
  TArray<Metasound::FVertexDataState,TSizedDefaultAllocator<32>_> local_38;
  
  bVar3 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar3) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::DynamicGraphAlgo::UpdateOutputVertexData");
  }
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId370,"Metasound::DynamicGraphAlgo::UpdateOutputVertexData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicGraphAlgo.cpp"
               ,0x172);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId370);
  }
  if (*(longlong *)&(param_1->OperatorUpdateCallbacks).OnOutputUpdated == 0) {
    DynamicGraphAlgoPrivate::SetOutputVertexData(param_1);
  }
  else {
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    GetVertexInterfaceDataState((FOutputVertexInterfaceData *)&param_1->_padding_,&local_38);
    DynamicGraphAlgoPrivate::SetOutputVertexData(param_1);
    local_48.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Pairs.ArrayNum = 0;
    local_48.Pairs.ArrayMax = 0;
    CompareVertexInterfaceDataToPriorState
              ((FOutputVertexInterfaceData *)&param_1->_padding_,&local_38,&local_48);
    iVar4 = local_48.Pairs.ArrayNum;
    pTVar8 = (TTuple<FName,Metasound::FAnyDataReference> *)
             (local_48.Pairs.AllocatorInstance.Data + (longlong)local_48.Pairs.ArrayNum * 0x20);
    FVar7.Data = local_48.Pairs.AllocatorInstance.Data;
    while( true ) {
      if (local_48.Pairs.ArrayNum != iVar4) {
        `TCheckedPointerIterator<TTuple<FName,Metasound::FAnyDataReference>,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res8);
      }
      if ((TTuple<FName,Metasound::FAnyDataReference> *)FVar7.Data == pTVar8) break;
      UE::Core::Private::Function::CheckCallable
                (*(void **)&(param_1->OperatorUpdateCallbacks).OnOutputUpdated);
      plVar1 = *(longlong **)&(param_1->OperatorUpdateCallbacks).OnOutputUpdated.field_0x28;
      pcVar2 = *(code **)&(param_1->OperatorUpdateCallbacks).OnOutputUpdated;
      plVar6 = (longlong *)&(param_1->OperatorUpdateCallbacks).OnOutputUpdated.field_0x10;
      if (plVar1 != (longlong *)0x0) {
        plVar6 = plVar1;
      }
      uVar5 = (**(code **)(*plVar6 + 8))();
      (*pcVar2)(uVar5,FVar7.Data,&param_1->_padding_);
      FVar7.Data = FVar7.Data + 0x20;
    }
    DestructItems<TTuple<FName,Metasound::FAnyDataReference>,int>
              ((TTuple<FName,Metasound::FAnyDataReference> *)local_48.Pairs.AllocatorInstance.Data,
               local_48.Pairs.ArrayNum);
    if ((TTuple<FName,Metasound::FAnyDataReference> *)local_48.Pairs.AllocatorInstance.Data !=
        (TTuple<FName,Metasound::FAnyDataReference> *)0x0) {
      FMemory::Free(local_48.Pairs.AllocatorInstance.Data);
    }
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
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

// WarnMissingBindImplementation @ 14ad6ac10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Metasound::MetasoundOperatorInterfacePrivate::WarnMissingBindImplementation(void)

{
  if (bHasWarnedMissingBindImplementation == (atomic<bool>)0x0) {
    LOCK();
    bHasWarnedMissingBindImplementation = (atomic<bool>)0x1;
    UNLOCK();
    if (2 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
  }
  if ((bEnableMetaSoundOperatorMissingOverrideLog != false) && (2 < (byte)LogMetaSound._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    return;
  }
  return;
}

// IMPLEMENT_MODULE_MetasoundGraphCore @ 14ad6acc0

void __cdecl IMPLEMENT_MODULE_MetasoundGraphCore(void)

{
  return;
}

// EmptyAdvanced'' @ 150422ed0

void __cdecl `dynamic_atexit_destructor_for_'Metasound::FDataVertexMetadata::EmptyAdvanced__(void)

{
  if (Metasound::FDataVertexMetadata::EmptyAdvanced.DisplayName.TextData.Reference !=
      (ITextData *)0x0) {
    (**(code **)((longlong)
                 *Metasound::FDataVertexMetadata::EmptyAdvanced.DisplayName.TextData.Reference +
                0x10))();
  }
  if (Metasound::FDataVertexMetadata::EmptyAdvanced.Description.TextData.Reference !=
      (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150422ef9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)
                 *Metasound::FDataVertexMetadata::EmptyAdvanced.Description.TextData.Reference +
                0x10))();
    return;
  }
  return;
}

// EmptyBasic'' @ 150422f10

void __cdecl `dynamic_atexit_destructor_for_'Metasound::FDataVertexMetadata::EmptyBasic__(void)

{
  if (Metasound::FDataVertexMetadata::EmptyBasic.DisplayName.TextData.Reference != (ITextData *)0x0)
  {
    (**(code **)((longlong)
                 *Metasound::FDataVertexMetadata::EmptyBasic.DisplayName.TextData.Reference + 0x10))
              ();
  }
  if (Metasound::FDataVertexMetadata::EmptyBasic.Description.TextData.Reference != (ITextData *)0x0)
  {
                    /* WARNING: Could not recover jumptable at 0x000150422f39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)
                 *Metasound::FDataVertexMetadata::EmptyBasic.Description.TextData.Reference + 0x10))
              ();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableCommandletExecution'' @ 150422f50

void __cdecl
Metasound::GlobalsPrivate::_dynamic_atexit_destructor_for__CVarEnableCommandletExecution__(void)

{
  CVarEnableCommandletExecution._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableCommandletExecution);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMetaSoundEnableOperatorMissingOverrideLog'' @ 150422f70

void __cdecl _dynamic_atexit_destructor_for__CVarMetaSoundEnableOperatorMissingOverrideLog__(void)

{
  CVarMetaSoundEnableOperatorMissingOverrideLog._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarMetaSoundEnableOperatorMissingOverrideLog);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMetaSoundExperimentalTransformTimeoutInSeconds'' @ 150422f90

void __cdecl
Metasound::DynamicGraph::DynamicOperatorPrivate::
_dynamic_atexit_destructor_for__CVarMetaSoundExperimentalTransformTimeoutInSeconds__(void)

{
  CVarMetaSoundExperimentalTransformTimeoutInSeconds._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarMetaSoundExperimentalTransformTimeoutInSeconds);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMetaSoundProfileAllEnabled'' @ 150422fb0

void __cdecl
Metasound::Profiling::_dynamic_atexit_destructor_for__CVarMetaSoundProfileAllEnabled__(void)

{
  CVarMetaSoundProfileAllEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMetaSoundProfileAllEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVerboseTraceEvents'' @ 150422fd0

void __cdecl Metasound::_dynamic_atexit_destructor_for__CVarVerboseTraceEvents__(void)

{
  CVarVerboseTraceEvents._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarVerboseTraceEvents);
  return;
}

// `dynamic_atexit_destructor_for_'DebugInfoOnThisThread'' @ 150422ff0

void __cdecl
Metasound::ThreadLocalDebug::ThreadLocalDebugPrivate::
_dynamic_atexit_destructor_for__DebugInfoOnThisThread__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9aa0);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
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

// `dynamic_atexit_destructor_for_'DisplayText'' @ 150423020

void __cdecl
`Metasound::
TDataReferenceTypeInfo<Metasound::TVariable<TArray<Metasound::FAudioBuffer,TSizedDefaultAllocator<32>_>_>_>
::GetTypeDisplayText'::__l2::_dynamic_atexit_destructor_for__DisplayText__(void)

{
  if (::DisplayText.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015042302f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*::DisplayText.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DisplayText'' @ 150423040

void __cdecl
`Metasound::TDataReferenceTypeInfo<Metasound::TVariable<Metasound::FAudioBuffer>_>::
GetTypeDisplayText'::__l2::_dynamic_atexit_destructor_for__DisplayText__(void)

{
  if (::DisplayText.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015042304f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*::DisplayText.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DisplayText'' @ 150423060

void __cdecl
`Metasound::TDataReferenceTypeInfo<TArray<Metasound::FAudioBuffer,TSizedDefaultAllocator<32>_>_>::
GetTypeDisplayText'::__l2::_dynamic_atexit_destructor_for__DisplayText__(void)

{
  if (::DisplayText.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015042306f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*::DisplayText.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DisplayText'' @ 150423080

void __cdecl
`Metasound::TDataReferenceTypeInfo<Metasound::FAudioBuffer>::GetTypeDisplayText'::__l2::
_dynamic_atexit_destructor_for__DisplayText__(void)

{
  if (::DisplayText.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015042308f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*::DisplayText.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'EmptyInfo'' @ 1504230a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
`Metasound::FNodeClassMetadata::GetEmpty'::__l2::_dynamic_atexit_destructor_for__EmptyInfo__(void)

{
  DestructItems<FText,int>
            ((FText *)EmptyInfo.Keywords.AllocatorInstance.Data,EmptyInfo.Keywords.ArrayNum);
  if (EmptyInfo.Keywords.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(EmptyInfo.Keywords.AllocatorInstance.Data);
  }
  DestructItems<FText,int>
            ((FText *)EmptyInfo.CategoryHierarchy.AllocatorInstance.Data,
             EmptyInfo.CategoryHierarchy.ArrayNum);
  if (EmptyInfo.CategoryHierarchy.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(EmptyInfo.CategoryHierarchy.AllocatorInstance.Data);
  }
  Metasound::FVertexInterface::~FVertexInterface(&EmptyInfo.DefaultInterface);
  if (EmptyInfo.PromptIfMissing.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*EmptyInfo.PromptIfMissing.TextData.Reference + 0x10))();
  }
  if (EmptyInfo.Author.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(EmptyInfo.Author.Data.AllocatorInstance.Data);
  }
  if (EmptyInfo.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*EmptyInfo.Description.TextData.Reference + 0x10))();
  }
  if (EmptyInfo.DisplayName.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015042313e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*EmptyInfo.DisplayName.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'InputDataMetadata'' @ 150423150

void __cdecl Metasound::VariableNames::_dynamic_atexit_destructor_for__InputDataMetadata__(void)

{
  if (InputDataMetadata.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*InputDataMetadata.DisplayName.TextData.Reference + 0x10))();
  }
  if (InputDataMetadata.Description.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150423179. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*InputDataMetadata.Description.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'InputVariableMetadata'' @ 150423190

void __cdecl Metasound::VariableNames::_dynamic_atexit_destructor_for__InputVariableMetadata__(void)

{
  if (InputVariableMetadata.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*InputVariableMetadata.DisplayName.TextData.Reference + 0x10))();
  }
  if (InputVariableMetadata.Description.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001504231b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*InputVariableMetadata.Description.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Instance'' @ 1504231d0

void __cdecl `Metasound::FPolyRegistry::Get'::__l2::_dynamic_atexit_destructor_for__Instance__(void)

{
  ::Instance.Map._72_4_ = 0;
  if (::Instance.Map._64_8_ != 0) {
    FMemory::Free((void *)::Instance.Map._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,Metasound::FPolyTypeInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,Metasound::FPolyTypeInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,Metasound::FPolyTypeInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&::Instance);
  return;
}

// `dynamic_atexit_destructor_for_'LogMetaSound'' @ 150423210

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogMetaSound__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogMetaSound);
  return;
}

// `dynamic_atexit_destructor_for_'LogMetasoundProfiling'' @ 150423230

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogMetasoundProfiling__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogMetasoundProfiling);
  return;
}

// `dynamic_atexit_destructor_for_'OutputDataMetadata'' @ 150423250

void __cdecl Metasound::VariableNames::_dynamic_atexit_destructor_for__OutputDataMetadata__(void)

{
  if (OutputDataMetadata.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*OutputDataMetadata.DisplayName.TextData.Reference + 0x10))();
  }
  if (OutputDataMetadata.Description.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150423279. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*OutputDataMetadata.Description.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'OutputVariableMetadata'' @ 150423290

void __cdecl
Metasound::VariableNames::_dynamic_atexit_destructor_for__OutputVariableMetadata__(void)

{
  if (OutputVariableMetadata.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*OutputVariableMetadata.DisplayName.TextData.Reference + 0x10))();
  }
  if (OutputVariableMetadata.Description.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001504232b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*OutputVariableMetadata.Description.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'PluginAuthor'' @ 1504232d0

void __cdecl Metasound::_dynamic_atexit_destructor_for__PluginAuthor__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = PluginAuthor.Data.AllocatorInstance.Data;
  if (PluginAuthor.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (PluginAuthor.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'PluginNodeMissingPrompt'' @ 1504232f0

void __cdecl Metasound::_dynamic_atexit_destructor_for__PluginNodeMissingPrompt__(void)

{
  if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001504232ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'ProfilingNodeFilter'' @ 150423310

void __cdecl Metasound::Profiling::_dynamic_atexit_destructor_for__ProfilingNodeFilter__(void)

{
  DestructItems<FString,int>
            ((FString *)ProfilingNodeFilter.AllocatorInstance.Data,ProfilingNodeFilter.ArrayNum);
  if (ProfilingNodeFilter.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(ProfilingNodeFilter.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Value'' @ 150423350

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`Metasound::MetasoundLiteralIntrinsics::
TLiteralDefaultValueFromDecayed<TArray<int,TSizedDefaultAllocator<32>_>_>::GetValue'::__l2::
_dynamic_atexit_destructor_for__Value__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _Value;
  if (_Value == (void *)0x0) {
    return;
  }
  if (_Value != (void *)0x0) {
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

// `dynamic_atexit_destructor_for_'Value'' @ 150423370

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`Metasound::MetasoundLiteralIntrinsics::
TLiteralDefaultValueFromDecayed<TArray<float,TSizedDefaultAllocator<32>_>_>::GetValue'::__l2::
_dynamic_atexit_destructor_for__Value__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _Value;
  if (_Value == (void *)0x0) {
    return;
  }
  if (_Value != (void *)0x0) {
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

// `dynamic_atexit_destructor_for_'Value'' @ 150423390

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`Metasound::MetasoundLiteralIntrinsics::
TLiteralDefaultValueFromDecayed<TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>_>::
GetValue'::__l2::_dynamic_atexit_destructor_for__Value__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _Value;
  if (_Value == (void *)0x0) {
    return;
  }
  if (_Value != (void *)0x0) {
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

// `dynamic_atexit_destructor_for_'Value'' @ 1504233b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`Metasound::MetasoundLiteralIntrinsics::
TLiteralDefaultValueFromDecayed<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetValue'::__l2::
_dynamic_atexit_destructor_for__Value__(void)

{
  DestructItems<FString,int>(_Value,DAT_1552d2410);
  if (_Value != (FString *)0x0) {
    FMemory::Free(_Value);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Value'' @ 1504233f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`Metasound::MetasoundLiteralIntrinsics::
TLiteralDefaultValueFromDecayed<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetValue'::__l2::
_dynamic_atexit_destructor_for__Value__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _Value;
  if (_Value == (void *)0x0) {
    return;
  }
  if (_Value != (void *)0x0) {
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

// `dynamic_atexit_destructor_for_'Value'' @ 150423410

void __cdecl
`Metasound::MetasoundLiteralIntrinsics::TLiteralDefaultValueFromDecayed<FString>::GetValue'::__l2::
_dynamic_atexit_destructor_for__Value__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_static_class_FString_const&___ptr64___cdecl_Metasound::MetasoundLiteralIntrinsics::TLiteralDefaultValueFromDecayed<FString>::GetValue(void)'
               ::__l2::Value.Data.AllocatorInstance.Data;
  if (`public:_static_class_FString_const&___ptr64___cdecl_Metasound::MetasoundLiteralIntrinsics::TLiteralDefaultValueFromDecayed<FString>::GetValue(void)'
      ::__l2::Value.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_static_class_FString_const&___ptr64___cdecl_Metasound::MetasoundLiteralIntrinsics::TLiteralDefaultValueFromDecayed<FString>::GetValue(void)'
      ::__l2::Value.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'_GCsvCategory_Audio_Metasound'' @ 150423430

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_Audio_Metasound__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_Audio_Metasound.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_Audio_Metasound.Name.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_Audio_Metasound.Name.Data.AllocatorInstance.Data !=
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

