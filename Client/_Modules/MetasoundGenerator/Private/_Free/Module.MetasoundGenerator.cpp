// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGenerator
// Functions: 138

// `dynamic_initializer_for_'CVarCacheMissCsvStatsEnabled'' @ 1411eaee0

void __cdecl
Metasound::Engine::Private::_dynamic_initializer_for__CVarCacheMissCsvStatsEnabled__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarCacheMissCsvStatsEnabled,L"au.MetaSound.OperatorPool.CacheMissCsvStatsEnabled",
             local_res8,L"Record which metasounds incur a cache miss when building their graph.",0);
  atexit(_dynamic_atexit_destructor_for__CVarCacheMissCsvStatsEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarMetaSoundEnableAsyncGeneratorBuilder'' @ 1411eaf30

void __cdecl _dynamic_initializer_for__CVarMetaSoundEnableAsyncGeneratorBuilder__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMetaSoundEnableAsyncGeneratorBuilder,L"au.MetaSound.EnableAsyncGeneratorBuilder",
             &Metasound::ConsoleVariables::bEnableAsyncMetaSoundGeneratorBuilder,
             L"Enables async building of FMetaSoundGenerators\nDefault: true",0);
  atexit(_dynamic_atexit_destructor_for__CVarMetaSoundEnableAsyncGeneratorBuilder__);
  return;
}

// `dynamic_initializer_for_'CVarMetaSoundEnableExperimentalAutoCachingForAllOperators'' @ 1411eaf80

void __cdecl
_dynamic_initializer_for__CVarMetaSoundEnableExperimentalAutoCachingForAllOperators__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMetaSoundEnableExperimentalAutoCachingForAllOperators,
             L"au.MetaSound.Experimental.EnableAutoCachingForAllOperators",
             &Metasound::ConsoleVariables::bEnableExperimentalAutoCachingForAllOperators,
             L"Enables auto-caching of all MetaSound operators.\n(see MetasoundOperatorCacheSubsystem.h for manual path).\nDefault: false"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarMetaSoundEnableExperimentalAutoCachingForAllOperators__
        );
  return;
}

// `dynamic_initializer_for_'CVarMetaSoundEnableExperimentalAutoCachingForOneShotOperators'' @ 1411eafd0

void __cdecl
_dynamic_initializer_for__CVarMetaSoundEnableExperimentalAutoCachingForOneShotOperators__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMetaSoundEnableExperimentalAutoCachingForOneShotOperators,
             L"au.MetaSound.Experimental.EnableAutoCachingForOneShotOperators",
             &Metasound::ConsoleVariables::bEnableExperimentalAutoCachingForOneShotOperators,
             L"Enables auto-caching of MetaSound operators using the OneShot source interface.\n(see MetasoundOperatorCacheSubsystem.h for manual path).\nDefault: false"
             ,0);
  atexit(
        _dynamic_atexit_destructor_for__CVarMetaSoundEnableExperimentalAutoCachingForOneShotOperators__
        );
  return;
}

// `dynamic_initializer_for_'CVarMetaSoundEnableGeneratorInvalidSampleValueLogging'' @ 1411eb020

void __cdecl _dynamic_initializer_for__CVarMetaSoundEnableGeneratorInvalidSampleValueLogging__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMetaSoundEnableGeneratorInvalidSampleValueLogging,
             L"au.MetaSound.EnableGeneratorInvalidSampleValueLogging",
             &Metasound::ConsoleVariables::bEnableMetaSoundGeneratorInvalidSampleValueLogging,
             L"Enables logging of audio samples values produced from a FMetaSoundGenerator which exceed the absolute sample value threshold\nDefault: false"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarMetaSoundEnableGeneratorInvalidSampleValueLogging__);
  return;
}

// `dynamic_initializer_for_'CVarMetaSoundEnableGeneratorNonFiniteLogging'' @ 1411eb070

void __cdecl _dynamic_initializer_for__CVarMetaSoundEnableGeneratorNonFiniteLogging__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMetaSoundEnableGeneratorNonFiniteLogging,
             L"au.MetaSound.EnableGeneratorNonFiniteLogging",
             &Metasound::ConsoleVariables::bEnableMetaSoundGeneratorNonFiniteLogging,
             L"Enables logging of non-finite (NaN/inf) audio samples values produced from a FMetaSoundGenerator\nDefault: false"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarMetaSoundEnableGeneratorNonFiniteLogging__);
  return;
}

// `dynamic_initializer_for_'CVarMetaSoundGeneratorSampleValueThrehshold'' @ 1411eb0c0

void __cdecl _dynamic_initializer_for__CVarMetaSoundGeneratorSampleValueThrehshold__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMetaSoundGeneratorSampleValueThrehshold,
             L"au.MetaSound.GeneratorSampleValueThreshold",
             &Metasound::ConsoleVariables::MetasoundGeneratorSampleValueThreshold,
             L"If invalid sample value logging is enabled, this sets the maximum abs value threshold for logging samples\nDefault: 2.0"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarMetaSoundGeneratorSampleValueThrehshold__);
  return;
}

// `dynamic_initializer_for_'CVarMetasoundOperatorPoolCsvStatsEnabled'' @ 1411eb110

void __cdecl
Metasound::Engine::Private::_dynamic_initializer_for__CVarMetasoundOperatorPoolCsvStatsEnabled__
          (void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMetasoundOperatorPoolCsvStatsEnabled,L"au.MetaSound.OperatorPool.CsvStatsEnabled",
             &bMetasoundOperatorPoolCsvStatsEnabled,
             L"If we should record operator pool stats to the csv.",0);
  atexit(_dynamic_atexit_destructor_for__CVarMetasoundOperatorPoolCsvStatsEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarMetasoundPoolHitRateWindowSeconds'' @ 1411eb160

void __cdecl
Metasound::OperatorPoolPrivate::_dynamic_initializer_for__CVarMetasoundPoolHitRateWindowSeconds__
          (void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMetasoundPoolHitRateWindowSeconds,L"au.MetaSound.OperatorPoolHitRateWindowSeconds"
             ,&MetasoundPoolHitRateWindowSecondsCVar,
             L"Control how long hit/miss results matter for the success rate reporting.\n",0);
  atexit(_dynamic_atexit_destructor_for__CVarMetasoundPoolHitRateWindowSeconds__);
  return;
}

// `dynamic_initializer_for_'CVarMetasoundPoolSyncGraphRetrieval'' @ 1411eb1b0

void __cdecl
Metasound::OperatorPoolPrivate::_dynamic_initializer_for__CVarMetasoundPoolSyncGraphRetrieval__
          (void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMetasoundPoolSyncGraphRetrieval,L"au.MetaSound.OperatorPoolSyncGraphRetrieval",
             &bMetasoundPoolSyncGraphRetrieval,
             L"Retrieves graph on the requesting thread prior to asynchronous task to create instance.\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarMetasoundPoolSyncGraphRetrieval__);
  return;
}

// `dynamic_initializer_for_'CVarRecordActiveOperatorsToCsv'' @ 1411eb200

void __cdecl _dynamic_initializer_for__CVarRecordActiveOperatorsToCsv__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarRecordActiveOperatorsToCsv,L"au.MetaSound.RecordActiveMetasoundsToCsv",local_res8,
             L"Record the name of each active Metasound when csv profiling is recording.",0);
  atexit(_dynamic_atexit_destructor_for__CVarRecordActiveOperatorsToCsv__);
  return;
}

// `dynamic_initializer_for_'CommandMetaSoundExperimentalOperatorPoolSetMaxNumOperators'' @ 1411eb250

void __cdecl
_dynamic_initializer_for__CommandMetaSoundExperimentalOperatorPoolSetMaxNumOperators__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = <lambda_24>::<lambda_invoker_cdecl>;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&CommandMetaSoundExperimentalOperatorPoolSetMaxNumOperators,
             L"au.MetaSound.Experimental.OperatorPool.SetMaxNumOperators",
             L"Set the maximum number of operators in the MetaSound operator cache.",
             (TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
              *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(
        _dynamic_atexit_destructor_for__CommandMetaSoundExperimentalOperatorPoolSetMaxNumOperators__
        );
  return;
}

// `dynamic_initializer_for_'InputDataMetadata'' @ 1411eb390

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

// `dynamic_initializer_for_'InputInitialArrayDisplayName'' @ 1411eb400

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

// `dynamic_initializer_for_'InputInitialArrayTooltip'' @ 1411eb460

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

// `dynamic_initializer_for_'InputVariableMetadata'' @ 1411eb4c0

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

// `dynamic_initializer_for_'LLMTagDeclaration_Audio_MetaSound_Generator_Build'' @ 1411eb530

void __cdecl
Metasound::_dynamic_initializer_for__LLMTagDeclaration_Audio_MetaSound_Generator_Build__(void)

{
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_Audio_MetaSound_Generator_Build,L"Audio_MetaSound_Generator_Build",
             (FName)0x0,(FName)0x0,(FName)0x0,(FName)0x0,None);
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_Audio_MetaSound_Generator_Execute'' @ 1411eb580

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_Audio_MetaSound_Generator_Execute__(void)

{
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_Audio_MetaSound_Generator_Execute,
             L"Audio_MetaSound_Generator_Execute",(FName)0x0,(FName)0x0,(FName)0x0,(FName)0x0,None);
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_Audio_Metasound_OperatorPool'' @ 1411eb5d0

void __cdecl
Metasound::_dynamic_initializer_for__LLMTagDeclaration_Audio_Metasound_OperatorPool__(void)

{
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_Audio_Metasound_OperatorPool,L"Audio_Metasound_OperatorPool",
             (FName)0x0,(FName)0x0,(FName)0x0,(FName)0x0,None);
  return;
}

// `dynamic_initializer_for_'LogMetasoundGenerator'' @ 1411eb620

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogMetasoundGenerator__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogMetasoundGenerator,L"LogMetasoundGenerator",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogMetasoundGenerator__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantMetasoundGenerator'' @ 1411eb660

void __cdecl _dynamic_initializer_for__ModuleRegistrantMetasoundGenerator__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "MetasoundGenerator";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"MetasoundGenerator",0x12);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<Metasound::FMetasoundGeneratorModule>::
             InitializeModule);
  return;
}

// `dynamic_initializer_for_'OutputDataMetadata'' @ 1411eb6b0

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

// `dynamic_initializer_for_'OutputVariableMetadata'' @ 1411eb720

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

// `dynamic_initializer_for_'_GCsvCategory_MetaSound_ActiveOperators'' @ 1411eb790

void __cdecl _dynamic_initializer_for___GCsvCategory_MetaSound_ActiveOperators__(void)

{
  FString::operator=(&_GCsvCategory_MetaSound_ActiveOperators.Name,L"MetaSound_ActiveOperators");
  _GCsvCategory_MetaSound_ActiveOperators.Index =
       FCsvProfiler::RegisterCategory(&_GCsvCategory_MetaSound_ActiveOperators.Name,true,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_MetaSound_ActiveOperators__);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_MetaSound_AvailableCachedOperators'' @ 1411eb7e0

void __cdecl
Metasound::Engine::_dynamic_initializer_for___GCsvCategory_MetaSound_AvailableCachedOperators__
          (void)

{
  ::FString::operator=
            (&_GCsvCategory_MetaSound_AvailableCachedOperators.Name,
             L"MetaSound_AvailableCachedOperators");
  _GCsvCategory_MetaSound_AvailableCachedOperators.Index =
       FCsvProfiler::RegisterCategory
                 (&_GCsvCategory_MetaSound_AvailableCachedOperators.Name,true,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_MetaSound_AvailableCachedOperators__);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_MetaSound_OperatorCacheUtilization'' @ 1411eb830

void __cdecl
Metasound::Engine::_dynamic_initializer_for___GCsvCategory_MetaSound_OperatorCacheUtilization__
          (void)

{
  ::FString::operator=
            (&_GCsvCategory_MetaSound_OperatorCacheUtilization.Name,
             L"MetaSound_OperatorCacheUtilization");
  _GCsvCategory_MetaSound_OperatorCacheUtilization.Index =
       FCsvProfiler::RegisterCategory
                 (&_GCsvCategory_MetaSound_OperatorCacheUtilization.Name,true,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_MetaSound_OperatorCacheUtilization__);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_MetaSound_OperatorPool'' @ 1411eb880

void __cdecl Metasound::_dynamic_initializer_for___GCsvCategory_MetaSound_OperatorPool__(void)

{
  ::FString::operator=(&_GCsvCategory_MetaSound_OperatorPool.Name,L"MetaSound_OperatorPool");
  _GCsvCategory_MetaSound_OperatorPool.Index =
       FCsvProfiler::RegisterCategory(&_GCsvCategory_MetaSound_OperatorPool.Name,true,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_MetaSound_OperatorPool__);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_Metasound_OperatorCacheMiss'' @ 1411eb8d0

void __cdecl
Metasound::Engine::_dynamic_initializer_for___GCsvCategory_Metasound_OperatorCacheMiss__(void)

{
  ::FString::operator=
            (&_GCsvCategory_Metasound_OperatorCacheMiss.Name,L"Metasound_OperatorCacheMiss");
  _GCsvCategory_Metasound_OperatorCacheMiss.Index =
       FCsvProfiler::RegisterCategory(&_GCsvCategory_Metasound_OperatorCacheMiss.Name,true,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_Metasound_OperatorCacheMiss__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterMetaSound_OperatorPool_HitRatio'' @ 1411eb920

void __cdecl
Metasound::_dynamic_initializer_for____GTraceCounterMetaSound_OperatorPool_HitRatio__(void)

{
  __GTraceCounterMetaSound_OperatorPool_HitRatio.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"MetaSound/OperatorPool/HitRatio",TraceCounterType_Float,
                  TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterMetaSound_OperatorPool_HitRatio.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterMetaSound_OperatorPool_HitRatio__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterMetaSound_OperatorPool_NumOperators'' @ 1411eb960

void __cdecl
Metasound::_dynamic_initializer_for____GTraceCounterMetaSound_OperatorPool_NumOperators__(void)

{
  __GTraceCounterMetaSound_OperatorPool_NumOperators.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"MetaSound/OperatorPool/NumOperatorsInPool",TraceCounterType_Int,
                  TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterMetaSound_OperatorPool_NumOperators.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterMetaSound_OperatorPool_NumOperators__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterMetaSound_OperatorPool_WindowedHitRatio'' @ 1411eb9a0

void __cdecl
Metasound::_dynamic_initializer_for____GTraceCounterMetaSound_OperatorPool_WindowedHitRatio__(void)

{
  __GTraceCounterMetaSound_OperatorPool_WindowedHitRatio.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"MetaSound/OperatorPool/WindowedHitRatio",TraceCounterType_Float,
                  TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterMetaSound_OperatorPool_WindowedHitRatio.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterMetaSound_OperatorPool_WindowedHitRatio__);
  return;
}

// `scalar_deleting_destructor' @ 14b2a1ba0

void * __thiscall
Metasound::IMetasoundGeneratorModule::_scalar_deleting_destructor_
          (IMetasoundGeneratorModule *this,uint param_1)

{
  *this = (IMetasoundGeneratorModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b2a2050

void * __thiscall
Metasound::FMetasoundGeneratorModule::_scalar_deleting_destructor_
          (FMetasoundGeneratorModule *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OperatorInstanceCounterManager).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OperatorPool).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// <lambda_invoker_cdecl> @ 14b2a20b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
<lambda_24>::<lambda_invoker_cdecl>(TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FName *pFVar5;
  FMetasoundGeneratorModule *pFVar6;
  wchar_t *_Str;
  FOperatorPool *this;
  FName local_res8;
  FOperatorPool *local_18;
  TReferenceControllerBase<1> *local_10;
  
  if (0 < param_1->ArrayNum) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar1 + 8) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)pFVar1;
    }
    uVar4 = _wtoi(_Str);
    if (-1 < (int)uVar4) {
      pFVar5 = ::FName::FName(&local_res8,"MetasoundGenerator");
      pFVar6 = FModuleManager::GetModuleChecked<Metasound::FMetasoundGeneratorModule>(*pFVar5);
      (**(code **)(pFVar6->_padding_ + 0x40))(pFVar6,&local_18);
      if (local_18 != (FOperatorPool *)0x0) {
        this = local_18;
        if ((local_18 == (FOperatorPool *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), this = local_18, bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (this->bStopping == (atomic<bool>)0x0) {
          lpCriticalSection = &this->CriticalSection;
          if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::ReportNotNullPtr();
          }
          EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          (this->Settings).MaxNumOperators = uVar4;
          Metasound::FOperatorPool::Trim(this);
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        }
        if (3 < (byte)LogMetasoundGenerator._0_1_) {
          UE::Logging::Private::BasicLog<4>
                    ((FStaticBasicLogRecord *)&PTR_u_Operator_cache__15239e608,
                     (FLogCategoryBase *)&LogMetasoundGenerator);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
    }
  }
  return;
}

// AddLambda<`Metasound::FMetasoundGeneratorModule::StartupModule'::__l2::<lambda_1>_> @ 14b2a2500

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
AddLambda<_Metasound::FMetasoundGeneratorModule::StartupModule_::__l2::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this,
          <lambda_1> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FConcurrentInstanceCounterManager *pFVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pFVar5 = (FConcurrentInstanceCounterManager *)0x0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`Metasound::FMetasoundGeneratorModule::StartupModule'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *in_R8;
    puVar3[4] = in_R8[1];
    in_R8[1] = 0;
    *in_R8 = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  (param_1->WeakCounterManager).Object = (FConcurrentInstanceCounterManager *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      pFVar5 = (FConcurrentInstanceCounterManager *)*puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    (param_1->WeakCounterManager).Object = pFVar5;
    if (iVar2 == *(int *)&this->field_0x14) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar2 + 1;
    pFVar6 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar2 * 0x10);
    *pFVar6 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar6 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_60.DelegateSize;
    local_60.DelegateSize = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// BinarySearchBy<TArray<TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterSetter>,TSizedDefaultAllocator<32>_>,FName,TSortedMap<FName,Metasound::MetasoundGeneratorPrivate::FParameterSetter,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess> @ 14b2a2b40

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterSetter>,TSizedDefaultAllocator<32>_>,FName,TSortedMap<FName,Metasound::MetasoundGeneratorPrivate::FParameterSetter,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
          (TArray<TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterSetter>,TSizedDefaultAllocator<32>_>
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
      iVar6 = *(int *)(pFVar2 + (longlong)iVar5 * 0x28) - (param_2->ComparisonIndex).Value;
      if (iVar6 == 0) {
        iVar6 = *(int *)(pFVar2 + (longlong)iVar5 * 0x28 + 4) - param_2->Number;
      }
      if (iVar6 < 0) {
        iVar4 = iVar5 + (uVar7 & 1);
      }
      uVar3 = uVar7 >> 1;
      uVar7 = uVar7 >> 1;
    } while (uVar3 != 0);
    if (iVar4 < (int)uVar1) {
      iVar5 = (param_2->ComparisonIndex).Value - *(int *)(pFVar2 + (longlong)iVar4 * 0x28);
      if (iVar5 == 0) {
        iVar5 = param_2->Number - *(int *)(pFVar2 + (longlong)iVar4 * 0x28 + 4);
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

// DestructItems<TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterSetter>,int> @ 14b2a34b0

void __cdecl
DestructItems<TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterSetter>,int>
          (TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterSetter> *param_1,int param_2
          )

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)&param_1->field_0x20;
    do {
      puVar1 = (undefined8 *)*plVar2;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      plVar2 = plVar2 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<Metasound::FOperatorAndInputs,int> @ 14b2a34f0

void __cdecl
DestructItems<Metasound::FOperatorAndInputs,int>(FOperatorAndInputs *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  TArray<Metasound::VertexPrivate::FSubInterfaceLayout,TSizedDefaultAllocator<32>_> *pTVar3;
  
  if (param_2 != 0) {
    pTVar3 = &(param_1->Inputs).SubInterfaces;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)((longlong)(pTVar3 + 1) + 8));
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)(pTVar3->AllocatorInstance).Data,pTVar3->ArrayNum);
      pFVar1 = (pTVar3->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<Metasound::VertexDataPrivate::FInputBinding,int>
                ((FInputBinding *)
                 (((TArray<Metasound::VertexDataPrivate::FInputBinding,TSizedDefaultAllocator<32>_>
                    *)(pTVar3 + -1))->AllocatorInstance).Data,
                 ((TArray<Metasound::VertexDataPrivate::FInputBinding,TSizedDefaultAllocator<32>_> *
                  )(pTVar3 + -1))->ArrayNum);
      pFVar1 = (((TArray<Metasound::VertexDataPrivate::FInputBinding,TSizedDefaultAllocator<32>_> *)
                (pTVar3 + -1))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      puVar2 = *(undefined8 **)(pTVar3 + -2);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      pTVar3 = pTVar3 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TUniquePtr<Metasound::Frontend::IVertexAnalyzer,TDefaultDelete<Metasound::Frontend::IVertexAnalyzer>_>,int> @ 14b2a3570

void __cdecl
DestructItems<TUniquePtr<Metasound::Frontend::IVertexAnalyzer,TDefaultDelete<Metasound::Frontend::IVertexAnalyzer>_>,int>
          (TUniquePtr<Metasound::Frontend::IVertexAnalyzer,TDefaultDelete<Metasound::Frontend::IVertexAnalyzer>_>
           *param_1,int param_2)

{
  IVertexAnalyzer *pIVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pIVar1 = param_1->Ptr;
    if (pIVar1 != (IVertexAnalyzer *)0x0) {
      (**(code **)pIVar1->_padding_)(pIVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// LowerBoundInternal<TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterSetter>_const_,int,FName,TSortedMap<FName,Metasound::MetasoundGeneratorPrivate::FParameterSetter,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess> @ 14b2a4b70

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterSetter>_const_,int,FName,TSortedMap<FName,Metasound::MetasoundGeneratorPrivate::FParameterSetter,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
          (TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterSetter> *param_1,int param_2
          ,FName *param_3,FKeyForward param_4,FNameFastLess param_5)

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

// RecordOperatorStat<int> @ 14b2a4f00

void __cdecl
Metasound::OperatorPoolPrivate::RecordOperatorStat<int>
          (FTopLevelAssetPath *param_1,int param_2,int *param_3,ECsvCustomStatOp param_4)

{
  UPackage *pUVar1;
  FName local_18 [2];
  
  pUVar1 = GetTransientPackage();
  if ((pUVar1 == (UPackage *)0x0) || (param_1->PackageName != (FName)pUVar1->_padding_)) {
    FCsvProfiler::Get();
    local_18[0] = param_1->PackageName;
  }
  else {
    FCsvProfiler::Get();
    local_18[0] = param_1->AssetName;
  }
  FCsvProfiler::RecordCustomStat(local_18,param_2,*param_3,param_4);
  return;
}

// RecordOperatorStat<float> @ 14b2a4f80

void __cdecl
Metasound::OperatorPoolPrivate::RecordOperatorStat<float>
          (FTopLevelAssetPath *param_1,int param_2,float *param_3,ECsvCustomStatOp param_4)

{
  UPackage *pUVar1;
  FName local_18 [2];
  
  pUVar1 = GetTransientPackage();
  if ((pUVar1 == (UPackage *)0x0) || (param_1->PackageName != (FName)pUVar1->_padding_)) {
    FCsvProfiler::Get();
    local_18[0] = param_1->PackageName;
  }
  else {
    FCsvProfiler::Get();
    local_18[0] = param_1->AssetName;
  }
  FCsvProfiler::RecordCustomStat(local_18,param_2,*param_3,param_4);
  return;
}

// RecordOperatorStat<double> @ 14b2a5000

void __cdecl
Metasound::OperatorPoolPrivate::RecordOperatorStat<double>
          (FTopLevelAssetPath *param_1,int param_2,double *param_3,ECsvCustomStatOp param_4)

{
  UPackage *pUVar1;
  FName local_18 [2];
  
  pUVar1 = GetTransientPackage();
  if ((pUVar1 == (UPackage *)0x0) || (param_1->PackageName != (FName)pUVar1->_padding_)) {
    FCsvProfiler::Get();
    local_18[0] = param_1->PackageName;
  }
  else {
    FCsvProfiler::Get();
    local_18[0] = param_1->AssetName;
  }
  FCsvProfiler::RecordCustomStat(local_18,param_2,*param_3,param_4);
  return;
}

// RemoveAll<`TArray<Metasound::FOperatorPoolEntryID,TSizedDefaultAllocator<32>_>::Remove'::__l2::<lambda_1>_> @ 14b2a52d0

int __thiscall
TArray<Metasound::FOperatorPoolEntryID,TSizedDefaultAllocator<32>_>::
RemoveAll<_TArray<Metasound::FOperatorPoolEntryID,TSizedDefaultAllocator<32>_>::Remove_::__l2::<lambda_1>_>
          (TArray<Metasound::FOperatorPoolEntryID,TSizedDefaultAllocator<32>_> *this,
          <lambda_1> *param_1)

{
  int iVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  int iVar10;
  byte bVar11;
  int iVar12;
  int local_res18;
  
  iVar1 = this->ArrayNum;
  lVar6 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  piVar2 = *(int **)param_1;
  iVar12 = 0;
  pFVar3 = (this->AllocatorInstance).Data;
  local_res18 = 0;
  if ((((piVar2[3] == *(int *)(pFVar3 + 0xc) && piVar2[2] == *(int *)(pFVar3 + 8)) &&
       piVar2[1] == *(int *)(pFVar3 + 4)) && *piVar2 == *(int *)pFVar3) &&
     (bVar4 = Metasound::operator==
                        ((FOperatorSettings *)(pFVar3 + 0x10),(FOperatorSettings *)(piVar2 + 4)),
     bVar4)) {
    bVar11 = 0;
  }
  else {
    bVar11 = 1;
  }
  lVar7 = 0;
  iVar9 = 0;
  do {
    lVar7 = lVar7 + 1;
    iVar10 = iVar9 + 1;
    if (lVar7 < lVar6) {
      pFVar8 = pFVar3 + (lVar7 * 8 + 2) * 4;
      do {
        piVar2 = *(int **)param_1;
        if ((((*(int *)(pFVar8 + 4) == piVar2[3] && *(int *)(pFVar8 + -4) == piVar2[1]) &&
             *(int *)(pFVar8 + -8) == *piVar2) && piVar2[2] == *(int *)pFVar8) &&
           (bVar4 = Metasound::operator==
                              ((FOperatorSettings *)(pFVar3 + ((longlong)iVar10 * 8 + 4) * 4),
                               (FOperatorSettings *)(piVar2 + 4)), bVar4)) {
          bVar5 = 0;
        }
        else {
          bVar5 = 1;
        }
        iVar12 = local_res18;
        if (bVar11 != bVar5) break;
        iVar10 = iVar10 + 1;
        lVar7 = lVar7 + 1;
        pFVar8 = pFVar8 + 0x20;
      } while (lVar7 < lVar6);
    }
    if (bVar11 != 0) {
      if (iVar12 != iVar9) {
        memmove(pFVar3 + (longlong)iVar12 * 0x20,pFVar3 + (longlong)iVar9 * 0x20,
                (longlong)(iVar10 - iVar9) << 5);
      }
      iVar12 = iVar12 + (iVar10 - iVar9);
      local_res18 = iVar12;
    }
    bVar11 = bVar11 ^ 1;
    iVar9 = iVar10;
    if (lVar6 <= lVar7) {
      this->ArrayNum = iVar12;
      return iVar1 - iVar12;
    }
  } while( true );
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<TSharedPtr<FMetasoundParameterPackStorage,1>,FMemory>::FNode_*>_> @ 14b2a5b40

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<TSharedPtr<FMetasoundParameterPackStorage,1>,FMemory>::FNode_*>_>
          (_Atomic_padded<TMpscQueue<TSharedPtr<FMetasoundParameterPackStorage,1>,FMemory>::FNode_*>
           *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<TSharedPtr<FMetasoundParameterPackStorage,1>,FMemory>::FNode_*>_> @ 14b2a5b50

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<TSharedPtr<FMetasoundParameterPackStorage,1>,FMemory>::FNode_*>_>
          (_Atomic_padded<TMpscQueue<TSharedPtr<FMetasoundParameterPackStorage,1>,FMemory>::FNode_*>
           *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_reinterpret_as<__int64,TMpscQueue<TSharedPtr<FMetasoundParameterPackStorage,1>,FMemory>::FNode_*> @ 14b2a5b60

long64 __cdecl
std::
_Atomic_reinterpret_as<__int64,TMpscQueue<TSharedPtr<FMetasoundParameterPackStorage,1>,FMemory>::FNode_*>
          (FNode **param_1)

{
  return (long64)*param_1;
}

// FThreadSafeStaticStat<`Metasound::FAsyncMetaSoundBuilderBase::GetStatId'::__l2::FStat_FAsyncMetaSoundBuilder> @ 14b2a5b70

/* WARNING: Enum "Type": Some values do not have unique names */

FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_Metasound::FAsyncMetaSoundBuilderBase::GetStatId(void)const_::_2_::FStat_FAsyncMetaSoundBuilder>
* __thiscall
FThreadSafeStaticStat<`Metasound::FAsyncMetaSoundBuilderBase::GetStatId'::__l2::FStat_FAsyncMetaSoundBuilder>
::
FThreadSafeStaticStat<_Metasound::FAsyncMetaSoundBuilderBase::GetStatId_::__l2::FStat_FAsyncMetaSoundBuilder>
          (void *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  *(undefined8 *)this = 0;
  if (*(longlong *)this == 0) {
    pFVar1 = ::FName::FName(local_res8,"FAsyncMetaSoundBuilder");
    FThreadSafeStaticStatBase::DoSetup
              (this,*pFVar1,L"FAsyncMetaSoundBuilder","STATGROUP_ThreadPoolAsyncTasks",
               "STATCAT_Advanced",L"ThreadPool Async Tasks",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return this;
}

// TExecutableTaskBase<`Metasound::FOperatorPool::ExecuteTaskAsync'::__l2::<lambda_1>,void,void> @ 14b2a5e80

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TExecutableTaskBase<_private:_bool___cdecl_Metasound::FOperatorPool::ExecuteTaskAsync(TUniqueFunction<void___cdecl(int,TWeakPtr<Metasound::FOperatorPool,1>)>_&&)_::_2_::<lambda_1>,void,void>
* __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`Metasound::FOperatorPool::ExecuteTaskAsync'::__l2::<lambda_1>,void,void>::
TExecutableTaskBase<_Metasound::FOperatorPool::ExecuteTaskAsync_::__l2::<lambda_1>,void,void>
          (void *this,wchar_t *param_1,<lambda_1> *param_2,ETaskPriority param_3,
          EExtendedTaskPriority param_4,ETaskFlags param_5)

{
  atomic<unsigned_char> *this_00;
  atomic<unsigned_char> aVar1;
  code *pcVar2;
  bool bVar3;
  ulong64 uVar4;
  TExecutableTaskBase<_private:_bool___cdecl_Metasound::FOperatorPool::ExecuteTaskAsync(TUniqueFunction<void___cdecl(int,TWeakPtr<Metasound::FOperatorPool,1>)>_&&)_::_2_::<lambda_1>,void,void>
  *pTVar5;
  FTask *pFVar6;
  undefined8 uVar7;
  ETaskPriority EVar8;
  
  uVar7 = 0;
  *(undefined8 *)((longlong)this + 0x38) = 0;
  *(undefined ***)this = &___7FTaskBase_Private_Tasks_UE__6B_;
  *(undefined4 *)((longlong)this + 0x30) = 2;
  *(undefined4 *)((longlong)this + 0x34) = 1;
  *(undefined4 *)((longlong)this + 0x40) = 0;
  *(undefined1 *)((longlong)this + 0x45) = 0;
  *(undefined4 *)((longlong)this + 0x48) = 0xffffffff;
  uVar4 = TaskTrace::GenerateTaskId();
  *(ulong64 *)((longlong)this + 0x50) = uVar4;
  this_00 = (atomic<unsigned_char> *)((longlong)this + 0x70);
  *(undefined8 *)((longlong)this + 0x60) = 0;
  *(undefined4 *)((longlong)this + 0x68) = 0;
  *(undefined4 *)((longlong)this + 0x6c) = 1;
  *this_00 = (atomic<unsigned_char>)0x1;
  *(undefined ***)((longlong)this + 0xa0) =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  *(undefined8 *)((longlong)this + 0xb0) = 0xe800000000000020;
  *(undefined8 *)((longlong)this + 0xa8) = 0;
  *(undefined8 *)((longlong)this + 0xc0) = 0;
  *(undefined4 *)((longlong)this + 200) = 0;
  *(undefined4 *)((longlong)this + 0xcc) = 1;
  *(undefined2 *)((longlong)this + 0xd0) = 0;
  LOCK();
  aVar1 = *this_00;
  *this_00 = (atomic<unsigned_char>)((char)*this_00 + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    FMutex::WakeWaitingThread((FMutex *)this_00);
  }
  *(undefined ***)this =
       &TExecutableTaskBase<`Metasound::FOperatorPool::ExecuteTaskAsync'::`2'::<lambda_1>,void,void>
        ::_vftable_;
  if (((*(ulonglong *)((longlong)this + 0xb0) & 0x20) == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x1dd,L"State: %d"), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TExecutableTaskBase<_private:_bool___cdecl_Metasound::FOperatorPool::ExecuteTaskAsync(TUniqueFunction<void___cdecl(int,TWeakPtr<Metasound::FOperatorPool,1>)>_&&)_::_2_::<lambda_1>,void,void>
              *)(*pcVar2)();
    return pTVar5;
  }
  (**(code **)(*(longlong *)((longlong)this + 0xa0) + 0x18))
            ((longlong)this + 0xa0,(longlong)this + 0x78);
  *(void **)((longlong)this + 0x78) = this;
  *(undefined ***)((longlong)this + 0xa0) =
       &
       ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  *(void **)((longlong)this + 0x80) = this;
  pFVar6 = LowLevelTasks::FTask::GetActiveTask();
  if (pFVar6 == (FTask *)0x0) {
    EVar8 = Default;
    if (param_3 != Inherit) {
      EVar8 = param_3;
    }
  }
  else {
    if (param_3 == Inherit) {
      param_3 = (ETaskPriority)((ulonglong)*(undefined8 *)&pFVar6->field_0x38 >> 0x3b);
    }
    uVar7 = *(undefined8 *)&pFVar6->field_0x30;
    EVar8 = param_3;
  }
  *(undefined8 *)((longlong)this + 0xa8) = uVar7;
  *(ulonglong *)((longlong)this + 0xb0) =
       ((longlong)(char)EVar8 << 0x35 | (ulonglong)param_1 & 0x1fffffffffffff | 0xff00000000000000)
       << 6;
  *(EExtendedTaskPriority *)((longlong)this + 0x44) = param_4;
  FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)((longlong)this + 8));
  *(FOperatorPool **)((longlong)this + 0xe0) = (param_2->WeakOpPool).Object;
  *(TReferenceControllerBase<1> **)((longlong)this + 0xe8) =
       (param_2->WeakOpPool).WeakReferenceCount.ReferenceController;
  (param_2->WeakOpPool).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (param_2->WeakOpPool).Object = (FOperatorPool *)0x0;
  *(int *)((longlong)this + 0xf0) = param_2->TaskId;
  *(undefined8 *)((longlong)this + 0x100) = *(undefined8 *)&param_2->PoolFunction;
  *(undefined8 *)((longlong)this + 0x128) = *(undefined8 *)&(param_2->PoolFunction).field_0x28;
  *(undefined8 *)&(param_2->PoolFunction).field_0x28 = 0;
  uVar7 = *(undefined8 *)&(param_2->PoolFunction).field_0x18;
  *(undefined8 *)((longlong)this + 0x110) = *(undefined8 *)&(param_2->PoolFunction).field_0x10;
  *(undefined8 *)((longlong)this + 0x118) = uVar7;
  *(undefined8 *)((longlong)this + 0x120) = *(undefined8 *)&(param_2->PoolFunction).field_0x20;
  if (*(longlong *)((longlong)this + 0x100) != 0) {
    *(undefined8 *)&param_2->PoolFunction = 0;
  }
  return this;
}

// ~TFunction_OwnedObject<`Metasound::FOperatorPool::AddOperator'::__l2::<lambda_1>,1,1> @ 14b2a7740

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::FOperatorPool::AddOperator'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_Metasound::FOperatorPool::AddOperator_::__l2::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Metasound::FOperatorPool::AddOperator'::`2'::<lambda_1>,1,1>::
        _vftable_;
  Metasound::FOperatorAndInputs::~FOperatorAndInputs((FOperatorAndInputs *)((longlong)this + 0x28));
  return;
}

// ~TFunction_OwnedObject<`Metasound::FMetasoundGenerator::AddOutputVertexAnalyzer'::__l2::<lambda_1>,1,1> @ 14b2a7760

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::FMetasoundGenerator::AddOutputVertexAnalyzer'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_Metasound::FMetasoundGenerator::AddOutputVertexAnalyzer_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Metasound::FMetasoundGenerator::AddOutputVertexAnalyzer'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Metasound::FOperatorPool::BuildAndAddOperator'::__l2::<lambda_1>,1,1> @ 14b2a7780

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::FOperatorPool::BuildAndAddOperator'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_Metasound::FOperatorPool::BuildAndAddOperator_::__l2::<lambda_1>,1,1>
          (void *this)

{
  FGeneratorInitParams *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`Metasound::FOperatorPool::BuildAndAddOperator'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  this_00 = *(FGeneratorInitParams **)((longlong)this + 0x18);
  if (this_00 != (FGeneratorInitParams *)0x0) {
    Metasound::FGeneratorInitParams::~FGeneratorInitParams(this_00);
    ::operator_delete(this_00,0xf0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`Metasound::FAsyncDynamicMetaSoundBuilder::DoWork'::__l2::<lambda_1>,0,0> @ 14b2a77d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::FAsyncDynamicMetaSoundBuilder::DoWork'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_Metasound::FAsyncDynamicMetaSoundBuilder::DoWork_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Metasound::FAsyncDynamicMetaSoundBuilder::DoWork'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Metasound::FOperatorPool::RemoveOperatorsWithID'::__l2::<lambda_1>,1,1> @ 14b2a77f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::FOperatorPool::RemoveOperatorsWithID'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_Metasound::FOperatorPool::RemoveOperatorsWithID_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Metasound::FOperatorPool::RemoveOperatorsWithID'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Metasound::FMetasoundGenerator::RemoveOutputVertexAnalyzer'::__l2::<lambda_1>,1,1> @ 14b2a7810

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::FMetasoundGenerator::RemoveOutputVertexAnalyzer'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_Metasound::FMetasoundGenerator::RemoveOutputVertexAnalyzer_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Metasound::FMetasoundGenerator::RemoveOutputVertexAnalyzer'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Metasound::FAsyncDynamicMetaSoundBuilder::DoWork'::__l2::<lambda_2>,0,0> @ 14b2a7830

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::FAsyncDynamicMetaSoundBuilder::DoWork'::__l2::<lambda_2>,0,0>::
~TFunction_OwnedObject<_Metasound::FAsyncDynamicMetaSoundBuilder::DoWork_::__l2::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Metasound::FAsyncDynamicMetaSoundBuilder::DoWork'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Metasound::FAsyncDynamicMetaSoundBuilder::DoWork'::__l2::<lambda_3>,0,0> @ 14b2a7850

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::FAsyncDynamicMetaSoundBuilder::DoWork'::__l2::<lambda_3>,0,0>::
~TFunction_OwnedObject<_Metasound::FAsyncDynamicMetaSoundBuilder::DoWork_::__l2::<lambda_3>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Metasound::FAsyncDynamicMetaSoundBuilder::DoWork'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Metasound::FAsyncDynamicMetaSoundBuilder::DoWork'::__l2::<lambda_4>,0,0> @ 14b2a7870

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::FAsyncDynamicMetaSoundBuilder::DoWork'::__l2::<lambda_4>,0,0>::
~TFunction_OwnedObject<_Metasound::FAsyncDynamicMetaSoundBuilder::DoWork_::__l2::<lambda_4>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Metasound::FAsyncDynamicMetaSoundBuilder::DoWork'::`2'::<lambda_4>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Metasound::FAsyncDynamicMetaSoundBuilder::DoWork'::__l2::<lambda_5>,0,0> @ 14b2a7890

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::FAsyncDynamicMetaSoundBuilder::DoWork'::__l2::<lambda_5>,0,0>::
~TFunction_OwnedObject<_Metasound::FAsyncDynamicMetaSoundBuilder::DoWork_::__l2::<lambda_5>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Metasound::FAsyncDynamicMetaSoundBuilder::DoWork'::`2'::<lambda_5>,0,0>
        ::_vftable_;
  return;
}

// operator== @ 14b2a8940

bool __cdecl Metasound::operator==(FOperatorPoolEntryID *param_1,FOperatorPoolEntryID *param_2)

{
  bool bVar1;
  
  if ((((param_1->OperatorID).D == (param_2->OperatorID).D &&
       (param_1->OperatorID).C == (param_2->OperatorID).C) &&
      (param_1->OperatorID).B == (param_2->OperatorID).B) &&
      (param_1->OperatorID).A == (param_2->OperatorID).A) {
    bVar1 = operator==(&param_1->OperatorSettings,&param_2->OperatorSettings);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// operator< @ 14b2a8a30

bool __cdecl Metasound::operator<(FOperatorPoolEntryID *param_1,FOperatorPoolEntryID *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  uVar1 = (param_2->OperatorID).A;
  uVar2 = (param_1->OperatorID).A;
  if (uVar2 < uVar1) {
    return true;
  }
  if (uVar2 == uVar1) {
    uVar2 = (param_2->OperatorID).B;
    uVar3 = (param_1->OperatorID).B;
    if (uVar3 < uVar2) {
      return true;
    }
    if (uVar3 == uVar2) {
      uVar2 = (param_2->OperatorID).C;
      uVar3 = (param_1->OperatorID).C;
      if (uVar3 < uVar2) {
        return true;
      }
      if ((uVar3 == uVar2) && ((param_1->OperatorID).D < (param_2->OperatorID).D)) {
        return true;
      }
    }
  }
  if ((param_1->OperatorID).A <= uVar1) {
    uVar1 = (param_1->OperatorID).B;
    uVar2 = (param_2->OperatorID).B;
    if (uVar1 <= uVar2) {
      if (uVar2 <= uVar1) {
        uVar1 = (param_1->OperatorID).C;
        uVar2 = (param_2->OperatorID).C;
        if (uVar2 < uVar1) {
          return false;
        }
        if ((uVar2 <= uVar1) && ((param_2->OperatorID).D < (param_1->OperatorID).D)) {
          return false;
        }
      }
      bVar4 = operator<(&param_1->OperatorSettings,&param_2->OperatorSettings);
      return bVar4;
    }
  }
  return false;
}

// `scalar_deleting_destructor' @ 14b2a9ea0

void * __thiscall
FAsyncTask<Metasound::FAsyncDynamicMetaSoundBuilder>::_scalar_deleting_destructor_
          (FAsyncTask<Metasound::FAsyncDynamicMetaSoundBuilder> *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Task).InitParams.TransformQueue.SharedReferenceCount.ReferenceController);
  Metasound::FGeneratorInitParams::~FGeneratorInitParams
            ((FGeneratorInitParams *)&(this->Task).InitParams);
  FAsyncTaskBase::~FAsyncTaskBase((FAsyncTaskBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b2a9f00

void * __thiscall
FAsyncTask<Metasound::FAsyncMetaSoundBuilder>::_scalar_deleting_destructor_
          (FAsyncTask<Metasound::FAsyncMetaSoundBuilder> *this,uint param_1)

{
  Metasound::FGeneratorInitParams::~FGeneratorInitParams(&(this->Task).InitParams);
  FAsyncTaskBase::~FAsyncTaskBase((FAsyncTaskBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x128);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b2a9f50

void * __thiscall
IBaseDelegateInstance<void___cdecl(FName,TSharedPtr<Metasound::IOutputStorage,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FName,TSharedPtr<Metasound::IOutputStorage,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b2a9f80

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FName,TSharedPtr<Metasound::IOutputStorage,1>),FDefaultDelegateUserPolicy,``Metasound::FMetasoundGenerator::AddOutputVertexAnalyzer'::__l2::<lambda_1>::operator()'::__l20::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b2a9fb0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`Metasound::FMetasoundGeneratorModule::StartupModule'::__l2::<lambda_1>_>
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

// `scalar_deleting_destructor' @ 14b2aa010

void * __thiscall
TBaseRawMethodDelegateInstance<0,Metasound::Engine::FOperatorCacheStatTracker,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,Metasound::Engine::FOperatorCacheStatTracker,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b2aa040

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FName,TSharedPtr<Metasound::IOutputStorage,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FName,TSharedPtr<Metasound::IOutputStorage,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b2aa070

void * __thiscall
UE::Tasks::Private::TExecutableTask<`Metasound::FOperatorPool::ExecuteTaskAsync'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x140,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b2aa0d0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`Metasound::FOperatorPool::ExecuteTaskAsync'::__l2::<lambda_1>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b2aa110

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::FOperatorPool::AddOperator'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Metasound::FOperatorPool::AddOperator'::`2'::<lambda_1>,1,1>::
        _vftable_;
  Metasound::FOperatorAndInputs::~FOperatorAndInputs((FOperatorAndInputs *)((longlong)this + 0x28));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b2aa160

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::FMetasoundGenerator::AddOutputVertexAnalyzer'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Metasound::FMetasoundGenerator::AddOutputVertexAnalyzer'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b2aa1a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::FOperatorPool::BuildAndAddOperator'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FGeneratorInitParams *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`Metasound::FOperatorPool::BuildAndAddOperator'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  this_00 = *(FGeneratorInitParams **)((longlong)this + 0x18);
  if (this_00 != (FGeneratorInitParams *)0x0) {
    Metasound::FGeneratorInitParams::~FGeneratorInitParams(this_00);
    ::operator_delete(this_00,0xf0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b2aa220

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::FAsyncDynamicMetaSoundBuilder::DoWork'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Metasound::FAsyncDynamicMetaSoundBuilder::DoWork'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b2aa260

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::FOperatorPool::RemoveOperatorsWithID'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Metasound::FOperatorPool::RemoveOperatorsWithID'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b2aa2a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::FMetasoundGenerator::RemoveOutputVertexAnalyzer'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Metasound::FMetasoundGenerator::RemoveOutputVertexAnalyzer'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b2aa2e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::FAsyncDynamicMetaSoundBuilder::DoWork'::__l2::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Metasound::FAsyncDynamicMetaSoundBuilder::DoWork'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b2aa320

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::FAsyncDynamicMetaSoundBuilder::DoWork'::__l2::<lambda_3>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Metasound::FAsyncDynamicMetaSoundBuilder::DoWork'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b2aa360

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::FAsyncDynamicMetaSoundBuilder::DoWork'::__l2::<lambda_4>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Metasound::FAsyncDynamicMetaSoundBuilder::DoWork'::`2'::<lambda_4>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b2aa3a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Metasound::FAsyncDynamicMetaSoundBuilder::DoWork'::__l2::<lambda_5>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Metasound::FAsyncDynamicMetaSoundBuilder::DoWork'::`2'::<lambda_5>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b2aa3e0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::FConcurrentInstanceCounterManager,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<Metasound::FConcurrentInstanceCounterManager,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b2aa420

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::FOperatorPool,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<Metasound::FOperatorPool,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x210);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b2aa460

void * __thiscall
Metasound::FAsyncDynamicMetaSoundBuilder::_scalar_deleting_destructor_
          (FAsyncDynamicMetaSoundBuilder *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->InitParams).TransformQueue.SharedReferenceCount.ReferenceController);
  FGeneratorInitParams::~FGeneratorInitParams((FGeneratorInitParams *)&this->InitParams);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b2aa4c0

void * __thiscall
Metasound::FAsyncMetaSoundBuilder::_scalar_deleting_destructor_
          (FAsyncMetaSoundBuilder *this,uint param_1)

{
  FGeneratorInitParams::~FGeneratorInitParams(&this->InitParams);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b2aa500

void * __thiscall
Metasound::FAsyncMetaSoundBuilderBase::_scalar_deleting_destructor_
          (FAsyncMetaSoundBuilderBase *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b2aa530

void * __thiscall
Metasound::FConcurrentInstanceCounter::_scalar_deleting_destructor_
          (FConcurrentInstanceCounter *this,uint param_1)

{
  ~FConcurrentInstanceCounter(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b2aa570

void * __thiscall
Metasound::FMetasoundConstGraphGenerator::_scalar_deleting_destructor_
          (FMetasoundConstGraphGenerator *this,uint param_1)

{
  FAsyncTaskBase *pFVar1;
  FMetasoundEnvironment *pFVar2;
  FScriptContainerElement *pFVar3;
  
  this->_padding_ = (longlong)&___7FMetasoundConstGraphGenerator_Metasound__6B_;
  LOCK();
  NumActiveConstGraphs.Counter = NumActiveConstGraphs.Counter + -1;
  UNLOCK();
  if (__CsvProfilerStat925 == false) {
    FCsvProfilerTrace::OutputInlineStat("NumActiveConstGraphs",_GCsvCategory_Audio_Metasound.Index);
    __CsvProfilerStat925 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("NumActiveConstGraphs",_GCsvCategory_Audio_Metasound.Index,NumActiveConstGraphs.Counter
             ,Set);
  pFVar1 = (this->BuilderTask).Ptr;
  if (pFVar1 != (FAsyncTaskBase *)0x0) {
    FAsyncTaskBase::EnsureCompletion(pFVar1,true,false);
    pFVar1 = (this->BuilderTask).Ptr;
    (this->BuilderTask).Ptr = (FAsyncTaskBase *)0x0;
    if (pFVar1 != (FAsyncTaskBase *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1,1);
    }
  }
  if (this->bUseOperatorPool != false) {
    FMetasoundGenerator::UpdateGraphIfPending((FMetasoundGenerator *)this);
    ReleaseOperatorToCache(this);
  }
  pFVar1 = (this->BuilderTask).Ptr;
  if (pFVar1 != (FAsyncTaskBase *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1,1);
  }
  pFVar2 = (this->EnvironmentPtr).Ptr;
  if (pFVar2 != (FMetasoundEnvironment *)0x0) {
    DestructItems<TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>,int>
              ((TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>
                *)(pFVar2->Variables).Pairs.AllocatorInstance.Data,
               (pFVar2->Variables).Pairs.ArrayNum);
    pFVar3 = (pFVar2->Variables).Pairs.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    ::operator_delete(pFVar2,0x10);
  }
  FMetasoundGenerator::~FMetasoundGenerator((FMetasoundGenerator *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x3b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b2aa6b0

void * __thiscall
Metasound::FMetasoundDynamicGraphGenerator::_scalar_deleting_destructor_
          (FMetasoundDynamicGraphGenerator *this,uint param_1)

{
  FAsyncTaskBase *pFVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FMetasoundDynamicGraphGenerator_Metasound__6B_;
  LOCK();
  NumActiveDynamicGraphs.Counter = NumActiveDynamicGraphs.Counter + -1;
  UNLOCK();
  if (__CsvProfilerStat1058 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("NumActiveDynamicGraphs",_GCsvCategory_Audio_Metasound.Index);
    __CsvProfilerStat1058 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("NumActiveDynamicGraphs",_GCsvCategory_Audio_Metasound.Index,
             NumActiveDynamicGraphs.Counter,Set);
  pFVar1 = (this->BuilderTask).Ptr;
  if (pFVar1 != (FAsyncTaskBase *)0x0) {
    FAsyncTaskBase::EnsureCompletion(pFVar1,true,false);
    pFVar1 = (this->BuilderTask).Ptr;
    (this->BuilderTask).Ptr = (FAsyncTaskBase *)0x0;
    if (pFVar1 != (FAsyncTaskBase *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1,1);
    }
  }
  pFVar1 = (this->BuilderTask).Ptr;
  if (pFVar1 != (FAsyncTaskBase *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1,1);
  }
  pFVar2 = (this->AudioOutputNames).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FMetasoundGenerator::~FMetasoundGenerator((FMetasoundGenerator *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x398);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b2aa7a0

void * __thiscall
Metasound::FMetasoundGenerator::_scalar_deleting_destructor_(FMetasoundGenerator *this,uint param_1)

{
  ~FMetasoundGenerator(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x380);
  }
  return this;
}

// AddParameterSetter @ 14b2ab3f0

void __cdecl
Metasound::GeneratorBuilder::AddParameterSetter
          (IDataTypeRegistry *param_1,FInputDataVertex *param_2,FAnyDataReference *param_3,
          TSortedMap<FName,Metasound::MetasoundGeneratorPrivate::FParameterSetter,TSizedDefaultAllocator<32>,FNameFastLess>
          *param_4,TMap<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter,0>_>
                   *param_5)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterSetter> *pTVar5;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  undefined8 local_50;
  longlong *local_48;
  longlong local_40;
  FAnyDataReference local_38;
  
  if ((param_3->AccessType != Write) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("EDataReferenceAccessType::Write == InDataRef.GetAccessType()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGenerator\\Private\\MetasoundGeneratorBuilder.cpp"
                         ,0x1be,L"Only writable inputs can have parameter setters."), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  plVar1 = &param_2->_padding_;
  plVar4 = (longlong *)(**(code **)((longlong)*param_1 + 0xa8))(param_1,plVar1);
  if (*plVar4 != 0) {
    local_50 = (**(code **)(param_3->_padding_ + 0x20))(param_3);
    local_58 = *plVar1;
    local_60 = &local_58;
    local_68 = &param_2->_padding_;
    local_48 = plVar4;
    TSet<TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter>,TDefaultMapHashableKeyFuncs<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FName_const_&,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter_const_&>_>
              ((TSet<TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter>,TDefaultMapHashableKeyFuncs<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter,0>,FDefaultSetAllocator>
                *)param_5,
               (TPairInitializer<FName_const_&,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter_const_&>
                *)&stack0x00000008,(bool *)&local_68);
  }
  local_40 = (**(code **)((longlong)*param_1 + 0xb0))(param_1,plVar1);
  if (local_40 != 0) {
    FAnyDataReference::FAnyDataReference(&local_38,param_3);
    pTVar5 = TSortedMap<FName,Metasound::MetasoundGeneratorPrivate::FParameterSetter,TSizedDefaultAllocator<32>,FNameFastLess>
             ::AllocateMemoryForEmplace<FName_const_&>(param_4,(FName *)&param_2->_padding_);
    *(longlong *)pTVar5 = param_2->_padding_;
    *(longlong *)&pTVar5->field_0x8 = local_40;
    FAnyDataReference::FAnyDataReference((FAnyDataReference *)&pTVar5->field_0x10,&local_38);
    if (local_38.DataRefPtr.Ptr != (IDataReference *)0x0) {
      (**(code **)*local_38.DataRefPtr.Ptr)(local_38.DataRefPtr.Ptr,1);
    }
  }
  return;
}

// AddParameterSetterIfWritable @ 14b2ab540

void __cdecl
Metasound::GeneratorBuilder::AddParameterSetterIfWritable
          (FName *param_1,FInputVertexInterfaceData *param_2,
          TSortedMap<FName,Metasound::MetasoundGeneratorPrivate::FParameterSetter,TSizedDefaultAllocator<32>,FNameFastLess>
          *param_3,TMap<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter,0>_>
                   *param_4)

{
  IDataTypeRegistry *pIVar1;
  FAnyDataReference *pFVar2;
  FInputDataVertex *pFVar3;
  
  pIVar1 = Frontend::IDataTypeRegistry::Get();
  pFVar2 = FInputVertexInterfaceData::FindDataReference(param_2,param_1);
  if ((pFVar2 != (FAnyDataReference *)0x0) && (pFVar2->AccessType == Write)) {
    pFVar3 = FInputVertexInterfaceData::GetVertex(param_2,param_1);
    AddParameterSetter(pIVar1,pFVar3,pFVar2,param_3,param_4);
  }
  return;
}

// AnalyzerAddressesReferToSameGeneratorOutput @ 14b2ab780

bool __cdecl
Metasound::AnalyzerAddressesReferToSameGeneratorOutput
          (FAnalyzerAddress *param_1,FAnalyzerAddress *param_2)

{
  if ((param_1->OutputName == param_2->OutputName) &&
     (param_1->AnalyzerName == param_2->AnalyzerName)) {
    return true;
  }
  return false;
}

// BuildDynamicGraphOperator @ 14b2ac2e0

FOperatorAndInputs * __cdecl
Metasound::GeneratorBuilder::BuildDynamicGraphOperator
          (FOperatorAndInputs *__return_storage_ptr__,FOperatorSettings *param_1,
          FMetasoundDynamicGraphGeneratorInitParams *param_2,
          FDynamicOperatorUpdateCallbacks *param_3,FBuildResults *param_4)

{
  FInputVertexInterfaceData *this;
  IOperator *pIVar1;
  bool bVar2;
  code *pcVar3;
  bool bVar4;
  FInputVertexInterfaceData *pFVar5;
  FOperatorAndInputs *pFVar6;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar7;
  bool bVar8;
  undefined8 *local_res8;
  undefined1 local_c8 [16];
  FInputVertexInterfaceData *local_b8;
  longlong *local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>
  *local_88;
  TReferenceControllerBase<1> *local_80;
  FDynamicOperatorUpdateCallbacks *local_78;
  FInputVertexInterfaceData local_68;
  FOperatorBuilder local_40;
  
  bVar2 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar2) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"GeneratorBuilder::BuildDynamicGraphOperator");
  }
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId289,"GeneratorBuilder::BuildDynamicGraphOperator",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGenerator\\Private\\MetasoundGeneratorBuilder.cpp"
               ,0x121);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId289);
  }
  this = &__return_storage_ptr__->Inputs;
  (__return_storage_ptr__->Operator).Ptr = (IOperator *)0x0;
  FInputVertexInterfaceData::FInputVertexInterfaceData(this);
  (__return_storage_ptr__->RenderCost).Object = (FGraphRenderCost *)0x0;
  (__return_storage_ptr__->RenderCost).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pFVar5 = BuildGraphOperatorInputs(&local_68,param_1,(FGeneratorInitParams *)param_2);
  FInputVertexInterfaceData::operator=(this,pFVar5);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_68.SubInterfaces.AllocatorInstance.Data,
             local_68.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_68.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_68.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::VertexDataPrivate::FInputBinding,int>
            ((FInputBinding *)local_68.Bindings.AllocatorInstance.Data,local_68.Bindings.ArrayNum);
  if ((FInputBinding *)local_68.Bindings.AllocatorInstance.Data != (FInputBinding *)0x0) {
    FMemory::Free(local_68.Bindings.AllocatorInstance.Data);
  }
  if ((param_2->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FOperatorAndInputs *)(*pcVar3)();
    return pFVar6;
  }
  local_c8._0_8_ = param_2->_padding_;
  local_b0 = &param_2->_padding_;
  local_a8 = param_2->_padding_;
  local_88 = (param_2->TransformQueue).Object;
  local_80 = (param_2->TransformQueue).SharedReferenceCount.ReferenceController;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  (param_2->TransformQueue).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_2->TransformQueue).Object =
       (TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>
        *)0x0;
  local_c8._8_8_ = param_1;
  local_b8 = this;
  local_78 = param_3;
  FOperatorBuilder::FOperatorBuilder(&local_40,(FOperatorBuilderSettings *)&param_2->_padding_);
  TVar7 = FOperatorBuilder::BuildDynamicGraphOperator
                    (&local_40,(FBuildDynamicGraphOperatorParams *)&local_res8,
                     (FBuildResults *)local_c8);
  if (__return_storage_ptr__ != (FOperatorAndInputs *)TVar7.Ptr) {
    pIVar1 = (__return_storage_ptr__->Operator).Ptr;
    (__return_storage_ptr__->Operator).Ptr = (IOperator *)*TVar7.Ptr;
    *TVar7.Ptr = (IOperator)0x0;
    if (pIVar1 != (IOperator *)0x0) {
      (**(code **)*pIVar1)(pIVar1,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  FOperatorBuilder::~FOperatorBuilder(&local_40);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar2) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return __return_storage_ptr__;
}

// BuildGeneratorData @ 14b2ac510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

FMetasoundGeneratorData * __cdecl
Metasound::GeneratorBuilder::BuildGeneratorData
          (FMetasoundGeneratorData *__return_storage_ptr__,FOperatorSettings *param_1,
          FGeneratorInitParams *param_2,FOperatorAndInputs *param_3,
          TUniquePtr<Metasound::Frontend::FGraphAnalyzer,TDefaultDelete<Metasound::Frontend::FGraphAnalyzer>_>
          param_4)

{
  IOperator *pIVar1;
  void *pvVar2;
  undefined8 *puVar3;
  bool bVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  FGraphAnalyzer *pFVar8;
  bool bVar9;
  EDataReferenceAccessType EVar10;
  FMetasoundGeneratorData *pFVar11;
  FVertexInterface *pFVar12;
  FInputBinding *pFVar13;
  FLiteral *pFVar14;
  code *pcVar15;
  TReferenceControllerBase<0> *pTVar16;
  FAnyDataReference *pFVar17;
  IDataTypeRegistry *pIVar18;
  FInputDataVertex *pFVar19;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  *pTVar20;
  ForAnyElementType this;
  bool bVar21;
  TReferenceControllerBase<0> *pTVar22;
  undefined1 auStackY_238 [32];
  undefined1 local_207 [7];
  TSortedMap<FName,Metasound::MetasoundGeneratorPrivate::FParameterSetter,TSizedDefaultAllocator<32>,FNameFastLess>
  local_200;
  TReferenceControllerBase<0> *local_1f0;
  TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
  local_1e8;
  FVertexInterfaceData local_1d8;
  FString local_188;
  FOperatorSettings *local_178;
  FMetasoundGeneratorData *local_170;
  FOperatorAndInputs *local_168;
  FGraphAnalyzer *local_160;
  TReferenceControllerBase<0> *local_150;
  TReferenceControllerBase<0> *pTStack_148;
  undefined1 local_138 [32];
  undefined1 local_118 [16];
  TReferenceControllerBase<0> *pTStack_108;
  undefined1 local_f8 [32];
  void *local_d8;
  undefined4 local_d0;
  uint local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  ForElementType<FSetElementId> local_b8;
  int local_b0;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_a8;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_90;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_238;
  local_160 = param_4.Ptr;
  bVar4 = 0 < GCycleStatsShouldEmitNamedEvents;
  local_178 = param_1;
  local_170 = __return_storage_ptr__;
  local_168 = param_3;
  if (bVar4) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"GeneratorBuilder::BuildGeneratorData");
  }
  bVar21 = -1 < CpuChannel->Enabled;
  if (bVar21) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId320,"GeneratorBuilder::BuildGeneratorData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGenerator\\Private\\MetasoundGeneratorBuilder.cpp"
               ,0x140);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId320);
  }
  if (((param_3->Operator).Ptr == (IOperator *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InGraphOperatorAndInputs.Operator.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGenerator\\Private\\MetasoundGeneratorBuilder.cpp"
                         ,0x142,L"Graph operator must be a valid object"), bVar9)) {
    pcVar15 = (code *)swi(3);
    pFVar11 = (FMetasoundGeneratorData *)(*pcVar15)();
    return pFVar11;
  }
  if (((param_2->Graph).Object == (IGraph *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar15 = (code *)swi(3);
    pFVar11 = (FMetasoundGeneratorData *)(*pcVar15)();
    return pFVar11;
  }
  pFVar12 = (FVertexInterface *)(**(code **)((longlong)*(param_2->Graph).Object + 0x20))();
  FVertexInterfaceData::FVertexInterfaceData(&local_1d8,pFVar12);
  pIVar1 = (param_3->Operator).Ptr;
  (**(code **)((longlong)*pIVar1 + 0x20))(pIVar1,&local_1d8);
  pIVar1 = (param_3->Operator).Ptr;
  (**(code **)((longlong)*pIVar1 + 0x28))(pIVar1,&local_1d8.OutputVertexInterfaceData);
  FInputVertexInterfaceData::operator=(&local_1d8.InputVertexInterfaceData,&param_3->Inputs);
  pFVar13 = FInputVertexInterfaceData::Find
                      (&local_1d8.InputVertexInterfaceData,
                       &Frontend::SourceInterface::Inputs::OnPlay);
  if (pFVar13 == (FInputBinding *)0x0) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(&Frontend::SourceInterface::Inputs::OnPlay,&local_188);
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)
                 &`public:_class_Metasound::TDataWriteReference<Metasound::FTrigger>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataWriteReference<Metasound::FTrigger>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.Data.AllocatorInstance.Data);
      }
    }
    pFVar14 = FLiteral::CreateInvalid((FLiteral *)&local_90);
    TDataLiteralFactory<Metasound::FTrigger,Metasound::TDataWriteReference<Metasound::FTrigger>_>::
    CreateExplicitArgs((TDataWriteReference<Metasound::FTrigger> *)local_138,param_1,pFVar14);
    if ((0xc < local_90.TypeIndex) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar9)) {
      pcVar15 = (code *)swi(3);
      pFVar11 = (FMetasoundGeneratorData *)(*pcVar15)();
      return pFVar11;
    }
    pcVar15 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[local_90.TypeIndex];
    pTVar20 = &local_90;
  }
  else {
    if ((pFVar13->Data).bIsSet != false) {
      if (((pFVar13->Data).TypedValue.DataRefPtr.Ptr == (IDataReference *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("DataRefPtr.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                             ,0x369,L""), bVar9)) {
        pcVar15 = (code *)swi(3);
        pFVar11 = (FMetasoundGeneratorData *)(*pcVar15)();
        return pFVar11;
      }
      FAnyDataReference::TGetAs<Metasound::TDataWriteReference<Metasound::FTrigger>_>::Get
                ((TDataWriteReference<Metasound::FTrigger> *)local_138,
                 (pFVar13->Data).TypedValue.AccessType,(pFVar13->Data).TypedValue.DataRefPtr.Ptr);
      goto LAB_14b2ac7ec;
    }
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_a8,&(pFVar13->Vertex).Literal.Value);
    TDataLiteralFactory<Metasound::FTrigger,Metasound::TDataWriteReference<Metasound::FTrigger>_>::
    CreateExplicitArgs((TDataWriteReference<Metasound::FTrigger> *)local_138,param_1,
                       (FLiteral *)&local_a8);
    if ((0xc < local_a8.TypeIndex) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar9)) {
      pcVar15 = (code *)swi(3);
      pFVar11 = (FMetasoundGeneratorData *)(*pcVar15)();
      return pFVar11;
    }
    pcVar15 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[local_a8.TypeIndex];
    pTVar20 = &local_a8;
  }
  (*pcVar15)(pTVar20);
LAB_14b2ac7ec:
  FindOutputAudioBuffers
            (&local_1e8,&param_2->AudioOutputNames,&local_1d8,param_1,&param_2->AssetPath);
  pTVar16 = ::operator_new(0x30);
  if (pTVar16 == (TReferenceControllerBase<0> *)0x0) {
    local_1f0 = ___xmm_00000000000000000000000000000010;
    pTVar16 = _UNK_150651568;
    pTVar22 = _UNK_150651568;
  }
  else {
    pTVar16->SharedReferenceCount = 1;
    pTVar16->WeakReferenceCount = 1;
    pTVar16->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFTrigger_Metasound___0A__SharedPointerInternals__6B_;
    FTrigger::FTrigger((FTrigger *)(pTVar16 + 1),param_1,false);
    local_1f0 = pTVar16 + 1;
    pTVar22 = pTVar16;
    local_150 = local_1f0;
    pTStack_148 = pTVar16;
    if ((local_1f0 == (TReferenceControllerBase<0> *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), pTVar22 = pTStack_148, bVar9)) {
      pcVar15 = (code *)swi(3);
      pFVar11 = (FMetasoundGeneratorData *)(*pcVar15)();
      return pFVar11;
    }
  }
  pFVar17 = FOutputVertexInterfaceData::FindDataReference
                      (&local_1d8.OutputVertexInterfaceData,
                       &Frontend::SourceOneShotInterface::Outputs::OnFinished);
  if (pFVar17 != (FAnyDataReference *)0x0) {
    FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FTrigger>_>
              (pFVar17,(TDataReadReference<Metasound::FTrigger> *)local_118);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar22);
    local_1f0 = (TReferenceControllerBase<0> *)local_118._8_8_;
    pTVar16 = pTStack_108;
  }
  local_cc = 0x80;
  local_200.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_200.Pairs.ArrayNum = 0;
  local_200.Pairs.ArrayMax = 0;
  local_f8._0_8_ = (FScriptContainerElement *)0x0;
  local_f8._8_8_ = 0;
  local_d8 = (void *)0x0;
  local_d0 = 0;
  local_c4 = 0;
  local_b8 = (ForElementType<FSetElementId>)0x0;
  local_b0 = 0;
  local_c8 = 0xffffffff;
  pIVar18 = Frontend::IDataTypeRegistry::Get();
  iVar5 = local_1d8.InputVertexInterfaceData.Bindings.ArrayNum;
  pFVar13 = (FInputBinding *)
            (local_1d8.InputVertexInterfaceData.Bindings.AllocatorInstance.Data +
            (longlong)local_1d8.InputVertexInterfaceData.Bindings.ArrayNum * 0x58);
  this.Data = local_1d8.InputVertexInterfaceData.Bindings.AllocatorInstance.Data;
  while( true ) {
    if (local_1d8.InputVertexInterfaceData.Bindings.ArrayNum != iVar5) {
      `TCheckedPointerIterator<Metasound::VertexDataPrivate::FInputBinding,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_207);
    }
    pFVar11 = local_170;
    if ((FInputBinding *)this.Data == pFVar13) break;
    EVar10 = VertexDataPrivate::FInputBinding::GetAccessType((FInputBinding *)this.Data);
    if ((EVar10 == Write) &&
       (pFVar17 = VertexDataPrivate::FInputBinding::GetDataReference((FInputBinding *)this.Data),
       pFVar17 != (FAnyDataReference *)0x0)) {
      pFVar19 = VertexDataPrivate::FInputBinding::GetVertex((FInputBinding *)this.Data);
      AddParameterSetter(pIVar18,pFVar19,pFVar17,&local_200,
                         (TMap<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter,0>_>
                          *)local_f8);
    }
    this.Data = this.Data + 0x58;
  }
  fVar6 = local_178->TargetBlockRate;
  fVar7 = local_178->ActualBlockRate;
  iVar5 = local_178->NumFramesPerBlock;
  (local_170->OperatorSettings).SampleRate = local_178->SampleRate;
  (local_170->OperatorSettings).TargetBlockRate = fVar6;
  (local_170->OperatorSettings).ActualBlockRate = fVar7;
  (local_170->OperatorSettings).NumFramesPerBlock = iVar5;
  (local_170->GraphOperator).Ptr = (local_168->Operator).Ptr;
  (local_168->Operator).Ptr = (IOperator *)0x0;
  (local_170->VertexInterfaceData).InputVertexInterfaceData.bIsVertexInterfaceFrozen =
       local_1d8.InputVertexInterfaceData.bIsVertexInterfaceFrozen;
  (local_170->VertexInterfaceData).InputVertexInterfaceData.Bindings.AllocatorInstance.Data =
       local_1d8.InputVertexInterfaceData.Bindings.AllocatorInstance.Data;
  (local_170->VertexInterfaceData).InputVertexInterfaceData.Bindings.ArrayNum =
       local_1d8.InputVertexInterfaceData.Bindings.ArrayNum;
  (local_170->VertexInterfaceData).InputVertexInterfaceData.Bindings.ArrayMax =
       local_1d8.InputVertexInterfaceData.Bindings.ArrayMax;
  (local_170->VertexInterfaceData).InputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data =
       local_1d8.InputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data;
  (local_170->VertexInterfaceData).InputVertexInterfaceData.SubInterfaces.ArrayNum =
       local_1d8.InputVertexInterfaceData.SubInterfaces.ArrayNum;
  (local_170->VertexInterfaceData).InputVertexInterfaceData.SubInterfaces.ArrayMax =
       local_1d8.InputVertexInterfaceData.SubInterfaces.ArrayMax;
  (local_170->VertexInterfaceData).OutputVertexInterfaceData.bIsVertexInterfaceFrozen =
       local_1d8.OutputVertexInterfaceData.bIsVertexInterfaceFrozen;
  (local_170->VertexInterfaceData).OutputVertexInterfaceData.Bindings.AllocatorInstance.Data =
       local_1d8.OutputVertexInterfaceData.Bindings.AllocatorInstance.Data;
  (local_170->VertexInterfaceData).OutputVertexInterfaceData.Bindings.ArrayNum =
       local_1d8.OutputVertexInterfaceData.Bindings.ArrayNum;
  (local_170->VertexInterfaceData).OutputVertexInterfaceData.Bindings.ArrayMax =
       local_1d8.OutputVertexInterfaceData.Bindings.ArrayMax;
  (local_170->VertexInterfaceData).OutputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data =
       local_1d8.OutputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data;
  (local_170->VertexInterfaceData).OutputVertexInterfaceData.SubInterfaces.ArrayNum =
       local_1d8.OutputVertexInterfaceData.SubInterfaces.ArrayNum;
  (local_170->VertexInterfaceData).OutputVertexInterfaceData.SubInterfaces.ArrayMax =
       local_1d8.OutputVertexInterfaceData.SubInterfaces.ArrayMax;
  (local_170->ParameterSetters).Pairs.AllocatorInstance.Data =
       local_200.Pairs.AllocatorInstance.Data;
  (local_170->ParameterSetters).Pairs.ArrayNum = local_200.Pairs.ArrayNum;
  (local_170->ParameterSetters).Pairs.ArrayMax = local_200.Pairs.ArrayMax;
  *(undefined8 *)&(local_170->ParameterPackSetters).field_0x0 = 0;
  *(undefined8 *)&(local_170->ParameterPackSetters).field_0x8 = 0;
  *(undefined8 *)&(local_170->ParameterPackSetters).field_0x20 = 0;
  *(undefined4 *)&(local_170->ParameterPackSetters).field_0x28 = 0;
  *(undefined4 *)&(local_170->ParameterPackSetters).field_0x2c = 0x80;
  *(undefined4 *)&(local_170->ParameterPackSetters).field_0x30 = 0xffffffff;
  *(undefined4 *)&(local_170->ParameterPackSetters).field_0x34 = 0;
  *(undefined8 *)&(local_170->ParameterPackSetters).field_0x40 = 0;
  *(undefined4 *)&(local_170->ParameterPackSetters).field_0x48 = 0;
  local_1d8.InputVertexInterfaceData.Bindings.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_1d8.InputVertexInterfaceData.Bindings.ArrayNum = 0;
  local_1d8.InputVertexInterfaceData.Bindings.ArrayMax = 0;
  local_1d8.InputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_1d8.InputVertexInterfaceData.SubInterfaces.ArrayNum = 0;
  local_1d8.InputVertexInterfaceData.SubInterfaces.ArrayMax = 0;
  local_1d8.OutputVertexInterfaceData.Bindings.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_1d8.OutputVertexInterfaceData.Bindings.ArrayNum = 0;
  local_1d8.OutputVertexInterfaceData.Bindings.ArrayMax = 0;
  local_1d8.OutputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_1d8.OutputVertexInterfaceData.SubInterfaces.ArrayNum = 0;
  local_1d8.OutputVertexInterfaceData.SubInterfaces.ArrayMax = 0;
  local_200.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_200.Pairs.ArrayNum = 0;
  local_200.Pairs.ArrayMax = 0;
  TSet<TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter>,TDefaultMapHashableKeyFuncs<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter>,TDefaultMapHashableKeyFuncs<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter>,TDefaultMapHashableKeyFuncs<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter,0>,FDefaultSetAllocator>
              *)&local_170->ParameterPackSetters,
             (TSet<TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter>,TDefaultMapHashableKeyFuncs<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter,0>,FDefaultSetAllocator>
              *)local_f8);
  pFVar8 = local_160;
  (pFVar11->GraphAnalyzer).Ptr = *(FGraphAnalyzer **)&local_160->OperatorSettings;
  (local_160->OperatorSettings).SampleRate = 0;
  (local_160->OperatorSettings).TargetBlockRate = 0.0;
  (pFVar11->OutputBuffers).AllocatorInstance.Data = local_1e8.AllocatorInstance.Data;
  (pFVar11->OutputBuffers).ArrayNum = local_1e8.ArrayNum;
  (pFVar11->OutputBuffers).ArrayMax = local_1e8.ArrayMax;
  *(undefined ***)&pFVar11->TriggerOnPlayRef =
       &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  local_1e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e8.ArrayNum = 0;
  local_1e8.ArrayMax = 0;
  *(undefined8 *)&(pFVar11->TriggerOnPlayRef).field_0x8 = local_138._8_8_;
  *(undefined8 *)&(pFVar11->TriggerOnPlayRef).field_0x10 = local_138._16_8_;
  if ((TReferenceControllerBase<0> *)local_138._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_138._16_8_ + 8) = *(int *)(local_138._16_8_ + 8) + 1;
  }
  *(undefined ***)&pFVar11->TriggerOnPlayRef =
       &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&pFVar11->TriggerOnFinishRef =
       &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(TReferenceControllerBase<0> **)&(pFVar11->TriggerOnFinishRef).field_0x8 = local_1f0;
  *(TReferenceControllerBase<0> **)&(pFVar11->TriggerOnFinishRef).field_0x10 = pTVar16;
  if (pTVar16 != (TReferenceControllerBase<0> *)0x0) {
    pTVar16->SharedReferenceCount = pTVar16->SharedReferenceCount + 1;
  }
  *(undefined ***)&pFVar11->TriggerOnFinishRef =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  local_b0 = 0;
  if (local_b8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_b8);
  }
  iVar5 = SUB84(local_f8._8_8_,4);
  local_f8._8_8_ = local_f8._8_8_ & 0xffffffff00000000;
  if (iVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_f8,0,(int *)(local_f8 + 0xc));
  }
  local_c8 = 0xffffffff;
  local_c4 = 0;
  local_d0 = 0;
  if (0x80 < local_cc) {
    local_cc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10),0);
  }
  if (local_d8 != (void *)0x0) {
    FMemory::Free(local_d8);
  }
  if ((FScriptContainerElement *)local_f8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_f8._0_8_);
  }
  DestructItems<TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterSetter>,int>
            ((TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterSetter> *)
             local_200.Pairs.AllocatorInstance.Data,local_200.Pairs.ArrayNum);
  if ((TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterSetter> *)
      local_200.Pairs.AllocatorInstance.Data !=
      (TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterSetter> *)0x0) {
    FMemory::Free(local_200.Pairs.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar16);
  DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
            ((TDataReadReference<Metasound::FAudioBuffer> *)local_1e8.AllocatorInstance.Data,
             local_1e8.ArrayNum);
  if ((TDataReadReference<Metasound::FAudioBuffer> *)local_1e8.AllocatorInstance.Data !=
      (TDataReadReference<Metasound::FAudioBuffer> *)0x0) {
    FMemory::Free(local_1e8.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_138._16_8_);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)
             local_1d8.OutputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data,
             local_1d8.OutputVertexInterfaceData.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)
      local_1d8.OutputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_1d8.OutputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::VertexDataPrivate::FOutputBinding,int>
            ((FOutputBinding *)local_1d8.OutputVertexInterfaceData.Bindings.AllocatorInstance.Data,
             local_1d8.OutputVertexInterfaceData.Bindings.ArrayNum);
  if ((FOutputBinding *)local_1d8.OutputVertexInterfaceData.Bindings.AllocatorInstance.Data !=
      (FOutputBinding *)0x0) {
    FMemory::Free(local_1d8.OutputVertexInterfaceData.Bindings.AllocatorInstance.Data);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)
             local_1d8.InputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data,
             local_1d8.InputVertexInterfaceData.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_1d8.InputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data
      != (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_1d8.InputVertexInterfaceData.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::VertexDataPrivate::FInputBinding,int>
            ((FInputBinding *)local_1d8.InputVertexInterfaceData.Bindings.AllocatorInstance.Data,
             local_1d8.InputVertexInterfaceData.Bindings.ArrayNum);
  if ((FInputBinding *)local_1d8.InputVertexInterfaceData.Bindings.AllocatorInstance.Data !=
      (FInputBinding *)0x0) {
    FMemory::Free(local_1d8.InputVertexInterfaceData.Bindings.AllocatorInstance.Data);
  }
  if (bVar21) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  pvVar2 = *(void **)&pFVar8->OperatorSettings;
  if (pvVar2 != (void *)0x0) {
    *(undefined4 *)((longlong)pvVar2 + 0x78) = 0;
    if (*(void **)((longlong)pvVar2 + 0x70) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)pvVar2 + 0x70));
    }
    TSparseArray<TSparseSetElement<TTuple<FGuid,Metasound::FDataReferenceCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FGuid,Metasound::FDataReferenceCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FGuid,Metasound::FDataReferenceCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)((longlong)pvVar2 + 0x30));
    DestructItems<TUniquePtr<Metasound::Frontend::IVertexAnalyzer,TDefaultDelete<Metasound::Frontend::IVertexAnalyzer>_>,int>
              (*(TUniquePtr<Metasound::Frontend::IVertexAnalyzer,TDefaultDelete<Metasound::Frontend::IVertexAnalyzer>_>
                 **)((longlong)pvVar2 + 0x20),*(int *)((longlong)pvVar2 + 0x28));
    if (*(void **)((longlong)pvVar2 + 0x20) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)pvVar2 + 0x20));
    }
    puVar3 = *(undefined8 **)((longlong)pvVar2 + 0x18);
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    ::operator_delete(pvVar2,0x80);
  }
  return pFVar11;
}

// BuildGraphAnalyzer @ 14b2acfa0

TUniquePtr<Metasound::Frontend::FGraphAnalyzer,TDefaultDelete<Metasound::Frontend::FGraphAnalyzer>_>
__cdecl Metasound::GeneratorBuilder::BuildGraphAnalyzer
                  (TMap<FGuid,Metasound::FDataReferenceCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,Metasound::FDataReferenceCollection,0>_>
                   *param_1,FMetasoundEnvironment *param_2,FOperatorSettings *param_3)

{
  IMetasoundEnvironmentVariable *pIVar1;
  bool bVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
  *pTVar5;
  TUniquePtr<Metasound::Frontend::FGraphAnalyzer,TDefaultDelete<Metasound::Frontend::FGraphAnalyzer>_>
  TVar6;
  void *pvVar7;
  void *pvVar8;
  FGraphAnalyzer *this;
  IMetasoundEnvironmentVariable IVar9;
  IMetasoundEnvironmentVariable IVar10;
  FOperatorSettings *in_R9;
  bool bVar11;
  FName local_res8;
  
  bVar2 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar2) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"GeneratorBuilder::BuildGraphAnalyzer");
  }
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId174,"GeneratorBuilder::BuildGraphAnalyzer",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGenerator\\Private\\MetasoundGeneratorBuilder.cpp"
               ,0xae);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId174);
  }
  FLazyName::Resolve(&CoreInterface::Environment::InstanceID);
  pTVar5 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find((TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
                   *)param_3,local_res8);
  IVar9 = (IMetasoundEnvironmentVariable)0x0;
  if (pTVar5 != (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                 *)0x0) {
    pTVar5 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find((TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
                     *)param_3,local_res8);
    if ((pTVar5 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                    *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      TVar6.Ptr = (FGraphAnalyzer *)(*pcVar3)();
      return (TUniquePtr<Metasound::Frontend::FGraphAnalyzer,TDefaultDelete<Metasound::Frontend::FGraphAnalyzer>_>
              )TVar6.Ptr;
    }
    pIVar1 = pTVar5->Ptr;
    pvVar7 = TEnvironmentVariableTypeInfo<unsigned___int64>::GetTypeId();
    pvVar8 = (void *)(**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    if (pvVar7 == pvVar8) {
      pTVar5 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
               ::Find((TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
                       *)param_3,local_res8);
      if ((pTVar5 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                      *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                             ,0x148,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        TVar6.Ptr = (FGraphAnalyzer *)(*pcVar3)();
        return (TUniquePtr<Metasound::Frontend::FGraphAnalyzer,TDefaultDelete<Metasound::Frontend::FGraphAnalyzer>_>
                )TVar6.Ptr;
      }
      pIVar1 = pTVar5->Ptr;
      pvVar7 = TEnvironmentVariableTypeInfo<unsigned___int64>::GetTypeId();
      pvVar8 = (void *)(**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
      if ((pvVar7 != pvVar8) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsEnvironmentVariableOfType<Type>(InVar)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundEnvironment.h"
                             ,0xaa,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        TVar6.Ptr = (FGraphAnalyzer *)(*pcVar3)();
        return (TUniquePtr<Metasound::Frontend::FGraphAnalyzer,TDefaultDelete<Metasound::Frontend::FGraphAnalyzer>_>
                )TVar6.Ptr;
      }
      IVar10 = pIVar1[2];
      goto LAB_14b2ad16e;
    }
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1845334588512010475>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundEnvironment.h"
                     ,0xeb,"Contains<VarType>(InVariableName)");
  IVar10 = IVar9;
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    TVar6.Ptr = (FGraphAnalyzer *)(*pcVar3)();
    return (TUniquePtr<Metasound::Frontend::FGraphAnalyzer,TDefaultDelete<Metasound::Frontend::FGraphAnalyzer>_>
            )TVar6.Ptr;
  }
LAB_14b2ad16e:
  this = ::operator_new(0x80);
  if (this != (FGraphAnalyzer *)0x0) {
    IVar9 = (IMetasoundEnvironmentVariable)
            Frontend::FGraphAnalyzer::FGraphAnalyzer
                      (this,in_R9,(ulong64)IVar10,
                       (TMap<FGuid,Metasound::FDataReferenceCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,Metasound::FDataReferenceCollection,0>_>
                        *)param_2);
  }
  *(IMetasoundEnvironmentVariable *)param_1 = IVar9;
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar2) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return (TUniquePtr<Metasound::Frontend::FGraphAnalyzer,TDefaultDelete<Metasound::Frontend::FGraphAnalyzer>_>
          )(FGraphAnalyzer *)param_1;
}

// BuildGraphOperator @ 14b2ad1e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FOperatorAndInputs * __cdecl
Metasound::GeneratorBuilder::BuildGraphOperator
          (FOperatorAndInputs *__return_storage_ptr__,FOperatorSettings *param_1,
          FGeneratorInitParams *param_2,FBuildResults *param_3)

{
  FInputVertexInterfaceData *this;
  IGraph *pIVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  IOperator *pIVar5;
  TReferenceControllerBase<1> *pTVar6;
  FGraphRenderCost *pFVar7;
  longlong lVar8;
  bool bVar9;
  int iVar10;
  FInputVertexInterfaceData *pFVar11;
  TEventRef<unsigned_int> TVar12;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar13;
  FWriteBuffer *pFVar14;
  bool bVar15;
  undefined1 auStackY_198 [32];
  FLLMScope local_164;
  FBuildGraphOperatorParams local_160;
  undefined1 local_118 [16];
  FInputVertexInterfaceData *local_108;
  FMetasoundEnvironment *local_100;
  FGraphRenderCost *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  FInputVertexInterfaceData local_d8;
  FName local_b0;
  FName local_a8;
  FName local_a0;
  FString local_98;
  FGraphRenderCost *local_88;
  TReferenceControllerBase<1> *pTStack_80;
  FOperatorBuilder local_78;
  undefined4 *local_60;
  longlong local_58;
  ulonglong local_50;
  
  iVar10 = GCycleStatsShouldEmitNamedEvents;
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_160.Graph = (IGraph *)param_3;
  if (0 < GCycleStatsShouldEmitNamedEvents) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"GeneratorBuilder::BuildGraphOperator");
  }
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId261,"GeneratorBuilder::BuildGraphOperator",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGenerator\\Private\\MetasoundGeneratorBuilder.cpp"
               ,0x105);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId261);
  }
  this = &__return_storage_ptr__->Inputs;
  (__return_storage_ptr__->Operator).Ptr = (IOperator *)0x0;
  FInputVertexInterfaceData::FInputVertexInterfaceData(this);
  (__return_storage_ptr__->RenderCost).Object = (FGraphRenderCost *)0x0;
  (__return_storage_ptr__->RenderCost).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pFVar11 = BuildGraphOperatorInputs(&local_d8,param_1,param_2);
  FInputVertexInterfaceData::operator=(this,pFVar11);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data,
             local_d8.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_d8.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::VertexDataPrivate::FInputBinding,int>
            ((FInputBinding *)local_d8.Bindings.AllocatorInstance.Data,local_d8.Bindings.ArrayNum);
  if ((FInputBinding *)local_d8.Bindings.AllocatorInstance.Data != (FInputBinding *)0x0) {
    FMemory::Free(local_d8.Bindings.AllocatorInstance.Data);
  }
  pIVar1 = (param_2->Graph).Object;
  if (pIVar1 == (IGraph *)0x0) {
    if (1 < (byte)LogMetaSound._0_1_) {
      FTopLevelAssetPath::ToString(&param_2->AssetPath,&local_98);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
    }
    if (bVar15) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  else {
    local_100 = &param_2->Environment;
    local_f8 = (param_2->GraphRenderCost).Object;
    local_f0 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_118._0_8_ = pIVar1;
    local_118._8_8_ = param_1;
    local_108 = this;
    FOperatorBuilder::FOperatorBuilder(&local_78,&param_2->BuilderSettings);
    FLLMScope::FLLMScope
              (&local_164,LLMTagDeclaration_Audio_MetaSound_Generator_Build.UniqueName,false,None,
               Default,true);
    local_160.GraphRenderCost =
         (FGraphRenderCost *)LLMTagDeclaration_Audio_MetaSound_Generator_Build.UniqueName;
    FMemScope::FMemScope((FMemScope *)&local_160.AssetPath,(FName *)&local_160.GraphRenderCost,true)
    ;
    ThreadLocalDebug::GetDebugInfoOnThisThread();
    if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
      local_160.OperatorSettings = (FOperatorSettings *)0x0;
      TVar12 = (TEventRef<unsigned_int>)&local_160.OperatorSettings;
    }
    else {
      local_160.ClassName = (param_2->AssetPath).AssetName;
      TVar12 = FStringTrace::GetNameRef(&local_b0);
    }
    uVar2 = *(undefined8 *)TVar12;
    if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
      TVar12 = (TEventRef<unsigned_int>)&local_160.InputData;
      local_160.InputData = (FInputVertexInterfaceData *)0x0;
    }
    else {
      TVar12 = FStringTrace::GetNameRef(&local_a8);
    }
    uVar3 = *(undefined8 *)TVar12;
    if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
      local_160.Environment = (FMetasoundEnvironment *)0x0;
      TVar12 = (TEventRef<unsigned_int>)&local_160.Environment;
    }
    else {
      local_160.AssetName = (param_2->AssetPath).PackageName;
      TVar12 = FStringTrace::GetNameRef(&local_a0);
    }
    uVar4 = *(undefined8 *)TVar12;
    bVar9 = false;
    if ((-1 < MetadataChannel->Enabled) && (bVar9 = false, -1 < AssetMetadataChannel->Enabled)) {
      UE::Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>((TLogScope<0> *)&local_60);
      bVar9 = true;
      *local_60 = (int)uVar2;
      local_60[1] = (int)uVar3;
      local_60[2] = (int)uVar4;
      *(undefined8 *)(local_58 + 0x28) = *(undefined8 *)(local_58 + 0x20);
    }
    ThreadLocalDebug::SetAssetScopeForThisThread
              ((param_2->AssetPath).AssetName,param_2->ClassName,(param_2->AssetPath).PackageName);
    TVar13 = FOperatorBuilder::BuildGraphOperator(&local_78,&local_160,(FBuildResults *)local_118);
    if (__return_storage_ptr__ != (FOperatorAndInputs *)TVar13.Ptr) {
      pIVar5 = (__return_storage_ptr__->Operator).Ptr;
      (__return_storage_ptr__->Operator).Ptr = (IOperator *)*TVar13.Ptr;
      *TVar13.Ptr = (IOperator)0x0;
      if (pIVar5 != (IOperator *)0x0) {
        (**(code **)*pIVar5)(pIVar5,1);
      }
    }
    if ((FBuildResults *)local_160.Graph != (FBuildResults *)0x0) {
      (**(code **)(((TArray<TUniquePtr<Metasound::IOperatorBuildError,TDefaultDelete<Metasound::IOperatorBuildError>_>,TSizedDefaultAllocator<32>_>
                     *)&(local_160.Graph)->field_0x0)->AllocatorInstance).Data)(local_160.Graph,1);
    }
    pTVar6 = (param_2->GraphRenderCost).SharedReferenceCount.ReferenceController;
    pFVar7 = (param_2->GraphRenderCost).Object;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_88 = (__return_storage_ptr__->RenderCost).Object;
    pTStack_80 = (__return_storage_ptr__->RenderCost).SharedReferenceCount.ReferenceController;
    (__return_storage_ptr__->RenderCost).Object = pFVar7;
    (__return_storage_ptr__->RenderCost).SharedReferenceCount.ReferenceController = pTVar6;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_80);
    if (bVar9) {
      lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(char *)(lVar8 + 0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      pFVar14 = *(FWriteBuffer **)(lVar8 + 0x20);
      if ((int)pFVar14 - *(int *)&pFVar14->Cursor < 1) {
        pFVar14 = UE::Trace::Private::Writer_NextBuffer();
      }
      *pFVar14->Cursor = '\n';
      pFVar14->Cursor = pFVar14->Cursor + 1;
      pFVar14->Committed = pFVar14->Cursor;
    }
    FMemScope::~FMemScope((FMemScope *)&local_160.AssetPath);
    FLLMScope::~FLLMScope(&local_164);
    FOperatorBuilder::~FOperatorBuilder(&local_78);
    if (bVar15) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  if (0 < iVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return __return_storage_ptr__;
}

// BuildGraphOperatorInputs @ 14b2ad660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FInputVertexInterfaceData * __cdecl
Metasound::GeneratorBuilder::BuildGraphOperatorInputs
          (FInputVertexInterfaceData *__return_storage_ptr__,FOperatorSettings *param_1,
          FGeneratorInitParams *param_2)

{
  int *piVar1;
  int iVar2;
  IGraph *pIVar3;
  bool bVar4;
  code *pcVar5;
  int iVar6;
  FAudioParameter *pFVar7;
  TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *pTVar8;
  bool bVar9;
  FVertexInterface *this;
  FInputVertexInterface *pFVar10;
  IDataTypeRegistry *pIVar11;
  FInputVertexInterfaceData *pFVar12;
  FInputDataVertex *pFVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  ForAnyElementType this_00;
  undefined8 uVar17;
  FAudioParameter *pFVar18;
  FInputBinding *pFVar19;
  bool bVar20;
  undefined1 auStackY_1b8 [32];
  undefined1 local_186;
  undefined1 local_185 [5];
  FInputVertexInterfaceData local_180;
  uint local_158;
  FName local_150;
  FInputVertexInterface *local_148;
  FOperatorSettings *local_140;
  IDataTypeRegistry *local_138;
  FAudioParameter *local_130;
  TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *local_128;
  FInputVertexInterfaceData *local_120;
  FAnyDataReference local_118;
  char local_100;
  FAnyDataReference local_f8;
  char local_e0;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FLiteral local_78;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_60;
  ulonglong local_48;
  
  iVar6 = GCycleStatsShouldEmitNamedEvents;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  bVar4 = 0 < GCycleStatsShouldEmitNamedEvents;
  local_140 = param_1;
  local_120 = __return_storage_ptr__;
  if (bVar4) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"GeneratorBuilder::BuildGraphOperatorInputs");
  }
  bVar20 = -1 < CpuChannel->Enabled;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId183,"GeneratorBuilder::BuildGraphOperatorInputs",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGenerator\\Private\\MetasoundGeneratorBuilder.cpp"
               ,0xb7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId183);
  }
  pIVar3 = (param_2->Graph).Object;
  if (pIVar3 == (IGraph *)0x0) {
    if (1 < (byte)LogMetaSound._0_1_) {
      FTopLevelAssetPath::ToString(&param_2->AssetPath,&local_d8);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
    }
    FInputVertexInterfaceData::FInputVertexInterfaceData(__return_storage_ptr__);
    if (bVar20) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (0 < iVar6) {
      FGenericPlatformMisc::EndNamedEvent();
    }
  }
  else {
    this = (FVertexInterface *)(**(code **)((longlong)*pIVar3 + 0x20))();
    pFVar10 = FVertexInterface::GetInputInterface(this);
    local_148 = pFVar10;
    FInputVertexInterfaceData::FInputVertexInterfaceData(&local_180,pFVar10);
    pIVar11 = Frontend::IDataTypeRegistry::Get();
    local_158 = (param_2->DefaultParameters).ArrayNum;
    uVar15 = (ulonglong)(int)local_158;
    pFVar18 = (FAudioParameter *)(param_2->DefaultParameters).AllocatorInstance.Data;
    local_128 = &param_2->DefaultParameters;
    local_130 = pFVar18 + uVar15;
    local_138 = pIVar11;
    while( true ) {
      pFVar7 = local_130;
      if ((param_2->DefaultParameters).ArrayNum != (int)uVar15) {
        local_186 = 0;
        `TCheckedPointerIterator<FAudioParameter,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_186);
      }
      if (pFVar18 == pFVar7) break;
      lVar16 = pFVar10->_padding_;
      local_150 = pFVar18->ParamName;
      lVar14 = (longlong)(int)pFVar10->_padding_ * 0x38 + lVar16;
      for (; lVar16 != lVar14; lVar16 = lVar16 + 0x38) {
        if (*(FName *)(lVar16 + 8) == local_150) {
          Frontend::ConvertParameterToLiteral(&local_78,pFVar18);
          if ((*(int *)(lVar16 + 0x18) == 0) || (uVar17 = 4, *(int *)(lVar16 + 0x18) != 1)) {
            uVar17 = 2;
          }
          (**(code **)((longlong)*pIVar11 + 0x98))(pIVar11,&local_118,lVar16 + 0x10,uVar17);
          if (local_100 == '\0') {
            if ((MetaSoundParameterEnableWarningOnIgnoredParameterCVar != 0) &&
               (2 < (byte)LogMetaSound._0_1_)) {
              FTopLevelAssetPath::ToString(&param_2->AssetPath,&local_a8);
              ::FName::ToString((FName *)(lVar16 + 0x10),&local_b8);
              ::FName::ToString(&local_150,&local_c8);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
              if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_c8.Data.AllocatorInstance.Data);
              }
              if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b8.Data.AllocatorInstance.Data);
              }
              pFVar10 = local_148;
              if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a8.Data.AllocatorInstance.Data);
                pFVar10 = local_148;
              }
              goto LAB_14b2ad9ab;
            }
          }
          else {
            FInputVertexInterfaceData::BindVertex(&local_180,&local_150,&local_118);
LAB_14b2ad9ab:
            if ((local_100 != '\0') && (local_118.DataRefPtr.Ptr != (IDataReference *)0x0)) {
              (**(code **)*local_118.DataRefPtr.Ptr)(local_118.DataRefPtr.Ptr,1);
            }
          }
          uVar15 = (ulonglong)local_78.Value.TypeIndex;
          if ((0xc < local_78.Value.TypeIndex) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar9)) {
            pcVar5 = (code *)swi(3);
            pFVar12 = (FInputVertexInterfaceData *)(*pcVar5)();
            return pFVar12;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar15])(&local_78);
          goto LAB_14b2ada54;
        }
      }
      if ((MetaSoundParameterEnableWarningOnIgnoredParameterCVar != 0) &&
         (2 < (byte)LogMetaSound._0_1_)) {
        FTopLevelAssetPath::ToString(&param_2->AssetPath,&local_88);
        ::FName::ToString(&local_150,&local_98);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
      }
LAB_14b2ada54:
      uVar15 = (ulonglong)local_158;
      pFVar18 = pFVar18 + 1;
    }
    iVar6 = local_180.Bindings.ArrayNum;
    uVar15 = (ulonglong)local_180.Bindings.ArrayNum;
    pFVar19 = (FInputBinding *)(local_180.Bindings.AllocatorInstance.Data + uVar15 * 0x58);
    this_00.Data = local_180.Bindings.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar15 != iVar6) {
        local_185[0] = 0;
        `TCheckedPointerIterator<Metasound::VertexDataPrivate::FInputBinding,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_185);
      }
      pTVar8 = local_128;
      if ((FInputBinding *)this_00.Data == pFVar19) break;
      bVar9 = VertexDataPrivate::FInputBinding::IsBound((FInputBinding *)this_00.Data);
      if (!bVar9) {
        pFVar13 = VertexDataPrivate::FInputBinding::GetVertex((FInputBinding *)this_00.Data);
        pcVar5 = *(code **)((longlong)*local_138 + 0x98);
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
        ::
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  (&local_60,&(pFVar13->Literal).Value);
        iVar2 = (int)pFVar13->_padding_;
        if ((iVar2 == 0) || (uVar17 = 4, iVar2 != 1)) {
          uVar17 = 2;
        }
        (*pcVar5)(local_138,&local_f8,&pFVar13->_padding_,uVar17);
        uVar15 = (ulonglong)local_60.TypeIndex;
        if ((0xc < local_60.TypeIndex) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pFVar12 = (FInputVertexInterfaceData *)(*pcVar5)();
          return pFVar12;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar15])(&local_60);
        if (((local_e0 != '\0') &&
            (FInputVertexInterfaceData::BindVertex
                       (&local_180,(FName *)&pFVar13->_padding_,&local_f8), local_e0 != '\0')) &&
           (local_f8.DataRefPtr.Ptr != (IDataReference *)0x0)) {
          (**(code **)*local_f8.DataRefPtr.Ptr)(local_f8.DataRefPtr.Ptr,1);
        }
      }
      uVar15 = local_180.Bindings._8_8_ & 0xffffffff;
      this_00.Data = this_00.Data + 0x58;
    }
    piVar1 = &local_128->ArrayMax;
    pFVar18 = (FAudioParameter *)(local_128->AllocatorInstance).Data;
    if (local_128->ArrayMax < 0) {
      DestructItems<FAudioParameter,int>(pFVar18,local_128->ArrayNum);
      pTVar8->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xa0,8,0,&pTVar8->AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FAudioParameter,int>(pFVar18,local_128->ArrayNum);
      pTVar8->ArrayNum = 0;
    }
    __return_storage_ptr__ = local_120;
    local_120->bIsVertexInterfaceFrozen = local_180.bIsVertexInterfaceFrozen;
    (local_120->Bindings).AllocatorInstance.Data = local_180.Bindings.AllocatorInstance.Data;
    (local_120->Bindings).ArrayNum = local_180.Bindings.ArrayNum;
    (local_120->Bindings).ArrayMax = local_180.Bindings.ArrayMax;
    (local_120->SubInterfaces).AllocatorInstance.Data =
         local_180.SubInterfaces.AllocatorInstance.Data;
    (local_120->SubInterfaces).ArrayNum = local_180.SubInterfaces.ArrayNum;
    (local_120->SubInterfaces).ArrayMax = local_180.SubInterfaces.ArrayMax;
    local_180.SubInterfaces.ArrayNum = 0;
    local_180.SubInterfaces.ArrayMax = 0;
    local_180.Bindings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_180.Bindings.ArrayNum = 0;
    local_180.Bindings.ArrayMax = 0;
    local_180.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>((FSubInterfaceLayout *)0x0,0);
    if (local_180.SubInterfaces.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::VertexDataPrivate::FInputBinding,int>
              ((FInputBinding *)local_180.Bindings.AllocatorInstance.Data,
               local_180.Bindings.ArrayNum);
    if ((FInputBinding *)local_180.Bindings.AllocatorInstance.Data != (FInputBinding *)0x0) {
      FMemory::Free(local_180.Bindings.AllocatorInstance.Data);
    }
    if (bVar20) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar4) {
      FGenericPlatformMisc::EndNamedEvent();
    }
  }
  return __return_storage_ptr__;
}

// FindOutputAudioBuffers @ 14b2b0990

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_> * __cdecl
Metasound::GeneratorBuilder::FindOutputAudioBuffers
          (TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,TArray<FName,TSizedDefaultAllocator<32>_> *param_1,
          FVertexInterfaceData *param_2,FOperatorSettings *param_3,FTopLevelAssetPath *param_4)

{
  FName *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FOutputBinding *this;
  TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_> *pTVar6
  ;
  FScriptContainerElement *pFVar7;
  FName *this_00;
  undefined1 local_res8 [8];
  FString local_88;
  FString local_78;
  FString local_68;
  undefined1 local_58 [32];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  this_00 = (FName *)(param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = this_00 + iVar2;
  do {
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (this_00 == pFVar1) {
      return __return_storage_ptr__;
    }
    bVar4 = FOutputVertexInterfaceData::IsVertexBound(&param_2->OutputVertexInterfaceData,this_00);
    if ((!bVar4) && (2 < (byte)LogMetaSound._0_1_)) {
      ::FName::ToString(this_00,&local_78);
      FTopLevelAssetPath::ToString(param_4,&local_88);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    this = FOutputVertexInterfaceData::Find(&param_2->OutputVertexInterfaceData,this_00);
    if (this == (FOutputBinding *)0x0) {
      if (2 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString(this_00,&local_68);
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)
                   &`public:_class_Metasound::TDataReadReference<Metasound::FAudioBuffer>___cdecl_Metasound::FOutputVertexInterfaceData::GetOrConstructDataReadReference<Metasound::FAudioBuffer,Metasound::FOperatorSettings_const&___ptr64>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
      }
LAB_14b2b0b01:
      TDataReadReference<Metasound::FAudioBuffer>::CreateNew<Metasound::FOperatorSettings_const_&>
                ((TDataReadReference<Metasound::FAudioBuffer> *)local_58,param_3);
    }
    else {
      if ((this->Data).bIsSet == false) goto LAB_14b2b0b01;
      VertexDataPrivate::FOutputBinding::
      GetDataReferenceAs<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
                (this,(TDataReadReference<Metasound::FAudioBuffer> *)local_58);
    }
    pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar7 <= (FScriptContainerElement *)local_58) &&
        ((FScriptContainerElement *)local_58 <
         pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x20)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
                *)(*pcVar3)();
      return pTVar6;
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x20;
    *(undefined ***)pFVar7 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
    *(undefined8 *)(pFVar7 + 8) = local_58._8_8_;
    *(undefined8 *)(pFVar7 + 0x10) = local_58._16_8_;
    if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
    }
    *(undefined ***)pFVar7 = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_58._16_8_);
    this_00 = this_00 + 1;
  } while( true );
}

// GetHitRatio @ 14b2b1130

double __cdecl Metasound::OperatorPoolPrivate::GetHitRatio(void)

{
  double dVar1;
  
  dVar1 = 0.0;
  if (CacheAttemptCount != (atomic<unsigned_int>)0x0) {
    dVar1 = (double)(uint)CacheHitCount / (double)(uint)CacheAttemptCount;
  }
  return dVar1;
}

// HasOneShotInterface @ 14b2b1740

bool __cdecl Metasound::MetasoundGeneratorPrivate::HasOneShotInterface(FVertexInterface *param_1)

{
  FOutputVertexInterface *pFVar1;
  longlong lVar2;
  longlong lVar3;
  
  pFVar1 = FVertexInterface::GetOutputInterface(param_1);
  lVar2 = pFVar1->_padding_;
  lVar3 = (longlong)(int)pFVar1->_padding_ * 0x20 + lVar2;
  for (; lVar2 != lVar3; lVar2 = lVar2 + 0x20) {
    if (*(FName *)(lVar2 + 8) == Frontend::SourceOneShotInterface::Outputs::OnFinished)
    goto LAB_14b2b1774;
  }
  lVar2 = 0;
LAB_14b2b1774:
  return lVar2 != 0;
}

// InitializeParameterSetters @ 14b2b2030

void __cdecl
Metasound::GeneratorBuilder::InitializeParameterSetters
          (FInputVertexInterfaceData *param_1,
          TSortedMap<FName,Metasound::MetasoundGeneratorPrivate::FParameterSetter,TSizedDefaultAllocator<32>,FNameFastLess>
          *param_2,TMap<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter,0>_>
                   *param_3)

{
  int iVar1;
  EDataReferenceAccessType EVar2;
  IDataTypeRegistry *pIVar3;
  FAnyDataReference *pFVar4;
  FInputDataVertex *pFVar5;
  FInputBinding *this;
  FInputBinding *pFVar6;
  undefined1 local_res8 [8];
  
  pIVar3 = Frontend::IDataTypeRegistry::Get();
  iVar1 = (param_1->Bindings).ArrayNum;
  this = (FInputBinding *)(param_1->Bindings).AllocatorInstance.Data;
  pFVar6 = this + iVar1;
  while( true ) {
    if ((param_1->Bindings).ArrayNum != iVar1) {
      `TCheckedPointerIterator<Metasound::VertexDataPrivate::FInputBinding,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (this == pFVar6) break;
    EVar2 = VertexDataPrivate::FInputBinding::GetAccessType(this);
    if (EVar2 == Write) {
      pFVar4 = VertexDataPrivate::FInputBinding::GetDataReference(this);
      if (pFVar4 != (FAnyDataReference *)0x0) {
        pFVar5 = VertexDataPrivate::FInputBinding::GetVertex(this);
        AddParameterSetter(pIVar3,pFVar5,pFVar4,param_2,param_3);
      }
    }
    this = this + 1;
  }
  return;
}

// IsAudioOutputVertex @ 14b2b2310

bool __cdecl Metasound::MetasoundGeneratorPrivate::IsAudioOutputVertex(FName *param_1)

{
  FName FVar1;
  bool bVar2;
  FName *pFVar3;
  FName FVar4;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FName local_28;
  FName local_20;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  Audio::FParameterPath::SplitName(*param_1,&local_res10,&local_res18);
  FVar1 = local_res10;
  if (((longlong)ParameterNameComponentUE.Either.AnsiLiteral < 0) || (local_res10 != (FName)0x0)) {
    FVar4 = FLazyName::Resolve(&ParameterNameComponentUE);
    bVar2 = FVar1 == *(FName *)FVar4;
  }
  else if (ParameterNameComponentUE.LiteralType == AnsiLiteral) {
    bVar2 = ::FName::Equals((FName)0x0,ParameterNameComponentUE.Either.AnsiLiteral);
  }
  else if (ParameterNameComponentUE.LiteralType == Utf8Literal) {
    pFVar3 = ::FName::FName(&local_res20,ParameterNameComponentUE.Either.Utf8Literal);
    bVar2 = *pFVar3 == (FName)0x0;
  }
  else {
    bVar2 = ::FName::Equals((FName)0x0,ParameterNameComponentUE.Either.WideLiteral);
  }
  if (bVar2 == false) {
    return false;
  }
  local_28.ComparisonIndex.Value = 0;
  local_28.Number = 0;
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  Audio::FParameterPath::SplitName(local_res18,&local_28,&local_res20);
  FVar1 = local_res20;
  if (((longlong)ParameterNameComponentOutputFormat.Either.AnsiLiteral < 0) ||
     (local_res20 != (FName)0x0)) {
    FVar4 = FLazyName::Resolve(&ParameterNameComponentOutputFormat);
    return FVar1 == *(FName *)FVar4;
  }
  if (ParameterNameComponentOutputFormat.LiteralType == AnsiLiteral) {
    bVar2 = ::FName::Equals((FName)0x0,ParameterNameComponentOutputFormat.Either.AnsiLiteral);
    return bVar2;
  }
  if (ParameterNameComponentOutputFormat.LiteralType != Utf8Literal) {
    bVar2 = ::FName::Equals((FName)0x0,ParameterNameComponentOutputFormat.Either.WideLiteral);
    return bVar2;
  }
  pFVar3 = ::FName::FName(&local_20,ParameterNameComponentOutputFormat.Either.Utf8Literal);
  return *pFVar3 == (FName)0x0;
}

// LogBuildErrors @ 14b2b24b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::GeneratorBuilder::LogBuildErrors(FTopLevelAssetPath *param_1,FBuildResults *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FText *this;
  FName *this_00;
  FScriptContainerElement *pFVar3;
  undefined1 local_res10 [8];
  FString local_48;
  FString local_38;
  
  pFVar3 = (param_2->Errors).AllocatorInstance.Data;
  iVar2 = (param_2->Errors).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_2->Errors).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<Metasound::IOperatorBuildError,TDefaultDelete<Metasound::IOperatorBuildError>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar3 == pFVar1) break;
    if ((*(longlong **)pFVar3 != (longlong *)0x0) && (2 < (byte)LogMetaSound._0_1_)) {
      this = (FText *)(**(code **)(**(longlong **)pFVar3 + 0x10))();
      FText::ToString(this);
      this_00 = (FName *)(**(code **)(**(longlong **)pFVar3 + 8))();
      ::FName::ToString(this_00,&local_38);
      FTopLevelAssetPath::ToString(param_1,&local_48);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// LogErrorIfIsAudioVertex @ 14b2b25e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::MetasoundGeneratorPrivate::LogErrorIfIsAudioVertex(FName *param_1,wchar_t *param_2)

{
  FName FVar1;
  bool bVar2;
  FName *pFVar3;
  FName FVar4;
  FName local_res18;
  FName local_res20;
  FName local_38;
  FName local_30;
  FString local_28;
  
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  Audio::FParameterPath::SplitName(*param_1,&local_res18,&local_res20);
  FVar1 = local_res18;
  if (((longlong)ParameterNameComponentUE.Either.AnsiLiteral < 0) || (local_res18 != (FName)0x0)) {
    FVar4 = FLazyName::Resolve(&ParameterNameComponentUE);
    bVar2 = FVar1 == *(FName *)FVar4;
  }
  else if (ParameterNameComponentUE.LiteralType == AnsiLiteral) {
    bVar2 = ::FName::Equals((FName)0x0,ParameterNameComponentUE.Either.AnsiLiteral);
  }
  else if (ParameterNameComponentUE.LiteralType == Utf8Literal) {
    pFVar3 = ::FName::FName(&local_30,ParameterNameComponentUE.Either.Utf8Literal);
    bVar2 = *pFVar3 == (FName)0x0;
  }
  else {
    bVar2 = ::FName::Equals((FName)0x0,ParameterNameComponentUE.Either.WideLiteral);
  }
  if (bVar2 != false) {
    local_30.ComparisonIndex.Value = 0;
    local_30.Number = 0;
    local_38.ComparisonIndex.Value = 0;
    local_38.Number = 0;
    Audio::FParameterPath::SplitName(local_res20,&local_30,&local_38);
    FVar1 = local_38;
    if (((longlong)ParameterNameComponentOutputFormat.Either.AnsiLiteral < 0) ||
       (local_38 != (FName)0x0)) {
      FVar4 = FLazyName::Resolve(&ParameterNameComponentOutputFormat);
      bVar2 = FVar1 == *(FName *)FVar4;
    }
    else if (ParameterNameComponentOutputFormat.LiteralType == AnsiLiteral) {
      bVar2 = ::FName::Equals((FName)0x0,ParameterNameComponentOutputFormat.Either.AnsiLiteral);
    }
    else if (ParameterNameComponentOutputFormat.LiteralType == Utf8Literal) {
      pFVar3 = ::FName::FName((FName *)&local_28,
                              ParameterNameComponentOutputFormat.Either.Utf8Literal);
      bVar2 = *pFVar3 == (FName)0x0;
    }
    else {
      bVar2 = ::FName::Equals((FName)0x0,ParameterNameComponentOutputFormat.Either.WideLiteral);
    }
    if ((bVar2 != false) && (1 < (byte)LogMetaSound._0_1_)) {
      ::FName::ToString(param_1,&local_28);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if ((FName)local_28.Data.AllocatorInstance.Data != (FName)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// LogInvalidAudioSampleValues @ 14b2b2770

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
Metasound::MetasoundGeneratorPrivate::LogInvalidAudioSampleValues
          (FTopLevelAssetPath *param_1,
          TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  float *pfVar3;
  code *pcVar4;
  longlong lVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  undefined4 uStack_8c;
  FString local_88;
  TArrayView<float_const_,int> local_78;
  FString local_68 [4];
  
  uVar6 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  if ((ConsoleVariables::bEnableMetaSoundGeneratorNonFiniteLogging) ||
     (ConsoleVariables::bEnableMetaSoundGeneratorInvalidSampleValueLogging)) {
    lVar11 = (longlong)param_2->ArrayNum;
    uVar12 = 0;
    if (0 < lVar11) {
      lVar13 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar12 < param_2->ArrayNum) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        plVar1 = *(longlong **)((param_2->AllocatorInstance).Data + lVar13 + 8);
        if ((1 < (byte)LogMetaSound._0_1_) && ((int)plVar1[2] != (int)plVar1[1])) {
          UE::Logging::Private::BasicLog<2>
                    (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                      ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        }
        lVar2 = *plVar1;
        if ((1 < (byte)LogMetaSound._0_1_) && ((int)plVar1[2] != (int)plVar1[1])) {
          UE::Logging::Private::BasicLog<2>
                    (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                      LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        }
        lVar5 = plVar1[1];
        lVar10 = 0;
        if (0 < (longlong)(int)lVar5) {
          do {
            iVar9 = _finite((double)*(float *)(lVar2 + lVar10 * 4));
            if (iVar9 == 0) {
              if (1 < (byte)LogMetaSound._0_1_) {
                FTopLevelAssetPath::ToString(param_1,&local_88);
                UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
                if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_88.Data.AllocatorInstance.Data);
                }
              }
              break;
            }
            lVar10 = lVar10 + 1;
          } while (lVar10 < (int)lVar5);
        }
        if (ConsoleVariables::bEnableMetaSoundGeneratorInvalidSampleValueLogging != false) {
          fVar15 = (float)((uint)ConsoleVariables::MetasoundGeneratorSampleValueThreshold & uVar6);
          if ((1 < (byte)LogMetaSound._0_1_) && ((int)plVar1[2] != (int)plVar1[1])) {
            UE::Logging::Private::BasicLog<2>
                      ((FStaticBasicLogRecord *)
                       &`public:___cdecl_Metasound::FAudioBuffer::operator_class_TArrayView<float_const_,int>(void)const___ptr64'
                        ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
          }
          pfVar3 = (float *)*plVar1;
          lVar2 = plVar1[1];
          if (((int)lVar2 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_78._12_4_ = uStack_8c;
          local_78.ArrayNum = (int)lVar2;
          local_78.DataPtr = pfVar3;
          fVar14 = Audio::ArrayMaxAbsValue(&local_78);
          if ((fVar15 < fVar14) && (2 < (byte)LogMetaSound._0_1_)) {
            FTopLevelAssetPath::ToString(param_1,local_68);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
            if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
            }
          }
        }
        uVar12 = uVar12 + 1;
        lVar13 = lVar13 + 0x20;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
  }
  return;
}

// RecordOperatorStat @ 14b2b4f70

void __cdecl
Metasound::Engine::RecordOperatorStat
          (FTopLevelAssetPath *param_1,int param_2,int param_3,ECsvCustomStatOp param_4)

{
  UPackage *pUVar1;
  FName local_18 [2];
  
  pUVar1 = GetTransientPackage();
  if ((pUVar1 == (UPackage *)0x0) || (param_1->PackageName != (FName)pUVar1->_padding_)) {
    FCsvProfiler::Get();
    local_18[0] = param_1->PackageName;
  }
  else {
    FCsvProfiler::Get();
    local_18[0] = param_1->AssetName;
  }
  FCsvProfiler::RecordCustomStat(local_18,param_2,param_3,param_4);
  return;
}

// RecordOperatorStat @ 14b2b4ff0

void __cdecl
Metasound::Engine::RecordOperatorStat
          (FTopLevelAssetPath *param_1,int param_2,float param_3,ECsvCustomStatOp param_4)

{
  UPackage *pUVar1;
  FName local_28 [4];
  
  pUVar1 = GetTransientPackage();
  if ((pUVar1 == (UPackage *)0x0) || (param_1->PackageName != (FName)pUVar1->_padding_)) {
    FCsvProfiler::Get();
    local_28[0] = param_1->PackageName;
  }
  else {
    FCsvProfiler::Get();
    local_28[0] = param_1->AssetName;
  }
  FCsvProfiler::RecordCustomStat(local_28,param_2,param_3,param_4);
  return;
}

// RecordOperatorStat @ 14b2b5070

void __cdecl
Metasound::Engine::RecordOperatorStat
          (FTopLevelAssetPath *param_1,int param_2,double param_3,ECsvCustomStatOp param_4)

{
  UPackage *pUVar1;
  FName local_28 [4];
  
  pUVar1 = GetTransientPackage();
  if ((pUVar1 == (UPackage *)0x0) || (param_1->PackageName != (FName)pUVar1->_padding_)) {
    FCsvProfiler::Get();
    local_28[0] = param_1->PackageName;
  }
  else {
    FCsvProfiler::Get();
    local_28[0] = param_1->AssetName;
  }
  FCsvProfiler::RecordCustomStat(local_28,param_2,param_3,param_4);
  return;
}

// ResetGraphOperatorInputs @ 14b2b7550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Metasound::GeneratorBuilder::ResetGraphOperatorInputs
          (FOperatorSettings *param_1,TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *param_2,
          FInputVertexInterfaceData *param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  char cVar3;
  FOperatorSettings *pFVar4;
  bool bVar5;
  FAnyDataReference *pFVar6;
  undefined8 uVar7;
  code *pcVar8;
  FInputDataVertex *pFVar9;
  FAudioParameter *pFVar10;
  FInputBinding *this;
  IDataTypeRegistry *pIVar11;
  ulonglong uVar12;
  FAudioParameter *pFVar13;
  FInputBinding *pFVar14;
  undefined1 auStack_a8 [32];
  char local_88;
  char local_87;
  undefined1 local_86 [6];
  IDataTypeRegistry *local_80;
  FOperatorSettings *local_78;
  FLiteral local_70;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_78 = param_1;
  if (GCycleStatsShouldEmitNamedEvents < 1) {
    local_87 = '\0';
  }
  else {
    local_87 = '\x01';
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"GeneratorBuilder::ResetGraphOperatorInputs");
  }
  if (CpuChannel->Enabled < 0) {
    local_88 = '\0';
  }
  else {
    local_88 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId368,"GeneratorBuilder::ResetGraphOperatorInputs",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGenerator\\Private\\MetasoundGeneratorBuilder.cpp"
               ,0x170);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId368);
  }
  local_80 = Frontend::IDataTypeRegistry::Get();
  pFVar4 = local_78;
  iVar1 = (param_3->Bindings).ArrayNum;
  this = (FInputBinding *)(param_3->Bindings).AllocatorInstance.Data;
  pFVar14 = this + iVar1;
  pIVar11 = local_80;
LAB_14b2b7630:
  do {
    if ((param_3->Bindings).ArrayNum != iVar1) {
      local_86[0] = 0;
      `TCheckedPointerIterator<Metasound::VertexDataPrivate::FInputBinding,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_86);
    }
    cVar3 = local_87;
    if (this == pFVar14) {
      if (local_88 != '\0') {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (cVar3 != '\0') {
        FGenericPlatformMisc::EndNamedEvent();
      }
      DestructItems<FAudioParameter,int>
                ((FAudioParameter *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      pFVar2 = (param_2->AllocatorInstance).Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      return;
    }
    pFVar6 = VertexDataPrivate::FInputBinding::GetDataReference(this);
    if ((pFVar6 != (FAnyDataReference *)0x0) && (pFVar6->AccessType == Write)) {
      pcVar8 = *(code **)((longlong)*pIVar11 + 0xb0);
      uVar7 = (**(code **)(pFVar6->_padding_ + 8))(pFVar6);
      pcVar8 = (code *)(*pcVar8)(local_80,uVar7);
      pIVar11 = local_80;
      if (pcVar8 != (code *)0x0) {
        pFVar9 = VertexDataPrivate::FInputBinding::GetVertex(this);
        pFVar10 = (FAudioParameter *)(param_2->AllocatorInstance).Data;
        pFVar13 = pFVar10 + param_2->ArrayNum;
        if (pFVar10 != pFVar13) {
          do {
            if ((FName)pFVar9->_padding_ == pFVar10->ParamName) {
              Frontend::ConvertParameterToLiteral(&local_70,pFVar10);
              (*pcVar8)(pFVar4,&local_70,pFVar6);
              uVar12 = (ulonglong)local_70.Value.TypeIndex;
              if ((0xc < local_70.Value.TypeIndex) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                     ,0xd4,L""), bVar5)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[uVar12])(&local_70);
              this = this + 1;
              pIVar11 = local_80;
              goto LAB_14b2b7630;
            }
            pFVar10 = pFVar10 + 1;
          } while (pFVar10 != pFVar13);
        }
        pFVar9 = VertexDataPrivate::FInputBinding::GetVertex(this);
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
        ::
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  (&local_58,&(pFVar9->Literal).Value);
        (*pcVar8)(pFVar4,&local_58,pFVar6);
        uVar12 = (ulonglong)local_58.TypeIndex;
        if ((0xc < local_58.TypeIndex) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar5)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar12])(&local_58);
        pIVar11 = local_80;
      }
    }
    this = this + 1;
  } while( true );
}

// IMPLEMENT_MODULE_MetasoundGenerator @ 14b2ba990

void __cdecl IMPLEMENT_MODULE_MetasoundGenerator(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CVarCacheMissCsvStatsEnabled'' @ 150431860

void __cdecl
Metasound::Engine::Private::_dynamic_atexit_destructor_for__CVarCacheMissCsvStatsEnabled__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCacheMissCsvStatsEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMetaSoundEnableAsyncGeneratorBuilder'' @ 150431880

void __cdecl _dynamic_atexit_destructor_for__CVarMetaSoundEnableAsyncGeneratorBuilder__(void)

{
  CVarMetaSoundEnableAsyncGeneratorBuilder._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarMetaSoundEnableAsyncGeneratorBuilder);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMetaSoundEnableExperimentalAutoCachingForAllOperators'' @ 1504318a0

void __cdecl
_dynamic_atexit_destructor_for__CVarMetaSoundEnableExperimentalAutoCachingForAllOperators__(void)

{
  CVarMetaSoundEnableExperimentalAutoCachingForAllOperators._0_8_ =
       &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarMetaSoundEnableExperimentalAutoCachingForAllOperators);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMetaSoundEnableExperimentalAutoCachingForOneShotOperators'' @ 1504318c0

void __cdecl
_dynamic_atexit_destructor_for__CVarMetaSoundEnableExperimentalAutoCachingForOneShotOperators__
          (void)

{
  CVarMetaSoundEnableExperimentalAutoCachingForOneShotOperators._0_8_ =
       &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarMetaSoundEnableExperimentalAutoCachingForOneShotOperators);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMetaSoundEnableGeneratorInvalidSampleValueLogging'' @ 1504318e0

void __cdecl
_dynamic_atexit_destructor_for__CVarMetaSoundEnableGeneratorInvalidSampleValueLogging__(void)

{
  CVarMetaSoundEnableGeneratorInvalidSampleValueLogging._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarMetaSoundEnableGeneratorInvalidSampleValueLogging);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMetaSoundEnableGeneratorNonFiniteLogging'' @ 150431900

void __cdecl _dynamic_atexit_destructor_for__CVarMetaSoundEnableGeneratorNonFiniteLogging__(void)

{
  CVarMetaSoundEnableGeneratorNonFiniteLogging._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarMetaSoundEnableGeneratorNonFiniteLogging);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMetaSoundGeneratorSampleValueThrehshold'' @ 150431920

void __cdecl _dynamic_atexit_destructor_for__CVarMetaSoundGeneratorSampleValueThrehshold__(void)

{
  CVarMetaSoundGeneratorSampleValueThrehshold._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarMetaSoundGeneratorSampleValueThrehshold);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMetasoundOperatorPoolCsvStatsEnabled'' @ 150431940

void __cdecl
Metasound::Engine::Private::
_dynamic_atexit_destructor_for__CVarMetasoundOperatorPoolCsvStatsEnabled__(void)

{
  CVarMetasoundOperatorPoolCsvStatsEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarMetasoundOperatorPoolCsvStatsEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMetasoundPoolHitRateWindowSeconds'' @ 150431960

void __cdecl
Metasound::OperatorPoolPrivate::
_dynamic_atexit_destructor_for__CVarMetasoundPoolHitRateWindowSeconds__(void)

{
  CVarMetasoundPoolHitRateWindowSeconds._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarMetasoundPoolHitRateWindowSeconds);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMetasoundPoolSyncGraphRetrieval'' @ 150431980

void __cdecl
Metasound::OperatorPoolPrivate::
_dynamic_atexit_destructor_for__CVarMetasoundPoolSyncGraphRetrieval__(void)

{
  CVarMetasoundPoolSyncGraphRetrieval._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarMetasoundPoolSyncGraphRetrieval);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRecordActiveOperatorsToCsv'' @ 1504319a0

void __cdecl _dynamic_atexit_destructor_for__CVarRecordActiveOperatorsToCsv__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRecordActiveOperatorsToCsv);
  return;
}

// `dynamic_atexit_destructor_for_'CommandMetaSoundExperimentalOperatorPoolSetMaxNumOperators'' @ 1504319c0

void __cdecl
_dynamic_atexit_destructor_for__CommandMetaSoundExperimentalOperatorPoolSetMaxNumOperators__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CommandMetaSoundExperimentalOperatorPoolSetMaxNumOperators);
  return;
}

// `dynamic_atexit_destructor_for_'InputDataMetadata'' @ 1504319e0

void __cdecl Metasound::VariableNames::_dynamic_atexit_destructor_for__InputDataMetadata__(void)

{
  if (InputDataMetadata.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*InputDataMetadata.DisplayName.TextData.Reference + 0x10))();
  }
  if (InputDataMetadata.Description.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150431a09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*InputDataMetadata.Description.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'InputInitialArrayDisplayName'' @ 150431a20

void __cdecl
Metasound::ArrayNodeVertexNames::_dynamic_atexit_destructor_for__InputInitialArrayDisplayName__
          (void)

{
  if (InputInitialArrayDisplayName.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150431a2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*InputInitialArrayDisplayName.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'InputInitialArrayTooltip'' @ 150431a40

void __cdecl
Metasound::ArrayNodeVertexNames::_dynamic_atexit_destructor_for__InputInitialArrayTooltip__(void)

{
  if (InputInitialArrayTooltip.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150431a4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*InputInitialArrayTooltip.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'InputVariableMetadata'' @ 150431a60

void __cdecl Metasound::VariableNames::_dynamic_atexit_destructor_for__InputVariableMetadata__(void)

{
  if (InputVariableMetadata.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*InputVariableMetadata.DisplayName.TextData.Reference + 0x10))();
  }
  if (InputVariableMetadata.Description.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150431a89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*InputVariableMetadata.Description.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'LogMetasoundGenerator'' @ 150431aa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogMetasoundGenerator__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogMetasoundGenerator);
  return;
}

// `dynamic_atexit_destructor_for_'OutputDataMetadata'' @ 150431ac0

void __cdecl Metasound::VariableNames::_dynamic_atexit_destructor_for__OutputDataMetadata__(void)

{
  if (OutputDataMetadata.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*OutputDataMetadata.DisplayName.TextData.Reference + 0x10))();
  }
  if (OutputDataMetadata.Description.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150431ae9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*OutputDataMetadata.Description.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'OutputVariableMetadata'' @ 150431b00

void __cdecl
Metasound::VariableNames::_dynamic_atexit_destructor_for__OutputVariableMetadata__(void)

{
  if (OutputVariableMetadata.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*OutputVariableMetadata.DisplayName.TextData.Reference + 0x10))();
  }
  if (OutputVariableMetadata.Description.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150431b29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*OutputVariableMetadata.Description.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'TypeString'' @ 150431b40

void __cdecl
`Metasound::GetMetasoundDataTypeString<Metasound::FTrigger>'::__l2::
_dynamic_atexit_destructor_for__TypeString__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::FTrigger>(void)'
               ::__l2::TypeString.Data.AllocatorInstance.Data;
  if (`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::FTrigger>(void)'
      ::__l2::TypeString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`class_FString_const&___ptr64___cdecl_Metasound::GetMetasoundDataTypeString<Metasound::FTrigger>(void)'
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

// `dynamic_atexit_destructor_for_'_GCsvCategory_MetaSound_ActiveOperators'' @ 150431b60

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_MetaSound_ActiveOperators__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_MetaSound_ActiveOperators.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_MetaSound_ActiveOperators.Name.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_MetaSound_ActiveOperators.Name.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'_GCsvCategory_MetaSound_AvailableCachedOperators'' @ 150431b80

void __cdecl
Metasound::Engine::
_dynamic_atexit_destructor_for___GCsvCategory_MetaSound_AvailableCachedOperators__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_MetaSound_AvailableCachedOperators.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_MetaSound_AvailableCachedOperators.Name.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_MetaSound_AvailableCachedOperators.Name.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'_GCsvCategory_MetaSound_OperatorCacheUtilization'' @ 150431ba0

void __cdecl
Metasound::Engine::
_dynamic_atexit_destructor_for___GCsvCategory_MetaSound_OperatorCacheUtilization__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_MetaSound_OperatorCacheUtilization.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_MetaSound_OperatorCacheUtilization.Name.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_MetaSound_OperatorCacheUtilization.Name.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'_GCsvCategory_MetaSound_OperatorPool'' @ 150431bc0

void __cdecl Metasound::_dynamic_atexit_destructor_for___GCsvCategory_MetaSound_OperatorPool__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_MetaSound_OperatorPool.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_MetaSound_OperatorPool.Name.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_MetaSound_OperatorPool.Name.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'_GCsvCategory_Metasound_OperatorCacheMiss'' @ 150431be0

void __cdecl
Metasound::Engine::_dynamic_atexit_destructor_for___GCsvCategory_Metasound_OperatorCacheMiss__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_Metasound_OperatorCacheMiss.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_Metasound_OperatorCacheMiss.Name.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_Metasound_OperatorCacheMiss.Name.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'__GTraceCounterMetaSound_OperatorPool_HitRatio'' @ 150431c00

void __cdecl
Metasound::_dynamic_atexit_destructor_for____GTraceCounterMetaSound_OperatorPool_HitRatio__(void)

{
  if ((__GTraceCounterMetaSound_OperatorPool_HitRatio.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterMetaSound_OperatorPool_HitRatio.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterMetaSound_OperatorPool_NumOperators'' @ 150431c20

void __cdecl
Metasound::_dynamic_atexit_destructor_for____GTraceCounterMetaSound_OperatorPool_NumOperators__
          (void)

{
  if ((__GTraceCounterMetaSound_OperatorPool_NumOperators.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterMetaSound_OperatorPool_NumOperators.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterMetaSound_OperatorPool_WindowedHitRatio'' @ 150431c40

void __cdecl
Metasound::_dynamic_atexit_destructor_for____GTraceCounterMetaSound_OperatorPool_WindowedHitRatio__
          (void)

{
  if ((__GTraceCounterMetaSound_OperatorPool_WindowedHitRatio.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName
              (__GTraceCounterMetaSound_OperatorPool_WindowedHitRatio.CounterName);
    return;
  }
  return;
}

